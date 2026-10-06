/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10731ef30; end: 10731ef9b;  */

void FUN_10731ef30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xa8;
    FUN_10731f070();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10731ef9c; end: 10731efb7;  */

void FUN_10731ef9c(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10731efb8; end: 10731efe7;  */

long FUN_10731efb8(long param_1,long param_2)

{
  func_0x00010726cc04(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}



/* Entry: 10731efe8; end: 10731f06f;  */

long FUN_10731efe8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  func_0x000107268350(lVar1 + 0x20,param_2 + 0x20);
  func_0x00010028af84(param_1 + 0x60,param_2 + 0x60);
  func_0x00010028af84(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



/* Entry: 10731f070; end: 10731f17f;  */

void FUN_10731f070(long param_1)

{
  func_0x0001001148fc(param_1 + 0x80);
  func_0x0001001148fc(param_1 + 0x60);
  func_0x000104c3323c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10731f180; end: 10731f193;  */

void FUN_10731f180(void)

{
  func_0x00010731f154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731f194; end: 10731f1d3;  */

undefined8 FUN_10731f194(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm(0x60);
  FUN_10731f95c();
  return uVar1;
}



/* Entry: 10731f1d4; end: 10731f1ff;  */

undefined8 * FUN_10731f1d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109a0da8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010731fa20();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  FUN_10731ec50(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 10731f200; end: 10731f8c7;  */

long ** FUN_10731f200(long param_1,undefined8 *****param_2)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  long **pplVar12;
  byte bVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *extraout_x10;
  undefined4 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  long *plStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f1;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  byte bStack_4d8;
  undefined1 auStack_4d0 [24];
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  ulong uStack_4b0;
  byte bStack_4a1;
  undefined4 uStack_4a0;
  undefined **ppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_470;
  undefined1 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  char cStack_418;
  undefined1 auStack_408 [104];
  byte bStack_3a0;
  undefined8 ****ppppuStack_398;
  ulong uStack_390;
  byte bStack_381;
  undefined1 auStack_338 [24];
  byte bStack_320;
  undefined1 auStack_318 [24];
  byte bStack_300;
  char cStack_2f8;
  long *plStack_290;
  undefined8 uStack_288;
  undefined1 auStack_188 [8];
  undefined **ppuStack_180;
  undefined4 uStack_120;
  undefined1 auStack_118 [64];
  byte bStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010726fc00(&plStack_290,param_1 + 8);
  if (plStack_290 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_520 = uStack_288;
    plStack_528 = plStack_290;
    in_ZR = *plStack_290 == -1;
    if (!(bool)in_ZR) {
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      ppppuStack_398 = (undefined8 *****)0x0;
      uStack_390 = 0;
      func_0x0001072508cc(&ppppuStack_398);
      goto LAB_10731f294;
    }
    func_0x00010726fc88();
  }
  func_0x00010731fa10();
  plStack_528 = (long *)0x0;
  uStack_520 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
LAB_10731f294:
  func_0x00010731fa10();
  func_0x00010726fc00(&plStack_290,param_1 + 8);
  if (plStack_290 == (long *)0x0) {
    func_0x00010731fa10();
  }
  else {
    lVar14 = *plStack_290;
    func_0x00010731fa10();
    in_ZR = lVar14 == -1;
    if (!(bool)in_ZR) {
      lVar16 = *(long *)(param_1 + 0x20);
      uStack_4b8 = 3;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_480 = 0;
      ppuStack_498 = &PTR_DAT_110996720;
      uStack_490 = 0;
      uStack_478 = 3;
      uStack_470 = 0;
      uStack_46c = 1;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_468 = 0;
      FUN_10743cc34(&ppppuStack_398,&uStack_4b8,7);
      FUN_10743d7bc(&plStack_290,&ppppuStack_398);
      func_0x000107288cd8(&ppppuStack_398);
      func_0x000107262330(&uStack_4b8);
      puStack_518 = &UNK_10e52b660;
      lStack_510 = 0;
      uStack_508 = 0;
      uStack_500 = 0;
      lVar14 = *(long *)(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x30);
      while( true ) {
        in_ZR = lVar14 == lVar1;
        if ((bool)in_ZR) break;
        FUN_10731efe8(&uStack_4b8,lVar14);
        switch(uStack_4a0) {
        case 0:
          if ((int)ppuStack_498 == 2) {
            func_0x000104c2d9dc(&ppuStack_498);
            func_0x00010724ef84(&lStack_4f0);
          }
          else {
            lStack_4f0 = 0;
            lStack_4e8 = 0;
            uStack_4e0 = 0;
          }
          func_0x00010731f9f0();
          if (cStack_418 == '\x01') {
            func_0x00010731fa7c();
            func_0x00010731fa30();
            func_0x00010785d838();
          }
          else {
            func_0x00010731fa7c();
            func_0x00010731fa30();
            func_0x00010785d72c();
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
          func_0x0001072625b4(auStack_d0,auStack_4d0);
          func_0x000107277488(auStack_188,auStack_d0);
          func_0x00010731fa04();
          func_0x00010731fa54();
          func_0x000104c2f714(auStack_d0);
          func_0x00010731fa6c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_4f0);
          break;
        case 1:
          cVar5 = SBORROW4((int)ppuStack_498,5);
          cVar6 = (int)ppuStack_498 + -5 < 0;
          if ((int)ppuStack_498 == 5) {
            func_0x000104c2d934();
          }
          else {
            cVar5 = SBORROW4((int)ppuStack_498,4);
            cVar6 = (int)ppuStack_498 + -4 < 0;
            if ((int)ppuStack_498 == 4) {
              func_0x000104c2d96c();
            }
          }
          func_0x00010731f9f0();
          uVar10 = extraout_x11_00;
          puVar3 = extraout_x10_00;
          if (cVar6 == cVar5) {
            uVar10 = extraout_x8_00;
            puVar3 = &uStack_4b8;
          }
          lVar15 = *(long *)(lVar16 + 8);
          if (cStack_418 == '\x01') {
            func_0x00010785d8cc();
          }
          else {
            func_0x00010785d888(lVar15,puVar3,uVar10);
          }
          ppuVar17 = (undefined **)(double)lVar15;
          goto code_r0x00010731f5a0;
        case 2:
          ppuVar17 = (undefined **)0x0;
          cVar5 = SBORROW4((int)ppuStack_498,3);
          cVar6 = (int)ppuStack_498 + -3 < 0;
          if ((int)ppuStack_498 == 3) {
            pppuVar9 = &ppuStack_498;
            func_0x000104c2d9a4();
            ppuVar17 = *pppuVar9;
          }
          func_0x00010731f9f0();
          uVar10 = extraout_x11;
          puVar3 = extraout_x10;
          if (cVar6 == cVar5) {
            uVar10 = extraout_x8;
            puVar3 = &uStack_4b8;
          }
          if (cStack_418 == '\x01') {
            func_0x00010785d6d4();
          }
          else {
            func_0x00010785d67c(*(undefined8 *)(lVar16 + 8),puVar3,uVar10);
          }
code_r0x00010731f5a0:
          uStack_120 = 2;
          ppuStack_180 = ppuVar17;
code_r0x00010731f5ac:
          func_0x00010731fa04();
          func_0x00010731fa54();
          break;
        case 3:
          if ((int)ppuStack_498 == 6) {
            pppuVar9 = &ppuStack_498;
            func_0x000104c2d8fc();
            bVar13 = *(byte *)pppuVar9;
          }
          else {
            bVar13 = 0;
          }
          uVar11 = uStack_4b0;
          puVar3 = (undefined4 *)CONCAT44(uStack_4b4,uStack_4b8);
          if (-1 < (char)bStack_4a1) {
            uVar11 = (ulong)bStack_4a1;
            puVar3 = &uStack_4b8;
          }
          uVar10 = *(undefined8 *)(lVar16 + 8);
          if (cStack_418 == '\x01') {
            func_0x00010785d5a8();
            uVar7 = (undefined1)uVar10;
          }
          else {
            func_0x00010785d4f8(uVar10,puVar3,uVar11,bVar13 & 1);
            uVar7 = (undefined1)uVar10;
          }
          ppuStack_180 = (undefined **)CONCAT71(ppuStack_180._1_7_,uVar7);
          uStack_120 = 1;
          goto code_r0x00010731f5ac;
        case 4:
          FUN_10731efe8(&ppppuStack_398,&uStack_4b8);
          if (((bStack_320 & 1) == 0) || ((bStack_300 & 1) == 0)) {
            func_0x00010731fa48();
          }
          else {
            puVar8 = auStack_338;
            func_0x0001005d480c(puVar8,&UNK_10f40a25c,0);
            if (puVar8 == (undefined1 *)0xffffffffffffffff) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_4d0,&UNK_10f40a26f,auStack_338);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_4d0,auStack_338);
            }
            uVar11 = 0;
            func_0x00010bcedb14();
            func_0x00010787792c();
            if ((uVar11 & 1) == 0) {
              func_0x00010731fa48();
            }
            else {
              uVar11 = uStack_390;
              pppppuVar2 = (undefined8 *****)ppppuStack_398;
              if (-1 < (char)bStack_381) {
                uVar11 = (ulong)bStack_381;
                pppppuVar2 = &ppppuStack_398;
              }
              if (cStack_2f8 == '\x01') {
                func_0x00010785da30(&lStack_4f0);
              }
              else {
                func_0x00010785d9f8(&lStack_4f0,*(undefined8 *)(lVar16 + 8),pppppuVar2,uVar11);
              }
              if ((bStack_4d8 & 1) == 0) {
                func_0x00010731fa48();
              }
              else {
                func_0x000107878130(auStack_118,auStack_d0,lStack_4f0,lStack_4e8 - lStack_4f0,
                                    auStack_318);
                if ((bStack_d8 & 1) == 0) {
                  func_0x00010731fa48();
                }
                else {
                  func_0x0001077765a4(auStack_188,auStack_118,&uStack_4f1);
                  func_0x00010731fa04();
                  func_0x00010731fa54();
                }
                func_0x000107267ed0(auStack_118);
              }
              func_0x0001002a2294(&lStack_4f0);
            }
            func_0x00010bcedb7c(auStack_d0);
            func_0x00010731fa6c();
          }
          FUN_10731f070(&ppppuStack_398);
          if ((bStack_3a0 & 1) == 0) {
            func_0x00010731fa64();
            func_0x0001077765a4(auStack_188,&ppuStack_498,auStack_d0);
            goto code_r0x00010731f5ac;
          }
          break;
        default:
          func_0x00010731fa48();
        }
        FUN_10731f070(&uStack_4b8);
        if ((bStack_3a0 & 1) != 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_188,&UNK_10f40a283,lVar14);
          func_0x0001072625b4(&ppppuStack_398,auStack_188);
          if ((bStack_3a0 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10731f7c8);
            (*pcVar4)();
          }
          ppuVar17 = &puStack_518;
          uVar11 = 0;
          func_0x00010726c9e8(ppuVar17);
          if ((uVar11 & 1) == 0) {
            func_0x0001072955a4(lStack_510 + (long)ppuVar17 * 0xa8 + 0x40,auStack_408);
          }
          else {
            lVar15 = lStack_510 + (long)ppuVar17 * 0xa8;
            func_0x000104c318bc(lVar15,&ppppuStack_398);
            func_0x0001072786d8(lVar15 + 0x40,auStack_408);
          }
          func_0x000104c2f714(&ppppuStack_398);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
        }
        func_0x00010731fa64();
        lVar14 = lVar14 + 0xa8;
      }
      func_0x0001078697d4(&ppppuStack_398,&puStack_518);
      param_2 = &ppppuStack_398;
      FUN_10731f9c8(param_1 + 0x40);
      func_0x00010726b264(&ppppuStack_398);
      func_0x00010726ae88(&puStack_518);
      FUN_10743d7e4(&plStack_290);
    }
  }
  pplVar12 = &plStack_528;
  func_0x000107270b00();
  func_0x00010731fa88(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107267ed0(auStack_118);
    func_0x0001002a2294(&lStack_4f0);
    func_0x00010bcedb7c(auStack_d0);
    func_0x00010731fa6c();
    FUN_10731f070(&ppppuStack_398);
    FUN_10731f070(&uStack_4b8);
    func_0x00010726ae88(&puStack_518);
    FUN_10743d7e4(&plStack_290);
    pplVar12 = &plStack_528;
    func_0x000107270b00(pplVar12);
    func_0x00010731fa5c();
    func_0x0001004a5364(param_2,&PTR_DAT_1109a0e08);
    pplVar12 = pplVar12 + 1;
    if ((int)param_2 == 0) {
      pplVar12 = (long **)0x0;
    }
    return pplVar12;
  }
  return pplVar12;
}



/* Entry: 10731f8c8; end: 10731f8ff;  */

long FUN_10731f8c8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a0e08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10731f900; end: 10731f90b;  */

undefined ** FUN_10731f900(void)

{
  return &PTR_DAT_1109a0e08;
}



/* Entry: 10731f90c; end: 10731f95b;  */

long FUN_10731f90c(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010731fa9c();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10731f95c; end: 10731f9c7;  */

undefined8 * FUN_10731f95c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_1109a0da8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010731fa20();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  FUN_10731ec50(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 10731f9c8; end: 10731f9e7;  */

void FUN_10731f9c8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010731f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10731f9e8; end: 10731faaf;  */

void FUN_10731f9e8(void)

{
  return;
}



/* Entry: 10731fab0; end: 1073202f7;  */

undefined8 **
FUN_10731fab0(undefined4 param_1,undefined8 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,uint param_15,undefined4 param_16,
             ulong param_17)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  code *extraout_x8;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  code *extraout_x8_00;
  undefined8 *puVar9;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x28;
  undefined8 **ppuVar16;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 **ppuStack_70;
  
  uVar13 = (ulong)param_15;
  param_2[2] = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  param_2[8] = (undefined8 *)0x0;
  param_2[7] = (undefined8 *)0x0;
  ppuVar5 = param_2 + 3;
  param_2[4] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  param_2[6] = (undefined8 *)0x0;
  param_2[5] = (undefined8 *)0x0;
  *param_2 = &PTR_FUN_1109a0e28;
  param_2[9] = (undefined8 *)0x0;
  param_2[10] = param_3;
  puVar15 = (undefined8 *)*param_4;
  param_2[0xc] = (undefined8 *)param_4[1];
  param_2[0xb] = puVar15;
  *param_4 = 0;
  param_4[1] = 0;
  puVar15 = (undefined8 *)*param_5;
  param_2[0xe] = (undefined8 *)param_5[1];
  param_2[0xd] = puVar15;
  *param_5 = 0;
  param_5[1] = 0;
  puVar15 = (undefined8 *)*param_6;
  param_2[0x10] = (undefined8 *)param_6[1];
  param_2[0xf] = puVar15;
  *param_6 = 0;
  param_6[1] = 0;
  puVar15 = (undefined8 *)*param_7;
  param_2[0x12] = (undefined8 *)param_7[1];
  param_2[0x11] = puVar15;
  *param_7 = 0;
  param_7[1] = 0;
  puVar15 = (undefined8 *)*param_8;
  param_2[0x14] = (undefined8 *)param_8[1];
  param_2[0x13] = puVar15;
  *param_8 = 0;
  param_8[1] = 0;
  puVar15 = (undefined8 *)*param_9;
  param_2[0x16] = (undefined8 *)param_9[1];
  param_2[0x15] = puVar15;
  *param_9 = 0;
  param_9[1] = 0;
  puVar15 = (undefined8 *)*param_10;
  param_2[0x18] = (undefined8 *)param_10[1];
  param_2[0x17] = puVar15;
  *param_10 = 0;
  param_10[1] = 0;
  puVar15 = (undefined8 *)*param_11;
  param_2[0x1a] = (undefined8 *)param_11[1];
  param_2[0x19] = puVar15;
  *param_11 = 0;
  param_11[1] = 0;
  puVar15 = (undefined8 *)*param_12;
  param_2[0x1c] = (undefined8 *)param_12[1];
  param_2[0x1b] = puVar15;
  *param_12 = 0;
  param_12[1] = 0;
  puVar15 = (undefined8 *)*param_13;
  param_2[0x1e] = (undefined8 *)param_13[1];
  param_2[0x1d] = puVar15;
  *param_13 = 0;
  param_13[1] = 0;
  puVar15 = (undefined8 *)*param_14;
  param_2[0x20] = (undefined8 *)param_14[1];
  param_2[0x1f] = puVar15;
  *param_14 = 0;
  param_14[1] = 0;
  *(undefined4 *)(param_2 + 0x21) = param_1;
  param_2[0x22] = (undefined8 *)&UNK_10e52b660;
  param_2[0x23] = (undefined8 *)0x0;
  param_2[0x24] = (undefined8 *)0x0;
  param_2[0x25] = (undefined8 *)0x0;
  puVar15 = param_2[2];
  ppuVar14 = &PTR_FUN_1109a0e90;
  if (puVar15 < *ppuVar5) {
    *puVar15 = &PTR_FUN_1109a0e90;
    puVar15[1] = param_2;
    puVar15[2] = uVar13;
    puVar15[3] = puVar15;
    ppuVar14 = (undefined **)(puVar15 + 4);
    param_2[2] = ppuVar14;
    ppuVar5 = param_2;
  }
  else {
    puVar12 = param_2[1];
    puVar6 = (undefined8 *)((long)puVar15 - (long)puVar12 >> 5);
    puVar9 = (undefined8 *)((long)puVar6 + 1);
    if ((ulong)puVar9 >> 0x3b != 0) {
      FUN_107332534();
      goto LAB_1073201ec;
    }
    uVar11 = (long)*ppuVar5 - (long)puVar12;
    unaff_x28 = (undefined8 *)((long)uVar11 >> 4);
    if (unaff_x28 <= puVar9) {
      unaff_x28 = puVar9;
    }
    if (0x7fffffffffffffdf < uVar11) {
      unaff_x28 = (undefined8 *)0x7ffffffffffffff;
    }
    ppuStack_70 = ppuVar5;
    if (unaff_x28 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)unaff_x28 >> 0x3b != 0) {
        func_0x000104bd35f4();
        goto LAB_1073201ec;
      }
      puVar9 = (undefined8 *)((long)unaff_x28 << 5);
      __Znwm();
    }
    puVar8 = (undefined8 *)((long)puVar9 + ((long)puVar15 - (long)puVar12));
    lVar3 = (long)unaff_x28 * 4;
    *puVar8 = &PTR_FUN_1109a0e90;
    puVar8[1] = param_2;
    puVar8[2] = uVar13;
    puVar8[3] = puVar8;
    puStack_90 = puVar9;
    func_0x000107347f7c();
    for (; unaff_x28 != puVar15; unaff_x28 = unaff_x28 + 4) {
      puVar8 = (undefined8 *)unaff_x28[3];
      if (puVar8 == (undefined8 *)0x0) {
        *(undefined8 *)(uVar13 + 0x18) = 0;
      }
      else if (unaff_x28 == puVar8) {
        *(ulong *)(uVar13 + 0x18) = uVar13;
        func_0x000107345938(unaff_x28[3]);
        (*extraout_x8)();
      }
      else {
        *(undefined8 **)(uVar13 + 0x18) = puVar8;
        unaff_x28[3] = 0;
      }
      uVar13 = uVar13 + 0x20;
    }
    for (; puVar12 != puVar15; puVar12 = puVar12 + 4) {
      func_0x000107332540(puVar12);
    }
    puStack_90 = param_2[1];
    param_2[1] = puVar6;
    param_2[2] = &PTR_FUN_1109a0e90;
    puStack_78 = param_2[3];
    param_2[3] = puVar9 + lVar3;
    ppuVar5 = &puStack_90;
    puStack_88 = puStack_90;
    puStack_80 = puStack_90;
    func_0x000107332574();
  }
  ppuVar7 = param_2 + 6;
  param_2[2] = ppuVar14;
  puVar15 = param_2[5];
  ppuVar14 = &PTR_FUN_1109a1720;
  if (puVar15 < *ppuVar7) {
    *puVar15 = &PTR_FUN_1109a1720;
    puVar15[3] = puVar15;
    puVar9 = puVar15 + 4;
    param_2[5] = puVar9;
  }
  else {
    puVar12 = param_2[4];
    puVar9 = (undefined8 *)((long)puVar15 - (long)puVar12);
    uVar13 = ((long)puVar9 >> 5) + 1;
    if (uVar13 >> 0x3b != 0) {
      FUN_10733ea78();
LAB_1073201ec:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1073201f0);
      (*pcVar4)();
    }
    uVar10 = (long)*ppuVar7 - (long)puVar12;
    uVar11 = (long)uVar10 >> 4;
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    if (0x7fffffffffffffdf < uVar10) {
      uVar11 = 0x7ffffffffffffff;
    }
    ppuStack_70 = ppuVar7;
    if (uVar11 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if (uVar11 >> 0x3b != 0) {
        func_0x000104bd35f4();
        goto LAB_1073201ec;
      }
      puVar6 = (undefined8 *)(uVar11 << 5);
      __Znwm();
    }
    puVar8 = (undefined8 *)((long)puVar6 + (long)puVar9);
    *puVar8 = &PTR_FUN_1109a1720;
    puVar8[3] = puVar8;
    puStack_90 = puVar6;
    func_0x000107347f7c();
    for (; unaff_x28 != puVar15; unaff_x28 = unaff_x28 + 4) {
      puVar8 = (undefined8 *)unaff_x28[3];
      if (puVar8 == (undefined8 *)0x0) {
        ppuVar14[3] = (undefined *)0x0;
      }
      else if (unaff_x28 == puVar8) {
        ppuVar14[3] = (undefined *)ppuVar14;
        func_0x000107345938(unaff_x28[3]);
        (*extraout_x8_00)();
      }
      else {
        ppuVar14[3] = (undefined *)puVar8;
        unaff_x28[3] = 0;
      }
      ppuVar14 = ppuVar14 + 4;
    }
    for (; puVar12 != puVar15; puVar12 = puVar12 + 4) {
      func_0x00010733ea84(puVar12);
    }
    puStack_90 = param_2[4];
    param_2[4] = (undefined8 *)((long)puVar9 >> 5);
    param_2[5] = puVar9;
    puStack_78 = param_2[6];
    param_2[6] = puVar6 + uVar11 * 4;
    ppuVar5 = &puStack_90;
    puStack_88 = puStack_90;
    puStack_80 = puStack_90;
    func_0x00010733eab8();
  }
  param_2[5] = puVar9;
  puVar15 = param_2[8];
  if (puVar15 < param_2[9]) {
    *puVar15 = &PTR_FUN_1109a2a30;
    puVar15[1] = param_2;
    puVar15[3] = puVar15;
    puVar15 = puVar15 + 4;
    param_2[8] = puVar15;
  }
  else {
    func_0x0001073473dc();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    *puStack_80 = &PTR_FUN_1109a2a30;
    puStack_80[1] = param_2;
    puStack_80[3] = puStack_80;
    puStack_80 = puStack_80 + 4;
    func_0x00010734515c();
    puVar15 = param_2[8];
    func_0x000107345e58();
  }
  param_2[8] = puVar15;
  func_0x000107347180();
  ppuVar7 = ppuVar5 + 1;
  *ppuVar7 = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = &PTR_FUN_1109a3378;
  ppuVar16 = ppuVar5 + 3;
  *ppuVar16 = (undefined8 *)&UNK_10e52b660;
  ppuVar5[5] = (undefined8 *)0x0;
  ppuVar5[6] = (undefined8 *)0x0;
  ppuVar5[4] = (undefined8 *)0x0;
  ppuStack_b8 = ppuVar16;
  ppuStack_b0 = ppuVar5;
  ppuStack_a0 = ppuVar16;
  ppuStack_98 = ppuVar5;
  do {
    func_0x0001073473ac();
  } while (extraout_w9 != 0);
  ppuStack_a8 = param_2;
  if (puVar15 < param_2[9]) {
    func_0x000107346d3c();
    FUN_10733eeb8();
    func_0x000107347ea8();
  }
  else {
    func_0x0001073467e0();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    puVar15 = puStack_80;
    func_0x000107346d3c();
    FUN_10733eeb8();
    puStack_80 = puVar15 + 4;
    func_0x00010734515c();
    func_0x0001073457f4();
  }
  func_0x000107345d14();
  ppuStack_b8 = ppuVar16;
  ppuStack_b0 = ppuVar5;
  do {
    func_0x0001073473ac();
  } while (extraout_w9_00 != 0);
  if (param_2[8] < param_2[9]) {
    ppuStack_a8 = param_2;
    func_0x000107346d3c();
    FUN_10733f54c();
    func_0x000107347ea8();
  }
  else {
    ppuStack_a8 = param_2;
    func_0x0001073467e0();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    puVar15 = puStack_80;
    func_0x000107346d3c();
    FUN_10733f54c();
    puStack_80 = puVar15 + 4;
    func_0x00010734515c();
    func_0x0001073457f4();
  }
  func_0x000107345d14();
  puVar15 = param_2[8];
  puVar9 = param_2[9];
  if (puVar15 < puVar9) {
    *puVar15 = &PTR_DAT_1109a2c60;
    puVar15[1] = param_2;
    puVar15[3] = puVar15;
    puVar15 = puVar15 + 4;
    param_2[8] = puVar15;
  }
  else {
    func_0x000107345168((long)puVar15 - (long)param_2[7] >> 5);
    func_0x0001073454f8();
    func_0x000107345180();
    *puStack_80 = &PTR_DAT_1109a2c60;
    puStack_80[1] = param_2;
    puStack_80[3] = puStack_80;
    puStack_80 = puStack_80 + 4;
    func_0x00010734515c();
    puVar15 = param_2[8];
    func_0x000107345e58();
    puVar9 = param_2[9];
  }
  param_2[8] = puVar15;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
    if (bVar2) {
      *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar15 < puVar9) {
    ppuStack_b8 = ppuVar16;
    ppuStack_b0 = ppuVar5;
    ppuStack_a8 = param_2;
    func_0x000107346d3c();
    FUN_10733f888();
    func_0x000107347ea8();
  }
  else {
    ppuStack_b8 = ppuVar16;
    ppuStack_b0 = ppuVar5;
    ppuStack_a8 = param_2;
    func_0x0001073467e0();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    puVar15 = puStack_80;
    func_0x000107346d3c();
    FUN_10733f888();
    puStack_80 = puVar15 + 4;
    func_0x00010734515c();
    func_0x0001073457f4();
  }
  func_0x000107345d14();
  puVar15 = param_2[8];
  if (puVar15 < param_2[9]) {
    *puVar15 = &PTR_FUN_1109a2e60;
    puVar15[1] = param_2;
    puVar15[3] = puVar15;
    puVar15 = puVar15 + 4;
    param_2[8] = puVar15;
  }
  else {
    func_0x0001073473dc();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    *puStack_80 = &PTR_FUN_1109a2e60;
    puStack_80[1] = param_2;
    puStack_80[3] = puStack_80;
    puStack_80 = puStack_80 + 4;
    func_0x00010734515c();
    puVar15 = param_2[8];
    func_0x000107345e58();
  }
  param_2[8] = puVar15;
  ppuStack_b8 = ppuVar16;
  ppuStack_b0 = ppuVar5;
  do {
    func_0x0001073473ac();
  } while (extraout_w9_01 != 0);
  if (puVar15 < param_2[9]) {
    ppuStack_a8 = param_2;
    func_0x000107346d3c();
    FUN_107343cf4();
    func_0x000107347ea8();
  }
  else {
    ppuStack_a8 = param_2;
    func_0x0001073467e0();
    func_0x000107345168();
    func_0x0001073454f8();
    func_0x000107345180();
    puVar15 = puStack_80;
    FUN_107343cf4(puStack_80,&ppuStack_b8);
    puStack_80 = puVar15 + 4;
    func_0x00010734515c();
    func_0x0001073457f4();
  }
  func_0x000107345d14();
  if ((param_17 >> 0x20 & 1) != 0) {
    puVar15 = (undefined8 *)(param_17 & 0xffffffffff);
    puVar9 = param_2[8];
    if (puVar9 < param_2[9]) {
      *puVar9 = &PTR_FUN_1109a32f8;
      puVar9[1] = puVar15;
      puVar9[3] = puVar9;
      puVar15 = puVar9 + 4;
      param_2[8] = puVar15;
    }
    else {
      func_0x0001073473dc();
      func_0x000107345168();
      func_0x0001073454f8();
      func_0x000107345180();
      *puStack_80 = &PTR_FUN_1109a32f8;
      puStack_80[1] = puVar15;
      puStack_80[3] = puStack_80;
      puStack_80 = puStack_80 + 4;
      func_0x00010734515c();
      func_0x0001073457f4();
    }
    param_2[8] = puVar15;
  }
  FUN_1073445fc(&ppuStack_a0);
  return param_2;
}



