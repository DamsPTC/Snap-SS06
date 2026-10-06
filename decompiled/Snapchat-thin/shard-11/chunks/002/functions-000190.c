/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10839e45c; end: 10839e45f;  */

undefined8 * FUN_10839e45c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839e460; end: 10839e4e7;  */

void FUN_10839e460(void)

{
  ulong uVar1;
  
  uVar1 = 0;
  FUN_10821a6d8();
  if ((uVar1 & 1) == 0) {
    func_0x00010839f390();
  }
  return;
}



/* Entry: 10839e4e8; end: 10839e60f;  */

undefined8 *
FUN_10839e4e8(undefined8 *param_1,undefined8 *param_2,ulong param_3,int *param_4,uint param_5,
             ulong param_6)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110a3d208;
  param_1[5] = 0;
  param_1[6] = &PTR_DAT_110a3d290;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_3 != 0) {
    param_1[0xc] = param_3;
    if (((param_5 & 1) == 0) && (uVar1 = param_3, FUN_10821a044(param_3,param_4), (uVar1 & 1) == 0))
    {
      return param_1;
    }
    if (*(long *)(param_3 + 0x10) == 0) {
      piVar2 = (int *)param_1[0xc];
      if ((param_6 & 1) == 0) {
        func_0x000108219544(piVar2,param_4);
        if ((int)piVar2 != 0) {
          param_1[0xc] = 0;
          goto LAB_10839e5ac;
        }
        piVar2 = (int *)param_1[0xc];
        if ((*piVar2 <= *param_4) && (param_4[2] <= piVar2[2])) goto LAB_10839e5ac;
      }
      param_1[3] = param_2;
      uVar3 = *(undefined8 *)piVar2;
      param_1[5] = *(undefined8 *)(piVar2 + 2);
      param_1[4] = uVar3;
      param_2 = param_1;
    }
    else {
      param_1[9] = param_2;
      param_1[10] = param_3;
      param_2 = param_1 + 6;
    }
  }
LAB_10839e5ac:
  param_1[0xb] = param_2;
  return param_1;
}



/* Entry: 10839e610; end: 10839ebd7;  */

undefined *** FUN_10839e610(undefined ***param_1,undefined ***param_2,undefined ***param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 *unaff_x20;
  undefined8 *puVar19;
  undefined ***unaff_x21;
  undefined ***unaff_x22;
  undefined ***pppuVar20;
  int iVar21;
  undefined ***pppuVar22;
  uint uVar23;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined ***pppuStack_480;
  undefined ***pppuStack_478;
  undefined8 *puStack_470;
  undefined ***pppuStack_468;
  undefined1 *puStack_460;
  code *pcStack_458;
  undefined ***pppuStack_448;
  undefined ***pppuStack_440;
  int iStack_438;
  uint uStack_434;
  undefined **ppuStack_430;
  undefined ***pppuStack_428;
  undefined1 auStack_418 [88];
  undefined ***pppuStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined ***pppuStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long *plStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  undefined4 uStack_318;
  undefined ***pppuStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined4 uStack_88;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_2[2] == (undefined **)0xffffffffffffffff;
  if ((bool)uVar8) goto LAB_10839e920;
  ppuStack_388 = (undefined **)0x0;
  uStack_380 = 0;
  lStack_378 = -1;
  pppuVar10 = &ppuStack_388;
  pppuVar22 = param_2;
  FUN_10839ebd8(param_2,pppuVar10);
  pppuVar12 = param_2;
  if ((int)pppuVar22 == 0) {
LAB_10839e684:
    pppuVar10 = param_1;
    func_0x0001083773e0();
    unaff_x20 = &uStack_370;
    ppuStack_398 = pppuVar10[1];
    ppuStack_3a0 = *pppuVar10;
    pppuStack_428 = (undefined ***)0x4e0000004e000000;
    ppuStack_430 = (undefined **)0xce000000ce000000;
    pppuStack_2c8 = (undefined ***)0x4e0000004e000000;
    ppuStack_2d0 = (undefined **)0xce000000ce000000;
    unaff_x22 = &ppuStack_2d0;
    param_2 = &ppuStack_3a0;
    FUN_108281a6c();
    if (((ulong)unaff_x22 & 1) == 0) {
      pppuStack_2c8 = pppuStack_428;
      ppuStack_2d0 = ppuStack_430;
      uVar11 = 0;
      param_2 = &ppuStack_2d0;
      FUN_10838ed10();
      if ((uVar11 & 1) == 0) {
        ppuStack_3a0 = (undefined **)0x0;
        ppuStack_398 = (undefined **)0x0;
      }
    }
    pppuVar10 = &ppuStack_3a0;
    func_0x00010839ec40();
    iVar9 = (int)&uStack_3b0;
    uStack_3b0 = pppuVar10;
    uStack_3a8 = param_2;
    FUN_10821a6d8();
    if (iVar9 == 0) {
      param_2 = param_3;
      FUN_10839e4e8(auStack_418,param_3,pppuVar12,&uStack_3b0,
                    *(byte *)((long)param_1 + 0xe) >> 1 & 1,(uint)unaff_x22 ^ 1);
      pppuStack_440 = pppuStack_3c0;
      if (pppuStack_3c0 != (undefined ***)0x0) {
        if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) != 0) {
          FUN_10839e460(pppuStack_3c0,&uStack_3b0,pppuVar12);
        }
        uVar3 = uStack_3b0._4_4_;
        unaff_x22 = (undefined ***)(ulong)uStack_3b0._4_4_;
        uVar23 = uStack_3a8._4_4_;
        param_3 = (undefined ***)(ulong)uStack_3a8._4_4_;
        uStack_2d8 = pppuVar12[1];
        uStack_2e0 = *pppuVar12;
        FUN_10839989c(&ppuStack_2d0);
        ppuStack_2d0 = &PTR_FUN_110a3e650;
        uStack_88 = 0;
        uVar8 = lStack_3b8 == 0;
        puVar19 = (undefined8 *)0x0;
        if (!(bool)uVar8) {
          puVar19 = &uStack_2e0;
        }
        pppuVar10 = &ppuStack_2d0;
        param_2 = param_1;
        func_0x00010834dfd4(pppuVar10,param_1,puVar19);
        iVar9 = (int)pppuVar10;
        if (iVar9 == 0) {
          if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) != 0) {
            ppuVar17 = pppuVar12[1];
            ppuVar14 = *pppuVar12;
            uStack_370._4_4_ = (int)((ulong)ppuVar14 >> 0x20);
            bVar1 = uStack_370._4_4_ < (int)uVar3;
            uStack_370 = ppuVar14;
            if (bVar1) {
              uStack_370 = (undefined **)CONCAT44(uVar3,(int)ppuVar14);
            }
            uStack_368._4_4_ = (uint)((ulong)ppuVar17 >> 0x20);
            uVar8 = uStack_368._4_4_ == uVar23;
            bVar1 = (int)uVar23 < (int)uStack_368._4_4_;
            uStack_368 = ppuVar17;
            if (bVar1) {
              uStack_368 = (undefined **)CONCAT44(uVar23,(int)ppuVar17);
            }
            uVar11 = 0;
            FUN_10821a6d8();
            if ((uVar11 & 1) == 0) {
              param_2 = (undefined ***)((ulong)uStack_370 & 0xffffffff);
              (*(code *)(*pppuStack_440)[5])();
            }
          }
        }
        else {
          pppuVar22 = pppuStack_2c8;
          FUN_10839e1cc(pppuStack_2c8,pppuVar10,&plStack_338);
          ppuStack_430 = (undefined **)0x0;
          pppuStack_308 = pppuVar22;
          uStack_300 = 0;
          uStack_2f0 = 0x80000001;
          uStack_2f8 = 0x80000001;
          pppuVar22[1] = (undefined **)&pppuStack_308;
          uStack_330 = 0;
          plStack_328 = plStack_338;
          uStack_318 = 0x7fffffff;
          *plStack_338 = (long)&uStack_330;
          uVar6 = uVar3;
          if ((int)uVar3 <= (int)uStack_2e0._4_4_) {
            uVar6 = uStack_2e0._4_4_;
          }
          uVar4 = uVar23;
          if ((int)uStack_2d8._4_4_ <= (int)uVar23) {
            uVar4 = uStack_2d8._4_4_;
          }
          if (lStack_3b8 != 0) {
            uVar3 = uVar6;
          }
          pppuVar22 = (undefined ***)(ulong)uVar3;
          uStack_434 = uVar23;
          if (lStack_3b8 != 0) {
            uStack_434 = uVar4;
          }
          uStack_368 = (undefined **)0x0;
          uStack_360 = 0;
          uStack_370 = &PTR_FUN_110a40148;
          bVar7 = *(byte *)((long)param_1 + 0xe);
          pppuVar13 = pppuStack_440;
          if ((bVar7 >> 1 & 1) != 0) {
            pppuStack_358 = pppuStack_440;
            uStack_350 = *(undefined4 *)pppuVar12;
            uStack_34c = *(undefined4 *)(pppuVar12 + 1);
            ppuStack_430 = (undefined **)FUN_10839e258;
            pppuVar13 = (undefined ***)&uStack_370;
          }
          pppuStack_448 = param_1;
          FUN_108376fcc();
          if (((((uint)param_1 ^ 1) & 1) == 0 && (bVar7 & 2) == 0) &&
             (uVar8 = iVar9 == 2, 1 < iVar9)) {
            FUN_10839e294(pppuStack_308,pppuVar13,pppuVar22,uStack_434);
            pppuVar10 = pppuVar13;
          }
          else {
            iStack_438 = (int)uStack_2d8;
            uVar3 = 1;
            if ((*(byte *)((long)pppuStack_448 + 0xe) & 1) == 0) {
              uVar3 = 0xffffffff;
            }
            param_3 = (undefined ***)(ulong)uVar3;
LAB_10839e968:
            pppuVar20 = pppuStack_308;
            puVar19 = (undefined8 *)(ulong)uStack_2f8;
            if ((bVar7 >> 1 & 1) != 0) {
              pppuVar10 = pppuVar22;
              (*(code *)ppuStack_430)(pppuVar13,pppuVar22,1);
            }
            uVar23 = 0;
            iVar9 = 0;
            while (unaff_x22 = pppuVar20, unaff_x20 = puVar19, iVar21 = (int)pppuVar22,
                  *(int *)(unaff_x22 + 3) <= iVar21) {
              iVar2 = *(int *)(unaff_x22 + 2) + 0x8000 >> 0x10;
              iVar5 = iVar2;
              if ((uVar23 & uVar3) != 0) {
                iVar5 = iVar9;
              }
              uVar23 = uVar23 + (int)*(char *)((long)unaff_x22 + 0x24);
              if (((uVar23 & uVar3) == 0) && (0 < iVar2 - iVar5)) {
                func_0x00010839f3a0((*pppuVar13)[2]);
              }
              pppuVar20 = (undefined ***)*unaff_x22;
              iVar9 = iVar5;
              if (*(int *)((long)unaff_x22 + 0x1c) == iVar21) {
                if (*(char *)((long)unaff_x22 + 0x21) < '\x01') {
                  if (*(char *)((long)unaff_x22 + 0x21) < '\0') {
                    pppuVar16 = unaff_x22;
                    FUN_10834d374();
                    iVar21 = (int)pppuVar16;
                    goto LAB_10839ea00;
                  }
                }
                else {
                  pppuVar16 = unaff_x22;
                  FUN_10834cfa4();
                  iVar21 = (int)pppuVar16;
LAB_10839ea00:
                  if (iVar21 != 0) {
                    uVar6 = *(uint *)(unaff_x22 + 2);
                    goto LAB_10839ea18;
                  }
                }
                ppuVar14 = *unaff_x22;
                ppuVar17 = unaff_x22[1];
                *ppuVar17 = (undefined *)ppuVar14;
                ppuVar14[1] = (undefined *)ppuVar17;
                puVar19 = unaff_x20;
              }
              else {
                uVar6 = *(int *)((long)unaff_x22 + 0x14) + *(int *)(unaff_x22 + 2);
                *(uint *)(unaff_x22 + 2) = uVar6;
LAB_10839ea18:
                puVar19 = (undefined8 *)(ulong)uVar6;
                if ((int)uVar6 < (int)unaff_x20) {
                  ppuVar17 = unaff_x22[1];
                  ppuVar14 = ppuVar17;
                  do {
                    ppuVar18 = ppuVar14;
                    if ((undefined **)ppuVar18[1] == (undefined **)0x0) break;
                    ppuVar14 = (undefined **)ppuVar18[1];
                  } while ((int)uVar6 < *(int *)(ppuVar18 + 2));
                  puVar19 = unaff_x20;
                  if ((undefined ***)*ppuVar18 != unaff_x22) {
                    ppuVar14 = *unaff_x22;
                    *ppuVar17 = (undefined *)ppuVar14;
                    ppuVar14[1] = (undefined *)ppuVar17;
                    unaff_x22[1] = ppuVar18;
                    ppuVar14 = (undefined **)*ppuVar18;
                    *unaff_x22 = ppuVar14;
                    ppuVar14[1] = (undefined *)unaff_x22;
                    *ppuVar18 = (undefined *)unaff_x22;
                  }
                }
              }
            }
            if (((uVar23 & uVar3) != 0) && (0 < iStack_438 - iVar9)) {
              func_0x00010839f3a0((*pppuVar13)[2]);
            }
            if ((bVar7 >> 1 & 1) != 0) {
              (*(code *)ppuStack_430)(pppuVar13,pppuVar22,0);
              pppuVar10 = pppuVar22;
            }
            uVar23 = iVar21 + 1;
            pppuVar22 = (undefined ***)(ulong)uVar23;
            uVar8 = uVar23 == uStack_434;
            if ((int)uVar23 < (int)uStack_434) {
              if (*(uint *)(unaff_x22 + 3) == uVar23) {
                pppuVar20 = (undefined ***)unaff_x22[1];
                if (*(int *)(unaff_x22 + 2) < *(int *)(unaff_x22[1] + 2)) {
                  do {
                    pppuVar16 = pppuVar20;
                    if ((undefined ***)pppuVar20[1] == (undefined ***)0x0) break;
                    pppuVar15 = pppuVar20 + 2;
                    pppuVar20 = (undefined ***)pppuVar20[1];
                  } while (*(int *)(unaff_x22 + 2) < *(int *)pppuVar15);
                  do {
                    pppuVar20 = (undefined ***)*unaff_x22;
                    do {
                      pppuVar15 = pppuVar16;
                      pppuVar16 = (undefined ***)*pppuVar15;
                      if (pppuVar16 == unaff_x22) goto LAB_10839eb64;
                    } while (*(int *)(pppuVar16 + 2) < *(int *)(unaff_x22 + 2));
                    ppuVar14 = unaff_x22[1];
                    *ppuVar14 = (undefined *)pppuVar20;
                    pppuVar20[1] = ppuVar14;
                    unaff_x22[1] = (undefined **)pppuVar15;
                    ppuVar14 = *pppuVar15;
                    *unaff_x22 = ppuVar14;
                    ppuVar14[1] = (undefined *)unaff_x22;
                    *pppuVar15 = (undefined **)unaff_x22;
LAB_10839eb64:
                    pppuVar16 = unaff_x22;
                    unaff_x22 = pppuVar20;
                  } while (*(uint *)(pppuVar20 + 3) == uVar23);
                }
              }
              goto LAB_10839e968;
            }
          }
          FUN_108334af4(&uStack_370);
          param_2 = pppuVar10;
          param_1 = pppuStack_448;
        }
        FUN_10834e14c(&ppuStack_2d0);
        if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) != 0) {
          param_2 = (undefined ***)&uStack_3b0;
          func_0x00010839e4a4(pppuStack_440,param_2,pppuVar12);
        }
      }
      FUN_10839ae10(auStack_418);
    }
    else if ((*(byte *)((long)param_1 + 0xe) >> 1 & 1) != 0) {
      FUN_108335274(param_3,pppuVar12);
      param_2 = pppuVar12;
    }
  }
  else {
    uVar8 = lStack_378 == -1;
    param_2 = pppuVar10;
    if (!(bool)uVar8) {
      pppuVar12 = &ppuStack_388;
      goto LAB_10839e684;
    }
  }
  param_1 = &ppuStack_388;
  FUN_10838f648();
  unaff_x21 = param_3;
