/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074dbc50; end: 1074dbcbb;  */

bool FUN_1074dbc50(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_107467884();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x0001074dbc90(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 1074dbcbc; end: 1074dbd17;  */

long FUN_1074dbcbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010002c7d4();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 1074dbd18; end: 1074dbd5b;  */

undefined8 * FUN_1074dbd18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1074dbd5c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1074dbd5c; end: 1074dbe37;  */

undefined8 * FUN_1074dbd5c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4;
  lVar6 = lVar8 >> 3;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    uVar7 = *plVar2 - lVar4 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(*plVar2 - lVar4)) {
      uVar7 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar2;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
      lVar5 = lVar8;
    }
    else {
      FUN_1074680a8();
      lVar4 = *param_1;
      lVar6 = param_1[1] - lVar4 >> 3;
      lVar5 = param_1[1] - lVar4;
    }
    puVar3 = (undefined8 *)((long)plVar2 + lVar8);
    *puVar3 = *param_2;
    _memcpy(puVar3 + -lVar6,lVar4,lVar5);
    lStack_58 = *param_1;
    *param_1 = (long)(puVar3 + -lVar6);
    param_1[1] = (long)(puVar3 + 1);
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar2 + uVar7);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_107468118(&lStack_58);
    return puVar3 + 1;
  }
  FUN_1074dbe38();
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001074dbe74();
  FUN_1074dbefc(puVar3,0);
  return puVar3;
}



/* Entry: 1074dbe38; end: 1074dbe4b;  */

undefined * FUN_1074dbe38(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001074dbe74();
  FUN_1074dbefc(puVar1,0);
  return puVar1;
}



/* Entry: 1074dbe4c; end: 1074dbefb;  */

long FUN_1074dbe4c(long param_1)

{
  func_0x0001074dbe74(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1074dbefc(param_1,0);
  return param_1;
}



/* Entry: 1074dbefc; end: 1074dbf13;  */

void FUN_1074dbefc(long *param_1)

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



/* Entry: 1074dbf14; end: 1074dc093;  */

long FUN_1074dbf14(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x0001074dc2c4();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074dc094; end: 1074dc0ab;  */

void FUN_1074dc094(long *param_1,long param_2)

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



/* Entry: 1074dc0ac; end: 1074dc0cf;  */

undefined8 FUN_1074dc0ac(undefined8 param_1)

{
  FUN_1074dc0d0(param_1,0);
  return param_1;
}



/* Entry: 1074dc0d0; end: 1074dc0e7;  */

void FUN_1074dc0d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001074dbeac(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1074dc0e8; end: 1074dc163;  */

void FUN_1074dc0e8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001074dbeac(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074dc164; end: 1074dc2cf;  */

void FUN_1074dc164(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1074dc218;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1074dc218;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1074dc218:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1074dc2d0; end: 1074dc347;  */

long * FUN_1074dc2d0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long alStack_568 [29];
  undefined8 uStack_480;
  undefined8 uStack_3d8;
  undefined4 uStack_39c;
  undefined1 uStack_398;
  undefined1 uStack_397;
  undefined1 uStack_396;
  undefined1 uStack_395;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined2 uStack_388;
  undefined1 uStack_386;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 auStack_370 [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
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
  long *plStack_2a8;
  long *plStack_2a0;
  undefined8 *apuStack_298 [2];
  undefined1 auStack_288 [8];
  ulong uStack_280;
  byte bStack_271;
  undefined8 uStack_f8;
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar8 = auStack_80;
  plVar5 = (long *)auStack_80;
  puVar3 = auStack_80;
  func_0x0001074dd098();
  auStack_80[0] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  func_0x0001073837dc();
  func_0x00010724b3d8();
  func_0x0001074dd078(uStack_38);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8();
  func_0x0001074dd0c8();
  func_0x0001074dd098();
  uVar2 = *(int *)(puVar8 + 400) == 1;
  uStack_f8 = extraout_x8_00;
  if (!(bool)uVar2) {
    plVar5 = (long *)0x0;
    goto LAB_1074dc860;
  }
  uVar2 = *(int *)(puVar8 + 0x110) == 1;
  if ((bool)uVar2) {
    FUN_1074dcb44(puVar8 + 0xa0);
    func_0x00010724ef84(auStack_288);
    uVar2 = bStack_271 == 0;
    if (-1 < (char)bStack_271) {
      uStack_280 = (ulong)bStack_271;
    }
    if (uStack_280 == 0) {
LAB_1074dc3f4:
      plVar10 = (long *)0x0;
    }
    else {
      puVar4 = auStack_288;
      func_0x000100152bb8(puVar4,&UNK_10f415cc2);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1074dc3f4;
      puVar4 = auStack_288;
      func_0x000100152bb8(puVar4,&UNK_10f415cce);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1074dc3f4;
      puVar4 = auStack_288;
      func_0x0001000e107c(puVar4,param_3 + 6);
      plVar10 = (long *)0x0;
      if ((((ulong)puVar4 & 1) == 0) && (param_3[0xd] != 0)) {
        plVar10 = param_3 + 10;
        func_0x0001074dcb64(plVar10,auStack_288);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
    if (plVar10 == (long *)0x0) goto LAB_1074dc404;
  }
  else {
LAB_1074dc404:
    plVar10 = param_4;
  }
  FUN_1074dc94c(auStack_288,*param_3);
  uStack_330._0_4_ = 0x3f400000;
  FUN_1074dc2d0(puVar8 + 0x118,auStack_288,&uStack_330);
  auStack_370[0] = 0x3f800000;
  uVar13 = param_1;
  FUN_1074dc2d0(puVar8 + 0x68,auStack_288,auStack_370);
  puVar4 = puVar8;
  FUN_1074dcb84();
  uStack_39c = SUB84(puVar4,0);
  puVar3 = puVar3 + 8;
  FUN_1074dc9d4(puVar3,&uStack_39c);
  lVar1 = param_3[9];
  lVar11 = *param_3;
  uStack_330 = CONCAT44(uStack_330._4_4_,0x23);
  uStack_328 = 0;
  uStack_320 = CONCAT44(*(undefined4 *)(lVar11 + 0x78),uStack_39c);
  uStack_318 = uStack_318 & 0xffffffffff000000;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 0x101010100000000;
  uStack_2f8 = CONCAT62(uStack_2f8._2_6_,0xf01);
  FUN_1073ca29c(apuStack_298,*(undefined8 *)(lVar11 + 0x90),puVar3,&uStack_330);
  if (apuStack_298[0] == (undefined8 *)0x0) {
LAB_1074dc84c:
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)*apuStack_298[0];
    (**(code **)(*plVar5 + 0x18))();
    uVar2 = (int)plVar5 == 2;
    if (!(bool)uVar2) goto LAB_1074dc84c;
    uStack_320 = 0x3f80000000000000;
    uStack_328 = 0;
    uStack_318 = CONCAT71(uStack_318._1_7_,1);
    uVar2 = (char)lVar1 == '\0';
    uVar14 = 0;
    if ((bool)uVar2) {
      uVar14 = 0x13f800000;
    }
    uStack_318 = CONCAT44((int)uVar14,(undefined4)uStack_318);
    uStack_310 = CONCAT71(uStack_310._1_7_,(char)((ulong)uVar14 >> 0x20));
    uStack_310 = uStack_310 & 0xffffffff;
    uStack_308 = CONCAT71(uStack_308._1_7_,uVar2);
    uStack_330 = param_6;
    (**(code **)(**(long **)(lVar11 + 0x10) + 0x28))
              (&plStack_2a0,*(long **)(lVar11 + 0x10),&UNK_10f415cde,&uStack_330);
    plVar5 = plStack_2a0;
    (**(code **)(*plStack_2a0 + 0x30))();
    if (((ulong)plVar5 & 1) != 0) {
      plStack_2a8 = plStack_2a0;
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0,&UNK_10f415cd8,5);
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      plVar6 = *(long **)(lVar11 + 8);
      (**(code **)(*plVar6 + 0x10))();
      plVar7 = *(long **)(lVar11 + 8);
      (**(code **)(*plVar7 + 0x10))();
      uVar2 = (int)plVar6 == 0;
      uVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      func_0x000107876c5c(0,&uStack_330,plVar7);
      func_0x000107482794(auStack_370,&uStack_330);
      (**(code **)(*plStack_2a0 + 0x40))(plStack_2a0,apuStack_298[0]);
      uStack_380 = 7;
      uStack_378 = 0x3f800000;
      uStack_394 = 7;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_388 = 0x101;
      uStack_386 = 1;
      (**(code **)(*plStack_2a0 + 0x80))(plStack_2a0,&uStack_380,&uStack_398);
      uStack_396 = 1;
      uStack_398 = 0;
      uStack_397 = 1;
      (**(code **)(*plStack_2a0 + 0x88))(plStack_2a0,&uStack_398);
      (**(code **)(*plStack_2a0 + 0x58))(plStack_2a0,param_3[2]);
      (**(code **)(*plStack_2a0 + 0x60))(plStack_2a0,0,*(long *)(lVar11 + 0x48) + 0xa8);
      (**(code **)(*plStack_2a0 + 0x68))(plStack_2a0,*(undefined4 *)param_3[1]);
      (**(code **)(*plStack_2a0 + 0xd0))(plStack_2a0,0,auStack_370);
      uVar14 = NEON_fmov(0x3f800000,4);
      uStack_398 = (undefined1)uVar14;
      uStack_397 = (undefined1)((ulong)uVar14 >> 8);
      uStack_396 = (undefined1)((ulong)uVar14 >> 0x10);
      uStack_395 = (undefined1)((ulong)uVar14 >> 0x18);
      uStack_394 = (undefined4)((ulong)uVar14 >> 0x20);
      (**(code **)(*plStack_2a0 + 0xa8))(plStack_2a0,1,&uStack_398);
      plVar6 = plStack_2a0;
      uVar12 = (undefined4)uVar14;
      func_0x0001074dd054(plVar10);
      uStack_398 = (undefined1)uVar12;
      uStack_397 = (undefined1)((uint)uVar12 >> 8);
      uStack_396 = (undefined1)((uint)uVar12 >> 0x10);
      uStack_395 = (undefined1)((uint)uVar12 >> 0x18);
      uStack_394 = uVar16;
      uStack_390 = uVar17;
      uStack_38c = uVar18;
      (**(code **)(*plVar6 + 0xb8))(plVar6,2,&uStack_398);
      func_0x0001074dd08c();
      (*extraout_x8_01)(param_1,plVar6,3);
      func_0x0001074dd08c();
      (*extraout_x8_02)(uVar13,plVar6,4);
      (**(code **)(*plVar6 + 0x78))(plVar6,param_4,param_3[3]);
      (**(code **)(*plVar6 + 0x70))(plVar6,0,param_4);
      (**(code **)(*plVar6 + 0x78))(plVar6,plVar10,param_3[3]);
      (**(code **)(*plVar6 + 0x70))(plVar6,1,plVar10);
      puVar3 = puVar8;
      FUN_1074dcb84();
      if ((int)puVar3 != 0) {
        func_0x0001074dd08c(*(undefined4 *)(puVar8 + 0x1a0));
        (*extraout_x8_03)(plVar6,8);
        func_0x0001074dd08c(*(undefined4 *)(puVar8 + 0x1a4));
        (*extraout_x8_04)(plVar6,5);
        func_0x0001074dd08c(*(undefined4 *)(puVar8 + 0x1a8));
        (*extraout_x8_05)(plVar6,6);
        func_0x0001074dd08c(*(undefined4 *)(puVar8 + 0x1ac));
        (*extraout_x8_06)(plVar6,7);
      }
      uStack_398 = 4;
      uStack_394 = 0;
      (**(code **)(*plStack_2a0 + 0x138))
                (plStack_2a0,&uStack_398,*(undefined4 *)(param_3[1] + 0x18),1,
                 *(undefined4 *)(param_3[1] + 8));
      FUN_10748eeb8(&plStack_2a8);
    }
    plVar10 = plStack_2a0;
    plStack_2a0 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      func_0x0001074dd0bc();
    }
  }
  func_0x00010730b734(apuStack_298);
  func_0x000107267da8();
LAB_1074dc860:
  func_0x0001074dd078(uStack_f8);
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  puVar3 = auStack_288;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001074dd0c8();
  puVar8 = puVar3;
  func_0x0001074dd098();
  dVar15 = *(double *)(*(long *)(puVar8 + 0x28) + 0x78);
  uStack_3d8 = extraout_x8_08;
  _log2(dVar15);
  func_0x0001077512dc((float)dVar15,alStack_568);
  uStack_480 = *(undefined8 *)(puVar3 + 0xa0);
  iVar9 = (int)alStack_568;
  func_0x000107751334(extraout_x8_07);
  plVar5 = alStack_568;
  func_0x000107267da8(plVar5);
  func_0x0001074dd078(uStack_3d8);
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (iVar9 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_1074dcbbc();
  return plVar5 + 3;
}



/* Entry: 1074dc348; end: 1074dc94b;  */

long * FUN_1074dc348(undefined8 param_1,long param_2,long *param_3,long param_4,long *param_5,
                    undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long alStack_4e8 [29];
  undefined8 uStack_400;
  undefined8 uStack_358;
  undefined4 uStack_31c;
  undefined1 uStack_318;
  undefined1 uStack_317;
  undefined1 uStack_316;
  undefined1 uStack_315;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined2 uStack_308;
  undefined1 uStack_306;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 auStack_2f0 [16];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
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
  long *plStack_228;
  long *plStack_220;
  undefined8 *apuStack_218 [2];
  undefined1 auStack_208 [8];
  ulong uStack_200;
  byte bStack_1f1;
  undefined8 uStack_78;
  
  func_0x0001074dd098();
  uVar1 = *(int *)(param_4 + 400) == 1;
  uStack_78 = extraout_x8;
  if (!(bool)uVar1) {
    plVar4 = (long *)0x0;
    goto LAB_1074dc860;
  }
  uVar1 = *(int *)(param_4 + 0x110) == 1;
  if ((bool)uVar1) {
    FUN_1074dcb44(param_4 + 0xa0);
    func_0x00010724ef84(auStack_208);
    uVar1 = bStack_1f1 == 0;
    if (-1 < (char)bStack_1f1) {
      uStack_200 = (ulong)bStack_1f1;
    }
    if (uStack_200 == 0) {
LAB_1074dc3f4:
      plVar9 = (long *)0x0;
    }
    else {
      puVar2 = auStack_208;
      func_0x000100152bb8(puVar2,&UNK_10f415cc2);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1074dc3f4;
      puVar2 = auStack_208;
      func_0x000100152bb8(puVar2,&UNK_10f415cce);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1074dc3f4;
      puVar2 = auStack_208;
      func_0x0001000e107c(puVar2,param_3 + 6);
      plVar9 = (long *)0x0;
      if ((((ulong)puVar2 & 1) == 0) && (param_3[0xd] != 0)) {
        plVar9 = param_3 + 10;
        func_0x0001074dcb64(plVar9,auStack_208);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    if (plVar9 == (long *)0x0) goto LAB_1074dc404;
  }
  else {
LAB_1074dc404:
    plVar9 = param_5;
  }
  FUN_1074dc94c(auStack_208,*param_3);
  uStack_2b0._0_4_ = 0x3f400000;
  FUN_1074dc2d0(param_4 + 0x118,auStack_208,&uStack_2b0);
  auStack_2f0[0] = 0x3f800000;
  uVar12 = param_1;
  FUN_1074dc2d0(param_4 + 0x68,auStack_208,auStack_2f0);
  lVar3 = param_4;
  FUN_1074dcb84();
  uStack_31c = (undefined4)lVar3;
  param_2 = param_2 + 8;
  FUN_1074dc9d4(param_2,&uStack_31c);
  lVar3 = param_3[9];
  lVar10 = *param_3;
  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,0x23);
  uStack_2a8 = 0;
  uStack_2a0 = CONCAT44(*(undefined4 *)(lVar10 + 0x78),uStack_31c);
  uStack_298 = uStack_298 & 0xffffffffff000000;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0x101010100000000;
  uStack_278 = CONCAT62(uStack_278._2_6_,0xf01);
  FUN_1073ca29c(apuStack_218,*(undefined8 *)(lVar10 + 0x90),param_2,&uStack_2b0);
  if (apuStack_218[0] == (undefined8 *)0x0) {
LAB_1074dc84c:
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)*apuStack_218[0];
    (**(code **)(*plVar4 + 0x18))();
    uVar1 = (int)plVar4 == 2;
    if (!(bool)uVar1) goto LAB_1074dc84c;
    uStack_2a0 = 0x3f80000000000000;
    uStack_2a8 = 0;
    uStack_298 = CONCAT71(uStack_298._1_7_,1);
    uVar1 = (char)lVar3 == '\0';
    uVar13 = 0;
    if ((bool)uVar1) {
      uVar13 = 0x13f800000;
    }
    uStack_298 = CONCAT44((int)uVar13,(undefined4)uStack_298);
    uStack_290 = CONCAT71(uStack_290._1_7_,(char)((ulong)uVar13 >> 0x20));
    uStack_290 = uStack_290 & 0xffffffff;
    uStack_288 = CONCAT71(uStack_288._1_7_,uVar1);
    uStack_2b0 = param_6;
    (**(code **)(**(long **)(lVar10 + 0x10) + 0x28))
              (&plStack_220,*(long **)(lVar10 + 0x10),&UNK_10f415cde,&uStack_2b0);
    plVar4 = plStack_220;
    (**(code **)(*plStack_220 + 0x30))();
    if (((ulong)plVar4 & 1) != 0) {
      plStack_228 = plStack_220;
      (**(code **)(*plStack_220 + 0x10))(plStack_220,&UNK_10f415cd8,5);
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      plVar5 = *(long **)(lVar10 + 8);
      (**(code **)(*plVar5 + 0x10))();
      plVar6 = *(long **)(lVar10 + 8);
      (**(code **)(*plVar6 + 0x10))();
      uVar1 = (int)plVar5 == 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      func_0x000107876c5c(0,&uStack_2b0,plVar6);
      func_0x000107482794(auStack_2f0,&uStack_2b0);
      (**(code **)(*plStack_220 + 0x40))(plStack_220,apuStack_218[0]);
      uStack_300 = 7;
      uStack_2f8 = 0x3f800000;
      uStack_314 = 7;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_308 = 0x101;
      uStack_306 = 1;
      (**(code **)(*plStack_220 + 0x80))(plStack_220,&uStack_300,&uStack_318);
      uStack_316 = 1;
      uStack_318 = 0;
      uStack_317 = 1;
      (**(code **)(*plStack_220 + 0x88))(plStack_220,&uStack_318);
      (**(code **)(*plStack_220 + 0x58))(plStack_220,param_3[2]);
      (**(code **)(*plStack_220 + 0x60))(plStack_220,0,*(long *)(lVar10 + 0x48) + 0xa8);
      (**(code **)(*plStack_220 + 0x68))(plStack_220,*(undefined4 *)param_3[1]);
      (**(code **)(*plStack_220 + 0xd0))(plStack_220,0,auStack_2f0);
      uVar13 = NEON_fmov(0x3f800000,4);
      uStack_318 = (undefined1)uVar13;
      uStack_317 = (undefined1)((ulong)uVar13 >> 8);
      uStack_316 = (undefined1)((ulong)uVar13 >> 0x10);
      uStack_315 = (undefined1)((ulong)uVar13 >> 0x18);
      uStack_314 = (undefined4)((ulong)uVar13 >> 0x20);
      (**(code **)(*plStack_220 + 0xa8))(plStack_220,1,&uStack_318);
      plVar5 = plStack_220;
      uVar11 = (undefined4)uVar13;
      func_0x0001074dd054(plVar9);
      uStack_318 = (undefined1)uVar11;
      uStack_317 = (undefined1)((uint)uVar11 >> 8);
      uStack_316 = (undefined1)((uint)uVar11 >> 0x10);
      uStack_315 = (undefined1)((uint)uVar11 >> 0x18);
      uStack_314 = uVar15;
      uStack_310 = uVar16;
      uStack_30c = uVar17;
      (**(code **)(*plVar5 + 0xb8))(plVar5,2,&uStack_318);
      func_0x0001074dd08c();
      (*extraout_x8_00)(param_1,plVar5,3);
      func_0x0001074dd08c();
      (*extraout_x8_01)(uVar12,plVar5,4);
      (**(code **)(*plVar5 + 0x78))(plVar5,param_5,param_3[3]);
      (**(code **)(*plVar5 + 0x70))(plVar5,0,param_5);
      (**(code **)(*plVar5 + 0x78))(plVar5,plVar9,param_3[3]);
      (**(code **)(*plVar5 + 0x70))(plVar5,1,plVar9);
      lVar3 = param_4;
      FUN_1074dcb84();
      if ((int)lVar3 != 0) {
        func_0x0001074dd08c(*(undefined4 *)(param_4 + 0x1a0));
        (*extraout_x8_02)(plVar5,8);
        func_0x0001074dd08c(*(undefined4 *)(param_4 + 0x1a4));
        (*extraout_x8_03)(plVar5,5);
        func_0x0001074dd08c(*(undefined4 *)(param_4 + 0x1a8));
        (*extraout_x8_04)(plVar5,6);
        func_0x0001074dd08c(*(undefined4 *)(param_4 + 0x1ac));
        (*extraout_x8_05)(plVar5,7);
      }
      uStack_318 = 4;
      uStack_314 = 0;
      (**(code **)(*plStack_220 + 0x138))
                (plStack_220,&uStack_318,*(undefined4 *)(param_3[1] + 0x18),1,
                 *(undefined4 *)(param_3[1] + 8));
      FUN_10748eeb8(&plStack_228);
    }
    plVar9 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      func_0x0001074dd0bc();
    }
  }
  func_0x00010730b734(apuStack_218);
  func_0x000107267da8();
LAB_1074dc860:
  func_0x0001074dd078(uStack_78);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  puVar2 = auStack_208;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001074dd0c8();
  puVar7 = puVar2;
  func_0x0001074dd098();
  dVar14 = *(double *)(*(long *)(puVar7 + 0x28) + 0x78);
  uStack_358 = extraout_x8_07;
  _log2(dVar14);
  func_0x0001077512dc((float)dVar14,alStack_4e8);
  uStack_400 = *(undefined8 *)(puVar2 + 0xa0);
  iVar8 = (int)alStack_4e8;
  func_0x000107751334(extraout_x8_06);
  plVar4 = alStack_4e8;
  func_0x000107267da8(plVar4);
  func_0x0001074dd078(uStack_358);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_1074dcbbc();
  return plVar4 + 3;
}



/* Entry: 1074dc94c; end: 1074dc9d3;  */

undefined1 * FUN_1074dc94c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 extraout_x8;
  double dVar4;
  undefined1 auStack_1c8 [232];
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x0001074dd098();
  dVar4 = *(double *)(*(long *)(lVar1 + 0x28) + 0x78);
  uStack_38 = extraout_x8;
  _log2(dVar4);
  func_0x0001077512dc((float)dVar4,auStack_1c8);
  uStack_e0 = *(undefined8 *)(param_2 + 0xa0);
  iVar3 = (int)auStack_1c8;
  func_0x000107751334(param_1);
  puVar2 = auStack_1c8;
  func_0x000107267da8(puVar2);
  func_0x0001074dd078(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_1074dcbbc();
  return puVar2 + 0x18;
}



/* Entry: 1074dc9d4; end: 1074dca07;  */

long FUN_1074dc9d4(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1074dcbbc(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 1074dca08; end: 1074dca43;  */

void FUN_1074dca08(void)

{
  func_0x0001074dd0dc();
  return;
}



/* Entry: 1074dca44; end: 1074dca6b;  */

undefined1  [16] FUN_1074dca44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 5;
  auVar1._0_8_ = &UNK_10f415cd8;
  return auVar1;
}



/* Entry: 1074dca6c; end: 1074dcadf;  */

void FUN_1074dca6c(void)

{
  func_0x0001074dd0d0();
  FUN_1074dcae0();
  return;
}



/* Entry: 1074dcae0; end: 1074dcaf7;  */

void FUN_1074dcae0(long *param_1)

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



/* Entry: 1074dcaf8; end: 1074dcb43;  */

void FUN_1074dcaf8(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001074dd0d0();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1074dcb44; end: 1074dcb83;  */

long * FUN_1074dcb44(long param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x70) == 1) {
    return (long *)(param_1 + 8);
  }
  func_0x00010563ab98();
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001074dcb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x30))();
    return plVar3;
  }
  func_0x000104bfeb48();
  bVar1 = false;
  if ((*(float *)(plVar3 + 0x34) == 1.0) && (bVar1 = false, !NAN(*(float *)((long)plVar3 + 0x1a4))))
  {
    bVar1 = *(float *)((long)plVar3 + 0x1a4) == 1.0;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(*(float *)(plVar3 + 0x35)))) {
    bVar2 = *(float *)(plVar3 + 0x35) == 1.0;
  }
  if (!bVar2) {
    return (long *)0x1;
  }
  return (long *)(ulong)(*(float *)((long)plVar3 + 0x1ac) != 0.0);
}



/* Entry: 1074dcb84; end: 1074dcbbb;  */

bool FUN_1074dcb84(long param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1a0) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x1a4)))) {
    bVar1 = *(float *)(param_1 + 0x1a4) == 1.0;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x1a8)))) {
    bVar2 = *(float *)(param_1 + 0x1a8) == 1.0;
  }
  if (!bVar2) {
    return true;
  }
  return *(float *)(param_1 + 0x1ac) != 0.0;
}



/* Entry: 1074dcbbc; end: 1074dcdc7;  */

undefined1  [16] FUN_1074dcbbc(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x23;
  undefined1 auVar13 [16];
  long *aplStack_58 [3];
  
  uVar1 = *param_2;
  uVar9 = (ulong)uVar1;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar5 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar5) == 0) {
      unaff_x23 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1074dcc6c;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          if (*(uint *)(plVar10 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_1074dcd9c;
          }
        }
        if ((uVar12 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar12 <= uVar7) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar7 / uVar12;
          }
          uVar7 = uVar7 - uVar3 * uVar12;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_1074dcc6c:
  FUN_1074dcdc8(aplStack_58,param_1,uVar9);
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar12) {
      uVar5 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar5 = uVar5 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar12) {
      uVar5 = uVar12;
    }
    func_0x0001074dce1c(param_1,uVar5);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar9;
      if (uVar12 <= uVar9) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar9 / uVar12;
        }
        unaff_x23 = uVar9 - uVar5 * uVar12;
      }
    }
  }
  plVar10 = aplStack_58[0];
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar5 * uVar12;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1074dd018(aplStack_58);
  uVar4 = 1;
LAB_1074dcd9c:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar10;
  return auVar13;
}



/* Entry: 1074dcdc8; end: 1074dcee3;  */

void FUN_1074dcdc8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1074dcee4; end: 1074dcfe3;  */

void FUN_1074dcee4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1074dcfe4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1074dcffc(plVar3);
    FUN_1074dcfe4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074dcfe4; end: 1074dcffb;  */

void FUN_1074dcfe4(long *param_1,long param_2)

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



