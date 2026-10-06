/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107853740; end: 10785376f;  */

void FUN_107853740(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e2b20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1078540d4; end: 107854173;  */

long * FUN_1078540d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107854118(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1078543d0; end: 1078543fb;  */

void FUN_1078543d0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078545d8(param_2,param_1,&PTR_DAT_1109e2c00);
  func_0x00010785458c();
  return;
}



/* Entry: 1078547fc; end: 10785481f;  */

void FUN_1078547fc(void)

{
  func_0x000107854820();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 107854cec; end: 107854d0b;  */

void FUN_107854cec(void)

{
  func_0x000107855094();
  func_0x000107853040();
  return;
}



/* Entry: 10785504c; end: 10785506b;  */

void FUN_10785504c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107855024();
  }
  return;
}



/* Entry: 107855548; end: 10785559b;  */

undefined8 FUN_107855548(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107855570(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107855b10; end: 107855b1b;  */

undefined ** FUN_107855b10(void)

{
  return &PTR_DAT_1109e2dd0;
}



/* Entry: 1078564e8; end: 1078564eb;  */

undefined8 * FUN_1078564e8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109e2e10;
  plVar1 = param_1 + 0x1e;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001074f8ec0(param_1 + 1);
  return param_1;
}



/* Entry: 1078565d0; end: 1078565e3;  */

void FUN_1078565d0(void)

{
  func_0x0001078565a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078567e4; end: 1078568bf;  */

void FUN_1078567e4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10785685c;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10785685c:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107856a9c; end: 107856aa7;  */

undefined ** FUN_107856a9c(void)

{
  return &PTR_DAT_1109e2f90;
}



/* Entry: 107856ca0; end: 107856e7f;  */

void FUN_107856ca0(undefined1 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined3 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 uStack_110;
  ulong uStack_100;
  long lStack_f8;
  char cStack_f0;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  uint5 auStack_d0 [3];
  long lStack_b8;
  int iStack_90;
  ulong uStack_88;
  long lStack_80;
  int iStack_40;
  
  iVar7 = (int)param_2 + 8;
  (**(code **)(*param_2 + 0x30))();
  if (iVar7 == 0) {
    uStack_d8 = 3;
    func_0x0001072f6b34(auStack_d0 + 2,auStack_e0,1);
    func_0x0001072c9884(auStack_e0);
    uVar4 = SUB83((undefined8)auStack_d0[0],5);
    uVar5 = (uint)(undefined8)auStack_d0[0];
    auStack_d0[0] = (uint5)(uVar5 & 0xffffff00);
    auStack_d0[0]._0_8_ = CONCAT35(uVar4,auStack_d0[0]);
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    uStack_110 = 0;
    func_0x000107771274(&uStack_100,auStack_d0 + 2,param_2,param_3,auStack_d0,&uStack_130);
    func_0x0001072c94e0(&uStack_130);
    if (cStack_f0 == '\x01') {
      lStack_128 = lStack_f8;
      uStack_130 = uStack_100;
      uStack_100 = 0;
      lStack_f8 = 0;
      uStack_120 = 0;
      lStack_118 = 0;
      func_0x000107857218();
      func_0x000107338e24(&uStack_130);
      func_0x0001072c95d0(&uStack_100);
      func_0x000107857204();
    }
    else {
      func_0x0001072c95d0(&uStack_100);
      func_0x000107857204();
      *param_1 = 0;
      param_1[0x20] = 0;
    }
    return;
  }
  func_0x0001077d9514(auStack_d0 + 2,param_2,param_3);
  if (iStack_40 == 2) {
    uStack_100 = uStack_88;
    lStack_f8 = lStack_80;
    if (lStack_80 != 0) {
      plVar1 = (long *)(lStack_80 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iStack_90 == 2) {
      if (lStack_b8 != 0) {
        plVar1 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_130 = uStack_88;
      uStack_100 = 0;
      lStack_f8 = 0;
      lStack_118 = lStack_b8;
      uStack_120 = (undefined8)auStack_d0[2];
      auStack_d0[0]._0_8_ = 0;
      auStack_d0[1]._0_8_ = 0;
      func_0x000107857218();
      func_0x000107338e24(&uStack_130);
      func_0x000107266acc(auStack_d0);
      func_0x000107266acc(&uStack_100);
      FUN_1077d9784(auStack_d0 + 2);
      return;
    }
    func_0x00010563ab98();
  }
  else {
    func_0x00010563ab98();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x107856e38);
  (*pcVar6)();
}



/* Entry: 1078570c4; end: 10785715f;  */

/* WARNING: Possible PIC construction at 0x0001078570f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078570f8) */
/* WARNING: Removing unreachable block (ram,0x000107857158) */
/* WARNING: Removing unreachable block (ram,0x000107857148) */

undefined1 * FUN_1078570c4(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 1;
  func_0x00010785718c();
  return auStack_40;
}



/* Entry: 1078573d8; end: 1078573db;  */

undefined8 * FUN_1078573d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3080;
  func_0x000107276ba4(param_1 + 0x1e);
  FUN_107858e68(param_1 + 0x1b);
  func_0x000107858ecc(param_1 + 0x18);
  func_0x0001074f55d0(param_1 + 0x14);
  func_0x000107858f30(param_1 + 0xb);
  func_0x0001078597ec(param_1 + 10);
  func_0x000107859728(param_1 + 5);
  func_0x0001074f5344(param_1 + 1);
  return param_1;
}



/* Entry: 1078576f4; end: 107857973;  */

/* WARNING: Possible PIC construction at 0x0001078577bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107857854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107857874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107857858) */
/* WARNING: Removing unreachable block (ram,0x0001078577c0) */
/* WARNING: Removing unreachable block (ram,0x000107857878) */

undefined1 *
FUN_1078576f4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  long *plVar19;
  undefined1 **unaff_x26;
  undefined8 *puVar20;
  undefined1 *unaff_x27;
  ulong uVar21;
  undefined8 *puVar22;
  undefined1 *unaff_x28;
  undefined8 *****pppppuVar23;
  undefined *puVar24;
  undefined1 auStack_560 [8];
  undefined1 *puStack_558;
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [112];
  long lStack_4b0;
  long lStack_4a8;
  ulong uStack_478;
  ulong uStack_470;
  long alStack_468 [5];
  undefined1 auStack_440 [56];
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  long lStack_3f0;
  long *plStack_3e8;
  undefined1 auStack_390 [56];
  byte bStack_358;
  undefined4 auStack_350 [2];
  undefined4 uStack_348;
  undefined4 uStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_248 [136];
  undefined8 uStack_1c0;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined8 ****ppppuStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [32];
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  ppuVar5 = &puStack_150;
  ppuVar10 = &puStack_150;
  func_0x0001078599bc();
  uVar6 = param_1[0x18] == '\x01';
  puVar11 = param_2;
  puVar12 = param_3;
  puVar14 = param_4;
  uStack_70 = extraout_x8;
  if ((bool)uVar6) {
    func_0x00010745f750(auStack_120,param_3);
    unaff_x28 = *(undefined1 **)(param_1 + 0xd8);
    uStack_128 = *(undefined8 *)(param_1 + 0xe8);
    unaff_x25 = *(undefined1 **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    unaff_x26 = &puStack_e8;
    unaff_x27 = (undefined1 *)0x1;
    puVar18 = (undefined1 *)(((long)unaff_x25 - (long)unaff_x28) / 0x90);
    unaff_x20 = param_3;
    unaff_x21 = param_2;
    unaff_x22 = param_1;
    puStack_138 = unaff_x28;
    puStack_130 = unaff_x25;
    if (unaff_x28 == unaff_x25) {
      puStack_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      uStack_140 = 0;
      unaff_x24 = param_1 + 0xf0;
      unaff_x26 = (undefined1 **)0x1;
      uStack_e0 = 1;
      puStack_e8 = unaff_x24;
      func_0x000107279a5c(unaff_x24);
      puStack_148 = *(undefined1 **)(param_1 + 200);
      puStack_150 = *(undefined1 **)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      uStack_140 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      func_0x000107279ee0(&puStack_e8);
      unaff_x27 = puStack_148;
      puVar15 = puStack_150;
      uVar6 = puStack_150 == puStack_148;
      unaff_x25 = puVar15;
      if ((bool)uVar6) {
        func_0x000107858ecc(&puStack_150);
        func_0x000107858e68(&puStack_138);
        param_4 = auStack_120;
        func_0x00010726b264();
        goto LAB_1078578d0;
      }
      if (puStack_150 == puStack_148) {
        puVar24 = (undefined *)0x107857878;
        puVar14 = param_3;
        pppppuVar23 = (undefined8 *****)&stack0xfffffffffffffff0;
        goto code_r0x000107857e74;
      }
      puVar7 = auStack_108;
      puVar11 = param_4;
      func_0x0001073db558(puVar7,param_4);
      puStack_e8 = (undefined1 *)((ulong)puStack_e8 & 0xffffffffffffff00);
      uStack_98 = 0;
      puVar14 = auStack_120;
      param_5 = auStack_108;
      func_0x000107859ac0();
      puVar24 = (undefined *)0x107857858;
    }
    else {
      func_0x0001073db558(auStack_90,param_4);
      func_0x000104c2fe00(&puStack_e8,unaff_x28 + 0x40);
      puVar7 = auStack_b0;
      puVar11 = unaff_x28 + 0x78;
      func_0x000107428d48(puVar7,puVar11);
      uStack_98 = 1;
      puVar14 = auStack_120;
      param_5 = auStack_90;
      func_0x000107859ac0();
      puVar24 = (undefined *)0x1078577c0;
      puVar15 = unaff_x28;
      unaff_x24 = unaff_x28;
    }
  }
  else {
    puVar18 = (undefined1 *)0x0;
    param_4 = param_1;
LAB_1078578d0:
    puVar15 = param_6;
    func_0x00010785997c(uStack_70);
    if ((bool)uVar6) {
      return puVar18;
    }
    ___stack_chk_fail();
    func_0x000107858ecc(&puStack_150);
    func_0x000107858e68(&puStack_138);
    puVar7 = auStack_120;
    func_0x00010726b264();
    puVar24 = &SUB_107857974;
    func_0x0001078599cc();
  }
  pppppuVar23 = &ppppuStack_160;
  ppuVar5 = (undefined1 **)auStack_560;
  puVar16 = puVar15;
  puStack_558 = puVar12;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  ppuStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = puVar18;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = unaff_x20;
  puStack_168 = param_4;
  ppppuStack_160 = (undefined8 ****)&stack0xfffffffffffffff0;
  puStack_158 = puVar24;
  func_0x0001078599bc();
  auStack_350[0] = 0xfc;
  uStack_338 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  ppuStack_330 = &PTR_DAT_110996720;
  uStack_310 = 0xfc;
  uStack_308 = 0;
  uStack_304 = 1;
  uStack_2f0 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_1c0 = extraout_x8_00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_538,puVar16);
  puVar8 = auStack_350;
  func_0x00010726e300(puVar8,"trigger",auStack_538);
  func_0x00010726e6c0(auStack_520,puVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_538);
  func_0x000107262330(auStack_350);
  auStack_350[0] = 1;
  uStack_348 = 0;
  uStack_408 = **(ulong **)(puVar7 + 0x198);
  uStack_400 = CONCAT44(uStack_400._4_4_,3);
  func_0x00010743fa9c(*(ulong **)(puVar7 + 0x198),auStack_520,auStack_350,&uStack_408,7);
  func_0x0001078576b8(puVar7 + 8);
  func_0x0001078696e8(auStack_550);
  func_0x000107751334(auStack_350,puVar11);
  puStack_268 = puVar14;
  func_0x000107295f10(auStack_248,puVar15 + 0x30);
  if (*(char *)(param_7 + 0x50) == '\x01') {
    func_0x00010729807c(auStack_390,param_7);
  }
  else {
    auStack_390[0] = 0;
    bStack_358 = 0;
  }
  if (puVar15[0x28] == '\x01') {
    plVar19 = (long *)(puVar15 + 0x18);
    func_0x000107392e34();
    lStack_4b0 = *plVar19;
    lStack_4a8 = plVar19[1];
    lVar17 = lStack_4b0;
    if (lStack_4a8 != 0) {
      plVar1 = (long *)(lStack_4a8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar17 = *plVar19;
    }
    func_0x000104c2fe00(&uStack_478,*(long *)(lVar17 + 0x30) + 0x60);
    func_0x000107859a5c();
    func_0x000104c2fe00(auStack_440,extraout_x8_01 + 0x98);
    func_0x0001073c4f74(&uStack_408,&uStack_478);
    FUN_107751444(auStack_350,&lStack_4b0,&uStack_408);
    func_0x000107267e8c(&uStack_408);
    func_0x000107267eac(&uStack_478);
    func_0x000107267e44(&lStack_4b0);
    func_0x000107859a5c();
    if ((*(char *)(extraout_x8_02 + 0x160) == '\x01') &&
       (func_0x00010749fb50(param_5,extraout_x8_02 + 0x60), param_5 != (undefined1 *)0x0)) {
      func_0x000107859a5c();
      func_0x000104c2fe00(&uStack_478,extraout_x8_03 + 0x98);
      func_0x0001072627ac(&uStack_408,&uStack_478);
      func_0x000107859a5c();
      lVar17 = extraout_x8_04 + 0x128;
      func_0x00010725ffc4(lVar17);
      func_0x000104c2fe00(&lStack_4b0,lVar17);
      func_0x00010750a094(param_5,auStack_550,&uStack_408,&lStack_4b0);
      func_0x000104c2f714(&lStack_4b0);
      func_0x00010724b3d8(&uStack_408);
      func_0x000104c2f714(&uStack_478);
      puStack_270 = auStack_550;
    }
    if ((bStack_358 & 1) == 0) {
      func_0x000107859a5c();
      func_0x00010726594c(auStack_390,extraout_x8_05 + 0xe8);
    }
  }
  uVar6 = bStack_358 == 1;
  if ((bool)uVar6) {
    uStack_470 = 0;
    alStack_468[0] = 0;
    uStack_478 = 0;
    func_0x000107859a1c();
    puVar11 = puVar7 + 0xa0;
    puVar12 = auStack_390;
    func_0x000107859160();
    if ((puVar11 != (undefined1 *)0x0) && (*(long *)(*(long *)(puVar12 + 0x38) + 0x18) != 0)) {
      plVar19 = (long *)(*(long *)(puVar12 + 0x38) + 0x10);
      while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
        func_0x000107859228(&uStack_408,plVar19 + 2);
        func_0x000107859a1c();
        func_0x000104c2f714(&uStack_408);
      }
    }
    uVar6 = uStack_478 == uStack_470;
    if (!(bool)uVar6) {
      func_0x000107859a08(puVar7,auStack_390,&uStack_478);
    }
    func_0x000107859aa4();
  }
  else {
    lVar17 = **(long **)(puVar7 + 8);
    lVar13 = (*(long **)(puVar7 + 8))[1];
    func_0x000107859844();
    lStack_4b0 = lVar17;
    while (lStack_4a8 = lVar13, lStack_4b0 != 0) {
      lVar17 = lVar13 + 0x38;
      puVar11 = puVar15;
      func_0x000107859654();
      if (lVar17 != 0) {
        func_0x000104c2d614(lVar13);
        uStack_478 = 0;
        uStack_470 = 0;
        alStack_468[0] = 0;
        puVar20 = *(undefined8 **)(lVar17 + 0x28);
        puVar22 = *(undefined8 **)(lVar17 + 0x30);
        if ((long)puVar22 - (long)puVar20 != 0) {
          uVar9 = (long)puVar22 - (long)puVar20 >> 3;
          if (uVar9 >> 0x3d != 0) {
            FUN_10785938c();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x107857dac);
            (*pcVar4)();
          }
          plStack_3e8 = alStack_468;
          func_0x000107859398();
          uVar21 = uVar9 - (uStack_470 - uStack_478);
          _memcpy(uVar21);
          uStack_3f8 = uStack_478;
          lStack_3f0 = alStack_468[0];
          uStack_408 = uStack_478;
          uStack_400 = uStack_478;
          uStack_478 = uVar21;
          uStack_470 = uVar9;
          alStack_468[0] = uVar9 + (long)puVar11 * 8;
          func_0x0001078593cc(&uStack_408);
          puVar20 = *(undefined8 **)(lVar17 + 0x28);
          puVar22 = *(undefined8 **)(lVar17 + 0x30);
        }
        for (; uVar6 = puVar20 == puVar22, !(bool)uVar6; puVar20 = puVar20 + 1) {
          func_0x000107859244(&uStack_478,*puVar20);
        }
        func_0x000107859a08(puVar7,lVar13,&uStack_478);
        func_0x000107859aa4();
      }
      FUN_1078598c4(&lStack_4b0);
      lVar13 = lStack_4a8;
    }
  }
  func_0x00010724b3d8(auStack_390);
  func_0x000107267da8(auStack_350);
  func_0x00010726b264(auStack_550);
  param_4 = auStack_520;
  func_0x000107262330();
  func_0x00010785997c(uStack_1c0);
  if ((bool)uVar6) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&lStack_4b0);
  func_0x00010724b3d8(&uStack_408);
  func_0x000104c2f714(&uStack_478);
  func_0x00010724b3d8(auStack_390);
  func_0x000107267da8(auStack_350);
  func_0x00010726b264(auStack_550);
  ppuVar10 = (undefined1 **)auStack_520;
  func_0x000107262330();
  puVar24 = &SUB_107857e74;
  func_0x0001078599cc();
code_r0x000107857e74:
  *(undefined1 **)((long)ppuVar5 + -0x20) = puVar14;
  *(undefined1 **)((long)ppuVar5 + -0x18) = param_4;
  *(undefined8 ******)((long)ppuVar5 + -0x10) = pppppuVar23;
  *(undefined **)((long)ppuVar5 + -8) = puVar24;
  func_0x000107859a74();
  puVar11 = *(undefined1 **)((long)ppuVar10 + 8);
  while (puVar11 != param_4) {
    puVar11 = puVar11 + -0x40;
    func_0x00010785902c();
  }
  *(undefined1 **)(puVar14 + 8) = param_4;
  return puVar11;
}