/* Entry: 1073202f8; end: 1073203a3;  */

undefined8 * FUN_1073202f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1109a0e70;
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    lVar1 = param_1[8];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ee44();
    }
    param_1[8] = lVar2;
    __ZdlPv(param_1[7]);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar1 = param_1[5];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ea84();
    }
    param_1[5] = lVar2;
    __ZdlPv(param_1[4]);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar1 = param_1[2];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_107332540();
    }
    param_1[2] = lVar2;
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1073203a4; end: 1073203a7;  */

undefined8 * FUN_1073203a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1109a0e28;
  FUN_10734457c(param_1 + 0x22);
  func_0x0001072aa1c8(param_1 + 0x1f);
  func_0x0001072aa1ec(param_1 + 0x1d);
  func_0x00010726ee70(param_1 + 0x1b);
  func_0x000107283b14(param_1 + 0x19);
  func_0x0001072aa210(param_1 + 0x17);
  func_0x00010726ee04(param_1 + 0x15);
  func_0x00010725b6e0(param_1 + 0x13);
  func_0x00010726eedc(param_1 + 0x11);
  func_0x0001072aa27c(param_1 + 0xf);
  func_0x0001072aa2a0(param_1 + 0xd);
  func_0x000107346c60();
  *param_1 = &PTR_FUN_1109a0e70;
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    lVar1 = param_1[8];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ee44();
    }
    param_1[8] = lVar2;
    __ZdlPv(param_1[7]);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar1 = param_1[5];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ea84();
    }
    param_1[5] = lVar2;
    __ZdlPv(param_1[4]);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar1 = param_1[2];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_107332540();
    }
    param_1[2] = lVar2;
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1073203a8; end: 1073203bb;  */

