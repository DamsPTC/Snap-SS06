/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107851b2c; end: 107851b5b;  */

undefined8 * FUN_107851b2c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x11a7b9611a7b962) {
    puVar1 = (undefined8 *)(param_2 * 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e29a8;
  func_0x000107851be8(param_1 + 3);
  return param_1;
}



/* Entry: 107851c64; end: 107851ec3;  */

void FUN_107851c64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e29a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107853040; end: 10785310f;  */

long FUN_107853040(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010731f100();
  func_0x0001073b2ef8(lVar1 + 0x20,param_2 + 0x20);
  func_0x00010751fcbc(param_1 + 0x40,param_2 + 0x40);
  func_0x000107853110(param_1 + 0x60,param_2 + 0x60);
  func_0x000107853154(param_1 + 0x80,param_2 + 0x80);
  func_0x00010731f100(param_1 + 0xa0,param_2 + 0xa0);
  func_0x00010751fcbc(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



/* Entry: 1078532c4; end: 1078533a3;  */

undefined8 * FUN_1078532c4(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107854460();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001072792b8(&uStack_30);
  return param_1;
}



/* Entry: 1078535c0; end: 107853603;  */

undefined8 * FUN_1078535c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001072bb3b4();
  uVar2 = uVar1;
  func_0x0001072bb3b4();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 107853770; end: 107853793;  */

void FUN_107853770(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e2b20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107854174; end: 107854193;  */

long * FUN_107854174(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48();
    plVar1 = (long *)plVar2[2];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      func_0x000107854118(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000107854184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 1078543fc; end: 107854407;  */

undefined ** FUN_1078543fc(void)

{
  return &PTR_DAT_1109e2c00;
}



/* Entry: 107854820; end: 107854833;  */

undefined8 * FUN_107854820(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e2c20;
  return param_1 + 1;
}



/* Entry: 107854d0c; end: 107854fd3;  */

undefined8 FUN_107854d0c(long param_1,int param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong auStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 uStack_e8;
  ulong uStack_88;
  long lStack_80;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 8) {
    uVar7 = 0;
    goto LAB_107854f0c;
  }
  lVar9 = *param_4;
  if (*(char *)(lVar9 + 0x1f) < '\0') {
    if (*(long *)(lVar9 + 0x10) != 0) goto LAB_107854d68;
  }
  else if (*(char *)(lVar9 + 0x1f) != '\0') {
LAB_107854d68:
    lVar8 = lVar9 + 0x100;
    func_0x000107268400(auStack_118);
    puStack_138 = &UNK_10e52b660;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x000104c2dd8c();
    uStack_88 = auStack_118[0];
    while (lStack_80 = lVar8, uStack_88 != 0) {
      func_0x0001077765a4(&puStack_f8,lVar8 + 0x38,&puStack_150);
      ppuVar5 = &puStack_138;
      func_0x0001072baf4c(ppuVar5,lVar8);
      func_0x00010726cda0(ppuVar5 + 1,&puStack_f0);
      func_0x00010726af18(&puStack_f0);
      func_0x000104c2de10(&uStack_88);
      lVar8 = lStack_80;
    }
    uVar6 = lVar9 + 0x20;
    func_0x000104c2d614();
    if ((uVar6 & 1) == 0) {
      uVar6 = lVar9 + 0x58;
      func_0x000104c2d614();
      if ((uVar6 & 1) != 0) goto LAB_107854df4;
      iVar4 = (int)lVar9 + 200;
      func_0x000104c2d614();
      if (iVar4 == 0) {
        func_0x00010729807c(&uStack_88,lVar9 + 200);
      }
      else {
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        uStack_50 = 0;
      }
      param_3 = (undefined8 *)0x58;
      __Znwm();
      plVar10 = param_3 + 1;
      *plVar10 = 0;
      param_3[2] = 0;
      *param_3 = &PTR_DAT_1109e2ce0;
      puVar1 = param_3 + 3;
      func_0x000107269228(&puStack_f8,lVar9 + 0x20);
      func_0x0001074fbd30(puVar1,&puStack_f8,lVar9 + 0x58,lVar9 + 0x90,&uStack_88);
      func_0x000104c319e0(&puStack_f8);
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_140 = 1;
      puStack_150 = puVar1;
      puStack_148 = param_3;
      func_0x000107855024(&uStack_108);
      func_0x00010724b3d8(&uStack_88);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_e8 = 1;
      puStack_f8 = puVar1;
      puStack_f0 = param_3;
    }
    else {
LAB_107854df4:
      puStack_150 = (undefined8 *)((ulong)puStack_150 & 0xffffffffffffff00);
      uStack_140 = 0;
      func_0x0001072ab9cc(&puStack_f8,param_3);
    }
    func_0x000107278fec(&uStack_88,&puStack_138);
    FUN_107854174(param_1 + 0x88,lVar9 + 8,&puStack_f8,&uStack_88);
    func_0x00010726b264(&uStack_88);
    func_0x000107279298(&puStack_f8);
    func_0x00010785504c(&puStack_150);
    func_0x00010726ae88(&puStack_138);
    func_0x000104c335c0(auStack_118);
  }
  uVar7 = 1;
  unaff_x20 = param_3;
LAB_107854f0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x000104c319e0(&puStack_f8);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  func_0x00010724b3d8(&uStack_88);
  func_0x00010726ae88(&puStack_138);
  func_0x000104c335c0(auStack_118);
  __Unwind_Resume(uVar7);
  func_0x000107855094();
  func_0x0001074f8ec0();
  return uVar7;
}



/* Entry: 10785506c; end: 10785508b;  */

void FUN_10785506c(void)

{
  func_0x000107855094();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 10785559c; end: 1078555d7;  */

long * FUN_10785559c(long *param_1)

{
  if (param_1[2] != 0) {
    func_0x0001078555d8(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 107855b1c; end: 107855c6b;  */

undefined8 * FUN_107855b1c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109e2d70;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107855db8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  func_0x000107855644(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 1078564ec; end: 1078564ff;  */

void FUN_1078564ec(void)

{
  func_0x000107856b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078565e4; end: 10785660b;  */

undefined8 * FUN_1078565e4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e2ea0;
  func_0x0001078567b4(puVar1 + 1);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar1;
}



/* Entry: 1078568c0; end: 107856917;  */

undefined8 * FUN_1078568c0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107856b60();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 107856aa8; end: 107856b07;  */

undefined8 * FUN_107856aa8(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1109e2f30;
  func_0x0001078567b4(param_1 + 1);
  FUN_1078568c0(param_1 + 4,param_2 + 0x18);
  return param_1;
}



/* Entry: 107856e80; end: 107856f57;  */

undefined1 *
FUN_107856e80(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  func_0x000107299598(param_1 + 8,param_3);
  func_0x000107299598(param_1 + 0x68,param_4);
  func_0x000107857008(param_1 + 200,param_5);
  func_0x000104c2fe00(param_1 + 0xf0,param_7);
  func_0x0001074d20cc(param_1 + 0x128,param_8);
  uVar1 = *param_6;
  *param_6 = 0;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  return param_1;
}



/* Entry: 107857160; end: 10785718b;  */

long FUN_107857160(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010785718c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078573dc; end: 1078573ef;  */

void FUN_1078573dc(void)

{
  func_0x00010785736c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107857974; end: 107857e73;  */

void FUN_107857974(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [112];
  long lStack_360;
  long lStack_358;
  ulong uStack_328;
  ulong uStack_320;
  long alStack_318 [5];
  undefined1 auStack_2f0 [56];
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  undefined1 auStack_240 [56];
  byte bStack_208;
  undefined4 auStack_200 [2];
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_120;
  long lStack_118;
  undefined1 auStack_f8 [136];
  undefined8 uStack_70;
  
  lVar12 = param_6;
  func_0x0001078599bc();
  auStack_200[0] = 0xfc;
  uStack_1e8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  ppuStack_1e0 = &PTR_DAT_110996720;
  uStack_1c0 = 0xfc;
  uStack_1b8 = 0;
  uStack_1b4 = 1;
  uStack_1a0 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_70 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3e8,lVar12);
  puVar6 = auStack_200;
  func_0x00010726e300(puVar6,"trigger",auStack_3e8);
  func_0x00010726e6c0(auStack_3d0,puVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e8);
  func_0x000107262330(auStack_200);
  auStack_200[0] = 1;
  uStack_1f8 = 0;
  uStack_2b8 = **(ulong **)(param_1 + 0x198);
  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,3);
  func_0x00010743fa9c(*(ulong **)(param_1 + 0x198),auStack_3d0,auStack_200,&uStack_2b8,7);
  func_0x0001078576b8(param_1 + 8);
  func_0x0001078696e8(auStack_400);
  func_0x000107751334(auStack_200,param_2);
  lStack_118 = param_4;
  func_0x000107295f10(auStack_f8,param_6 + 0x30);
  if (*(char *)(param_7 + 0x50) == '\x01') {
    func_0x00010729807c(auStack_240,param_7);
  }
  else {
    auStack_240[0] = 0;
    bStack_208 = 0;
  }
  if (*(char *)(param_6 + 0x28) == '\x01') {
    plVar13 = (long *)(param_6 + 0x18);
    func_0x000107392e34();
    lStack_360 = *plVar13;
    lStack_358 = plVar13[1];
    lVar12 = lStack_360;
    if (lStack_358 != 0) {
      plVar1 = (long *)(lStack_358 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = *plVar13;
    }
    func_0x000104c2fe00(&uStack_328,*(long *)(lVar12 + 0x30) + 0x60);
    func_0x000107859a5c();
    func_0x000104c2fe00(auStack_2f0,extraout_x8_00 + 0x98);
    func_0x0001073c4f74(&uStack_2b8,&uStack_328);
    func_0x000107751444(auStack_200,&lStack_360,&uStack_2b8);
    func_0x000107267e8c(&uStack_2b8);
    func_0x000107267eac(&uStack_328);
    func_0x000107267e44(&lStack_360);
    func_0x000107859a5c();
    if ((*(char *)(extraout_x8_01 + 0x160) == '\x01') &&
       (func_0x00010749fb50(param_5,extraout_x8_01 + 0x60), param_5 != 0)) {
      func_0x000107859a5c();
      func_0x000104c2fe00(&uStack_328,extraout_x8_02 + 0x98);
      func_0x0001072627ac(&uStack_2b8,&uStack_328);
      func_0x000107859a5c();
      lVar12 = extraout_x8_03 + 0x128;
      func_0x00010725ffc4(lVar12);
      func_0x000104c2fe00(&lStack_360,lVar12);
      func_0x00010750a094(param_5,auStack_400,&uStack_2b8,&lStack_360);
      func_0x000104c2f714(&lStack_360);
      func_0x00010724b3d8(&uStack_2b8);
      func_0x000104c2f714(&uStack_328);
      puStack_120 = auStack_400;
    }
    if ((bStack_208 & 1) == 0) {
      func_0x000107859a5c();
      func_0x00010726594c(auStack_240,extraout_x8_04 + 0xe8);
    }
  }
  uVar5 = bStack_208 == 1;
  if ((bool)uVar5) {
    uStack_320 = 0;
    alStack_318[0] = 0;
    uStack_328 = 0;
    func_0x000107859a1c();
    lVar12 = param_1 + 0xa0;
    puVar8 = auStack_240;
    func_0x000107859160();
    if ((lVar12 != 0) && (*(long *)(*(long *)(puVar8 + 0x38) + 0x18) != 0)) {
      plVar13 = (long *)(*(long *)(puVar8 + 0x38) + 0x10);
      while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
        func_0x000107859228(&uStack_2b8,plVar13 + 2);
        func_0x000107859a1c();
        func_0x000104c2f714(&uStack_2b8);
      }
    }
    uVar5 = uStack_328 == uStack_320;
    if (!(bool)uVar5) {
      func_0x000107859a08(param_1,auStack_240,&uStack_328);
    }
    func_0x000107859aa4();
  }
  else {
    lVar12 = **(long **)(param_1 + 8);
    lVar10 = (*(long **)(param_1 + 8))[1];
    func_0x000107859844();
    lStack_360 = lVar12;
    while (lStack_358 = lVar10, lStack_360 != 0) {
      lVar12 = lVar10 + 0x38;
      lVar11 = param_6;
      FUN_107859654();
      if (lVar12 != 0) {
        func_0x000104c2d614(lVar10);
        uStack_328 = 0;
        uStack_320 = 0;
        alStack_318[0] = 0;
        puVar14 = *(undefined8 **)(lVar12 + 0x28);
        puVar16 = *(undefined8 **)(lVar12 + 0x30);
        if ((long)puVar16 - (long)puVar14 != 0) {
          uVar7 = (long)puVar16 - (long)puVar14 >> 3;
          if (uVar7 >> 0x3d != 0) {
            func_0x00010785938c();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x107857dac);
            (*pcVar4)();
          }
          plStack_298 = alStack_318;
          FUN_107859398();
          uVar15 = uVar7 - (uStack_320 - uStack_328);
          _memcpy(uVar15);
          uStack_2a8 = uStack_328;
          lStack_2a0 = alStack_318[0];
          uStack_2b8 = uStack_328;
          uStack_2b0 = uStack_328;
          uStack_328 = uVar15;
          uStack_320 = uVar7;
          alStack_318[0] = uVar7 + lVar11 * 8;
          func_0x0001078593cc(&uStack_2b8);
          puVar14 = *(undefined8 **)(lVar12 + 0x28);
          puVar16 = *(undefined8 **)(lVar12 + 0x30);
        }
        for (; uVar5 = puVar14 == puVar16, !(bool)uVar5; puVar14 = puVar14 + 1) {
          func_0x000107859244(&uStack_328,*puVar14);
        }
        func_0x000107859a08(param_1,lVar10,&uStack_328);
        func_0x000107859aa4();
      }
      func_0x0001078598c4(&lStack_360);
      lVar10 = lStack_358;
    }
  }
  func_0x00010724b3d8(auStack_240);
  func_0x000107267da8(auStack_200);
  func_0x00010726b264(auStack_400);
  puVar8 = auStack_3d0;
  func_0x000107262330();
  func_0x00010785997c(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&lStack_360);
  func_0x00010724b3d8(&uStack_2b8);
  func_0x000104c2f714(&uStack_328);
  func_0x00010724b3d8(auStack_240);
  func_0x000107267da8(auStack_200);
  func_0x00010726b264(auStack_400);
  puVar9 = auStack_3d0;
  func_0x000107262330();
  func_0x0001078599cc();
  func_0x000107859a74();
  puVar9 = *(undefined1 **)(puVar9 + 8);
  while (puVar9 != puVar8) {
    puVar9 = puVar9 + -0x40;
    func_0x00010785902c();
  }
  *(undefined1 **)(param_4 + 8) = puVar8;
  return;
}



/* Entry: 107858f58; end: 107858f77;  */

void FUN_107858f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 107859398; end: 107859433;  */

undefined1  [16] FUN_107859398(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
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



/* Entry: 107859654; end: 107859727;  */

long FUN_107859654(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
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
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
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
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
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



/* Entry: 1078598f8; end: 10785990f;  */

void FUN_1078598f8(long *param_1,long param_2)

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



/* Entry: 107859da8; end: 107859ddb;  */

int FUN_107859da8(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (uVar1 >> 0x18) * 1000000 + (uVar1 & 0xff) + (uVar1 >> 0x10 & 0xff) * 10000 +
         (uVar1 >> 8 & 0xff) * 100;
}



/* Entry: 10785a1c4; end: 10785a23b;  */

/* WARNING: Possible PIC construction at 0x00010785a2e8: Changing call to branch */
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

undefined ** FUN_10785a1c4(undefined8 *param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined *apuStack_b0 [4];
  
  func_0x00010785a7a0();
  func_0x00010785a7cc();
  ppuVar4 = &PTR_DAT_1109e30e0;
  ppuVar2 = ppuVar4;
  func_0x00010785a244();
  ppuVar3 = ppuVar2;
  func_0x00010785a7c4();
  bVar1 = (int)ppuVar2 == 0;
  if (bVar1) {
    ppuVar4 = (undefined **)0x0;
  }
  *param_1 = ppuVar4;
  func_0x00010785a78c(extraout_x8);
  if (bVar1) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  func_0x00010785a7b0();
  func_0x00010785a7bc();
  ppuVar3 = (undefined **)*ppuVar3;
  ppuVar4 = apuStack_b0;
  ppuVar2 = apuStack_b0;
  func_0x00010785a7a0();
  func_0x00010688d7f0();
  func_0x00010785a824();
  while ((ppuVar4 != ppuVar3 &&
         (puVar5 = (undefined1 *)ppuVar2, func_0x00010688d198(ppuVar2,(long)*(char *)ppuVar4),
         ((ulong)puVar5 & 1) == 0))) {
    ppuVar4 = (undefined **)((long)ppuVar4 + 1);
  }
  return ppuVar4;
}



/* Entry: 10785a4a0; end: 10785a4f7;  */

void FUN_10785a4a0(ulong *param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010785a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*param_1 & 0xfffffffffffffffe) + 8))(param_1 + 1);
    return;
  }
  func_0x00010688d590(auStack_30);
  func_0x00010688d390(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10785a4e8);
  (*pcVar1)();
}



/* Entry: 10785a830; end: 10785a92b;  */

undefined2 * FUN_10785a830(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined2 **)(param_1 + 0x30) = puVar1;
  func_0x0001073af4e0(&puStack_40);
  *(undefined8 *)(param_1 + 0x38) = uStack_38;
  *(undefined2 **)(param_1 + 0x34) = puStack_40;
  puStack_40 = (undefined2 *)0x0;
  uStack_38 = 0;
  func_0x00010724b8b8(&puStack_40);
  func_0x00010726ed14(param_1 + 0x3c);
  *(undefined2 **)(param_1 + 0x44) = param_1;
  puVar1 = param_1;
  func_0x00010785a92c(param_1);
  func_0x00010785a938();
  __ZNSt3__15mutex4lockEv();
  puStack_40 = param_1;
  func_0x00010785a9d4(puVar1 + 0x20,&puStack_40);
  __ZNSt3__15mutex6unlockEv(puVar1);
  return param_1;
}



/* Entry: 10785adb8; end: 10785aec7;  */

void FUN_10785adb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x60) = lVar3;
  lStack_70 = lVar1;
  uStack_68 = uVar2;
  uStack_60 = uVar7;
  func_0x00010785a92c(param_1);
  plVar6 = *(long **)(param_1 + 0x68);
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_40 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x20;
  lStack_88 = lVar1;
  uStack_80 = uVar2;
  uStack_78 = uVar7;
  __Znwm();
  *puVar4 = &PTR_DAT_1109e3100;
  puVar4[1] = lVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar7;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_88 = 0;
  puStack_40 = puVar4;
  (**(code **)(*plVar6 + 0x10))(plVar6,auStack_58);
  func_0x0001006393ec(auStack_58);
  FUN_10785b1ac(&lStack_88);
  plVar6 = &lStack_70;
  FUN_10785b1ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  FUN_10785b1ac(&lStack_88);
  plVar5 = &lStack_70;
  FUN_10785b1ac();
  func_0x00010785c018();
  func_0x00010785c08c();
  plVar5 = (long *)plVar5[1];
  while (plVar5 != plVar6) {
    plVar5 = plVar5 + -2;
    func_0x0001000df524();
  }
  *(long **)(lVar1 + 8) = plVar6;
  return;
}



/* Entry: 10785b1ac; end: 10785b257;  */

undefined8 FUN_10785b1ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010785b1d8(&uStack_28);
  return param_1;
}



/* Entry: 10785b40c; end: 10785b413;  */

void FUN_10785b40c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001000df524();
  }
  return;
}



/* Entry: 10785b670; end: 10785b6df;  */

void FUN_10785b670(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x00010725b1d4();
  }
  return;
}



