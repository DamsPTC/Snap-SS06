/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086d7f78; end: 1086d7fc7;  */

void FUN_1086d7f78(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x000107c32678();
  func_0x0001086db3e8();
  func_0x000107c27994();
  func_0x0001086db468();
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086db3c8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d7fc8; end: 1086d803b;  */

void FUN_1086d7fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d803c; end: 1086d805b;  */

void FUN_1086d803c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086c94bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d805c; end: 1086d805f;  */

void FUN_1086d805c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d8060; end: 1086d8097;  */

void FUN_1086d8060(long param_1)

{
  func_0x0001086da8b0(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c3265c();
  func_0x0001086da780();
  func_0x0001086db1d4();
  return;
}



/* Entry: 1086d8098; end: 1086d80cf;  */

void FUN_1086d8098(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086d80d0; end: 1086d80f7;  */

long FUN_1086d80d0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086d80f8; end: 1086d8103;  */

void FUN_1086d80f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d8104; end: 1086d8117;  */

void FUN_1086d8104(void)

{
  FUN_1086d80f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d8118; end: 1086d811f;  */

void FUN_1086d8118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d8120; end: 1086d8167;  */

long FUN_1086d8120(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086dbe58(&PTR_FUN_110a655a0);
  func_0x000104be3f18(lVar1 + 0x50);
  func_0x000107c27ae4(param_1 + 0x30);
  func_0x000107c27914(param_1 + 0x18);
  func_0x000107c29124();
  return param_1;
}



/* Entry: 1086d8168; end: 1086d817b;  */

void FUN_1086d8168(void)

{
  FUN_1086d8120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d817c; end: 1086d82db;  */

void FUN_1086d817c(long param_1)

{
  undefined1 auStack_240 [40];
  undefined1 auStack_218 [464];
  byte bStack_48;
  long alStack_40 [2];
  
  FUN_1086ce034(alStack_40,param_1 + 8);
  if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0x110) & 1) == 0)) {
    FUN_1086b1f68(auStack_218,*(undefined8 *)(*(long *)(alStack_40[0] + 0xd0) + 0x20),param_1 + 0x18
                 );
    if ((bStack_48 & 1) == 0) {
      FUN_1086b4f14(alStack_40[0],*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),7)
      ;
    }
    else {
      func_0x0001086da914(alStack_40[0]);
      func_0x000107c29f84(auStack_240);
      FUN_1086ca190(alStack_40[0],auStack_218,auStack_240,*(undefined8 *)(param_1 + 0x48),
                    param_1 + 0x50);
      func_0x000107c291f0(auStack_240);
    }
    func_0x0001086db020();
  }
  func_0x000107c29120(alStack_40);
  return;
}



/* Entry: 1086d82dc; end: 1086d832f;  */

void FUN_1086d82dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x0001086daa9c();
  FUN_1086ce034();
  if ((uStack_30 != 0) && ((*(byte *)(uStack_30 + 0x110) & 1) == 0)) {
    FUN_1086b4f14(uStack_30,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                  param_2);
  }
  func_0x0001086da520();
  return;
}



/* Entry: 1086d8330; end: 1086d83cf;  */