void FUN_1073203a8(void)

{
  func_0x000107344620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073203bc; end: 1073203bf;  */

undefined8 * FUN_1073203bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1109a0e70;
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    lVar1 = param_1[8];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ee44();
    }
    param_1[8] = lVar2;
    __ZdlPv(param_1[7]);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar1 = param_1[5];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_10733ea84();
    }
    param_1[5] = lVar2;
    __ZdlPv(param_1[4]);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar1 = param_1[2];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_107332540();
    }
    param_1[2] = lVar2;
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 1073203c0; end: 1073203d3;  */

void FUN_1073203c0(void)

{
  FUN_1073202f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073203d4; end: 1073203db;  */

void FUN_1073203d4(void)

{
  return;
}



/* Entry: 1073203dc; end: 1073203ff;  */

void FUN_1073203dc(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_FUN_1109a0e90);
  return;
}



/* Entry: 107320400; end: 107320433;  */

void FUN_107320400(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a0e90;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107320434; end: 10732045b;  */

void FUN_107320434(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1700);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732045c; end: 107320467;  */

undefined ** FUN_10732045c(void)

{
  return &PTR_DAT_1109a1700;
}



/* Entry: 1073230a8; end: 1073232c7;  */

/* WARNING: Possible PIC construction at 0x000107323174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001073231bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107323178) */
/* WARNING: Removing unreachable block (ram,0x0001073231c0) */

void FUN_1073230a8(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  undefined4 uStack_188;
  undefined1 auStack_180 [56];
  byte bStack_148;
  undefined1 auStack_140 [16];
  byte bStack_130;
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  byte bStack_b8;
  undefined1 auStack_b0 [56];
  byte bStack_78;
  byte bStack_40;
  
  func_0x00010734479c();
  uStack_1a0 = param_3;
  uStack_198 = param_4;
  FUN_1073232dc(auStack_140);
  if ((bStack_130 & 1) == 0) {
    func_0x000107346ed8();
  }
  else {
    func_0x0001073453b0();
    if ((extraout_x8 & 1) == 0) {
      func_0x000107345644();
      func_0x000107346178(auStack_b0);
      func_0x000107264c5c(auStack_b0);
      func_0x000107346f1c();
    }
    iVar4 = (int)auStack_140;
    func_0x00010777016c();
    if (iVar4 == 0) {
      param_2 = auStack_1b8;
      FUN_1073238e4(auStack_b0,auStack_140,param_2,param_5);
      if ((bStack_78 & 1) != 0) {
        puVar5 = auStack_f0;
        puVar6 = auStack_b0;
        goto code_r0x0001000df598;
      }
      auStack_180[0] = 0;
      bStack_148 = 0;
      func_0x000107345e28();
    }
    else {
      uStack_188 = 3;
      bVar2 = *(byte *)(param_5 + 0x57);
      in_ZR = bVar2 == 0;
      uVar1 = *(ulong *)(param_5 + 0x48);
      plVar3 = (long *)*(long *)(param_5 + 0x40);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        plVar3 = (long *)(param_5 + 0x40);
      }
      param_2 = auStack_190;
      func_0x000107770280(auStack_b0,auStack_140,param_2,param_5,plVar3,uVar1);
      func_0x0001072c9884(auStack_190);
      if ((bStack_40 & 1) == 0) {
        func_0x000107345370();
        auStack_180[0] = 0;
        bStack_148 = 0;
      }
      else {
        param_2 = auStack_128;
        FUN_107323900(auStack_f0,auStack_b0);
        if ((bStack_b8 & 1) != 0) {
          puVar5 = auStack_128;
          puVar6 = auStack_f0;
          goto code_r0x0001000df598;
        }
        func_0x000107345360();
        auStack_180[0] = 0;
        bStack_148 = 0;
        func_0x00010724b3d8(auStack_f0);
      }
      func_0x000107296ad0(auStack_b0);
    }
    if ((bStack_148 & 1) == 0) {
      func_0x000107346ed8();
    }
    else {
      param_2 = auStack_180;
      func_0x0001072627ac();
      in_ZR = bStack_148 == 1;
      if ((bool)in_ZR) {
        func_0x000107347898();
      }
    }
    func_0x000107345728();
  }
  func_0x0001072f5f4c();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_f0);
  func_0x000107296ad0(auStack_b0);
  func_0x000107345728();
  puVar6 = auStack_140;
  func_0x0001072f5f4c();
  func_0x000107345604();
  puVar5 = extraout_x8_00;
  if (puVar6[0x38] == '\0') {
    puVar6 = param_2;
  }