LAB_10839e920:
  func_0x00010839f3dc(uStack_78);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    FUN_10834e14c(&ppuStack_2d0);
    FUN_10839ae10(auStack_418);
    pppuVar10 = &ppuStack_388;
    FUN_10838f648(pppuVar10);
    func_0x00010839f3c8();
    puVar19 = &uStack_490;
    pcStack_458 = FUN_10839ebd8;
    uStack_488 = 0x3fff00003fff;
    uStack_490 = 0xffffc001ffffc001;
    pppuStack_480 = unaff_x22;
    pppuStack_478 = unaff_x21;
    puStack_470 = unaff_x20;
    pppuStack_468 = param_1;
    puStack_460 = &stack0xfffffffffffffff0;
    func_0x000108219544(&uStack_490,pppuVar10);
    if (((ulong)puVar19 & 1) == 0) {
      FUN_10838f778(param_2,pppuVar10,&uStack_490,1);
    }
    return (undefined ***)(ulong)((uint)puVar19 ^ 1);
  }
  return param_1;
}



/* Entry: 10839ebd8; end: 10839eca3;  */

uint FUN_10839ebd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  uStack_38 = 0x3fff00003fff;
  uStack_40 = 0xffffc001ffffc001;
  func_0x000108219544(&uStack_40,param_1);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10838f778(param_2,param_1,&uStack_40,1);
  }
  return (uint)puVar1 ^ 1;
}



/* Entry: 10839eca4; end: 10839ed1f;  */

undefined1 * FUN_10839eca4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_50;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010838f5bc(auStack_50,param_1);
  FUN_10839ebd8(auStack_50,&uStack_38);
  FUN_10838f648(auStack_50);
  FUN_10838f648(&uStack_38);
  return puVar1;
}



/* Entry: 10839ed20; end: 10839efdb;  */