/* Entry: 1074dcffc; end: 1074dd017;  */

long FUN_1074dcffc(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_1074dd03c();
  return param_1;
}



/* Entry: 1074dd018; end: 1074dd03b;  */

undefined8 FUN_1074dd018(undefined8 param_1)

{
  FUN_1074dd03c(param_1,0);
  return param_1;
}



/* Entry: 1074dd03c; end: 1074dd0f3;  */

void FUN_1074dd03c(long *param_1,long param_2)

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



/* Entry: 1074dd0f4; end: 1074dd7f7;  */

long * FUN_1074dd0f4(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined4 uStack_350;
  float fStack_34c;
  uint uStack_33c;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  undefined1 uStack_326;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 *apuStack_2c0 [2];
  long alStack_2b0 [50];
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(int *)(param_3 + 400) == 2;
  if (!(bool)uVar7) {
    plVar9 = (long *)0x0;
    goto LAB_1074dd738;
  }
  if (*(int *)(param_3 + 0xa0) == 0) {
    uVar8 = 1;
  }
  else if (*(int *)(param_3 + 0xa0) == 1) {
    lVar13 = param_3 + 0x68;
    func_0x0001074dd0e8(lVar13,&UNK_10de753d4);
    uVar8 = (uint)lVar13;
  }
  else {
    uVar8 = 0;
  }
  iVar1 = *(int *)(param_3 + 0x150);
  uVar8 = *(int *)(param_3 + 0xf8) == 0 & uVar8;
  uVar12 = 0;
  if (uVar8 == 0) {
    uVar12 = 2;
  }
  if (iVar1 != 0) {
    uVar12 = uVar12 + 1;
  }
  lVar13 = param_3;
  FUN_1074dcb84();
  uStack_33c = 4;
  if ((int)lVar13 == 0) {
    uStack_33c = 0;
  }
  uStack_33c = uVar12 | uStack_33c;
  FUN_1074dc94c(alStack_2b0,*param_2);
  uStack_2f0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  FUN_1074dd850(&uStack_120,param_3 + 0x100,alStack_2b0,&uStack_310);
  fVar16 = 0.0;
  for (lVar13 = 0; lVar13 != 0x24; lVar13 = lVar13 + 4) {
    fVar16 = fVar16 + *(float *)((long)&uStack_120 + lVar13);
  }
  uStack_310 = CONCAT44(uStack_310._4_4_,fVar16);
  if (*(int *)(param_3 + 0x188) != 0) {
    fVar16 = (float)FUN_1074dc2d0(param_3 + 0x158,alStack_2b0,&uStack_310);
  }
  uStack_368 = uStack_118;
  uStack_370 = uStack_120;
  uStack_358 = uStack_108;
  uStack_360 = uStack_110;
  fVar31 = 1.0;
  if (fVar16 != 0.0) {
    fVar31 = 1.0 / fVar16;
  }
  uStack_350 = (undefined4)uStack_100;
  fStack_34c = fVar31;
  FUN_1074dd850(&uStack_310,param_3 + 0xa8,alStack_2b0,&UNK_10de75410);
  uVar27 = uStack_2f0;
  uVar6 = uStack_2f8;
  uVar5 = uStack_300;
  uVar4 = uStack_308;
  uVar30 = uStack_310;
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  uStack_e0 = 0;
  if (*(int *)(param_3 + 0xa0) == 0) {
    lVar13 = 0;
    uVar14 = 0;
  }
  else if (*(int *)(param_3 + 0xa0) == 1) {
    lVar13 = *(long *)(param_3 + 0x68);
    uVar14 = (ulong)*(uint *)(param_3 + 0x70) | 0x100000000;
  }
  else {
    lVar13 = param_3 + 0x68;
    plVar9 = alStack_2b0;
    FUN_1074393e4(lVar13,plVar9,&uStack_120);
    uVar14 = (ulong)plVar9 & 0xffffffffff;
  }
  uVar7 = (uVar14 & 0x100000000) == 0;
  uVar28 = 0;
  uVar2 = uVar28;
  uVar29 = uVar28;
  if (!(bool)uVar7) {
    uVar29 = (undefined4)uVar14;
    uVar28 = (undefined4)lVar13;
    uVar2 = (int)((ulong)lVar13 >> 0x20);
  }
  func_0x00010724b3d8(&uStack_120);
  auVar22._8_8_ = uVar4;
  auVar22._0_8_ = uVar30;
  auVar3._8_8_ = uVar6;
  auVar3._0_8_ = uVar5;
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = uVar5;
  auVar17 = NEON_ext(auVar17,auVar22,4,1);
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = auVar17._4_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = auVar17._12_4_;
  auVar20._12_4_ = auVar17._12_4_;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = (int)((ulong)uVar30 >> 0x20);
  auVar19._0_4_ = auVar17._4_4_;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = (int)((ulong)uVar4 >> 0x20);
  auVar17 = NEON_ext(auVar21,auVar21,8,1);
  auVar22 = NEON_ext(auVar22,auVar3,4,1);
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = auVar22._4_4_;
  auVar25._0_8_ = auVar23._0_8_;
  auVar25._8_4_ = auVar22._12_4_;
  auVar25._12_4_ = auVar22._12_4_;
  auVar24._8_8_ = auVar25._8_8_;
  auVar24._4_4_ = (int)((ulong)uVar5 >> 0x20);
  auVar24._0_4_ = auVar22._4_4_;
  auVar26._0_12_ = auVar24._0_12_;
  auVar26._12_4_ = (int)((ulong)uVar6 >> 0x20);
  auVar22 = NEON_ext(auVar26,auVar26,8,1);
  uStack_398 = auVar17._8_8_;
  uStack_3a0 = auVar17._0_8_;
  uStack_388 = auVar22._8_8_;
  uStack_390 = auVar22._0_8_;
  uStack_380 = uVar27;
  param_1 = param_1 + 1;
  uStack_37c = uVar28;
  uStack_378 = uVar2;
  uStack_374 = uVar29;
  FUN_1074dc9d4(param_1,&uStack_33c);
  lVar13 = param_2[9];
  lVar15 = *param_2;
  uStack_120 = CONCAT44(uStack_120._4_4_,0x21);
  uStack_118 = 0;
  uStack_110 = CONCAT44(*(undefined4 *)(lVar15 + 0x78),uStack_33c);
  uStack_108 = uStack_108 & 0xffffffffff000000;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x101010100000000;
  uStack_e8 = CONCAT62(uStack_e8._2_6_,0xf01);
  FUN_1073ca29c(apuStack_2c0,*(undefined8 *)(lVar15 + 0x90),param_1,&uStack_120);
  if (apuStack_2c0[0] == (undefined8 *)0x0) {
LAB_1074dd724:
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = (long *)*apuStack_2c0[0];
    (**(code **)(*plVar9 + 0x18))();
    uVar7 = (int)plVar9 == 2;
    if (!(bool)uVar7) goto LAB_1074dd724;
    uStack_110 = 0x3f80000000000000;
    uStack_118 = 0;
    uStack_108 = CONCAT71(uStack_108._1_7_,1);
    uVar7 = (char)lVar13 == '\0';
    uVar30 = 0;
    if ((bool)uVar7) {
      uVar30 = 0x13f800000;
    }
    uStack_108 = CONCAT44((int)uVar30,(undefined4)uStack_108);
    uStack_100 = CONCAT71(uStack_100._1_7_,(char)((ulong)uVar30 >> 0x20));
    uStack_100 = uStack_100 & 0xffffffff;
    uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar7);
    uStack_120 = param_5;
    (**(code **)(**(long **)(lVar15 + 0x10) + 0x28))
              (&plStack_2c8,*(long **)(lVar15 + 0x10),&UNK_10f415cde,&uStack_120);
    plVar9 = plStack_2c8;
    (**(code **)(*plStack_2c8 + 0x30))();
    if (((ulong)plVar9 & 1) != 0) {
      plStack_2d0 = plStack_2c8;
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8,&UNK_10f415ce6,0xe);
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      plVar10 = *(long **)(lVar15 + 8);
      (**(code **)(*plVar10 + 0x10))();
      plVar11 = *(long **)(lVar15 + 8);
      (**(code **)(*plVar11 + 0x10))();
      uVar7 = (int)plVar10 == 0;
      uVar30 = 0;
      if (!(bool)uVar7) {
        uVar30 = 0x3ff0000000000000;
      }
      uVar27 = 0;
      func_0x000107876c5c(0,0x3ff0000000000000,0,uVar30,0xbff0000000000000,0x3ff0000000000000,
                          &uStack_120,plVar11);
      uVar29 = (undefined4)uVar30;
      func_0x000107482794(&uStack_310,&uStack_120);
      (**(code **)(*plStack_2c8 + 0x40))(plStack_2c8,apuStack_2c0[0]);
      uStack_320 = 7;
      uStack_318 = 0x3f800000;
      uStack_334 = 7;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0x101;
      uStack_326 = 1;
      (**(code **)(*plStack_2c8 + 0x80))(plStack_2c8,&uStack_320,&uStack_338);
      uStack_336 = 1;
      uStack_338 = 0;
      uStack_337 = 1;
      (**(code **)(*plStack_2c8 + 0x88))(plStack_2c8,&uStack_338);
      (**(code **)(*plStack_2c8 + 0x58))(plStack_2c8,param_2[2]);
      (**(code **)(*plStack_2c8 + 0x60))(plStack_2c8,0,*(long *)(lVar15 + 0x48) + 0xa8);
      (**(code **)(*plStack_2c8 + 0x68))(plStack_2c8,*(undefined4 *)param_2[1]);
      (**(code **)(*plStack_2c8 + 0xd0))(plStack_2c8,0,&uStack_310);
      uVar30 = NEON_fmov(0x3f800000,4);
      uStack_338 = (undefined1)uVar30;
      uStack_337 = (undefined1)((ulong)uVar30 >> 8);
      uStack_336 = (undefined1)((ulong)uVar30 >> 0x10);
      uStack_335 = (undefined1)((ulong)uVar30 >> 0x18);
      uStack_334 = (undefined4)((ulong)uVar30 >> 0x20);
      (**(code **)(*plStack_2c8 + 0xa8))(plStack_2c8,1,&uStack_338);
      plVar10 = plStack_2c8;
      if (iVar1 != 0) {
        uVar30 = func_0x0001074dd054(param_4);
        uStack_334 = (undefined4)((ulong)uVar30 >> 0x20);
        uStack_338 = (undefined1)uVar30;
        uStack_337 = (undefined1)((ulong)uVar30 >> 8);
        uStack_336 = (undefined1)((ulong)uVar30 >> 0x10);
        uStack_335 = (undefined1)((ulong)uVar30 >> 0x18);
        uStack_330 = uVar27;
        uStack_32c = uVar29;
        (**(code **)(*plVar10 + 0xb8))(plVar10,4,&uStack_338);
        FUN_1074dd970();
        (*extraout_x8)(fVar31,plVar10,5);
        (**(code **)(*plVar10 + 0xe0))(plVar10,6,&uStack_370,9);
      }
      if (uVar8 == 0) {
        (**(code **)(*plVar10 + 200))(plVar10,2,&uStack_3a0);
        (**(code **)(*plVar10 + 0xb0))(plVar10,3,&uStack_37c);
      }
      (**(code **)(*plVar10 + 0x78))(plVar10,param_4,param_2[3]);
      (**(code **)(*plVar10 + 0x70))(plVar10,0,param_4);
      FUN_1074dcb84();
      if ((int)param_3 != 0) {
        FUN_1074dd970();
        (*extraout_x8_00)(plVar10,10);
        FUN_1074dd970();
        (*extraout_x8_01)(plVar10,7);
        FUN_1074dd970();
        (*extraout_x8_02)(plVar10,8);
        FUN_1074dd970();
        (*extraout_x8_03)(plVar10,9);
      }
      uStack_338 = 4;
      uStack_334 = 0;
      (**(code **)(*plStack_2c8 + 0x138))
                (plStack_2c8,&uStack_338,*(undefined4 *)(param_2[1] + 0x18),1,
                 *(undefined4 *)(param_2[1] + 8));
      FUN_10748eeb8(&plStack_2d0);
    }
    plVar10 = plStack_2c8;
    plStack_2c8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      func_0x0001074dd97c();
    }
  }
  func_0x00010730b734(apuStack_2c0);
  param_1 = alStack_2b0;
  func_0x000107267da8();
LAB_1074dd738:
  func_0x0001074dd9a0(uStack_98);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    FUN_10748eeb8(&plStack_2d0);
    plVar9 = plStack_2c8;
    plStack_2c8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      func_0x0001074dd97c();
    }
    func_0x00010730b734(apuStack_2c0);
    func_0x000107267da8(alStack_2b0);
    __Unwind_Resume(param_1);
    func_0x0001074dd994();
    return param_1;
  }
  return plVar9;
}



/* Entry: 1074dd7f8; end: 1074dd837;  */

void FUN_1074dd7f8(void)

{
  func_0x0001074dd994();
  return;
}



/* Entry: 1074dd838; end: 1074dd84f;  */

undefined1  [16] FUN_1074dd838(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f415ce6;
  return auVar1;
}



/* Entry: 1074dd850; end: 1074dd96f;  */

void FUN_1074dd850(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  char cStack_10c;
  undefined1 auStack_100 [56];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_100[0] = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if ((int)param_2[10] == 0) {
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    puVar2 = param_4;
  }
  else if ((int)param_2[10] == 1) {
    uStack_128 = param_2[1];
    uStack_130 = *param_2;
    uStack_118 = param_2[3];
    uStack_120 = param_2[2];
    uStack_110 = (int)param_2[4];
    in_ZR = 1;
    puVar2 = &uStack_130;
  }
  else {
    func_0x000107753050(auStack_b8,*param_2,param_3,auStack_100);
    if (iStack_40 == 1) {
      func_0x00010727f7dc(auStack_b8);
      func_0x0001077753a4(&uStack_130);
    }
    else {
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      cStack_10c = '\0';
    }
    func_0x0001074dd988();
    in_ZR = cStack_10c == '\0';
    puVar2 = &uStack_130;
    if ((bool)in_ZR) {
      puVar2 = param_4;
    }
  }
  uVar3 = *puVar2;
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar2 + 4);
  puVar1 = auStack_100;
  func_0x00010724b3d8(puVar1);
  func_0x0001074dd9a0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074dd988();
    func_0x00010724b3d8(auStack_100);
    __Unwind_Resume(puVar1);
    return;
  }
  return;
}



/* Entry: 1074dd970; end: 1074dd9b3;  */

void FUN_1074dd970(void)

{
  return;
}



/* Entry: 1074dd9b4; end: 1074de3f3;  */

long * FUN_1074dd9b4(long param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong unaff_x26;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined1 uStack_186;
  undefined1 uStack_185;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined2 uStack_178;
  undefined1 uStack_176;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 ***apppuStack_160 [2];
  char cStack_149;
  long *plStack_120;
  long *plStack_118;
  long *aplStack_110 [2];
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_3 + 400) == 3) {
    uVar1 = *(int *)(param_4 + 4) + 1U >> 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar2 = *(int *)(param_4 + 8) + 1U >> 1;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar10 = param_1 + 0x20;
    func_0x000100102e7c(uVar10,param_5);
    uVar13 = *(ulong *)(param_1 + 0x10);
    if (uVar13 != 0) {
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        unaff_x26 = uVar15 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar10 / uVar13;
          }
          unaff_x26 = uVar10 - uVar9 * uVar13;
        }
      }
      plVar16 = *(long **)(*(long *)(param_1 + 8) + unaff_x26 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_1074ddad4;
            uVar9 = plVar16[1];
            if (uVar9 != uVar10) break;
            plVar6 = plVar16 + 2;
            func_0x0001000e107c(plVar6,param_5);
            if (((ulong)plVar6 & 1) != 0) goto LAB_1074ddda4;
          }
          if ((uVar13 & uVar15) == 0) {
            uVar9 = uVar9 & uVar15;
          }
          else if (uVar13 <= uVar9) {
            uVar11 = 0;
            if (uVar13 != 0) {
              uVar11 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar11 * uVar13;
          }
        } while (uVar9 == unaff_x26);
      }
    }
LAB_1074ddad4:
    plVar6 = (long *)(param_1 + 0x18);
    plVar16 = (long *)0x80;
    __Znwm();
    uStack_f0 = (undefined8 ****)0x0;
    *plVar16 = 0;
    plVar16[1] = uVar10;
    plStack_100 = plVar16;
    plStack_f8 = plVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar16 + 2,param_5);
    plVar16[0xf] = 0;
    plVar16[0xe] = 0;
    plVar16[0xd] = 0;
    plVar16[0xc] = 0;
    plVar16[0xb] = 0;
    plVar16[10] = 0;
    plVar16[9] = 0;
    plVar16[8] = 0;
    plVar16[7] = 0;
    plVar16[6] = 0;
    plVar16[5] = 0;
    uStack_f0 = (undefined8 ****)CONCAT71(uStack_f0._1_7_,1);
    fVar18 = (float)(*(long *)(param_1 + 0x20) + 1);
    if ((uVar13 == 0) || (*(float *)(param_1 + 0x28) * (float)uVar13 < fVar18)) {
      uVar15 = 1;
      if (2 < uVar13) {
        uVar15 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar15 = uVar15 | uVar13 << 1;
      uVar13 = (ulong)(fVar18 / *(float *)(param_1 + 0x28));
      if (uVar15 <= uVar13) {
        uVar15 = uVar13;
      }
      if (uVar15 - 1 == 0) {
        uVar15 = 2;
      }
      else if ((uVar15 & uVar15 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar13 = *(ulong *)(param_1 + 0x10);
      if (uVar13 < uVar15) {
LAB_1074ddba0:
        uVar13 = uVar15;
        if (uVar13 >> 0x3d != 0) goto LAB_1074de328;
        lVar14 = uVar13 << 3;
        __Znwm(lVar14);
        func_0x0001074de88c(param_1 + 8,lVar14);
        *(ulong *)(param_1 + 0x10) = uVar13;
        lVar14 = *(long *)(param_1 + 8);
        for (uVar15 = 0; uVar13 != uVar15; uVar15 = uVar15 + 1) {
          *(undefined8 *)(lVar14 + uVar15 * 8) = 0;
        }
        plVar17 = (long *)*plVar6;
        if (plVar17 != (long *)0x0) {
          uVar11 = plVar17[1];
          uVar9 = uVar13 - 1;
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar11 / uVar13;
          }
          uVar12 = uVar11;
          if (uVar13 <= uVar11) {
            uVar12 = uVar11 - uVar15 * uVar13;
          }
          if ((uVar13 & uVar9) == 0) {
            uVar12 = uVar11 & uVar9;
          }
          *(long **)(lVar14 + uVar12 * 8) = plVar6;
          while (plVar7 = plVar17, plVar17 = (long *)*plVar7, plVar17 != (long *)0x0) {
            uVar15 = plVar17[1];
            if ((uVar13 & uVar9) == 0) {
              uVar15 = uVar15 & uVar9;
            }
            else if (uVar13 <= uVar15) {
              uVar11 = 0;
              if (uVar13 != 0) {
                uVar11 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar11 * uVar13;
            }
            if (uVar15 != uVar12) {
              if (*(long *)(lVar14 + uVar15 * 8) == 0) {
                *(long **)(lVar14 + uVar15 * 8) = plVar7;
                uVar12 = uVar15;
              }
              else {
                *plVar7 = *plVar17;
                *plVar17 = **(undefined8 **)(lVar14 + uVar15 * 8);
                **(long **)(lVar14 + uVar15 * 8) = (long)plVar17;
                plVar17 = plVar7;
              }
            }
          }
        }
      }
      else if (uVar15 < uVar13) {
        uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
        if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar15 <= uVar9) {
          uVar15 = uVar9;
        }
        if (uVar15 < uVar13) {
          if (uVar15 != 0) goto LAB_1074ddba0;
          func_0x0001074de88c(param_1 + 8,0);
          uVar13 = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
        else {
          uVar13 = *(ulong *)(param_1 + 0x10);
        }
      }
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x26 = uVar13 - 1 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar10 / uVar13;
          }
          unaff_x26 = uVar10 - uVar15 * uVar13;
        }
      }
    }
    lVar14 = *(long *)(param_1 + 8);
    plVar17 = *(long **)(lVar14 + unaff_x26 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar16 = *plVar6;
      *plVar6 = (long)plVar16;
      *(long **)(lVar14 + unaff_x26 * 8) = plVar6;
      if (*plVar16 != 0) {
        uVar10 = *(ulong *)(*plVar16 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar10 = uVar10 & uVar13 - 1;
        }
        else if (uVar13 <= uVar10) {
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar15 * uVar13;
        }
        *(long **)(lVar14 + uVar10 * 8) = plVar16;
      }
    }
    else {
      *plVar16 = *plVar17;
      *plVar17 = (long)plVar16;
    }
    plStack_100 = (long *)0x0;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    FUN_1074de8a4(&plStack_100);
LAB_1074ddda4:
    if ((((char)plVar16[8] != '\x01') || (*(uint *)((long)plVar16 + 0x2c) != uVar1)) ||
       (*(uint *)(plVar16 + 6) != uVar2)) {
      plVar17 = (long *)CONCAT44(uVar2,uVar1);
      FUN_1074979d4(plVar16 + 0xd);
      FUN_1074de3f4(plVar16 + 9);
      FUN_107456c98(plVar16 + 5);
      plVar6 = *(long **)(*param_2 + 8);
      func_0x0001073caeb8();
      uVar10 = (ulong)uStack_170 >> 0x10;
      uStack_170 = CONCAT62((uint6)uVar10 & 0xffffffffff00,0x100);
      FUN_107497a08(&plStack_100);
      FUN_107440a90(plVar16 + 5,&plStack_100);
      uVar10 = (ulong)uStack_f0;
      uStack_f0 = (undefined8 ****)0x0;
      if (uVar10 != 0) {
        FUN_1074de8e8();
      }
      (**(code **)(*plVar6 + 0x90))(apppuStack_160,plVar6,plVar17,0xf,0);
      plStack_f8 = (long *)CONCAT62(plStack_f8._2_6_,0xf);
      uStack_f0 = (undefined8 ****)apppuStack_160[0];
      plStack_100 = plVar17;
      func_0x0001074de428(plVar16 + 9,&plStack_100);
      ppppuVar3 = uStack_f0;
      uStack_f0 = (undefined8 ****)0x0;
      if (ppppuVar3 != (undefined8 ****)0x0) {
        FUN_1074de8e8();
      }
      FUN_107498684(&plStack_100);
      plVar7 = plVar16 + 5;
      FUN_1073b9c0c();
      if (((ulong)uStack_f0 & 1) == 0) {
        uStack_f0 = (undefined8 ****)CONCAT71(uStack_f0._1_7_,1);
      }
      plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
      plVar8 = plVar16 + 9;
      plStack_100 = plVar7;
      FUN_1074de480();
      if ((char)uStack_88 == '\x01') {
        if ((int)uStack_90 != 1) {
          uStack_90 = CONCAT44(uStack_90._4_4_,1);
        }
      }
      else {
        uStack_90 = CONCAT44(uStack_90._4_4_,1);
        uStack_88 = CONCAT71(uStack_88._1_7_,1);
      }
      plStack_a0 = plVar8;
      func_0x00010002b838(&uStack_188,&UNK_10f415cf5);
      func_0x000100610910(apppuStack_160,&uStack_188,param_5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_188);
      if (-1 < cStack_149) {
        apppuStack_160[0] = apppuStack_160;
      }
      aplStack_110[0] = plVar17;
      (**(code **)(*plVar6 + 0x70))(&uStack_180,plVar6,apppuStack_160[0],aplStack_110,&plStack_100);
      uStack_188 = (undefined1)uVar1;
      uStack_187 = (undefined1)(uVar1 >> 8);
      uStack_186 = (undefined1)(uVar1 >> 0x10);
      uStack_185 = (undefined1)(uVar1 >> 0x18);
      uStack_184 = uVar2;
      FUN_107497a1c(plVar16 + 0xd,&uStack_188);
      lVar14 = CONCAT44(uStack_17c,uStack_180);
      uStack_180 = 0;
      uStack_17c = 0;
      if (lVar14 != 0) {
        FUN_1074de8e8();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_160);
    }
    lVar14 = param_3;
    FUN_1074dcb84();
    uStack_18c = (undefined4)lVar14;
    param_1 = param_1 + 0x30;
    FUN_1074dc9d4(param_1,&uStack_18c);
    lVar14 = *param_2;
    plStack_f8 = (long *)0x0;
    plStack_100 = (long *)CONCAT44(plStack_100._4_4_,0x22);
    uStack_f0 = (undefined8 ****)CONCAT44(*(undefined4 *)(lVar14 + 0x78),uStack_18c);
    uStack_e8 = uStack_e8 & 0xffffffffff000000;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x101010100000000;
    uStack_c8 = CONCAT62(uStack_c8._2_6_,0xf01);
    FUN_1073ca29c(aplStack_110,*(undefined8 *)(lVar14 + 0x90),param_1,&plStack_100);
    if (aplStack_110[0] == (long *)0x0) {
LAB_1074de2dc:
      plVar16 = (long *)0x0;
    }
    else {
      plVar6 = (long *)*aplStack_110[0];
      (**(code **)(*plVar6 + 0x18))();
      if ((int)plVar6 != 2) goto LAB_1074de2dc;
      plStack_100 = plVar16 + 0xd;
      uStack_f0 = (undefined8 ****)0x3f80000000000000;
      plStack_f8 = (long *)0x0;
      uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
      uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
      uStack_e8 = CONCAT44(0x3f800000,(undefined4)uStack_e8);
      uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
      uStack_e0 = uStack_e0 & 0xffffffff;
      (**(code **)(**(long **)(lVar14 + 0x10) + 0x28))
                (&plStack_118,*(long **)(lVar14 + 0x10),&UNK_10f415cde,&plStack_100);
      plVar16 = plStack_118;
      (**(code **)(*plStack_118 + 0x30))();
      if (((ulong)plVar16 & 1) != 0) {
        plStack_120 = plStack_118;
        (**(code **)(*plStack_118 + 0x10))(plStack_118,&UNK_10f415a86,10);
        uStack_98 = 0;
        plStack_a0 = (long *)0x0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        plStack_f8 = (long *)0x0;
        plStack_100 = (long *)0x0;
        uStack_e8 = 0;
        uStack_f0 = (undefined8 ****)0x0;
        plVar6 = *(long **)(lVar14 + 8);
        (**(code **)(*plVar6 + 0x10))();
        plVar17 = *(long **)(lVar14 + 8);
        (**(code **)(*plVar17 + 0x10))();
        bVar5 = (int)plVar6 != 0;
        uVar20 = 0;
        if (bVar5) {
          uVar20 = 0x3ff0000000000000;
        }
        uVar19 = 0x3ff0000000000000;
        if (bVar5) {
          uVar19 = 0;
        }
        func_0x000107876c5c(0,0x3ff0000000000000,uVar19,uVar20,0xbff0000000000000,0x3ff0000000000000
                            ,&plStack_100,plVar17);
        func_0x000107482794(apppuStack_160,&plStack_100);
        (**(code **)(*plStack_118 + 0x40))(plStack_118,aplStack_110[0]);
        uStack_170 = 7;
        uStack_168 = 0x3f800000;
        uStack_184 = 7;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_178 = 0x101;
        uStack_176 = 1;
        (**(code **)(*plStack_118 + 0x80))(plStack_118,&uStack_170,&uStack_188);
        uStack_186 = 1;
        uStack_188 = 0;
        uStack_187 = 1;
        (**(code **)(*plStack_118 + 0x88))(plStack_118,&uStack_188);
        (**(code **)(*plStack_118 + 0x58))(plStack_118,param_2[2]);
        (**(code **)(*plStack_118 + 0x60))(plStack_118,0,*(long *)(lVar14 + 0x48) + 0xa8);
        (**(code **)(*plStack_118 + 0x68))(plStack_118,*(undefined4 *)param_2[1]);
        (**(code **)(*plStack_118 + 0xd0))(plStack_118,0,apppuStack_160);
        uVar20 = NEON_fmov(0x3f800000,4);
        uStack_188 = (undefined1)uVar20;
        uStack_187 = (undefined1)((ulong)uVar20 >> 8);
        uStack_186 = (undefined1)((ulong)uVar20 >> 0x10);
        uStack_185 = (undefined1)((ulong)uVar20 >> 0x18);
        uStack_184 = (uint)((ulong)uVar20 >> 0x20);
        (**(code **)(*plStack_118 + 0xa8))(plStack_118,1,&uStack_188);
        plVar6 = plStack_118;
        (**(code **)(*plStack_118 + 0x78))(plStack_118,param_4,param_2[3]);
        (**(code **)(*plVar6 + 0x70))(plVar6,0,param_4);
        lVar14 = param_3;
        FUN_1074dcb84();
        if ((int)lVar14 != 0) {
          func_0x0001074de8fc(*(undefined4 *)(param_3 + 0x1a0));
          (*extraout_x8)(plVar6,5);
          func_0x0001074de8fc(*(undefined4 *)(param_3 + 0x1a4));
          (*extraout_x8_00)(plVar6,2);
          func_0x0001074de8fc(*(undefined4 *)(param_3 + 0x1a8));
          (*extraout_x8_01)(plVar6,3);
          func_0x0001074de8fc(*(undefined4 *)(param_3 + 0x1ac));
          (*extraout_x8_02)(plVar6,4);
        }
        uStack_188 = 4;
        uStack_184 = 0;
        (**(code **)(*plStack_118 + 0x138))
                  (plStack_118,&uStack_188,*(undefined4 *)(param_2[1] + 0x18),1,
                   *(undefined4 *)(param_2[1] + 8));
        FUN_10748eeb8(&plStack_120);
      }
      plVar6 = plStack_118;
      plStack_118 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        FUN_1074de8e8();
      }
    }
    func_0x00010730b734(aplStack_110);
  }
  else {
    plVar16 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar16;
  }
  ___stack_chk_fail();