code_r0x0001000df598:
  func_0x000104c318ec();
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar6 + 0x30);
  return;
}



/* Entry: 1073232c8; end: 1073232db;  */

void FUN_1073232c8(long param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x38) == '\0') {
    param_2 = param_3;
  }
  func_0x000104c318ec();
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1073232dc; end: 10732333f;  */

void FUN_1073232dc(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  func_0x000107347a2c(*(undefined8 *)(*param_2 + 0x30));
  if (((ulong)puVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010732332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x38))(param_1,param_2 + 1,param_3);
    return;
  }
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 107323340; end: 10732348f;  */

ulong FUN_107323340(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  uint uVar4;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x21;
  undefined1 auStack_1e9 [33];
  char cStack_1c8;
  undefined1 auStack_1c0 [112];
  byte bStack_150;
  undefined1 auStack_d9 [33];
  char cStack_b8;
  undefined1 auStack_b0 [112];
  byte bStack_40;
  undefined1 *puVar5;
  
  func_0x000107344b40(param_1);
  func_0x0001073458d4();
  func_0x0001073466dc();
  uVar1 = cStack_b8 == '\x01';
  if ((bool)uVar1) {
    func_0x0001073453b0();
    if ((extraout_x8 & 1) == 0) {
      func_0x000107345398();
      func_0x000107347824();
      func_0x0001073460f0();
    }
    func_0x0001073479b8();
    if ((int)param_1 == 0) {
      func_0x00010734737c();
      FUN_107324a00();
      uVar3 = (uint)param_1;
      uVar4 = uVar3 & (int)(uVar3 << 0x17) >> 0x1f;
      uVar7 = (ulong)(uVar3 >> 8 & 1);
    }
    else {
      func_0x000107345324(2);
      func_0x0001073457bc();
      func_0x000107346144();
      if ((bStack_40 & 1) == 0) {
        func_0x000107345370();
LAB_1073233f8:
        uVar7 = 0;
        puVar5 = (undefined1 *)0x0;
      }
      else {
        param_1 = auStack_b0;
        func_0x000107280530(param_1,auStack_d9);
        if (((uint)param_1 >> 8 & 1) == 0) {
          func_0x000107345360();
          goto LAB_1073233f8;
        }
        uVar7 = 1;
        puVar5 = param_1;
      }
      uVar4 = (uint)puVar5;
      func_0x000107346568();
    }
    uVar4 = uVar4 & 0xff | (int)uVar7 << 8;
    uVar1 = uVar4 == 0x100;
    if (uVar4 < 0x101) {
      uVar4 = 0;
    }
    func_0x000107345728();
  }
  else {
    uVar4 = 0;
    uVar7 = 0;
  }
  func_0x0001073466d4();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return (ulong)(uVar4 & 0xff | (int)uVar7 << 8);
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000107296ad0();
  func_0x000107345728();
  func_0x0001073466d4();
  func_0x000107345604();
  func_0x000107344b40(param_1);
  func_0x0001073458d4();
  func_0x0001073466dc();
  uVar1 = cStack_1c8 == '\x01';
  if (!(bool)uVar1) {
    uVar7 = 0;
    uVar6 = 0;
    goto LAB_107323580;
  }
  func_0x0001073453b0();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x000107345398();
    func_0x000107347824();
    func_0x0001073460f0();
  }
  func_0x0001073479b8();
  if ((int)param_1 == 0) {
    func_0x00010734737c();
    FUN_107324e4c();
    bVar2 = ((ulong)param_1 & 0x100000000) != 0;
    uVar7 = 0;
    if (bVar2) {
      uVar7 = 0x100000000;
    }
    param_3 = (undefined1 *)0x0;
    if (bVar2) {
      param_3 = param_1;
    }
    unaff_x21 = 0;
    if (bVar2) {
      unaff_x21 = (ulong)param_1 & 0xffffff00;
    }
  }
  else {
    func_0x000107345324(1);
    func_0x0001073457bc();
    func_0x000107346144();
    if ((bStack_150 & 1) == 0) {
      func_0x000107345370();
LAB_107323558:
      func_0x000107346750();
    }
    else {
      param_3 = auStack_1c0;
      func_0x000107776fc4(param_3,auStack_1e9);
      if ((ulong)param_3 >> 0x20 == 0) {
        func_0x000107345360();
        goto LAB_107323558;
      }
      unaff_x21 = (ulong)param_3 & 0xffffff00;
      uVar7 = 0x100000000;
    }
    func_0x000107346568();
  }
  func_0x000107345728();
  uVar1 = uVar7 == 0;
  uVar6 = 0;
  if (!(bool)uVar1) {
    uVar6 = (ulong)param_3 & 0xff | unaff_x21;
  }
