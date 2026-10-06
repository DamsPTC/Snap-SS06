/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073eaeec; end: 1073eaf07;  */

undefined8 * FUN_1073eaeec(long param_1)

{
  func_0x0001073eb000(param_1 + 0x358);
  FUN_1073eb030(param_1 + 0x338);
  FUN_1073eb050(param_1 + 0x300);
  FUN_1073eb050(param_1 + 0x2d8);
  func_0x00010730b10c(param_1 + 0x238);
  func_0x00010730b13c(param_1 + 0x200);
  FUN_1073eb118(param_1 + 0x1e8);
  func_0x00010730b05c(param_1 + 0x1d0);
  FUN_1073eb150(param_1 + 0x1b0);
  func_0x00010730b10c(param_1 + 400);
  FUN_1073eb118(param_1 + 0x178);
  func_0x00010730b05c(param_1 + 0x160);
  func_0x00010730b10c(param_1 + 0x138);
  func_0x00010730b13c(param_1 + 0x100);
  FUN_1073eb118(param_1 + 0xe8);
  func_0x00010730b05c(param_1 + 0xd0);
  FUN_1073eb188(param_1 + 0xb0);
  FUN_1073eb1c0(param_1 + 0x98);
  FUN_1073eb1c0(param_1 + 0x80);
  FUN_1073eb1f8(param_1 + 0x58);
  FUN_1073eb1f8(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073eaf08; end: 1073eb02f;  */

undefined8 * FUN_1073eaf08(undefined8 *param_1)

{
  func_0x0001073eb000(param_1 + 0x68);
  FUN_1073eb030(param_1 + 100);
  FUN_1073eb050(param_1 + 0x5d);
  FUN_1073eb050(param_1 + 0x58);
  func_0x00010730b10c(param_1 + 0x44);
  func_0x00010730b13c(param_1 + 0x3d);
  FUN_1073eb118(param_1 + 0x3a);
  func_0x00010730b05c(param_1 + 0x37);
  FUN_1073eb150(param_1 + 0x33);
  func_0x00010730b10c(param_1 + 0x2f);
  FUN_1073eb118(param_1 + 0x2c);
  func_0x00010730b05c(param_1 + 0x29);
  func_0x00010730b10c(param_1 + 0x24);
  func_0x00010730b13c(param_1 + 0x1d);
  FUN_1073eb118(param_1 + 0x1a);
  func_0x00010730b05c(param_1 + 0x17);
  FUN_1073eb188(param_1 + 0x13);
  FUN_1073eb1c0(param_1 + 0x10);
  FUN_1073eb1c0(param_1 + 0xd);
  FUN_1073eb1f8(param_1 + 8);
  FUN_1073eb1f8(param_1 + 5);
  *param_1 = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 1);
  return param_1;
}



/* Entry: 1073eb030; end: 1073eb04f;  */

void FUN_1073eb030(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 1073eb050; end: 1073eb0ff;  */

long FUN_1073eb050(long param_1)

{
  func_0x0001073eb078(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1073eb100(param_1,0);
  return param_1;
}



/* Entry: 1073eb100; end: 1073eb117;  */

void FUN_1073eb100(long *param_1)

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



/* Entry: 1073eb118; end: 1073eb13b;  */

void FUN_1073eb118(void)

{
  func_0x0001073eb510();
  FUN_1073eb13c();
  return;
}



/* Entry: 1073eb13c; end: 1073eb14f;  */

void FUN_1073eb13c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073eb150; end: 1073eb173;  */

void FUN_1073eb150(void)

{
  func_0x0001073eb510();
  FUN_1073eb174();
  return;
}



/* Entry: 1073eb174; end: 1073eb187;  */

void FUN_1073eb174(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073eb188; end: 1073eb1ab;  */

void FUN_1073eb188(void)

{
  func_0x0001073eb510();
  FUN_1073eb1ac();
  return;
}



/* Entry: 1073eb1ac; end: 1073eb1bf;  */

void FUN_1073eb1ac(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073eb1c0; end: 1073eb1e3;  */

void FUN_1073eb1c0(void)

{
  func_0x0001073eb510();
  FUN_1073eb1e4();
  return;
}



/* Entry: 1073eb1e4; end: 1073eb1f7;  */

void FUN_1073eb1e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073eb1f8; end: 1073eb21b;  */

void FUN_1073eb1f8(void)

{
  func_0x0001073eb510();
  FUN_1073eb21c();
  return;
}



/* Entry: 1073eb21c; end: 1073eb27f;  */

void FUN_1073eb21c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073eb280; end: 1073eb2a7;  */

long FUN_1073eb280(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073eb2a8; end: 1073eb2ab;  */

void FUN_1073eb2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073eb2dc(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073eb2ac; end: 1073eb2db;  */

void FUN_1073eb2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073eb2dc(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073eb2dc; end: 1073eb367;  */

void FUN_1073eb2dc(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_1073eb368();
  if ((param_3 & 1) != 0) {
    FUN_1073eb448(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x58;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1073eb368; end: 1073eb447;  */

undefined1  [16] FUN_1073eb368(ulong *param_1)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  
  func_0x0001073eb60c();
  Hint_Prefetch(*param_1,0,2,0);
  puVar2 = param_1;
  func_0x0001072a02f8(*param_1);
  lVar6 = 0;
  uVar7 = *param_1;
  uVar8 = param_1[2];
  uVar4 = uVar7 >> 0xc ^ (ulong)puVar2 >> 7;
  bVar1 = (byte)puVar2;
  uVar11 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar4);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar3 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar8);
      uVar3 = 0;
      func_0x0001073eb464();
      if ((uVar3 & 1) != 0) {
        uVar12 = 0;
        goto LAB_1073eb424;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  FUN_1073e0604(param_1,puVar2);
  uVar12 = 1;
  puVar5 = param_1;
LAB_1073eb424:
  auVar19._8_8_ = uVar12;
  auVar19._0_8_ = puVar5;
  return auVar19;
}



/* Entry: 1073eb448; end: 1073eb487;  */

void FUN_1073eb448(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_1073eb4b0(*(long *)(param_1 + 8) + param_2 * 0x58,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073eb488; end: 1073eb4af;  */

void FUN_1073eb488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1073eb4b0(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073eb4b0; end: 1073eb4e3;  */

long FUN_1073eb4b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107262e9c(param_1,*param_2);
  FUN_1073e0800(lVar1 + 0x38,*param_3);
  return param_1;
}



/* Entry: 1073eb4e4; end: 1073eb62f;  */

void FUN_1073eb4e4(void)

{
  return;
}



/* Entry: 1073eb630; end: 1073eb6b7;  */

long ** FUN_1073eb630(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar15;
  long *plVar16;
  long **pplVar17;
  long lVar18;
  undefined1 auStack_681 [9];
  long **pplStack_678;
  undefined1 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  long *plStack_650;
  long lStack_648;
  undefined1 auStack_638 [24];
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_520 [400];
  undefined1 auStack_390 [64];
  undefined8 uStack_350;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long *aplStack_2e0 [2];
  long lStack_2d0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char cStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [400];
  undefined8 uStack_28;
  
  plVar9 = param_2;
  func_0x0001073ec044();
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_1b8);
  uVar2 = (char)param_2[2] == '\x01';
  if ((bool)uVar2) {
    uVar2 = *(char *)(*param_2 + 0x20) == '\x01';
    if ((bool)uVar2) {
      uVar15 = *(byte *)(*param_2 + 0x22) ^ 1;
    }
    else {
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 0;
  }
  func_0x000107267da8(auStack_1b8);
  func_0x0001073ec008(uStack_28);
  if ((bool)uVar2) {
    return (long **)(ulong)(uVar15 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)0x0;
  pplVar5 = aplStack_2e0;
  pcStack_1c8 = FUN_1073eb6b8;
  puVar13 = param_4;
  uVar14 = param_5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  *(undefined4 *)(extraout_x8_00 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  puVar10 = (undefined1 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  uStack_228 = extraout_x8_01;
  func_0x0001072d306c();
  plVar16 = (long *)lStack_2d0;
  do {
    if (plVar16 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_228);
      if ((bool)uVar2) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_00);
      __Unwind_Resume(pplVar5);
      pcStack_2e8 = FUN_1073eb8e0;
      puVar12 = puVar11;
      uStack_658 = param_7;
      ppuStack_2f0 = &puStack_1d0;
      func_0x0001073ec044();
      pplVar6 = (long **)*puVar12;
      uStack_350 = extraout_x8_02;
      (*(code *)(*pplVar6)[2])();
      pplVar5 = pplVar6;
      for (pplVar17 = (long **)0x0; bVar3 = pplVar17 == pplVar6, !bVar3;
          pplVar17 = (long **)((long)pplVar17 + 1)) {
        (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_620,(long *)*puVar11,pplVar17);
        (**(code **)(*plStack_620 + 0x30))();
        func_0x00010726236c(auStack_390);
        func_0x0001072e7640(auStack_520,auStack_390,0x1138369c0);
        uVar7 = param_6;
        func_0x000107869b38(auStack_598,param_6,auStack_520);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_638,auStack_598,uVar7);
        FUN_1073de9d8(auStack_598);
        func_0x000104c2f714(auStack_520);
        lStack_648 = lStack_618;
        plStack_650 = plStack_620;
        if (lStack_618 != 0) {
          plVar9 = (long *)(lStack_618 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_608,puVar13);
        (**(code **)(*(long *)*puVar11 + 0x20))(auStack_5d0);
        func_0x0001073c4f74(auStack_598,auStack_608);
        func_0x000107751444(puVar10,&plStack_650,auStack_598);
        *(undefined1 **)(puVar10 + 0xe0) = auStack_638;
        func_0x000107751334(auStack_520,puVar10);
        func_0x000107267e8c(auStack_598);
        func_0x000107267eac(auStack_608);
        func_0x000107267e44(&plStack_650);
        auStack_598[0] = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uVar8 = uVar14;
        func_0x00010777faa8(uVar14,auStack_520,auStack_598);
        func_0x00010724b3d8(auStack_598);
        if ((uVar8 & 1) != 0) {
          FUN_1073ebfe0(uStack_658,auStack_520);
        }
        func_0x000107267da8(auStack_520);
        func_0x00010726b264(auStack_638);
        func_0x00010724b3d8(auStack_390);
        pplVar5 = &plStack_620;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_350);
      if (bVar3) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_520);
      func_0x00010726b264(auStack_638);
      func_0x00010724b3d8(auStack_390);
      FUN_107330fdc(&plStack_620);
      pplVar6 = pplVar5;
      __Unwind_Resume();
      pcStack_668 = FUN_1073ebb78;
      pplVar17 = pplVar6;
      if (*(uint *)(pplVar6 + 2) != 0xffffffff) {
        pplVar17 = (long **)auStack_681;
        auStack_681._1_8_ = param_6;
        pplStack_678 = pplVar5;
        pppuStack_670 = &ppuStack_2f0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar6 + 2)])(pplVar17,pplVar6);
      }
      *(undefined4 *)(pplVar6 + 2) = 0xffffffff;
      return pplVar17;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar10 = (undefined1 *)(plVar16 + 2);
      plVar4 = plVar9;
      puVar11 = param_4;
      FUN_10746e408();
      if ((int)plVar4 != 0) {
        puVar10 = (undefined1 *)(plVar16 + 2);
        puVar11 = param_4;
        FUN_10746e5cc(auStack_290,plVar9);
        uVar2 = false;
        if (cStack_260 == '\x01') {
          FUN_1073ebbdc(auStack_258,extraout_x8_00);
          FUN_1073ebbdc(auStack_240,auStack_290);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_00,auStack_2a8);
          FUN_1073ebb78(auStack_2a8);
          lVar18 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar18);
            lVar18 = lVar18 + -0x18;
          } while (lVar18 != -0x18);
          FUN_1073ebbdc(auStack_258,extraout_x8_00 + 0x18);
          FUN_1073ebbdc(auStack_240,auStack_278);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          puVar10 = auStack_2a8;
          FUN_1073ebc60(extraout_x8_00 + 0x18);
          FUN_1073ebb78(auStack_2a8);
          lVar18 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar18);
            lVar18 = lVar18 + -0x18;
            uVar2 = lVar18 == -0x18;
          } while (!(bool)uVar2);
        }
        plVar4 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) != 0) goto LAB_1073eb724;
    }
    plVar16 = (long *)*plVar16;
  } while( true );
}



/* Entry: 1073eb6b8; end: 1073eb8df;  */

void FUN_1073eb6b8(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 in_ZR;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long **pplVar5;
  undefined8 uVar6;
  ulong uVar7;
  long **pplVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  undefined1 uStack_4c1;
  undefined8 uStack_4c0;
  long **pplStack_4b8;
  undefined1 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  long *plStack_490;
  long lStack_488;
  undefined1 auStack_478 [24];
  long *plStack_460;
  long lStack_458;
  undefined1 auStack_448 [56];
  undefined1 auStack_410 [56];
  undefined1 auStack_3d8 [56];
  undefined1 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_360 [400];
  undefined1 auStack_1d0 [64];
  undefined8 uStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  char cStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  plVar3 = (long *)0x0;
  puVar4 = auStack_120;
  puVar12 = param_5;
  uVar13 = param_6;
  func_0x0001073ec044();
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  puVar9 = (undefined1 *)*param_4;
  puVar10 = (undefined8 *)param_4[1];
  uStack_68 = extraout_x8;
  func_0x0001072d306c();
  plVar14 = (long *)lStack_110;
  do {
    if (plVar14 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_68);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(param_1);
      __Unwind_Resume(puVar4);
      pcStack_128 = FUN_1073eb8e0;
      puVar11 = puVar10;
      uStack_498 = param_8;
      puStack_130 = &stack0xfffffffffffffff0;
      func_0x0001073ec044();
      pplVar5 = (long **)*puVar11;
      uStack_190 = extraout_x8_00;
      (*(code *)(*pplVar5)[2])();
      pplVar8 = pplVar5;
      for (pplVar15 = (long **)0x0; bVar2 = pplVar15 == pplVar5, !bVar2;
          pplVar15 = (long **)((long)pplVar15 + 1)) {
        (**(code **)(*(long *)*puVar10 + 0x18))(&plStack_460,(long *)*puVar10,pplVar15);
        (**(code **)(*plStack_460 + 0x30))();
        func_0x00010726236c(auStack_1d0);
        func_0x0001072e7640(auStack_360,auStack_1d0,0x1138369c0);
        uVar6 = param_7;
        func_0x000107869b38(auStack_3d8,param_7,auStack_360);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_478,auStack_3d8,uVar6);
        FUN_1073de9d8(auStack_3d8);
        func_0x000104c2f714(auStack_360);
        lStack_488 = lStack_458;
        plStack_490 = plStack_460;
        if (lStack_458 != 0) {
          plVar3 = (long *)(lStack_458 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_448,puVar12);
        (**(code **)(*(long *)*puVar10 + 0x20))(auStack_410);
        func_0x0001073c4f74(auStack_3d8,auStack_448);
        func_0x000107751444(puVar9,&plStack_490,auStack_3d8);
        *(undefined1 **)(puVar9 + 0xe0) = auStack_478;
        func_0x000107751334(auStack_360,puVar9);
        func_0x000107267e8c(auStack_3d8);
        func_0x000107267eac(auStack_448);
        func_0x000107267e44(&plStack_490);
        auStack_3d8[0] = 0;
        uStack_3a0 = 0;
        uStack_398 = 0;
        uVar7 = uVar13;
        func_0x00010777faa8(uVar13,auStack_360,auStack_3d8);
        func_0x00010724b3d8(auStack_3d8);
        if ((uVar7 & 1) != 0) {
          FUN_1073ebfe0(uStack_498,auStack_360);
        }
        func_0x000107267da8(auStack_360);
        func_0x00010726b264(auStack_478);
        func_0x00010724b3d8(auStack_1d0);
        pplVar8 = &plStack_460;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_190);
      if (bVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_360);
      func_0x00010726b264(auStack_478);
      func_0x00010724b3d8(auStack_1d0);
      FUN_107330fdc(&plStack_460);
      pplVar15 = pplVar8;
      __Unwind_Resume();
      pcStack_4a8 = FUN_1073ebb78;
      if (*(uint *)(pplVar15 + 2) != 0xffffffff) {
        uStack_4c0 = param_7;
        pplStack_4b8 = pplVar8;
        ppuStack_4b0 = &puStack_130;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar15 + 2)])(&uStack_4c1,pplVar15);
      }
      *(undefined4 *)(pplVar15 + 2) = 0xffffffff;
      return;
    }
    if (((uint)param_6 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar9 = (undefined1 *)(plVar14 + 2);
      plVar3 = param_3;
      puVar10 = param_5;
      FUN_10746e408();
      if ((int)plVar3 != 0) {
        puVar9 = (undefined1 *)(plVar14 + 2);
        puVar10 = param_5;
        FUN_10746e5cc(auStack_d0,param_3);
        in_ZR = false;
        if (cStack_a0 == '\x01') {
          FUN_1073ebbdc(auStack_98,param_1);
          FUN_1073ebbdc(auStack_80,auStack_d0);
          uStack_f0 = 2;
          puStack_f8 = auStack_98;
          func_0x0001073ec054();
          FUN_1073ebc60(param_1,auStack_e8);
          FUN_1073ebb78(auStack_e8);
          lVar16 = 0x18;
          do {
            FUN_1073ebb78(auStack_98 + lVar16);
            lVar16 = lVar16 + -0x18;
          } while (lVar16 != -0x18);
          FUN_1073ebbdc(auStack_98,param_1 + 0x18);
          FUN_1073ebbdc(auStack_80,auStack_b8);
          uStack_f0 = 2;
          puStack_f8 = auStack_98;
          func_0x0001073ec054();
          puVar9 = auStack_e8;
          FUN_1073ebc60(param_1 + 0x18);
          FUN_1073ebb78(auStack_e8);
          lVar16 = 0x18;
          do {
            FUN_1073ebb78(auStack_98 + lVar16);
            lVar16 = lVar16 + -0x18;
            in_ZR = lVar16 == -0x18;
          } while (!(bool)in_ZR);
        }
        plVar3 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_6 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*param_3 + 0x30));
      if (((ulong)plVar3 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*param_3 + 0x30));
      if (((ulong)plVar3 & 1) != 0) goto LAB_1073eb724;
    }
    plVar14 = (long *)*plVar14;
  } while( true );
}