LAB_1074de328:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1074de330);
  (*pcVar4)();
}



/* Entry: 1074de3f4; end: 1074de47f;  */

void FUN_1074de3f4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1074de67c(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1074de480; end: 1074de497;  */

long FUN_1074de480(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar2 = (long *)(param_1 + 0x20), *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + (long)plVar8 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          plVar4 = (long *)plVar5[1];
          if (plVar4 != plVar2) break;
          lVar3 = (long)(plVar5 + 2);
          func_0x0001000e107c(lVar3,param_2);
          if ((int)lVar3 != 0) {
            if (*(char *)(plVar5 + 8) == '\0') {
              return 0;
            }
            return (long)(plVar5 + 5);
          }
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar7);
        }
        else if (plVar6 <= plVar4) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
        }
      } while (plVar4 == plVar8);
    }
  }
  return 0;
}



/* Entry: 1074de498; end: 1074de57b;  */

long FUN_1074de498(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar2 = (long *)(param_1 + 0x20), *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + (long)plVar8 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          plVar4 = (long *)plVar5[1];
          if (plVar4 != plVar2) break;
          lVar3 = (long)(plVar5 + 2);
          func_0x0001000e107c(lVar3,param_2);
          if ((int)lVar3 != 0) {
            if (*(char *)(plVar5 + 8) == '\0') {
              return 0;
            }
            return (long)(plVar5 + 5);
          }
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar7);
        }
        else if (plVar6 <= plVar4) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar4 / (ulong)plVar6;
          }
          plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
        }
      } while (plVar4 == plVar8);
    }
  }
  return 0;
}



/* Entry: 1074de57c; end: 1074de64b;  */

void FUN_1074de57c(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001074de78c(param_1 + 8,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar2 = *(long *)(param_1 + 0x10);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x0001074dd0d0();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1074de64c; end: 1074de64f;  */

long FUN_1074de64c(long param_1)

{
  FUN_1074dca6c(param_1 + 0x30);
  func_0x0001074de764(param_1 + 8);
  return param_1;
}



/* Entry: 1074de650; end: 1074de663;  */

void FUN_1074de650(void)

{
  FUN_1074de738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074de664; end: 1074de67b;  */

undefined1  [16] FUN_1074de664(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f415a86;
  return auVar1;
}



/* Entry: 1074de67c; end: 1074de70f;  */

long * FUN_1074de67c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1074de8e8();
  }
  return param_1;
}



/* Entry: 1074de710; end: 1074de737;  */

undefined4 FUN_1074de710(int param_1)

{
  if (param_1 - 1U < 0xb) {
    return *(undefined4 *)(&UNK_10de75464 + ((ulong)(param_1 - 1U) & 0xff) * 4);
  }
  return 0;
}



/* Entry: 1074de738; end: 1074de873;  */

long FUN_1074de738(long param_1)

{
  FUN_1074dca6c(param_1 + 0x30);
  func_0x0001074de764(param_1 + 8);
  return param_1;
}



/* Entry: 1074de874; end: 1074de8a3;  */

void FUN_1074de874(long *param_1)

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



/* Entry: 1074de8a4; end: 1074de8e7;  */

long * FUN_1074de8a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074de7c8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1074de8e8; end: 1074de91f;  */

void FUN_1074de8e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001074de8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1074de920; end: 1074deb9b;  */

undefined8 * FUN_1074de920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x19) = 0x303;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0xca) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  puVar1 = param_1;
  func_0x0001074e2234();
  puVar1[5] = 0;
  func_0x0001074e20c8(&UNK_1109b5790);
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  uStack_50 = 0;
  puStack_48 = puVar1;
  func_0x0001074e222c();
  if (puStack_48 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  FUN_1074e1be0(&uStack_50);
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_FUN_1109b5810;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  uStack_50 = 0;
  func_0x0001074e222c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  puVar1 = &uStack_50;
  func_0x0001074e1c08();
  func_0x0001074e2234();
  puVar1[5] = 0;
  func_0x0001074e20c8(&UNK_1109b5720);
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  uStack_50 = 0;
  func_0x0001074e222c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  puVar1 = &uStack_50;
  func_0x0001074e1c30();
  func_0x0001074e2234();
  puVar1[5] = 0;
  func_0x0001074e20c8(&UNK_1109b5990);
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  uStack_50 = 0;
  func_0x0001074e222c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  func_0x0001074e1c58(&uStack_50);
  return param_1;
}



/* Entry: 1074deb9c; end: 1074df007;  */