/* Entry: 107858e68; end: 107858f57;  */

undefined8 FUN_107858e68(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107858e94(&uStack_28);
  return param_1;
}



/* Entry: 10785938c; end: 107859397;  */

undefined1  [16] FUN_10785938c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x000107859998();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107859604; end: 107859653;  */

void FUN_107859604(long param_1)

{
  func_0x000107858fcc(param_1 + 0x40);
  func_0x00010726b264(param_1 + 0x30);
  func_0x000107279298(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1078598c4; end: 1078598f7;  */

long * FUN_1078598c4(long *param_1)

{
  param_1[1] = param_1[1] + 0x60;
  *param_1 = *param_1 + 1;
  func_0x00010785986c();
  return param_1;
}



/* Entry: 107859d40; end: 107859da7;  */

void FUN_107859d40(undefined8 param_1)

{
  func_0x0001003a91d4(&UNK_10f42b3c5);
  func_0x0001003a9204(param_1);
  return;
}



/* Entry: 10785a164; end: 10785a1c3;  */

/* WARNING: Possible PIC construction at 0x00010785a190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010785a2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a194) */
/* WARNING: Removing unreachable block (ram,0x00010785a1b0) */
/* WARNING: Removing unreachable block (ram,0x00010785a1c0) */
/* WARNING: Removing unreachable block (ram,0x00010785a1a4) */
/* WARNING: Removing unreachable block (ram,0x00010785a7f8) */
/* WARNING: Removing unreachable block (ram,0x00010785a2ec) */
/* WARNING: Removing unreachable block (ram,0x00010785a30c) */
/* WARNING: Removing unreachable block (ram,0x00010785a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010785a314) */
/* WARNING: Removing unreachable block (ram,0x00010785a318) */
/* WARNING: Removing unreachable block (ram,0x00010785a320) */
/* WARNING: Removing unreachable block (ram,0x00010785a338) */
/* WARNING: Removing unreachable block (ram,0x00010785a330) */
/* WARNING: Removing unreachable block (ram,0x00010785a304) */
/* WARNING: Removing unreachable block (ram,0x00010785a33c) */
/* WARNING: Removing unreachable block (ram,0x00010785a360) */
/* WARNING: Removing unreachable block (ram,0x00010785a374) */
/* WARNING: Removing unreachable block (ram,0x00010785a348) */

undefined ** FUN_10785a164(undefined8 *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined *apuStack_100 [4];
  undefined1 auStack_48 [40];
  
  puVar2 = param_1;
  func_0x00010785a7a0();
  *puVar2 = 0;
  func_0x00010785a7cc();
  func_0x00010785a7a0(param_1,auStack_48);
  func_0x00010785a7cc();
  ppuVar5 = &PTR_DAT_1109e30e0;
  ppuVar3 = ppuVar5;
  func_0x00010785a244();
  ppuVar4 = ppuVar3;
  func_0x00010785a7c4();
  bVar1 = (int)ppuVar3 == 0;
  if (bVar1) {
    ppuVar5 = (undefined **)0x0;
  }
  *param_1 = ppuVar5;
  func_0x00010785a78c(extraout_x8);
  if (bVar1) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010785a7b0();
  func_0x00010785a7bc();
  ppuVar4 = (undefined **)*ppuVar4;
  ppuVar5 = apuStack_100;
  ppuVar3 = apuStack_100;
  func_0x00010785a7a0();
  func_0x00010688d7f0();
  func_0x00010785a824();
  while ((ppuVar5 != ppuVar4 &&
         (puVar6 = (undefined1 *)ppuVar3, func_0x00010688d198(ppuVar3,(long)*(char *)ppuVar5),
         ((ulong)puVar6 & 1) == 0))) {
    ppuVar5 = (undefined **)((long)ppuVar5 + 1);
  }
  return ppuVar5;
}



/* Entry: 10785a474; end: 10785a49f;  */

void FUN_10785a474(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010785a4a0();
  }
  return;
}



/* Entry: 10785a750; end: 10785a82f;  */

bool FUN_10785a750(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    _memcmp(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10785ad8c; end: 10785adb7;  */

void FUN_10785ad8c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001000df524(&uStack_20);
  return;
}



/* Entry: 10785b150; end: 10785b1ab;  */

undefined1 * FUN_10785b150(undefined1 *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 *puStack_78;
  undefined1 auStack_48 [40];
  
  func_0x00010785c114();
  if ((ulong)(extraout_x9 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x00010785b34c();
      func_0x00010785c098();
      func_0x00010785c018();
      puStack_78 = param_1;
      func_0x00010785b1d8(&puStack_78);
      return param_1;
    }
    param_1 = auStack_48;
    func_0x00010785b358(param_1);
    func_0x00010785c0c8();
    func_0x00010785c098();
  }
  return param_1;
}



/* Entry: 10785b3e0; end: 10785b40b;  */

long * FUN_10785b3e0(long *param_1)

{
  func_0x00010785b40c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10785b668; end: 10785b66f;  */

void FUN_10785b668(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010725b1d4();
  }
  return;
}



/* Entry: 10785b888; end: 10785b8af;  */

long FUN_10785b888(long param_1)

{
  func_0x00010785b8b0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10785be3c; end: 10785be7f;  */

undefined8 FUN_10785be3c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm(0x20);
  func_0x00010785bef8();
  return uVar1;
}



/* Entry: 10785c1dc; end: 10785c5f7;  */

void FUN_10785c1dc(long param_1,double param_2,double param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  undefined8 extraout_d2_02;
  undefined8 extraout_d2_03;
  undefined8 extraout_d2_04;
  undefined8 extraout_d2_05;
  double dStack_408;
  double dStack_400;
  double adStack_3f8 [22];
  double adStack_348 [25];
  int aiStack_280 [16];
  double adStack_240 [42];
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  dVar10 = param_3;
  _memcpy(adStack_240,&UNK_10deae5a0,0x100);
  _exp2();
  dVar8 = param_3;
  for (lVar7 = 0; lVar7 != 0x100; lVar7 = lVar7 + 0x20) {
    lVar1 = (long)adStack_240 + lVar7;
    func_0x000107877358(lVar1,lVar1,param_4);
    dVar8 = param_3 * (1.0 / (param_2 * *(double *)((long)adStack_240 + lVar7 + 0x18)));
    func_0x00010740c7e4(lVar1);
  }
  _memcpy(adStack_348 + 0x18,&UNK_10deae6a0,0x48);
  if (param_5 != 0) {
    for (lVar7 = 4; lVar7 != 0x4c; lVar7 = lVar7 + 0xc) {
      dVar8 = (double)NEON_rev64(*(undefined8 *)((long)adStack_348 + lVar7 + 0xc0),4);
      *(double *)((long)adStack_348 + lVar7 + 0xc0) = dVar8;
    }
  }
  _bzero(adStack_348,0xc0);
  piVar6 = aiStack_280;
  for (lVar7 = 0; lVar7 != 0xc0; lVar7 = lVar7 + 0x20) {
    lVar1 = (long)piVar6[-2];
    lVar2 = (long)piVar6[-1];
    lVar4 = (long)*piVar6;
    adStack_3f8[0] = adStack_240[lVar2 * 4 + 2];
    dStack_400 = adStack_240[lVar2 * 4 + 1];
    dStack_408 = adStack_240[lVar2 * 4];
    dVar10 = adStack_240[lVar1 * 4 + 2] - adStack_3f8[0];
    dStack_90 = -dVar10 * (adStack_240[lVar4 * 4 + 1] - dStack_400) +
                (adStack_240[lVar4 * 4 + 2] - adStack_3f8[0]) *
                (adStack_240[lVar1 * 4 + 1] - dStack_400);
    dVar8 = (adStack_240[lVar4 * 4 + 2] - adStack_3f8[0]) * -(adStack_240[lVar1 * 4] - dStack_408) +
            (adStack_240[lVar4 * 4] - dStack_408) * dVar10;
    dStack_80 = (adStack_240[lVar4 * 4] - dStack_408) * -(adStack_240[lVar1 * 4 + 1] - dStack_400) +
                (adStack_240[lVar4 * 4 + 1] - dStack_400) * (adStack_240[lVar1 * 4] - dStack_408);
    dStack_88 = dVar8;
    func_0x0001074185b8(&dStack_90);
    adStack_240[0x24] = dVar8;
    adStack_240[0x25] = dVar10;
    adStack_240[0x26] = extraout_d2;
    func_0x0001074186d8(adStack_240 + 0x24,&dStack_408);
    dVar8 = -dVar8;
    *(double *)((long)adStack_348 + lVar7 + 8) = adStack_240[0x25];
    *(double *)((long)adStack_348 + lVar7) = adStack_240[0x24];
    *(double *)((long)adStack_348 + lVar7 + 0x10) = adStack_240[0x26];
    *(double *)((long)adStack_348 + lVar7 + 0x18) = dVar8;
    piVar6 = piVar6 + 3;
    dVar10 = adStack_240[0x26];
  }
  _bzero(&dStack_408,0xc0);
  pdVar3 = adStack_3f8;
  for (lVar7 = 0; lVar7 != 0x100; lVar7 = lVar7 + 0x20) {
    dVar8 = *(double *)((long)adStack_240 + lVar7 + 0x10);
    dVar10 = *(double *)((long)adStack_240 + lVar7);
    pdVar3[-1] = *(double *)((long)adStack_240 + lVar7 + 8);
    pdVar3[-2] = dVar10;
    *pdVar3 = dVar8;
    pdVar3 = pdVar3 + 3;
  }
  func_0x00010785c9dc();
  dStack_88 = 0.0;
  dStack_80 = 0.0;
  dStack_90 = 1.0;
  func_0x00010785c9c0();
  dVar11 = dVar10;
  func_0x00010785c9dc();
  uVar9 = 0;
  dStack_88 = 1.0;
  dStack_90 = 0.0;
  dStack_80 = 0.0;
  func_0x00010785c9c0();
  uVar13 = uVar9;
  dVar12 = dVar11;
  func_0x00010785c9dc();
  dStack_90 = 0.0;
  dStack_88 = 0.0;
  dStack_80 = 1.0;
  func_0x00010785c9c0();
  adStack_240[0x24] = dVar8;
  adStack_240[0x25] = (double)uVar9;
  adStack_240[0x26] = (double)uVar13;
  dStack_90 = dVar10;
  dStack_88 = dVar11;
  dStack_80 = dVar12;
  func_0x000107429dc8(param_1,adStack_240 + 0x24,&dStack_90);
  func_0x00010785c9d4(param_1 + 0x60,&dStack_408);
  func_0x00010785c9d4(param_1 + 0x120,adStack_348);
  puVar5 = (undefined8 *)(param_1 + 0x1f8);
  _bzero(param_1 + 0x1e0,0x2a0);
  lVar7 = 6;
  do {
    dVar8 = (double)puVar5[-0x19];
    uVar13 = puVar5[-0x18];
    if (dVar8 < 0.0) {
      dVar8 = -dVar8;
    }
    dVar10 = (double)puVar5[-0x1b];
    dVar11 = (double)puVar5[-0x1a];
    puVar5[-2] = (ulong)dVar11 ^ ((ulong)dVar11 ^ (ulong)-dVar11) & ~-(ulong)(0.0 <= dVar11);
    puVar5[-3] = (ulong)dVar10 ^ ((ulong)dVar10 ^ (ulong)-dVar10) & ~-(ulong)(0.0 <= dVar10);
    puVar5[-1] = dVar8;
    *puVar5 = uVar13;
    puVar5 = puVar5 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  func_0x00010785c9ec(param_1 + 0x90);
  adStack_240[0x24] = dVar8;
  adStack_240[0x25] = (double)uVar13;
  adStack_240[0x26] = (double)extraout_d2_00;
  func_0x00010785c9ec(param_1 + 0x60);
  adStack_240[0x27] = dVar8;
  adStack_240[0x28] = (double)uVar13;
  adStack_240[0x29] = (double)extraout_d2_01;
  func_0x00010785c128(param_1 + 0xc0,param_1 + 0x60);
  dStack_f0 = dVar8;
  uStack_e8 = uVar13;
  uStack_e0 = extraout_d2_02;
  func_0x00010785c128(param_1 + 0xd8,param_1 + 0x78);
  dStack_d8 = dVar8;
  uStack_d0 = uVar13;
  uStack_c8 = extraout_d2_03;
  func_0x00010785c128(param_1 + 0xf0,param_1 + 0x90);
  dStack_c0 = dVar8;
  uStack_b8 = uVar13;
  uStack_b0 = extraout_d2_04;
  func_0x00010785c9ec(param_1 + 0x108);
  dStack_a8 = dVar8;
  uStack_a0 = uVar13;
  uStack_98 = extraout_d2_05;
  pdVar3 = (double *)(param_1 + 0x2e8);
  for (lVar7 = 0; lVar7 != 0x90; lVar7 = lVar7 + 0x18) {
    dStack_80 = *(double *)((long)adStack_240 + lVar7 + 0x128);
    dVar8 = *(double *)((long)adStack_240 + lVar7 + 0x130);
    dStack_88 = -dVar8;
    dStack_90 = 0.0;
    dVar10 = -*(double *)((long)adStack_240 + lVar7 + 0x120);
    adStack_240[0x21] = 0.0;
    adStack_240[0x20] = dVar8;
    adStack_240[0x22] = dVar10;
    func_0x00010785c148(param_1 + 0x60,8,param_1 + 0x60,&dStack_90);
    pdVar3[-8] = dStack_88;
    pdVar3[-9] = dStack_90;
    pdVar3[-7] = dStack_80;
    pdVar3[-6] = dVar8;
    pdVar3[-5] = dVar10;
    func_0x00010785c148(param_1 + 0x60,8,param_1 + 0x60,adStack_240 + 0x20);
    pdVar3[-3] = adStack_240[0x21];
    pdVar3[-4] = adStack_240[0x20];
    pdVar3[-2] = adStack_240[0x22];
    pdVar3[-1] = dVar8;
    *pdVar3 = dVar10;
    pdVar3 = pdVar3 + 10;
  }
  return;
}



/* Entry: 10785c980; end: 10785c9bf;  */

undefined8 *
FUN_10785c980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_6[1];
  uVar1 = *param_6;
  uStack_28 = param_6[3];
  uVar2 = param_6[2];
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  func_0x00010740c81c(param_5,&uStack_40);
  *param_5 = uVar1;
  param_5[1] = uVar2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return param_5;
}



/* Entry: 10785cc84; end: 10785cdbb;  */

void FUN_10785cc84(long param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
                  long param_6,ulong param_7,int param_8)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  param_2 = param_2 * 512.0;
  dVar4 = *(double *)(param_6 + 0x88);
  dVar1 = 3.141592653589793 - dVar4 * 6.283185307179586;
  dVar3 = param_4;
  _exp();
  _atan();
  func_0x00010785d34c();
  param_4 = param_4 * dVar1 * 57.29577951308232;
  uVar2 = 0x3f91df46a2529d39;
  func_0x00010785d32c();
  dVar1 = param_4;
  func_0x0001078788e4(param_6);
  dStack_70 = dVar1;
  uStack_68 = uVar2;
  dStack_60 = dVar3;
  uStack_58 = param_5;
  func_0x000107878b80(param_1,&dStack_70);
  func_0x000107876e00(-(*(double *)(param_6 + 0x80) * param_2),-(dVar4 * param_2),
                      -(*(double *)(param_6 + 0x90) * param_2),param_1);
  if ((param_7 & 1) == 0) {
    *(double *)(param_1 + 8) = -*(double *)(param_1 + 8);
    *(double *)(param_1 + 0x28) = -*(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x48) = -*(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x68) = -*(double *)(param_1 + 0x68);
  }
  if (param_8 != 0) {
    param_2 = param_2 / (param_4 * 6.283185307179586 * 6378137.0);
    *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) * param_2;
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) * param_2;
    *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) * param_2;
    *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) * param_2;
  }
  return;
}