/* Entry: 10785b8b0; end: 10785b8d7;  */

void FUN_10785b8b0(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010785c108();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10785be80; end: 10785beb3;  */

undefined8 * FUN_10785be80(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_2 = &PTR_DAT_1109e3100;
  puStack_40 = param_2 + 1;
  *puStack_40 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uStack_38 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  if (lVar8 != 0) {
    uVar7 = lVar8 >> 4;
    if (uVar7 >> 0x3c != 0) {
      func_0x00010785b34c();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10785bfbc);
      (*pcVar5)();
    }
    puVar6 = param_2 + 3;
    func_0x00010785b3a0();
    param_2[1] = puVar6;
    param_2[2] = puVar6;
    param_2[3] = puVar6 + uVar7 * 2;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
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
      puVar6 = puVar6 + 2;
    }
    param_2[2] = puVar6;
  }
  uStack_38 = 1;
  func_0x00010785bfcc(&puStack_40);
  return param_2;
}



/* Entry: 10785c5f8; end: 10785c64f;  */

void FUN_10785c5f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_90 = *param_2;
  uStack_88 = param_2[1];
  uStack_70 = param_2[3];
  uStack_48 = param_2[4];
  uStack_78 = 0x3ff0000000000000;
  uStack_80 = 0;
  uStack_58 = 0x3ff0000000000000;
  uStack_60 = 0;
  uStack_38 = 0x3ff0000000000000;
  uStack_40 = 0;
  uStack_18 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_68 = uStack_88;
  uStack_50 = uStack_70;
  uStack_30 = uStack_90;
  uStack_28 = uStack_48;
  func_0x00010785c650(param_1,&uStack_90,4,param_2);
  return;
}



/* Entry: 10785c9c0; end: 10785c9f3;  */

