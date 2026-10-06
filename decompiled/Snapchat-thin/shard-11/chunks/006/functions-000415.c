/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108780fa8; end: 108780fdf;  */

long FUN_108780fa8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6eca8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108780fe0; end: 10878103b;  */

undefined ** FUN_108780fe0(void)

{
  return &PTR_DAT_110a6eca8;
}



/* Entry: 10878103c; end: 10878108b;  */

long FUN_10878103c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10878108c; end: 10878118f;  */

void FUN_10878108c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108781190; end: 10878136b;  */

code ** FUN_108781190(code **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 *param_6,code **param_7,code **param_8,
                     undefined8 param_9,undefined8 *param_10,undefined1 param_11,undefined4 param_12
                     ,code **param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined4 uVar2;
  code cVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long *plVar11;
  code **ppcVar12;
  code **ppcVar13;
  code ***pppcVar14;
  undefined8 extraout_x8;
  code *pcVar15;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  code **ppcVar16;
  undefined **ppuVar17;
  code *pcVar18;
  code *pcVar19;
  undefined1 auStack_4f8 [124];
  undefined8 auStack_47c [3];
  int iStack_464;
  code **ppcStack_460;
  code **ppcStack_458;
  code **ppcStack_450;
  code **ppcStack_448;
  code **ppcStack_440;
  code **ppcStack_438;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  code **ppcStack_420;
  code **ppcStack_418;
  code **ppcStack_410;
  long lStack_408;
  code **ppcStack_400;
  code *pcStack_3f0;
  code *pcStack_3e8;
  code **ppcStack_3e0;
  code *pcStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  code *pcStack_3a8;
  code **ppcStack_3a0;
  code **ppcStack_398;
  code **ppcStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined4 uStack_378;
  code *pcStack_368;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  code **ppcStack_348;
  code *pcStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined8 auStack_310 [55];
  char cStack_158;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  code **ppcStack_80;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  ppcVar16 = param_1;
  func_0x000108782124();
  *ppcVar16 = (code *)&PTR_FUN_110a6ecc8;
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba4cd);
  ppuStack_88 = &PTR_FUN_110a6eea0;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_6;
  *param_6 = 0;
  ppcStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,param_4,&ppuStack_88,param_14,&uStack_a8,4);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  ppuVar17 = param_1 + 0x16;
  *param_1 = (code *)&PTR_FUN_110a6ecc8;
  func_0x000107c27994(ppuVar17,param_3);
  func_0x000107c28d6c(param_1 + 0x19,param_15);
  *(char *)(param_1 + 0x29) = (char)param_7;
  *(int *)((long)param_1 + 0x14c) = (int)param_8;
  FUN_108781a74(param_1 + 0x2a,param_9);
  pcVar15 = (code *)*param_10;
  *param_10 = 0;
  param_1[0x30] = pcVar15;
  *(undefined1 *)(param_1 + 0x31) = param_11;
  FUN_1086e76d4(param_1 + 0x32,param_13);
  ppcVar16 = param_1 + 0x39;
  FUN_108782018(ppcVar16,param_5);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  func_0x000108782108(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010086ab34(param_1 + 0x32);
  func_0x00010875be10(param_1 + 0x30);
  func_0x0001086cf230(param_1 + 0x2a);
  func_0x000107c28d04(param_1 + 0x19);
  func_0x000107c27914(ppuVar17);
  FUN_10875b664(param_1);
  ppcVar9 = ppcVar16;
  __Unwind_Resume();
  pcStack_b8 = FUN_10878136c;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000108782124();
  uStack_120 = extraout_x8_00;
  func_0x000107c29820(&pcStack_368);
  func_0x000107c29f64(&pcStack_328,*(undefined8 *)(pcStack_368 + 0x60),ppcVar9 + 0x16,0);
  func_0x000107c297b0(&pcStack_368);
  if (cStack_158 == '\x01') {
    ppcVar16 = (code **)ppcVar9[0xb];
    func_0x000107c278b8(&pcStack_368,&DAT_10f4b36ec);
    puVar10 = auStack_310;
    func_0x000107c29e74();
    func_0x000107c278b8(&ppcStack_3a0,(&PTR_DAT_110a6ef10)[(ulong)puVar10 & 0xffffffff]);
    func_0x000107c28b34(ppcVar16,&pcStack_368,&ppcStack_3a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppcStack_3a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_368);
  }
  func_0x000107c288c8(&pcStack_328);
  uVar8 = *(char *)(ppcVar9 + 0x28) == '\x01';
  if ((bool)uVar8) {
    FUN_10868cc20(&pcStack_328,ppcVar9 + 0x19);
    pppcVar14 = (code ***)0x1;
    FUN_1087818f8(ppcVar9,&pcStack_328,1);
    ppcVar12 = &pcStack_328;
    FUN_1089058f8(ppcVar12);
  }
  else {
    func_0x000107c28298(ppcVar9 + 0x2d);
    func_0x000107c297b4(&pcStack_3f0,ppcVar9 + 1);
    ppcStack_3e0 = ppcVar9;
    func_0x000107c297b4(&ppcStack_410,ppcVar9 + 1);
    ppcStack_398 = (code **)lStack_408;
    ppcStack_3a0 = ppcStack_410;
    ppcStack_410 = (code **)0x0;
    lStack_408 = 0;
    ppcStack_400 = ppcVar9;
    ppcStack_390 = ppcVar9;
    func_0x000108782134(&pcStack_328);
    lStack_380 = *(long *)(pcStack_328 + 600);
    uStack_388 = *(undefined8 *)(pcStack_328 + 0x250);
    if (*(long *)(pcStack_328 + 600) != 0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10 != 0);
    }
    uStack_378 = *(undefined4 *)(ppcVar9[0xb] + 0xfc);
    func_0x000108782148();
    pcStack_150 = FUN_108781de8;
    ppuStack_148 = &PTR_FUN_110a6ee78;
    puVar10 = (undefined8 *)0x30;
    __Znwm();
    puVar10[1] = ppcStack_398;
    *puVar10 = ppcStack_3a0;
    if (ppcStack_398 != (code **)0x0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_00 != 0);
    }
    puVar10[3] = uStack_388;
    puVar10[2] = ppcStack_390;
    puVar10[4] = lStack_380;
    if (lStack_380 != 0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar10 + 5) = uStack_378;
    pcVar15 = ppcVar9[1];
    pcVar19 = ppcVar9[2];
    pcStack_3b0 = pcVar15;
    pcStack_3a8 = pcVar19;
    puStack_140 = puVar10;
    if (pcVar19 == (code *)0x0) {
      pcVar18 = ppcVar9[0xb];
    }
    else {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_02 != 0);
      pcVar18 = ppcVar9[0xb];
      do {
        func_0x0001087820f0();
      } while (extraout_w10_03 != 0);
    }
    ppcVar16 = (code **)0xb8;
    pcStack_3d0 = pcVar15;
    pcStack_3c8 = pcVar19;
    __Znwm();
    pcVar7 = pcStack_3e8;
    pcVar6 = pcStack_3f0;
    param_8 = ppcVar16 + 1;
    *param_8 = (code *)0x0;
    ppcVar16[2] = (code *)0x0;
    *ppcVar16 = (code *)&PTR_FUN_110a6ed38;
    ppuVar17 = &PTR_FUN_110a6ed78;
    pcStack_328 = FUN_108781af8;
    ppuStack_320 = &PTR_FUN_110a6ed78;
    pcStack_3d0 = (code *)0x0;
    pcStack_3c8 = (code *)0x0;
    param_7 = ppcVar16 + 3;
    *param_7 = (code *)&PTR_FUN_110a6ee40;
    pcStack_368 = FUN_108781b7c;
    ppuStack_360 = &PTR_FUN_110a6ed90;
    pcStack_3f0 = (code *)0x0;
    pcStack_3e8 = (code *)0x0;
    uStack_350 = 0;
    ppcStack_348 = ppcStack_3e0;
    ppcVar16[4] = FUN_108781b7c;
    ppcVar16[5] = (code *)&PTR_FUN_110a6ed90;
    ppcVar16[7] = pcVar7;
    ppcVar16[6] = pcVar6;
    uStack_358 = 0;
    ppcVar16[8] = (code *)ppcStack_3e0;
    ppcVar16[10] = FUN_108781de8;
    param_13 = &pcStack_150;
    (*(code *)ppuStack_148[2])(ppcVar16 + 0xb,&ppuStack_148);
    *param_7 = (code *)&PTR_DAT_110a6edb8;
    ppcVar16[0x10] = FUN_108781af8;
    ppcVar16[0x11] = (code *)&PTR_FUN_110a6ed78;
    ppcVar16[0x12] = pcVar15;
    ppcVar16[0x13] = pcVar19;
    uStack_318 = 0;
    auStack_310[0] = 0;
    ppcVar16[0x16] = pcVar18;
    func_0x000107c297a4(&uStack_358);
    func_0x000107c297a8(&uStack_318);
    func_0x000107c297a8(&pcStack_3d0);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    ppcStack_420 = param_7;
    ppcStack_418 = ppcVar16;
    func_0x000108782078(&uStack_3c0);
    func_0x000107c297a8(&pcStack_3b0);
    (*(code *)*ppuStack_148)(&ppuStack_148);
    FUN_108781aa8(&ppcStack_3a0);
    func_0x000108782134(&pcStack_150);
    FUN_10885edd8(&pcStack_328,*(undefined8 *)(pcStack_150 + 0x60),ppcVar9 + 0x16);
    FUN_108663a10(&ppcStack_3a0,&pcStack_328);
    FUN_108656820(&pcStack_328);
    func_0x000107c297b0(&pcStack_150);
    uVar8 = *(char *)(ppcVar9 + 0x31) == '\0';
    lVar1 = 0x20;
    if ((bool)uVar8) {
      lVar1 = 0x18;
    }
    (**(code **)(*(long *)ppcVar9[0x30] + lVar1))
              (&pcStack_368,ppcVar9[0x30],ppcVar9 + 0x16,&ppcStack_3a0);
    *(byte *)((long)ppcVar9 + 0x204) = (byte)((uint)uStack_358 >> 2) & 1;
    FUN_1086569a0(&ppcStack_3a0);
    func_0x000108782134(&pcStack_328);
    plVar11 = *(long **)(pcStack_328 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_8,0x10);
      if (bVar5) {
        *param_8 = *param_8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppcVar14 = &ppcStack_3a0;
    ppcStack_3a0 = param_7;
    ppcStack_398 = ppcVar16;
    (**(code **)(*plVar11 + 0x40))(plVar11,&pcStack_368,pppcVar14,ppcVar9 + 0x32);
    func_0x0001087820a0(&ppcStack_3a0);
    func_0x000108782148();
    FUN_1089052c4(&pcStack_368);
    func_0x000108782078(&ppcStack_420);
    func_0x000107c297a4(&ppcStack_410);
    ppcVar12 = &pcStack_3f0;
    func_0x000107c297a4(ppcVar12);
  }
  while( true ) {
    func_0x000108782108(uStack_120);
    if ((bool)uVar8) {
      return ppcVar12;
    }
    ___stack_chk_fail();
    func_0x0001087820e4();
    func_0x0001087820a0(&ppcStack_3a0);
    func_0x000108782148();
    FUN_1089052c4(&pcStack_368);
    func_0x000108782078(&ppcStack_420);
    func_0x000107c297a4(&ppcStack_410);
    func_0x000107c297a4(&pcStack_3f0);
    uVar8 = (int)param_8 == 1;
    if (!(bool)uVar8) break;
    ppcVar13 = ppcVar16;
    ___cxa_begin_catch(ppcVar16);
    func_0x000108848514();
    ppcVar12 = ppcVar9;
    FUN_10875ebcc(ppcVar9,ppcVar13);
    ___cxa_end_catch();
  }
  __Unwind_Resume(ppcVar16);
  ppcVar12 = ppcVar16;
  func_0x000104bd46a0();
  pcStack_428 = FUN_1087818f8;
  pcVar15 = ppcVar12[0x30];
  cVar3 = *(code *)(ppcVar12 + 0x29);
  uVar2 = *(undefined4 *)((long)ppcVar12 + 0x14c);
  ppcStack_460 = param_13;
  ppcStack_458 = (code **)ppuVar17;
  ppcStack_450 = param_7;
  ppcStack_448 = param_8;
  ppcStack_440 = ppcVar16;
  ppcStack_438 = ppcVar9;
  ppuStack_430 = &puStack_c0;
  FUN_10868d098(auStack_4f8);
  (**(code **)(*(long *)pcVar15 + 0x28))
            (auStack_47c,pcVar15,ppcVar12 + 0x16,cVar3,uVar2,ppcVar12 + 0x2a,auStack_4f8,pppcVar14,
             *(code *)((long)ppcVar12 + 0x204));
  FUN_1089058f8(auStack_4f8);
  puVar10 = auStack_47c;
  if (iStack_464 == 1) {
    FUN_1086d4854();
    pcVar15 = (code *)puVar10[2];
    pcVar19 = (code *)*puVar10;
    ppcVar12[0x3e] = (code *)puVar10[1];
    ppcVar12[0x3d] = pcVar19;
    ppcVar12[0x3f] = pcVar15;
    if (((ulong)ppcVar12[0x40] & 1) == 0) {
      *(code *)(ppcVar12 + 0x40) = (code)0x1;
    }
    FUN_10875ec20(ppcVar12);
  }
  else {
    FUN_1086d44b0();
    FUN_10875edc8(ppcVar12,*(undefined4 *)puVar10);
  }
  return ppcVar12;
}