/* Entry: 10785d070; end: 10785d09b;  */

double FUN_10785d070(long param_1,long param_2)

{
  return -(*(double *)(param_2 + 8) * *(double *)(param_1 + 0x10)) +
         *(double *)(param_2 + 0x10) * *(double *)(param_1 + 8);
}



/* Entry: 10785d474; end: 10785d4bb;  */

long FUN_10785d474(long param_1)

{
  func_0x0001078d8da0();
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  return param_1 / 1000000;
}



/* Entry: 10785d72c; end: 10785d77b;  */

void FUN_10785d72c(void)

{
  func_0x00010785dcc8();
  func_0x00010785dc84();
  func_0x00010785dc70();
  func_0x00010785dd6c();
  func_0x00010785dd98();
  func_0x00010785dcf8();
  return;
}



/* Entry: 10785da30; end: 10785da67;  */

void FUN_10785da30(void)

{
  func_0x00010785dc34();
  func_0x00010785dd5c();
  func_0x00010785dc70();
  return;
}



/* Entry: 10785e0a0; end: 10785e287;  */

/* WARNING: Removing unreachable block (ram,0x00010785e260) */
/* WARNING: Removing unreachable block (ram,0x00010785e264) */
/* WARNING: Removing unreachable block (ram,0x00010785e278) */

