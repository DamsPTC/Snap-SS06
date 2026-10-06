/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b19a8ec; end: 10b19a917;  */

undefined8 * FUN_10b19a8ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc2768;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b19a918; end: 10b19ab87;  */

void FUN_10b19a918(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long extraout_x9;
  int extraout_w11;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x23;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_60 = 0;
  lStack_58 = 0;
  puVar3 = (undefined8 *)(param_1 + 0x80);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_10b1225b0(&stack0xffffffffffffffb0,param_1 + 0xb0,puVar3);
  func_0x00010b19ad14(&uStack_60);
  func_0x00010b19ac2c();
  func_0x00010b122d08(puVar3);
  *(undefined8 *)(param_1 + 0x90) = uStack_60;
  *(long *)(param_1 + 0x98) = lStack_58;
  if (lStack_58 != 0) {
    plVar4 = (long *)(lStack_58 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10b122ec4(&stack0xffffffffffffffb0);
  func_0x00010b19ac2c();
  func_0x00010b122d08(param_1 + 0x90);
  func_0x00010b19ac24();
  FUN_10b19a6e8(param_1 + 0x38);
  func_0x00010b19ad90();
  func_0x00010b12b9f4(param_1 + 0xc0);
  func_0x00010b122d08(param_1 + 0xb0);
  FUN_10b19a394(param_1 + 0x50);
  func_0x00010b19acf0();
  if ((bool)in_ZR) {
    __ZNSt3__112__get_sp_mutEPKv(param_1 + 0x18);
    __ZNSt3__18__sp_mut4lockEv();
    func_0x00010b19acd8();
    __ZNSt3__15mutex4lockEv(unaff_x23 + 8);
    *unaff_x23 = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(unaff_x23 + 1) = 1;
    plVar4 = (long *)unaff_x23[0x11];
    func_0x00010b19ad5c();
    if (plVar4 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(unaff_x23 + 2);
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&stack0xffffffffffffffb0);
      func_0x00010b19aca8();
    }
    if (param_1 + 0x50 != 0) {
      do {
        func_0x00010b19abd4();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b19ac04();
        func_0x00010b19aca0();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&stack0xffffffffffffffb0,param_1 + 0x38);
    FUN_10b19a580(param_1 + 0x10,&stack0xffffffffffffffb0);
    __ZNSt13exception_ptrD1Ev(&stack0xffffffffffffffb0);
  }
  FUN_10b19a660(param_1 + 0x10);
  func_0x00010b19ad4c();
  return;
}



/* Entry: 10b19ab88; end: 10b19abc3;  */

void FUN_10b19ab88(long param_1)

{
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    func_0x00010b19ad68();
    func_0x00010b122d08(param_1 + 0xb0);
    func_0x00010b19ad1c();
  }
  func_0x00010b19ad3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b19abc4; end: 10b19ada3;  */

void FUN_10b19abc4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010b19abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 0x10))();
  return;
}



/* Entry: 10b19ada4; end: 10b19ae07;  */

undefined * FUN_10b19ada4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  
  if (param_2 != 0) {
    puVar1 = &UNK_10f332706;
    func_0x000107c2793c(&UNK_10f332706);
    func_0x000107c3173c(param_1);
    return puVar1;
  }
  puVar1 = &DAT_10f381872;
  func_0x00010002b82c(param_1,&DAT_10f381872);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 10b19ae08; end: 10b19af3f;  */

void FUN_10b19ae08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b1aa568();
  func_0x00010b19ae74(param_1 + 0x4a0);
  *(undefined1 *)(unaff_x19 + 0x600) = 1;
  iVar1 = *(int *)(param_3 + 0x18);
  if ((iVar1 == 1) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) {
    FUN_10b20a8d4(unaff_x19 + 0x5d0,*unaff_x20,unaff_x20[1]);
    iVar1 = *(int *)(param_3 + 0x18);
  }
  if ((iVar1 == 0) && (*unaff_x20 == 0)) {
    *(long *)(unaff_x19 + 0x608) = unaff_x20[1];
  }
  return;
}



/* Entry: 10b19af40; end: 10b19af83;  */

void FUN_10b19af40(void)

{
  long unaff_x19;
  
  func_0x00010b1aa544();
  while (*(long *)(unaff_x19 + 0x5e0) != 0) {
    FUN_10b19b07c();
  }
  func_0x00010b1aa478();
  return;
}



/* Entry: 10b19af84; end: 10b19b07b;  */

void FUN_10b19af84(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined ***pppuVar6;
  long **pplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code **ppcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar16;
  long *extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong uVar18;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  long *plVar19;
  long *plVar20;
  int extraout_w12;
  int extraout_w12_00;
  long *plVar21;
  undefined8 uVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [16];
  long lStack_450;
  long lStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  char cStack_3f8;
  code *pcStack_3f0;
  code *pcStack_3e8;
  long *plStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  long **pplStack_350;
  long lStack_348;
  undefined1 auStack_330 [80];
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined **ppuStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  code **ppcStack_240;
  undefined8 *puStack_238;
  long **pplStack_230;
  ulong uStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [40];
  undefined1 auStack_1e0 [88];
  code **ppcStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  long *plStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_d8;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  code *apcStack_60 [5];
  undefined8 uStack_38;
  
  puVar11 = auStack_90;
  lVar14 = param_2;
  func_0x00010b1aa2f0();
  *param_1 = lVar14 + 0x18;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_78 = 0;
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_68 = 1;
  apcStack_60[0] = *(code **)(param_2 + 0x98);
  ppcVar13 = apcStack_60;
  plVar21 = param_1;
  lStack_70 = lVar14;
  FUN_10b1a22b8();
  if (((ulong)plVar21 & 1) == 0) {
    puVar9 = &uStack_78;
    func_0x00010895e074();
    in_ZR = puVar9 == *(undefined8 **)(param_2 + 0x98);
    if ((long)*(undefined8 **)(param_2 + 0x98) <= (long)puVar9) {
      uVar22 = *(undefined8 *)(param_2 + 0xc0);
      func_0x00010b1aa740();
      func_0x00010b1aa5a4(auStack_90,apcStack_60);
      ppcVar13 = (code **)0xc3;
      func_0x00010b1aa470(uVar22);
      func_0x00010b1aa754();
      func_0x00010b1aa35c();
      param_4 = puVar11;
    }
    func_0x00010b1a2304();
  }
  func_0x00010b1aa28c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aa754();
  func_0x00010b1aa35c();
  plVar21 = param_1;
  FUN_10b122f98(param_1);
  func_0x00010b1aa424();
  func_0x00010b1aa2b8();
  ppcStack_240 = ppcVar13;
  puStack_238 = param_4;
  uStack_d8 = extraout_x8_00;
  FUN_10b1a08bc(&plStack_258,plVar21 + 0x94,&ppcStack_240);
  for (plVar21 = plStack_258;
      (plVar16 = plStack_250, plVar21 != plStack_250 &&
      (plVar16 = plVar21, (char)plVar21[4] == '\x01')); plVar21 = plVar21 + 0x10) {
  }
  plVar21 = plStack_258;
  if (plStack_258 != plStack_250) {
    do {
      plVar19 = plVar21 + 0x10;
      plVar20 = plStack_250;
      if (plVar19 == plStack_250) break;
      plVar1 = plVar21 + 1;
      plVar20 = plVar21;
      plVar21 = plVar19;
    } while (*plVar1 == *plVar19);
    if (((code **)*plStack_258 == ppcStack_240) &&
       (plVar21 = plStack_258,
       (plVar20 == plStack_250 && (undefined8 *)plStack_250[-0xf] == puStack_238) &&
       plVar16 == plStack_250)) {
      do {
        if (plVar21 == plStack_250) {
          lVar14 = param_1[0x18];
          FUN_10b126f8c(&pplStack_230,0x10005);
          FUN_10b12983c(auStack_208,(int)param_1[0x6e]);
          func_0x00010b12aca4(auStack_1e0,*(undefined4 *)((long)param_1 + 0x374));
          func_0x00010b120648(auStack_330,&pplStack_230,3);
          uVar15 = (long)puStack_238 - (long)ppcStack_240;
          FUN_10b11ef50(lVar14,0xc0,auStack_330);
          FUN_10b120998(auStack_330);
          lVar14 = 0x60;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)&pplStack_230 + lVar14);
            lVar14 = lVar14 + -0x28;
          } while (lVar14 != -0x18);
          puStack_268 = (undefined8 *)0x0;
          uStack_260 = 0;
          plStack_270 = (long *)0x0;
          pplStack_230 = &plStack_270;
          uStack_228 = uStack_228 & 0xffffffffffffff00;
          if ((long)plStack_250 - (long)plStack_258 != 0) {
            lVar14 = (long)plStack_250 - (long)plStack_258 >> 7;
            FUN_10b17d690(&plStack_270,lVar14);
            puVar11 = puStack_268 + lVar14 * 2;
            puVar9 = puStack_268;
            for (lVar14 = lVar14 << 4; puStack_268 = puVar11, lVar14 != 0; lVar14 = lVar14 + -0x10)
            {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9 = puVar9 + 2;
            }
          }
          uStack_228 = CONCAT71(uStack_228._1_7_,1);
          func_0x00010b17d838(&pplStack_230);
          plVar16 = plStack_270;
          for (plVar21 = plStack_258; uVar5 = plVar21 == plStack_250, !(bool)uVar5;
              plVar21 = plVar21 + 0x10) {
            uStack_228 = plVar21[3];
            pplStack_230 = (long **)plVar21[2];
            if (plVar21[3] != 0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10 != 0);
            }
            func_0x0001054918e8(plVar16,&pplStack_230);
            func_0x000107c27d78(&pplStack_230);
            plVar16 = plVar16 + 2;
          }
          ppuStack_298 = &PTR_DAT_110ccaac8;
          uStack_290 = 0;
          uStack_278 = 0;
          lStack_288 = (long)puStack_238 - (long)ppcStack_240;
          pppuVar6 = &ppuStack_298;
          FUN_10b1865ac();
          puVar11 = puStack_238;
          ppcVar13 = ppcStack_240;
          pppuVar6[2] = ppcStack_240;
          lVar14 = param_1[0x6f];
          FUN_10b19ada4(&pplStack_350,ppcVar13,puVar11);
          FUN_10b2026a0(&pplStack_230,lVar14,&pplStack_350);
          puStack_368 = puStack_268;
          plStack_370 = plStack_270;
          uStack_360 = uStack_260;
          puStack_268 = (undefined8 *)0x0;
          uStack_260 = 0;
          plStack_270 = (long *)0x0;
          FUN_10b186708(&pcStack_138,&ppuStack_298);
          FUN_10b17d5c4(auStack_330,&pplStack_230);
          puStack_2d8 = puStack_368;
          plStack_2e0 = plStack_370;
          uStack_2d0 = uStack_360;
          puStack_368 = (undefined8 *)0x0;
          uStack_360 = 0;
          plStack_370 = (long *)0x0;
          FUN_10b17d8dc(auStack_2c8,&pcStack_138);
          FUN_10b17d950(&pcStack_138);
          FUN_10b17d970(&plStack_370);
          func_0x00010b121e00(&pplStack_230);
          func_0x00010b1aa850();
          pcStack_168 = FUN_10b1a7d2c;
          ppuStack_160 = &PTR_DAT_110cc2ea0;
          FUN_10b1a08f8(param_1 + 0x94,&ppcStack_240,&pcStack_168);
          func_0x00010b1aa514(ppuStack_160);
          FUN_10b1a7c58(param_1 + 0xba,ppcStack_240,puStack_238);
          puVar11 = (undefined8 *)param_1[2];
          FUN_10b1a6110(&pplStack_350,param_1[1]);
          plVar21 = (long *)param_1[0x88];
          uStack_228 = lStack_348;
          pplStack_230 = pplStack_350;
          if (lStack_348 != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_00 != 0);
          }
          FUN_10b1a4670(auStack_220,auStack_330);
          puStack_180 = puStack_238;
          ppcStack_188 = ppcStack_240;
          lStack_178 = param_1[0xbd];
          pcStack_138 = FUN_10b1a7d4c;
          ppuStack_130 = &PTR_FUN_110cc2ed0;
          puVar9 = (undefined8 *)0xc8;
          plStack_170 = param_1;
          __Znwm();
          puVar9[1] = uStack_228;
          *puVar9 = pplStack_230;
          pplStack_230 = (long **)0x0;
          uStack_228 = 0;
          FUN_10b1a4670(puVar9 + 2,auStack_220);
          puVar9[0x18] = plStack_170;
          puVar9[0x17] = lStack_178;
          puVar9[0x16] = puStack_180;
          puVar9[0x15] = ppcStack_188;
          ppcVar13 = &pcStack_138;
          puStack_128 = puVar9;
          func_0x00010b1aab58(*(undefined8 *)(*plVar21 + 0x10));
          func_0x00010b1aa748(ppuStack_130);
          FUN_10b1a0960(&pplStack_230);
          func_0x00010b129c40(&pplStack_350);
          func_0x00010b17dd64(auStack_330);
          FUN_10b24d1ec(&ppuStack_298);
          FUN_10b17d970(&plStack_270);
          goto LAB_10b19b4e4;
        }
        plVar20 = plVar21 + 5;
        plVar21 = plVar21 + 0x10;
      } while ((int)*plVar20 == 1);
    }
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x6e);
  if (plVar16 == plStack_250) {
    FUN_10b20bf78(param_1[0x18],&UNK_10f73127f,0x1e);
  }
  else {
    param_6 = (undefined8 *)&UNK_10f7312bb;
    param_7 = 0x10;
    FUN_10b20c128(param_1[0x18],&UNK_10f73129e,0x1c,uVar15,&UNK_10f7312bb,0x10,
                  (*(byte *)(plVar16 + 0xc) ^ 0xff) & 1);
  }
  ppcVar13 = ppcStack_240;
  puVar11 = puStack_238;
  FUN_10b1a7c58(param_1 + 0xba);
  for (; uVar5 = plStack_258 == plStack_250, !(bool)uVar5; plStack_258 = plStack_258 + 0x10) {
    if (((int)plStack_258[5] == 1) && ((char)plStack_258[4] == '\x01')) {
      ppcVar13 = (code **)*plStack_258;
      puVar11 = (undefined8 *)plStack_258[1];
      FUN_10b20a8d4(param_1 + 0xba);
    }
  }
LAB_10b19b4e4:
  FUN_10b1a4938();
  func_0x00010b1aa28c(uStack_d8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b17d838(&pplStack_230);
  pplVar7 = &plStack_258;
  FUN_10b1a4938();
  func_0x00010b1aa3d8();
  uVar8 = uVar15;
  FUN_10b1c41c0();
  if ((*(char *)(uVar15 + 0x58) == '\x01') && (*(char *)(uVar15 + 0x88) == '\x01' && uVar8 != 0)) {
    uVar18 = *(ulong *)(uVar15 + 8);
    if (-1 < (char)*(byte *)(uVar15 + 0x17)) {
      uVar18 = (ulong)*(byte *)(uVar15 + 0x17);
    }
    if (uVar18 != 0) {
      lStack_438 = 0;
      lStack_430 = 0;
      uStack_428 = 0;
      lStack_448 = 0;
      uStack_440 = 0;
      lStack_450 = 0;
      puVar9 = (undefined8 *)(*(ulong *)(uVar8 + 0x30) & 0xfffffffffffffffc);
      lVar14 = (long)*(char *)((long)puVar9 + 0x17);
      lVar17 = lVar14;
      if (lVar14 < 0) {
        lVar17 = puVar9[1];
      }
      if (lVar17 != 0) {
        uVar18 = *(ulong *)(uVar8 + 0x38) & 0xfffffffffffffffc;
        lVar17 = (long)*(char *)(uVar18 + 0x17);
        if (lVar17 < 0) {
          lVar17 = *(long *)(uVar18 + 8);
        }
        if (lVar17 != 0) {
          puVar12 = puVar9;
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            puVar12 = (undefined8 *)*puVar9;
            lVar14 = puVar9[1];
          }
          func_0x000107c31544(&puStack_410,puVar12,lVar14);
          func_0x000107c3194c(&lStack_438,&puStack_410);
          func_0x000107c27914(&puStack_410);
          puVar12 = (undefined8 *)(*(ulong *)(uVar8 + 0x38) & 0xfffffffffffffffc);
          lVar14 = (long)*(char *)((long)puVar12 + 0x17);
          puVar9 = puVar12;
          if (lVar14 < 0) {
            puVar9 = (undefined8 *)*puVar12;
            lVar14 = puVar12[1];
          }
          func_0x000107c31544(&puStack_410,puVar9,lVar14);
          func_0x000107c3194c(&lStack_450,&puStack_410);
          func_0x000107c27914(&puStack_410);
          if ((lStack_438 != lStack_430) && (lStack_448 - lStack_450 == 0xc)) {
            lStack_430 = lStack_438;
            lStack_448 = lStack_450;
          }
        }
      }
      uVar5 = *(undefined1 *)(uVar8 + 0x78);
      puVar9 = (undefined8 *)0x738;
      __Znwm();
      pcStack_3e8 = ppcVar13[1];
      pcStack_3f0 = *ppcVar13;
      *ppcVar13 = (code *)0x0;
      ppcVar13[1] = (code *)0x0;
      uVar8 = (ulong)puStack_410 >> 0x20;
      puStack_410 = (undefined8 *)((ulong)puStack_410 & 0xffffffffffffff00);
      cStack_3f8 = *(char *)((long)puStack_368 + 0x18) == '\x01';
      if ((bool)cStack_3f8) {
        puStack_410 = (undefined8 *)CONCAT44((int)uVar8,*(undefined4 *)puStack_368);
        uStack_400 = *(undefined8 *)((long)puStack_368 + 0x10);
        puStack_408 = *(undefined8 **)((long)puStack_368 + 8);
        *(undefined8 *)((long)puStack_368 + 8) = 0;
        *(undefined8 *)((long)puStack_368 + 0x10) = 0;
      }
      uStack_418 = puStack_358[1];
      uStack_420 = *puStack_358;
      *puStack_358 = 0;
      puStack_358[1] = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110cc27a8;
      __ZNSt3__121recursive_timed_mutexC1Ev(puVar9 + 3);
      ppuVar10 = &PTR_DAT_110cc27f0;
      func_0x000107c2be18();
      puVar9[0x13] = ppuVar10;
      *(undefined1 *)(puVar9 + 0x14) = 0;
      ppuVar10 = &PTR_DAT_110cc2fd0;
      func_0x000107c2be18();
      puVar9[0x15] = ppuVar10;
      ppuVar10 = &PTR_DAT_110cc2808;
      func_0x000107c2be18();
      plVar21 = *pplVar7;
      puVar9[0x19] = pplVar7[1];
      puVar9[0x18] = plVar21;
      puVar9[0x16] = ppuVar10;
      puVar9[0x17] = 0;
      if (pplVar7[1] != (long *)0x0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
      pcVar24 = pcStack_3e8;
      pcVar23 = pcStack_3f0;
      uVar22 = *puVar11;
      puVar9[0x1d] = puVar11[1];
      puVar9[0x1c] = uVar22;
      puVar9[0x1b] = pcStack_3e8;
      puVar9[0x1a] = pcStack_3f0;
      pcStack_3f0 = (code *)0x0;
      pcStack_3e8 = (code *)0x0;
      if (puVar11[1] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_02 != 0);
      }
      puVar11 = puVar9 + 0x1e;
      func_0x00010b147e48();
      FUN_10b1c41c0();
      puVar9[0x6d] = puVar11;
      uVar3 = *(undefined4 *)(uVar15 + 0x18);
      uVar4 = *(undefined4 *)(uVar15 + 0x50);
      if (*(char *)(uVar15 + 0x58) == '\0') {
        uVar3 = 5;
        uVar4 = 0;
      }
      *(undefined4 *)(puVar9 + 0x6e) = uVar3;
      *(undefined4 *)((long)puVar9 + 0x374) = uVar4;
      puVar9[0x6f] = puVar9 + 0x1e;
      *(undefined1 *)(puVar9 + 0x70) = uVar5;
      func_0x000107c27994(puVar9 + 0x71,&lStack_438);
      func_0x000107c27994(puVar9 + 0x74,&lStack_450);
      lVar14 = param_6[1];
      puVar9[0x77] = *param_6;
      puVar9[0x78] = lVar14;
      if (lVar14 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_03 != 0);
      }
      FUN_10b121fd0(puVar9 + 0x79,param_7);
      func_0x00010b1ab178();
      puVar9[0x89] = pcVar24;
      puVar9[0x88] = pcVar23;
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_04 != 0);
      }
      lVar14 = param_9[1];
      uVar22 = *param_9;
      puVar9[0x8b] = param_9[1];
      puVar9[0x8a] = uVar22;
      if (lVar14 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_05 != 0);
      }
      ppuVar10 = &PTR_DAT_110cc2820;
      func_0x000107c2be18();
      puVar9[0x8c] = ppuVar10;
      *(undefined1 *)(puVar9 + 0x8d) = (undefined1)uStack_360;
      bVar2 = *(byte *)(uVar15 + 0x88) & *(int *)(uVar15 + 100) == 1;
      *(byte *)((long)puVar9 + 0x469) = bVar2;
      *(undefined1 *)((long)puVar9 + 0x46a) = 1;
      *(undefined1 *)((long)puVar9 + 0x46b) = uStack_360._1_1_;
      *(undefined1 *)((long)puVar9 + 0x46c) = uStack_360._2_1_;
      *(undefined1 *)((long)puVar9 + 0x46d) = uStack_360._4_1_;
      puVar9[0x8f] = uStack_418;
      puVar9[0x8e] = uStack_420;
      uStack_418 = 0;
      uStack_420 = 0;
      puVar9[0x90] = &PTR_FUN_110cc2848;
      puVar9[0x93] = 0;
      puVar9[0x92] = 0;
      puVar9[0x91] = puVar9 + 0x92;
      puVar9[0x97] = 0;
      puVar9[0x96] = 0;
      puVar9[0x95] = puVar9 + 0x96;
      puVar9[0x94] = &PTR_SUB_110cc2878;
      puVar9[0x98] = 0;
      *(undefined1 *)(puVar9 + 0x99) = 0;
      *(undefined1 *)(puVar9 + 0x9b) = 0;
      *(undefined1 *)(puVar9 + 0x9c) = 0;
      *(undefined1 *)((long)puVar9 + 0x4e4) = 0;
      *(undefined1 *)(puVar9 + 0x9d) = 0;
      *(undefined1 *)((long)puVar9 + 0x4ec) = 0;
      puVar9[0x9e] = 0x32aaaba7;
      puVar9[0xa5] = 0;
      puVar9[0xa2] = 0;
      puVar9[0xa1] = 0;
      puVar9[0xa4] = 0;
      puVar9[0xa3] = 0;
      puVar9[0xa0] = 0;
      puVar9[0x9f] = 0;
      puVar9[0xa6] = puVar9 + 0xa6;
      puVar9[0xa7] = puVar9 + 0xa6;
      puVar9[0xa9] = 0x32aaaba7;
      puVar9[0xa8] = 0;
      puVar9[0xb5] = 0;
      puVar9[0xb4] = 0;
      puVar9[0xab] = 0;
      puVar9[0xaa] = 0;
      puVar9[0xad] = 0;
      puVar9[0xac] = 0;
      puVar9[0xaf] = 0;
      puVar9[0xae] = 0;
      *(undefined8 *)((long)puVar9 + 0x582) = 0;
      *(undefined8 *)((long)puVar9 + 0x57a) = 0;
      puVar9[0xb3] = puVar9 + 0xb4;
      puVar9[0xb2] = &PTR_FUN_110cc28e0;
      puVar9[0xb6] = 0;
      puVar9[0xb9] = 0;
      puVar9[0xb8] = 0;
      puVar9[0xb7] = puVar9 + 0xb8;
      puVar9[0xbc] = 0;
      puVar9[0xbb] = 0;
      puVar9[0xba] = puVar9 + 0xbb;
      puVar9[0xc1] = 0;
      *(undefined1 *)(puVar9 + 0xc0) = 0;
      puVar9[0xbf] = 0;
      puVar9[0xbe] = 0;
      puVar9[0xbd] = 0;
      *(byte *)(puVar9 + 0xc2) = uStack_360._3_1_ & (bVar2 ^ 1);
      *(undefined1 *)((long)puVar9 + 0x611) = 0;
      puVar9[0xc4] = 0;
      puVar9[0xc3] = 0;
      puVar9[0xc6] = 0;
      puVar9[0xc5] = 0;
      puVar9[200] = 0;
      puVar9[199] = 0;
      *(undefined4 *)(puVar9 + 0xc9) = 0x3f800000;
      *(undefined1 *)(puVar9 + 0xca) = 0;
      *(undefined1 *)(puVar9 + 0xcf) = 0;
      *(undefined1 *)(puVar9 + 0xcd) = 0;
      puVar9[0xcc] = 0;
      puVar9[0xcb] = 0;
      puVar9[0xd0] = &UNK_1053a6a3c;
      puVar9[0xd1] = &PTR_DAT_110873830;
      lVar14 = *plStack_370;
      puVar9[0xd6] = lVar14;
      if (lVar14 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_06 != 0);
      }
      *(undefined1 *)(puVar9 + 0xd7) = 0;
      *(undefined1 *)(puVar9 + 0xda) = 0;
      if (cStack_3f8 == '\x01') {
        *(undefined4 *)(puVar9 + 0xd7) = puStack_410._0_4_;
        puVar9[0xd9] = uStack_400;
        puVar9[0xd8] = puStack_408;
        puStack_408 = (undefined8 *)0x0;
        uStack_400 = 0;
        *(undefined1 *)(puVar9 + 0xda) = 1;
      }
      *(undefined1 *)(puVar9 + 0xdb) = 0;
      *(undefined1 *)(puVar9 + 0xdd) = 0;
      *(undefined1 *)(puVar9 + 0xde) = 0;
      *(undefined1 *)(puVar9 + 0xdf) = 0;
      *(undefined1 *)(puVar9 + 0xe3) = 0;
      puVar9[0xe4] = 0;
      puVar9[0xe6] = 0;
      puVar9[0xe5] = 0;
      if ((cStack_3f8 != '\0') && (puVar9[0xd8] == 0)) {
        func_0x00010b19caac(puVar9 + 0xd7);
      }
      puVar11 = puVar9;
      func_0x00010b19cae0(puVar9,param_6,uVar15);
      FUN_10b2029a0();
      FUN_10b20345c();
      ppuVar10 = &PTR_PTR_113386a18;
      if ((undefined **)puVar11[3] != (undefined **)0x0) {
        ppuVar10 = (undefined **)puVar11[3];
      }
      *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)((long)ppuVar10 + 0x44);
      ppuVar10 = &PTR_PTR_113386a18;
      if ((undefined **)puVar11[3] != (undefined **)0x0) {
        ppuVar10 = (undefined **)puVar11[3];
      }
      *(undefined4 *)((long)puVar9 + 0xbc) = *(undefined4 *)(ppuVar10 + 9);
      func_0x00010b125888(&uStack_420);
      FUN_10b1a3cac(&puStack_410);
      FUN_10b197610(&pcStack_3f0);
      uVar22 = 8;
      __Znwm();
      __ZNSt3__17promiseIvEC1Ev();
      *extraout_x8_01 = (long)puVar9;
      puVar12 = (undefined8 *)0x28;
      __Znwm();
      puVar12[1] = 0;
      *puVar12 = &PTR_FUN_110cc2a88;
      puVar12[2] = 0;
      puVar12[3] = puVar9;
      puVar12[4] = uVar22;
      extraout_x8_01[1] = (long)puVar12;
      puVar11 = puVar9;
      if ((puVar9[2] == 0) || (*(long *)(puVar9[2] + 8) == -1)) {
        do {
          puStack_408 = puVar12;
          puStack_410 = puVar11;
          func_0x00010b1aa2e0();
          puVar11 = puStack_410;
          puVar12 = puStack_408;
        } while (extraout_w10_07 != 0);
        FUN_10b1a5ae8(puVar9 + 1,&puStack_410);
        func_0x00010b1aae00();
      }
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_410,uVar22);
      extraout_x8_01[2] = (long)puStack_410;
      puStack_410 = (undefined8 *)0x0;
      uVar15 = 0;
      __ZNSt3__16futureIvED1Ev();
      lVar14 = *extraout_x8_01;
      if ((*(char *)(lVar14 + 0x6d0) == '\x01') && (*(long *)(lVar14 + 0x6b0) == 0)) {
        uVar15 = *(ulong *)(lVar14 + 0x6c0);
        FUN_10b1b3e60(uVar15,lVar14 + 0xf0,*(undefined8 *)(lVar14 + 0x368));
        if ((int)uVar15 != 0) {
          if (*(char *)(lVar14 + 0x4ec) == '\x01') {
            *(undefined1 *)(lVar14 + 0x4ec) = 0;
          }
          FUN_10b19c210(&puStack_410,lVar14);
          func_0x00010b19ca5c(lVar14 + 0x6d8,&puStack_410);
          uVar15 = 0;
          FUN_10b166558();
        }
      }
      func_0x00010b1aaeb4(*extraout_x8_01);
      if ((uVar15 & 1) == 0) {
        puVar11 = (undefined8 *)*extraout_x8_01;
        puStack_408 = (undefined8 *)extraout_x8_01[1];
        uStack_478 = 0;
        puVar9 = puVar11;
        puStack_410 = puVar11;
        if (puStack_408 != (undefined8 *)0x0) {
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12 != 0);
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12_00 != 0);
          puVar9 = (undefined8 *)*extraout_x8_01;
          uStack_478 = extraout_x8_03;
          puVar11 = extraout_x9;
        }
        uStack_468 = puVar9[0x8b];
        uStack_470 = puVar9[0x8a];
        puStack_480 = puVar11;
        if (puVar9[0x8b] != 0) {
          do {
            func_0x00010b1aa6f4();
            puVar11 = extraout_x9_00;
          } while (extraout_w11 != 0);
        }
        FUN_10b19bf88(auStack_460,puVar11 + 0x1a,&puStack_480);
        func_0x000107c27b58(auStack_460);
        FUN_10b19c1ec(&puStack_480);
        func_0x00010b1aae00();
      }
      func_0x000107c27914(&lStack_450);
      func_0x000107c27914(&lStack_438);
      return;
    }
  }
  *extraout_x8_01 = 0;
  extraout_x8_01[1] = 0;
  extraout_x8_01[2] = 0;
  return;
}



/* Entry: 10b19b07c; end: 10b19b67f;  */

void FUN_10b19b07c(long param_1,code **param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined ***pppuVar6;
  long **pplVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  code **ppcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 extraout_x8;
  long *plVar17;
  long *extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar19;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  long *plVar20;
  long *plVar21;
  int extraout_w12;
  int extraout_w12_00;
  long unaff_x19;
  long *plVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [16];
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  char cStack_368;
  code *pcStack_360;
  code *pcStack_358;
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  long **pplStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2a0 [80];
  long *plStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [48];
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  code **ppcStack_1b0;
  undefined8 *puStack_1a8;
  long **pplStack_1a0;
  ulong uStack_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [88];
  code **ppcStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  func_0x00010b1aa2b8();
  ppcStack_1b0 = param_2;
  puStack_1a8 = param_3;
  uStack_48 = extraout_x8;
  FUN_10b1a08bc(&plStack_1c8,param_1 + 0x4a0,&ppcStack_1b0);
  for (plVar22 = plStack_1c8;
      (plVar17 = plStack_1c0, plVar22 != plStack_1c0 &&
      (plVar17 = plVar22, (char)plVar22[4] == '\x01')); plVar22 = plVar22 + 0x10) {
  }
  plVar22 = plStack_1c8;
  if (plStack_1c8 != plStack_1c0) {
    do {
      plVar20 = plVar22 + 0x10;
      plVar21 = plStack_1c0;
      if (plVar20 == plStack_1c0) break;
      plVar1 = plVar22 + 1;
      plVar21 = plVar22;
      plVar22 = plVar20;
    } while (*plVar1 == *plVar20);
    if (((code **)*plStack_1c8 == ppcStack_1b0) &&
       (plVar22 = plStack_1c8,
       (plVar21 == plStack_1c0 && (undefined8 *)plStack_1c0[-0xf] == puStack_1a8) &&
       plVar17 == plStack_1c0)) {
      do {
        if (plVar22 == plStack_1c0) {
          uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
          FUN_10b126f8c(&pplStack_1a0,0x10005);
          FUN_10b12983c(auStack_178,*(undefined4 *)(unaff_x19 + 0x370));
          func_0x00010b12aca4(auStack_150,*(undefined4 *)(unaff_x19 + 0x374));
          func_0x00010b120648(auStack_2a0,&pplStack_1a0,3);
          uVar16 = (long)puStack_1a8 - (long)ppcStack_1b0;
          FUN_10b11ef50(uVar12,0xc0,auStack_2a0);
          FUN_10b120998(auStack_2a0);
          lVar15 = 0x60;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((long)&pplStack_1a0 + lVar15);
            lVar15 = lVar15 + -0x28;
          } while (lVar15 != -0x18);
          puStack_1d8 = (undefined8 *)0x0;
          uStack_1d0 = 0;
          plStack_1e0 = (long *)0x0;
          pplStack_1a0 = &plStack_1e0;
          uStack_198 = uStack_198 & 0xffffffffffffff00;
          if ((long)plStack_1c0 - (long)plStack_1c8 != 0) {
            lVar15 = (long)plStack_1c0 - (long)plStack_1c8 >> 7;
            FUN_10b17d690(&plStack_1e0,lVar15);
            puVar11 = puStack_1d8 + lVar15 * 2;
            puVar9 = puStack_1d8;
            for (lVar15 = lVar15 << 4; puStack_1d8 = puVar11, lVar15 != 0; lVar15 = lVar15 + -0x10)
            {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9 = puVar9 + 2;
            }
          }
          uStack_198 = CONCAT71(uStack_198._1_7_,1);
          func_0x00010b17d838(&pplStack_1a0);
          plVar17 = plStack_1e0;
          for (plVar22 = plStack_1c8; uVar5 = plVar22 == plStack_1c0, !(bool)uVar5;
              plVar22 = plVar22 + 0x10) {
            uStack_198 = plVar22[3];
            pplStack_1a0 = (long **)plVar22[2];
            if (plVar22[3] != 0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10 != 0);
            }
            func_0x0001054918e8(plVar17,&pplStack_1a0);
            func_0x000107c27d78(&pplStack_1a0);
            plVar17 = plVar17 + 2;
          }
          ppuStack_208 = &PTR_DAT_110ccaac8;
          uStack_200 = 0;
          uStack_1e8 = 0;
          lStack_1f8 = (long)puStack_1a8 - (long)ppcStack_1b0;
          pppuVar6 = &ppuStack_208;
          FUN_10b1865ac();
          puVar11 = puStack_1a8;
          ppcVar14 = ppcStack_1b0;
          pppuVar6[2] = ppcStack_1b0;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x378);
          FUN_10b19ada4(&pplStack_2c0,ppcVar14,puVar11);
          FUN_10b2026a0(&pplStack_1a0,uVar12,&pplStack_2c0);
          puStack_2d8 = puStack_1d8;
          plStack_2e0 = plStack_1e0;
          uStack_2d0 = uStack_1d0;
          puStack_1d8 = (undefined8 *)0x0;
          uStack_1d0 = 0;
          plStack_1e0 = (long *)0x0;
          FUN_10b186708(&pcStack_a8,&ppuStack_208);
          FUN_10b17d5c4(auStack_2a0,&pplStack_1a0);
          puStack_248 = puStack_2d8;
          plStack_250 = plStack_2e0;
          uStack_240 = uStack_2d0;
          puStack_2d8 = (undefined8 *)0x0;
          uStack_2d0 = 0;
          plStack_2e0 = (long *)0x0;
          FUN_10b17d8dc(auStack_238,&pcStack_a8);
          FUN_10b17d950(&pcStack_a8);
          FUN_10b17d970(&plStack_2e0);
          func_0x00010b121e00(&pplStack_1a0);
          func_0x00010b1aa850();
          pcStack_d8 = FUN_10b1a7d2c;
          ppuStack_d0 = &PTR_DAT_110cc2ea0;
          FUN_10b1a08f8(unaff_x19 + 0x4a0,&ppcStack_1b0,&pcStack_d8);
          func_0x00010b1aa514(ppuStack_d0);
          FUN_10b1a7c58(unaff_x19 + 0x5d0,ppcStack_1b0,puStack_1a8);
          puVar11 = *(undefined8 **)(unaff_x19 + 0x10);
          FUN_10b1a6110(&pplStack_2c0,*(undefined8 *)(unaff_x19 + 8));
          plVar22 = *(long **)(unaff_x19 + 0x440);
          uStack_198 = lStack_2b8;
          pplStack_1a0 = pplStack_2c0;
          if (lStack_2b8 != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_00 != 0);
          }
          FUN_10b1a4670(auStack_190,auStack_2a0);
          puStack_f0 = puStack_1a8;
          ppcStack_f8 = ppcStack_1b0;
          uStack_e8 = *(undefined8 *)(unaff_x19 + 0x5e8);
          pcStack_a8 = FUN_10b1a7d4c;
          ppuStack_a0 = &PTR_FUN_110cc2ed0;
          puVar9 = (undefined8 *)0xc8;
          __Znwm();
          puVar9[1] = uStack_198;
          *puVar9 = pplStack_1a0;
          pplStack_1a0 = (long **)0x0;
          uStack_198 = 0;
          FUN_10b1a4670(puVar9 + 2,auStack_190);
          puVar9[0x18] = unaff_x19;
          puVar9[0x17] = uStack_e8;
          puVar9[0x16] = puStack_f0;
          puVar9[0x15] = ppcStack_f8;
          ppcVar14 = &pcStack_a8;
          puStack_98 = puVar9;
          func_0x00010b1aab58(*(undefined8 *)(*plVar22 + 0x10));
          func_0x00010b1aa748(ppuStack_a0);
          FUN_10b1a0960(&pplStack_1a0);
          func_0x00010b129c40(&pplStack_2c0);
          func_0x00010b17dd64(auStack_2a0);
          FUN_10b24d1ec(&ppuStack_208);
          FUN_10b17d970(&plStack_1e0);
          goto LAB_10b19b4e4;
        }
        plVar21 = plVar22 + 5;
        plVar22 = plVar22 + 0x10;
      } while ((int)*plVar21 == 1);
    }
  }
  uVar16 = (ulong)*(uint *)(unaff_x19 + 0x370);
  if (plVar17 == plStack_1c0) {
    FUN_10b20bf78(*(undefined8 *)(unaff_x19 + 0xc0),&UNK_10f73127f,0x1e);
  }
  else {
    param_5 = (undefined8 *)&UNK_10f7312bb;
    param_6 = 0x10;
    FUN_10b20c128(*(undefined8 *)(unaff_x19 + 0xc0),&UNK_10f73129e,0x1c,uVar16,&UNK_10f7312bb,0x10,
                  (*(byte *)(plVar17 + 0xc) ^ 0xff) & 1);
  }
  ppcVar14 = ppcStack_1b0;
  puVar11 = puStack_1a8;
  FUN_10b1a7c58(unaff_x19 + 0x5d0);
  for (; uVar5 = plStack_1c8 == plStack_1c0, !(bool)uVar5; plStack_1c8 = plStack_1c8 + 0x10) {
    if (((int)plStack_1c8[5] == 1) && ((char)plStack_1c8[4] == '\x01')) {
      ppcVar14 = (code **)*plStack_1c8;
      puVar11 = (undefined8 *)plStack_1c8[1];
      FUN_10b20a8d4(unaff_x19 + 0x5d0);
    }
  }