undefined1  [16] FUN_10785c9c0(double param_1,double param_2,double param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x29;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &stack0x00000008;
  lVar2 = 0xc0;
  dVar4 = 1.79769313486232e+308;
  dVar5 = -1.79769313486232e+308;
  do {
    func_0x00010785c128(puVar1,&stack0x000002f0);
    dVar3 = param_2 * *(double *)(unaff_x29 + -0x78);
    param_2 = *(double *)(unaff_x29 + -0x70);
    param_1 = dVar3 + *(double *)(unaff_x29 + -0x80) * param_1 + param_2 * param_3;
    if (param_1 <= dVar4) {
      dVar4 = param_1;
    }
    if (dVar5 <= param_1) {
      dVar5 = param_1;
    }
    puVar1 = puVar1 + 0x18;
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 10785cdbc; end: 10785cdd3;  */

double FUN_10785cdbc(long param_1)

{
  return -*(double *)(param_1 + 0x60);
}



/* Entry: 10785d09c; end: 10785d0b3;  */

double FUN_10785d09c(double param_1)

{
  func_0x00010785d2f8();
  return SQRT(param_1);
}



/* Entry: 10785d4bc; end: 10785d4f7;  */

void FUN_10785d4bc(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 10785d77c; end: 10785d837;  */

void FUN_10785d77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  func_0x000100060b18(auStack_60,&uStack_40);
  func_0x00010726db00(param_1 + 0x10,auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
  func_0x000100060b18(auStack_78,&uStack_40);
  func_0x00010785dc84();
  func_0x00010785dc70();
  func_0x00010785dd6c();
  func_0x00010785dd98();
  func_0x00010785dcf8();
  return;
}



/* Entry: 10785da68; end: 10785dab3;  */

void FUN_10785da68(void)

{
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dd8c();
  func_0x00010785dc70();
  func_0x00010785dd24();
  return;
}



/* Entry: 10785e288; end: 10785e3af;  */

undefined1 *
FUN_10785e288(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [64];
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010785e024();
  func_0x00010002b838(auStack_1c8,&UNK_10f42b453);
  func_0x000107268798(auStack_198,auStack_1c8);
  uStack_158 = 3;
  uStack_118 = 3;
  uStack_d8 = 3;
  uStack_98 = 3;
  puVar3 = auStack_198;
  uStack_150 = param_2;
  uStack_110 = param_3;
  uStack_d0 = param_4;
  uStack_90 = param_5;
  func_0x000107268bc4(&uStack_1b0,puVar3,5);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_1a8;
  *(undefined8 *)(param_1 + 2) = uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  func_0x000104c33108(&uStack_1b0);
  lVar4 = 0x100;
  do {
    puVar2 = auStack_198 + lVar4;
    func_0x000104c3323c();
    lVar4 = lVar4 + -0x40;
    uVar1 = lVar4 == -0x40;
  } while (!(bool)uVar1);
  func_0x00010785e438();
  func_0x00010785e450(uStack_58);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar4 = 0x100;
  do {
    func_0x000104c3323c(auStack_198 + lVar4);
    lVar4 = lVar4 + -0x40;
  } while (lVar4 != -0x40);
  func_0x00010785e438();
  __Unwind_Resume(puVar2);
  puStack_1d8 = &UNK_10785e3b0;
  puStack_1f8 = (undefined1 *)0x0;
  puStack_1f0 = auStack_198;
  puStack_1e8 = puVar2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x0001073ca0ec(&puStack_1f8,puVar3 + 0xc);
  func_0x0001073ca0ec(&puStack_1f8,puVar3);
  func_0x0001073ca0ec(&puStack_1f8,puVar3 + 4);
  func_0x0001073ca0ec(&puStack_1f8,puVar3 + 8);
  return puStack_1f8;
}



/* Entry: 10785e73c; end: 10785e7b7;  */

void FUN_10785e73c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x000107869104();
  func_0x00010785e7b8();
  func_0x000107868fd8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x000107869448();
  func_0x000107868ff0();
  if ((unaff_x20 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010786921c();
    unaff_x19[1] = in_register_00005008;
    *unaff_x19 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x000107869150();
  return;
}



/* Entry: 10785eaf4; end: 10785eb43;  */

void FUN_10785eaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  FUN_107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) == 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    FUN_1078684d4();
    func_0x0001072890a8(*puVar2,param_3);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 10785ee6c; end: 10785eeab;  */

void FUN_10785ee6c(long param_1,undefined8 param_2)

{
  func_0x000107868fbc();
  func_0x0001072d80fc(param_1 + 0xa8,param_2);
  func_0x0001078692b8();
  return;
}



/* Entry: 10785f2c0; end: 107864d5b;  */

/* WARNING: Removing unreachable block (ram,0x000107863c1c) */
/* WARNING: Removing unreachable block (ram,0x000107863608) */
/* WARNING: Removing unreachable block (ram,0x0001078631d0) */
/* WARNING: Removing unreachable block (ram,0x0001078627a8) */
/* WARNING: Removing unreachable block (ram,0x0001078624f4) */
/* WARNING: Removing unreachable block (ram,0x0001078622fc) */
/* WARNING: Removing unreachable block (ram,0x0001078621ac) */
/* WARNING: Removing unreachable block (ram,0x000107861978) */
/* WARNING: Removing unreachable block (ram,0x000107861680) */
/* WARNING: Removing unreachable block (ram,0x000107861574) */
/* WARNING: Removing unreachable block (ram,0x000107860650) */
/* WARNING: Removing unreachable block (ram,0x0001078603c8) */
/* WARNING: Removing unreachable block (ram,0x00010785fb78) */
/* WARNING: Removing unreachable block (ram,0x00010785f8f0) */
/* WARNING: Removing unreachable block (ram,0x00010785f4a8) */
/* WARNING: Removing unreachable block (ram,0x00010785f418) */
/* WARNING: Removing unreachable block (ram,0x00010785f77c) */
/* WARNING: Removing unreachable block (ram,0x00010785f970) */
/* WARNING: Removing unreachable block (ram,0x00010785fcf0) */
/* WARNING: Removing unreachable block (ram,0x000107860458) */
/* WARNING: Removing unreachable block (ram,0x000107860eb8) */
/* WARNING: Removing unreachable block (ram,0x0001078615f8) */
/* WARNING: Removing unreachable block (ram,0x0001078618f0) */
/* WARNING: Removing unreachable block (ram,0x000107861e84) */
/* WARNING: Removing unreachable block (ram,0x00010786225c) */
/* WARNING: Removing unreachable block (ram,0x0001078623ac) */
/* WARNING: Removing unreachable block (ram,0x0001078626f8) */
/* WARNING: Removing unreachable block (ram,0x000107862850) */
/* WARNING: Removing unreachable block (ram,0x000107863340) */
/* WARNING: Removing unreachable block (ram,0x0001078638d8) */
/* WARNING: Removing unreachable block (ram,0x000107863fd4) */

undefined8 * FUN_10785f2c0(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  undefined8 extraout_x8_55;
  undefined8 uVar4;
  undefined8 extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  long extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  long extraout_x8_72;
  long extraout_x8_73;
  long extraout_x8_74;
  long extraout_x8_75;
  long extraout_x8_76;
  long extraout_x8_77;
  long extraout_x8_78;
  long extraout_x8_79;
  long extraout_x8_80;
  long extraout_x8_81;
  long extraout_x8_82;
  long extraout_x8_83;
  long extraout_x8_84;
  long extraout_x8_85;
  long extraout_x8_86;
  long extraout_x8_87;
  long extraout_x8_88;
  long extraout_x8_89;
  long extraout_x8_90;
  long extraout_x8_91;
  long extraout_x8_92;
  long extraout_x8_93;
  long extraout_x8_94;
  long extraout_x8_95;
  long extraout_x8_96;
  long extraout_x8_97;
  long extraout_x8_98;
  long extraout_x8_99;
  long extraout_x8_x00100;
  undefined8 extraout_x8_x00101;
  long extraout_x8_x00102;
  long extraout_x8_x00103;
  long extraout_x8_x00104;
  long extraout_x8_x00105;
  long extraout_x8_x00106;
  long extraout_x8_x00107;
  long extraout_x8_x00108;
  long extraout_x8_x00109;
  long extraout_x8_x00110;
  long extraout_x8_x00111;
  long extraout_x8_x00112;
  long extraout_x8_x00113;
  long extraout_x8_x00114;
  long extraout_x8_x00115;
  long extraout_x8_x00116;
  long extraout_x8_x00117;
  long extraout_x8_x00118;
  long extraout_x8_x00119;
  long extraout_x8_x00120;
  long extraout_x8_x00121;
  long extraout_x8_x00122;
  long extraout_x8_x00123;
  long extraout_x8_x00124;
  long extraout_x8_x00125;
  long extraout_x8_x00126;
  long extraout_x8_x00127;
  long extraout_x8_x00128;
  long extraout_x8_x00129;
  long extraout_x8_x00130;
  long extraout_x8_x00131;
  long extraout_x8_x00132;
  long extraout_x8_x00133;
  long extraout_x8_x00134;
  long extraout_x8_x00135;
  long extraout_x8_x00136;
  long extraout_x8_x00137;
  long extraout_x8_x00138;
  long extraout_x8_x00139;
  long extraout_x8_x00140;
  long extraout_x8_x00141;
  long extraout_x8_x00142;
  long extraout_x8_x00143;
  long extraout_x8_x00144;
  long extraout_x8_x00145;
  long extraout_x8_x00146;
  long extraout_x8_x00147;
  long extraout_x8_x00148;
  long extraout_x8_x00149;
  long extraout_x8_x00150;
  long extraout_x8_x00151;
  long extraout_x8_x00152;
  long extraout_x8_x00153;
  long extraout_x8_x00154;
  long extraout_x8_x00155;
  long extraout_x8_x00156;
  long extraout_x8_x00157;
  long extraout_x8_x00158;
  long extraout_x8_x00159;
  long extraout_x8_x00160;
  long extraout_x8_x00161;
  long extraout_x8_x00162;
  long extraout_x8_x00163;
  long extraout_x8_x00164;
  long extraout_x8_x00165;
  long extraout_x8_x00166;
  long extraout_x8_x00167;
  long extraout_x8_x00168;
  long extraout_x8_x00169;
  long extraout_x8_x00170;
  long extraout_x8_x00171;
  long extraout_x8_x00172;
  long extraout_x8_x00173;
  long extraout_x8_x00174;
  long extraout_x8_x00175;
  long extraout_x8_x00176;
  long extraout_x8_x00177;
  long extraout_x8_x00178;
  long extraout_x8_x00179;
  long extraout_x8_x00180;
  long lVar5;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
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
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w10_41;
  int extraout_w10_42;
  int extraout_w10_43;
  int extraout_w10_44;
  int extraout_w10_45;
  int extraout_w10_46;
  int extraout_w10_47;
  int extraout_w10_48;
  int extraout_w10_49;
  int extraout_w10_50;
  int extraout_w10_51;
  int extraout_w10_52;
  int extraout_w10_53;
  int extraout_w10_54;
  int extraout_w10_55;
  int extraout_w10_56;
  int extraout_w10_57;
  int extraout_w10_58;
  int extraout_w10_59;
  int extraout_w10_60;
  int extraout_w10_61;
  int extraout_w10_62;
  int extraout_w10_63;
  int extraout_w10_64;
  int extraout_w10_65;
  int extraout_w10_66;
  int extraout_w10_67;
  int extraout_w10_68;
  int extraout_w10_69;
  int extraout_w10_70;
  int extraout_w10_71;
  int extraout_w10_72;
  int extraout_w10_73;
  int extraout_w10_74;
  int extraout_w10_75;
  int extraout_w10_76;
  int extraout_w10_77;
  int extraout_w10_78;
  int extraout_w10_79;
  int extraout_w10_80;
  int extraout_w10_81;
  int extraout_w10_82;
  int extraout_w10_83;
  int extraout_w10_84;
  int extraout_w10_85;
  int extraout_w10_86;
  int extraout_w10_87;
  int extraout_w10_88;
  int extraout_w10_89;
  int extraout_w10_90;
  int extraout_w10_91;
  int extraout_w10_92;
  int extraout_w10_93;
  int extraout_w10_94;
  int extraout_w10_95;
  int extraout_w10_96;
  int extraout_w10_97;
  int extraout_w10_98;
  int extraout_w10_99;
  int extraout_w10_x00100;
  int extraout_w10_x00101;
  int extraout_w10_x00102;
  int extraout_w10_x00103;
  int extraout_w10_x00104;
  int extraout_w10_x00105;
  int extraout_w10_x00106;
  int extraout_w10_x00107;
  int extraout_w10_x00108;
  int extraout_w10_x00109;
  int extraout_w10_x00110;
  int extraout_w10_x00111;
  int extraout_w10_x00112;
  int extraout_w10_x00113;
  int extraout_w10_x00114;
  int extraout_w10_x00115;
  int extraout_w10_x00116;
  int extraout_w10_x00117;
  int extraout_w10_x00118;
  int extraout_w10_x00119;
  int extraout_w10_x00120;
  int extraout_w10_x00121;
  int extraout_w10_x00122;
  int extraout_w10_x00123;
  int extraout_w10_x00124;
  int extraout_w10_x00125;
  int extraout_w10_x00126;
  int extraout_w10_x00127;
  int extraout_w10_x00128;
  int extraout_w10_x00129;
  int extraout_w10_x00130;
  int extraout_w10_x00131;
  int extraout_w10_x00132;
  int extraout_w10_x00133;
  int extraout_w10_x00134;
  int extraout_w10_x00135;
  int extraout_w10_x00136;
  int extraout_w10_x00137;
  int extraout_w10_x00138;
  int extraout_w10_x00139;
  int extraout_w10_x00140;
  int extraout_w10_x00141;
  int extraout_w10_x00142;
  int extraout_w10_x00143;
  int extraout_w10_x00144;
  int extraout_w10_x00145;
  int extraout_w10_x00146;
  int extraout_w10_x00147;
  int extraout_w10_x00148;
  int extraout_w10_x00149;
  int extraout_w10_x00150;
  int extraout_w10_x00151;
  int extraout_w10_x00152;
  int extraout_w10_x00153;
  int extraout_w10_x00154;
  int extraout_w10_x00155;
  int extraout_w10_x00156;
  int extraout_w10_x00157;
  int extraout_w10_x00158;
  int extraout_w10_x00159;
  int extraout_w10_x00160;
  int extraout_w10_x00161;
  int extraout_w10_x00162;
  int extraout_w10_x00163;
  int extraout_w10_x00164;
  int extraout_w10_x00165;
  int extraout_w10_x00166;
  int extraout_w10_x00167;
  int extraout_w10_x00168;
  int extraout_w10_x00169;
  int extraout_w10_x00170;
  int extraout_w10_x00171;
  int extraout_w10_x00172;
  int extraout_w10_x00173;
  int extraout_w10_x00174;
  int extraout_w10_x00175;
  int extraout_w10_x00176;
  int extraout_w10_x00177;
  int extraout_w10_x00178;
  int extraout_w10_x00179;
  int extraout_w10_x00180;
  int extraout_w10_x00181;
  int extraout_w10_x00182;
  int extraout_w10_x00183;
  int extraout_w10_x00184;
  int extraout_w10_x00185;
  int extraout_w10_x00186;
  int extraout_w10_x00187;
  int extraout_w10_x00188;
  int extraout_w10_x00189;
  int extraout_w10_x00190;
  int extraout_w10_x00191;
  int extraout_w10_x00192;
  int extraout_w10_x00193;
  int extraout_w10_x00194;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  ulong uVar6;
  long unaff_x23;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  *param_1 = &PTR_DAT_1109e33d8;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *param_1 = &PTR_DAT_1109e3218;
  _bzero(param_1 + 0x1c,0xaf0);
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar1 = param_1 + 0x17a;
  puVar2[4] = 0;
  puVar7 = (undefined *)0x0;
  uVar8 = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  param_1[0x17a] = puVar2;
  param_1[0x17b] = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)((long)param_1 + 0xbe4) = 0;
  func_0x00010786935c(&UNK_10f42b5ba);
  func_0x000107869580(&UNK_10f42b5d3);
  func_0x000107868d3c();
  uVar6 = 0;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107865ffc(unaff_x23 + 0x10);
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x1d];
    uVar8 = param_1[0x1d];
    puVar7 = (undefined *)param_1[0x1c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x000107869004(param_1 + 0x1c);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42b62e;
  puStack_78 = (undefined *)0x9;
  puStack_70 = &UNK_10f42b638;
  uStack_68 = 0x48;
  func_0x000107868d3c();
  func_0x000107868da4(9,*puVar1);
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_00 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x1f];
  puVar7 = (undefined *)param_1[0x1e];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x1f] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107869004(param_1 + 0x1e);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42b681;
  puStack_78 = (undefined *)0x1a;
  puStack_70 = &UNK_10f42b69c;
  uStack_68 = 0x43;
  func_0x000107868de0();
  func_0x000107868da4(0x1a,*puVar1);
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001078690d4(param_1 + 0x20);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42b6e0;
  puStack_78 = (undefined *)0x29;
  puStack_70 = &UNK_10f42b70a;
  uStack_68 = 0x3b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078661e0();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x23];
    uVar8 = param_1[0x23];
    puVar7 = (undefined *)param_1[0x22];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_03;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_04 != 0);
  }
  func_0x000107869004(param_1 + 0x22);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42b746);
  puStack_70 = &UNK_10f42b768;
  uStack_68 = 0x43;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x25];
    uVar8 = param_1[0x25];
    puVar7 = (undefined *)param_1[0x24];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_04;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_05 != 0);
  }
  func_0x000107869004(param_1 + 0x24);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42b7ac);
  puStack_70 = &UNK_10f42b7d3;
  uStack_68 = 0x3e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x27];
    uVar8 = param_1[0x27];
    puVar7 = (undefined *)param_1[0x26];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_05;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_06 != 0);
  }
  func_0x000107869004(param_1 + 0x26);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869394(&UNK_10f42b812);
  puStack_70 = &UNK_10f42b835;
  uStack_68 = 0x38;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866270();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x29];
    uVar8 = param_1[0x29];
    puVar7 = (undefined *)param_1[0x28];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_06;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_07 != 0);
  }
  func_0x000107869004(param_1 + 0x28);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42b86e;
  puStack_78 = (undefined *)0x2c;
  puStack_70 = &UNK_10f42b89b;
  uStack_68 = 0x50;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078662a0();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x2b];
    uVar8 = param_1[0x2b];
    puVar7 = (undefined *)param_1[0x2a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_07;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_08 != 0);
  }
  func_0x000107869004(param_1 + 0x2a);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42b8ec;
  puStack_78 = (undefined *)0x18;
  puStack_70 = &UNK_10f42b905;
  uStack_68 = 0x73;
  func_0x000107868ebc();
  func_0x00010785e878();
  func_0x000107868da4(0x18,*puVar1);
  if (extraout_x8_08 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_09 != 0);
  }
  uStack_60 = 5;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x2d];
  puVar7 = (undefined *)param_1[0x2c];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x2d] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_10 != 0);
  }
  func_0x00010786953c(param_1 + 0x2c);
  func_0x000107869544();
  func_0x0001078693ac();
  func_0x000107869394(&UNK_10f42b979);
  puStack_70 = &UNK_10f42b99c;
  uStack_68 = 0x7d;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078662f4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x2f];
    uVar8 = param_1[0x2f];
    puVar7 = (undefined *)param_1[0x2e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_09;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_11 != 0);
  }
  func_0x0001078690d4(param_1 + 0x2e);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869228(&UNK_10f42ba1a);
  func_0x0001078695d0(&UNK_10f42ba3a);
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866324();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x31];
    uVar8 = param_1[0x31];
    puVar7 = (undefined *)param_1[0x30];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_10;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_12 != 0);
  }
  func_0x0001078690d4(param_1 + 0x30);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42ba63;
  puStack_78 = (undefined *)0x1c;
  func_0x0001078695c4(&UNK_10f42ba80);
  func_0x000107868ebc();
  func_0x00010785e920();
  func_0x000107868da4(0x1c,*puVar1);
  if (extraout_x8_11 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_13 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_12 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_14 != 0);
  }
  func_0x0001078690d4(param_1 + 0x32);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42baa6;
  puStack_78 = (undefined *)0x32;
  puStack_70 = &UNK_10f42bad9;
  uStack_68 = 0x58;
  func_0x000107868d3c();
  func_0x000107868da4(0x32,*puVar1);
  if (extraout_x8_13 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_15 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x35];
  puVar7 = (undefined *)param_1[0x34];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x35] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_16 != 0);
  }
  func_0x000107869004(param_1 + 0x34);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694ec(&DAT_10f408b25);
  func_0x0001078695d0(&UNK_10f42bb32);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866354();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x37];
    uVar8 = param_1[0x37];
    puVar7 = (undefined *)param_1[0x36];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_14;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_17 != 0);
  }
  func_0x000107869004(param_1 + 0x36);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694d4(&UNK_10f42bb5b);
  puStack_70 = &UNK_10f42bb77;
  uStack_68 = 0x39;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866384();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x39];
    uVar8 = param_1[0x39];
    puVar7 = (undefined *)param_1[0x38];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_15;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_18 != 0);
  }
  func_0x000107869004(param_1 + 0x38);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42bbb1;
  puStack_78 = (undefined *)0x15;
  puStack_70 = &UNK_10f42bbc7;
  uStack_68 = 0x172;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078663b4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x3b];
    uVar8 = param_1[0x3b];
    puVar7 = (undefined *)param_1[0x3a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_16;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_19 != 0);
  }
  func_0x000107869004(param_1 + 0x3a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864d5c(param_1,param_1 + 0x3c,&UNK_10f42bd3a,&UNK_10f42bd61);
  puStack_80 = &UNK_10f42bdd9;
  puStack_78 = (undefined *)0x13;
  puStack_70 = &UNK_10f42bded;
  uStack_68 = 0x6d;
  func_0x000107868de0();
  func_0x000107868da4(0x13,*puVar1);
  if (extraout_x8_17 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_20 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_18 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_21 != 0);
  }
  func_0x0001078690d4(param_1 + 0x3e);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869394(&UNK_10f42be5b);
  puStack_70 = &UNK_10f42be7e;
  uStack_68 = 0x37;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866270();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x41];
    uVar8 = param_1[0x41];
    puVar7 = (undefined *)param_1[0x40];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_19;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_22 != 0);
  }
  func_0x000107869004(param_1 + 0x40);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42beb6;
  puStack_78 = (undefined *)0xf;
  puStack_70 = &UNK_10f42bec6;
  uStack_68 = 0x2e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078663e4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x43];
    uVar8 = param_1[0x43];
    puVar7 = (undefined *)param_1[0x42];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_20;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_23 != 0);
  }
  func_0x000107869004(param_1 + 0x42);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42bef5;
  puStack_78 = (undefined *)0x19;
  puStack_70 = &UNK_10f42bf0f;
  uStack_68 = 0x2a;
  func_0x000107868ebc();
  func_0x00010785e920();
  func_0x000107868da4(0x19,*puVar1);
  if (extraout_x8_21 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_24 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_22 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_25 != 0);
  }
  func_0x0001078690d4(param_1 + 0x44);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &DAT_10f300fc6;
  puStack_78 = (undefined *)0x27;
  func_0x000107869580(&UNK_10f42bf3a);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866414();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x47];
    uVar8 = param_1[0x47];
    puVar7 = (undefined *)param_1[0x46];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_23;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_26 != 0);
  }
  func_0x000107869004(param_1 + 0x46);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&DAT_10f3010ca);
  puStack_70 = &UNK_10f42bf95;
  uStack_68 = 0x60;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x49];
    uVar8 = param_1[0x49];
    puVar7 = (undefined *)param_1[0x48];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_24;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_27 != 0);
  }
  func_0x000107869004(param_1 + 0x48);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694b0(&UNK_10f42bff6);
  puStack_70 = &UNK_10f42c010;
  uStack_68 = 0x2b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866444();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x4b];
    uVar8 = param_1[0x4b];
    puVar7 = (undefined *)param_1[0x4a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_25;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_28 != 0);
  }
  func_0x000107869004(param_1 + 0x4a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42c03c);
  puStack_70 = &UNK_10f42c05c;
  uStack_68 = 0x29;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866324();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x4d];
    uVar8 = param_1[0x4d];
    puVar7 = (undefined *)param_1[0x4c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_26;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_29 != 0);
  }
  func_0x0001078690d4(param_1 + 0x4c);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x0001078694d4(&UNK_10f42c086);
  func_0x0001078695a4(&UNK_10f42c0a2);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866384();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x4f];
    uVar8 = param_1[0x4f];
    puVar7 = (undefined *)param_1[0x4e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_27;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_30 != 0);
  }
  func_0x000107869004(param_1 + 0x4e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42c0ee);
  puStack_70 = &UNK_10f42c110;
  uStack_68 = 0x7e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x51];
    uVar8 = param_1[0x51];
    puVar7 = (undefined *)param_1[0x50];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_28;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_31 != 0);
  }
  func_0x000107869004(param_1 + 0x50);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42c18f);
  puStack_70 = &UNK_10f42c1ac;
  uStack_68 = 0x82;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x53];
    uVar8 = param_1[0x53];
    puVar7 = (undefined *)param_1[0x52];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_29;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_32 != 0);
  }
  func_0x000107869004(param_1 + 0x52);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694ec(&UNK_10f4075d3);
  puStack_70 = &UNK_10f42c22f;
  uStack_68 = 0x79;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866354();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x55];
    uVar8 = param_1[0x55];
    puVar7 = (undefined *)param_1[0x54];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_30;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_33 != 0);
  }
  func_0x000107869004(param_1 + 0x54);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42c2a9;
  puStack_78 = (undefined *)0x29;
  puStack_70 = &UNK_10f42c2d3;
  uStack_68 = 0x65;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078661e0();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x57];
    uVar8 = param_1[0x57];
    puVar7 = (undefined *)param_1[0x56];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_31;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_34 != 0);
  }
  func_0x000107869004(param_1 + 0x56);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42c339;
  puStack_78 = (undefined *)0x25;
  puStack_70 = &UNK_10f42c35f;
  uStack_68 = 0x25;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664a4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x59];
    uVar8 = param_1[0x59];
    puVar7 = (undefined *)param_1[0x58];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_32;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_35 != 0);
  }
  func_0x000107869004(param_1 + 0x58);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869394(&UNK_10f42c385);
  puStack_70 = &UNK_10f42c3a8;
  uStack_68 = 0x2f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866270();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x5b];
    uVar8 = param_1[0x5b];
    puVar7 = (undefined *)param_1[0x5a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_33;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_36 != 0);
  }
  func_0x000107869004(param_1 + 0x5a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694a4(&UNK_10f42c3d8);
  func_0x000107869598(&UNK_10f42c3fd);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x5d];
    uVar8 = param_1[0x5d];
    puVar7 = (undefined *)param_1[0x5c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_34;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_37 != 0);
  }
  func_0x000107869004(param_1 + 0x5c);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42c44b;
  puStack_78 = (undefined *)0x2c;
  puStack_70 = &UNK_10f42c478;
  uStack_68 = 0x43;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078662a0();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x5f];
    uVar8 = param_1[0x5f];
    puVar7 = (undefined *)param_1[0x5e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_35;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_38 != 0);
  }
  func_0x000107869004(param_1 + 0x5e);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f4076f3;
  puStack_78 = (undefined *)0x2e;
  puStack_70 = &UNK_10f42c4bc;
  uStack_68 = 0x4e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866504();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x61];
    uVar8 = param_1[0x61];
    puVar7 = (undefined *)param_1[0x60];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_36;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_39 != 0);
  }
  func_0x000107869004(param_1 + 0x60);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f407722;
  puStack_78 = (undefined *)0x30;
  puStack_70 = &UNK_10f42c50b;
  uStack_68 = 0x49;
  func_0x000107868d3c();
  func_0x000107868da4(0x30,*puVar1);
  if (extraout_x8_37 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_40 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[99];
  puVar7 = (undefined *)param_1[0x62];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[99] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_41 != 0);
  }
  func_0x000107869004(param_1 + 0x62);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42c555;
  puStack_78 = (undefined *)0x18;
  func_0x0001078695c4(&UNK_10f42c56e);
  func_0x000107868ebc();
  func_0x00010785e920();
  func_0x000107868da4(0x18,*puVar1);
  if (extraout_x8_38 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_42 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_39 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_43 != 0);
  }
  func_0x0001078690d4(param_1 + 100);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42c594;
  puStack_78 = (undefined *)0x2a;
  puStack_70 = &UNK_10f42c5bf;
  uStack_68 = 0x3f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866534();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x67];
    uVar8 = param_1[0x67];
    puVar7 = (undefined *)param_1[0x66];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_40;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_44 != 0);
  }
  func_0x000107869004(param_1 + 0x66);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42c5ff);
  puStack_70 = &UNK_10f42c61d;
  uStack_68 = 0x46;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x69];
    uVar8 = param_1[0x69];
    puVar7 = (undefined *)param_1[0x68];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_41;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_45 != 0);
  }
  func_0x000107869004(param_1 + 0x68);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42c664);
  puStack_70 = &UNK_10f42c684;
  uStack_68 = 0x53;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x6b];
    uVar8 = param_1[0x6b];
    puVar7 = (undefined *)param_1[0x6a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_42;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_46 != 0);
  }
  func_0x000107869004(param_1 + 0x6a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869284();
  func_0x00010002b838(auStack_c8);
  puStack_80 = &UNK_10f42c6d8;
  puStack_78 = (undefined *)0x15;
  puStack_70 = &UNK_10f42c6ee;
  uStack_68 = 0x23;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_c8);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x15,*puVar1);
  if (extraout_x8_43 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_47 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x6d];
  puVar7 = (undefined *)param_1[0x6c];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x6d] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_48 != 0);
  }
  func_0x0001078691b4(param_1 + 0x6c);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  puStack_80 = &UNK_10f42c712;
  puStack_78 = (undefined *)0x2a;
  puStack_70 = &UNK_10f42c73d;
  uStack_68 = 100;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866534();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x6f];
    uVar8 = param_1[0x6f];
    puVar7 = (undefined *)param_1[0x6e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_44;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_49 != 0);
  }
  func_0x000107869004(param_1 + 0x6e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694a4(&UNK_10f42c7a2);
  func_0x000107869574(&UNK_10f42c7c7);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x71];
    uVar8 = param_1[0x71];
    puVar7 = (undefined *)param_1[0x70];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_45;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_50 != 0);
  }
  func_0x000107869004(param_1 + 0x70);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42c826);
  func_0x0001078695c4(&UNK_10f42c843);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x73];
    uVar8 = param_1[0x73];
    puVar7 = (undefined *)param_1[0x72];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_46;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_51 != 0);
  }
  func_0x000107869004(param_1 + 0x72);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f407050;
  puStack_78 = (undefined *)0x15;
  func_0x0001078695c4(&UNK_10f42c869);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078663b4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x75];
    uVar8 = param_1[0x75];
    puVar7 = (undefined *)param_1[0x74];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_47;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_52 != 0);
  }
  func_0x000107869004(param_1 + 0x74);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694d4(&UNK_10f42c88f);
  puStack_70 = &UNK_10f42c8ab;
  uStack_68 = 0x68;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866384();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x77];
    uVar8 = param_1[0x77];
    puVar7 = (undefined *)param_1[0x76];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_48;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_53 != 0);
  }
  func_0x000107869004(param_1 + 0x76);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f406f53);
  puStack_70 = &UNK_10f42c914;
  uStack_68 = 0x20;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x79];
    uVar8 = param_1[0x79];
    puVar7 = (undefined *)param_1[0x78];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_49;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_54 != 0);
  }
  func_0x000107869004(param_1 + 0x78);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864dd4(param_1,param_1 + 0x7a,&UNK_10f42c935,&UNK_10f42c944,0);
  func_0x0001078691d8(&UNK_10f406f1b);
  puStack_70 = &UNK_10f42c979;
  uStack_68 = 0x2a;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x7d];
    uVar8 = param_1[0x7d];
    puVar7 = (undefined *)param_1[0x7c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_50;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_55 != 0);
  }
  func_0x000107869004(param_1 + 0x7c);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42c9a4);
  puStack_70 = &UNK_10f42c9c6;
  uStack_68 = 100;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x7f];
    uVar8 = param_1[0x7f];
    puVar7 = (undefined *)param_1[0x7e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_51;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_56 != 0);
  }
  func_0x000107869004(param_1 + 0x7e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869350(&UNK_10f42ca2b);
  puStack_70 = &UNK_10f42ca4c;
  uStack_68 = 0x90;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x81];
    uVar8 = param_1[0x81];
    puVar7 = (undefined *)param_1[0x80];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_52;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_57 != 0);
  }
  func_0x000107869004(param_1 + 0x80);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42cadd;
  puStack_78 = (undefined *)0x1a;
  func_0x000107869598(&UNK_10f42caf8);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786663c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x83];
    uVar8 = param_1[0x83];
    puVar7 = (undefined *)param_1[0x82];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_53;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_58 != 0);
  }
  func_0x000107869004(param_1 + 0x82);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42cb46;
  puStack_78 = (undefined *)0x16;
  puStack_70 = &UNK_10f42cb5d;
  uStack_68 = 0x2b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786666c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x85];
    uVar8 = param_1[0x85];
    puVar7 = (undefined *)param_1[0x84];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_54;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_59 != 0);
  }
  puVar2 = param_1 + 0x84;
  func_0x000107869004();
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786956c();
  func_0x0001078692ec();
  *puVar2 = &PTR_DAT_1109e35c0;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar2 + 3);
  *(undefined8 *)(uVar6 + 0xc0) = 0x4000000000000000;
  *(undefined **)(uVar6 + 200) = &UNK_10f42cb89;
  *(undefined8 *)(uVar6 + 0xd0) = 0x22;
  *(undefined **)(uVar6 + 0xd8) = &UNK_10f42cbac;
  *(undefined8 *)(uVar6 + 0xe0) = 0x34;
  func_0x000107869194();
  do {
    func_0x000107869470();
  } while (extraout_w10_60 != 0);
  uStack_60 = 10;
  func_0x000107869268();
  func_0x00010786925c();
  if ((uVar6 & 1) == 0) {
    uVar4 = param_1[0x86];
    uVar8 = 0;
    if (param_1[0x87] != 0) goto LAB_107860c1c;
  }
  else if (lStack_a8 == 0) {
    uVar8 = 0;
    uVar4 = uStack_b0;
  }
  else {
LAB_107860c1c:
    do {
      func_0x000107869460();
      uVar4 = extraout_x8_55;
      uVar8 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_78 = (undefined *)param_1[0x87];
  puStack_80 = (undefined *)param_1[0x86];
  param_1[0x86] = uVar4;
  param_1[0x87] = uVar8;
  func_0x00010786669c(&puStack_80);
  func_0x00010786669c(&uStack_90);
  puVar2 = &uStack_b0;
  func_0x00010740f2d0();
  func_0x00010786956c();
  func_0x0001078692ec();
  *puVar2 = &PTR_DAT_1109e3610;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar2 + 3);
  *(undefined1 *)(uVar6 + 0xc0) = 10;
  *(undefined **)(uVar6 + 200) = &UNK_10f42cbe1;
  *(undefined8 *)(uVar6 + 0xd0) = 0x2b;
  *(undefined **)(uVar6 + 0xd8) = &UNK_10f42cc0d;
  *(undefined8 *)(uVar6 + 0xe0) = 0x3d;
  func_0x000107869194();
  do {
    func_0x000107869470();
  } while (extraout_w10_61 != 0);
  uStack_60 = 2;
  func_0x000107869268();
  func_0x00010786925c();
  if ((uVar6 & 1) == 0) {
    uVar4 = param_1[0x88];
    uVar8 = 0;
    if (param_1[0x89] != 0) goto LAB_107860ccc;
  }
  else if (lStack_a8 == 0) {
    uVar8 = 0;
    uVar4 = uStack_b0;
  }
  else {
LAB_107860ccc:
    do {
      func_0x000107869460();
      uVar4 = extraout_x8_56;
      uVar8 = extraout_x9_00;
    } while (extraout_w12_00 != 0);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uVar9 = param_1[0x89];
  puVar7 = (undefined *)param_1[0x88];
  param_1[0x88] = uVar4;
  param_1[0x89] = uVar8;
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  func_0x0001078666c0(&puStack_80);
  func_0x0001078666c0(&uStack_90);
  func_0x00010740f32c(&uStack_b0);
  func_0x0001078691d8(&UNK_10f42cc4b);
  puStack_70 = &UNK_10f42cc68;
  uStack_68 = 0x2b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x8b];
    uVar9 = param_1[0x8b];
    puVar7 = (undefined *)param_1[0x8a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_57;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_62 != 0);
  }
  func_0x000107869004(param_1 + 0x8a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42cc94);
  puStack_70 = &UNK_10f42ccb2;
  uStack_68 = 0x48;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078666e4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x8d];
    uVar9 = param_1[0x8d];
    puVar7 = (undefined *)param_1[0x8c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_58;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_63 != 0);
  }
  func_0x0001078690d4(param_1 + 0x8c);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &DAT_10f300f7f;
  puStack_78 = (undefined *)0xf;
  puStack_70 = &UNK_10f42ccfb;
  uStack_68 = 0x57;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078663e4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x8f];
    uVar9 = param_1[0x8f];
    puVar7 = (undefined *)param_1[0x8e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_59;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_64 != 0);
  }
  func_0x000107869004(param_1 + 0x8e);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42cd53;
  puStack_78 = (undefined *)0x14;
  puStack_70 = &UNK_10f42cd68;
  uStack_68 = 0x26;
  func_0x000107868d3c();
  func_0x000107868da4(0x14,*puVar1);
  if (extraout_x8_60 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_65 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_61 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_66 != 0);
  }
  func_0x000107869004(param_1 + 0x90);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42cd8f;
  puStack_78 = (undefined *)0x16;
  puStack_70 = &UNK_10f42cda6;
  uStack_68 = 0x35;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786666c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x93];
    uVar9 = param_1[0x93];
    puVar7 = (undefined *)param_1[0x92];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_62;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_67 != 0);
  }
  func_0x000107869004(param_1 + 0x92);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &DAT_10f300fee;
  puStack_78 = (undefined *)0x16;
  puStack_70 = &UNK_10f42cddc;
  uStack_68 = 0x37;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786666c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x95];
    uVar9 = param_1[0x95];
    puVar7 = (undefined *)param_1[0x94];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_63;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_68 != 0);
  }
  func_0x000107869004(param_1 + 0x94);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786948c(&UNK_10f42ce14);
  puStack_70 = &UNK_10f42ce38;
  uStack_68 = 0x37;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866714();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x97];
    uVar9 = param_1[0x97];
    puVar7 = (undefined *)param_1[0x96];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_64;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_69 != 0);
  }
  func_0x000107869004(param_1 + 0x96);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42ce70;
  puStack_78 = (undefined *)0x28;
  puStack_70 = &UNK_10f42ce99;
  uStack_68 = 0x68;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866744();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x99];
    uVar9 = param_1[0x99];
    puVar7 = (undefined *)param_1[0x98];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_65;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_70 != 0);
  }
  func_0x000107869004(param_1 + 0x98);
  func_0x00010786900c();
  func_0x000107868ffc();
  puVar3 = PTR_DAT_1131ada70;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf02;
  uStack_68 = 0x1c;
  puStack_78 = puVar3;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866774();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x9b];
    uVar9 = param_1[0x9b];
    puVar7 = (undefined *)param_1[0x9a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_66;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_71 != 0);
  }
  func_0x000107869004(param_1 + 0x9a);
  func_0x00010786900c();
  func_0x000107868ffc();
  puVar3 = PTR_DAT_1131ada80;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf1f;
  uStack_68 = 0x13;
  puStack_78 = puVar3;
  func_0x000107869028();
  func_0x00010785e920();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667a4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x9d];
    uVar9 = param_1[0x9d];
    puVar7 = (undefined *)param_1[0x9c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_67;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_72 != 0);
  }
  func_0x0001078690d4(param_1 + 0x9c);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puVar3 = PTR_DAT_1131ada78;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf33;
  uStack_68 = 0x1a;
  puStack_78 = puVar3;
  func_0x000107869028();
  func_0x00010785e920();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667a4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x9f];
    uVar9 = param_1[0x9f];
    puVar7 = (undefined *)param_1[0x9e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_68;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_73 != 0);
  }
  func_0x0001078690d4(param_1 + 0x9e);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107864ebc(param_1,param_1 + 0xa0,&PTR_DAT_1131ada88,&UNK_10f42cf4e);
  puVar3 = PTR_DAT_1131ada90;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf6c;
  uStack_68 = 0x1e;
  puStack_78 = puVar3;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866774();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xa3];
    uVar9 = param_1[0xa3];
    puVar7 = (undefined *)param_1[0xa2];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_69;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_74 != 0);
  }
  func_0x000107869004(param_1 + 0xa2);
  func_0x00010786900c();
  func_0x000107868ffc();
  puVar3 = PTR_DAT_1131ada98;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf8b;
  uStack_68 = 10;
  puStack_78 = puVar3;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866774();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xa5];
    uVar9 = param_1[0xa5];
    puVar7 = (undefined *)param_1[0xa4];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_70;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_75 != 0);
  }
  func_0x000107869004(param_1 + 0xa4);
  func_0x00010786900c();
  func_0x000107868ffc();
  puVar3 = PTR_DAT_1131adaa0;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cf96;
  uStack_68 = 0x23;
  puStack_78 = puVar3;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866774();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xa7];
    uVar9 = param_1[0xa7];
    puVar7 = (undefined *)param_1[0xa6];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_71;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_76 != 0);
  }
  func_0x000107869004(param_1 + 0xa6);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864ebc(param_1,param_1 + 0xa8,&PTR_DAT_1131adaa8,&UNK_10f42cfba);
  puVar3 = PTR_DAT_1131adab0;
  func_0x0001078691ec();
  puStack_70 = &UNK_10f42cfd8;
  uStack_68 = 0x36;
  puStack_78 = puVar3;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667a4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xab];
    uVar9 = param_1[0xab];
    puVar7 = (undefined *)param_1[0xaa];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_72;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_77 != 0);
  }
  func_0x0001078690d4(param_1 + 0xaa);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869228(&UNK_10f4089d7);
  puStack_70 = &UNK_10f42d00f;
  uStack_68 = 0x4e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xad];
    uVar9 = param_1[0xad];
    puVar7 = (undefined *)param_1[0xac];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_73;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_78 != 0);
  }
  func_0x000107869004(param_1 + 0xac);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f4063ae);
  puStack_70 = &UNK_10f42d05e;
  uStack_68 = 0x33;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xaf];
    uVar9 = param_1[0xaf];
    puVar7 = (undefined *)param_1[0xae];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_74;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_79 != 0);
  }
  func_0x000107869004(param_1 + 0xae);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &DAT_10f408a4f;
  puStack_78 = (undefined *)0x13;
  puStack_70 = &UNK_10f42d092;
  uStack_68 = 0x1a;
  func_0x000107868d3c();
  func_0x000107868da4(0x13,*puVar1);
  if (extraout_x8_75 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_80 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_76 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_81 != 0);
  }
  func_0x000107869004(param_1 + 0xb0);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42d0ad;
  puStack_78 = (undefined *)0x25;
  func_0x0001078695a4(&UNK_10f42d0d3);
  func_0x000107868de0();
  func_0x000107868da4(0x25,*puVar1);
  if (extraout_x8_77 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_82 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_78 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_83 != 0);
  }
  func_0x0001078690d4(param_1 + 0xb2);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42d11f;
  puStack_78 = (undefined *)0x31;
  puStack_70 = &UNK_10f42d151;
  uStack_68 = 0x3c;
  func_0x000107868d3c();
  func_0x000107868da4(0x31,*puVar1);
  if (extraout_x8_79 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_84 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_80 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_85 != 0);
  }
  func_0x000107869004(param_1 + 0xb4);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864dd4(param_1,param_1 + 0xb6,&UNK_10f42d18e,&UNK_10f42d19d,1);
  func_0x00010786948c(&DAT_10f301005);
  puStack_70 = &UNK_10f42d1d2;
  uStack_68 = 0x57;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866714();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xb9];
    uVar9 = param_1[0xb9];
    puVar7 = (undefined *)param_1[0xb8];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_81;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_86 != 0);
  }
  func_0x000107869004(param_1 + 0xb8);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869350(&UNK_10f42d22a);
  puStack_70 = &UNK_10f42d24b;
  uStack_68 = 0x4a;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xbb];
    uVar9 = param_1[0xbb];
    puVar7 = (undefined *)param_1[0xba];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_82;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_87 != 0);
  }
  func_0x000107869004(param_1 + 0xba);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42d296);
  puStack_70 = &UNK_10f42d2b3;
  uStack_68 = 0x4f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xbd];
    uVar9 = param_1[0xbd];
    puVar7 = (undefined *)param_1[0xbc];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_83;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_88 != 0);
  }
  func_0x000107869004(param_1 + 0xbc);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869394(&UNK_10f42d303);
  puStack_70 = &UNK_10f42d326;
  uStack_68 = 0x2a;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078662f4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xbf];
    uVar9 = param_1[0xbf];
    puVar7 = (undefined *)param_1[0xbe];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_84;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_89 != 0);
  }
  func_0x0001078690d4(param_1 + 0xbe);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42d351;
  puStack_78 = (undefined *)0x20;
  func_0x0001078695d0(&UNK_10f42d372);
  func_0x000107868de0();
  func_0x000107868da4(0x20,*puVar1);
  if (extraout_x8_85 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_90 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_86 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_91 != 0);
  }
  func_0x0001078690d4(param_1 + 0xc0);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42d39b;
  puStack_78 = (undefined *)0x2a;
  puStack_70 = &UNK_10f42d3c6;
  uStack_68 = 0x32;
  func_0x000107868de0();
  func_0x000107868da4(0x2a,*puVar1);
  if (extraout_x8_87 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_92 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (extraout_x8_88 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_93 != 0);
  }
  func_0x0001078690d4(param_1 + 0xc2);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869350(&UNK_10f42d3f9);
  puStack_70 = &UNK_10f42d41a;
  uStack_68 = 0x6e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xc5];
    uVar9 = param_1[0xc5];
    puVar7 = (undefined *)param_1[0xc4];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_89;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_94 != 0);
  }
  func_0x000107869004(param_1 + 0xc4);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078693a0(&UNK_10f42d489);
  puStack_70 = &UNK_10f42d4a1;
  uStack_68 = 0x49;
  func_0x000107869028();
  func_0x00010785e920();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[199];
    uVar9 = param_1[199];
    puVar7 = (undefined *)param_1[0xc6];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_90;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_95 != 0);
  }
  func_0x0001078690d4(param_1 + 0xc6);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x0001078694a4(&UNK_10f42d4eb);
  puStack_70 = &UNK_10f42d510;
  uStack_68 = 0x44;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xc9];
    uVar9 = param_1[0xc9];
    puVar7 = (undefined *)param_1[200];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_91;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_96 != 0);
  }
  func_0x000107869004(param_1 + 200);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42d555);
  puStack_70 = &UNK_10f42d575;
  uStack_68 = 0x32;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xcb];
    uVar9 = param_1[0xcb];
    puVar7 = (undefined *)param_1[0xca];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_92;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_97 != 0);
  }
  func_0x000107869004(param_1 + 0xca);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786935c(&UNK_10f42d5a8);
  puStack_70 = &UNK_10f42d5c1;
  uStack_68 = 0x30;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xcd];
    uVar9 = param_1[0xcd];
    puVar7 = (undefined *)param_1[0xcc];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_93;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_98 != 0);
  }
  func_0x000107869004(param_1 + 0xcc);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786948c(&UNK_10f42d5f2);
  puStack_70 = &UNK_10f42d616;
  uStack_68 = 0x68;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866714();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xcf];
    uVar9 = param_1[0xcf];
    puVar7 = (undefined *)param_1[0xce];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_94;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_99 != 0);
  }
  func_0x000107869004(param_1 + 0xce);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869350(&UNK_10f42d67f);
  puStack_70 = &UNK_10f42d6a0;
  uStack_68 = 0x58;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xd1];
    uVar9 = param_1[0xd1];
    puVar7 = (undefined *)param_1[0xd0];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_95;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00100 != 0);
  }
  func_0x000107869004(param_1 + 0xd0);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42d6f9;
  puStack_78 = (undefined *)0x2c;
  func_0x0001078695a4(&UNK_10f42d726);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078662a0();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xd3];
    uVar9 = param_1[0xd3];
    puVar7 = (undefined *)param_1[0xd2];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_96;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00101 != 0);
  }
  func_0x000107869004(param_1 + 0xd2);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078693a0(&UNK_10f42d772);
  puStack_70 = &UNK_10f42d78a;
  uStack_68 = 0x56;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xd5];
    uVar9 = param_1[0xd5];
    puVar7 = (undefined *)param_1[0xd4];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_97;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00102 != 0);
  }
  func_0x0001078690d4(param_1 + 0xd4);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869300(&UNK_10f42d7e1);
  puStack_70 = &UNK_10f42d7ff;
  uStack_68 = 0x50;
  func_0x000107868de0();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078666e4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xd7];
    uVar9 = param_1[0xd7];
    puVar7 = (undefined *)param_1[0xd6];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_98;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar9;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00103 != 0);
  }
  func_0x0001078690d4(param_1 + 0xd6);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42d850;
  puStack_78 = (undefined *)0x16;
  func_0x000107869574(&UNK_10f42d867);
  func_0x000107868de0();
  func_0x000107868da4(0x16,*puVar1);
  if (extraout_x8_99 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00104 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0xd9];
  puVar7 = (undefined *)param_1[0xd8];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0xd9] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00105 != 0);
  }
  func_0x0001078690d4(param_1 + 0xd8);
  func_0x0001078690dc();
  func_0x0001078690cc();
  puStack_80 = &UNK_10f42d8c6;
  puStack_78 = (undefined *)0x2e;
  puStack_70 = &UNK_10f42d8f5;
  uStack_68 = 0x44;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866504();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xdb];
    uVar8 = param_1[0xdb];
    puVar7 = (undefined *)param_1[0xda];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00100;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00106 != 0);
  }
  puVar2 = param_1 + 0xda;
  func_0x000107869004();
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786956c();
  func_0x0001078692ec();
  *puVar2 = &PTR_DAT_1109e3660;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar2 + 3);
  *(undefined4 *)(uVar6 + 0xc0) = 0xbba3d70a;
  *(undefined **)(uVar6 + 200) = &UNK_10f42d93a;
  *(undefined8 *)(uVar6 + 0xd0) = 0x19;
  *(undefined **)(uVar6 + 0xd8) = &UNK_10f42d954;
  *(undefined8 *)(uVar6 + 0xe0) = 0x44;
  func_0x000107869194();
  do {
    func_0x000107869470();
  } while (extraout_w10_x00107 != 0);
  uStack_60 = 9;
  func_0x000107869268();
  func_0x00010786925c();
  if ((uVar6 & 1) == 0) {
    uStack_b0 = param_1[0xdc];
    uVar8 = 0;
    if (param_1[0xdd] == 0) goto LAB_107861fb8;
  }
  else if (lStack_a8 == 0) {
    uVar8 = 0;
    goto LAB_107861fb8;
  }
  do {
    func_0x000107869460();
    uStack_b0 = extraout_x8_x00101;
    uVar8 = extraout_x9_01;
  } while (extraout_w12_01 != 0);