void FUN_1074deb9c(long param_1,ulong *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  code *extraout_x8;
  ulong uVar8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar9;
  long *plVar10;
  long *extraout_x10;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_x11;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong unaff_x23;
  ulong *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uStack_78;
  ulong *puStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    return;
  }
  puVar7 = param_2;
  func_0x0001074e2220();
  (*extraout_x8)();
  lVar13 = param_1 + 0x100;
  uStack_78 = uVar4;
  puStack_70 = puVar7;
  FUN_1074e1c80(lVar13,&uStack_78);
  if (lVar13 != 0) {
    return;
  }
  uVar19 = *param_2;
  uVar4 = uStack_78;
  func_0x0001001030f4(uStack_78,uStack_78 + (long)puStack_70);
  uVar18 = *(ulong *)(param_1 + 0x108);
  if (uVar18 != 0) {
    uVar14 = uVar18 - 1;
    if ((uVar18 & uVar14) == 0) {
      unaff_x23 = uVar14 & uVar4;
    }
    else {
      unaff_x23 = uVar4;
      if (uVar18 <= uVar4) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar4 / uVar18;
        }
        unaff_x23 = uVar4 - uVar8 * uVar18;
      }
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x100) + unaff_x23 * 8);
    if (plVar17 != (long *)0x0) {
      do {
        while( true ) {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_1074dec8c;
          uVar8 = plVar17[1];
          if (uVar8 != uVar4) break;
          uVar8 = param_1 + 0x120;
          func_0x00010728905c(uVar8,plVar17 + 2,&uStack_78);
          if ((uVar8 & 1) != 0) goto LAB_1074def1c;
        }
        if ((uVar18 & uVar14) == 0) {
          uVar8 = uVar8 & uVar14;
        }
        else if (uVar18 <= uVar8) {
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar11 = uVar8 / uVar18;
          }
          uVar8 = uVar8 - uVar11 * uVar18;
        }
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1074dec8c:
  plVar17 = (long *)(param_1 + 0x110);
  plVar5 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar5 = 0;
  plVar5[1] = uVar4;
  plVar5[3] = (long)puStack_70;
  plVar5[2] = uStack_78;
  plVar5[4] = uVar19;
  plStack_60 = plVar17;
  if ((uVar18 == 0) ||
     (*(float *)(param_1 + 0x120) * (float)uVar18 < (float)(*(long *)(param_1 + 0x118) + 1))) {
    bVar2 = 2 < uVar18;
    bVar3 = uVar18 == 3;
    plStack_68 = plVar5;
    func_0x0001074e2110(uVar18 << 1);
    uVar19 = extraout_x8_00;
    if (!bVar2 || bVar3) {
      uVar19 = extraout_x9;
    }
    if (uVar19 - 1 == 0) {
      uVar19 = 2;
    }
    else if ((uVar19 & uVar19 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar18 = *(ulong *)(param_1 + 0x108);
    if (uVar18 < uVar19) {
LAB_1074ded30:
      if (uVar19 >> 0x3d != 0) goto LAB_1074deff0;
      lVar13 = uVar19 << 3;
      __Znwm(lVar13);
      FUN_1074e1d68(param_1 + 0x100,lVar13);
      *(ulong *)(param_1 + 0x108) = uVar19;
      lVar13 = *(long *)(param_1 + 0x100);
      for (uVar18 = 0; uVar19 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar13 + uVar18 * 8) = 0;
      }
      plVar9 = (long *)*plVar17;
      uVar18 = uVar19;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar8 = uVar19 - 1;
        uVar14 = 0;
        if (uVar19 != 0) {
          uVar14 = uVar11 / uVar19;
        }
        uVar12 = uVar11;
        if (uVar19 <= uVar11) {
          uVar12 = uVar11 - uVar14 * uVar19;
        }
        if ((uVar19 & uVar8) == 0) {
          uVar12 = uVar11 & uVar8;
        }
        *(long **)(lVar13 + uVar12 * 8) = plVar17;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar14 = plVar9[1];
          if ((uVar19 & uVar8) == 0) {
            uVar14 = uVar14 & uVar8;
          }
          else if (uVar19 <= uVar14) {
            uVar11 = 0;
            if (uVar19 != 0) {
              uVar11 = uVar14 / uVar19;
            }
            uVar14 = uVar14 - uVar11 * uVar19;
          }
          if (uVar14 != uVar12) {
            if (*(long *)(lVar13 + uVar14 * 8) == 0) {
              *(long **)(lVar13 + uVar14 * 8) = plVar10;
              uVar12 = uVar14;
            }
            else {
              func_0x0001074e21c8();
              lVar13 = extraout_x8_01;
              uVar8 = extraout_x9_00;
              plVar9 = extraout_x10;
              uVar12 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar19 < uVar18) {
      uVar14 = (ulong)((float)*(ulong *)(param_1 + 0x118) / *(float *)(param_1 + 0x120));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar14) {
        uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
      }
      if (uVar19 <= uVar14) {
        uVar19 = uVar14;
      }
      if (uVar19 < uVar18) {
        if (uVar19 != 0) goto LAB_1074ded30;
        FUN_1074e1d68(param_1 + 0x100,0);
        *(undefined8 *)(param_1 + 0x108) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(param_1 + 0x108);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x23 = uVar18 - 1 & uVar4;
    }
    else {
      unaff_x23 = uVar4;
      if (uVar18 <= uVar4) {
        uVar19 = 0;
        if (uVar18 != 0) {
          uVar19 = uVar4 / uVar18;
        }
        unaff_x23 = uVar4 - uVar19 * uVar18;
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x100);
  plVar9 = *(long **)(lVar13 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar5 = *plVar17;
    *plVar17 = (long)plVar5;
    *(long **)(lVar13 + unaff_x23 * 8) = plVar17;
    if (*plVar5 != 0) {
      uVar4 = *(ulong *)(*plVar5 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar4 = uVar4 & uVar18 - 1;
      }
      else if (uVar18 <= uVar4) {
        uVar19 = 0;
        if (uVar18 != 0) {
          uVar19 = uVar4 / uVar18;
        }
        uVar4 = uVar4 - uVar19 * uVar18;
      }
      *(long **)(lVar13 + uVar4 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar9;
    *plVar9 = (long)plVar5;
  }
  plStack_68 = (long *)0x0;
  *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  FUN_1074e1d80(&plStack_68);
LAB_1074def1c:
  puVar7 = *(ulong **)(param_1 + 0xf0);
  if (puVar7 < *(ulong **)(param_1 + 0xf8)) {
    uVar4 = *param_2;
    *param_2 = 0;
    puVar16 = puVar7 + 1;
    *puVar7 = uVar4;
    goto LAB_1074defc8;
  }
  lVar13 = *(long *)(param_1 + 0xe8);
  lVar15 = (long)puVar7 - lVar13;
  uVar4 = (lVar15 >> 3) + 1;
  if (uVar4 >> 0x3d == 0) {
    uVar19 = (long)*(ulong **)(param_1 + 0xf8) - lVar13;
    uVar18 = (long)uVar19 >> 2;
    if (uVar18 <= uVar4) {
      uVar18 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar19) {
      uVar18 = 0x1fffffffffffffff;
    }
    if (uVar18 == 0) {
      lVar6 = 0;
    }
    else {
      if (uVar18 >> 0x3d != 0) goto LAB_1074defec;
      lVar6 = uVar18 << 3;
      __Znwm();
    }
    puVar7 = (ulong *)(lVar6 + lVar15);
    uVar4 = *param_2;
    *param_2 = 0;
    puVar16 = puVar7 + 1;
    *puVar7 = uVar4;
    _memcpy(puVar7 + -(lVar15 >> 3),lVar13,lVar15);
    *(ulong **)(param_1 + 0xe8) = puVar7 + -(lVar15 >> 3);
    *(ulong **)(param_1 + 0xf0) = puVar16;
    *(ulong *)(param_1 + 0xf8) = lVar6 + uVar18 * 8;
    if (lVar13 != 0) {
      __ZdlPv(lVar13);
    }
LAB_1074defc8:
    *(ulong **)(param_1 + 0xf0) = puVar16;
    return;
  }
  FUN_1074e0ea4();
LAB_1074defec:
  func_0x000104bd35f4();
LAB_1074deff0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1074deff8);
  (*pcVar1)();
}



/* Entry: 1074df008; end: 1074df05b;  */

long FUN_1074df008(long param_1)

{
  FUN_1074df05c();
  func_0x0001074e1b50(param_1 + 0x100);
  FUN_1074e0d90(param_1 + 0xe8);
  FUN_1074e1a40(param_1 + 0xa0);
  FUN_107440dd8(param_1 + 0x80);
  func_0x0001074e0e3c(param_1 + 0x48);
  func_0x0001074e0e70(param_1 + 8);
  return param_1;
}



/* Entry: 1074df05c; end: 1074df16f;  */

void FUN_1074df05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1074979d4(param_1 + 9);
  FUN_1074979d4(param_1 + 0xc);
  FUN_107456c98(param_1 + 1);
  FUN_107456c98(param_1 + 5);
  FUN_107456c98(param_1 + 0x10);
  func_0x0001074e1da4(param_1 + 0x14);
  puVar1 = (undefined8 *)param_1[0x1e];
  for (puVar2 = (undefined8 *)param_1[0x1d]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    func_0x0001074e22b4(*puVar2);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 1074df170; end: 1074df1db;  */

ulong FUN_1074df170(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  func_0x0001074e21a8();
  uVar2 = unaff_x19;
  func_0x000100152bb8();
  if ((uVar2 & 1) == 0) {
    func_0x0001074e20e8();
    uVar2 = unaff_x19;
    func_0x000100152bb8();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(unaff_x20 + 8);
      func_0x0001067e0440();
      if (uVar2 == 0) {
        uVar2 = *(ulong *)(unaff_x20 + 0x10);
        func_0x0001004c3c6c(uVar2);
        if ((unaff_x19 & 1) != 0) {
          lVar3 = *(long *)(unaff_x20 + 0x18);
          uVar2 = *(ulong *)(lVar3 + 8);
          if (uVar2 < *(ulong *)(lVar3 + 0x10)) {
            func_0x0001009bfa50();
            lVar1 = uVar2 + 0x18;
          }
          else {
            lVar1 = lVar3;
            func_0x0001000480f4();
          }
          *(long *)(lVar3 + 8) = lVar1;
          return lVar1 - 0x18;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 1074df1dc; end: 1074df4b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074df1dc(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 ******ppppppuVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 extraout_x8;
  undefined8 ******ppppppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 auStack_140 [3];
  undefined8 uStack_128;
  long alStack_120 [2];
  undefined8 *******apppppppuStack_110 [2];
  char cStack_f9;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined8 *puStack_f0;
  undefined4 uStack_e8;
  byte bStack_e0;
  undefined8 *puStack_90;
  undefined4 uStack_88;
  int iStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  puVar5 = param_1;
  func_0x0001074e223c();
  puVar5 = puVar5 + 9;
  uStack_70 = extraout_x8;
  FUN_1074979d4(puVar5);
  FUN_1074979d4(param_1 + 0xc);
  puVar12 = param_1 + 1;
  FUN_107456c98(puVar12);
  FUN_107456c98(param_1 + 5);
  FUN_107456c98(param_1 + 0x10);
  func_0x0001074e1da4(param_1 + 0x14);
  puVar8 = (undefined8 *)param_1[0x1e];
  for (puVar6 = (undefined8 *)param_1[0x1d]; puVar6 != puVar8; puVar6 = puVar6 + 1) {
    func_0x0001074e22b4(*puVar6);
  }
  uStack_f2 = 0;
  uStack_f4 = 0x100;
  func_0x0001074e2144();
  puVar6 = puVar12;
  FUN_107440a90(puVar12,&puStack_f0);
  func_0x0001074e22cc();
  if (puVar6 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  func_0x0001074e2144();
  puVar6 = param_1 + 5;
  FUN_107440a90(puVar6,&puStack_f0);
  func_0x0001074e22cc();
  if (puVar6 != (undefined8 *)0x0) {
    func_0x0001074e207c();
  }
  uStack_f6 = 0;
  uStack_f8 = 0x100;
  FUN_107497a08(&puStack_f0,param_2,*param_3,(long)param_1 + 0xcd,0xf,&uStack_f8);
  pppppppuVar7 = (undefined8 *******)(param_1 + 0x10);
  FUN_107440a90(pppppppuVar7,&puStack_f0);
  func_0x0001074e22cc();
  if (pppppppuVar7 != (undefined8 *******)0x0) {
    func_0x0001074e207c();
  }
  for (lVar13 = 0; bVar3 = lVar13 == 2, !bVar3; lVar13 = lVar13 + 1) {
    FUN_107498684(&puStack_f0);
    puVar6 = puVar12;
    FUN_1073b9c0c();
    uStack_e8 = 0;
    if ((bStack_e0 & 1) == 0) {
      bStack_e0 = 1;
    }
    puVar8 = param_1 + 0x10;
    puStack_f0 = puVar6;
    FUN_1073b9c0c();
    if (cStack_78 == '\x01') {
      if (iStack_80 != 0) {
        iStack_80 = 0;
      }
    }
    else {
      iStack_80 = 0;
      cStack_78 = '\x01';
    }
    uStack_88 = 0;
    puStack_90 = puVar8;
    func_0x00010002b838(&uStack_128,&UNK_10f415d1d);
    __ZNSt3__19to_stringEi(auStack_140,lVar13);
    func_0x00010533a9c0(apppppppuStack_110,&uStack_128,auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_128);
    pppppppuVar7 = apppppppuStack_110[0];
    if (-1 < cStack_f9) {
      pppppppuVar7 = apppppppuStack_110;
    }
    uVar14 = *param_3;
    auStack_140[0] = uVar14;
    (**(code **)(*param_2 + 0x70))(alStack_120,param_2,pppppppuVar7,auStack_140,&puStack_f0);
    uStack_128 = uVar14;
    FUN_107497a1c(puVar5,&uStack_128);
    lVar2 = alStack_120[0];
    alStack_120[0] = 0;
    if (lVar2 != 0) {
      func_0x0001074e207c();
    }
    pppppppuVar7 = apppppppuStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar12 = puVar12 + 4;
    puVar5 = puVar5 + 3;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = *param_3;
  func_0x0001074e2194(uStack_70);
  if (!bVar3) {
    ___stack_chk_fail();
    pppppppuVar9 = pppppppuVar7;
    func_0x0001074e22cc();
    if (pppppppuVar9 != (undefined8 *******)0x0) {
      func_0x0001074e207c();
    }
    func_0x0001074e20fc();
    func_0x0001074e2188();
    func_0x0001074e21a8();
    puVar5 = param_1;
    func_0x000100152bb8();
    if ((int)puVar5 == 0) {
      func_0x0001074e20e8();
      puVar5 = param_1;
      func_0x000100152bb8();
      if ((int)puVar5 == 0) {
        ppppppuVar1 = pppppppuVar7[0x1e];
        for (ppppppuVar11 = pppppppuVar7[0x1d]; ppppppuVar11 != ppppppuVar1;
            ppppppuVar11 = ppppppuVar11 + 1) {
          iVar4 = (int)*ppppppuVar11;
          func_0x0001074e20bc();
          if (iVar4 != 0) {
            pppppuVar10 = *ppppppuVar11;
            (*(code *)(*pppppuVar10)[6])(pppppuVar10,param_1);
            if (pppppuVar10 != (undefined8 *****)0x0) {
              return;
            }
          }
        }
        FUN_1074e1ec0(pppppppuVar7 + 0x14,param_1);
      }
      else {
        func_0x0001074e22d8();
      }
    }
    return;
  }
  return;
}



/* Entry: 1074df4b4; end: 1074df68b;  */

void FUN_1074df4b4(void)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long unaff_x19;
  int unaff_w20;
  long *plVar4;
  
  func_0x0001074e2188();
  func_0x0001074e21a8();
  iVar2 = unaff_w20;
  func_0x000100152bb8();
  if (iVar2 == 0) {
    func_0x0001074e20e8();
    func_0x000100152bb8();
    if (unaff_w20 == 0) {
      plVar1 = *(long **)(unaff_x19 + 0xf0);
      for (plVar4 = *(long **)(unaff_x19 + 0xe8); plVar4 != plVar1; plVar4 = plVar4 + 1) {
        iVar2 = (int)*plVar4;
        func_0x0001074e20bc();
        if (iVar2 != 0) {
          plVar3 = (long *)*plVar4;
          (**(code **)(*plVar3 + 0x30))();
          if (plVar3 != (long *)0x0) {
            return;
          }
        }
      }
      FUN_1074e1ec0();
    }
    else {
      func_0x0001074e22d8();
    }
  }
  return;
}



/* Entry: 1074df68c; end: 1074dfa6f;  */

long * FUN_1074df68c(long param_1,long param_2,undefined4 *param_3,undefined8 param_4,long param_5,
                    undefined8 param_6)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long ****pppplVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *****ppppplVar18;
  long *plVar19;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  long ******pppppplVar20;
  undefined8 extraout_x8_04;
  long *****ppppplVar21;
  long *****extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  long lVar22;
  undefined8 extraout_x9;
  long *****extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long ******pppppplVar23;
  long *****extraout_x10;
  long *****ppppplVar24;
  long *****extraout_x11;
  long *****ppppplVar25;
  ulong uVar26;
  long *****ppppplVar27;
  long ******pppppplVar28;
  long ****pppplVar29;
  long lVar30;
  long ******pppppplVar31;
  ulong uVar32;
  long ******pppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long *****ppppplVar36;
  long ***ppplVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  long ***ppplStack_398;
  long ***ppplStack_390;
  undefined8 uStack_388;
  long *****ppppplStack_380;
  long *****ppppplStack_378;
  long *****ppppplStack_370;
  long ***ppplStack_368;
  long *****ppppplStack_360;
  long *****ppppplStack_358;
  long *****ppppplStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined2 uStack_32c;
  undefined1 uStack_32a;
  long *****ppppplStack_328;
  long ****pppplStack_320;
  long *****ppppplStack_318;
  long *****ppppplStack_310;
  long *****ppppplStack_308;
  long *****ppppplStack_300;
  long ***ppplStack_2f8;
  long ***ppplStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2d8;
  undefined **ppuStack_2d0;
  long *plStack_2c8;
  long *****ppppplStack_2c0;
  undefined ***pppuStack_2b8;
  int iStack_2b0;
  char cStack_2a8;
  undefined8 uStack_298;
  long alStack_208 [5];
  long lStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [64];
  long alStack_158 [3];
  undefined2 uStack_140;
  undefined1 uStack_13e;
  undefined4 uStack_13c;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *apuStack_c8 [2];
  long lStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppppplVar35 = (long *****)&uStack_1c0;
  lVar17 = param_2;
  uVar8 = param_6;
  func_0x0001074e223c();
  lStack_a8 = *(long *)(lVar17 + 0x48) + 0x170;
  lVar30 = param_1 + 200;
  lStack_98 = param_1 + 0xcd;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = (undefined1)uVar8;
  uStack_50 = 0;
  alStack_158[0] = CONCAT44(alStack_158[0]._4_4_,0x20);
  alStack_158[1] = 0;
  alStack_158[2] = (ulong)*(uint *)(lVar17 + 0x78) << 0x20;
  uStack_140 = 0;
  uStack_13e = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0x101010100000000;
  uStack_120 = 0xf01;
  ppppplVar18 = (long *****)(param_1 + 0xd8);
  plVar19 = alStack_158;
  lStack_b8 = lVar17;
  puStack_b0 = param_3;
  lStack_a0 = lVar30;
  uStack_48 = extraout_x8;
  FUN_1073ca29c(apuStack_c8,*(undefined8 *)(lVar17 + 0x90));
  if (apuStack_c8[0] != (undefined8 *)0x0) {
    plVar7 = (long *)*apuStack_c8[0];
    (**(code **)(*plVar7 + 0x18))();
    in_ZR = 0;
    if ((int)plVar7 == 2) {
      alStack_158[2] = 0x3f80000000000000;
      alStack_158[1] = 0;
      uStack_140 = CONCAT11(uStack_140._1_1_,1);
      in_ZR = (int)param_6 == 0;
      uVar8 = 0;
      if ((bool)in_ZR) {
        uVar8 = 0x13f800000;
      }
      uStack_13c = (undefined4)uVar8;
      uStack_138 = CONCAT71(uStack_138._1_7_,(char)((ulong)uVar8 >> 0x20));
      uStack_138 = uStack_138 & 0xffffffff;
      uStack_130 = CONCAT71(uStack_130._1_7_,in_ZR);
      ppppplVar18 = (long *****)&UNK_10f415cde;
      plVar19 = alStack_158;
      alStack_158[0] = param_5;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x28))(&plStack_d0);
      plVar7 = plStack_d0;
      (**(code **)(*plStack_d0 + 0x30))();
      if (((ulong)plVar7 & 1) != 0) {
        plStack_d8 = plStack_d0;
        func_0x0001074e2220();
        (*extraout_x8_00)();
        iVar6 = (int)*(undefined8 *)(param_2 + 8);
        func_0x0001074e2220();
        (*extraout_x8_01)();
        uVar8 = *(undefined8 *)(param_2 + 8);
        func_0x0001074e2220(uVar8);
        (*extraout_x8_02)();
        in_ZR = iVar6 == 0;
        uVar39 = 0;
        if (!(bool)in_ZR) {
          uVar39 = 0x3ff0000000000000;
        }
        uVar38 = 0x3ff0000000000000;
        if (!(bool)in_ZR) {
          uVar38 = 0;
        }
        func_0x000107876c5c(0,0x3ff0000000000000,uVar38,uVar39,0xbff0000000000000,0x3ff0000000000000
                            ,alStack_158,uVar8);
        func_0x000107482794(auStack_198,alStack_158);
        (**(code **)(*plStack_d0 + 0x40))(plStack_d0,apuStack_c8[0]);
        uStack_1a8 = 7;
        uStack_1a0 = 0x3f800000;
        uStack_1c0._4_4_ = 7;
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0x101;
        uStack_1ae = 1;
        (**(code **)(*plStack_d0 + 0x80))(plStack_d0,&uStack_1a8,&uStack_1c0);
        uStack_1c0._2_1_ = 1;
        uStack_1c0._0_1_ = 0;
        uStack_1c0._1_1_ = 1;
        (**(code **)(*plStack_d0 + 0x88))(plStack_d0,&uStack_1c0);
        (**(code **)(*plStack_d0 + 0x58))(plStack_d0,lStack_a8);
        (**(code **)(*plStack_d0 + 0x60))(plStack_d0,0,*(long *)(param_2 + 0x48) + 0xa8);
        (**(code **)(*plStack_d0 + 0x68))(plStack_d0,*puStack_b0);
        (**(code **)(*plStack_d0 + 0xd0))(plStack_d0,0,auStack_198);
        uVar8 = NEON_fmov(0x3f800000,4);
        uStack_1c0._0_1_ = (undefined1)uVar8;
        uStack_1c0._1_1_ = (undefined1)((ulong)uVar8 >> 8);
        uStack_1c0._2_1_ = (undefined1)((ulong)uVar8 >> 0x10);
        uStack_1c0._3_1_ = (undefined1)((ulong)uVar8 >> 0x18);
        uStack_1c0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
        (**(code **)(*plStack_d0 + 0xa8))(plStack_d0,1,&uStack_1c0);
        plVar19 = plStack_d0;
        (**(code **)(*plStack_d0 + 0x78))(plStack_d0,param_4,lVar30);
        (**(code **)(*plVar19 + 0x70))(plVar19,0,param_4);
        uStack_1c0._0_1_ = 4;
        uStack_1c0._4_4_ = 0;
        plVar19 = (long *)(ulong)(uint)puStack_b0[6];
        (**(code **)(*plStack_d0 + 0x138))();
        FUN_10748eeb8(&plStack_d8);
        ppppplVar18 = ppppplVar35;
      }
      plVar9 = plStack_d0;
      plStack_d0 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        func_0x0001074e207c();
      }
      goto LAB_1074df9d0;
    }
  }
  plVar7 = (long *)0x0;
LAB_1074df9d0:
  func_0x00010730b734(apuStack_c8);
  plVar9 = &lStack_b8;
  func_0x0001074e10e0();
  func_0x0001074e2194(uStack_48);
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_10748eeb8(&plStack_d8);
  plVar7 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    func_0x0001074e207c();
  }
  func_0x00010730b734(apuStack_c8);
  plVar7 = &lStack_b8;
  func_0x0001074e10e0();
  func_0x0001074e20fc();
  pcStack_1c8 = FUN_1074dfa70;
  if ((long *****)((plVar7[2] - *plVar7) / 0x1b0) < ppppplVar18) {
    lStack_1e0 = lVar30;
    plStack_1d8 = plVar9;
    puStack_1d0 = &stack0xfffffffffffffff0;
    if ((long *****)0x97b425ed097b42 < ppppplVar18) {
      FUN_1074e1130();
      plVar7 = alStack_208;
      func_0x0001074e1640();
      func_0x0001074e20fc();
      func_0x0001074e223c();
      uStack_298 = extraout_x8_03;
      lVar30 = *plVar19;
      lVar17 = plVar19[1];
      if (lVar30 == lVar17) {
        plVar19 = (long *)0x1;
        uVar4 = 1;
      }
      else {
        ppplVar37 = ppppplVar18[5][0xf];
        _log2();
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        uStack_3b0 = 0;
        FUN_1074dfa70(&uStack_3b0,(lVar17 - lVar30) / 0x1b0);
        lVar17 = plVar19[1];
        for (lVar30 = *plVar19; uVar26 = uStack_3a8, lVar30 != lVar17; lVar30 = lVar30 + 0x1b0) {
          if ((*(float *)(lVar30 + 0x198) <= (float)(double)ppplVar37) &&
             ((float)(double)ppplVar37 <= *(float *)(lVar30 + 0x19c))) {
            if (uStack_3a8 < uStack_3a0) {
              FUN_1074e16a8(uStack_3a8,lVar30);
              uStack_3a8 = uVar26 + 0x1b0;
            }
            else {
              puVar10 = &uStack_3b0;
              FUN_1074e19e0(puVar10,(long)(uStack_3a8 - uStack_3b0) / 0x1b0 + 1);
              FUN_1074e11bc(&pppplStack_320,puVar10,(long)(uStack_3a8 - uStack_3b0) / 0x1b0,
                            &uStack_3a0);
              FUN_1074e16a8(ppppplStack_310,lVar30);
              ppppplStack_310 = ppppplStack_310 + 0x36;
              FUN_1074e113c(&uStack_3b0,&pppplStack_320);
              uVar26 = uStack_3a8;
              func_0x0001074e1640(&pppplStack_320);
              uStack_3a8 = uVar26;
            }
          }
        }
        if (uStack_3b0 == uStack_3a8) {
          plVar19 = (long *)0x1;
          uVar4 = 1;
        }
        else {
          uVar4 = (char)plVar7[(ulong)*(byte *)(plVar7 + 0xf) * 3 + 0xb] == '\x01';
          if ((((bool)uVar4) &&
              (uVar4 = (char)plVar7[(ulong)*(byte *)(plVar7 + 0xf) * 4 + 4] == '\x01', (bool)uVar4))
             && (uVar4 = *(char *)(ppppplVar18[9] + 0x31) == '\x01', (bool)uVar4)) {
            plStack_3c8 = (long *)0x0;
            plStack_3c0 = (long *)0x0;
            lVar30 = 0x48;
            uStack_3b8 = 0;
            for (uVar26 = 0; plVar9 = plStack_3c0, plVar19 = plStack_3c8,
                uVar26 < (ulong)((long)(uStack_3a8 - uStack_3b0) / 0x1b0); uVar26 = uVar26 + 1) {
              lVar17 = uStack_3b0 + lVar30;
              pppplStack_320 = (long ****)(lVar17 + -0x30);
              ppppplStack_318 = (long *****)(long)*(char *)(lVar17 + -0x19);
              if ((long)ppppplStack_318 < 0) {
                pppplStack_320 = (long ****)*pppplStack_320;
                ppppplStack_318 = *(long ******)(lVar17 + -0x28);
              }
              plVar19 = plVar7 + 0x20;
              FUN_1074e1c80(plVar19,&pppplStack_320);
              if (plVar19 != (long *)0x0) {
                ppppplVar35 = (long *****)plVar19[4];
                if (plStack_3c8 == plStack_3c0) {
                  func_0x00010002b838(&ppppplStack_360,&UNK_10f415cc2);
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&ppppplStack_360,plStack_3c0 + -3);
                }
                lVar17 = uStack_3b0 + lVar30;
                lVar22 = (long)*(char *)(lVar17 + -1);
                if (lVar22 < 0) {
                  lVar22 = *(long *)(lVar17 + -0x10);
                }
                pppppplVar31 = &ppppplStack_360;
                if (lVar22 != 0) {
                  pppppplVar31 = (long ******)(lVar17 + -0x18);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppppplStack_380,pppppplVar31);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppplStack_398,uStack_3b0 + lVar30);
                ppppplStack_318 = (long *****)CONCAT44(ppppplStack_318._4_4_,(int)uVar26);
                ppppplStack_308 = ppppplStack_378;
                ppppplStack_310 = ppppplStack_380;
                ppppplStack_300 = ppppplStack_370;
                ppppplStack_380 = (long *****)0x0;
                ppppplStack_378 = (long *****)0x0;
                ppppplStack_370 = (long *****)0x0;
                ppplStack_2f0 = ppplStack_390;
                ppplStack_2f8 = ppplStack_398;
                uStack_2e8 = uStack_388;
                ppplStack_398 = (long ***)0x0;
                ppplStack_390 = (long ***)0x0;
                uStack_388 = 0;
                pppplStack_320 = (long ****)ppppplVar35;
                func_0x0001074e215c();
                func_0x0001074e2124();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_398)
                ;
                func_0x0001074e21f4();
                func_0x0001074e21c0();
              }
              lVar30 = lVar30 + 0x1b0;
            }
            if (plStack_3c8 == plStack_3c0) {
              pppplStack_320 = (long ****)0x0;
              ppppplStack_318 = (long *****)((ulong)ppppplStack_318 & 0xffffffff00000000);
              func_0x0001074e21a8();
              func_0x00010002b838(&ppppplStack_310);
              func_0x0001074e20e8();
              func_0x00010002b838(&ppplStack_2f8);
              func_0x0001074e215c();
              func_0x0001074e2124();
            }
            else {
              uVar32 = (long)plStack_3c0 - (long)plStack_3c8 >> 6;
              plVar11 = plStack_3c8 + 5;
              pppppplVar31 = (long ******)&UNK_10f415d0e;
              for (uVar26 = 0; uVar32 != uVar26; uVar26 = uVar26 + 1) {
                if (*(char *)((long)plVar11 + 0x17) < '\0') {
                  if (plVar11[1] == 0) goto LAB_1074dfe40;
                }
                else if (*(char *)((long)plVar11 + 0x17) == '\0') {
LAB_1074dfe40:
                  __ZNSt3__19to_stringEm(&ppppplStack_360,uVar26);
                  func_0x0001004c3cd0(&pppplStack_320,&UNK_10f415d0e,&ppppplStack_360);
                  func_0x000100066230(plVar11,&pppplStack_320);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                            (&pppplStack_320);
                  func_0x0001074e21c0();
                }
                plVar11 = plVar11 + 8;
              }
              lVar30 = plVar9[-8];
              if ((lVar30 == 0) || (func_0x0001074e20bc(), (int)lVar30 == 0)) {
                func_0x0001074e20e8(plVar9 + -3);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
              }
              else {
                lVar30 = plVar9[-7];
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppppplStack_360,plVar9 + -3);
                pppplStack_320 = (long ****)0x0;
                ppppplStack_318 = (long *****)CONCAT44(ppppplStack_318._4_4_,(int)lVar30);
                ppppplStack_308 = ppppplStack_358;
                ppppplStack_310 = ppppplStack_360;
                ppppplStack_300 = ppppplStack_350;
                ppppplStack_360 = (long *****)0x0;
                ppppplStack_358 = (long *****)0x0;
                ppppplStack_350 = (long *****)0x0;
                func_0x0001074e20e8();
                func_0x00010002b838(&ppplStack_2f8);
                func_0x0001074e215c();
                func_0x0001074e2124();
                func_0x0001074e21c0();
                uVar32 = (long)plStack_3c0 - (long)plStack_3c8 >> 6;
                plVar19 = plStack_3c8;
                plVar9 = plStack_3c0;
              }
              plVar11 = plVar19 + 10;
              for (uVar26 = 1; plVar13 = plStack_3c8, uVar26 < uVar32; uVar26 = uVar26 + 1) {
                if (*(char *)((long)plVar11 + 0x17) < '\0') {
                  if (plVar11[1] == 0) goto LAB_1074dff20;
                }
                else if (*(char *)((long)plVar11 + 0x17) == '\0') {
LAB_1074dff20:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (plVar11,plVar11 + -5);
                }
                plVar11 = plVar11 + 8;
              }
              lVar30 = (long)plVar9 - (long)plStack_3c8;
              ppppplStack_318 = (long *****)0x0;
              pppplStack_320 = (long ****)0x0;
              ppppplStack_308 = (long *****)0x0;
              ppppplStack_310 = (long *****)0x0;
              ppppplStack_300 = (long *****)CONCAT44(ppppplStack_300._4_4_,0x3f800000);
              for (ppppplVar35 = (long *****)0x0;
                  ppppplVar35 < (long *****)((long)plVar9 - (long)plVar19 >> 6);
                  ppppplVar35 = (long *****)((long)ppppplVar35 + 1)) {
                plVar19 = plVar19 + (long)ppppplVar35 * 8;
                iVar6 = (int)plVar19 + 0x28;
                func_0x0001074e21a8();
                func_0x000100152bb8();
                if (iVar6 != 0) {
                  *plVar19 = 0;
                  func_0x0001074e20e8(plVar19 + 5);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                }
                plVar11 = plVar19 + 2;
                func_0x0001000e107c(plVar11,plVar19 + 5);
                if ((int)plVar11 == 0) {
                  plVar11 = plVar19 + 5;
                  func_0x0001074e20e8();
                  func_0x000100152bb8();
                  if (((ulong)plVar11 & 1) == 0) {
                    pppppplVar23 = &ppppplStack_308;
                    func_0x000100102e7c(pppppplVar23,plVar19 + 5);
                    pppppplVar33 = (long ******)ppppplStack_318;
                    pppppplVar28 = pppppplVar23;
                    if ((long ******)ppppplStack_318 != (long ******)0x0) {
                      uVar26 = (long)ppppplStack_318 - 1;
                      if (((ulong)ppppplStack_318 & uVar26) == 0) {
                        pppppplVar31 = (long ******)(uVar26 & (ulong)pppppplVar23);
                      }
                      else {
                        pppppplVar31 = pppppplVar23;
                        if (ppppplStack_318 <= pppppplVar23) {
                          uVar32 = 0;
                          if ((long ******)ppppplStack_318 != (long ******)0x0) {
                            uVar32 = (ulong)pppppplVar23 / (ulong)ppppplStack_318;
                          }
                          pppppplVar31 = (long ******)
                                         ((long)pppppplVar23 - uVar32 * (long)ppppplStack_318);
                        }
                      }
                      pppplVar29 = (long ****)pppplStack_320[(long)pppppplVar31];
                      if (pppplVar29 != (long ****)0x0) {
                        do {
                          while( true ) {
                            pppplVar29 = (long ****)*pppplVar29;
                            if (pppplVar29 == (long ****)0x0) goto LAB_1074e00cc;
                            pppppplVar20 = (long ******)pppplVar29[1];
                            if (pppppplVar20 != pppppplVar23) break;
                            pppppplVar28 = (long ******)(pppplVar29 + 2);
                            func_0x0001000e107c(pppppplVar28,plVar19 + 5);
                            if (((ulong)pppppplVar28 & 1) != 0) goto LAB_1074e01f8;
                          }
                          if (((ulong)pppppplVar33 & uVar26) == 0) {
                            pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar26);
                          }
                          else if (pppppplVar33 <= pppppplVar20) {
                            uVar32 = 0;
                            if (pppppplVar33 != (long ******)0x0) {
                              uVar32 = (ulong)pppppplVar20 / (ulong)pppppplVar33;
                            }
                            pppppplVar20 = (long ******)
                                           ((long)pppppplVar20 - uVar32 * (long)pppppplVar33);
                          }
                        } while (pppppplVar20 == pppppplVar31);
                      }
                    }
LAB_1074e00cc:
                    func_0x0001074e2234();
                    ppppplStack_350 = (long *****)0x0;
                    *pppppplVar28 = (long *****)0x0;
                    pppppplVar28[1] = (long *****)pppppplVar23;
                    ppppplStack_360 = (long *****)pppppplVar28;
                    ppppplStack_358 = (long *****)&ppppplStack_310;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (pppppplVar28 + 2,plVar19 + 5);
                    pppppplVar28[5] = ppppplVar35;
                    ppppplStack_350 = (long *****)CONCAT71(ppppplStack_350._1_7_,1);
                    if ((pppppplVar33 == (long ******)0x0) ||
                       (ppppplStack_300._0_4_ * (float)pppppplVar33 <
                        (float)((long)ppppplStack_308 + 1))) {
                      bVar3 = (long ******)0x2 < pppppplVar33;
                      bVar5 = pppppplVar33 == (long ******)0x3;
                      func_0x0001074e2110((long)pppppplVar33 << 1);
                      uVar8 = extraout_x8_04;
                      if (!bVar3 || bVar5) {
                        uVar8 = extraout_x9;
                      }
                      FUN_107477274(&pppplStack_320,uVar8);
                      pppppplVar33 = (long ******)ppppplStack_318;
                      if (((ulong)ppppplStack_318 & (long)ppppplStack_318 - 1U) == 0) {
                        pppppplVar31 = (long ******)
                                       ((long)ppppplStack_318 - 1U & (ulong)pppppplVar23);
                      }
                      else {
                        pppppplVar31 = pppppplVar23;
                        if (ppppplStack_318 <= pppppplVar23) {
                          uVar26 = 0;
                          if ((long ******)ppppplStack_318 != (long ******)0x0) {
                            uVar26 = (ulong)pppppplVar23 / (ulong)ppppplStack_318;
                          }
                          pppppplVar31 = (long ******)
                                         ((long)pppppplVar23 - uVar26 * (long)ppppplStack_318);
                        }
                      }
                    }
                    pppplVar29 = (long ****)pppplStack_320[(long)pppppplVar31];
                    if (pppplVar29 == (long ****)0x0) {
                      *ppppplStack_360 = (long ****)ppppplStack_310;
                      ppppplStack_310 = ppppplStack_360;
                      pppplStack_320[(long)pppppplVar31] = (long ***)&ppppplStack_310;
                      if ((long *****)*ppppplStack_360 != (long *****)0x0) {
                        pppppplVar23 = (long ******)(*ppppplStack_360)[1];
                        if (((ulong)pppppplVar33 & (long)pppppplVar33 - 1U) == 0) {
                          pppppplVar23 = (long ******)
                                         ((ulong)pppppplVar23 & (long)pppppplVar33 - 1U);
                        }
                        else if (pppppplVar33 <= pppppplVar23) {
                          uVar26 = 0;
                          if (pppppplVar33 != (long ******)0x0) {
                            uVar26 = (ulong)pppppplVar23 / (ulong)pppppplVar33;
                          }
                          pppppplVar23 = (long ******)
                                         ((long)pppppplVar23 - uVar26 * (long)pppppplVar33);
                        }
                        pppplStack_320[(long)pppppplVar23] = (long ***)ppppplStack_360;
                      }
                    }
                    else {
                      *ppppplStack_360 = (long ****)*pppplVar29;
                      *pppplVar29 = (long ***)ppppplStack_360;
                    }
                    ppppplStack_360 = (long *****)0x0;
                    ppppplStack_308 = (long *****)((long)ppppplStack_308 + 1);
                    FUN_107477408(&ppppplStack_360);
                  }
                }
                else {
                  *plVar19 = 0;
                  if ((long)ppppplVar35 + 1 == lVar30 >> 6) {
                    func_0x0001074e21a8(plVar19 + 2);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                    func_0x0001074e20e8(plVar19 + 5);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                  }
                  else {
                    func_0x0001074e21a8(plVar19 + 2);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                    __ZNSt3__19to_stringEm(&ppppplStack_380,ppppplVar35);
                    func_0x0001004c3cd0(&ppppplStack_360,&UNK_10f415d0e,&ppppplStack_380);
                    func_0x000100066230(plVar19 + 5,&ppppplStack_360);
                    func_0x0001074e21c0();
                    func_0x0001074e21f4();
                  }
                }
LAB_1074e01f8:
                plVar19 = plVar13;
              }
              FUN_1074597cc(&pppplStack_320);
            }
            plVar11 = plStack_3c0;
            plVar9 = plStack_3c8;
            ppppplVar35 = &pppplStack_320;
            ppppplStack_318 = (long *****)0x0;
            pppplStack_320 = (long ****)0x0;
            ppppplStack_308 = (long *****)0x0;
            ppppplStack_310 = (long *****)0x0;
            ppppplStack_300 = (long *****)CONCAT44(ppppplStack_300._4_4_,0x3f800000);
            for (plVar19 = plStack_3c8; plVar19 != plVar11; plVar19 = plVar19 + 8) {
              lVar30 = *plVar19;
              if ((lVar30 != 0) && (func_0x0001074e20bc(), (int)lVar30 != 0)) {
                func_0x0001004c3c6c(&pppplStack_320,plVar19 + 5);
              }
            }
            ppplStack_398 = (long ***)0x0;
            ppplStack_390 = (long ***)0x0;
            ppppplStack_358 = (long *****)0x0;
            ppppplStack_360 = (long *****)0x0;
            uStack_348 = 0;
            ppppplStack_350 = (long *****)0x0;
            uStack_340 = 0x3f800000;
            ppppplStack_380 = (long *****)&ppppplStack_328;
            ppppplStack_378 = &pppplStack_320;
            uStack_388 = 0;
            ppppplStack_370 = (long *****)&ppppplStack_360;
            ppplStack_368 = (long ***)&ppplStack_398;
            for (; plVar9 != plVar11; plVar9 = plVar9 + 8) {
              func_0x0001074e228c();
              func_0x0001074e228c();
            }
            func_0x0001074e22a0();
            func_0x0001005d0538(&pppplStack_320);
            ppplVar37 = ppplStack_390;
            pppppplVar31 = (long ******)(plVar7 + 0x16);
            for (pppplVar29 = (long ****)ppplStack_398; pppplVar29 != (long ****)ppplVar37;
                pppplVar29 = pppplVar29 + 3) {
              pppplVar12 = ppppplVar18[1];
              func_0x0001073caeb8();
              ppppplVar36 = (long *****)(plVar7 + 0x17);
              func_0x000100102e7c(ppppplVar36,pppplVar29);
              ppppplVar27 = (long *****)plVar7[0x15];
              if (ppppplVar27 != (long *****)0x0) {
                uVar26 = (long)ppppplVar27 - 1;
                if (((ulong)ppppplVar27 & uVar26) == 0) {
                  ppppplVar35 = (long *****)(uVar26 & (ulong)ppppplVar36);
                }
                else {
                  ppppplVar35 = ppppplVar36;
                  if (ppppplVar27 <= ppppplVar36) {
                    uVar32 = 0;
                    if (ppppplVar27 != (long *****)0x0) {
                      uVar32 = (ulong)ppppplVar36 / (ulong)ppppplVar27;
                    }
                    ppppplVar35 = (long *****)((long)ppppplVar36 - uVar32 * (long)ppppplVar27);
                  }
                }
                ppppplVar34 = *(long ******)(plVar7[0x14] + (long)ppppplVar35 * 8);
                if (ppppplVar34 != (long *****)0x0) {
                  do {
                    while( true ) {
                      ppppplVar34 = (long *****)*ppppplVar34;
                      if (ppppplVar34 == (long *****)0x0) goto LAB_1074e03ac;
                      ppppplVar21 = (long *****)ppppplVar34[1];
                      if (ppppplVar21 != ppppplVar36) break;
                      ppppplVar21 = ppppplVar34 + 2;
                      func_0x0001000e107c(ppppplVar21,pppplVar29);
                      if (((ulong)ppppplVar21 & 1) != 0) goto LAB_1074e0648;
                    }
                    if (((ulong)ppppplVar27 & uVar26) == 0) {
                      ppppplVar21 = (long *****)((ulong)ppppplVar21 & uVar26);
                    }
                    else if (ppppplVar27 <= ppppplVar21) {
                      uVar32 = 0;
                      if (ppppplVar27 != (long *****)0x0) {
                        uVar32 = (ulong)ppppplVar21 / (ulong)ppppplVar27;
                      }
                      ppppplVar21 = (long *****)((long)ppppplVar21 - uVar32 * (long)ppppplVar27);
                    }
                  } while (ppppplVar21 == ppppplVar35);
                }
              }
LAB_1074e03ac:
              ppppplVar34 = (long *****)0x80;
              __Znwm();
              ppppplStack_310 = (long *****)0x0;
              *ppppplVar34 = (long ****)0x0;
              ppppplVar34[1] = (long ****)ppppplVar36;
              pppplStack_320 = (long ****)ppppplVar34;
              ppppplStack_318 = (long *****)pppppplVar31;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (ppppplVar34 + 2,pppplVar29);
              ppppplVar34[0xf] = (long ****)0x0;
              ppppplVar34[0xe] = (long ****)0x0;
              ppppplVar34[0xd] = (long ****)0x0;
              ppppplVar34[0xc] = (long ****)0x0;
              ppppplVar34[0xb] = (long ****)0x0;
              ppppplVar34[10] = (long ****)0x0;
              ppppplVar34[9] = (long ****)0x0;
              ppppplVar34[8] = (long ****)0x0;
              ppppplVar34[7] = (long ****)0x0;
              ppppplVar34[6] = (long ****)0x0;
              ppppplVar34[5] = (long ****)0x0;
              ppppplStack_310 = (long *****)CONCAT71(ppppplStack_310._1_7_,1);
              if ((ppppplVar27 == (long *****)0x0) ||
                 (*(float *)(plVar7 + 0x18) * (float)ppppplVar27 < (float)(plVar7[0x17] + 1))) {
                bVar3 = (long *****)0x2 < ppppplVar27;
                bVar5 = ppppplVar27 == (long *****)0x3;
                func_0x0001074e2110((long)ppppplVar27 << 1);
                ppppplVar35 = extraout_x8_05;
                if (!bVar3 || bVar5) {
                  ppppplVar35 = extraout_x9_00;
                }
                if ((long)ppppplVar35 - 1U == 0) {
                  ppppplVar35 = (long *****)0x2;
                }
                else if (((ulong)ppppplVar35 & (long)ppppplVar35 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                }
                ppppplVar27 = (long *****)plVar7[0x15];
                if (ppppplVar27 < ppppplVar35) {
LAB_1074e0460:
                  ppppplVar27 = ppppplVar35;
                  if ((ulong)ppppplVar27 >> 0x3d != 0) goto LAB_1074e0aa0;
                  lVar30 = (long)ppppplVar27 << 3;
                  __Znwm(lVar30);
                  FUN_1074e1e70(plVar7 + 0x14,lVar30);
                  plVar7[0x15] = (long)ppppplVar27;
                  lVar30 = plVar7[0x14];
                  for (ppppplVar35 = (long *****)0x0; ppppplVar27 != ppppplVar35;
                      ppppplVar35 = (long *****)((long)ppppplVar35 + 1)) {
                    *(undefined8 *)(lVar30 + (long)ppppplVar35 * 8) = 0;
                  }
                  ppppplVar35 = *pppppplVar31;
                  if (ppppplVar35 != (long *****)0x0) {
                    ppppplVar21 = (long *****)ppppplVar35[1];
                    uVar32 = (long)ppppplVar27 - 1;
                    uVar26 = 0;
                    if (ppppplVar27 != (long *****)0x0) {
                      uVar26 = (ulong)ppppplVar21 / (ulong)ppppplVar27;
                    }
                    ppppplVar24 = ppppplVar21;
                    if (ppppplVar27 <= ppppplVar21) {
                      ppppplVar24 = (long *****)((long)ppppplVar21 - uVar26 * (long)ppppplVar27);
                    }
                    if (((ulong)ppppplVar27 & uVar32) == 0) {
                      ppppplVar24 = (long *****)((ulong)ppppplVar21 & uVar32);
                    }
                    *(long *******)(lVar30 + (long)ppppplVar24 * 8) = pppppplVar31;
                    while (ppppplVar21 = ppppplVar35, ppppplVar35 = (long *****)*ppppplVar21,
                          ppppplVar35 != (long *****)0x0) {
                      ppppplVar25 = (long *****)ppppplVar35[1];
                      if (((ulong)ppppplVar27 & uVar32) == 0) {
                        ppppplVar25 = (long *****)((ulong)ppppplVar25 & uVar32);
                      }
                      else if (ppppplVar27 <= ppppplVar25) {
                        uVar26 = 0;
                        if (ppppplVar27 != (long *****)0x0) {
                          uVar26 = (ulong)ppppplVar25 / (ulong)ppppplVar27;
                        }
                        ppppplVar25 = (long *****)((long)ppppplVar25 - uVar26 * (long)ppppplVar27);
                      }
                      if (ppppplVar25 != ppppplVar24) {
                        if (*(long *)(lVar30 + (long)ppppplVar25 * 8) == 0) {
                          *(long ******)(lVar30 + (long)ppppplVar25 * 8) = ppppplVar21;
                          ppppplVar24 = ppppplVar25;
                        }
                        else {
                          func_0x0001074e21c8();
                          lVar30 = extraout_x8_06;
                          uVar32 = extraout_x9_01;
                          ppppplVar35 = extraout_x10;
                          ppppplVar24 = extraout_x11;
                        }
                      }
                    }
                  }
                }
                else if (ppppplVar35 < ppppplVar27) {
                  ppppplVar21 = (long *****)
                                (long)((float)(ulong)plVar7[0x17] / *(float *)(plVar7 + 0x18));
                  if ((ppppplVar27 < (long *****)0x3) ||
                     (((ulong)ppppplVar27 & (long)ppppplVar27 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((long *****)0x1 < ppppplVar21) {
                    ppppplVar21 = (long *****)(1L << (-LZCOUNT((long)ppppplVar21 + -1) & 0x3fU));
                  }
                  if (ppppplVar35 <= ppppplVar21) {
                    ppppplVar35 = ppppplVar21;
                  }
                  if (ppppplVar35 < ppppplVar27) {
                    if (ppppplVar35 != (long *****)0x0) goto LAB_1074e0460;
                    FUN_1074e1e70(plVar7 + 0x14,0);
                    ppppplVar27 = (long *****)0x0;
                    plVar7[0x15] = 0;
                  }
                  else {
                    ppppplVar27 = (long *****)plVar7[0x15];
                  }
                }
                if (((ulong)ppppplVar27 & (long)ppppplVar27 - 1U) == 0) {
                  ppppplVar35 = (long *****)((long)ppppplVar27 - 1U & (ulong)ppppplVar36);
                }
                else {
                  ppppplVar35 = ppppplVar36;
                  if (ppppplVar27 <= ppppplVar36) {
                    uVar26 = 0;
                    if (ppppplVar27 != (long *****)0x0) {
                      uVar26 = (ulong)ppppplVar36 / (ulong)ppppplVar27;
                    }
                    ppppplVar35 = (long *****)((long)ppppplVar36 - uVar26 * (long)ppppplVar27);
                  }
                }
              }
              lVar30 = plVar7[0x14];
              plVar19 = *(long **)(lVar30 + (long)ppppplVar35 * 8);
              if (plVar19 == (long *)0x0) {
                *ppppplVar34 = (long ****)*pppppplVar31;
                *pppppplVar31 = ppppplVar34;
                *(long *******)(lVar30 + (long)ppppplVar35 * 8) = pppppplVar31;
                if (*ppppplVar34 != (long ****)0x0) {
                  ppppplVar36 = (long *****)(*ppppplVar34)[1];
                  if (((ulong)ppppplVar27 & (long)ppppplVar27 - 1U) == 0) {
                    ppppplVar36 = (long *****)((ulong)ppppplVar36 & (long)ppppplVar27 - 1U);
                  }
                  else if (ppppplVar27 <= ppppplVar36) {
                    uVar26 = 0;
                    if (ppppplVar27 != (long *****)0x0) {
                      uVar26 = (ulong)ppppplVar36 / (ulong)ppppplVar27;
                    }
                    ppppplVar36 = (long *****)((long)ppppplVar36 - uVar26 * (long)ppppplVar27);
                  }
                  *(long ******)(lVar30 + (long)ppppplVar36 * 8) = ppppplVar34;
                }
              }
              else {
                *ppppplVar34 = (long ****)*plVar19;
                *plVar19 = (long)ppppplVar34;
              }
              pppplStack_320 = (long ****)0x0;
              plVar7[0x17] = plVar7[0x17] + 1;
              FUN_1074e1e88(&pppplStack_320);
LAB_1074e0648:
              if ((((*(char *)(ppppplVar34 + 0xf) != '\x01') ||
                   (*(char *)(ppppplVar34 + 8) != '\x01')) ||
                  (*(int *)((long)ppppplVar34 + 0x2c) != (int)*plVar7)) ||
                 (*(int *)(ppppplVar34 + 6) != *(int *)((long)plVar7 + 4))) {
                FUN_1074979d4(ppppplVar34 + 0xd);
                FUN_1074de3f4(ppppplVar34 + 9);
                FUN_107456c98(ppppplVar34 + 5);
                uStack_32a = 0;
                uStack_32c = 0x100;
                FUN_107497a08(&pppplStack_320,pppplVar12,*plVar7,plVar7 + 0x19,1,&uStack_32c);
                FUN_107440a90(ppppplVar34 + 5,&pppplStack_320);
                ppppplVar36 = ppppplStack_310;
                ppppplStack_310 = (long *****)0x0;
                if ((long ******)ppppplVar36 != (long ******)0x0) {
                  func_0x0001074e207c();
                }
                ppppplVar36 = (long *****)*plVar7;
                (*(code *)(*pppplVar12)[0x12])(&ppppplStack_310,pppplVar12,ppppplVar36,0xf,0);
                ppppplStack_318 = (long *****)CONCAT62(ppppplStack_318._2_6_,0xf);
                pppplStack_320 = (long ****)ppppplVar36;
                func_0x0001074de428(ppppplVar34 + 9,&pppplStack_320);
                ppppplVar36 = ppppplStack_310;
                ppppplStack_310 = (long *****)0x0;
                if (ppppplVar36 != (long *****)0x0) {
                  func_0x0001074e207c();
                }
                FUN_107498684(&pppplStack_320);
                ppppplVar36 = ppppplVar34 + 5;
                FUN_1073b9c0c();
                if (((ulong)ppppplStack_310 & 1) == 0) {
                  ppppplStack_310 = (long *****)CONCAT71(ppppplStack_310._1_7_,1);
                }
                ppppplStack_318 = (long *****)((ulong)ppppplStack_318 & 0xffffffff00000000);
                pppppplVar23 = (long ******)(ppppplVar34 + 9);
                pppplStack_320 = (long ****)ppppplVar36;
                FUN_1074de480();
                if (cStack_2a8 == '\x01') {
                  if (iStack_2b0 != 1) {
                    iStack_2b0 = 1;
                  }
                }
                else {
                  iStack_2b0 = 1;
                  cStack_2a8 = '\x01';
                }
                ppppplStack_2c0 = (long *****)pppppplVar23;
                func_0x00010002b838(&ppppplStack_380,&UNK_10f415d31);
                func_0x000100610910(&ppppplStack_360,&ppppplStack_380,pppplVar29);
                func_0x0001074e21f4();
                pppppplVar23 = (long ******)ppppplStack_360;
                if (-1 < (long)ppppplStack_350) {
                  pppppplVar23 = &ppppplStack_360;
                }
                pppppplVar28 = (long ******)*plVar7;
                ppppplStack_328 = (long *****)pppppplVar28;
                (*(code *)(*pppplVar12)[0xe])
                          (&ppppplStack_378,pppplVar12,pppppplVar23,&ppppplStack_328,&pppplStack_320
                          );
                ppppplStack_380 = (long *****)pppppplVar28;
                FUN_107497a1c(ppppplVar34 + 0xd,&ppppplStack_380);
                ppppplVar36 = ppppplStack_378;
                ppppplStack_378 = (long *****)0x0;
                if ((long ******)ppppplVar36 != (long ******)0x0) {
                  func_0x0001074e207c();
                }
                func_0x0001074e21c0();
              }
            }
            func_0x0001074e2284();
            plVar9 = plStack_3c0;
            plVar19 = plStack_3c8;
            func_0x0001074e21a8();
            func_0x00010002b838(&pppplStack_320);
            func_0x0001074e20e8();
            func_0x00010002b838(&ppppplStack_308);
            FUN_1074e1df0(&ppppplStack_360,&pppplStack_320,2);
            lVar30 = 0x18;
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        ((long)&pppplStack_320 + lVar30);
              lVar30 = lVar30 + -0x18;
            } while (lVar30 != -0x18);
            for (; plVar19 != plVar9; plVar19 = plVar19 + 8) {
              func_0x0001004c3c6c(&ppppplStack_360,plVar19 + 5);
            }
            ppplStack_398 = (long ***)ppppplVar18[2];
            (*(code *)**ppplStack_398)(ppplStack_398,&UNK_10f415d52,0xf);
            FUN_10750052c(&ppppplStack_380);
            ppppplVar35 = ppppplStack_380;
            plVar11 = plStack_3c8;
            while( true ) {
              uVar4 = plVar11 == plVar9;
              plVar19 = (long *)(ulong)(byte)uVar4;
              if ((bool)uVar4) break;
              pppppplVar31 = &ppppplStack_360;
              func_0x0001067e0440(pppppplVar31,plVar11 + 2);
              if ((pppppplVar31 == (long ******)0x0) ||
                 (plVar13 = plVar7, FUN_1074df4b4(plVar7,plVar11 + 2), plVar13 == (long *)0x0))
              goto LAB_1074e0a7c;
              plVar14 = plVar11 + 5;
              func_0x0001074e20e8();
              func_0x000100152bb8();
              ppppplStack_318 = ppppplVar35;
              ppppplStack_310 = (long *****)(ppppplVar18[9] + 0x2e);
              uVar4 = (char)plVar7[0x13] == '\0';
              uVar2 = 1;
              ppplStack_2f8 = (long ***)(plVar7 + 0x10);
              if ((bool)uVar4) {
                ppplStack_2f8 = (long ***)0x0;
              }
              pppplStack_320 = (long ****)ppppplVar18;
              ppppplStack_308 = (long *****)(plVar7 + 0x19);
              ppppplStack_300 = (long *****)((long)plVar7 + 0xcd);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&ppplStack_2f0,plVar11 + 5);
              uStack_2d8 = SUB81(plVar14,0);
              ppuStack_2d0 = &PTR_FUN_1109b5910;
              ppppplStack_2c0 = (long *****)&ppppplStack_360;
              lVar30 = *plVar11;
              plStack_2c8 = plVar7;
              pppuStack_2b8 = &ppuStack_2d0;
              if ((lVar30 != 0) && (func_0x0001074e20bc(), (int)lVar30 != 0)) {
                func_0x0001074e226c();
                if ((bool)uVar2 && !(bool)uVar4) {
                  plVar15 = (long *)*plVar11;
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,&pppplStack_320,
                             extraout_x9_02 + (extraout_x8_07 & 0xffffffff) * 0x1b0,plVar13,
                             plVar11 + 5);
                  goto LAB_1074e0a4c;
                }
LAB_1074e0a60:
                func_0x0001074e10e0(&pppplStack_320);
                goto LAB_1074e0a7c;
              }
              iVar6 = (int)plVar11 + 0x28;
              func_0x0001074e20e8();
              func_0x000100152bb8();
              if (iVar6 == 0) {
                iVar6 = (int)plVar11 + 0x28;
                func_0x0001074e21a8();
                func_0x000100152bb8();
                if (iVar6 != 0) {
                  uVar26 = (ulong)*(byte *)(plVar7 + 0xf);
                  goto LAB_1074e09d0;
                }
                plVar16 = plVar7 + 0x14;
                FUN_1074e1ec0(plVar16,plVar11 + 5);
                if ((plVar16 == (long *)0x0) || (uVar4 = (char)plVar16[0xf] == '\x01', !(bool)uVar4)
                   ) goto LAB_1074e0a60;
                plVar16 = plVar16 + 0xd;
                uVar2 = 1;
              }
              else {
                func_0x0001074e22d8();
                uVar26 = extraout_x8_08;
LAB_1074e09d0:
                plVar16 = plVar7 + (uVar26 & 0xffffffff) * 3 + 9;
                if ((*(byte *)(plVar16 + 2) & 1) == 0) goto LAB_1074e0a60;
              }
              plVar15 = (long *)*plVar11;
              if (plVar15 == (long *)0x0) {
                plVar15 = plVar7;
                FUN_1074df68c(plVar7,ppppplVar18,ppppplVar35,plVar13,plVar16,plVar14);
              }
              else {
                func_0x0001074e226c();
                if (!(bool)uVar2 || (bool)uVar4) goto LAB_1074e0a60;
                (**(code **)(*plVar15 + 0x20))();
              }
LAB_1074e0a4c:
              if (((ulong)plVar15 & 1) == 0) goto LAB_1074e0a60;
              func_0x0001074e10e0(&pppplStack_320);
              plVar11 = plVar11 + 8;
            }
            *(char *)(plVar7 + 0xf) = '\x01' - (char)plVar7[0xf];
LAB_1074e0a7c:
            FUN_1073eb118(&ppppplStack_380);
            FUN_1074996e0(&ppplStack_398);
            func_0x0001074e22a0();
            func_0x0001074e1098(&plStack_3c8);
          }
          else {
            plVar19 = (long *)0x0;
          }
        }
        FUN_1073e6588(&uStack_3b0);
      }
      func_0x0001074e2194(uStack_298);
      if ((bool)uVar4) {
        return plVar19;
      }
      ___stack_chk_fail();
LAB_1074e0aa0:
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1074e0aa8);
      (*pcVar1)();
    }
    FUN_1074e11bc(alStack_208);
    FUN_1074e113c(plVar7,alStack_208);
    plVar7 = alStack_208;
    func_0x0001074e1640(plVar7);
  }
  return plVar7;
}



/* Entry: 1074dfa70; end: 1074dfb0b;  */

long * FUN_1074dfa70(long *param_1,long *****param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long ****pppplVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 extraout_x8;
  long ******pppppplVar17;
  undefined8 extraout_x8_00;
  long *****ppppplVar18;
  long *****extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long lVar19;
  undefined8 extraout_x9;
  long *****extraout_x9_00;
  ulong extraout_x9_01;
  long *plVar20;
  long extraout_x9_02;
  long ******pppppplVar21;
  long *****extraout_x10;
  long *****ppppplVar22;
  long *****extraout_x11;
  long *****ppppplVar23;
  ulong uVar24;
  long *****ppppplVar25;
  long ******pppppplVar26;
  long *plVar27;
  long ****pppplVar28;
  long lVar29;
  long ******pppppplVar30;
  ulong uVar31;
  long ******pppppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long ***ppplVar36;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  undefined8 uStack_1c8;
  long *****ppppplStack_1c0;
  long *****ppppplStack_1b8;
  long *****ppppplStack_1b0;
  long ***ppplStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  long *****ppppplStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined2 uStack_16c;
  undefined1 uStack_16a;
  long *****ppppplStack_168;
  long ****pppplStack_160;
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  undefined8 uStack_128;
  undefined1 uStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  long *****ppppplStack_100;
  undefined ***pppuStack_f8;
  int iStack_f0;
  char cStack_e8;
  undefined8 uStack_d8;
  long alStack_48 [5];
  
  if ((long *****)((param_1[2] - *param_1) / 0x1b0) < param_2) {
    if ((long *****)0x97b425ed097b42 < param_2) {
      FUN_1074e1130();
      plVar9 = alStack_48;
      func_0x0001074e1640();
      func_0x0001074e20fc();
      func_0x0001074e223c();
      lVar29 = *param_3;
      lVar2 = param_3[1];
      uStack_d8 = extraout_x8;
      if (lVar29 == lVar2) {
        plVar20 = (long *)0x1;
        uVar6 = 1;
      }
      else {
        ppplVar36 = param_2[5][0xf];
        _log2();
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1f0 = 0;
        FUN_1074dfa70(&uStack_1f0,(lVar2 - lVar29) / 0x1b0);
        lVar2 = param_3[1];
        for (lVar29 = *param_3; uVar24 = uStack_1e8, lVar29 != lVar2; lVar29 = lVar29 + 0x1b0) {
          if ((*(float *)(lVar29 + 0x198) <= (float)(double)ppplVar36) &&
             ((float)(double)ppplVar36 <= *(float *)(lVar29 + 0x19c))) {
            if (uStack_1e8 < uStack_1e0) {
              FUN_1074e16a8(uStack_1e8,lVar29);
              uStack_1e8 = uVar24 + 0x1b0;
            }
            else {
              puVar10 = &uStack_1f0;
              FUN_1074e19e0(puVar10,(long)(uStack_1e8 - uStack_1f0) / 0x1b0 + 1);
              FUN_1074e11bc(&pppplStack_160,puVar10,(long)(uStack_1e8 - uStack_1f0) / 0x1b0,
                            &uStack_1e0);
              FUN_1074e16a8(ppppplStack_150,lVar29);
              ppppplStack_150 = ppppplStack_150 + 0x36;
              FUN_1074e113c(&uStack_1f0,&pppplStack_160);
              uVar24 = uStack_1e8;
              func_0x0001074e1640(&pppplStack_160);
              uStack_1e8 = uVar24;
            }
          }
        }
        if (uStack_1f0 == uStack_1e8) {
          plVar20 = (long *)0x1;
          uVar6 = 1;
        }
        else {
          uVar6 = (char)plVar9[(ulong)*(byte *)(plVar9 + 0xf) * 3 + 0xb] == '\x01';
          if ((((bool)uVar6) &&
              (uVar6 = (char)plVar9[(ulong)*(byte *)(plVar9 + 0xf) * 4 + 4] == '\x01', (bool)uVar6))
             && (uVar6 = *(char *)(param_2[9] + 0x31) == '\x01', (bool)uVar6)) {
            plStack_208 = (long *)0x0;
            plStack_200 = (long *)0x0;
            lVar29 = 0x48;
            uStack_1f8 = 0;
            for (uVar24 = 0; plVar27 = plStack_200, plVar20 = plStack_208,
                uVar24 < (ulong)((long)(uStack_1e8 - uStack_1f0) / 0x1b0); uVar24 = uVar24 + 1) {
              lVar2 = uStack_1f0 + lVar29;
              pppplStack_160 = (long ****)(lVar2 + -0x30);
              ppppplStack_158 = (long *****)(long)*(char *)(lVar2 + -0x19);
              if ((long)ppppplStack_158 < 0) {
                pppplStack_160 = (long ****)*pppplStack_160;
                ppppplStack_158 = *(long ******)(lVar2 + -0x28);
              }
              plVar20 = plVar9 + 0x20;
              FUN_1074e1c80(plVar20,&pppplStack_160);
              if (plVar20 != (long *)0x0) {
                ppppplVar34 = (long *****)plVar20[4];
                if (plStack_208 == plStack_200) {
                  func_0x00010002b838(&ppppplStack_1a0,&UNK_10f415cc2);
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&ppppplStack_1a0,plStack_200 + -3);
                }
                lVar2 = uStack_1f0 + lVar29;
                lVar19 = (long)*(char *)(lVar2 + -1);
                if (lVar19 < 0) {
                  lVar19 = *(long *)(lVar2 + -0x10);
                }
                pppppplVar30 = &ppppplStack_1a0;
                if (lVar19 != 0) {
                  pppppplVar30 = (long ******)(lVar2 + -0x18);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppppplStack_1c0,pppppplVar30);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppplStack_1d8,uStack_1f0 + lVar29);
                ppppplStack_158 = (long *****)CONCAT44(ppppplStack_158._4_4_,(int)uVar24);
                ppppplStack_148 = ppppplStack_1b8;
                ppppplStack_150 = ppppplStack_1c0;
                ppppplStack_140 = ppppplStack_1b0;
                ppppplStack_1c0 = (long *****)0x0;
                ppppplStack_1b8 = (long *****)0x0;
                ppppplStack_1b0 = (long *****)0x0;
                ppplStack_130 = ppplStack_1d0;
                ppplStack_138 = ppplStack_1d8;
                uStack_128 = uStack_1c8;
                ppplStack_1d8 = (long ***)0x0;
                ppplStack_1d0 = (long ***)0x0;
                uStack_1c8 = 0;
                pppplStack_160 = (long ****)ppppplVar34;
                func_0x0001074e215c();
                func_0x0001074e2124();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_1d8)
                ;
                func_0x0001074e21f4();
                func_0x0001074e21c0();
              }
              lVar29 = lVar29 + 0x1b0;
            }
            if (plStack_208 == plStack_200) {
              pppplStack_160 = (long ****)0x0;
              ppppplStack_158 = (long *****)((ulong)ppppplStack_158 & 0xffffffff00000000);
              func_0x0001074e21a8();
              func_0x00010002b838(&ppppplStack_150);
              func_0x0001074e20e8();
              func_0x00010002b838(&ppplStack_138);
              func_0x0001074e215c();
              func_0x0001074e2124();
            }
            else {
              uVar31 = (long)plStack_200 - (long)plStack_208 >> 6;
              plVar11 = plStack_208 + 5;
              pppppplVar30 = (long ******)&UNK_10f415d0e;
              for (uVar24 = 0; uVar31 != uVar24; uVar24 = uVar24 + 1) {
                if (*(char *)((long)plVar11 + 0x17) < '\0') {
                  if (plVar11[1] == 0) goto LAB_1074dfe40;
                }
                else if (*(char *)((long)plVar11 + 0x17) == '\0') {
LAB_1074dfe40:
                  __ZNSt3__19to_stringEm(&ppppplStack_1a0,uVar24);
                  func_0x0001004c3cd0(&pppplStack_160,&UNK_10f415d0e,&ppppplStack_1a0);
                  func_0x000100066230(plVar11,&pppplStack_160);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                            (&pppplStack_160);
                  func_0x0001074e21c0();
                }
                plVar11 = plVar11 + 8;
              }
              lVar29 = plVar27[-8];
              if ((lVar29 == 0) || (func_0x0001074e20bc(), (int)lVar29 == 0)) {
                func_0x0001074e20e8(plVar27 + -3);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
              }
              else {
                lVar29 = plVar27[-7];
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppppplStack_1a0,plVar27 + -3);
                pppplStack_160 = (long ****)0x0;
                ppppplStack_158 = (long *****)CONCAT44(ppppplStack_158._4_4_,(int)lVar29);
                ppppplStack_148 = ppppplStack_198;
                ppppplStack_150 = ppppplStack_1a0;
                ppppplStack_140 = ppppplStack_190;
                ppppplStack_1a0 = (long *****)0x0;
                ppppplStack_198 = (long *****)0x0;
                ppppplStack_190 = (long *****)0x0;
                func_0x0001074e20e8();
                func_0x00010002b838(&ppplStack_138);
                func_0x0001074e215c();
                func_0x0001074e2124();
                func_0x0001074e21c0();
                uVar31 = (long)plStack_200 - (long)plStack_208 >> 6;
                plVar20 = plStack_208;
                plVar27 = plStack_200;
              }
              plVar11 = plVar20 + 10;
              for (uVar24 = 1; plVar13 = plStack_208, uVar24 < uVar31; uVar24 = uVar24 + 1) {
                if (*(char *)((long)plVar11 + 0x17) < '\0') {
                  if (plVar11[1] == 0) goto LAB_1074dff20;
                }
                else if (*(char *)((long)plVar11 + 0x17) == '\0') {
LAB_1074dff20:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (plVar11,plVar11 + -5);
                }
                plVar11 = plVar11 + 8;
              }
              lVar29 = (long)plVar27 - (long)plStack_208;
              ppppplStack_158 = (long *****)0x0;
              pppplStack_160 = (long ****)0x0;
              ppppplStack_148 = (long *****)0x0;
              ppppplStack_150 = (long *****)0x0;
              ppppplStack_140 = (long *****)CONCAT44(ppppplStack_140._4_4_,0x3f800000);
              for (ppppplVar34 = (long *****)0x0;
                  ppppplVar34 < (long *****)((long)plVar27 - (long)plVar20 >> 6);
                  ppppplVar34 = (long *****)((long)ppppplVar34 + 1)) {
                plVar20 = plVar20 + (long)ppppplVar34 * 8;
                iVar8 = (int)plVar20 + 0x28;
                func_0x0001074e21a8();
                func_0x000100152bb8();
                if (iVar8 != 0) {
                  *plVar20 = 0;
                  func_0x0001074e20e8(plVar20 + 5);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                }
                plVar11 = plVar20 + 2;
                func_0x0001000e107c(plVar11,plVar20 + 5);
                if ((int)plVar11 == 0) {
                  plVar11 = plVar20 + 5;
                  func_0x0001074e20e8();
                  func_0x000100152bb8();
                  if (((ulong)plVar11 & 1) == 0) {
                    pppppplVar21 = &ppppplStack_148;
                    func_0x000100102e7c(pppppplVar21,plVar20 + 5);
                    pppppplVar32 = (long ******)ppppplStack_158;
                    pppppplVar26 = pppppplVar21;
                    if ((long ******)ppppplStack_158 != (long ******)0x0) {
                      uVar24 = (long)ppppplStack_158 - 1;
                      if (((ulong)ppppplStack_158 & uVar24) == 0) {
                        pppppplVar30 = (long ******)(uVar24 & (ulong)pppppplVar21);
                      }
                      else {
                        pppppplVar30 = pppppplVar21;
                        if (ppppplStack_158 <= pppppplVar21) {
                          uVar31 = 0;
                          if ((long ******)ppppplStack_158 != (long ******)0x0) {
                            uVar31 = (ulong)pppppplVar21 / (ulong)ppppplStack_158;
                          }
                          pppppplVar30 = (long ******)
                                         ((long)pppppplVar21 - uVar31 * (long)ppppplStack_158);
                        }
                      }
                      pppplVar28 = (long ****)pppplStack_160[(long)pppppplVar30];
                      if (pppplVar28 != (long ****)0x0) {
                        do {
                          while( true ) {
                            pppplVar28 = (long ****)*pppplVar28;
                            if (pppplVar28 == (long ****)0x0) goto LAB_1074e00cc;
                            pppppplVar17 = (long ******)pppplVar28[1];
                            if (pppppplVar17 != pppppplVar21) break;
                            pppppplVar26 = (long ******)(pppplVar28 + 2);
                            func_0x0001000e107c(pppppplVar26,plVar20 + 5);
                            if (((ulong)pppppplVar26 & 1) != 0) goto LAB_1074e01f8;
                          }
                          if (((ulong)pppppplVar32 & uVar24) == 0) {
                            pppppplVar17 = (long ******)((ulong)pppppplVar17 & uVar24);
                          }
                          else if (pppppplVar32 <= pppppplVar17) {
                            uVar31 = 0;
                            if (pppppplVar32 != (long ******)0x0) {
                              uVar31 = (ulong)pppppplVar17 / (ulong)pppppplVar32;
                            }
                            pppppplVar17 = (long ******)
                                           ((long)pppppplVar17 - uVar31 * (long)pppppplVar32);
                          }
                        } while (pppppplVar17 == pppppplVar30);
                      }
                    }
LAB_1074e00cc:
                    func_0x0001074e2234();
                    ppppplStack_190 = (long *****)0x0;
                    *pppppplVar26 = (long *****)0x0;
                    pppppplVar26[1] = (long *****)pppppplVar21;
                    ppppplStack_1a0 = (long *****)pppppplVar26;
                    ppppplStack_198 = (long *****)&ppppplStack_150;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (pppppplVar26 + 2,plVar20 + 5);
                    pppppplVar26[5] = ppppplVar34;
                    ppppplStack_190 = (long *****)CONCAT71(ppppplStack_190._1_7_,1);
                    if ((pppppplVar32 == (long ******)0x0) ||
                       (ppppplStack_140._0_4_ * (float)pppppplVar32 <
                        (float)((long)ppppplStack_148 + 1))) {
                      bVar5 = (long ******)0x2 < pppppplVar32;
                      bVar7 = pppppplVar32 == (long ******)0x3;
                      func_0x0001074e2110((long)pppppplVar32 << 1);
                      uVar1 = extraout_x8_00;
                      if (!bVar5 || bVar7) {
                        uVar1 = extraout_x9;
                      }
                      FUN_107477274(&pppplStack_160,uVar1);
                      pppppplVar32 = (long ******)ppppplStack_158;
                      if (((ulong)ppppplStack_158 & (long)ppppplStack_158 - 1U) == 0) {
                        pppppplVar30 = (long ******)
                                       ((long)ppppplStack_158 - 1U & (ulong)pppppplVar21);
                      }
                      else {
                        pppppplVar30 = pppppplVar21;
                        if (ppppplStack_158 <= pppppplVar21) {
                          uVar24 = 0;
                          if ((long ******)ppppplStack_158 != (long ******)0x0) {
                            uVar24 = (ulong)pppppplVar21 / (ulong)ppppplStack_158;
                          }
                          pppppplVar30 = (long ******)
                                         ((long)pppppplVar21 - uVar24 * (long)ppppplStack_158);
                        }
                      }
                    }
                    pppplVar28 = (long ****)pppplStack_160[(long)pppppplVar30];
                    if (pppplVar28 == (long ****)0x0) {
                      *ppppplStack_1a0 = (long ****)ppppplStack_150;
                      ppppplStack_150 = ppppplStack_1a0;
                      pppplStack_160[(long)pppppplVar30] = (long ***)&ppppplStack_150;
                      if ((long *****)*ppppplStack_1a0 != (long *****)0x0) {
                        pppppplVar21 = (long ******)(*ppppplStack_1a0)[1];
                        if (((ulong)pppppplVar32 & (long)pppppplVar32 - 1U) == 0) {
                          pppppplVar21 = (long ******)
                                         ((ulong)pppppplVar21 & (long)pppppplVar32 - 1U);
                        }
                        else if (pppppplVar32 <= pppppplVar21) {
                          uVar24 = 0;
                          if (pppppplVar32 != (long ******)0x0) {
                            uVar24 = (ulong)pppppplVar21 / (ulong)pppppplVar32;
                          }
                          pppppplVar21 = (long ******)
                                         ((long)pppppplVar21 - uVar24 * (long)pppppplVar32);
                        }
                        pppplStack_160[(long)pppppplVar21] = (long ***)ppppplStack_1a0;
                      }
                    }
                    else {
                      *ppppplStack_1a0 = (long ****)*pppplVar28;
                      *pppplVar28 = (long ***)ppppplStack_1a0;
                    }
                    ppppplStack_1a0 = (long *****)0x0;
                    ppppplStack_148 = (long *****)((long)ppppplStack_148 + 1);
                    FUN_107477408(&ppppplStack_1a0);
                  }
                }
                else {
                  *plVar20 = 0;
                  if ((long)ppppplVar34 + 1 == lVar29 >> 6) {
                    func_0x0001074e21a8(plVar20 + 2);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                    func_0x0001074e20e8(plVar20 + 5);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                  }
                  else {
                    func_0x0001074e21a8(plVar20 + 2);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                    __ZNSt3__19to_stringEm(&ppppplStack_1c0,ppppplVar34);
                    func_0x0001004c3cd0(&ppppplStack_1a0,&UNK_10f415d0e,&ppppplStack_1c0);
                    func_0x000100066230(plVar20 + 5,&ppppplStack_1a0);
                    func_0x0001074e21c0();
                    func_0x0001074e21f4();
                  }
                }
LAB_1074e01f8:
                plVar20 = plVar13;
              }
              FUN_1074597cc(&pppplStack_160);
            }
            plVar11 = plStack_200;
            plVar27 = plStack_208;
            ppppplVar34 = &pppplStack_160;
            ppppplStack_158 = (long *****)0x0;
            pppplStack_160 = (long ****)0x0;
            ppppplStack_148 = (long *****)0x0;
            ppppplStack_150 = (long *****)0x0;
            ppppplStack_140 = (long *****)CONCAT44(ppppplStack_140._4_4_,0x3f800000);
            for (plVar20 = plStack_208; plVar20 != plVar11; plVar20 = plVar20 + 8) {
              lVar29 = *plVar20;
              if ((lVar29 != 0) && (func_0x0001074e20bc(), (int)lVar29 != 0)) {
                func_0x0001004c3c6c(&pppplStack_160,plVar20 + 5);
              }
            }
            ppplStack_1d8 = (long ***)0x0;
            ppplStack_1d0 = (long ***)0x0;
            ppppplStack_198 = (long *****)0x0;
            ppppplStack_1a0 = (long *****)0x0;
            uStack_188 = 0;
            ppppplStack_190 = (long *****)0x0;
            uStack_180 = 0x3f800000;
            ppppplStack_1c0 = (long *****)&ppppplStack_168;
            ppppplStack_1b8 = &pppplStack_160;
            uStack_1c8 = 0;
            ppppplStack_1b0 = (long *****)&ppppplStack_1a0;
            ppplStack_1a8 = (long ***)&ppplStack_1d8;
            for (; plVar27 != plVar11; plVar27 = plVar27 + 8) {
              func_0x0001074e228c();
              func_0x0001074e228c();
            }
            func_0x0001074e22a0();
            func_0x0001005d0538(&pppplStack_160);
            ppplVar36 = ppplStack_1d0;
            pppppplVar30 = (long ******)(plVar9 + 0x16);
            for (pppplVar28 = (long ****)ppplStack_1d8; pppplVar28 != (long ****)ppplVar36;
                pppplVar28 = pppplVar28 + 3) {
              pppplVar12 = param_2[1];
              func_0x0001073caeb8();
              ppppplVar35 = (long *****)(plVar9 + 0x17);
              func_0x000100102e7c(ppppplVar35,pppplVar28);
              ppppplVar25 = (long *****)plVar9[0x15];
              if (ppppplVar25 != (long *****)0x0) {
                uVar24 = (long)ppppplVar25 - 1;
                if (((ulong)ppppplVar25 & uVar24) == 0) {
                  ppppplVar34 = (long *****)(uVar24 & (ulong)ppppplVar35);
                }
                else {
                  ppppplVar34 = ppppplVar35;
                  if (ppppplVar25 <= ppppplVar35) {
                    uVar31 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar31 = (ulong)ppppplVar35 / (ulong)ppppplVar25;
                    }
                    ppppplVar34 = (long *****)((long)ppppplVar35 - uVar31 * (long)ppppplVar25);
                  }
                }
                ppppplVar33 = *(long ******)(plVar9[0x14] + (long)ppppplVar34 * 8);
                if (ppppplVar33 != (long *****)0x0) {
                  do {
                    while( true ) {
                      ppppplVar33 = (long *****)*ppppplVar33;
                      if (ppppplVar33 == (long *****)0x0) goto LAB_1074e03ac;
                      ppppplVar18 = (long *****)ppppplVar33[1];
                      if (ppppplVar18 != ppppplVar35) break;
                      ppppplVar18 = ppppplVar33 + 2;
                      func_0x0001000e107c(ppppplVar18,pppplVar28);
                      if (((ulong)ppppplVar18 & 1) != 0) goto LAB_1074e0648;
                    }
                    if (((ulong)ppppplVar25 & uVar24) == 0) {
                      ppppplVar18 = (long *****)((ulong)ppppplVar18 & uVar24);
                    }
                    else if (ppppplVar25 <= ppppplVar18) {
                      uVar31 = 0;
                      if (ppppplVar25 != (long *****)0x0) {
                        uVar31 = (ulong)ppppplVar18 / (ulong)ppppplVar25;
                      }
                      ppppplVar18 = (long *****)((long)ppppplVar18 - uVar31 * (long)ppppplVar25);
                    }
                  } while (ppppplVar18 == ppppplVar34);
                }
              }
LAB_1074e03ac:
              ppppplVar33 = (long *****)0x80;
              __Znwm();
              ppppplStack_150 = (long *****)0x0;
              *ppppplVar33 = (long ****)0x0;
              ppppplVar33[1] = (long ****)ppppplVar35;
              pppplStack_160 = (long ****)ppppplVar33;
              ppppplStack_158 = (long *****)pppppplVar30;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (ppppplVar33 + 2,pppplVar28);
              ppppplVar33[0xf] = (long ****)0x0;
              ppppplVar33[0xe] = (long ****)0x0;
              ppppplVar33[0xd] = (long ****)0x0;
              ppppplVar33[0xc] = (long ****)0x0;
              ppppplVar33[0xb] = (long ****)0x0;
              ppppplVar33[10] = (long ****)0x0;
              ppppplVar33[9] = (long ****)0x0;
              ppppplVar33[8] = (long ****)0x0;
              ppppplVar33[7] = (long ****)0x0;
              ppppplVar33[6] = (long ****)0x0;
              ppppplVar33[5] = (long ****)0x0;
              ppppplStack_150 = (long *****)CONCAT71(ppppplStack_150._1_7_,1);
              if ((ppppplVar25 == (long *****)0x0) ||
                 (*(float *)(plVar9 + 0x18) * (float)ppppplVar25 < (float)(plVar9[0x17] + 1))) {
                bVar5 = (long *****)0x2 < ppppplVar25;
                bVar7 = ppppplVar25 == (long *****)0x3;
                func_0x0001074e2110((long)ppppplVar25 << 1);
                ppppplVar34 = extraout_x8_01;
                if (!bVar5 || bVar7) {
                  ppppplVar34 = extraout_x9_00;
                }
                if ((long)ppppplVar34 - 1U == 0) {
                  ppppplVar34 = (long *****)0x2;
                }
                else if (((ulong)ppppplVar34 & (long)ppppplVar34 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                }
                ppppplVar25 = (long *****)plVar9[0x15];
                if (ppppplVar25 < ppppplVar34) {
LAB_1074e0460:
                  ppppplVar25 = ppppplVar34;
                  if ((ulong)ppppplVar25 >> 0x3d != 0) goto LAB_1074e0aa0;
                  lVar29 = (long)ppppplVar25 << 3;
                  __Znwm(lVar29);
                  FUN_1074e1e70(plVar9 + 0x14,lVar29);
                  plVar9[0x15] = (long)ppppplVar25;
                  lVar29 = plVar9[0x14];
                  for (ppppplVar34 = (long *****)0x0; ppppplVar25 != ppppplVar34;
                      ppppplVar34 = (long *****)((long)ppppplVar34 + 1)) {
                    *(undefined8 *)(lVar29 + (long)ppppplVar34 * 8) = 0;
                  }
                  ppppplVar34 = *pppppplVar30;
                  if (ppppplVar34 != (long *****)0x0) {
                    ppppplVar18 = (long *****)ppppplVar34[1];
                    uVar31 = (long)ppppplVar25 - 1;
                    uVar24 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar24 = (ulong)ppppplVar18 / (ulong)ppppplVar25;
                    }
                    ppppplVar22 = ppppplVar18;
                    if (ppppplVar25 <= ppppplVar18) {
                      ppppplVar22 = (long *****)((long)ppppplVar18 - uVar24 * (long)ppppplVar25);
                    }
                    if (((ulong)ppppplVar25 & uVar31) == 0) {
                      ppppplVar22 = (long *****)((ulong)ppppplVar18 & uVar31);
                    }
                    *(long *******)(lVar29 + (long)ppppplVar22 * 8) = pppppplVar30;
                    while (ppppplVar18 = ppppplVar34, ppppplVar34 = (long *****)*ppppplVar18,
                          ppppplVar34 != (long *****)0x0) {
                      ppppplVar23 = (long *****)ppppplVar34[1];
                      if (((ulong)ppppplVar25 & uVar31) == 0) {
                        ppppplVar23 = (long *****)((ulong)ppppplVar23 & uVar31);
                      }
                      else if (ppppplVar25 <= ppppplVar23) {
                        uVar24 = 0;
                        if (ppppplVar25 != (long *****)0x0) {
                          uVar24 = (ulong)ppppplVar23 / (ulong)ppppplVar25;
                        }
                        ppppplVar23 = (long *****)((long)ppppplVar23 - uVar24 * (long)ppppplVar25);
                      }
                      if (ppppplVar23 != ppppplVar22) {
                        if (*(long *)(lVar29 + (long)ppppplVar23 * 8) == 0) {
                          *(long ******)(lVar29 + (long)ppppplVar23 * 8) = ppppplVar18;
                          ppppplVar22 = ppppplVar23;
                        }
                        else {
                          func_0x0001074e21c8();
                          lVar29 = extraout_x8_02;
                          uVar31 = extraout_x9_01;
                          ppppplVar34 = extraout_x10;
                          ppppplVar22 = extraout_x11;
                        }
                      }
                    }
                  }
                }
                else if (ppppplVar34 < ppppplVar25) {
                  ppppplVar18 = (long *****)
                                (long)((float)(ulong)plVar9[0x17] / *(float *)(plVar9 + 0x18));
                  if ((ppppplVar25 < (long *****)0x3) ||
                     (((ulong)ppppplVar25 & (long)ppppplVar25 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((long *****)0x1 < ppppplVar18) {
                    ppppplVar18 = (long *****)(1L << (-LZCOUNT((long)ppppplVar18 + -1) & 0x3fU));
                  }
                  if (ppppplVar34 <= ppppplVar18) {
                    ppppplVar34 = ppppplVar18;
                  }
                  if (ppppplVar34 < ppppplVar25) {
                    if (ppppplVar34 != (long *****)0x0) goto LAB_1074e0460;
                    FUN_1074e1e70(plVar9 + 0x14,0);
                    ppppplVar25 = (long *****)0x0;
                    plVar9[0x15] = 0;
                  }
                  else {
                    ppppplVar25 = (long *****)plVar9[0x15];
                  }
                }
                if (((ulong)ppppplVar25 & (long)ppppplVar25 - 1U) == 0) {
                  ppppplVar34 = (long *****)((long)ppppplVar25 - 1U & (ulong)ppppplVar35);
                }
                else {
                  ppppplVar34 = ppppplVar35;
                  if (ppppplVar25 <= ppppplVar35) {
                    uVar24 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar24 = (ulong)ppppplVar35 / (ulong)ppppplVar25;
                    }
                    ppppplVar34 = (long *****)((long)ppppplVar35 - uVar24 * (long)ppppplVar25);
                  }
                }
              }
              lVar29 = plVar9[0x14];
              plVar20 = *(long **)(lVar29 + (long)ppppplVar34 * 8);
              if (plVar20 == (long *)0x0) {
                *ppppplVar33 = (long ****)*pppppplVar30;
                *pppppplVar30 = ppppplVar33;
                *(long *******)(lVar29 + (long)ppppplVar34 * 8) = pppppplVar30;
                if (*ppppplVar33 != (long ****)0x0) {
                  ppppplVar35 = (long *****)(*ppppplVar33)[1];
                  if (((ulong)ppppplVar25 & (long)ppppplVar25 - 1U) == 0) {
                    ppppplVar35 = (long *****)((ulong)ppppplVar35 & (long)ppppplVar25 - 1U);
                  }
                  else if (ppppplVar25 <= ppppplVar35) {
                    uVar24 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar24 = (ulong)ppppplVar35 / (ulong)ppppplVar25;
                    }
                    ppppplVar35 = (long *****)((long)ppppplVar35 - uVar24 * (long)ppppplVar25);
                  }
                  *(long ******)(lVar29 + (long)ppppplVar35 * 8) = ppppplVar33;
                }
              }
              else {
                *ppppplVar33 = (long ****)*plVar20;
                *plVar20 = (long)ppppplVar33;
              }
              pppplStack_160 = (long ****)0x0;
              plVar9[0x17] = plVar9[0x17] + 1;
              FUN_1074e1e88(&pppplStack_160);
LAB_1074e0648:
              if ((((*(char *)(ppppplVar33 + 0xf) != '\x01') ||
                   (*(char *)(ppppplVar33 + 8) != '\x01')) ||
                  (*(int *)((long)ppppplVar33 + 0x2c) != (int)*plVar9)) ||
                 (*(int *)(ppppplVar33 + 6) != *(int *)((long)plVar9 + 4))) {
                FUN_1074979d4(ppppplVar33 + 0xd);
                FUN_1074de3f4(ppppplVar33 + 9);
                FUN_107456c98(ppppplVar33 + 5);
                uStack_16a = 0;
                uStack_16c = 0x100;
                FUN_107497a08(&pppplStack_160,pppplVar12,*plVar9,plVar9 + 0x19,1,&uStack_16c);
                FUN_107440a90(ppppplVar33 + 5,&pppplStack_160);
                ppppplVar35 = ppppplStack_150;
                ppppplStack_150 = (long *****)0x0;
                if ((long ******)ppppplVar35 != (long ******)0x0) {
                  func_0x0001074e207c();
                }
                ppppplVar35 = (long *****)*plVar9;
                (*(code *)(*pppplVar12)[0x12])(&ppppplStack_150,pppplVar12,ppppplVar35,0xf,0);
                ppppplStack_158 = (long *****)CONCAT62(ppppplStack_158._2_6_,0xf);
                pppplStack_160 = (long ****)ppppplVar35;
                func_0x0001074de428(ppppplVar33 + 9,&pppplStack_160);
                ppppplVar35 = ppppplStack_150;
                ppppplStack_150 = (long *****)0x0;
                if (ppppplVar35 != (long *****)0x0) {
                  func_0x0001074e207c();
                }
                FUN_107498684(&pppplStack_160);
                ppppplVar35 = ppppplVar33 + 5;
                FUN_1073b9c0c();
                if (((ulong)ppppplStack_150 & 1) == 0) {
                  ppppplStack_150 = (long *****)CONCAT71(ppppplStack_150._1_7_,1);
                }
                ppppplStack_158 = (long *****)((ulong)ppppplStack_158 & 0xffffffff00000000);
                pppppplVar21 = (long ******)(ppppplVar33 + 9);
                pppplStack_160 = (long ****)ppppplVar35;
                FUN_1074de480();
                if (cStack_e8 == '\x01') {
                  if (iStack_f0 != 1) {
                    iStack_f0 = 1;
                  }
                }
                else {
                  iStack_f0 = 1;
                  cStack_e8 = '\x01';
                }
                ppppplStack_100 = (long *****)pppppplVar21;
                func_0x00010002b838(&ppppplStack_1c0,&UNK_10f415d31);
                func_0x000100610910(&ppppplStack_1a0,&ppppplStack_1c0,pppplVar28);
                func_0x0001074e21f4();
                pppppplVar21 = (long ******)ppppplStack_1a0;
                if (-1 < (long)ppppplStack_190) {
                  pppppplVar21 = &ppppplStack_1a0;
                }
                pppppplVar26 = (long ******)*plVar9;
                ppppplStack_168 = (long *****)pppppplVar26;
                (*(code *)(*pppplVar12)[0xe])
                          (&ppppplStack_1b8,pppplVar12,pppppplVar21,&ppppplStack_168,&pppplStack_160
                          );
                ppppplStack_1c0 = (long *****)pppppplVar26;
                FUN_107497a1c(ppppplVar33 + 0xd,&ppppplStack_1c0);
                ppppplVar35 = ppppplStack_1b8;
                ppppplStack_1b8 = (long *****)0x0;
                if ((long ******)ppppplVar35 != (long ******)0x0) {
                  func_0x0001074e207c();
                }
                func_0x0001074e21c0();
              }
            }
            func_0x0001074e2284();
            plVar27 = plStack_200;
            plVar20 = plStack_208;
            func_0x0001074e21a8();
            func_0x00010002b838(&pppplStack_160);
            func_0x0001074e20e8();
            func_0x00010002b838(&ppppplStack_148);
            FUN_1074e1df0(&ppppplStack_1a0,&pppplStack_160,2);
            lVar29 = 0x18;
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        ((long)&pppplStack_160 + lVar29);
              lVar29 = lVar29 + -0x18;
            } while (lVar29 != -0x18);
            for (; plVar20 != plVar27; plVar20 = plVar20 + 8) {
              func_0x0001004c3c6c(&ppppplStack_1a0,plVar20 + 5);
            }
            ppplStack_1d8 = (long ***)param_2[2];
            (*(code *)**ppplStack_1d8)(ppplStack_1d8,&UNK_10f415d52,0xf);
            FUN_10750052c(&ppppplStack_1c0);
            ppppplVar34 = ppppplStack_1c0;
            plVar11 = plStack_208;
            while( true ) {
              uVar6 = plVar11 == plVar27;
              plVar20 = (long *)(ulong)(byte)uVar6;
              if ((bool)uVar6) break;
              pppppplVar30 = &ppppplStack_1a0;
              func_0x0001067e0440(pppppplVar30,plVar11 + 2);
              if ((pppppplVar30 == (long ******)0x0) ||
                 (plVar13 = plVar9, FUN_1074df4b4(plVar9,plVar11 + 2), plVar13 == (long *)0x0))
              goto LAB_1074e0a7c;
              plVar14 = plVar11 + 5;
              func_0x0001074e20e8();
              func_0x000100152bb8();
              ppppplStack_158 = ppppplVar34;
              ppppplStack_150 = (long *****)(param_2[9] + 0x2e);
              uVar6 = (char)plVar9[0x13] == '\0';
              uVar4 = 1;
              ppplStack_138 = (long ***)(plVar9 + 0x10);
              if ((bool)uVar6) {
                ppplStack_138 = (long ***)0x0;
              }
              pppplStack_160 = (long ****)param_2;
              ppppplStack_148 = (long *****)(plVar9 + 0x19);
              ppppplStack_140 = (long *****)((long)plVar9 + 0xcd);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&ppplStack_130,plVar11 + 5);
              uStack_118 = SUB81(plVar14,0);
              ppuStack_110 = &PTR_FUN_1109b5910;
              ppppplStack_100 = (long *****)&ppppplStack_1a0;
              lVar29 = *plVar11;
              plStack_108 = plVar9;
              pppuStack_f8 = &ppuStack_110;
              if ((lVar29 != 0) && (func_0x0001074e20bc(), (int)lVar29 != 0)) {
                func_0x0001074e226c();
                if ((bool)uVar4 && !(bool)uVar6) {
                  plVar15 = (long *)*plVar11;
                  (**(code **)(*plVar15 + 0x28))
                            (plVar15,&pppplStack_160,
                             extraout_x9_02 + (extraout_x8_03 & 0xffffffff) * 0x1b0,plVar13,
                             plVar11 + 5);
                  goto LAB_1074e0a4c;
                }
LAB_1074e0a60:
                func_0x0001074e10e0(&pppplStack_160);
                goto LAB_1074e0a7c;
              }
              iVar8 = (int)plVar11 + 0x28;
              func_0x0001074e20e8();
              func_0x000100152bb8();
              if (iVar8 == 0) {
                iVar8 = (int)plVar11 + 0x28;
                func_0x0001074e21a8();
                func_0x000100152bb8();
                if (iVar8 != 0) {
                  uVar24 = (ulong)*(byte *)(plVar9 + 0xf);
                  goto LAB_1074e09d0;
                }
                plVar16 = plVar9 + 0x14;
                FUN_1074e1ec0(plVar16,plVar11 + 5);
                if ((plVar16 == (long *)0x0) || (uVar6 = (char)plVar16[0xf] == '\x01', !(bool)uVar6)
                   ) goto LAB_1074e0a60;
                plVar16 = plVar16 + 0xd;
                uVar4 = 1;
              }
              else {
                func_0x0001074e22d8();
                uVar24 = extraout_x8_04;
LAB_1074e09d0:
                plVar16 = plVar9 + (uVar24 & 0xffffffff) * 3 + 9;
                if ((*(byte *)(plVar16 + 2) & 1) == 0) goto LAB_1074e0a60;
              }
              plVar15 = (long *)*plVar11;
              if (plVar15 == (long *)0x0) {
                plVar15 = plVar9;
                FUN_1074df68c(plVar9,param_2,ppppplVar34,plVar13,plVar16,plVar14);
              }
              else {
                func_0x0001074e226c();
                if (!(bool)uVar4 || (bool)uVar6) goto LAB_1074e0a60;
                (**(code **)(*plVar15 + 0x20))();
              }
LAB_1074e0a4c:
              if (((ulong)plVar15 & 1) == 0) goto LAB_1074e0a60;
              func_0x0001074e10e0(&pppplStack_160);
              plVar11 = plVar11 + 8;
            }
            *(char *)(plVar9 + 0xf) = '\x01' - (char)plVar9[0xf];
LAB_1074e0a7c:
            FUN_1073eb118(&ppppplStack_1c0);
            FUN_1074996e0(&ppplStack_1d8);
            func_0x0001074e22a0();
            func_0x0001074e1098(&plStack_208);
          }
          else {
            plVar20 = (long *)0x0;
          }
        }
        FUN_1073e6588(&uStack_1f0);
      }
      func_0x0001074e2194(uStack_d8);
      if ((bool)uVar6) {
        return plVar20;
      }
      ___stack_chk_fail();