LAB_10b19b4e4:
  FUN_10b1a4938();
  func_0x00010b1aa28c(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b17d838(&pplStack_1a0);
  pplVar7 = &plStack_1c8;
  FUN_10b1a4938();
  func_0x00010b1aa3d8();
  uVar8 = uVar16;
  FUN_10b1c41c0();
  if ((*(char *)(uVar16 + 0x58) == '\x01') && (*(char *)(uVar16 + 0x88) == '\x01' && uVar8 != 0)) {
    uVar19 = *(ulong *)(uVar16 + 8);
    if (-1 < (char)*(byte *)(uVar16 + 0x17)) {
      uVar19 = (ulong)*(byte *)(uVar16 + 0x17);
    }
    if (uVar19 != 0) {
      lStack_3a8 = 0;
      lStack_3a0 = 0;
      uStack_398 = 0;
      lStack_3b8 = 0;
      uStack_3b0 = 0;
      lStack_3c0 = 0;
      puVar9 = (undefined8 *)(*(ulong *)(uVar8 + 0x30) & 0xfffffffffffffffc);
      lVar15 = (long)*(char *)((long)puVar9 + 0x17);
      lVar18 = lVar15;
      if (lVar15 < 0) {
        lVar18 = puVar9[1];
      }
      if (lVar18 != 0) {
        uVar19 = *(ulong *)(uVar8 + 0x38) & 0xfffffffffffffffc;
        lVar18 = (long)*(char *)(uVar19 + 0x17);
        if (lVar18 < 0) {
          lVar18 = *(long *)(uVar19 + 8);
        }
        if (lVar18 != 0) {
          puVar13 = puVar9;
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            puVar13 = (undefined8 *)*puVar9;
            lVar15 = puVar9[1];
          }
          func_0x000107c31544(&puStack_380,puVar13,lVar15);
          func_0x000107c3194c(&lStack_3a8,&puStack_380);
          func_0x000107c27914(&puStack_380);
          puVar13 = (undefined8 *)(*(ulong *)(uVar8 + 0x38) & 0xfffffffffffffffc);
          lVar15 = (long)*(char *)((long)puVar13 + 0x17);
          puVar9 = puVar13;
          if (lVar15 < 0) {
            puVar9 = (undefined8 *)*puVar13;
            lVar15 = puVar13[1];
          }
          func_0x000107c31544(&puStack_380,puVar9,lVar15);
          func_0x000107c3194c(&lStack_3c0,&puStack_380);
          func_0x000107c27914(&puStack_380);
          if ((lStack_3a8 != lStack_3a0) && (lStack_3b8 - lStack_3c0 == 0xc)) {
            lStack_3a0 = lStack_3a8;
            lStack_3b8 = lStack_3c0;
          }
        }
      }
      uVar5 = *(undefined1 *)(uVar8 + 0x78);
      puVar9 = (undefined8 *)0x738;
      __Znwm();
      pcStack_358 = ppcVar14[1];
      pcStack_360 = *ppcVar14;
      *ppcVar14 = (code *)0x0;
      ppcVar14[1] = (code *)0x0;
      uVar8 = (ulong)puStack_380 >> 0x20;
      puStack_380 = (undefined8 *)((ulong)puStack_380 & 0xffffffffffffff00);
      cStack_368 = *(char *)((long)puStack_2d8 + 0x18) == '\x01';
      if ((bool)cStack_368) {
        puStack_380 = (undefined8 *)CONCAT44((int)uVar8,*(undefined4 *)puStack_2d8);
        uStack_370 = *(undefined8 *)((long)puStack_2d8 + 0x10);
        puStack_378 = *(undefined8 **)((long)puStack_2d8 + 8);
        *(undefined8 *)((long)puStack_2d8 + 8) = 0;
        *(undefined8 *)((long)puStack_2d8 + 0x10) = 0;
      }
      uStack_388 = puStack_2c8[1];
      uStack_390 = *puStack_2c8;
      *puStack_2c8 = 0;
      puStack_2c8[1] = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_110cc27a8;
      __ZNSt3__121recursive_timed_mutexC1Ev(puVar9 + 3);
      ppuVar10 = &PTR_DAT_110cc27f0;
      func_0x000107c2be18();
      puVar9[0x13] = ppuVar10;
      *(undefined1 *)(puVar9 + 0x14) = 0;
      ppuVar10 = &PTR_DAT_110cc2fd0;
      func_0x000107c2be18();
      puVar9[0x15] = ppuVar10;
      ppuVar10 = &PTR_DAT_110cc2808;
      func_0x000107c2be18();
      plVar22 = *pplVar7;
      puVar9[0x19] = pplVar7[1];
      puVar9[0x18] = plVar22;
      puVar9[0x16] = ppuVar10;
      puVar9[0x17] = 0;
      if (pplVar7[1] != (long *)0x0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
      pcVar24 = pcStack_358;
      pcVar23 = pcStack_360;
      uVar12 = *puVar11;
      puVar9[0x1d] = puVar11[1];
      puVar9[0x1c] = uVar12;
      puVar9[0x1b] = pcStack_358;
      puVar9[0x1a] = pcStack_360;
      pcStack_360 = (code *)0x0;
      pcStack_358 = (code *)0x0;
      if (puVar11[1] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_02 != 0);
      }
      puVar11 = puVar9 + 0x1e;
      func_0x00010b147e48();
      FUN_10b1c41c0();
      puVar9[0x6d] = puVar11;
      uVar3 = *(undefined4 *)(uVar16 + 0x18);
      uVar4 = *(undefined4 *)(uVar16 + 0x50);
      if (*(char *)(uVar16 + 0x58) == '\0') {
        uVar3 = 5;
        uVar4 = 0;
      }
      *(undefined4 *)(puVar9 + 0x6e) = uVar3;
      *(undefined4 *)((long)puVar9 + 0x374) = uVar4;
      puVar9[0x6f] = puVar9 + 0x1e;
      *(undefined1 *)(puVar9 + 0x70) = uVar5;
      func_0x000107c27994(puVar9 + 0x71,&lStack_3a8);
      func_0x000107c27994(puVar9 + 0x74,&lStack_3c0);
      lVar15 = param_5[1];
      puVar9[0x77] = *param_5;
      puVar9[0x78] = lVar15;
      if (lVar15 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_03 != 0);
      }
      FUN_10b121fd0(puVar9 + 0x79,param_6);
      func_0x00010b1ab178();
      puVar9[0x89] = pcVar24;
      puVar9[0x88] = pcVar23;
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_04 != 0);
      }
      lVar15 = param_8[1];
      uVar12 = *param_8;
      puVar9[0x8b] = param_8[1];
      puVar9[0x8a] = uVar12;
      if (lVar15 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_05 != 0);
      }
      ppuVar10 = &PTR_DAT_110cc2820;
      func_0x000107c2be18();
      puVar9[0x8c] = ppuVar10;
      *(undefined1 *)(puVar9 + 0x8d) = (undefined1)uStack_2d0;
      bVar2 = *(byte *)(uVar16 + 0x88) & *(int *)(uVar16 + 100) == 1;
      *(byte *)((long)puVar9 + 0x469) = bVar2;
      *(undefined1 *)((long)puVar9 + 0x46a) = 1;
      *(undefined1 *)((long)puVar9 + 0x46b) = uStack_2d0._1_1_;
      *(undefined1 *)((long)puVar9 + 0x46c) = uStack_2d0._2_1_;
      *(undefined1 *)((long)puVar9 + 0x46d) = uStack_2d0._4_1_;
      puVar9[0x8f] = uStack_388;
      puVar9[0x8e] = uStack_390;
      uStack_388 = 0;
      uStack_390 = 0;
      puVar9[0x90] = &PTR_FUN_110cc2848;
      puVar9[0x93] = 0;
      puVar9[0x92] = 0;
      puVar9[0x91] = puVar9 + 0x92;
      puVar9[0x97] = 0;
      puVar9[0x96] = 0;
      puVar9[0x95] = puVar9 + 0x96;
      puVar9[0x94] = &PTR_SUB_110cc2878;
      puVar9[0x98] = 0;
      *(undefined1 *)(puVar9 + 0x99) = 0;
      *(undefined1 *)(puVar9 + 0x9b) = 0;
      *(undefined1 *)(puVar9 + 0x9c) = 0;
      *(undefined1 *)((long)puVar9 + 0x4e4) = 0;
      *(undefined1 *)(puVar9 + 0x9d) = 0;
      *(undefined1 *)((long)puVar9 + 0x4ec) = 0;
      puVar9[0x9e] = 0x32aaaba7;
      puVar9[0xa5] = 0;
      puVar9[0xa2] = 0;
      puVar9[0xa1] = 0;
      puVar9[0xa4] = 0;
      puVar9[0xa3] = 0;
      puVar9[0xa0] = 0;
      puVar9[0x9f] = 0;
      puVar9[0xa6] = puVar9 + 0xa6;
      puVar9[0xa7] = puVar9 + 0xa6;
      puVar9[0xa9] = 0x32aaaba7;
      puVar9[0xa8] = 0;
      puVar9[0xb5] = 0;
      puVar9[0xb4] = 0;
      puVar9[0xab] = 0;
      puVar9[0xaa] = 0;
      puVar9[0xad] = 0;
      puVar9[0xac] = 0;
      puVar9[0xaf] = 0;
      puVar9[0xae] = 0;
      *(undefined8 *)((long)puVar9 + 0x582) = 0;
      *(undefined8 *)((long)puVar9 + 0x57a) = 0;
      puVar9[0xb3] = puVar9 + 0xb4;
      puVar9[0xb2] = &PTR_FUN_110cc28e0;
      puVar9[0xb6] = 0;
      puVar9[0xb9] = 0;
      puVar9[0xb8] = 0;
      puVar9[0xb7] = puVar9 + 0xb8;
      puVar9[0xbc] = 0;
      puVar9[0xbb] = 0;
      puVar9[0xba] = puVar9 + 0xbb;
      puVar9[0xc1] = 0;
      *(undefined1 *)(puVar9 + 0xc0) = 0;
      puVar9[0xbf] = 0;
      puVar9[0xbe] = 0;
      puVar9[0xbd] = 0;
      *(byte *)(puVar9 + 0xc2) = uStack_2d0._3_1_ & (bVar2 ^ 1);
      *(undefined1 *)((long)puVar9 + 0x611) = 0;
      puVar9[0xc4] = 0;
      puVar9[0xc3] = 0;
      puVar9[0xc6] = 0;
      puVar9[0xc5] = 0;
      puVar9[200] = 0;
      puVar9[199] = 0;
      *(undefined4 *)(puVar9 + 0xc9) = 0x3f800000;
      *(undefined1 *)(puVar9 + 0xca) = 0;
      *(undefined1 *)(puVar9 + 0xcf) = 0;
      *(undefined1 *)(puVar9 + 0xcd) = 0;
      puVar9[0xcc] = 0;
      puVar9[0xcb] = 0;
      puVar9[0xd0] = &UNK_1053a6a3c;
      puVar9[0xd1] = &PTR_DAT_110873830;
      lVar15 = *plStack_2e0;
      puVar9[0xd6] = lVar15;
      if (lVar15 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_06 != 0);
      }
      *(undefined1 *)(puVar9 + 0xd7) = 0;
      *(undefined1 *)(puVar9 + 0xda) = 0;
      if (cStack_368 == '\x01') {
        *(undefined4 *)(puVar9 + 0xd7) = puStack_380._0_4_;
        puVar9[0xd9] = uStack_370;
        puVar9[0xd8] = puStack_378;
        puStack_378 = (undefined8 *)0x0;
        uStack_370 = 0;
        *(undefined1 *)(puVar9 + 0xda) = 1;
      }
      *(undefined1 *)(puVar9 + 0xdb) = 0;
      *(undefined1 *)(puVar9 + 0xdd) = 0;
      *(undefined1 *)(puVar9 + 0xde) = 0;
      *(undefined1 *)(puVar9 + 0xdf) = 0;
      *(undefined1 *)(puVar9 + 0xe3) = 0;
      puVar9[0xe4] = 0;
      puVar9[0xe6] = 0;
      puVar9[0xe5] = 0;
      if ((cStack_368 != '\0') && (puVar9[0xd8] == 0)) {
        func_0x00010b19caac(puVar9 + 0xd7);
      }
      puVar11 = puVar9;
      func_0x00010b19cae0(puVar9,param_5,uVar16);
      FUN_10b2029a0();
      FUN_10b20345c();
      ppuVar10 = &PTR_PTR_113386a18;
      if ((undefined **)puVar11[3] != (undefined **)0x0) {
        ppuVar10 = (undefined **)puVar11[3];
      }
      *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)((long)ppuVar10 + 0x44);
      ppuVar10 = &PTR_PTR_113386a18;
      if ((undefined **)puVar11[3] != (undefined **)0x0) {
        ppuVar10 = (undefined **)puVar11[3];
      }
      *(undefined4 *)((long)puVar9 + 0xbc) = *(undefined4 *)(ppuVar10 + 9);
      func_0x00010b125888(&uStack_390);
      FUN_10b1a3cac(&puStack_380);
      FUN_10b197610(&pcStack_360);
      uVar12 = 8;
      __Znwm();
      __ZNSt3__17promiseIvEC1Ev();
      *extraout_x8_00 = (long)puVar9;
      puVar13 = (undefined8 *)0x28;
      __Znwm();
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_110cc2a88;
      puVar13[2] = 0;
      puVar13[3] = puVar9;
      puVar13[4] = uVar12;
      extraout_x8_00[1] = (long)puVar13;
      puVar11 = puVar9;
      if ((puVar9[2] == 0) || (*(long *)(puVar9[2] + 8) == -1)) {
        do {
          puStack_378 = puVar13;
          puStack_380 = puVar11;
          func_0x00010b1aa2e0();
          puVar11 = puStack_380;
          puVar13 = puStack_378;
        } while (extraout_w10_07 != 0);
        FUN_10b1a5ae8(puVar9 + 1,&puStack_380);
        func_0x00010b1aae00();
      }
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_380,uVar12);
      extraout_x8_00[2] = (long)puStack_380;
      puStack_380 = (undefined8 *)0x0;
      uVar16 = 0;
      __ZNSt3__16futureIvED1Ev();
      lVar15 = *extraout_x8_00;
      if ((*(char *)(lVar15 + 0x6d0) == '\x01') && (*(long *)(lVar15 + 0x6b0) == 0)) {
        uVar16 = *(ulong *)(lVar15 + 0x6c0);
        FUN_10b1b3e60(uVar16,lVar15 + 0xf0,*(undefined8 *)(lVar15 + 0x368));
        if ((int)uVar16 != 0) {
          if (*(char *)(lVar15 + 0x4ec) == '\x01') {
            *(undefined1 *)(lVar15 + 0x4ec) = 0;
          }
          FUN_10b19c210(&puStack_380,lVar15);
          func_0x00010b19ca5c(lVar15 + 0x6d8,&puStack_380);
          uVar16 = 0;
          FUN_10b166558();
        }
      }
      func_0x00010b1aaeb4(*extraout_x8_00);
      if ((uVar16 & 1) == 0) {
        puVar11 = (undefined8 *)*extraout_x8_00;
        puStack_378 = (undefined8 *)extraout_x8_00[1];
        uStack_3e8 = 0;
        puVar9 = puVar11;
        puStack_380 = puVar11;
        if (puStack_378 != (undefined8 *)0x0) {
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12 != 0);
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12_00 != 0);
          puVar9 = (undefined8 *)*extraout_x8_00;
          uStack_3e8 = extraout_x8_02;
          puVar11 = extraout_x9;
        }
        uStack_3d8 = puVar9[0x8b];
        uStack_3e0 = puVar9[0x8a];
        puStack_3f0 = puVar11;
        if (puVar9[0x8b] != 0) {
          do {
            func_0x00010b1aa6f4();
            puVar11 = extraout_x9_00;
          } while (extraout_w11 != 0);
        }
        FUN_10b19bf88(auStack_3d0,puVar11 + 0x1a,&puStack_3f0);
        func_0x000107c27b58(auStack_3d0);
        FUN_10b19c1ec(&puStack_3f0);
        func_0x00010b1aae00();
      }
      func_0x000107c27914(&lStack_3c0);
      func_0x000107c27914(&lStack_3a8);
      return;
    }
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  return;
}



/* Entry: 10b19b680; end: 10b19bf87;  */

void FUN_10b19b680(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,long *param_10,undefined4 *param_11,undefined4 param_12,
                  undefined1 param_13,undefined8 *param_14)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *puVar13;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  char cStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar12 = param_5;
  FUN_10b1c41c0();
  if ((*(char *)(param_5 + 0x58) == '\x01') && (*(char *)(param_5 + 0x88) == '\x01' && lVar12 != 0))
  {
    uVar9 = *(ulong *)(param_5 + 8);
    if (-1 < (char)*(byte *)(param_5 + 0x17)) {
      uVar9 = (ulong)*(byte *)(param_5 + 0x17);
    }
    if (uVar9 != 0) {
      lStack_c8 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      lStack_d8 = 0;
      uStack_d0 = 0;
      lStack_e0 = 0;
      puVar5 = (undefined8 *)(*(ulong *)(lVar12 + 0x30) & 0xfffffffffffffffc);
      lVar10 = (long)*(char *)((long)puVar5 + 0x17);
      lVar11 = lVar10;
      if (lVar10 < 0) {
        lVar11 = puVar5[1];
      }
      if (lVar11 != 0) {
        uVar9 = *(ulong *)(lVar12 + 0x38) & 0xfffffffffffffffc;
        lVar11 = (long)*(char *)(uVar9 + 0x17);
        if (lVar11 < 0) {
          lVar11 = *(long *)(uVar9 + 8);
        }
        if (lVar11 != 0) {
          puVar13 = puVar5;
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            puVar13 = (undefined8 *)*puVar5;
            lVar10 = puVar5[1];
          }
          func_0x000107c31544(&puStack_a0,puVar13,lVar10);
          func_0x000107c3194c(&lStack_c8,&puStack_a0);
          func_0x000107c27914(&puStack_a0);
          puVar13 = (undefined8 *)(*(ulong *)(lVar12 + 0x38) & 0xfffffffffffffffc);
          lVar10 = (long)*(char *)((long)puVar13 + 0x17);
          puVar5 = puVar13;
          if (lVar10 < 0) {
            puVar5 = (undefined8 *)*puVar13;
            lVar10 = puVar13[1];
          }
          func_0x000107c31544(&puStack_a0,puVar5,lVar10);
          func_0x000107c3194c(&lStack_e0,&puStack_a0);
          func_0x000107c27914(&puStack_a0);
          if ((lStack_c8 != lStack_c0) && (lStack_d8 - lStack_e0 == 0xc)) {
            lStack_c0 = lStack_c8;
            lStack_d8 = lStack_e0;
          }
        }
      }
      uVar4 = *(undefined1 *)(lVar12 + 0x78);
      puVar5 = (undefined8 *)0x738;
      __Znwm();
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      uVar9 = (ulong)puStack_a0 >> 0x20;
      puStack_a0 = (undefined8 *)((ulong)puStack_a0 & 0xffffffffffffff00);
      cStack_88 = *(char *)(param_11 + 6) == '\x01';
      if ((bool)cStack_88) {
        puStack_a0 = (undefined8 *)CONCAT44((int)uVar9,*param_11);
        uStack_90 = *(undefined8 *)(param_11 + 4);
        puStack_98 = *(undefined8 **)(param_11 + 2);
        *(undefined8 *)(param_11 + 2) = 0;
        *(undefined8 *)(param_11 + 4) = 0;
      }
      uStack_a8 = param_14[1];
      uStack_b0 = *param_14;
      *param_14 = 0;
      param_14[1] = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110cc27a8;
      __ZNSt3__121recursive_timed_mutexC1Ev(puVar5 + 3);
      ppuVar6 = &PTR_DAT_110cc27f0;
      func_0x000107c2be18();
      puVar5[0x13] = ppuVar6;
      *(undefined1 *)(puVar5 + 0x14) = 0;
      ppuVar6 = &PTR_DAT_110cc2fd0;
      func_0x000107c2be18();
      puVar5[0x15] = ppuVar6;
      ppuVar6 = &PTR_DAT_110cc2808;
      func_0x000107c2be18();
      uVar7 = *param_2;
      puVar5[0x19] = param_2[1];
      puVar5[0x18] = uVar7;
      puVar5[0x16] = ppuVar6;
      puVar5[0x17] = 0;
      if (param_2[1] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      uVar14 = uStack_78;
      uVar7 = uStack_80;
      uVar15 = *param_4;
      puVar5[0x1d] = param_4[1];
      puVar5[0x1c] = uVar15;
      puVar5[0x1b] = uStack_78;
      puVar5[0x1a] = uStack_80;
      uStack_80 = 0;
      uStack_78 = 0;
      if (param_4[1] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_00 != 0);
      }
      puVar13 = puVar5 + 0x1e;
      func_0x00010b147e48();
      FUN_10b1c41c0();
      puVar5[0x6d] = puVar13;
      uVar2 = *(undefined4 *)(param_5 + 0x18);
      uVar3 = *(undefined4 *)(param_5 + 0x50);
      if (*(char *)(param_5 + 0x58) == '\0') {
        uVar2 = 5;
        uVar3 = 0;
      }
      *(undefined4 *)(puVar5 + 0x6e) = uVar2;
      *(undefined4 *)((long)puVar5 + 0x374) = uVar3;
      puVar5[0x6f] = puVar5 + 0x1e;
      *(undefined1 *)(puVar5 + 0x70) = uVar4;
      func_0x000107c27994(puVar5 + 0x71,&lStack_c8);
      func_0x000107c27994(puVar5 + 0x74,&lStack_e0);
      lVar12 = param_6[1];
      puVar5[0x77] = *param_6;
      puVar5[0x78] = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
      FUN_10b121fd0(puVar5 + 0x79,param_7);
      func_0x00010b1ab178();
      puVar5[0x89] = uVar14;
      puVar5[0x88] = uVar7;
      if (extraout_x8 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_02 != 0);
      }
      lVar12 = param_9[1];
      uVar7 = *param_9;
      puVar5[0x8b] = param_9[1];
      puVar5[0x8a] = uVar7;
      if (lVar12 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_03 != 0);
      }
      ppuVar6 = &PTR_DAT_110cc2820;
      func_0x000107c2be18();
      puVar5[0x8c] = ppuVar6;
      *(undefined1 *)(puVar5 + 0x8d) = (undefined1)param_12;
      bVar1 = *(byte *)(param_5 + 0x88) & *(int *)(param_5 + 100) == 1;
      *(byte *)((long)puVar5 + 0x469) = bVar1;
      *(undefined1 *)((long)puVar5 + 0x46a) = 1;
      *(undefined1 *)((long)puVar5 + 0x46b) = param_12._1_1_;
      *(undefined1 *)((long)puVar5 + 0x46c) = param_12._2_1_;
      *(undefined1 *)((long)puVar5 + 0x46d) = param_13;
      puVar5[0x8f] = uStack_a8;
      puVar5[0x8e] = uStack_b0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      puVar5[0x90] = &PTR_FUN_110cc2848;
      puVar5[0x93] = 0;
      puVar5[0x92] = 0;
      puVar5[0x91] = puVar5 + 0x92;
      puVar5[0x97] = 0;
      puVar5[0x96] = 0;
      puVar5[0x95] = puVar5 + 0x96;
      puVar5[0x94] = &PTR_SUB_110cc2878;
      puVar5[0x98] = 0;
      *(undefined1 *)(puVar5 + 0x99) = 0;
      *(undefined1 *)(puVar5 + 0x9b) = 0;
      *(undefined1 *)(puVar5 + 0x9c) = 0;
      *(undefined1 *)((long)puVar5 + 0x4e4) = 0;
      *(undefined1 *)(puVar5 + 0x9d) = 0;
      *(undefined1 *)((long)puVar5 + 0x4ec) = 0;
      puVar5[0x9e] = 0x32aaaba7;
      puVar5[0xa5] = 0;
      puVar5[0xa2] = 0;
      puVar5[0xa1] = 0;
      puVar5[0xa4] = 0;
      puVar5[0xa3] = 0;
      puVar5[0xa0] = 0;
      puVar5[0x9f] = 0;
      puVar5[0xa6] = puVar5 + 0xa6;
      puVar5[0xa7] = puVar5 + 0xa6;
      puVar5[0xa9] = 0x32aaaba7;
      puVar5[0xa8] = 0;
      puVar5[0xb5] = 0;
      puVar5[0xb4] = 0;
      puVar5[0xab] = 0;
      puVar5[0xaa] = 0;
      puVar5[0xad] = 0;
      puVar5[0xac] = 0;
      puVar5[0xaf] = 0;
      puVar5[0xae] = 0;
      *(undefined8 *)((long)puVar5 + 0x582) = 0;
      *(undefined8 *)((long)puVar5 + 0x57a) = 0;
      puVar5[0xb3] = puVar5 + 0xb4;
      puVar5[0xb2] = &PTR_FUN_110cc28e0;
      puVar5[0xb6] = 0;
      puVar5[0xb9] = 0;
      puVar5[0xb8] = 0;
      puVar5[0xb7] = puVar5 + 0xb8;
      puVar5[0xbc] = 0;
      puVar5[0xbb] = 0;
      puVar5[0xba] = puVar5 + 0xbb;
      puVar5[0xc1] = 0;
      *(undefined1 *)(puVar5 + 0xc0) = 0;
      puVar5[0xbf] = 0;
      puVar5[0xbe] = 0;
      puVar5[0xbd] = 0;
      *(byte *)(puVar5 + 0xc2) = param_12._3_1_ & (bVar1 ^ 1);
      *(undefined1 *)((long)puVar5 + 0x611) = 0;
      puVar5[0xc4] = 0;
      puVar5[0xc3] = 0;
      puVar5[0xc6] = 0;
      puVar5[0xc5] = 0;
      puVar5[200] = 0;
      puVar5[199] = 0;
      *(undefined4 *)(puVar5 + 0xc9) = 0x3f800000;
      *(undefined1 *)(puVar5 + 0xca) = 0;
      *(undefined1 *)(puVar5 + 0xcf) = 0;
      *(undefined1 *)(puVar5 + 0xcd) = 0;
      puVar5[0xcc] = 0;
      puVar5[0xcb] = 0;
      puVar5[0xd0] = &UNK_1053a6a3c;
      puVar5[0xd1] = &PTR_DAT_110873830;
      lVar12 = *param_10;
      puVar5[0xd6] = lVar12;
      if (lVar12 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_04 != 0);
      }
      *(undefined1 *)(puVar5 + 0xd7) = 0;
      *(undefined1 *)(puVar5 + 0xda) = 0;
      if (cStack_88 == '\x01') {
        *(undefined4 *)(puVar5 + 0xd7) = puStack_a0._0_4_;
        puVar5[0xd9] = uStack_90;
        puVar5[0xd8] = puStack_98;
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        *(undefined1 *)(puVar5 + 0xda) = 1;
      }
      *(undefined1 *)(puVar5 + 0xdb) = 0;
      *(undefined1 *)(puVar5 + 0xdd) = 0;
      *(undefined1 *)(puVar5 + 0xde) = 0;
      *(undefined1 *)(puVar5 + 0xdf) = 0;
      *(undefined1 *)(puVar5 + 0xe3) = 0;
      puVar5[0xe4] = 0;
      puVar5[0xe6] = 0;
      puVar5[0xe5] = 0;
      if ((cStack_88 != '\0') && (puVar5[0xd8] == 0)) {
        func_0x00010b19caac(puVar5 + 0xd7);
      }
      puVar13 = puVar5;
      func_0x00010b19cae0(puVar5,param_6,param_5);
      FUN_10b2029a0();
      FUN_10b20345c();
      ppuVar6 = &PTR_PTR_113386a18;
      if ((undefined **)puVar13[3] != (undefined **)0x0) {
        ppuVar6 = (undefined **)puVar13[3];
      }
      *(undefined4 *)(puVar5 + 0x17) = *(undefined4 *)((long)ppuVar6 + 0x44);
      ppuVar6 = &PTR_PTR_113386a18;
      if ((undefined **)puVar13[3] != (undefined **)0x0) {
        ppuVar6 = (undefined **)puVar13[3];
      }
      *(undefined4 *)((long)puVar5 + 0xbc) = *(undefined4 *)(ppuVar6 + 9);
      func_0x00010b125888(&uStack_b0);
      FUN_10b1a3cac(&puStack_a0);
      FUN_10b197610(&uStack_80);
      uVar7 = 8;
      __Znwm();
      __ZNSt3__17promiseIvEC1Ev();
      *param_1 = (long)puVar5;
      puVar8 = (undefined8 *)0x28;
      __Znwm();
      puVar8[1] = 0;
      *puVar8 = &PTR_FUN_110cc2a88;
      puVar8[2] = 0;
      puVar8[3] = puVar5;
      puVar8[4] = uVar7;
      param_1[1] = (long)puVar8;
      puVar13 = puVar5;
      if ((puVar5[2] == 0) || (*(long *)(puVar5[2] + 8) == -1)) {
        do {
          puStack_98 = puVar8;
          puStack_a0 = puVar13;
          func_0x00010b1aa2e0();
          puVar13 = puStack_a0;
          puVar8 = puStack_98;
        } while (extraout_w10_05 != 0);
        FUN_10b1a5ae8(puVar5 + 1,&puStack_a0);
        func_0x00010b1aae00();
      }
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_a0,uVar7);
      param_1[2] = (long)puStack_a0;
      puStack_a0 = (undefined8 *)0x0;
      uVar9 = 0;
      __ZNSt3__16futureIvED1Ev();
      lVar12 = *param_1;
      if ((*(char *)(lVar12 + 0x6d0) == '\x01') && (*(long *)(lVar12 + 0x6b0) == 0)) {
        uVar9 = *(ulong *)(lVar12 + 0x6c0);
        FUN_10b1b3e60(uVar9,lVar12 + 0xf0,*(undefined8 *)(lVar12 + 0x368));
        if ((int)uVar9 != 0) {
          if (*(char *)(lVar12 + 0x4ec) == '\x01') {
            *(undefined1 *)(lVar12 + 0x4ec) = 0;
          }
          FUN_10b19c210(&puStack_a0,lVar12);
          func_0x00010b19ca5c(lVar12 + 0x6d8,&puStack_a0);
          uVar9 = 0;
          FUN_10b166558();
        }
      }
      func_0x00010b1aaeb4(*param_1);
      if ((uVar9 & 1) == 0) {
        puVar5 = (undefined8 *)*param_1;
        puStack_98 = (undefined8 *)param_1[1];
        uStack_108 = 0;
        puVar13 = puVar5;
        puStack_a0 = puVar5;
        if (puStack_98 != (undefined8 *)0x0) {
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12 != 0);
          do {
            func_0x00010b1aa43c();
          } while (extraout_w12_00 != 0);
          puVar13 = (undefined8 *)*param_1;
          uStack_108 = extraout_x8_00;
          puVar5 = extraout_x9;
        }
        uStack_f8 = puVar13[0x8b];
        uStack_100 = puVar13[0x8a];
        puStack_110 = puVar5;
        if (puVar13[0x8b] != 0) {
          do {
            func_0x00010b1aa6f4();
            puVar5 = extraout_x9_00;
          } while (extraout_w11 != 0);
        }
        FUN_10b19bf88(auStack_f0,puVar5 + 0x1a,&puStack_110);
        func_0x000107c27b58(auStack_f0);
        FUN_10b19c1ec(&puStack_110);
        func_0x00010b1aae00();
      }
      func_0x000107c27914(&lStack_e0);
      func_0x000107c27914(&lStack_c8);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10b19bf88; end: 10b19c1eb;  */