void FUN_10839ed20(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 in_ZR;
  bool bVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 **ppuVar24;
  undefined1 auStack_648 [88];
  long *plStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined **ppuStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 *puStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [1024];
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long alStack_140 [2];
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined4 uStack_110;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined1 *apuStack_d8 [3];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [80];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_2;
  plVar12 = param_3;
  if ((*(byte *)((long)param_2 + 0x31) & 1) == 0) {
    alStack_140[1] = 0;
    alStack_140[0] = 0;
    plVar12 = (long *)0x3;
    FUN_10838eb84(alStack_140,param_1);
    uStack_5d8 = 0x467ffc00467ffc00;
    uStack_5e0 = 0xc67ffc00c67ffc00;
    uVar23 = 0;
    plVar11 = alStack_140;
    FUN_108281a6c();
    if ((uVar23 & 1) == 0) {
      FUN_108376ad8(&uStack_5e0);
      FUN_108378060(&uStack_5e0,param_1,3,0);
      FUN_10839acc8(&uStack_5e0);
      FUN_10837ca5c();
      plVar11 = param_2;
      plVar12 = param_3;
    }
    else {
      plVar8 = alStack_140;
      func_0x00010839ec40();
      uVar23 = 0;
      uStack_150 = plVar8;
      uStack_148 = plVar11;
      FUN_10821a6d8();
      if ((uVar23 & 1) == 0) {
        in_ZR = (char)param_2[6] == '\0';
        lVar15 = 0;
        if ((bool)in_ZR) {
          lVar15 = 0x18;
        }
        iVar20 = (int)&uStack_150;
        plVar11 = (long *)((long)param_2 + lVar15);
        FUN_10821a044();
        if (iVar20 != 0) {
          uStack_5e0 = 0;
          uStack_5d8 = 0;
          uStack_5c0 = 0;
          uStack_5b8 = 0;
          uStack_5d0 = 0xffffffffffffffff;
          ppuStack_5c8 = &PTR_FUN_110a3cb68;
          uStack_5a0 = 0;
          uStack_598 = 0;
          puStack_580 = auStack_570;
          uStack_578 = 0x400;
          uStack_170 = 0;
          if ((*(byte *)(param_2 + 6) & 1) == 0) {
            FUN_108387754(&uStack_5e0,param_2,param_3);
            param_3 = plStack_160;
            param_2 = plStack_168;
          }
          FUN_10839e4e8(auStack_648,param_3,param_2,&uStack_150,0,0);
          if (plStack_5f0 != (long *)0x0) {
            puVar9 = auStack_c0;
            func_0x00010839f384(puVar9,param_1,param_1 + 1);
            ppuVar10 = apuStack_d8;
            puVar22 = auStack_c0;
            if ((int)puVar9 != 0) {
              ppuVar10 = apuStack_d8 + 1;
              puVar22 = auStack_98;
              apuStack_d8[0] = auStack_c0;
            }
            puVar9 = puVar22;
            func_0x00010839f384(puVar22,param_1 + 1,param_1 + 2);
            ppuVar24 = ppuVar10;
            if ((int)puVar9 != 0) {
              ppuVar24 = ppuVar10 + 1;
              *ppuVar10 = puVar22;
              puVar22 = puVar22 + 0x28;
            }
            puVar9 = puVar22;
            func_0x00010839f384(puVar22,param_1 + 2);
            ppuVar10 = ppuVar24;
            if ((int)puVar9 != 0) {
              ppuVar10 = ppuVar24 + 1;
              *ppuVar24 = puVar22;
            }
            param_3 = (long *)((ulong)((long)ppuVar10 - (long)apuStack_d8) >> 3);
            in_ZR = (int)param_3 == 2;
            param_2 = param_1;
            if (1 < (int)param_3) {
              ppuVar10 = apuStack_d8;
              FUN_10839e1cc(ppuVar10,param_3,&plStack_130);
              uStack_f8 = 0;
              uStack_e8 = 0x80000001;
              uStack_f0 = 0x80000001;
              ppuStack_100 = ppuVar10;
              ppuVar10[1] = (undefined1 *)&ppuStack_100;
              plStack_120 = plStack_130;
              uStack_128 = 0;
              uStack_110 = 0x7fffffff;
              *plStack_130 = (long)&uStack_128;
              uVar6 = uStack_150._4_4_;
              iVar20 = uStack_148._4_4_;
              if (lStack_5e8 != 0) {
                if (*(int *)(lStack_5e8 + 0xc) <= uStack_148._4_4_) {
                  iVar20 = *(int *)(lStack_5e8 + 0xc);
                }
                uVar3 = *(uint *)(lStack_5e8 + 4);
                in_ZR = uStack_150._4_4_ == uVar3;
                if ((int)uStack_150._4_4_ <= (int)uVar3) {
                  uVar6 = uVar3;
                }
              }
              param_2 = (long *)(ulong)uVar6;
              FUN_10839e294(ppuStack_100,plStack_5f0,param_2,iVar20);
              param_3 = plStack_5f0;
            }
          }
          FUN_10839ae10(auStack_648);
          func_0x00010834950c();
          plVar11 = param_3;
          plVar12 = param_2;
        }
      }
    }
  }
  func_0x00010839f3dc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar21 = &uStack_5e0;
  func_0x00010834950c();
  func_0x00010839f3c8();
  do {
    iVar20 = (int)plVar12;
    if (iVar20 < 0x21) {
      plVar12 = plVar11;
      do {
        do {
          plVar8 = plVar12;
          plVar12 = plVar8 + 1;
          if (plVar11 + (long)iVar20 + -1 < plVar12) {
            return;
          }
          lVar15 = plVar8[1];
          iVar4 = *(int *)(lVar15 + 0x18);
          iVar5 = *(int *)(*plVar8 + 0x18);
          bVar7 = SBORROW4(iVar4,iVar5);
          iVar1 = iVar4 - iVar5;
          if (iVar4 == iVar5) {
            iVar1 = *(int *)(*plVar8 + 0x10);
            bVar7 = SBORROW4(*(int *)(lVar15 + 0x10),iVar1);
            iVar1 = *(int *)(lVar15 + 0x10) - iVar1;
          }
        } while (iVar1 < 0 == bVar7);
        for (; plVar8[1] = *plVar8, plVar11 < plVar8; plVar8 = plVar8 + -1) {
          iVar5 = *(int *)(plVar8[-1] + 0x18);
          bVar7 = SBORROW4(iVar4,iVar5);
          iVar1 = iVar4 - iVar5;
          if (iVar4 == iVar5) {
            iVar1 = *(int *)(plVar8[-1] + 0x10);
            bVar7 = SBORROW4(*(int *)(lVar15 + 0x10),iVar1);
            iVar1 = *(int *)(lVar15 + 0x10) - iVar1;
          }
          if (iVar1 < 0 == bVar7) break;
        }
        *plVar8 = lVar15;
      } while( true );
    }
    if ((int)puVar21 == 0) {
      uVar23 = (ulong)plVar12 & 0xffffffff;
      for (uVar16 = uVar23 >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
        lVar15 = plVar11[uVar16 - 1];
        uVar18 = uVar16;
        while( true ) {
          uVar19 = uVar18 * 2;
          if (uVar23 <= uVar19 && uVar19 - uVar23 != 0) break;
          if (uVar23 > uVar19) {
            lVar17 = (plVar11 + uVar18 * 2)[-1];
            lVar2 = plVar11[uVar18 * 2];
            iVar1 = *(int *)(lVar17 + 0x18);
            iVar4 = *(int *)(lVar2 + 0x18);
            bVar7 = SBORROW4(iVar1,iVar4);
            iVar20 = iVar1 - iVar4;
            if (iVar1 == iVar4) {
              iVar20 = *(int *)(lVar17 + 0x10);
              iVar1 = *(int *)(lVar2 + 0x10);
              bVar7 = SBORROW4(iVar20,iVar1);
              iVar20 = iVar20 - iVar1;
            }
            uVar19 = uVar19 | iVar20 < 0 != bVar7;
          }
          lVar17 = plVar11[uVar19 - 1];
          iVar1 = *(int *)(lVar15 + 0x18);
          iVar4 = *(int *)(lVar17 + 0x18);
          bVar7 = SBORROW4(iVar1,iVar4);
          iVar20 = iVar1 - iVar4;
          if (iVar1 == iVar4) {
            bVar7 = SBORROW4(*(int *)(lVar15 + 0x10),*(int *)(lVar17 + 0x10));
            iVar20 = *(int *)(lVar15 + 0x10) - *(int *)(lVar17 + 0x10);
          }
          if (iVar20 < 0 == bVar7) break;
          plVar11[uVar18 - 1] = lVar17;
          uVar18 = uVar19;
        }
        plVar11[uVar18 - 1] = lVar15;
      }
      do {
        uVar23 = uVar23 - 1;
        if (uVar23 == 0) {
          return;
        }
        lVar15 = *plVar11;
        *plVar11 = plVar11[uVar23];
        plVar11[uVar23] = lVar15;
        lVar15 = *plVar11;
        uVar16 = 1;
        while( true ) {
          uVar18 = uVar16 * 2;
          if (uVar23 <= uVar18 && uVar18 - uVar23 != 0) break;
          if (uVar23 > uVar18) {
            lVar17 = (plVar11 + uVar16 * 2)[-1];
            lVar2 = plVar11[uVar16 * 2];
            iVar1 = *(int *)(lVar17 + 0x18);
            iVar4 = *(int *)(lVar2 + 0x18);
            bVar7 = SBORROW4(iVar1,iVar4);
            iVar20 = iVar1 - iVar4;
            if (iVar1 == iVar4) {
              iVar20 = *(int *)(lVar17 + 0x10);
              iVar1 = *(int *)(lVar2 + 0x10);
              bVar7 = SBORROW4(iVar20,iVar1);
              iVar20 = iVar20 - iVar1;
            }
            uVar18 = uVar18 | iVar20 < 0 != bVar7;
          }
          plVar11[uVar16 - 1] = plVar11[uVar18 - 1];
          uVar16 = uVar18;
        }
        while (1 < uVar16) {
          lVar17 = plVar11[(uVar16 >> 1) - 1];
          iVar1 = *(int *)(lVar17 + 0x18);
          iVar4 = *(int *)(lVar15 + 0x18);
          bVar7 = SBORROW4(iVar1,iVar4);
          iVar20 = iVar1 - iVar4;
          if (iVar1 == iVar4) {
            bVar7 = SBORROW4(*(int *)(lVar17 + 0x10),*(int *)(lVar15 + 0x10));
            iVar20 = *(int *)(lVar17 + 0x10) - *(int *)(lVar15 + 0x10);
          }
          if (iVar20 < 0 == bVar7) break;
          plVar11[uVar16 - 1] = lVar17;
          uVar16 = uVar16 >> 1;
        }
        plVar11[uVar16 - 1] = lVar15;
      } while( true );
    }
    uVar6 = iVar20 - 1U >> 1;
    plVar13 = plVar11 + (((ulong)plVar12 & 0xffffffff) - 1);
    lVar15 = plVar11[uVar6];
    plVar11[uVar6] = *plVar13;
    *plVar13 = lVar15;
    plVar8 = plVar11;
    for (plVar12 = plVar11; plVar12 < plVar13; plVar12 = plVar12 + 1) {
      lVar17 = *plVar12;
      iVar4 = *(int *)(lVar17 + 0x18);
      iVar5 = *(int *)(lVar15 + 0x18);
      bVar7 = SBORROW4(iVar4,iVar5);
      iVar1 = iVar4 - iVar5;
      if (iVar4 == iVar5) {
        bVar7 = SBORROW4(*(int *)(lVar17 + 0x10),*(int *)(lVar15 + 0x10));
        iVar1 = *(int *)(lVar17 + 0x10) - *(int *)(lVar15 + 0x10);
      }
      plVar14 = plVar8;
      if (iVar1 < 0 != bVar7) {
        *plVar12 = *plVar8;
        plVar14 = plVar8 + 1;
        *plVar8 = lVar17;
      }
      plVar8 = plVar14;
    }
    puVar21 = (undefined8 *)(ulong)((int)puVar21 - 1);
    lVar15 = *plVar8;
    *plVar8 = *plVar13;
    *plVar13 = lVar15;
    uVar23 = (ulong)((long)plVar8 - (long)plVar11) >> 3;
    FUN_10839efdc(puVar21,plVar11,uVar23);
    iVar1 = (int)uVar23 + 1;
    plVar11 = plVar11 + iVar1;
    plVar12 = (long *)(ulong)(uint)(iVar20 - iVar1);
  } while( true );
}



/* Entry: 10839efdc; end: 10839f26f;  */