LAB_1074e0aa0:
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1074e0aa8);
      (*pcVar3)();
    }
    FUN_1074e11bc(alStack_48,param_2,(param_1[1] - *param_1) / 0x1b0);
    FUN_1074e113c(param_1,alStack_48);
    param_1 = alStack_48;
    func_0x0001074e1640(param_1);
  }
  return param_1;
}



/* Entry: 1074dfb0c; end: 1074e0c97;  */

bool FUN_1074dfb0c(long *param_1,long *****param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  ulong *puVar9;
  long *plVar10;
  long ****pppplVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 extraout_x8;
  long ******pppppplVar16;
  undefined8 extraout_x8_00;
  long *****ppppplVar17;
  long *****extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long lVar18;
  undefined8 extraout_x9;
  long *****extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *puVar19;
  long extraout_x9_02;
  long ******pppppplVar20;
  long *****extraout_x10;
  long *****ppppplVar21;
  long *****extraout_x11;
  long *****ppppplVar22;
  ulong uVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  long *plVar26;
  long ****pppplVar27;
  long lVar28;
  long ******pppppplVar29;
  ulong uVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long ***ppplVar35;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long ***ppplStack_188;
  long ***ppplStack_180;
  undefined8 uStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  long *****ppppplStack_160;
  long ***ppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined2 uStack_11c;
  undefined1 uStack_11a;
  long *****ppppplStack_118;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  long *****ppppplStack_b0;
  undefined ***pppuStack_a8;
  int iStack_a0;
  char cStack_98;
  undefined8 uStack_88;
  
  func_0x0001074e223c();
  lVar28 = *param_3;
  lVar2 = param_3[1];
  uStack_88 = extraout_x8;
  if (lVar28 == lVar2) {
    bVar7 = true;
    uVar6 = 1;
  }
  else {
    ppplVar35 = param_2[5][0xf];
    _log2();
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    FUN_1074dfa70(&uStack_1a0,(lVar2 - lVar28) / 0x1b0);
    lVar2 = param_3[1];
    for (lVar28 = *param_3; uVar23 = uStack_198, lVar28 != lVar2; lVar28 = lVar28 + 0x1b0) {
      if ((*(float *)(lVar28 + 0x198) <= (float)(double)ppplVar35) &&
         ((float)(double)ppplVar35 <= *(float *)(lVar28 + 0x19c))) {
        if (uStack_198 < uStack_190) {
          FUN_1074e16a8(uStack_198,lVar28);
          uStack_198 = uVar23 + 0x1b0;
        }
        else {
          puVar9 = &uStack_1a0;
          FUN_1074e19e0(puVar9,(long)(uStack_198 - uStack_1a0) / 0x1b0 + 1);
          FUN_1074e11bc(&pppplStack_110,puVar9,(long)(uStack_198 - uStack_1a0) / 0x1b0,&uStack_190);
          FUN_1074e16a8(ppppplStack_100,lVar28);
          ppppplStack_100 = ppppplStack_100 + 0x36;
          FUN_1074e113c(&uStack_1a0,&pppplStack_110);
          uVar23 = uStack_198;
          func_0x0001074e1640(&pppplStack_110);
          uStack_198 = uVar23;
        }
      }
    }
    if (uStack_1a0 == uStack_198) {
      bVar7 = true;
      uVar6 = 1;
    }
    else {
      uVar6 = (char)param_1[(ulong)*(byte *)(param_1 + 0xf) * 3 + 0xb] == '\x01';
      if ((((bool)uVar6) &&
          (uVar6 = (char)param_1[(ulong)*(byte *)(param_1 + 0xf) * 4 + 4] == '\x01', (bool)uVar6))
         && (uVar6 = *(char *)(param_2[9] + 0x31) == '\x01', (bool)uVar6)) {
        plStack_1b8 = (long *)0x0;
        plStack_1b0 = (long *)0x0;
        lVar28 = 0x48;
        uStack_1a8 = 0;
        for (uVar23 = 0; plVar26 = plStack_1b0, plVar10 = plStack_1b8,
            uVar23 < (ulong)((long)(uStack_198 - uStack_1a0) / 0x1b0); uVar23 = uVar23 + 1) {
          lVar2 = uStack_1a0 + lVar28;
          pppplStack_110 = (long ****)(lVar2 + -0x30);
          ppppplStack_108 = (long *****)(long)*(char *)(lVar2 + -0x19);
          if ((long)ppppplStack_108 < 0) {
            pppplStack_110 = (long ****)*pppplStack_110;
            ppppplStack_108 = *(long ******)(lVar2 + -0x28);
          }
          plVar10 = param_1 + 0x20;
          FUN_1074e1c80(plVar10,&pppplStack_110);
          if (plVar10 != (long *)0x0) {
            ppppplVar33 = (long *****)plVar10[4];
            if (plStack_1b8 == plStack_1b0) {
              func_0x00010002b838(&ppppplStack_150,&UNK_10f415cc2);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&ppppplStack_150,plStack_1b0 + -3);
            }
            lVar2 = uStack_1a0 + lVar28;
            lVar18 = (long)*(char *)(lVar2 + -1);
            if (lVar18 < 0) {
              lVar18 = *(long *)(lVar2 + -0x10);
            }
            pppppplVar29 = &ppppplStack_150;
            if (lVar18 != 0) {
              pppppplVar29 = (long ******)(lVar2 + -0x18);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppplStack_170,pppppplVar29);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppplStack_188,uStack_1a0 + lVar28);
            ppppplStack_108 = (long *****)CONCAT44(ppppplStack_108._4_4_,(int)uVar23);
            ppppplStack_f8 = ppppplStack_168;
            ppppplStack_100 = ppppplStack_170;
            ppppplStack_f0 = ppppplStack_160;
            ppppplStack_170 = (long *****)0x0;
            ppppplStack_168 = (long *****)0x0;
            ppppplStack_160 = (long *****)0x0;
            ppplStack_e0 = ppplStack_180;
            ppplStack_e8 = ppplStack_188;
            uStack_d8 = uStack_178;
            ppplStack_188 = (long ***)0x0;
            ppplStack_180 = (long ***)0x0;
            uStack_178 = 0;
            pppplStack_110 = (long ****)ppppplVar33;
            func_0x0001074e215c();
            func_0x0001074e2124();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_188);
            func_0x0001074e21f4();
            func_0x0001074e21c0();
          }
          lVar28 = lVar28 + 0x1b0;
        }
        if (plStack_1b8 == plStack_1b0) {
          pppplStack_110 = (long ****)0x0;
          ppppplStack_108 = (long *****)((ulong)ppppplStack_108 & 0xffffffff00000000);
          func_0x0001074e21a8();
          func_0x00010002b838(&ppppplStack_100);
          func_0x0001074e20e8();
          func_0x00010002b838(&ppplStack_e8);
          func_0x0001074e215c();
          func_0x0001074e2124();
        }
        else {
          uVar30 = (long)plStack_1b0 - (long)plStack_1b8 >> 6;
          plVar12 = plStack_1b8 + 5;
          pppppplVar29 = (long ******)&UNK_10f415d0e;
          for (uVar23 = 0; uVar30 != uVar23; uVar23 = uVar23 + 1) {
            if (*(char *)((long)plVar12 + 0x17) < '\0') {
              if (plVar12[1] == 0) goto LAB_1074dfe40;
            }
            else if (*(char *)((long)plVar12 + 0x17) == '\0') {
LAB_1074dfe40:
              __ZNSt3__19to_stringEm(&ppppplStack_150,uVar23);
              func_0x0001004c3cd0(&pppplStack_110,&UNK_10f415d0e,&ppppplStack_150);
              func_0x000100066230(plVar12,&pppplStack_110);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_110);
              func_0x0001074e21c0();
            }
            plVar12 = plVar12 + 8;
          }
          lVar28 = plVar26[-8];
          if ((lVar28 == 0) || (func_0x0001074e20bc(), (int)lVar28 == 0)) {
            func_0x0001074e20e8(plVar26 + -3);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
          }
          else {
            lVar28 = plVar26[-7];
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppplStack_150,plVar26 + -3);
            pppplStack_110 = (long ****)0x0;
            ppppplStack_108 = (long *****)CONCAT44(ppppplStack_108._4_4_,(int)lVar28);
            ppppplStack_f8 = ppppplStack_148;
            ppppplStack_100 = ppppplStack_150;
            ppppplStack_f0 = ppppplStack_140;
            ppppplStack_150 = (long *****)0x0;
            ppppplStack_148 = (long *****)0x0;
            ppppplStack_140 = (long *****)0x0;
            func_0x0001074e20e8();
            func_0x00010002b838(&ppplStack_e8);
            func_0x0001074e215c();
            func_0x0001074e2124();
            func_0x0001074e21c0();
            uVar30 = (long)plStack_1b0 - (long)plStack_1b8 >> 6;
            plVar10 = plStack_1b8;
            plVar26 = plStack_1b0;
          }
          plVar12 = plVar10 + 10;
          for (uVar23 = 1; plVar13 = plStack_1b8, uVar23 < uVar30; uVar23 = uVar23 + 1) {
            if (*(char *)((long)plVar12 + 0x17) < '\0') {
              if (plVar12[1] == 0) goto LAB_1074dff20;
            }
            else if (*(char *)((long)plVar12 + 0x17) == '\0') {
LAB_1074dff20:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar12,plVar12 + -5);
            }
            plVar12 = plVar12 + 8;
          }
          lVar28 = (long)plVar26 - (long)plStack_1b8;
          ppppplStack_108 = (long *****)0x0;
          pppplStack_110 = (long ****)0x0;
          ppppplStack_f8 = (long *****)0x0;
          ppppplStack_100 = (long *****)0x0;
          ppppplStack_f0 = (long *****)CONCAT44(ppppplStack_f0._4_4_,0x3f800000);
          for (ppppplVar33 = (long *****)0x0;
              ppppplVar33 < (long *****)((long)plVar26 - (long)plVar10 >> 6);
              ppppplVar33 = (long *****)((long)ppppplVar33 + 1)) {
            plVar10 = plVar10 + (long)ppppplVar33 * 8;
            iVar8 = (int)plVar10 + 0x28;
            func_0x0001074e21a8();
            func_0x000100152bb8();
            if (iVar8 != 0) {
              *plVar10 = 0;
              func_0x0001074e20e8(plVar10 + 5);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
            }
            plVar12 = plVar10 + 2;
            func_0x0001000e107c(plVar12,plVar10 + 5);
            if ((int)plVar12 == 0) {
              plVar12 = plVar10 + 5;
              func_0x0001074e20e8();
              func_0x000100152bb8();
              if (((ulong)plVar12 & 1) == 0) {
                pppppplVar20 = &ppppplStack_f8;
                func_0x000100102e7c(pppppplVar20,plVar10 + 5);
                pppppplVar31 = (long ******)ppppplStack_108;
                pppppplVar25 = pppppplVar20;
                if ((long ******)ppppplStack_108 != (long ******)0x0) {
                  uVar23 = (long)ppppplStack_108 - 1;
                  if (((ulong)ppppplStack_108 & uVar23) == 0) {
                    pppppplVar29 = (long ******)(uVar23 & (ulong)pppppplVar20);
                  }
                  else {
                    pppppplVar29 = pppppplVar20;
                    if (ppppplStack_108 <= pppppplVar20) {
                      uVar30 = 0;
                      if ((long ******)ppppplStack_108 != (long ******)0x0) {
                        uVar30 = (ulong)pppppplVar20 / (ulong)ppppplStack_108;
                      }
                      pppppplVar29 = (long ******)
                                     ((long)pppppplVar20 - uVar30 * (long)ppppplStack_108);
                    }
                  }
                  pppplVar27 = (long ****)pppplStack_110[(long)pppppplVar29];
                  if (pppplVar27 != (long ****)0x0) {
                    do {
                      while( true ) {
                        pppplVar27 = (long ****)*pppplVar27;
                        if (pppplVar27 == (long ****)0x0) goto LAB_1074e00cc;
                        pppppplVar16 = (long ******)pppplVar27[1];
                        if (pppppplVar16 != pppppplVar20) break;
                        pppppplVar25 = (long ******)(pppplVar27 + 2);
                        func_0x0001000e107c(pppppplVar25,plVar10 + 5);
                        if (((ulong)pppppplVar25 & 1) != 0) goto LAB_1074e01f8;
                      }
                      if (((ulong)pppppplVar31 & uVar23) == 0) {
                        pppppplVar16 = (long ******)((ulong)pppppplVar16 & uVar23);
                      }
                      else if (pppppplVar31 <= pppppplVar16) {
                        uVar30 = 0;
                        if (pppppplVar31 != (long ******)0x0) {
                          uVar30 = (ulong)pppppplVar16 / (ulong)pppppplVar31;
                        }
                        pppppplVar16 = (long ******)
                                       ((long)pppppplVar16 - uVar30 * (long)pppppplVar31);
                      }
                    } while (pppppplVar16 == pppppplVar29);
                  }
                }
LAB_1074e00cc:
                func_0x0001074e2234();
                ppppplStack_140 = (long *****)0x0;
                *pppppplVar25 = (long *****)0x0;
                pppppplVar25[1] = (long *****)pppppplVar20;
                ppppplStack_150 = (long *****)pppppplVar25;
                ppppplStack_148 = (long *****)&ppppplStack_100;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (pppppplVar25 + 2,plVar10 + 5);
                pppppplVar25[5] = ppppplVar33;
                ppppplStack_140 = (long *****)CONCAT71(ppppplStack_140._1_7_,1);
                if ((pppppplVar31 == (long ******)0x0) ||
                   (ppppplStack_f0._0_4_ * (float)pppppplVar31 < (float)((long)ppppplStack_f8 + 1)))
                {
                  bVar5 = (long ******)0x2 < pppppplVar31;
                  bVar7 = pppppplVar31 == (long ******)0x3;
                  func_0x0001074e2110((long)pppppplVar31 << 1);
                  uVar1 = extraout_x8_00;
                  if (!bVar5 || bVar7) {
                    uVar1 = extraout_x9;
                  }
                  FUN_107477274(&pppplStack_110,uVar1);
                  pppppplVar31 = (long ******)ppppplStack_108;
                  if (((ulong)ppppplStack_108 & (long)ppppplStack_108 - 1U) == 0) {
                    pppppplVar29 = (long ******)((long)ppppplStack_108 - 1U & (ulong)pppppplVar20);
                  }
                  else {
                    pppppplVar29 = pppppplVar20;
                    if (ppppplStack_108 <= pppppplVar20) {
                      uVar23 = 0;
                      if ((long ******)ppppplStack_108 != (long ******)0x0) {
                        uVar23 = (ulong)pppppplVar20 / (ulong)ppppplStack_108;
                      }
                      pppppplVar29 = (long ******)
                                     ((long)pppppplVar20 - uVar23 * (long)ppppplStack_108);
                    }
                  }
                }
                pppplVar27 = (long ****)pppplStack_110[(long)pppppplVar29];
                if (pppplVar27 == (long ****)0x0) {
                  *ppppplStack_150 = (long ****)ppppplStack_100;
                  ppppplStack_100 = ppppplStack_150;
                  pppplStack_110[(long)pppppplVar29] = (long ***)&ppppplStack_100;
                  if ((long *****)*ppppplStack_150 != (long *****)0x0) {
                    pppppplVar20 = (long ******)(*ppppplStack_150)[1];
                    if (((ulong)pppppplVar31 & (long)pppppplVar31 - 1U) == 0) {
                      pppppplVar20 = (long ******)((ulong)pppppplVar20 & (long)pppppplVar31 - 1U);
                    }
                    else if (pppppplVar31 <= pppppplVar20) {
                      uVar23 = 0;
                      if (pppppplVar31 != (long ******)0x0) {
                        uVar23 = (ulong)pppppplVar20 / (ulong)pppppplVar31;
                      }
                      pppppplVar20 = (long ******)((long)pppppplVar20 - uVar23 * (long)pppppplVar31)
                      ;
                    }
                    pppplStack_110[(long)pppppplVar20] = (long ***)ppppplStack_150;
                  }
                }
                else {
                  *ppppplStack_150 = (long ****)*pppplVar27;
                  *pppplVar27 = (long ***)ppppplStack_150;
                }
                ppppplStack_150 = (long *****)0x0;
                ppppplStack_f8 = (long *****)((long)ppppplStack_f8 + 1);
                FUN_107477408(&ppppplStack_150);
              }
            }
            else {
              *plVar10 = 0;
              if ((long)ppppplVar33 + 1 == lVar28 >> 6) {
                func_0x0001074e21a8(plVar10 + 2);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                func_0x0001074e20e8(plVar10 + 5);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
              }
              else {
                func_0x0001074e21a8(plVar10 + 2);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
                __ZNSt3__19to_stringEm(&ppppplStack_170,ppppplVar33);
                func_0x0001004c3cd0(&ppppplStack_150,&UNK_10f415d0e,&ppppplStack_170);
                func_0x000100066230(plVar10 + 5,&ppppplStack_150);
                func_0x0001074e21c0();
                func_0x0001074e21f4();
              }
            }
LAB_1074e01f8:
            plVar10 = plVar13;
          }
          FUN_1074597cc(&pppplStack_110);
        }
        plVar12 = plStack_1b0;
        plVar26 = plStack_1b8;
        ppppplVar33 = &pppplStack_110;
        ppppplStack_108 = (long *****)0x0;
        pppplStack_110 = (long ****)0x0;
        ppppplStack_f8 = (long *****)0x0;
        ppppplStack_100 = (long *****)0x0;
        ppppplStack_f0 = (long *****)CONCAT44(ppppplStack_f0._4_4_,0x3f800000);
        for (plVar10 = plStack_1b8; plVar10 != plVar12; plVar10 = plVar10 + 8) {
          lVar28 = *plVar10;
          if ((lVar28 != 0) && (func_0x0001074e20bc(), (int)lVar28 != 0)) {
            func_0x0001004c3c6c(&pppplStack_110,plVar10 + 5);
          }
        }
        ppplStack_188 = (long ***)0x0;
        ppplStack_180 = (long ***)0x0;
        ppppplStack_148 = (long *****)0x0;
        ppppplStack_150 = (long *****)0x0;
        uStack_138 = 0;
        ppppplStack_140 = (long *****)0x0;
        uStack_130 = 0x3f800000;
        ppppplStack_170 = (long *****)&ppppplStack_118;
        ppppplStack_168 = &pppplStack_110;
        uStack_178 = 0;
        ppppplStack_160 = (long *****)&ppppplStack_150;
        ppplStack_158 = (long ***)&ppplStack_188;
        for (; plVar26 != plVar12; plVar26 = plVar26 + 8) {
          func_0x0001074e228c();
          func_0x0001074e228c();
        }
        func_0x0001074e22a0();
        func_0x0001005d0538(&pppplStack_110);
        ppplVar35 = ppplStack_180;
        pppppplVar29 = (long ******)(param_1 + 0x16);
        for (pppplVar27 = (long ****)ppplStack_188; pppplVar27 != (long ****)ppplVar35;
            pppplVar27 = pppplVar27 + 3) {
          pppplVar11 = param_2[1];
          func_0x0001073caeb8();
          ppppplVar34 = (long *****)(param_1 + 0x17);
          func_0x000100102e7c(ppppplVar34,pppplVar27);
          ppppplVar24 = (long *****)param_1[0x15];
          if (ppppplVar24 != (long *****)0x0) {
            uVar23 = (long)ppppplVar24 - 1;
            if (((ulong)ppppplVar24 & uVar23) == 0) {
              ppppplVar33 = (long *****)(uVar23 & (ulong)ppppplVar34);
            }
            else {
              ppppplVar33 = ppppplVar34;
              if (ppppplVar24 <= ppppplVar34) {
                uVar30 = 0;
                if (ppppplVar24 != (long *****)0x0) {
                  uVar30 = (ulong)ppppplVar34 / (ulong)ppppplVar24;
                }
                ppppplVar33 = (long *****)((long)ppppplVar34 - uVar30 * (long)ppppplVar24);
              }
            }
            ppppplVar32 = *(long ******)(param_1[0x14] + (long)ppppplVar33 * 8);
            if (ppppplVar32 != (long *****)0x0) {
              do {
                while( true ) {
                  ppppplVar32 = (long *****)*ppppplVar32;
                  if (ppppplVar32 == (long *****)0x0) goto LAB_1074e03ac;
                  ppppplVar17 = (long *****)ppppplVar32[1];
                  if (ppppplVar17 != ppppplVar34) break;
                  ppppplVar17 = ppppplVar32 + 2;
                  func_0x0001000e107c(ppppplVar17,pppplVar27);
                  if (((ulong)ppppplVar17 & 1) != 0) goto LAB_1074e0648;
                }
                if (((ulong)ppppplVar24 & uVar23) == 0) {
                  ppppplVar17 = (long *****)((ulong)ppppplVar17 & uVar23);
                }
                else if (ppppplVar24 <= ppppplVar17) {
                  uVar30 = 0;
                  if (ppppplVar24 != (long *****)0x0) {
                    uVar30 = (ulong)ppppplVar17 / (ulong)ppppplVar24;
                  }
                  ppppplVar17 = (long *****)((long)ppppplVar17 - uVar30 * (long)ppppplVar24);
                }
              } while (ppppplVar17 == ppppplVar33);
            }
          }
LAB_1074e03ac:
          ppppplVar32 = (long *****)0x80;
          __Znwm();
          ppppplStack_100 = (long *****)0x0;
          *ppppplVar32 = (long ****)0x0;
          ppppplVar32[1] = (long ****)ppppplVar34;
          pppplStack_110 = (long ****)ppppplVar32;
          ppppplStack_108 = (long *****)pppppplVar29;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppppplVar32 + 2,pppplVar27);
          ppppplVar32[0xf] = (long ****)0x0;
          ppppplVar32[0xe] = (long ****)0x0;
          ppppplVar32[0xd] = (long ****)0x0;
          ppppplVar32[0xc] = (long ****)0x0;
          ppppplVar32[0xb] = (long ****)0x0;
          ppppplVar32[10] = (long ****)0x0;
          ppppplVar32[9] = (long ****)0x0;
          ppppplVar32[8] = (long ****)0x0;
          ppppplVar32[7] = (long ****)0x0;
          ppppplVar32[6] = (long ****)0x0;
          ppppplVar32[5] = (long ****)0x0;
          ppppplStack_100 = (long *****)CONCAT71(ppppplStack_100._1_7_,1);
          if ((ppppplVar24 == (long *****)0x0) ||
             (*(float *)(param_1 + 0x18) * (float)ppppplVar24 < (float)(param_1[0x17] + 1))) {
            bVar5 = (long *****)0x2 < ppppplVar24;
            bVar7 = ppppplVar24 == (long *****)0x3;
            func_0x0001074e2110((long)ppppplVar24 << 1);
            ppppplVar33 = extraout_x8_01;
            if (!bVar5 || bVar7) {
              ppppplVar33 = extraout_x9_00;
            }
            if ((long)ppppplVar33 - 1U == 0) {
              ppppplVar33 = (long *****)0x2;
            }
            else if (((ulong)ppppplVar33 & (long)ppppplVar33 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppplVar24 = (long *****)param_1[0x15];
            if (ppppplVar24 < ppppplVar33) {
LAB_1074e0460:
              ppppplVar24 = ppppplVar33;
              if ((ulong)ppppplVar24 >> 0x3d != 0) goto LAB_1074e0aa0;
              lVar28 = (long)ppppplVar24 << 3;
              __Znwm(lVar28);
              FUN_1074e1e70(param_1 + 0x14,lVar28);
              param_1[0x15] = (long)ppppplVar24;
              lVar28 = param_1[0x14];
              for (ppppplVar33 = (long *****)0x0; ppppplVar24 != ppppplVar33;
                  ppppplVar33 = (long *****)((long)ppppplVar33 + 1)) {
                *(undefined8 *)(lVar28 + (long)ppppplVar33 * 8) = 0;
              }
              ppppplVar33 = *pppppplVar29;
              if (ppppplVar33 != (long *****)0x0) {
                ppppplVar17 = (long *****)ppppplVar33[1];
                uVar30 = (long)ppppplVar24 - 1;
                uVar23 = 0;
                if (ppppplVar24 != (long *****)0x0) {
                  uVar23 = (ulong)ppppplVar17 / (ulong)ppppplVar24;
                }
                ppppplVar21 = ppppplVar17;
                if (ppppplVar24 <= ppppplVar17) {
                  ppppplVar21 = (long *****)((long)ppppplVar17 - uVar23 * (long)ppppplVar24);
                }
                if (((ulong)ppppplVar24 & uVar30) == 0) {
                  ppppplVar21 = (long *****)((ulong)ppppplVar17 & uVar30);
                }
                *(long *******)(lVar28 + (long)ppppplVar21 * 8) = pppppplVar29;
                while (ppppplVar17 = ppppplVar33, ppppplVar33 = (long *****)*ppppplVar17,
                      ppppplVar33 != (long *****)0x0) {
                  ppppplVar22 = (long *****)ppppplVar33[1];
                  if (((ulong)ppppplVar24 & uVar30) == 0) {
                    ppppplVar22 = (long *****)((ulong)ppppplVar22 & uVar30);
                  }
                  else if (ppppplVar24 <= ppppplVar22) {
                    uVar23 = 0;
                    if (ppppplVar24 != (long *****)0x0) {
                      uVar23 = (ulong)ppppplVar22 / (ulong)ppppplVar24;
                    }
                    ppppplVar22 = (long *****)((long)ppppplVar22 - uVar23 * (long)ppppplVar24);
                  }
                  if (ppppplVar22 != ppppplVar21) {
                    if (*(long *)(lVar28 + (long)ppppplVar22 * 8) == 0) {
                      *(long ******)(lVar28 + (long)ppppplVar22 * 8) = ppppplVar17;
                      ppppplVar21 = ppppplVar22;
                    }
                    else {
                      func_0x0001074e21c8();
                      lVar28 = extraout_x8_02;
                      uVar30 = extraout_x9_01;
                      ppppplVar33 = extraout_x10;
                      ppppplVar21 = extraout_x11;
                    }
                  }
                }
              }
            }
            else if (ppppplVar33 < ppppplVar24) {
              ppppplVar17 = (long *****)
                            (long)((float)(ulong)param_1[0x17] / *(float *)(param_1 + 0x18));
              if ((ppppplVar24 < (long *****)0x3) ||
                 (((ulong)ppppplVar24 & (long)ppppplVar24 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *****)0x1 < ppppplVar17) {
                ppppplVar17 = (long *****)(1L << (-LZCOUNT((long)ppppplVar17 + -1) & 0x3fU));
              }
              if (ppppplVar33 <= ppppplVar17) {
                ppppplVar33 = ppppplVar17;
              }
              if (ppppplVar33 < ppppplVar24) {
                if (ppppplVar33 != (long *****)0x0) goto LAB_1074e0460;
                FUN_1074e1e70(param_1 + 0x14,0);
                ppppplVar24 = (long *****)0x0;
                param_1[0x15] = 0;
              }
              else {
                ppppplVar24 = (long *****)param_1[0x15];
              }
            }
            if (((ulong)ppppplVar24 & (long)ppppplVar24 - 1U) == 0) {
              ppppplVar33 = (long *****)((long)ppppplVar24 - 1U & (ulong)ppppplVar34);
            }
            else {
              ppppplVar33 = ppppplVar34;
              if (ppppplVar24 <= ppppplVar34) {
                uVar23 = 0;
                if (ppppplVar24 != (long *****)0x0) {
                  uVar23 = (ulong)ppppplVar34 / (ulong)ppppplVar24;
                }
                ppppplVar33 = (long *****)((long)ppppplVar34 - uVar23 * (long)ppppplVar24);
              }
            }
          }
          lVar28 = param_1[0x14];
          puVar19 = *(undefined8 **)(lVar28 + (long)ppppplVar33 * 8);
          if (puVar19 == (undefined8 *)0x0) {
            *ppppplVar32 = (long ****)*pppppplVar29;
            *pppppplVar29 = ppppplVar32;
            *(long *******)(lVar28 + (long)ppppplVar33 * 8) = pppppplVar29;
            if (*ppppplVar32 != (long ****)0x0) {
              ppppplVar34 = (long *****)(*ppppplVar32)[1];
              if (((ulong)ppppplVar24 & (long)ppppplVar24 - 1U) == 0) {
                ppppplVar34 = (long *****)((ulong)ppppplVar34 & (long)ppppplVar24 - 1U);
              }
              else if (ppppplVar24 <= ppppplVar34) {
                uVar23 = 0;
                if (ppppplVar24 != (long *****)0x0) {
                  uVar23 = (ulong)ppppplVar34 / (ulong)ppppplVar24;
                }
                ppppplVar34 = (long *****)((long)ppppplVar34 - uVar23 * (long)ppppplVar24);
              }
              *(long ******)(lVar28 + (long)ppppplVar34 * 8) = ppppplVar32;
            }
          }
          else {
            *ppppplVar32 = (long ****)*puVar19;
            *puVar19 = ppppplVar32;
          }
          pppplStack_110 = (long ****)0x0;
          param_1[0x17] = param_1[0x17] + 1;
          FUN_1074e1e88(&pppplStack_110);
LAB_1074e0648:
          if ((((*(char *)(ppppplVar32 + 0xf) != '\x01') || (*(char *)(ppppplVar32 + 8) != '\x01'))
              || (*(int *)((long)ppppplVar32 + 0x2c) != (int)*param_1)) ||
             (*(int *)(ppppplVar32 + 6) != *(int *)((long)param_1 + 4))) {
            FUN_1074979d4(ppppplVar32 + 0xd);
            FUN_1074de3f4(ppppplVar32 + 9);
            FUN_107456c98(ppppplVar32 + 5);
            uStack_11a = 0;
            uStack_11c = 0x100;
            FUN_107497a08(&pppplStack_110,pppplVar11,*param_1,param_1 + 0x19,1,&uStack_11c);
            FUN_107440a90(ppppplVar32 + 5,&pppplStack_110);
            ppppplVar34 = ppppplStack_100;
            ppppplStack_100 = (long *****)0x0;
            if ((long ******)ppppplVar34 != (long ******)0x0) {
              func_0x0001074e207c();
            }
            ppppplVar34 = (long *****)*param_1;
            (*(code *)(*pppplVar11)[0x12])(&ppppplStack_100,pppplVar11,ppppplVar34,0xf,0);
            ppppplStack_108 = (long *****)CONCAT62(ppppplStack_108._2_6_,0xf);
            pppplStack_110 = (long ****)ppppplVar34;
            func_0x0001074de428(ppppplVar32 + 9,&pppplStack_110);
            ppppplVar34 = ppppplStack_100;
            ppppplStack_100 = (long *****)0x0;
            if (ppppplVar34 != (long *****)0x0) {
              func_0x0001074e207c();
            }
            FUN_107498684(&pppplStack_110);
            ppppplVar34 = ppppplVar32 + 5;
            FUN_1073b9c0c();
            if (((ulong)ppppplStack_100 & 1) == 0) {
              ppppplStack_100 = (long *****)CONCAT71(ppppplStack_100._1_7_,1);
            }
            ppppplStack_108 = (long *****)((ulong)ppppplStack_108 & 0xffffffff00000000);
            pppppplVar20 = (long ******)(ppppplVar32 + 9);
            pppplStack_110 = (long ****)ppppplVar34;
            FUN_1074de480();
            if (cStack_98 == '\x01') {
              if (iStack_a0 != 1) {
                iStack_a0 = 1;
              }
            }
            else {
              iStack_a0 = 1;
              cStack_98 = '\x01';
            }
            ppppplStack_b0 = (long *****)pppppplVar20;
            func_0x00010002b838(&ppppplStack_170,&UNK_10f415d31);
            func_0x000100610910(&ppppplStack_150,&ppppplStack_170,pppplVar27);
            func_0x0001074e21f4();
            pppppplVar20 = (long ******)ppppplStack_150;
            if (-1 < (long)ppppplStack_140) {
              pppppplVar20 = &ppppplStack_150;
            }
            pppppplVar25 = (long ******)*param_1;
            ppppplStack_118 = (long *****)pppppplVar25;
            (*(code *)(*pppplVar11)[0xe])
                      (&ppppplStack_168,pppplVar11,pppppplVar20,&ppppplStack_118,&pppplStack_110);
            ppppplStack_170 = (long *****)pppppplVar25;
            FUN_107497a1c(ppppplVar32 + 0xd,&ppppplStack_170);
            ppppplVar34 = ppppplStack_168;
            ppppplStack_168 = (long *****)0x0;
            if ((long ******)ppppplVar34 != (long ******)0x0) {
              func_0x0001074e207c();
            }
            func_0x0001074e21c0();
          }
        }
        func_0x0001074e2284();
        plVar26 = plStack_1b0;
        plVar10 = plStack_1b8;
        func_0x0001074e21a8();
        func_0x00010002b838(&pppplStack_110);
        func_0x0001074e20e8();
        func_0x00010002b838(&ppppplStack_f8);
        FUN_1074e1df0(&ppppplStack_150,&pppplStack_110,2);
        lVar28 = 0x18;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((long)&pppplStack_110 + lVar28);
          lVar28 = lVar28 + -0x18;
        } while (lVar28 != -0x18);
        for (; plVar10 != plVar26; plVar10 = plVar10 + 8) {
          func_0x0001004c3c6c(&ppppplStack_150,plVar10 + 5);
        }
        ppplStack_188 = (long ***)param_2[2];
        (*(code *)**ppplStack_188)(ppplStack_188,&UNK_10f415d52,0xf);
        FUN_10750052c(&ppppplStack_170);
        ppppplVar33 = ppppplStack_170;
        for (plVar10 = plStack_1b8; bVar7 = plVar10 == plVar26, uVar6 = bVar7, !bVar7;
            plVar10 = plVar10 + 8) {
          pppppplVar29 = &ppppplStack_150;
          func_0x0001067e0440(pppppplVar29,plVar10 + 2);
          if ((pppppplVar29 == (long ******)0x0) ||
             (plVar12 = param_1, FUN_1074df4b4(param_1,plVar10 + 2), plVar12 == (long *)0x0))
          goto LAB_1074e0a7c;
          plVar13 = plVar10 + 5;
          func_0x0001074e20e8();
          func_0x000100152bb8();
          ppppplStack_108 = ppppplVar33;
          ppppplStack_100 = (long *****)(param_2[9] + 0x2e);
          uVar6 = (char)param_1[0x13] == '\0';
          uVar4 = 1;
          ppplStack_e8 = (long ***)(param_1 + 0x10);
          if ((bool)uVar6) {
            ppplStack_e8 = (long ***)0x0;
          }
          pppplStack_110 = (long ****)param_2;
          ppppplStack_f8 = (long *****)(param_1 + 0x19);
          ppppplStack_f0 = (long *****)((long)param_1 + 0xcd);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&ppplStack_e0,plVar10 + 5);
          uStack_c8 = SUB81(plVar13,0);
          ppuStack_c0 = &PTR_FUN_1109b5910;
          ppppplStack_b0 = (long *****)&ppppplStack_150;
          lVar28 = *plVar10;
          plStack_b8 = param_1;
          pppuStack_a8 = &ppuStack_c0;
          if ((lVar28 != 0) && (func_0x0001074e20bc(), (int)lVar28 != 0)) {
            func_0x0001074e226c();
            if ((bool)uVar4 && !(bool)uVar6) {
              plVar14 = (long *)*plVar10;
              (**(code **)(*plVar14 + 0x28))
                        (plVar14,&pppplStack_110,
                         extraout_x9_02 + (extraout_x8_03 & 0xffffffff) * 0x1b0,plVar12,plVar10 + 5)
              ;
              goto LAB_1074e0a4c;
            }
LAB_1074e0a60:
            func_0x0001074e10e0(&pppplStack_110);
            goto LAB_1074e0a7c;
          }
          iVar8 = (int)plVar10 + 0x28;
          func_0x0001074e20e8();
          func_0x000100152bb8();
          if (iVar8 == 0) {
            iVar8 = (int)plVar10 + 0x28;
            func_0x0001074e21a8();
            func_0x000100152bb8();
            if (iVar8 != 0) {
              uVar23 = (ulong)*(byte *)(param_1 + 0xf);
              goto LAB_1074e09d0;
            }
            plVar15 = param_1 + 0x14;
            FUN_1074e1ec0(plVar15,plVar10 + 5);
            if ((plVar15 == (long *)0x0) || (uVar6 = (char)plVar15[0xf] == '\x01', !(bool)uVar6))
            goto LAB_1074e0a60;
            plVar15 = plVar15 + 0xd;
            uVar4 = 1;
          }
          else {
            func_0x0001074e22d8();
            uVar23 = extraout_x8_04;
LAB_1074e09d0:
            plVar15 = param_1 + (uVar23 & 0xffffffff) * 3 + 9;
            if ((*(byte *)(plVar15 + 2) & 1) == 0) goto LAB_1074e0a60;
          }
          plVar14 = (long *)*plVar10;
          if (plVar14 == (long *)0x0) {
            plVar14 = param_1;
            FUN_1074df68c(param_1,param_2,ppppplVar33,plVar12,plVar15,plVar13);
          }
          else {
            func_0x0001074e226c();
            if (!(bool)uVar4 || (bool)uVar6) goto LAB_1074e0a60;
            (**(code **)(*plVar14 + 0x20))();
          }
LAB_1074e0a4c:
          if (((ulong)plVar14 & 1) == 0) goto LAB_1074e0a60;
          func_0x0001074e10e0(&pppplStack_110);
        }
        *(char *)(param_1 + 0xf) = '\x01' - (char)param_1[0xf];