long FUN_1086d8330(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1086d83d0; end: 1086d83ef;  */

void FUN_1086d83d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086ca4a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d83f0; end: 1086d83f3;  */

void FUN_1086d83f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d83f4; end: 1086d8573;  */

void FUN_1086d83f4(long param_1)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  code *extraout_x8;
  undefined1 auStack_268 [464];
  undefined1 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  
  pcVar2 = (char *)(param_1 + 0x290);
  FUN_1086c1de4();
  cVar1 = *pcVar2;
  func_0x000107c27f9c(param_1 + 0x290);
  func_0x0001086db66c();
  if (cVar1 == '\x01') {
    func_0x0001086d9ef4();
    uStack_70 = 0;
    uStack_38 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    func_0x0001086da670(*(undefined8 *)(param_1 + 0x98));
    func_0x0001086daafc();
    FUN_10891c548(auStack_78);
    uStack_38 = 0xf;
    uVar3 = uStack_70;
    if ((uStack_70 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cf43c();
    uVar4 = uVar3;
    uStack_40 = uVar3;
    func_0x0001086d9cd8();
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(uVar3 + 8);
      if ((uVar4 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x000107c287f0();
      *(ulong *)(uVar3 + 0x18) = uVar4;
    }
    func_0x00010890e1f0();
    func_0x0001086db57c();
    auStack_268[0] = 0;
    uStack_98 = 0;
    auStack_90[0] = 0;
    uStack_80 = 0;
    func_0x000107c326e4();
    (*extraout_x8)();
    FUN_1086ccd68(auStack_90);
    func_0x0001086a7890(auStack_268);
    FUN_10891cac8(auStack_78);
  }
  func_0x0001086dade0();
  func_0x0001086dbb68();
  func_0x0001086dade8();
  func_0x0001086dace8();
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x000107c326a8();
  return;
}



/* Entry: 1086d8574; end: 1086d85af;  */

void FUN_1086d8574(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x290);
  func_0x0001086db66c();
  func_0x0001086dade0();
  func_0x0001086dbb68();
  func_0x0001086dade8();
  func_0x0001086dace8();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d85b0; end: 1086d8647;  */

void FUN_1086d85b0(long param_1)

{
  long lVar1;
  
  func_0x000107c28834(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x0001086da414();
  func_0x0001086da5f8();
  func_0x0001086dae0c();
  func_0x0001086dae04();
  func_0x0001086dad18();
  func_0x0001086dab98();
  func_0x0001086dab80();
  func_0x0001086dab68();
  func_0x000107c28850(lVar1 + 0x100);
  FUN_1086c15f8(lVar1 + 0xd0);
  *(undefined1 *)(lVar1 + 0x110) = 1;
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x000107c326a8();
  return;
}



/* Entry: 1086d8648; end: 1086d8677;  */

void FUN_1086d8648(void)

{
  func_0x0001086dbb5c();
  func_0x0001086da5f8();
  func_0x0001086dae0c();
  func_0x0001086dae04();
  func_0x0001086dad18();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d8678; end: 1086d8c53;  */

void FUN_1086d8678(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  uint extraout_w9;
  long lVar6;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong in_register_00005008;
  ulong uVar14;
  undefined8 uStack_8c0;
  ulong uStack_8b8;
  uint uStack_8b0;
  undefined8 uStack_490;
  ulong uStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_460;
  undefined8 uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  uint uStack_430;
  undefined1 uStack_428;
  undefined1 uStack_424;
  long *plStack_420;
  undefined1 auStack_320 [24];
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_284;
  undefined8 uStack_10;
  
  func_0x000107c32728();
  func_0x000107c325d4();
  plVar7 = (long *)(param_2 + 0x80);
  lVar9 = param_2 + 0x20;
  lVar6 = param_2 + 0x10;
  uStack_10 = extraout_x8;
  func_0x0001086dbebc(*plVar7);
  if ((extraout_w9 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(lVar9,*plVar7 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1086d8994);
    (*pcVar1)();
  }
  plVar8 = (long *)(param_2 + 0x60);
  FUN_1086cac10(plVar8,*plVar7 + 0x98);
  func_0x0001086daa48();
  func_0x0001086db388(*(undefined8 *)(unaff_x19 + 0x78));
  lVar12 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar12 = extraout_x8_00;
  }
  func_0x0001086d9cfc(*(undefined8 *)(lVar12 + 0x68));
  func_0x000107c29ee0(plVar7);
  func_0x0001086da2d8();
  iVar4 = (int)*(undefined8 *)(extraout_x8_01 + 0x20);
  FUN_1086b8b7c();
  if (iVar4 != 0) {
    func_0x0001086da2d8();
    uVar10 = *(undefined8 *)(*(long *)(extraout_x8_02 + 0x20) + 0x18);
    func_0x000107c278b8(param_2 + 0x98,"");
    func_0x000107c31420(lVar9,uVar10,param_2 + 0x98);
    plVar11 = *(long **)(unaff_x19 + 0xb0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x98);
    uVar10 = *(undefined8 *)(*(long *)(*plVar11 + 0xd0) + 0x20);
    func_0x0001086db84c();
    uStack_438 = uStack_438 & 0xffffffffffffff00;
    uStack_430 = uStack_430 & 0xffffff00;
    uStack_428 = 0;
    uStack_424 = 0;
    FUN_10885fef4(uVar10,&uStack_450);
    func_0x000107c27914(&uStack_450);
    in_ZR = *(int *)(lVar12 + 0xf0) == 0;
    uStack_2c4 = 7;
    if (!(bool)in_ZR) {
      uStack_2c4 = 2;
    }
    func_0x0001086dac2c();
    uVar10 = *(undefined8 *)(extraout_x8_03 + 0x20);
    func_0x0001086db84c();
    func_0x000107c28dc8(&uStack_438,lVar12);
    func_0x0001086dbc34();
    func_0x000107c278b8(auStack_320);
    uStack_308 = *(undefined8 *)(lVar12 + 0xe8);
    uStack_300 = 1;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    uStack_2e8 = 0;
    uStack_2c8 = 1;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    param_1 = 0;
    in_register_00005008 = 0;
    uStack_29f = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2a7 = 0;
    uStack_2b0 = 0;
    FUN_10885ff98(uVar10,&uStack_450);
    func_0x000107c287e4(&uStack_450);
    func_0x000107c31428(lVar9);
    func_0x000107c31424(lVar9);
  }
  func_0x0001086da2d8();
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_440 = 0;
  func_0x0001086db868(&uStack_8c0,*(undefined8 *)(extraout_x8_04 + 0x210),lVar12,plVar7,param_5,
                      &uStack_450);
  func_0x000107c27a04(&uStack_450);
  func_0x0001086dac2c();
  lVar9 = *(long *)(extraout_x8_05 + 0x100);
  func_0x0001086db468();
  uStack_450 = param_1;
  uStack_448 = in_register_00005008;
  if (extraout_x8_06 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  puVar2 = &uStack_440;
  func_0x000107c27b74(puVar2,&uStack_8c0);
  func_0x000107c28150();
  lVar12 = *(long *)(lVar9 + 0x10);
  puVar3 = (undefined8 *)(lVar12 + 8);
  __ZNSt3__15mutex4lockEv();
  lVar13 = *(long *)(lVar12 + 0x70);
  func_0x0001086dbe84();
  uStack_490 = extraout_x8_07;
  uStack_488 = extraout_x9_00;
  func_0x0001086db078();
  puVar3[1] = uStack_448;
  *puVar3 = uStack_450;
  uVar10 = uStack_450;
  uVar14 = uStack_448;
  if (uStack_448 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c27b74(puVar3 + 2,&uStack_440);
  puVar5 = &uStack_490;
  puStack_480 = puVar3;
  puStack_460 = puVar2;
  func_0x000107c28154(lVar12 + 0x48);
  func_0x000100864c04(uStack_488);
  func_0x0001086daf54();
  if (lVar13 == 0) {
    uVar14 = *(ulong *)(lVar9 + 0x18);
    uVar10 = *(undefined8 *)(lVar9 + 0x10);
    uStack_490 = uVar10;
    uStack_488 = uVar14;
    if (*(long *)(lVar9 + 0x18) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    puVar5 = &uStack_490;
    (*extraout_x8_08)();
    func_0x000107c27e74(&uStack_490);
  }
  FUN_1086cac1c(&uStack_450);
  func_0x000107c27a60(&uStack_8c0);
  func_0x000107c27914(plVar7);
  FUN_108927338(plVar8);
  do {
    func_0x000107c287c8(lVar6);
    while( true ) {
      lVar9 = lVar6;
      func_0x000107c27fb8(lVar6);
      func_0x000107c326a8();
      func_0x000107c325c0(uStack_10);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar4 = (int)puVar5;
      if (iVar4 == 0) {
        __Unwind_Resume(lVar9);
        func_0x000107c27f9c(lVar9 + 0x80);
        func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar9);
        return;
      }
      func_0x000107c27e74(&uStack_490);
      FUN_1086cac1c(&uStack_450);
      func_0x000107c27a60(&uStack_8c0);
      func_0x000107c27914(plVar7);
      plVar11 = plVar8;
      FUN_108927338();
      in_ZR = iVar4 == 2;
      if ((bool)in_ZR) break;
      func_0x0001086db90c();
      func_0x0001053360b0(lVar6);
      ___cxa_end_catch();
    }
    func_0x0001086db90c();
    func_0x0001086dac2c();
    plVar8 = *(long **)(extraout_x8_09 + 0x100);
    func_0x0001086db468();
    uStack_8c0 = uVar10;
    uStack_8b8 = uVar14;
    if (extraout_x8_10 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    uStack_8b0 = *(uint *)(plVar11 + 1);
    func_0x000107c28150();
    lVar12 = plVar8[2];
    func_0x0001086da518();
    func_0x0001086dbe70();
    lVar9 = *(long *)(lVar12 + 0x70);
    uStack_438 = uStack_8b8;
    uStack_440 = uStack_8c0;
    uVar10 = uStack_8c0;
    uVar14 = uStack_8b8;
    uStack_450 = extraout_x8_11;
    uStack_448 = extraout_x9_01;
    if (uStack_8b8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    uStack_430 = uStack_8b0;
    puVar5 = &uStack_450;
    plStack_420 = plVar11;
    func_0x000107c28154(lVar12 + 0x48);
    func_0x000100864c04(uStack_448);
    func_0x0001086da258();
    if (lVar9 == 0) {
      func_0x000107c3261c();
      uStack_450 = uVar10;
      uStack_448 = uVar14;
      if (extraout_x8_12 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      puVar5 = &uStack_450;
      (*extraout_x8_13)();
      func_0x000107c27e74(&uStack_450);
    }
    func_0x000104be3d28(&uStack_8c0);
    ___cxa_end_catch();
    plVar7 = plVar11;
  } while( true );
}



/* Entry: 1086d8c54; end: 1086d8c7b;  */

void FUN_1086d8c54(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x80);
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d8c7c; end: 1086d8d87;  */

void FUN_1086d8c7c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086ca5cc(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    do {
      func_0x0001086d9cec();
    } while (extraout_w10 != 0);
    func_0x0001086da6f0(*(undefined8 *)(param_1 + 0x60));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar5 = *(long *)(param_1 + 0x60);
      func_0x0001086d9a44();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086daed8();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x0001086d9db4();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x0001086da704();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x0001086d9e98();
          if ((bool)in_ZR) {
            func_0x0001086d9da4();
            func_0x0001086d9a64();
            func_0x0001086d99e4();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x0001086d98a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x60);
  func_0x0001086dba28();
  func_0x0001086db9fc();
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x0001086db6c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d8d88; end: 1086d8dbf;  */

void FUN_1086d8d88(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001086dba28();
    func_0x0001086db9fc();
  }
  func_0x0001086da114();
  func_0x0001086db6c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d8dc0; end: 1086d8fff;  */

void FUN_1086d8dc0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long alStack_b0 [2];
  undefined1 auStack_a0 [48];
  undefined1 uStack_70;
  undefined1 *puStack_50;
  
  plVar3 = alStack_b0;
  lVar6 = param_1;
  func_0x000100864738();
  if ((*(byte *)(lVar6 + 0xd0) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    func_0x000107c28870();
    lVar6 = *plVar2;
    func_0x0001086da414();
    func_0x0001086da778();
    if (lVar6 != 0) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
      do {
        func_0x0001086d9cec();
      } while (extraout_w10 != 0);
      func_0x0001086da6f0(*(undefined8 *)(param_1 + 0xc0));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xd0) = 1;
        lVar6 = *(long *)(param_1 + 0xc0);
        func_0x0001086d9a44();
        if (*plVar2 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x0001086daed8();
        plVar4 = extraout_x8;
        do {
          if (*plVar4 == 0) {
            func_0x0001086d9db4();
            plVar4 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar5 = extraout_w11_00;
          }
          else {
            func_0x0001086da704();
            plVar4 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar5 = extraout_w11;
          }
          if ((uVar5 & 1) != 0) {
            func_0x0001086d9e98();
            if ((bool)in_ZR) {
              func_0x0001086d9da4();
              func_0x0001086d9a64();
              func_0x0001086d99e4();
              *(long **)(lVar6 + 0x90) = plVar2;
            }
            func_0x0001086d98a4();
            goto LAB_1086d8f30;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_1086d8e64;
    }
    func_0x0001086da27c();
  }
  else {
LAB_1086d8e64:
    lVar6 = param_1 + 0xc0;
    FUN_10866b034(lVar6);
    FUN_10866e480(param_1 + 0x20,lVar6);
    func_0x0001086da778();
    param_2 = *(long *)(param_1 + 200);
    FUN_1086ce034();
    if ((alStack_b0[0] != 0) && (in_ZR = *(char *)(alStack_b0[0] + 0x110) == '\x01', !(bool)in_ZR))
    {
      func_0x0001086dbc20();
      func_0x0001086db6fc();
      puStack_50 = (undefined1 *)0x0;
      func_0x000107c326e0();
      func_0x0001086da8bc();
      param_2 = param_1 + 0x80;
      FUN_1086ce06c();
      auStack_a0[0] = 0;
      uStack_70 = 0;
      puStack_50 = (undefined1 *)plVar3;
      func_0x0001086da544();
      (*extraout_x9)();
      func_0x00010086ab34(auStack_a0);
      func_0x0001086db148();
      func_0x0001086daf78();
      func_0x0001086da520();
      func_0x0001086da8a8();
      func_0x0001086da770();
      func_0x0001086da27c();
      goto LAB_1086d8f28;
    }
    func_0x0001086da27c();
    func_0x0001086da520();
    func_0x0001086da8a8();
  }
  func_0x0001086da770();
LAB_1086d8f28:
  while( true ) {
    func_0x0001086da114();
    func_0x000107c326a8();
LAB_1086d8f30:
    func_0x000100864c10();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_2 != 0) goto LAB_1086d8f74;
    do {
      func_0x0001086da0f8();
LAB_1086d8f74:
      func_0x0001086dad7c();
    } while ((int)param_2 == 0);
    func_0x00010086ab34(auStack_a0);
    func_0x0001086db148();
    func_0x0001086daf78();
    func_0x0001086da520();
    func_0x0001086da8a8();
    func_0x0001086da770();
    func_0x0001086da260();
    func_0x0001086da298();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086d9000; end: 1086d9033;  */

void FUN_1086d9000(long param_1)

{
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    func_0x0001086da414();
  }
  func_0x0001086da778();
  func_0x0001086da770();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9034; end: 1086d9177;  */

void FUN_1086d9034(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar4;
  undefined1 *puVar5;
  uint extraout_w8;
  int extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 600);
  if ((*(byte *)(param_1 + 0x268) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    FUN_1086cdc4c((long *)(param_1 + 0x260));
    *plVar1 = *(long *)(param_1 + 0x260);
    do {
      func_0x0001086d9cec();
    } while (extraout_w10 != 0);
    func_0x0001086da6f0(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x268) = 1;
      lVar7 = *plVar1;
      func_0x0001086d9a44();
      lVar8 = *plVar4;
      if (lVar8 == 0) {
        func_0x000107c3a5c0();
        lVar8 = *plVar4;
      }
      plVar4 = (long *)(lVar7 + 0x10);
      do {
        if (*plVar4 == 0) {
          func_0x0001086d9db4();
          plVar4 = extraout_x8_00;
          uVar3 = extraout_w10_01;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x0001086da704();
          plVar4 = extraout_x8;
          uVar3 = extraout_w10_00;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          func_0x0001086dab34();
          if ((bool)in_ZR) {
            func_0x0001086d9da4();
            iVar2 = extraout_w8_00;
            if ((bool)in_CY) {
              iVar2 = extraout_w9;
            }
            puVar5 = (undefined1 *)(ulong)(iVar2 * 0x18 + 0x10);
            _malloc();
            *puVar5 = (char)iVar2;
            func_0x0001086da374(0);
            *(undefined1 **)(lVar7 + 0x90) = puVar5;
          }
          func_0x0001086dab58();
          *(long *)(extraout_x8_01 + 0x20) = lVar8;
          func_0x0001086d9df4(*(undefined8 *)(lVar7 + 0x90));
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(plVar1);
  func_0x0001086daa48();
  func_0x0001086daa58();
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x0001086db6cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9178; end: 1086d91b7;  */

void FUN_1086d9178(long param_1)

{
  if (*(char *)(param_1 + 0x268) == '\x01') {
    func_0x000107c27f9c(param_1 + 600);
    func_0x000107c27f9c(param_1 + 0x260);
  }
  func_0x0001086da114();
  func_0x0001086db6cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d91b8; end: 1086d9463;  */

void FUN_1086d91b8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar6;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar7;
  long *plVar8;
  undefined8 auStack_288 [49];
  char cStack_100;
  byte bStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar1 = param_1;
  func_0x000100864738();
  puVar2 = (undefined8 *)(lVar1 + 0x208);
  FUN_1086cc64c();
  *(undefined8 *)(param_1 + 0x220) = *puVar2;
  func_0x000107c27f9c(param_1 + 0x208);
  func_0x0001086db7e0();
  if (*(int *)(param_1 + 0x224) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x220);
    FUN_1086cc694();
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x218) + 0x28);
    func_0x0001086dad94();
  }
  else {
    FUN_1086b1f68(auStack_288,*(undefined8 *)(*(long *)(**(long **)(param_1 + 0x218) + 0xd0) + 0x20)
                  ,*(long **)(param_1 + 0x218) + 2);
    plVar8 = *(long **)(param_1 + 0x218);
    if ((bStack_b8 & 1) == 0) {
      puVar2 = (undefined8 *)*plVar8;
      puVar5 = (undefined8 *)plVar8[5];
      FUN_1086b64dc(puVar2,puVar5,plVar8[6],7);
      func_0x0001086da27c();
    }
    else {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      func_0x0001086da914(*plVar8);
      func_0x0001086dbd48();
      func_0x0001086db350();
      puStack_68 = &uStack_b0;
      FUN_1086a15ac();
      func_0x0001086d9ec8(uStack_70);
      if (cStack_100 == '\x01') {
        func_0x0001086db4e0();
        lVar1 = extraout_x8;
        uVar6 = extraout_x9;
        uVar7 = extraout_x10;
      }
      else {
        func_0x0001086db4c8(uStack_b0);
        lVar1 = extraout_x8_00;
        uVar6 = extraout_x9_00;
        uVar7 = extraout_x10_00;
      }
      in_ZR = uVar7 == uVar6;
      if (uVar6 < uVar7) {
        FUN_1086a4174(&uStack_b0,lVar1 + (long)(int)uVar6 * 0x1a8);
      }
      puVar5 = auStack_288;
      func_0x000107c28de8(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x1f8) = uStack_a8;
      *(undefined8 *)(param_1 + 0x1f0) = uStack_b0;
      *(undefined8 *)(param_1 + 0x200) = uStack_a0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      func_0x0001086da798();
      func_0x0001086db058();
      func_0x0001086daf5c();
      puVar2 = &uStack_b0;
      func_0x00010867b9fc();
    }
    func_0x0001086da654();
    if ((bStack_b8 & 1) == 0) goto LAB_1086d931c;
  }
LAB_1086d9318:
  do {
    func_0x0001086da27c();
LAB_1086d931c:
    while( true ) {
      func_0x0001086da114();
      func_0x000107c326a8();
      func_0x000100864c10();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar4 = (int)puVar5;
      if (iVar4 == 0) {
        func_0x0001086da0f8();
        func_0x000107c27f9c(puVar2 + 0x41);
        func_0x0001086db7e0();
        func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar2);
        return;
      }
      puVar2 = &uStack_b0;
      func_0x00010867b9fc();
      func_0x0001086da654();
      in_ZR = iVar4 == 3;
      if ((bool)in_ZR) {
        func_0x0001086da260();
        func_0x000108848514();
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x218) + 0x28);
        func_0x0001086dad94();
        ___cxa_end_catch();
        goto LAB_1086d9318;
      }
      in_ZR = iVar4 == 2;
      if ((bool)in_ZR) break;
      func_0x0001086da260();
      func_0x0001086da298();
      ___cxa_end_catch();
    }
    plVar8 = *(long **)(param_1 + 0x218);
    func_0x0001086da260();
    puVar3 = (undefined8 *)*plVar8;
    func_0x0001086db048();
    puVar5 = puVar2;
    ___cxa_end_catch();
    puVar2 = puVar3;
  } while( true );
}



/* Entry: 1086d9464; end: 1086d948f;  */

void FUN_1086d9464(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x208);
  func_0x0001086db7e0();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9490; end: 1086d959b;  */

void FUN_1086d9490(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086cc268(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    do {
      func_0x0001086d9cec();
    } while (extraout_w10 != 0);
    func_0x0001086da6f0(*(undefined8 *)(param_1 + 0x70));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar5 = *(long *)(param_1 + 0x70);
      func_0x0001086d9a44();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086daed8();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x0001086d9db4();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x0001086da704();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x0001086d9e98();
          if ((bool)in_ZR) {
            func_0x0001086d9da4();
            func_0x0001086d9a64();
            func_0x0001086d99e4();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x0001086d98a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x70);
  func_0x0001086dbaa0();
  func_0x0001086dba04();
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x0001086db6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d959c; end: 1086d95d3;  */

void FUN_1086d959c(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x0001086dbaa0();
    func_0x0001086dba04();
  }
  func_0x0001086da114();
  func_0x0001086db6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d95d4; end: 1086d9627;  */

void FUN_1086d95d4(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x0001086da414();
  func_0x0001086da5f8();
  func_0x0001086da27c();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9628; end: 1086d964b;  */

void FUN_1086d9628(void)

{
  func_0x0001086dbb5c();
  func_0x0001086da5f8();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d964c; end: 1086d9757;  */

void FUN_1086d964c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086d08d0(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x150);
    do {
      func_0x0001086d9cec();
    } while (extraout_w10 != 0);
    func_0x0001086da6f0(*(undefined8 *)(param_1 + 0x148));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x158) = 1;
      lVar5 = *(long *)(param_1 + 0x148);
      func_0x0001086d9a44();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086daed8();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x0001086d9db4();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x0001086da704();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x0001086d9e98();
          if ((bool)in_ZR) {
            func_0x0001086d9da4();
            func_0x0001086d9a64();
            func_0x0001086d99e4();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x0001086d98a4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x148);
  func_0x0001086dbb00();
  func_0x0001086db7d8();
  func_0x0001086da27c();
  func_0x0001086da114();
  func_0x0001086db6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9758; end: 1086d978f;  */

void FUN_1086d9758(long param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x01') {
    func_0x0001086dbb00();
    func_0x0001086db7d8();
  }
  func_0x0001086da114();
  func_0x0001086db6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d9790; end: 1086dbfa7;  */

void FUN_1086d9790(void)

{
  return;
}



/* Entry: 1086dbfa8; end: 1086dc057;  */

byte FUN_1086dbfa8(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 auStack_178 [176];
  undefined1 auStack_c8 [152];
  
  bVar2 = 0;
  if (*(int *)(param_2 + 0x200) != 0) {
    lVar1 = param_1 + 0x100;
    FUN_1086dc484();
    if (lVar1 == 0) {
      FUN_1086dc0dc(auStack_c8,param_1,param_2);
      func_0x0001086dc2b4(auStack_178,param_2,auStack_c8);
      lVar1 = param_1 + 0x100;
      FUN_1086dc548(lVar1,auStack_178);
      func_0x0001086dc2e4(auStack_178);
      FUN_1086ccb14(auStack_c8);
    }
    bVar2 = *(byte *)(lVar1 + 0x40);
  }
  return bVar2 & 1;
}



/* Entry: 1086dc058; end: 1086dc0db;  */

undefined8 * FUN_1086dc058(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10869d314(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



/* Entry: 1086dc0dc; end: 1086dc19b;  */

void FUN_1086dc0dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [152];
  byte bStack_38;
  
  FUN_10886acfc(auStack_d0,*param_2);
  if ((bStack_38 & 1) == 0) {
    func_0x000107c27994(auStack_168,param_3);
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_d8 = 0;
    FUN_1086b8b48(auStack_d0,auStack_168);
    FUN_1086ccb14(auStack_168);
  }
  FUN_1086dc30c(param_1,auStack_d0);
  FUN_1086ccb70(auStack_d0);
  return;
}



/* Entry: 1086dc19c; end: 1086dc1c3;  */

undefined1  [16] FUN_1086dc19c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  FUN_1086dc484();
  if (param_1 != 0) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1 + 0x28;
    return auVar2;
  }
  puVar1 = &UNK_10f4b1573;
  func_0x000104c03f28(&UNK_10f4b1573);
  FUN_1086dc984();
  if ((param_2 & 1) == 0) {
    FUN_1086dcbac(puVar1 + 0x28,param_3);
  }
  auVar3._8_8_ = param_2 & 0xff;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 1086dc1c4; end: 1086dc213;  */

undefined1  [16] FUN_1086dc1c4(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_1086dc984(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    FUN_1086dcbac(param_1 + 0x28,param_3);
  }
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1086dc214; end: 1086dc25b;  */

void FUN_1086dc214(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    *puVar1 = param_2[2];
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1086dc25c; end: 1086dc30b;  */

void FUN_1086dc25c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  
  func_0x000107c32824();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  param_2[2] = extraout_x8;
  param_2[3] = 0;
  func_0x0001086dcca4();
  return;
}



/* Entry: 1086dc30c; end: 1086dc37f;  */

long FUN_1086dc30c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000107c27994();
  *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  func_0x000104be0ccc(lVar1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x51) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x49) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_1086dc380(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



/* Entry: 1086dc380; end: 1086dc3b7;  */

undefined1 * FUN_1086dc380(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_1086dc3b8();
  return param_1;
}



/* Entry: 1086dc3b8; end: 1086dc3cb;  */

void FUN_1086dc3b8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086dc3e8();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086dc3cc; end: 1086dc3e7;  */

void FUN_1086dc3cc(long param_1)

{
  FUN_1086dc3e8();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086dc3e8; end: 1086dc40f;  */

undefined8 * FUN_1086dc3e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1086dc410(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1086dc410; end: 1086dc447;  */

undefined1 * FUN_1086dc410(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_1086dc448();
  return param_1;
}



/* Entry: 1086dc448; end: 1086dc45b;  */

void FUN_1086dc448(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086dc478();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1086dc45c; end: 1086dc477;  */

void FUN_1086dc45c(long param_1)

{
  FUN_1086dc478();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1086dc478; end: 1086dc483;  */

undefined8 * FUN_1086dc478(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a98638;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1089279e4(param_1,param_2);
  return param_1;
}



/* Entry: 1086dc484; end: 1086dc547;  */

long FUN_1086dc484(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001086dccd8();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar5 != plVar3) break;
        func_0x0001086dcd24();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar9);
      }
      else if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    } while (plVar5 == plVar10);
  }
  return 0;
}



/* Entry: 1086dc548; end: 1086dc57b;  */

void FUN_1086dc548(void)

{
  func_0x0001086dc560();
  return;
}



/* Entry: 1086dc57c; end: 1086dc787;  */

undefined1  [16]
FUN_1086dc57c(float param_1,float param_2,long *param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_3;
  func_0x0001086dccd8();
  plVar9 = (long *)param_3[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    uVar8 = (uint)plVar9;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)((ulong)(uVar8 - 1) & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar9 <= plVar6) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = (uint)plVar6 / uVar8;
        }
        unaff_x25 = (long *)(ulong)((uint)plVar6 - uVar1 * uVar8);
      }
    }
    plVar7 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1086dc640;
          plVar4 = (long *)plVar7[1];
          if (plVar4 != plVar6) break;
          plVar4 = plVar7 + 2;
          func_0x000107c28078(plVar4,param_4);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086dc754;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar10);
        }
        else if (plVar9 <= plVar4) {
          uVar2 = 0;
          if (plVar9 != (long *)0x0) {
            uVar2 = (ulong)plVar4 / (ulong)plVar9;
          }
          plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar9);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_1086dc640:
  plVar4 = param_3 + 2;
  plVar7 = (long *)0xc0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  func_0x000107c27994(plVar7 + 2,param_5);
  FUN_1086cca88(plVar7 + 5,param_5 + 0x18);
  func_0x0001086dccb4();
  if ((plVar9 == (long *)0x0) || (param_2 * (float)plVar9 < param_1)) {
    func_0x0001086dcce8((long)plVar9 << 1);
    FUN_1086dc788(param_3);
    plVar9 = (long *)param_3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((ulong)((int)plVar9 - 1) & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_3;
  plVar6 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        plVar6 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar5 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x0001086dcc78();
  uVar3 = 1;
LAB_1086dc754:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1086dc788; end: 1086dc927;  */

void FUN_1086dc788(long *param_1,long *param_2)

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
      FUN_1086dc928(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1086dc928(param_1,lVar2);
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



/* Entry: 1086dc928; end: 1086dc93f;  */

void FUN_1086dc928(long *param_1,long param_2)

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



/* Entry: 1086dc940; end: 1086dc983;  */

long * FUN_1086dc940(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001086dc2e4(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1086dc984; end: 1086dcbab;  */

undefined1  [16]
FUN_1086dc984(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *unaff_x26;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_3;
  func_0x0001086dccd8();
  plVar9 = (long *)param_3[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    uVar8 = (uint)plVar9;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)((ulong)(uVar8 - 1) & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar9 <= plVar6) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = (uint)plVar6 / uVar8;
        }
        unaff_x26 = (long *)(ulong)((uint)plVar6 - uVar1 * uVar8);
      }
    }
    plVar7 = *(long **)(*param_3 + (long)unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1086dca50;
          plVar4 = (long *)plVar7[1];
          if (plVar4 != plVar6) break;
          plVar4 = plVar7 + 2;
          func_0x000107c28078(plVar4,param_4);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086dcb64;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar10);
        }
        else if (plVar9 <= plVar4) {
          uVar2 = 0;
          if (plVar9 != (long *)0x0) {
            uVar2 = (ulong)plVar4 / (ulong)plVar9;
          }
          plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar9);
        }
      } while (plVar4 == unaff_x26);
    }
  }
LAB_1086dca50:
  plVar4 = param_3 + 2;
  plVar7 = (long *)0xc0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  func_0x000107c27994(plVar7 + 2,param_5);
  FUN_1086dc30c(plVar7 + 5,param_6);
  func_0x0001086dccb4();
  if ((plVar9 == (long *)0x0) || (param_2 * (float)plVar9 < param_1)) {
    func_0x0001086dcce8((long)plVar9 << 1);
    FUN_1086dc788(param_3);
    plVar9 = (long *)param_3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((ulong)((int)plVar9 - 1) & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_3;
  plVar6 = *(long **)(lVar5 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar5 + (long)unaff_x26 * 8) = plVar4;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar6) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar6 / (ulong)plVar9;
        }
        plVar6 = (long *)((long)plVar6 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar5 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x0001086dcc78();
  uVar3 = 1;
LAB_1086dcb64:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1086dcbac; end: 1086dcbff;  */

long FUN_1086dcbac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c27cfc();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_10866e758(param_1 + 0x20,param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x51) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x49) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_1086dcc00(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



/* Entry: 1086dcc00; end: 1086dcc27;  */

undefined8 * FUN_1086dcc00(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != *(char *)(param_2 + 6)) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar2 = param_1 + 1;
        FUN_1086cca0c(puVar2);
        *(undefined1 *)(param_1 + 6) = 0;
      }
      return puVar2;
    }
    FUN_1086dc3e8();
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    *param_1 = *param_2;
    FUN_1086dcc50(param_1 + 1,param_2 + 1);
    return param_1;
  }
  return param_1;
}



/* Entry: 1086dcc28; end: 1086dcc4f;  */

undefined8 * FUN_1086dcc28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1086dcc50(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1086dcc50; end: 1086dcd2f;  */

void FUN_1086dcc50(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 == '\0') {
      FUN_1086dc478();
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      FUN_108927a50();
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  FUN_108927754();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1086dcd30; end: 1086dcd57;  */

void FUN_1086dcd30(long param_1,long param_2)

{
  func_0x0001086a507c();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 1086dcd58; end: 1086dd09b;  */

void FUN_1086dcd58(long *param_1,ulong param_2,long param_3)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined **extraout_x8;
  undefined **extraout_x8_00;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  long *extraout_x9_01;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  iVar2 = *(int *)(param_3 + 0x48) + -3;
  uVar4 = iVar2 == 9;
  switch(iVar2) {
  case 0:
    FUN_1086aab40(param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    break;
  case 1:
    FUN_1086a2e5c(&uStack_88,param_2,*(undefined8 *)(param_3 + 0x40));
    if (param_1[3] != 0) {
      func_0x0001086af490(param_1,param_1[2]);
      param_1[2] = 0;
      puVar12 = (undefined8 *)*param_1;
      for (lVar11 = param_1[1]; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      param_1[3] = 0;
    }
    uVar7 = uStack_88;
    uStack_88 = 0;
    FUN_1086aa100(param_1,uVar7);
    uVar8 = uStack_80;
    param_1[2] = lStack_78;
    param_1[1] = uStack_80;
    uStack_80 = 0;
    param_1[3] = lStack_70;
    *(undefined4 *)(param_1 + 4) = uStack_68;
    if (lStack_70 != 0) {
      uVar10 = *(ulong *)(lStack_78 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar10 = uVar10 & uVar8 - 1;
      }
      else if (uVar8 <= uVar10) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar10 / uVar8;
        }
        uVar10 = uVar10 - uVar3 * uVar8;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      lStack_78 = 0;
      lStack_70 = 0;
    }
    func_0x0001086af46c(&uStack_88);
    break;
  case 2:
    puVar12 = (undefined8 *)(param_2 + 0x18);
    uVar8 = param_2;
    func_0x0001086df244(*puVar12);
    func_0x0001086df458();
    for (; puVar14 = unaff_x23, unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
      ppuVar1 = *(undefined ***)(param_3 + 0x40);
      if (*(int *)(param_3 + 0x48) != 5) {
        ppuVar1 = &PTR_PTR_11327c1c8;
      }
      uVar4 = ppuVar1[3] == (undefined *)0x0;
      func_0x0001086df2dc(*unaff_x26);
      ppuVar1 = &PTR_PTR_11326cb58;
      if (!(bool)uVar4) {
        ppuVar1 = extraout_x8;
      }
      func_0x0001086df220(ppuVar1);
      puVar14 = unaff_x26;
      if ((uVar8 & 1) != 0) break;
      unaff_x26 = unaff_x26 + 1;
    }
    func_0x0001086df244(*(undefined8 *)(param_2 + 0x18));
    puVar15 = puVar12;
    if (!(bool)uVar4) {
      puVar15 = extraout_x9;
    }
    uVar4 = puVar14 == puVar15 + *(int *)(param_2 + 0x20);
    if ((bool)uVar4) {
      puVar12 = (undefined8 *)(param_2 + 0x30);
      func_0x0001086df244(*puVar12);
      func_0x0001086df458();
      for (; puVar15 = puVar14, unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
        ppuVar1 = *(undefined ***)(param_3 + 0x40);
        if (*(int *)(param_3 + 0x48) != 5) {
          ppuVar1 = &PTR_PTR_11327c1c8;
        }
        uVar4 = ppuVar1[3] == (undefined *)0x0;
        func_0x0001086df2dc(*unaff_x26);
        ppuVar1 = &PTR_PTR_11326cb58;
        if (!(bool)uVar4) {
          ppuVar1 = extraout_x8_00;
        }
        func_0x0001086df220(ppuVar1);
        puVar15 = unaff_x26;
        if ((uVar8 & 1) != 0) break;
        unaff_x26 = unaff_x26 + 1;
      }
      func_0x0001086df244(*(undefined8 *)(param_2 + 0x30));
      puVar14 = puVar12;
      if (!(bool)uVar4) {
        puVar14 = extraout_x9_00;
      }
      if (puVar15 != puVar14 + *(int *)(param_2 + 0x38)) {
        FUN_1086a30c4(puVar12,puVar15);
      }
    }
    else {
      FUN_1086ddde4(puVar12,puVar14);
    }
    break;
  case 3:
    FUN_1086dd09c(*(undefined8 *)(param_3 + 0x40),param_2);
    break;
  case 4:
    lVar11 = *(long *)(param_3 + 0x40);
    uVar9 = *(uint *)(lVar11 + 0x10);
    if ((uVar9 >> 1 & 1) != 0) {
      lVar13 = *(long *)(lVar11 + 0x20);
      ppuVar1 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(lVar11 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar11 + 0x18);
      }
      if (*(int *)(lVar13 + 0x24) == 2) {
        uVar7 = *(undefined8 *)(lVar13 + 0x18);
      }
      else {
        uVar7 = 0;
      }
      FUN_1086dd0e8(param_2,ppuVar1,uVar7,*(undefined4 *)(lVar13 + 0x10));
      uVar9 = *(uint *)(lVar11 + 0x10);
    }
    if ((uVar9 >> 3 & 1) != 0) {
      bVar5 = *(int *)(*(long *)(lVar11 + 0x30) + 0x24) == 3;
      if (bVar5) {
        uVar8 = *(ulong *)(*(long *)(lVar11 + 0x30) + 0x18);
      }
      else {
        uVar8 = 0;
      }
      plVar6 = (long *)(param_2 + 0x18);
      func_0x0001086df244(*plVar6);
      plVar16 = plVar6;
      if (!bVar5) {
        plVar16 = extraout_x9_01;
      }
      lVar11 = (long)(int)plVar6[1] << 3;
      do {
        if (lVar11 == 0) {
          return;
        }
        lVar13 = *plVar16;
        ppuVar1 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(lVar13 + 0x18) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar13 + 0x18);
        }
        func_0x0001086df3d0(ppuVar1[2]);
        lVar11 = lVar11 + -8;
        plVar16 = plVar16 + 1;
      } while ((int)plVar6 == 0);
      if (*(ulong *)(lVar13 + 0x50) < uVar8) {
        *(ulong *)(lVar13 + 0x50) = uVar8;
      }
      return;
    }
    break;
  case 9:
    FUN_1086dcd30(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  return;
}



/* Entry: 1086dd09c; end: 1086dd0e7;  */

void FUN_1086dd09c(long param_1,long param_2)

{
  func_0x0001086a508c(param_2);
  FUN_1088bc4d8();
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_1 + 0x2c);
  return;
}



/* Entry: 1086dd0e8; end: 1086dd1d7;  */

void FUN_1086dd0e8(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *extraout_x9;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 + 0x18);
  func_0x0001086df244(*plVar2);
  plVar4 = plVar2;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x9;
  }
  lVar5 = (long)(int)plVar2[1] << 3;
  do {
    if (lVar5 == 0) {
      return;
    }
    lVar3 = *plVar4;
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar3 + 0x18);
    }
    func_0x0001086df3d0(ppuVar1[2]);
    lVar5 = lVar5 + -8;
    plVar4 = plVar4 + 1;
  } while ((int)plVar2 == 0);
  switch(param_4) {
  case 0:
    if (*(ulong *)(lVar3 + 0x28) < param_3) {
      *(ulong *)(lVar3 + 0x28) = param_3;
    }
    break;
  case 1:
    if (*(ulong *)(lVar3 + 0x30) < param_3) {
      *(ulong *)(lVar3 + 0x30) = param_3;
    }
    break;
  case 2:
    if (*(ulong *)(lVar3 + 0x48) < param_3) {
      *(ulong *)(lVar3 + 0x48) = param_3;
    }
    break;
  case 3:
    if (*(ulong *)(lVar3 + 0x50) < param_3) {
      *(ulong *)(lVar3 + 0x50) = param_3;
    }
  }
  return;
}



/* Entry: 1086dd1d8; end: 1086dd8db;  */

undefined ** FUN_1086dd1d8(undefined **param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar7;
  undefined4 uVar8;
  long extraout_x8;
  undefined **ppuVar9;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  long extraout_x8_02;
  int *piVar10;
  int extraout_w9;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **ppuVar11;
  undefined **extraout_x9_02;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  long lVar12;
  int iVar13;
  undefined *puVar14;
  undefined **unaff_x22;
  long lVar15;
  undefined **ppuVar16;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **unaff_x30;
  undefined1 auStack_d0 [32];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  iVar13 = *(int *)(param_2 + 0x48) + -4;
  uVar2 = iVar13 == 0x1f;
  switch(iVar13) {
  case 0:
    FUN_1086aab40(param_1);
    func_0x0001086df37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )();
    return param_1;
  case 2:
    ppuVar11 = param_1 + 3;
    ppuVar9 = param_1;
    func_0x0001086df244(*ppuVar11);
    func_0x0001086df444();
    for (; ppuVar16 = unaff_x22, unaff_x26 != 0; unaff_x26 = unaff_x26 + -8) {
      ppuVar16 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x48) != 6) {
        ppuVar16 = &PTR_PTR_11327c1e8;
      }
      uVar2 = ppuVar16[4] == (undefined *)0x0;
      func_0x0001086df2dc(*unaff_x25);
      ppuVar16 = &PTR_PTR_11326cb58;
      if (!(bool)uVar2) {
        ppuVar16 = extraout_x8_00;
      }
      func_0x0001086df220(ppuVar16);
      ppuVar16 = unaff_x25;
      if (((ulong)ppuVar9 & 1) != 0) break;
      unaff_x25 = unaff_x25 + 1;
    }
    func_0x0001086df244(param_1[3]);
    ppuVar5 = ppuVar11;
    if (!(bool)uVar2) {
      ppuVar5 = extraout_x9_03;
    }
    uVar2 = ppuVar16 == ppuVar5 + *(int *)(param_1 + 4);
    if (!(bool)uVar2) {
      func_0x0001086df37c();
      ppuVar5 = ppuVar11;
      func_0x0001086df244(*ppuVar11);
      ppuVar9 = ppuVar5;
      if (!(bool)uVar2) {
        ppuVar9 = extraout_x9_05;
      }
      iVar13 = (int)((ulong)((long)ppuVar16 - (long)ppuVar9) >> 3);
      uVar7 = (int)(((long)ppuVar16 - (long)ppuVar9) + 8U >> 3) - iVar13;
      ppuVar9 = ppuVar9 + iVar13;
      puVar14 = ppuVar5[2];
      uVar6 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      uVar4 = uVar6 << 3;
      while (uVar6 != 0) {
        if ((puVar14 == (undefined *)0x0) &&
           (ppuVar5 = (undefined **)*ppuVar9, ppuVar5 != (undefined **)0x0)) {
          (**(code **)(*ppuVar5 + 8))();
        }
        ppuVar9 = ppuVar9 + 1;
        uVar4 = uVar4 - 8;
        uVar6 = uVar4;
      }
      if (0 < (int)uVar7) {
        if (((ulong)*ppuVar11 & 1) == 0) {
          if ((iVar13 == 0) && (uVar7 == 1)) {
            *ppuVar11 = (undefined *)0x0;
          }
        }
        else {
          piVar10 = (int *)(*ppuVar11 + -1);
          iVar1 = *piVar10;
          lVar15 = (long)(int)(uVar7 + iVar13);
          while (lVar12 = lVar15 + 1, lVar15 < iVar1) {
            *(undefined8 *)(piVar10 + (long)(int)uVar7 * -2 + lVar12 * 2) =
                 *(undefined8 *)(piVar10 + lVar12 * 2);
            lVar15 = lVar12;
          }
          *piVar10 = iVar1 - uVar7;
        }
        *(uint *)(ppuVar11 + 1) = *(int *)(ppuVar11 + 1) - uVar7;
        return ppuVar11;
      }
      return ppuVar5;
    }
    ppuVar11 = param_1 + 6;
    func_0x0001086df244(*ppuVar11);
    func_0x0001086df444();
    for (; ppuVar5 = ppuVar16, unaff_x26 != 0; unaff_x26 = unaff_x26 + -8) {
      ppuVar5 = *(undefined ***)(param_2 + 0x40);
      if (*(int *)(param_2 + 0x48) != 6) {
        ppuVar5 = &PTR_PTR_11327c1e8;
      }
      uVar2 = ppuVar5[4] == (undefined *)0x0;
      func_0x0001086df2dc(*unaff_x25);
      ppuVar5 = &PTR_PTR_11326cb58;
      if (!(bool)uVar2) {
        ppuVar5 = extraout_x8_01;
      }
      func_0x0001086df220(ppuVar5);
      ppuVar5 = unaff_x25;
      if (((ulong)ppuVar9 & 1) != 0) break;
      unaff_x25 = unaff_x25 + 1;
    }
    func_0x0001086df244(param_1[6]);
    ppuVar9 = ppuVar11;
    if (!(bool)uVar2) {
      ppuVar9 = extraout_x9_04;
    }
    if (ppuVar5 != ppuVar9 + *(int *)(param_1 + 7)) {
      func_0x0001086df37c(ppuVar11,ppuVar5);
      func_0x000107c324c0(*ppuVar11);
      func_0x0001086b09a4();
      FUN_1086af804();
      func_0x0001086b006c();
      return (undefined **)(extraout_x8 + ((param_2 << 0x1d) >> 0x1d));
    }
    break;
  case 3:
    ppuVar11 = *(undefined ***)(*(long *)(param_2 + 0x40) + 0x20);
    ppuVar9 = &PTR_PTR_11326be88;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar9 = ppuVar11;
    }
    func_0x0001086a508c();
    func_0x0001086df37c();
    if (ppuVar9 != param_1) {
      FUN_1088bc2e4();
      ppuVar11 = param_1 + 1;
      ppuVar16 = (undefined **)*ppuVar11;
      if (((ulong)ppuVar16 & 1) != 0) {
        ppuVar16 = *(undefined ***)((ulong)ppuVar16 & 0xfffffffffffffffe);
      }
      iVar13 = *(int *)((long)ppuVar9 + 0x1c);
      ppuVar5 = param_1;
      if (iVar13 != 0) {
        if (*(int *)((long)param_1 + 0x1c) == iVar13) {
          if (iVar13 == 1) {
            ppuVar5 = (undefined **)param_1[2];
            func_0x000107c2a2bc(ppuVar5,ppuVar9[2]);
          }
        }
        else {
          if (*(int *)((long)param_1 + 0x1c) != 0) {
            func_0x000107c2a2ac(param_1);
          }
          *(int *)((long)param_1 + 0x1c) = iVar13;
          if (iVar13 == 1) {
            func_0x000107c2a2c4(ppuVar16,ppuVar9[2]);
            param_1[2] = (undefined *)ppuVar16;
            ppuVar5 = ppuVar16;
          }
        }
      }
      if (((ulong)ppuVar9[1] & 1) == 0) {
        return ppuVar5;
      }
      if (((ulong)*ppuVar11 & 1) == 0) {
        func_0x00010b4c3590();
      }
      else {
        ppuVar11 = (undefined **)(((ulong)*ppuVar11 & 0xfffffffffffffffe) + 8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
                ();
      return ppuVar11;
    }
    return param_1;
  case 4:
    lVar15 = *(long *)(param_2 + 0x40);
    iVar13 = *(int *)(lVar15 + 0x24) + -1;
    uVar2 = iVar13 == 4;
    switch(iVar13) {
    case 0:
      ppuVar9 = param_1;
      func_0x0001086df3ac();
      if (!(bool)uVar2) break;
      func_0x0001086df23c();
      func_0x0001086df3ac();
      if ((bool)uVar2) {
        uVar8 = *(undefined4 *)(lVar15 + 0x28);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)((long)ppuVar9 + 0x54) = uVar8;
      func_0x0001086df23c();
      FUN_1086dd8dc();
      func_0x0001086df41c();
      puVar14 = ppuVar9[3];
      if (puVar14 == (undefined *)0x0) {
        puVar14 = param_1[1];
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0001086df328();
        }
        func_0x000107c2923c();
        param_1[3] = puVar14;
      }
      goto code_r0x0001086dd878;
    case 1:
      func_0x0001086df23c();
      func_0x0001086df3ac();
      if ((bool)uVar2) {
        uVar8 = *(undefined4 *)(lVar15 + 0x28);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(param_1 + 10) = uVar8;
      break;
    case 2:
      func_0x0001086df23c();
      if (*(int *)(lVar15 + 0x2c) == 5) {
        uVar8 = *(undefined4 *)(lVar15 + 0x28);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)((long)param_1 + 0x74) = uVar8;
      break;
    case 3:
      func_0x0001086df3ac();
      if (!(bool)uVar2) break;
      func_0x0001086df23c();
      FUN_1086dd8dc();
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
      puVar14 = param_1[4];
      if (puVar14 == (undefined *)0x0) {
        puVar14 = param_1[1];
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0001086df328();
        }
        func_0x000107c2923c();
        param_1[4] = puVar14;
      }
code_r0x0001086dd878:
      func_0x0001086df3ac();
      if ((bool)uVar2) {
        uVar8 = *(undefined4 *)(lVar15 + 0x28);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(puVar14 + 0x18) = uVar8;
      break;
    case 4:
      func_0x0001086df23c();
      if (*(int *)(lVar15 + 0x2c) == 7) {
        uVar8 = *(undefined4 *)(lVar15 + 0x28);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
    }
    break;
  case 6:
    lVar15 = *(long *)(param_2 + 0x40);
    uVar7 = *(uint *)(lVar15 + 0x10);
    if ((uVar7 >> 1 & 1) != 0) {
      func_0x0001086df3b8(*(undefined8 *)(lVar15 + 0x20));
      FUN_1086dd0e8(param_1);
      uVar7 = *(uint *)(lVar15 + 0x10);
    }
    if ((uVar7 >> 2 & 1) != 0) {
      func_0x0001086df3b8(*(undefined8 *)(lVar15 + 0x28));
      uVar2 = extraout_w9 == 3;
      if ((bool)uVar2) {
        uVar4 = *(ulong *)(extraout_x8_02 + 0x18);
      }
      else {
        uVar4 = 0;
      }
      uVar6 = 3;
      func_0x0001086df37c();
      param_1 = param_1 + 3;
      func_0x0001086df244(*param_1);
      ppuVar9 = param_1;
      if (!(bool)uVar2) {
        ppuVar9 = extraout_x9;
      }
      lVar15 = (long)*(int *)(param_1 + 1) << 3;
      do {
        if (lVar15 == 0) {
          return param_1;
        }
        puVar14 = *ppuVar9;
        ppuVar11 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(puVar14 + 0x18) != (undefined **)0x0) {
          ppuVar11 = *(undefined ***)(puVar14 + 0x18);
        }
        func_0x0001086df3d0(ppuVar11[2]);
        lVar15 = lVar15 + -8;
        ppuVar9 = ppuVar9 + 1;
      } while ((int)param_1 == 0);
      switch(uVar6 & 0xffffffff) {
      case 0:
        if (*(ulong *)(puVar14 + 0x28) < uVar4) {
          *(ulong *)(puVar14 + 0x28) = uVar4;
        }
        break;
      case 1:
        if (*(ulong *)(puVar14 + 0x30) < uVar4) {
          *(ulong *)(puVar14 + 0x30) = uVar4;
        }
        break;
      case 2:
        if (*(ulong *)(puVar14 + 0x48) < uVar4) {
          *(ulong *)(puVar14 + 0x48) = uVar4;
        }
        break;
      case 3:
        if (*(ulong *)(puVar14 + 0x50) < uVar4) {
          *(ulong *)(puVar14 + 0x50) = uVar4;
        }
      }
      return param_1;
    }
    break;
  case 7:
    func_0x0001086df23c();
    param_1[0xd] = (undefined *)0x0;
    break;
  case 8:
    func_0x0001086df23c();
    func_0x0001086df46c();
    func_0x0001086df2ec();
    for (; unaff_x22 != (undefined **)0x0; unaff_x22 = unaff_x22 + -1) {
      FUN_10866ea00(param_1 + 3);
      func_0x0001088bf408();
    }
    break;
  case 0xd:
    iVar13 = *(int *)(*(long *)(param_2 + 0x40) + 0x30);
    if (iVar13 == 2) {
      func_0x0001086df37c();
      ppuVar9 = (undefined **)param_1[0x12];
      if (ppuVar9 != (undefined **)0x0) {
        FUN_1088b8704();
      }
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffffdf;
      return ppuVar9;
    }
    if (iVar13 == 1) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
      puVar14 = param_1[0x12];
      if (puVar14 == (undefined *)0x0) {
        puVar14 = param_1[1];
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0001086df328();
        }
        func_0x000107c29244();
        param_1[0x12] = puVar14;
      }
      func_0x000107c29ee4(&ppuStack_b0,param_3);
      *(uint *)(puVar14 + 0x10) = *(uint *)(puVar14 + 0x10) | 1;
      if (*(long *)(puVar14 + 0x18) == 0) {
        uVar4 = *(ulong *)(puVar14 + 8);
        if ((uVar4 & 1) != 0) {
          func_0x0001086df328();
        }
        func_0x000107c287e0();
        *(ulong *)(puVar14 + 0x18) = uVar4;
      }
      func_0x000107c287d0();
      func_0x000107c2a2e0(&ppuStack_b0);
      *(undefined8 *)(puVar14 + 0x30) = 0x7fffffffffffffff;
      *(uint *)(puVar14 + 0x10) = *(uint *)(puVar14 + 0x10) | 2;
      if (*(long *)(puVar14 + 0x20) == 0) {
        uVar4 = *(ulong *)(puVar14 + 8);
        if ((uVar4 & 1) != 0) {
          func_0x0001086df328();
        }
        func_0x000107c290d4();
        *(ulong *)(puVar14 + 0x20) = uVar4;
      }
      func_0x0001088b8ddc();
    }
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x21) = uRam000000011327c374;
    break;
  case 0x12:
    ppuVar9 = param_1 + 3;
    func_0x0001086df244(*ppuVar9);
    if (!(bool)uVar2) {
      ppuVar9 = extraout_x9_02;
    }
    ppuVar11 = ppuVar9 + *(int *)(param_1 + 4);
    for (lVar15 = (long)*(int *)(param_1 + 4) << 3; ppuVar16 = ppuVar11, lVar15 != 0;
        lVar15 = lVar15 + -8) {
      ppuVar5 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(*ppuVar9 + 0x18) != (undefined **)0x0) {
        ppuVar5 = *(undefined ***)(*ppuVar9 + 0x18);
      }
      ppuVar16 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
        ppuVar16 = *(undefined ***)(param_2 + 0x20);
      }
      func_0x000107c287e8(ppuVar5,ppuVar16);
      ppuVar16 = ppuVar9;
      if (((ulong)ppuVar5 & 1) != 0) break;
      ppuVar9 = ppuVar9 + 1;
    }
    ppuVar9 = *(undefined ***)(param_2 + 0x40);
    if (*(int *)(param_2 + 0x48) != 0x16) {
      ppuVar9 = &PTR_PTR_11327c110;
    }
    *(undefined4 *)(*ppuVar16 + 0x58) = *(undefined4 *)(ppuVar9 + 2);
    break;
  case 0x14:
    func_0x0001086df23c();
    func_0x0001086df46c();
    ppuVar9 = extraout_x9_01;
    if (extraout_w8_00 != 0x18) {
      ppuVar9 = &PTR_PTR_11327c0f8;
    }
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(ppuVar9 + 2);
    break;
  case 0x15:
    ppuVar9 = param_1;
    FUN_1086a6978(param_1,param_3,0);
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuStack_b0 = &PTR_FUN_110a8d288;
      ppuStack_a8 = (undefined **)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      func_0x000107c29ee4(auStack_d0,param_3);
      FUN_1086a505c(&ppuStack_b0);
      func_0x000107c287d0();
      func_0x000107c2a2e0(auStack_d0);
      pppuVar3 = (undefined ***)(param_1 + 3);
      FUN_1086a9d54();
      if (pppuVar3 != &ppuStack_b0) {
        ppuVar9 = pppuVar3[1];
        if (((ulong)ppuVar9 & 1) != 0) {
          ppuVar9 = *(undefined ***)((ulong)ppuVar9 & 0xfffffffffffffffe);
        }
        ppuVar11 = ppuStack_a8;
        if (((ulong)ppuStack_a8 & 1) != 0) {
          ppuVar11 = *(undefined ***)((ulong)ppuStack_a8 & 0xfffffffffffffffe);
        }
        if (ppuVar9 == ppuVar11) {
          FUN_1088f6620();
        }
        else {
          func_0x0001088f65f0();
        }
      }
      func_0x000107c2a3ec(&ppuStack_b0);
    }
    break;
  case 0x16:
    *(undefined1 *)((long)param_1 + 0x114) = 1;
    break;
  case 0x1e:
    if ((*(byte *)(param_1 + 2) >> 4 & 1) != 0) {
      FUN_1086a4a3c();
      func_0x0001086df46c();
      ppuVar9 = extraout_x9_00;
      if (extraout_w8 != 0x22) {
        ppuVar9 = &PTR_PTR_11327c128;
      }
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(ppuVar9 + 2);
    }
    break;
  case 0x1f:
    func_0x0001086df23c();
    func_0x0001086df46c();
    func_0x0001086df2ec();
    for (; unaff_x22 != (undefined **)0x0; unaff_x22 = unaff_x22 + -1) {
      FUN_10866ea00(param_1 + 6);
      func_0x0001088bf408();
    }
  }
  func_0x0001086df37c(unaff_x30);
  return unaff_x30;
}