undefined1 *
FUN_10785e0a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,float *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 *extraout_x8;
  long lVar5;
  undefined1 *puStack_518;
  undefined1 *puStack_510;
  undefined1 *puStack_508;
  undefined1 **ppuStack_500;
  undefined *puStack_4f8;
  undefined1 auStack_4e8 [24];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4b8 [64];
  undefined4 uStack_478;
  undefined4 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_378;
  undefined1 *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [56];
  undefined1 auStack_260 [56];
  undefined1 auStack_228 [480];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100060964(auStack_260,"r");
  func_0x00010785e40c((double)*param_6,auStack_228,auStack_260);
  func_0x000100060964(auStack_298,"g");
  func_0x00010785e448((double)param_6[1]);
  func_0x000100060964(auStack_2d0,"b");
  func_0x00010785e448((double)param_6[2]);
  func_0x000100060964(auStack_228,auStack_308,&DAT_10f3dc16b);
  func_0x00010785e448((double)param_6[3]);
  func_0x000107268084(&uStack_320,auStack_228,4);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uStack_318;
  *(undefined8 *)(param_1 + 2) = uStack_320;
  uStack_320 = 0;
  uStack_318 = 0;
  func_0x000104c335c0(&uStack_320);
  lVar5 = 0x168;
  do {
    func_0x0001072684c8(auStack_228 + lVar5);
    lVar5 = lVar5 + -0x78;
    uVar1 = lVar5 == -0x78;
  } while (!(bool)uVar1);
  func_0x000104c2f714(auStack_308);
  func_0x000104c2f714(auStack_2d0);
  func_0x000104c2f714(auStack_298);
  puVar2 = auStack_260;
  func_0x000104c2f714();
  func_0x00010785e450(uStack_48);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar5 = -0x1e0;
  lVar3 = -0x78;
  do {
    func_0x0001072684c8(lVar3);
    lVar3 = lVar3 + -0x78;
    lVar5 = lVar5 + 0x78;
  } while (lVar5 != 0);
  func_0x000104c2f714(auStack_308);
  func_0x000104c2f714(auStack_2d0);
  func_0x000104c2f714(auStack_298);
  func_0x000104c2f714(auStack_260);
  __Unwind_Resume(puVar2);
  puStack_328 = &UNK_10785e288;
  uStack_378 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_330 = &stack0xfffffffffffffff0;
  func_0x00010785e024();
  func_0x00010002b838(auStack_4e8,&UNK_10f42b453);
  func_0x000107268798(auStack_4b8,auStack_4e8);
  uStack_478 = 3;
  uStack_438 = 3;
  uStack_3f8 = 3;
  uStack_3b8 = 3;
  puVar2 = auStack_4b8;
  uStack_430 = param_3;
  uStack_3f0 = param_4;
  uStack_3b0 = param_5;
  func_0x000107268bc4(&uStack_4d0,puVar2,5);
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 4) = uStack_4c8;
  *(undefined8 *)(extraout_x8 + 2) = uStack_4d0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  func_0x000104c33108(&uStack_4d0);
  lVar5 = 0x100;
  do {
    puVar4 = auStack_4b8 + lVar5;
    func_0x000104c3323c();
    lVar5 = lVar5 + -0x40;
    uVar1 = lVar5 == -0x40;
  } while (!(bool)uVar1);
  func_0x00010785e438();
  func_0x00010785e450(uStack_378);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar5 = 0x100;
    do {
      func_0x000104c3323c(auStack_4b8 + lVar5);
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != -0x40);
    func_0x00010785e438();
    __Unwind_Resume(puVar4);
    puStack_4f8 = &UNK_10785e3b0;
    puStack_518 = (undefined1 *)0x0;
    puStack_510 = auStack_4b8;
    puStack_508 = puVar4;
    ppuStack_500 = &puStack_330;
    func_0x0001073ca0ec(&puStack_518,puVar2 + 0xc);
    func_0x0001073ca0ec(&puStack_518,puVar2);
    func_0x0001073ca0ec(&puStack_518,puVar2 + 4);
    func_0x0001073ca0ec(&puStack_518,puVar2 + 8);
    return puStack_518;
  }
  return puVar4;
}



/* Entry: 10785e730; end: 10785e73b;  */

void FUN_10785e730(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010785e738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_x20)();
  return;
}



/* Entry: 10785ea10; end: 10785eaf3;  */

void FUN_10785ea10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 extraout_x11;
  undefined8 in_register_00005008;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  func_0x000107868dcc();
  func_0x000107268350(auStack_78,param_5);
  func_0x000107868240(auStack_90,param_4,auStack_78);
  func_0x000104c3323c(auStack_78);
  func_0x000107868fd8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x000107869448();
  func_0x000107868ff0();
  if ((param_4 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010786921c();
    param_1[1] = in_register_00005008;
    *param_1 = param_2;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x0001078674f8(auStack_90);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868fcc();
    puVar2 = auStack_90;
    func_0x0001078674f8();
    func_0x00010786906c();
    func_0x000107868d20();
    uVar1 = extraout_x11;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_01;
    }
    func_0x00010786909c(uVar1);
    if ((puVar2 != (undefined1 *)0x0) && (*(int *)(puVar2 + 0x30) == 0)) {
      puVar3 = (undefined8 *)(puVar2 + 0x20);
      func_0x0001078684d4();
      func_0x0001072890a8(*puVar3,param_5);
      func_0x0001078691fc();
    }
    return;
  }
  return;
}



/* Entry: 10785edd4; end: 10785ee6b;  */

/* WARNING: Possible PIC construction at 0x00010785ee38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785ee3c) */

void FUN_10785edd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [72];
  
  func_0x000107868dcc();
  func_0x000107868d20();
  puVar2 = auStack_88;
  FUN_107868410();
  if ((param_1 == 0) || (in_ZR = 0, *(int *)(param_1 + 0x30) != 0xd)) {
    func_0x000107868d60();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001078693f4();
    func_0x00010786906c();
  }
  else {
    plVar1 = (long *)(param_1 + 0x20);
    func_0x000107868578();
    param_1 = *plVar1;
    func_0x000107268350(auStack_78,param_3);
    puVar2 = auStack_78;
  }
  func_0x000107868fbc();
  func_0x0001072d80fc(param_1 + 0xa8,puVar2);
  func_0x0001078692b8();
  return;
}



/* Entry: 10785f28c; end: 10785f2bf;  */

void FUN_10785f28c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000113822d48;
  lRam0000000113822d48 = 0;
  if (lVar1 != 0) {
    func_0x000107869298();
  }
  uRam0000000113822d50 = param_1;
  return;
}



/* Entry: 107865644; end: 107865647;  */