LAB_1074e0a7c:
        FUN_1073eb118(&ppppplStack_170);
        FUN_1074996e0(&ppplStack_188);
        func_0x0001074e22a0();
        func_0x0001074e1098(&plStack_1b8);
      }
      else {
        bVar7 = false;
      }
    }
    FUN_1073e6588(&uStack_1a0);
  }
  func_0x0001074e2194(uStack_88);
  if ((bool)uVar6) {
    return bVar7;
  }
  ___stack_chk_fail();
LAB_1074e0aa0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1074e0aa8);
  (*pcVar3)();
}



/* Entry: 1074e0c98; end: 1074e0d8f;  */

void FUN_1074e0c98(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puStack_50;
  undefined8 auStack_48 [3];
  
  if (((*(char *)(param_1 + (ulong)*(byte *)(param_1 + 0x78) * 0x18 + 0x58) == '\x01') &&
      (*(char *)(param_1 + 8 + (ulong)*(byte *)(param_1 + 0x78) * 0x20 + 0x18) == '\x01')) &&
     (*(char *)(*(long *)(param_2 + 0x48) + 0x188) == '\x01')) {
    FUN_10750052c(auStack_48);
    puStack_50 = *(undefined8 **)(param_2 + 0x10);
    (**(code **)*puStack_50)(puStack_50,&UNK_10f415d62,0x1c);
    plVar1 = *(long **)(param_2 + 8);
    (**(code **)(*plVar1 + 0x20))();
    FUN_1074df68c(param_1,param_2,auStack_48[0],
                  param_1 + 8 + (ulong)*(byte *)(param_1 + 0x78) * 0x20,plVar1,0);
    FUN_1074996e0(&puStack_50);
    FUN_1073eb118(auStack_48);
  }
  return;
}