LAB_107861fb8:
  uStack_90 = 0;
  uStack_88 = 0;
  uVar4 = param_1[0xdd];
  puVar7 = (undefined *)param_1[0xdc];
  param_1[0xdc] = uStack_b0;
  param_1[0xdd] = uVar8;
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar4;
  func_0x000107866804(&puStack_80);
  func_0x000107866804(&uStack_90);
  func_0x000107289e5c(&uStack_b0);
  func_0x000107869228(&UNK_10f42d999);
  puStack_70 = &UNK_10f42d9b9;
  uStack_68 = 0x50;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xdf];
    uVar4 = param_1[0xdf];
    puVar7 = (undefined *)param_1[0xde];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00102;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar4;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00108 != 0);
  }
  func_0x000107869004(param_1 + 0xde);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42da0a);
  puStack_70 = &UNK_10f42da2c;
  uStack_68 = 0x3f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xe1];
    uVar4 = param_1[0xe1];
    puVar7 = (undefined *)param_1[0xe0];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00103;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar4;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00109 != 0);
  }
  func_0x000107869004(param_1 + 0xe0);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869350(&UNK_10f42da6c);
  puStack_70 = &UNK_10f42da8d;
  uStack_68 = 0x42;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xe3];
    uVar4 = param_1[0xe3];
    puVar7 = (undefined *)param_1[0xe2];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00104;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar4;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00110 != 0);
  }
  func_0x000107869004(param_1 + 0xe2);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869284();
  func_0x00010002b838(auStack_e0);
  puStack_80 = &UNK_10f42dad0;
  puStack_78 = (undefined *)0x11;
  puStack_70 = &UNK_10f42dae2;
  uStack_68 = 0x20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_e0);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x11,*puVar1);
  if (extraout_x8_x00105 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00111 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0xe5];
  puVar7 = (undefined *)param_1[0xe4];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0xe5] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00112 != 0);
  }
  func_0x0001078691b4(param_1 + 0xe4);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x000107869284();
  func_0x00010002b838(auStack_f8);
  puStack_80 = &UNK_10f42db03;
  puStack_78 = (undefined *)0x10;
  puStack_70 = &UNK_10f42db14;
  uStack_68 = 0x23;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_f8);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x10,*puVar1);
  if (extraout_x8_x00106 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00113 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x000107869120();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00107 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00114 != 0);
  }
  func_0x0001078691b4(param_1 + 0xe6);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x000107869284();
  func_0x00010002b838(auStack_110);
  puStack_80 = &UNK_10f42db38;
  puStack_78 = (undefined *)0xf;
  puStack_70 = &UNK_10f42db48;
  uStack_68 = 0x22;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_110);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0xf,*puVar1);
  if (extraout_x8_x00108 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00115 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0xe9];
  puVar7 = (undefined *)param_1[0xe8];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0xe9] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00116 != 0);
  }
  func_0x0001078691b4(param_1 + 0xe8);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  func_0x000107869284();
  func_0x00010002b838(auStack_128);
  puStack_80 = &UNK_10f42db6b;
  puStack_78 = (undefined *)0x14;
  puStack_70 = &UNK_10f42db80;
  uStack_68 = 0x27;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_128);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x14,*puVar1);
  if (extraout_x8_x00109 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00117 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x000107869120();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00110 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00118 != 0);
  }
  func_0x0001078691b4(param_1 + 0xea);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  func_0x000107864f5c(param_1,param_1 + 0xec,&UNK_10f42dba8,&UNK_10f42dbcc);
  func_0x000107864f5c(param_1,param_1 + 0xee,&UNK_10f42dbfc,&UNK_10f42dc20);
  func_0x000107869204(&UNK_10f42dc50);
  puStack_70 = &UNK_10f42dc72;
  uStack_68 = 0x2d;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xf1];
    uVar8 = param_1[0xf1];
    puVar7 = (undefined *)param_1[0xf0];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00111;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00119 != 0);
  }
  func_0x000107869004(param_1 + 0xf0);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869284();
  func_0x00010002b838(auStack_140);
  puStack_80 = &UNK_10f42dca0;
  puStack_78 = (undefined *)0x12;
  func_0x000107869574(&UNK_10f42dcb3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_140);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x12,*puVar1);
  if (extraout_x8_x00112 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00120 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0xf3];
  puVar7 = (undefined *)param_1[0xf2];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0xf3] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00121 != 0);
  }
  func_0x0001078691b4(param_1 + 0xf2);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  func_0x0001078691d8(&UNK_10f42dd12);
  puStack_70 = &UNK_10f42dd2f;
  uStack_68 = 0x22;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xf5];
    uVar8 = param_1[0xf5];
    puVar7 = (undefined *)param_1[0xf4];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00113;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00122 != 0);
  }
  func_0x000107869004(param_1 + 0xf4);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786948c(&UNK_10f42dd52);
  puStack_70 = &UNK_10f42dd76;
  uStack_68 = 0xa6;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866714();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xf7];
    uVar8 = param_1[0xf7];
    puVar7 = (undefined *)param_1[0xf6];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00114;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00123 != 0);
  }
  func_0x000107869004(param_1 + 0xf6);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078693a0(&UNK_10f42de1d);
  func_0x000107869574(&UNK_10f42de35);
  func_0x000107869028();
  func_0x00010785e920();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078667d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0xf9];
    uVar8 = param_1[0xf9];
    puVar7 = (undefined *)param_1[0xf8];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00115;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00124 != 0);
  }
  func_0x0001078690d4(param_1 + 0xf8);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869284();
  func_0x00010002b838(auStack_158);
  puStack_80 = &UNK_10f42de94;
  puStack_78 = (undefined *)0xe;
  puStack_70 = &UNK_10f42dea3;
  uStack_68 = 0x3b;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_158);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0xe,*puVar1);
  if (extraout_x8_x00116 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00125 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0xfb];
  puVar7 = (undefined *)param_1[0xfa];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0xfb] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00126 != 0);
  }
  func_0x0001078691b4(param_1 + 0xfa);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x000107869284();
  func_0x00010002b838(auStack_170);
  puStack_80 = &DAT_10f301079;
  puStack_78 = (undefined *)0x13;
  puStack_70 = &UNK_10f42dedf;
  uStack_68 = 0x4a;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_170);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0x13,*puVar1);
  if (extraout_x8_x00117 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00127 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x000107869120();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00118 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00128 != 0);
  }
  func_0x0001078691b4(param_1 + 0xfc);
  func_0x0001078691bc();
  func_0x0001078690fc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  func_0x000107869284();
  func_0x00010002b838(auStack_188);
  puStack_80 = &DAT_10f30106b;
  puStack_78 = (undefined *)0xd;
  puStack_70 = &UNK_10f42df2a;
  uStack_68 = 0x17;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0,auStack_188);
  func_0x000107868db8();
  func_0x0001078690f4();
  func_0x000107868e98(0xd,*puVar1);
  if (extraout_x8_x00119 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00129 != 0);
  }
  func_0x000107869250();
  func_0x000107869074();
  func_0x000107868e00();
  func_0x000107869120();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00120 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00130 != 0);
  }
  func_0x0001078691b4(param_1 + 0xfe);
  func_0x0001078691bc();
  func_0x0001078690fc();
  func_0x0001078693fc();
  func_0x0001078693a0(&UNK_10f42df42);
  func_0x0001078695d0(&UNK_10f42df5a);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866828();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x101];
    uVar8 = param_1[0x101];
    puVar7 = (undefined *)param_1[0x100];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00121;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00131 != 0);
  }
  func_0x000107869004(param_1 + 0x100);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694ec(&UNK_10f42df83);
  puStack_70 = &UNK_10f42dfa2;
  uStack_68 = 0x26;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866354();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x103];
    uVar8 = param_1[0x103];
    puVar7 = (undefined *)param_1[0x102];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00122;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00132 != 0);
  }
  func_0x000107869004(param_1 + 0x102);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694b0(&UNK_10f42dfc9);
  puStack_70 = &UNK_10f42dfe3;
  uStack_68 = 0x3c;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866444();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x105];
    uVar8 = param_1[0x105];
    puVar7 = (undefined *)param_1[0x104];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00123;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00133 != 0);
  }
  func_0x000107869004(param_1 + 0x104);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42e020);
  puStack_70 = &UNK_10f42e040;
  uStack_68 = 0x45;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x107];
    uVar8 = param_1[0x107];
    puVar7 = (undefined *)param_1[0x106];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00124;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00134 != 0);
  }
  func_0x000107869004(param_1 + 0x106);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694a4(&UNK_10f42e086);
  puStack_70 = &UNK_10f42e0ab;
  uStack_68 = 0x47;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x109];
    uVar8 = param_1[0x109];
    puVar7 = (undefined *)param_1[0x108];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00125;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00135 != 0);
  }
  func_0x000107869004(param_1 + 0x108);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078693a0(&UNK_10f42e0f3);
  puStack_70 = &UNK_10f42e10b;
  uStack_68 = 0x31;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866828();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x10b];
    uVar8 = param_1[0x10b];
    puVar7 = (undefined *)param_1[0x10a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00126;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00136 != 0);
  }
  func_0x000107869004(param_1 + 0x10a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869350(&UNK_10f42e13d);
  puStack_70 = &UNK_10f42e15e;
  uStack_68 = 0x3c;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x10d];
    uVar8 = param_1[0x10d];
    puVar7 = (undefined *)param_1[0x10c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00127;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00137 != 0);
  }
  func_0x000107869004(param_1 + 0x10c);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42e19b);
  puStack_70 = &UNK_10f42e1c2;
  uStack_68 = 0x4f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x10f];
    uVar8 = param_1[0x10f];
    puVar7 = (undefined *)param_1[0x10e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00128;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00138 != 0);
  }
  func_0x000107869004(param_1 + 0x10e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864fd8(param_1,param_1 + 0x110,&UNK_10f42e212,&UNK_10f42e233);
  puStack_80 = &UNK_10f42e277;
  puStack_78 = (undefined *)0x25;
  puStack_70 = &UNK_10f42e29d;
  uStack_68 = 0x80;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664a4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x113];
    uVar8 = param_1[0x113];
    puVar7 = (undefined *)param_1[0x112];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00129;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00139 != 0);
  }
  func_0x000107869004(param_1 + 0x112);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42e31e);
  puStack_70 = &UNK_10f42e33b;
  uStack_68 = 0xc9;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x115];
    uVar8 = param_1[0x115];
    puVar7 = (undefined *)param_1[0x114];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00130;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00140 != 0);
  }
  func_0x000107869004(param_1 + 0x114);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42e405);
  puStack_70 = &UNK_10f42e42c;
  uStack_68 = 0xa2;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x117];
    uVar8 = param_1[0x117];
    puVar7 = (undefined *)param_1[0x116];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00131;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00141 != 0);
  }
  func_0x000107869004(param_1 + 0x116);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42e4cf);
  puStack_70 = &UNK_10f42e4f6;
  uStack_68 = 0x67;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x119];
    uVar8 = param_1[0x119];
    puVar7 = (undefined *)param_1[0x118];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00132;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00142 != 0);
  }
  func_0x000107869004(param_1 + 0x118);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42e55e);
  puStack_70 = &UNK_10f42e585;
  uStack_68 = 0x7e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x11b];
    uVar8 = param_1[0x11b];
    puVar7 = (undefined *)param_1[0x11a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00133;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00143 != 0);
  }
  func_0x000107869004(param_1 + 0x11a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864d5c(param_1,param_1 + 0x11c,&UNK_10f42e604,&UNK_10f42e62b);
  func_0x000107869350(&UNK_10f42e6a3);
  puStack_70 = &UNK_10f42e6c4;
  uStack_68 = 0x5b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786660c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x11f];
    uVar8 = param_1[0x11f];
    puVar7 = (undefined *)param_1[0x11e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00134;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00144 != 0);
  }
  func_0x000107869004(param_1 + 0x11e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42e720);
  puStack_70 = &UNK_10f42e73d;
  uStack_68 = 0xc1;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x121];
    uVar8 = param_1[0x121];
    puVar7 = (undefined *)param_1[0x120];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00135;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00145 != 0);
  }
  func_0x000107869004(param_1 + 0x120);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107864fd8(param_1,param_1 + 0x122,&UNK_10f42e7ff,&UNK_10f42e820);
  func_0x0001078694b0(&UNK_10f42e864);
  puStack_70 = &UNK_10f42e87e;
  uStack_68 = 0x38;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866444();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x125];
    uVar8 = param_1[0x125];
    puVar7 = (undefined *)param_1[0x124];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00136;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00146 != 0);
  }
  func_0x000107869004(param_1 + 0x124);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786935c(&UNK_10f42e8b7);
  puStack_70 = &UNK_10f42e8d0;
  uStack_68 = 0x23;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x127];
    uVar8 = param_1[0x127];
    puVar7 = (undefined *)param_1[0x126];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00137;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00147 != 0);
  }
  func_0x000107869004(param_1 + 0x126);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42e8f4;
  puStack_78 = (undefined *)0x27;
  puStack_70 = &UNK_10f42e91c;
  uStack_68 = 0x82;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866414();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x129];
    uVar8 = param_1[0x129];
    puVar7 = (undefined *)param_1[0x128];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00138;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00148 != 0);
  }
  func_0x000107869004(param_1 + 0x128);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694d4(&UNK_10f42e99f);
  puStack_70 = &UNK_10f42e9bb;
  uStack_68 = 0x47;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866384();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[299];
    uVar8 = param_1[299];
    puVar7 = (undefined *)param_1[0x12a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00139;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00149 != 0);
  }
  func_0x000107869004(param_1 + 0x12a);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42ea03;
  puStack_78 = (undefined *)0x16;
  puStack_70 = &UNK_10f42ea1a;
  uStack_68 = 0x29;
  func_0x000107868ebc();
  func_0x00010785e878();
  func_0x000107868da4(0x16,*puVar1);
  if (extraout_x8_x00140 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00150 != 0);
  }
  uStack_60 = 5;
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00141 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00151 != 0);
  }
  func_0x00010786953c(param_1 + 300);
  func_0x000107869544();
  func_0x0001078693ac();
  func_0x00010786935c(&UNK_10f42ea44);
  puStack_70 = &UNK_10f42ea5d;
  uStack_68 = 0x31;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x12f];
    uVar8 = param_1[0x12f];
    puVar7 = (undefined *)param_1[0x12e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00142;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00152 != 0);
  }
  func_0x000107869004(param_1 + 0x12e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42ea8f);
  puStack_70 = &UNK_10f42eaaf;
  uStack_68 = 0x44;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x131];
    uVar8 = param_1[0x131];
    puVar7 = (undefined *)param_1[0x130];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00143;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00153 != 0);
  }
  func_0x000107869004(param_1 + 0x130);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42eaf4;
  puStack_78 = (undefined *)0x15;
  puStack_70 = &UNK_10f42eb0a;
  uStack_68 = 0x4e;
  func_0x000107868ebc();
  func_0x00010785e878();
  func_0x000107868da4(0x15,*puVar1);
  if (extraout_x8_x00144 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00154 != 0);
  }
  uStack_60 = 5;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x133];
  puVar7 = (undefined *)param_1[0x132];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x133] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00155 != 0);
  }
  func_0x00010786953c(param_1 + 0x132);
  func_0x000107869544();
  func_0x0001078693ac();
  func_0x000107869300(&UNK_10f42eb59);
  puStack_70 = &UNK_10f42eb77;
  uStack_68 = 0x40;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x135];
    uVar8 = param_1[0x135];
    puVar7 = (undefined *)param_1[0x134];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00145;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00156 != 0);
  }
  func_0x000107869004(param_1 + 0x134);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078693a0(&UNK_10f42ebb8);
  puStack_70 = &UNK_10f42ebd0;
  uStack_68 = 0x45;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866828();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x137];
    uVar8 = param_1[0x137];
    puVar7 = (undefined *)param_1[0x136];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00146;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00157 != 0);
  }
  func_0x000107869004(param_1 + 0x136);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786935c(&UNK_10f42ec16);
  func_0x000107869598(&UNK_10f42ec2f);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x139];
    uVar8 = param_1[0x139];
    puVar7 = (undefined *)param_1[0x138];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00147;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00158 != 0);
  }
  func_0x000107869004(param_1 + 0x138);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869394(&UNK_10f42ec7d);
  func_0x000107869580(&UNK_10f42eca0);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866270();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x13b];
    uVar8 = param_1[0x13b];
    puVar7 = (undefined *)param_1[0x13a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00148;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00159 != 0);
  }
  func_0x000107869004(param_1 + 0x13a);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42ecfb;
  puStack_78 = (undefined *)0x28;
  puStack_70 = &UNK_10f42ed24;
  uStack_68 = 0x5f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866744();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x13d];
    uVar8 = param_1[0x13d];
    puVar7 = (undefined *)param_1[0x13c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00149;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00160 != 0);
  }
  func_0x000107869004(param_1 + 0x13c);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42ed84;
  puStack_78 = (undefined *)0x12;
  puStack_70 = &UNK_10f42ed97;
  uStack_68 = 0x34;
  func_0x000107868d3c();
  func_0x000107868da4(0x12,*puVar1);
  if (extraout_x8_x00150 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00161 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x13f];
  puVar7 = (undefined *)param_1[0x13e];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x13f] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00162 != 0);
  }
  func_0x000107869004(param_1 + 0x13e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42edcc);
  puStack_70 = &UNK_10f42edee;
  uStack_68 = 0x3e;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x141];
    uVar8 = param_1[0x141];
    puVar7 = (undefined *)param_1[0x140];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00151;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00163 != 0);
  }
  func_0x000107869004(param_1 + 0x140);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42ee2d);
  puStack_70 = &UNK_10f42ee4f;
  uStack_68 = 0x54;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x143];
    uVar8 = param_1[0x143];
    puVar7 = (undefined *)param_1[0x142];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00152;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00164 != 0);
  }
  func_0x000107869004(param_1 + 0x142);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42eea4;
  puStack_78 = (undefined *)0x27;
  puStack_70 = &UNK_10f42eecc;
  uStack_68 = 0x58;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866414();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x145];
    uVar8 = param_1[0x145];
    puVar7 = (undefined *)param_1[0x144];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00153;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00165 != 0);
  }
  func_0x000107869004(param_1 + 0x144);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42ef25);
  puStack_70 = &UNK_10f42ef45;
  uStack_68 = 0x52;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x147];
    uVar8 = param_1[0x147];
    puVar7 = (undefined *)param_1[0x146];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00154;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00166 != 0);
  }
  func_0x000107869004(param_1 + 0x146);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694ec(&UNK_10f42ef98);
  puStack_70 = &UNK_10f42efb7;
  uStack_68 = 0x62;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866354();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x149];
    uVar8 = param_1[0x149];
    puVar7 = (undefined *)param_1[0x148];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00155;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00167 != 0);
  }
  func_0x000107869004(param_1 + 0x148);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42f01a;
  puStack_78 = (undefined *)0x2b;
  puStack_70 = &UNK_10f42f046;
  uStack_68 = 0x67;
  func_0x000107868d3c();
  func_0x000107868da4(0x2b,*puVar1);
  if (extraout_x8_x00156 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00168 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x14b];
  puVar7 = (undefined *)param_1[0x14a];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x14b] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00169 != 0);
  }
  func_0x000107869004(param_1 + 0x14a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42f0ae);
  puStack_70 = &UNK_10f42f0cc;
  uStack_68 = 0x52;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x14d];
    uVar8 = param_1[0x14d];
    puVar7 = (undefined *)param_1[0x14c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00157;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00170 != 0);
  }
  func_0x000107869004(param_1 + 0x14c);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786935c(&UNK_10f42f11f);
  puStack_70 = &UNK_10f42f138;
  uStack_68 = 0x3f;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x14f];
    uVar8 = param_1[0x14f];
    puVar7 = (undefined *)param_1[0x14e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00158;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00171 != 0);
  }
  func_0x000107869004(param_1 + 0x14e);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42f178;
  puStack_78 = (undefined *)0x28;
  func_0x0001078695a4(&UNK_10f42f1a1);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866744();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x151];
    uVar8 = param_1[0x151];
    puVar7 = (undefined *)param_1[0x150];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00159;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00172 != 0);
  }
  func_0x000107869004(param_1 + 0x150);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869228(&UNK_10f42f1ed);
  func_0x000107869598(&UNK_10f42f20d);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866594();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x153];
    uVar8 = param_1[0x153];
    puVar7 = (undefined *)param_1[0x152];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00160;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00173 != 0);
  }
  func_0x000107869004(param_1 + 0x152);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42f25b;
  puStack_78 = (undefined *)0x2a;
  puStack_70 = &UNK_10f42f286;
  uStack_68 = 0x34;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866534();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x155];
    uVar8 = param_1[0x155];
    puVar7 = (undefined *)param_1[0x154];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00161;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00174 != 0);
  }
  func_0x000107869004(param_1 + 0x154);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42f2bb);
  puStack_70 = &UNK_10f42f2d9;
  uStack_68 = 0x34;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x157];
    uVar8 = param_1[0x157];
    puVar7 = (undefined *)param_1[0x156];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00162;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00175 != 0);
  }
  func_0x000107869004(param_1 + 0x156);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42f30e;
  puStack_78 = (undefined *)0x14;
  puStack_70 = &UNK_10f42f323;
  uStack_68 = 0x47;
  func_0x000107868ebc();
  func_0x00010785e920();
  func_0x000107868da4(0x14,*puVar1);
  if (extraout_x8_x00163 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00176 != 0);
  }
  func_0x000107869210();
  func_0x000107869074();
  func_0x000107868e00();
  uVar8 = param_1[0x159];
  puVar7 = (undefined *)param_1[0x158];
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (param_1[0x159] != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00177 != 0);
  }
  func_0x0001078690d4(param_1 + 0x158);
  func_0x0001078690dc();
  func_0x0001078690cc();
  func_0x000107869344(&UNK_10f42f36b);
  puStack_70 = &UNK_10f42f392;
  uStack_68 = 0x81;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x15b];
    uVar8 = param_1[0x15b];
    puVar7 = (undefined *)param_1[0x15a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00164;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00178 != 0);
  }
  func_0x000107869004(param_1 + 0x15a);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f42f414;
  puStack_78 = (undefined *)0x1a;
  func_0x000107869580(&UNK_10f42f42f);
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x00010786663c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x15d];
    uVar8 = param_1[0x15d];
    puVar7 = (undefined *)param_1[0x15c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00165;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00179 != 0);
  }
  func_0x000107869004(param_1 + 0x15c);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869204(&UNK_10f42f48a);
  puStack_70 = &UNK_10f42f4ac;
  uStack_68 = 0x97;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866210();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x15f];
    uVar8 = param_1[0x15f];
    puVar7 = (undefined *)param_1[0x15e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00166;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00180 != 0);
  }
  func_0x000107869004(param_1 + 0x15e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42f544);
  puStack_70 = &UNK_10f42f561;
  uStack_68 = 0x5d;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x161];
    uVar8 = param_1[0x161];
    puVar7 = (undefined *)param_1[0x160];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00167;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00181 != 0);
  }
  func_0x000107869004(param_1 + 0x160);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694d4(&UNK_10f42f5bf);
  puStack_70 = &UNK_10f42f5db;
  uStack_68 = 0x67;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866384();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x163];
    uVar8 = param_1[0x163];
    puVar7 = (undefined *)param_1[0x162];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00168;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00182 != 0);
  }
  func_0x000107869004(param_1 + 0x162);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694b0(&UNK_10f42f643);
  puStack_70 = &UNK_10f42f65d;
  uStack_68 = 0xde;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866444();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x165];
    uVar8 = param_1[0x165];
    puVar7 = (undefined *)param_1[0x164];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00169;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00183 != 0);
  }
  func_0x000107869004(param_1 + 0x164);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42f73c);
  puStack_70 = &UNK_10f42f75a;
  uStack_68 = 0xbb;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x167];
    uVar8 = param_1[0x167];
    puVar7 = (undefined *)param_1[0x166];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00170;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00184 != 0);
  }
  func_0x000107869004(param_1 + 0x166);
  func_0x00010786900c();
  func_0x000107868ffc();
  puStack_80 = &UNK_10f408461;
  puStack_78 = (undefined *)0x33;
  puStack_70 = &UNK_10f42f816;
  uStack_68 = 0x1c5;
  func_0x000107868d3c();
  func_0x000107868da4(0x33,*puVar1);
  if (extraout_x8_x00171 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00185 != 0);
  }
  uStack_60 = 0;
  func_0x000107869074();
  func_0x000107868e00();
  func_0x00010786901c();
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (extraout_x8_x00172 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00186 != 0);
  }
  func_0x000107869004(param_1 + 0x168);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869344(&UNK_10f42f9dc);
  puStack_70 = &UNK_10f42fa03;
  uStack_68 = 0x13b;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866240();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x16b];
    uVar8 = param_1[0x16b];
    puVar7 = (undefined *)param_1[0x16a];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00173;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00187 != 0);
  }
  func_0x000107869004(param_1 + 0x16a);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x000107869300(&UNK_10f42fb3f);
  puStack_70 = &UNK_10f42fb5d;
  uStack_68 = 0x83;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866564();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x16d];
    uVar8 = param_1[0x16d];
    puVar7 = (undefined *)param_1[0x16c];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00174;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00188 != 0);
  }
  func_0x000107869004(param_1 + 0x16c);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694ec(&UNK_10f42fbe1);
  puStack_70 = &UNK_10f42fc00;
  uStack_68 = 0xdc;
  func_0x000107868ed8();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866354();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x16f];
    uVar8 = param_1[0x16f];
    puVar7 = (undefined *)param_1[0x16e];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00175;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00189 != 0);
  }
  func_0x000107869004(param_1 + 0x16e);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694b0(&UNK_10f42fcdd);
  puStack_70 = &UNK_10f42fcf7;
  uStack_68 = 0x95;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866444();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x171];
    uVar8 = param_1[0x171];
    puVar7 = (undefined *)param_1[0x170];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00176;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00190 != 0);
  }
  func_0x000107869004(param_1 + 0x170);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078694a4(&UNK_10f42fd8d);
  puStack_70 = &UNK_10f42fdb2;
  uStack_68 = 0xa4;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x0001078664d4();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x173];
    uVar8 = param_1[0x173];
    puVar7 = (undefined *)param_1[0x172];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00177;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00191 != 0);
  }
  func_0x000107869004(param_1 + 0x172);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786948c(&UNK_10f42fe57);
  puStack_70 = &UNK_10f42fe7b;
  uStack_68 = 0xaa;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  func_0x000107866714();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x175];
    uVar8 = param_1[0x175];
    puVar7 = (undefined *)param_1[0x174];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00178;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00192 != 0);
  }
  func_0x000107869004(param_1 + 0x174);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x00010786935c(&UNK_10f42ff26);
  puStack_70 = &UNK_10f42ff3f;
  uStack_68 = 0x95;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e38();
  FUN_107866168();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x177];
    uVar8 = param_1[0x177];
    puVar7 = (undefined *)param_1[0x176];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00179;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00193 != 0);
  }
  func_0x000107869004(param_1 + 0x176);
  func_0x00010786900c();
  func_0x000107868ffc();
  func_0x0001078691d8(&UNK_10f42ffd5);
  puStack_70 = &UNK_10f42fff2;
  uStack_68 = 0x188;
  func_0x000107868d3c();
  uVar6 = *puVar1;
  func_0x000107868e0c();
  func_0x000107868e2c();
  func_0x000107868e00();
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[0x179];
    uVar8 = param_1[0x179];
    puVar7 = (undefined *)param_1[0x178];
  }
  else {
    func_0x00010786901c();
    lVar5 = extraout_x8_x00180;
  }
  puStack_80 = puVar7;
  puStack_78 = (undefined *)uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_x00194 != 0);
  }
  func_0x000107869004(param_1 + 0x178);
  func_0x00010786900c();
  func_0x000107868ffc();
  return param_1;
}