/* Entry: 10878136c; end: 1087818f7;  */

void FUN_10878136c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar12;
  undefined8 *unaff_x22;
  undefined **unaff_x23;
  code **unaff_x24;
  undefined8 uVar13;
  undefined1 auStack_448 [124];
  undefined8 auStack_3cc [3];
  int iStack_3b4;
  code **ppcStack_3b0;
  undefined **ppuStack_3a8;
  undefined8 *puStack_3a0;
  long *plStack_398;
  undefined8 *puStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined4 uStack_2c8;
  code *pcStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  code *pcStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 auStack_260 [55];
  char cStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_70;
  
  func_0x000108782124();
  uStack_70 = extraout_x8;
  func_0x000107c29820(&pcStack_2b8);
  func_0x000107c29f64(&pcStack_278,*(undefined8 *)(pcStack_2b8 + 0x60),param_1 + 0xb0,0);
  func_0x000107c297b0(&pcStack_2b8);
  if (cStack_a8 == '\x01') {
    unaff_x20 = *(undefined8 **)(param_1 + 0x58);
    func_0x000107c278b8(&pcStack_2b8,&DAT_10f4b36ec);
    puVar8 = auStack_260;
    func_0x000107c29e74();
    func_0x000107c278b8(&puStack_2f0,(&PTR_DAT_110a6ef10)[(ulong)puVar8 & 0xffffffff]);
    func_0x000107c28b34(unaff_x20,&pcStack_2b8,&puStack_2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_2b8);
  }
  func_0x000107c288c8(&pcStack_278);
  uVar7 = *(char *)(param_1 + 0x140) == '\x01';
  if ((bool)uVar7) {
    FUN_10868cc20(&pcStack_278,param_1 + 200);
    ppuVar10 = (undefined8 **)0x1;
    FUN_1087818f8(param_1,&pcStack_278,1);
    FUN_1089058f8(&pcStack_278);
  }
  else {
    func_0x000107c28298(param_1 + 0x168);
    func_0x000107c297b4(&uStack_340,param_1 + 8);
    lStack_330 = param_1;
    func_0x000107c297b4(&puStack_360,param_1 + 8);
    puStack_2e8 = (undefined8 *)lStack_358;
    puStack_2f0 = puStack_360;
    puStack_360 = (undefined8 *)0x0;
    lStack_358 = 0;
    lStack_350 = param_1;
    lStack_2e0 = param_1;
    func_0x000108782134(&pcStack_278);
    lStack_2d0 = *(long *)(pcStack_278 + 600);
    uStack_2d8 = *(undefined8 *)(pcStack_278 + 0x250);
    if (*(long *)(pcStack_278 + 600) != 0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10 != 0);
    }
    uStack_2c8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
    func_0x000108782148();
    pcStack_a0 = FUN_108781de8;
    ppuStack_98 = &PTR_FUN_110a6ee78;
    puVar8 = (undefined8 *)0x30;
    __Znwm();
    puVar8[1] = puStack_2e8;
    *puVar8 = puStack_2f0;
    if (puStack_2e8 != (undefined8 *)0x0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_00 != 0);
    }
    puVar8[3] = uStack_2d8;
    puVar8[2] = lStack_2e0;
    puVar8[4] = lStack_2d0;
    if (lStack_2d0 != 0) {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar8 + 5) = uStack_2c8;
    uVar11 = *(undefined8 *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    uStack_300 = uVar11;
    lStack_2f8 = lVar1;
    puStack_90 = puVar8;
    if (lVar1 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      do {
        func_0x0001087820f0();
      } while (extraout_w10_02 != 0);
      uVar13 = *(undefined8 *)(param_1 + 0x58);
      do {
        func_0x0001087820f0();
      } while (extraout_w10_03 != 0);
    }
    unaff_x20 = (undefined8 *)0xb8;
    uStack_320 = uVar11;
    lStack_318 = lVar1;
    __Znwm();
    uVar6 = uStack_338;
    uVar5 = uStack_340;
    unaff_x21 = unaff_x20 + 1;
    *unaff_x21 = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = &PTR_FUN_110a6ed38;
    unaff_x23 = &PTR_FUN_110a6ed78;
    pcStack_278 = FUN_108781af8;
    ppuStack_270 = &PTR_FUN_110a6ed78;
    uStack_320 = 0;
    lStack_318 = 0;
    unaff_x22 = unaff_x20 + 3;
    *unaff_x22 = &PTR_FUN_110a6ee40;
    pcStack_2b8 = FUN_108781b7c;
    ppuStack_2b0 = &PTR_FUN_110a6ed90;
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_2a0 = 0;
    lStack_298 = lStack_330;
    unaff_x20[4] = FUN_108781b7c;
    unaff_x20[5] = &PTR_FUN_110a6ed90;
    unaff_x20[7] = uVar6;
    unaff_x20[6] = uVar5;
    uStack_2a8 = 0;
    unaff_x20[8] = lStack_330;
    unaff_x20[10] = FUN_108781de8;
    unaff_x24 = &pcStack_a0;
    (*(code *)ppuStack_98[2])(unaff_x20 + 0xb,&ppuStack_98);
    *unaff_x22 = &PTR_DAT_110a6edb8;
    unaff_x20[0x10] = FUN_108781af8;
    unaff_x20[0x11] = &PTR_FUN_110a6ed78;
    unaff_x20[0x12] = uVar11;
    unaff_x20[0x13] = lVar1;
    uStack_268 = 0;
    auStack_260[0] = 0;
    unaff_x20[0x16] = uVar13;
    func_0x000107c297a4(&uStack_2a8);
    func_0x000107c297a8(&uStack_268);
    func_0x000107c297a8(&uStack_320);
    uStack_310 = 0;
    uStack_308 = 0;
    puStack_370 = unaff_x22;
    puStack_368 = unaff_x20;
    func_0x000108782078(&uStack_310);
    func_0x000107c297a8(&uStack_300);
    (*(code *)*ppuStack_98)(&ppuStack_98);
    FUN_108781aa8(&puStack_2f0);
    func_0x000108782134(&pcStack_a0);
    FUN_10885edd8(&pcStack_278,*(undefined8 *)(pcStack_a0 + 0x60),param_1 + 0xb0);
    FUN_108663a10(&puStack_2f0,&pcStack_278);
    FUN_108656820(&pcStack_278);
    func_0x000107c297b0(&pcStack_a0);
    uVar7 = *(char *)(param_1 + 0x188) == '\0';
    lVar1 = 0x20;
    if ((bool)uVar7) {
      lVar1 = 0x18;
    }
    (**(code **)(**(long **)(param_1 + 0x180) + lVar1))
              (&pcStack_2b8,*(long **)(param_1 + 0x180),param_1 + 0xb0,&puStack_2f0);
    *(byte *)(param_1 + 0x204) = (byte)((uint)uStack_2a8 >> 2) & 1;
    FUN_1086569a0(&puStack_2f0);
    func_0x000108782134(&pcStack_278);
    plVar12 = *(long **)(pcStack_278 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar4) {
        *unaff_x21 = *unaff_x21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuVar10 = &puStack_2f0;
    puStack_2f0 = unaff_x22;
    puStack_2e8 = unaff_x20;
    (**(code **)(*plVar12 + 0x40))(plVar12,&pcStack_2b8,ppuVar10,param_1 + 400);
    func_0x0001087820a0(&puStack_2f0);
    func_0x000108782148();
    FUN_1089052c4(&pcStack_2b8);
    func_0x000108782078(&puStack_370);
    func_0x000107c297a4(&puStack_360);
    func_0x000107c297a4(&uStack_340);
  }
  while( true ) {
    func_0x000108782108(uStack_70);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001087820e4();
    func_0x0001087820a0(&puStack_2f0);
    func_0x000108782148();
    FUN_1089052c4(&pcStack_2b8);
    func_0x000108782078(&puStack_370);
    func_0x000107c297a4(&puStack_360);
    func_0x000107c297a4(&uStack_340);
    uVar7 = (int)unaff_x21 == 1;
    if (!(bool)uVar7) break;
    puVar8 = unaff_x20;
    ___cxa_begin_catch(unaff_x20);
    func_0x000108848514();
    FUN_10875ebcc(param_1,puVar8);
    ___cxa_end_catch();
  }
  __Unwind_Resume(unaff_x20);
  puVar8 = unaff_x20;
  func_0x000104bd46a0();
  pcStack_378 = FUN_1087818f8;
  plVar12 = (long *)puVar8[0x30];
  uVar7 = *(undefined1 *)(puVar8 + 0x29);
  uVar2 = *(undefined4 *)((long)puVar8 + 0x14c);
  ppcStack_3b0 = unaff_x24;
  ppuStack_3a8 = unaff_x23;
  puStack_3a0 = unaff_x22;
  plStack_398 = unaff_x21;
  puStack_390 = unaff_x20;
  lStack_388 = param_1;
  puStack_380 = &stack0xfffffffffffffff0;
  FUN_10868d098(auStack_448);
  (**(code **)(*plVar12 + 0x28))
            (auStack_3cc,plVar12,puVar8 + 0x16,uVar7,uVar2,puVar8 + 0x2a,auStack_448,ppuVar10,
             *(undefined1 *)((long)puVar8 + 0x204));
  FUN_1089058f8(auStack_448);
  puVar9 = auStack_3cc;
  if (iStack_3b4 == 1) {
    FUN_1086d4854();
    uVar11 = puVar9[2];
    uVar13 = *puVar9;
    puVar8[0x3e] = puVar9[1];
    puVar8[0x3d] = uVar13;
    puVar8[0x3f] = uVar11;
    if ((*(byte *)(puVar8 + 0x40) & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x40) = 1;
    }
    FUN_10875ec20(puVar8);
  }
  else {
    FUN_1086d44b0();
    FUN_10875edc8(puVar8,*(undefined4 *)puVar9);
  }
  return;
}