LAB_107323580:
  func_0x0001073466d4();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return uVar6 | uVar7;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000107296ad0();
  func_0x000107345728();
  func_0x0001073466d4();
  func_0x000107345604();
  func_0x000107345010();
  func_0x0001072c9b9c();
  return uVar6;
}



/* Entry: 107323490; end: 1073235e7;  */

ulong FUN_107323490(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_d9 [33];
  char cStack_b8;
  undefined1 auStack_b0 [112];
  byte bStack_40;
  
  func_0x000107344b40(param_1);
  func_0x0001073458d4();
  func_0x0001073466dc();
  uVar1 = cStack_b8 == '\x01';
  if (!(bool)uVar1) {
    unaff_x20 = 0;
    uVar3 = 0;
    goto LAB_107323580;
  }
  func_0x0001073453b0();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107345398();
    func_0x000107347824();
    func_0x0001073460f0();
  }
  func_0x0001073479b8();
  if ((int)param_1 == 0) {
    func_0x00010734737c();
    FUN_107324e4c();
    bVar2 = ((ulong)param_1 & 0x100000000) != 0;
    unaff_x20 = 0;
    if (bVar2) {
      unaff_x20 = 0x100000000;
    }
    param_3 = (undefined1 *)0x0;
    if (bVar2) {
      param_3 = param_1;
    }
    unaff_x21 = 0;
    if (bVar2) {
      unaff_x21 = (ulong)param_1 & 0xffffff00;
    }
  }
  else {
    func_0x000107345324(1);
    func_0x0001073457bc();
    func_0x000107346144();
    if ((bStack_40 & 1) == 0) {
      func_0x000107345370();
LAB_107323558:
      func_0x000107346750();
    }
    else {
      param_3 = auStack_b0;
      func_0x000107776fc4(param_3,auStack_d9);
      if ((ulong)param_3 >> 0x20 == 0) {
        func_0x000107345360();
        goto LAB_107323558;
      }
      unaff_x21 = (ulong)param_3 & 0xffffff00;
      unaff_x20 = 0x100000000;
    }
    func_0x000107346568();
  }
  func_0x000107345728();
  uVar1 = unaff_x20 == 0;
  uVar3 = 0;
  if (!(bool)uVar1) {
    uVar3 = (ulong)param_3 & 0xff | unaff_x21;
  }