void FUN_10839efdc(int param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  do {
    if ((int)param_3 < 0x21) {
      plVar12 = param_2;
      do {
        do {
          plVar8 = plVar12;
          plVar12 = plVar8 + 1;
          if (param_2 + (long)(int)param_3 + -1 < plVar12) {
            return;
          }
          lVar10 = plVar8[1];
          iVar3 = *(int *)(lVar10 + 0x18);
          iVar4 = *(int *)(*plVar8 + 0x18);
          bVar6 = SBORROW4(iVar3,iVar4);
          iVar1 = iVar3 - iVar4;
          if (iVar3 == iVar4) {
            iVar1 = *(int *)(*plVar8 + 0x10);
            bVar6 = SBORROW4(*(int *)(lVar10 + 0x10),iVar1);
            iVar1 = *(int *)(lVar10 + 0x10) - iVar1;
          }
        } while (iVar1 < 0 == bVar6);
        for (; plVar8[1] = *plVar8, param_2 < plVar8; plVar8 = plVar8 + -1) {
          iVar4 = *(int *)(plVar8[-1] + 0x18);
          bVar6 = SBORROW4(iVar3,iVar4);
          iVar1 = iVar3 - iVar4;
          if (iVar3 == iVar4) {
            iVar1 = *(int *)(plVar8[-1] + 0x10);
            bVar6 = SBORROW4(*(int *)(lVar10 + 0x10),iVar1);
            iVar1 = *(int *)(lVar10 + 0x10) - iVar1;
          }
          if (iVar1 < 0 == bVar6) break;
        }
        *plVar8 = lVar10;
      } while( true );
    }
    if (param_1 == 0) {
      uVar16 = (ulong)param_3;
      for (uVar11 = (ulong)(param_3 >> 1); uVar11 != 0; uVar11 = uVar11 - 1) {
        lVar10 = param_2[uVar11 - 1];
        uVar14 = uVar11;
        while( true ) {
          uVar15 = uVar14 * 2;
          if (uVar16 <= uVar15 && uVar15 - uVar16 != 0) break;
          if (uVar16 > uVar15) {
            lVar13 = (param_2 + uVar14 * 2)[-1];
            lVar2 = param_2[uVar14 * 2];
            iVar3 = *(int *)(lVar13 + 0x18);
            iVar4 = *(int *)(lVar2 + 0x18);
            bVar6 = SBORROW4(iVar3,iVar4);
            iVar1 = iVar3 - iVar4;
            if (iVar3 == iVar4) {
              iVar1 = *(int *)(lVar13 + 0x10);
              iVar3 = *(int *)(lVar2 + 0x10);
              bVar6 = SBORROW4(iVar1,iVar3);
              iVar1 = iVar1 - iVar3;
            }
            uVar15 = uVar15 | iVar1 < 0 != bVar6;
          }
          lVar13 = param_2[uVar15 - 1];
          iVar3 = *(int *)(lVar10 + 0x18);
          iVar4 = *(int *)(lVar13 + 0x18);
          bVar6 = SBORROW4(iVar3,iVar4);
          iVar1 = iVar3 - iVar4;
          if (iVar3 == iVar4) {
            bVar6 = SBORROW4(*(int *)(lVar10 + 0x10),*(int *)(lVar13 + 0x10));
            iVar1 = *(int *)(lVar10 + 0x10) - *(int *)(lVar13 + 0x10);
          }
          if (iVar1 < 0 == bVar6) break;
          param_2[uVar14 - 1] = lVar13;
          uVar14 = uVar15;
        }
        param_2[uVar14 - 1] = lVar10;
      }
      do {
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          return;
        }
        lVar10 = *param_2;
        *param_2 = param_2[uVar16];
        param_2[uVar16] = lVar10;
        lVar10 = *param_2;
        uVar11 = 1;
        while( true ) {
          uVar14 = uVar11 * 2;
          if (uVar16 <= uVar14 && uVar14 - uVar16 != 0) break;
          if (uVar16 > uVar14) {
            lVar13 = (param_2 + uVar11 * 2)[-1];
            lVar2 = param_2[uVar11 * 2];
            iVar3 = *(int *)(lVar13 + 0x18);
            iVar4 = *(int *)(lVar2 + 0x18);
            bVar6 = SBORROW4(iVar3,iVar4);
            iVar1 = iVar3 - iVar4;
            if (iVar3 == iVar4) {
              iVar1 = *(int *)(lVar13 + 0x10);
              iVar3 = *(int *)(lVar2 + 0x10);
              bVar6 = SBORROW4(iVar1,iVar3);
              iVar1 = iVar1 - iVar3;
            }
            uVar14 = uVar14 | iVar1 < 0 != bVar6;
          }
          param_2[uVar11 - 1] = param_2[uVar14 - 1];
          uVar11 = uVar14;
        }
        while (1 < uVar11) {
          lVar13 = param_2[(uVar11 >> 1) - 1];
          iVar3 = *(int *)(lVar13 + 0x18);
          iVar4 = *(int *)(lVar10 + 0x18);
          bVar6 = SBORROW4(iVar3,iVar4);
          iVar1 = iVar3 - iVar4;
          if (iVar3 == iVar4) {
            bVar6 = SBORROW4(*(int *)(lVar13 + 0x10),*(int *)(lVar10 + 0x10));
            iVar1 = *(int *)(lVar13 + 0x10) - *(int *)(lVar10 + 0x10);
          }
          if (iVar1 < 0 == bVar6) break;
          param_2[uVar11 - 1] = lVar13;
          uVar11 = uVar11 >> 1;
        }
        param_2[uVar11 - 1] = lVar10;
      } while( true );
    }
    uVar5 = param_3 - 1 >> 1;
    plVar7 = param_2 + ((ulong)param_3 - 1);
    lVar10 = param_2[uVar5];
    param_2[uVar5] = *plVar7;
    *plVar7 = lVar10;
    plVar8 = param_2;
    for (plVar12 = param_2; plVar12 < plVar7; plVar12 = plVar12 + 1) {
      lVar13 = *plVar12;
      iVar3 = *(int *)(lVar13 + 0x18);
      iVar4 = *(int *)(lVar10 + 0x18);
      bVar6 = SBORROW4(iVar3,iVar4);
      iVar1 = iVar3 - iVar4;
      if (iVar3 == iVar4) {
        bVar6 = SBORROW4(*(int *)(lVar13 + 0x10),*(int *)(lVar10 + 0x10));
        iVar1 = *(int *)(lVar13 + 0x10) - *(int *)(lVar10 + 0x10);
      }
      plVar9 = plVar8;
      if (iVar1 < 0 != bVar6) {
        *plVar12 = *plVar8;
        plVar9 = plVar8 + 1;
        *plVar8 = lVar13;
      }
      plVar8 = plVar9;
    }
    param_1 = param_1 + -1;
    lVar10 = *plVar8;
    *plVar8 = *plVar7;
    *plVar7 = lVar10;
    uVar16 = (ulong)((long)plVar8 - (long)param_2) >> 3;
    FUN_10839efdc(param_1,param_2,uVar16);
    iVar1 = (int)uVar16 + 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  } while( true );
}



/* Entry: 10839f270; end: 10839f283;  */

void FUN_10839f270(void)