void FUN_10b19bf88(void)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined **ppuVar5;
  undefined8 *unaff_x22;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_48;
  
  func_0x00010b1aa794();
  func_0x00010b1aa2f0();
  ppuVar2 = (undefined **)0xa8;
  uStack_48 = extraout_x8;
  __Znwm();
  puVar7 = (undefined *)unaff_x22[1];
  puVar6 = (undefined *)*unaff_x22;
  puVar9 = (undefined *)unaff_x22[3];
  puVar8 = (undefined *)unaff_x22[2];
  ppuVar5 = ppuVar2 + 10;
  ppuVar2[0xb] = puVar7;
  *ppuVar5 = puVar6;
  *ppuVar2 = FUN_10b1a96a4;
  ppuVar2[1] = FUN_10b1a982c;
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  ppuVar2[0xd] = puVar9;
  ppuVar2[0xc] = puVar8;
  unaff_x22[2] = 0;
  unaff_x22[3] = 0;
  FUN_10b124f8c(ppuVar2 + 2);
  ppuVar1 = ppuVar2 + 0x10;
  func_0x00010b1aae74();
  func_0x00010b1ab178();
  ppuVar2[0xf] = puVar7;
  ppuVar2[0xe] = puVar6;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b1278fc(ppuVar1,ppuVar2 + 0xe);
  ppuVar3 = ppuVar1;
  FUN_10b12d174();
  if (((ulong)ppuVar3 & 1) == 0) {
    *(undefined1 *)(ppuVar2 + 0x14) = 0;
    pppuVar4 = &ppuStack_c8;
    ppuStack_c8 = ppuVar2;
    ppuStack_c0 = ppuVar1;
    FUN_10b12d1c8(&ppuStack_a8,ppuVar1);
    ppuVar2 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      do {
        func_0x00010b1aa374();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b1aa310();
        func_0x00010b1aa774();
      }
    }
    while (func_0x00010b1aa28c(uStack_48), !(bool)in_ZR) {
      ___stack_chk_fail();
      if ((int)pppuVar4 == 0) {
        do {
          func_0x00010b1aa5e8();
        } while ((int)pppuVar4 == 0);
        func_0x00010b1aaaf0();
      }
      func_0x00010b1aa840();
      func_0x00010b1aa878();
      func_0x00010b1aa6dc();
      ___cxa_end_catch();
LAB_10b19c0ac:
      func_0x00010b1aa598();
      *(undefined1 *)(ppuVar2 + 0x14) = extraout_w8;
      func_0x00010b1aa9ec();
      if ((bool)in_ZR) {
        puStack_b0 = auStack_b8;
        func_0x00010b1ab08c();
        func_0x000107c27b6c();
      }
      else {
        func_0x00010b1aa67c(auStack_b8);
        puStack_b0 = auStack_b8;
        func_0x00010b1ab08c();
        func_0x000104bf33ec();
        func_0x00010b1aab9c();
      }
      func_0x00010b1aa4d4();
      FUN_10b19c1ec(ppuVar5);
      func_0x00010b1aa42c();
    }
    return;
  }
  FUN_10b12d0d0(ppuVar1);
  func_0x00010b1aaaf0();
  ppuVar2[0x13] = ppuVar2[0xf];
  ppuVar2[0x12] = ppuVar2[0xe];
  if (ppuVar2[0xf] != (undefined *)0x0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  puVar7 = ppuVar2[0xb];
  puVar6 = ppuVar2[10];
  if (ppuVar2[0xb] != (undefined *)0x0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_01 != 0);
  }
  ppuStack_a8 = (undefined **)FUN_10b1a5b28;
  ppuStack_a0 = &PTR_FUN_110cc2ad8;
  ppuStack_c8 = (undefined **)0x0;
  ppuStack_c0 = (undefined **)0x0;
  puStack_98 = puVar6;
  puStack_90 = puVar7;
  func_0x00010b1aa6d0();
  pppuVar4 = &ppuStack_a8;
  (*extraout_x8_01)();
  func_0x00010b1aa520(ppuStack_a0);
  func_0x00010b1aaa08();
  func_0x00010b1aa9f8();
  func_0x00010b1aa6b4();
  func_0x00010b1aa840();
  goto LAB_10b19c0ac;
}



/* Entry: 10b19c1ec; end: 10b19c20f;  */

long FUN_10b19c1ec(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aa77c();
  func_0x000106e50c54();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b19c210; end: 10b19ca5b;  */

void FUN_10b19c210(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  undefined8 **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  long lVar12;
  long lVar13;
  undefined8 *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 *puStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_258 [32];
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined8 uStack_10;
  
  func_0x00010b1aac94();
  func_0x00010b1aa2f0();
  puVar2 = (undefined8 *)0x1408;
  uStack_10 = extraout_x8_00;
  __Znwm();
  *puVar2 = FUN_10b1a8e8c;
  puVar2[1] = FUN_10b1a94f0;
  puVar2[0x27f] = param_1;
  FUN_10b14be30(puVar2 + 2);
  ppuVar6 = (undefined8 **)(puVar2 + 0xe1);
  FUN_10b15b39c(extraout_x8,puVar2 + 2);
  FUN_10b1a6110(&puStack_290,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar2[0x271] = puStack_290;
  puVar2[0x272] = puStack_288;
  if (puStack_288 != (undefined8 *)0x0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b129c40(&puStack_290);
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010b1aa740();
  func_0x00010b1aa5a4(&puStack_2b8,&puStack_290);
  func_0x00010b1aa470(uVar9,0xba,&puStack_2b8);
  ppuVar10 = (undefined8 **)0x1008;
  func_0x00010b1aa434();
  func_0x00010b1aa35c();
  lVar5 = *(long *)(param_1 + 200);
  puVar2[0x273] = *(undefined8 *)(param_1 + 0xc0);
  puVar2[0x274] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  lVar12 = 0x13a8;
  *(undefined4 *)(puVar2 + 0x280) = *(undefined4 *)(param_1 + 0x370);
  puVar2[0x275] = *(undefined8 *)(param_1 + 0x6c0);
  lVar5 = *(long *)(param_1 + 0x6c8);
  puVar2[0x276] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b12394c(puVar2 + 0x201,param_1 + 0xf0);
  lVar13 = 0x1280;
  FUN_10b121300(puVar2 + 0x250,*(undefined8 *)(param_1 + 0x368));
  ppuVar11 = (undefined8 **)0x1340;
  uVar1 = *(undefined4 *)(param_1 + 0x6b8);
  puVar2[0x1af] = *(undefined8 *)(param_1 + 0x3b8);
  lVar5 = *(long *)(param_1 + 0x3c0);
  puVar2[0x1b0] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b195d34(puVar2 + 0x268,puVar2 + 0x1af,1);
  ppuVar4 = (undefined8 **)(puVar2 + 0x201);
  FUN_10b1b3f8c(ppuVar6,puVar2 + 0x275,ppuVar4,puVar2 + 0x250,uVar1,puVar2 + 0x268);
  ppuVar3 = ppuVar6;
  FUN_10b1a835c();
  if (((ulong)ppuVar3 & 1) == 0) {
    *(undefined1 *)((long)puVar2 + 0x1404) = 0;
    puStack_2b8 = puVar2;
    ppuStack_2b0 = ppuVar6;
    func_0x00010b1aad18(&puStack_290);
    FUN_10b1a8404();
    puVar2 = puStack_288;
    if (puStack_288 == (undefined8 *)0x0) goto LAB_10b19c778;
    do {
      func_0x00010b1aa374();
    } while (extraout_w11 != 0);
    if (extraout_x9_01 != 0) goto LAB_10b19c778;
    func_0x00010b1aa310();
    func_0x00010b1aa774();
    goto LAB_10b19c778;
  }
  FUN_10b1a0a70(puVar2 + 0x12,ppuVar6);
  func_0x00010b1aab48();
  FUN_10b125534(puVar2 + 0x268);
  func_0x00010b1aa8dc();
  FUN_10b24f5cc(puVar2 + 0x250);
  func_0x00010b121af0(puVar2 + 0x201);
  func_0x00010b1257d4(puVar2 + 0x275);
  func_0x00010b11fabc(puVar2 + 0x277,puVar2 + 0x271);
  if (puVar2[0x277] == 0) {
    func_0x00010b1aabd4();
    func_0x00010b1aa740();
    func_0x00010b1aabc0();
    func_0x00010b1aa508();
    func_0x00010b1aa4b8();
    func_0x00010b1aa2cc();
    func_0x00010b1aa434();
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
      func_0x00010b1aabb4();
    } while (!(bool)in_ZR);
LAB_10b19c710:
    func_0x00010b1aa4ec();
  }
  else {
    if ((*(byte *)(puVar2 + 0xe0) & 1) == 0) {
      lVar5 = puVar2[0x12];
      puVar2[0xe1] = lVar5;
      puVar2[0xe2] = puVar2[0x13];
      if (puVar2[0x13] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_03 != 0);
      }
      if (lVar5 == 0) {
        func_0x00010b1aabd4();
        func_0x00010b1aa740();
        func_0x00010b1aa5f0();
        func_0x00010b1aa4b8();
        func_0x00010b1aa2cc();
        func_0x00010b1aa434();
        ppuVar10 = &puStack_290;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
          func_0x00010b1aabb4();
        } while (!(bool)in_ZR);
        FUN_10b19af84(&puStack_290,puVar2[0x277]);
        func_0x00010b1aaf18();
        func_0x00010b1aaf10();
        func_0x00010b1aaf60();
        iVar7 = 0;
      }
      else {
        func_0x00010b1aabe0();
        func_0x00010b1aa880();
        func_0x00010b1aab80();
        func_0x00010b1aaf40(&puStack_290);
        func_0x00010b1aa6bc();
        func_0x00010b1aa738();
        func_0x00010b1aa9a4();
        func_0x00010b1aa468();
        iVar7 = 3;
      }
      func_0x00010b1aab40();
      if (lVar5 != 0) goto LAB_10b19c718;
      goto LAB_10b19c710;
    }
    lVar12 = 0x13d8;
    FUN_10b19af84(puVar2 + 0x27b,puVar2[0x27f]);
    lVar5 = puVar2[0x27f];
    __ZNSt3__15mutex4lockEv(lVar5 + 0x548);
    func_0x00010b1aa8c0();
    func_0x00010b1aafbc();
    lVar13 = 0x1358;
    func_0x00010b1aa96c();
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    puStack_288 = (undefined8 *)0x0;
    uStack_280 = 0;
    puStack_290 = (undefined8 *)0x0;
    uStack_278 = uStack_278 & 0xffffffffffffff00;
    func_0x00010b1aa40c(&puStack_290);
    lVar5 = lVar5 + 0xf0;
    ppuVar4 = &puStack_290;
    FUN_10b1151e4();
    puVar8 = (undefined8 *)puVar2[0x27f];
    func_0x00010b1aaf68();
    func_0x00010b1aa8a4();
    if ((*(byte *)(puVar2 + 0x1c0) & 1) == 0) {
      func_0x00010b1aabd4();
      func_0x00010b1aa740();
      func_0x00010b1aabc0();
      func_0x00010b1aa508();
      func_0x00010b1aa4b8();
      func_0x00010b1aa2cc();
      ppuVar10 = (undefined8 **)(puVar2 + 0x264);
      puVar8 = puVar2 + 0x26e;
      func_0x00010b1aa434();
      ppuVar11 = &puStack_290;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
        func_0x00010b1aabb4();
      } while (!(bool)in_ZR);
      func_0x00010b1aa928();
      func_0x000107c278b8(puVar8);
      ppuVar4 = (undefined8 **)&UNK_10f7312f5;
      func_0x00010b139e90(ppuVar10);
      puStack_288 = (undefined8 *)puVar2[0x26f];
      puStack_290 = (undefined8 *)*puVar8;
      func_0x00010b1ab0f0();
      uStack_270 = 0;
      auStack_258[0] = 0;
      uStack_280 = extraout_x8_01;
      uStack_278 = extraout_x9_02;
      if (*(char *)(puVar2 + 0x267) == '\x01') {
        func_0x00010b1aa908(&puStack_290);
        auStack_258[0] = extraout_w8;
      }
      func_0x00010b1aa6bc();
      func_0x00010b1aa738();
      func_0x00010b1aab70();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
    }
    else {
      func_0x00010b1aa94c();
      if (lVar5 != 0) {
        func_0x00010b1aad3c();
        (*extraout_x9)(&puStack_290);
        func_0x00010b1aad3c(*puVar8);
        (*extraout_x9_00)(&puStack_2b8);
        iVar7 = (int)&puStack_290;
        ppuVar4 = &puStack_2b8;
        func_0x000107c278d0();
        func_0x00010b1aaa10();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_290);
        if (iVar7 != 0) {
          uVar9 = puVar2[0x273];
          func_0x00010b1aa740();
          func_0x00010b1aa5a4(&puStack_2b8,&puStack_290);
          ppuVar4 = (undefined8 **)0xbb;
          func_0x00010b1aa470(uVar9,0xbb,&puStack_2b8);
          func_0x00010b1aa434();
          func_0x00010b1aa35c();
        }
      }
      func_0x00010b1aaf70(puVar2[0x27f]);
      func_0x00010b1aa7a0();
      FUN_10b1a0b4c(&puStack_290);
      func_0x00010b1aa6bc();
      func_0x00010b1aa738();
      func_0x00010b1aabcc();
    }
    func_0x00010b1aac18();
    func_0x00010b1aa98c();
    func_0x00010b1aab68();
    func_0x00010b1aac8c();
  }
  iVar7 = 3;
LAB_10b19c718:
  func_0x00010b1aab24();
  func_0x00010b1aaa00();
  func_0x00010b1aaf04();
  func_0x00010b1aac10();
  in_ZR = iVar7 == 3;
  if (!(bool)in_ZR) goto LAB_10b19c770;
  while( true ) {
    func_0x00010b1aa598();
    *(undefined1 *)((long)ppuVar6 + 0xcfc) = extraout_w8_00;
    func_0x00010b1aa66c();
    if ((bool)in_ZR) {
      ppuStack_298 = ppuVar4;
      func_0x00010b1ab080();
      FUN_10b14bca0();
    }
    else {
      ppuVar6 = &puStack_2a0;
      __ZNSt13exception_ptrC1ERKS_(&puStack_2a0);
      ppuStack_298 = ppuVar6;
      func_0x00010b1ab080();
      FUN_10b14bb60();
      __ZNSt13exception_ptrD1Ev(&puStack_2a0);
    }
LAB_10b19c770:
    func_0x00010b1aa5c0();
    func_0x00010b1aa42c();
LAB_10b19c778:
    func_0x00010b1aa28c(uStack_10);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010b1aa45c();
    if ((int)ppuVar4 == 0) {
      do {
        func_0x00010b1aa5e8();
      } while ((int)ppuVar4 == 0);
      func_0x00010b1aab48();
      FUN_10b125534((long)puVar2 + (long)ppuVar11);
      func_0x00010b1aa8dc();
      FUN_10b24f5cc((long)puVar2 + lVar13);
      func_0x00010b121af0((long)puVar2 + (long)ppuVar10);
      func_0x00010b1257d4((long)puVar2 + lVar12);
    }
    else {
      func_0x00010b1aa434();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_280);
      func_0x00010b1aac18();
      func_0x00010b1aa98c();
      func_0x00010b1aab68();
      func_0x00010b1aac8c();
      func_0x00010b1aab24();
      func_0x00010b1aaa00();
    }
    func_0x00010b1aaf04();
    func_0x00010b1aac10();
    func_0x00010b1aa878();
    func_0x00010b1aaa48();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b19ca5c; end: 10b19cb8b;  */

undefined8 * FUN_10b19ca5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    uVar1 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010b1ab0c4(uVar1);
    FUN_10b166558();
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010b1ab124();
  }
  return param_1;
}



/* Entry: 10b19cb8c; end: 10b19cdd3;  */

undefined8 * FUN_10b19cb8c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int iVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b1aa2b8();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    unaff_x20 = param_1 + 0x1e;
    *param_1 = &PTR_FUN_110cc27a8;
    *(undefined1 *)((long)register0x00000008 + -0x268) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined1 *)((long)register0x00000008 + -400) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x148) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xfe) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2a8) = 0;
    func_0x00010b1aa40c((undefined1 *)((long)register0x00000008 + -0x2c0));
    iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0x2c0);
    FUN_10b1151e4(unaff_x20);
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x2c0);
    func_0x00010b1aaf68();
    lVar3 = unaff_x19[0xd1];
    if ((*(byte *)(lVar3 + 8) & 1) == 0) {
      unaff_x21 = (long *)unaff_x19[0x88];
      *(undefined8 *)((long)register0x00000008 + -0x2f0) = unaff_x19[0xd0];
      (**(code **)(lVar3 + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x2e8),unaff_x19 + 0xd1);
      *(code **)((long)register0x00000008 + -0x2c0) = FUN_10b1a5c64;
      *(undefined ***)((long)register0x00000008 + -0x2b8) = &PTR_DAT_110cc2af0;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) =
           *(undefined8 *)((long)register0x00000008 + -0x2f0);
      (**(code **)(*(long *)((long)register0x00000008 + -0x2e8) + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x2a8),
                 (undefined1 *)((long)register0x00000008 + -0x2e8));
      iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0x2c0);
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      func_0x00010b1aa520(*(undefined8 *)((long)register0x00000008 + -0x2b8));
      func_0x00010b1aa400(*(undefined8 *)((long)register0x00000008 + -0x2e8));
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2f0);
    }
    func_0x00010b1a3c58(unaff_x19 + 0xe4);
    func_0x000107c27f14(unaff_x19 + 0xdf);
    FUN_10b1a3c8c(unaff_x19 + 0xdb);
    FUN_10b1a3cac(unaff_x19 + 0xd7);
    func_0x00010b12b970(unaff_x19 + 0xd6);
    (**(code **)unaff_x19[0xd1])(unaff_x19 + 0xd1);
    FUN_10b1a3c8c(unaff_x19 + 0xcd);
    FUN_10b133118(unaff_x19 + 0xcb);
    FUN_10b1a5c14(unaff_x19 + 0xc5);
    FUN_10b139f84(unaff_x19 + 0xba);
    FUN_10b139f84(unaff_x19 + 0xb7);
    func_0x00010b1a3cdc(unaff_x19 + 0xb2);
    __ZNSt3__15mutexD1Ev(unaff_x19 + 0xa9);
    FUN_10b1a3d44(unaff_x19 + 0x9e);
    FUN_10b1a3dc8(unaff_x19 + 0x99);
    func_0x00010b1a3e0c(unaff_x19 + 0x94);
    func_0x00010b1a3e74(unaff_x19 + 0x90);
    func_0x00010b125888(unaff_x19 + 0x8e);
    func_0x000106e50c54(unaff_x19 + 0x8a);
    func_0x000107c27c20(unaff_x19 + 0x88);
    func_0x00010529fe04(unaff_x19 + 0x79);
    func_0x0001052ac684(unaff_x19 + 0x77);
    func_0x000107c27914(unaff_x19 + 0x74);
    func_0x000107c27914(unaff_x19 + 0x71);
    func_0x00010b121af0(unaff_x20);
    func_0x00010b1257f8(unaff_x19 + 0x1c);
    FUN_10b197610(unaff_x19 + 0x1a);
    func_0x00010b12487c(unaff_x19 + 0x18);
    __ZNSt3__121recursive_timed_mutexD1Ev(unaff_x19 + 3);
    puVar1 = unaff_x19 + 1;
    func_0x00010b124c0c();
    func_0x00010b1aa28c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = puVar1;
    if (iVar2 == 0) {
      func_0x00010b1aa3d8();
    }
    else {
      func_0x00010b1aa520(*(undefined8 *)((long)register0x00000008 + -0x2b8));
    }
    unaff_x30 = FUN_10b19cdd4;
    func_0x00010b1aafd4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2f0);
    unaff_x19 = puVar1;
  }
  return unaff_x19;
}



/* Entry: 10b19cdd4; end: 10b19cdd7;  */

undefined8 * FUN_10b19cdd4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int iVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b1aa2b8();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    unaff_x20 = param_1 + 0x1e;
    *param_1 = &PTR_FUN_110cc27a8;
    *(undefined1 *)((long)register0x00000008 + -0x268) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined1 *)((long)register0x00000008 + -400) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x148) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined1 *)((long)register0x00000008 + -0xfe) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x2a8) = 0;
    func_0x00010b1aa40c((undefined1 *)((long)register0x00000008 + -0x2c0));
    iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0x2c0);
    FUN_10b1151e4(unaff_x20);
    unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x2c0);
    func_0x00010b1aaf68();
    lVar3 = unaff_x19[0xd1];
    if ((*(byte *)(lVar3 + 8) & 1) == 0) {
      unaff_x21 = (long *)unaff_x19[0x88];
      *(undefined8 *)((long)register0x00000008 + -0x2f0) = unaff_x19[0xd0];
      (**(code **)(lVar3 + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x2e8),unaff_x19 + 0xd1);
      *(code **)((long)register0x00000008 + -0x2c0) = FUN_10b1a5c64;
      *(undefined ***)((long)register0x00000008 + -0x2b8) = &PTR_DAT_110cc2af0;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) =
           *(undefined8 *)((long)register0x00000008 + -0x2f0);
      (**(code **)(*(long *)((long)register0x00000008 + -0x2e8) + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x2a8),
                 (undefined1 *)((long)register0x00000008 + -0x2e8));
      iVar2 = (int)(undefined1 *)((long)register0x00000008 + -0x2c0);
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      func_0x00010b1aa520(*(undefined8 *)((long)register0x00000008 + -0x2b8));
      func_0x00010b1aa400(*(undefined8 *)((long)register0x00000008 + -0x2e8));
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x2f0);
    }
    func_0x00010b1a3c58(unaff_x19 + 0xe4);
    func_0x000107c27f14(unaff_x19 + 0xdf);
    FUN_10b1a3c8c(unaff_x19 + 0xdb);
    FUN_10b1a3cac(unaff_x19 + 0xd7);
    func_0x00010b12b970(unaff_x19 + 0xd6);
    (**(code **)unaff_x19[0xd1])(unaff_x19 + 0xd1);
    FUN_10b1a3c8c(unaff_x19 + 0xcd);
    FUN_10b133118(unaff_x19 + 0xcb);
    FUN_10b1a5c14(unaff_x19 + 0xc5);
    FUN_10b139f84(unaff_x19 + 0xba);
    FUN_10b139f84(unaff_x19 + 0xb7);
    func_0x00010b1a3cdc(unaff_x19 + 0xb2);
    __ZNSt3__15mutexD1Ev(unaff_x19 + 0xa9);
    FUN_10b1a3d44(unaff_x19 + 0x9e);
    FUN_10b1a3dc8(unaff_x19 + 0x99);
    func_0x00010b1a3e0c(unaff_x19 + 0x94);
    func_0x00010b1a3e74(unaff_x19 + 0x90);
    func_0x00010b125888(unaff_x19 + 0x8e);
    func_0x000106e50c54(unaff_x19 + 0x8a);
    func_0x000107c27c20(unaff_x19 + 0x88);
    func_0x00010529fe04(unaff_x19 + 0x79);
    func_0x0001052ac684(unaff_x19 + 0x77);
    func_0x000107c27914(unaff_x19 + 0x74);
    func_0x000107c27914(unaff_x19 + 0x71);
    func_0x00010b121af0(unaff_x20);
    func_0x00010b1257f8(unaff_x19 + 0x1c);
    FUN_10b197610(unaff_x19 + 0x1a);
    func_0x00010b12487c(unaff_x19 + 0x18);
    __ZNSt3__121recursive_timed_mutexD1Ev(unaff_x19 + 3);
    puVar1 = unaff_x19 + 1;
    func_0x00010b124c0c();
    func_0x00010b1aa28c(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = puVar1;
    if (iVar2 == 0) {
      func_0x00010b1aa3d8();
    }
    else {
      func_0x00010b1aa520(*(undefined8 *)((long)register0x00000008 + -0x2b8));
    }
    unaff_x30 = FUN_10b19cdd4;
    func_0x00010b1aafd4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2f0);
    unaff_x19 = puVar1;
  }
  return unaff_x19;
}



/* Entry: 10b19cdd8; end: 10b19cdeb;  */

void FUN_10b19cdd8(void)

{
  FUN_10b19cb8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19cdec; end: 10b19ce27;  */

undefined1  [16] FUN_10b19cdec(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auVar2 [16];
  
  func_0x00010b1aa544();
  lVar1 = *(long *)(unaff_x19 + 0x168);
  func_0x00010b1aa478();
  auVar2[8] = lVar1 != 0;
  auVar2._0_8_ = lVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10b19ce28; end: 10b19ceef;  */

void FUN_10b19ce28(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_c0 [120];
  byte bStack_48;
  undefined1 auStack_40 [16];
  
  FUN_10b19af84(auStack_40);
  auStack_c0[0] = 0;
  bStack_48 = 0;
  plVar2 = (long *)(param_2 + 0x638);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    if ((*(char *)(plVar2 + 0x13) == '\x01') && (*(char *)(plVar2 + 0x12) == '\x01')) {
      if ((bStack_48 & 1) == 0) {
        FUN_10b1a4b94(auStack_c0,plVar2 + 3);
      }
      else {
        puVar1 = auStack_c0;
        FUN_10b193bf8(auStack_c0,plVar2 + 3,FUN_10b193c84);
        FUN_10b193bc4(auStack_c0,puVar1);
      }
    }
  }
  FUN_10b1a1a00(param_1,auStack_c0,param_2 + 0x3c8);
  FUN_10b0faf98(auStack_c0);
  func_0x00010b1aaa78();
  return;
}



/* Entry: 10b19cef0; end: 10b19cf4b;  */

void FUN_10b19cef0(long param_1)

{
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010b1aaf9c(param_1,&UNK_10f406df1);
    func_0x00010b1a3e3c(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    func_0x00010b1aa788();
    __ZNSt3__121recursive_timed_mutex6unlockEv();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10b19cf4c; end: 10b19cfcb;  */

void FUN_10b19cf4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined1 *puVar2;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_1 + 0x148) == '\x01') {
    func_0x00010b1aa934();
    iVar1 = (int)param_1 + 0xf0;
    FUN_10b1c4a78();
    if (((iVar1 == 3) || (param_3 = param_5, unaff_x21 = param_4, iVar1 == 4)) && (param_3 != 0)) {
      func_0x00010b20c52c(*(undefined8 *)(unaff_x19 + 0xc0),unaff_x21,param_3,
                          *(undefined4 *)(unaff_x19 + 0x108));
      func_0x00010b20c574();
      func_0x00010b20c634();
      puVar2 = auStack_80;
      func_0x00010b20c508(puVar2);
      func_0x00010b20c564();
      func_0x00010b20c5d0();
      func_0x00010b20c4f4();
      func_0x00010b20c4b8();
      func_0x00010b20c454(auStack_58,puVar2);
      func_0x00010b20c54c();
      FUN_10b120618(auStack_80);
      func_0x00010b20c4e0();
      func_0x00010b20c55c();
      FUN_10b120618(auStack_58);
      return;
    }
  }
  return;
}



/* Entry: 10b19cfcc; end: 10b19d007;  */

void FUN_10b19cfcc(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b1aa544();
    FUN_10b19d008();
    func_0x00010b1aa478();
  }
  return;
}



/* Entry: 10b19d008; end: 10b19d0af;  */

void FUN_10b19d008(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    if (*(char *)(param_1 + 0x178) == '\x01') {
      FUN_10b19d0fc(param_1,param_1 + 0xf0);
    }
    else {
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined1 *)(param_1 + 0x178) = 1;
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  return;
}



/* Entry: 10b19d0b0; end: 10b19d0fb;  */

undefined1 FUN_10b19d0b0(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x00010b1aa544();
  FUN_10b19d008();
  FUN_10b19d0fc();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x600);
  func_0x00010b1aa478();
  return uVar1;
}



/* Entry: 10b19d0fc; end: 10b19d2ab;  */

void FUN_10b19d0fc(int param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_a8 [80];
  long lStack_58;
  long lStack_50;
  long lStack_40;
  long lStack_38;
  
  if (*(char *)(param_2 + 0x88) == '\x01') {
    func_0x00010b1aa568();
    iVar1 = *(int *)(param_2 + 100);
    lVar3 = *(long *)(param_2 + 0x68);
    FUN_10b195a90();
    if ((param_1 == 0) || (*(long *)(unaff_x20 + 0x80) < 1)) {
      if (iVar1 == 1 && lVar3 != 0) {
        func_0x00010b1aa81c(*(undefined8 *)(unaff_x20 + 0x68));
        for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x10) {
          func_0x00010b1aa694();
          FUN_10b202630(auStack_a8);
          func_0x00010b1aa9c4();
          func_0x00010b1aa830();
        }
      }
      else {
        lVar3 = *(long *)(unaff_x20 + 0x68);
        if ((lVar3 == 0) ||
           (lVar3 != *(long *)(unaff_x20 + 0x70) && lVar3 != *(long *)(unaff_x20 + 0x78))) {
          FUN_10b1c4c88();
          if (unaff_x20 == 0) {
            return;
          }
          func_0x00010564c19c(&lStack_58,unaff_x20 + 0x10);
          while (lStack_58 != 0) {
            if ((*(int *)(lStack_58 + 0x44) == 2) && (*(long *)(lStack_58 + 0x30) != 0)) {
              lStack_40 = *(long *)(*(long *)(lStack_58 + 0x38) + 0x10);
              lStack_38 = lStack_40 + *(long *)(lStack_58 + 0x30);
              uVar2 = unaff_x19 + 0x4a0;
              FUN_10b19d360(uVar2,&lStack_40);
              if ((uVar2 & 1) == 0) {
                func_0x00010b1aa694();
                FUN_10b2026a0(auStack_a8);
                FUN_10b19ae08();
                func_0x00010b1aa830();
              }
            }
            func_0x000107c27d54(&lStack_58);
          }
          return;
        }
        func_0x00010b1aa81c();
        for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x10) {
          func_0x00010b1aa694();
          FUN_10b202630(auStack_a8);
          func_0x00010b1aa9c4();
          func_0x00010b1aa830();
        }
      }
      FUN_10b1a4048(&lStack_58);
    }
  }
  return;
}



/* Entry: 10b19d2ac; end: 10b19d35f;  */

void FUN_10b19d2ac(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  undefined1 uStack_50;
  
  lVar1 = param_1;
  func_0x00010b1ab040();
  lVar4 = param_2[1];
  lVar3 = *param_2;
  lVar2 = *(long *)(param_3 + 8);
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  while( true ) {
    if (lVar2 == param_3 + 0x10) {
      uStack_50 = 1;
      lStack_60 = lVar3;
      FUN_10b1a5c9c(param_1,&lStack_60);
      return;
    }
    if (lVar3 < *(long *)(lVar2 + 0x20)) {
      func_0x00010b1ab060();
      FUN_10b1a5c9c();
    }
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar4 <= lVar2) break;
    if (lVar3 <= lVar2) {
      lVar3 = lVar2;
    }
    func_0x00010b1aa868();
    lVar2 = lVar1;
  }
  return;
}



/* Entry: 10b19d360; end: 10b19d3a3;  */