/* Entry: 1086dd8dc; end: 1086dd90f;  */

void FUN_1086dd8dc(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001086df41c();
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086df328();
    }
    func_0x000107c29238();
    *(ulong *)(unaff_x19 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 1086dd910; end: 1086dd9a3;  */

undefined8 FUN_1086dd910(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar5;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  func_0x0001086df244(*puVar2);
  func_0x0001086df394();
  for (; unaff_x23 != 0; unaff_x23 = unaff_x23 + -8) {
    lVar5 = *unaff_x22;
    lVar3 = *(long *)(lVar5 + 0x18);
    lVar1 = unaff_x24;
    if (lVar3 != 0) {
      lVar1 = lVar3;
    }
    func_0x0001086df3d0(*(undefined8 *)(lVar1 + 0x10));
    if ((int)puVar2 != 0 && param_3 < 4) {
      uVar4 = *(undefined8 *)(lVar5 + *(long *)(&UNK_10df46010 + (ulong)param_3 * 8));
    }
    unaff_x22 = unaff_x22 + 1;
  }
  return uVar4;
}



/* Entry: 1086dd9a4; end: 1086ddb03;  */

void FUN_1086dd9a4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *extraout_x9;
  long *extraout_x9_00;
  long lVar7;
  long lVar8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  plVar1 = (long *)(param_2 + 0x18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  plVar5 = (long *)(param_3 + 0x18);
  func_0x0001086df244(*plVar5);
  plVar3 = plVar5;
  if (!(bool)in_ZR) {
    plVar3 = extraout_x9;
  }
  for (lVar7 = (long)(int)plVar5[1] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    lVar8 = *plVar3;
    ppuVar6 = *(undefined ***)(lVar8 + 0x18);
    in_ZR = ppuVar6 == (undefined **)0x0;
    ppuVar2 = &PTR_PTR_11326cb58;
    if (!(bool)in_ZR) {
      ppuVar2 = ppuVar6;
    }
    plVar5 = &lStack_80;
    FUN_1086ddb04(plVar5,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
    *plVar5 = lVar8;
    plVar3 = plVar3 + 1;
  }
  ppuStack_e0 = &PTR_FUN_110a8d288;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  func_0x0001086df244(*(undefined8 *)(param_2 + 0x18));
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9_00;
  }
  for (lVar7 = (long)*(int *)(param_2 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    lVar8 = *plVar1;
    ppuVar6 = *(undefined ***)(lVar8 + 0x18);
    ppuVar2 = &PTR_PTR_11326cb58;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    plVar3 = &lStack_80;
    FUN_1086df14c(plVar3,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
    pppuVar4 = &ppuStack_e0;
    if (plVar3 != (long *)0x0) {
      pppuVar4 = (undefined ***)plVar3[5];
    }
    FUN_1086ddb38(pppuVar4,lVar8,param_1);
    plVar1 = plVar1 + 1;
  }
  func_0x000107c2a3ec(&ppuStack_e0);
  FUN_1086dec88(&lStack_80);
  return;
}



/* Entry: 1086ddb04; end: 1086ddb37;  */

long FUN_1086ddb04(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1086ded28(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 1086ddb38; end: 1086ddb97;  */

void FUN_1086ddb38(long param_1,long param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)) {
    FUN_1086ddb98(*(long *)(param_1 + 0x28),*(long *)(param_2 + 0x28),param_3);
  }
  if (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30)) {
    return;
  }
  FUN_1086ddbd4(param_3,&stack0xffffffffffffffe8,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1086ddb98; end: 1086ddbd3;  */

void FUN_1086ddb98(long param_1,long param_2,undefined8 param_3)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_1;
  if (param_2 <= param_1) {
    lStack_18 = param_2;
  }
  lStack_20 = param_1;
  if (param_1 <= param_2) {
    lStack_20 = param_2;
  }
  FUN_1086ddbd4(param_3,&lStack_18,&lStack_20);
  return;
}



/* Entry: 1086ddbd4; end: 1086ddc1f;  */

undefined8 * FUN_1086ddbd4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_1086dde84();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1086ddc20; end: 1086ddcdb;  */

void FUN_1086ddc20(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  if (plVar3 != plVar4) {
    FUN_1086de098(plVar3,plVar4,LZCOUNT((long)plVar4 - (long)plVar3 >> 4) << 1 ^ 0x7e,1);
    plVar3 = (long *)*param_2;
    plVar4 = (long *)param_2[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    lVar1 = param_1[1];
    if ((*param_1 == lVar1) || (lVar2 = *(long *)(lVar1 + -8), lVar2 < *plVar3 + -1)) {
      FUN_1086ddcdc(param_1,plVar3);
    }
    else {
      if (lVar2 <= plVar3[1]) {
        lVar2 = plVar3[1];
      }
      *(long *)(lVar1 + -8) = lVar2;
    }
  }
  return;
}



/* Entry: 1086ddcdc; end: 1086ddd1f;  */

undefined8 * FUN_1086ddcdc(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1086dec28();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1086ddd20; end: 1086ddde3;  */

void FUN_1086ddd20(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar2 = param_4;
  func_0x0001086df244(*param_1);
  func_0x0001086df394();
  for (; unaff_x23 != 0; unaff_x23 = unaff_x23 + -8) {
    lVar1 = unaff_x24;
    if (*(long *)(*unaff_x22 + 0x18) != 0) {
      lVar1 = *(long *)(*unaff_x22 + 0x18);
    }
    func_0x000107c287e8(lVar1,param_2);
    if ((int)lVar1 != 0) {
      if ((uint)param_4 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0001086ddd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df45ff3)[uVar2 & 0xffffffff] * 4 + 0x1086ddd9c))(0x28);
        return;
      }
      if (param_3 < 1) break;
    }
    unaff_x22 = unaff_x22 + 1;
  }
  func_0x0001086df3f8(unaff_x23 == 0);
  return;
}



/* Entry: 1086ddde4; end: 1086dde83;  */

void FUN_1086ddde4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_ZR;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong *extraout_x9;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar4 = param_1;
  func_0x0001086df244(*param_1);
  puVar1 = puVar4;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  iVar9 = (int)((ulong)(param_2 - (long)puVar1) >> 3);
  uVar3 = (int)((param_2 - (long)puVar1) + 8U >> 3) - iVar9;
  puVar1 = puVar1 + iVar9;
  uVar10 = puVar4[2];
  uVar5 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  uVar11 = uVar5 << 3;
  while (uVar5 != 0) {
    if ((uVar10 == 0) && ((long *)*puVar1 != (long *)0x0)) {
      (**(code **)(*(long *)*puVar1 + 8))();
    }
    puVar1 = puVar1 + 1;
    uVar11 = uVar11 - 8;
    uVar5 = uVar11;
  }
  if ((int)uVar3 < 1) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    if ((iVar9 == 0) && (uVar3 == 1)) {
      *param_1 = 0;
    }
  }
  else {
    piVar6 = (int *)(*param_1 - 1);
    iVar2 = *piVar6;
    lVar8 = (long)(int)(uVar3 + iVar9);
    while (lVar7 = lVar8 + 1, lVar8 < iVar2) {
      *(undefined8 *)(piVar6 + (long)(int)uVar3 * -2 + lVar7 * 2) =
           *(undefined8 *)(piVar6 + lVar7 * 2);
      lVar8 = lVar7;
    }
    *piVar6 = iVar2 - uVar3;
  }
  *(uint *)(param_1 + 1) = (int)param_1[1] - uVar3;
  return;
}