/* Entry: 107865648; end: 10786565b;  */

void FUN_107865648(void)

{
  func_0x00010786508c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107865840; end: 10786597f;  */

void FUN_107865840(long param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 **ppuStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_60 = 0x3f800000;
  pppuVar2 = (undefined8 ***)(param_1 + 8);
  func_0x00010786903c();
  func_0x00010724e404();
  if (&uStack_80 != (undefined8 *)(param_1 + 0xb0)) {
    uStack_60 = *(undefined4 *)(param_1 + 0xd0);
    plVar3 = (long *)(param_1 + 0xc0);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      func_0x000107869528();
      uStack_48 = 0;
      ppuStack_58 = pppuVar2;
      plStack_50 = &lStack_70;
      *pppuVar2 = (undefined8 **)0x0;
      pppuVar2[1] = (undefined8 **)0x0;
      *(undefined4 *)(pppuVar2 + 2) = *(undefined4 *)(plVar3 + 2);
      func_0x000107868c5c(pppuVar2 + 3,plVar3 + 3);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      pppuVar2[1] = (undefined8 **)(ulong)*(uint *)(pppuVar2 + 2);
      func_0x0001078688dc(&uStack_80,pppuVar2);
      ppuStack_58 = (undefined8 **)0x0;
      pppuVar2 = &ppuStack_58;
      func_0x000107868ce8();
    }
  }
  func_0x00010786932c();
  plVar3 = (long *)lStack_70;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      FUN_10786760c(&uStack_80);
      return;
    }
    if ((long *)plVar3[6] == (long *)0x0) break;
    func_0x000107869404(*(undefined8 *)(*(long *)plVar3[6] + 0x30));
    plVar3 = (long *)*plVar3;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107865948);
  (*pcVar1)();
}