/* Entry: 1087818f8; end: 1087819df;  */

void FUN_1087818f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [124];
  undefined8 auStack_5c [3];
  int iStack_44;
  
  plVar5 = *(long **)(param_1 + 0x180);
  uVar2 = *(undefined1 *)(param_1 + 0x148);
  uVar1 = *(undefined4 *)(param_1 + 0x14c);
  FUN_10868d098(auStack_d8);
  (**(code **)(*plVar5 + 0x28))
            (auStack_5c,plVar5,param_1 + 0xb0,uVar2,uVar1,param_1 + 0x150,auStack_d8,param_3,
             *(undefined1 *)(param_1 + 0x204));
  FUN_1089058f8(auStack_d8);
  puVar3 = auStack_5c;
  if (iStack_44 == 1) {
    FUN_1086d4854();
    uVar4 = puVar3[2];
    uVar6 = *puVar3;
    *(undefined8 *)(param_1 + 0x1f0) = puVar3[1];
    *(undefined8 *)(param_1 + 0x1e8) = uVar6;
    *(undefined8 *)(param_1 + 0x1f8) = uVar4;
    if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x200) = 1;
    }
    FUN_10875ec20(param_1);
  }
  else {
    FUN_1086d44b0();
    FUN_10875edc8(param_1,*(undefined4 *)puVar3);
  }
  return;
}



/* Entry: 1087819e0; end: 1087819e3;  */