/* Entry: 1073eb8e0; end: 1073ebb77;  */

void FUN_1073eb8e0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  undefined8 uVar5;
  ulong uVar6;
  long **pplVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long **pplVar9;
  undefined1 uStack_3a1;
  undefined8 uStack_3a0;
  long **pplStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  long *plStack_370;
  long lStack_368;
  undefined1 auStack_358 [24];
  long *plStack_340;
  long lStack_338;
  undefined1 auStack_328 [56];
  undefined1 auStack_2f0 [56];
  undefined1 auStack_2b8 [56];
  undefined1 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_240 [400];
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  
  puVar8 = param_3;
  uStack_378 = param_7;
  func_0x0001073ec044();
  pplVar4 = (long **)*puVar8;
  uStack_70 = extraout_x8;
  (*(code *)(*pplVar4)[2])();
  pplVar7 = pplVar4;
  for (pplVar9 = (long **)0x0; bVar3 = pplVar9 == pplVar4, !bVar3;
      pplVar9 = (long **)((long)pplVar9 + 1)) {
    (**(code **)(*(long *)*param_3 + 0x18))(&plStack_340,(long *)*param_3,pplVar9);
    (**(code **)(*plStack_340 + 0x30))();
    func_0x00010726236c(auStack_b0);
    func_0x0001072e7640(auStack_240,auStack_b0,0x1138369c0);
    uVar5 = param_6;
    func_0x000107869b38(auStack_2b8,param_6,auStack_240);
    func_0x00010786967c();
    FUN_1073dcf84(auStack_358,auStack_2b8,uVar5);
    FUN_1073de9d8(auStack_2b8);
    func_0x000104c2f714(auStack_240);
    lStack_368 = lStack_338;
    plStack_370 = plStack_340;
    if (lStack_338 != 0) {
      plVar1 = (long *)(lStack_338 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104c2fe00(auStack_328,param_4);
    (**(code **)(*(long *)*param_3 + 0x20))(auStack_2f0);
    func_0x0001073c4f74(auStack_2b8,auStack_328);
    func_0x000107751444(param_2,&plStack_370,auStack_2b8);
    *(undefined1 **)(param_2 + 0xe0) = auStack_358;
    func_0x000107751334(auStack_240,param_2);
    func_0x000107267e8c(auStack_2b8);
    func_0x000107267eac(auStack_328);
    func_0x000107267e44(&plStack_370);
    auStack_2b8[0] = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uVar6 = param_5;
    func_0x00010777faa8(param_5,auStack_240,auStack_2b8);
    func_0x00010724b3d8(auStack_2b8);
    if ((uVar6 & 1) != 0) {
      FUN_1073ebfe0(uStack_378,auStack_240);
    }
    func_0x000107267da8(auStack_240);
    func_0x00010726b264(auStack_358);
    func_0x00010724b3d8(auStack_b0);
    pplVar7 = &plStack_340;
    FUN_107330fdc();
  }
  func_0x0001073ec008(uStack_70);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_240);
  func_0x00010726b264(auStack_358);
  func_0x00010724b3d8(auStack_b0);
  FUN_107330fdc(&plStack_340);
  pplVar9 = pplVar7;
  __Unwind_Resume();
  pcStack_388 = FUN_1073ebb78;
  if (*(uint *)(pplVar9 + 2) != 0xffffffff) {
    uStack_3a0 = param_6;
    pplStack_398 = pplVar7;
    puStack_390 = &stack0xfffffffffffffff0;
    (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar9 + 2)])(&uStack_3a1,pplVar9);
  }
  *(undefined4 *)(pplVar9 + 2) = 0xffffffff;
  return;
}