/* Entry: 107866168; end: 107866857;  */

void FUN_107866168(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010786907c();
  func_0x000107868e78();
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107866ca4; end: 107866d3f;  */

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

undefined1 * FUN_107866ca4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  undefined1 auStack_5c8 [24];
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 ***pppuStack_5a0;
  undefined *puStack_598;
  long lStack_590;
  long lStack_588;
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [72];
  undefined4 uStack_520;
  undefined1 auStack_518 [72];
  undefined8 ***pppuStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long alStack_48a [8];
  undefined1 auStack_448 [72];
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  undefined8 uStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  undefined4 uStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x0001078693dc();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x000107868fa4();
  func_0x0001078692b0();
  lVar5 = *(long *)(unaff_x21 + 0xa8);
  func_0x00010786933c();
  uStack_80 = 7;
  lStack_c8 = lVar5;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar3 = auStack_d8;
  func_0x00010786748c(puVar3);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x00010786748c(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866d40;
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
    lVar5 = *(long *)(lVar5 + 0xa8);
    func_0x00010786933c();
    uStack_160 = 8;
    lStack_1a8 = lVar5;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar3 = auStack_1b8;
    func_0x0001078674b0(puVar3);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x0001078674b0(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866ddc;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x000107869368();
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001078693e8();
      func_0x00010750833c();
      uStack_288 = (undefined4)param_1;
      uStack_240 = 9;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(lVar5 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar3 = auStack_298;
      func_0x000107289e5c(puVar3);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x000107289e5c(auStack_298);
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866e70;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        func_0x000107869368();
        if (extraout_x9_02 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_02 != 0);
        }
        func_0x0001078693e8();
        func_0x00010740f294();
        uStack_320 = 10;
        uStack_368 = param_1;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(lVar5 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar3 = auStack_378;
        func_0x00010740f2d0(puVar3);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          func_0x00010740f2d0(auStack_378);
          func_0x00010786906c();
          puStack_388 = &DAT_107866f04;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          uStack_4a0 = *param_3;
          lStack_498 = param_3[1];
          plVar4 = extraout_x8;
          if (lStack_498 != 0) {
            do {
              func_0x000107868ef4();
              plVar4 = extraout_x8_00;
            } while (extraout_w11_03 != 0);
          }
          lVar5 = *plVar4;
          func_0x00010785f084(alStack_48a);
          plVar4 = alStack_48a;
          func_0x0001078692c8(auStack_448);
          uStack_400 = 0xb;
          func_0x00010786954c();
          puVar3 = *(undefined1 **)(lVar5 + 0x18);
          func_0x000107868ecc();
          func_0x000107869290();
          func_0x0001078693cc();
          func_0x000107869424();
          func_0x000107868d60();
          if ((bool)in_ZR) {
            return puVar3;
          }
          ___stack_chk_fail();
          func_0x000107869290();
          func_0x0001078693cc();
          func_0x000107869424();
          func_0x00010786906c();
          puStack_4a8 = &DAT_107866fac;
          pppuStack_4b0 = &pppuStack_390;
          func_0x000107868d78();
          lVar5 = *plVar4;
          lStack_588 = plVar4[1];
          lStack_590 = lVar5;
          if (lStack_588 != 0) {
            do {
              func_0x000107868ef4();
            } while (extraout_w11_04 != 0);
          }
          uVar1 = *(undefined8 *)(lVar5 + 0xc0);
          uVar2 = *(undefined8 *)(lVar5 + 200);
          func_0x000107328418(auStack_580);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_568,auStack_580);
          uStack_520 = 0xc;
          puVar3 = auStack_518;
          puStack_598 = &UNK_10786700c;
          uStack_5b0 = uVar2;
          uStack_5a8 = uVar1;
          pppuStack_5a0 = &pppuStack_4b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_5c8);
          func_0x000107268798(puVar3,auStack_5c8);
          func_0x0001078693fc();
          return puVar3;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 107867284; end: 1078672b7;  */

long * FUN_107867284(long *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined8 param_6)

{
  float fVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  double dVar5;
  undefined4 uVar6;
  long *unaff_x19;
  long alStack_80 [5];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  double *pdStack_20;
  undefined8 uStack_18;
  
  pdStack_20 = param_2;
  uStack_18 = param_3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&pdStack_20,param_4);
    return param_1;
  }
  func_0x000104bfeb48();
  fVar1 = *(float *)(param_2 + 9);
  if (fVar1 == 0.0) {
    uVar2 = *(undefined1 *)param_2;
    *(undefined4 *)param_1 = 6;
    *(undefined1 *)(param_1 + 1) = uVar2;
    return param_1;
  }
  if (fVar1 == 1.4013e-45) {
    dVar5 = (double)(long)*(char *)param_2;
code_r0x0001078672cc:
    uVar6 = 4;
  }
  else {
    if (fVar1 == 2.8026e-45) {
      dVar5 = (double)(ulong)*(byte *)param_2;
    }
    else {
      if (fVar1 == 4.2039e-45) {
        dVar5 = (double)(long)*(short *)param_2;
        goto code_r0x0001078672cc;
      }
      if (fVar1 == 5.60519e-45) {
        dVar5 = (double)(ulong)*(ushort *)param_2;
      }
      else {
        if (fVar1 == 7.00649e-45) {
          dVar5 = (double)(long)(int)*(float *)param_2;
          goto code_r0x0001078672cc;
        }
        if (fVar1 == 8.40779e-45) {
          dVar5 = (double)(ulong)(uint)*(float *)param_2;
        }
        else {
          if (fVar1 == 9.80909e-45) {
            dVar5 = *param_2;
            goto code_r0x0001078672cc;
          }
          if (fVar1 != 1.12104e-44) {
            if (fVar1 == 1.26117e-44) {
              dVar5 = (double)*(float *)param_2;
            }
            else {
              if (fVar1 != 1.4013e-44) {
                uVar2 = fVar1 == 1.54143e-44;
                if ((bool)uVar2) {
                  uVar4 = SUB81(alStack_80,0);
                  plVar3 = alStack_80;
                  func_0x00010724cc70();
                  uStack_48 = extraout_x8;
                  func_0x000100060964(alStack_80);
                  func_0x000104c33004(param_1);
                  func_0x000104c2f714();
                  func_0x00010724cc40(uStack_48);
                  if ((bool)uVar2) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  *(undefined1 *)plVar3 = uVar4;
                  *(undefined1 *)((long)plVar3 + 1) = param_5;
                  *(undefined2 *)((long)plVar3 + 2) = 0;
                  func_0x000104c2fe00(plVar3 + 1,param_3);
                  *(undefined1 *)(plVar3 + 8) = 0;
                  *(undefined1 *)(plVar3 + 0xf) = 0;
                  func_0x00010724af54(plVar3 + 0x10,param_4);
                  func_0x00010724afdc(plVar3 + 0x1a,param_6);
                  *(undefined1 *)(plVar3 + 0x22) = 0;
                  *(undefined1 *)(plVar3 + 0x23) = 0;
                  *(undefined1 *)(plVar3 + 0x24) = 0;
                  *(undefined1 *)(plVar3 + 0x25) = 0;
                  *(undefined1 *)(plVar3 + 0x26) = 0;
                  *(undefined1 *)(plVar3 + 0x29) = 0;
                  *(undefined1 *)(plVar3 + 0x2e) = 0;
                  *(undefined1 *)(plVar3 + 0x35) = 0;
                  *(undefined2 *)(plVar3 + 0x36) = 0;
                  plVar3[0x2b] = 0;
                  plVar3[0x2c] = 0;
                  plVar3[0x2a] = 0;
                  *(undefined1 *)(plVar3 + 0x2d) = 0;
                  plVar3[0x38] = 0;
                  plVar3[0x37] = 0;
                  plVar3[0x3a] = 0;
                  plVar3[0x39] = 0;
                  plVar3[0x3c] = 0;
                  plVar3[0x3b] = 0;
                  plVar3[0x3d] = 0;
                  *(undefined4 *)(plVar3 + 0x3e) = 0x3f800000;
                  return plVar3;
                }
                if (fVar1 == 1.82169e-44) {
                  func_0x00010727473c();
                  func_0x000107268370();
                  return unaff_x19;
                }
                if (fVar1 == 1.68156e-44) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (auStack_58);
                  func_0x000107268798(param_1,auStack_58);
                  func_0x0001078693fc();
                  return param_1;
                }
                *(undefined4 *)param_1 = 7;
                return param_1;
              }
              dVar5 = *param_2;
            }
            *(undefined4 *)param_1 = 3;
            param_1[1] = (long)dVar5;
            return param_1;
          }
          dVar5 = *param_2;
        }
      }
    }
    uVar6 = 5;
  }
  *(undefined4 *)param_1 = uVar6;
  param_1[1] = (long)dVar5;
  return param_1;
}