undefined8 FUN_10b19d360(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa574();
  FUN_10b1a5668();
  if ((unaff_x20 + 0x10 == param_1) || (*(long *)(unaff_x19 + 8) <= *(long *)(param_1 + 0x20))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b19d3a4; end: 10b19d3eb;  */

void FUN_10b19d3a4(void)

{
  undefined8 *in_x4;
  
  *in_x4 = 0;
  in_x4[1] = 0;
  func_0x00010b1aadc4();
  func_0x00010b1aa55c();
  return;
}



/* Entry: 10b19d3ec; end: 10b19de6f;  */

code ******
FUN_10b19d3ec(undefined8 *param_1,ulong param_2,code ******param_3,code ******param_4,long *param_5,
             undefined1 param_6,code ******param_7,ulong param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *****pppppcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  code ******unaff_x20;
  long *unaff_x21;
  code ******ppppppcVar10;
  long lVar11;
  code ******ppppppcVar12;
  code *****pppppcVar13;
  code *****pppppcVar14;
  byte in_stack_00000060;
  code *****pppppcStack_220;
  code *****pppppcStack_218;
  code *****pppppcStack_210;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [16];
  code ****ppppcStack_1b8;
  code ****ppppcStack_1b0;
  undefined8 uStack_1a8;
  code *****pppppcStack_1a0;
  code *****pppppcStack_198;
  code *****pppppcStack_190;
  undefined1 auStack_188 [16];
  undefined4 uStack_178;
  undefined1 uStack_174;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_130 [16];
  code ****appppcStack_120 [2];
  code *****pppppcStack_110;
  code *****pppppcStack_108;
  code *****pppppcStack_100;
  code *****pppppcStack_f8;
  code *****pppppcStack_f0;
  undefined8 uStack_e8;
  code *****pppppcStack_e0;
  long lStack_d8;
  code *****pppppcStack_d0;
  long lStack_c8;
  code *****pppppcStack_c0;
  undefined8 uStack_b8;
  code *****pppppcStack_a8;
  code *****pppppcStack_a0;
  code *****pppppcStack_98;
  code *****pppppcStack_90;
  code *****pppppcStack_88;
  
  func_0x00010b1aac94();
  ppppppcVar12 = param_3;
  ppppppcVar10 = param_4;
  plVar7 = param_5;
  func_0x00010b1aa940();
  func_0x00010b1aa2f0();
  pppppcStack_110 = (code *****)ppppppcVar12;
  pppppcStack_108 = (code *****)ppppppcVar10;
  __ZNSt3__16chrono12system_clock3nowEv();
  func_0x00010b1aaf30(appppcStack_120);
  if (*param_5 == 0) {
    func_0x00010b1aaff8();
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = &PTR_DAT_110cc2b68;
    *param_1 = &PTR_FUN_110cc2b18;
    pppppcStack_98 = (code *****)param_5[1];
    pppppcStack_a0 = (code *****)0x0;
    *param_5 = (long)(param_1 + 3);
    param_5[1] = (long)param_1;
    func_0x00010b1aafe4();
  }
  *(byte *)(unaff_x20 + 0xca) = in_stack_00000060 ^ 1 | *(byte *)(unaff_x20 + 0xca);
  ppppppcVar12 = unaff_x20;
  FUN_10b19cdec();
  if ((((long)param_3 < 0) || (in_ZR = param_3 == param_4, (long)param_4 <= (long)param_3)) ||
     (((param_2 & 1) != 0 && (in_ZR = param_3 == ppppppcVar12, (long)ppppppcVar12 <= (long)param_3))
     )) {
    FUN_10b19cef0(appppcStack_120);
    param_5 = (long *)*param_5;
    func_0x000107c278b8(&pppppcStack_a0,&UNK_10f7311f2);
    func_0x00010b1aa8b8(*(undefined8 *)(*param_5 + 0x18),param_5,6,&pppppcStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppcStack_a0);
    param_7 = (code ******)0xffffffffffffffff;
  }
  else {
    if ((param_8 & 1) == 0) {
      param_7 = (code ******)((long)unaff_x20[0xc3] + 1);
      unaff_x20[0xc3] = (code *****)param_7;
      in_ZR = *(char *)(unaff_x20 + 0xdd) == '\x01';
      if ((bool)in_ZR) {
        FUN_10b1a6110(auStack_188,unaff_x20[1],unaff_x20[2]);
        uStack_178 = *(undefined4 *)(unaff_x20 + 0x9d);
        uStack_174 = *(undefined1 *)((long)unaff_x20 + 0x4ec);
        lStack_168 = param_5[1];
        lStack_170 = *param_5;
        if (param_5[1] != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10 != 0);
        }
        FUN_10b19e2a0(auStack_130,unaff_x20 + 0xdb,auStack_188);
        func_0x000107c27b58(auStack_130);
        FUN_10b19e5b8(auStack_188);
        goto LAB_10b19d504;
      }
    }
    FUN_10b19d008();
    pppppcStack_a0 = (code *****)((ulong)pppppcStack_a0 & 0xffffffffffffff00);
    pppppcStack_220 = (code *****)((ulong)pppppcStack_220 & 0xffffffffffffff00);
    pppppcStack_210 = (code *****)((ulong)pppppcStack_210 & 0xffffffffffffff00);
    plVar7 = (long *)0x1;
    FUN_10b19e5d8();
    FUN_10b0faf98(&pppppcStack_a0);
    if ((param_4 == (code ******)0x7fffffffffffffff) &&
       (param_4 = ppppppcVar12, pppppcStack_108 = (code *****)ppppppcVar12, (param_2 & 1) == 0)) {
      param_4 = (code ******)0x7fffffffffffffff;
      pppppcStack_108 = (code *****)param_4;
    }
    if (((uint)param_2 & (uint)((long)ppppppcVar12 < (long)param_4)) == 1) {
      param_4 = ppppppcVar12;
      pppppcStack_108 = (code *****)ppppppcVar12;
    }
    pppppcStack_98 = (code *****)param_5[1];
    pppppcStack_a0 = (code *****)*param_5;
    if (param_5[1] != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
    }
    pppppcStack_90 = (code *****)CONCAT71(pppppcStack_90._1_7_,param_6);
    uVar6 = 0;
    pppppcStack_88 = (code *****)param_7;
    FUN_10b19deb8();
    func_0x00010b1aafe4();
    if ((*(char *)(unaff_x20 + 0xc2) == '\x01' && param_7 == (code ******)0x1) &&
        param_3 != (code ******)0x0) {
      *(undefined1 *)(unaff_x20 + 0xc2) = 0;
    }
    pppppcVar8 = unaff_x20[0x16];
    if (0 < (long)pppppcVar8 && (long)param_4 - (long)param_3 < (long)pppppcVar8) {
      param_4 = (code ******)((long)pppppcVar8 + (long)param_3);
      ppppppcVar12 = unaff_x20;
      pppppcStack_108 = (code *****)param_4;
      FUN_10b19cdec();
      if (((uVar6 & 1) != 0) && ((long)ppppppcVar12 < (long)param_4)) {
        param_4 = ppppppcVar12;
        pppppcStack_108 = (code *****)ppppppcVar12;
      }
    }
    if ((((unaff_x20[0xc1] == (code *****)0x0) && (param_7 == (code ******)0x1)) &&
        (param_3 == (code ******)0x0)) && ((long)param_4 < (long)unaff_x20[0x15])) {
      unaff_x20[0xc1] = (code *****)param_4;
    }
    if ((unaff_x20[0x71] != unaff_x20[0x72]) &&
       (param_3 = (code ******)((ulong)param_3 & 0x7ffffffffffffff0),
       pppppcStack_110 = (code *****)param_3, param_4 != (code ******)0x7fffffffffffffff)) {
      pppppcStack_108 = (code *****)(((long)param_4 + 0xf) / 0x10 << 4);
    }
    pppppcVar8 = pppppcStack_108;
    pppppcStack_1a0 = (code *****)0x0;
    pppppcStack_198 = (code *****)0x0;
    pppppcStack_190 = (code *****)0x0;
    ppppcStack_1b8 = (code ****)0x0;
    ppppcStack_1b0 = (code ****)0x0;
    uStack_1a8 = 0;
    pppppcStack_98 = pppppcStack_108;
    pppppcStack_a0 = pppppcStack_110;
    ppppppcVar10 = (code ******)unaff_x20[0xb3];
    ppppppcVar12 = (code ******)pppppcStack_110;
    while (ppppppcVar10 != unaff_x20 + 0xb4) {
      ppppppcVar9 = (code ******)ppppppcVar10[4];
      if ((long)ppppppcVar12 < (long)ppppppcVar9) {
        pppppcStack_218 = (code *****)ppppppcVar9;
        if ((long)pppppcVar8 <= (long)ppppppcVar9) {
          pppppcStack_218 = pppppcVar8;
        }
        pppppcStack_210 = (code *****)CONCAT71(pppppcStack_210._1_7_,1);
        pppppcStack_220 = (code *****)ppppppcVar12;
        FUN_10b1a5c9c(&ppppcStack_1b8,&pppppcStack_220);
      }
      ppppppcVar9 = (code ******)ppppppcVar10[5];
      pppppcVar13 = (code *****)ppppcStack_1b8;
      pppppcVar4 = (code *****)ppppcStack_1b0;
      if ((long)pppppcVar8 <= (long)ppppppcVar9) goto LAB_10b19d7d8;
      if ((long)ppppppcVar12 <= (long)ppppppcVar9) {
        ppppppcVar12 = ppppppcVar9;
      }
      func_0x000107c27be0();
    }
    pppppcStack_90 = (code *****)CONCAT71(pppppcStack_90._1_7_,1);
    pppppcStack_a0 = (code *****)ppppppcVar12;
    FUN_10b1a5c9c(&ppppcStack_1b8,&pppppcStack_a0);
    pppppcVar13 = (code *****)ppppcStack_1b8;
    pppppcVar4 = (code *****)ppppcStack_1b0;
LAB_10b19d7d8:
    for (; pppppcVar13 != pppppcVar4; pppppcVar13 = pppppcVar13 + 2) {
      FUN_10b19d2ac(&pppppcStack_220,pppppcVar13,unaff_x20 + 0x94);
      pppppcVar8 = pppppcStack_198;
      ppppppcVar12 = (code ******)pppppcStack_220;
      lVar11 = (long)pppppcStack_218 - (long)pppppcStack_220;
      if (0 < lVar11 >> 4) {
        if ((long)pppppcStack_190 - (long)pppppcStack_198 < lVar11) {
          ppppppcVar10 = &pppppcStack_1a0;
          FUN_10b1a408c(ppppppcVar10,
                        (lVar11 >> 4) + ((long)pppppcStack_198 - (long)pppppcStack_1a0 >> 4));
          FUN_10b1a40d8(&pppppcStack_a0,ppppppcVar10,(long)pppppcVar8 - (long)pppppcStack_1a0 >> 4,
                        &pppppcStack_190);
          lVar1 = (long)pppppcStack_90 + lVar11;
          for (; lVar11 != 0; lVar11 = lVar11 + -0x10) {
            pppppcVar14 = *ppppppcVar12;
            pppppcStack_90[1] = (code ****)ppppppcVar12[1];
            *pppppcStack_90 = (code ****)pppppcVar14;
            ppppppcVar12 = ppppppcVar12 + 2;
            pppppcStack_90 = pppppcStack_90 + 2;
          }
          pppppcStack_90 = (code *****)lVar1;
          _memcpy(lVar1,pppppcVar8,(long)pppppcStack_198 - (long)pppppcVar8);
          pppppcStack_90 =
               (code *****)((long)pppppcStack_198 + ((long)pppppcStack_90 - (long)pppppcVar8));
          ppppppcVar12 = (code ******)
                         ((long)pppppcStack_98 - ((long)pppppcVar8 - (long)pppppcStack_1a0));
          pppppcStack_198 = pppppcVar8;
          _memcpy(ppppppcVar12);
          pppppcVar8 = pppppcStack_190;
          pppppcStack_190 = pppppcStack_88;
          pppppcStack_198 = pppppcStack_90;
          pppppcStack_90 = pppppcStack_1a0;
          pppppcStack_88 = pppppcVar8;
          pppppcStack_a0 = pppppcStack_1a0;
          pppppcStack_98 = pppppcStack_1a0;
          pppppcStack_1a0 = (code *****)ppppppcVar12;
          FUN_10b1a4160(&pppppcStack_a0);
        }
        else {
          if (pppppcStack_218 != pppppcStack_220) {
            _memmove(pppppcStack_198,pppppcStack_220,lVar11);
          }
          pppppcStack_198 = (code *****)((long)pppppcVar8 + lVar11);
        }
      }
      FUN_10b1a4048(&pppppcStack_220);
    }
    FUN_10b1a4048(&ppppcStack_1b8);
    ppppppcVar10 = (code ******)pppppcStack_1a0;
    ppppppcVar12 = (code ******)pppppcStack_198;
    if (((ulong)unaff_x20[0x9b] & 1) == 0) {
      FUN_10b1939bc(auStack_1c8,unaff_x20[0x1c],unaff_x20[0x6f],*(undefined4 *)(unaff_x20 + 0x6e));
      FUN_10b1a41b0(unaff_x20 + 0x99);
      ppppppcVar10 = (code ******)0xa0;
      __Znwm();
      ppppppcVar9 = ppppppcVar10 + 1;
      *ppppppcVar9 = (code *****)0x0;
      ppppppcVar10[2] = (code *****)0x0;
      *ppppppcVar10 = (code *****)&PTR_FUN_110cc2960;
      ppppppcVar12 = ppppppcVar10 + 3;
      _bzero(ppppppcVar12,0x88);
      __ZNSt3__115recursive_mutexC1Ev(ppppppcVar12);
      *(undefined1 *)(ppppppcVar10 + 0xb) = 0;
      *(undefined1 *)(ppppppcVar10 + 0x10) = 0;
      ppppppcVar10[0x12] = (code *****)0x0;
      ppppppcVar10[0x13] = (code *****)0x0;
      ppppppcVar10[0x11] = (code *****)0x0;
      unaff_x20[0x99] = (code *****)ppppppcVar12;
      unaff_x20[0x9a] = (code *****)ppppppcVar10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar9,0x10);
        if (bVar3) {
          *ppppppcVar9 = (code *****)((long)*ppppppcVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppppcStack_220 = (code *****)0x0;
      pppppcStack_218 = (code *****)0x0;
      ppppcStack_1b8 = (code ****)0x0;
      ppppcStack_1b0 = (code ****)0x0;
      pppppcStack_100 = (code *****)ppppppcVar12;
      pppppcStack_f8 = (code *****)ppppppcVar10;
      func_0x0001052b7fa4(&pppppcStack_a0,auStack_1c8,&ppppcStack_1b8);
      func_0x0001052b7ff8(&pppppcStack_220,&pppppcStack_a0);
      func_0x0001052b7ddc(&pppppcStack_a0);
      func_0x0001052b7ddc(&ppppcStack_1b8);
      func_0x000107c27b48(&pppppcStack_a8);
      func_0x000107c27b4c(&pppppcStack_c0,pppppcStack_a8);
      pppppcStack_90 = pppppcStack_a8;
      pppppcStack_100 = (code *****)0x0;
      pppppcStack_f8 = (code *****)0x0;
      pppppcStack_a8 = (code *****)0x0;
      pppppcStack_d0 = (code *****)0x0;
      lStack_c8 = 0;
      pppppcStack_e0 = pppppcStack_220 + 0xb;
      lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
      pppppcStack_a0 = (code *****)ppppppcVar12;
      pppppcStack_98 = (code *****)ppppppcVar10;
      __ZNSt3__15mutex4lockEv();
      ppppppcVar12 = (code ******)pppppcStack_220;
      FUN_10b10dec4();
      if ((int)ppppppcVar12 == 0) {
        func_0x00010b1aaff8();
        pppppcVar8 = pppppcStack_90;
        *ppppppcVar12 = (code *****)&PTR_FUN_110cc29b0;
        ppppppcVar12[2] = pppppcStack_98;
        ppppppcVar12[1] = pppppcStack_a0;
        pppppcStack_a0 = (code *****)0x0;
        pppppcStack_98 = (code *****)0x0;
        pppppcStack_90 = (code *****)0x0;
        ppppppcVar12[3] = pppppcVar8;
        pppppcVar8 = (code *****)pppppcStack_220[0x14];
        pppppcStack_220[0x14] = (code ****)ppppppcVar12;
        if (pppppcVar8 != (code *****)0x0) {
          (*(code *)(*pppppcVar8)[1])(pppppcVar8);
        }
      }
      else {
        func_0x0001052b7ff8(&pppppcStack_d0,&pppppcStack_220);
      }
      func_0x000107c2798c(&pppppcStack_e0);
      if ((code ******)pppppcStack_d0 != (code ******)0x0) {
        pppppcStack_e0 = pppppcStack_d0;
        lStack_d8 = lStack_c8;
        if (lStack_c8 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10_01 != 0);
        }
        FUN_10b1a4268(&pppppcStack_a0);
        func_0x0001052b7ddc(&pppppcStack_e0);
      }
      uStack_e8 = uStack_b8;
      pppppcStack_f0 = pppppcStack_c0;
      pppppcStack_c0 = (code *****)0x0;
      uStack_b8 = 0;
      func_0x0001052b7ddc(&pppppcStack_d0);
      FUN_10b1a4518(&pppppcStack_a0);
      func_0x000107c27b58(&pppppcStack_c0);
      pppppcVar8 = pppppcStack_a8;
      pppppcStack_a8 = (code *****)0x0;
      if (pppppcVar8 != (code *****)0x0) {
        func_0x00010b1aa32c();
      }
      func_0x00010b1aa994();
      func_0x000107c27b58(&pppppcStack_f0);
      FUN_10b1a3de8(&pppppcStack_100);
      *(undefined1 *)(unaff_x20 + 0x9b) = 1;
      func_0x0001052b7ddc(auStack_1c8);
      ppppppcVar10 = (code ******)pppppcStack_1a0;
      ppppppcVar12 = (code ******)pppppcStack_198;
    }
    for (; in_ZR = ppppppcVar10 == ppppppcVar12, !(bool)in_ZR; ppppppcVar10 = ppppppcVar10 + 2) {
      pppppcStack_a0 = (code *****)((ulong)pppppcStack_a0 & 0xffffffffffffff00);
      pppppcStack_88 = (code *****)((ulong)pppppcStack_88 & 0xffffffffffffff00);
      if (unaff_x20[0x6d] != (code *****)0x0) {
        uVar6 = (ulong)unaff_x20[0x6d][8] & 0xfffffffffffffffc;
        cVar2 = *(char *)(uVar6 + 0x17);
        if (cVar2 < '\0') {
          if (*(long *)(uVar6 + 8) != 0) goto LAB_10b19db40;
        }
        else if (cVar2 != '\0') {
LAB_10b19db40:
          func_0x000107c27b98(&pppppcStack_a0);
        }
      }
      (*(code *)(*unaff_x20[0x77])[0xc])(auStack_1e0);
      ppppcStack_1b8 = (code ****)ppppppcVar10[1];
      ppppcStack_1b0 = (code ****)CONCAT71(ppppcStack_1b0._1_7_,1);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      pppppcStack_c0 = (code *****)param_7;
      FUN_10b205bbc(&pppppcStack_220,auStack_1e0,&pppppcStack_a0,&ppppcStack_1b8,2,&pppppcStack_c0);
      func_0x00010b1aadf8();
      FUN_10b19e794(unaff_x20 + 0xb2,ppppppcVar10,&pppppcStack_220);
      FUN_10b1a6110(&ppppcStack_1b8,unaff_x20[1],unaff_x20[2]);
      puVar5 = (undefined8 *)0xf0;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110cc2bb8;
      plVar7 = unaff_x21;
      FUN_10b1a6208(puVar5 + 3,&ppppcStack_1b8,&pppppcStack_220,ppppppcVar10);
      FUN_10b1a6170(auStack_1f0,puVar5 + 3,puVar5);
      FUN_10b19e958();
      func_0x00010b1a5a0c(auStack_1f0);
      func_0x00010b129c40(&ppppcStack_1b8);
      func_0x00010b1aadb4();
      func_0x000107c279a4(&pppppcStack_a0);
    }
    if (*param_5 != 0) {
      pppppcVar8 = unaff_x20[0x8a];
      FUN_10b1a6110(&pppppcStack_220,unaff_x20[1],unaff_x20[2]);
      pppppcStack_88 = pppppcStack_218;
      pppppcStack_90 = pppppcStack_220;
      unaff_x20 = &pppppcStack_a0;
      pppppcStack_a0 = (code *****)FUN_10b1a7430;
      pppppcStack_98 = (code *****)&PTR_FUN_110cc2c70;
      pppppcStack_220 = (code *****)0x0;
      pppppcStack_218 = (code *****)0x0;
      pppppcStack_210 = (code *****)param_3;
      (*(code *)(*pppppcVar8)[2])(pppppcVar8,&pppppcStack_a0);
      func_0x00010b1aa514(pppppcStack_98);
      func_0x00010b129c40(&pppppcStack_220);
    }
    FUN_10b1a4048(&pppppcStack_1a0);
  }
LAB_10b19d504:
  ppppppcVar12 = (code ******)appppcStack_120;
  FUN_10b122f98();
  func_0x00010b1aa28c(extraout_x8);
  if ((bool)in_ZR) {
    return param_7;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pppppcStack_e0);
  func_0x0001052b7ddc(&pppppcStack_d0);
  FUN_10b1a4518(&pppppcStack_a0);
  func_0x000107c27b58(&pppppcStack_c0);
  pppppcVar8 = pppppcStack_a8;
  pppppcStack_a8 = (code *****)0x0;
  if ((code ******)pppppcVar8 != (code ******)0x0) {
    func_0x00010b1aa32c();
  }
  func_0x00010b1aa994();
  FUN_10b1a3de8(&pppppcStack_100);
  FUN_10b1a3de8(unaff_x20 + 0x99);
  func_0x0001052b7ddc(auStack_1c8);
  FUN_10b1a4048(&pppppcStack_1a0);
  FUN_10b122f98(appppcStack_120);
  func_0x00010b1aa3d8();
  *plVar7 = 0;
  plVar7[1] = 0;
  func_0x00010b1aadc4();
  func_0x00010b1aa55c();
  return ppppppcVar12;
}



/* Entry: 10b19de70; end: 10b19deb7;  */

void FUN_10b19de70(void)

{
  undefined8 *in_x4;
  
  *in_x4 = 0;
  in_x4[1] = 0;
  func_0x00010b1aadc4();
  func_0x00010b1aa55c();
  return;
}



/* Entry: 10b19deb8; end: 10b19df17;  */

void FUN_10b19deb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010b1a5db8(param_1 + 0x488);
  if (*(long *)(param_1 + 0x658) != 0) {
    param_1 = param_1 + 0x628;
    FUN_10b19df34(param_1,param_3 + 0x20);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
    lVar1 = param_1 + 0x88;
    func_0x00010b20a898();
    *(long *)(param_1 + 0x88) = lVar1;
    *(undefined8 *)(param_1 + 0x90) = param_2;
  }
  return;
}



/* Entry: 10b19df18; end: 10b19df33;  */

undefined8 FUN_10b19df18(long param_1)

{
  func_0x00010b1a5db8(param_1 + 8);
  return 1;
}



/* Entry: 10b19df34; end: 10b19e107;  */

long * FUN_10b19df34(float param_1,float param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  
  uVar9 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10b19dfe0;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) break;
          if (plVar7[2] == uVar9) goto LAB_10b19e0e4;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10b19dfe0:
  plVar1 = param_3 + 2;
  plVar7 = (long *)0xc0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar7[2] = uVar9;
  _bzero(plVar7 + 3,0xa8);
  func_0x00010b1ab06c();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x00010b1aad24(uVar8 << 1);
    FUN_10b1a5ee0(param_3);
    uVar8 = param_3[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_3;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar1;
    *plVar1 = (long)plVar7;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar1;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar4 + uVar9 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x00010b1aa720();
LAB_10b19e0e4:
  return plVar7 + 3;
}



/* Entry: 10b19e108; end: 10b19e213;  */

void FUN_10b19e108(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  char cStack_40;
  
  func_0x00010b1aa568();
  FUN_10b19e214(&lStack_50,param_1 + 0x480);
  if (((param_3 & 1) == 0) && (cStack_40 != '\0')) {
    if (*(char *)(unaff_x19 + 0x610) == '\x01' && *(long *)(unaff_x20 + 0x18) == 1) {
      *(undefined2 *)(unaff_x19 + 0x610) = 0x100;
    }
  }
  else if (cStack_40 == '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x658) != 0) {
    piVar2 = (int *)(unaff_x19 + 0x628);
    uVar4 = unaff_x20 + 0x20;
    FUN_10b19df34();
    lVar6 = *(long *)(piVar2 + 0x26);
    lVar1 = lVar6 + -1;
    *(long *)(piVar2 + 0x26) = lVar1;
    if ((((param_3 & 1) == 0) && (lVar1 == 0 || lVar6 < 1)) &&
       (*(long *)(piVar2 + 0x22) < *(long *)(piVar2 + 0x24))) {
      piVar3 = piVar2;
      func_0x00010b1aac00();
      if ((uVar4 & 1) != 0) {
        if ((long)*(int **)(piVar2 + 0x24) <= (long)piVar3) {
          piVar3 = *(int **)(piVar2 + 0x24);
        }
        *(int **)(piVar2 + 0x24) = piVar3;
      }
      if ((char)piVar2[0x1e] == '\x01') {
        piVar3 = (int *)(unaff_x19 + 0x370);
        if (*piVar2 != 5) {
          piVar3 = piVar2;
        }
        iVar5 = piVar2[7];
      }
      else {
        iVar5 = 0;
        piVar3 = (int *)(unaff_x19 + 0x370);
      }
      uStack_48 = *(undefined8 *)(piVar2 + 0x24);
      lStack_50 = *(long *)(piVar2 + 0x22);
      cStack_40 = 1;
      FUN_10b204764(*(undefined8 *)(unaff_x19 + 0x658),*piVar3,iVar5,&lStack_50,
                    *(undefined1 *)(unaff_x19 + 0x6f0),(*(byte *)(piVar2 + 0x28) ^ 0xff) & 1);
    }
  }
  return;
}



/* Entry: 10b19e214; end: 10b19e29f;  */

void FUN_10b19e214(long param_1)

{
  long lVar1;
  undefined1 extraout_w8;
  undefined1 uVar2;
  undefined8 *extraout_x8;
  long lVar3;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar4;
  
  func_0x00010b1aa794();
  lVar1 = param_1 + 0x10;
  lVar3 = *(long *)(param_1 + 8);
  do {
    if (lVar3 == lVar1) {
      func_0x00010b1aad0c();
      uVar2 = extraout_w8;
LAB_10b19e294:
      *(undefined1 *)(extraout_x8 + 2) = uVar2;
      return;
    }
    if (*(long *)(lVar3 + 0x30) == *unaff_x22) {
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
      *extraout_x8 = uVar4;
      func_0x00010b1aa868();
      if (*(long *)(unaff_x21 + 8) == lVar3) {
        *(long *)(unaff_x21 + 8) = param_1;
      }
      func_0x00010b1aa7ec();
      FUN_10b0fb81c(lVar3 + 0x30);
      func_0x00010b1aa5e0();
      uVar2 = 1;
      goto LAB_10b19e294;
    }
    func_0x00010b1aa868();
    lVar3 = param_1;
  } while( true );
}



/* Entry: 10b19e2a0; end: 10b19e5b7;  */

void FUN_10b19e2a0(void)

{
  ulong uVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 extraout_w8;
  undefined4 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  
  func_0x00010b1ab158();
  lVar4 = 0x128;
  __Znwm();
  lVar7 = lVar4;
  func_0x00010b1ab0a4(FUN_10b1a9a80);
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  *(undefined8 *)(lVar7 + 0x60) = unaff_x21[2];
  uVar9 = unaff_x21[3];
  *(undefined8 *)(lVar7 + 0x70) = unaff_x21[4];
  *(undefined8 *)(lVar7 + 0x68) = uVar9;
  unaff_x21[3] = 0;
  unaff_x21[4] = 0;
  uVar9 = unaff_x21[5];
  *(undefined8 *)(lVar7 + 0x80) = unaff_x21[6];
  *(undefined8 *)(lVar7 + 0x78) = uVar9;
  uVar9 = unaff_x21[7];
  *(undefined8 *)(lVar7 + 0x90) = unaff_x21[8];
  *(undefined8 *)(lVar7 + 0x88) = uVar9;
  uVar9 = *(undefined8 *)((long)unaff_x21 + 0x41);
  *(undefined8 *)(lVar7 + 0x99) = *(undefined8 *)((long)unaff_x21 + 0x49);
  *(undefined8 *)(lVar7 + 0x91) = uVar9;
  FUN_10b124f8c(lVar7 + 0x10);
  uVar1 = lVar4 + 0xa8;
  func_0x00010b1aae74();
  lVar7 = unaff_x22[1];
  uVar9 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x108) = unaff_x22[1];
  *(undefined8 *)(lVar4 + 0x100) = uVar9;
  if (lVar7 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b16c9a4(uVar1,lVar4 + 0x100);
  uVar5 = uVar1;
  FUN_10b12d174();
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x120) = 0;
    lStack_60 = lVar4;
    uStack_58 = uVar1;
    FUN_10b12d1c8(auStack_78,uVar1,&lStack_60);
    if (lStack_70 == 0) {
      return;
    }
    do {
      func_0x00010b1aa374();
    } while (extraout_w11 != 0);
    if (extraout_x9 != 0) {
      return;
    }
    func_0x00010b1aa310();
    func_0x00010b1aa774();
    return;
  }
  FUN_10b12d0d0(uVar1);
  func_0x000107c27b58(uVar1);
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(lVar4 + 0x108);
  *(undefined8 *)(lVar4 + 0x110) = *(undefined8 *)(lVar4 + 0x100);
  if (*(long *)(lVar4 + 0x108) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  lVar7 = lVar4 + 0x110;
  func_0x00010b1a614c(lVar7);
  func_0x0001052a06f8(uVar1,lVar7);
  if (*(char *)(lVar4 + 0xe8) == '\x01') {
    lVar7 = *(long *)(lVar4 + 0xc0);
    uVar3 = lVar7 == 9;
    if ((bool)uVar3) {
LAB_10b19e478:
      func_0x00010b1aad84();
      if (extraout_x8 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1aabe8(*(undefined1 *)(lVar4 + 0xa0));
      func_0x00010b1aab00();
      goto LAB_10b19e4a0;
    }
    plVar8 = *(long **)(lVar4 + 0x68);
    func_0x000104bff97c(auStack_78,lVar4 + 200,"");
    func_0x00010b1aa8b8(*(undefined8 *)(*plVar8 + 0x18),plVar8,lVar7,auStack_78);
  }
  else {
    uVar3 = false;
    if (*(char *)(lVar4 + 100) != '\x01') goto LAB_10b19e478;
    iVar2 = *(int *)(lVar4 + 0x60);
    plVar8 = *(long **)(lVar4 + 0x68);
    func_0x000107c278b8(auStack_78,&UNK_10f731696);
    uVar6 = 2;
    if (iVar2 != 0x194) {
      uVar6 = 0;
    }
    uVar3 = iVar2 == 0x193;
    if ((bool)uVar3) {
      uVar6 = 1;
    }
    (**(code **)(*plVar8 + 0x18))
              (plVar8,uVar6,auStack_78,(ulong)*(uint *)(lVar4 + 0x60) | 0x100000000);
  }
  func_0x00010b1aaa10();
LAB_10b19e4a0:
  func_0x0001052a038c(uVar1);
  func_0x00010b1aac20();
  func_0x00010b1aa6b4();
  func_0x00010b1aa900();
  func_0x00010b1aa598();
  *(undefined1 *)(lVar4 + 0x120) = extraout_w8;
  func_0x00010b1aa9ec();
  if ((bool)uVar3) {
    puStack_48 = auStack_50;
    func_0x000107c27b6c(lVar4 + 0x10,&puStack_48);
  }
  else {
    func_0x00010b1aa67c(auStack_50);
    puStack_48 = auStack_50;
    func_0x000104bf33ec(lVar4 + 0x10,&puStack_48);
    __ZNSt13exception_ptrD1Ev(auStack_50);
  }
  func_0x00010b1aa4d4();
  FUN_10b19e5b8();
  func_0x00010b1aa42c();
  return;
}



/* Entry: 10b19e5b8; end: 10b19e5d7;  */

long FUN_10b19e5b8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1ab1b8();
  FUN_10b0fb81c();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b19e5d8; end: 10b19e793;  */

void FUN_10b19e5d8(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,byte param_5)

{
  char cVar1;
  code *pcVar2;
  int aiStack_1c8 [2];
  int iStack_1c0;
  long lStack_1b8;
  undefined1 auStack_150 [120];
  char cStack_d8;
  int aiStack_d0 [2];
  int iStack_c8;
  long lStack_c0;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  FUN_10b19af84(auStack_58);
  param_1 = param_1 + 0x628;
  func_0x00010b1a75c4(param_1,&uStack_48);
  if (param_1 == 0) goto LAB_10b19e728;
  func_0x00010b1aa5c8(aiStack_d0);
  auStack_150[0] = 0;
  cStack_d8 = '\0';
  if ((*(byte *)(param_3 + 0x78) & 1) == 0) {
    param_3 = param_1 + 0x18;
    if (*(char *)(param_4 + 4) != '\x01') goto LAB_10b19e678;
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b19e750);
      (*pcVar2)();
    }
    *(undefined4 *)(param_1 + 0x20) = *param_4;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_4 + 2);
    FUN_10b121fd0(auStack_150,param_3);
    cStack_d8 = '\x01';
  }
  else {
LAB_10b19e678:
    FUN_10b1a4b94(auStack_150,param_3);
  }
  cVar1 = *(char *)(param_1 + 0x90);
  if (cVar1 == cStack_d8) {
    if (cVar1 != '\0') {
      func_0x00010b1a3f1c(param_1 + 0x18,auStack_150);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10b139e58(param_1 + 0x18,auStack_150);
  }
  else {
    FUN_10b1a4bbc(param_1 + 0x18);
  }
  *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) | param_5;
  func_0x00010b1aa5c8(aiStack_1c8);
  if (((aiStack_d0[0] != aiStack_1c8[0]) || (iStack_c8 != iStack_1c0)) || (lStack_c0 != lStack_1b8))
  {
    func_0x00010b1ab060();
    FUN_10b1a1934();
  }
  func_0x00010529fe04(aiStack_1c8);
  FUN_10b0faf98(auStack_150);
  func_0x00010529fe04(aiStack_d0);
LAB_10b19e728:
  FUN_10b122f98(auStack_58);
  return;
}



/* Entry: 10b19e794; end: 10b19e957;  */

undefined8 FUN_10b19e794(long param_1)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar6;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  long *extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  bool bVar8;
  long *plStack_60;
  long alStack_58 [3];
  
  func_0x00010b1aa568();
  if (*(long *)(param_1 + 0x18) == 0) {
    plVar5 = (long *)(unaff_x19 + 0x10);
    bVar8 = true;
  }
  else {
    plVar4 = (long *)(unaff_x19 + 0x10);
    plVar5 = plVar4;
    plVar7 = plVar4;
    while (*plVar5 != 0) {
      func_0x00010b1aacdc();
      plVar5 = (long *)((long)extraout_x11 + extraout_x10);
      if (in_NG == in_OV) {
        plVar7 = extraout_x11;
      }
    }
    plVar5 = *(long **)(unaff_x19 + 8);
    cVar1 = SBORROW8((long)plVar5,(long)plVar7);
    cVar2 = (long)plVar5 - (long)plVar7 < 0;
    uVar3 = plVar5 == plVar7;
    plVar5 = plVar7;
    if (!(bool)uVar3) {
      func_0x000107c27bdc();
      func_0x00010b1aaccc();
      if ((bool)uVar3 || cVar2 != cVar1) {
        plVar5 = plVar7;
      }
    }
    if (plVar4 == plVar5) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
      if (plVar5[4] < unaff_x20[1]) {
        return 0;
      }
    }
  }
  plVar4 = (long *)(unaff_x19 + 0x10);
  FUN_10b1a3b60(alStack_58,unaff_x19 + 8);
  if (!bVar8) {
    func_0x00010b1ab0d8(*(undefined8 *)(alStack_58[0] + 0x20));
    uVar6 = extraout_w11;
    if (extraout_x10_00 != extraout_x8) {
      uVar6 = (uint)(extraout_x10_00 < extraout_x8);
    }
    if ((uVar6 & 1) != 0) {
      while (plVar5 = plVar4, plVar7 = (long *)*plVar4, plStack_60 = plVar4,
            (long *)*plVar4 != (long *)0x0) {
        while( true ) {
          plVar4 = plVar7;
          func_0x00010b1ab0d8();
          uVar6 = extraout_w11_00;
          if (extraout_x10_01 != extraout_x8_00) {
            uVar6 = (uint)(extraout_x10_01 < extraout_x8_00);
          }
          if (uVar6 != 1) break;
          plVar7 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            plVar5 = plVar4 + 1;
            plStack_60 = plVar4;
            goto LAB_10b19e918;
          }
        }
      }
      goto LAB_10b19e918;
    }
  }
  plVar4 = plVar5;
  if (plVar5 != *(long **)(unaff_x19 + 8)) {
    func_0x000107c27bdc();
    bVar8 = *(long *)(alStack_58[0] + 0x28) < plVar4[5];
    if (*(long *)(alStack_58[0] + 0x20) != plVar4[4]) {
      bVar8 = *(long *)(alStack_58[0] + 0x20) < plVar4[4];
    }
    if (bVar8) {
      plVar5 = (long *)(unaff_x19 + 8);
      FUN_10b1a3ba4(plVar5,&plStack_60);
      goto LAB_10b19e918;
    }
  }
  plStack_60 = plVar5;
  if (*plVar5 != 0) {
    plVar5 = plVar4 + 1;
    plStack_60 = plVar4;
  }
LAB_10b19e918:
  FUN_10b1a3bf8(unaff_x19 + 8,plStack_60,plVar5,alStack_58[0]);
  func_0x00010b1aad60();
  func_0x00010b1a3c20();
  func_0x00010b1aa764(unaff_x20[1] - *unaff_x20);
  return 1;
}



/* Entry: 10b19e958; end: 10b19eb37;  */

void FUN_10b19e958(int param_1)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  long alStack_f0 [2];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [4];
  undefined1 uStack_bc;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  
  func_0x00010b1aa568();
  param_1 = param_1 + 0xd0;
  FUN_10b127a84();
  if (param_1 == 0) {
    uStack_78 = unaff_x20[1];
    uStack_80 = *unaff_x20;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_60 = 0;
    if (*(char *)(unaff_x19 + 0x4d8) == '\x01') {
      uStack_70 = *(ulong *)(unaff_x19 + 0x4c8);
      lStack_68 = *(long *)(unaff_x19 + 0x4d0);
      if (lStack_68 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      uStack_60 = 1;
    }
    uVar5 = *(ulong *)(unaff_x19 + 0x728);
    if (uVar5 < *(ulong *)(unaff_x19 + 0x730)) {
      func_0x00010b1ab0b8();
      FUN_10b1a5408();
      lVar9 = uVar5 + 0x28;
    }
    else {
      uVar10 = *(ulong *)(unaff_x19 + 0x720);
      lVar6 = uVar5 - uVar10;
      uVar13 = lVar6 / 0x28 + 1;
      if (0x666666666666666 < uVar13) {
        FUN_10b1a543c();
LAB_10b19eb28:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b19eb2c);
        (*pcVar4)();
      }
      uVar3 = (long)(*(ulong *)(unaff_x19 + 0x730) - uVar10) / 0x28;
      uVar8 = uVar3 * 2;
      if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
        uVar8 = uVar13;
      }
      if (0x333333333333332 < uVar3) {
        uVar8 = 0x666666666666666;
      }
      if (uVar8 == 0) {
        lVar12 = 0;
      }
      else {
        if (0x666666666666666 < uVar8) {
          func_0x000104bd35f4();
          goto LAB_10b19eb28;
        }
        lVar12 = uVar8 * 0x28;
        __Znwm();
      }
      lVar9 = lVar12 + lVar6;
      FUN_10b1a5408(lVar9,&uStack_80);
      lVar14 = lVar9 + (lVar6 / -0x28) * 0x28;
      lVar6 = lVar14;
      for (uVar13 = uVar10; uVar13 != uVar5; uVar13 = uVar13 + 0x28) {
        FUN_10b1a5408(lVar6,uVar13);
        lVar6 = lVar6 + 0x28;
      }
      for (; uVar10 != uVar5; uVar10 = uVar10 + 0x28) {
        FUN_10b1a5448(uVar10);
      }
      lVar9 = lVar9 + 0x28;
      lVar6 = *(long *)(unaff_x19 + 0x720);
      *(long *)(unaff_x19 + 0x720) = lVar14;
      *(long *)(unaff_x19 + 0x728) = lVar9;
      *(ulong *)(unaff_x19 + 0x730) = lVar12 + uVar8 * 0x28;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    *(long *)(unaff_x19 + 0x728) = lVar9;
    FUN_10b1a5448(&uStack_80);
    return;
  }
  func_0x00010b1aa2b8();
  func_0x00010b11fabc(alStack_f0);
  if (alStack_f0[0] != 0) {
    uStack_100 = *(undefined8 *)(alStack_f0[0] + 0x3b8);
    lStack_f8 = *(long *)(alStack_f0[0] + 0x3c0);
    if (lStack_f8 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b1aad3c();
    (*extraout_x9)(auStack_118);
    *(undefined1 *)(unaff_x19 + 0xb8) = *(undefined1 *)(alStack_f0[0] + 0x718);
    lStack_e0 = *(long *)(unaff_x19 + 0xa0) + *(long *)(unaff_x19 + 0x80);
    if (*(long *)(unaff_x19 + 0x88) == 0x7fffffffffffffff) {
      lStack_d8 = 0;
      func_0x000107c2793c(&UNK_10f7311a8);
      func_0x000107c3173c(&uStack_158);
    }
    else {
      lStack_d0 = *(long *)(unaff_x19 + 0x88) + -1;
      lStack_d8 = 0;
      uStack_c8 = 0;
      func_0x000107c2793c(&UNK_10f7311b2);
      func_0x000107c3173c(&uStack_158);
    }
    func_0x00010b195df0(auStack_c0,"Range",&uStack_158);
    func_0x000104bd4884(auStack_140,auStack_c0,1);
    func_0x000107c278c0(auStack_c0);
    func_0x00010b1aa9dc();
    lVar6 = alStack_f0[0];
    FUN_10b19ce28(auStack_c0);
    if ((*(char *)(alStack_f0[0] + 0x46d) == '\x01') && ((*(byte *)(unaff_x19 + 0xb0) & 1) == 0)) {
      uStack_bc = 0;
    }
    func_0x00010b1aaebc();
    plVar11 = *(long **)(lVar6 + 0x10);
    uVar5 = (ulong)*(uint *)(alStack_f0[0] + 0x370);
    FUN_10b20549c(uVar5);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    if (lVar6 != 0) {
      lVar12 = *(long *)(unaff_x19 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar6 != 0) {
        uStack_158 = 0;
        uStack_150 = 0;
        cVar2 = *(char *)(unaff_x19 + 0x4d8);
        in_ZR = cVar2 == '\x01';
        bVar1 = !(bool)in_ZR;
        lStack_e0 = lVar12;
        lStack_d8 = lVar6;
        if (bVar1) {
          uStack_170 = uStack_170 & 0xffffffffffffff00;
        }
        else {
          FUN_10b1a5088(&uStack_180,unaff_x19 + 0x4c8);
          uStack_168 = uStack_178;
          uStack_170 = uStack_180;
          uStack_180 = 0;
          uStack_178 = 0;
        }
        uStack_160 = !bVar1;
        (**(code **)(*plVar11 + 0x18))
                  (plVar11,&uStack_100,unaff_x19 + 0x68,auStack_c0,auStack_140,1,uVar5,&lStack_e0,
                   &uStack_170);
        func_0x0001052b818c(&uStack_170);
        if (cVar2 != '\0') {
          func_0x00010b1aa994();
        }
        func_0x0001052b81d0(&lStack_e0);
        func_0x00010b1a5a0c(&uStack_158);
        func_0x00010529fe04(auStack_c0);
        func_0x000107c278e0(auStack_140);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
        func_0x0001052ac684();
        goto LAB_10b1a3744;
      }
    }
    func_0x00010527822c();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1a3774);
    (*pcVar4)();
  }