LAB_107323580:
  func_0x0001073466d4();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return uVar3 | unaff_x20;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000107296ad0();
  func_0x000107345728();
  func_0x0001073466d4();
  func_0x000107345604();
  func_0x000107345010();
  func_0x0001072c9b9c();
  return uVar3;
}



/* Entry: 1073235e8; end: 10732360b;  */

void FUN_1073235e8(void)

{
  func_0x000107345010();
  func_0x0001072c9b9c();
  return;
}



/* Entry: 10732360c; end: 107323633;  */

undefined1  [16] FUN_10732360c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x0001073253b8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107323634; end: 10732381b;  */

long * FUN_107323634(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  long *unaff_x24;
  ulong uVar8;
  
  func_0x000107345c14();
  plVar5 = (long *)(param_3 + 0x18);
  func_0x00010726364c();
  plVar7 = (long *)unaff_x19[1];
  plVar2 = plVar5;
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x24 = (long *)(uVar8 & (ulong)plVar5);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar5 - (long)plVar7 < 0;
      unaff_x24 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1073236f0;
          plVar3 = (long *)plVar6[1];
          in_NG = (long)plVar3 - (long)plVar5 < 0;
          if (plVar3 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x000104c32db4();
          if (((ulong)plVar2 & 1) != 0) goto LAB_1073237f0;
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar8);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
        in_NG = (long)plVar3 - (long)unaff_x24 < 0;
      } while (plVar3 == unaff_x24);
    }
  }
LAB_1073236f0:
  plVar6 = unaff_x19 + 2;
  func_0x0001073464f4();
  *plVar2 = 0;
  plVar2[1] = (long)plVar5;
  func_0x0001073479dc(plVar2 + 2);
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  func_0x000107345980();
  if ((plVar7 == (long *)0x0) || (func_0x000107347ca8(param_1,param_2,(float)plVar7), (bool)in_NG))
  {
    func_0x00010734530c((long)plVar7 << 1);
    func_0x0001072bf534();
    plVar7 = (long *)unaff_x19[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar2 = *plVar6;
    *plVar6 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar6;
    if (*plVar2 != 0) {
      plVar5 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
  }
  func_0x000107345f3c();
  func_0x0001072bf6b8();
  plVar6 = plVar2;
LAB_1073237f0:
  return plVar6 + 9;
}



/* Entry: 10732381c; end: 1073238e3;  */

long * FUN_10732381c(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  func_0x0001073253b8();
  return param_1;
}



/* Entry: 1073238e4; end: 1073238ff;  */

void FUN_1073238e4(void)

{
  func_0x000107344fd4();
  FUN_107534ce4();
  return;
}



/* Entry: 107323900; end: 10732393b;  */

void FUN_107323900(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 3) {
    FUN_10732393c();
    func_0x000107346d48();
    func_0x000104c2fe00();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  func_0x000107346ed8();
  return;
}



/* Entry: 10732393c; end: 107323973;  */

long FUN_10732393c(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 3) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return param_1;
}



/* Entry: 107323974; end: 1073239a7;  */

void FUN_107323974(void)

{
  func_0x0001073450dc();
  FUN_1073239a8();
  func_0x00010734529c();
  FUN_107323a04();
  return;
}



/* Entry: 1073239a8; end: 107323a03;  */