undefined8 * FUN_1087819e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ecc8;
  FUN_1086d665c(param_1 + 0x39);
  func_0x00010086ab34(param_1 + 0x32);
  func_0x00010875be10(param_1 + 0x30);
  func_0x0001086cf230(param_1 + 0x2a);
  func_0x000107c28d04(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 1087819e4; end: 1087819f7;  */

void FUN_1087819e4(void)

{
  FUN_108781eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087819f8; end: 108781a73;  */

void FUN_1087819f8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar1 = auStack_40;
  func_0x000108782124();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914(auStack_40);
  func_0x000108782108(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x00010878211c();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar3 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  puVar1[2] = puVar2[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar4 = puVar2[4];
  uVar3 = puVar2[3];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}



/* Entry: 108781a74; end: 108781aa7;  */

void FUN_108781a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 108781aa8; end: 108781acf;  */

undefined8 FUN_108781aa8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108781ad0; end: 108781ad3;  */

void FUN_108781ad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ed38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108781ad4; end: 108781ae7;  */

void FUN_108781ad4(void)

{
  FUN_108781dd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108781ae8; end: 108781af7;  */

void FUN_108781ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108781af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108781af8; end: 108781b57;  */

long FUN_108781af8(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 108781b58; end: 108781b7b;  */

void FUN_108781b58(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108781b7c; end: 108781bc3;  */

void FUN_108781b7c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_2 + 0x20);
  uStack_24 = 0;
  FUN_10875e624(lVar1 + 0x150,&uStack_24);
  FUN_1087818f8(lVar1,param_1,0);
  return;
}



/* Entry: 108781bc4; end: 108781bf3;  */

void FUN_108781bc4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 108781bf4; end: 108781c07;  */

void FUN_108781bf4(void)

{
  func_0x000108781da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108781c08; end: 108781c1f;  */

void FUN_108781c08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 108781c20; end: 108781c63;  */

void FUN_108781c20(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010878213c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000108781c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 108781c64; end: 108781d0f;  */

void FUN_108781c64(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010878213c();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 108781d10; end: 108781d13;  */

undefined8 * FUN_108781d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ee40;
  func_0x000108782150(param_1[8]);
  func_0x000108782150(param_1[2]);
  return param_1;
}



/* Entry: 108781d14; end: 108781d27;  */

void FUN_108781d14(void)

{
  FUN_108781d64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108781d28; end: 108781d63;  */

void FUN_108781d28(void)

{
  return;
}



/* Entry: 108781d64; end: 108781dd7;  */

undefined8 * FUN_108781d64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ee40;
  func_0x000108782150(param_1[8]);
  func_0x000108782150(param_1[2]);
  return param_1;
}



/* Entry: 108781dd8; end: 108781de7;  */

void FUN_108781dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ed38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108781de8; end: 108781e7f;  */

void FUN_108781de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 108781e80; end: 108781e9f;  */

void FUN_108781e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108781aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108781ea0; end: 108781eb7;  */

void FUN_108781ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108781eb8; end: 108781f17;  */

undefined8 * FUN_108781eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ecc8;
  FUN_1086d665c(param_1 + 0x39);
  func_0x00010086ab34(param_1 + 0x32);
  func_0x00010875be10(param_1 + 0x30);
  func_0x0001086cf230(param_1 + 0x2a);
  func_0x000107c28d04(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108781f18; end: 108781f1f;  */

void FUN_108781f18(void)

{
  return;
}



/* Entry: 108781f20; end: 108781f4f;  */

void FUN_108781f20(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6eea0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108781f50; end: 108781f7b;  */

void FUN_108781f50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6eea0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108781f7c; end: 108781fd3;  */

void FUN_108781f7c(long param_1,ulong *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  
  lVar2 = *(long *)(param_1 + 8);
  bVar1 = (*param_2 >> 0x20 & 1) != 0;
  if (bVar1) {
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)*param_2);
  }
  else {
    uStack_20 = *(undefined8 *)(lVar2 + 0x1f8);
    uStack_28 = *(undefined8 *)(lVar2 + 0x1f0);
    uStack_30 = *(undefined8 *)(lVar2 + 0x1e8);
  }
  uStack_18 = (uint)!bVar1;
  FUN_1087820c8(*(undefined8 *)(lVar2 + 0x1e0),&uStack_30);
  return;
}



/* Entry: 108781fd4; end: 10878200b;  */

long FUN_108781fd4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6ef00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10878200c; end: 108782017;  */

undefined ** FUN_10878200c(void)

{
  return &PTR_DAT_110a6ef00;
}



/* Entry: 108782018; end: 1087820c7;  */

long FUN_108782018(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1087820c8; end: 1087820e3;  */

void FUN_1087820c8(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001087820d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 1087820e4; end: 10878215f;  */

void FUN_1087820e4(void)

{
  return;
}



/* Entry: 108782160; end: 108782473;  */

void FUN_108782160(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 *extraout_x8;
  long unaff_x21;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [260];
  int iStack_164;
  ulong uStack_128;
  char cStack_b0;
  undefined1 auStack_a8 [32];
  byte bStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  ulong uStack_50;
  char cStack_48;
  
  iVar2 = (int)auStack_280;
  func_0x0001087893e8();
  if ((*(char *)(param_3 + 0x30) != '\x01') ||
     (bVar4 = *(char *)(param_3 + 0x2c) == '\x01', uVar3 = bVar4 && *(uint *)(param_3 + 0x28) == 2,
     bVar4 && *(uint *)(param_3 + 0x28) < 2)) {
    bVar9 = 0;
  }
  else {
    func_0x000107c289e8(unaff_x21 + 0xc0);
    func_0x000108789644();
    if ((bool)uVar3) {
      bVar9 = *(byte *)(param_3 + 0x2c) ^ 1 | *(int *)(param_3 + 0x28) != 3;
    }
    else {
      bVar9 = 1;
    }
  }
  uVar11 = 0;
  lVar10 = *(long *)(unaff_x21 + 8);
  auStack_a8[0] = 0;
  bStack_88 = 0;
  *extraout_x8 = &PTR_FUN_110a905d0;
  extraout_x8[1] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x36) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x2e) = 0;
  if ((bVar9 & 1) == 0) goto LAB_108782368;
  func_0x000107c29f64(auStack_280,*(undefined8 *)(lVar10 + 0x60));
  if (cStack_b0 == '\x01') {
    func_0x0001086a4acc(auStack_80,auStack_268,lVar10 + 0x18);
    if (bStack_88 == (byte)uStack_60) {
      if (bStack_88 != 0) {
        func_0x000107c287d0(auStack_a8,auStack_80);
      }
    }
    else if (bStack_88 == 0) {
      FUN_10865ef28(auStack_a8,auStack_80);
      bStack_88 = 1;
    }
    else {
      func_0x000107c2a2e0();
      bStack_88 = 0;
    }
    func_0x0001086d73d8(auStack_80);
    func_0x000107c28da8();
    if (iVar2 != 0) {
      *(undefined1 *)((long)extraout_x8 + 0x3c) = 1;
    }
    pcVar5 = (char *)(unaff_x21 + 0xf0);
    func_0x000107c289e8();
    if (*pcVar5 == '\x01' && iStack_164 == 8) {
      FUN_108865948(&lStack_58,*(undefined8 *)(*(long *)(unaff_x21 + 8) + 0x60),auStack_280);
      lVar6 = *(long *)(*(long *)(unaff_x21 + 8) + 0x180);
      func_0x000107c287d8();
      if (cStack_48 == '\x01') {
        lVar1 = 0x7fffffffffffffff;
        if (lStack_58 <= (long)(uStack_50 ^ 0x7fffffffffffffff)) {
          lVar1 = uStack_50 + lStack_58;
        }
        if (-1 < (long)uStack_50) {
          lStack_58 = lVar1;
        }
        if (lVar6 < lStack_58) goto LAB_10878235c;
      }
      *(undefined1 *)((long)extraout_x8 + 0x3d) = 1;
      plVar7 = *(long **)(*(long *)(unaff_x21 + 8) + 0xf0);
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x00010878930c();
      uStack_78 = 0;
      uStack_60 = 0x2cd;
      (**(code **)(*plVar7 + 0x50))();
      func_0x000107c2882c(auStack_80);
    }
LAB_10878235c:
    uVar11 = uStack_128 & ((long)uStack_128 >> 0x3f ^ 0xffffffffffffffffU);
  }
  else {
    uVar11 = 0;
  }
  func_0x000107c288c8(auStack_280);
LAB_108782368:
  func_0x000107c29ee4(auStack_280);
  FUN_108782474(extraout_x8);
  func_0x000107c287d0();
  func_0x000108789798();
  extraout_x8[6] = uVar11;
  func_0x000107c29ee4(auStack_280,lVar10 + 0x18);
  *(uint *)(extraout_x8 + 2) = *(uint *)(extraout_x8 + 2) | 2;
  if (extraout_x8[4] == 0) {
    uVar8 = extraout_x8[1];
    if ((uVar8 & 1) != 0) {
      func_0x000108789900();
    }
    func_0x000107c287e0();
    extraout_x8[4] = uVar8;
  }
  func_0x000107c287d0();
  func_0x000108789798();
  if ((uVar11 == 0) && ((bStack_88 & 1) != 0)) {
    *(uint *)(extraout_x8 + 2) = *(uint *)(extraout_x8 + 2) | 4;
    if (extraout_x8[5] == 0) {
      uVar11 = extraout_x8[1];
      if ((uVar11 & 1) != 0) {
        func_0x000108789900();
      }
      func_0x000107c287e0();
      extraout_x8[5] = uVar11;
    }
    func_0x0001088bf408();
  }
  func_0x0001086d73d8(auStack_a8);
  return;
}



/* Entry: 108782474; end: 108782483;  */

void FUN_108782474(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108789900();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108782484; end: 1087824b3;  */

void FUN_108782484(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x20))(param_1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1087824b4; end: 108782947;  */

void FUN_1087824b4(undefined1 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  long *plVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [40];
  ulong uStack_198;
  ulong uStack_190;
  undefined8 auStack_188 [14];
  byte bStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  
  plVar5 = *(long **)(*(long *)(param_2 + 8) + 0xf0);
  uStack_e8 = 0;
  uStack_e0 = 0;
  func_0x00010878930c();
  uStack_f0 = 0;
  uStack_d8 = 0x2cc;
  (**(code **)(*plVar5 + 0x50))();
  func_0x000107c2882c(auStack_f8);
  lVar9 = *(long *)(param_2 + 8);
  uStack_80 = *(undefined8 *)(lVar9 + 0x1c0);
  uStack_78 = *(undefined8 *)(lVar9 + 0x1b0);
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  plVar5 = (long *)(param_3 + 0x18);
  puStack_a0 = &uStack_98;
  uStack_88 = param_5;
  func_0x0001087898f4(*plVar5);
  plVar2 = plVar5;
  if (!(bool)in_ZR) {
    plVar2 = extraout_x9;
  }
  for (lVar11 = (long)*(int *)(param_3 + 0x20) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    auStack_188[0] = *(undefined8 *)(*plVar2 + 0x60);
    FUN_10867b124(&puStack_a0,auStack_188);
    plVar2 = plVar2 + 1;
  }
  uVar12 = *(undefined8 *)(lVar9 + 0x60);
  FUN_10867b87c(&uStack_1f0,puStack_a0,&uStack_98);
  FUN_108861df4(auStack_188,uVar12,param_6,&uStack_1f0,0);
  func_0x000107c27ae4(&uStack_1f0);
  bVar4 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  plStack_1d8 = (long *)0x0;
  uStack_1e0 = 0;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x3f800000);
  func_0x0001087898f4(*(undefined8 *)(param_3 + 0x18));
  if (!(bool)in_ZR) {
    plVar5 = extraout_x9_00;
  }
  for (lVar11 = (long)*(int *)(param_3 + 0x20) << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    lVar10 = *plVar5;
    uStack_a8 = *(undefined8 *)(lVar10 + 0x60);
    puVar6 = auStack_188;
    func_0x00010867b2d8(puVar6,&uStack_a8);
    if (((ulong)puVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_10867b1ac(&uStack_1f0);
      if ((uVar7 & 1) != 0) {
        ppuVar3 = &PTR_PTR_113286e08;
        if (*(undefined ***)(lVar10 + 0x30) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(lVar10 + 0x30);
        }
        if ((long)(param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU)) < (long)ppuVar3[0x26]) {
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_c8 = 0;
          ppuStack_d0 = &PTR_FUN_110a609a8;
          uStack_b0 = 0x2cf;
          (**(code **)(**(long **)(param_2 + 0x18) + 0x50))(*(long **)(param_2 + 0x18),&ppuStack_d0)
          ;
          func_0x000107c2882c(&ppuStack_d0);
        }
        else {
          uVar12 = *(undefined8 *)(param_2 + 8);
          FUN_1086e0510(uVar12,lVar10,param_5,param_6,&uStack_88);
          if ((int)uVar12 == 1) {
            func_0x00010871ca7c(&puStack_a0,&uStack_a8);
          }
          else if ((int)uVar12 == 2) {
            bVar4 = 1;
          }
        }
      }
    }
    plVar5 = plVar5 + 1;
  }
  bStack_118 = bVar4;
  FUN_1087872c4(&plStack_110,&puStack_a0);
  func_0x00010867bb84(&uStack_1f0);
  func_0x00010867bb84(auStack_188);
  func_0x00010867bb28(&puStack_a0);
  FUN_1086ceab4(&uStack_88);
  FUN_1088657e4(auStack_188,*(undefined8 *)(lVar9 + 0x60),param_6);
  bVar1 = (*(byte *)(param_3 + 0x10) & 1) != 0;
  if (bVar1) {
    FUN_10878726c(&ppuStack_d0,*(undefined8 *)(param_3 + 0x30));
  }
  else {
    ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
  }
  uStack_b0 = CONCAT31(uStack_b0._1_3_,bVar1);
  func_0x000107c27994(&uStack_1f0,param_6);
  plStack_1d8 = plStack_110;
  uStack_1d0 = lStack_108;
  lStack_1c8 = lStack_100;
  plVar5 = &uStack_1d0;
  if (lStack_100 != 0) {
    *(undefined8 **)(lStack_108 + 0x10) = &uStack_1d0;
    plStack_110 = &lStack_108;
    lStack_108 = 0;
    lStack_100 = 0;
    plVar5 = plStack_1d8;
  }
  plStack_1d8 = plVar5;
  FUN_108787278(auStack_1c0,&ppuStack_d0);
  uStack_198 = *(ulong *)(param_3 + 0x38);
  uStack_190 = *(ulong *)(param_3 + 0x40);
  uStack_198 = uStack_198 ^
               (uStack_198 ^ 0x7ff8000000000000) & ~-(ulong)(uStack_198 < 0x7ff8000000000000);
  uStack_190 = uStack_190 ^
               (uStack_190 ^ 0x7ff8000000000000) & ~-(ulong)(uStack_190 < 0x7ff8000000000000);
  FUN_108865734(*(undefined8 *)(lVar9 + 0x60),&uStack_1f0);
  puVar6 = auStack_188;
  FUN_1086e0964(puVar6,&uStack_1f0);
  if ((((ulong)puVar6 & 1) == 0) && ((bStack_118 & 1) == 0)) {
    uVar8 = 0;
    *param_1 = 0;
  }
  else {
    func_0x000107c27994(param_1,&uStack_1f0);
    FUN_1087872c4(param_1 + 0x18,&plStack_1d8);
    FUN_108787278(param_1 + 0x30,auStack_1c0);
    *(ulong *)(param_1 + 0x60) = uStack_190;
    *(ulong *)(param_1 + 0x58) = uStack_198;
    uVar8 = 1;
  }
  param_1[0x68] = uVar8;
  FUN_1086cc6f0(&uStack_1f0);
  FUN_1086cc71c(&ppuStack_d0);
  FUN_1086cc6d0(auStack_188);
  func_0x00010867bb28(&plStack_110);
  return;
}



/* Entry: 108782948; end: 108782987;  */

void FUN_108782948(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108789900();
    }
    func_0x000108787218();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 108782988; end: 1087829f7;  */

void FUN_108782988(long param_1)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001087893e8();
  FUN_1086e09c0(auStack_48,*(undefined8 *)(*(long *)(param_1 + 8) + 0x60));
  func_0x00010878976c(*(undefined8 *)(unaff_x21 + 8));
  (**(code **)(extraout_x8 + 0x18))();
  func_0x00010867b9fc(auStack_48);
  return;
}



/* Entry: 108786d04; end: 108786eb7;  */

undefined1 * FUN_108786d04(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [64];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c33448();
  func_0x000108789710();
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x18);
  uStack_58 = extraout_x8;
  func_0x000107c278b8(auStack_d0,&UNK_10f4ba60a);
  func_0x000107c31420(auStack_b8,uVar2,auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  FUN_108866aec(*(undefined8 *)(lVar4 + 0x60));
  FUN_108866468(*(undefined8 *)(lVar4 + 0x60));
  FUN_108868114(*(undefined8 *)(lVar4 + 0x60));
  func_0x000107c31428(auStack_b8);
  plVar3 = *(long **)(*(long *)(unaff_x20 + 8) + 0xc0);
  func_0x000107c27994(&uStack_120);
  uStack_60 = uStack_110;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  auStack_78[0] = param_4;
  func_0x00010871c0b8(auStack_e8,auStack_78,1);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_3 & 0xffffffff | 0x100000000,auStack_e8);
  func_0x000107c27b3c(auStack_e8);
  func_0x000107c27914(&uStack_70);
  func_0x000108789818();
  func_0x000107c27914(&uStack_120);
  func_0x00010878976c(*(undefined8 *)(unaff_x20 + 8));
  (**(code **)(extraout_x8_00 + 0x38))();
  puVar1 = auStack_b8;
  func_0x000107c31424();
  func_0x0001087895c4(uStack_58);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_e8);
  func_0x000107c27914(&uStack_70);
  func_0x000108789818();
  func_0x000107c27914(&uStack_120);
  func_0x000107c31424(auStack_b8);
  func_0x000108789438();
  func_0x000107c3344c();
  func_0x000108789504((uint)unaff_x19 & 0xbf);
  func_0x00010878966c();
  func_0x000108789354();
  return unaff_x19;
}



/* Entry: 108786eb8; end: 108786f07;  */

undefined8 FUN_108786eb8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c3344c(param_1,PTR_DAT_113268c50);
  func_0x000108789504((uint)param_2 & 0xbf);
  func_0x00010878966c();
  func_0x000108789354();
  return param_2;
}



/* Entry: 108786f08; end: 108786f57;  */

undefined8 FUN_108786f08(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c3344c(param_1,PTR_DAT_113268da8);
  func_0x000108789504((uint)param_2 & 399);
  func_0x00010878966c();
  func_0x000108789354();
  return param_2;
}



/* Entry: 108786f58; end: 108786f83;  */

long FUN_108786f58(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_108788c78(param_1);
  }
  return param_1;
}



/* Entry: 108786f84; end: 108786fdb;  */

undefined8 * FUN_108786f84(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x14);
    puVar2 = param_1;
    __ZSt19uncaught_exceptionsv();
    if (iVar1 == (int)puVar2) {
      func_0x000108788934(*param_1,*(undefined8 *)(param_1[1] + 8));
    }
    else {
      func_0x000108788934(*param_1,*(undefined8 *)(param_1[1] + 8));
    }
  }
  return param_1;
}