{
  FUN_108334af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839f284; end: 10839f2cf;  */

void FUN_10839f284(long param_1,int param_2,undefined8 param_3,int param_4)

{
  if (0 < param_2 - *(int *)(param_1 + 0x28)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  }
  *(int *)(param_1 + 0x28) = param_4 + param_2;
  return;
}



/* Entry: 10839f2d0; end: 10839f2df;  */

void FUN_10839f2d0(void)

{
  return;
}



/* Entry: 10839f2e0; end: 10839f32b;  */

undefined8 FUN_10839f2e0(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x21) < '\0') {
    FUN_10834d374();
    iVar1 = (int)param_1;
  }
  else {
    if (*(char *)(param_1 + 0x21) == '\0') {
      return 0;
    }
    FUN_10834cfa4();
    iVar1 = (int)param_1;
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 10839f32c; end: 10839f3ef;  */

int FUN_10839f32c(float param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_fminnm((long)(param_1 + -0.5234375),0x41dfffffffc00000);
  if (dVar1 <= -2147483647.0) {
    dVar1 = -2147483647.0;
  }
  return (int)dVar1;
}



/* Entry: 10839f3f0; end: 10839f46f;  */

undefined8 *
FUN_10839f3f0(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a401d0;
  uVar5 = *param_2;
  *(undefined8 *)((long)param_1 + 0x14) = param_2[1];
  *(undefined8 *)((long)param_1 + 0xc) = uVar5;
  if (param_3 == 0) {
    puVar3 = param_1;
    func_0x000108383c38();
    param_3 = (int)puVar3;
  }
  *(int *)((long)param_1 + 0x1c) = param_3;
  piVar4 = (int *)*param_4;
  if (piVar4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[4] = piVar4;
  param_1[5] = param_4[1];
  uVar5 = *param_5;
  param_1[7] = param_5[1];
  param_1[6] = uVar5;
  return param_1;
}



/* Entry: 10839f470; end: 10839f583;  */

void FUN_10839f470(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [40];
  
  puVar1 = auStack_90;
  uVar2 = *(ulong *)((long)param_6 + 0xc);
  FUN_1082beaa0(auStack_78,(ulong)(uint)-(int)uVar2 - (uVar2 & 0xffffffff00000000));
  FUN_108363f68(auStack_78,param_9);
  if (param_10 == 0) {
    (**(code **)(*param_6 + 0x28))(&uStack_88,param_6);
    func_0x00010839fb78(CONCAT44(uStack_84,uStack_88));
    FUN_1083b5bbc();
    puVar1 = &uStack_88;
  }
  else {
    FUN_10817500c((ulong *)((long)param_6 + 0xc));
    uStack_88 = param_2;
    uStack_84 = param_3;
    uStack_80 = param_4;
    uStack_7c = param_5;
    (**(code **)(*param_6 + 0x28))(auStack_90,param_6);
    FUN_1083bb4d4(param_1,auStack_90,&uStack_88,param_7,param_7,param_8,auStack_78,0);
  }
  func_0x000106f47184(puVar1);
  return;
}



/* Entry: 10839f584; end: 10839f683;  */

void FUN_10839f584(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    return;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  if ((int)param_3[4] == 4) {
LAB_10839f5cc:
    FUN_10839f684(auStack_88,param_2,param_3,param_4);
    func_0x00010839fb8c();
  }
  else {
    func_0x0001078bdd84(auStack_88,param_3 + 3,4);
    plVar1 = &lStack_70;
    func_0x00010821afec(plVar1,auStack_88);
    if ((int)plVar1 == 0) {
      func_0x00010839fbe0();
    }
    else {
      FUN_108330ff0(param_3,&uStack_58,uStack_68,uStack_60,0,0);
      func_0x00010839fbe0();
      if (((ulong)param_3 & 1) != 0) {
        param_3 = &lStack_70;
        goto LAB_10839f5cc;
      }
    }
    *param_1 = 0;
  }
  FUN_108330548(&lStack_70);
  return;
}



/* Entry: 10839f684; end: 10839f6b7;  */

void FUN_10839f684(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010839fb60();
  func_0x00010839fbb8();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10839f6b8; end: 10839f80f;  */

void FUN_10839f6b8(undefined8 *param_1,int *param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int *piStack_88;
  long lStack_80;
  int *piStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    piVar3 = param_2;
    func_0x00010821a0c0();
    piStack_88 = (int *)param_3[3];
    if (piStack_88 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
        if (bVar2) {
          *piStack_88 = *piStack_88 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_80 = param_3[4];
    piStack_78 = piVar3;
    if ((int)lStack_80 != 4) {
      func_0x0001078bdd84(&uStack_a0,&piStack_88,4);
      func_0x0001078bddd4(&piStack_88,&uStack_a0);
      FUN_10810a400(&uStack_a0);
    }
    puVar4 = &uStack_70;
    func_0x00010821afec(puVar4,&piStack_88);
    if ((((ulong)puVar4 & 1) == 0) ||
       (FUN_108330ff0(param_3,&uStack_58,uStack_68,uStack_60,*param_2,param_2[1]),
       ((ulong)param_3 & 1) == 0)) {
      *param_1 = 0;
    }
    else {
      uStack_98 = CONCAT44(param_2[3] - param_2[1],param_2[2] - *param_2);
      uStack_a0 = 0;
      FUN_10839f810(auStack_a8,&uStack_a0,&uStack_70,param_4);
      func_0x00010839fb8c();
    }
    FUN_10810a400(&piStack_88);
    FUN_108330548(&uStack_70);
  }
  return;
}



/* Entry: 10839f810; end: 10839f843;  */

void FUN_10839f810(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010839fb60();
  func_0x00010839fbb8();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10839f844; end: 10839f8e3;  */

void FUN_10839f844(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [64];
  
  if ((*param_3 == 0) || (uVar1 = param_2, FUN_10821a6d8(), (int)uVar1 != 0)) {
    *param_1 = 0;
  }
  else {
    func_0x00010839fbe8();
    param_3 = (long *)*param_3;
    (**(code **)(*param_3 + 0xd0))(param_3,0,auStack_70,0);
    if ((int)param_3 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_10839f584(param_1,param_2,auStack_70,param_4);
    }
    func_0x00010839fba0();
  }
  return;
}



/* Entry: 10839f8e4; end: 10839f943;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10839f8e4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long alStack_d8 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  int *piStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (((param_1 != (long *)0x0) &&
      (plVar6 = param_1, (**(code **)(*param_1 + 0x38))(), ((ulong)plVar6 & 1) == 0)) &&
     (plVar6 = param_1, (**(code **)(*param_1 + 0x40))(), ((ulong)plVar6 & 1) == 0)) {
    plVar6 = param_1 + 8;
    if ((param_2 == 0) || (*plVar6 == 0)) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = param_1[0xd];
      puVar7 = &uStack_98;
      FUN_10838ea90(puVar7,&uStack_88,(long)param_1 + 0xc);
      if ((int)puVar7 != 0) {
        alStack_d8[7] = 0;
        alStack_d8[4] = 0;
        alStack_d8[3] = 0;
        alStack_d8[6] = 0;
        alStack_d8[5] = 0;
        alStack_d8[2] = 0;
        alStack_d8[1] = 0;
        iVar4 = (int)uStack_98;
        iVar5 = uStack_98._4_4_;
        piStack_78 = (int *)param_1[0xb];
        if (piStack_78 != (int *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piStack_78,0x10);
            if (bVar3) {
              *piStack_78 = *piStack_78 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_70 = param_1[0xc];
        uStack_68 = CONCAT44(uStack_90._4_4_ - uStack_98._4_4_,(int)uStack_90 - (int)uStack_98);
        FUN_1083306e4(alStack_d8 + 1,&piStack_78,param_1[10]);
        FUN_10810a400(&piStack_78);
        lVar8 = *plVar6;
        if (lVar8 != 0) {
          func_0x000108330824(plVar6);
          piVar1 = (int *)(lVar8 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          alStack_d8[0] = lVar8;
          FUN_108330884(alStack_d8 + 1,alStack_d8,iVar4 + (int)plVar6,
                        iVar5 + (int)((ulong)plVar6 >> 0x20));
          func_0x000108331364();
        }
        FUN_1083304b8(&piStack_78,param_2);
        func_0x000108330638(param_2,alStack_d8 + 1);
        func_0x000108330638(alStack_d8 + 1,&piStack_78);
        func_0x000108330548(&piStack_78);
        func_0x000108330548(alStack_d8 + 1);
      }
    }
    return puVar7;
  }
  return (undefined8 *)0x0;
}



/* Entry: 10839f944; end: 10839f96b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10839f944(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long alStack_d8 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int *piStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar6 = (long *)(param_1 + 0x40);
  if ((param_2 == 0) || (*plVar6 == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    puVar7 = &uStack_98;
    FUN_10838ea90(puVar7,&uStack_88,param_1 + 0xc);
    if ((int)puVar7 != 0) {
      alStack_d8[7] = 0;
      alStack_d8[4] = 0;
      alStack_d8[3] = 0;
      alStack_d8[6] = 0;
      alStack_d8[5] = 0;
      alStack_d8[2] = 0;
      alStack_d8[1] = 0;
      iVar4 = (int)uStack_98;
      iVar5 = uStack_98._4_4_;
      piStack_78 = *(int **)(param_1 + 0x58);
      if (piStack_78 != (int *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piStack_78,0x10);
          if (bVar3) {
            *piStack_78 = *piStack_78 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = *(undefined8 *)(param_1 + 0x60);
      uStack_68 = CONCAT44(uStack_90._4_4_ - uStack_98._4_4_,(int)uStack_90 - (int)uStack_98);
      FUN_1083306e4(alStack_d8 + 1,&piStack_78,*(undefined8 *)(param_1 + 0x50));
      FUN_10810a400(&piStack_78);
      lVar8 = *plVar6;
      if (lVar8 != 0) {
        func_0x000108330824(plVar6);
        piVar1 = (int *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        alStack_d8[0] = lVar8;
        FUN_108330884(alStack_d8 + 1,alStack_d8,iVar4 + (int)plVar6,
                      iVar5 + (int)((ulong)plVar6 >> 0x20));
        func_0x000108331364();
      }
      FUN_1083304b8(&piStack_78,param_2);
      func_0x000108330638(param_2,alStack_d8 + 1);
      func_0x000108330638(alStack_d8 + 1,&piStack_78);
      func_0x000108330548(&piStack_78);
      func_0x000108330548(alStack_d8 + 1);
    }
  }
  return puVar7;
}



/* Entry: 10839f96c; end: 10839f9df;  */

undefined8 * FUN_10839f96c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_3;
  func_0x000108330c80(param_3);
  puVar2 = param_1;
  FUN_10839f3f0(param_1,param_2,lVar1,param_3 + 0x18,param_4);
  *puVar2 = &PTR_FUN_110a40250;
  FUN_10833043c(puVar2 + 8,param_3);
  return param_1;
}



/* Entry: 10839f9e0; end: 10839f9e3;  */

undefined8 * FUN_10839f9e0(undefined8 *param_1)

{
  FUN_108330548(param_1 + 8);
  *param_1 = &PTR_DAT_110a401d0;
  FUN_10810a400(param_1 + 4);
  return param_1;
}



/* Entry: 10839f9e4; end: 10839f9f7;  */

void FUN_10839f9e4(void)

{
  FUN_10839fae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839f9f8; end: 10839fa0f;  */

undefined8 FUN_10839f9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10839fa10; end: 10839facb;  */

void FUN_10839fa10(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 auStack_80 [64];
  
  if (param_6 == 0) {
    FUN_1082beaa0(auStack_80,
                  (ulong)(uint)-(int)*(ulong *)(param_2 + 0xc) -
                  (*(ulong *)(param_2 + 0xc) & 0xffffffff00000000));
    FUN_108363f68(auStack_80,param_5);
    func_0x00010839fb78(param_2 + 0x40);
    FUN_1083311dc();
  }
  else {
    func_0x00010839fbe8();
    FUN_10839f944(param_2,auStack_80);
    if ((param_2 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      func_0x00010839fb78(auStack_80);
      FUN_1083311dc();
    }
    func_0x00010839fba0();
  }
  return;
}



/* Entry: 10839facc; end: 10839fadf;  */

void FUN_10839facc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar2 = (long *)(param_2 + 0x40);
  if (*plVar2 == 0) {
    *param_1 = 0;
    return;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  if (*(int *)(param_2 + 0x60) == 4) {
LAB_10839f5cc:
    FUN_10839f684(auStack_88,param_3,plVar2,param_2 + 0x30);
    func_0x00010839fb8c();
  }
  else {
    func_0x0001078bdd84(auStack_88,param_2 + 0x58,4);
    plVar1 = &lStack_70;
    func_0x00010821afec(plVar1,auStack_88);
    if ((int)plVar1 == 0) {
      func_0x00010839fbe0();
    }
    else {
      FUN_108330ff0(plVar2,&uStack_58,uStack_68,uStack_60,0,0);
      func_0x00010839fbe0();
      if (((ulong)plVar2 & 1) != 0) {
        plVar2 = &lStack_70;
        goto LAB_10839f5cc;
      }
    }
    *param_1 = 0;
  }
  FUN_108330548(&lStack_70);
  return;
}



/* Entry: 10839fae0; end: 10839fb07;  */

undefined8 * FUN_10839fae0(undefined8 *param_1)

{
  FUN_108330548(param_1 + 8);
  *param_1 = &PTR_DAT_110a401d0;
  FUN_10810a400(param_1 + 4);
  return param_1;
}



/* Entry: 10839fb08; end: 10839fb57;  */

long * FUN_10839fb08(long *param_1)

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



/* Entry: 10839fb58; end: 10839fbfb;  */

void FUN_10839fb58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10839fbfc; end: 10839fc7f;  */

void FUN_10839fbfc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uStack_31;
  
  if (((*(long *)(param_2 + 0x18) == 0) &&
      (*(long *)(param_2 + 0x10) == 0 && *(int *)(param_1 + 0x18) == 4)) &&
     (lVar1 = param_2, FUN_1083762bc(), (int)lVar1 != 0)) {
    FUN_108188360();
    uStack_31 = (undefined1)param_2;
    FUN_10839fc80(param_3,param_1,&uStack_31);
  }
  return;
}



/* Entry: 10839fc80; end: 10839fca3;  */

void FUN_10839fc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10839fca4(param_1,&uStack_20);
  return;
}



/* Entry: 10839fca4; end: 10839fd0f;  */

long * FUN_10839fca4(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  plVar7 = param_1;
  FUN_10840f8d0(param_1,0x91,8);
  lVar5 = param_1[1];
  param_1[1] = (long)(plVar7 + 0x11);
  plVar7[0x11] = (long)FUN_10839fd24;
  lVar10 = param_1[1];
  param_1[1] = lVar10 + 8;
  *(char *)(lVar10 + 8) = (char)plVar7 - (char)(int)lVar5;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  uVar3 = *param_2;
  bVar4 = *(byte *)param_2[1];
  plVar8 = plVar7;
  FUN_108336a70();
  *plVar8 = (long)&PTR_FUN_110a402d0;
  iVar6 = (int)uVar3 + 0x10;
  func_0x0001081fc0c4();
  uVar11 = (uint)bVar4;
  uVar9 = 2;
  if (uVar11 != 0xff) {
    uVar9 = 3;
  }
  uVar1 = (uint)(uVar11 != 0xff);
  if (iVar6 == 0) {
    uVar1 = uVar9;
  }
  ppuVar2 = &PTR_DAT_113254df8;
  if (uVar1 != 2) {
    ppuVar2 = &PTR_FUN_110a3d168 + uVar1;
  }
  plVar7[0xf] = (long)*ppuVar2;
  *(uint *)(plVar7 + 0x10) = uVar11;
  return plVar7;
}



/* Entry: 10839fd10; end: 10839fd23;  */

undefined8 * FUN_10839fd10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_1;
  bVar4 = *(byte *)param_1[1];
  puVar6 = param_2;
  FUN_108336a70();
  *puVar6 = &PTR_FUN_110a402d0;
  iVar5 = (int)uVar3 + 0x10;
  func_0x0001081fc0c4();
  uVar8 = (uint)bVar4;
  uVar7 = 2;
  if (uVar8 != 0xff) {
    uVar7 = 3;
  }
  uVar1 = (uint)(uVar8 != 0xff);
  if (iVar5 == 0) {
    uVar1 = uVar7;
  }
  ppuVar2 = &PTR_DAT_113254df8;
  if (uVar1 != 2) {
    ppuVar2 = &PTR_FUN_110a3d168 + uVar1;
  }
  param_2[0xf] = *ppuVar2;
  *(uint *)(param_2 + 0x10) = uVar8;
  return param_2;
}



/* Entry: 10839fd24; end: 10839fd53;  */

undefined8 * FUN_10839fd24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x91);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 10839fd54; end: 10839fdef;  */

undefined8 * FUN_10839fd54(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar3 = param_1;
  FUN_108336a70();
  *puVar3 = &PTR_FUN_110a402d0;
  param_2 = param_2 + 0x10;
  func_0x0001081fc0c4();
  uVar4 = 2;
  if (param_3 != 0xff) {
    uVar4 = 3;
  }
  uVar1 = (uint)(param_3 != 0xff);
  if (param_2 == 0) {
    uVar1 = uVar4;
  }
  ppuVar2 = &PTR_DAT_113254df8;
  if (uVar1 != 2) {
    ppuVar2 = &PTR_FUN_110a3d168 + uVar1;
  }
  param_1[0xf] = *ppuVar2;
  *(int *)(param_1 + 0x10) = param_3;
  return param_1;
}



/* Entry: 10839fdf0; end: 10839fdf3;  */

undefined8 * FUN_10839fdf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3d6c8;
  FUN_10810a400(param_1 + 10);
  FUN_10810a400(param_1 + 5);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10839fdf4; end: 10839fe07;  */

void FUN_10839fdf4(void)

{
  FUN_108336dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839fe08; end: 10839fe9f;  */

void FUN_10839fe08(long param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18) + lVar1 * param_3 + (long)(param_2 << 2);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x40) + lVar2 * ((long)param_3 - (long)*(int *)(param_1 + 0x6c)) +
          (long)((param_2 - *(int *)(param_1 + 0x68)) * 4);
  pcVar6 = *(code **)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  do {
    (*pcVar6)(lVar4,lVar5,param_4,uVar3);
    lVar4 = lVar4 + lVar1;
    lVar5 = lVar5 + lVar2;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}



/* Entry: 10839fea0; end: 10839fea3;  */

void FUN_10839fea0(void)

{
  return;
}



/* Entry: 10839fea4; end: 10839ff43;  */

undefined1 * FUN_10839fea4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uStack_a8;
  undefined1 auStack_77 [15];
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_33 [11];
  undefined8 uStack_28;
  
  func_0x0001083a0d28();
  puVar1 = auStack_33;
  uStack_28 = extraout_x8;
  FUN_1083a3164();
  func_0x0001083a0e4c();
  func_0x0001083a0de4();
  func_0x0001083a0d00(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_60 = SUB81(auStack_33,0);
    uStack_5f = (undefined7)((ulong)auStack_33 >> 8);
    uStack_48 = 0x10839fef4;
    uStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001083a0d28();
    uStack_68 = (undefined1)extraout_x8_00;
    uStack_67 = (undefined7)((ulong)extraout_x8_00 >> 8);
    puVar1 = auStack_77;
    FUN_1083a317c();
    func_0x0001083a0e4c();
    func_0x0001083a0de4();
    func_0x0001083a0d00(CONCAT71(uStack_67,uStack_68));
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001083a0e58();
      *(undefined8 *)(puVar1 + 8) = 0;
      func_0x0001083a0d54();
      FUN_108166048(puVar1 + 8,uStack_a8);
      func_0x0001083a0d40();
      return auStack_77;
    }
  }
  return puVar1;
}