/* Entry: 10786760c; end: 107867677;  */

long * FUN_10786760c(long *param_1)

{
  long lVar1;
  
  func_0x000107867640(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107867788; end: 10786778f;  */

void FUN_107867788(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107867c64; end: 107867c7f;  */

void FUN_107867c64(void)

{
  func_0x000107869164();
  func_0x000107867c80();
  return;
}



/* Entry: 107867d7c; end: 107867d97;  */

void FUN_107867d7c(void)

{
  func_0x000107869234();
  func_0x000107867d98();
  return;
}



/* Entry: 107867ec8; end: 107867ecb;  */

void FUN_107867ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3520;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107867fe8; end: 107867ffb;  */

void FUN_107867fe8(void)

{
  func_0x000107868028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078680a4; end: 1078680b7;  */

void FUN_1078680a4(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1078681d0; end: 1078681d7;  */

void FUN_1078681d0(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107868340; end: 107868343;  */

void FUN_107868340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3700;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078684d4; end: 107868593;  */

long * FUN_1078684d4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((int)param_1[2] == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  if ((int)param_1[2] == 5) {
    return param_1;
  }
  func_0x00010563ab98();
  if ((int)param_1[2] == 6) {
    return param_1;
  }
  func_0x00010563ab98();
  if ((int)param_1[2] != 10) {
    func_0x00010563ab98();
    if ((int)param_1[2] == 0xb) {
      return param_1;
    }
    func_0x00010563ab98();
    if ((int)param_1[2] != 0xc) {
      func_0x00010563ab98();
      if ((int)param_1[2] == 0xd) {
        return param_1;
      }
      func_0x00010563ab98();
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
          return (long *)0x0;
        }
        do {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) {
              return (long *)0x0;
            }
            plVar4 = (long *)plVar5[1];
            if (plVar2 != plVar4) break;
            func_0x00010786942c();
            if ((int)plVar3 != 0) {
              return plVar5;
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
      return (long *)0x0;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1078687bc; end: 107868897;  */

undefined1 * FUN_1078687bc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_150 [31];
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [104];
  undefined1 auStack_70 [64];
  
  func_0x000107868dcc();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x000104c32a18(auStack_120,param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uStack_130 = uVar1;
  uStack_128 = uVar2;
  func_0x000107323974(auStack_70,&UNK_10f43017b,9,&uStack_130);
  func_0x0001077765a4(auStack_e0,auStack_120,&uStack_131);
  puVar4 = auStack_70;
  func_0x000107277e4c(auStack_150,uVar5,puVar4,auStack_e0);
  func_0x00010726af18(auStack_d8);
  func_0x000104c2f714(auStack_70);
  puVar3 = auStack_120;
  func_0x000104c3323c();
  func_0x000107868d60();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010726af18(auStack_d8);
  func_0x000104c2f714(auStack_70);
  puVar3 = auStack_120;
  func_0x000104c3323c(puVar3);
  func_0x00010786906c();
  func_0x0001004a5364(puVar4,&PTR_DAT_1109e37c0);
  puVar3 = puVar3 + 8;
  if ((int)puVar4 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  return puVar3;
}



/* Entry: 107868d20; end: 1078695db;  */

undefined8 FUN_107868d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xbd0);
}



/* Entry: 10786975c; end: 10786978b;  */

void FUN_10786975c(void)

{
  func_0x00010786d890();
  func_0x00010726acf0();
  func_0x00010786daa0();
  func_0x00010726d358();
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 107869a4c; end: 107869b13;  */

/* WARNING: Possible PIC construction at 0x000107869a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107869a78) */
/* WARNING: Removing unreachable block (ram,0x000107869a8c) */
/* WARNING: Removing unreachable block (ram,0x000107869a7c) */
/* WARNING: Removing unreachable block (ram,0x000107869ac4) */
/* WARNING: Removing unreachable block (ram,0x000107869af4) */
/* WARNING: Removing unreachable block (ram,0x000107869b10) */
/* WARNING: Removing unreachable block (ram,0x000107869ae0) */

long FUN_107869a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar2;
  undefined8 auStack_150 [2];
  
  func_0x00010786d78c();
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      uVar2 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = unaff_x26 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_4;
      auStack_150[0] = param_2;
      iVar1 = (int)auStack_150;
      func_0x00010726d570(auStack_150,unaff_x24 + uVar2 * 0x50);
      if (iVar1 != 0) {
        return *unaff_x19 + uVar2;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return 0;
}



/* Entry: 107869f68; end: 107869fcf;  */

void FUN_107869f68(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  func_0x00010786dae8();
  func_0x000107869fd0();
  if (param_1 != 0) {
    func_0x000107869d14();
    func_0x00010786bb88();
    func_0x000107869b98();
  }
  plVar2 = unaff_x20;
  func_0x000107869fd0();
  if (plVar2 != (long *)0x0) {
    return;
  }
  func_0x00010786dae8();
  func_0x00010786b5b8();
  lVar1 = *unaff_x20;
  lVar3 = lVar1;
  func_0x00010786bdc4(lVar1,unaff_x19);
  if (lVar3 != 0) {
    func_0x00010786c5e0(lVar1,lVar3);
  }
  return;
}



/* Entry: 10786a2a4; end: 10786a2bf;  */

bool FUN_10786a2a4(long param_1)

{
  func_0x000107869fd0();
  return param_1 != 0;
}



/* Entry: 10786a50c; end: 10786a52b;  */

undefined8 FUN_10786a50c(undefined8 *param_1)

{
  FUN_10786cf74();
  return *param_1;
}



/* Entry: 10786a8b0; end: 10786a8e3;  */

void FUN_10786a8b0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010786ad28(auStack_30);
  func_0x00010786dbb0();
  func_0x00010749e85c();
  func_0x00010745f93c(auStack_30);
  return;
}



/* Entry: 10786a9b4; end: 10786a9cf;  */

void FUN_10786a9b4(void)

{
  func_0x00010786de6c();
  func_0x00010786a9d0();
  return;
}



/* Entry: 10786ab8c; end: 10786abf7;  */

/* WARNING: Possible PIC construction at 0x00010786aba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786aba8) */
/* WARNING: Removing unreachable block (ram,0x00010786abf0) */
/* WARNING: Removing unreachable block (ram,0x00010786abe8) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

void FUN_10786ab8c(long param_1,undefined8 param_2)

{
  func_0x00010786d71c();
  func_0x00010786dbbc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786ac1c();
  func_0x00010786da84();
  return;
}



/* Entry: 10786acf8; end: 10786ad07;  */

void FUN_10786acf8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10786ae74; end: 10786ae87;  */

void FUN_10786ae74(void)

{
  func_0x00010786ae94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786b028; end: 10786b04b;  */

void FUN_10786b028(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786b04c();
  func_0x00010786da84();
  return;
}



/* Entry: 10786b120; end: 10786b17f;  */

void FUN_10786b120(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  func_0x00010786b180();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x00010786b0e8(param_1);
  return;
}



/* Entry: 10786b380; end: 10786b3a3;  */

void FUN_10786b380(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010786b3a4(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10786b57c; end: 10786b5af;  */

void FUN_10786b57c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
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



/* Entry: 10786b910; end: 10786b9d3;  */

/* WARNING: Possible PIC construction at 0x00010786ba04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786bac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786ba08) */
/* WARNING: Removing unreachable block (ram,0x00010786ba14) */
/* WARNING: Removing unreachable block (ram,0x00010786ba28) */
/* WARNING: Removing unreachable block (ram,0x00010786ba30) */
/* WARNING: Removing unreachable block (ram,0x00010786ba3c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba44) */
/* WARNING: Removing unreachable block (ram,0x00010786ba50) */
/* WARNING: Removing unreachable block (ram,0x00010786ba58) */
/* WARNING: Removing unreachable block (ram,0x00010786ba60) */
/* WARNING: Removing unreachable block (ram,0x00010786ba80) */
/* WARNING: Removing unreachable block (ram,0x00010786ba6c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba74) */
/* WARNING: Removing unreachable block (ram,0x00010786ba84) */
/* WARNING: Removing unreachable block (ram,0x00010786ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010786bab4) */
/* WARNING: Removing unreachable block (ram,0x00010786babc) */
/* WARNING: Removing unreachable block (ram,0x00010786ba94) */
/* WARNING: Removing unreachable block (ram,0x00010786ba1c) */
/* WARNING: Removing unreachable block (ram,0x00010786bacc) */
/* WARNING: Removing unreachable block (ram,0x00010786bad0) */
/* WARNING: Removing unreachable block (ram,0x00010786d95c) */

void FUN_10786b910(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = param_1;
  plVar2 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar1 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (param_2 <= plVar4) {
    if (param_2 < plVar4) {
      plVar1 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar1) {
        plVar1 = (long *)(1L << (-LZCOUNT((long)plVar1 - 1) & 0x3fU));
      }
      if (param_2 <= plVar1) {
        param_2 = plVar1;
      }
      if (param_2 < plVar4) goto LAB_10786b958;
    }
    return;
  }
LAB_10786b958:
  func_0x00010786daa0();
  if (plVar2 != (long *)0x0) {
    if ((ulong)plVar2 >> 0x3d == 0) {
      plVar2 = (long *)((long)plVar2 << 3);
      __Znwm();
    }
    else {
      func_0x000104bd35f4();
    }
  }
  lVar3 = *plVar1;
  *plVar1 = (long)plVar2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786bbb8; end: 10786bdc3;  */

undefined1  [16]
FUN_10786bbb8(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  plVar5 = param_3;
  func_0x00010786d91c();
  plVar7 = (long *)param_3[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10786bc78;
          plVar3 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          plVar3 = plVar6 + 2;
          func_0x000104c32db4(plVar3,param_4);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10786bd98;
          }
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
      } while (plVar3 == unaff_x25);
    }
  }
LAB_10786bc78:
  uVar2 = *param_6;
  plVar3 = param_3 + 2;
  plVar6 = (long *)0x70;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  func_0x000104c2fe00(plVar6 + 2,uVar2);
  plVar6[9] = (long)&UNK_10e52b660;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  func_0x00010786deb0();
  if ((plVar7 == (long *)0x0) || (param_2 * (float)plVar7 < param_1)) {
    func_0x00010786dd14((long)plVar7 << 1);
    FUN_10786b910(param_3);
    plVar7 = (long *)param_3[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *param_3;
  plVar5 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar6 != 0) {
      plVar5 = *(long **)(*plVar6 + 8);
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
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  func_0x00010786dad0();
  uVar2 = 1;
LAB_10786bd98:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10786c200; end: 10786c20b;  */

undefined ** FUN_10786c200(void)

{
  return &PTR_DAT_1109e3a50;
}



/* Entry: 10786c37c; end: 10786c3ab;  */

void FUN_10786c37c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e39d0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c52c; end: 10786c54f;  */

void FUN_10786c52c(void)

{
  func_0x00010786dab8();
  func_0x00010786da90(&PTR_DAT_1109e3af0);
  return;
}



/* Entry: 10786c80c; end: 10786c823;  */

void FUN_10786c80c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10786c90c; end: 10786c933;  */

void FUN_10786c90c(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3c50);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786cb70; end: 10786cbc7;  */

void FUN_10786cb70(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10786cda0; end: 10786ce73;  */

long * FUN_10786cda0(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long lVar4;
  long extraout_x9;
  ulong uVar5;
  long *unaff_x19;
  long *plVar6;
  
  plVar3 = param_2;
  func_0x00010786d78c();
  func_0x000100061de0();
  func_0x00010786dea4();
  lVar4 = extraout_x8_00;
  if ((extraout_x9 == 0) && (*(char *)(extraout_x8_00 + (long)param_1) != -2)) {
    uVar5 = unaff_x19[2];
    bVar2 = 8 < uVar5;
    if ((bVar2) && (func_0x00010786de78(), uVar5 = extraout_x8_01, bVar2)) {
      plVar3 = (long *)&UNK_1109e3c60;
      func_0x00010786dd8c();
    }
    else {
      plVar3 = (long *)(uVar5 << 1 | 1);
      param_1 = unaff_x19;
      func_0x00010786cbc8();
    }
    func_0x00010786daa0();
    func_0x000100061de0();
    lVar4 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar2 = *(char *)(lVar4 + (long)param_1) == -0x80;
  *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) - (ulong)bVar2;
  bVar1 = (byte)param_2 & 0x7f;
  uVar5 = unaff_x19[2];
  *(byte *)(lVar4 + (long)param_1) = bVar1;
  *(byte *)(lVar4 + (uVar5 & (long)param_1 - 7U) + (uVar5 & 7)) = bVar1;
  func_0x00010786d6e8(extraout_x8);
  if (bVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0xffffffffffffffff) {
    plVar6 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar6,(undefined *)((long)plVar6 + (long)plVar3));
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar6;
}



/* Entry: 10786cf74; end: 10786cfb3;  */

void FUN_10786cf74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x00010786b180();
  if (1 < (long)puVar1) {
    func_0x00010786cfb4(auStack_30,*param_1);
    func_0x00010786dbb0();
    func_0x00010786cec0();
    func_0x00010786ddf4();
  }
  return;
}



/* Entry: 10786d230; end: 10786d253;  */

long FUN_10786d230(long param_1)

{
  func_0x000104c318bc();
  func_0x00010786ded8();
  func_0x0001073e0028(param_1 + 0x38);
  func_0x00010786dcb8();
  return param_1;
}



/* Entry: 10786d47c; end: 10786d49b;  */

void FUN_10786d47c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010786d49c(&uStack_18);
  return;
}



/* Entry: 10786d668; end: 10786d68b;  */

void FUN_10786d668(undefined8 param_1)

{
  uint extraout_w8;
  long unaff_x27;
  
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
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



/* Entry: 10786e5e4; end: 10786e643;  */

undefined1 * FUN_10786e5e4(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uStack_11;
  
  iVar1 = *param_2;
  if (iVar1 != 2) {
    if (iVar1 == 4) {
      return (undefined1 *)0x0;
    }
    if (iVar1 != 3) {
      if (iVar1 != 1) {
        puVar3 = &uStack_11;
        func_0x00010726364c(puVar3,param_2 + 2);
        return puVar3;
      }
      uVar2 = *(ulong *)(param_2 + 2);
      goto LAB_10740d3e0;
    }
  }
  uVar2 = *(ulong *)(param_2 + 2);
LAB_10740d3e0:
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar2 = (uVar2 ^ uVar2 >> 0x1b) * -0x6b2fb644ecceee15;
  return (undefined1 *)(uVar2 ^ uVar2 >> 0x1f);
}



/* Entry: 10786ea0c; end: 10786ea9b;  */

double * FUN_10786ea0c(double *param_1,undefined1 *param_2,double *param_3)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *param_2;
  dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 8));
  dVar2 = param_3[1] + dVar2;
  func_0x00010786e9a0(uVar1);
  *param_1 = dVar2;
  dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 4));
  dVar4 = *param_3;
  dVar3 = 1.0;
  _ldexp(uVar1);
  param_1[1] = ((dVar4 + dVar2) / dVar3) * 360.0 + -180.0;
  return param_1;
}



/* Entry: 10786ee24; end: 10786ee67;  */

/* WARNING: Possible PIC construction at 0x00010786f0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786f01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786f070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786f020) */
/* WARNING: Removing unreachable block (ram,0x00010786f0c0) */
/* WARNING: Removing unreachable block (ram,0x00010786f0dc) */
/* WARNING: Removing unreachable block (ram,0x00010786f358) */
/* WARNING: Removing unreachable block (ram,0x00010786f0f4) */
/* WARNING: Removing unreachable block (ram,0x00010786f100) */
/* WARNING: Removing unreachable block (ram,0x00010786f108) */
/* WARNING: Removing unreachable block (ram,0x00010786f0cc) */
/* WARNING: Removing unreachable block (ram,0x00010786f13c) */
/* WARNING: Removing unreachable block (ram,0x00010786f074) */

undefined1  [16] FUN_10786ee24(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  undefined8 uVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  uint *unaff_x20;
  uint *puVar12;
  uint *unaff_x21;
  uint *unaff_x22;
  long lVar13;
  uint *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint *puVar4;
  
  puVar14 = &stack0xfffffffffffffff0;
  if (1 < (uint)param_3) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  func_0x000107871318();
  puVar7 = param_3;
  __ZNSt13runtime_errorC1EPKc();
  func_0x000107871284();
  func_0x0001078713b4();
  func_0x000107871320();
  puVar15 = &UNK_10786ee68;
  func_0x000107871338();
  puVar2 = &stack0xffffffffffffffe0;
code_r0x00010786ee68:
  while( true ) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar2 + -0x28) = unaff_d8;
    *(uint **)(puVar2 + -0x20) = unaff_x20;
    *(uint **)(puVar2 + -0x18) = param_3;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar14 = puVar2 + -0x10;
    if (*(short *)((long)puVar7 + 0x16) == 4) {
      if (1 < *puVar7) {
        func_0x0001073274d0(*(undefined8 *)(puVar7 + 2));
        uVar11 = param_1;
        func_0x0001073274d0(*(long *)(puVar7 + 2) + 0x18);
        auVar17._8_8_ = uVar11;
        auVar17._0_8_ = param_1;
        return auVar17;
      }
      func_0x000107871318();
      puVar12 = (uint *)&UNK_10f430321;
      puVar8 = puVar7;
      __ZNSt13runtime_errorC1EPKc();
    }
    else {
      func_0x000107871318();
      puVar12 = (uint *)&UNK_10f430303;
      puVar8 = puVar7;
      __ZNSt13runtime_errorC1EPKc();
    }
    func_0x000107871284();
    func_0x0001078713b4();
    func_0x000107871320();
    puVar15 = &SUB_10786ef04;
    func_0x000107871338();
    puVar3 = puVar2 + -0x30;
    while( true ) {
      param_3 = puVar8;
      puVar2 = puVar3 + -0xd0;
      puVar4 = (uint *)(puVar3 + -0xd0);
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(uint **)(puVar3 + -0x38) = unaff_x23;
      *(uint **)(puVar3 + -0x30) = unaff_x22;
      *(uint **)(puVar3 + -0x28) = unaff_x21;
      *(uint **)(puVar3 + -0x20) = unaff_x20;
      *(uint **)(puVar3 + -0x18) = puVar7;
      *(undefined1 **)(puVar3 + -0x10) = puVar14;
      *(undefined **)(puVar3 + -8) = puVar15;
      puVar14 = puVar3 + -0x10;
      unaff_x22 = param_3;
      func_0x0001078712ac();
      *(undefined8 *)(puVar3 + -0x58) = extraout_x8;
      if (*(short *)((long)puVar12 + 0x16) != 3) {
        if (*(short *)((long)puVar12 + 0x16) != 0) goto code_r0x00010786f364;
        *param_3 = 7;
        uVar5 = 0;
        goto code_r0x00010786f1a4;
      }
      unaff_x23 = (uint *)(*(long *)(puVar12 + 2) + (ulong)*puVar12 * 0x30);
      func_0x00010787137c();
      if (unaff_x23 == unaff_x22) {
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
        goto code_r0x00010786f410;
      }
      unaff_x21 = unaff_x22 + 6;
      unaff_x20 = unaff_x22;
      func_0x00010787138c();
      if ((int)unaff_x20 == 0) break;
      func_0x00010787137c();
      if (unaff_x23 == unaff_x20) {
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
        goto code_r0x00010786f410;
      }
      uVar5 = *(short *)((long)unaff_x20 + 0x2e) == 4;
      if (!(bool)uVar5) {
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
        goto code_r0x00010786f410;
      }
      *(undefined8 *)(puVar3 + -0xd0) = 0;
      *(undefined8 *)(puVar3 + -200) = 0;
      *(undefined8 *)(puVar3 + -0xc0) = 0;
      if (unaff_x20[6] == 0) {
        uVar10 = 0;
      }
      else {
        func_0x000107870cac(puVar3 + -0xb0,unaff_x20[6],0,puVar3 + -0xc0);
        func_0x0001078714fc();
        func_0x000107870cf4(puVar3 + -0xb0);
        uVar10 = (ulong)unaff_x20[6];
      }
      puVar12 = *(uint **)(unaff_x20 + 8);
      unaff_x22 = (uint *)(uVar10 * 0x18);
      unaff_x23 = (uint *)0x7fffffffffffffe0;
      unaff_x24 = 0x7ffffffffffffff;
      if (uVar10 * 3 == 0) {
        *param_3 = 0;
        param_1 = *(undefined8 *)(puVar3 + -0xd0);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar3 + -200);
        *(undefined8 *)(param_3 + 2) = param_1;
        *(undefined8 *)(param_3 + 6) = *(undefined8 *)(puVar3 + -0xc0);
        func_0x0001078714a8();
        func_0x000104c31e7c();
        goto code_r0x00010786f1a4;
      }
      puVar8 = (uint *)(puVar3 + -0x80);
      puVar15 = &UNK_10786f0c0;
      puVar3 = puVar3 + -0xd0;
      puVar7 = param_3;
      unaff_x20 = puVar12;
      unaff_x21 = puVar4;
    }
    func_0x00010787137c();
    if (unaff_x23 == unaff_x20) {
      func_0x000107871318();
      func_0x000107871508();
      func_0x00010787153c();
      func_0x0001078714f0();
      func_0x000107871258();
      goto code_r0x00010786f484;
    }
    uVar5 = *(short *)((long)unaff_x20 + 0x2e) == 4;
    if (!(bool)uVar5) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto code_r0x00010786f410;
    }
    puVar7 = unaff_x20;
    func_0x00010787138c();
    iVar6 = (int)puVar7;
    if (iVar6 == 0) break;
    puVar15 = &UNK_10786f020;
    puVar2 = puVar3 + -0xd0;
    puVar7 = unaff_x20 + 6;
  }
  func_0x00010787138c();
  if (iVar6 == 0) {
    func_0x00010787138c();
    if (iVar6 != 0) {
      FUN_10786ee24(unaff_x20[6]);
      func_0x00010786f614(puVar3 + -0xb0,unaff_x20 + 6);
      uVar11 = 5;
      goto code_r0x00010786f19c;
    }
    func_0x00010787138c();
    if (iVar6 == 0) {
      func_0x00010787138c();
      if (iVar6 != 0) {
        func_0x00010786ed74(unaff_x20 + 6);
        func_0x00010786f6b8(puVar3 + -0xb0,unaff_x20 + 6);
        func_0x0001078713bc(4);
        func_0x000104c31ca8();
        goto code_r0x00010786f1a4;
      }
      func_0x00010787138c();
      if (iVar6 != 0) {
        func_0x0001078714c8();
        for (lVar13 = extraout_x8_02 << 3; lVar13 != 0; lVar13 = lVar13 + -0x18) {
          func_0x00010786ed74(unaff_x21);
          unaff_x21 = unaff_x21 + 6;
        }
        func_0x000107871548();
        if (!(bool)uVar5) {
          func_0x000107871318();
          func_0x0001078712e0();
          func_0x000107871258();
          goto code_r0x00010786f484;
        }
        if (unaff_x20[6] == 0) {
          uVar9 = 0;
        }
        else {
          func_0x000104c325c0(puVar3 + -0xb0,unaff_x20[6],0,puVar3 + -0x70);
          func_0x000107871574();
          func_0x000104c32590();
          func_0x000104c32718(puVar3 + -0xb0);
          uVar9 = unaff_x20[6];
        }
        uVar11 = *(undefined8 *)(unaff_x20 + 8);
        func_0x00010787158c(uVar9);
        while (unaff_x21 != (uint *)0x0) {
          func_0x00010786f6b8(puVar3 + -0xb0,uVar11);
          func_0x000107871574();
          func_0x000104c324d4();
          func_0x000104c31ca8(puVar3 + -0xb0);
          func_0x0001078714d8();
        }
        func_0x0001078713e0(1);
        func_0x000104c31df0();
        goto code_r0x00010786f1a4;
      }
      func_0x000107871318();
      func_0x000107871508();
      func_0x00010787153c();
      func_0x0001078714f0();
      func_0x000107871258();
      goto code_r0x00010786f484;
    }
    func_0x0001078714c8();
    for (lVar13 = extraout_x8_01 << 3; lVar13 != 0; lVar13 = lVar13 + -0x18) {
      FUN_10786ee24(*unaff_x21);
      unaff_x21 = unaff_x21 + 6;
    }
    func_0x000107871548();
    if (!(bool)uVar5) {
      func_0x000107871318();
      func_0x0001078712e0();
      func_0x000107871258();
      goto code_r0x00010786f484;
    }
    if (unaff_x20[6] == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000104c32068(puVar3 + -0xb0,unaff_x20[6],0,puVar3 + -0x70);
      func_0x000107871574();
      func_0x000104c32038();
      func_0x000104c321bc(puVar3 + -0xb0);
      uVar9 = unaff_x20[6];
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010787158c(uVar9);
    while (unaff_x21 != (uint *)0x0) {
      func_0x00010786f614(puVar3 + -0xb0,uVar11);
      func_0x000107871574();
      func_0x000104c31f7c();
      func_0x000107871434();
      func_0x0001078714d8();
    }
    func_0x0001078713e0(2);
    func_0x000104c31d58();
  }
  else {
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
    uVar5 = *(short *)((long)unaff_x20 + 0x2e) == 4;
    if (!(bool)uVar5) goto code_r0x00010786f414;
    func_0x00010740ed44(puVar3 + -0xb0,unaff_x20[6]);
    func_0x0001078714c8();
    unaff_x20 = (uint *)(extraout_x8_00 << 3);
    if (unaff_x20 != (uint *)0x0) goto code_r0x00010786f06c;
    uVar11 = 3;
code_r0x00010786f19c:
    func_0x0001078713bc(uVar11);
    func_0x000104c31c5c();
  }
code_r0x00010786f1a4:
  func_0x000107871270(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar5) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  ___stack_chk_fail();
code_r0x00010786f364:
  func_0x000107871318();
  __ZNSt13runtime_errorC1EPKc();
code_r0x00010786f410:
  func_0x000107871258();
code_r0x00010786f414:
  func_0x000107871318();
  func_0x0001078712e0();
  func_0x000107871258();
code_r0x00010786f484:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10786f488);
  (*pcVar1)();
code_r0x00010786f06c:
  puVar15 = &UNK_10786f074;
  puVar7 = unaff_x21;
  goto code_r0x00010786ee68;
}



/* Entry: 10786fba4; end: 10786fe2f;  */

void FUN_10786fba4(undefined8 param_1,undefined1 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  undefined1 *puVar9;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar7 = auStack_b0;
  puVar8 = auStack_b0;
  func_0x000107871298();
  if (*(short *)((long)param_3 + 0x16) == 3) {
    func_0x000107871428();
    puVar9 = (undefined1 *)(*(long *)(param_3 + 2) + (ulong)*param_3 * 0x30);
    func_0x00010787137c();
    if (puVar9 == param_2) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_10786fdb4;
    }
    param_2 = param_2 + 0x18;
    func_0x00010786f598(param_2,&DAT_10f35070a);
    if (((ulong)param_2 & 1) == 0) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_10786fdb4;
    }
    func_0x00010787137c();
    if (puVar9 == param_2) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_10786fdb4;
    }
    func_0x00010786ef04(auStack_b0,param_2 + 0x18);
    func_0x000107871568();
    func_0x000107386104();
    func_0x000104c3365c();
    func_0x00010787137c();
    if ((undefined4 *)puVar9 != puVar7) {
      puVar1 = (undefined8 *)((long)puVar7 + 0x18);
      uVar3 = *(ushort *)((long)puVar7 + 0x2e);
      if ((uVar3 & 7) == 6) {
        if ((uVar3 >> 8 & 1) == 0) {
          if ((uVar3 >> 7 & 1) == 0) {
            func_0x0001073274d0();
            auStack_b0[0] = 1;
            uStack_a8 = param_1;
          }
          else {
            uStack_a8 = *puVar1;
            auStack_b0[0] = 2;
          }
        }
        else {
          uStack_a8 = *puVar1;
          auStack_b0[0] = 3;
        }
      }
      else {
        if ((uVar3 & 7) != 5) goto LAB_10786fdc0;
        iVar2 = *(int *)((long)puVar7 + 0x18);
        puVar4 = *(undefined8 **)((long)puVar7 + 0x20);
        if ((uVar3 & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)puVar7 + 0x2d);
          puVar4 = puVar1;
        }
        func_0x000104c302a4(auStack_70,puVar4,iVar2);
        func_0x0001072d8a90(auStack_b0,auStack_70);
        func_0x000104c2f714(auStack_70);
      }
      func_0x0001072c0368(unaff_x19 + 0x30,auStack_b0);
      func_0x000104c319e0();
      puVar7 = puVar8;
    }
    func_0x00010787137c();
    uVar6 = (undefined4 *)puVar9 == puVar7;
    if ((!(bool)uVar6) && (*(short *)((long)puVar7 + 0x2e) != 0)) {
      func_0x00010786f838(auStack_b0,(undefined1 *)((long)puVar7 + 0x18));
      func_0x0001072f99e4(unaff_x19 + 0x20,auStack_b0);
      func_0x000104c335c0(auStack_b0);
    }
    func_0x000107871270(uStack_38);
    if ((bool)uVar6) {
      return;
    }
  }
  else {
    func_0x000107871318();
    __ZNSt13runtime_errorC1EPKc();
LAB_10786fdb4:
    func_0x000107871284();
    func_0x0001078713b4();
  }
  ___stack_chk_fail();