/* Entry: 108786fdc; end: 10878706f;  */

void FUN_108786fdc(long *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  func_0x000107c33448();
  uVar1 = *(undefined8 *)(*param_1 + 0x18);
  func_0x000107c3344c();
  func_0x000107c31420(auStack_70,uVar1,auStack_88);
  func_0x000107c33444();
  FUN_108865260(*unaff_x20);
  FUN_1088606d0(*unaff_x20);
  func_0x000107c31428(auStack_70);
  func_0x000107c31424(auStack_70);
  return;
}



/* Entry: 108787070; end: 1087870d7;  */

void FUN_108787070(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong unaff_x20;
  
  func_0x0001087898ac();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087896c0(unaff_x20 >> 0x10 & 0xffff);
  }
  func_0x000107c3344c();
  if (((uint)unaff_x20 & 0xffff) < 0x2b8) {
    func_0x000108789504();
  }
  func_0x000108789834();
  func_0x000108789354();
  return;
}



/* Entry: 1087870d8; end: 10878713f;  */

void FUN_1087870d8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong unaff_x20;
  
  func_0x0001087898ac();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087896c0(unaff_x20 >> 0x10 & 0xffff);
  }
  func_0x000107c3344c();
  if (((uint)unaff_x20 & 0xffff) < 0x2b8) {
    func_0x000108789504();
  }
  func_0x000108789834();
  func_0x000108789354();
  return;
}



/* Entry: 108787140; end: 1087871c7;  */

void FUN_108787140(undefined1 *param_1)

{
  long *plVar1;
  long lStack_2e0;
  undefined1 auStack_2d8 [672];
  char cStack_38;
  
  func_0x000107c2986c(&lStack_2e0);
  func_0x000107c33454();
  if (cStack_38 == '\x01') {
    func_0x000107c3345c();
    if (lStack_2e0 != 0) {
      plVar1 = &lStack_2e0;
      FUN_108788f54(plVar1);
      FUN_108789040(param_1,plVar1);
      goto LAB_1087871a4;
    }
  }
  else {
    func_0x000107c3345c();
  }
  *param_1 = 0;
  param_1[0x2a0] = 0;
LAB_1087871a4:
  func_0x000107c29854(auStack_2d8);
  return;
}



/* Entry: 1087871c8; end: 1087871cf;  */

undefined8 * FUN_1087871c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6f390;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 1087871d0; end: 1087871e3;  */

void FUN_1087871d0(void)

{
  func_0x0001087886cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087871e4; end: 10878726b;  */

void FUN_1087871e4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108789900();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10878726c; end: 108787277;  */

void FUN_10878726c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  
  uVar1 = 0;
  lVar2 = param_2;
  func_0x000108907674();
  *(undefined8 *)(param_1 + 8) = uVar1;
  *unaff_x19 = &PTR_FUN_110a90530;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c();
  unaff_x19[2] = param_2;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return;
}