/* Entry: 1073ebb78; end: 1073ebbcb;  */

void FUN_1073ebb78(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1073ebbcc; end: 1073ebbdb;  */

void FUN_1073ebbcc(void)

{
  return;
}



/* Entry: 1073ebbdc; end: 1073ebc0b;  */

void FUN_1073ebbdc(void)

{
  func_0x0001073ec08c();
  FUN_1073ebc0c();
  return;
}



/* Entry: 1073ebc0c; end: 1073ebc4b;  */

void FUN_1073ebc0c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073ec060();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x0001073ec034(&PTR_FUN_1109acef8);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 1073ebc4c; end: 1073ebc5f;  */

void FUN_1073ebc4c(void)

{
  return;
}



/* Entry: 1073ebc60; end: 1073ebc83;  */

undefined8 FUN_1073ebc60(undefined8 param_1)

{
  FUN_1073ebc84();
  return param_1;
}



/* Entry: 1073ebc84; end: 1073ebcdf;  */

void FUN_1073ebc84(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109acf10)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1073ebce0; end: 1073ebcf3;  */

void FUN_1073ebce0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x10) != 0) {
    uStack_18 = param_3;
    FUN_1073ebd20(&lStack_20);
  }
  return;
}



/* Entry: 1073ebcf4; end: 1073ebd1f;  */