/* Entry: 1086dde84; end: 1086ddef3;  */

undefined8 FUN_1086dde84(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_48;
  
  func_0x0001086df2c4();
  func_0x0001086df250();
  *puStack_48 = *param_2;
  puStack_48[1] = *param_3;
  func_0x0001086df3e4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001086df364();
  return uVar1;
}



/* Entry: 1086ddef4; end: 1086ddf33;  */

undefined8 * FUN_1086ddef4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_1086ddfac();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 1086ddf34; end: 1086ddfab;  */

void FUN_1086ddf34(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086ddfac; end: 1086ddfbf;  */

long * FUN_1086ddfac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4b1594;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086de008();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 1086ddfc0; end: 1086de02b;  */

long * FUN_1086ddfc0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086de008();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1086de02c; end: 1086de047;  */

long * FUN_1086de02c(long *param_1,ulong param_2)

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
  FUN_1086de074();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086de048; end: 1086de073;  */

long * FUN_1086de048(long *param_1)

{
  FUN_1086de074();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086de074; end: 1086de097;  */

void FUN_1086de074(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1086de098; end: 1086de86f;  */

void FUN_1086de098(long *param_1,long *param_2,long *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar11;
  long extraout_x9;
  ulong uVar12;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 unaff_x30;
  
  do {
    plVar8 = param_2 + -2;
    plVar7 = param_1;
LAB_1086de0d4:
    param_1 = plVar7;
    uVar9 = (long)param_2 - (long)param_1 >> 4;
    switch(uVar9) {
    case 0:
    case 1:
      goto LAB_1086de85c;
    case 2:
      func_0x0001086df358(param_2[-2]);
      uVar15 = extraout_w10;
      if (extraout_x8 != extraout_x9) {
        uVar15 = (uint)(extraout_x8 < extraout_x9);
      }
      if (uVar15 == 1) {
        func_0x0001086df334();
      }
      goto LAB_1086de85c;
    case 3:
      plVar7 = param_1 + 2;
      func_0x0001086df3f8();
      lVar10 = *plVar7;
      lVar11 = *param_1;
      bVar1 = plVar7[1] < param_1[1];
      if (lVar10 != lVar11) {
        bVar1 = lVar10 < lVar11;
      }
      lVar17 = *plVar8;
      bVar2 = plVar8[1] < plVar7[1];
      if (lVar17 != lVar10) {
        bVar2 = lVar17 < lVar10;
      }
      if (bVar1) {
        if (bVar2) {
          *param_1 = lVar17;
          *plVar8 = lVar11;
          lVar10 = param_1[1];
          param_1[1] = plVar8[1];
        }
        else {
          *param_1 = lVar10;
          *plVar7 = lVar11;
          lVar17 = param_1[1];
          param_1[1] = plVar7[1];
          plVar7[1] = lVar17;
          lVar10 = *plVar8;
          lVar11 = *plVar7;
          bVar1 = plVar8[1] < lVar17;
          if (lVar10 != lVar11) {
            bVar1 = lVar10 < lVar11;
          }
          if (!bVar1) {
            return;
          }
          *plVar7 = lVar10;
          *plVar8 = lVar11;
          lVar10 = plVar7[1];
          plVar7[1] = plVar8[1];
        }
        plVar8[1] = lVar10;
      }
      else if (bVar2) {
        *plVar7 = lVar17;
        *plVar8 = lVar10;
        lVar10 = plVar7[1];
        plVar7[1] = plVar8[1];
        plVar8[1] = lVar10;
        func_0x0001086df358(*plVar7);
        uVar15 = extraout_w10_00;
        if (extraout_x8_00 != extraout_x9_00) {
          uVar15 = (uint)(extraout_x8_00 < extraout_x9_00);
        }
        if (uVar15 == 1) {
          *param_1 = extraout_x8_00;
          *plVar7 = extraout_x9_00;
          lVar10 = param_1[1];
          param_1[1] = plVar7[1];
          plVar7[1] = lVar10;
          return;
        }
      }
      return;
    case 4:
      func_0x0001086df410();
      func_0x0001086df3f8(param_1);
      func_0x0001086df430();
      FUN_1086de870();
      func_0x0001086df358(*param_3);
      uVar15 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar15 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar15 == 1) {
        func_0x0001086df26c();
        uVar15 = extraout_w10_02;
        if (extraout_x8_02 != extraout_x9_02) {
          uVar15 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar15 == 1) {
          func_0x0001086df298();
          uVar15 = extraout_w10_03;
          if (extraout_x8_03 != extraout_x9_03) {
            uVar15 = (uint)(extraout_x8_03 < extraout_x9_03);
          }
          if (uVar15 == 1) {
            func_0x0001086df30c();
          }
        }
      }
      return;
    case 5:
      func_0x0001086df410();
      func_0x0001086df3f8(param_1);
      func_0x0001086df430();
      FUN_1086de97c();
      func_0x0001086df358(*plVar8);
      uVar15 = extraout_w10_04;
      if (extraout_x8_04 != extraout_x9_04) {
        uVar15 = (uint)(extraout_x8_04 < extraout_x9_04);
      }
      if (uVar15 == 1) {
        *param_3 = extraout_x8_04;
        *plVar8 = extraout_x9_04;
        lVar10 = param_3[1];
        param_3[1] = plVar8[1];
        plVar8[1] = lVar10;
        func_0x0001086df358(*param_3);
        uVar15 = extraout_w10_05;
        if (extraout_x8_05 != extraout_x9_05) {
          uVar15 = (uint)(extraout_x8_05 < extraout_x9_05);
        }
        if (uVar15 == 1) {
          func_0x0001086df26c();
          uVar15 = extraout_w10_06;
          if (extraout_x8_06 != extraout_x9_06) {
            uVar15 = (uint)(extraout_x8_06 < extraout_x9_06);
          }
          if (uVar15 == 1) {
            func_0x0001086df298();
            uVar15 = extraout_w10_07;
            if (extraout_x8_07 != extraout_x9_07) {
              uVar15 = (uint)(extraout_x8_07 < extraout_x9_07);
            }
            if (uVar15 == 1) {
              func_0x0001086df30c();
            }
          }
        }
      }
      return;
    }
    if ((long)uVar9 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 != param_2) {
          plVar7 = param_1 + 3;
          while (param_1 + 2 != param_2) {
            lVar10 = param_1[2];
            lVar17 = param_1[3];
            lVar11 = *param_1;
            bVar1 = lVar17 < param_1[1];
            if (lVar10 != lVar11) {
              bVar1 = lVar10 < lVar11;
            }
            plVar8 = plVar7;
            if (bVar1) {
              do {
                plVar5 = plVar8;
                plVar5[-1] = lVar11;
                *plVar5 = plVar5[-2];
                lVar11 = plVar5[-5];
                bVar1 = lVar17 < plVar5[-4];
                if (lVar10 != lVar11) {
                  bVar1 = lVar10 < lVar11;
                }
                plVar8 = plVar5 + -2;
              } while (bVar1);
              plVar5[-3] = lVar10;
              plVar5[-2] = lVar17;
            }
            plVar7 = plVar7 + 2;
            param_1 = param_1 + 2;
          }
        }
        break;
      }
      if (param_1 == param_2) break;
      lVar10 = 0;
      plVar7 = param_1;
      goto LAB_1086de4e0;
    }
    if (param_3 == (long *)0x0) {
      if (param_1 == param_2) break;
      uVar12 = uVar9 - 2 >> 1;
      uVar14 = uVar12;
      goto LAB_1086de57c;
    }
    plVar7 = param_1 + (uVar9 & 0xfffffffffffffffe);
    if (uVar9 < 0x81) {
      func_0x0001086df3f0(plVar7,param_1);
    }
    else {
      func_0x0001086df3f0(param_1,plVar7);
      FUN_1086de870(param_1 + 2,plVar7 + -2,param_2 + -4);
      FUN_1086de870(param_1 + 4,plVar7 + 2,param_2 + -6);
      FUN_1086de870(plVar7 + -2,plVar7,plVar7 + 2);
      lVar11 = param_1[1];
      lVar10 = *param_1;
      lVar17 = *plVar7;
      param_1[1] = plVar7[1];
      *param_1 = lVar17;
      plVar7[1] = lVar11;
      *plVar7 = lVar10;
    }
    param_3 = (long *)((long)param_3 + -1);
    lVar10 = *param_1;
    if ((param_4 & 1) == 0) {
      lVar11 = param_1[1];
      bVar1 = param_1[-1] < lVar11;
      if (param_1[-2] != lVar10) {
        bVar1 = param_1[-2] < lVar10;
      }
      if (!bVar1) {
        bVar1 = lVar11 < param_2[-1];
        if (lVar10 != param_2[-2]) {
          bVar1 = lVar10 < param_2[-2];
        }
        plVar5 = param_1;
        if (bVar1) {
          do {
            plVar7 = plVar5 + 2;
            bVar1 = lVar11 < plVar5[3];
            if (lVar10 != *plVar7) {
              bVar1 = lVar10 < *plVar7;
            }
            plVar5 = plVar7;
          } while (!bVar1);
        }
        else {
          do {
            plVar7 = plVar5 + 2;
            if (param_2 <= plVar7) break;
            bVar1 = lVar11 < plVar5[3];
            if (lVar10 != *plVar7) {
              bVar1 = lVar10 < *plVar7;
            }
            plVar5 = plVar7;
          } while (!bVar1);
        }
        plVar5 = param_2;
        plVar6 = param_2;
        if (plVar7 < param_2) {
          do {
            plVar5 = plVar6 + -2;
            bVar1 = lVar11 < plVar6[-1];
            if (lVar10 != *plVar5) {
              bVar1 = lVar10 < *plVar5;
            }
            plVar6 = plVar5;
          } while (bVar1);
        }
        while (plVar7 < plVar5) {
          lVar17 = *plVar7;
          *plVar7 = *plVar5;
          *plVar5 = lVar17;
          lVar17 = plVar7[1];
          plVar7[1] = plVar5[1];
          plVar5[1] = lVar17;
          plVar6 = plVar7;
          do {
            plVar7 = plVar6 + 2;
            bVar1 = lVar11 < plVar6[3];
            if (lVar10 != *plVar7) {
              bVar1 = lVar10 < *plVar7;
            }
            plVar13 = plVar5;
            plVar6 = plVar7;
          } while (!bVar1);
          do {
            plVar5 = plVar13 + -2;
            bVar1 = lVar11 < plVar13[-1];
            if (lVar10 != *plVar5) {
              bVar1 = lVar10 < *plVar5;
            }
            plVar13 = plVar5;
          } while (bVar1);
        }
        if (param_1 != plVar7 + -2) {
          *param_1 = plVar7[-2];
          param_1[1] = plVar7[-1];
        }
        param_4 = 0;
        plVar7[-2] = lVar10;
        plVar7[-1] = lVar11;
        goto LAB_1086de0d4;
      }
    }
    else {
      lVar11 = param_1[1];
    }
    lVar17 = 0;
    do {
      lVar16 = *(long *)((long)param_1 + lVar17 + 0x10);
      bVar1 = *(long *)((long)param_1 + lVar17 + 0x18) < lVar11;
      if (lVar16 != lVar10) {
        bVar1 = lVar16 < lVar10;
      }
      lVar17 = lVar17 + 0x10;
    } while (bVar1);
    plVar5 = (long *)((long)param_1 + lVar17);
    plVar6 = param_2;
    plVar7 = plVar5;
    if (lVar17 == 0x10) {
      do {
        plVar13 = plVar6;
        if (plVar6 <= plVar5) break;
        plVar13 = plVar6 + -2;
        bVar1 = plVar6[-1] < lVar11;
        if (*plVar13 != lVar10) {
          bVar1 = *plVar13 < lVar10;
        }
        plVar6 = plVar13;
      } while (!bVar1);
    }
    else {
      do {
        plVar13 = plVar6 + -2;
        bVar1 = plVar6[-1] < lVar11;
        if (*plVar13 != lVar10) {
          bVar1 = *plVar13 < lVar10;
        }
        plVar6 = plVar13;
      } while (!bVar1);
    }
    while (plVar7 < plVar13) {
      *plVar7 = *plVar13;
      *plVar13 = lVar16;
      lVar17 = plVar7[1];
      plVar7[1] = plVar13[1];
      plVar13[1] = lVar17;
      plVar22 = plVar7;
      do {
        plVar7 = plVar22 + 2;
        lVar16 = *plVar7;
        bVar1 = plVar22[3] < lVar11;
        if (lVar16 != lVar10) {
          bVar1 = lVar16 < lVar10;
        }
        plVar18 = plVar13;
        plVar22 = plVar7;
      } while (bVar1);
      do {
        plVar13 = plVar18 + -2;
        bVar1 = plVar18[-1] < lVar11;
        if (*plVar13 != lVar10) {
          bVar1 = *plVar13 < lVar10;
        }
        plVar18 = plVar13;
      } while (!bVar1);
    }
    plVar13 = plVar7 + -2;
    if (param_1 != plVar13) {
      *param_1 = plVar7[-2];
      param_1[1] = plVar7[-1];
    }
    plVar7[-2] = lVar10;
    plVar7[-1] = lVar11;
    if (plVar5 < plVar6) goto LAB_1086de2d0;
    plVar5 = param_1;
    FUN_1086deaa4(param_1,plVar13);
    plVar6 = plVar7;
    FUN_1086deaa4(plVar7,param_2);
    if ((int)plVar6 == 0) goto code_r0x0001086de2cc;
    param_2 = plVar13;
  } while (((ulong)plVar5 & 1) == 0);
  goto LAB_1086de85c;
LAB_1086de4e0:
  if (plVar7 + 2 == param_2) goto LAB_1086de85c;
  lVar11 = plVar7[2];
  lVar16 = plVar7[3];
  lVar17 = *plVar7;
  bVar1 = lVar16 < plVar7[1];
  if (lVar11 != lVar17) {
    bVar1 = lVar11 < lVar17;
  }
  lVar4 = lVar10;
  if (bVar1) {
    do {
      lVar19 = lVar4;
      *(long *)((long)param_1 + lVar19 + 0x10) = lVar17;
      *(undefined8 *)((long)param_1 + lVar19 + 0x18) = *(undefined8 *)((long)param_1 + lVar19 + 8);
      plVar8 = param_1;
      if (lVar19 == 0) goto LAB_1086de554;
      lVar17 = *(long *)((long)param_1 + lVar19 + -0x10);
      bVar1 = lVar16 < *(long *)((long)param_1 + lVar19 + -8);
      if (lVar11 != lVar17) {
        bVar1 = lVar11 < lVar17;
      }
      lVar4 = lVar19 + -0x10;
    } while (bVar1);
    plVar8 = (long *)((long)param_1 + lVar19);
LAB_1086de554:
    *plVar8 = lVar11;
    plVar8[1] = lVar16;
  }
  lVar10 = lVar10 + 0x10;
  plVar7 = plVar7 + 2;
  goto LAB_1086de4e0;
code_r0x0001086de2cc:
  if (((ulong)plVar5 & 1) == 0) {
LAB_1086de2d0:
    FUN_1086de098(param_1,plVar13,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_1086de0d4;
LAB_1086de57c:
  do {
    if ((long)uVar14 <= (long)uVar12) {
      uVar21 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      plVar7 = param_1 + uVar21 * 2;
      uVar3 = uVar14 * 2 + 2;
      lVar11 = *plVar7;
      plVar8 = plVar7;
      lVar10 = lVar11;
      uVar20 = uVar21;
      if ((long)uVar3 < (long)uVar9) {
        lVar10 = plVar7[2];
        bVar1 = plVar7[1] < plVar7[3];
        if (lVar11 != lVar10) {
          bVar1 = lVar11 < lVar10;
        }
        plVar8 = plVar7 + 2;
        uVar20 = uVar3;
        if (!bVar1) {
          plVar8 = plVar7;
          lVar10 = lVar11;
          uVar20 = uVar21;
        }
      }
      plVar7 = param_1 + uVar14 * 2;
      lVar11 = *plVar7;
      lVar17 = plVar7[1];
      bVar1 = plVar8[1] < lVar17;
      if (lVar10 != lVar11) {
        bVar1 = lVar10 < lVar11;
      }
      if (!bVar1) {
        do {
          plVar5 = plVar8;
          *plVar7 = lVar10;
          plVar7[1] = plVar5[1];
          if ((long)uVar12 < (long)uVar20) break;
          uVar21 = uVar20 << 1 | 1;
          plVar7 = param_1 + uVar21 * 2;
          uVar3 = uVar20 * 2 + 2;
          lVar16 = *plVar7;
          plVar8 = plVar7;
          lVar10 = lVar16;
          uVar20 = uVar21;
          if ((long)uVar3 < (long)uVar9) {
            lVar10 = plVar7[2];
            bVar1 = plVar7[1] < plVar7[3];
            if (lVar16 != lVar10) {
              bVar1 = lVar16 < lVar10;
            }
            plVar8 = plVar7 + 2;
            uVar20 = uVar3;
            if (!bVar1) {
              plVar8 = plVar7;
              lVar10 = lVar16;
              uVar20 = uVar21;
            }
          }
          bVar1 = plVar8[1] < lVar17;
          if (lVar10 != lVar11) {
            bVar1 = lVar10 < lVar11;
          }
          plVar7 = plVar5;
        } while (!bVar1);
        *plVar5 = lVar11;
        plVar5[1] = lVar17;
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  for (; 1 < (long)uVar9; uVar9 = uVar9 - 1) {
    lVar10 = *param_1;
    lVar11 = param_1[1];
    plVar7 = param_1;
    uVar14 = 0;
    do {
      plVar5 = plVar7 + uVar14 * 2 + 2;
      lVar16 = *plVar5;
      uVar3 = uVar14 << 1 | 1;
      uVar12 = uVar14 * 2 + 2;
      plVar8 = plVar5;
      lVar17 = lVar16;
      uVar21 = uVar3;
      if ((long)uVar12 < (long)uVar9) {
        lVar17 = plVar7[uVar14 * 2 + 4];
        bVar1 = plVar7[uVar14 * 2 + 3] < plVar7[uVar14 * 2 + 5];
        if (lVar16 != lVar17) {
          bVar1 = lVar16 < lVar17;
        }
        plVar8 = plVar7 + uVar14 * 2 + 4;
        uVar21 = uVar12;
        if (!bVar1) {
          plVar8 = plVar5;
          lVar17 = lVar16;
          uVar21 = uVar3;
        }
      }
      *plVar7 = lVar17;
      plVar7[1] = plVar8[1];
      plVar7 = plVar8;
      uVar14 = uVar21;
    } while ((long)uVar21 <= (long)(uVar9 - 2 >> 1));
    if (plVar8 == param_2 + -2) {
      *plVar8 = lVar10;
      plVar8[1] = lVar11;
    }
    else {
      *plVar8 = param_2[-2];
      plVar8[1] = param_2[-1];
      param_2[-2] = lVar10;
      param_2[-1] = lVar11;
      lVar10 = (long)plVar8 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar10) {
        uVar14 = lVar10 - 2U >> 1;
        plVar7 = param_1 + uVar14 * 2;
        lVar10 = *plVar7;
        lVar11 = *plVar8;
        lVar17 = plVar8[1];
        bVar1 = plVar7[1] < lVar17;
        if (lVar10 != lVar11) {
          bVar1 = lVar10 < lVar11;
        }
        if (bVar1) {
          do {
            plVar5 = plVar7;
            *plVar8 = lVar10;
            plVar8[1] = plVar5[1];
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            plVar7 = param_1 + uVar14 * 2;
            lVar10 = *plVar7;
            bVar1 = plVar7[1] < lVar17;
            if (lVar10 != lVar11) {
              bVar1 = lVar10 < lVar11;
            }
            plVar8 = plVar5;
          } while (bVar1);
          *plVar5 = lVar11;
          plVar5[1] = lVar17;
        }
      }
    }
    param_2 = param_2 + -2;
  }
LAB_1086de85c:
  func_0x0001086df3f8(unaff_x30);
  return;
}



/* Entry: 1086de870; end: 1086de97b;  */

void FUN_1086de870(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  long lVar4;
  uint extraout_w10;
  long lVar5;
  uint uVar6;
  
  lVar3 = *param_2;
  lVar4 = *param_1;
  bVar1 = param_2[1] < param_1[1];
  if (lVar3 != lVar4) {
    bVar1 = lVar3 < lVar4;
  }
  lVar5 = *param_3;
  bVar2 = param_3[1] < param_2[1];
  if (lVar5 != lVar3) {
    bVar2 = lVar5 < lVar3;
  }
  if (bVar1) {
    if (bVar2) {
      *param_1 = lVar5;
      *param_3 = lVar4;
      lVar3 = param_1[1];
      param_1[1] = param_3[1];
    }
    else {
      *param_1 = lVar3;
      *param_2 = lVar4;
      lVar5 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar5;
      lVar3 = *param_3;
      lVar4 = *param_2;
      bVar1 = param_3[1] < lVar5;
      if (lVar3 != lVar4) {
        bVar1 = lVar3 < lVar4;
      }
      if (!bVar1) {
        return;
      }
      *param_2 = lVar3;
      *param_3 = lVar4;
      lVar3 = param_2[1];
      param_2[1] = param_3[1];
    }
    param_3[1] = lVar3;
  }
  else if (bVar2) {
    *param_2 = lVar5;
    *param_3 = lVar3;
    lVar3 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar3;
    func_0x0001086df358(*param_2);
    uVar6 = extraout_w10;
    if (extraout_x8 != extraout_x9) {
      uVar6 = (uint)(extraout_x8 < extraout_x9);
    }
    if (uVar6 == 1) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
      lVar3 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar3;
      return;
    }
  }
  return;
}



/* Entry: 1086de97c; end: 1086de9ef;  */

void FUN_1086de97c(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar1;
  undefined8 *unaff_x22;
  
  func_0x0001086df430();
  FUN_1086de870();
  func_0x0001086df358(*unaff_x22);
  uVar1 = extraout_w10;
  if (extraout_x8 != extraout_x9) {
    uVar1 = (uint)(extraout_x8 < extraout_x9);
  }
  if (uVar1 == 1) {
    func_0x0001086df26c();
    uVar1 = extraout_w10_00;
    if (extraout_x8_00 != extraout_x9_00) {
      uVar1 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar1 == 1) {
      func_0x0001086df298();
      uVar1 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar1 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar1 == 1) {
        func_0x0001086df30c();
      }
    }
  }
  return;
}



/* Entry: 1086de9f0; end: 1086deaa3;  */

void FUN_1086de9f0(void)

{
  long *in_x4;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar2;
  long *unaff_x22;
  
  func_0x0001086df430();
  FUN_1086de97c();
  func_0x0001086df358(*in_x4);
  uVar2 = extraout_w10;
  if (extraout_x8 != extraout_x9) {
    uVar2 = (uint)(extraout_x8 < extraout_x9);
  }
  if (uVar2 == 1) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    lVar1 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = lVar1;
    func_0x0001086df358(*unaff_x22);
    uVar2 = extraout_w10_00;
    if (extraout_x8_00 != extraout_x9_00) {
      uVar2 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar2 == 1) {
      func_0x0001086df26c();
      uVar2 = extraout_w10_01;
      if (extraout_x8_01 != extraout_x9_01) {
        uVar2 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar2 == 1) {
        func_0x0001086df298();
        uVar2 = extraout_w10_02;
        if (extraout_x8_02 != extraout_x9_02) {
          uVar2 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar2 == 1) {
          func_0x0001086df30c();
        }
      }
    }
  }
  return;
}



/* Entry: 1086deaa4; end: 1086dec27;  */

void FUN_1086deaa4(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  int iVar4;
  long extraout_x9;
  uint extraout_w10;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001086df358(param_2[-2]);
    uVar5 = extraout_w10;
    if (extraout_x8 != extraout_x9) {
      uVar5 = (uint)(extraout_x8 < extraout_x9);
    }
    if (uVar5 == 1) {
      func_0x0001086df334();
    }
    break;
  case 3:
    FUN_1086de870(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    func_0x0001086df410(1,param_2,param_3,param_2 + -2);
    FUN_1086de97c(param_1);
    break;
  case 5:
    func_0x0001086df410(1);
    FUN_1086de9f0(param_1);
    break;
  default:
    func_0x0001086df3f0(param_1,param_1 + 2);
    lVar3 = 0;
    iVar4 = 0;
    plVar10 = param_1 + 6;
    plVar12 = param_1 + 4;
    while (plVar6 = plVar10, plVar6 != param_2) {
      lVar7 = *plVar6;
      lVar8 = plVar6[1];
      lVar9 = *plVar12;
      bVar1 = lVar8 < plVar12[1];
      if (lVar7 != lVar9) {
        bVar1 = lVar7 < lVar9;
      }
      lVar2 = lVar3;
      if (bVar1) {
        do {
          lVar11 = lVar2;
          *(long *)((long)param_1 + lVar11 + 0x30) = lVar9;
          *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x28);
          plVar10 = param_1;
          if (lVar11 == -0x20) goto LAB_1086debd4;
          lVar9 = *(long *)((long)param_1 + lVar11 + 0x10);
          bVar1 = lVar8 < *(long *)((long)param_1 + lVar11 + 0x18);
          if (lVar7 != lVar9) {
            bVar1 = lVar7 < lVar9;
          }
          lVar2 = lVar11 + -0x10;
        } while (bVar1);
        plVar10 = (long *)((long)param_1 + lVar11 + 0x20);
LAB_1086debd4:
        *plVar10 = lVar7;
        plVar10[1] = lVar8;
        iVar4 = iVar4 + 1;
        if (iVar4 == 8) {
          return;
        }
      }
      lVar3 = lVar3 + 0x10;
      plVar12 = plVar6;
      plVar10 = plVar6 + 2;
    }
  }
  return;
}