/* Entry: 108787278; end: 1087872c3;  */

undefined1 * FUN_108787278(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10878726c(param_1);
    param_1[0x20] = 1;
  }
  return param_1;
}



/* Entry: 1087872c4; end: 10878732b;  */

void FUN_1087872c4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  
  func_0x0001087895d8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  puVar1 = (undefined8 *)*unaff_x20;
  while (puVar1 != unaff_x20 + 1) {
    FUN_108721d14();
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 10878732c; end: 10878733f;  */

void FUN_10878732c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107c33448();
  lVar5 = *plVar4;
  lVar3 = plVar4[1];
  lVar6 = *(long *)(param_2 + 8) + ((lVar3 - lVar5) / -0x160) * 0x160;
  for (lVar7 = 0; lVar1 = lVar5 + lVar7, lVar1 != lVar3; lVar7 = lVar7 + 0x160) {
    lVar2 = lVar6 + lVar7;
    FUN_108787490(lVar2,lVar1);
    *(undefined1 *)(lVar2 + 0x120) = *(undefined1 *)(lVar1 + 0x120);
    FUN_108781a74(lVar2 + 0x128,lVar1 + 0x128);
    *(undefined4 *)(lVar2 + 0x158) = *(undefined4 *)(lVar1 + 0x158);
  }
  for (; lVar5 != lVar3; lVar5 = lVar5 + 0x160) {
    FUN_1086d04b8(lVar5);
  }
  unaff_x19[1] = lVar6;
  lVar7 = *unaff_x20;
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar7;
  unaff_x19[1] = lVar7;
  lVar7 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar7;
  lVar7 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar7;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108787340; end: 10878741f;  */

void FUN_108787340(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c33448();
  lVar4 = *param_1;
  lVar3 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar3 - lVar4) / -0x160) * 0x160;
  for (lVar6 = 0; lVar1 = lVar4 + lVar6, lVar1 != lVar3; lVar6 = lVar6 + 0x160) {
    lVar2 = lVar5 + lVar6;
    FUN_108787490(lVar2,lVar1);
    *(undefined1 *)(lVar2 + 0x120) = *(undefined1 *)(lVar1 + 0x120);
    FUN_108781a74(lVar2 + 0x128,lVar1 + 0x128);
    *(undefined4 *)(lVar2 + 0x158) = *(undefined4 *)(lVar1 + 0x158);
  }
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x160) {
    FUN_1086d04b8(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar6 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar6;
  unaff_x19[1] = lVar6;
  lVar6 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar6;
  lVar6 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar6;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108787420; end: 10878748f;  */

void FUN_108787420(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001087895d8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar1 = 0;
  }
  else {
    if (0xba2e8ba2e8ba2e < unaff_x20) {
      func_0x000104bd35f4();
      func_0x000107c33448();
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      uVar3 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar3;
      param_1[5] = param_2[5];
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      FUN_108636ab8(param_1 + 7,param_2 + 7);
      func_0x000107c27b7c(unaff_x20 + 0x58,unaff_x19 + 0xb);
      lVar2 = unaff_x19[0x10];
      lVar1 = unaff_x19[0xf];
      *(long *)(unaff_x20 + 0x88) = unaff_x19[0x11];
      *(long *)(unaff_x20 + 0x80) = lVar2;
      *(long *)(unaff_x20 + 0x78) = lVar1;
      func_0x000108636ae4(unaff_x20 + 0x90,unaff_x19 + 0x12);
      _memcpy(unaff_x20 + 0xb8,unaff_x19 + 0x17,0x61);
      return;
    }
    lVar1 = unaff_x20 * 0x160;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x160;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x160;
  return;
}



/* Entry: 108787490; end: 108787577;  */

void FUN_108787490(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c33448();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_108636ab8(param_1 + 7,param_2 + 7);
  func_0x000107c27b7c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  func_0x000108636ae4(unaff_x20 + 0x90,unaff_x19 + 0x90);
  _memcpy(unaff_x20 + 0xb8,unaff_x19 + 0xb8,0x61);
  return;
}



/* Entry: 108787578; end: 108787bf3;  */

void FUN_108787578(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong extraout_x8;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_158 [216];
  ulong uStack_80;
  
  do {
    plVar11 = param_1;
LAB_1087875bc:
    while( true ) {
      param_1 = plVar11;
      uVar19 = (long)param_2 - (long)param_1 >> 3;
      bVar5 = 4 < uVar19;
      switch(uVar19) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x000108789370(*param_1,param_2[-1]);
        if (bVar5) {
          return;
        }
        FUN_108787eec();
        return;
      case 3:
        func_0x00010878963c(param_1,param_1 + 1);
        return;
      case 4:
        func_0x000108787c7c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
        return;
      case 5:
        func_0x000108787ce4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
        return;
      }
      if ((long)uVar19 < 0x18) {
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while( true ) {
            plVar11 = param_1;
            param_1 = plVar11 + 1;
            bVar5 = param_2 <= param_1;
            if (param_1 == param_2) break;
            func_0x000108789700(*plVar11);
            if (!bVar5) {
              func_0x0001087895bc();
              lVar13 = *plVar11;
              lVar7 = 8;
              do {
                func_0x000107c2895c(*(undefined8 *)((long)plVar11 + lVar7),lVar13);
                lVar13 = ((undefined8 *)((long)plVar11 + lVar7))[-2];
                lVar7 = lVar7 + -8;
              } while (uStack_80 < *(ulong *)(lVar13 + 0x60));
              func_0x000108789598(*(undefined8 *)((long)plVar11 + lVar7));
              func_0x00010878953c();
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        lVar13 = 0;
        plVar11 = param_1;
        goto LAB_1087878cc;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar15 = uVar19 - 2 >> 1;
        uVar17 = uVar15;
        goto LAB_108787958;
      }
      plVar11 = param_1 + (uVar19 >> 1);
      uVar6 = 0x80 < uVar19;
      if ((bool)uVar6) {
        func_0x00010878963c(param_1,plVar11);
        FUN_108787bf4(param_1 + 1,plVar11 + -1,param_2 + -2);
        FUN_108787bf4(param_1 + 2,plVar11 + 1,param_2 + -3);
        FUN_108787bf4(plVar11 + -1,plVar11,plVar11 + 1);
        FUN_108787eec(*param_1,*plVar11);
      }
      else {
        func_0x00010878963c(plVar11,param_1);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) || (func_0x0001087896f0(param_1[-1]), !(bool)uVar6)) break;
      func_0x0001087895bc();
      func_0x000108789760(uStack_80);
      plVar11 = param_1;
      if ((bool)uVar6) {
        do {
          plVar11 = plVar11 + 1;
          if (param_2 <= plVar11) break;
        } while (*(ulong *)(*plVar11 + 0x60) <= extraout_x8);
      }
      else {
        bVar5 = false;
        do {
          bVar2 = bVar5;
          plVar11 = plVar11 + 1;
          func_0x000108789760();
          bVar5 = true;
        } while (bVar2);
      }
      uVar6 = param_2 <= plVar11;
      plVar8 = param_2;
      while (!(bool)uVar6) {
        plVar8 = plVar8 + -1;
        func_0x000108789760();
      }
      while (uVar6 = plVar8 <= plVar11, !(bool)uVar6) {
        FUN_108787eec(*plVar11,*plVar8);
        do {
          uVar3 = uVar6;
          plVar11 = plVar11 + 1;
          func_0x000108789760();
          uVar4 = 0;
          uVar6 = 1;
        } while ((bool)uVar3);
        do {
          plVar8 = plVar8 + -1;
          func_0x000108789760();
        } while (!(bool)uVar4);
      }
      plVar8 = plVar11 + -1;
      if (param_1 != plVar8) {
        func_0x000107c2895c(*param_1,*plVar8);
      }
      func_0x000108789598(*plVar8);
      func_0x00010878953c();
      param_4 = 0;
    }
    func_0x0001087895bc();
    lVar13 = 0;
    do {
      lVar7 = *(long *)((long)param_1 + lVar13 + 8);
      lVar13 = lVar13 + 8;
    } while (*(ulong *)(lVar7 + 0x60) < uStack_80);
    plVar8 = (long *)((long)param_1 + lVar13);
    plVar14 = param_2;
    plVar11 = plVar8;
    if (lVar13 == 8) {
      do {
        plVar9 = plVar14;
        if (plVar14 <= plVar8) break;
        plVar14 = plVar14 + -1;
        plVar9 = plVar14;
      } while (uStack_80 <= *(ulong *)(*plVar14 + 0x60));
    }
    else {
      do {
        plVar14 = plVar14 + -1;
        plVar9 = plVar14;
      } while (uStack_80 <= *(ulong *)(*plVar14 + 0x60));
    }
    while (plVar11 < plVar14) {
      FUN_108787eec(lVar7,*plVar14);
      do {
        plVar11 = plVar11 + 1;
        lVar7 = *plVar11;
      } while (*(ulong *)(lVar7 + 0x60) < uStack_80);
      do {
        plVar14 = plVar14 + -1;
      } while (uStack_80 <= *(ulong *)(*plVar14 + 0x60));
    }
    plVar14 = plVar11 + -1;
    if (param_1 != plVar14) {
      func_0x000107c2895c(*param_1,*plVar14);
    }
    func_0x000108789598(*plVar14);
    func_0x00010878953c();
    if (plVar8 < plVar9) goto LAB_108787754;
    plVar8 = param_1;
    func_0x000108787d74(param_1,plVar14);
    plVar9 = plVar11;
    func_0x000108787d74(plVar11,param_2);
    if ((int)plVar9 == 0) goto code_r0x000108787750;
    param_2 = plVar14;
    if (((ulong)plVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1087878cc:
  plVar8 = plVar11 + 1;
  bVar5 = param_2 <= plVar8;
  if (plVar8 == param_2) {
    return;
  }
  func_0x000108789700(*plVar11);
  if (!bVar5) {
    func_0x0001087895bc();
    lVar10 = *plVar11;
    lVar7 = lVar13;
    do {
      lVar16 = lVar7;
      func_0x000107c2895c(*(undefined8 *)((long)param_1 + lVar16 + 8),lVar10);
      plVar11 = param_1;
      if (lVar16 == 0) goto LAB_108787928;
      lVar10 = *(long *)((long)param_1 + lVar16 + -8);
      lVar7 = lVar16 + -8;
    } while (uStack_80 < *(ulong *)(lVar10 + 0x60));
    plVar11 = (long *)((long)param_1 + lVar16);
LAB_108787928:
    func_0x000108789598(*plVar11);
    func_0x00010878953c();
  }
  lVar13 = lVar13 + 8;
  plVar11 = plVar8;
  goto LAB_1087878cc;
LAB_108787958:
  do {
    if ((long)uVar17 <= (long)uVar15) {
      uVar18 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
      plVar11 = param_1 + uVar18;
      uVar1 = uVar17 * 2 + 2;
      lVar7 = *plVar11;
      bVar5 = uVar19 <= uVar1;
      lVar13 = lVar7;
      plVar8 = plVar11;
      uVar12 = uVar18;
      if ((long)uVar1 < (long)uVar19) {
        lVar13 = plVar11[1];
        bVar5 = *(ulong *)(lVar13 + 0x60) <= *(ulong *)(lVar7 + 0x60);
        plVar8 = plVar11 + 1;
        uVar12 = uVar1;
        if (bVar5) {
          lVar13 = lVar7;
          plVar8 = plVar11;
          uVar12 = uVar18;
        }
      }
      func_0x0001087896f0(lVar13);
      if (bVar5) {
        func_0x0001087895bc();
        lVar13 = *plVar8;
        plVar11 = param_1 + uVar17;
        do {
          plVar14 = plVar8;
          func_0x000107c2895c(*plVar11,lVar13);
          if ((long)uVar15 < (long)uVar12) break;
          uVar18 = uVar12 << 1 | 1;
          plVar11 = param_1 + uVar18;
          uVar1 = uVar12 * 2 + 2;
          lVar7 = *plVar11;
          lVar13 = lVar7;
          uVar12 = uVar18;
          plVar8 = plVar11;
          if ((long)uVar1 < (long)uVar19) {
            lVar13 = plVar11[1];
            uVar12 = uVar1;
            plVar8 = plVar11 + 1;
            if (*(ulong *)(lVar13 + 0x60) <= *(ulong *)(lVar7 + 0x60)) {
              lVar13 = lVar7;
              uVar12 = uVar18;
              plVar8 = plVar11;
            }
          }
          plVar11 = plVar14;
        } while (uStack_80 <= *(ulong *)(lVar13 + 0x60));
        func_0x000108789598(*plVar14);
        func_0x00010878953c();
      }
    }
    uVar17 = uVar17 - 1;
  } while (-1 < (long)uVar17);
  do {
    if ((long)uVar19 < 2) {
      return;
    }
    func_0x000107c28974(auStack_158,*param_1);
    plVar11 = param_1;
    uVar17 = 0;
    do {
      plVar14 = plVar11 + uVar17 + 1;
      lVar7 = *plVar14;
      uVar1 = uVar17 << 1 | 1;
      uVar15 = uVar17 * 2 + 2;
      lVar13 = lVar7;
      plVar8 = plVar14;
      uVar18 = uVar1;
      if ((long)uVar15 < (long)uVar19) {
        lVar13 = plVar11[uVar17 + 2];
        plVar8 = plVar11 + uVar17 + 2;
        uVar18 = uVar15;
        if (*(ulong *)(lVar13 + 0x60) <= *(ulong *)(lVar7 + 0x60)) {
          lVar13 = lVar7;
          plVar8 = plVar14;
          uVar18 = uVar1;
        }
      }
      func_0x000107c2895c(*plVar11,lVar13);
      plVar11 = plVar8;
      uVar17 = uVar18;
    } while ((long)uVar18 <= (long)(uVar19 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar8 == param_2) {
      func_0x000108789840(*plVar8);
    }
    else {
      func_0x000107c2895c(*plVar8,*param_2);
      func_0x000108789840(*param_2);
      uVar17 = (long)plVar8 + (8 - (long)param_1) >> 3;
      bVar5 = 1 < uVar17;
      if (1 < (long)uVar17) {
        uVar17 = uVar17 - 2 >> 1;
        plVar11 = param_1 + uVar17;
        func_0x0001087896f0(*plVar11);
        if (!bVar5) {
          func_0x0001087895bc();
          lVar13 = *plVar11;
          do {
            plVar14 = plVar11;
            func_0x000107c2895c(*plVar8,lVar13);
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            lVar13 = param_1[uVar17];
            plVar8 = plVar14;
            plVar11 = param_1 + uVar17;
          } while (*(ulong *)(lVar13 + 0x60) < uStack_80);
          func_0x000108789598(*plVar14);
          func_0x00010878953c();
        }
      }
    }
    func_0x000107c2a5a4(auStack_158);
    uVar19 = uVar19 - 1;
  } while( true );
code_r0x000108787750:
  if (((ulong)plVar8 & 1) == 0) {
LAB_108787754:
    FUN_108787578(param_1,plVar14,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_1087875bc;
}



/* Entry: 108787bf4; end: 108787ce3;  */

undefined1  [16] FUN_108787bf4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar6 = *param_2;
  plVar2 = (long *)*param_1;
  uVar7 = *(ulong *)(lVar6 + 0x60);
  plVar4 = (long *)*param_3;
  if (uVar7 < (ulong)plVar2[0xc]) {
    uVar1 = uVar7 <= (ulong)plVar4[0xc];
    if (!(bool)uVar1) goto LAB_108787c6c;
    FUN_108787eec(plVar2,lVar6);
    plVar4 = (long *)*param_3;
    plVar2 = (long *)*param_2;
  }
  else {
    uVar1 = uVar7 <= (ulong)plVar4[0xc];
    if ((bool)uVar1) goto LAB_108787c74;
    FUN_108787eec(lVar6);
    plVar4 = (long *)*param_2;
    plVar2 = (long *)*param_1;
  }
  func_0x000108789370();
  if ((bool)uVar1) {
LAB_108787c74:
    auVar11._8_8_ = plVar4;
    auVar11._0_8_ = plVar2;
    return auVar11;
  }
LAB_108787c6c:
  if (plVar4 == plVar2) {
    auVar10._8_8_ = plVar4;
    auVar10._0_8_ = plVar2;
    return auVar10;
  }
  uVar7 = plVar2[1];
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  uVar8 = plVar4[1];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (uVar7 != uVar8) {
    plVar3 = plVar2;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar3 + 0x20))();
    (**(code **)(*plVar2 + 0x18))(plVar2);
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3);
    auVar12._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar12._0_8_ = plVar3;
    return auVar12;
  }
  func_0x00010068e0c4();
  plVar3 = plVar2 + 0xc;
  plVar5 = plVar4;
  for (; plVar2 != plVar3; plVar2 = (long *)((long)plVar2 + 1)) {
    lVar6 = *plVar2;
    *(char *)plVar2 = (char)*plVar5;
    *(char *)plVar5 = (char)lVar6;
    plVar4 = (long *)((long)plVar4 + 1);
    plVar5 = (long *)((long)plVar5 + 1);
  }
  auVar9._8_8_ = plVar4;
  auVar9._0_8_ = plVar3;
  return auVar9;
}



/* Entry: 108787ce4; end: 108787eeb;  */

undefined1  [16]
FUN_108787ce4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  undefined1 in_CY;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  func_0x0001087895d8();
  func_0x000108787c7c();
  plVar4 = (long *)*param_5;
  plVar2 = (long *)*param_4;
  func_0x000108789370(plVar2,plVar4);
  if (!(bool)in_CY) {
    FUN_108787eec();
    plVar4 = (long *)*param_4;
    plVar2 = (long *)*param_3;
    func_0x000108789370(plVar2,plVar4);
    if (!(bool)in_CY) {
      FUN_108787eec();
      plVar4 = (long *)*param_3;
      plVar2 = (long *)*unaff_x20;
      func_0x000108789370(plVar2,plVar4);
      if (!(bool)in_CY) {
        FUN_108787eec();
        plVar4 = (long *)*unaff_x20;
        plVar2 = (long *)*unaff_x19;
        func_0x000108789370();
        if (!(bool)in_CY) {
          if (plVar4 == plVar2) {
            auVar9._8_8_ = plVar4;
            auVar9._0_8_ = plVar2;
            return auVar9;
          }
          uVar6 = plVar2[1];
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          uVar7 = plVar4[1];
          if ((uVar7 & 1) != 0) {
            uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
          }
          if (uVar6 != uVar7) {
            plVar3 = plVar2;
            func_0x00010b4cf4b4();
            (**(code **)(*plVar3 + 0x20))();
            (**(code **)(*plVar2 + 0x18))(plVar2);
            (**(code **)(*plVar2 + 0x20))(plVar2,plVar4);
            (**(code **)(*plVar4 + 0x18))(plVar4);
            (**(code **)(*plVar4 + 0x20))(plVar4,plVar3);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar3);
            auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
            auVar11._0_8_ = plVar3;
            return auVar11;
          }
          func_0x00010068e0c4();
          plVar3 = plVar2 + 0xc;
          plVar5 = plVar4;
          for (; plVar2 != plVar3; plVar2 = (long *)((long)plVar2 + 1)) {
            lVar1 = *plVar2;
            *(char *)plVar2 = (char)*plVar5;
            *(char *)plVar5 = (char)lVar1;
            plVar4 = (long *)((long)plVar4 + 1);
            plVar5 = (long *)((long)plVar5 + 1);
          }
          auVar8._8_8_ = plVar4;
          auVar8._0_8_ = plVar3;
          return auVar8;
        }
      }
    }
  }
  auVar10._8_8_ = plVar4;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 108787eec; end: 108787f27;  */

undefined1  [16] FUN_108787eec(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 == param_1) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  uVar4 = param_1[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar5 = param_2[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (uVar4 != uVar5) {
    plVar2 = param_1;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar2 + 0x20))();
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2,plVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2);
    auVar8._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar8._0_8_ = plVar2;
    return auVar8;
  }
  func_0x00010068e0c4();
  plVar2 = param_1 + 0xc;
  plVar3 = param_2;
  for (; param_1 != plVar2; param_1 = (long *)((long)param_1 + 1)) {
    lVar1 = *param_1;
    *(char *)param_1 = (char)*plVar3;
    *(char *)plVar3 = (char)lVar1;
    param_2 = (long *)((long)param_2 + 1);
    plVar3 = (long *)((long)plVar3 + 1);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 108787f28; end: 108787f43;  */

void FUN_108787f28(long param_1)

{
  FUN_108787f70();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 108787f44; end: 108787f6f;  */

long FUN_108787f44(long param_1)

{
  func_0x000107c2a5a4(param_1 + 0x38);
  FUN_10891b058(param_1 + 8);
  return param_1;
}



/* Entry: 108787f70; end: 108787fcf;  */

void FUN_108787f70(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001087895d8();
  *param_1 = *param_2;
  FUN_108787fd0(param_1 + 1,param_2 + 1);
  func_0x000107c287dc(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  return;
}



/* Entry: 108787fd0; end: 108787fdb;  */

void FUN_108787fd0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c(param_1,0,param_2);
  func_0x000107c34a44(&PTR_FUN_110a96270);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x0001089234c4();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088f38e0();
  }
  func_0x000108924f6c();
  return;
}



/* Entry: 108787fdc; end: 108788117;  */

undefined8
FUN_108787fdc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined4 *param_7,undefined1 *param_8,
             undefined1 *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uStack_68 = *(undefined4 *)(param_4 + 3);
  uVar2 = *param_5;
  func_0x0001086d0520(auStack_b0,param_6);
  FUN_108843ba4(param_1,&uStack_60,uVar1,&uStack_80,uVar2,auStack_b0,*param_7,*param_8,*param_9);
  func_0x0001086cf230(auStack_b0);
  func_0x000107c27914(&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  return param_1;
}



/* Entry: 108788118; end: 10878814b;  */

undefined1 * FUN_108788118(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xc0] = 0;
  FUN_10878814c();
  return param_1;
}



/* Entry: 10878814c; end: 10878815f;  */

void FUN_10878814c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_108787f70();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 108788160; end: 10878817f;  */

void FUN_108788160(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_108787f44();
  }
  return;
}



/* Entry: 108788180; end: 1087881a3;  */

undefined8 FUN_108788180(undefined8 param_1)

{
  FUN_1087881a4();
  return param_1;
}



/* Entry: 1087881a4; end: 1087881cb;  */

void FUN_1087881a4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 != *(char *)(param_2 + 0x68)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x68) == '\x01') {
        FUN_1086cc6f0();
        *(undefined1 *)(param_1 + 0x68) = 0;
      }
      return;
    }
    func_0x0001087883ac();
    *(undefined1 *)(param_1 + 0x68) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c33448();
    func_0x000107c3194c();
    FUN_108748210(unaff_x20 + 0x18,unaff_x19 + 0x18);
    FUN_10878824c(unaff_x20 + 0x30,unaff_x19 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
    return;
  }
  return;
}