LAB_10b1a3744:
  func_0x00010b1aae64();
  func_0x00010b1aa28c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052b81d0(&lStack_e0);
  func_0x00010b1a5a0c(&uStack_158);
  func_0x00010529fe04(auStack_c0);
  func_0x000107c278e0(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  puVar7 = &uStack_100;
  func_0x0001052ac684();
  func_0x00010b1aae64();
  func_0x00010b1aa3d8();
  func_0x00010b121e00(puVar7 + 4);
  if (*(char *)(puVar7 + 2) == '\x01') {
    func_0x0001000ff1ac();
  }
  return;
}



/* Entry: 10b19eb38; end: 10b19f587;  */

undefined ******
FUN_10b19eb38(undefined8 param_1,ulong param_2,long param_3,long *param_4,undefined ******param_5,
             long *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined ****ppppuVar3;
  undefined ****ppppuVar4;
  undefined1 uVar5;
  undefined ******ppppppuVar6;
  long lVar7;
  ulong uVar8;
  undefined *****pppppuVar9;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined ******extraout_x8_00;
  undefined *****pppppuVar10;
  long lVar11;
  code *extraout_x8_01;
  undefined ******ppppppuVar12;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined ******ppppppuVar17;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined ****ppppuStack_1a8;
  undefined1 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined ****ppppuStack_168;
  undefined1 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined *****pppppuStack_140;
  undefined *****pppppuStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined ****ppppuStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined *****pppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  ulong auStack_a0 [11];
  undefined ****ppppuStack_48;
  undefined ****ppppuStack_40;
  undefined8 *puStack_38;
  undefined ****ppppuStack_30;
  undefined ****ppppuStack_28;
  undefined1 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010b1aac94();
  func_0x00010b1aa2b8();
  uStack_100 = param_7;
  pppppuStack_f8 = (undefined *****)param_5;
  uStack_18 = extraout_x8;
  FUN_10b19af84(&ppppuStack_110);
  if (((*(long *)(unaff_x19 + 0x168) == 0) && (0 < *(long *)(param_3 + 0x28))) &&
     (*(long *)(unaff_x19 + 0x168) = *(long *)(param_3 + 0x28), *(long *)(unaff_x19 + 0x658) != 0))
  {
    FUN_10b2048e0();
  }
  uVar5 = (char)param_6[2] == '\x01';
  if ((bool)uVar5) {
    lVar7 = *param_6;
    FUN_10b19f588(lVar7,param_6[1]);
    if ((int)lVar7 == 0) {
      ppppppuVar12 = (undefined ******)(unaff_x19 + 0x628);
      func_0x00010b1a75c4(ppppppuVar12,&uStack_100);
      if (ppppppuVar12 != (undefined ******)0x0) {
        *(undefined1 *)(ppppppuVar12 + 0x17) = 1;
      }
      lVar7 = param_4[1];
      if (param_4[1] == 0x7fffffffffffffff) {
        lVar7 = 0x7fffffffffffffff;
        if (*(long *)(unaff_x19 + 0x168) != 0) {
          lVar7 = *(long *)(unaff_x19 + 0x168);
        }
      }
      lVar11 = lVar7 - ((long)pppppuStack_f8 + *param_4);
      if ((0 < *(long *)(unaff_x19 + 0x460) && 0 < lVar11) && lVar11 <= *(long *)(unaff_x19 + 0x460)
         ) {
        lStack_158 = (long)pppppuStack_f8 + *param_4;
        lStack_150 = lVar7;
        FUN_10b19f5c4(&pppppuStack_f0,unaff_x19 + 0x480,&lStack_158);
        pppppuVar9 = pppppuStack_e8;
        ppppppuVar12 = (undefined ******)pppppuStack_f0;
        do {
          if (ppppppuVar12 == (undefined ******)pppppuVar9) {
            FUN_10b1a6110(&plStack_198,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
            func_0x00010b1a7684(&ppppuStack_48,1);
            puStack_38[2] = 0;
            *puStack_38 = &PTR_FUN_110cc3038;
            puStack_38[1] = 0;
            pppppuStack_a8 = (undefined *****)0x0;
            pppppuStack_b0 = (undefined *****)0x0;
            auStack_a0[1] = 0;
            auStack_a0[0] = 0;
            pppppuStack_c0 = (undefined *****)FUN_10b1a76fc;
            pppppuStack_b8 = (undefined *****)&PTR_DAT_110873830;
            FUN_10b1b1cf8(puStack_38 + 3,&plStack_198,&pppppuStack_c0);
            func_0x00010b1aaa80();
            puStack_178 = puStack_38;
            puStack_38 = (undefined8 *)0x0;
            puStack_180 = puStack_178 + 3;
            func_0x00010b1a771c(&ppppuStack_48);
            puStack_128 = puStack_178;
            puStack_130 = puStack_180;
            puStack_180 = (undefined8 *)0x0;
            puStack_178 = (undefined8 *)0x0;
            FUN_10b19d3a4();
            FUN_10b0fb81c(&puStack_130);
            FUN_10b1a7660(&puStack_180);
            func_0x00010b129c40(&plStack_198);
            break;
          }
          ppppppuVar6 = (undefined ******)ppppppuVar12[2];
          if (ppppppuVar6 == (undefined ******)0x0) {
LAB_10b19edcc:
            pppppuStack_c0 = (undefined *****)0x0;
            pppppuStack_b8 = (undefined *****)0x0;
            bVar16 = true;
          }
          else {
            ppppppuVar17 = (undefined ******)ppppppuVar12[3];
            ___dynamic_cast(ppppppuVar6,&PTR_DAT_110cbb1e0,&PTR_DAT_110cc3290,0);
            if (ppppppuVar6 == (undefined ******)0x0) goto LAB_10b19edcc;
            bVar16 = false;
            pppppuStack_c0 = (undefined *****)ppppppuVar6;
            pppppuStack_b8 = (undefined *****)ppppppuVar17;
            if (ppppppuVar17 != (undefined ******)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10 != 0);
              bVar16 = false;
            }
          }
          FUN_10b1a7660(&pppppuStack_c0);
          ppppppuVar12 = ppppppuVar12 + 7;
        } while (bVar16);
        ppppppuVar12 = &pppppuStack_f0;
        FUN_10b1a453c();
      }
      func_0x00010b1aae90();
      uStack_20 = *(undefined1 *)(unaff_x19 + 0x46b);
      ppppuStack_40 = (undefined ****)0x0;
      puStack_38 = (undefined8 *)0x0;
      ppppuStack_48 = (undefined ****)0x0;
      ppppuStack_28 = (undefined ****)ppppppuVar12[3];
      ppppuStack_30 = (undefined ****)ppppppuVar12[2];
      if (ppppppuVar12[3] != (undefined *****)0x0) {
        do {
          func_0x00010b1aa588();
          uStack_20 = extraout_w8;
        } while (extraout_w11_00 != 0);
      }
      if (*(int *)(param_3 + 0x20) == 200) {
        pppppuStack_e8 = (undefined *****)0x7fffffffffffffff;
        pppppuStack_f0 = (undefined *****)0x0;
        ppppppuVar12 = (undefined ******)(unaff_x19 + 0x590);
        FUN_10b19f8ac(&pppppuStack_c0,ppppppuVar12,&pppppuStack_f0);
        pppppuVar9 = pppppuStack_b8;
        for (ppppppuVar6 = (undefined ******)pppppuStack_c0;
            ppppppuVar6 != (undefined ******)pppppuVar9; ppppppuVar6 = ppppppuVar6 + 5) {
          func_0x00010b1aae88(&pppppuStack_f0,unaff_x19 + 0x590);
          ppppppuVar12 = ppppppuVar6 + 2;
          uVar8 = param_2;
          func_0x000107c278d0();
          if ((uVar8 & 1) == 0) {
            ppppppuVar12 = ppppppuVar6 + 2;
            FUN_10b19faf4(&ppppuStack_48);
          }
        }
        ppppppuVar6 = &pppppuStack_c0;
        func_0x00010b1a457c();
        pppppuVar9 = pppppuStack_f8;
        func_0x00010b1aac00();
        if (((ulong)ppppppuVar12 & 1) == 0) {
          ppppppuVar6 = (undefined ******)0x7fffffffffffffff;
        }
        pppppuStack_c0 = pppppuVar9;
        pppppuStack_b8 = (undefined *****)ppppppuVar6;
        FUN_10b19e794(unaff_x19 + 0x590,&pppppuStack_c0,param_2);
      }
      pppppuVar9 = pppppuStack_f8;
      lVar7 = *param_6;
      if (lVar7 != 0) {
        func_0x00010b1aa5b4();
        (*extraout_x8_01)();
      }
      pppppuStack_138 = (undefined *****)(lVar7 + (long)pppppuVar9);
      pppppuStack_140 = pppppuVar9;
      FUN_10b19f8ac(&lStack_158,unaff_x19 + 0x590,&pppppuStack_140);
      lVar7 = lStack_158;
      uVar5 = lStack_158 == lStack_150;
      if ((bool)uVar5) {
LAB_10b19f114:
        ppppuStack_168 = ppppuStack_110;
        uStack_160 = uStack_108;
        ppppuStack_110 = (undefined ****)0x0;
        uStack_108 = 0;
        ppppppuVar12 = (undefined ******)&ppppuStack_168;
        FUN_10b19fb24(&ppppuStack_48);
        FUN_10b122f98(&ppppuStack_168);
      }
      else {
        uVar8 = lStack_158 + 0x10;
        func_0x000107c278d0(uVar8,param_2);
        if ((uVar8 & 1) == 0) goto LAB_10b19f114;
        func_0x00010b1aae88(&pppppuStack_c0,unaff_x19 + 0x590);
        ppppppuVar12 = *(undefined *******)(lVar7 + 8);
        if ((long)pppppuStack_138 < (long)ppppppuVar12) {
          pppppuStack_c0 = pppppuStack_138;
          pppppuStack_b8 = (undefined *****)ppppppuVar12;
          FUN_10b19e794(unaff_x19 + 0x590,&pppppuStack_c0,lVar7 + 0x10);
        }
        puStack_180 = (undefined8 *)0x0;
        puStack_178 = (undefined8 *)0x0;
        uStack_170 = 0;
        uVar8 = unaff_x19 + 0x4a0;
        FUN_10b19d360(uVar8,&pppppuStack_140);
        if ((uVar8 & 1) == 0) {
          pppppuStack_b8 = (undefined *****)param_6[1];
          pppppuStack_c0 = (undefined *****)*param_6;
          if (param_6[1] != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_00 != 0);
          }
          pppppuStack_b0 = (undefined *****)CONCAT71(pppppuStack_b0._1_7_,1);
          pppppuStack_a8 = (undefined *****)CONCAT44(pppppuStack_a8._4_4_,1);
          uVar14 = *(undefined8 *)(unaff_x19 + 0x378);
          FUN_10b19ada4(&pppppuStack_f0,pppppuStack_140,pppppuStack_138);
          FUN_10b2026a0(auStack_a0,uVar14,&pppppuStack_f0);
          func_0x00010b1aaad0();
          FUN_10b19ae08();
          func_0x000107c28944(&puStack_180,&pppppuStack_f8);
          func_0x00010b1aaac0();
        }
        else {
          FUN_10b19d2ac(&plStack_198,&pppppuStack_140,unaff_x19 + 0x4a0);
          for (plVar13 = plStack_198; plVar13 != plStack_190; plVar13 = plVar13 + 2) {
            func_0x000107c31718(&pppppuStack_d0,plVar13[1] - *plVar13);
            if ((undefined ******)pppppuStack_d0 == (undefined ******)0x0) {
              ppppppuVar12 = (undefined ******)0x0;
            }
            else {
              ppppppuVar12 = (undefined ******)pppppuStack_d0;
              func_0x00010b1aaa24();
              (*extraout_x8_02)();
            }
            lVar7 = *param_6;
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              func_0x00010b1aa6d0();
              (*extraout_x8_03)();
            }
            pppppuVar9 = pppppuStack_140;
            lVar11 = *plVar13;
            if ((undefined ******)pppppuStack_d0 == (undefined ******)0x0) {
              ppppppuVar6 = (undefined ******)0x0;
            }
            else {
              ppppppuVar6 = (undefined ******)pppppuStack_d0;
              func_0x00010b1aa5b4();
              (*extraout_x8_04)();
            }
            _memcpy(ppppppuVar12,lVar7 + (lVar11 - (long)pppppuVar9),ppppppuVar6);
            pppppuStack_b8 = pppppuStack_c8;
            pppppuStack_c0 = pppppuStack_d0;
            pppppuStack_d0 = (undefined *****)0x0;
            pppppuStack_c8 = (undefined *****)0x0;
            pppppuStack_b0 = (undefined *****)CONCAT71(pppppuStack_b0._1_7_,1);
            pppppuStack_a8 = (undefined *****)CONCAT44(pppppuStack_a8._4_4_,1);
            uVar14 = *(undefined8 *)(unaff_x19 + 0x378);
            FUN_10b19ada4(&pppppuStack_f0,*plVar13,plVar13[1]);
            FUN_10b2026a0(auStack_a0,uVar14,&pppppuStack_f0);
            FUN_10b19ae08();
            func_0x00010b1aaac0();
            func_0x00010b1aaad0();
            func_0x000107c27d78(&pppppuStack_d0);
            func_0x000107c28944(&puStack_180,plVar13);
          }
          FUN_10b1a4048(&plStack_198);
          if (puStack_180 == puStack_178) {
            func_0x000107c28944(&puStack_180,&pppppuStack_138);
          }
        }
        ppppuStack_1a8 = ppppuStack_110;
        uStack_1a0 = uStack_108;
        ppppuStack_110 = (undefined ****)0x0;
        uStack_108 = 0;
        FUN_10b19fba0();
        func_0x00010b1aae20();
        puVar2 = puStack_178;
        lVar7 = (long)puStack_178 - (long)puStack_180 >> 3;
        if (0 < lVar7) {
          lVar7 = 1;
        }
        for (puVar15 = puStack_180 + lVar7; puVar15 != puVar2; puVar15 = puVar15 + 1) {
          func_0x00010b1aabf8(auStack_1b8);
          FUN_10b19fba0();
          FUN_10b122f98(auStack_1b8);
        }
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        FUN_10b19fb24(&ppppuStack_48,&uStack_1c8);
        FUN_10b122f98(&uStack_1c8);
        uVar14 = *(undefined8 *)(unaff_x19 + 0xc0);
        ppppppuVar12 = (undefined ******)(ulong)*(uint *)(unaff_x19 + 0x370);
        uVar1 = *(undefined4 *)(unaff_x19 + 0x374);
        uVar5 = *(undefined1 *)(unaff_x19 + 0x380);
        lVar7 = *param_6;
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          func_0x00010b1aa5b4();
          (*extraout_x8_05)();
        }
        func_0x00010b1aa5c8(&pppppuStack_c0);
        FUN_10b20b4e4(uVar14,ppppppuVar12,uVar1,uVar5,0xce,0,lVar7,1,
                      (ulong)pppppuStack_b8 & 0xffffffff | 0x100000000);
        func_0x00010529fe04(&pppppuStack_c0);
        func_0x00010b1aabf8(&pppppuStack_c0);
        ppppppuVar17 = *(undefined *******)(unaff_x19 + 0x4c0);
        ppppppuVar6 = &pppppuStack_c0;
        FUN_10b122f98();
        func_0x00010b1aac00();
        if (((ulong)ppppppuVar12 & 1) == 0) {
          ppppppuVar6 = (undefined ******)0x7fffffffffffffff;
        }
        uVar5 = ppppppuVar17 == ppppppuVar6;
        if ((long)ppppppuVar6 <= (long)ppppppuVar17) {
          plVar13 = *(long **)(unaff_x19 + 0x440);
          FUN_10b1a6110(&pppppuStack_f0,*(undefined8 *)(unaff_x19 + 8),
                        *(undefined8 *)(unaff_x19 + 0x10));
          pppppuStack_c0 = (undefined *****)FUN_10b1a7738;
          pppppuStack_b8 = (undefined *****)&PTR_FUN_110cc2d08;
          pppppuStack_a8 = pppppuStack_e8;
          pppppuStack_b0 = pppppuStack_f0;
          pppppuStack_f0 = (undefined *****)0x0;
          pppppuStack_e8 = (undefined *****)0x0;
          ppppppuVar12 = &pppppuStack_c0;
          func_0x00010b1aab58(*(undefined8 *)(*plVar13 + 0x10));
          func_0x00010b1aa3ac(pppppuStack_b8);
          func_0x00010b129c40(&pppppuStack_f0);
        }
        func_0x000107c27ae4(&puStack_180);
      }
      func_0x00010b1a457c(&lStack_158);
      ppppppuVar6 = (undefined ******)&ppppuStack_48;
      FUN_10b1a45c4();
      goto LAB_10b19f380;
    }
  }
  if ((*(long *)(unaff_x19 + 0x168) == 0) && (uVar5 = 0, param_4[1] == 0x7fffffffffffffff)) {
    *(undefined ******)(unaff_x19 + 0x168) = pppppuStack_f8;
    if (*(long *)(unaff_x19 + 0x658) != 0) {
      FUN_10b2048e0();
    }
    pppppuStack_c0 = pppppuStack_f8;
    pppppuStack_b8 = (undefined *****)0x7fffffffffffffff;
    FUN_10b19f5c4(&ppppuStack_48,unaff_x19 + 0x480,&pppppuStack_c0);
    ppppuVar4 = ppppuStack_40;
    for (pppppuVar9 = (undefined *****)ppppuStack_48;
        uVar5 = pppppuVar9 == (undefined *****)ppppuVar4, !(bool)uVar5; pppppuVar9 = pppppuVar9 + 7)
    {
      if (*(long *)(unaff_x19 + 0x168) <= (long)*pppppuVar9) {
        func_0x00010b1aae28();
        ppppppuVar12 = &pppppuStack_f0;
        FUN_10b19f7dc(ppppppuVar12,unaff_x19 + 0x4f0);
        ppppuVar3 = ppppuStack_e0;
        ppppppuVar6 = (undefined ******)pppppuVar9[2];
        pppppuStack_118 = (undefined *****)pppppuVar9[3];
        ppppppuVar17 = (undefined ******)pppppuStack_118;
        pppppuStack_120 = (undefined *****)ppppppuVar6;
        if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
          do {
            func_0x00010b1aa588();
            ppppppuVar6 = extraout_x8_00;
            ppppppuVar17 = (undefined ******)pppppuStack_118;
          } while (extraout_w11 != 0);
        }
        pppppuStack_c0 = (undefined *****)&PTR_FUN_110cc2c98;
        pppppuStack_120 = (undefined *****)0x0;
        pppppuStack_118 = (undefined *****)0x0;
        pppppuStack_b8 = (undefined *****)ppppppuVar6;
        pppppuStack_b0 = (undefined *****)ppppppuVar17;
        pppppuStack_a8 = (undefined *****)&pppppuStack_c0;
        func_0x00010b1aa704();
        *ppppppuVar12 = (undefined *****)0x0;
        ppppppuVar12[1] = (undefined *****)0x0;
        func_0x000105302f48(ppppppuVar12 + 2,&pppppuStack_c0);
        ppppppuVar12[1] = (undefined *****)ppppuVar3;
        pppppuVar10 = (undefined *****)*ppppuVar3;
        *ppppppuVar12 = pppppuVar10;
        pppppuVar10[1] = (undefined ****)ppppppuVar12;
        *ppppuVar3 = (undefined ***)ppppppuVar12;
        ppppuVar3[2] = (undefined ***)((long)ppppuVar3[2] + 1);
        func_0x000107c27938(&pppppuStack_c0);
        FUN_10b0fb81c(&pppppuStack_120);
        func_0x000107c2798c(&pppppuStack_f0);
      }
    }
    FUN_10b1a453c(&ppppuStack_48);
  }
  FUN_10b19cef0(&ppppuStack_110);
  while( true ) {
    ppppppuVar12 = (undefined ******)(unaff_x19 + 0x4f0);
    FUN_10b19f7fc(&pppppuStack_c0);
    if ((auStack_a0[0] & 1) == 0) break;
    func_0x000104c003e8(&pppppuStack_c0);
    func_0x00010730b1b0(&pppppuStack_c0);
  }
  ppppppuVar6 = &pppppuStack_c0;
  func_0x00010730b1b0();
LAB_10b19f380:
  func_0x00010b1aa6ec();
  func_0x00010b1aa28c(uStack_18);
  if ((bool)uVar5) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010b1aa3ac(pppppuStack_b8);
  func_0x00010b129c40(&pppppuStack_f0);
  func_0x000107c27ae4(&puStack_180);
  func_0x00010b1a457c(&lStack_158);
  pppppuVar9 = &ppppuStack_48;
  FUN_10b1a45c4();
  func_0x00010b1aa6ec();
  func_0x00010b1aa3d8();
  if (ppppppuVar12 != (undefined ******)0x0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b1aa60c();
  return (undefined ******)(ulong)(pppppuVar9 == (undefined *****)0x0);
}



/* Entry: 10b19f588; end: 10b19f5c3;  */

bool FUN_10b19f588(long param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1aa60c();
  return param_1 == 0;
}



/* Entry: 10b19f5c4; end: 10b19f7db;  */

void FUN_10b19f5c4(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *plVar6;
  ulong extraout_x9;
  long *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  int extraout_w12;
  long *plVar7;
  ulong unaff_x22;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  plVar8 = (long *)0x0;
  func_0x00010b1ab198();
  func_0x00010b1ab040();
  lVar9 = *(long *)(param_2 + 8);
  do {
    if (lVar9 == param_2 + 0x10) {
      return;
    }
    plVar7 = (long *)(lVar9 + 0x20);
    if (*param_3 < *(long *)(lVar9 + 0x28) && *plVar7 < param_3[1]) {
      if (plVar8 < (long *)param_1[2]) {
        lVar4 = *plVar7;
        plVar8[1] = *(long *)(lVar9 + 0x28);
        *plVar8 = lVar4;
        lVar4 = *(long *)(lVar9 + 0x38);
        lVar5 = *(long *)(lVar9 + 0x30);
        plVar8[3] = *(long *)(lVar9 + 0x38);
        plVar8[2] = lVar5;
        if (lVar4 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10 != 0);
        }
        lVar5 = *(long *)(lVar9 + 0x48);
        lVar4 = *(long *)(lVar9 + 0x40);
        plVar8[6] = *(long *)(lVar9 + 0x50);
        plVar8[5] = lVar5;
        plVar8[4] = lVar4;
        plVar1 = plVar8;
      }
      else {
        plVar10 = (long *)*param_1;
        lVar4 = (long)plVar8 - (long)plVar10;
        if (unaff_x22 < lVar4 / 0x38 + 1U) {
          FUN_10b1a74a4();
LAB_10b19f7c8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b19f7cc);
          (*pcVar3)();
        }
        func_0x00010b1ab0e4((param_1[2] - (long)plVar10) / 0x38);
        func_0x00010b1ab184();
        uVar2 = extraout_x9;
        if (extraout_x10 <= extraout_x8) {
          uVar2 = unaff_x22;
        }
        if (uVar2 == 0) {
          unaff_x22 = 0;
        }
        else {
          if (unaff_x22 < uVar2) {
            func_0x000104bd35f4();
            goto LAB_10b19f7c8;
          }
          unaff_x22 = uVar2 * 0x38;
          __Znwm();
        }
        plVar1 = (long *)(unaff_x22 + lVar4);
        lVar5 = *plVar7;
        plVar1[1] = *(long *)(lVar9 + 0x28);
        *plVar1 = lVar5;
        lVar5 = *(long *)(lVar9 + 0x38);
        lVar11 = *(long *)(lVar9 + 0x30);
        plVar1[3] = *(long *)(lVar9 + 0x38);
        plVar1[2] = lVar11;
        if (lVar5 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10_00 != 0);
        }
        lVar11 = *(long *)(lVar9 + 0x48);
        lVar5 = *(long *)(lVar9 + 0x40);
        plVar1[6] = *(long *)(lVar9 + 0x50);
        plVar1[5] = lVar11;
        plVar1[4] = lVar5;
        plVar6 = plVar1 + (lVar4 / -0x38) * 7;
        for (plVar7 = plVar10; plVar7 != plVar8; plVar7 = plVar7 + 7) {
          lVar5 = *plVar7;
          plVar6[1] = plVar7[1];
          *plVar6 = lVar5;
          lVar5 = plVar7[3];
          lVar11 = plVar7[2];
          plVar6[3] = plVar7[3];
          plVar6[2] = lVar11;
          if (lVar5 != 0) {
            do {
              func_0x00010b1aa43c();
              plVar6 = extraout_x8_00;
              plVar7 = extraout_x9_00;
            } while (extraout_w12 != 0);
          }
          lVar11 = plVar7[5];
          lVar5 = plVar7[4];
          plVar6[6] = plVar7[6];
          plVar6[5] = lVar11;
          plVar6[4] = lVar5;
          plVar6 = plVar6 + 7;
        }
        for (; plVar10 != plVar8; plVar10 = plVar10 + 7) {
          FUN_10b0fb81c(plVar10 + 2);
        }
        lVar5 = *param_1;
        *param_1 = (long)(plVar1 + (lVar4 / -0x38) * 7);
        param_1[2] = unaff_x22 + uVar2 * 0x38;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        func_0x00010b1ab198();
      }
      plVar8 = plVar1 + 7;
      param_1[1] = (long)plVar8;
    }
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10b19f7dc; end: 10b19f7fb;  */

void FUN_10b19f7dc(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b19f7fc; end: 10b19f8ab;  */

void FUN_10b19f7fc(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x8;
  long *plVar9;
  long extraout_x10;
  ulong uVar10;
  long *extraout_x11;
  undefined1 *unaff_x19;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long alStack_60 [2];
  long lStack_50;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  plVar7 = alStack_60;
  func_0x00010b1aa2b8();
  uStack_28 = extraout_x8;
  FUN_10b19f7dc();
  if (*(long *)(lStack_50 + 0x10) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    func_0x00010724cbe8(alStack_48,*(long *)(lStack_50 + 8) + 0x10);
    lVar15 = *(long *)(lStack_50 + 0x10);
    lVar14 = **(long **)(lStack_50 + 8);
    plVar7 = (long *)(*(long **)(lStack_50 + 8))[1];
    *(long **)(lVar14 + 8) = plVar7;
    *plVar7 = lVar14;
    *(long *)(lStack_50 + 0x10) = lVar15 + -1;
    FUN_10b1a3da8();
    param_2 = alStack_48;
    func_0x0001078536c8();
    plVar7 = alStack_48;
    func_0x000107c27938();
  }
  func_0x00010b1aa894();
  func_0x00010b1aa28c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aa550();
  func_0x000107c2798c();
  func_0x00010b1aa3d8();
  plVar9 = param_2;
  func_0x00010b1ab040();
  if (plVar9[3] == 0) {
    plVar9 = param_2 + 2;
  }
  else {
    plVar9 = param_2 + 2;
    plVar11 = plVar9;
    while (*plVar9 != 0) {
      func_0x00010b1aacdc();
      plVar9 = (long *)((long)extraout_x11 + extraout_x10);
      if (in_NG == in_OV) {
        plVar11 = extraout_x11;
      }
    }
    plVar9 = (long *)param_2[1];
    cVar4 = SBORROW8((long)plVar9,(long)plVar11);
    cVar5 = (long)plVar9 - (long)plVar11 < 0;
    uVar6 = plVar9 == plVar11;
    plVar9 = plVar11;
    if (!(bool)uVar6) {
      func_0x000107c27bdc();
      func_0x00010b1aaccc();
      if ((bool)uVar6 || cVar5 != cVar4) {
        plVar9 = plVar11;
      }
    }
  }
  do {
    if ((plVar9 == param_2 + 2) || (*(long *)(param_3 + 8) <= plVar9[4])) {
      return;
    }
    lVar15 = plVar9[5];
    lVar14 = plVar9[4];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_e0,plVar9 + 6);
    plVar11 = (long *)plVar7[1];
    if (plVar11 < (long *)plVar7[2]) {
      plVar11[1] = lVar15;
      *plVar11 = lVar14;
      plVar11[4] = lStack_d0;
      plVar11[3] = lStack_d8;
      plVar11[2] = lStack_e0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_e0 = 0;
    }
    else {
      lVar12 = *plVar7;
      lVar13 = (long)plVar11 - lVar12;
      uVar1 = lVar13 / 0x28 + 1;
      if (0x666666666666666 < uVar1) {
        FUN_10b1a772c();
LAB_10b19fa98:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b19fa9c);
        (*pcVar3)();
      }
      uVar2 = (plVar7[2] - lVar12) / 0x28;
      uVar10 = uVar2 * 2;
      if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
        uVar10 = uVar1;
      }
      if (0x333333333333332 < uVar2) {
        uVar10 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar10) {
        func_0x000104bd35f4();
        goto LAB_10b19fa98;
      }
      lVar8 = uVar10 * 0x28;
      __Znwm();
      plVar11 = (long *)(lVar8 + lVar13);
      plVar11[1] = lVar15;
      *plVar11 = lVar14;
      plVar11[3] = lStack_d8;
      plVar11[2] = lStack_e0;
      plVar11[4] = lStack_d0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      func_0x00010b1aaf7c(plVar11 + (lVar13 / -0x28) * 5);
      *plVar7 = (long)(plVar11 + (lVar13 / -0x28) * 5);
      plVar7[2] = lVar8 + uVar10 * 0x28;
      if (lVar12 != 0) {
        func_0x00010b1aaee0();
      }
    }
    plVar7[1] = (long)(plVar11 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10b19f8ac; end: 10b19fabf;  */

void FUN_10b19f8ac(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char in_NG;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  long extraout_x10;
  ulong uVar9;
  long *extraout_x11;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar13 = param_2;
  func_0x00010b1ab040();
  if (*(long *)(lVar13 + 0x18) == 0) {
    plVar8 = (long *)(param_2 + 0x10);
  }
  else {
    plVar8 = (long *)(param_2 + 0x10);
    plVar10 = plVar8;
    while (*plVar8 != 0) {
      func_0x00010b1aacdc();
      plVar8 = (long *)((long)extraout_x11 + extraout_x10);
      if (in_NG == in_OV) {
        plVar10 = extraout_x11;
      }
    }
    plVar8 = *(long **)(param_2 + 8);
    cVar4 = SBORROW8((long)plVar8,(long)plVar10);
    cVar5 = (long)plVar8 - (long)plVar10 < 0;
    uVar6 = plVar8 == plVar10;
    plVar8 = plVar10;
    if (!(bool)uVar6) {
      func_0x000107c27bdc();
      func_0x00010b1aaccc();
      if ((bool)uVar6 || cVar5 != cVar4) {
        plVar8 = plVar10;
      }
    }
  }
  do {
    if ((plVar8 == (long *)(param_2 + 0x10)) || (*(long *)(param_3 + 8) <= plVar8[4])) {
      return;
    }
    lVar14 = plVar8[5];
    lVar13 = plVar8[4];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_80,plVar8 + 6);
    plVar10 = (long *)param_1[1];
    if (plVar10 < (long *)param_1[2]) {
      plVar10[1] = lVar14;
      *plVar10 = lVar13;
      plVar10[4] = lStack_70;
      plVar10[3] = lStack_78;
      plVar10[2] = lStack_80;
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_80 = 0;
    }
    else {
      lVar11 = *param_1;
      lVar12 = (long)plVar10 - lVar11;
      uVar1 = lVar12 / 0x28 + 1;
      if (0x666666666666666 < uVar1) {
        FUN_10b1a772c();
LAB_10b19fa98:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b19fa9c);
        (*pcVar3)();
      }
      uVar2 = (param_1[2] - lVar11) / 0x28;
      uVar9 = uVar2 * 2;
      if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
        uVar9 = uVar1;
      }
      if (0x333333333333332 < uVar2) {
        uVar9 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar9) {
        func_0x000104bd35f4();
        goto LAB_10b19fa98;
      }
      lVar7 = uVar9 * 0x28;
      __Znwm();
      plVar10 = (long *)(lVar7 + lVar12);
      plVar10[1] = lVar14;
      *plVar10 = lVar13;
      plVar10[3] = lStack_78;
      plVar10[2] = lStack_80;
      plVar10[4] = lStack_70;
      lStack_80 = 0;
      lStack_78 = 0;
      lStack_70 = 0;
      func_0x00010b1aaf7c(plVar10 + (lVar12 / -0x28) * 5);
      *param_1 = (long)(plVar10 + (lVar12 / -0x28) * 5);
      param_1[2] = lVar7 + uVar9 * 0x28;
      if (lVar11 != 0) {
        func_0x00010b1aaee0();
      }
    }
    param_1[1] = (long)(plVar10 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_80);
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10b19fac0; end: 10b19faf3;  */

void FUN_10b19fac0(void)

{
  long *unaff_x20;
  
  func_0x00010b1ab1ac();
  FUN_10b1a3ad4();
  if ((char)unaff_x20[2] == '\x01') {
    func_0x00010b1aa764(*unaff_x20 - unaff_x20[1]);
  }
  return;
}



/* Entry: 10b19faf4; end: 10b19fb23;  */

long * FUN_10b19faf4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 8);
    if (uVar1 < *(ulong *)(param_1 + 0x10)) {
      func_0x0001009bfa50();
      lVar2 = uVar1 + 0x18;
    }
    else {
      lVar2 = param_1;
      func_0x0001000480f4();
    }
    *(long *)(param_1 + 8) = lVar2;
    return (long *)(lVar2 + -0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b19fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return plVar3;
}



/* Entry: 10b19fb24; end: 10b19fb9f;  */

void FUN_10b19fb24(long *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long lVar2;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (*param_1 != param_1[1]) {
    func_0x00010b1aab34();
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10b1a2118(extraout_x8,&uStack_40);
    func_0x00010b1aa478();
    lVar1 = unaff_x19[1];
    for (lVar2 = *unaff_x19; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x00010b1aaa24(unaff_x19[3]);
      (*extraout_x8_00)();
    }
    func_0x000107c278b0();
  }
  return;
}



/* Entry: 10b19fba0; end: 10b1a0233;  */

/* WARNING: Possible PIC construction at 0x00010b1a0510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b1a0588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b19ffdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1a058c) */
/* WARNING: Removing unreachable block (ram,0x00010b1a0590) */
/* WARNING: Removing unreachable block (ram,0x00010b1a0514) */
/* WARNING: Removing unreachable block (ram,0x00010b19ffe0) */

void FUN_10b19fba0(long ****param_1,long ****param_2,long ****param_3,long ****param_4,
                  undefined8 param_5,ulong param_6)