LAB_10786fdc0:
  func_0x000107871318();
  __ZNSt13runtime_errorC1EPKc();
  func_0x000107871284();
  func_0x00010787143c();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10786fde0);
  (*pcVar5)();
}



/* Entry: 107870600; end: 107870713;  */

/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_107870600(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 extraout_x8;
  int *piVar9;
  undefined8 *puVar10;
  int *extraout_x8_00;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar11;
  undefined1 *puVar3;
  
  do {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000107871298();
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    func_0x000107871364();
    *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_10f4305cd;
    *(undefined4 *)((long)register0x00000008 + -0x60) = 0x11;
    func_0x0001078713a8();
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x3a) = 4;
    puVar10 = *(undefined8 **)param_2;
    param_2 = (int *)*puVar10;
    unaff_x22 = (int *)puVar10[1];
    unaff_x20 = param_3;
    unaff_x19 = param_1;
    unaff_x21 = param_2;
    if (param_2 == unaff_x22) {
      *(undefined **)((long)register0x00000008 + -0x68) = &UNK_10f4305df;
      *(undefined4 *)((long)register0x00000008 + -0x60) = 8;
      piVar6 = (int *)((long)register0x00000008 + -0x50);
      puVar11 = (undefined *)0x1078706cc;
      uVar5 = 1;
      goto code_r0x000107870714;
    }
    piVar9 = (int *)((long)register0x00000008 + -0x68);
    unaff_x30 = (undefined *)0x107870684;
    do {
      puVar2 = puVar3 + -0x70;
      *(int **)(puVar3 + -0x30) = unaff_x22;
      *(int **)(puVar3 + -0x28) = unaff_x21;
      *(int **)(puVar3 + -0x20) = unaff_x20;
      *(int **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      unaff_x29 = puVar3 + -0x10;
      func_0x000107871298();
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[0] = 0;
      piVar9[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar3 + -0x48) = 4;
      *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
      *(undefined4 *)(puVar3 + -0x58) = 7;
      piVar6 = (int *)(puVar3 + -0x60);
      func_0x0001078713a8();
      iVar1 = param_2[0xc];
      if (iVar1 != 4) {
        *(int **)(puVar3 + -0x68) = param_3;
        *(char **)(puVar3 + -0x60) = "id";
        *(undefined4 *)(puVar3 + -0x58) = 2;
        if (iVar1 == 3) {
          func_0x000107871308();
          func_0x0001078707c8();
        }
        else if (iVar1 == 2) {
          func_0x000107871308();
          func_0x0001078707ec();
        }
        else if (iVar1 == 1) {
          func_0x000107871308(*(undefined8 *)(param_2 + 0xe));
          func_0x000107870810();
        }
        else {
          piVar6 = param_2 + 0xe;
          func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
        }
        func_0x0001078712cc();
        func_0x000107871354();
      }
      *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
      *(undefined4 *)(puVar3 + -0x58) = 8;
      piVar8 = (int *)(puVar3 + -0x50);
      unaff_x30 = &UNK_107870408;
      unaff_x19 = piVar9;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      do {
        *(int **)(puVar2 + -0x30) = unaff_x22;
        *(int **)(puVar2 + -0x28) = unaff_x21;
        *(int **)(puVar2 + -0x20) = unaff_x20;
        *(int **)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
        *(undefined **)(puVar2 + -8) = unaff_x30;
        func_0x000107871298();
        iVar1 = *param_2;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        piVar8[0] = 0;
        piVar8[1] = 0;
        uVar5 = iVar1 == 7;
        unaff_x20 = param_2;
        if (!(bool)uVar5) {
          piVar6 = param_2;
          func_0x000107871364();
          *(undefined4 *)(puVar2 + -0x48) = 4;
          func_0x000107870ecc();
          *(int **)(puVar2 + -0x60) = piVar6;
          _strlen();
          *(int *)(puVar2 + -0x58) = (int)piVar6;
          piVar6 = (int *)(puVar2 + -0x60);
          func_0x0001078713a8();
          uVar5 = *param_2 == 0;
          puVar11 = &UNK_10f4303a6;
          if (!(bool)uVar5) {
            puVar11 = &UNK_10f43041c;
          }
          *(int **)(puVar2 + -0x68) = param_3;
          *(undefined **)(puVar2 + -0x60) = puVar11;
          uVar7 = 10;
          if (!(bool)uVar5) {
            uVar7 = 0xb;
          }
          *(undefined4 *)(puVar2 + -0x58) = uVar7;
          param_3 = (int *)(puVar2 + -0x68);
          func_0x000107870f70(puVar2 + -0x50);
          func_0x0001078712cc();
          func_0x000107871354();
          unaff_x21 = param_2;
        }
        func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
        if ((bool)uVar5) {
          return unaff_x20;
        }
        ___stack_chk_fail();
        param_1 = unaff_x20;
        func_0x000107871354();
        func_0x000107871384();
        func_0x000107871338();
        puVar4 = puVar2 + -0xc0;
        *(int **)(puVar2 + -0x90) = unaff_x20;
        *(int **)(puVar2 + -0x88) = piVar8;
        *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
        unaff_x29 = puVar2 + -0x80;
        func_0x0001078712ac();
        *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
        iVar1 = piVar6[2];
        *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar6;
        *(undefined8 *)(puVar2 + -0xa0) = 0;
        *(undefined2 *)(puVar2 + -0x9a) = 0x405;
        *(undefined8 *)(puVar2 + -0xb0) = 0;
        *(int *)(puVar2 + -0xb0) = iVar1;
        *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)param_3;
        *(int *)(puVar2 + -0xb8) = param_3[2];
        piVar6 = (int *)(puVar2 + -0xb0);
        puVar11 = &UNK_107870294;
        unaff_x19 = piVar8;
code_r0x000107870714:
        register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x40);
        puVar3 = puVar4 + -0x40;
        puVar2 = puVar4 + -0x40;
        param_3 = (int *)(puVar4 + -0x40);
        *(int **)(puVar4 + -0x20) = unaff_x20;
        *(int **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
        *(undefined **)(puVar4 + -8) = puVar11;
        unaff_x29 = puVar4 + -0x10;
        func_0x0001078712ac();
        func_0x000107871404();
        func_0x000107870de8();
        func_0x0001078712ec();
        func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
        if ((bool)uVar5) {
          return unaff_x19;
        }
        ___stack_chk_fail();
        func_0x0001078712ec();
        unaff_x30 = &SUB_10787075c;
        func_0x00010787135c();
        param_2 = param_1 + 2;
        iVar1 = *param_1;
        piVar8 = extraout_x8_00;
      } while (iVar1 == 2);
      param_1 = extraout_x8_00;
      piVar9 = extraout_x8_00;
    } while (iVar1 == 1);
  } while( true );
}



/* Entry: 1078709e4; end: 107870a07;  */

void FUN_1078709e4(undefined8 *param_1)

{
  func_0x000107326ddc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0x16) = 4;
  return;
}



/* Entry: 107870ee8; end: 107870f6f;  */

undefined * FUN_107870ee8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (*param_1 == 6) {
    return &UNK_10f430479;
  }
  if (*param_1 == 5) {
    return &UNK_10f43048a;
  }
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



/* Entry: 107871230; end: 107871257;  */

undefined4 * FUN_107871230(undefined4 *param_1)

{
  *param_1 = 5;
  func_0x000107269434(param_1 + 2);
  return param_1;
}



/* Entry: 1078719a8; end: 1078719ef;  */

bool FUN_1078719a8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  do {
    lVar4 = lVar2;
    if (lVar4 == lVar1) break;
    uVar3 = param_1;
    func_0x000107871900(param_1,lVar4);
    lVar2 = lVar4 + 0x18;
  } while ((int)uVar3 == 0);
  return lVar4 != lVar1;
}