void FUN_1073ebcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_1073ebd20(&lStack_20);
  }
  return;
}



/* Entry: 1073ebd20; end: 1073ebd43;  */

void FUN_1073ebd20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001073ec01c();
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return;
}



/* Entry: 1073ebd44; end: 1073ebd4b;  */

void FUN_1073ebd44(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x10) != 1) {
    uStack_18 = param_3;
    FUN_1073ebd7c(&lStack_20);
  }
  return;
}



/* Entry: 1073ebd4c; end: 1073ebd7b;  */

void FUN_1073ebd4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_1073ebd7c(&lStack_20);
  }
  return;
}



/* Entry: 1073ebd7c; end: 1073ebda3;  */

void FUN_1073ebd7c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001073ec01c();
  *(undefined4 *)(lVar1 + 0x10) = 1;
  return;
}



/* Entry: 1073ebda4; end: 1073ebdab;  */

void FUN_1073ebda4(long *param_1,long *param_2,long *param_3)

{
  long lStack_20;
  long *plStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x10) == 2) {
    if (param_2 != param_3) {
      plStack_18 = (long *)param_3[1];
      lStack_20 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      FUN_1073ebe30(param_2,&lStack_20);
      FUN_1073dd578(&lStack_20);
    }
    return;
  }
  plStack_18 = param_3;
  FUN_1073ebde8(&lStack_20);
  return;
}



/* Entry: 1073ebdac; end: 1073ebde7;  */

void FUN_1073ebdac(long param_1,long *param_2,long *param_3)

{
  long lStack_20;
  long *plStack_18;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    if (param_2 != param_3) {
      plStack_18 = (long *)param_3[1];
      lStack_20 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      FUN_1073ebe30(param_2,&lStack_20);
      FUN_1073dd578(&lStack_20);
    }
    return;
  }
  lStack_20 = param_1;
  plStack_18 = param_3;
  FUN_1073ebde8(&lStack_20);
  return;
}



/* Entry: 1073ebde8; end: 1073ebdf3;  */

undefined8 * FUN_1073ebde8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_1073ebb78();
  uVar3 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 2;
  return puVar1;
}



/* Entry: 1073ebdf4; end: 1073ebe2f;  */

void FUN_1073ebdf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1073ebe30(param_1,&uStack_20);
    FUN_1073dd578(&uStack_20);
  }
  return;
}



/* Entry: 1073ebe30; end: 1073ebeab;  */

undefined8 * FUN_1073ebe30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1073dd578(&uStack_30);
  return param_1;
}



/* Entry: 1073ebeac; end: 1073ebecb;  */

void FUN_1073ebeac(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1073ebecc();
  }
  return;
}



/* Entry: 1073ebecc; end: 1073ebf5f;  */

long FUN_1073ebecc(long param_1)

{
  FUN_1073ebb78(param_1 + 0x18);
  func_0x0001073ec01c();
  return param_1;
}



/* Entry: 1073ebf60; end: 1073ebf83;  */

void FUN_1073ebf60(void)

{
  func_0x0001073ec08c();
  FUN_1073ebf84();
  return;
}



/* Entry: 1073ebf84; end: 1073ebfc3;  */

void FUN_1073ebf84(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073ec060();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x0001073ec034(&PTR_FUN_1109acf28);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 1073ebfc4; end: 1073ebfdf;  */

void FUN_1073ebfc4(void)

{
  return;
}



/* Entry: 1073ebfe0; end: 1073ebfff;  */

void FUN_1073ebfe0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073ebff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 1073ec000; end: 1073ec09f;  */

void FUN_1073ec000(void)

{
  return;
}



/* Entry: 1073ec0a0; end: 1073ec0ff;  */

void FUN_1073ec0a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_1073ecddc();
  func_0x0001073ece6c();
  *param_1 = unaff_x22;
  lVar1 = *(long *)(*unaff_x21 + unaff_x22 * 0x130 + 0x40);
  lVar2 = *(long *)(lVar1 + 8) + -4;
  *(long *)(lVar1 + 8) = lVar2;
  FUN_1073ecad8(lVar1,lVar2,*(undefined8 *)*unaff_x19,((undefined8 *)*unaff_x19)[1]);
  ((undefined8 *)*unaff_x19)[1] = *(undefined8 *)*unaff_x19;
  return;
}



/* Entry: 1073ec100; end: 1073ec2eb;  */

long * FUN_1073ec100(long *param_1,ulong *param_2)

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
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
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
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1073ec1ac;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) break;
          if (plVar7[2] == uVar9) goto LAB_1073ec2c0;
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
LAB_1073ec1ac:
  plVar1 = param_1 + 2;
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar7[2] = uVar9;
  plVar7[3] = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    func_0x0001073ece54(uVar8 << 1);
    FUN_1073ec918(param_1);
    uVar8 = param_1[1];
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
  lVar4 = *param_1;
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
  param_1[3] = param_1[3] + 1;
  func_0x0001073ece80();
LAB_1073ec2c0:
  return plVar7 + 3;
}



/* Entry: 1073ec2ec; end: 1073ec35f;  */

void FUN_1073ec2ec(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_1073ecddc();
  func_0x0001073ece6c();
  *param_1 = unaff_x22;
  lVar1 = *unaff_x19;
  lVar2 = *(long *)(lVar1 + 8) + -4;
  *(long *)(lVar1 + 8) = lVar2;
  puVar3 = *(undefined8 **)(*unaff_x21 + unaff_x22 * 0x130 + 0x40);
  FUN_1073ecad8(lVar1,lVar2,*puVar3,puVar3[1]);
  puVar3 = *(undefined8 **)(*unaff_x21 + unaff_x22 * 0x130 + 0x40);
  puVar3[1] = *puVar3;
  FUN_1073ec360(puVar3,*unaff_x19);
  return;
}



/* Entry: 1073ec360; end: 1073ec423;  */

void FUN_1073ec360(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1073ec798();
  FUN_1073ec798(param_2,&uStack_40);
  func_0x000104c336c8(&uStack_40);
  return;
}



/* Entry: 1073ec424; end: 1073ec797;  */