{
  long ****pppplVar1;
  long ***ppplVar2;
  uint uVar3;
  long *plVar4;
  long ***ppplVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  int iVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long ***ppplVar15;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long ****extraout_x9;
  long ****extraout_x9_00;
  long ****pppplVar16;
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
  int extraout_w11;
  int extraout_w11_00;
  long lVar17;
  bool bVar18;
  long ****pppplVar19;
  ulong unaff_x24;
  long ****pppplVar20;
  ulong uVar21;
  long ****unaff_x26;
  undefined8 ****ppppuVar22;
  undefined8 uVar23;
  undefined8 ***in_stack_00000050;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long ***ppplStack_3e0;
  long lStack_3d8;
  long ***ppplStack_3d0;
  long lStack_3c8;
  char cStack_3c0;
  long ***ppplStack_3b0;
  long lStack_3a8;
  long *aplStack_3a0 [2];
  long ***ppplStack_390;
  long lStack_388;
  undefined8 uStack_378;
  long ***ppplStack_370;
  char cStack_368;
  long ***ppplStack_360;
  long lStack_358;
  long ***ppplStack_2f0;
  long lStack_2e8;
  long ***ppplStack_2d8;
  long ***ppplStack_2d0;
  long ***ppplStack_2c0;
  long **pplStack_2b8;
  undefined1 auStack_2b0 [120];
  undefined8 uStack_238;
  long ***ppplStack_230;
  ulong uStack_228;
  ulong uStack_220;
  byte *pbStack_218;
  long ***ppplStack_210;
  long ***ppplStack_208;
  long ***ppplStack_200;
  long ***ppplStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [8];
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  uint uStack_1c4;
  long *plStack_1c0;
  long *plStack_1b8;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  long ***ppplStack_198;
  long ***ppplStack_190;
  int iStack_180;
  byte bStack_128;
  long ***ppplStack_120;
  long **pplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte abStack_a8 [8];
  undefined1 auStack_a0 [32];
  long ***ppplStack_80;
  long **pplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 ***pppuStack_30;
  ulong uStack_28;
  byte bStack_19;
  long ***ppplStack_18;
  undefined8 uStack_10;
  long *plVar14;
  
  func_0x00010b1aac94();
  ppppuVar22 = &stack0x00000050;
  puVar8 = auStack_1e0;
  pppplVar12 = param_2;
  pppplVar20 = param_4;
  func_0x00010b1aa2f0();
  uVar21 = 1;
  ppplStack_1d8 = (long ***)pppplVar12;
  ppplStack_1d0 = (long ***)pppplVar20;
  uStack_10 = extraout_x8;
  do {
    if ((uVar21 & 1) == 0) break;
    param_6 = 1;
    pppplVar12 = param_1;
    pppplVar20 = param_3;
    FUN_10b1a0234(&ppplStack_1a8,param_1,param_2,param_3,param_4);
    unaff_x24 = (ulong)bStack_128;
    in_ZR = bStack_128 == 1;
    if ((bool)in_ZR) {
      pppplVar12 = param_1 + 0x90;
      uStack_1c4 = (uint)bStack_128;
      FUN_10b19f5c4(&plStack_1c0,pppplVar12,&ppplStack_1a8);
      plVar4 = plStack_1b8;
      uVar21 = 0;
      for (plVar14 = plStack_1c0; plVar14 != plVar4; plVar14 = plVar14 + 7) {
        lVar17 = *plVar14;
        if ((long)ppplStack_1a8 <= lVar17) {
          uStack_38 = 0;
          pppplVar19 = (long ****)ppplStack_1a0;
          if (plVar14[1] <= (long)ppplStack_1a0) {
            pppplVar19 = (long ****)plVar14[1];
          }
          pppplVar11 = (long ****)ppplStack_198;
          lStack_e0 = lVar17;
          if ((long ****)ppplStack_198 != (long ****)0x0) {
            func_0x00010b1aa5b4();
            (*extraout_x8_00)();
            lStack_e0 = *plVar14;
          }
          pppplVar19 = (long ****)((long)pppplVar19 - lVar17);
          pppplVar16 = (long ****)(lStack_e0 - (long)ppplStack_1a8);
          if (pppplVar16 == (long ****)0x0) {
            pppplVar16 = (long ****)plVar14[2];
            ppplVar15 = (long ***)plVar14[3];
            ppplStack_80 = (long ***)pppplVar16;
            pplStack_78 = (long **)ppplVar15;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10 != 0);
            }
            ppplVar5 = ppplStack_190;
            ppplVar2 = ppplStack_198;
            ppplStack_68 = ppplStack_198;
            ppplStack_60 = ppplStack_190;
            ppplStack_70 = (long ***)pppplVar19;
            if ((long ****)ppplStack_190 != (long ****)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_00 != 0);
            }
            ppplStack_120 = (long ***)pppplVar16;
            pplStack_118 = (long **)ppplVar15;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_01 != 0);
            }
            ppplStack_108 = ppplVar2;
            ppplStack_100 = ppplVar5;
            ppplStack_110 = (long ***)pppplVar19;
            if ((long ****)ppplVar5 != (long ****)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_02 != 0);
            }
            func_0x00010b1aa704();
            *pppplVar11 = (long ***)&PTR_FUN_110cc2d30;
            pppplVar11[1] = (long ***)pppplVar16;
            pppplVar11[2] = ppplVar15;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_03 != 0);
            }
            pppplVar11[3] = (long ***)pppplVar19;
            pppplVar11[4] = ppplVar2;
            pppplVar11[5] = ppplVar5;
            if ((long ****)ppplVar5 != (long ****)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_04 != 0);
            }
            ppplStack_18 = (long ***)pppplVar11;
            func_0x00010b1aa70c();
            func_0x00010b1aaefc();
            func_0x00010b1a085c(&ppplStack_120);
            func_0x00010b1a085c(&ppplStack_80);
          }
          else {
            if ((long)pppplVar11 < (long)pppplVar16 + (long)pppplVar19) {
              lStack_d0 = plVar14[1];
              pplStack_118 = (long **)0x0;
              ppplStack_110 = ppplStack_1a8;
              ppplStack_108 = (long ***)0x0;
              ppplStack_100 = ppplStack_1a0;
              ppplStack_f8 = (long ***)0x0;
              uStack_e8 = 0;
              uStack_d8 = 0;
              uStack_c8 = 0;
              ppplStack_f0 = (long ***)pppplVar19;
              func_0x000107c2793c(&UNK_10f731210);
              func_0x000107c3173c(&pppuStack_30);
              if (-1 < (char)bStack_19) {
                uStack_28 = (ulong)bStack_19;
                pppuStack_30 = &pppuStack_30;
              }
              func_0x00010bd3f434(&ppplStack_80,pppuStack_30,uStack_28,&DAT_10f6842c6);
              func_0x00010bd3f4e0(&ppplStack_80,"unknown",0x5dc);
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10b1a0114);
              (*pcVar7)();
            }
            pppplVar1 = (long ****)plVar14[2];
            ppplVar15 = (long ***)plVar14[3];
            ppplStack_80 = (long ***)pppplVar1;
            pplStack_78 = (long **)ppplVar15;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa6f4();
                pppplVar16 = extraout_x9;
              } while (extraout_w11 != 0);
            }
            ppplVar5 = ppplStack_190;
            ppplVar2 = ppplStack_198;
            ppplStack_70 = ppplStack_198;
            ppplStack_68 = ppplStack_190;
            if ((long ****)ppplStack_190 != (long ****)0x0) {
              do {
                func_0x00010b1aa6f4();
                pppplVar16 = extraout_x9_00;
              } while (extraout_w11_00 != 0);
            }
            ppplStack_120 = (long ***)pppplVar1;
            pplStack_118 = (long **)ppplVar15;
            ppplStack_60 = (long ***)pppplVar16;
            ppplStack_58 = (long ***)pppplVar19;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_05 != 0);
            }
            ppplStack_110 = ppplVar2;
            ppplStack_108 = ppplVar5;
            if ((long ****)ppplVar5 != (long ****)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_06 != 0);
            }
            ppplStack_f8 = ppplStack_58;
            ppplStack_100 = ppplStack_60;
            func_0x00010b1aaad8();
            *pppplVar11 = (long ***)&PTR_FUN_110cc2db0;
            pppplVar11[1] = (long ***)pppplVar1;
            pppplVar11[2] = ppplVar15;
            if (ppplVar15 != (long ***)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_07 != 0);
            }
            pppplVar11[3] = ppplVar2;
            pppplVar11[4] = ppplVar5;
            if ((long ****)ppplVar5 != (long ****)0x0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_08 != 0);
            }
            pppplVar11[6] = ppplStack_58;
            pppplVar11[5] = ppplStack_60;
            ppplStack_18 = (long ***)pppplVar11;
            func_0x00010b1aa70c();
            func_0x00010b1aaefc();
            func_0x00010b1a087c(&ppplStack_120);
            func_0x00010b1a087c(&ppplStack_80);
          }
          ppplVar15 = ppplStack_1a0;
          if ((long)ppplStack_1a0 < plVar14[1]) {
            pppplVar19 = param_1;
            FUN_10b19cdec();
            if (((ulong)pppplVar12 & 1) == 0) {
              pppplVar19 = (long ****)0x7fffffffffffffff;
            }
            bVar18 = (long)ppplVar15 < (long)pppplVar19;
          }
          else {
            bVar18 = false;
          }
          FUN_10b19e108(param_1,plVar14 + 2,bVar18);
          if (bVar18 == false) {
            pplStack_78 = (long **)plVar14[3];
            ppplStack_80 = (long ***)plVar14[2];
            if (plVar14[3] != 0) {
              do {
                func_0x00010b1aa2e0();
              } while (extraout_w10_09 != 0);
            }
            func_0x00010724cbe8(&ppplStack_70,auStack_50);
            pppplVar12 = &ppplStack_120;
            FUN_10b1a7ab4(pppplVar12,&ppplStack_80);
            func_0x00010b1aaad8();
            *pppplVar12 = (long ***)&PTR_SUB_110cc2e30;
            FUN_10b1a7ab4(pppplVar12 + 1,&ppplStack_120);
            ppplStack_18 = (long ***)pppplVar12;
            func_0x00010b1aa70c();
            func_0x00010b1aaefc();
            func_0x00010b1a089c(&ppplStack_120);
            func_0x00010b1a089c(&ppplStack_80);
            abStack_a8[0] = 0;
            func_0x00010b1aaea8();
          }
          else {
            pplStack_118 = (long **)plVar14[1];
            ppplStack_120 = ppplStack_1a0;
            FUN_10b19deb8(param_1,&ppplStack_120,plVar14 + 2);
            abStack_a8[0] = 1;
            func_0x00010b1aaea8();
          }
          func_0x000107c27938(auStack_50);
          bVar6 = abStack_a8[0];
          pppplVar19 = &ppplStack_120;
          FUN_10b19f7dc(pppplVar19,param_1 + 0x9e);
          unaff_x26 = (long ****)ppplStack_110;
          func_0x00010b1aa704();
          *pppplVar19 = (long ***)0x0;
          pppplVar19[1] = (long ***)0x0;
          pppplVar12 = (long ****)0x0;
          func_0x00010724cbe8(pppplVar19 + 2);
          pppplVar19[1] = (long ***)unaff_x26;
          ppplVar15 = *unaff_x26;
          *pppplVar19 = ppplVar15;
          ppplVar15[1] = (long **)pppplVar19;
          *unaff_x26 = (long ***)pppplVar19;
          unaff_x26[2] = (long ***)((long)unaff_x26[2] + 1);
          func_0x000107c2798c(&ppplStack_120);
          if ((char)plVar14[4] == '\x01') {
            pppplVar12 = (long ****)ppplStack_1a8;
            FUN_10b20a8d4(param_1 + 0xb7,ppplStack_1a8,ppplStack_1a0);
          }
          uVar21 = (ulong)((uint)uVar21 | (uint)bVar6);
          func_0x000107c27938(auStack_a0);
        }
      }
      FUN_10b1a453c(&plStack_1c0);
      uVar3 = uStack_1c4;
      param_4 = (long ****)ppplStack_1d0;
      param_2 = (long ****)ppplStack_1d8;
      if (iStack_180 == 0) {
        in_ZR = (long ****)ppplStack_1a8 == (long ****)0x1;
        if (0 < (long)ppplStack_1a8) {
          uVar23 = 0x10b19ffe0;
          ppplStack_2d8 = ppplStack_1d8;
          goto FUN_10b1a07a0;
        }
      }
      else {
        in_ZR = iStack_180 == 1;
        if ((bool)in_ZR) {
          func_0x00010b1a07d4(param_1,&ppplStack_1a8,0);
        }
      }
      unaff_x24 = (ulong)uVar3;
      ppplStack_80 = (long ***)param_2;
      FUN_10b19cef0(param_2);
      while( true ) {
        pppplVar12 = param_1 + 0x9e;
        FUN_10b19f7fc(&ppplStack_120);
        if (((ulong)ppplStack_100 & 1) == 0) break;
        func_0x000104c003e8(&ppplStack_120);
        func_0x00010730b1b0(&ppplStack_120);
      }
      func_0x00010730b1b0(&ppplStack_120);
      FUN_10b1a461c(&ppplStack_80);
      param_3 = (long ****)ppplStack_1a0;
    }
    else {
      uVar21 = 1;
    }
    FUN_10b1a4640(&ppplStack_1a8);
  } while ((unaff_x24 & 1) != 0);
  func_0x00010b1aa28c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aac34();
  FUN_10b1a3808();
  FUN_10b1a4640(&ppplStack_1a8);
  func_0x00010b1aa3d8();
  pcStack_1e8 = FUN_10b1a0234;
  puVar8 = auStack_400;
  pppplVar19 = pppplVar12;
  ppplStack_230 = (long ***)unaff_x26;
  uStack_228 = uVar21;
  uStack_220 = unaff_x24;
  pbStack_218 = abStack_a8;
  ppplStack_210 = (long ***)param_3;
  ppplStack_208 = (long ***)param_1;
  ppplStack_200 = (long ***)param_2;
  ppplStack_1f8 = (long ***)param_4;
  pppuStack_1f0 = ppppuVar22;
  func_0x00010b1aa2b8();
  pplStack_2b8 = (long **)((long)pppplVar20 + 1);
  pppplVar19 = pppplVar19 + 0x94;
  ppplStack_2c0 = (long ***)pppplVar20;
  uStack_238 = extraout_x8_01;
  FUN_10b1a08bc(&ppplStack_2d8,pppplVar19,&ppplStack_2c0);
  uVar9 = ppplStack_2d8 == ppplStack_2d0;
  ppppuVar22 = &pppuStack_1f0;
  if ((bool)uVar9) {
    func_0x00010b1ab00c();
  }
  else {
    uVar9 = *(char *)(ppplStack_2d8 + 4) == '\x01';
    if ((bool)uVar9) {
      pplStack_2b8 = ppplStack_2d8[1];
      ppplStack_2c0 = (long ***)*ppplStack_2d8;
      FUN_10b1a39d0(auStack_2b0,ppplStack_2d8 + 2);
      func_0x00010b1aa3f4();
      FUN_10b1a3808(auStack_2b0);
    }
    else {
      ppplStack_2f0 = (long ***)0x0;
      lStack_2e8 = 0;
      if (pppplVar12[0xd6] == (long ***)0x0) {
LAB_10b1a0328:
        uStack_378 = 0;
        ppplStack_370 = (long ***)0x0;
        cStack_368 = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        cStack_368 = '\x01';
        ppplStack_370 = (long ***)pppplVar19;
        func_0x00010b1aaee8();
        func_0x00010b1f70f0(aplStack_3a0,pppplVar12[0x1c],ppplStack_2d8 + 6);
        func_0x00010b1aaef4();
        ppplVar15 = pppplVar12[0x18];
        FUN_10b12983c();
        func_0x00010b1aa5a4(&ppplStack_360,&ppplStack_2c0);
        puVar13 = &uStack_378;
        func_0x000107c28148(puVar13);
        FUN_10b1135dc(ppplVar15,0xc4,&ppplStack_360,puVar13);
        FUN_10b120998(&ppplStack_360);
        func_0x00010b1aa454(&ppplStack_2c0);
        ppplVar15 = (long ***)*ppplStack_2d8;
        ppplVar2 = (long ***)ppplStack_2d8[1];
        if (aplStack_3a0[0] == (long *)0x0) {
          pppplVar20 = (long ****)0x0;
          ppplStack_3b0 = (long ***)0x0;
          lStack_3a8 = 0;
        }
        else {
          plVar14 = aplStack_3a0[0];
          func_0x00010b1aa6d0();
          iVar10 = (int)plVar14;
          (*extraout_x8_03)();
          ppplStack_3b0 = (long ***)0x0;
          lStack_3a8 = 0;
          if (iVar10 == 0) {
            (**(code **)(*aplStack_3a0[0] + 0x20))(&ppplStack_2c0);
            pppplVar20 = (long ****)ppplStack_2c0;
            if ((long ****)ppplStack_2c0 != (long ****)0x0) {
              func_0x00010b1aa5b4();
              (*extraout_x8_04)();
            }
            uVar9 = pppplVar20 == (long ****)((long)ppplVar2 - (long)ppplVar15);
            if ((bool)uVar9) {
              func_0x0001054918e8(&ppplStack_3b0,&ppplStack_2c0);
            }
            func_0x000107c27d78(&ppplStack_2c0);
            if ((long ****)ppplStack_3b0 != (long ****)0x0) {
              pppplVar20 = (long ****)ppplStack_3b0;
              func_0x00010b1aa5b4();
              (*extraout_x8_05)();
              goto LAB_10b1a042c;
            }
          }
          pppplVar20 = (long ****)0x0;
        }
LAB_10b1a042c:
        pppplVar19 = (long ****)ppplStack_3b0;
        FUN_10b19f588(ppplStack_3b0,lStack_3a8);
        if ((((ulong)pppplVar19 & 1) == 0) &&
           (uVar9 = *(char *)((long)pppplVar12 + 0x46b) == '\x01', (bool)uVar9)) {
          lStack_3d8 = lStack_3a8;
          ppplStack_3e0 = ppplStack_3b0;
          if (lStack_3a8 != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_10 != 0);
          }
          FUN_10b1a0980(&ppplStack_3d0,pppplVar12);
          func_0x000107c27d78(&ppplStack_3e0);
          uVar9 = cStack_3c0 == '\x01';
          if ((bool)uVar9) {
            lStack_358 = lStack_3c8;
            ppplStack_360 = ppplStack_3d0;
            ppplStack_3d0 = (long ***)0x0;
            lStack_3c8 = 0;
            func_0x00010b1aacac();
            func_0x00010b1aa658();
            func_0x00010b1aacec();
            func_0x00010b1a4a24(ppplStack_2d8 + 2,&ppplStack_360);
            func_0x00010b1aa3f4();
            func_0x00010b1aa814();
            func_0x00010b1aa838();
          }
          else {
            func_0x00010b1ab00c();
          }
          func_0x000107c27f18(&ppplStack_3d0);
        }
        else {
          if (aplStack_3a0[0] != (long *)0x0) {
            func_0x00010b1aa6d0();
            iVar10 = (int)aplStack_3a0[0];
            (*extraout_x8_06)();
            if (iVar10 == 0) {
              if (pppplVar20 == (long ****)((long)ppplVar2 - (long)ppplVar15)) {
                uVar23 = 0x10b1a0514;
                puVar8 = auStack_400;
              }
              else {
                uVar23 = 0x10b1a058c;
              }
              goto FUN_10b1a07a0;
            }
          }
          func_0x00010b1aaae0();
          if ((param_6 & 1) != 0) {
            uStack_3f0 = 0;
            uStack_3e8 = 0;
            func_0x00010b1aaf54();
            FUN_10b0fb81c(&uStack_3f0);
          }
          func_0x00010b1ab00c();
        }
        func_0x00010b1aa9d4();
        func_0x00010b10c000(aplStack_3a0);
      }
      else {
        func_0x00010b1aaee8();
        pppplVar20 = pppplVar12 + 0xd6;
        FUN_10b137f7c();
        uVar9 = *(char *)(pppplVar20 + 8) == '\x01';
        if ((bool)uVar9) {
          func_0x000108976c60(&ppplStack_2f0);
        }
        func_0x00010b1aaef4();
        pppplVar19 = (long ****)ppplStack_2f0;
        if ((long ****)ppplStack_2f0 == (long ****)0x0) goto LAB_10b1a0328;
        func_0x00010b1aa5b4();
        (*extraout_x8_02)();
        if ((pppplVar19 == (long ****)0x0) ||
           (ppplVar15 = (long ***)*ppplStack_2d8, pppplVar20 = (long ****)ppplStack_2d8[1],
           uVar9 = (((long)ppplVar15 < (long)pppplVar19 && 0 < (long)pppplVar20) &&
                   ppplVar15 == (long ***)0x0) && pppplVar19 == pppplVar20,
           (((long)ppplVar15 >= (long)pppplVar19 || 0 >= (long)pppplVar20) ||
           ppplVar15 != (long ***)0x0) || pppplVar19 != pppplVar20)) goto LAB_10b1a0328;
        lStack_358 = lStack_2e8;
        ppplStack_360 = ppplStack_2f0;
        if (lStack_2e8 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10_11 != 0);
        }
        func_0x00010b1aacac(1);
        func_0x00010b1aa658();
        uVar9 = *(char *)((long)pppplVar12 + 0x46b) == '\x01';
        if ((bool)uVar9) {
          lStack_388 = lStack_358;
          ppplStack_390 = ppplStack_360;
          if (lStack_358 != 0) {
            do {
              func_0x00010b1aa2e0();
            } while (extraout_w10_12 != 0);
          }
          FUN_10b1a0980(&uStack_378,pppplVar12);
          func_0x000107c27d78(&ppplStack_390);
          uVar9 = cStack_368 == '\x01';
          if ((bool)uVar9) {
            func_0x000107c282f0(&ppplStack_360,&uStack_378);
            func_0x00010b1aacec();
            func_0x00010b1aae48();
            func_0x00010b1aa3f4();
            func_0x00010b1aa814();
            func_0x00010b1aae5c();
          }
          else {
            func_0x00010b1aae5c();
            func_0x00010b1ab00c();
          }
        }
        else {
          func_0x00010b1aaae0();
          func_0x00010b1aaa30();
          pplStack_2b8 = ppplStack_2d8[1];
          ppplStack_2c0 = (long ***)*ppplStack_2d8;
          FUN_10b1a39d0(auStack_2b0,&ppplStack_360);
          func_0x00010b1aa3f4();
          FUN_10b1a3808(auStack_2b0);
        }
        func_0x00010b1aa838();
      }
      func_0x000107c27d78(&ppplStack_2f0);
    }
  }
  param_4 = &ppplStack_2d8;
  FUN_10b1a4938();
  func_0x00010b1aa28c(uStack_238);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aae5c();
  func_0x00010b1aa838();
  func_0x000107c27d78(&ppplStack_2f0);
  FUN_10b1a4938(&ppplStack_2d8);
  uVar23 = 0x10b1a07a0;
  func_0x00010b1aa3d8();
  puVar8 = auStack_400;
FUN_10b1a07a0:
  *(long ****)(puVar8 + -0x20) = ppplStack_2d8;
  *(long *****)(puVar8 + -0x18) = param_4;
  *(undefined8 *****)(puVar8 + -0x10) = ppppuVar22;
  *(undefined8 *)(puVar8 + -8) = uVar23;
  func_0x00010b1ab1ac();
  FUN_10b1a3898();
  if (*(char *)(ppplStack_2d8 + 2) == '\x01') {
    func_0x00010b1aa764((long)*ppplStack_2d8 - (long)ppplStack_2d8[1]);
  }
  return;
}



/* Entry: 10b1a0234; end: 10b1a079f;  */