undefined8 * FUN_107865644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3218;
  func_0x0001078675b4(param_1 + 0x17b);
  func_0x000107867540(param_1 + 0x17a);
  func_0x000107290de0(param_1 + 0x178);
  func_0x000107290de0(param_1 + 0x176);
  func_0x000107290de0(param_1 + 0x174);
  func_0x000107290de0(param_1 + 0x172);
  func_0x000107290de0(param_1 + 0x170);
  func_0x000107290de0(param_1 + 0x16e);
  func_0x000107290de0(param_1 + 0x16c);
  func_0x000107290de0(param_1 + 0x16a);
  func_0x000107290de0(param_1 + 0x168);
  func_0x000107290de0(param_1 + 0x166);
  func_0x000107290de0(param_1 + 0x164);
  func_0x000107290de0(param_1 + 0x162);
  func_0x000107290de0(param_1 + 0x160);
  func_0x000107290de0(param_1 + 0x15e);
  func_0x000107290de0(param_1 + 0x15c);
  func_0x000107290de0(param_1 + 0x15a);
  func_0x000107290e04(param_1 + 0x158);
  func_0x000107290de0(param_1 + 0x156);
  func_0x000107290de0(param_1 + 0x154);
  func_0x000107290de0(param_1 + 0x152);
  func_0x000107290de0(param_1 + 0x150);
  func_0x000107290de0(param_1 + 0x14e);
  func_0x000107290de0(param_1 + 0x14c);
  func_0x000107290de0(param_1 + 0x14a);
  func_0x000107290de0(param_1 + 0x148);
  func_0x000107290de0(param_1 + 0x146);
  func_0x000107290de0(param_1 + 0x144);
  func_0x000107290de0(param_1 + 0x142);
  func_0x000107290de0(param_1 + 0x140);
  func_0x000107290de0(param_1 + 0x13e);
  func_0x000107290de0(param_1 + 0x13c);
  func_0x000107290de0(param_1 + 0x13a);
  func_0x000107290de0(param_1 + 0x138);
  func_0x000107290de0(param_1 + 0x136);
  func_0x000107290de0(param_1 + 0x134);
  func_0x000107290d98(param_1 + 0x132);
  func_0x000107290de0(param_1 + 0x130);
  func_0x000107290de0(param_1 + 0x12e);
  func_0x000107290d98(param_1 + 300);
  func_0x000107290de0(param_1 + 0x12a);
  func_0x000107290de0(param_1 + 0x128);
  func_0x000107290de0(param_1 + 0x126);
  func_0x000107290de0(param_1 + 0x124);
  func_0x000107290de0(param_1 + 0x122);
  func_0x000107290de0(param_1 + 0x120);
  func_0x000107290de0(param_1 + 0x11e);
  func_0x000107290de0(param_1 + 0x11c);
  func_0x000107290de0(param_1 + 0x11a);
  func_0x000107290de0(param_1 + 0x118);
  func_0x000107290de0(param_1 + 0x116);
  func_0x000107290de0(param_1 + 0x114);
  func_0x000107290de0(param_1 + 0x112);
  func_0x000107290de0(param_1 + 0x110);
  func_0x000107290de0(param_1 + 0x10e);
  func_0x000107290de0(param_1 + 0x10c);
  func_0x000107290de0(param_1 + 0x10a);
  func_0x000107290de0(param_1 + 0x108);
  func_0x000107290de0(param_1 + 0x106);
  func_0x000107290de0(param_1 + 0x104);
  func_0x000107290de0(param_1 + 0x102);
  func_0x000107290de0(param_1 + 0x100);
  func_0x0001078665e8(param_1 + 0xfe);
  func_0x0001078665e8(param_1 + 0xfc);
  func_0x0001078665e8(param_1 + 0xfa);
  func_0x000107290e04(param_1 + 0xf8);
  func_0x000107290de0(param_1 + 0xf6);
  func_0x000107290de0(param_1 + 0xf4);
  func_0x0001078665e8(param_1 + 0xf2);
  func_0x000107290de0(param_1 + 0xf0);
  func_0x000107290de0(param_1 + 0xee);
  func_0x000107290de0(param_1 + 0xec);
  func_0x0001078665e8(param_1 + 0xea);
  func_0x0001078665e8(param_1 + 0xe8);
  func_0x0001078665e8(param_1 + 0xe6);
  func_0x0001078665e8(param_1 + 0xe4);
  func_0x000107290de0(param_1 + 0xe2);
  func_0x000107290de0(param_1 + 0xe0);
  func_0x000107290de0(param_1 + 0xde);
  func_0x000107866804(param_1 + 0xdc);
  func_0x000107290de0(param_1 + 0xda);
  func_0x000107290e04(param_1 + 0xd8);
  func_0x000107290e04(param_1 + 0xd6);
  func_0x000107290e04(param_1 + 0xd4);
  func_0x000107290de0(param_1 + 0xd2);
  func_0x000107290de0(param_1 + 0xd0);
  func_0x000107290de0(param_1 + 0xce);
  func_0x000107290de0(param_1 + 0xcc);
  func_0x000107290de0(param_1 + 0xca);
  func_0x000107290de0(param_1 + 200);
  func_0x000107290e04(param_1 + 0xc6);
  func_0x000107290de0(param_1 + 0xc4);
  func_0x000107290e04(param_1 + 0xc2);
  func_0x000107290e04(param_1 + 0xc0);
  func_0x000107290e04(param_1 + 0xbe);
  func_0x000107290de0(param_1 + 0xbc);
  func_0x000107290de0(param_1 + 0xba);
  func_0x000107290de0(param_1 + 0xb8);
  func_0x000107290de0(param_1 + 0xb6);
  func_0x000107290de0(param_1 + 0xb4);
  func_0x000107290e04(param_1 + 0xb2);
  func_0x000107290de0(param_1 + 0xb0);
  func_0x000107290de0(param_1 + 0xae);
  func_0x000107290de0(param_1 + 0xac);
  func_0x000107290e04(param_1 + 0xaa);
  func_0x000107290de0(param_1 + 0xa8);
  func_0x000107290de0(param_1 + 0xa6);
  func_0x000107290de0(param_1 + 0xa4);
  func_0x000107290de0(param_1 + 0xa2);
  func_0x000107290de0(param_1 + 0xa0);
  func_0x000107290e04(param_1 + 0x9e);
  func_0x000107290e04(param_1 + 0x9c);
  func_0x000107290de0(param_1 + 0x9a);
  func_0x000107290de0(param_1 + 0x98);
  func_0x000107290de0(param_1 + 0x96);
  func_0x000107290de0(param_1 + 0x94);
  func_0x000107290de0(param_1 + 0x92);
  func_0x000107290de0(param_1 + 0x90);
  func_0x000107290de0(param_1 + 0x8e);
  func_0x000107290e04(param_1 + 0x8c);
  func_0x000107290de0(param_1 + 0x8a);
  func_0x0001078666c0(param_1 + 0x88);
  func_0x00010786669c(param_1 + 0x86);
  func_0x000107290de0(param_1 + 0x84);
  func_0x000107290de0(param_1 + 0x82);
  func_0x000107290de0(param_1 + 0x80);
  func_0x000107290de0(param_1 + 0x7e);
  func_0x000107290de0(param_1 + 0x7c);
  func_0x000107290de0(param_1 + 0x7a);
  func_0x000107290de0(param_1 + 0x78);
  func_0x000107290de0(param_1 + 0x76);
  func_0x000107290de0(param_1 + 0x74);
  func_0x000107290de0(param_1 + 0x72);
  func_0x000107290de0(param_1 + 0x70);
  func_0x000107290de0(param_1 + 0x6e);
  func_0x0001078665e8(param_1 + 0x6c);
  func_0x000107290de0(param_1 + 0x6a);
  func_0x000107290de0(param_1 + 0x68);
  func_0x000107290de0(param_1 + 0x66);
  func_0x000107290e04(param_1 + 100);
  func_0x000107290de0(param_1 + 0x62);
  func_0x000107290de0(param_1 + 0x60);
  func_0x000107290de0(param_1 + 0x5e);
  func_0x000107290de0(param_1 + 0x5c);
  func_0x000107290de0(param_1 + 0x5a);
  func_0x000107290de0(param_1 + 0x58);
  func_0x000107290de0(param_1 + 0x56);
  func_0x000107290de0(param_1 + 0x54);
  func_0x000107290de0(param_1 + 0x52);
  func_0x000107290de0(param_1 + 0x50);
  func_0x000107290de0(param_1 + 0x4e);
  func_0x000107290e04(param_1 + 0x4c);
  func_0x000107290de0(param_1 + 0x4a);
  func_0x000107290de0(param_1 + 0x48);
  func_0x000107290de0(param_1 + 0x46);
  func_0x000107290e04(param_1 + 0x44);
  func_0x000107290de0(param_1 + 0x42);
  func_0x000107290de0(param_1 + 0x40);
  func_0x000107290e04(param_1 + 0x3e);
  func_0x000107290de0(param_1 + 0x3c);
  func_0x000107290de0(param_1 + 0x3a);
  func_0x000107290de0(param_1 + 0x38);
  func_0x000107290de0(param_1 + 0x36);
  func_0x000107290de0(param_1 + 0x34);
  func_0x000107290e04(param_1 + 0x32);
  func_0x000107290e04(param_1 + 0x30);
  func_0x000107290e04(param_1 + 0x2e);
  func_0x000107290d98(param_1 + 0x2c);
  func_0x000107290de0(param_1 + 0x2a);
  func_0x000107290de0(param_1 + 0x28);
  func_0x000107290de0(param_1 + 0x26);
  func_0x000107290de0(param_1 + 0x24);
  func_0x000107290de0(param_1 + 0x22);
  func_0x000107290e04(param_1 + 0x20);
  func_0x000107290de0(param_1 + 0x1e);
  func_0x000107290de0(param_1 + 0x1c);
  *param_1 = &PTR_DAT_1109e33d8;
  func_0x00010786760c(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 107865808; end: 10786583f;  */

void FUN_107865808(long param_1)

{
  undefined1 uStack_11;
  
  if ((*(int *)(param_1 + 0xbe4) == 0) && (*(char *)(param_1 + 0xbe0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbe0) = 0;
    func_0x000107865840(param_1,&uStack_11);
    return;
  }
  return;
}



/* Entry: 107866120; end: 107866167;  */

void FUN_107866120(void)

{
  return;
}



/* Entry: 107866c10; end: 107866ca3;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866c10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  long unaff_x21;
  long lVar6;
  long unaff_x22;
  undefined1 auStack_6a8 [24];
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 ***pppuStack_680;
  undefined *puStack_678;
  long lStack_670;
  long lStack_668;
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [72];
  undefined4 uStack_600;
  undefined1 auStack_5f8 [72];
  undefined8 ***pppuStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long alStack_56a [8];
  undefined1 auStack_528 [72];
  undefined4 uStack_4e0;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  undefined1 auStack_458 [16];
  undefined8 uStack_448;
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  undefined4 uStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  long lStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  uVar3 = (undefined4)param_2;
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
      uVar3 = (undefined4)param_2;
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x0001072cd320();
  uStack_80 = 6;
  uStack_c8 = uVar3;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar4 = auStack_d8;
  func_0x000107289cc8(puVar4);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x000107289cc8(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866ca4;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x0001078693dc();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
      } while (extraout_w11_00 != 0);
    }
    func_0x000107868fa4();
    func_0x0001078692b0();
    lVar6 = *(long *)(unaff_x21 + 0xa8);
    func_0x00010786933c();
    uStack_160 = 7;
    lStack_1a8 = lVar6;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar4 = auStack_1b8;
    func_0x00010786748c(puVar4);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x00010786748c(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866d40;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x0001078693dc();
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_01 != 0);
      }
      func_0x000107868fa4();
      func_0x0001078692b0();
      lVar6 = *(long *)(lVar6 + 0xa8);
      func_0x00010786933c();
      uStack_240 = 8;
      lStack_288 = lVar6;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar4 = auStack_298;
      func_0x0001078674b0(puVar4);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x0001078674b0(auStack_298);
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866ddc;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        func_0x000107869368();
        if (extraout_x9_02 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_02 != 0);
        }
        func_0x0001078693e8();
        func_0x00010750833c();
        uStack_368 = (undefined4)param_1;
        uStack_320 = 9;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(lVar6 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar4 = auStack_378;
        func_0x000107289e5c(puVar4);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          func_0x000107289e5c(auStack_378);
          func_0x00010786906c();
          puStack_388 = &DAT_107866e70;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          func_0x000107869368();
          if (extraout_x9_03 != 0) {
            do {
              func_0x000107868ef4();
            } while (extraout_w11_03 != 0);
          }
          func_0x0001078693e8();
          func_0x00010740f294();
          uStack_400 = 10;
          uStack_448 = param_1;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(lVar6 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar4 = auStack_458;
          func_0x00010740f2d0(puVar4);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x00010740f2d0(auStack_458);
            func_0x00010786906c();
            puStack_468 = &DAT_107866f04;
            pppuStack_470 = &pppuStack_390;
            func_0x000107868d78();
            uStack_580 = *param_3;
            lStack_578 = param_3[1];
            plVar5 = extraout_x8;
            if (lStack_578 != 0) {
              do {
                func_0x000107868ef4();
                plVar5 = extraout_x8_00;
              } while (extraout_w11_04 != 0);
            }
            lVar6 = *plVar5;
            func_0x00010785f084(alStack_56a);
            plVar5 = alStack_56a;
            func_0x0001078692c8(auStack_528);
            uStack_4e0 = 0xb;
            func_0x00010786954c();
            puVar4 = *(undefined1 **)(lVar6 + 0x18);
            func_0x000107868ecc();
            func_0x000107869290();
            func_0x0001078693cc();
            func_0x000107869424();
            func_0x000107868d60();
            if ((bool)in_ZR) {
              return puVar4;
            }
            ___stack_chk_fail();
            func_0x000107869290();
            func_0x0001078693cc();
            func_0x000107869424();
            func_0x00010786906c();
            puStack_588 = &DAT_107866fac;
            pppuStack_590 = &pppuStack_470;
            func_0x000107868d78();
            lVar6 = *plVar5;
            lStack_668 = plVar5[1];
            lStack_670 = lVar6;
            if (lStack_668 != 0) {
              do {
                func_0x000107868ef4();
              } while (extraout_w11_05 != 0);
            }
            uVar1 = *(undefined8 *)(lVar6 + 0xc0);
            uVar2 = *(undefined8 *)(lVar6 + 200);
            func_0x000107328418(auStack_660);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_648,auStack_660);
            uStack_600 = 0xc;
            puVar4 = auStack_5f8;
            puStack_678 = &UNK_10786700c;
            uStack_690 = uVar2;
            uStack_688 = uVar1;
            pppuStack_680 = &pppuStack_590;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_6a8);
            func_0x000107268798(puVar4,auStack_6a8);
            func_0x0001078693fc();
            return puVar4;
          }
        }
      }
    }
  }
  return puVar4;
}



/* Entry: 107867144; end: 107867283;  */

/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673b4) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107867144(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  int extraout_w11;
  long unaff_x21;
  
  func_0x000107868e88();
  func_0x0001078693dc(*param_1);
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x0001078692b0();
  if (*(long *)(unaff_x21 + 0xb0) == 0) {
    func_0x00010724e49c(&stack0xffffffffffffff68);
  }
  else {
    plVar1 = (long *)(*(long *)(unaff_x21 + 0xb0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010724e49c(&stack0xffffffffffffff68);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return &stack0xffffffffffffff68;
}



/* Entry: 1078675f0; end: 10786760b;  */

void FUN_1078675f0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010786963c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107867774; end: 107867787;  */

void FUN_107867774(void)

{
  func_0x0001078677d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107867c2c; end: 107867c63;  */

void FUN_107867c2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107869450();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000107865ffc(unaff_x20 + 0x20);
    }
    func_0x000107869334();
  }
  return;
}



/* Entry: 107867d74; end: 107867d7b;  */

void FUN_107867d74(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107867e94; end: 107867ec7;  */

void FUN_107867e94(undefined8 *param_1)

{
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3520;
  func_0x000107867ee8(param_1 + 3);
  return;
}



/* Entry: 107867fe4; end: 107867fe7;  */

void FUN_107867fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107868090; end: 1078680a3;  */

void FUN_107868090(void)

{
  func_0x0001078680ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078681bc; end: 1078681cf;  */

void FUN_1078681bc(void)

{
  func_0x000107868224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786830c; end: 10786833f;  */

void FUN_10786830c(undefined8 *param_1)

{
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3700;
  func_0x000107868384(param_1 + 3);
  return;
}



/* Entry: 107868410; end: 1078684d3;  */

long FUN_107868410(long *param_1)

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
    func_0x000107867bcc();
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
        if (plVar4 != plVar2) break;
        func_0x00010786942c();
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



/* Entry: 107868790; end: 1078687bb;  */

void FUN_107868790(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e3760;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107868ce8; end: 107868d1f;  */

void FUN_107868ce8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107869450();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x0001074115f8(unaff_x20 + 0x18);
    }
    func_0x000107869334();
  }
  return;
}



/* Entry: 10786972c; end: 10786975b;  */

void FUN_10786972c(void)

{
  func_0x00010786d890();
  func_0x00010726acf0();
  func_0x00010786daa0();
  func_0x000107295f10();
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 1078699c4; end: 107869a4b;  */

undefined8 FUN_1078699c4(void)

{
  int iVar1;
  
  if ((bRam0000000113822da0 & 1) == 0) {
    iVar1 = 0x13822da0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puRam0000000113822d78 = &UNK_10e52b660;
      uRam0000000113822d80 = 0;
      uRam0000000113822d88 = 0;
      uRam0000000113822d90 = 0;
      ___cxa_guard_release(0x113822da0);
    }
  }
  return 0x113822d78;
}



/* Entry: 107869f40; end: 107869f67;  */

void FUN_107869f40(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  func_0x00010786dae8();
  func_0x00010786b5b8();
  lVar1 = *unaff_x20;
  lVar2 = lVar1;
  func_0x00010786bdc4();
  if (lVar2 != 0) {
    func_0x00010786c5e0(lVar1,lVar2);
  }
  return;
}



/* Entry: 10786a204; end: 10786a2a3;  */

void FUN_10786a204(long param_1)

{
  undefined1 auStack_50 [24];
  char cStack_38;
  
  func_0x00010786a0b4();
  if (param_1 != 0) {
    func_0x00010786dccc();
    if (cStack_38 == '\x01') {
      func_0x000107869920(auStack_50);
    }
    func_0x00010786d954();
  }
  return;
}



/* Entry: 10786a4e4; end: 10786a50b;  */

void FUN_10786a4e4(void)

{
  func_0x00010786a978();
  return;
}



/* Entry: 10786a8a0; end: 10786a8af;  */

undefined1  [16] FUN_10786a8a0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = ((undefined8 *)*param_1)[1];
  uStack_20 = *(undefined8 *)*param_1;
  func_0x00010786cc8c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10786a9a0; end: 10786a9b3;  */

void FUN_10786a9a0(undefined8 param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    if ((bRam00000001131acf40 & 1) == 0) {
      iVar1 = 0x131acf40;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010726ad94(0x1131acf30);
        ___cxa_guard_release(0x1131acf40);
      }
    }
    func_0x000107275304();
    if (extraout_x8 != 0) {
      do {
        func_0x000107274880();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x00010786de6c(param_2);
  func_0x00010786a9d0();
  return;
}



/* Entry: 10786ab70; end: 10786ab8b;  */

void FUN_10786ab70(void)

{
  undefined1 uStack_11;
  
  func_0x00010786ab8c(&uStack_11);
  return;
}



/* Entry: 10786acd0; end: 10786acf7;  */

long FUN_10786acd0(long param_1)

{
  func_0x00010726e4c8(param_1 + 0x38);
  func_0x00010786dcb8();
  return param_1;
}



/* Entry: 10786ae70; end: 10786ae73;  */

void FUN_10786ae70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786afc0; end: 10786b027;  */

/* WARNING: Possible PIC construction at 0x00010786afd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786afdc) */
/* WARNING: Removing unreachable block (ram,0x00010786b020) */
/* WARNING: Removing unreachable block (ram,0x00010786b018) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

void FUN_10786afc0(long param_1,undefined8 param_2)

{
  func_0x00010786d71c();
  func_0x00010786dbbc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786b04c();
  func_0x00010786da84();
  return;
}



/* Entry: 10786b110; end: 10786b11f;  */

void FUN_10786b110(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10786b32c; end: 10786b37f;  */

void FUN_10786b32c(long param_1,undefined8 param_2)

{
  ulong unaff_x20;
  long unaff_x22;
  
  func_0x00010726d4a8();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010786b380(*(long *)(param_1 + 8) + unaff_x22 * 0x50,param_2);
  }
  func_0x00010786deec();
  func_0x00010786da74();
  return;
}



/* Entry: 10786b564; end: 10786b57b;  */

void FUN_10786b564(long param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010786d8f4();
  func_0x00010726d6b0();
  func_0x00010786dd44();
  uVar1 = param_3[2];
  param_3[3] = param_3[3] + -1;
  lVar3 = *param_3;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10786b6c8; end: 10786b90f;  */

void FUN_10786b6c8(undefined8 param_1,float param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x26;
  long *plVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  func_0x00010786d890();
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  uVar3 = *(undefined4 *)(param_4 + 0x20);
  uVar12 = (undefined1)uVar3;
  uVar13 = (undefined1)((uint)uVar3 >> 8);
  uVar14 = (undefined1)((uint)uVar3 >> 0x10);
  uVar15 = (undefined1)((uint)uVar3 >> 0x18);
  *(undefined4 *)(param_3 + 4) = uVar3;
  func_0x00010786b910();
  plVar9 = (long *)(unaff_x20 + 0x10);
  plVar1 = unaff_x19 + 2;
LAB_10786b710:
  do {
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
    uVar7 = (ulong)(plVar9 + 2);
    func_0x000104c2fe38();
    uVar10 = unaff_x19[1];
    if (uVar10 != 0) {
      uVar8 = uVar10 - 1;
      if ((uVar10 & uVar8) == 0) {
        unaff_x26 = uVar8 & uVar7;
      }
      else {
        unaff_x26 = uVar7;
        if (uVar10 <= uVar7) {
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = uVar7 / uVar10;
          }
          unaff_x26 = uVar7 - uVar4 * uVar10;
        }
      }
      plVar11 = *(long **)(*unaff_x19 + unaff_x26 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10786b7b0;
            uVar4 = plVar11[1];
            if (uVar4 != uVar7) break;
            uVar4 = (ulong)(plVar11 + 2);
            func_0x000104c32db4(uVar4,plVar9 + 2);
            if ((uVar4 & 1) != 0) goto LAB_10786b710;
          }
          if ((uVar10 & uVar8) == 0) {
            uVar4 = uVar4 & uVar8;
          }
          else if (uVar10 <= uVar4) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar4 / uVar10;
            }
            uVar4 = uVar4 - uVar2 * uVar10;
          }
        } while (uVar4 == unaff_x26);
      }
    }
LAB_10786b7b0:
    plVar11 = (long *)0x70;
    __Znwm();
    *plVar11 = 0;
    plVar11[1] = uVar7;
    func_0x000104c2fe00(plVar11 + 2,plVar9 + 2);
    func_0x0001074f80c0(plVar11 + 9,plVar9 + 9);
    func_0x00010786deb0();
    if ((uVar10 == 0) ||
       (param_2 * (float)uVar10 < (float)CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
    {
      func_0x00010786dd14(uVar10 << 1);
      func_0x00010786b910();
      uVar10 = unaff_x19[1];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & uVar7;
      }
      else {
        unaff_x26 = uVar7;
        if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          unaff_x26 = uVar7 - uVar8 * uVar10;
        }
      }
    }
    lVar5 = *unaff_x19;
    plVar6 = *(long **)(lVar5 + unaff_x26 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar11 = *plVar1;
      *plVar1 = (long)plVar11;
      *(long **)(lVar5 + unaff_x26 * 8) = plVar1;
      if (*plVar11 != 0) {
        uVar7 = *(ulong *)(*plVar11 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar7 = uVar7 & uVar10 - 1;
        }
        else if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar8 * uVar10;
        }
        *(long **)(lVar5 + uVar7 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar6;
      *plVar6 = (long)plVar11;
    }
    func_0x00010786dad0();
  } while( true );
}



/* Entry: 10786bb88; end: 10786bbb7;  */

long FUN_10786bb88(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010786bbb8(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x48;
}



/* Entry: 10786c1d8; end: 10786c1ff;  */

void FUN_10786c1d8(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3a50);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c354; end: 10786c37b;  */

void FUN_10786c354(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010786daac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e39d0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10786c518; end: 10786c52b;  */

undefined ** FUN_10786c518(void)

{
  return &PTR_DAT_1109e3ad0;
}



/* Entry: 10786c74c; end: 10786c80b;  */

long FUN_10786c74c(long *param_1)

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
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x00010786d91c();
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
        func_0x00010786de34();
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



/* Entry: 10786c8e8; end: 10786c90b;  */

void FUN_10786c8e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e3bf0;
  return;
}



/* Entry: 10786ca6c; end: 10786cb6f;  */

long FUN_10786ca6c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  long extraout_x11;
  long lVar8;
  long lStack_50;
  long lStack_48;
  
  lVar5 = param_2;
  func_0x00010786cb70();
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    func_0x00010786daa0();
    func_0x00010786cb74();
    func_0x00010786cc60();
    lStack_50 = param_2;
    while (lStack_48 = lVar5, lStack_50 != 0) {
      lVar7 = lVar5;
      func_0x000104c2fe38(lVar5);
      lVar4 = param_1;
      func_0x00010ae6c8b4(param_1,lVar7);
      func_0x00010786daf4((uint)lVar7 & 0x7f);
      lVar4 = extraout_x11 + lVar4 * 0x48;
      func_0x000104c2fe00(lVar4,lVar5);
      lVar6 = *(long *)(lVar5 + 0x40);
      lVar7 = *(long *)(lVar5 + 0x38);
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar5 + 0x40);
      *(long *)(lVar4 + 0x38) = lVar7;
      if (lVar6 != 0) {
        do {
          func_0x00010786da24();
        } while (extraout_w10 != 0);
        lVar7 = *(long *)(lVar4 + 0x38);
      }
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x20);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010786d4f8(&lStack_50);
      lVar5 = lStack_48;
    }
    *(long *)(param_1 + 0x18) = lVar8;
    func_0x00010786dea4();
    *(long *)(extraout_x8 + -8) = extraout_x9 - lVar8;
  }
  return param_1;
}