/* Entry: 1087881cc; end: 10878820b;  */

void FUN_1087881cc(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c33448();
  func_0x000107c3194c();
  FUN_108748210(unaff_x20 + 0x18,unaff_x19 + 0x18);
  FUN_10878824c(unaff_x20 + 0x30,unaff_x19 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  return;
}



/* Entry: 10878820c; end: 10878824b;  */

void FUN_10878820c(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1086cc6f0();
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



/* Entry: 10878824c; end: 10878826f;  */

undefined8 FUN_10878824c(undefined8 param_1)

{
  FUN_108788270();
  return param_1;
}



/* Entry: 108788270; end: 108788297;  */

long FUN_108788270(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 == '\0') {
      FUN_10878835c();
      *(undefined1 *)(param_1 + 0x20) = 1;
      return param_1;
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      FUN_108906338();
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    return param_1;
  }
  if (cVar1 == '\0') {
    return param_1;
  }
  if (param_1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    uVar6 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar4 == uVar6) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar3;
      *(ulong *)(param_2 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
    }
    else {
      FUN_108906494(param_1);
    }
  }
  return param_1;
}



/* Entry: 108788298; end: 10878831b;  */

long FUN_108788298(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    uVar5 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_2 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
    }
    else {
      FUN_108906494(param_1);
    }
  }
  return param_1;
}