void FUN_10b1a0234(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  char cStack_1e0;
  ulong uStack_1d0;
  long lStack_1c8;
  long *aplStack_1c0 [2];
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_198;
  ulong uStack_190;
  char cStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_110;
  long lStack_108;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [120];
  undefined8 uStack_58;
  long *plVar7;
  
  puVar9 = &uStack_220;
  lVar5 = param_2;
  func_0x00010b1aa2b8();
  uStack_d8 = param_4 + 1;
  uVar4 = lVar5 + 0x4a0;
  uStack_e0 = param_4;
  uStack_58 = extraout_x8;
  FUN_10b1a08bc(&puStack_f8,uVar4,&uStack_e0);
  uVar2 = puStack_f8 == puStack_f0;
  if ((bool)uVar2) {
    func_0x00010b1ab00c();
    goto LAB_10b1a0568;
  }
  uVar2 = (char)puStack_f8[4] == '\x01';
  if ((bool)uVar2) {
    uStack_d8 = puStack_f8[1];
    uStack_e0 = *puStack_f8;
    FUN_10b1a39d0(auStack_d0,puStack_f8 + 2);
    func_0x00010b1aa3f4();
    FUN_10b1a3808(auStack_d0);
    goto LAB_10b1a0568;
  }
  uStack_110 = 0;
  lStack_108 = 0;
  if (*(long *)(param_2 + 0x6b0) == 0) {
LAB_10b1a0328:
    uStack_198 = 0;
    uStack_190 = 0;
    cStack_188 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    cStack_188 = '\x01';
    uStack_190 = uVar4;
    func_0x00010b1aaee8();
    func_0x00010b1f70f0(aplStack_1c0,*(undefined8 *)(param_2 + 0xe0),puStack_f8 + 6);
    func_0x00010b1aaef4();
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    FUN_10b12983c();
    func_0x00010b1aa5a4(&uStack_180,&uStack_e0);
    puVar6 = &uStack_198;
    func_0x000107c28148(puVar6);
    FUN_10b1135dc(uVar10,0xc4,&uStack_180,puVar6);
    FUN_10b120998(&uStack_180);
    func_0x00010b1aa454(&uStack_e0);
    uVar4 = *puStack_f8;
    uVar1 = puStack_f8[1];
    if (aplStack_1c0[0] == (long *)0x0) {
      uVar11 = 0;
      uStack_1d0 = 0;
      lStack_1c8 = 0;
    }
    else {
      plVar7 = aplStack_1c0[0];
      func_0x00010b1aa6d0();
      iVar3 = (int)plVar7;
      (*extraout_x8_01)();
      uStack_1d0 = 0;
      lStack_1c8 = 0;
      if (iVar3 == 0) {
        (**(code **)(*aplStack_1c0[0] + 0x20))(&uStack_e0);
        uVar11 = uStack_e0;
        if (uStack_e0 != 0) {
          func_0x00010b1aa5b4();
          (*extraout_x8_02)();
        }
        uVar2 = uVar11 == uVar1 - uVar4;
        if ((bool)uVar2) {
          func_0x0001054918e8(&uStack_1d0,&uStack_e0);
        }
        func_0x000107c27d78(&uStack_e0);
        if (uStack_1d0 != 0) {
          uVar11 = uStack_1d0;
          func_0x00010b1aa5b4();
          (*extraout_x8_03)();
          goto LAB_10b1a042c;
        }
      }
      uVar11 = 0;
    }
LAB_10b1a042c:
    uVar8 = uStack_1d0;
    FUN_10b19f588(uStack_1d0,lStack_1c8);
    if (((uVar8 & 1) == 0) && (uVar2 = *(char *)(param_2 + 0x46b) == '\x01', (bool)uVar2)) {
      lStack_1f8 = lStack_1c8;
      uStack_200 = uStack_1d0;
      if (lStack_1c8 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      FUN_10b1a0980(&uStack_1f0,param_2);
      func_0x000107c27d78(&uStack_200);
      uVar2 = cStack_1e0 == '\x01';
      if ((bool)uVar2) {
        lStack_178 = lStack_1e8;
        uStack_180 = uStack_1f0;
        uStack_1f0 = 0;
        lStack_1e8 = 0;
        func_0x00010b1aacac();
        func_0x00010b1aa658();
        func_0x00010b1aacec();
        func_0x00010b1a4a24(puStack_f8 + 2,&uStack_180);
        func_0x00010b1aa3f4();
        func_0x00010b1aa814();
        func_0x00010b1aa838();
      }
      else {
        func_0x00010b1ab00c();
      }
      func_0x000107c27f18(&uStack_1f0);
    }
    else {
      if (aplStack_1c0[0] == (long *)0x0) {
LAB_10b1a04d4:
        func_0x00010b1aaae0();
        if ((param_6 & 1) != 0) {
          uStack_210 = 0;
          uStack_208 = 0;
          func_0x00010b1aaf54();
          puVar9 = &uStack_210;
LAB_10b1a04f0:
          FUN_10b0fb81c(puVar9);
        }
      }
      else {
        func_0x00010b1aa6d0();
        iVar3 = (int)aplStack_1c0[0];
        (*extraout_x8_04)();
        if (iVar3 != 0) goto LAB_10b1a04d4;
        uVar2 = uVar11 == uVar1 - uVar4;
        if ((bool)uVar2) {
          FUN_10b1a07a0(&uStack_e0,param_2 + 0x4a0,puStack_f8 + 2);
          lStack_178 = lStack_1c8;
          uStack_180 = uStack_1d0;
          uStack_1d0 = 0;
          lStack_1c8 = 0;
          func_0x00010b1aacac(1);
          func_0x00010b1aa658();
          func_0x00010b1aaa30();
          func_0x00010b1aacec();
          func_0x00010b1aae48();
          func_0x00010b1aa3f4();
          func_0x00010b1aa814();
          func_0x00010b1aa838();
          goto LAB_10b1a0554;
        }
        FUN_10b1a07a0(&uStack_e0,param_2 + 0x4a0,puStack_f8 + 2);
        if ((param_6 & 1) != 0) {
          uStack_220 = 0;
          uStack_218 = 0;
          func_0x00010b1aaf54();
          goto LAB_10b1a04f0;
        }
      }
      func_0x00010b1ab00c();
    }
LAB_10b1a0554:
    func_0x00010b1aa9d4();
    func_0x00010b10c000(aplStack_1c0);
  }
  else {
    func_0x00010b1aaee8();
    lVar5 = param_2 + 0x6b0;
    FUN_10b137f7c();
    uVar2 = *(char *)(lVar5 + 0x40) == '\x01';
    if ((bool)uVar2) {
      func_0x000108976c60(&uStack_110);
    }
    func_0x00010b1aaef4();
    uVar4 = uStack_110;
    if (uStack_110 == 0) goto LAB_10b1a0328;
    func_0x00010b1aa5b4();
    (*extraout_x8_00)();
    if ((uVar4 == 0) ||
       (uVar1 = *puStack_f8, uVar11 = puStack_f8[1],
       uVar2 = (((long)uVar1 < (long)uVar4 && 0 < (long)uVar11) && uVar1 == 0) && uVar4 == uVar11,
       (((long)uVar1 >= (long)uVar4 || 0 >= (long)uVar11) || uVar1 != 0) || uVar4 != uVar11))
    goto LAB_10b1a0328;
    lStack_178 = lStack_108;
    uStack_180 = uStack_110;
    if (lStack_108 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b1aacac(1);
    func_0x00010b1aa658();
    uVar2 = *(char *)(param_2 + 0x46b) == '\x01';
    if ((bool)uVar2) {
      lStack_1a8 = lStack_178;
      uStack_1b0 = uStack_180;
      if (lStack_178 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
      FUN_10b1a0980(&uStack_198,param_2);
      func_0x000107c27d78(&uStack_1b0);
      uVar2 = cStack_188 == '\x01';
      if ((bool)uVar2) {
        func_0x000107c282f0(&uStack_180,&uStack_198);
        func_0x00010b1aacec();
        func_0x00010b1aae48();
        func_0x00010b1aa3f4();
        func_0x00010b1aa814();
        func_0x00010b1aae5c();
      }
      else {
        func_0x00010b1aae5c();
        func_0x00010b1ab00c();
      }
    }
    else {
      func_0x00010b1aaae0();
      func_0x00010b1aaa30();
      uStack_d8 = puStack_f8[1];
      uStack_e0 = *puStack_f8;
      FUN_10b1a39d0(auStack_d0,&uStack_180);
      func_0x00010b1aa3f4();
      FUN_10b1a3808(auStack_d0);
    }
    func_0x00010b1aa838();
  }
  func_0x000107c27d78(&uStack_110);
LAB_10b1a0568:
  FUN_10b1a4938();
  func_0x00010b1aa28c(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aae5c();
  func_0x00010b1aa838();
  func_0x000107c27d78(&uStack_110);
  FUN_10b1a4938(&puStack_f8);
  func_0x00010b1aa3d8();
  func_0x00010b1ab1ac();
  FUN_10b1a3898();
  if ((char)puStack_f8[2] == '\x01') {
    func_0x00010b1aa764(*puStack_f8 - puStack_f8[1]);
  }
  return;
}



/* Entry: 10b1a07a0; end: 10b1a08bb;  */

void FUN_10b1a07a0(void)

{
  long *unaff_x20;
  
  func_0x00010b1ab1ac();
  FUN_10b1a3898();
  if ((char)unaff_x20[2] == '\x01') {
    func_0x00010b1aa764(*unaff_x20 - unaff_x20[1]);
  }
  return;
}



/* Entry: 10b1a08bc; end: 10b1a08f7;  */

void FUN_10b1a08bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_28 = param_1;
  FUN_10b1a55ec(param_2,param_3,&puStack_28);
  return;
}



/* Entry: 10b1a08f8; end: 10b1a095f;  */

void FUN_10b1a08f8(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b1a546c();
  while ((lVar1 != param_1 + 0x10 && (*(long *)(lVar1 + 0x20) < *(long *)(param_2 + 8)))) {
    (*(code *)*param_3)(lVar1 + 0x30,param_3);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 10b1a0960; end: 10b1a097f;  */

long FUN_10b1a0960(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1aa77c();
  func_0x00010b17dd64();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1a0980; end: 10b1a0a2f;  */

void FUN_10b1a0980(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  byte bStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_38;
  
  puVar3 = param_6;
  func_0x00010b1aa2b8();
  bStack_79 = 0;
  pcStack_68 = FUN_10b1a82c0;
  ppuStack_60 = &PTR_FUN_110cc2ee8;
  pbStack_50 = &bStack_79;
  puVar1 = (undefined8 *)(param_2 + 0x4a0);
  puVar2 = &uStack_78;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_58 = param_5;
  puStack_48 = puVar3;
  uStack_38 = extraout_x8;
  FUN_10b1a08f8(puVar1,puVar2,&pcStack_68);
  func_0x00010b1aa384();
  if ((bStack_79 & 1) == 0) {
    uVar5 = *param_6;
    unaff_x19[1] = param_6[1];
    *unaff_x19 = uVar5;
    *param_6 = 0;
    param_6[1] = 0;
    uVar4 = 1;
  }
  else {
    func_0x00010b1aad0c();
    uVar4 = extraout_w8;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar4;
  func_0x00010b1aa28c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1aa384();
  func_0x00010b1aa3d8();
  if (*(char *)(puVar2 + 1) == '\x01') {
    *puVar1 = puVar2;
    FUN_10b19cef0(puVar2);
    uVar4 = 1;
  }
  else {
    func_0x00010b1aad0c();
    uVar4 = extraout_w8_00;
  }
  *(undefined1 *)(puVar1 + 1) = uVar4;
  return;
}



/* Entry: 10b1a0a30; end: 10b1a0a6f;  */

void FUN_10b1a0a30(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 extraout_w8;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_1 = param_2;
    FUN_10b19cef0(param_2);
    uVar1 = 1;
  }
  else {
    func_0x00010b1aad0c();
    uVar1 = extraout_w8;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 10b1a0a70; end: 10b1a0b27;  */

void FUN_10b1a0a70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long *extraout_x10;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b195e24(&uStack_40,param_2,&uStack_50);
  FUN_10b195e74(&uStack_30,&uStack_40);
  func_0x00010b1aa848();
  func_0x00010b1aa7d0();
  if (lStack_28 == 0) {
    uStack_38 = 0;
    uStack_40 = uStack_30;
  }
  else {
    do {
      func_0x00010b1aa43c();
    } while (extraout_w12 != 0);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
      if (bVar2) {
        *extraout_x10 = *extraout_x10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      uStack_40 = extraout_x8;
      uStack_38 = extraout_x9;
    } while (cVar1 != '\0');
  }
  FUN_10b1961a0(param_1,&uStack_40);
  func_0x00010b1aa848();
  func_0x00010b1aa89c();
  func_0x00010b1aa9ac();
  return;
}



/* Entry: 10b1a0b28; end: 10b1a0b4b;  */

void FUN_10b1a0b28(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b166558();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10b1a0b4c; end: 10b1a0c87;  */

void FUN_10b1a0b4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  
  func_0x00010b1aa934();
  func_0x000107c278b8(auStack_78,&UNK_10f73130d);
  FUN_10b1a0c88(auStack_60);
  func_0x00010b1aaa90();
  func_0x00010b1aaf18();
  func_0x00010b1aaf10();
  *(undefined1 *)(unaff_x21 + 0x6f0) = 1;
  uStack_88 = *param_3;
  uStack_80 = *(undefined1 *)(param_3 + 1);
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  FUN_10b19fb24(auStack_60,&uStack_88);
  func_0x00010b1aae20();
  func_0x00010b1aa928();
  func_0x000107c278b8(&uStack_a0);
  func_0x00010b139eac(&uStack_c0,&UNK_10f73130d);
  uVar1 = uStack_90;
  unaff_x19[1] = uStack_98;
  *unaff_x19 = uStack_a0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  unaff_x19[2] = uVar1;
  unaff_x19[3] = 9;
  *(undefined1 *)(unaff_x19 + 4) = 0;
  *(undefined1 *)(unaff_x19 + 7) = 0;
  if (cStack_a8 == '\x01') {
    unaff_x19[5] = uStack_b8;
    unaff_x19[4] = uStack_c0;
    unaff_x19[6] = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    *(undefined1 *)(unaff_x19 + 7) = 1;
  }
  func_0x000107c279a4(&uStack_c0);
  func_0x00010b1aa850();
  FUN_10b1a45c4(auStack_60);
  return;
}



/* Entry: 10b1a0c88; end: 10b1a0e43;  */

void FUN_10b1a0c88(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long extraout_x9;
  long lVar8;
  int extraout_w10;
  int extraout_w12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uStack_68 = 0x7fffffffffffffff;
  uStack_70 = 0;
  FUN_10b19f5c4(&puStack_58,param_2 + 0x480,&uStack_70);
  for (puVar7 = puStack_58; puVar7 != puStack_50; puVar7 = puVar7 + 7) {
    uStack_68 = puVar7[3];
    uStack_70 = puVar7[2];
    if (puVar7[3] != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
    }
    func_0x00010b1aae28(param_2);
    func_0x00010b1aa5b4(uStack_70);
    func_0x00010b1aa8b8();
    FUN_10b0fb81c(&uStack_70);
  }
  FUN_10b1a453c(&puStack_58);
  FUN_10b1a21f4(param_2 + 0x720);
  uVar6 = param_2 + 0xd0;
  FUN_10b127a84();
  if ((uVar6 & 1) == 0) {
    lVar8 = 0;
    puVar7 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    puStack_50 = (undefined8 *)0x0;
  }
  else {
    lVar8 = param_2 + 0xd0;
    FUN_10b12785c();
    puVar7 = *(undefined8 **)(lVar8 + 0x10);
    puStack_50 = *(undefined8 **)(lVar8 + 0x18);
    lVar8 = 0;
    puStack_58 = puVar7;
    if (puStack_50 != (undefined8 *)0x0) {
      do {
        func_0x00010b1aa43c();
        puVar7 = extraout_x8;
        lVar8 = extraout_x9;
      } while (extraout_w12 != 0);
    }
  }
  uVar2 = *(undefined1 *)(param_2 + 0x46b);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = puVar7;
  param_1[4] = lVar8;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_1 + 5) = uVar2;
  func_0x0001052a9ef8(&puStack_58);
  uStack_68 = 0x7fffffffffffffff;
  uStack_70 = 0;
  FUN_10b19f8ac(&puStack_58,param_2 + 0x590,&uStack_70);
  puVar5 = puStack_50;
  for (puVar7 = puStack_58; puVar7 != puVar5; puVar7 = puVar7 + 5) {
    FUN_10b19faf4(param_1,puVar7 + 2);
    func_0x00010b1aae88(&uStack_70,param_2 + 0x590);
    if (param_3 != 9) {
      FUN_10b1a15e4(param_2,*puVar7,puVar7[1]);
    }
  }
  func_0x00010b1a457c(&puStack_58);
  return;
}



/* Entry: 10b1a0e44; end: 10b1a0e83;  */

void FUN_10b1a0e44(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b1aa63c();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      func_0x00010b1aafb0();
      lVar1 = unaff_x21;
    }
    func_0x00010b1aa418();
  }
  return;
}



/* Entry: 10b1a0e84; end: 10b1a128f;  */

undefined8
FUN_10b1a0e84(long param_1,long param_2,undefined8 *param_3,undefined4 param_4,undefined8 param_5,
             uint param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar11;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  uint uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [20];
  uint auStack_6c [3];
  
  lVar8 = param_1;
  auStack_6c[0] = param_6;
  FUN_10b19af84(auStack_80);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar8 = param_1 + 0x590;
    FUN_10b19fac0(&puStack_98,lVar8,param_2);
    if (((ulong)puStack_88 & 1) == 0) {
      uVar12 = 0;
      goto LAB_10b1a1188;
    }
  }
  if (((*(long *)(param_1 + 0x368) == 0) || (*(char *)(param_1 + 0x6d0) != '\x01')) ||
     ((*(byte *)(param_1 + 0x6e8) & 1) != 0)) {
    bVar7 = false;
  }
  else {
    FUN_10b2029a0();
    FUN_10b20345c();
    ppuVar3 = &PTR_PTR_113386a18;
    if (*(undefined ***)(lVar8 + 0x18) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(lVar8 + 0x18);
    }
    puVar10 = ppuVar3[6];
    func_0x00010564d0ec(puVar10,puVar10 + (long)*(int *)(ppuVar3 + 5) * 4,auStack_6c);
    bVar7 = ppuVar3[6] + (long)*(int *)(ppuVar3 + 5) * 4 != puVar10;
  }
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  FUN_10b19f5c4(&lStack_b0,param_1 + 0x480,param_3);
  lVar5 = lStack_a8;
  puVar15 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  for (lVar8 = lStack_b0; lVar8 != lVar5; lVar8 = lVar8 + 0x38) {
    lStack_b8 = *(long *)(lVar8 + 0x18);
    uStack_c0 = *(undefined8 *)(lVar8 + 0x10);
    if (*(long *)(lVar8 + 0x18) != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
    }
    FUN_10b19e108(param_1);
    lVar4 = lStack_b8;
    uVar12 = uStack_c0;
    if (puVar15 < puStack_88) {
      *puVar15 = uStack_c0;
      puVar15[1] = lStack_b8;
      if (lStack_b8 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_00 != 0);
      }
      puVar15 = puVar15 + 2;
      puVar11 = puVar13;
    }
    else {
      lVar14 = (long)puVar15 - (long)puVar13;
      if ((lVar14 >> 4) + 1U >> 0x3c != 0) {
        func_0x00010b1a4a84();
LAB_10b1a1210:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1a1214);
        (*pcVar6)();
      }
      func_0x00010b1ab0e4((long)puStack_88 - (long)puVar13);
      uVar2 = extraout_x9;
      if (0x7fffffffffffffef < extraout_x8) {
        uVar2 = 0xfffffffffffffff;
      }
      if (uVar2 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_10b1a1210;
      }
      lVar9 = uVar2 << 4;
      __Znwm();
      puVar11 = (undefined8 *)(lVar9 + lVar14);
      *puVar11 = uVar12;
      puVar11[1] = lVar4;
      if (lVar4 != 0) {
        do {
          func_0x00010b1aa588();
          puVar11 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      puVar1 = (undefined8 *)(lVar9 + uVar2 * 0x10);
      puVar15 = puVar11 + 2;
      puVar11 = puVar11 + (lVar14 >> 4) * -2;
      _memcpy(puVar11,puVar13,lVar14);
      puStack_98 = puVar11;
      puStack_88 = puVar1;
      if (puVar13 != (undefined8 *)0x0) {
        puStack_90 = puVar15;
        __ZdlPv(puVar13);
      }
    }
    puStack_90 = puVar15;
    FUN_10b0fb81c(&uStack_c0);
    puVar13 = puVar11;
  }
  FUN_10b1a453c(&lStack_b0);
  *(uint *)(param_1 + 0x4e0) = auStack_6c[0];
  *(undefined1 *)(param_1 + 0x4e4) = 1;
  if (bVar7) {
    *(uint *)(param_1 + 0x4e8) = auStack_6c[0];
    *(undefined1 *)(param_1 + 0x4ec) = 1;
    FUN_10b19c210(&lStack_b0,param_1);
    FUN_10b19ca5c(param_1 + 0x6d8,&lStack_b0);
    FUN_10b166558(&lStack_b0);
    FUN_10b1a6110(&uStack_c0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    lVar8 = lStack_b8;
    uVar12 = uStack_c0;
    if (lStack_b8 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b1aae64();
    puStack_130 = puStack_98;
    puStack_120 = puStack_88;
    puStack_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    lStack_110 = lVar8;
    uStack_118 = uVar12;
    lStack_b0 = 0;
    lStack_a8 = 0;
    puStack_128 = puVar15;
    uStack_108 = param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_100,param_5);
    uStack_e8 = auStack_6c[0];
    uStack_d8 = param_3[1];
    uStack_e0 = *param_3;
    FUN_10b1a1290(auStack_d0,param_1 + 0x6d8,&puStack_130);
    func_0x000107c27b58(auStack_d0);
    FUN_10b1a15b4(&puStack_130);
    func_0x00010b124c0c(&lStack_b0);
  }
  else {
    FUN_10b1a15e4(param_1,*param_3,param_3[1]);
    FUN_10b19cef0(auStack_80);
    for (puVar13 = puStack_98; puVar13 != puVar15; puVar13 = puVar13 + 2) {
      (**(code **)(*(long *)*puVar13 + 0x18))
                ((long *)*puVar13,param_4,param_5,(ulong)auStack_6c[0] | 0x100000000);
    }
  }
  FUN_10b1a4a90(&puStack_98);
  uVar12 = 1;
LAB_10b1a1188:
  FUN_10b122f98(auStack_80);
  return uVar12;
}



/* Entry: 10b1a1290; end: 10b1a15b3;  */

void FUN_10b1a1290(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 extraout_w8;
  long lVar10;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  
  lVar7 = 0x130;
  __Znwm();
  lVar8 = lVar7;
  func_0x00010b1ab0a4(FUN_10b1a9864);
  *(undefined8 *)(lVar8 + 0x60) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  uVar12 = param_3[3];
  *(undefined8 *)(lVar8 + 0x70) = param_3[4];
  *(undefined8 *)(lVar8 + 0x68) = uVar12;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(lVar8 + 0x78) = *(undefined4 *)(param_3 + 5);
  param_3[4] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar8 + 0x80,param_3 + 6)
  ;
  uVar12 = param_3[9];
  *(undefined8 *)(lVar7 + 0xa0) = param_3[10];
  *(undefined8 *)(lVar7 + 0x98) = uVar12;
  *(undefined8 *)(lVar7 + 0xa8) = param_3[0xb];
  FUN_10b124f8c(lVar7 + 0x10);
  puVar1 = (undefined8 *)(lVar7 + 0x108);
  uVar2 = lVar7 + 0xb0;
  FUN_10b124f40(param_1,lVar7 + 0x10);
  lVar10 = param_2[1];
  uVar12 = *param_2;
  *(undefined8 *)(lVar7 + 0x110) = param_2[1];
  *puVar1 = uVar12;
  if (lVar10 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b16c9a4(uVar2,puVar1);
  uVar9 = uVar2;
  FUN_10b12d174();
  if ((uVar9 & 1) == 0) {
    *(undefined1 *)(lVar7 + 0x128) = 0;
    lStack_80 = lVar7;
    uStack_78 = uVar2;
    FUN_10b12d1c8(auStack_70,uVar2,&lStack_80);
    if (lStack_68 != 0) {
      do {
        func_0x00010b1aa374();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b1aa310();
        func_0x00010b1aa774();
      }
    }
  }
  else {
    FUN_10b12d0d0(uVar2);
    func_0x00010b1aaaf0();
    *(undefined8 *)(lVar7 + 0x118) = *(undefined8 *)(lVar7 + 0x108);
    *(long *)(lVar7 + 0x120) = *(long *)(lVar7 + 0x110);
    if (*(long *)(lVar7 + 0x110) != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b11fabc(lVar7 + 0xf8,(undefined8 *)(lVar8 + 0x68));
    lVar10 = lVar7 + 0x118;
    func_0x00010b1a614c(lVar10);
    func_0x0001052a06f8(uVar2,lVar10);
    puVar3 = *(undefined8 **)(lVar7 + 0x58);
    for (puVar11 = *(undefined8 **)(lVar7 + 0x50); uVar6 = puVar11 == puVar3, !(bool)uVar6;
        puVar11 = puVar11 + 2) {
      if (*(char *)(lVar7 + 0xf0) == '\x01') {
        if ((*(byte *)(lVar7 + 0xe8) & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1a1504);
          (*pcVar5)();
        }
        uVar4 = *(undefined4 *)(lVar7 + 200);
        lVar10 = lVar7 + 0xd0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar7 + 0x78);
        lVar10 = lVar8 + 0x80;
      }
      (**(code **)(*(long *)*puVar11 + 0x18))
                ((long *)*puVar11,uVar4,lVar10,(ulong)*(uint *)(lVar7 + 0x98) | 0x100000000);
    }
    if ((*(long *)(lVar7 + 0xf8) != 0) && ((*(byte *)(lVar7 + 0xf0) & 1) == 0)) {
      FUN_10b19af84(auStack_70);
      FUN_10b1a15e4(*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0xa0),
                    *(undefined8 *)(lVar7 + 0xa8));
      FUN_10b122f98(auStack_70);
    }
    func_0x00010b1aaaf8();
    func_0x00010b1aab14();
    func_0x00010b1aab2c();
    func_0x00010b1aa6b4();
    FUN_10b166558(puVar1);
    func_0x00010b1aa598();
    *(undefined1 *)(lVar7 + 0x128) = extraout_w8;
    func_0x00010b1aa9ec();
    if ((bool)uVar6) {
      puStack_58 = auStack_60;
      func_0x00010b1ab080();
      func_0x000107c27b6c();
    }
    else {
      func_0x00010b1aa67c(auStack_60);
      puStack_58 = auStack_60;
      func_0x00010b1ab080();
      func_0x000104bf33ec();
      __ZNSt13exception_ptrD1Ev(auStack_60);
    }
    func_0x00010b1aa4d4();
    FUN_10b1a15b4();
    func_0x00010b1aa42c();
  }
  return;
}



/* Entry: 10b1a15b4; end: 10b1a15e3;  */

long FUN_10b1a15b4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x00010b124c0c(param_1 + 0x18);
  func_0x00010b1aa63c(param_1);
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x10;
      FUN_10b0fb81c();
    }
    func_0x00010b1aa418();
  }
  return unaff_x19;
}



/* Entry: 10b1a15e4; end: 10b1a1613;  */

void FUN_10b1a15e4(undefined8 param_1,long param_2,long param_3)

{
  long lStack_20;
  long lStack_18;
  
  lStack_20 = param_2 + -1;
  lStack_18 = param_3 + 1;
  func_0x00010b1a07d4(param_1,&lStack_20,1);
  return;
}



/* Entry: 10b1a1614; end: 10b1a1933;  */

/* WARNING: Removing unreachable block (ram,0x00010b1a18c0) */

void FUN_10b1a1614(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  int extraout_w11;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_f8 [24];
  long *plStack_e0;
  long *plStack_d8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x00010b1aa568();
  FUN_10b19af84(&uStack_60);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  plStack_d8 = (long *)0x7fffffffffffffff;
  plStack_e0 = (long *)0x0;
  FUN_10b19f5c4(&puStack_c0,unaff_x19 + 0x480,&plStack_e0);
  puVar8 = puStack_c0;
LAB_10b1a1664:
  if (puVar8 == puStack_b8) {
    func_0x00010b1aadf0();
    FUN_10b19cef0(&uStack_60);
LAB_10b1a1860:
    plVar10 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      func_0x000107c278b8(&puStack_c0,&UNK_10f731324);
      func_0x00010b1aa8b8(*(undefined8 *)(*plVar10 + 0x18),plVar10,8,&puStack_c0);
      func_0x00010b1aadf8();
    }
    FUN_10b0fb81c(&plStack_90);
    FUN_10b122f98(&uStack_60);
    return;
  }
  if (puVar8[5] != unaff_x20) goto code_r0x00010b1a1678;
  func_0x00010b1aae28();
  if (*(char *)(unaff_x19 + 0x46c) == '\x01') {
    FUN_10b10537c(&plStack_90,puVar8 + 2);
  }
  uStack_78 = puVar8[1];
  uStack_80 = *puVar8;
  uStack_70 = 1;
  func_0x00010b1aadf0();
  lVar4 = unaff_x19 + 0xd0;
  FUN_10b127a84();
  if ((int)lVar4 == 0) {
    plStack_a8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
  }
  else {
    func_0x00010b1aae90();
    plStack_a8 = *(long **)(lVar4 + 0x10);
    plStack_d8 = *(long **)(lVar4 + 0x18);
    plStack_e0 = plStack_a8;
    if (plStack_d8 != (long *)0x0) {
      do {
        func_0x00010b1aa588();
        plStack_a8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  uStack_98 = *(undefined1 *)(unaff_x19 + 0x46b);
  puStack_c0 = (ulong *)0x0;
  puStack_b8 = (ulong *)0x0;
  uStack_b0 = 0;
  if (plStack_d8 != (long *)0x0) {
    plVar10 = plStack_d8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_a0 = plStack_d8;
  func_0x0001052a9ef8(&plStack_e0);
  FUN_10b19f8ac(&plStack_e0,unaff_x19 + 0x590,&uStack_80);
  plVar3 = plStack_d8;
  plVar10 = plStack_e0;
LAB_10b1a1750:
  if (plVar10 == plVar3) {
    func_0x00010b1a457c(&plStack_e0);
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b1aae54(&puStack_c0);
    func_0x00010b1aa468();
    FUN_10b1a45c4(&puStack_c0);
    goto LAB_10b1a1860;
  }
  puVar5 = *(undefined8 **)(unaff_x19 + 0x488);
  while (puVar5 != (undefined8 *)(unaff_x19 + 0x490U)) {
    if (*plVar10 < (long)puVar5[5] && (long)puVar5[4] < plVar10[1]) goto LAB_10b1a1824;
    func_0x000107c27be0();
  }
  puVar6 = *(undefined8 **)(unaff_x19 + 0x728);
  for (puVar9 = *(undefined8 **)(unaff_x19 + 0x720); puVar7 = puVar6, puVar9 != puVar6;
      puVar9 = puVar9 + 5) {
    func_0x00010b1aaecc(*puVar9);
    puVar7 = puVar9;
    if ((int)puVar5 != 0) goto LAB_10b1a17ac;
  }
  goto LAB_10b1a17dc;
code_r0x00010b1a1678:
  puVar8 = puVar8 + 7;
  goto LAB_10b1a1664;
LAB_10b1a17ac:
  while (puVar9 = puVar9 + 5, puVar9 != puVar6) {
    func_0x00010b1aaecc(*puVar9);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = puVar7;
      func_0x00010b1a4b00(puVar7,puVar9);
      puVar7 = puVar7 + 5;
    }
  }
LAB_10b1a17dc:
  if (puVar7 != *(undefined8 **)(unaff_x19 + 0x728)) {
    func_0x00010b1a4acc(unaff_x19 + 0x720,puVar7);
  }
  FUN_10b19faf4(&puStack_c0,plVar10 + 2);
  FUN_10b19fac0(auStack_f8,unaff_x19 + 0x590,plVar10 + 2);
  FUN_10b1a15e4();
LAB_10b1a1824:
  plVar10 = plVar10 + 5;
  goto LAB_10b1a1750;
}



/* Entry: 10b1a1934; end: 10b1a19ff;  */

void FUN_10b1a1934(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  long alStack_40 [2];
  
  func_0x00010b1aa574();
  FUN_10b19af84(alStack_40);
  uVar1 = unaff_x20 + 0xd0;
  FUN_10b127a84();
  if ((uVar1 & 1) != 0) {
    uStack_68 = 0x7fffffffffffffff;
    uStack_70 = 0;
    plVar2 = &lStack_58;
    FUN_10b19f8ac(plVar2,unaff_x20 + 0x590,&uStack_70);
    lVar3 = lStack_58;
    if (*(char *)(unaff_x20 + 0x46b) == '\x01') {
      plVar2 = alStack_40;
      FUN_10b19cef0();
      lVar3 = lStack_58;
    }
    for (; lVar3 != lStack_50; lVar3 = lVar3 + 0x28) {
      func_0x00010b1aaea0();
      plVar2 = (long *)plVar2[2];
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar3 + 0x10);
    }
    func_0x00010b1a457c(&lStack_58);
  }
  func_0x00010b1aaf60();
  return;
}



/* Entry: 10b1a1a00; end: 10b1a1a13;  */

void FUN_10b1a1a00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0xf) == '\0') {
    param_2 = param_3;
  }
  func_0x00010b134530();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107c2795c(param_1 + 4,param_2 + 4);
  func_0x000107c279a0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000107c279a0(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 10b1a1a14; end: 10b1a1acf;  */

long FUN_10b1a1a14(void)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_168 [128];
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [120];
  long lStack_48;
  undefined1 auStack_40 [16];
  
  func_0x00010b1aa568();
  FUN_10b19af84(auStack_40);
  lStack_48 = *(long *)(unaff_x19 + 0x620);
  *(long *)(unaff_x19 + 0x620) = lStack_48 + 1;
  func_0x00010b1aa5c8(auStack_c0);
  FUN_10b1a4be0(auStack_168);
  uStack_e8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  FUN_10b1a1ad0(unaff_x19 + 0x628,&lStack_48,auStack_168);
  FUN_10b0faf98(auStack_168);
  lVar1 = lStack_48;
  func_0x00010529fe04(auStack_c0);
  func_0x00010b1aaa78();
  return lVar1;
}



/* Entry: 10b1a1ad0; end: 10b1a1ae7;  */

void FUN_10b1a1ad0(void)

{
  FUN_10b1a8808();
  return;
}



/* Entry: 10b1a1ae8; end: 10b1a2117;  */

void FUN_10b1a1ae8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *unaff_x19;
  long *plVar17;
  undefined8 *puVar18;
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
  
  func_0x00010b1aa2b8();
  uStack_1c8 = param_2;
  uStack_48 = extraout_x8;
  FUN_10b19af84(&ppuStack_1d8);
  func_0x00010b1aa5c8(aiStack_250);
  ppuVar3 = (undefined **)(unaff_x19 + 0xc5);
  ppuVar4 = ppuVar3;
  func_0x00010b1a75c4(ppuVar3,&uStack_1c8);
  if (ppuVar4 == (undefined **)0x0) goto LAB_10b1a1ec8;
  puVar9 = (undefined *)unaff_x19[0xc6];
  puVar6 = *ppuVar4;
  puVar7 = ppuVar4[1];
  puVar13 = puVar9 + -1;
  if (((ulong)puVar9 & (ulong)puVar13) == 0) {
    puVar7 = (undefined *)((ulong)puVar13 & (ulong)puVar7);
  }
  else if (puVar9 <= puVar7) {
    uVar2 = 0;
    if (puVar9 != (undefined *)0x0) {
      uVar2 = (ulong)puVar7 / (ulong)puVar9;
    }
    puVar7 = puVar7 + -(uVar2 * (long)puVar9);
  }
  puVar14 = *ppuVar3;
  ppuVar3 = *(undefined ***)(puVar14 + (long)puVar7 * 8);
  do {
    ppuVar12 = ppuVar3;
    ppuVar3 = (undefined **)*ppuVar12;
  } while ((undefined **)*ppuVar12 != ppuVar4);
  ppuStack_f0 = (undefined **)(unaff_x19 + 199);
  if (ppuVar12 == ppuStack_f0) {
LAB_10b1a1bb0:
    if (puVar6 == (undefined *)0x0) {
LAB_10b1a1be4:
      *(undefined8 *)(puVar14 + (long)puVar7 * 8) = 0;
      puVar6 = *ppuVar4;
      goto LAB_10b1a1bec;
    }
    puVar15 = *(undefined **)(puVar6 + 8);
    if (((ulong)puVar9 & (ulong)puVar13) == 0) {
      puVar16 = (undefined *)((ulong)puVar15 & (ulong)puVar13);
    }
    else {
      puVar16 = puVar15;
      if (puVar9 <= puVar15) {
        uVar2 = 0;
        if (puVar9 != (undefined *)0x0) {
          uVar2 = (ulong)puVar15 / (ulong)puVar9;
        }
        puVar16 = puVar15 + -(uVar2 * (long)puVar9);
      }
    }
    if (puVar16 != puVar7) goto LAB_10b1a1be4;
LAB_10b1a1bf4:
    if (((ulong)puVar9 & (ulong)puVar13) == 0) {
      puVar15 = (undefined *)((ulong)puVar15 & (ulong)puVar13);
    }
    else if (puVar9 <= puVar15) {
      uVar2 = 0;
      if (puVar9 != (undefined *)0x0) {
        uVar2 = (ulong)puVar15 / (ulong)puVar9;
      }
      puVar15 = puVar15 + -(uVar2 * (long)puVar9);
    }
    if (puVar15 != puVar7) {
      *(undefined ***)(puVar14 + (long)puVar15 * 8) = ppuVar12;
      puVar6 = *ppuVar4;
    }
  }
  else {
    puVar15 = ppuVar12[1];
    if (((ulong)puVar9 & (ulong)puVar13) == 0) {
      puVar15 = (undefined *)((ulong)puVar15 & (ulong)puVar13);
    }
    else if (puVar9 <= puVar15) {
      uVar2 = 0;
      if (puVar9 != (undefined *)0x0) {
        uVar2 = (ulong)puVar15 / (ulong)puVar9;
      }
      puVar15 = puVar15 + -(uVar2 * (long)puVar9);
    }
    if (puVar15 != puVar7) goto LAB_10b1a1bb0;
LAB_10b1a1bec:
    if (puVar6 != (undefined *)0x0) {
      puVar15 = *(undefined **)(puVar6 + 8);
      goto LAB_10b1a1bf4;
    }
  }
  *ppuVar12 = puVar6;
  *ppuVar4 = (undefined *)0x0;
  unaff_x19[200] = unaff_x19[200] + -1;
  uStack_e8 = 1;
  ppuStack_f8 = ppuVar4;
  FUN_10b1a6098(&ppuStack_f8);
  func_0x00010b1aa5c8(aiStack_2c8);
  in_ZR = aiStack_2c8[0] == aiStack_250[0];
  if (((!(bool)in_ZR) || (in_ZR = iStack_2c0 == iStack_248, !(bool)in_ZR)) ||
     (in_ZR = lStack_2b8 == lStack_240, !(bool)in_ZR)) {
    FUN_10b1a1934();
  }
  if (unaff_x19[200] == 0) {
    puVar6 = &UNK_10f731335;
    func_0x000107c278b8(&ppuStack_f8);
    func_0x00010b1aae6c(auStack_2f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f8);
    if (*(char *)((long)unaff_x19 + 0x46b) == '\x01') {
      ppuStack_308 = ppuStack_1d8;
      uStack_300 = cStack_1d0;
      ppuStack_1d8 = (undefined **)0x0;
      cStack_1d0 = '\0';
      puVar6 = (undefined *)0x0;
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
      plVar17 = (long *)unaff_x19[0x88];
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
      plVar10 = (long *)unaff_x19[0xb7];
      lStack_a8 = unaff_x19[0xb8];
      lStack_a0 = unaff_x19[0xb9];
      plVar11 = alStack_180;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = alStack_180;
        unaff_x19[0xb7] = unaff_x19 + 0xb8;
        unaff_x19[0xb8] = 0;
        unaff_x19[0xb9] = 0;
        plVar11 = plVar10;
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
      plStack_188 = plVar11;
      alStack_180[0] = lStack_a8;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = plStack_b0;
        alStack_180[0] = 0;
        plStack_188 = alStack_180;
        plStack_b0 = plVar11;
      }
      alStack_180[1] = 0;
      puVar6 = (undefined *)0x0;
      uStack_b8 = uStack_190;
      func_0x00010b1aab58(*(undefined8 *)(*plVar17 + 0x10));
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
        lVar8 = (long)*(char *)(unaff_x19[0x6f] + 0x17);
        if (lVar8 < 0) {
          lVar8 = *(long *)(unaff_x19[0x6f] + 8);
        }
        if (((lVar8 != 0) && (lVar8 = *(long *)(unaff_x19[0x8e] + 0x148), lVar8 != 0)) &&
           (((*(byte *)((long)unaff_x19 + 0x469) & 1) == 0 &&
            ((func_0x00010b1aac00(), ((ulong)puVar6 & 1) != 0 &&
             (in_ZR = puVar5 == (undefined8 *)0x1, 0 < (long)puVar5)))))) {
          in_ZR = *(char *)(unaff_x19 + 0x14) == '\x01';
          if ((bool)in_ZR) {
            if (unaff_x19[0x97] != 0) {
              puVar18 = unaff_x19 + 0x96;
              func_0x000107c27bdc();
              puVar18 = puVar18 + 5;
LAB_10b1a1f3c:
              puVar18 = (undefined8 *)*puVar18;
              in_ZR = puVar18 == (undefined8 *)0x1;
              if (0 < (long)puVar18) {
                ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
                cStack_50 = '\0';
                uStack_110 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                if (puVar18 < puVar5) {
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
                  puStack_120 = puVar18;
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
                  FUN_10b1afdc8(lVar8,&uStack_1c0);
                  FUN_10b12ec28(&uStack_1c0);
                }
                else {
                  FUN_10b1b0064(lVar8,&uStack_110);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
                FUN_10b1a3f9c(&ppuStack_f8);
              }
            }
          }
          else {
            in_ZR = 0;
            if (*(char *)(unaff_x19 + 0x2f) == '\x01') {
              puVar18 = unaff_x19 + 0x2c;
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



/* Entry: 10b1a2118; end: 10b1a218f;  */

void FUN_10b1a2118(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b1aa568();
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__121recursive_timed_mutex6unlockEv(*unaff_x19);
  }
  *unaff_x19 = *unaff_x20;
  *(undefined1 *)(unaff_x19 + 1) = *(undefined1 *)(unaff_x20 + 1);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 10b1a2190; end: 10b1a21f3;  */

void FUN_10b1a2190(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  func_0x00010b1aabe0();
  param_2 = param_2 + 0x628;
  func_0x00010b1a75c4(param_2,&uStack_28);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x78] = 0;
  }
  else {
    FUN_10b1a4be0(param_1,param_2 + 0x18);
  }
  func_0x00010b1aa468();
  return;
}



/* Entry: 10b1a21f4; end: 10b1a21fb;  */

void FUN_10b1a21f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1aa574(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_10b1a5448();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1a21fc; end: 10b1a22b7;  */

void FUN_10b1a21fc(void)

{
  long unaff_x19;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010b1aafec();
  func_0x000107c278b8(auStack_78,&UNK_10f731335);
  func_0x00010b1aae6c(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x00010b1aaec4();
  *(undefined2 *)(unaff_x19 + 0x588) = 0x101;
  func_0x00010b1aaac8();
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b1aae54(auStack_60);
  func_0x00010b1aa468();
  FUN_10b1a45c4(auStack_60);
  func_0x00010b1aa648();
  return;
}



/* Entry: 10b1a22b8; end: 10b1a2353;  */

long FUN_10b1a22b8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  
  func_0x00010b1aa788();
  if (param_1 == 0) {
    func_0x00010b1aaf9c();
  }
  else if (*(char *)(unaff_x19 + 8) != '\x01') {
    FUN_10b1a8b2c();
    *(char *)(unaff_x19 + 8) = (char)param_1;
    return param_1;
  }
  lVar1 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc(0xb,&UNK_10f731727);
  func_0x00010b1aa788();
  if (lVar1 == 0) {
    func_0x00010b1aaf9c();
  }
  else if (*(char *)(unaff_x19 + 8) != '\x01') {
    __ZNSt3__121recursive_timed_mutex4lockEv();
    *(undefined1 *)(unaff_x19 + 8) = 1;
    return lVar1;
  }
  __ZNSt3__120__throw_system_errorEiPKc(0xb,&UNK_10f731674);
  func_0x00010b1aafec();
  if ((*(byte *)(unaff_x19 + 0xa0) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x160);
  }
  else {
    uStack_98 = 0x7fffffffffffffff;
    uStack_a0 = 0;
    FUN_10b1a08bc(&plStack_88,unaff_x19 + 0x4a0,&uStack_a0);
    lVar1 = 0;
    for (; plStack_88 != plStack_80; plStack_88 = plStack_88 + 0x10) {
      lVar1 = (plStack_88[1] + lVar1) - *plStack_88;
    }
    FUN_10b1a4938(&plStack_88);
  }
  func_0x00010b1aa648();
  return lVar1;
}



/* Entry: 10b1a2354; end: 10b1a23df;  */

long FUN_10b1a2354(void)

{
  long unaff_x19;
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  long *plStack_40;
  
  func_0x00010b1aafec();
  if ((*(byte *)(unaff_x19 + 0xa0) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x160);
  }
  else {
    uStack_58 = 0x7fffffffffffffff;
    uStack_60 = 0;
    FUN_10b1a08bc(&plStack_48,unaff_x19 + 0x4a0,&uStack_60);
    lVar1 = 0;
    for (; plStack_48 != plStack_40; plStack_48 = plStack_48 + 0x10) {
      lVar1 = (plStack_48[1] + lVar1) - *plStack_48;
    }
    FUN_10b1a4938(&plStack_48);
  }
  func_0x00010b1aa648();
  return lVar1;
}



/* Entry: 10b1a23e0; end: 10b1a241b;  */

void FUN_10b1a23e0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b1ab1ac();
  FUN_10b19af84(auStack_30);
  FUN_10b12394c();
  func_0x00010b1aa478();
  return;
}



/* Entry: 10b1a241c; end: 10b1a2b7b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b1a241c(code *****param_1,code *******param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *****pppppcVar11;
  code *******pppppppcVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar14;
  code *******unaff_x22;
  int iVar15;
  code ****ppppcVar16;
  code *****pppppcVar17;
  code ******ppppppcStack_2d0;
  code *******pppppppcStack_2c8;
  code *****pppppcStack_2c0;
  undefined1 auStack_2b8 [40];
  code ******ppppppcStack_290;
  code *******pppppppcStack_288;
  code ******ppppppcStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [32];
  undefined1 uStack_228;
  undefined1 uStack_220;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_c8;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined8 uStack_8;
  
  func_0x00010b1aac94();
  func_0x00010b1aa2f0();
  ppppppcVar6 = (code ******)0x3f8;
  uStack_8 = extraout_x8_00;
  __Znwm();
  *ppppppcVar6 = (code *****)FUN_10b1a9cdc;
  ppppppcVar6[1] = (code *****)FUN_10b1aa224;
  ppppppcVar6[0x7d] = (code *****)param_2;
  ppppppcVar6[0x7c] = param_1;
  FUN_10b14be30(ppppppcVar6 + 2);
  pppppppcVar9 = (code *******)(ppppppcVar6 + 0x73);
  FUN_10b14bde4(extraout_x8,ppppppcVar6 + 2);
  FUN_10b19af84(ppppppcVar6 + 0x61,param_1);
  pppppppcVar10 = (code *******)(param_1 + 0x1e);
  FUN_10b12394c(ppppppcVar6 + 0x12);
  FUN_10b122f98(ppppppcVar6 + 0x61);
  uVar5 = *(char *)(ppppppcVar6 + 0x23) == '\x01';
  if (((bool)uVar5) && (ppppppcVar6[0x1f] != (code *****)0x0)) {
    ppppppcVar7 = ppppppcVar6 + 0x12;
    FUN_10b1c4c88();
    uVar5 = ppppppcVar6[0x20] == ppppppcVar6[0x1f];
    if (((bool)uVar5) ||
       ((ppppppcVar7 != (code ******)0x0 &&
        (uVar5 = *(char *)(ppppppcVar7 + 6) == '\x01', (bool)uVar5)))) {
      func_0x00010b1aa4ec();
      func_0x00010b1aa6c8();
      param_2 = pppppppcVar10;
      goto LAB_10b1a2894;
    }
  }
  FUN_10b1a6110(&ppppppcStack_280,param_1[1],param_1[2]);
  pcVar4 = pcStack_278;
  ppppppcVar7 = ppppppcStack_280;
  pppppcVar8 = (code *****)0x58;
  __Znwm();
  pppppcVar11 = pppppcVar8 + 1;
  *pppppcVar11 = (code ****)0x0;
  pppppcVar8[2] = (code ****)0x0;
  *pppppcVar8 = (code ****)&PTR_FUN_110cc2f28;
  pppppcVar17 = pppppcVar8 + 3;
  *pppppcVar17 = (code ****)&PTR_DAT_110cc2f78;
  pppppcVar8[5] = (code ****)pcVar4;
  pppppcVar8[4] = (code ****)ppppppcVar7;
  if ((code ******)pcVar4 != (code ******)0x0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  FUN_10b14b870(pppppcVar8 + 6);
  unaff_x22 = (code *******)(ppppppcVar6 + 0x6a);
  pppppppcVar10 = (code *******)(ppppppcVar6 + 0x7a);
  ppppppcVar6[0x76] = pppppcVar17;
  ppppppcVar6[0x77] = pppppcVar8;
  func_0x00010b129c40(&ppppppcStack_280);
  ppppppcVar6[0x78] = pppppcVar17;
  ppppppcVar6[0x79] = pppppcVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppppcVar11,0x10);
    if (bVar3) {
      *pppppcVar11 = (code ****)((long)*pppppcVar11 + 1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_10b19d3a4(param_1,param_2,0,0x7fffffffffffffff,ppppppcVar6 + 0x78);
  FUN_10b0fb81c(ppppppcVar6 + 0x78);
  FUN_10b14b830(unaff_x22,pppppcVar8 + 6);
  pppppppcVar12 = unaff_x22;
  func_0x000105c417a8();
  if (((ulong)pppppppcVar12 & 1) == 0) {
    *(undefined1 *)(ppppppcVar6 + 0x7e) = 0;
    param_2 = &ppppppcStack_2d0;
    pppppppcVar9 = unaff_x22;
    ppppppcStack_2d0 = ppppppcVar6;
    pppppppcStack_2c8 = unaff_x22;
    func_0x000105c41834(&ppppppcStack_280,unaff_x22);
    ppppppcVar6 = (code ******)pcStack_278;
    pppppppcVar10 = pppppppcVar9;
    if ((code ******)pcStack_278 == (code ******)0x0) goto LAB_10b1a28e0;
    do {
      func_0x00010b1aa374();
      lVar14 = extraout_x9;
    } while (extraout_w11 != 0);
  }
  else {
    func_0x000105c40888(ppppppcVar6 + 0x61,unaff_x22);
    pppppppcVar12 = unaff_x22;
    func_0x0001052a55c0(unaff_x22);
    bVar1 = *(byte *)(ppppppcVar6 + 0x69);
    if (bVar1 == 1) {
      uVar5 = *(int *)(ppppppcVar6 + 100) == 9;
      if ((bool)uVar5) {
        FUN_10b1a241c(pppppppcVar9,ppppppcVar6[0x7c],ppppppcVar6[0x7d]);
        pppppppcVar12 = pppppppcVar9;
        func_0x000105c417a8();
        if (((ulong)pppppppcVar12 & 1) == 0) {
          *(undefined1 *)(ppppppcVar6 + 0x7e) = 1;
          param_2 = &ppppppcStack_2d0;
          ppppppcStack_2d0 = ppppppcVar6;
          pppppppcStack_2c8 = pppppppcVar9;
          func_0x000105c41834(&ppppppcStack_280,pppppppcVar9);
          ppppppcVar6 = (code ******)pcStack_278;
          pppppppcVar10 = pppppppcVar9;
          if ((code ******)pcStack_278 == (code ******)0x0) goto LAB_10b1a28e0;
          do {
            func_0x00010b1aa374();
            lVar14 = extraout_x9_01;
          } while (extraout_w11_01 != 0);
          goto LAB_10b1a265c;
        }
        func_0x000105c40888(unaff_x22,pppppppcVar9);
        pppppppcVar12 = (code *******)(ppppppcVar6 + 7);
        param_2 = unaff_x22;
        FUN_10b16a20c(pppppppcVar12);
        func_0x00010b1aaaf8();
        func_0x00010b1aab50();
      }
      else {
        uVar5 = false;
        if (*(char *)(ppppppcVar6[0x7c] + 0xde) == '\x01') {
          ppppcVar16 = ppppppcVar6[0x7c][0x18];
          FUN_10b12983c(&ppppppcStack_280,*(undefined4 *)(ppppppcVar6 + 0x15));
          func_0x00010b1ab144();
          FUN_10b123d58(auStack_258,"code",4);
          param_2 = &ppppppcStack_280;
          func_0x00010b120648(&ppppppcStack_2d0,param_2,2);
          func_0x00010b1aa344(ppppcVar16);
          func_0x00010b1aa99c();
          lVar14 = 0x38;
          do {
            pppppppcVar12 = (code *******)((long)&ppppppcStack_280 + lVar14);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppcVar12);
            lVar14 = lVar14 + -0x28;
            uVar5 = lVar14 == -0x18;
          } while (!(bool)uVar5);
        }
        func_0x00010b1aa49c();
      }
      iVar15 = 3;
    }
    else {
      pppppcVar11 = ppppppcVar6[0x7c];
      uVar5 = *(char *)(pppppcVar11 + 0xde) == '\x01';
      pppppcVar8 = pppppcVar11;
      if ((bool)uVar5) {
        func_0x00010b1aaf88();
        pppppcVar8 = ppppppcVar6[0x7c];
        if ((int)pppppcVar11 != 0) {
          ppppcVar16 = pppppcVar8[0x18];
          FUN_10b12983c(&ppppppcStack_280,*(undefined4 *)(ppppppcVar6 + 0x15));
          func_0x00010b1aa5a4(&ppppppcStack_2d0,&ppppppcStack_280);
          param_2 = (code *******)0xbe;
          func_0x00010b1aa470(ppppcVar16,0xbe,&ppppppcStack_2d0);
          func_0x00010b1aa99c();
          func_0x00010b1aa454(&ppppppcStack_280);
          pppppcVar8 = ppppppcVar6[0x7c];
        }
      }
      FUN_10b19af84(&ppppppcStack_280,pppppcVar8);
      pppppppcVar12 = (code *******)ppppppcVar6[0x7c];
      FUN_10b19af40(pppppppcVar12);
      func_0x00010b1aaa60();
      iVar15 = 0;
    }
    func_0x00010b1aa5ac();
    if ((bVar1 & 1) != 0) {
LAB_10b1a2884:
      func_0x00010b1aa870();
      func_0x00010b1aa6c8();
      uVar5 = iVar15 == 3;
      if (!(bool)uVar5) goto LAB_10b1a28d8;
      goto LAB_10b1a2894;
    }
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    pcStack_278 = (code *)0x0;
    uStack_270 = 0;
    ppppppcStack_280 = (code ******)0x0;
    uStack_268 = 0;
    func_0x00010b1aa40c(&ppppppcStack_280);
    FUN_10b1151e4(ppppppcVar6 + 0x12,&ppppppcStack_280);
    pppppcVar8 = ppppppcVar6[0x7c];
    func_0x00010b121af0(&ppppppcStack_280);
    ppppppcVar6[0x73] = pppppcVar8;
    pppppppcVar12 = (code *******)(ppppppcVar6 + 0x74);
    FUN_10b1a6110(pppppppcVar12,pppppcVar8[1],pppppcVar8[2]);
    ppppcVar16 = ppppppcVar6[0x7c][0x88];
    FUN_10b14b870(unaff_x22);
    FUN_10b14b830(pppppppcVar10,unaff_x22);
    pppppppcStack_2c8 = (code *******)ppppppcVar6[0x74];
    ppppppcStack_2d0 = *pppppppcVar9;
    pppppcStack_2c0 = ppppppcVar6[0x75];
    *pppppppcVar12 = (code ******)0x0;
    ppppppcVar6[0x75] = (code *****)0x0;
    FUN_10b14bbfc(auStack_2b8,unaff_x22);
    ppppppcStack_280 = (code ******)FUN_10b1a4c50;
    FUN_10b1a4ec0(&pcStack_278,&ppppppcStack_2d0);
    param_2 = &ppppppcStack_280;
    (*(code *)(*ppppcVar16)[2])(ppppcVar16);
    func_0x00010b1aaa50();
    FUN_10b1a4c28(&ppppppcStack_2d0);
    FUN_10b14bab0(unaff_x22);
    pppppppcVar9 = pppppppcVar10;
    func_0x000105c417a8();
    if (((ulong)pppppppcVar9 & 1) != 0) {
      func_0x00010b1aafc8();
      func_0x00010b1aa49c();
      func_0x00010b1aa5ac();
      func_0x00010b1aa718();
      func_0x00010b129c40(pppppppcVar12);
      iVar15 = 3;
      goto LAB_10b1a2884;
    }
    *(undefined1 *)(ppppppcVar6 + 0x7e) = 2;
    param_2 = &ppppppcStack_2d0;
    ppppppcStack_2d0 = ppppppcVar6;
    pppppppcStack_2c8 = pppppppcVar10;
    func_0x000105c41834(&ppppppcStack_280,pppppppcVar10);
    ppppppcVar6 = (code ******)pcStack_278;
    pppppppcVar9 = pppppppcVar10;
    if ((code ******)pcStack_278 == (code ******)0x0) goto LAB_10b1a28e0;
    do {
      func_0x00010b1aa374();
      lVar14 = extraout_x9_00;
    } while (extraout_w11_00 != 0);
  }
LAB_10b1a265c:
  pppppppcVar9 = pppppppcVar10;
  if (lVar14 == 0) {
    func_0x00010b1aa310();
    func_0x00010b1aa774();
    pppppppcVar9 = pppppppcVar10;
  }
LAB_10b1a28e0:
  while (func_0x00010b1aa28c(uStack_8), !(bool)uVar5) {
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      do {
        __Unwind_Resume(pppppppcVar9);
      } while ((int)param_2 == 0);
      func_0x0001052a55c0(unaff_x22);
    }
    else {
      func_0x00010b1aa99c();
      puVar13 = auStack_248;
      lVar14 = -0x50;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar13);
        puVar13 = puVar13 + -0x28;
        lVar14 = lVar14 + 0x28;
        uVar5 = lVar14 == 0;
      } while (!(bool)uVar5);
      func_0x00010b1aa5ac();
    }
    func_0x00010b1aa870();
    func_0x00010b1aa6c8();
    ___cxa_begin_catch(pppppppcVar9);
    func_0x00010b1aaa48();
    ___cxa_end_catch();
LAB_10b1a2894:
    func_0x00010b1aacbc();
    func_0x00010b1aa66c();
    if ((bool)uVar5) {
      pppppppcVar12 = (code *******)(ppppppcVar6 + 2);
      pppppppcVar9 = (code *******)&pppppppcStack_288;
      pppppppcStack_288 = param_2;
      FUN_10b14bca0(pppppppcVar12);
      param_2 = pppppppcVar9;
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&ppppppcStack_290);
      param_2 = (code *******)&pppppppcStack_288;
      pppppppcStack_288 = &ppppppcStack_290;
      FUN_10b14bb60(ppppppcVar6 + 2);
      pppppppcVar12 = &ppppppcStack_290;
      __ZNSt13exception_ptrD1Ev(pppppppcVar12);
    }
LAB_10b1a28d8:
    func_0x00010b1aa5c0();
    func_0x00010b1aa42c();
    pppppppcVar9 = pppppppcVar12;
  }
  return;
}



/* Entry: 10b1a2b7c; end: 10b1a2ca3;  */

void FUN_10b1a2b7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_e0 [16];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [120];
  undefined1 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x00010b1aa940();
  uStack_38 = param_2;
  FUN_10b19af84(auStack_48);
  if ((*(byte *)(unaff_x20 + 0x678) & 1) == 0) {
    FUN_10b1a241c(auStack_e0);
    FUN_10b16be88(auStack_c8,auStack_e0);
    FUN_10b1a2ca4(unaff_x20 + 0x668,auStack_c8);
    FUN_10b166558(auStack_c8);
    func_0x0001052a55c0(auStack_e0);
  }
  else {
    lVar1 = unaff_x20 + 0x628;
    func_0x00010b1a75c4(lVar1,&uStack_38);
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x98) & 1) == 0)) &&
       (*(char *)(lVar1 + 0x90) == '\x01')) {
      auStack_c8[0] = 0;
      uStack_50 = 0;
      auStack_e0[0] = 0;
      uStack_d0 = 0;
      FUN_10b19e5d8();
      FUN_10b0faf98(auStack_c8);
    }
  }
  FUN_10b167b90(extraout_x8,unaff_x20 + 0x668);
  FUN_10b122f98(auStack_48);
  return;
}