/* Entry: 10839ff44; end: 10839ffa3;  */

void FUN_10839ff44(long param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001083a0e58();
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x0001083a0d54();
  FUN_108166048((undefined8 *)(param_1 + 8),uStack_28);
  func_0x0001083a0d40();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10839ffa4; end: 10839ffaf;  */

void FUN_10839ffa4(undefined8 *param_1,undefined4 *param_2,ulong param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (param_4 == 0) {
    puVar5 = param_2;
    func_0x000108346750();
    *puVar5 = 1;
    *(code **)(puVar5 + 2) = FUN_10834648c;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined4 **)(puVar5 + 6) = param_2;
    *(ulong *)(puVar5 + 8) = param_3;
    *param_1 = puVar5;
    return;
  }
  if (param_3 != 0) {
    if (0xffffffffffffffd7 < param_3) {
      FUN_10841076c(&UNK_10f48f31d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083463dc);
      (*pcVar3)();
    }
    puVar5 = (undefined4 *)(param_3 + 0x28);
    __Znwm();
    *puVar5 = 1;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined4 **)(puVar5 + 6) = puVar5 + 10;
    *(ulong *)(puVar5 + 8) = param_3;
    *param_1 = puVar5;
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(puVar5 + 10,param_2,param_3);
    return;
  }
  if (cRam0000000113826ca0 == '\0') {
    piVar4 = (int *)0x113826ca0;
    FUN_10825bc50(0x113826ca0,&stack0xffffffffffffffcf,1,0,0);
    if ((int)piVar4 == 0) goto LAB_10834645c;
    func_0x000108346750();
    *piVar4 = 1;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    cRam0000000113826ca0 = '\x02';
    piRam0000000113826ca8 = piVar4;
  }
  else {
LAB_10834645c:
    do {
    } while (cRam0000000113826ca0 != '\x02');
    piVar4 = piRam0000000113826ca8;
    if (piRam0000000113826ca8 == (int *)0x0) goto LAB_108346480;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_108346480:
  *param_1 = piVar4;
  return;
}



/* Entry: 10839ffb0; end: 1083a0023;  */

void FUN_10839ffb0(long param_1,long *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001083a0e58();
  lVar1 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 == 0) {
    func_0x0001083463dc(&uStack_28);
    FUN_108166048((long *)(param_1 + 8),uStack_28);
    func_0x0001083a0964(0);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1083a0024; end: 1083a004b;  */

void FUN_1083a0024(void)

{
  func_0x0001083a0d9c();
  return;
}



/* Entry: 1083a004c; end: 1083a00af;  */

void FUN_1083a004c(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001083a0e04();
  FUN_10839ff44();
  *param_1 = param_2;
  return;
}



/* Entry: 1083a00b0; end: 1083a00d3;  */

void FUN_1083a00b0(void)

{
  func_0x0001083a0d9c();
  return;
}



/* Entry: 1083a00d4; end: 1083a011b;  */

void FUN_1083a00d4(long param_1)

{
  undefined8 uStack_28;
  
  func_0x0001083a0d54();
  FUN_108166048(param_1 + 8,uStack_28);
  func_0x0001083a0d40();
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1083a011c; end: 1083a019b;  */

ulong FUN_1083a011c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20) - lVar1;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    func_0x0001083a0ddc(param_2,*(long *)(*(long *)(param_1 + 8) + 0x18) + lVar1);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x10) = lVar1 + param_3;
  return param_3;
}



/* Entry: 1083a019c; end: 1083a01af;  */

bool FUN_1083a019c(long param_1)