/* Entry: 10786cd88; end: 10786cd9f;  */

void FUN_10786cd88(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010786ddcc(*(long *)(param_1 + 8) + param_2 * 0x48,param_3,param_4);
  func_0x00010786dcf4();
  return;
}



/* Entry: 10786cf3c; end: 10786cf73;  */

void FUN_10786cf3c(void)

{
  ulong unaff_x20;
  
  func_0x00010786d904();
  func_0x00010786cd14();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010786d99c();
    func_0x00010786dd04();
  }
  func_0x00010786dbc8();
  return;
}



/* Entry: 10786d1bc; end: 10786d22f;  */

void FUN_10786d1bc(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010786db7c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010786ddd4();
      func_0x00010786d9e4();
      func_0x000100061de0();
      func_0x00010786d964();
      func_0x00010786d230();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10786d468; end: 10786d47b;  */

long FUN_10786d468(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10786d60c; end: 10786d667;  */

void FUN_10786d60c(undefined8 param_1)

{
  uint extraout_w8;
  long unaff_x27;
  
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000104c32db4();
      if ((int)param_1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786e278; end: 10786e5e3;  */

/* WARNING: Possible PIC construction at 0x00010786e408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786e2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786e40c) */
/* WARNING: Removing unreachable block (ram,0x00010786e41c) */
/* WARNING: Removing unreachable block (ram,0x00010786e504) */
/* WARNING: Removing unreachable block (ram,0x00010786e430) */
/* WARNING: Removing unreachable block (ram,0x00010786e468) */
/* WARNING: Removing unreachable block (ram,0x00010786e474) */
/* WARNING: Removing unreachable block (ram,0x00010786e2d0) */
/* WARNING: Removing unreachable block (ram,0x00010786e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010786e398) */

undefined4 * FUN_10786e278(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_e0 [96];
  undefined4 auStack_80 [6];
  undefined1 auStack_68 [40];
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_1;
  switch(*param_2) {
  case 1:
    unaff_x30 = 0x10786e2d0;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    pcVar3 = "";
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
    break;
  case 2:
    func_0x00010724ef84(auStack_80,param_2 + 2);
    func_0x0001004c3cd0(auStack_68,&DAT_10f3b3c06,auStack_80);
    func_0x00010048a6c8(param_1,auStack_68,&DAT_10f3b3c06);
    func_0x00010786e828();
    puVar4 = auStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    return puVar4;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEd_110346928)(param_1,*(undefined8 *)(param_2 + 2));
    return param_2;
  case 4:
    puVar4 = *(undefined4 **)(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEx_110346958)(param_1,puVar4);
    return puVar4;
  case 5:
    puVar4 = *(undefined4 **)(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEy_110346960)(param_1,puVar4);
    return puVar4;
  case 6:
    pcVar3 = "true";
    if (*(char *)(param_2 + 2) == '\0') {
      pcVar3 = "false";
    }
    break;
  case 7:
    pcVar3 = "null_value_t";
    break;
  default:
    puVar2 = auStack_68;
    unaff_x30 = 0x10786e40c;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    pcVar3 = "[";
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined4 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010002b82c(puVar2,pcVar3);
  func_0x000107c613d0(pcVar3);
  func_0x000107c60c50(unaff_x20,unaff_x19,pcVar3);
  return unaff_x20;
}



/* Entry: 10786e9a0; end: 10786ea0b;  */

double FUN_10786e9a0(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 1.0;
  _ldexp(0x3ff0000000000000);
  dVar2 = (param_1 * -6.283185307179586) / dVar1 + 3.141592653589793;
  dVar1 = dVar2;
  _exp(dVar2);
  dVar2 = -dVar2;
  _exp(dVar2);
  dVar1 = (dVar1 - dVar2) * 0.5;
  _atan(dVar1);
  return dVar1 * 57.29577951308232;
}



/* Entry: 10786ed74; end: 10786ee23;  */

void FUN_10786ed74(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  
  if (*(short *)((long)param_1 + 0x16) != 4) goto LAB_10786edfc;
  lVar3 = (ulong)*param_1 * 0x18;
  puVar2 = *(uint **)(param_1 + 2);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if (*(short *)((long)puVar2 + 0x16) != 4) break;
    uVar1 = *puVar2;
    lVar3 = lVar3 + -0x18;
    puVar2 = puVar2 + 6;
    if (uVar1 < 4) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
LAB_10786edf4:
      do {
        func_0x000107871284();
        func_0x0001078713b4();
LAB_10786edfc:
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
      } while( true );
    }
  }
  func_0x000107871318();
  __ZNSt13runtime_errorC1EPKc();
  goto LAB_10786edf4;
}



/* Entry: 10786f98c; end: 10786fba3;  */

void FUN_10786f98c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 *unaff_x19;
  uint *unaff_x20;
  ulong uVar9;
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x000107871428();
  func_0x000107871298();
  uVar3 = *(ushort *)(param_3 + 0x16);
  uVar6 = (uVar3 & 7) == 5;
  switch(uVar3 & 7) {
  case 0:
    *unaff_x19 = 7;
    break;
  case 1:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    break;
  case 2:
    *unaff_x19 = 6;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    break;
  case 3:
    func_0x00010786f838(&uStack_90);
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 4) = uStack_88;
    *(undefined8 *)(unaff_x19 + 2) = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000104c335c0(&uStack_90);
    break;
  case 4:
    func_0x000107289330(&plStack_a0);
    if (*(short *)((long)unaff_x20 + 0x16) != 4) goto code_r0x00010786fb58;
    uVar9 = (ulong)*unaff_x20;
    uVar1 = plStack_a0[2] - *plStack_a0 >> 6;
    uVar6 = uVar9 == uVar1;
    if (uVar1 < uVar9) {
      func_0x000107289354(&plStack_a0);
      func_0x0001072ac134(plStack_a0,uVar9);
      uVar9 = (ulong)*unaff_x20;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 2);
    while (uVar9 * 3 != 0) {
      FUN_10786f98c(auStack_78,uVar7);
      func_0x0001072aacf4(&plStack_a0,auStack_78);
      func_0x000104c3323c(auStack_78);
      func_0x0001078714d8();
    }
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 4) = uStack_98;
    *(long **)(unaff_x19 + 2) = plStack_a0;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    func_0x000104c33108(&plStack_a0);
    break;
  case 5:
    uVar6 = (uVar3 & 0x1000) == 0;
    uVar2 = *unaff_x20;
    puVar4 = *(uint **)(unaff_x20 + 2);
    if (!(bool)uVar6) {
      uVar2 = 0x15 - (int)*(char *)((long)unaff_x20 + 0x15);
      puVar4 = unaff_x20;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (auStack_b8,puVar4,uVar2);
    func_0x00010787155c();
    func_0x000107268798();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    break;
  default:
    if ((uVar3 >> 8 & 1) == 0) {
      if ((uVar3 >> 7 & 1) == 0) {
        func_0x0001073274d0();
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        break;
      }
      uVar7 = *(undefined8 *)unaff_x20;
      uVar8 = 4;
    }
    else {
      uVar7 = *(undefined8 *)unaff_x20;
      uVar8 = 5;
    }
    *unaff_x19 = uVar8;
    *(undefined8 *)(unaff_x19 + 2) = uVar7;
  }
  func_0x000107871270(uStack_38);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010786fb58:
  func_0x000107871318();
  func_0x0001078712e0();
  func_0x000107871258();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10786fb6c);
  (*pcVar5)();
}