void FUN_1073ec424(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *unaff_x28;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  long *plStack_c0;
  long lStack_b8;
  float fStack_b0;
  ulong auStack_a0 [4];
  undefined4 uStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  uVar10 = 0;
  auStack_a0[1] = 0;
  auStack_a0[0] = 0;
  auStack_a0[3] = 0;
  auStack_a0[2] = 0;
  uStack_80 = 0x3f800000;
  puStack_c8 = (ulong *)0x0;
  uStack_d0 = 0;
  lStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  fStack_b0 = 1.0;
  do {
    if ((ulong)((param_1[1] - *param_1) / 0x130) <= uVar10) {
      FUN_1073eccc8(&uStack_d0);
      FUN_1073eccc8(auStack_a0);
      return;
    }
    lVar11 = *param_1 + uVar10 * 0x130;
    if (((*(char *)(lVar11 + 0xa8) == '\x01') &&
        (plVar9 = *(long **)(lVar11 + 0x40), plVar9 != *(long **)(lVar11 + 0x48))) &&
       (*plVar9 != plVar9[1])) {
      lVar2 = lVar11 + 0x58;
      func_0x0001073ec3b4();
      lVar3 = lVar2;
      lStack_d8 = lVar2;
      func_0x0001073ece44(*(undefined8 *)(lVar11 + 0x40));
      puVar8 = &uStack_d0;
      lStack_e0 = lVar3;
      FUN_1073ecd0c(puVar8,lVar2);
      puVar4 = auStack_a0;
      FUN_1073ecd0c(puVar4,lVar3);
      if (puVar8 == (ulong *)0x0) {
        if (puVar4 == (ulong *)0x0) {
          puVar8 = auStack_a0;
          FUN_1073ec100(puVar8,&lStack_d8);
          *puVar8 = uVar10;
          puVar8 = &uStack_d0;
          FUN_1073ec100(puVar8,&lStack_e0);
          *puVar8 = uVar10;
        }
        else {
          func_0x0001073ecdfc();
        }
      }
      else if ((puVar4 == (ulong *)0x0) || (puVar8[3] == puVar4[3])) {
        func_0x0001073ece24();
      }
      else {
        func_0x0001073ecdfc();
        func_0x0001073ece24();
        FUN_1073ecda4(auStack_a0,lVar2);
        puVar8 = &uStack_d0;
        FUN_1073ecda4(puVar8,lVar3);
        func_0x0001073ece44(*(undefined8 *)(*param_1 + (long)puVar4 * 0x130 + 0x40));
        puVar12 = puStack_c8;
        if (puStack_c8 != (ulong *)0x0) {
          uVar5 = (long)puStack_c8 - 1;
          if (((ulong)puStack_c8 & uVar5) == 0) {
            unaff_x28 = (ulong *)(uVar5 & (ulong)puVar8);
          }
          else {
            unaff_x28 = puVar8;
            if (puStack_c8 <= puVar8) {
              uVar1 = 0;
              if (puStack_c8 != (ulong *)0x0) {
                uVar1 = (ulong)puVar8 / (ulong)puStack_c8;
              }
              unaff_x28 = (ulong *)((long)puVar8 - uVar1 * (long)puStack_c8);
            }
          }
          plVar9 = *(long **)(uStack_d0 + (long)unaff_x28 * 8);
          if (plVar9 != (long *)0x0) {
            do {
              while( true ) {
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) goto LAB_1073ec618;
                puVar6 = (ulong *)plVar9[1];
                if (puVar6 != puVar8) break;
                if ((ulong *)plVar9[2] == puVar8) goto LAB_1073ec724;
              }
              if (((ulong)puStack_c8 & uVar5) == 0) {
                puVar6 = (ulong *)((ulong)puVar6 & uVar5);
              }
              else if (puStack_c8 <= puVar6) {
                uVar1 = 0;
                if (puStack_c8 != (ulong *)0x0) {
                  uVar1 = (ulong)puVar6 / (ulong)puStack_c8;
                }
                puVar6 = (ulong *)((long)puVar6 - uVar1 * (long)puStack_c8);
              }
            } while (puVar6 == unaff_x28);
          }
        }
LAB_1073ec618:
        plVar9 = (long *)0x20;
        __Znwm();
        uStack_68 = 1;
        *plVar9 = 0;
        plVar9[1] = (long)puVar8;
        plVar9[2] = (long)puVar8;
        plVar9[3] = 0;
        pplStack_70 = &plStack_c0;
        if ((puVar12 == (ulong *)0x0) || (fStack_b0 * (float)puVar12 < (float)(lStack_b8 + 1))) {
          plStack_78 = plVar9;
          func_0x0001073ece54((long)puVar12 << 1);
          FUN_1073ec918(&uStack_d0);
          puVar12 = puStack_c8;
          if (((ulong)puStack_c8 & (long)puStack_c8 - 1U) == 0) {
            unaff_x28 = (ulong *)((long)puStack_c8 - 1U & (ulong)puVar8);
          }
          else {
            unaff_x28 = puVar8;
            if (puStack_c8 <= puVar8) {
              uVar5 = 0;
              if (puStack_c8 != (ulong *)0x0) {
                uVar5 = (ulong)puVar8 / (ulong)puStack_c8;
              }
              unaff_x28 = (ulong *)((long)puVar8 - uVar5 * (long)puStack_c8);
            }
          }
        }
        plVar7 = *(long **)(uStack_d0 + (long)unaff_x28 * 8);
        if (plVar7 == (long *)0x0) {
          *plVar9 = (long)plStack_c0;
          *(long ***)(uStack_d0 + (long)unaff_x28 * 8) = &plStack_c0;
          plStack_c0 = plVar9;
          if (*plVar9 != 0) {
            puVar8 = *(ulong **)(*plVar9 + 8);
            if (((ulong)puVar12 & (long)puVar12 - 1U) == 0) {
              puVar8 = (ulong *)((ulong)puVar8 & (long)puVar12 - 1U);
            }
            else if (puVar12 <= puVar8) {
              uVar5 = 0;
              if (puVar12 != (ulong *)0x0) {
                uVar5 = (ulong)puVar8 / (ulong)puVar12;
              }
              puVar8 = (ulong *)((long)puVar8 - uVar5 * (long)puVar12);
            }
            *(long **)(uStack_d0 + (long)puVar8 * 8) = plVar9;
          }
        }
        else {
          *plVar9 = *plVar7;
          *plVar7 = (long)plVar9;
        }
        plStack_78 = (long *)0x0;
        lStack_b8 = lStack_b8 + 1;
        FUN_1073ec8ec(&plStack_78);
LAB_1073ec724:
        plVar9[3] = (long)puVar4;
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}



/* Entry: 1073ec798; end: 1073ec7bb;  */

undefined8 FUN_1073ec798(undefined8 param_1)

{
  FUN_10737d158();
  return param_1;
}



/* Entry: 1073ec7bc; end: 1073ec8eb;  */

void FUN_1073ec7bc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
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
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  if (plVar6 == param_1 + 2) {
LAB_1073ec844:
    if (lVar3 == 0) {
LAB_1073ec874:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_1073ec87c;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1073ec874;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1073ec844;
LAB_1073ec87c:
    if (lVar3 == 0) goto LAB_1073ec8b4;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
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
    lVar3 = *param_2;
  }
LAB_1073ec8b4:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x0001073ece80();
  return;
}



/* Entry: 1073ec8ec; end: 1073ec917;  */

long * FUN_1073ec8ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073ec918; end: 1073ecabf;  */

void FUN_1073ec918(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
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
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1073ecac0(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1073ecac0(param_1,lVar2);
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
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
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



/* Entry: 1073ecac0; end: 1073ecad7;  */

void FUN_1073ecac0(long *param_1,long param_2)

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



/* Entry: 1073ecad8; end: 1073ecc5f;  */

void FUN_1073ecad8(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  long lStack_70;
  undefined4 *puStack_68;
  long lStack_60;
  
  lVar4 = param_4 - (long)param_3;
  lVar2 = lVar4 >> 2;
  if (0 < lVar2) {
    lVar3 = param_1[1];
    if (param_1[2] - lVar3 < lVar4) {
      plVar1 = param_1;
      func_0x000104c33fb8(param_1,lVar2 + (lVar3 - *param_1 >> 2));
      func_0x000104c33da8(&lStack_78,plVar1,(long)param_2 - *param_1 >> 2,param_1 + 2);
      lVar2 = (long)puStack_68 + lVar4;
      for (; lVar4 != 0; lVar4 = lVar4 + -4) {
        *puStack_68 = *param_3;
        param_3 = param_3 + 1;
        puStack_68 = puStack_68 + 1;
      }
      puStack_68 = (undefined4 *)lVar2;
      _memcpy(lVar2,param_2,param_1[1] - (long)param_2);
      puStack_68 = (undefined4 *)((long)puStack_68 + (param_1[1] - (long)param_2));
      param_1[1] = (long)param_2;
      lVar4 = lStack_70 - ((long)param_2 - *param_1);
      _memcpy(lVar4);
      lStack_78 = *param_1;
      *param_1 = lVar4;
      lVar4 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = (long)puStack_68;
      lStack_70 = lStack_78;
      puStack_68 = (undefined4 *)lStack_78;
      lStack_60 = lVar4;
      func_0x000104c33e24(&lStack_78);
    }
    else {
      lVar5 = lVar3 - (long)param_2;
      if (lVar5 >> 2 < lVar2) {
        param_4 = param_4 - ((long)param_3 + lVar5);
        if (param_4 != 0) {
          _memmove(lVar3,(long)param_3 + lVar5,param_4);
        }
        param_1[1] = lVar3 + param_4;
        if (0 < lVar5 >> 2) {
          func_0x0001073ece10();
          for (; lVar5 != 0; lVar5 = lVar5 + -4) {
            *param_2 = *param_3;
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        func_0x0001073ece10();
        for (; lVar4 != 0; lVar4 = lVar4 + -4) {
          *param_2 = *param_3;
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return;
}



/* Entry: 1073ecc60; end: 1073eccc7;  */

void FUN_1073ecc60(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined4 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 1073eccc8; end: 1073ecd0b;  */

long * FUN_1073eccc8(long *param_1)

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



/* Entry: 1073ecd0c; end: 1073ecda3;  */

long FUN_1073ecd0c(long *param_1,ulong param_2)

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



/* Entry: 1073ecda4; end: 1073ecddb;  */

void FUN_1073ecda4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  plVar3 = param_1;
  FUN_1073ecd0c();
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar6 = param_1[1];
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *param_1;
  plVar2 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar3);
  if (plVar7 == param_1 + 2) {
LAB_1073ec844:
    if (lVar4 == 0) {
LAB_1073ec874:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_1073ec87c;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1073ec874;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1073ec844;
LAB_1073ec87c:
    if (lVar4 == 0) goto LAB_1073ec8b4;
  }
  uVar10 = *(ulong *)(lVar4 + 8);
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar3;
  }
LAB_1073ec8b4:
  *plVar7 = lVar4;
  *plVar3 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x0001073ece80();
  return;
}



/* Entry: 1073ecddc; end: 1073ece87;  */

void FUN_1073ecddc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack0000000000000008;
  
  uVar5 = param_2[1];
  lVar3 = *param_3;
  uVar4 = param_3[1];
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
  lVar8 = *param_2;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 == param_2 + 2) {
LAB_1073ec844:
    if (lVar3 == 0) {
LAB_1073ec874:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_3;
      goto LAB_1073ec87c;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1073ec874;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1073ec844;
LAB_1073ec87c:
    if (lVar3 == 0) goto LAB_1073ec8b4;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
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
    lVar3 = *param_3;
  }
LAB_1073ec8b4:
  *plVar6 = lVar3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  uStack0000000000000008 = param_4;
  func_0x0001073ece80();
  return;
}



/* Entry: 1073ef420; end: 1073ef45f;  */

void FUN_1073ef420(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1073ef460; end: 1073ef583;  */

long FUN_1073ef460(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x0001073f2b20();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar3 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar2 = (byte)param_2;
  uVar11 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar8;
    uVar12 = *(undefined8 *)(uVar7 + uVar3);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar18 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = unaff_x19[1];
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8);
      func_0x000104c32db4();
      if ((uVar4 & 1) != 0) goto LAB_1073ef550;
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  puVar5 = unaff_x19;
  FUN_1073f2244();
  lVar6 = unaff_x19[1] + (long)puVar5 * 0x50;
  func_0x000104c2fe00();
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
LAB_1073ef550:
  return unaff_x19[1] + (long)puVar5 * 0x50 + 0x38;
}



/* Entry: 1073ef584; end: 1073ef5d7;  */

undefined8 FUN_1073ef584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  undefined8 uVar2;
  
  puVar1 = param_2;
  func_0x00010726b0e4();
  param_2 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x1) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return 1;
  }
  func_0x00010727420c(param_1);
  func_0x0001072750c0();
  func_0x00010726fe44();
  return unaff_x19;
}



/* Entry: 1073ef5d8; end: 1073ef603;  */

undefined8 FUN_1073ef5d8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001073f26dc(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 1073ef604; end: 1073ef73f;  */

void FUN_1073ef604(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x10;
  long lVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long unaff_x25;
  ulong *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 uStack_68;
  
  uVar6 = param_1[2];
  uVar4 = param_1[1];
  bVar2 = uVar6 <= uVar4;
  bVar3 = uVar4 == uVar6;
  if (bVar2) {
    lVar8 = param_2;
    func_0x0001073f2a64();
    if (bVar2 && !bVar3) {
      FUN_1073f12f0();
                    /* WARNING: Could not recover jumptable at 0x0001073ef74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(uVar4 + 8) + 0x20))();
      return;
    }
    func_0x0001073f2a34();
    lVar7 = extraout_x10;
    if (bVar2) {
      lVar7 = extraout_x8;
    }
    if (lVar7 == 0) {
      lVar7 = 0;
      lVar8 = 0;
    }
    else {
      FUN_1073f12fc();
    }
    func_0x0001073f12c0(lVar7 + unaff_x22,param_2);
    lVar5 = *param_1;
    lVar1 = param_1[1];
    func_0x0001073f2dc8(lVar1 - lVar5);
    puStack_78 = &stack0xffffffffffffffa0;
    puStack_70 = &stack0xffffffffffffffa8;
    puStack_80 = (ulong *)(param_1 + 2);
    for (lVar9 = lVar5; lVar9 != lVar1; lVar9 = lVar9 + 200) {
      func_0x0001073f12c0();
    }
    uStack_68 = 1;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 200) {
      func_0x000104c2f714(lVar5);
    }
    lVar9 = lVar7 + unaff_x22 + 200;
    FUN_1073f1330(&puStack_80);
    lVar5 = *param_1;
    *param_1 = unaff_x25;
    param_1[1] = lVar9;
    param_1[2] = lVar7 + lVar8 * 200;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  else {
    func_0x0001073f12c0(uVar4,param_2);
    lVar9 = uVar4 + 200;
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1073ef740; end: 1073ef76f;  */

void FUN_1073ef740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073ef74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 1073ef770; end: 1073ef823;  */

undefined8 * FUN_1073ef770(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined4 auStack_3b8 [6];
  undefined4 uStack_3a0;
  undefined **ppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_370;
  undefined1 uStack_36c;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [56];
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [256];
  undefined8 uStack_f8;
  undefined8 auStack_a8 [12];
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073f28f0();
  uStack_28 = extraout_x8;
  FUN_1073e0964(auStack_a8,extraout_x9 + 0xb0);
  if (*(long *)(param_3 + 0xf0) != 0) {
    ppuStack_48 = &PTR_DAT_1109ad168;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_3;
    func_0x000107752018(auStack_a8,&ppuStack_48);
    func_0x0001072c9444(&ppuStack_48);
  }
  func_0x000107750290(param_1,auStack_a8);
  puVar2 = auStack_a8;
  func_0x000107266af0();
  func_0x0001073f28a4(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072c9444(&ppuStack_48);
  func_0x000107266af0(auStack_a8);
  func_0x0001073f2984();
  func_0x0001073f2a14();
  func_0x0001073f28f0();
  auStack_3b8[0] = 0x36;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  ppuStack_398 = &PTR_DAT_110996720;
  uStack_390 = 0;
  uStack_378 = 0x36;
  uStack_370 = 0;
  uStack_36c = 1;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_368 = 0;
  uStack_f8 = extraout_x8_00;
  FUN_10743cc34(&puStack_310,auStack_3b8,7);
  FUN_10743d7bc(&uStack_200,&puStack_310);
  func_0x000107288cd8(&puStack_310);
  func_0x000107262330(auStack_3b8);
  func_0x000104c2fe00(auStack_348,param_3 + 0x50);
  FUN_107371bc4(auStack_1f8,"source",auStack_348);
  func_0x000104c2f714(auStack_348);
  func_0x0001073f2d34();
  func_0x00010729d56c(auStack_1f8);
  (**(code **)(**(long **)(param_3 + 8) + 0x20))(&puStack_310);
  uVar4 = puVar2[4];
  puVar2 = (undefined8 *)0x198;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_DAT_1109ad1e8;
  FUN_107455d98(puVar3,param_3 + 0x50,&puStack_310,param_3 + 0x18,uVar4);
  puStack_3d0 = puVar3;
  puStack_3c8 = puVar2;
  func_0x000104c2f714(&puStack_310);
  lVar6 = *(long *)(param_3 + 0x690);
  for (lVar5 = *(long *)(param_3 + 0x688); lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    FUN_107455f28(puStack_3d0,lVar5);
  }
  lVar5 = *(long *)(param_3 + 0x98);
  while (uVar1 = lVar5 == param_3 + 0xa0, !(bool)uVar1) {
    puStack_308 = puStack_3c8;
    puStack_310 = puStack_3d0;
    if (puStack_3c8 != (undefined8 *)0x0) {
      do {
        func_0x0001073f2948();
      } while (extraout_w10 != 0);
    }
    uStack_2f8 = *(undefined8 *)(lVar5 + 0x40);
    uStack_300 = *(undefined8 *)(lVar5 + 0x38);
    if (*(long *)(lVar5 + 0x40) != 0) {
      do {
        func_0x0001073f2948();
      } while (extraout_w10_00 != 0);
    }
    FUN_1073ea79c(auStack_3b8);
    func_0x0001073e08f4(&puStack_310);
    func_0x00010002c7d4();
  }
  FUN_1073f2880(&puStack_3d0);
  puVar2 = &uStack_200;
  FUN_10743d7e4();
  func_0x0001073f28a4(uStack_f8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f714(&puStack_310);
    puVar2 = &uStack_200;
    FUN_10743d7e4();
    func_0x0001073f2984();
    *puVar2 = &PTR_FUN_1109acf50;
    func_0x000107284d8c(puVar2 + 0xd6);
    func_0x0001073f17cc(puVar2 + 0xd1);
    FUN_1073efd8c(puVar2 + 0x22);
    func_0x000107266af0(puVar2 + 0x16);
    FUN_1073e2524(puVar2 + 0x13);
    func_0x000104c2f714(puVar2 + 10);
    func_0x000104c2f714(puVar2 + 3);
    func_0x000107331000(puVar2 + 1);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1073ef824; end: 1073efa67;  */

undefined8 * FUN_1073ef824(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined4 auStack_308 [6];
  undefined4 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [56];
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  undefined8 uStack_48;
  
  func_0x0001073f2a14();
  func_0x0001073f28f0();
  auStack_308[0] = 0x36;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  ppuStack_2e8 = &PTR_DAT_110996720;
  uStack_2e0 = 0;
  uStack_2c8 = 0x36;
  uStack_2c0 = 0;
  uStack_2bc = 1;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2b8 = 0;
  uStack_48 = extraout_x8;
  FUN_10743cc34(&puStack_260,auStack_308,7);
  FUN_10743d7bc(&uStack_150,&puStack_260);
  func_0x000107288cd8(&puStack_260);
  func_0x000107262330(auStack_308);
  func_0x000104c2fe00(auStack_298,unaff_x20 + 0x50);
  FUN_107371bc4(auStack_148,"source",auStack_298);
  func_0x000104c2f714(auStack_298);
  func_0x0001073f2d34();
  func_0x00010729d56c(auStack_148);
  (**(code **)(**(long **)(unaff_x20 + 8) + 0x20))(&puStack_260);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  puVar2 = (undefined8 *)0x198;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2 + 3;
  *puVar2 = &PTR_DAT_1109ad1e8;
  FUN_107455d98(puVar3,unaff_x20 + 0x50,&puStack_260,unaff_x20 + 0x18,uVar4);
  puStack_320 = puVar3;
  puStack_318 = puVar2;
  func_0x000104c2f714(&puStack_260);
  lVar6 = *(long *)(unaff_x20 + 0x690);
  for (lVar5 = *(long *)(unaff_x20 + 0x688); lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    FUN_107455f28(puStack_320,lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + 0x98);
  while (uVar1 = lVar5 == unaff_x20 + 0xa0, !(bool)uVar1) {
    puStack_258 = puStack_318;
    puStack_260 = puStack_320;
    if (puStack_318 != (undefined8 *)0x0) {
      do {
        func_0x0001073f2948();
      } while (extraout_w10 != 0);
    }
    uStack_248 = *(undefined8 *)(lVar5 + 0x40);
    uStack_250 = *(undefined8 *)(lVar5 + 0x38);
    if (*(long *)(lVar5 + 0x40) != 0) {
      do {
        func_0x0001073f2948();
      } while (extraout_w10_00 != 0);
    }
    FUN_1073ea79c(auStack_308);
    func_0x0001073e08f4(&puStack_260);
    func_0x00010002c7d4();
  }
  FUN_1073f2880(&puStack_320);
  puVar2 = &uStack_150;
  FUN_10743d7e4();
  func_0x0001073f28a4(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f714(&puStack_260);
    puVar2 = &uStack_150;
    FUN_10743d7e4();
    func_0x0001073f2984();
    *puVar2 = &PTR_FUN_1109acf50;
    func_0x000107284d8c(puVar2 + 0xd6);
    func_0x0001073f17cc(puVar2 + 0xd1);
    FUN_1073efd8c(puVar2 + 0x22);
    func_0x000107266af0(puVar2 + 0x16);
    FUN_1073e2524(puVar2 + 0x13);
    func_0x000104c2f714(puVar2 + 10);
    func_0x000104c2f714(puVar2 + 3);
    func_0x000107331000(puVar2 + 1);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1073efa68; end: 1073efa6b;  */

undefined8 * FUN_1073efa68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109acf50;
  func_0x000107284d8c(param_1 + 0xd6);
  func_0x0001073f17cc(param_1 + 0xd1);
  FUN_1073efd8c(param_1 + 0x22);
  func_0x000107266af0(param_1 + 0x16);
  FUN_1073e2524(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 10);
  func_0x000104c2f714(param_1 + 3);
  func_0x000107331000(param_1 + 1);
  return param_1;
}



/* Entry: 1073efa6c; end: 1073efa7f;  */

void FUN_1073efa6c(void)

{
  func_0x0001073f1868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073efa80; end: 1073efaeb;  */

long FUN_1073efa80(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (*(int *)(param_1 + 0x40) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_1073e720c(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_1109acfa8)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1073efaec; end: 1073efb97;  */

void FUN_1073efaec(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w8;
  
  func_0x0001073f2ad4();
  if (extraout_w8 != 0) {
    FUN_1073e720c();
    func_0x0001073f2d6c();
    return;
  }
  func_0x0001073f2d60();
  if (param_1 != param_2) {
    *param_2 = 0;
    param_2[1] = 0;
    func_0x000107295ce8();
    func_0x00010726b120(&stack0xffffffffffffffe0);
  }
  return;
}



/* Entry: 1073efb98; end: 1073efbbb;  */

undefined8 FUN_1073efb98(undefined8 param_1)

{
  FUN_1073efbbc();
  return param_1;
}



/* Entry: 1073efbbc; end: 1073efbf3;  */

void FUN_1073efbbc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        uStack_18 = param_2[1];
        uStack_20 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        func_0x000107295ce8(param_1,&uStack_20);
        func_0x00010726b120(&uStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 2) == '\x01') {
        func_0x00010726b09c();
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return;
    }
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1073efbf4; end: 1073efc37;  */

void FUN_1073efbf4(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001073f2ac8((&PTR_FUN_1109acfb8)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1073efc38; end: 1073efc47;  */

void FUN_1073efc38(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_2;
  func_0x0001072dbda8();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x0001072dbde4(param_2);
  return;
}



/* Entry: 1073efc48; end: 1073efcc7;  */

void FUN_1073efc48(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w8;
  
  func_0x0001073f2ad4();
  if (extraout_w8 != 0) {
    FUN_1073efbf4();
    func_0x0001073f2d6c();
    return;
  }
  func_0x0001073f2d60();
  if (param_1 != param_2) {
    *param_2 = 0;
    param_2[1] = 0;
    func_0x0001072f6498();
    func_0x0001072dbde4(&stack0xffffffffffffffe0);
  }
  return;
}



/* Entry: 1073efcc8; end: 1073efd03;  */

void FUN_1073efcc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x0001072f6498(param_1,&uStack_20);
    func_0x0001072dbde4(&uStack_20);
  }
  return;
}



/* Entry: 1073efd04; end: 1073efd2f;  */

void FUN_1073efd04(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  func_0x00010727e15c();
  FUN_1073efd30(unaff_x20 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1073efd30; end: 1073efd53;  */

undefined8 FUN_1073efd30(undefined8 param_1)

{
  FUN_1073efd54();
  return param_1;
}



/* Entry: 1073efd54; end: 1073efd8b;  */

void FUN_1073efd54(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        uStack_18 = param_2[1];
        uStack_20 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        func_0x0001072f6498(param_1,&uStack_20);
        func_0x0001072dbde4(&uStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 2) == '\x01') {
        func_0x0001072dbd40();
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return;
    }
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1073efd8c; end: 1073efe3f;  */

long FUN_1073efd8c(long param_1)

{
  FUN_1073e720c(param_1 + 0x528);
  FUN_1073efbf4(param_1 + 0x4e0);
  FUN_1073dd4c4(param_1 + 0x4a8);
  FUN_1073dd4c4(param_1 + 0x470);
  FUN_1073dd4c4(param_1 + 0x438);
  FUN_1073e720c(param_1 + 0x3f0);
  FUN_1073dd470(param_1 + 0x380);
  FUN_1073e720c(param_1 + 0x328);
  FUN_1073dd470(param_1 + 0x2b8);
  func_0x000104c2f714(param_1 + 0x278);
  FUN_1073dd4c4(param_1 + 0x240);
  FUN_1073dd4c4(param_1 + 0x208);
  FUN_1073dd4c4(param_1 + 0x1d0);
  FUN_1073dd470(param_1 + 0x160);
  FUN_1073dd470(param_1 + 0xe8);
  FUN_1073dd4c4(param_1 + 0xa8);
  FUN_1073e71cc(param_1 + 0x70);
  FUN_1073e71cc(param_1 + 0x38);
  FUN_1073dd4c4(param_1);
  return param_1;
}



/* Entry: 1073efe40; end: 1073efefb;  */

/* WARNING: Possible PIC construction at 0x0001073efe7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073efe80) */
/* WARNING: Removing unreachable block (ram,0x0001073efeac) */

undefined1 *
FUN_1073efe40(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  puVar1 = &stack0xfffffffffffffff0;
  puVar4 = param_1;
  lVar5 = param_4;
  func_0x0001073f28f0();
  if (*(int *)(lVar5 + 0x70) == 0) {
    func_0x0001073f28a4(extraout_x8);
    if ((bool)in_ZR) {
      param_5 = param_4 + 8;
      puVar3 = param_1;
    }
    else {
      ___stack_chk_fail();
      func_0x000104c2f714(auStack_70);
      unaff_x30 = FUN_1073efefc;
      func_0x0001073f2984();
      param_5 = 0x1138369c0;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
      puVar3 = extraout_x8_00;
      unaff_x19 = puVar4;
      unaff_x20 = param_4;
      unaff_x29 = puVar1;
    }
  }
  else {
    unaff_x30 = (code *)0x1073efe80;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    puVar3 = puVar2;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8(puVar3,param_5);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(long *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1073efefc; end: 1073eff03;  */

void FUN_1073efefc(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1073eff04; end: 1073eff6b;  */

void FUN_1073eff04(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = lVar2 + param_2 * 0x18;
  for (param_2 = param_2 * 0x18; param_2 != 0; param_2 = param_2 + -0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar2,param_3);
    lVar2 = lVar2 + 0x18;
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1073eff6c; end: 1073effef;  */

/* WARNING: Possible PIC construction at 0x0001073effa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073effa4) */
/* WARNING: Removing unreachable block (ram,0x0001073f2998) */

long FUN_1073eff6c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = param_4;
  if (*(int *)(param_4 + 0x40) != 0) {
    unaff_x30 = 0x1073effa4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    param_1 = puVar2;
    lVar3 = param_5;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a6f4(param_1,lVar3);
  func_0x000107278b90();
  return unaff_x19;
}



/* Entry: 1073efff0; end: 1073f0123;  */

void FUN_1073efff0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x0001073f2b80();
  if (param_1 < (ulong)unaff_x19[2]) {
    FUN_1073f0124();
    lVar4 = param_1 + 0xc0;
  }
  else {
    lVar7 = param_1 - *unaff_x19;
    uVar1 = lVar7 / 0xc0 + 1;
    if (0x155555555555555 < uVar1) {
      FUN_1073f0154();
LAB_1073f0120:
      func_0x000104bd35f4();
      func_0x0001073f2a14();
      func_0x000104c318bc();
      _memcpy(param_1 + 0x38,unaff_x19 + 7,0x88);
      return;
    }
    uVar3 = (unaff_x19[2] - *unaff_x19) / 0xc0;
    uVar5 = uVar3 * 2;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0xaaaaaaaaaaaaa9 < uVar3) {
      uVar5 = 0x155555555555555;
    }
    if (uVar5 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x155555555555555 < uVar5) goto LAB_1073f0120;
      lVar4 = uVar5 * 0xc0;
      __Znwm();
    }
    lVar4 = lVar4 + lVar7;
    FUN_1073f0124(lVar4,param_2);
    lVar6 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar8 = lVar4 + ((lVar2 - lVar6) / -0xc0) * 0xc0;
    for (lVar7 = lVar6; lVar7 != lVar2; lVar7 = lVar7 + 0xc0) {
      FUN_1073f0124(lVar8,lVar7);
      lVar8 = lVar8 + 0xc0;
    }
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0xc0) {
      lVar8 = lVar6;
      func_0x000104c2f714();
    }
    lVar4 = lVar4 + 0xc0;
    func_0x0001073f2db4(0xc0);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar4;
  return;
}



/* Entry: 1073f0124; end: 1073f0153;  */

void FUN_1073f0124(long param_1)

{
  long unaff_x19;
  
  func_0x0001073f2a14();
  func_0x000104c318bc();
  _memcpy(param_1 + 0x38,unaff_x19 + 0x38,0x88);
  return;
}



/* Entry: 1073f0154; end: 1073f015f;  */

long * FUN_1073f0154(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001073f292c();
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_1073f01b8(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1073f0160; end: 1073f01b7;  */

long * FUN_1073f0160(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_1073f01b8(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1073f01b8; end: 1073f01e3;  */

long FUN_1073f01b8(long param_1)

{
  func_0x0001000e30f4(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1073f01e4; end: 1073f0227;  */

void FUN_1073f01e4(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001073f2ac8((&PTR_FUN_1109acfd8)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}