/* Entry: 10b1a2ca4; end: 10b1a2cd7;  */

void FUN_10b1a2ca4(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1aa574();
  FUN_10b1a0b28();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}



/* Entry: 10b1a2cd8; end: 10b1a31c7;  */

void FUN_10b1a2cd8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  ulong *unaff_x21;
  undefined8 uVar5;
  ulong uVar6;
  ulong in_register_00005008;
  ulong uStack_458;
  ulong uStack_450;
  undefined8 uStack_448;
  char cStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  ulong auStack_420 [3];
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  char cStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined **ppuStack_3c0;
  ulong *puStack_3b8;
  ulong uStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  ulong uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  char cStack_288;
  undefined1 auStack_98 [48];
  char cStack_68;
  undefined8 uStack_58;
  
  func_0x00010b1aa940();
  func_0x00010b1aa2f0();
  uStack_58 = extraout_x8_00;
  FUN_10b19af84(&uStack_3d0);
  if (*(char *)(unaff_x20 + 0x678) == '\x01') {
    func_0x00010b1aa928();
    func_0x000107c278b8(&uStack_3e8);
    func_0x00010b141c10(&uStack_408,&UNK_10f731353);
    uStack_300 = uStack_3d8;
    uStack_308 = uStack_3e0;
    uStack_310 = uStack_3e8;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3e8 = 0;
    uStack_2f8 = 4;
    uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
    uVar2 = cStack_3f0 == '\x01';
    if ((bool)uVar2) {
      uStack_2e8 = uStack_400;
      uStack_2f0 = uStack_408;
      uStack_2e0 = uStack_3f8;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_408 = 0;
    }
    uStack_2d8 = uVar2;
    func_0x0001052b8c70(extraout_x8,&uStack_310);
    func_0x0001052a03ac(&uStack_310);
    func_0x000107c279a4(&uStack_408);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3e8);
  }
  else {
    FUN_10b19d008();
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x548);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x00010b1ab178();
    auStack_420[0] = param_1;
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b1aa2e0();
      } while (extraout_w10 != 0);
    }
    lVar3 = unaff_x20;
    FUN_10b19ce28(&uStack_390);
    uVar6 = uStack_388 & 0xffffffff;
    func_0x00010b1aaea0();
    FUN_10b1f6c94(&uStack_310,uVar5,unaff_x20 + 0xf0,auStack_420,param_4,uVar6 | 0x100000000,
                  lVar3 + 0x20);
    func_0x00010529fe04(&uStack_390);
    func_0x00010b1aa9d4();
    FUN_10b1151e4(unaff_x20 + 0xf0,&uStack_310);
    FUN_10b19cf4c();
    uVar2 = cStack_68 == '\x01';
    if ((bool)uVar2) {
      puVar4 = &uStack_390;
      FUN_10b16a0a0(puVar4,auStack_98);
      *(code **)(unaff_x20 + 0x680) = FUN_10b1a8e2c;
      ppuStack_3c0 = &PTR_FUN_110cc2fb8;
      func_0x00010b1aa704();
      FUN_10b16a0a0();
      puStack_3b8 = puVar4;
      func_0x000107c2816c(unaff_x20 + 0x688,&ppuStack_3c0);
      (*(code *)*ppuStack_3c0)(&ppuStack_3c0);
      func_0x000107c281f0(&uStack_390);
      *(undefined1 *)(unaff_x20 + 0x588) = 1;
    }
    else {
      func_0x00010b1aa928();
      func_0x000107c278b8(&uStack_438);
      func_0x00010b1491a4(&uStack_458,&UNK_10f7313b3);
      uStack_380 = uStack_428;
      in_register_00005008 = uStack_430;
      param_1 = uStack_438;
      uVar1 = uStack_450;
      uVar6 = uStack_458;
      uStack_388 = uStack_430;
      uStack_390 = uStack_438;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_438 = 0;
      uStack_378 = 4;
      uStack_370 = uStack_370 & 0xffffffffffffff00;
      uVar2 = cStack_440 == '\x01';
      if ((bool)uVar2) {
        uStack_368 = uStack_450;
        uStack_370 = uStack_458;
        uStack_360 = uStack_448;
        uStack_450 = 0;
        uStack_448 = 0;
        uStack_458 = 0;
        param_1 = uVar6;
        in_register_00005008 = uVar1;
      }
      uStack_358 = uVar2;
      func_0x0001052b8c70(extraout_x8,&uStack_390);
      func_0x0001052a03ac(&uStack_390);
      func_0x000107c279a4(&uStack_458);
      func_0x00010b1aa9dc();
    }
    FUN_10b1a4f18(&uStack_310);
    __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x548);
    if (cStack_68 != '\0') {
      func_0x000107c278b8(&uStack_310,&UNK_10f731335);
      func_0x00010b1aae6c(&ppuStack_3c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_310);
      uVar6 = *unaff_x21;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        func_0x00010b1aa5b4();
        (*extraout_x8_02)();
      }
      func_0x00010b19cf24(unaff_x20 + 0x4a0);
      func_0x00010b19aee8();
      *(long *)(unaff_x20 + 0x5e8) = *(long *)(unaff_x20 + 0x5e8) + 1;
      uStack_390 = 0;
      uStack_388 = uVar6;
      func_0x00010b1ab178();
      uStack_310 = param_1;
      uStack_308 = in_register_00005008;
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_00 != 0);
      }
      uStack_300 = CONCAT71(uStack_300._1_7_,1);
      uStack_2f8 = (ulong)uStack_2f8._4_4_ << 0x20;
      FUN_10b202630(&uStack_2f0,*(undefined8 *)(unaff_x20 + 0x378));
      func_0x00010b19ae08();
      FUN_10b1a3808(&uStack_310);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
      FUN_10b202630(&uStack_390,*(undefined8 *)(unaff_x20 + 0x378));
      FUN_10b1f69e0(&uStack_310,uVar5,&uStack_390,0,0);
      func_0x00010b121e00(&uStack_390);
      uVar2 = cStack_288 == '\x01';
      if ((bool)uVar2) {
        *(undefined8 *)(unaff_x20 + 0x158) = uStack_2a8;
        *(undefined8 *)(unaff_x20 + 0x150) = uStack_2b0;
        *(ulong *)(unaff_x20 + 0x168) = CONCAT71(uStack_297,uStack_298);
        *(undefined8 *)(unaff_x20 + 0x160) = uStack_2a0;
        *(ulong *)(unaff_x20 + 0x171) = CONCAT17(1,uStack_28f);
        *(ulong *)(unaff_x20 + 0x169) = CONCAT17(uStack_290,uStack_297);
      }
      func_0x00010b121af0(&uStack_310);
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x00010b1aae54(&ppuStack_3c0);
      func_0x00010b1aa468();
      *extraout_x8 = 0;
      extraout_x8[0x40] = 0;
      FUN_10b1a45c4(&ppuStack_3c0);
    }
  }
  func_0x00010b1aaa40();
  func_0x00010b1aa28c(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b1aa468();
    FUN_10b1a45c4(&ppuStack_3c0);
    func_0x00010b1aaa40();
    do {
      func_0x00010b1aa3d8();
    } while( true );
  }
  return;
}



/* Entry: 10b1a31c8; end: 10b1a31ff;  */

void FUN_10b1a31c8(long param_1)

{
  if (*(long *)(param_1 + 0x658) != 0) {
    FUN_10b2046a4();
  }
  return;
}



/* Entry: 10b1a3200; end: 10b1a353b;  */

void FUN_10b1a3200(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  undefined8 *puVar9;
  long extraout_x8_01;
  long lVar10;
  code *extraout_x8_02;
  ulong extraout_x9;
  undefined8 *puVar11;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 ***pppuVar12;
  long unaff_x21;
  undefined8 ***unaff_x22;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 ***pppuStack_168;
  undefined8 *puStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined8 ***pppuStack_148;
  undefined8 **ppuStack_140;
  undefined1 uStack_138;
  undefined1 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 *puStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  undefined8 ***pppuStack_100;
  byte bStack_a0;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x00010b1aa794();
  FUN_10b19af84(auStack_78);
  if ((param_3 & 1) == 0) {
    lVar10 = 0x608;
    if (*(long *)(unaff_x21 + 0x608) < 1) {
      lVar10 = 0xa8;
    }
    unaff_x22 = *(undefined8 ****)(unaff_x21 + lVar10);
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  puVar13 = (undefined8 *)0x0;
  pppuVar12 = (undefined8 ***)0x0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  do {
    if (unaff_x22 <= pppuVar12) break;
    FUN_10b1a0234(&pppuStack_120);
    puVar16 = puStack_90;
    bVar3 = 0;
    if (pppuStack_120 == pppuVar12) {
      bVar3 = bStack_a0;
    }
    if ((bVar3 & 1) != 0) {
      if (puVar13 < puStack_80) {
        puVar13[1] = puStack_118;
        *puVar13 = pppuStack_120;
        puVar13[3] = lStack_108;
        puVar13[2] = puStack_110;
        if (lStack_108 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10 != 0);
        }
        puVar13 = puVar13 + 4;
      }
      else {
        lVar10 = (long)puVar13 - (long)puStack_90;
        lVar14 = lVar10 >> 5;
        if (lVar14 + 1U >> 0x3b != 0) {
          FUN_10b1a4f58();
LAB_10b1a34f0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1a34f4);
          (*pcVar6)();
        }
        func_0x00010b1ab0e4((long)puStack_80 - (long)puStack_90);
        uVar4 = extraout_x9;
        if (0x7fffffffffffffdf < extraout_x8_00) {
          uVar4 = 0x7ffffffffffffff;
        }
        if (uVar4 >> 0x3b != 0) {
          func_0x000104bd35f4();
          goto LAB_10b1a34f0;
        }
        lVar7 = uVar4 << 5;
        __Znwm();
        puVar1 = (undefined8 *)(lVar7 + lVar10);
        puVar1[1] = puStack_118;
        *puVar1 = pppuStack_120;
        puVar1[3] = lStack_108;
        puVar1[2] = puStack_110;
        if (lStack_108 != 0) {
          do {
            func_0x00010b1aa2e0();
          } while (extraout_w10_00 != 0);
        }
        puVar15 = puVar1 + lVar14 * -4;
        puVar9 = puVar15;
        puVar11 = puVar16;
        while (puVar11 != puVar13) {
          func_0x00010b1aad6c(puVar9);
          puVar9 = (undefined8 *)(extraout_x8_01 + 0x20);
          puVar11 = (undefined8 *)(extraout_x9_00 + 0x20);
        }
        for (; puVar16 != puVar13; puVar16 = puVar16 + 4) {
          func_0x000107c27d78(puVar16 + 2);
        }
        puVar13 = puVar1 + 4;
        puStack_80 = (undefined8 *)(lVar7 + uVar4 * 0x20);
        bVar2 = puStack_90 != (undefined8 *)0x0;
        puStack_90 = puVar15;
        if (bVar2) {
          __ZdlPv();
        }
      }
      pppuVar12 = (undefined8 ***)(((long)puStack_118 + (long)pppuVar12) - (long)pppuStack_120);
      puStack_88 = puVar13;
    }
    FUN_10b1a4640(&pppuStack_120);
  } while ((bVar3 & 1) != 0);
  puVar16 = puStack_90;
  if (puStack_90 == puVar13 || pppuVar12 == (undefined8 ***)0x0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    FUN_10b19cef0(auStack_78);
    if ((long)puVar13 - (long)puVar16 == 0x20) {
      lVar10 = puVar16[3];
      uVar17 = puVar16[2];
      extraout_x8[1] = puVar16[3];
      *extraout_x8 = uVar17;
      if (lVar10 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_01 != 0);
      }
    }
    else {
      ppuStack_140 = &puStack_90;
      uStack_138 = 0;
      uStack_128 = 0;
      func_0x000107c31718(extraout_x8,pppuVar12);
      pppuStack_168 = &ppuStack_140;
      puStack_160 = puStack_90;
      uStack_158 = 0;
      uStack_150 = 0;
      pppuStack_148 = pppuStack_168;
      FUN_10b1a4f64(&pppuStack_168);
      puVar8 = (undefined1 *)*extraout_x8;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        func_0x00010b1aaa24();
        (*extraout_x8_02)();
      }
      lStack_108 = CONCAT71(uStack_14f,uStack_150);
      pppuStack_100 = pppuStack_148;
      pppuStack_120 = pppuStack_168;
      puStack_118 = puStack_160;
      puVar5 = (undefined1 *)CONCAT71(uStack_157,uStack_158);
      for (; puStack_110 = puVar5, pppuVar12 != (undefined8 ***)0x0;
          pppuVar12 = (undefined8 ***)((long)pppuVar12 + -1)) {
        puStack_110 = puVar5 + 1;
        *puVar8 = *puVar5;
        if (puStack_110 == (undefined1 *)((long)pppuStack_100[1] + (long)pppuStack_100[2])) {
          puStack_118 = puStack_118 + 4;
          FUN_10b1a4f64(&pppuStack_120);
        }
        puVar8 = puVar8 + 1;
        puVar5 = puStack_110;
      }
    }
  }
  FUN_10b1a5040(&puStack_90);
  FUN_10b122f98(auStack_78);
  return;
}



/* Entry: 10b1a353c; end: 10b1a3807;  */

void FUN_10b1a353c(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  int extraout_w10;
  long unaff_x19;
  long *plVar7;
  long lVar8;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  long alStack_f0 [2];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [4];
  undefined1 uStack_bc;
  undefined8 uStack_48;
  
  func_0x00010b1aa2b8();
  uStack_48 = extraout_x8;
  func_0x00010b11fabc(alStack_f0);
  if (alStack_f0[0] == 0) {
LAB_10b1a3744:
    func_0x00010b1aae64();
    func_0x00010b1aa28c(uStack_48);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001052b81d0(&lStack_e0);
      func_0x00010b1a5a0c(&uStack_158);
      func_0x00010529fe04(auStack_c0);
      func_0x000107c278e0(auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      puVar6 = &uStack_100;
      func_0x0001052ac684();
      func_0x00010b1aae64();
      func_0x00010b1aa3d8();
      func_0x00010b121e00(puVar6 + 4);
      if (*(char *)(puVar6 + 2) == '\x01') {
        func_0x0001000ff1ac();
      }
      return;
    }
    return;
  }
  uStack_100 = *(undefined8 *)(alStack_f0[0] + 0x3b8);
  lStack_f8 = *(long *)(alStack_f0[0] + 0x3c0);
  if (lStack_f8 != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1aad3c();
  (*extraout_x9)(auStack_118);
  *(undefined1 *)(unaff_x19 + 0xb8) = *(undefined1 *)(alStack_f0[0] + 0x718);
  lStack_e0 = *(long *)(unaff_x19 + 0xa0) + *(long *)(unaff_x19 + 0x80);
  if (*(long *)(unaff_x19 + 0x88) == 0x7fffffffffffffff) {
    lStack_d8 = 0;
    func_0x000107c2793c(&UNK_10f7311a8);
    func_0x000107c3173c(&uStack_158);
  }
  else {
    lStack_d0 = *(long *)(unaff_x19 + 0x88) + -1;
    lStack_d8 = 0;
    uStack_c8 = 0;
    func_0x000107c2793c(&UNK_10f7311b2);
    func_0x000107c3173c(&uStack_158);
  }
  func_0x00010b195df0(auStack_c0,"Range",&uStack_158);
  func_0x000104bd4884(auStack_140,auStack_c0,1);
  func_0x000107c278c0(auStack_c0);
  func_0x00010b1aa9dc();
  lVar5 = alStack_f0[0];
  FUN_10b19ce28(auStack_c0);
  if ((*(char *)(alStack_f0[0] + 0x46d) == '\x01') && ((*(byte *)(unaff_x19 + 0xb0) & 1) == 0)) {
    uStack_bc = 0;
  }
  func_0x00010b1aaebc();
  plVar7 = *(long **)(lVar5 + 0x10);
  uVar4 = (ulong)*(uint *)(alStack_f0[0] + 0x370);
  FUN_10b20549c(uVar4);
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 != 0) {
    lVar8 = *(long *)(unaff_x19 + 8);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (lVar5 != 0) {
      uStack_158 = 0;
      uStack_150 = 0;
      cVar2 = *(char *)(param_2 + 0x10);
      in_ZR = cVar2 == '\x01';
      bVar1 = !(bool)in_ZR;
      lStack_e0 = lVar8;
      lStack_d8 = lVar5;
      if (bVar1) {
        uStack_170 = uStack_170 & 0xffffffffffffff00;
      }
      else {
        FUN_10b1a5088(&uStack_180,param_2);
        uStack_168 = uStack_178;
        uStack_170 = uStack_180;
        uStack_180 = 0;
        uStack_178 = 0;
      }
      uStack_160 = !bVar1;
      (**(code **)(*plVar7 + 0x18))
                (plVar7,&uStack_100,unaff_x19 + 0x68,auStack_c0,auStack_140,1,uVar4,&lStack_e0,
                 &uStack_170);
      func_0x0001052b818c(&uStack_170);
      if (cVar2 != '\0') {
        func_0x00010b1aa994();
      }
      func_0x0001052b81d0(&lStack_e0);
      func_0x00010b1a5a0c(&uStack_158);
      func_0x00010529fe04(auStack_c0);
      func_0x000107c278e0(auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      func_0x0001052ac684();
      goto LAB_10b1a3744;
    }
  }
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1a3774);
  (*pcVar3)();
}



/* Entry: 10b1a3808; end: 10b1a3897;  */

void FUN_10b1a3808(long param_1)

{
  func_0x00010b121e00(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001000ff1ac();
  }
  return;
}



/* Entry: 10b1a3898; end: 10b1a390f;  */

void FUN_10b1a3898(void)

{
  ulong uVar1;
  undefined1 extraout_w8;
  undefined1 uVar2;
  undefined8 *extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010b1aa940();
  lVar3 = *(long *)(unaff_x20 + 8);
  do {
    if (lVar3 == unaff_x20 + 0x10) {
      func_0x00010b1aad0c();
      uVar2 = extraout_w8;
LAB_10b1a3904:
      *(undefined1 *)(extraout_x8 + 2) = uVar2;
      return;
    }
    uVar1 = lVar3 + 0x88;
    func_0x000107c278d0(uVar1,unaff_x21 + 0x58);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
      *extraout_x8 = uVar4;
      FUN_10b1a3a48((long *)(unaff_x20 + 8),lVar3);
      uVar2 = 1;
      goto LAB_10b1a3904;
    }
    func_0x000107c27be0();
  } while( true );
}



/* Entry: 10b1a3910; end: 10b1a3953;  */

void FUN_10b1a3910(void)

{
  long lVar1;
  
  func_0x00010b1ab02c();
  lVar1 = 0xa0;
  __Znwm(0xa0);
  func_0x00010b1ab018();
  FUN_10b1a39d0(lVar1 + 0x30);
  func_0x00010b1ab124();
  return;
}



/* Entry: 10b1a3954; end: 10b1a39a7;  */

long * FUN_10b1a3954(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  plVar2 = (long *)*plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while( true ) {
        plVar3 = plVar2;
        bVar1 = param_4 < plVar3[5];
        if (param_3 != plVar3[4]) {
          bVar1 = param_3 < plVar3[4];
        }
        if (!bVar1) break;
        plVar4 = plVar3;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10b1a39a4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10b1a39a4:
  *param_2 = (long)plVar3;
  return plVar4;
}



/* Entry: 10b1a39a8; end: 10b1a39cf;  */

void FUN_10b1a39a8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1aac58();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b1aadd0();
  func_0x00010b1aacfc();
  return;
}



/* Entry: 10b1a39d0; end: 10b1a3a0f;  */

void FUN_10b1a39d0(long param_1)

{
  long unaff_x20;
  
  func_0x00010b1aa568();
  func_0x000107c281f4();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
  FUN_10b17d5c4(param_1 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 10b1a3a10; end: 10b1a3a47;  */

void FUN_10b1a3a10(undefined8 *param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1aa63c();
  *param_1 = 0;
  if (unaff_x20 != 0) {
    func_0x00010b1ab000();
    if ((bool)in_ZR) {
      FUN_10b1a3808(unaff_x20 + 0x30);
    }
    func_0x00010b1aa5e0();
  }
  return;
}



/* Entry: 10b1a3a48; end: 10b1a3a8b;  */

long FUN_10b1a3a48(long param_1)

{
  long unaff_x19;
  long *unaff_x21;
  
  func_0x00010b1aa9b4();
  if (*unaff_x21 == unaff_x19) {
    *unaff_x21 = param_1;
  }
  func_0x00010b1aa7d8();
  FUN_10b1a3808(unaff_x19 + 0x30);
  func_0x00010b1aa42c();
  return param_1;
}



/* Entry: 10b1a3a8c; end: 10b1a3ad3;  */

undefined8 FUN_10b1a3a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b1aa480(param_1,param_2,param_2,param_3);
  FUN_10b1a3b60();
  func_0x00010b1ab04c();
  FUN_10b1a3ba4();
  func_0x00010b1ab104();
  FUN_10b1a3bf8();
  func_0x00010b1aad60();
  func_0x00010b1a3c20();
  return 1;
}



/* Entry: 10b1a3ad4; end: 10b1a3b5f;  */

void FUN_10b1a3ad4(long param_1)

{
  ulong uVar1;
  undefined1 extraout_w8;
  undefined1 uVar2;
  undefined8 *extraout_x8;
  ulong uVar3;
  long unaff_x21;
  undefined8 uVar4;
  
  func_0x00010b1aa794();
  uVar3 = *(ulong *)(param_1 + 8);
  do {
    if (uVar3 == param_1 + 0x10U) {
      func_0x00010b1aad0c();
      uVar2 = extraout_w8;
LAB_10b1a3b54:
      *(undefined1 *)(extraout_x8 + 2) = uVar2;
      return;
    }
    uVar1 = uVar3 + 0x30;
    func_0x000107c278d0();
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(uVar3 + 0x20);
      extraout_x8[1] = *(undefined8 *)(uVar3 + 0x28);
      *extraout_x8 = uVar4;
      func_0x00010b1aa868();
      if (*(ulong *)(unaff_x21 + 8) == uVar3) {
        *(ulong *)(unaff_x21 + 8) = uVar1;
      }
      func_0x00010b1aa7ec();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar3 + 0x30);
      func_0x00010b1aa5e0();
      uVar2 = 1;
      goto LAB_10b1a3b54;
    }
    func_0x00010b1aa868();
    uVar3 = uVar1;
  } while( true );
}



/* Entry: 10b1a3b60; end: 10b1a3ba3;  */

void FUN_10b1a3b60(void)

{
  long lVar1;
  
  func_0x00010b1ab02c();
  lVar1 = 0x48;
  __Znwm(0x48);
  func_0x00010b1ab018();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1 + 0x30);
  func_0x00010b1ab124();
  return;
}



/* Entry: 10b1a3ba4; end: 10b1a3bf7;  */

long * FUN_10b1a3ba4(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  plVar2 = (long *)*plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while( true ) {
        plVar3 = plVar2;
        bVar1 = param_4 < plVar3[5];
        if (param_3 != plVar3[4]) {
          bVar1 = param_3 < plVar3[4];
        }
        if (!bVar1) break;
        plVar4 = plVar3;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10b1a3bf4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10b1a3bf4:
  *param_2 = (long)plVar3;
  return plVar4;
}



/* Entry: 10b1a3bf8; end: 10b1a3c8b;  */

void FUN_10b1a3bf8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1aac58();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b1aadd0();
  func_0x00010b1aacfc();
  return;
}



/* Entry: 10b1a3c8c; end: 10b1a3cab;  */

void FUN_10b1a3c8c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b166558();
  }
  return;
}