/* Entry: 10878831c; end: 10878835b;  */

void FUN_10878831c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108906338();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10878835c; end: 108788367;  */

undefined8 * FUN_10878835c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90530;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_108788298(param_1,param_2);
  return param_1;
}



/* Entry: 108788368; end: 108788407;  */

undefined8 * FUN_108788368(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a90530;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_108788298(param_1,param_3);
  return param_1;
}



/* Entry: 108788408; end: 108788433;  */

undefined1 * FUN_108788408(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_108788434();
  return param_1;
}



/* Entry: 108788434; end: 108788447;  */

void FUN_108788434(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10878835c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 108788448; end: 10878854f;  */

long FUN_108788448(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000108788478(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 108788550; end: 108788557;  */

void FUN_108788550(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c33448(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xf8;
    func_0x00010878858c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108788558; end: 1087885c3;  */

void FUN_108788558(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c33448();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xf8;
    func_0x00010878858c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087885c4; end: 1087885f7;  */

bool FUN_1087885c4(long param_1,long param_2)

{
  func_0x00010869af60(param_1,param_2 + 0x18);
  return param_1 != 0;
}



/* Entry: 1087885f8; end: 108788617;  */

undefined4 FUN_1087885f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 108788618; end: 10878872f;  */

undefined8 * FUN_108788618(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6f390;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 108788730; end: 10878890b;  */

void FUN_108788730(long param_1)

{
  undefined ***pppuVar1;
  undefined **extraout_x8;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(char *)(*plVar2 + 0x20) == '\x01') {
    lVar3 = plVar2[3];
    if (*(char *)plVar2[1] == '\x01') {
      uStack_70 = 0;
      uStack_68 = 0;
      ppuStack_80 = &PTR_FUN_110a609a8;
      uStack_78 = 0;
      uStack_60 = 0x9a;
      func_0x000107c3344c(param_1,&UNK_10f4ba5af);
      FUN_108789eec(lVar3);
      pppuVar1 = &ppuStack_80;
      func_0x000107c28818(pppuVar1,auStack_98,lVar3);
      func_0x000107c2884c(auStack_58,pppuVar1);
      func_0x00010878951c();
      func_0x000108789430();
    }
    else {
      if ((char)((uint *)plVar2[4])[1] == '\x01') {
        uVar4 = *(uint *)plVar2[4];
      }
      else {
        uVar4 = 0x78025e;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x00010878930c();
      uStack_78 = 0;
      uStack_60 = 0x99;
      ppuStack_80 = extraout_x8;
      if (uVar4 >> 0x11 < 0x47) {
        func_0x0001087896c0(uVar4 >> 0x10);
      }
      func_0x000107c278b8(auStack_58);
      if ((uVar4 & 0xffff) < 0x2b8) {
        func_0x000108789504();
      }
      pppuVar1 = &ppuStack_80;
      func_0x000107c28824(pppuVar1,auStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      func_0x000107c3344c();
      FUN_108789eec(lVar3);
      func_0x000107c28818(pppuVar1,auStack_98,lVar3);
      func_0x000107c2884c(auStack_58,pppuVar1);
      func_0x00010878951c();
      func_0x000108789430();
    }
    func_0x000107c2882c(auStack_58);
    func_0x000107c33444();
    func_0x000107c2882c(&ppuStack_80);
  }
  return;
}



/* Entry: 10878890c; end: 108788947;  */

void FUN_10878890c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108788948; end: 10878895b;  */

void FUN_108788948(void)

{
  func_0x000108788b18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878895c; end: 108788a13;  */

void FUN_10878895c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108788964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