{
  return *(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 1083a01b0; end: 1083a0217;  */

long FUN_1083a01b0(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piStack_28;
  
  lVar3 = param_1;
  func_0x0001083a0e04();
  piStack_28 = *(int **)(param_1 + 8);
  if (piStack_28 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_28,0x10);
      if (bVar2) {
        *piStack_28 = *piStack_28 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10839ffb0(lVar3,&piStack_28);
  func_0x0001083a0d40();
  return lVar3;
}



/* Entry: 1083a0218; end: 1083a023f;  */

undefined8 FUN_1083a0218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1083a0240; end: 1083a028b;  */

long * FUN_1083a0240(long *param_1)

{
  func_0x0001083a0e40();
  (**(code **)(*param_1 + 0x40))();
  return param_1;
}



/* Entry: 1083a028c; end: 1083a02a3;  */

undefined8 FUN_1083a028c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 1083a02a4; end: 1083a030b;  */

undefined8 * FUN_1083a02a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a403f8;
  func_0x0001083a02d0();
  return param_1;
}



/* Entry: 1083a030c; end: 1083a030f;  */

undefined8 * FUN_1083a030c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a403f8;
  func_0x0001083a02d0();
  return param_1;
}



/* Entry: 1083a0310; end: 1083a0323;  */

void FUN_1083a0310(void)

{
  FUN_1083a02a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a0324; end: 1083a034b;  */

long FUN_1083a0324(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    return (*(long *)(param_1 + 0x18) - lVar1) + *(long *)(lVar1 + 8) + -0x18;
  }
  return 0;
}



/* Entry: 1083a034c; end: 1083a045f;  */

undefined8 FUN_1083a034c(long param_1,undefined4 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 == 0) {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar2 = *(undefined4 **)(lVar5 + 8);
    uVar6 = *(long *)(lVar5 + 0x10) - (long)puVar2;
    if (uVar6 != 0) {
      uVar1 = param_3;
      if (uVar6 <= param_3) {
        uVar1 = uVar6;
      }
      if (uVar1 == 4) {
        *puVar2 = *param_2;
      }
      else {
        func_0x0001083a0e20(puVar2,param_2);
      }
      *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + uVar1;
      if (param_3 <= uVar6) {
        return 1;
      }
      param_2 = (undefined4 *)((long)param_2 + uVar1);
      param_3 = param_3 - uVar1;
    }
  }
  uVar6 = param_3;
  if (param_3 < 0xfe9) {
    uVar6 = 0xfe8;
  }
  uVar6 = uVar6 + 3 & 0xfffffffffffffffc;
  puVar3 = (undefined8 *)(uVar6 + 0x18);
  _malloc();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar4 = puVar3 + 3;
    puVar3[2] = (long)puVar4 + uVar6;
    if (param_3 == 4) {
      *(undefined4 *)puVar4 = *param_2;
    }
    else {
      func_0x0001083a0ddc(puVar4,param_2);
    }
    puVar3[1] = (long)puVar4 + param_3;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 8) = puVar3;
    }
    else {
      *(long *)(param_1 + 0x18) = (puVar4[1] - (long)puVar4) + *(long *)(param_1 + 0x18) + -0x18;
      *puVar4 = puVar3;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    return 1;
  }
  return 0;
}



/* Entry: 1083a0460; end: 1083a04a3;  */

void FUN_1083a0460(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 8);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = plVar2[1];
    func_0x0001083a0ddc(param_2);
    param_2 = param_2 + (lVar1 - (long)(plVar2 + 3));
  }
  return;
}



/* Entry: 1083a04a4; end: 1083a053f;  */

bool FUN_1083a04a4(ulong param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) break;
    func_0x0001083a0e4c();
    func_0x0001083a0de4();
  } while ((param_1 & 1) != 0);
  return plVar1 == (long *)0x0;
}



/* Entry: 1083a0540; end: 1083a05b3;  */

void FUN_1083a0540(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    plVar2 = *(long **)(param_1 + 8);
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      _free();
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != (long *)0x0) {
    lVar1 = plVar2[1];
    func_0x0001083a0e20(param_2);
    param_2 = param_2 + (lVar1 - (long)(plVar2 + 3));
    lVar1 = *plVar2;
    _free(plVar2);
    plVar2 = (long *)lVar1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1083a05b4; end: 1083a0607;  */

void FUN_1083a05b4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cStack_31;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x20))();
  if (plVar4 != (long *)0x0) {
    FUN_1083464d4(param_1);
    lVar5 = *(long *)(*param_1 + 0x18);
    if (lVar5 == 0) {
      plVar4 = (long *)param_2[1];
      while (plVar4 != (long *)0x0) {
        plVar4 = (long *)*plVar4;
        _free();
      }
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return;
    }
    plVar4 = (long *)param_2[1];
    while (plVar4 != (long *)0x0) {
      lVar6 = plVar4[1];
      func_0x0001083a0e20(lVar5);
      lVar5 = lVar5 + (lVar6 - (long)(plVar4 + 3));
      lVar6 = *plVar4;
      _free(plVar4);
      plVar4 = (long *)lVar6;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
  cStack_31 = cRam0000000113826ca0;
  if (cRam0000000113826ca0 == '\0') {
    piVar3 = (int *)0x113826ca0;
    FUN_10825bc50(0x113826ca0,&cStack_31,1,0,0);
    if ((int)piVar3 == 0) goto LAB_10834645c;
    func_0x000108346750();
    *piVar3 = 1;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    cRam0000000113826ca0 = '\x02';
    piRam0000000113826ca8 = piVar3;
  }
  else {
LAB_10834645c:
    do {
    } while (cRam0000000113826ca0 != '\x02');
    piVar3 = piRam0000000113826ca8;
    if (piRam0000000113826ca8 == (int *)0x0) goto LAB_108346480;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_108346480:
  *param_1 = (long)piVar3;
  return;
}



/* Entry: 1083a0608; end: 1083a06f3;  */

void FUN_1083a0608(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2 + 1;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    uStack_40 = 0;
    FUN_10814c348(&uStack_38,&uStack_40);
    *param_1 = uStack_38;
    uStack_38 = 0;
    func_0x0001083a0964(uStack_40);
  }
  else {
    lVar1 = param_2[2];
    if (lVar3 == lVar1) {
      lVar3 = *(long *)(lVar1 + 8) - lVar3;
      FUN_1084107a4(lVar1,lVar3);
      param_2[1] = lVar1;
      param_2[2] = lVar1;
      lVar3 = lVar1 + lVar3;
      *(long *)(lVar1 + 8) = lVar3;
      *(long *)(lVar1 + 0x10) = lVar3;
    }
    FUN_1083a075c(auStack_48);
    func_0x0001083a0d88(*(undefined8 *)(*param_2 + 0x20));
    plStack_50 = plVar2;
    FUN_1083a06f4(&uStack_38,auStack_48,&plStack_50);
    *param_1 = uStack_38;
    uStack_38 = 0;
    func_0x0001083a0d78();
    param_2[1] = 0;
    func_0x0001083a02d0(param_2);
  }
  return;
}



/* Entry: 1083a06f4; end: 1083a075b;  */

void FUN_1083a06f4(void)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x0001083a0e6c();
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  lVar2 = *unaff_x20;
  *unaff_x20 = 0;
  uVar3 = *unaff_x19;
  *puVar1 = &PTR_FUN_110a40520;
  puVar1[1] = lVar2;
  puVar1[2] = *(undefined8 *)(lVar2 + 0x10);
  puVar1[3] = uVar3;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *extraout_x8 = puVar1;
  func_0x0001083a0d78();
  return;
}



/* Entry: 1083a075c; end: 1083a079f;  */

void FUN_1083a075c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  func_0x0001083a0e04();
  uVar2 = *param_2;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a404e0;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083a07a0; end: 1083a08b3;  */

void FUN_1083a07a0(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long lVar5;
  undefined **ppuStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined1 auStack_1038 [4096];
  long lStack_38;
  undefined ***pppuVar4;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar3 = param_1;
  func_0x0001083a0d28();
  lStack_38 = extraout_x8_00;
  func_0x0001083a0e34();
  if ((int)plVar3 == 0) {
    ppuStack_1058 = &PTR_FUN_110a403f8;
    uStack_1050 = 0;
    uStack_1048 = 0;
    uStack_1040 = 0;
    do {
      func_0x0001083a0d90();
      plVar3 = param_1;
      (*extraout_x8_01)(param_1,auStack_1038,0x1000);
      pppuVar4 = &ppuStack_1058;
      FUN_1083a034c(pppuVar4,auStack_1038,plVar3);
      iVar1 = (int)pppuVar4;
      func_0x0001083a0e0c(*(undefined8 *)(*param_1 + 0x20));
    } while (iVar1 == 0);
    FUN_1083a05b4(extraout_x8,&ppuStack_1058);
    FUN_1083a02a4();
    func_0x0001083a0d00(lStack_38);
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    func_0x0001083a0d88(*(undefined8 *)(*param_1 + 0x58));
    func_0x0001083a0d00(lStack_38);
    if ((bool)in_ZR) {
      plVar2 = param_1;
      FUN_1083a08b4();
      if ((int)plVar2 == 0) {
        FUN_1083464d4(&lStack_38,plVar3);
        lVar5 = lStack_38;
        (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lStack_38 + 0x18),plVar3);
        if (param_1 == plVar3) {
          lStack_38 = 0;
        }
        else {
          lVar5 = 0;
        }
        *extraout_x8 = lVar5;
        func_0x0001078bddf8(&lStack_38);
      }
      else {
        *extraout_x8 = 0;
      }
      return;
    }
  }
  ___stack_chk_fail();
  iVar1 = (int)&ppuStack_1058;
  FUN_1083a02a4();
  func_0x0001083a0d68();
  func_0x0001083a0e6c();
  func_0x0001083a0e34();
  if (iVar1 != 0) {
    func_0x0001083a0e0c(*(undefined8 *)(*param_1 + 0x30));
    func_0x0001083a0d88(*(undefined8 *)(*param_1 + 0x58));
    if (iVar1 != 0) {
      func_0x0001083a0d88(*(undefined8 *)(*param_1 + 0x38));
    }
  }
  return;
}



/* Entry: 1083a08b4; end: 1083a091b;  */

void FUN_1083a08b4(int param_1)

{
  long *unaff_x20;
  
  func_0x0001083a0e6c();
  func_0x0001083a0e34();
  if (param_1 != 0) {
    func_0x0001083a0e0c(*(undefined8 *)(*unaff_x20 + 0x30));
    func_0x0001083a0d88(*(undefined8 *)(*unaff_x20 + 0x58));
    if (param_1 != 0) {
      func_0x0001083a0d88(*(undefined8 *)(*unaff_x20 + 0x38));
    }
  }
  return;
}



/* Entry: 1083a091c; end: 1083a092f;  */

undefined8 FUN_1083a091c(void)

{
  return 1;
}



/* Entry: 1083a0930; end: 1083a0943;  */

void FUN_1083a0930(void)

{
  func_0x00010814375c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a0944; end: 1083a096f;  */

void FUN_1083a0944(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 8);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = piVar3;
  return;
}



/* Entry: 1083a0970; end: 1083a09b7;  */

long * FUN_1083a0970(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
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
      func_0x0001083a0d48();
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 1083a09b8; end: 1083a09bb;  */

undefined8 * FUN_1083a09b8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a404e0;
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  return param_1;
}



/* Entry: 1083a09bc; end: 1083a09cf;  */