long FUN_1073239a8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  
  lVar2 = param_1;
  func_0x000107344b40(param_2);
  func_0x0001073452d4(0);
  func_0x000107346a88();
  func_0x0001073456e0();
  if ((bool)in_ZR) {
    return extraout_x9 + extraout_x8;
  }
  ___stack_chk_fail();
  func_0x000107346d60();
  func_0x0001073447e0();
  uVar1 = param_3 == 0x25;
  uStack_198 = extraout_x8_00;
  if (param_3 < 0x26) {
    func_0x000107345f24();
    FUN_107323ad4();
    unaff_x19[1] = uStack_1b8;
    *unaff_x19 = uStack_1c0;
    unaff_x19[3] = uStack_1a8;
    unaff_x19[2] = uStack_1b0;
    unaff_x19[4] = uStack_1a0;
    func_0x0001073455a8(1);
    param_5 = unaff_x20;
  }
  else {
    uVar1 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x000107345808(&uStack_1c0);
      func_0x000107346038();
      func_0x00010734745c();
      FUN_107323ad4();
      func_0x00010734744c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
      func_0x000107345348();
      param_5 = param_1;
    }
    else {
      func_0x000107323af4(&uStack_1c0,param_5);
      func_0x000107346020();
      func_0x0001072625b4();
      func_0x000107345944();
    }
  }
  func_0x0001073447cc(uStack_198);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107345740();
    func_0x000104c2f784();
    func_0x000107345604();
    func_0x000107346008();
    func_0x000107323b20();
    *(undefined1 *)((long)unaff_x19 + lVar2) = 0;
    return param_5;
  }
  return param_5;
}



/* Entry: 107323a04; end: 107323ad3;  */

void FUN_107323a04(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107346d60();
  func_0x0001073447e0();
  uVar1 = param_3 == 0x25;
  uStack_38 = extraout_x8;
  if (param_3 < 0x26) {
    func_0x000107345f24();
    FUN_107323ad4();
    unaff_x19[1] = uStack_58;
    *unaff_x19 = uStack_60;
    unaff_x19[3] = uStack_48;
    unaff_x19[2] = uStack_50;
    unaff_x19[4] = uStack_40;
    func_0x0001073455a8(1);
  }
  else {
    uVar1 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x000107345808(&uStack_60);
      func_0x000107346038();
      func_0x00010734745c();
      FUN_107323ad4();
      func_0x00010734744c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
      func_0x000107345348();
    }
    else {
      func_0x000107323af4(&uStack_60,param_5);
      func_0x000107346020();
      func_0x0001072625b4();
      func_0x000107345944();
    }
  }
  func_0x0001073447cc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107345740();
    func_0x000104c2f784();
    func_0x000107345604();
    func_0x000107346008();
    func_0x000107323b20();
    *(undefined1 *)((long)unaff_x19 + param_2) = 0;
    return;
  }
  return;
}



/* Entry: 107323ad4; end: 107323af3;  */

void FUN_107323ad4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346008();
  func_0x000107323b20();
  *(undefined1 *)(unaff_x19 + param_2) = 0;
  return;
}



/* Entry: 107323af4; end: 107323b4f;  */

void FUN_107323af4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *(undefined8 *)param_1[1];
  uStack_18 = ((undefined8 *)param_1[1])[1];
  func_0x000107347ba0(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_3,&uStack_20);
  return;
}



/* Entry: 107323b50; end: 107323b57;  */

void FUN_107323b50(void)

{
  return;
}



/* Entry: 107323b58; end: 107323b7b;  */

void FUN_107323b58(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_FUN_1109a0f10);
  return;
}



/* Entry: 107323b7c; end: 107323b97;  */

void FUN_107323b7c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a0f10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107323b98; end: 107323d7f;  */

void FUN_107323b98(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [144];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [112];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [56];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [112];
  char cStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [112];
  undefined1 auStack_78 [24];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001073447e0();
  uStack_288 = param_2[1];
  uStack_290 = *param_2;
  uStack_58 = extraout_x8;
  func_0x000107347b60(auStack_170,&UNK_10f40a41b);
  func_0x000107264c5c(auStack_170);
  func_0x000107347ae8(auStack_320);
  func_0x000104c2f714(auStack_170);
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  auStack_f0[0] = 1;
  auStack_278[0] = 0;
  FUN_107323db4(auStack_170,param_3,&uStack_338,auStack_320,auStack_f0,auStack_278);
  uVar1 = cStack_f8 == '\x01';
  if ((bool)uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000104c302a4(auStack_200,uStack_290,uStack_288);
    FUN_1073243b8(auStack_270,auStack_168);
    func_0x000107345ab8(auStack_1c8);
    puVar2 = auStack_e8;
    FUN_1073244ec(puVar2,auStack_270);
    puStack_60 = (undefined1 *)0x0;
    func_0x000107345fdc();
    func_0x0001073473fc();
    FUN_1073244ec();
    puStack_60 = puVar2;
    func_0x0001073248fc(auStack_190,auStack_78);
    func_0x0001072c92ec(auStack_78);
    func_0x000107347264();
    func_0x000107323fb4(uVar3,auStack_1c8);
    func_0x0001072c92c8(auStack_1c8);
    func_0x000107347274();
    func_0x000107347284();
  }
  func_0x00010732493c();
  func_0x000107345728();
  func_0x00010734728c();
  func_0x00010734615c();
  func_0x0001073447cc(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c92c8(auStack_1c8);
  func_0x000107347274();
  func_0x000107347284();
  func_0x00010732493c(auStack_170);
  func_0x000107345728();
  func_0x00010734728c();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 107323d80; end: 107323da7;  */

void FUN_107323d80(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1048);
  func_0x000107344bc4();
  return;
}



/* Entry: 107323da8; end: 107323db3;  */

undefined ** FUN_107323da8(void)

{
  return &PTR_DAT_1109a1048;
}



/* Entry: 107323db4; end: 107323dcf;  */

void FUN_107323db4(void)

{
  func_0x0001073446c4();
  FUN_10755662c();
  return;
}



/* Entry: 107323dd0; end: 107323e8b;  */

void FUN_107323dd0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107345658();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  FUN_107323e8c(unaff_x19 + 0x10,unaff_x20 + 0x10);
  func_0x000107347f50();
  FUN_107323f18();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x40,unaff_x20 + 0x40);
  func_0x00010028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  func_0x00010015bc98(unaff_x19 + 0x78,unaff_x20 + 0x78);
  return;
}



/* Entry: 107323e8c; end: 107323eb7;  */

void FUN_107323e8c(void)

{
  func_0x0001073456d0();
  FUN_107323eb8();
  return;
}



/* Entry: 107323eb8; end: 107323ef7;  */

void FUN_107323eb8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107345624();
      } while (extraout_w10 != 0);
    }
    func_0x000107347c48();
  }
  return;
}



/* Entry: 107323ef8; end: 107323f17;  */

void FUN_107323ef8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072aa1a4();
  }
  return;
}



/* Entry: 107323f18; end: 107323f43;  */

void FUN_107323f18(void)

{
  func_0x0001073456d0();
  FUN_107323f44();
  return;
}



/* Entry: 107323f44; end: 107323f57;  */