/* Entry: 1074e0d90; end: 1074e0dff;  */

undefined8 FUN_1074e0d90(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001074e0dc4(&uStack_28);
  return param_1;
}



/* Entry: 1074e0e00; end: 1074e0e07;  */

void FUN_1074e0e00(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_1074e1b2c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074e0e08; end: 1074e0ea3;  */

void FUN_1074e0e08(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_1074e1b2c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074e0ea4; end: 1074e0eaf;  */

long * FUN_1074e0ea4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x0001074e2104();
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar13 = uVar8;
    uVar14 = param_2[3];
    uVar8 = param_2[2];
    puVar13[4] = param_2[4];
    puVar13[3] = uVar14;
    puVar13[2] = uVar8;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar14 = param_2[6];
    uVar8 = param_2[5];
    puVar13[7] = param_2[7];
    puVar13[6] = uVar14;
    puVar13[5] = uVar8;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    puVar13 = puVar13 + 8;
    plVar6 = param_1;
LAB_1074e1040:
    param_1[1] = (long)puVar13;
    return plVar6;
  }
  lVar12 = (long)puVar13 - *param_1;
  uVar1 = (lVar12 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 5;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar9) {
      uVar11 = 0x3ffffffffffffff;
    }
    if (uVar11 >> 0x3a == 0) {
      lVar4 = uVar11 << 6;
      __Znwm();
      puVar13 = (undefined8 *)(lVar4 + lVar12);
      *puVar13 = *param_2;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_2 + 1);
      uVar8 = param_2[2];
      puVar13[3] = param_2[3];
      puVar13[2] = uVar8;
      puVar13[4] = param_2[4];
      param_2[2] = 0;
      param_2[3] = 0;
      uVar15 = param_2[6];
      uVar14 = param_2[5];
      uVar8 = param_2[7];
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      puVar5 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar13[7] = uVar8;
      puVar2 = (undefined8 *)((long)puVar13 + ((long)puVar5 - (long)puVar3));
      puVar13[6] = uVar15;
      puVar13[5] = uVar14;
      puVar7 = puVar2;
      for (puVar10 = puVar5; puVar10 != puVar3; puVar10 = puVar10 + 8) {
        uVar8 = *puVar10;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar7 = uVar8;
        uVar14 = puVar10[3];
        uVar8 = puVar10[2];
        puVar7[4] = puVar10[4];
        puVar7[3] = uVar14;
        puVar7[2] = uVar8;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        uVar14 = puVar10[6];
        uVar8 = puVar10[5];
        puVar7[7] = puVar10[7];
        puVar7[6] = uVar14;
        puVar7[5] = uVar8;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[5] = 0;
        puVar7 = puVar7 + 8;
      }
      for (; puVar5 != puVar3; puVar5 = puVar5 + 8) {
        FUN_1074e106c();
      }
      puVar13 = puVar13 + 8;
      plVar6 = (long *)*param_1;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar13;
      param_1[2] = lVar4 + uVar11 * 0x40;
      if (plVar6 != (long *)0x0) {
        __ZdlPv();
      }
      goto LAB_1074e1040;
    }
  }
  else {
    FUN_1074e1060();
  }
  func_0x000104bd35f4();
  func_0x0001074e2104();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1074e0eb0; end: 1074e105f;  */