void FUN_1083a09bc(void)

{
  FUN_1083a09d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a09d0; end: 1083a0a0f;  */

undefined8 * FUN_1083a09d0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a404e0;
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  return param_1;
}



/* Entry: 1083a0a10; end: 1083a0a13;  */

undefined8 * FUN_1083a0a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40520;
  FUN_1083a0970(param_1 + 1);
  return param_1;
}



/* Entry: 1083a0a14; end: 1083a0a27;  */

void FUN_1083a0a14(void)

{
  func_0x0001083a0cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a0a28; end: 1083a0b53;  */

ulong FUN_1083a0a28(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18) - *(long *)(param_1 + 0x20);
  uVar1 = uVar4;
  if (*(long *)(param_1 + 0x20) + param_3 <= *(ulong *)(param_1 + 0x18)) {
    uVar4 = param_3;
    uVar1 = param_3;
  }
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = *(long *)(lVar3 + 8) - (*(long *)(param_1 + 0x28) + lVar3 + 0x18);
    if (param_2 != 0) {
      uVar2 = uVar5;
      if (uVar4 <= uVar5) {
        uVar2 = uVar4;
      }
      func_0x0001083a0e20(param_2,lVar3 + 0x18 + *(long *)(param_1 + 0x28));
      param_2 = param_2 + uVar2;
    }
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) break;
    lVar3 = **(long **)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar4 = uVar4 - uVar5;
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar1;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar4;
  return uVar1;
}



/* Entry: 1083a0b54; end: 1083a0b77;  */

bool FUN_1083a0b54(long param_1)

{
  return *(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18);
}



/* Entry: 1083a0b78; end: 1083a0c07;  */

void FUN_1083a0b78(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  
  uVar2 = param_1[4];
  if (param_2 < uVar2) {
    if ((ulong)param_1[5] < uVar2 - param_2) {
      plVar1 = param_1;
      func_0x0001083a0e0c(*(undefined8 *)(*param_1 + 0x28));
      if ((int)plVar1 != 0) {
        func_0x0001083a0d90();
        (*extraout_x8)(param_1,0,param_2);
      }
    }
    else {
      param_1[4] = param_2;
      param_1[5] = param_1[5] - (uVar2 - param_2);
    }
  }
  else {
    func_0x0001083a0d90();
    (*extraout_x8_00)(param_1,0,param_2 - uVar2);
  }
  return;
}



/* Entry: 1083a0c08; end: 1083a0c3b;  */

void FUN_1083a0c08(long *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001083a0db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,param_1[4] + param_2);
  return;
}



/* Entry: 1083a0c3c; end: 1083a0cff;  */

undefined8 * FUN_1083a0c3c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *puVar4 = &PTR_FUN_110a40520;
  puVar4[1] = lVar5;
  puVar4[2] = *(undefined8 *)(lVar5 + 0x10);
  puVar4[3] = uVar6;
  puVar4[4] = 0;
  puVar4[5] = 0;
  func_0x0001083a0d78();
  return puVar4;
}



/* Entry: 1083a0d00; end: 1083a0e77;  */

void FUN_1083a0d00(void)

{
  return;
}



/* Entry: 1083a0e78; end: 1083a0fb3;  */

undefined8 *
FUN_1083a0e78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a405c8;
  if (param_5 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*param_4 + 0x30))((long *)*param_4,(long)param_1 + 0xc);
  }
  else {
    uVar4 = param_5[1];
    uVar3 = *param_5;
    uVar6 = param_5[3];
    uVar5 = param_5[2];
    uVar8 = param_5[5];
    uVar7 = param_5[4];
    uVar9 = param_5[6];
    *(undefined8 *)((long)param_1 + 0x44) = param_5[7];
    *(undefined8 *)((long)param_1 + 0x3c) = uVar9;
    *(undefined8 *)((long)param_1 + 0x34) = uVar8;
    *(undefined8 *)((long)param_1 + 0x2c) = uVar7;
    *(undefined8 *)((long)param_1 + 0x24) = uVar6;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
    *(undefined8 *)((long)param_1 + 0x14) = uVar4;
    *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  }
  uVar1 = *(ushort *)(*param_4 + 0x3e);
  lVar2 = *param_4 + 8;
  FUN_108397094(lVar2);
  FUN_108354038((long)param_1 + 0x4c,uVar1 >> 4 & 1,lVar2);
  FUN_1083a2584(param_1 + 0xd,param_3);
  param_1[0x21] = param_2;
  *(undefined4 *)(param_1 + 0x22) = 1;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  lVar2 = *param_4;
  *param_4 = 0;
  param_1[0x29] = lVar2;
  param_1[0x2a] = 0;
  FUN_108186568(param_1 + 0x2b,0x400);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  uVar3 = *param_6;
  *param_6 = 0;
  param_1[0x31] = uVar3;
  param_1[0x32] = 0x1a0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return param_1;
}



/* Entry: 1083a0fb4; end: 1083a10c7;  */

void FUN_1083a0fb4(long param_1)

{
  func_0x0001081efc58(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x150) = 0;
  return;
}



/* Entry: 1083a10c8; end: 1083a111f;  */

void FUN_1083a10c8(void)

{
  func_0x0001083a1884();
  FUN_1083a1120();
  func_0x0001083a18a4();
  func_0x0001083a18f8();
  return;
}



/* Entry: 1083a1120; end: 1083a11ab;  */

void FUN_1083a1120(undefined8 param_1,ushort *param_2,long param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  
  for (param_3 = param_3 << 1; param_3 != 0; param_3 = param_3 + -2) {
    uVar1 = param_1;
    FUN_1083a127c(param_1,(ulong)*param_2 << 2);
    if (param_4 == 1) {
      FUN_1083a13bc(param_1,uVar1);
    }
    *param_5 = uVar1;
    param_2 = param_2 + 1;
    param_5 = param_5 + 1;
  }
  func_0x0001083a18f8();
  return;
}



/* Entry: 1083a11ac; end: 1083a1203;  */

void FUN_1083a11ac(void)

{
  func_0x0001083a1884();
  FUN_1083a1120();
  func_0x0001083a18a4();
  func_0x0001083a18f8();
  return;
}



/* Entry: 1083a1204; end: 1083a127b;  */

undefined1  [16]
FUN_1083a1204(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x22;
  long lVar3;
  undefined1 auVar4 [16];
  
  func_0x0001083a1884();
  puVar1 = param_4;
  for (lVar3 = param_3 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    uVar2 = unaff_x22;
    FUN_1083a127c();
    func_0x0001083a12ac();
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  }
  func_0x0001083a18a4();
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 1083a127c; end: 1083a133f;  */

undefined8 FUN_1083a127c(ulong param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_1083a1488(param_1,0,param_2);
  return *(undefined8 *)(*(long *)(param_1 + 0x130) + (uVar1 >> 0x14 & 0xfffff) * 8);
}



/* Entry: 1083a1340; end: 1083a13bb;  */

void FUN_1083a1340(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083a18cc();
  FUN_1083a0fb4();
  for (param_3 = param_3 << 4; param_3 != 0; param_3 = param_3 + -0x10) {
    lVar1 = unaff_x20;
    FUN_1083a127c();
    FUN_1083a13bc();
    func_0x000108376b14(unaff_x19,*(long *)(lVar1 + 0x10) + 8);
    unaff_x19 = unaff_x19 + 0x10;
  }
  func_0x0001083a18a4();
  return;
}



/* Entry: 1083a13bc; end: 1083a13ff;  */

undefined1 FUN_1083a13bc(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001083a18ac();
  FUN_108353c78();
  if (param_1 != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x10) + 8;
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x18) == '\0') {
      lVar1 = 0;
    }
    FUN_10837789c(lVar1);
    func_0x0001083a1894();
  }
  return *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
}



/* Entry: 1083a1400; end: 1083a1487;  */

void FUN_1083a1400(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001083a18cc();
  FUN_1083a0fb4();
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar1 = unaff_x20;
    FUN_1083a127c();
    func_0x0001083a12e4();
    if (*(char *)(*(long *)(lVar1 + 0x18) + 0x10) == '\x01') {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 8);
    }
    else {
      uVar2 = 0;
    }
    *unaff_x19 = uVar2;
    unaff_x19 = unaff_x19 + 1;
  }
  func_0x0001083a18a4();
  return;
}



/* Entry: 1083a1488; end: 1083a1557;  */

undefined1  [16] FUN_1083a1488(ulong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [52];
  undefined4 uStack_34;
  
  puVar1 = param_1 + 0x24;
  uStack_34 = param_3;
  func_0x000108315140(puVar1,&uStack_34);
  if (puVar1 == (ulong *)0x0) {
    FUN_1083959dc(auStack_68,param_1[0x29],uStack_34,param_1 + 0x2b);
    puVar3 = param_1 + 0x2b;
    FUN_1083a1558(puVar3,auStack_68);
    param_1[0x2a] = param_1[0x2a] + 0x30;
    puVar1 = param_1;
    func_0x0001083a1068(param_1,puVar3);
  }
  else {
    uVar2 = *puVar1;
    if ((3 << (ulong)((uint)param_2 & 0x1f) & (uint)(uVar2 >> 0x2c) & 0xfff) != 0)
    goto LAB_1083a1540;
    puVar3 = *(ulong **)(param_1[0x26] + (uVar2 >> 0x14 & 0xfffff) * 8);
  }
  FUN_108353ed0(puVar1,param_2,puVar3,param_1);
  uVar2 = *puVar1;
LAB_1083a1540:
  auVar4._8_8_ = puVar1[1];
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1083a1558; end: 1083a157b;  */

void FUN_1083a1558(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1083a16c0(param_1,&uStack_18);
  return;
}



/* Entry: 1083a157c; end: 1083a157f;  */

long FUN_1083a157c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10840f740(param_1 + 0x158);
  FUN_1083153b0(param_1 + 0x148);
  func_0x0001083a1674(param_1 + 0x130);
  FUN_1083150d0(param_1 + 0x128);
  FUN_108410074(param_1 + 0x110);
  func_0x0001083a261c(param_1 + 0x68);
  return param_1;
}



/* Entry: 1083a1580; end: 1083a1593;  */

void FUN_1083a1580(void)

{
  FUN_1083a1610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a1594; end: 1083a15a3;  */

undefined8 FUN_1083a1594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1083a15a4; end: 1083a15e7;  */

void FUN_1083a15a4(long *param_1,long param_2)

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
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1083145d8(&uStack_18);
  return;
}