/* Entry: 107870480; end: 1078705ff;  */

/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */

void FUN_107870480(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int **ppiVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  undefined8 *puVar14;
  int *extraout_x8_02;
  int *unaff_x19;
  int *unaff_x20;
  int *piVar15;
  undefined8 ***pppuVar16;
  undefined *puVar17;
  int aiStack_b0 [6];
  undefined8 uStack_98;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  undefined4 uStack_68;
  int *piStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int *piVar3;
  
  ppiVar4 = &piStack_70;
  func_0x000107871428();
  func_0x000107871298();
  func_0x00010787145c();
  func_0x000107326ddc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0x16) = 3;
  piVar8 = param_3;
  func_0x000104c2db28();
  piVar15 = (int *)&UNK_10de374a7;
  piStack_60 = piVar8;
  piStack_58 = param_2;
  if (piVar8 == (int *)0x0) {
    func_0x000107871270(uStack_38);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      piVar9 = piVar8;
      func_0x000107871384();
      puVar17 = &UNK_107870600;
      func_0x000107871338();
      piVar10 = param_2;
      piVar7 = extraout_x8_01;
      param_2 = param_3;
      pppuVar16 = (undefined8 ***)&stack0xfffffffffffffff0;
      goto code_r0x000107870600;
    }
  }
  else {
    piVar8 = param_2;
    piVar10 = param_2;
    func_0x000107264c5c();
    piStack_70 = piVar15;
    if (piVar8 != (int *)0x0) {
      piStack_70 = piVar8;
    }
    uStack_68 = SUB84(piVar10,0);
    iVar1 = param_2[0xe];
    uVar6 = iVar1 == 6;
    if ((bool)uVar6) {
      func_0x000107871308();
      func_0x000107870794();
    }
    else {
      uVar6 = iVar1 == 7;
      if ((bool)uVar6) {
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        func_0x00010787077c(&uStack_50);
      }
      else {
        uVar6 = iVar1 == 4;
        if ((bool)uVar6) {
          func_0x000107871308();
          func_0x0001078707ec();
        }
        else {
          uVar6 = iVar1 == 5;
          if ((bool)uVar6) {
            func_0x000107871308();
            func_0x0001078707c8();
          }
          else {
            uVar6 = iVar1 == 2;
            if ((bool)uVar6) {
              func_0x000107871498();
              func_0x000107870840();
            }
            else {
              uVar6 = iVar1 == 3;
              if ((bool)uVar6) {
                func_0x000107871308(*(undefined8 *)(param_2 + 0x10));
                func_0x000107870810();
              }
              else {
                uVar6 = iVar1 == 1;
                if ((bool)uVar6) {
                  func_0x000107871498();
                  FUN_107870480();
                }
                else {
                  func_0x000107871498();
                  FUN_1078708a8();
                }
              }
            }
          }
        }
      }
    }
    piVar3 = aiStack_b0;
    piVar10 = aiStack_b0;
    uStack_78 = 0x1078705b0;
    pppuVar16 = &ppuStack_80;
    piVar9 = unaff_x19;
    ppuStack_80 = (undefined8 **)&stack0xfffffffffffffff0;
    func_0x0001078712ac();
    func_0x000107871404();
    func_0x000107870de8();
    func_0x0001078712ec();
    func_0x000107871270(uStack_98);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001078712ec();
    puVar17 = &UNK_10787030c;
    func_0x00010787135c();
    piVar7 = extraout_x8_00;
    piVar8 = unaff_x20;
code_r0x00010787030c:
    puVar2 = (undefined1 *)((long)piVar3 + -0x70);
    *(int **)((long)piVar3 + -0x30) = piVar15;
    *(int **)((long)piVar3 + -0x28) = param_2;
    *(int **)((long)piVar3 + -0x20) = piVar8;
    *(int **)((long)piVar3 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)piVar3 + -0x10) = pppuVar16;
    *(undefined **)((long)piVar3 + -8) = puVar17;
    pppuVar16 = (undefined8 ***)((long)piVar3 + -0x10);
    func_0x000107871298();
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[0] = 0;
    piVar7[1] = 0;
    func_0x000107871364();
    *(undefined4 *)((long)piVar3 + -0x48) = 4;
    *(undefined **)((long)piVar3 + -0x60) = &DAT_10f35070a;
    *(undefined4 *)((long)piVar3 + -0x58) = 7;
    piVar11 = (int *)((long)piVar3 + -0x60);
    func_0x0001078713a8();
    iVar1 = piVar9[0xc];
    if (iVar1 != 4) {
      *(int **)((long)piVar3 + -0x68) = piVar10;
      *(char **)((long)piVar3 + -0x60) = "id";
      *(undefined4 *)((long)piVar3 + -0x58) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar9 + 0xe));
        func_0x000107870810();
      }
      else {
        piVar11 = piVar9 + 0xe;
        func_0x000107870840((undefined1 *)((long)piVar3 + -0x50),
                            (undefined1 *)((long)piVar3 + -0x68));
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)((long)piVar3 + -0x60) = &DAT_10f3005c3;
    *(undefined4 *)((long)piVar3 + -0x58) = 8;
    piVar13 = (int *)((long)piVar3 + -0x50);
    puVar17 = &UNK_107870408;
    unaff_x19 = piVar7;
    piVar8 = piVar10;
    param_2 = piVar9;
    while( true ) {
      *(int **)(puVar2 + -0x30) = piVar15;
      *(int **)(puVar2 + -0x28) = param_2;
      *(int **)(puVar2 + -0x20) = piVar8;
      *(int **)(puVar2 + -0x18) = unaff_x19;
      *(undefined8 ****)(puVar2 + -0x10) = pppuVar16;
      *(undefined **)(puVar2 + -8) = puVar17;
      func_0x000107871298();
      iVar1 = *piVar9;
      piVar13[2] = 0;
      piVar13[3] = 0;
      piVar13[4] = 0;
      piVar13[5] = 0;
      piVar13[0] = 0;
      piVar13[1] = 0;
      uVar6 = iVar1 == 7;
      piVar8 = piVar9;
      if (!(bool)uVar6) {
        piVar7 = piVar9;
        func_0x000107871364();
        *(undefined4 *)(puVar2 + -0x48) = 4;
        FUN_107870ecc();
        *(int **)(puVar2 + -0x60) = piVar7;
        _strlen();
        *(int *)(puVar2 + -0x58) = (int)piVar7;
        piVar11 = (int *)(puVar2 + -0x60);
        func_0x0001078713a8();
        uVar6 = *piVar9 == 0;
        puVar17 = &UNK_10f4303a6;
        if (!(bool)uVar6) {
          puVar17 = &UNK_10f43041c;
        }
        *(int **)(puVar2 + -0x68) = piVar10;
        *(undefined **)(puVar2 + -0x60) = puVar17;
        uVar12 = 10;
        if (!(bool)uVar6) {
          uVar12 = 0xb;
        }
        *(undefined4 *)(puVar2 + -0x58) = uVar12;
        piVar10 = (int *)(puVar2 + -0x68);
        func_0x000107870f70(puVar2 + -0x50);
        func_0x0001078712cc();
        func_0x000107871354();
        param_2 = piVar9;
      }
      func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
      if ((bool)uVar6) break;
      ___stack_chk_fail();
      piVar7 = piVar8;
      func_0x000107871354();
      func_0x000107871384();
      func_0x000107871338();
      puVar5 = puVar2 + -0xc0;
      *(int **)(puVar2 + -0x90) = piVar8;
      *(int **)(puVar2 + -0x88) = piVar13;
      *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
      pppuVar16 = (undefined8 ***)(puVar2 + -0x80);
      func_0x0001078712ac();
      *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
      iVar1 = piVar11[2];
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar11;
      *(undefined8 *)(puVar2 + -0xa0) = 0;
      *(undefined2 *)(puVar2 + -0x9a) = 0x405;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(int *)(puVar2 + -0xb0) = iVar1;
      *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar10;
      *(int *)(puVar2 + -0xb8) = piVar10[2];
      piVar11 = (int *)(puVar2 + -0xb0);
      puVar17 = &UNK_107870294;
      unaff_x19 = piVar13;
      while( true ) {
        ppiVar4 = (int **)(puVar5 + -0x40);
        piVar3 = (int *)(puVar5 + -0x40);
        puVar2 = puVar5 + -0x40;
        piVar10 = (int *)(puVar5 + -0x40);
        *(int **)(puVar5 + -0x20) = piVar8;
        *(int **)(puVar5 + -0x18) = unaff_x19;
        *(undefined8 ****)(puVar5 + -0x10) = pppuVar16;
        *(undefined **)(puVar5 + -8) = puVar17;
        pppuVar16 = (undefined8 ***)(puVar5 + -0x10);
        func_0x0001078712ac();
        func_0x000107871404();
        func_0x000107870de8();
        func_0x0001078712ec();
        func_0x000107871270(*(undefined8 *)(puVar5 + -0x28));
        if ((bool)uVar6) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001078712ec();
        puVar17 = &SUB_10787075c;
        func_0x00010787135c();
        piVar9 = piVar7 + 2;
        iVar1 = *piVar7;
        piVar13 = extraout_x8_02;
        if (iVar1 == 2) break;
        piVar7 = extraout_x8_02;
        if (iVar1 == 1) goto code_r0x00010787030c;
code_r0x000107870600:
        puVar5 = (undefined1 *)((long)ppiVar4 + -0x70);
        piVar3 = (int *)((long)ppiVar4 + -0x70);
        *(int **)((long)ppiVar4 + -0x30) = piVar15;
        *(int **)((long)ppiVar4 + -0x28) = param_2;
        *(int **)((long)ppiVar4 + -0x20) = piVar8;
        *(int **)((long)ppiVar4 + -0x18) = unaff_x19;
        *(undefined8 ****)((long)ppiVar4 + -0x10) = pppuVar16;
        *(undefined **)((long)ppiVar4 + -8) = puVar17;
        pppuVar16 = (undefined8 ***)((long)ppiVar4 + -0x10);
        func_0x000107871298();
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        func_0x000107871364();
        *(undefined4 *)((long)ppiVar4 + -0x48) = 4;
        *(undefined **)((long)ppiVar4 + -0x68) = &UNK_10f4305cd;
        *(undefined4 *)((long)ppiVar4 + -0x60) = 0x11;
        func_0x0001078713a8();
        *(undefined8 *)((long)ppiVar4 + -0x48) = 0;
        *(undefined8 *)((long)ppiVar4 + -0x40) = 0;
        *(undefined8 *)((long)ppiVar4 + -0x50) = 0;
        *(undefined2 *)((long)ppiVar4 + -0x3a) = 4;
        puVar14 = *(undefined8 **)piVar9;
        piVar9 = (int *)*puVar14;
        piVar15 = (int *)puVar14[1];
        uVar6 = piVar9 == piVar15;
        piVar8 = piVar10;
        unaff_x19 = piVar7;
        param_2 = piVar9;
        if (!(bool)uVar6) {
          piVar7 = (int *)((long)ppiVar4 + -0x68);
          puVar17 = &UNK_107870684;
          goto code_r0x00010787030c;
        }
        *(undefined **)((long)ppiVar4 + -0x68) = &UNK_10f4305df;
        *(undefined4 *)((long)ppiVar4 + -0x60) = 8;
        piVar11 = (int *)((long)ppiVar4 + -0x50);
        puVar17 = &UNK_1078706cc;
      }
    }
  }
  return;
}