long * FUN_1074e0eb0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar13 = uVar8;
    uVar14 = param_2[3];
    uVar8 = param_2[2];
    puVar13[4] = param_2[4];
    puVar13[3] = uVar14;
    puVar13[2] = uVar8;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar14 = param_2[6];
    uVar8 = param_2[5];
    puVar13[7] = param_2[7];
    puVar13[6] = uVar14;
    puVar13[5] = uVar8;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    puVar13 = puVar13 + 8;
    plVar6 = param_1;
LAB_1074e1040:
    param_1[1] = (long)puVar13;
    return plVar6;
  }
  lVar12 = (long)puVar13 - *param_1;
  uVar1 = (lVar12 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 5;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar9) {
      uVar11 = 0x3ffffffffffffff;
    }
    if (uVar11 >> 0x3a == 0) {
      lVar4 = uVar11 << 6;
      __Znwm();
      puVar13 = (undefined8 *)(lVar4 + lVar12);
      *puVar13 = *param_2;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(param_2 + 1);
      uVar8 = param_2[2];
      puVar13[3] = param_2[3];
      puVar13[2] = uVar8;
      puVar13[4] = param_2[4];
      param_2[2] = 0;
      param_2[3] = 0;
      uVar15 = param_2[6];
      uVar14 = param_2[5];
      uVar8 = param_2[7];
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      puVar5 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar13[7] = uVar8;
      puVar2 = (undefined8 *)((long)puVar13 + ((long)puVar5 - (long)puVar3));
      puVar13[6] = uVar15;
      puVar13[5] = uVar14;
      puVar7 = puVar2;
      for (puVar10 = puVar5; puVar10 != puVar3; puVar10 = puVar10 + 8) {
        uVar8 = *puVar10;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar7 = uVar8;
        uVar14 = puVar10[3];
        uVar8 = puVar10[2];
        puVar7[4] = puVar10[4];
        puVar7[3] = uVar14;
        puVar7[2] = uVar8;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        uVar14 = puVar10[6];
        uVar8 = puVar10[5];
        puVar7[7] = puVar10[7];
        puVar7[6] = uVar14;
        puVar7[5] = uVar8;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[5] = 0;
        puVar7 = puVar7 + 8;
      }
      for (; puVar5 != puVar3; puVar5 = puVar5 + 8) {
        FUN_1074e106c();
      }
      puVar13 = puVar13 + 8;
      plVar6 = (long *)*param_1;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar13;
      param_1[2] = lVar4 + uVar11 * 0x40;
      if (plVar6 != (long *)0x0) {
        __ZdlPv();
      }
      goto LAB_1074e1040;
    }
  }
  else {
    FUN_1074e1060();
  }
  func_0x000104bd35f4();
  func_0x0001074e2104();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1074e1060; end: 1074e106b;  */

long FUN_1074e1060(long param_1)

{
  func_0x0001074e2104();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 1074e106c; end: 1074e112f;  */

long FUN_1074e106c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 1074e1130; end: 1074e113b;  */

void FUN_1074e1130(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001074e2104();
  func_0x0001074e21b4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x1b0) * 0x1b0;
  FUN_1074e125c(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 1074e113c; end: 1074e11bb;  */

void FUN_1074e113c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001074e21b4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x1b0) * 0x1b0;
  FUN_1074e125c(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 1074e11bc; end: 1074e122b;  */

long * FUN_1074e11bc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074e1208();
  }
  lVar1 = param_4 + param_3 * 0x1b0;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x1b0;
  return param_1;
}



/* Entry: 1074e122c; end: 1074e125b;  */

void FUN_1074e122c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x97b425ed097b43) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1b0);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074e224c();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x1b0) {
    func_0x0001074e1328(param_4,param_2);
    param_4 = lStack_48 + 0x1b0;
  }
  uStack_58 = 1;
  func_0x0001074e12f8();
  FUN_1074e15c0(&uStack_70);
  return;
}



/* Entry: 1074e125c; end: 1074e12f7;  */

void FUN_1074e125c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0001074e224c();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x1b0) {
    func_0x0001074e1328(param_4,param_2);
    param_4 = lStack_38 + 0x1b0;
  }
  uStack_48 = 1;
  func_0x0001074e12f8();
  FUN_1074e15c0(&uStack_60);
  return;
}



/* Entry: 1074e12f8; end: 1074e13c7;  */

void FUN_1074e12f8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x1b0) {
    func_0x0001073e6370();
  }
  return;
}



/* Entry: 1074e13c8; end: 1074e13ef;  */

void FUN_1074e13c8(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e2178();
  *(undefined4 *)(param_1 + 0x128) = extraout_w8;
  FUN_1074e13f0();
  return;
}



/* Entry: 1074e13f0; end: 1074e1433;  */

void FUN_1074e13f0(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  FUN_1073e63b0();
  iVar1 = *(int *)(unaff_x20 + 0x128);
  if (iVar1 != -1) {
    func_0x0001074e2088(&PTR_FUN_1109b5880);
    *(int *)(unaff_x19 + 0x128) = iVar1;
  }
  return;
}



/* Entry: 1074e1434; end: 1074e144f;  */

void FUN_1074e1434(void)

{
  return;
}



/* Entry: 1074e1450; end: 1074e1487;  */

void FUN_1074e1450(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  func_0x00010727d9cc();
  FUN_1073244ec(param_1 + 0x40,unaff_x19 + 0x40);
  func_0x00010727d9cc(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  return;
}



/* Entry: 1074e1488; end: 1074e148f;  */

void FUN_1074e1488(long *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x0001074e21b4(lVar1);
  FUN_107433094();
  FUN_1074e14d4(lVar1 + 0x40,unaff_x19 + 0x40);
  FUN_1074e14d4(unaff_x20 + 0x98,unaff_x19 + 0x98);
  func_0x00010727d9cc(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}



/* Entry: 1074e1490; end: 1074e14d3;  */

void FUN_1074e1490(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  FUN_107433094();
  FUN_1074e14d4(param_1 + 0x40,unaff_x19 + 0x40);
  FUN_1074e14d4(unaff_x20 + 0x98,unaff_x19 + 0x98);
  func_0x00010727d9cc(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}



/* Entry: 1074e14d4; end: 1074e14fb;  */

void FUN_1074e14d4(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e2178();
  *(undefined4 *)(param_1 + 0x50) = extraout_w8;
  FUN_1074e14fc();
  return;
}



/* Entry: 1074e14fc; end: 1074e153f;  */

void FUN_1074e14fc(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  FUN_1073e6484();
  iVar1 = *(int *)(unaff_x20 + 0x50);
  if (iVar1 != -1) {
    func_0x0001074e2088(&PTR_FUN_1109b58a8);
    *(int *)(unaff_x19 + 0x50) = iVar1;
  }
  return;
}



/* Entry: 1074e1540; end: 1074e1553;  */

void FUN_1074e1540(void)

{
  return;
}



/* Entry: 1074e1554; end: 1074e1573;  */

void FUN_1074e1554(void)

{
  func_0x00010727da70();
  func_0x0001074e2204();
  return;
}



/* Entry: 1074e1574; end: 1074e157b;  */

void FUN_1074e1574(long *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x0001074e21b4(lVar1);
  func_0x00010727d9cc();
  func_0x00010727d9cc(lVar1 + 0x38,unaff_x19 + 0x38);
  FUN_1073244ec(unaff_x20 + 0x78,unaff_x19 + 0x78);
  func_0x00010727d9cc(unaff_x20 + 0xe8,unaff_x19 + 0xe8);
  return;
}



/* Entry: 1074e157c; end: 1074e15bf;  */

void FUN_1074e157c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  func_0x00010727d9cc();
  func_0x00010727d9cc(param_1 + 0x38,unaff_x19 + 0x38);
  FUN_1073244ec(unaff_x20 + 0x78,unaff_x19 + 0x78);
  func_0x00010727d9cc(unaff_x20 + 0xe8,unaff_x19 + 0xe8);
  return;
}



/* Entry: 1074e15c0; end: 1074e15ef;  */

long FUN_1074e15c0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1074e15f0(param_1);
  }
  return param_1;
}



/* Entry: 1074e15f0; end: 1074e160f;  */

void FUN_1074e15f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x1b0;
    func_0x0001073e6370();
  }
  return;
}



/* Entry: 1074e1610; end: 1074e166b;  */

void FUN_1074e1610(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1b0;
    func_0x0001073e6370();
  }
  return;
}



/* Entry: 1074e166c; end: 1074e1673;  */

void FUN_1074e166c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1b0;
    func_0x0001073e6370();
  }
  return;
}



/* Entry: 1074e1674; end: 1074e16a7;  */

void FUN_1074e1674(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e21b4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1b0;
    func_0x0001073e6370();
  }
  return;
}



/* Entry: 1074e16a8; end: 1074e174f;  */

void FUN_1074e16a8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074e2188();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x48,unaff_x20 + 0x48);
  FUN_1074e1750(unaff_x19 + 0x68,unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x198) = uVar1;
  return;
}



/* Entry: 1074e1750; end: 1074e1783;  */

void FUN_1074e1750(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e2178();
  *(undefined4 *)(param_1 + 0x128) = extraout_w8;
  FUN_1074e1784();
  return;
}



/* Entry: 1074e1784; end: 1074e17c7;  */

void FUN_1074e1784(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  FUN_1073e63b0();
  iVar1 = *(int *)(unaff_x20 + 0x128);
  if (iVar1 != -1) {
    func_0x0001074e2088(&PTR_FUN_1109b58c0);
    *(int *)(unaff_x19 + 0x128) = iVar1;
  }
  return;
}



/* Entry: 1074e17c8; end: 1074e17e3;  */

void FUN_1074e17c8(void)

{
  return;
}



/* Entry: 1074e17e4; end: 1074e183b;  */

void FUN_1074e17e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  func_0x00010727d614();
  FUN_1073243b8(param_1 + 0x40,unaff_x20 + 0x40);
  func_0x00010727d614(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  return;
}



/* Entry: 1074e183c; end: 1074e1843;  */

void FUN_1074e183c(long *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x0001074e2188(lVar1);
  FUN_1074383dc();
  FUN_1074e18b8(lVar1 + 0x40,unaff_x20 + 0x40);
  FUN_1074e18b8(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x00010727d614(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 1074e1844; end: 1074e18b7;  */

void FUN_1074e1844(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  FUN_1074383dc();
  FUN_1074e18b8(param_1 + 0x40,unaff_x20 + 0x40);
  FUN_1074e18b8(unaff_x19 + 0x98,unaff_x20 + 0x98);
  func_0x00010727d614(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 1074e18b8; end: 1074e18eb;  */

void FUN_1074e18b8(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e2178();
  *(undefined4 *)(param_1 + 0x50) = extraout_w8;
  FUN_1074e18ec();
  return;
}



/* Entry: 1074e18ec; end: 1074e192f;  */

void FUN_1074e18ec(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e2188();
  FUN_1073e6484();
  iVar1 = *(int *)(unaff_x20 + 0x50);
  if (iVar1 != -1) {
    func_0x0001074e2088(&PTR_FUN_1109b58e8);
    *(int *)(unaff_x19 + 0x50) = iVar1;
  }
  return;
}