void FUN_107323f44(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x000107277f30();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 107323f58; end: 107323f8f;  */

void FUN_107323f58(void)

{
  func_0x000107277f30();
  func_0x000107347c48();
  return;
}



/* Entry: 107323f90; end: 10732400b;  */

void FUN_107323f90(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10732400c; end: 107324093;  */

undefined8 FUN_10732400c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107345658();
  FUN_107324100();
  func_0x000107346820();
  FUN_1073241bc(auStack_58);
  FUN_107324094(lStack_48);
  lStack_48 = lStack_48 + 0x58;
  func_0x000107346270();
  FUN_107324158();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107324350(auStack_58);
  return uVar1;
}



/* Entry: 107324094; end: 1073240bb;  */

void FUN_107324094(void)

{
  func_0x000100a2b988();
  func_0x000104c318bc();
  func_0x000107347500();
  FUN_1073240bc();
  return;
}



/* Entry: 1073240bc; end: 1073240ff;  */

void FUN_1073240bc(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 107324100; end: 107324157;  */

long * FUN_107324100(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      plVar2 = (long *)0x2e8ba2e8ba2e8ba;
    }
    return plVar2;
  }
  FUN_1073241b0();
  func_0x000100a2b988();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_107324240(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return plVar2;
}



/* Entry: 107324158; end: 1073241af;  */

void FUN_107324158(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x000100a2b988();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_107324240(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return;
}



/* Entry: 1073241b0; end: 1073241bb;  */

void FUN_1073241b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107345150();
  func_0x0001073467d0();
  if (param_2 != 0) {
    func_0x0001073241f0(param_4);
  }
  func_0x000107347674(0x58);
  return;
}



/* Entry: 1073241bc; end: 10732420f;  */

void FUN_1073241bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073467d0();
  if (param_2 != 0) {
    func_0x0001073241f0(param_4);
  }
  func_0x000107347674(0x58);
  return;
}



/* Entry: 107324210; end: 10732423f;  */

void FUN_107324210(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001073450dc();
  func_0x00010734513c();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x58) {
    FUN_107324094(param_4,param_2);
    param_4 = lStack_48 + 0x58;
    lStack_48 = param_4;
  }
  func_0x000107346cb4();
  func_0x0001073461d0();
  FUN_1073242b8();
  FUN_1073242e8(auStack_70);
  return;
}



/* Entry: 107324240; end: 1073242b7;  */

void FUN_107324240(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001073450dc();
  func_0x00010734513c();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x58) {
    FUN_107324094(param_4,param_2);
    param_4 = lStack_38 + 0x58;
    lStack_38 = param_4;
  }
  func_0x000107346cb4();
  func_0x0001073461d0();
  FUN_1073242b8();
  FUN_1073242e8(auStack_60);
  return;
}



/* Entry: 1073242b8; end: 1073242e7;  */

void FUN_1073242b8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x0001072c92c8();
  }
  return;
}



/* Entry: 1073242e8; end: 107324313;  */

void FUN_1073242e8(void)

{
  uint extraout_w8;
  
  func_0x000107348068();
  if ((extraout_w8 & 1) == 0) {
    FUN_107324314();
  }
  return;
}



/* Entry: 107324314; end: 107324323;  */

void FUN_107324314(long param_1)

{
  long unaff_x19;
  
  func_0x000107346d1c();
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072c92c8();
  }
  return;
}



/* Entry: 107324324; end: 10732437b;  */

void FUN_107324324(long param_1)

{
  long unaff_x19;
  
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072c92c8();
  }
  return;
}



/* Entry: 10732437c; end: 107324383;  */

void FUN_10732437c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001072c92c8();
  }
  return;
}



/* Entry: 107324384; end: 1073243b7;  */

void FUN_107324384(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    func_0x0001072c92c8();
  }
  return;
}



/* Entry: 1073243b8; end: 1073243e7;  */

void FUN_1073243b8(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x68) = extraout_w8;
  FUN_1073243e8();
  return;
}



/* Entry: 1073243e8; end: 10732442b;  */

void FUN_1073243e8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10732442c();
  iVar1 = *(int *)(unaff_x20 + 0x68);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_FUN_1109a0f88);
    *(int *)(unaff_x19 + 0x68) = iVar1;
  }
  return;
}



/* Entry: 10732442c; end: 10732446f;  */

void FUN_10732442c(long param_1)

{
  if (*(uint *)(param_1 + 0x68) != 0xffffffff) {
    func_0x000107344d8c((&PTR_FUN_1109a0f70)[*(uint *)(param_1 + 0x68)]);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return;
}



/* Entry: 107324470; end: 107324483;  */

void FUN_107324470(void)

{
  return;
}



/* Entry: 107324484; end: 1073244a3;  */

long FUN_107324484(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107346d6c();
  func_0x00010724b3d8();
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073244a4; end: 1073244bf;  */

void FUN_1073244a4(void)

{
  return;
}



/* Entry: 1073244c0; end: 1073244eb;  */

void FUN_1073244c0(void)

{
  func_0x000107345658();
  func_0x00010727d6bc();
  func_0x000107347a20();
  return;
}



/* Entry: 1073244ec; end: 107324513;  */

void FUN_1073244ec(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x68) = extraout_w8;
  FUN_107324514();
  return;
}



/* Entry: 107324514; end: 107324557;  */

void FUN_107324514(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10732442c();
  iVar1 = *(int *)(unaff_x20 + 0x68);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_FUN_1109a0fa0);
    *(int *)(unaff_x19 + 0x68) = iVar1;
  }
  return;
}



/* Entry: 107324558; end: 107324573;  */

void FUN_107324558(void)

{
  return;
}



/* Entry: 107324574; end: 1073245bb;  */

void FUN_107324574(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  func_0x0001072649c8();
  return;
}



/* Entry: 1073245bc; end: 1073245cf;  */

void FUN_1073245bc(void)

{
  func_0x000107324598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073245d0; end: 107324603;  */

undefined8 FUN_1073245d0(undefined8 param_1)

{
  func_0x000107345fdc();
  FUN_107324764();
  return param_1;
}



/* Entry: 107324604; end: 107324627;  */

undefined8 FUN_107324604(long param_1,undefined8 param_2)

{
  func_0x0001073473fc(param_2,param_1 + 8);
  FUN_1073243b8();
  return param_2;
}



/* Entry: 107324628; end: 10732472f;  */

void FUN_107324628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x00010734742c();
  func_0x0001073449c4();
  FUN_10732480c(auStack_120,param_3);
  FUN_107324850(auStack_140,param_4);
  func_0x00010732478c(auStack_68,auStack_120);
  func_0x0001073247cc(auStack_88,auStack_140);
  FUN_1073243b8(auStack_f8,unaff_x21 + 0x10);
  FUN_107562958();
  func_0x000107347274();
  FUN_107324894(auStack_88);
  func_0x0001073248c8(auStack_68);
  FUN_107324894(auStack_140);
  func_0x0001073248c8();
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107347274();
  FUN_107324894(auStack_88);
  func_0x0001073248c8(auStack_68);
  FUN_107324894(auStack_140);
  func_0x0001073248c8(auStack_120);
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 107324730; end: 107324757;  */

void FUN_107324730(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1038);
  func_0x000107344bc4();
  return;
}



/* Entry: 107324758; end: 107324763;  */

undefined ** FUN_107324758(void)

{
  return &PTR_DAT_1109a1038;
}



/* Entry: 107324764; end: 10732480b;  */

undefined8 FUN_107324764(undefined8 param_1)

{
  func_0x0001073473fc();
  FUN_1073243b8();
  return param_1;
}



/* Entry: 10732480c; end: 10732484f;  */

void FUN_10732480c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 107324850; end: 107324893;  */

void FUN_107324850(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 107324894; end: 1073249ab;  */

void FUN_107324894(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return;
}



/* Entry: 1073249ac; end: 1073249cb;  */

void FUN_1073249ac(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1073249cc; end: 1073249ff;  */

void FUN_1073249cc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return;
}



/* Entry: 107324a00; end: 107324a23;  */

uint FUN_107324a00(uint param_1)

{
  func_0x000107344fd4();
  FUN_1075349f8();
  return param_1 & 0xffff;
}



/* Entry: 107324a24; end: 107324a2b;  */

void FUN_107324a24(void)

{
  return;
}



/* Entry: 107324a2c; end: 107324a4f;  */

void FUN_107324a2c(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_FUN_1109a1068);
  return;
}



/* Entry: 107324a50; end: 107324a6b;  */

void FUN_107324a50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a1068;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