/* Entry: 1078708a8; end: 1078709e3;  */

/* WARNING: Possible PIC construction at 0x0001078708d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078708d4) */
/* WARNING: Removing unreachable block (ram,0x0001078708e0) */
/* WARNING: Removing unreachable block (ram,0x0001078709ac) */
/* WARNING: Removing unreachable block (ram,0x0001078709c8) */
/* WARNING: Removing unreachable block (ram,0x0001078709dc) */
/* WARNING: Removing unreachable block (ram,0x0001078709b8) */
/* WARNING: Removing unreachable block (ram,0x000107871528) */
/* WARNING: Removing unreachable block (ram,0x0001078708ec) */
/* WARNING: Removing unreachable block (ram,0x00010787090c) */
/* WARNING: Removing unreachable block (ram,0x0001078708f8) */
/* WARNING: Removing unreachable block (ram,0x00010787091c) */
/* WARNING: Removing unreachable block (ram,0x00010787093c) */
/* WARNING: Removing unreachable block (ram,0x000107870924) */
/* WARNING: Removing unreachable block (ram,0x00010787094c) */
/* WARNING: Removing unreachable block (ram,0x00010787096c) */
/* WARNING: Removing unreachable block (ram,0x000107870954) */
/* WARNING: Removing unreachable block (ram,0x000107870978) */
/* WARNING: Removing unreachable block (ram,0x00010787098c) */
/* WARNING: Removing unreachable block (ram,0x000107870980) */
/* WARNING: Removing unreachable block (ram,0x00010787095c) */
/* WARNING: Removing unreachable block (ram,0x00010787092c) */
/* WARNING: Removing unreachable block (ram,0x000107870900) */
/* WARNING: Removing unreachable block (ram,0x000107870994) */

void FUN_1078708a8(undefined8 *param_1)

{
  func_0x000107871428();
  func_0x0001078712ac();
  func_0x00010787145c();
  func_0x000107326ddc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0x16) = 4;
  return;
}



/* Entry: 107870ecc; end: 107870ee7;  */

undefined * FUN_107870ecc(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (*param_1 == 7) {
    _abort();
  }
  if (*param_1 != 6) {
    if (*param_1 != 5) {
      iVar3 = *param_1;
      puVar1 = &UNK_10f4304ad;
      if (iVar3 != 1) {
        puVar1 = &UNK_10f430393;
      }
      puVar2 = &UNK_10f430495;
      if (iVar3 != 2) {
        puVar2 = puVar1;
      }
      puVar1 = &UNK_10f43047f;
      if (iVar3 != 3) {
        puVar1 = puVar2;
      }
      puVar2 = &UNK_10f4304a5;
      if (iVar3 != 4) {
        puVar2 = puVar1;
      }
      return puVar2;
    }
    return &UNK_10f43048a;
  }
  return &UNK_10f430479;
}



/* Entry: 10787112c; end: 10787122f;  */

undefined4 * FUN_10787112c(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined4 auStack_40 [6];
  undefined8 uStack_28;
  
  func_0x0001078712ac();
  uVar1 = *param_1 + -1 == 3;
  uStack_28 = extraout_x8;
  switch(*param_1 + -1) {
  case 0:
    func_0x000107871580(1);
    puVar2 = (undefined4 *)(extraout_x8_00 + 8);
    func_0x00010726982c();
    func_0x0001078712bc();
    break;
  case 1:
    func_0x000107871580(2);
    puVar2 = (undefined4 *)(extraout_x8_03 + 8);
    func_0x0001072696bc();
    func_0x0001078712bc();
    break;
  case 2:
    func_0x000107871580(3);
    puVar2 = (undefined4 *)(extraout_x8_01 + 8);
    func_0x000107269434();
    func_0x0001078712bc();
    break;
  case 3:
    func_0x000107871580(4);
    puVar2 = (undefined4 *)(extraout_x8_02 + 8);
    func_0x000107269534();
    func_0x0001078712bc();
    break;
  default:
    puVar2 = auStack_40;
    func_0x00010726998c(puVar2,param_1 + 2);
    func_0x0001078712bc();
  }
  func_0x000107871444();
  func_0x000107871270(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107871444();
    func_0x00010787135c();
    *puVar2 = 5;
    func_0x000107269434(puVar2 + 2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 107871900; end: 1078719a7;  */

bool FUN_107871900(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  lVar3 = lVar4 + 1;
  lVar2 = 0;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      lVar3 = 0;
      do {
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
          return true;
        }
        lVar2 = *param_1 + lVar3;
        func_0x000107871794(lVar2,lVar2 + 0x10,param_2);
        lVar3 = lVar3 + 0x10;
      } while ((int)lVar2 == 0);
      return lVar4 == 0;
    }
    uVar1 = *param_1 + lVar2;
    func_0x000107871848(uVar1,param_2,0);
    lVar2 = lVar2 + 0x10;
  } while ((uVar1 & 1) != 0);
  return false;
}



/* Entry: 107872514; end: 10787262b;  */

undefined8 FUN_107872514(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  
  fVar2 = *(float *)(param_2 + 0x23c334);
  if (*(float *)(param_2 + 0x23c334) <= param_1) {
    fVar2 = param_1;
  }
  lVar1 = param_2 + 0x23c348;
  iVar3 = (int)param_3;
  lVar7 = (long)iVar3;
  puVar4 = *(undefined8 **)(lVar1 + (long)iVar3 * 8);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = (ulong)(iVar3 * iVar3 + 4);
    _calloc(uVar5,4);
    *(ulong *)(lVar1 + lVar7 * 8) = uVar5;
    *(float *)(param_2 + lVar7 * 4 + 0x23d608) = fVar2;
    if (uVar5 != 0) {
      iVar3 = iVar3 / 2;
      func_0x0001078727ec(fVar2,param_2,uVar5,iVar3,iVar3,iVar3,param_3,param_3);
    }
  }
  else {
    fVar8 = *(float *)(param_2 + 0x23d608 + lVar7 * 4);
    if (1e-05 <= ABS(fVar8 - fVar2)) {
      fVar8 = fVar2 / fVar8;
      puVar6 = puVar4;
      for (uVar5 = 0; uVar5 < (iVar3 * iVar3 & 0x7ffffffc); uVar5 = uVar5 + 4) {
        puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) * fVar8,(float)puVar6[1] * fVar8);
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar8,(float)*puVar6 * fVar8);
        puVar6 = puVar6 + 2;
      }
      for (; uVar5 < (uint)(iVar3 * iVar3); uVar5 = uVar5 + 1) {
        *(float *)((long)puVar4 + uVar5 * 4) = fVar8 * *(float *)((long)puVar4 + uVar5 * 4);
      }
      *(float *)(param_2 + 0x23d608 + lVar7 * 4) = fVar2;
    }
  }
  return *(undefined8 *)(lVar1 + lVar7 * 8);
}



/* Entry: 107872bac; end: 107872bef;  */

undefined8 * FUN_107872bac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    func_0x000107872e94();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 107872dcc; end: 107872e27;  */

void FUN_107872dcc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107872e04(param_4);
  }
  func_0x0001078732f4();
  return;
}



/* Entry: 107872f8c; end: 107872fa7;  */

long * FUN_107872f8c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x000107872fd4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078730e4; end: 1078730ff;  */

void FUN_1078730e4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107873100(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