/* Entry: 1086dec28; end: 1086dec87;  */

undefined8 FUN_1086dec28(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *puStack_38;
  
  func_0x0001086df2c4();
  func_0x0001086df250();
  uVar1 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar1;
  func_0x0001086df3e4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001086df364();
  return uVar1;
}



/* Entry: 1086dec88; end: 1086ded0f;  */

long FUN_1086dec88(long param_1)

{
  func_0x0001086decb0(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_1086ded10(param_1,0);
  return param_1;
}



/* Entry: 1086ded10; end: 1086ded27;  */

void FUN_1086ded10(long *param_1)

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



/* Entry: 1086ded28; end: 1086df0ef;  */

undefined1  [16]
FUN_1086ded28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  func_0x000107c278c4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar6 = 0;
        if (plVar13 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1086dedec;
          plVar4 = (long *)plVar12[1];
          if (plVar4 != plVar7) break;
          plVar4 = plVar12 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086df0b4;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar14);
        }
        else if (plVar13 <= plVar4) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar13;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar13);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_1086dedec:
  uVar3 = *param_4;
  plVar4 = param_1 + 2;
  plVar12 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  plStack_68 = plVar12;
  plStack_60 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,uVar3);
  plVar12[5] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1086df038;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar13) {
    plVar5 = plVar13;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar5) {
LAB_1086deea4:
    if ((ulong)plVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1086df0dc);
      (*pcVar1)();
    }
    lVar2 = (long)plVar5 << 3;
    __Znwm(lVar2);
    FUN_1086df0f0(param_1,lVar2);
    param_1[1] = (long)plVar5;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    plVar13 = plVar5;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar5 - 1;
      uVar14 = 0;
      if (plVar5 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar10 = plVar9;
      if (plVar5 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar5 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar5 <= plVar11) {
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar5;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar5);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar8) {
      plVar5 = plVar8;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_1086deea4;
      FUN_1086df0f0(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
  }
LAB_1086df038:
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1086df108(&plStack_68);
  uVar3 = 1;
LAB_1086df0b4:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 1086df0f0; end: 1086df107;  */

void FUN_1086df0f0(long *param_1,long param_2)

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



/* Entry: 1086df108; end: 1086df14b;  */

long * FUN_1086df108(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}


