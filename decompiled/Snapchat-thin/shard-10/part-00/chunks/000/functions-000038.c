/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10739654c; end: 107396583;  */

/* WARNING: Possible PIC construction at 0x000107396568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010739656c) */

void FUN_10739654c(long param_1)

{
  func_0x000107279298(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 107396584; end: 107396587;  */

undefined8 * FUN_107396584(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a9020;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010726ee28(param_1 + 3);
  func_0x00010726eeb8(param_1 + 1);
  return param_1;
}



/* Entry: 107396588; end: 10739659b;  */

void FUN_107396588(void)

{
  func_0x0001073965c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739659c; end: 10739663b;  */

undefined8 FUN_10739659c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010727163c(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10739663c; end: 10739664f;  */

void FUN_10739663c(void)

{
  func_0x00010739661c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107396650; end: 107396687;  */

undefined8 FUN_107396650(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm(0x88);
  FUN_107396c74();
  return uVar1;
}



/* Entry: 107396688; end: 1073966ab;  */

void FUN_107396688(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x0001073971fc(param_2);
  func_0x00010028af84();
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  func_0x00010028af84(unaff_x19 + 0x30,param_1 + 0x30);
  func_0x00010028af84(unaff_x19 + 0x50,param_1 + 0x50);
  func_0x0001072ab9cc(unaff_x19 + 0x70,param_1 + 0x70);
  return;
}



/* Entry: 1073966ac; end: 107396c2f;  */

undefined4 * FUN_1073966ac(long param_1,long *param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long lVar13;
  undefined1 uStack_50a;
  undefined1 uStack_509;
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [24];
  undefined1 uStack_4e0;
  undefined4 auStack_4d8 [6];
  undefined4 uStack_4c0;
  undefined **ppuStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_490;
  undefined1 uStack_48c;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_468 [24];
  byte bStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_408 [56];
  undefined1 auStack_3d0 [56];
  undefined1 auStack_398 [56];
  undefined1 auStack_360 [56];
  undefined1 auStack_328 [56];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  uint auStack_2b0 [2];
  undefined4 uStack_2a8;
  undefined1 uStack_208;
  undefined1 auStack_148 [120];
  undefined1 auStack_d0 [120];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x28);
  lVar12 = *param_2;
  lVar6 = param_2[1];
  func_0x00010028af84(auStack_468,param_1 + 8);
  for (; lVar7 = lVar6, lVar12 != lVar6; lVar12 = lVar12 + 0x48) {
    if ((bStack_450 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107396ab8);
      (*pcVar3)();
    }
    uVar5 = *(ulong *)(lVar12 + 0x18) & 0xfffffffffffffffc;
    func_0x0001000e107c(uVar5,auStack_468);
    lVar7 = lVar12;
    if ((uVar5 & 1) != 0) break;
  }
  func_0x0001001148fc(auStack_468);
  auStack_4d8[0] = 0x13e;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  ppuStack_4b8 = &PTR_DAT_110996720;
  uStack_4b0 = 0;
  uStack_498 = 0x13e;
  uStack_490 = 0;
  uStack_48c = 1;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_488 = 0;
  auStack_4f8[0] = 0;
  uStack_4e0 = 0;
  uVar4 = lVar7 == param_2[1];
  if ((bool)uVar4) {
    func_0x00010002b838(auStack_2b0,&UNK_10f40b1c5);
    func_0x0001073971a8();
    func_0x000107397188();
    puVar8 = auStack_4d8;
    func_0x00010729d56c(puVar8,"result",&UNK_10f40b195);
    func_0x000107396cf4(auStack_4d8,puVar8);
    goto LAB_107396a44;
  }
  func_0x000100060964(auStack_408,"display_name");
  func_0x000107267fa4(auStack_2b0,auStack_408,*(ulong *)(lVar7 + 0x20) & 0xfffffffffffffffc);
  func_0x000100060964(&uStack_448,&DAT_10f391df4);
  func_0x0001073971c0(*(undefined8 *)(lVar7 + 0x28));
  func_0x000100060964(auStack_2b0,&uStack_2f0,&DAT_10f391dff);
  func_0x0001073971c0(*(undefined8 *)(lVar7 + 0x30));
  func_0x000100060964(auStack_328,&UNK_10f40b1f5);
  ppuVar1 = &PTR_PTR_1132345d0;
  if (*(undefined ***)(lVar7 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(lVar7 + 0x38);
  }
  uStack_509 = *(undefined1 *)((long)ppuVar1 + 0x25);
  func_0x000107396da0(auStack_148,auStack_328,&uStack_509);
  func_0x000100060964(auStack_360,&UNK_10f40b20b);
  uStack_50a = *(undefined1 *)(lVar7 + 0x40);
  func_0x000107396da0(auStack_d0,auStack_360,&uStack_50a);
  func_0x000107268084(auStack_508,auStack_2b0,5);
  lVar12 = 0x1e0;
  do {
    func_0x0001072684c8((long)auStack_2b0 + lVar12);
    lVar12 = lVar12 + -0x78;
  } while (lVar12 != -0x78);
  func_0x000104c2f714(auStack_360);
  func_0x000104c2f714(auStack_328);
  func_0x000104c2f714(&uStack_2f0);
  func_0x000104c2f714(&uStack_448);
  func_0x0001073971d8();
  lVar12 = param_1 + 0x30;
  func_0x00010549026c();
  lVar6 = param_1 + 0x50;
  func_0x00010549026c(lVar6);
  uVar4 = *(char *)(param_1 + 0x80) == '\x01';
  if ((bool)uVar4) {
    func_0x000107397190();
    func_0x000107397210();
    uVar4 = *(char *)(extraout_x8 + 0x160) == '\x01';
    if (!(bool)uVar4) goto LAB_107396944;
    func_0x000107397190();
    func_0x000107397210();
    func_0x000104c2fe00(auStack_408,extraout_x8_00 + 0x60);
    func_0x000107397190();
    func_0x000107397210();
    func_0x000104c2fe00(auStack_3d0,extraout_x8_01 + 0x98);
    func_0x000107397190();
    func_0x000107397210();
    lVar7 = extraout_x8_02 + 0x128;
    func_0x00010725ffc4(lVar7);
    func_0x000104c2fe00(auStack_398,lVar7);
    FUN_107395e0c(auStack_2b0,auStack_408);
    bVar2 = true;
  }
  else {
LAB_107396944:
    bVar2 = false;
    auStack_2b0[0] = auStack_2b0[0] & 0xffffff00;
    uStack_208 = 0;
  }
  func_0x000107268400(&uStack_2f0,auStack_508);
  uStack_448 = CONCAT44(uStack_448._4_4_,1);
  uStack_438 = uStack_2e8;
  uStack_440 = uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uVar5 = lVar13 + 8;
  FUN_10739a79c(uVar5,lVar12,lVar6,auStack_2b0,&uStack_448);
  func_0x000104c3323c(&uStack_448);
  func_0x000104c335c0(&uStack_2f0);
  FUN_107395e64(auStack_2b0);
  if (bVar2) {
    FUN_107395e84(auStack_408);
  }
  if ((uVar5 & 1) == 0) {
    func_0x00010002b838(auStack_2b0,&UNK_10f40b1a4);
    func_0x0001073971a8();
    func_0x000107397188();
    pcVar11 = "set_state_error";
  }
  else {
    pcVar11 = "success";
  }
  puVar8 = auStack_4d8;
  func_0x00010729d56c(puVar8,"result",pcVar11);
  func_0x000107396cf4(auStack_4d8,puVar8);
  func_0x000104c335c0(auStack_508);
LAB_107396a44:
  puVar9 = *(undefined8 **)(lVar13 + 0x28);
  auStack_2b0[0] = 1;
  uStack_2a8 = 0;
  uStack_448 = *puVar9;
  uStack_440 = CONCAT44(uStack_440._4_4_,3);
  puVar8 = auStack_4d8;
  FUN_10743fa9c(puVar9,puVar8,auStack_2b0,&uStack_448,7);
  func_0x0001001148fc(auStack_4f8);
  puVar10 = auStack_4d8;
  func_0x000107262330();
  func_0x0001073971e8(uStack_58);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001073971d8();
    func_0x000104c335c0(auStack_508);
    func_0x0001001148fc(auStack_4f8);
    puVar10 = auStack_4d8;
    func_0x000107262330(puVar10);
    func_0x000107397164();
    func_0x0001004a5364(puVar8,&PTR_DAT_1109a90d0);
    puVar10 = puVar10 + 2;
    if ((int)puVar8 == 0) {
      puVar10 = (undefined4 *)0x0;
    }
    return puVar10;
  }
  return puVar10;
}



/* Entry: 107396c30; end: 107396c67;  */

long FUN_107396c30(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a90d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107396c68; end: 107396c73;  */

undefined ** FUN_107396c68(void)

{
  return &PTR_DAT_1109a90d0;
}



/* Entry: 107396c74; end: 107396cf3;  */

void FUN_107396c74(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001073971fc();
  func_0x00010028af84();
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  func_0x00010028af84(unaff_x19 + 0x30,param_2 + 0x28);
  func_0x00010028af84(unaff_x19 + 0x50,param_2 + 0x48);
  func_0x0001072ab9cc(unaff_x19 + 0x70,param_2 + 0x68);
  return;
}



/* Entry: 107396cf4; end: 107396e97;  */

long FUN_107396cf4(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x18) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      func_0x0001072622ec(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_DAT_1109a90c0)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  func_0x0001006072c8(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



/* Entry: 107396e98; end: 107396f0f;  */

undefined8 * FUN_107396e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  puVar1 = (undefined8 *)param_2[6];
  if (puVar1 == (undefined8 *)0x0) {
    param_1[6] = 0;
  }
  else if (puVar1 == param_2 + 3) {
    param_1[6] = param_1 + 3;
    (**(code **)(*(long *)param_2[6] + 0x18))((long *)param_2[6],param_1 + 3);
  }
  else {
    param_1[6] = puVar1;
    param_2[6] = 0;
  }
  return param_1;
}



/* Entry: 107396f10; end: 107396f13;  */

void FUN_107396f10(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000107397198();
  *param_1 = extraout_x8;
  FUN_10739659c(param_1 + 1);
  return;
}



/* Entry: 107396f14; end: 107396f27;  */

void FUN_107396f14(void)

{
  FUN_1073970a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107396f28; end: 107396f5f;  */

undefined8 FUN_107396f28(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1073970c8();
  return uVar1;
}



/* Entry: 107396f60; end: 107396f83;  */

void FUN_107396f60(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x000107397198();
  *param_2 = extraout_x8;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107397154();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = puVar1[2];
  func_0x0001072715c0(unaff_x19 + 0x20,puVar1 + 3);
  return;
}



/* Entry: 107396f84; end: 10739705f;  */

void FUN_107396f84(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x00010726fc00(&plStack_40,param_1 + 8);
  if (plStack_40 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_58 = uStack_38;
    plStack_60 = plStack_40;
    if (*plStack_40 != -1) {
      plStack_40 = (long *)0x0;
      uStack_38 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x0001072508cc(&uStack_50);
      goto LAB_107396ff8;
    }
    func_0x00010726fc88();
  }
  func_0x000107397174();
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  plStack_40 = (long *)0x0;
  uStack_38 = 0;
LAB_107396ff8:
  func_0x000107397174();
  func_0x00010726fc00(&plStack_40,param_1 + 8);
  if (plStack_40 == (long *)0x0) {
    func_0x000107397174();
  }
  else {
    lVar1 = *plStack_40;
    func_0x000107397174();
    if (lVar1 != -1) {
      func_0x000107271624(param_1 + 0x20,param_2);
    }
  }
  func_0x000107270b00(&plStack_60);
  return;
}



/* Entry: 107397060; end: 107397097;  */

long FUN_107397060(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a9150);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107397098; end: 1073970a3;  */

undefined ** FUN_107397098(void)

{
  return &PTR_DAT_1109a9150;
}



/* Entry: 1073970a4; end: 1073970c7;  */

void FUN_1073970a4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000107397198();
  *param_1 = extraout_x8;
  FUN_10739659c(param_1 + 1);
  return;
}



/* Entry: 1073970c8; end: 10739712b;  */

void FUN_1073970c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x000107397198();
  *param_1 = extraout_x8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107397154();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_2[2];
  func_0x0001072715c0(unaff_x19 + 0x20,param_2 + 3);
  return;
}



/* Entry: 10739712c; end: 10739721b;  */

void FUN_10739712c(void)

{
  return;
}



/* Entry: 10739721c; end: 1073972af;  */

undefined8 *
FUN_10739721c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109a9170;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_4;
  func_0x00010726ed14(param_1 + 6);
  param_1[8] = param_1;
  return param_1;
}



/* Entry: 1073972b0; end: 107398103;  */

undefined8 FUN_1073972b0(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  undefined8 *puVar14;
  undefined8 extraout_x8_00;
  ulong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  float fVar24;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  long *plStack_580;
  long **pplStack_578;
  undefined4 uStack_570;
  ulong uStack_560;
  undefined8 uStack_558;
  char cStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 uStack_520;
  undefined1 auStack_518 [24];
  char cStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  long alStack_4e0 [2];
  long lStack_4d0;
  undefined8 *puStack_4c8;
  long *plStack_4c0;
  undefined8 *puStack_4b8;
  long *plStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  char cStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  long lStack_440;
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [64];
  undefined1 auStack_3d8 [56];
  undefined1 auStack_3a0 [64];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  char cStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  char cStack_2e8;
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [56];
  undefined1 auStack_268 [56];
  long *plStack_230;
  long **pplStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined4 uStack_1ef;
  undefined3 uStack_1eb;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined3 uStack_1e3;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [40];
  undefined1 auStack_198 [56];
  long *plStack_160;
  undefined8 *puStack_158;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  byte bStack_d9;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined8 uStack_78;
  
  func_0x00010739a3b8();
  uVar7 = param_2 == 0x15;
  uStack_78 = extraout_x8;
  if (((bool)uVar7) && (param_4 = (undefined8 *)*param_4, (*(byte *)(param_4 + 4) & 1) != 0)) {
    uVar21 = 0;
    uVar7 = ABS((double)*(float *)((long)param_4 + 0x1c)) == 1.79769313486232e+308;
    if (((ulong)ABS((double)*(float *)((long)param_4 + 0x1c)) < 0x7ff0000000000000) &&
       (uVar7 = ABS(*(float *)(param_4 + 3)) == 90.0, ABS(*(float *)(param_4 + 3)) <= 90.0)) {
      func_0x00010739a554(&uStack_4f8);
      uStack_4e8 = 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_f0,param_4 + 9);
      if (-1 < (char)bStack_d9) {
        uStack_e8 = (ulong)bStack_d9;
      }
      if (uStack_e8 == 0) {
        auStack_518[0] = 0;
        cStack_500 = '\0';
      }
      else {
        func_0x0001002a82b4(auStack_518,auStack_f0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
      uVar7 = cStack_500 == '\x01';
      if ((bool)uVar7) {
        puVar13 = &uStack_b0;
        func_0x000104c2fe00(puVar13,param_4 + 0xc);
        func_0x000104c2d614();
        if (((ulong)puVar13 & 1) == 0) {
          func_0x00010729d1b0(auStack_f0,&uStack_b0);
        }
        else {
          auStack_f0[0] = 0;
          cStack_b8 = '\0';
        }
        func_0x00010739a424();
        uVar7 = cStack_b8 == '\x01';
        if ((bool)uVar7) {
          func_0x000107278b70(&plStack_160,param_4 + 1);
          uStack_538 = 0;
          uStack_540 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          uStack_520 = 0x3f800000;
          lVar19 = *plStack_160;
          lVar2 = plStack_160[1];
          puStack_128 = &uStack_540;
          uStack_120 = 0;
          for (; lVar19 != lVar2; lVar19 = lVar19 + 0x38) {
            func_0x000104c2fe00(&uStack_b0,lVar19);
            func_0x0001072f7ab8(&puStack_128,&uStack_b0);
            func_0x00010739a424();
          }
          func_0x00010726b09c(&plStack_160);
          func_0x0001072ab9cc(&uStack_560,param_3);
          func_0x000104c2fe00(&puStack_128,param_4 + 0x15);
          uVar21 = *(undefined8 *)((long)param_4 + 0x24);
          uVar22 = *(undefined8 *)((long)param_4 + 0x2c);
          func_0x000107268464(&plStack_160,param_4 + 7);
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
          uStack_90 = 0x3f800000;
          piVar3 = (int *)plStack_160[1];
          for (piVar10 = (int *)*plStack_160; uVar7 = piVar10 == piVar3, !(bool)uVar7;
              piVar10 = piVar10 + 0x10) {
            if (*piVar10 == 2) {
              piVar9 = piVar10;
              func_0x000104c2d9dc(piVar10);
              FUN_107373114(&uStack_b0,piVar9);
            }
          }
          if (lStack_98 == 0) {
            uStack_570 = 1;
          }
          else {
            FUN_10737efc8(&plStack_230,&uStack_b0);
            pplStack_578 = pplStack_228;
            plStack_580 = plStack_230;
            pplStack_228 = (long **)0x0;
            plStack_230 = (long *)0x0;
            func_0x000107283194(&plStack_230);
            uStack_570 = 2;
          }
          func_0x0001072981bc(&uStack_b0);
          func_0x000104c33108(&plStack_160);
          puVar13 = param_4 + 0x13;
          func_0x000107268400(alStack_4e0);
          puStack_148 = (undefined8 *)0x0;
          plStack_150 = (long *)0x0;
          puStack_158 = (undefined8 *)0x0;
          plStack_160 = (long *)0x0;
          uStack_140 = 0x3f800000;
          func_0x000104c2dd8c();
          lStack_4d0 = alStack_4e0[0];
          puVar11 = puStack_148;
          while (puStack_4c8 = puVar13, puStack_148 = puVar11, lStack_4d0 != 0) {
            lStack_4a0 = 0;
            lStack_498 = 0;
            piVar10 = (int *)(puVar13 + 7);
            plStack_4a8 = &lStack_4a0;
            if (*piVar10 == 2) {
              func_0x000104c2d9dc();
              func_0x00010724ef84(&uStack_b0);
              puVar11 = &uStack_b0;
              FUN_107398300();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
              if ((ulong)puVar11 >> 0x20 != 0) {
                FUN_107398328(&plStack_4a8,puVar11);
              }
            }
            else if (*piVar10 == 0) {
              FUN_1073982a4();
              func_0x000107268464(&plStack_230,piVar10);
              piVar3 = (int *)plStack_230[1];
              for (piVar10 = (int *)*plStack_230; piVar10 != piVar3; piVar10 = piVar10 + 0x10) {
                if (*piVar10 == 2) {
                  func_0x000104c2d9dc(piVar10);
                  func_0x00010724ef84(&uStack_b0);
                  param_4 = &uStack_b0;
                  FUN_107398300();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
                  if ((ulong)param_4 >> 0x20 != 0) {
                    FUN_107398328(&plStack_4a8,param_4);
                  }
                }
              }
              func_0x000104c33108(&plStack_230);
            }
            lVar19 = lStack_498;
            if (lStack_498 == 0) {
              FUN_107398484(&plStack_4c0);
            }
            else {
              uStack_a8 = 1;
              puVar11 = (undefined8 *)0x38;
              __Znwm();
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = &PTR_FUN_1109a91b0;
              plStack_4c0 = puVar11 + 3;
              *plStack_4c0 = (long)plStack_4a8;
              puVar11[4] = lStack_4a0;
              puVar11[5] = lVar19;
              *(undefined8 **)(lStack_4a0 + 0x10) = puVar11 + 4;
              lStack_4a0 = 0;
              lStack_498 = 0;
              *(undefined4 *)(puVar11 + 6) = 0;
              uStack_a0 = 0;
              puStack_4b8 = puVar11;
              plStack_4a8 = &lStack_4a0;
              FUN_10739856c(&uStack_b0);
            }
            puVar11 = &uStack_b0;
            func_0x000104c2fe00(puVar11,puVar13);
            func_0x000104c2fe38();
            puVar13 = puStack_158;
            if (puStack_158 != (undefined8 *)0x0) {
              uVar23 = (long)puStack_158 - 1;
              if (((ulong)puStack_158 & uVar23) == 0) {
                param_4 = (undefined8 *)(uVar23 & (ulong)puVar11);
              }
              else {
                param_4 = puVar11;
                if (puStack_158 <= puVar11) {
                  uVar15 = 0;
                  if (puStack_158 != (undefined8 *)0x0) {
                    uVar15 = (ulong)puVar11 / (ulong)puStack_158;
                  }
                  param_4 = (undefined8 *)((long)puVar11 - uVar15 * (long)puStack_158);
                }
              }
              plVar18 = (long *)plStack_160[(long)param_4];
              if (plVar18 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar18 = (long *)*plVar18;
                    if (plVar18 == (long *)0x0) goto LAB_107397758;
                    puVar14 = (undefined8 *)plVar18[1];
                    uVar7 = puVar14 == puVar11;
                    if (!(bool)uVar7) break;
                    plVar17 = plVar18 + 2;
                    func_0x000104c32db4(plVar17,&uStack_b0);
                    if (((ulong)plVar17 & 1) != 0) goto LAB_107397a04;
                  }
                  if (((ulong)puVar13 & uVar23) == 0) {
                    puVar14 = (undefined8 *)((ulong)puVar14 & uVar23);
                  }
                  else if (puVar13 <= puVar14) {
                    uVar15 = 0;
                    if (puVar13 != (undefined8 *)0x0) {
                      uVar15 = (ulong)puVar14 / (ulong)puVar13;
                    }
                    puVar14 = (undefined8 *)((long)puVar14 - uVar15 * (long)puVar13);
                  }
                } while (puVar14 == param_4);
              }
            }
LAB_107397758:
            plVar18 = (long *)0x58;
            __Znwm();
            uStack_220 = 0;
            *plVar18 = 0;
            plVar18[1] = (long)puVar11;
            plStack_230 = plVar18;
            pplStack_228 = &plStack_150;
            func_0x00010739a5a0(plVar18 + 2);
            FUN_107398484(plVar18 + 9);
            uStack_220 = CONCAT71(uStack_220._1_7_,1);
            fVar24 = (float)((long)puStack_148 + 1);
            if ((puVar13 == (undefined8 *)0x0) ||
               (uVar7 = (float)uStack_140 * (float)puVar13 == fVar24,
               (float)uStack_140 * (float)puVar13 < fVar24)) {
              uVar23 = 1;
              if ((undefined8 *)0x2 < puVar13) {
                uVar23 = (ulong)(((ulong)puVar13 & (long)puVar13 - 1U) != 0);
              }
              puVar13 = (undefined8 *)(uVar23 | (long)puVar13 << 1);
              if (puVar13 <= (undefined8 *)(long)(fVar24 / (float)uStack_140)) {
                puVar13 = (undefined8 *)(long)(fVar24 / (float)uStack_140);
              }
              if ((long)puVar13 - 1U == 0) {
                puVar13 = (undefined8 *)0x2;
              }
              else if (((ulong)puVar13 & (long)puVar13 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              puVar14 = puStack_158;
              if (puStack_158 < puVar13) {
LAB_107397804:
                if ((ulong)puVar13 >> 0x3d != 0) goto LAB_107397ea4;
                lVar19 = (long)puVar13 << 3;
                __Znwm(lVar19);
                FUN_107398630(&plStack_160,lVar19);
                for (puVar14 = (undefined8 *)0x0; puVar13 != puVar14;
                    puVar14 = (undefined8 *)((long)puVar14 + 1)) {
                  plStack_160[(long)puVar14] = 0;
                }
                puStack_158 = puVar13;
                if (plStack_150 != (long *)0x0) {
                  puVar14 = (undefined8 *)plStack_150[1];
                  uVar15 = (long)puVar13 - 1;
                  uVar23 = 0;
                  if (puVar13 != (undefined8 *)0x0) {
                    uVar23 = (ulong)puVar14 / (ulong)puVar13;
                  }
                  puVar12 = puVar14;
                  if (puVar13 <= puVar14) {
                    puVar12 = (undefined8 *)((long)puVar14 - uVar23 * (long)puVar13);
                  }
                  if (((ulong)puVar13 & uVar15) == 0) {
                    puVar12 = (undefined8 *)((ulong)puVar14 & uVar15);
                  }
                  plStack_160[(long)puVar12] = (long)&plStack_150;
                  plVar17 = plStack_150;
                  while (plVar16 = plVar17, plVar17 = (long *)*plVar16, plVar17 != (long *)0x0) {
                    puVar14 = (undefined8 *)plVar17[1];
                    if (((ulong)puVar13 & uVar15) == 0) {
                      puVar14 = (undefined8 *)((ulong)puVar14 & uVar15);
                    }
                    else if (puVar13 <= puVar14) {
                      uVar23 = 0;
                      if (puVar13 != (undefined8 *)0x0) {
                        uVar23 = (ulong)puVar14 / (ulong)puVar13;
                      }
                      puVar14 = (undefined8 *)((long)puVar14 - uVar23 * (long)puVar13);
                    }
                    if (puVar14 != puVar12) {
                      if (plStack_160[(long)puVar14] == 0) {
                        plStack_160[(long)puVar14] = (long)plVar16;
                        puVar12 = puVar14;
                      }
                      else {
                        *plVar16 = *plVar17;
                        *plVar17 = *(long *)plStack_160[(long)puVar14];
                        *(long **)plStack_160[(long)puVar14] = plVar17;
                        plVar17 = plVar16;
                      }
                    }
                  }
                }
              }
              else if (puVar13 < puStack_158) {
                puVar12 = (undefined8 *)(long)((float)puStack_148 / (float)uStack_140);
                if ((puStack_158 < (undefined8 *)0x3) ||
                   (((ulong)puStack_158 & (long)puStack_158 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((undefined8 *)0x1 < puVar12) {
                  puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
                }
                if (puVar13 <= puVar12) {
                  puVar13 = puVar12;
                }
                if (puVar13 < puVar14) {
                  if (puVar13 != (undefined8 *)0x0) goto LAB_107397804;
                  FUN_107398630(&plStack_160,0);
                  puStack_158 = (undefined8 *)0x0;
                }
              }
              puVar13 = puStack_158;
              if (((ulong)puStack_158 & (long)puStack_158 - 1U) == 0) {
                uVar7 = true;
                param_4 = (undefined8 *)((long)puStack_158 - 1U & (ulong)puVar11);
              }
              else {
                uVar7 = puVar11 == puStack_158;
                param_4 = puVar11;
                if (puStack_158 <= puVar11) {
                  uVar23 = 0;
                  if (puStack_158 != (undefined8 *)0x0) {
                    uVar23 = (ulong)puVar11 / (ulong)puStack_158;
                  }
                  param_4 = (undefined8 *)((long)puVar11 - uVar23 * (long)puStack_158);
                }
              }
            }
            plVar17 = (long *)plStack_160[(long)param_4];
            if (plVar17 == (long *)0x0) {
              *plVar18 = (long)plStack_150;
              plStack_160[(long)param_4] = (long)&plStack_150;
              plStack_150 = plVar18;
              if (*plVar18 != 0) {
                puVar11 = *(undefined8 **)(*plVar18 + 8);
                if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
                  puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar13 - 1U);
                  uVar7 = true;
                }
                else {
                  uVar7 = puVar11 == puVar13;
                  if (puVar13 <= puVar11) {
                    uVar23 = 0;
                    if (puVar13 != (undefined8 *)0x0) {
                      uVar23 = (ulong)puVar11 / (ulong)puVar13;
                    }
                    puVar11 = (undefined8 *)((long)puVar11 - uVar23 * (long)puVar13);
                  }
                }
                plStack_160[(long)puVar11] = (long)plVar18;
              }
            }
            else {
              *plVar18 = *plVar17;
              *plVar17 = (long)plVar18;
            }
            plStack_230 = (long *)0x0;
            puStack_148 = (undefined8 *)((long)puStack_148 + 1);
            func_0x0001073985ec(&plStack_230);
LAB_107397a04:
            puVar13 = puStack_4b8;
            plVar17 = plStack_4c0;
            plStack_4c0 = (long *)0x0;
            puStack_4b8 = (undefined8 *)0x0;
            uStack_490 = 0;
            uStack_488 = 0;
            pplStack_228 = (long **)plVar18[10];
            plStack_230 = (long *)plVar18[9];
            plVar18[10] = (long)puVar13;
            plVar18[9] = (long)plVar17;
            FUN_1073985c4(&plStack_230);
            FUN_1073985c4(&uStack_490);
            func_0x00010739a424();
            FUN_1073983d8(&plStack_4c0);
            func_0x000107398670(lStack_4a0);
            func_0x000104c2de10(&lStack_4d0);
            puVar13 = puStack_4c8;
            puVar11 = puStack_148;
          }
          if (puVar11 == (undefined8 *)0x0) {
            if ((bRam00000001136ca348 & 1) == 0) {
              iVar8 = 0x136ca348;
              ___cxa_guard_acquire();
              if (iVar8 != 0) {
                uStack_a8 = 1;
                puVar13 = (undefined8 *)0x48;
                __Znwm();
                puVar13[1] = 0;
                puVar13[2] = 0;
                *puVar13 = &PTR_FUN_1109a9200;
                puVar13[8] = 0;
                puVar13[7] = 0;
                puRam00000001136ca338 = puVar13 + 3;
                puVar13[4] = 0;
                *puRam00000001136ca338 = 0;
                puVar13[6] = 0;
                puVar13[5] = 0;
                *(undefined4 *)(puVar13 + 7) = 0x3f800000;
                uStack_a0 = 0;
                puRam00000001136ca340 = puVar13;
                func_0x0001073986a8(&uStack_b0);
                ___cxa_guard_release(0x1136ca348);
              }
            }
            puVar14 = puRam00000001136ca340;
            puVar13 = puRam00000001136ca338;
            puStack_590 = puRam00000001136ca338;
            puStack_588 = puRam00000001136ca340;
            if (puRam00000001136ca340 != (undefined8 *)0x0) {
              do {
                func_0x00010739a3a8();
              } while (extraout_w10 != 0);
            }
          }
          else {
            uStack_a8 = 1;
            puVar14 = (undefined8 *)0x48;
            __Znwm();
            puVar12 = puStack_158;
            plVar18 = plStack_160;
            puVar14[1] = 0;
            puVar14[2] = 0;
            *puVar14 = &PTR_FUN_1109a9200;
            puVar13 = puVar14 + 3;
            *puVar13 = plStack_160;
            puStack_158 = (undefined8 *)0x0;
            plStack_160 = (long *)0x0;
            puVar14[4] = puVar12;
            puVar14[5] = plStack_150;
            puVar14[6] = puVar11;
            *(float *)(puVar14 + 7) = (float)uStack_140;
            puVar11 = (undefined8 *)plStack_150[1];
            uVar23 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar23 = (ulong)puVar11 / (ulong)puVar12;
            }
            puVar1 = puVar11;
            if (puVar12 <= puVar11) {
              puVar1 = (undefined8 *)((long)puVar11 - uVar23 * (long)puVar12);
            }
            uVar7 = ((ulong)puVar12 & (long)puVar12 - 1U) == 0;
            if ((bool)uVar7) {
              puVar1 = (undefined8 *)((ulong)puVar11 & (long)puVar12 - 1U);
            }
            plVar18[(long)puVar1] = (long)(puVar14 + 5);
            plStack_150 = (long *)0x0;
            puStack_148 = (undefined8 *)0x0;
            *(undefined4 *)(puVar14 + 8) = 0;
            uStack_a0 = 0;
            puStack_590 = puVar13;
            puStack_588 = puVar14;
            func_0x0001073986a8(&uStack_b0);
          }
          FUN_107398250(&plStack_160);
          func_0x000104c335c0(alStack_4e0);
          if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
            if (cStack_550 == '\x01') {
              lVar19 = *(long *)(uStack_560 + 0x30);
              func_0x000100060964(&plStack_160,&UNK_10f4093dc);
              func_0x0001072d78b4(&uStack_b0,lVar19 + 0x128,&plStack_160);
              func_0x000104c2f714(&plStack_160);
            }
            else {
              func_0x000100060964(&uStack_b0,&UNK_10f40b218);
            }
            uVar20 = *(undefined8 *)(param_1 + 0x18);
            uStack_1f8 = uStack_4f0;
            uStack_200 = uStack_4f8;
            uStack_1f0 = uStack_4e8;
            uStack_1e8 = (undefined4)uVar21;
            uStack_1e4 = (undefined1)((ulong)uVar21 >> 0x20);
            uStack_1e0 = (undefined4)uVar22;
            uStack_1dc = (undefined1)((ulong)uVar22 >> 0x20);
            lStack_208 = param_1;
            func_0x00010729969c(auStack_1d8,&plStack_580);
            func_0x000107298994(auStack_1c0,&uStack_540);
            func_0x00010739a5a0(auStack_198);
            puStack_148 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0xb0;
            __Znwm();
            *puVar11 = &PTR_SUB_1109a9250;
            puVar11[2] = uStack_200;
            puVar11[1] = lStack_208;
            puVar11[4] = CONCAT35(uStack_1eb,CONCAT41(uStack_1ef,uStack_1f0));
            puVar11[3] = uStack_1f8;
            *(ulong *)((long)puVar11 + 0x2d) = CONCAT17(uStack_1dc,CONCAT43(uStack_1e0,uStack_1e3));
            *(ulong *)((long)puVar11 + 0x25) = CONCAT17(uStack_1e4,CONCAT43(uStack_1e8,uStack_1eb));
            func_0x00010729ba98(puVar11 + 7,auStack_1d8);
            func_0x00010729881c(puVar11 + 10,auStack_1c0);
            func_0x000104c318bc(puVar11 + 0xf,auStack_198);
            uStack_480 = uStack_480 & 0xffffffffffffff00;
            cStack_470 = '\0';
            if (cStack_550 == '\x01') {
              uStack_478 = uStack_558;
              uStack_480 = uStack_560;
              uStack_560 = 0;
              uStack_558 = 0;
              cStack_470 = cStack_550;
            }
            uStack_460 = uStack_4f0;
            uStack_468 = uStack_4f8;
            uStack_458 = uStack_4e8;
            puStack_450 = puVar13;
            puStack_448 = puVar14;
            puStack_148 = puVar11;
            if (puVar14 != (undefined8 *)0x0) {
              do {
                func_0x00010739a3a8();
              } while (extraout_w10_00 != 0);
            }
            if (puStack_450 != (undefined8 *)0x0) {
              piVar10 = (int *)(puStack_450 + 5);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar5) {
                  *piVar10 = *piVar10 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lStack_440 = param_1;
            func_0x00010028af84(auStack_438,auStack_518);
            func_0x000107263b58(auStack_418,auStack_f0);
            func_0x000104c2fe00(auStack_3d8,&puStack_128);
            func_0x00010739a5a0(auStack_3a0);
            uStack_358 = *(undefined8 *)(param_1 + 0x38);
            uStack_360 = *(undefined8 *)(param_1 + 0x30);
            if (*(long *)(param_1 + 0x38) != 0) {
              do {
                func_0x00010739a3a8();
              } while (extraout_w10_01 != 0);
            }
            uStack_350 = *(undefined8 *)(param_1 + 0x40);
            uStack_490 = 0;
            uStack_488 = 0;
            plStack_4a8 = (long *)0x0;
            lStack_4a0 = 0;
            func_0x00010725b1d4(&plStack_4a8);
            func_0x00010725b1d4(&uStack_490);
            FUN_107398700(&uStack_348,&uStack_480);
            lStack_218 = 0;
            puVar13 = (undefined8 *)0x138;
            __Znwm();
            func_0x00010739a50c();
            *puVar13 = extraout_x8_00;
            puVar13[2] = uStack_358;
            puVar13[1] = uStack_360;
            uStack_360 = 0;
            uStack_358 = 0;
            puVar13[3] = uStack_350;
            *(undefined1 *)(puVar13 + 4) = 0;
            *(undefined1 *)(puVar13 + 6) = 0;
            if (cStack_338 == '\x01') {
              *(undefined8 *)(param_1 + 0x28) = uStack_340;
              *(undefined8 *)(param_1 + 0x20) = uStack_348;
              uStack_348 = 0;
              uStack_340 = 0;
              *(undefined1 *)(param_1 + 0x30) = 1;
            }
            *(undefined1 *)(param_1 + 0x68) = 0;
            *(undefined8 *)(param_1 + 0x48) = uStack_320;
            *(undefined8 *)(param_1 + 0x40) = uStack_328;
            *(undefined8 *)(param_1 + 0x38) = uStack_330;
            *(undefined8 *)(param_1 + 0x58) = uStack_310;
            *(undefined8 *)(param_1 + 0x50) = uStack_318;
            uStack_318 = 0;
            uStack_310 = 0;
            *(undefined8 *)(param_1 + 0x60) = uStack_308;
            *(undefined1 *)(param_1 + 0x80) = 0;
            uVar7 = cStack_2e8 == '\x01';
            if ((bool)uVar7) {
              *(undefined8 *)(param_1 + 0x70) = uStack_2f8;
              *(undefined8 *)(param_1 + 0x68) = uStack_300;
              *(undefined8 *)(param_1 + 0x78) = uStack_2f0;
              uStack_2f0 = 0;
              uStack_300 = 0;
              uStack_2f8 = 0;
              *(undefined1 *)(param_1 + 0x80) = 1;
            }
            func_0x0001072649c8(param_1 + 0x88,auStack_2e0);
            func_0x000104c318bc(param_1 + 200,auStack_2a0);
            func_0x000104c318bc(param_1 + 0x100,auStack_268);
            lStack_218 = param_1;
            func_0x0001072f5bb4(uVar20,&plStack_160,&plStack_230);
            func_0x0001072f491c(&plStack_230);
            FUN_107398194(&uStack_360);
            func_0x0001073981bc(&uStack_480);
            func_0x0001072f7f14(&plStack_160);
            func_0x000107398204(&lStack_208);
            func_0x00010739a424();
          }
          FUN_107398104(&puStack_590);
          func_0x000107299204(&plStack_580);
          func_0x000104c2f714(&puStack_128);
          func_0x000107279298(&uStack_560);
          func_0x00010739a528();
          uVar21 = 5;
        }
        else {
          uVar21 = 0;
        }
        func_0x00010724b3d8(auStack_f0);
      }
      else {
        uVar21 = 0;
      }
      func_0x0001001148fc(auStack_518);
    }
  }
  else {
    uVar21 = 0;
  }
  func_0x00010739a394(uStack_78);
  if ((bool)uVar7) {
    return uVar21;
  }
  ___stack_chk_fail();
LAB_107397ea4:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x107397eac);
  (*pcVar6)();
}



/* Entry: 107398104; end: 107398193;  */

long * FUN_107398104(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long lStack_30;
  long lStack_28;
  
  bVar5 = false;
  if (param_1[1] != 0) {
    bVar5 = *(long *)(param_1[1] + 8) == 0;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar4 = pcRam00000001138369a8;
  if ((bVar5) && (pcRam00000001138369a8 != (code *)0x0)) {
    lStack_28 = param_1[1];
    lStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(&lStack_30);
    func_0x0001000df524(&lStack_30);
  }
  if (param_1[1] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107398194; end: 107398237;  */

undefined8 FUN_107398194(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001073981bc(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107398238; end: 10739823b;  */

undefined8 * FUN_107398238(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a9170;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010725b6e0(param_1 + 3);
  func_0x00010726eeb8(param_1 + 1);
  return param_1;
}



/* Entry: 10739823c; end: 10739824f;  */

void FUN_10739823c(void)

{
  FUN_1073987d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107398250; end: 1073982a3;  */

long * FUN_107398250(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_107398648(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073982a4; end: 1073982ff;  */

mach_header * FUN_1073982a4(int *param_1)

{
  mach_header *pmVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    return (mach_header *)(param_1 + 2);
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c2dd4c();
  ___cxa_throw(uVar3,&PTR_DAT_1107eaec8,&DAT_104c2dd50);
  ___cxa_free_exception();
  iVar2 = (int)uVar3;
  func_0x00010739a42c();
  func_0x000100152bb8();
  pmVar1 = &MACH_HEADER;
  if (iVar2 == 0) {
    pmVar1 = (mach_header *)0x0;
  }
  return pmVar1;
}



/* Entry: 107398300; end: 107398327;  */

undefined8 FUN_107398300(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000100152bb8(param_1,&UNK_10f40b229);
  uVar1 = 0x100000000;
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107398328; end: 1073983d7;  */

void FUN_107398328(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_107398388:
      puVar1 = (undefined8 *)0x20;
      __Znwm();
      *(int *)((long)puVar1 + 0x1c) = param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, *(int *)((long)plVar3 + 0x1c) <= param_2) {
      if (param_2 <= *(int *)((long)plVar3 + 0x1c)) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_107398388;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 1073983d8; end: 10739845f;  */

void FUN_1073983d8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long lStack_30;
  long lStack_28;
  
  bVar5 = false;
  if (param_1[1] != 0) {
    bVar5 = *(long *)(param_1[1] + 8) == 0;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar4 = pcRam00000001138369a8;
  if ((bVar5) && (pcRam00000001138369a8 != (code *)0x0)) {
    lStack_28 = param_1[1];
    lStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar4)(&lStack_30);
    func_0x0001000df524(&lStack_30);
  }
  FUN_1073985c4(param_1);
  return;
}



/* Entry: 107398460; end: 107398483;  */

long FUN_107398460(long param_1)

{
  func_0x000107398670(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 107398484; end: 10739856b;  */

undefined8 * FUN_107398484(undefined8 *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010739a3b8();
  uStack_28 = extraout_x8;
  if ((bRam00000001136ca330 & 1) == 0) {
    iVar1 = 0x136ca330;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uStack_38 = 1;
      puVar2 = (undefined8 *)0x38;
      __Znwm();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_FUN_1109a91b0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[4] = 0;
      puRam00000001136ca320 = puVar2 + 3;
      *puRam00000001136ca320 = puVar2 + 4;
      uStack_30 = 0;
      puRam00000001136ca328 = puVar2;
      FUN_10739856c(auStack_40);
      ___cxa_guard_release(0x1136ca330);
    }
  }
  puVar2 = puRam00000001136ca328;
  *param_1 = puRam00000001136ca320;
  param_1[1] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10 != 0);
  }
  func_0x00010739a394(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = (undefined8 *)0x1136ca330;
    ___cxa_guard_abort();
    func_0x00010739a41c();
    if (puVar2[2] != 0) {
      __ZdlPv();
    }
    return puVar2;
  }
  return param_1;
}



/* Entry: 10739856c; end: 107398593;  */

long FUN_10739856c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107398594; end: 1073985a3;  */

void FUN_107398594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a91b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073985a4; end: 1073985b7;  */

void FUN_1073985a4(void)

{
  FUN_107398594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073985b8; end: 1073985c3;  */

long FUN_1073985b8(long param_1)

{
  func_0x000107398670(*(undefined8 *)(param_1 + 0x20));
  return param_1 + 0x18;
}



/* Entry: 1073985c4; end: 10739862f;  */

long FUN_1073985c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107398630; end: 107398647;  */

void FUN_107398630(long *param_1,long param_2)

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



/* Entry: 107398648; end: 1073986cf;  */

void FUN_107398648(long param_1)

{
  undefined1 uStack_21;
  
  FUN_1073983d8(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1073986d0; end: 1073986df;  */

void FUN_1073986d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a9200;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073986e0; end: 1073986f3;  */

void FUN_1073986e0(void)

{
  FUN_1073986d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073986f4; end: 1073986ff;  */

long * FUN_1073986f4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  plVar2 = (long *)*(long *)(param_1 + 0x28);
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    FUN_107398648(plVar2 + 2);
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 107398700; end: 1073987cf;  */

long FUN_107398700(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = param_1;
  func_0x0001072ab9cc();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  lVar6 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  *(long *)(lVar5 + 0x30) = lVar6;
  *(long *)(lVar5 + 0x38) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10 != 0);
    lVar6 = *(long *)(lVar5 + 0x30);
  }
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  func_0x00010028af84(param_1 + 0x48,param_2 + 0x48);
  func_0x000107263b58(param_1 + 0x68,param_2 + 0x68);
  func_0x000104c2fe00(param_1 + 0xa8,param_2 + 0xa8);
  func_0x000104c2fe00(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



/* Entry: 1073987d0; end: 107398853;  */

undefined8 * FUN_1073987d0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a9170;
  plVar1 = param_1 + 6;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010725b6e0(param_1 + 3);
  func_0x00010726eeb8(param_1 + 1);
  return param_1;
}



/* Entry: 107398854; end: 107398867;  */

void FUN_107398854(void)

{
  func_0x000107398828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107398868; end: 10739889f;  */

undefined8 FUN_107398868(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm(0xb0);
  FUN_107398ad4();
  return uVar1;
}



/* Entry: 1073988a0; end: 1073988c3;  */

undefined8 * FUN_1073988a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_1109a9250;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x25);
  *(undefined8 *)((long)param_2 + 0x2d) = *(undefined8 *)(param_1 + 0x2d);
  *(undefined8 *)((long)param_2 + 0x25) = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  func_0x00010729969c(param_2 + 7,param_1 + 0x38);
  func_0x000107298994(param_2 + 10,param_1 + 0x50);
  func_0x000104c2fe00(param_2 + 0xf,param_1 + 0x78);
  return param_2;
}



/* Entry: 1073988c4; end: 107398a9b;  */

void FUN_1073988c4(undefined8 param_1,double param_2,double param_3,long param_4,long *param_5)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  float *pfVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_260 [24];
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  undefined1 auStack_228 [144];
  undefined1 auStack_198 [16];
  undefined4 uStack_188;
  undefined1 uStack_180;
  undefined1 auStack_148 [176];
  undefined1 auStack_98 [48];
  undefined8 uStack_68;
  
  lVar3 = param_4;
  func_0x00010739a3b8();
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 8) + 0x28);
  lVar3 = lVar3 + 0x10;
  uStack_68 = extraout_x8;
  func_0x000107280b2c(lVar3);
  func_0x00010740ecd4(uVar6,lVar3);
  cVar1 = *(char *)(param_4 + 0x34);
  uVar2 = *(char *)(param_4 + 0x2c) == '\x01';
  if ((bool)uVar2) {
    pfVar4 = (float *)(param_4 + 0x28);
    dVar8 = param_2;
    dVar10 = param_3;
    func_0x00010726a954();
    fVar9 = SUB84(dVar10,0);
    fVar7 = SUB84(dVar8,0);
    fVar11 = *pfVar4;
    if (cVar1 == '\0') {
      func_0x00010726a954(param_4 + 0x28);
      func_0x00010739a49c();
      fVar7 = fVar7 * fVar9;
      goto LAB_107398988;
    }
  }
  else {
    if (cVar1 == '\0') {
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_5[2] + 0x524));
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_5[2] + 0x528));
      goto LAB_107398988;
    }
    dVar8 = param_2;
    dVar10 = param_3;
    func_0x00010726a954(param_4 + 0x30);
    fVar7 = SUB84(dVar10,0);
    fVar11 = SUB84(dVar8,0);
    func_0x00010739a49c();
    fVar11 = fVar11 / fVar7;
  }
  pfVar4 = (float *)(param_4 + 0x30);
  func_0x00010726a954();
  fVar7 = *pfVar4;
LAB_107398988:
  dStack_248 = param_2 - (double)(fVar11 * 0.5);
  dStack_240 = param_3 - (double)(fVar7 * 0.5);
  dStack_238 = param_2 + (double)(fVar11 * 0.5);
  dStack_230 = param_3 + (double)(fVar7 * 0.5);
  _bzero(auStack_228,0xe0);
  uStack_188 = 1;
  uStack_180 = 1;
  func_0x00010729969c(auStack_260,param_4 + 0x38);
  func_0x0001072991b0(auStack_198,auStack_260);
  func_0x0001072994b4(auStack_148,auStack_228);
  func_0x000107299204(auStack_260);
  func_0x0001072997a8(auStack_228);
  if (*(long *)(param_4 + 0x68) != 0) {
    func_0x000107299c44(auStack_98,param_4 + 0x50);
  }
  pdVar5 = &dStack_248;
  (**(code **)(*param_5 + 0x50))(param_1,param_5,pdVar5,auStack_148);
  func_0x0001072997a8();
  func_0x00010739a394(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072997a8(auStack_228);
  func_0x00010739a41c();
  func_0x00010739a598(pdVar5);
  func_0x00010739a4ec();
  return;
}



/* Entry: 107398a9c; end: 107398ac7;  */

void FUN_107398a9c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739a598(param_2,param_1,&PTR_DAT_1109a92b0);
  func_0x00010739a4ec();
  return;
}



/* Entry: 107398ac8; end: 107398ad3;  */

undefined ** FUN_107398ac8(void)

{
  return &PTR_DAT_1109a92b0;
}



/* Entry: 107398ad4; end: 107398b47;  */

undefined8 * FUN_107398ad4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_SUB_1109a9250;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x25);
  *(undefined8 *)((long)param_1 + 0x25) = uVar5;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  func_0x00010729969c(param_1 + 7,param_2 + 6);
  func_0x000107298994(param_1 + 10,param_2 + 9);
  func_0x000104c2fe00(param_1 + 0xf,param_2 + 0xe);
  return param_1;
}



/* Entry: 107398b48; end: 107398b6b;  */

void FUN_107398b48(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010739a50c();
  *param_1 = extraout_x8;
  FUN_107398194(param_1 + 1);
  return;
}



/* Entry: 107398b6c; end: 107398b7f;  */

void FUN_107398b6c(void)

{
  FUN_107398b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107398b80; end: 107398bb7;  */

undefined8 FUN_107398b80(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x138;
  __Znwm(0x138);
  FUN_1073992b8();
  return uVar1;
}



/* Entry: 107398bb8; end: 107398bdb;  */

void FUN_107398bb8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x00010739a50c();
  *param_2 = extraout_x8;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = puVar1[2];
  FUN_107398700(unaff_x19 + 0x20,puVar1 + 3);
  return;
}



/* Entry: 107398bdc; end: 10739927f;  */

void FUN_107398bdc(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  bool bVar2;
  int *piVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 auStack_288 [24];
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  int *piStack_258;
  int *piStack_250;
  long lStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [56];
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_100;
  undefined1 auStack_f8 [88];
  undefined1 uStack_a0;
  long *aplStack_98 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  lVar9 = param_1;
  puVar5 = param_2;
  func_0x00010739a3b8();
  uStack_80 = extraout_x8;
  func_0x00010726fc00(&plStack_148,lVar9 + 8);
  if (plStack_148 == (long *)0x0) {
LAB_107398c5c:
    func_0x00010739a4c0();
    plStack_2b0 = (long *)0x0;
    uStack_2a8 = (long *)0x0;
    plStack_148 = (long *)0x0;
    plStack_140 = (long *)0x0;
  }
  else {
    func_0x00010726fc3c();
    uStack_2a8 = plStack_140;
    plStack_2b0 = plStack_148;
    in_ZR = *plStack_148 == -1;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_107398c5c;
    }
    plStack_148 = (long *)0x0;
    plStack_140 = (long *)0x0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x0001072508cc(&uStack_1f0);
  }
  func_0x00010739a4c0();
  func_0x00010726fc00(&plStack_148,param_1 + 8);
  if (plStack_148 == (long *)0x0) {
    func_0x00010739a4c0();
    goto LAB_10739913c;
  }
  lVar9 = *plStack_148;
  func_0x00010739a4c0();
  in_ZR = 1;
  if (lVar9 == -1) goto LAB_10739913c;
  lVar10 = *(long *)(param_1 + 0x60);
  lVar9 = param_1 + 0x38;
  func_0x000107280b2c();
  lVar9 = *(long *)(lVar9 + 8);
  puVar12 = (undefined8 *)(param_1 + 0x38);
  func_0x000107280b2c();
  uStack_238 = *puVar12;
  lStack_240 = lVar9;
  func_0x0001072f40f4(&piStack_258,param_2);
  plStack_148 = &lStack_240;
  piVar7 = piStack_258;
  piVar3 = piStack_250;
  if (piStack_258 != piStack_250) {
    FUN_107399350(piStack_258,piStack_250,&plStack_148,
                  LZCOUNT(((long)piStack_250 - (long)piStack_258) / 0x1b0) << 1 ^ 0x7e,1);
    piVar7 = piStack_258;
    piVar3 = piStack_250;
  }
  for (; piVar7 != piVar3; piVar7 = piVar7 + 0x6c) {
    plVar18 = (long *)(*(long *)(piVar7 + 0x4a) + 0x10);
LAB_107398d20:
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) {
      plVar17 = *(long **)(param_1 + 0x50);
      uVar13 = plVar17[1];
      if ((uVar13 != 0) && (plVar17[3] != 0)) {
        uVar4 = (ulong)(plVar18 + 2);
        func_0x000104c2fe38();
        uVar15 = uVar13 - 1;
        if ((uVar13 & uVar15) == 0) {
          uVar11 = uVar4 & uVar15;
        }
        else {
          uVar11 = uVar4;
          if (uVar13 <= uVar4) {
            uVar11 = 0;
            if (uVar13 != 0) {
              uVar11 = uVar4 / uVar13;
            }
            uVar11 = uVar4 - uVar11 * uVar13;
          }
        }
        plVar17 = *(long **)(*plVar17 + uVar11 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_107398d20;
              uVar6 = plVar17[1];
              if (uVar6 == uVar4) break;
              if ((uVar13 & uVar15) == 0) {
                uVar6 = uVar6 & uVar15;
              }
              else if (uVar13 <= uVar6) {
                uVar1 = 0;
                if (uVar13 != 0) {
                  uVar1 = uVar6 / uVar13;
                }
                uVar6 = uVar6 - uVar1 * uVar13;
              }
              if (uVar6 != uVar11) goto LAB_107398d20;
            }
            lVar9 = (long)(plVar17 + 2);
            func_0x000104c32db4(lVar9,plVar18 + 2);
          } while ((int)lVar9 == 0);
          puVar16 = (undefined8 *)plVar17[9];
          puVar12 = (undefined8 *)*puVar16;
          while (puVar12 != puVar16 + 1) {
            if (*(int *)((long)puVar12 + 0x1c) == 0 && *piVar7 == 5) {
              FUN_107399f2c(lStack_240,uStack_238,&uStack_230,*(undefined8 *)(piVar7 + 2),
                            *(undefined8 *)(piVar7 + 4));
              if ((char)puStack_220 == '\x01') {
                func_0x00010739a554(puStack_228,CONCAT44(uStack_22c,uStack_230),&plStack_148);
                func_0x00010739a554(uStack_238,lStack_240,&uStack_1f0);
                plVar17 = plStack_148;
                func_0x0001072e941c(plStack_148,plStack_140,uStack_1f0,uStack_1e8);
                aplStack_98[0] = plVar17;
                func_0x0001072684ec(piVar7 + 8);
                lVar14 = *(long *)(piVar7 + 8);
                func_0x000100060964(&uStack_1f0,&UNK_10f40b229);
                uVar13 = 0;
                lVar9 = lVar14;
                func_0x000104c32bd8(lVar14);
                if ((uVar13 & 1) == 0) {
                  plStack_148 = (long *)CONCAT44(plStack_148._4_4_,3);
                  plStack_140 = aplStack_98[0];
                  func_0x000104c3302c(*(long *)(lVar14 + 8) + lVar9 * 0x78 + 0x38,&plStack_148);
                  func_0x00010739a55c();
                }
                else {
                  FUN_10739a1c0(*(long *)(lVar14 + 8) + lVar9 * 0x78,&uStack_1f0,aplStack_98);
                }
                func_0x00010739a590();
              }
            }
            func_0x00010002c7d4();
          }
        }
      }
      goto LAB_107398d20;
    }
  }
  lStack_270 = 0;
  lStack_268 = 0;
  uStack_260 = 0;
  func_0x0001072ac134(&lStack_270,((long)piStack_250 - (long)piStack_258) / 0x1b0);
  for (; piStack_258 != piStack_250; piStack_258 = piStack_258 + 0x6c) {
    func_0x000107885480(&plStack_148,piStack_258);
    func_0x0001072aad1c(&lStack_270,&plStack_148);
    func_0x00010739a55c();
  }
  puVar5 = (undefined4 *)(param_1 + 0x68);
  func_0x00010549026c(puVar5);
  func_0x00010725ffc4(param_1 + 0x88);
  func_0x00010724ef84(auStack_288);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010739a4d0();
    func_0x00010739a5b4();
    if (*(char *)(extraout_x8_00 + 0x160) != '\x01') goto LAB_107398fb4;
    func_0x00010739a4d0();
    func_0x00010739a5b4();
    func_0x000104c2fe00(&uStack_1f0,extraout_x8_01 + 0x60);
    func_0x00010739a4d0();
    func_0x00010739a5b4();
    func_0x000104c2fe00(auStack_1b8,extraout_x8_02 + 0x98);
    func_0x00010739a4d0();
    func_0x00010739a5b4();
    lVar9 = extraout_x8_03 + 0x128;
    func_0x00010725ffc4(lVar9);
    func_0x000104c2fe00(auStack_180,lVar9);
    FUN_107395e0c(&plStack_148,&uStack_1f0);
    bVar2 = true;
  }
  else {
LAB_107398fb4:
    bVar2 = false;
    plStack_148 = (long *)((ulong)plStack_148 & 0xffffffffffffff00);
    uStack_a0 = 0;
  }
  in_ZR = lStack_270 == lStack_268;
  if ((bool)in_ZR) {
    func_0x000107268c48(&puStack_2a0,&puStack_2a0);
  }
  else {
    func_0x000107268d50(aplStack_98,1);
    puVar12 = puStack_88;
    puStack_88[2] = 0;
    *puStack_88 = &PTR_DAT_110996660;
    puStack_88[1] = 0;
    func_0x0001072894e4(puStack_88 + 3,&lStack_270);
    puStack_298 = puStack_88;
    *(undefined4 *)(puVar12 + 6) = 0;
    puStack_88 = (undefined8 *)0x0;
    puStack_2a0 = puStack_298 + 3;
    func_0x000107268dc0(aplStack_98);
  }
  uStack_230 = 0;
  puStack_220 = puStack_298;
  puStack_228 = puStack_2a0;
  puStack_2a0 = (undefined8 *)0x0;
  puStack_298 = (undefined8 *)0x0;
  lVar9 = lVar10 + 8;
  FUN_10739a79c(lVar9,puVar5,auStack_288,&plStack_148,&uStack_230);
  func_0x000104c3323c(&uStack_230);
  func_0x000104c33108(&puStack_2a0);
  FUN_107395e64(&plStack_148);
  if (bVar2) {
    FUN_107395e84(&uStack_1f0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
  if ((int)lVar9 != 0) {
    uVar13 = param_1 + 200;
    func_0x000104c2d614();
    if ((uVar13 & 1) == 0) {
      uVar8 = *(undefined8 *)(lVar10 + 0x18);
      func_0x000104c2fe00(&plStack_148,param_1 + 200);
      func_0x0001072ab9cc(&uStack_110,param_1 + 0x20);
      func_0x000104c2fe00(auStack_f8,param_1 + 0x100);
      lStack_218 = 0;
      puVar12 = (undefined8 *)0x90;
      __Znwm();
      func_0x00010739a4fc();
      *puVar12 = extraout_x8_04;
      func_0x000104c318bc(puVar12 + 1,&plStack_148);
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x50) = 0;
      in_ZR = cStack_100 == '\x01';
      if ((bool)in_ZR) {
        *(undefined8 *)(param_1 + 0x48) = uStack_108;
        *(undefined8 *)(param_1 + 0x40) = uStack_110;
        uStack_110 = 0;
        uStack_108 = 0;
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
      func_0x000104c318bc(param_1 + 0x58,auStack_f8);
      puVar5 = &uStack_230;
      lStack_218 = param_1;
      func_0x000107292e94(uVar8,puVar5);
      func_0x000107283e00(&uStack_230);
      FUN_10739931c(&plStack_148);
    }
  }
  func_0x000107269124(&lStack_270);
  func_0x00010729d51c(&piStack_258);
LAB_10739913c:
  func_0x000107270b00();
  func_0x00010739a394(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107283e00(&uStack_230);
    FUN_10739931c(&plStack_148);
    func_0x000107269124(&lStack_270);
    func_0x00010729d51c(&piStack_258);
    func_0x000107270b00(&plStack_2b0);
    func_0x00010739a41c();
    func_0x00010739a598(puVar5);
    func_0x00010739a4ec();
    return;
  }
  return;
}



/* Entry: 107399280; end: 1073992ab;  */

void FUN_107399280(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739a598(param_2,param_1,&PTR_DAT_1109a93b0);
  func_0x00010739a4ec();
  return;
}



/* Entry: 1073992ac; end: 1073992b7;  */

undefined ** FUN_1073992ac(void)

{
  return &PTR_DAT_1109a93b0;
}



/* Entry: 1073992b8; end: 10739931b;  */

void FUN_1073992b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010739a50c();
  *param_1 = extraout_x8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010739a3a8();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_2[2];
  FUN_107398700(unaff_x19 + 0x20,param_2 + 3);
  return;
}



/* Entry: 10739931c; end: 10739934f;  */

long FUN_10739931c(long param_1)

{
  func_0x000104c2f714(param_1 + 0x50);
  func_0x000107279298(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107399350; end: 107399a67;  */

undefined1 (*) [16]
FUN_107399350(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  long *plVar9;
  undefined1 (*pauVar10) [16];
  undefined8 extraout_x8;
  ulong uVar11;
  undefined1 (*unaff_x20) [16];
  long lVar12;
  undefined1 (*pauVar13) [16];
  byte bVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dStack_440;
  double dStack_438;
  byte bStack_430;
  undefined1 (*pauStack_420) [16];
  undefined1 (*pauStack_418) [16];
  undefined1 (*pauStack_410) [16];
  undefined1 (*pauStack_408) [16];
  undefined1 *puStack_400;
  code *pcStack_3f8;
  undefined1 (*pauStack_3e8) [16];
  undefined1 (*pauStack_3e0) [16];
  undefined1 (*pauStack_3d8) [16];
  undefined1 auStack_3d0 [432];
  long alStack_220 [54];
  undefined8 uStack_70;
  
  pauVar5 = param_1;
  pauVar10 = param_3;
  pauStack_3d8 = param_2;
  func_0x00010739a3b8();
  uStack_70 = extraout_x8;
  do {
    pauVar13 = pauStack_3d8 + -0x1b;
    pauStack_3e0 = pauStack_3d8 + -0x36;
    pauStack_3e8 = pauStack_3d8 + -0x51;
LAB_1073993a8:
    uVar11 = (long)pauStack_3d8 - (long)param_1;
    uVar19 = (long)uVar11 / 0x1b0;
    uVar3 = uVar19 == 5;
    switch(uVar19) {
    case 0:
    case 1:
      goto LAB_1073999b0;
    case 2:
      func_0x00010739a464();
      func_0x00010739a4b8();
      if ((int)pauVar5 != 0) {
        pauVar5 = param_1;
        param_2 = pauVar13;
        FUN_10739a140();
      }
      goto LAB_1073999b0;
    case 3:
      param_2 = param_1 + 0x1b;
      pauVar5 = param_1;
      pauVar10 = pauVar13;
      func_0x00010739a45c();
      goto LAB_1073999b0;
    case 4:
      param_2 = param_1 + 0x1b;
      pauVar10 = param_1 + 0x36;
      pauVar5 = param_1;
      func_0x000107399c2c();
      goto LAB_1073999b0;
    case 5:
      param_2 = param_1 + 0x1b;
      pauVar10 = param_1 + 0x36;
      pauVar5 = param_1;
      func_0x000107399ca8();
      goto LAB_1073999b0;
    }
    uVar4 = uVar11 == 0x287f;
    if ((long)uVar11 < 0x2880) {
      if ((param_5 & 1) == 0) {
        func_0x00010739a5c0();
        uVar3 = uVar4;
        if (!(bool)uVar4) {
          while( true ) {
            unaff_x20 = param_1;
            param_1 = unaff_x20 + 0x1b;
            func_0x00010739a5c0();
            uVar3 = 1;
            if ((bool)uVar4) break;
            pauVar5 = param_3;
            param_2 = param_1;
            func_0x00010739a43c();
            if ((int)pauVar5 != 0) {
              func_0x00010739a444();
              do {
                pauVar5 = unaff_x20;
                pauVar8 = pauVar5 + 0x1b;
                func_0x00010729bf90(pauVar8,pauVar5);
                func_0x00010739a47c();
                func_0x00010739a43c();
                unaff_x20 = pauVar5 + -0x1b;
              } while (((ulong)pauVar8 & 1) != 0);
              param_2 = (undefined1 (*) [16])alStack_220;
              func_0x00010729bf90();
              func_0x00010739a434();
            }
          }
        }
        break;
      }
      func_0x00010739a5c0();
      uVar3 = 1;
      if ((bool)uVar4) break;
      unaff_x20 = (undefined1 (*) [16])0x0;
      pauVar10 = param_1;
      goto LAB_1073996d4;
    }
    if (param_4 == 0) {
      func_0x00010739a5c0();
      uVar3 = 1;
      if ((bool)uVar4) break;
      uVar15 = uVar19 - 2 >> 1;
      uVar11 = uVar15;
      goto LAB_107399760;
    }
    pauVar8 = param_1 + (uVar19 >> 1) * 0x1b;
    if (uVar11 < 0xd801) {
      pauVar10 = pauVar13;
      func_0x00010739a45c(pauVar8,param_1);
    }
    else {
      func_0x00010739a4e0();
      func_0x00010739a45c();
      pauVar5 = pauVar8 + -0x1b;
      func_0x00010739a45c(param_1 + 0x1b,pauVar5,pauStack_3e0);
      func_0x00010739a45c(param_1 + 0x36,pauVar8 + 0x1b,pauStack_3e8);
      pauVar10 = pauVar8 + 0x1b;
      func_0x00010739a45c(pauVar5,pauVar8);
      func_0x00010739a4e0();
      FUN_10739a140();
      pauVar8 = pauVar5;
    }
    param_4 = param_4 + -1;
    if ((param_5 & 1) == 0) {
      param_2 = param_1 + -0x1b;
      pauVar5 = param_3;
      func_0x00010739a4b8();
      pauVar8 = pauVar5;
      if (((ulong)pauVar5 & 1) != 0) goto LAB_107399458;
      func_0x00010739a444();
      func_0x00010739a47c();
      func_0x00010739a4c8();
      pauVar7 = pauStack_3d8;
      pauVar8 = param_1;
      if (((ulong)pauVar5 & 1) == 0) {
        do {
          pauVar8 = pauVar8 + 0x1b;
          if (pauVar7 <= pauVar8) break;
          func_0x00010739a3d0();
        } while ((int)pauVar5 == 0);
      }
      else {
        do {
          pauVar8 = pauVar8 + 0x1b;
          func_0x00010739a3d0();
        } while (((ulong)pauVar5 & 1) == 0);
      }
      pauVar16 = pauStack_3d8;
      if (pauVar8 < pauVar7) {
        do {
          pauVar7 = pauVar16 + -0x1b;
          func_0x00010739a47c();
          pauVar10 = pauVar7;
          FUN_107399a68();
          pauVar16 = pauVar7;
        } while (((ulong)pauVar5 & 1) != 0);
      }
      while (pauVar8 < pauVar7) {
        pauVar5 = pauVar8;
        param_2 = pauVar7;
        FUN_10739a140();
        do {
          pauVar8 = pauVar8 + 0x1b;
          func_0x00010739a3d0();
        } while ((int)pauVar5 == 0);
        do {
          pauVar7 = pauVar7 + -0x1b;
          func_0x00010739a47c();
          pauVar10 = pauVar7;
          FUN_107399a68();
        } while (((ulong)pauVar5 & 1) != 0);
      }
      unaff_x20 = pauVar8 + -0x1b;
      if (param_1 != unaff_x20) {
        func_0x00010739a4e0();
        func_0x00010729bf90();
      }
      func_0x00010739a530();
      func_0x00010739a434();
      param_1 = pauVar8;
      goto LAB_107399628;
    }
LAB_107399458:
    func_0x00010739a444();
    lVar2 = 0;
    do {
      lVar12 = lVar2;
      param_2 = (undefined1 (*) [16])(param_1[0x1b] + lVar12);
      func_0x00010739a490();
      FUN_107399a68();
      lVar2 = lVar12 + 0x1b0;
    } while (((ulong)pauVar8 & 1) != 0);
    pauVar10 = (undefined1 (*) [16])(param_1[0x1b] + lVar12);
    pauVar5 = pauStack_3d8;
    pauVar7 = pauVar10;
    if (lVar12 + 0x1b0 == 0x1b0) {
      do {
        pauVar16 = pauVar5;
        if (pauVar5 <= pauVar10) break;
        pauVar5 = pauVar5 + -0x1b;
        func_0x00010739a490();
        param_2 = pauVar5;
        FUN_107399a68();
        pauVar16 = pauVar5;
      } while (((ulong)pauVar8 & 1) == 0);
    }
    else {
      do {
        pauVar5 = pauVar5 + -0x1b;
        func_0x00010739a490();
        param_2 = pauVar5;
        FUN_107399a68();
        pauVar16 = pauVar5;
      } while ((int)pauVar8 == 0);
    }
    while (pauVar7 < pauVar5) {
      pauVar8 = pauVar7;
      FUN_10739a140(pauVar7,pauVar5);
      do {
        pauVar7 = pauVar7 + 0x1b;
        func_0x00010739a490();
        FUN_107399a68();
      } while (((ulong)pauVar8 & 1) != 0);
      do {
        pauVar5 = pauVar5 + -0x1b;
        func_0x00010739a490();
        param_2 = pauVar5;
        FUN_107399a68();
      } while (((ulong)pauVar8 & 1) == 0);
    }
    unaff_x20 = pauVar7 + -0x1b;
    if (param_1 != unaff_x20) {
      func_0x00010739a4e0();
      func_0x00010729bf90();
    }
    func_0x00010739a530();
    func_0x00010739a434();
    uVar3 = pauVar10 == pauVar16;
    pauVar5 = pauVar8;
    if (pauVar10 < pauVar16) goto LAB_107399554;
    func_0x00010739a4e0();
    FUN_107399d44();
    pauVar5 = pauVar7;
    param_2 = pauStack_3d8;
    pauVar10 = param_3;
    FUN_107399d44();
    if ((int)pauVar5 == 0) goto code_r0x000107399550;
    pauStack_3d8 = unaff_x20;
  } while (((ulong)pauVar8 & 1) == 0);
  goto LAB_1073999b0;
LAB_1073996d4:
  pauVar13 = pauVar10 + 0x1b;
  uVar3 = 1;
  if (pauVar13 == pauStack_3d8) goto LAB_1073999b0;
  func_0x00010739a464();
  FUN_107399a68();
  if ((int)pauVar5 != 0) {
    func_0x00010739a548();
    pauVar10 = unaff_x20;
    do {
      puVar6 = pauVar10[0x1b] + (long)*param_1;
      func_0x00010729bf90();
      pauVar5 = param_1;
      if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_107399730;
      func_0x00010739a47c();
      FUN_107399a68();
      pauVar10 = pauVar10 + -0x1b;
    } while (((ulong)puVar6 & 1) != 0);
    pauVar5 = (undefined1 (*) [16])(pauVar10[0x1b] + (long)*param_1);
LAB_107399730:
    param_2 = (undefined1 (*) [16])alStack_220;
    func_0x00010729bf90();
    func_0x00010739a434();
  }
  unaff_x20 = unaff_x20 + 0x1b;
  pauVar10 = pauVar13;
  goto LAB_1073996d4;
code_r0x000107399550:
  param_1 = pauVar7;
  if (((ulong)pauVar8 & 1) == 0) {
LAB_107399554:
    func_0x00010739a4e0();
    pauVar10 = param_3;
    FUN_107399350();
    param_1 = pauVar7;
LAB_107399628:
    param_5 = 0;
  }
  goto LAB_1073993a8;
LAB_107399760:
  do {
    if ((long)uVar11 <= (long)uVar15) {
      uVar18 = (uVar11 & 0x3fffffffffffffff) << 1 | 1;
      pauVar8 = param_1 + uVar18 * 0x1b;
      uVar1 = uVar11 * 2 + 2;
      pauVar13 = pauVar8;
      uVar17 = uVar18;
      if ((long)uVar1 < (long)uVar19) {
        func_0x00010739a3e0();
        pauVar13 = pauVar8 + 0x1b;
        uVar17 = uVar1;
        if ((int)pauVar5 == 0) {
          pauVar13 = pauVar8;
          uVar17 = uVar18;
        }
      }
      pauVar8 = param_1 + uVar11 * 0x1b;
      func_0x00010739a3e0();
      if (((ulong)pauVar5 & 1) == 0) {
        pauVar5 = (undefined1 (*) [16])alStack_220;
        func_0x00010729b464();
        do {
          func_0x00010739a584();
          if ((long)uVar15 < (long)uVar17) break;
          uVar18 = uVar17 << 1 | 1;
          pauVar10 = param_1 + uVar18 * 0x1b;
          uVar1 = uVar17 * 2 + 2;
          pauVar13 = pauVar10;
          uVar17 = uVar18;
          if ((long)uVar1 < (long)uVar19) {
            func_0x00010739a3e0();
            pauVar13 = pauVar10 + 0x1b;
            uVar17 = uVar1;
            if ((int)pauVar5 == 0) {
              pauVar13 = pauVar10;
              uVar17 = uVar18;
            }
          }
          pauVar10 = (undefined1 (*) [16])alStack_220;
          func_0x00010739a464();
          FUN_107399a68();
        } while ((int)pauVar5 == 0);
        func_0x00010739a53c();
        func_0x00010739a434();
        param_2 = pauVar8;
      }
    }
    uVar11 = uVar11 - 1;
  } while (-1 < (long)uVar11);
  while( true ) {
    unaff_x20 = (undefined1 (*) [16])(uVar19 - 2);
    uVar3 = unaff_x20 == (undefined1 (*) [16])0x0;
    if ((long)uVar19 < 2) break;
    puVar6 = auStack_3d0;
    func_0x00010729b464(puVar6,param_1);
    pauVar13 = param_1;
    uVar11 = 0;
    do {
      uVar1 = uVar11 << 1 | 1;
      uVar15 = uVar11 * 2 + 2;
      pauVar5 = pauVar13 + uVar11 * 0x1b + 0x1b;
      uVar18 = uVar1;
      if ((long)uVar15 < (long)uVar19) {
        func_0x00010739a464();
        func_0x00010739a564();
        pauVar5 = pauVar13 + uVar11 * 0x1b + 0x36;
        uVar18 = uVar15;
        if ((int)puVar6 == 0) {
          pauVar5 = pauVar13 + uVar11 * 0x1b + 0x1b;
          uVar18 = uVar1;
        }
      }
      pauVar13 = pauVar5;
      func_0x00010739a584();
      uVar11 = uVar18;
    } while ((long)uVar18 <= (long)((ulong)unaff_x20 >> 1));
    pauVar8 = pauStack_3d8 + -0x1b;
    if (pauVar13 == pauVar8) {
      param_2 = (undefined1 (*) [16])auStack_3d0;
      func_0x00010729bf90(pauVar13);
    }
    else {
      func_0x00010729bf90(pauVar13,pauVar8);
      param_2 = (undefined1 (*) [16])auStack_3d0;
      func_0x00010729bf90(pauVar8);
      uVar11 = (long)pauVar13 + (0x1b0 - (long)param_1);
      if (0x1b0 < (long)uVar11) {
        uVar11 = uVar11 / 0x1b0 - 2 >> 1;
        pauVar5 = param_3;
        param_2 = param_1 + uVar11 * 0x1b;
        func_0x00010739a4c8();
        if ((int)pauVar5 != 0) {
          func_0x00010739a548();
          pauVar5 = param_1 + uVar11 * 0x1b;
          do {
            pauVar16 = pauVar5;
            pauVar7 = pauVar13;
            param_2 = pauVar16;
            func_0x00010729bf90();
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            func_0x00010739a490();
            param_2 = param_1 + uVar11 * 0x1b;
            FUN_107399a68();
            pauVar5 = param_1 + uVar11 * 0x1b;
            pauVar13 = pauVar16;
          } while (((ulong)pauVar7 & 1) != 0);
          func_0x00010739a53c();
          func_0x00010739a434();
        }
      }
    }
    pauVar5 = (undefined1 (*) [16])auStack_3d0;
    pauStack_3d8 = pauVar8;
    func_0x00010729abec();
    uVar19 = uVar19 - 1;
  }
LAB_1073999b0:
  func_0x00010739a394(uStack_70);
  if ((bool)uVar3) {
    return pauVar5;
  }
  ___stack_chk_fail();
  plVar9 = alStack_220;
  func_0x00010729abec();
  func_0x00010739a41c();
  pcStack_3f8 = FUN_107399a68;
  pauStack_420 = pauVar13;
  pauStack_418 = param_1;
  pauStack_410 = unaff_x20;
  pauStack_408 = pauVar5;
  puStack_400 = &stack0xfffffffffffffff0;
  if (*(int *)*param_2 == 5) {
    func_0x000104c2d3f8();
    FUN_107399f2c(*(undefined8 *)*plVar9,((undefined8 *)*plVar9)[1],&dStack_440,
                  *(undefined8 *)*param_2,*(undefined8 *)(*param_2 + 8));
    auVar22._8_8_ = dStack_438;
    auVar22._0_8_ = dStack_440;
    bVar14 = bStack_430;
  }
  else if (*(int *)*param_2 == 6) {
    func_0x000104c2d3c0();
    auVar22 = *param_2;
    bVar14 = 1;
  }
  else {
    auVar22 = ZEXT216(0);
    bVar14 = 0;
  }
  if (*(int *)*pauVar10 == 5) {
    func_0x000104c2d3f8();
    FUN_107399f2c(*(undefined8 *)*plVar9,((undefined8 *)*plVar9)[1],&dStack_440,
                  *(undefined8 *)*pauVar10,*(undefined8 *)(*pauVar10 + 8));
LAB_107399b30:
    if ((bVar14 & bStack_430 & 1) != 0) {
      dVar23 = ((double *)*plVar9)[1];
      dVar21 = *(double *)*plVar9;
      dVar24 = dVar21 - auVar22._0_8_;
      dVar25 = dVar23 - auVar22._8_8_;
      dVar21 = dVar21 - dStack_440;
      dVar23 = dVar23 - dStack_438;
      uVar20 = -(uint)(dVar24 * dVar24 + dVar25 * dVar25 < dVar21 * dVar21 + dVar23 * dVar23);
      goto LAB_107399b70;
    }
  }
  else if (*(int *)*pauVar10 == 6) {
    func_0x000104c2d3c0();
    dStack_440 = *(double *)*pauVar10;
    dStack_438 = *(double *)(*pauVar10 + 8);
    bStack_430 = 1;
    goto LAB_107399b30;
  }
  uVar20 = 0;
LAB_107399b70:
  return (undefined1 (*) [16])(ulong)(uVar20 & 1);
}



/* Entry: 107399a68; end: 107399b87;  */

byte FUN_107399a68(long *param_1,undefined1 (*param_2) [16],double *param_3)

{
  byte bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_50;
  double dStack_48;
  byte bStack_40;
  
  if (*(int *)*param_2 == 5) {
    func_0x000104c2d3f8();
    FUN_107399f2c(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],&dStack_50,
                  *(undefined8 *)*param_2,*(undefined8 *)(*param_2 + 8));
    auVar3._8_8_ = dStack_48;
    auVar3._0_8_ = dStack_50;
    bVar1 = bStack_40;
  }
  else if (*(int *)*param_2 == 6) {
    func_0x000104c2d3c0();
    auVar3 = *param_2;
    bVar1 = 1;
  }
  else {
    auVar3 = ZEXT216(0);
    bVar1 = 0;
  }
  if (*(int *)param_3 == 5) {
    func_0x000104c2d3f8();
    FUN_107399f2c(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],&dStack_50,*param_3,param_3[1]
                 );
LAB_107399b30:
    if ((bVar1 & bStack_40 & 1) != 0) {
      dVar4 = ((double *)*param_1)[1];
      dVar2 = *(double *)*param_1;
      dVar5 = dVar2 - auVar3._0_8_;
      dVar6 = dVar4 - auVar3._8_8_;
      dVar2 = dVar2 - dStack_50;
      dVar4 = dVar4 - dStack_48;
      bVar1 = -(dVar5 * dVar5 + dVar6 * dVar6 < dVar2 * dVar2 + dVar4 * dVar4);
      goto LAB_107399b70;
    }
  }
  else if (*(int *)param_3 == 6) {
    func_0x000104c2d3c0();
    dStack_50 = *param_3;
    dStack_48 = param_3[1];
    bStack_40 = 1;
    goto LAB_107399b30;
  }
  bVar1 = 0;
LAB_107399b70:
  return bVar1 & 1;
}



/* Entry: 107399b88; end: 107399d43;  */

void FUN_107399b88(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_1e8 [424];
  
  uVar1 = param_4;
  puVar3 = param_3;
  func_0x00010739a4b8();
  uVar2 = param_4;
  func_0x00010739a488(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    if ((int)uVar2 == 0) {
      func_0x00010739a5cc();
      FUN_10739a140();
      func_0x00010739a488(param_4,param_3);
      if ((int)param_4 == 0) {
        return;
      }
    }
LAB_107399c1c:
    func_0x00010739a5a8();
    func_0x00010739a3b8();
    func_0x00010729b464(auStack_1e8,unaff_x20);
    func_0x00010729bf90(unaff_x20,unaff_x19);
    func_0x00010729bf90(unaff_x19,auStack_1e8);
    func_0x00010739a4d8();
    func_0x00010739a394(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010739a41c();
    func_0x000104c318bc();
    uVar4 = *puVar3;
    *(undefined4 *)(unaff_x19 + 0x38) = 3;
    *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
    return;
  }
  if ((int)uVar2 != 0) {
    FUN_10739a140(param_2,param_3);
    func_0x00010739a4b8(param_4,param_2);
    if ((int)param_4 != 0) {
      func_0x00010739a5cc();
      goto LAB_107399c1c;
    }
  }
  return;
}



/* Entry: 107399d44; end: 107399f2b;  */

void FUN_107399d44(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,double param_6,long param_7,double *param_8,double *param_9)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double adStack_208 [54];
  undefined8 uStack_58;
  
  lVar19 = param_7;
  pdVar7 = param_8;
  pdVar9 = param_9;
  func_0x00010739a3b8();
  lVar19 = ((long)pdVar7 - lVar19) / 0x1b0;
  uVar3 = lVar19 == 5;
  pdVar5 = (double *)0x1;
  uStack_58 = extraout_x8;
  switch(lVar19) {
  case 0:
  case 1:
    goto LAB_107399ed8;
  case 2:
    param_8 = param_8 + -0x36;
    pdVar7 = param_8;
    func_0x00010739a488();
    if ((int)param_9 != 0) {
      FUN_10739a140(param_7);
      pdVar7 = param_8;
    }
    break;
  case 3:
    pdVar9 = param_8 + -0x36;
    pdVar7 = (double *)(param_7 + 0x1b0);
    FUN_107399b88(param_7,pdVar7,pdVar9,param_9);
    break;
  case 4:
    pdVar7 = (double *)(param_7 + 0x1b0);
    pdVar9 = (double *)(param_7 + 0x360);
    func_0x000107399c2c(param_7,pdVar7,pdVar9,param_8 + -0x36,param_9);
    break;
  case 5:
    pdVar7 = (double *)(param_7 + 0x1b0);
    pdVar9 = (double *)(param_7 + 0x360);
    func_0x000107399ca8(param_7,pdVar7,pdVar9,param_7 + 0x510,param_8 + -0x36,param_9);
    break;
  default:
    pdVar9 = (double *)(param_7 + 0x360);
    pdVar7 = (double *)(param_7 + 0x1b0);
    FUN_107399b88(param_7,pdVar7,pdVar9,param_9);
    lVar19 = 0;
    iVar20 = 0;
    for (pdVar5 = (double *)(param_7 + 0x510); uVar3 = pdVar5 == param_8, !(bool)uVar3;
        pdVar5 = pdVar5 + 0x36) {
      pdVar6 = param_9;
      pdVar7 = pdVar5;
      func_0x00010739a564();
      if ((int)pdVar6 != 0) {
        func_0x00010729b464(adStack_208,pdVar5);
        lVar18 = lVar19;
        do {
          func_0x00010729bf90(param_7 + lVar18 + 0x510,param_7 + lVar18 + 0x360);
          lVar8 = param_7;
          if (lVar18 == -0x360) goto LAB_107399e94;
          pdVar9 = (double *)(param_7 + lVar18 + 0x1b0);
          pdVar7 = param_9;
          FUN_107399a68(param_9,adStack_208);
          lVar18 = lVar18 + -0x1b0;
        } while (((ulong)pdVar7 & 1) != 0);
        lVar8 = param_7 + lVar18 + 0x510;
LAB_107399e94:
        pdVar7 = adStack_208;
        func_0x00010729bf90(lVar8);
        iVar20 = iVar20 + 1;
        func_0x00010739a4d8();
        if (iVar20 == 8) {
          uVar3 = pdVar5 + 0x36 == param_8;
          pdVar5 = (double *)(ulong)(byte)uVar3;
          goto LAB_107399ed8;
        }
      }
      lVar19 = lVar19 + 0x1b0;
    }
  }
  pdVar5 = (double *)0x1;
LAB_107399ed8:
  func_0x00010739a394(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010739a4d8();
  func_0x00010739a41c();
  if (pdVar7 == pdVar9) {
    uVar3 = 0;
    *(undefined1 *)pdVar5 = 0;
    goto LAB_10739a138;
  }
  uVar13 = 0;
  uVar17 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar16 = 0;
  uVar11 = 0;
  bVar1 = false;
  bVar4 = false;
  dVar21 = *pdVar7;
  dVar22 = pdVar7[1];
  uVar15 = (long)pdVar9 - (long)pdVar7 >> 4;
  dVar23 = 1.79769313486232e+308;
  for (uVar12 = 0; uVar15 != uVar12; uVar12 = uVar12 + 1) {
    dVar25 = param_1 - *pdVar7;
    dVar26 = param_2 - pdVar7[1];
    dVar25 = dVar25 * dVar25 + dVar26 * dVar26;
    if (dVar25 < dVar23) {
      bVar4 = uVar12 != 0;
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulong)*(byte *)(pdVar7 + -2);
        uVar13 = (ulong)*(uint7 *)((long)pdVar7 + -0xf);
        param_6 = pdVar7[-1];
      }
      bVar2 = uVar15 - 1 <= uVar12;
      bVar1 = !bVar2;
      if (bVar2) {
        uVar16 = 0;
      }
      else {
        uVar16 = (ulong)*(byte *)(pdVar7 + 2);
        uVar14 = (ulong)*(uint7 *)((long)pdVar7 + 0x11);
        param_3 = pdVar7[3];
      }
      uVar17 = uVar13 << 8;
      uVar10 = uVar14 << 8;
      dVar21 = *pdVar7;
      dVar22 = pdVar7[1];
      dVar23 = dVar25;
    }
    pdVar7 = pdVar7 + 2;
  }
  dVar23 = (double)(uVar10 | uVar16);
  if (bVar4) {
    dVar25 = (double)(uVar17 | uVar11);
    if ((bVar1) &&
       ((param_2 - param_3) * (param_2 - param_3) + (param_1 - dVar23) * (param_1 - dVar23) <=
        (param_2 - param_6) * (param_2 - param_6) + (param_1 - dVar25) * (param_1 - dVar25))) {
      param_6 = param_3;
      dVar25 = dVar23;
    }
LAB_10739a090:
    dVar26 = dVar25 - dVar21;
    dVar24 = param_6 - dVar22;
    dVar23 = ((param_1 - dVar21) * dVar26 + (param_2 - dVar22) * dVar24) /
             (dVar26 * dVar26 + dVar24 * dVar24);
    dVar26 = dVar21 + dVar26 * dVar23;
    dVar23 = dVar22 + dVar24 * dVar23;
    if (2.220446049250313e-16 <=
        ABS((SQRT((dVar21 - dVar26) * (dVar21 - dVar26) + (dVar22 - dVar23) * (dVar22 - dVar23)) +
            SQRT((dVar25 - dVar26) * (dVar25 - dVar26) + (param_6 - dVar23) * (param_6 - dVar23))) -
            SQRT((dVar21 - dVar25) * (dVar21 - dVar25) + (dVar22 - param_6) * (dVar22 - param_6))))
    {
      dVar26 = dVar21;
      dVar23 = dVar22;
    }
    *pdVar5 = dVar26;
    pdVar5[1] = dVar23;
  }
  else {
    param_6 = param_3;
    dVar25 = dVar23;
    if (bVar1) goto LAB_10739a090;
    *pdVar5 = dVar21;
    pdVar5[1] = dVar22;
  }
  uVar3 = 1;
LAB_10739a138:
  *(undefined1 *)(pdVar5 + 2) = uVar3;
  return;
}



/* Entry: 107399f2c; end: 10739a13f;  */

void FUN_107399f2c(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,double param_6,double *param_7,double *param_8,double *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if (param_8 == param_9) {
    uVar5 = 0;
    *(undefined1 *)param_7 = 0;
    goto LAB_10739a138;
  }
  uVar8 = 0;
  uVar12 = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar11 = 0;
  uVar6 = 0;
  bVar1 = false;
  bVar3 = false;
  dVar13 = *param_8;
  dVar14 = param_8[1];
  uVar10 = (long)param_9 - (long)param_8 >> 4;
  dVar15 = 1.79769313486232e+308;
  for (uVar7 = 0; uVar10 != uVar7; uVar7 = uVar7 + 1) {
    dVar17 = param_1 - *param_8;
    dVar18 = param_2 - param_8[1];
    dVar17 = dVar17 * dVar17 + dVar18 * dVar18;
    if (dVar17 < dVar15) {
      bVar3 = uVar7 != 0;
      if (uVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)*(byte *)(param_8 + -2);
        uVar8 = (ulong)*(uint7 *)((long)param_8 + -0xf);
        param_6 = param_8[-1];
      }
      bVar2 = uVar10 - 1 <= uVar7;
      bVar1 = !bVar2;
      if (bVar2) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulong)*(byte *)(param_8 + 2);
        uVar9 = (ulong)*(uint7 *)((long)param_8 + 0x11);
        param_3 = param_8[3];
      }
      uVar12 = uVar8 << 8;
      uVar4 = uVar9 << 8;
      dVar13 = *param_8;
      dVar14 = param_8[1];
      dVar15 = dVar17;
    }
    param_8 = param_8 + 2;
  }
  dVar15 = (double)(uVar4 | uVar11);
  if (bVar3) {
    dVar17 = (double)(uVar12 | uVar6);
    if ((bVar1) &&
       ((param_2 - param_3) * (param_2 - param_3) + (param_1 - dVar15) * (param_1 - dVar15) <=
        (param_2 - param_6) * (param_2 - param_6) + (param_1 - dVar17) * (param_1 - dVar17))) {
      param_6 = param_3;
      dVar17 = dVar15;
    }
LAB_10739a090:
    dVar18 = dVar17 - dVar13;
    dVar16 = param_6 - dVar14;
    dVar15 = ((param_1 - dVar13) * dVar18 + (param_2 - dVar14) * dVar16) /
             (dVar18 * dVar18 + dVar16 * dVar16);
    dVar18 = dVar13 + dVar18 * dVar15;
    dVar15 = dVar14 + dVar16 * dVar15;
    if (2.220446049250313e-16 <=
        ABS((SQRT((dVar13 - dVar18) * (dVar13 - dVar18) + (dVar14 - dVar15) * (dVar14 - dVar15)) +
            SQRT((dVar17 - dVar18) * (dVar17 - dVar18) + (param_6 - dVar15) * (param_6 - dVar15))) -
            SQRT((dVar13 - dVar17) * (dVar13 - dVar17) + (dVar14 - param_6) * (dVar14 - param_6))))
    {
      dVar18 = dVar13;
      dVar15 = dVar14;
    }
    *param_7 = dVar18;
    param_7[1] = dVar15;
  }
  else {
    param_6 = param_3;
    dVar17 = dVar15;
    if (bVar1) goto LAB_10739a090;
    *param_7 = dVar13;
    param_7[1] = dVar14;
  }
  uVar5 = 1;
LAB_10739a138:
  *(undefined1 *)(param_7 + 2) = uVar5;
  return;
}



/* Entry: 10739a140; end: 10739a1bf;  */

void FUN_10739a140(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_1e8 [432];
  undefined8 uStack_38;
  
  func_0x00010739a5a8();
  func_0x00010739a3b8();
  uStack_38 = extraout_x8;
  func_0x00010729b464(auStack_1e8);
  func_0x00010729bf90();
  func_0x00010729bf90();
  func_0x00010739a4d8();
  func_0x00010739a394(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010739a41c();
  func_0x000104c318bc();
  uVar1 = *param_3;
  *(undefined4 *)(unaff_x19 + 0x38) = 3;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 10739a1c0; end: 10739a20f;  */

void FUN_10739a1c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x38) = 3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 10739a210; end: 10739a223;  */

void FUN_10739a210(void)

{
  func_0x00010739a1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739a224; end: 10739a25b;  */

undefined8 FUN_10739a224(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm(0x90);
  FUN_10739a338();
  return uVar1;
}



/* Entry: 10739a25c; end: 10739a27f;  */

void FUN_10739a25c(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010739a4fc();
  *param_2 = extraout_x8;
  func_0x000104c2fe00(param_2 + 1);
  func_0x0001072ab9cc(param_2 + 8,param_1 + 0x40);
  func_0x000104c2fe00(unaff_x19 + 0x58,param_1 + 0x58);
  return;
}



/* Entry: 10739a280; end: 10739a2ff;  */

void FUN_10739a280(long param_1)

{
  long *unaff_x19;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010739a5a8();
  func_0x00010724ef84(auStack_38,param_1 + 8);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010726acf0(&uStack_48);
  (**(code **)(*unaff_x19 + 0x110))();
  func_0x00010726b264(&uStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10739a300; end: 10739a32b;  */

void FUN_10739a300(undefined8 param_1,undefined8 param_2)

{
  func_0x00010739a598(param_2,param_1,&PTR_DAT_1109a93a0);
  func_0x00010739a4ec();
  return;
}



/* Entry: 10739a32c; end: 10739a337;  */

undefined ** FUN_10739a32c(void)

{
  return &PTR_DAT_1109a93a0;
}



/* Entry: 10739a338; end: 10739a393;  */

void FUN_10739a338(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010739a4fc();
  *param_1 = extraout_x8;
  func_0x000104c2fe00(param_1 + 1);
  func_0x0001072ab9cc(param_1 + 8,param_2 + 0x38);
  func_0x000104c2fe00(unaff_x19 + 0x58,param_2 + 0x50);
  return;
}



/* Entry: 10739a394; end: 10739a5d7;  */

void FUN_10739a394(void)

{
  return;
}



/* Entry: 10739a5d8; end: 10739a63f;  */

uint FUN_10739a5d8(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  long lVar5;
  
  ppuVar4 = &PTR_DAT_1109a93b0;
  lVar5 = 0x100;
  do {
    if (lVar5 == 0) {
      iVar2 = 0;
      uVar3 = 0;
      goto LAB_10739a62c;
    }
    uVar1 = param_1;
    func_0x000100152bb8(param_1,ppuVar4[3]);
    ppuVar4 = ppuVar4 + 2;
    lVar5 = lVar5 + -0x10;
  } while ((int)uVar1 == 0);
  uVar3 = (uint)*(byte *)ppuVar4;
  iVar2 = 1;
LAB_10739a62c:
  return uVar3 | iVar2 << 8;
}



/* Entry: 10739a640; end: 10739a6a7;  */

void FUN_10739a640(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  func_0x00010739a788();
  lVar4 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010726ed14(unaff_x19 + 0x18);
  *(long *)(unaff_x19 + 0x28) = unaff_x19;
  return;
}



/* Entry: 10739a6a8; end: 10739a717;  */

undefined8 FUN_10739a6a8(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0x1a) {
    if (*(char *)(*param_4 + 8) == '\x01') {
      FUN_10739a778(*(undefined8 *)(param_1 + 8));
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
      FUN_10739a778(*(undefined8 *)(param_1 + 8));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10739a718; end: 10739a71b;  */

void FUN_10739a718(long param_1)

{
  long unaff_x19;
  long *plVar1;
  
  func_0x00010739a788();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010726eeb8(unaff_x19 + 8);
  return;
}



/* Entry: 10739a71c; end: 10739a72f;  */

void FUN_10739a71c(void)

{
  FUN_10739a730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10739a730; end: 10739a777;  */

void FUN_10739a730(long param_1)

{
  long unaff_x19;
  long *plVar1;
  
  func_0x00010739a788();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010726eeb8(unaff_x19 + 8);
  return;
}



/* Entry: 10739a778; end: 10739a79b;  */

void FUN_10739a778(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010739a784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



/* Entry: 10739a79c; end: 10739a9e7;  */

void FUN_10739a79c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [112];
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar4 = auStack_140;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  iVar3 = 0xf40b3ae;
  func_0x0001000633dc(&DAT_10f40b3ae,9,puVar2,uVar1);
  if (iVar3 == 0) {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    iVar3 = 0xf4091c1;
    func_0x0001000633dc(&DAT_10f4091c1,0xd,puVar2,uVar1);
    uVar5 = 0;
    if ((iVar3 == 0) || ((*(byte *)(param_4 + 0xa8) & 1) == 0)) goto LAB_10739a930;
    func_0x0001078696e8(auStack_140);
    func_0x00010739aa10();
    func_0x0001077765a4(auStack_f0,param_5,auStack_128);
    func_0x00010739aa24(auStack_140);
    func_0x00010739aa08();
    func_0x00010739aa00();
    plVar6 = (long *)*param_1;
    func_0x00010739aa1c();
    func_0x00010739aa1c();
    func_0x000104c2fe00(auStack_80,param_4 + 0x38);
    func_0x0001072627ac(auStack_f0,auStack_80);
    func_0x00010739aa1c();
    func_0x000104c2fe00(auStack_128,param_4 + 0x70);
    (**(code **)(*plVar6 + 0x18))(plVar6,param_4,auStack_f0,auStack_128,auStack_140);
    func_0x000104c2f714(auStack_128);
    func_0x00010724b3d8(auStack_f0);
    func_0x00010739aa00();
  }
  else {
    func_0x0001078696e8(auStack_128);
    func_0x00010739aa10();
    func_0x0001077765a4(auStack_f0,param_5,auStack_140);
    func_0x00010739aa24(auStack_128);
    func_0x00010739aa08();
    func_0x00010739aa00();
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,auStack_128);
    puVar4 = auStack_128;
  }
  func_0x00010726b264(puVar4);
  uVar5 = 1;
LAB_10739a930:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail(uVar5);
    func_0x000104c2f714(auStack_128);
    func_0x00010724b3d8(auStack_f0);
    func_0x00010739aa00();
    func_0x00010726b264(auStack_140);
    do {
      __Unwind_Resume(uVar5);
    } while( true );
  }
  return;
}



/* Entry: 10739a9e8; end: 10739a9ff;  */

void FUN_10739a9e8(long param_1)

{
  undefined1 auStack_80 [40];
  uint uStack_58;
  undefined1 uStack_31;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (uStack_58 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[uStack_58])(&uStack_31,auStack_80);
  }
  return;
}



/* Entry: 10739aa00; end: 10739aa2f;  */

void FUN_10739aa00(void)

{
  long unaff_x29;
  undefined1 uStack_21;
  
  if (*(uint *)(unaff_x29 + -0x48) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x29 + -0x48)])(&uStack_21,unaff_x29 + -0x70);
  }
  *(undefined4 *)(unaff_x29 + -0x48) = 0xffffffff;
  return;
}



/* Entry: 10739aa30; end: 10739ae83;  */

void FUN_10739aa30(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_2a0 [8];
  undefined4 uStack_298;
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [8];
  undefined4 uStack_258;
  undefined1 auStack_250 [8];
  undefined4 uStack_248;
  undefined1 auStack_240 [8];
  undefined4 uStack_238;
  undefined1 auStack_230 [20];
  undefined1 auStack_21c [4];
  undefined1 uStack_218;
  undefined1 uStack_20c;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1e8;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_160;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_138;
  undefined4 uStack_120;
  undefined4 auStack_118 [12];
  undefined4 uStack_e8;
  undefined4 auStack_e0 [12];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  byte bStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = CONCAT44(uStack_150._4_4_,0x43960000);
  uStack_120 = 1;
  auStack_118[0] = 0x41300000;
  uStack_e8 = 1;
  auStack_e0[0] = 0x41500000;
  uStack_b0 = 1;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  func_0x00010739b060();
  func_0x00010727df88(param_1 + 0x38,auStack_118);
  func_0x00010727df88(param_1 + 0x70,auStack_e0);
  FUN_1073431f4(param_1 + 0xa8,&uStack_a8);
  func_0x0001072dbe84(&uStack_150);
  plVar4 = param_2 + 1;
  (**(code **)(*param_2 + 0x30))();
  if ((int)plVar4 != 0) {
    uStack_238 = 1;
    func_0x00010739b054(&uStack_150);
    func_0x00010727df88(param_1,&uStack_150);
    func_0x00010739b078();
    func_0x0001072c9884(auStack_240);
    uStack_248 = 1;
    func_0x00010739b054(&uStack_150);
    func_0x00010739b060(param_1 + 0x38);
    func_0x00010739b078();
    func_0x0001072c9884(auStack_250);
    uStack_258 = 1;
    func_0x00010739b054(&uStack_150);
    func_0x00010739b060(param_1 + 0x70);
    func_0x00010739b078();
    func_0x0001072c9884(auStack_260);
    uStack_298 = 1;
    func_0x0001072f5dec(auStack_290,auStack_2a0);
    func_0x0001072f6ad4(auStack_270,auStack_290);
    (**(code **)(*param_2 + 0x38))(auStack_60,param_2 + 1,&UNK_10f40b3b8);
    in_ZR = bStack_50 == 1;
    if ((bool)in_ZR) {
      func_0x0001072c9ff4(auStack_230,auStack_270);
      if ((bStack_50 & 1) == 0) goto LAB_10739adc0;
      iVar6 = (int)auStack_60;
      func_0x000107766098();
      if (iVar6 == 0) {
        uStack_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        func_0x00010739b01c(&uStack_1c8,auStack_60,&uStack_208,param_3);
        in_ZR = bStack_1b8 == 1;
        if (!(bool)in_ZR) {
          uStack_148 = uStack_200;
          uStack_150 = uStack_208;
          uStack_140 = uStack_1f8;
          uStack_200 = 0;
          uStack_1f8 = 0;
          uStack_208 = 0;
        }
        else {
          uStack_148 = uStack_1c0;
          uStack_150 = uStack_1c8;
        }
        uVar5 = (uint)!(bool)in_ZR;
        uStack_138 = uVar5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_208);
        uVar2 = uStack_148;
        uVar1 = uStack_150;
        (*(code *)(&PTR_FUN_1109a9500)[uVar5])(&uStack_208,&uStack_150);
        iVar6 = -(uint)((int)((uint)CONCAT12(bStack_1b8,(ushort)bStack_1b8) << 0x1f) < 0);
        iVar7 = -(uint)((int)((uint)bStack_1b8 << 0x1f) < 0);
        iVar8 = -(uint)((int)((uint)bStack_1b8 << 0x1f) < 0);
        iVar9 = -(uint)((int)((uint)bStack_1b8 << 0x1f) < 0);
        uStack_1a0 = CONCAT17((byte)((uint)iVar7 >> 0x18) & (byte)(uVar1 >> 0x38),
                              CONCAT16((byte)((uint)iVar7 >> 0x10) & (byte)(uVar1 >> 0x30),
                                       CONCAT15((byte)((uint)iVar7 >> 8) & (byte)(uVar1 >> 0x28),
                                                CONCAT14((byte)iVar7 & (byte)(uVar1 >> 0x20),
                                                         CONCAT13((byte)((uint)iVar6 >> 0x18) &
                                                                  (byte)(uVar1 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar6 >>
                                                                                 0x10) &
                                                                           (byte)(uVar1 >> 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar6 >> 8) & (byte)(uVar1 >> 8),
                                                  (byte)iVar6 & (byte)uVar1)))))));
        uStack_198 = CONCAT17((byte)((uint)iVar9 >> 0x18) & (byte)((ulong)uVar2 >> 0x38),
                              CONCAT16((byte)((uint)iVar9 >> 0x10) & (byte)((ulong)uVar2 >> 0x30),
                                       CONCAT15((byte)((uint)iVar9 >> 8) &
                                                (byte)((ulong)uVar2 >> 0x28),
                                                CONCAT14((byte)iVar9 & (byte)((ulong)uVar2 >> 0x20),
                                                         CONCAT13((byte)((uint)iVar8 >> 0x18) &
                                                                  (byte)((ulong)uVar2 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar8 >>
                                                                                 0x10) &
                                                                           (byte)((ulong)uVar2 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar8 >> 8) & (byte)((ulong)uVar2 >> 8),
                                                  (byte)iVar8 & (byte)uVar2)))))));
LAB_10739ad54:
        uStack_160 = 1;
      }
      else {
        func_0x0001072c9ff4(auStack_1b0,auStack_230);
        func_0x0001072f6b34(&uStack_150,auStack_1b0,1);
        func_0x0001072c9884(auStack_1b0);
        auStack_21c[0] = 0;
        uStack_218 = 0;
        uStack_208 = uStack_208 & 0xffffffffffffff00;
        uStack_1e8 = 0;
        func_0x000107771274(&uStack_1c8,&uStack_150,auStack_60,param_3,auStack_21c,&uStack_208);
        func_0x0001072c94e0(&uStack_208);
        in_ZR = bStack_1b8 == 1;
        if (!(bool)in_ZR) {
          func_0x00010739b080();
          func_0x00010739b070();
          uStack_1a0 = 0;
          uStack_198 = 0;
          goto LAB_10739ad54;
        }
        auStack_21c[0] = 0;
        uStack_20c = 0;
        FUN_10739af80(&uStack_208,&uStack_1c8,auStack_21c);
        FUN_10739afe8(&uStack_1a0,&uStack_208);
        func_0x000107266a84(&uStack_208);
        func_0x00010739b080();
        func_0x00010739b070();
      }
      func_0x0001072c9884(auStack_230);
    }
    else {
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_160 = 1;
    }
    func_0x0001072f5f4c(auStack_60);
    FUN_1073431f4(param_1 + 0xa8,&uStack_1a0);
    func_0x00010727fc70(&uStack_1a0);
    func_0x0001072c9884(auStack_270);
    func_0x0001072c9884(auStack_290);
    func_0x0001072c9884(auStack_2a0);
  }
  func_0x00010739b088(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10739adc0:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10739adc8);
  (*pcVar3)();
}



/* Entry: 10739ae84; end: 10739af7f;  */

void FUN_10739ae84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  byte bStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x38))(auStack_50,param_2 + 1,param_5);
  uVar2 = bStack_40 == 1;
  if ((bool)uVar2) {
    func_0x0001072c9ff4(auStack_60,param_4);
    if ((bStack_40 & 1) == 0) goto LAB_10739af50;
    FUN_107381d58(param_1,auStack_60,auStack_50,param_3,param_6);
    func_0x0001072c9884(auStack_60);
  }
  else {
    *param_1 = *param_6;
    param_1[0xc] = 1;
  }
  func_0x0001072f5f4c(auStack_50);
  func_0x00010739b088(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10739af50:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10739af58);
  (*pcVar1)();
}



/* Entry: 10739af80; end: 10739afe7;  */

long FUN_10739af80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077b0f58(param_1,&uStack_30);
  func_0x0001072c9b9c(&uStack_30);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return param_1;
}



/* Entry: 10739afe8; end: 10739afff;  */

void FUN_10739afe8(void)

{
  FUN_10739b000();
  return;
}



/* Entry: 10739b000; end: 10739b047;  */

void FUN_10739b000(long param_1)

{
  func_0x0001073433c4();
  *(undefined4 *)(param_1 + 0x40) = 2;
  return;
}



/* Entry: 10739b048; end: 10739b0e7;  */

void FUN_10739b048(void)

{
  return;
}



/* Entry: 10739b0e8; end: 10739b12f;  */

undefined8 FUN_10739b0e8(long param_1)

{
  code *extraout_x8;
  undefined8 unaff_x19;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010739d02c();
    (*extraout_x8)();
  }
  func_0x00010739ccd0(param_1 + 0x38);
  func_0x00010726ee04(param_1 + 0x28);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10739b130; end: 10739b2af;  */

void FUN_10739b130(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long ****pppplVar3;
  undefined *puVar4;
  byte bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  ulong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dStack_888;
  ulong uStack_880;
  undefined1 auStack_878 [16];
  undefined8 uStack_868;
  long lStack_860;
  undefined1 auStack_848 [88];
  double dStack_7f0;
  byte bStack_7e8;
  double dStack_7e0;
  char cStack_7d8;
  double dStack_7d0;
  char cStack_7c8;
  undefined1 auStack_7c0 [32];
  long ***ppplStack_7a0;
  long ***ppplStack_798;
  long ***ppplStack_790;
  long lStack_788;
  long lStack_780;
  undefined8 uStack_778;
  long ***appplStack_770 [2];
  long ***ppplStack_760;
  long ***ppplStack_758;
  undefined1 auStack_750 [88];
  long ***ppplStack_6f8;
  long ***ppplStack_6f0;
  byte bStack_6e8;
  undefined8 uStack_630;
  undefined4 uStack_628;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long ***ppplStack_490;
  undefined4 uStack_488;
  undefined **ppuStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined1 uStack_454;
  long ***ppplStack_410;
  long ***ppplStack_408;
  long ***ppplStack_400;
  long ***ppplStack_3f8;
  undefined **ppuStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_390;
  undefined8 uStack_370;
  undefined8 uStack_1b8;
  long alStack_100 [3];
  char cStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [56];
  long alStack_a0 [3];
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long alStack_70 [5];
  undefined8 uStack_48;
  
  plVar18 = alStack_100;
  lVar16 = param_5;
  func_0x00010739cf9c();
  *(undefined1 *)(lVar16 + 0x70) = 0;
  uStack_48 = extraout_x8;
  if (*(char *)(lVar16 + 0x78) == '\x01') {
    func_0x00010739d02c();
    (*extraout_x8_00)();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_80 = param_5;
  lStack_78 = lVar16;
  FUN_10739c0ec(alStack_70,param_6);
  (**(code **)(**(long **)(param_5 + 0x28) + 0x38))(alStack_100);
  uVar15 = cStack_e8 == '\x01';
  if ((bool)uVar15) {
    FUN_10739b2b0(&lStack_80);
  }
  else {
    plVar20 = *(long **)(param_5 + 0x28);
    lStack_e0 = param_5;
    FUN_10739be8c(auStack_d8,&lStack_80);
    puStack_88 = (undefined8 *)0x0;
    puVar22 = (undefined8 *)0x48;
    __Znwm();
    *puVar22 = &PTR_SUB_1109a9520;
    puVar22[1] = lStack_e0;
    FUN_10739be8c(puVar22 + 2,auStack_d8);
    plVar18 = alStack_a0;
    puStack_88 = puVar22;
    (**(code **)(*plVar20 + 0x40))();
    *(int *)(param_5 + 0x74) = (int)plVar20;
    *(undefined1 *)(param_5 + 0x78) = 1;
    func_0x000107270b28(alStack_a0);
    func_0x00010739cfe4();
  }
  func_0x00010739cf7c();
  func_0x0001072bb9f4();
  func_0x00010739cf4c(uStack_48);
  if ((bool)uVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107270b28(alStack_a0);
  func_0x00010739cfe4();
  func_0x00010739cf7c();
  plVar20 = alStack_70;
  func_0x0001072bb9f4();
  func_0x00010739cf84();
  plVar25 = plVar20;
  func_0x00010739cf9c();
  plVar25 = (long *)*plVar25;
  uStack_1b8 = extraout_x8_01;
  (**(code **)(*(long *)plVar25[5] + 0x20))(auStack_750);
  (**(code **)(*(long *)plVar25[5] + 0x30))(auStack_878);
  lVar26 = *plVar25;
  plVar1 = (long *)plVar25[7];
  lVar16 = plVar25[8];
  func_0x000107751284(&uStack_630);
  dVar33 = 0.0;
  ppplStack_408 = (long ***)0x0;
  ppplStack_410 = (long ***)0x0;
  ppplStack_3f8 = (long ***)0x0;
  ppplStack_400 = (long ***)0x0;
  func_0x00010727ce6c(plVar25 + 9,&ppplStack_410);
  ppplStack_410 = (long ***)((ulong)ppplStack_410 & 0xffffffffffffff00);
  uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
  uStack_3d0 = 0;
  fVar34 = 0.0;
  if (*(int *)(lVar26 + 0xe8) == 0) {
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar27 = 0.0;
  }
  else {
    if (*(int *)(lVar26 + 0xe8) == 1) {
      uVar30 = *(ulong *)(lVar26 + 0xb0);
      uStack_4a0 = *(long *****)(lVar26 + 0xa8);
      uStack_498._4_4_ = (float)(uVar30 >> 0x20);
      uStack_498._0_4_ = (float)uVar30;
      fVar35 = uStack_498._4_4_;
      fVar36 = (float)uStack_498;
      uStack_498 = (long ****)uVar30;
    }
    else {
      func_0x0001072803d4(&uStack_4a0,lVar26 + 0xa8,&uStack_630,&ppplStack_410);
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar27 = 0.0;
      if (((ulong)ppplStack_490 & 1) == 0) goto LAB_10739b3dc;
      fVar35 = uStack_498._4_4_;
      fVar36 = (float)uStack_498;
    }
    fVar34 = (float)uStack_4a0;
    fVar27 = uStack_4a0._4_4_;
  }
LAB_10739b3dc:
  func_0x00010724b3d8(&ppplStack_410);
  if (fVar34 <= (float)dVar33) {
    fVar34 = (float)dVar33;
  }
  if (fVar27 <= (float)param_2) {
    fVar27 = (float)param_2;
  }
  if (fVar36 <= (float)param_3) {
    fVar36 = (float)param_3;
  }
  if (fVar35 <= (float)param_4) {
    fVar35 = (float)param_4;
  }
  func_0x00010725aba0((double)fVar34,(double)fVar27,(double)fVar36,(double)fVar35,auStack_7c0);
  lVar17 = *plVar18;
  lVar2 = plVar18[1];
  uVar19 = (lVar2 - lVar17) / 0x250;
  ppplStack_798 = (long ***)0x0;
  ppplStack_790 = (long ***)0x0;
  uVar30 = 3;
  if (bStack_6e8 != 0) {
    uVar30 = 1;
  }
  ppplStack_7a0 = (long ***)0x0;
  if (uVar19 < uVar30) {
    puVar22 = &uStack_868;
    while (puVar22 = (undefined8 *)*puVar22, puVar22 != (undefined8 *)0x0) {
      func_0x0001072639d8(&ppplStack_410,puVar22 + 9);
      func_0x0001072ee420(&ppplStack_7a0,&ppplStack_410);
      func_0x000107264bb8(&ppplStack_410);
    }
  }
  else {
    uStack_4a0 = &ppplStack_7a0;
    uStack_498 = (long ****)((ulong)uStack_498 & 0xffffffffffffff00);
    if (lVar2 != lVar17) {
      if (0x6eb3e45306eb3e < uVar19) {
        func_0x0001072ee16c();
        goto LAB_10739bd6c;
      }
      pppplVar29 = &ppplStack_790;
      func_0x0001072ee244();
      ppplStack_790 = (long ***)(pppplVar29 + uVar19 * 0x4a);
      ppplStack_408 = (long ***)appplStack_770;
      ppplStack_400 = (long ***)&ppplStack_760;
      ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffffffffff00);
      ppplStack_7a0 = (long ***)pppplVar29;
      ppplStack_798 = (long ***)pppplVar29;
      appplStack_770[0] = (long ***)pppplVar29;
      ppplStack_410 = (long ***)&ppplStack_790;
      for (; ppplStack_760 = (long ***)pppplVar29, lVar17 != lVar2; lVar17 = lVar17 + 0x250) {
        func_0x0001072639d8(pppplVar29,lVar17);
        pppplVar29 = (long ****)(ppplStack_760 + 0x4a);
      }
      ppplStack_3f8 = (long ***)CONCAT71(ppplStack_3f8._1_7_,1);
      func_0x0001072ee33c(&ppplStack_410);
      ppplStack_798 = (long ***)pppplVar29;
    }
    uStack_498 = (long ****)CONCAT71(uStack_498._1_7_,1);
    func_0x00010739cca4(&uStack_4a0);
  }
  if (bStack_6e8 == 1) {
    ppplStack_408 = ppplStack_6f0;
    ppplStack_410 = ppplStack_6f8;
  }
  else if (ppplStack_7a0 == ppplStack_798) {
    ppplStack_408 = (long ***)0x0;
    ppplStack_410 = (long ***)0x0;
  }
  else {
    dVar31 = 0.0;
    dVar33 = 0.0;
    for (pppplVar29 = (long ****)ppplStack_7a0; pppplVar29 != (long ****)ppplStack_798;
        pppplVar29 = pppplVar29 + 0x4a) {
      dVar33 = dVar33 + (double)pppplVar29[0x13];
      dVar31 = dVar31 + (double)pppplVar29[0x12];
    }
    dVar32 = (double)(ulong)(((long)ppplStack_798 - (long)ppplStack_7a0) / 0x250);
    func_0x000107246514(dVar33 / dVar32,dVar31 / dVar32,&ppplStack_410,0);
  }
  ppplVar9 = ppplStack_408;
  ppplVar8 = ppplStack_410;
  pppplVar29 = (long ****)ppplStack_410;
  func_0x00010739c204(appplStack_770,3);
  uStack_498 = (long ****)0x0;
  uStack_4a0 = (long ****)0x0;
  ppplStack_490 = (long ***)0x0;
  uVar19 = ((long)ppplStack_798 - (long)ppplStack_7a0) / 0x250;
  uVar30 = uVar19 + 1;
  if (uVar19 < 0xffffffffffffffff) {
    if (uVar30 < 0xaaaaaaaaaaaaaab) {
      FUN_10739c2a0(&ppplStack_410,uVar30,0,&ppplStack_490);
      func_0x00010739cef8();
      func_0x00010739cfbc();
      ppplStack_490 = ppplStack_3f8;
      uStack_498 = (long ****)ppplStack_400;
      pppplVar29 = (long ****)ppplStack_400;
      func_0x00010739cec4();
      goto LAB_10739b648;
    }
  }
  else {
LAB_10739b648:
    pppplVar24 = (long ****)ppplStack_7a0;
    pppplVar3 = (long ****)ppplStack_798;
    if (bStack_6e8 == 1) {
      ppplStack_758 = ppplStack_6f0;
      ppplStack_760 = ppplStack_6f8;
      if (uStack_498 < ppplStack_490) {
        uStack_498[1] = ppplStack_6f0;
        *uStack_498 = ppplStack_6f8;
        uStack_498[2] = (long ***)0x0;
        pppplVar29 = (long ****)ppplStack_6f8;
        uStack_498 = uStack_498 + 3;
      }
      else {
        func_0x00010739cfac();
        lVar17 = 0;
        if (extraout_x9 != 0) {
          lVar17 = extraout_x8_02 / extraout_x9;
        }
        func_0x00010739cff8(lVar17);
        func_0x00010739cfac(uStack_498);
        func_0x00010739d004();
        ppplVar6 = ppplStack_400;
        pppplVar29 = (long ****)ppplStack_760;
        ppplStack_400[1] = (long **)ppplStack_758;
        *ppplVar6 = (long **)ppplStack_760;
        ppplVar6[2] = (long **)0x0;
        func_0x00010739cef8();
        func_0x00010739cfbc();
        ppplStack_490 = ppplStack_3f8;
        uStack_498 = (long ****)(ppplVar6 + 3);
        func_0x00010739cec4();
        pppplVar24 = (long ****)ppplStack_7a0;
        uStack_498 = (long ****)(ppplVar6 + 3);
        pppplVar3 = (long ****)ppplStack_798;
      }
    }
    for (; pppplVar23 = uStack_498, pppplVar28 = uStack_4a0, puVar4 = PTR___ZSt7nothrow_1103469d8,
        pppplVar24 != pppplVar3; pppplVar24 = pppplVar24 + 0x4a) {
      func_0x000107246514(pppplVar24[0x13],pppplVar24[0x12],&ppplStack_760,0);
      pppplVar28 = (long ****)pppplVar24[0x12];
      func_0x00010739c1b8(pppplVar28,pppplVar24[0x13],ppplVar9,ppplVar8,appplStack_770);
      ppplVar7 = ppplStack_758;
      ppplVar6 = ppplStack_760;
      pppplVar29 = pppplVar28;
      if (uStack_498 < ppplStack_490) {
        *uStack_498 = ppplStack_760;
        uStack_498[1] = ppplStack_758;
        pppplVar23 = uStack_498 + 3;
        uStack_498[2] = (long ***)pppplVar28;
      }
      else {
        func_0x00010739cff8(((long)uStack_498 - (long)uStack_4a0) / 0x18);
        func_0x00010739d004();
        ppplVar10 = ppplStack_400;
        *ppplStack_400 = (long **)ppplVar6;
        ppplVar10[1] = (long **)ppplVar7;
        ppplVar10[2] = (long **)pppplVar28;
        pppplVar23 = (long ****)(ppplVar10 + 3);
        _memcpy(ppplStack_408 + (((long)uStack_498 - (long)uStack_4a0) / -0x18) * 3);
        func_0x00010739cfbc();
        ppplStack_490 = ppplStack_3f8;
        uStack_498 = pppplVar23;
        func_0x00010739cec4();
      }
      uStack_498 = pppplVar23;
    }
    ppplStack_408 = (long ***)0x0;
    ppplStack_410 = (long ***)0x0;
    pppplVar3 = (long ****)(((long)uStack_498 - (long)uStack_4a0) / 0x18);
    pppplVar24 = pppplVar3;
    if ((long)uStack_498 - (long)uStack_4a0 < 1) {
      pppplVar24 = (long ****)0x0;
    }
    else {
      for (; 0 < (long)pppplVar24; pppplVar24 = (long ****)((ulong)pppplVar24 >> 1)) {
        lVar17 = (long)pppplVar24 * 0x18;
        __ZnwmRKSt9nothrow_t(lVar17,puVar4);
        if (lVar17 != 0) goto LAB_10739b81c;
      }
      lVar17 = 0;
LAB_10739b81c:
      ppplStack_760 = (long ***)0x0;
      ppplStack_758 = (long ***)pppplVar24;
      FUN_10739c604(&ppplStack_410,lVar17);
      ppplStack_408 = (long ***)pppplVar24;
      FUN_10739c61c(&ppplStack_760);
    }
    FUN_10739c3b8(pppplVar28,pppplVar23,pppplVar3,ppplStack_410,pppplVar24);
    FUN_10739c61c(&ppplStack_410);
    lStack_780 = 0;
    uStack_778 = 0;
    lStack_788 = 0;
    func_0x00010739cfac(uStack_498);
    lVar17 = 0;
    if (extraout_x9_00 != 0) {
      lVar17 = extraout_x8_03 / extraout_x9_00;
    }
    func_0x000107257f58(&lStack_788,lVar17);
    pppplVar3 = uStack_498;
    for (pppplVar24 = uStack_4a0; fVar34 = SUB84(pppplVar29,0), pppplVar24 != pppplVar3;
        pppplVar24 = pppplVar24 + 3) {
      ppplStack_408 = pppplVar24[1];
      pppplVar29 = (long ****)*pppplVar24;
      ppplStack_410 = (long ***)pppplVar29;
      func_0x00010725ade4(&lStack_788,&ppplStack_410);
    }
    FUN_10739cc78(&uStack_4a0);
    func_0x0001072bbf74(&ppplStack_7a0);
    func_0x000107751284(&ppplStack_410);
    uStack_4a0 = (long ****)((ulong)uStack_4a0 & 0xffffffffffffff00);
    uStack_468 = uStack_468 & 0xffffffffffffff00;
    uStack_460 = 0;
    func_0x00010739cfd8(lVar26 + 0x38);
    fVar36 = fVar34;
    func_0x00010739cff0();
    uStack_4a0 = (long ****)((ulong)uStack_4a0 & 0xffffffffffffff00);
    uStack_468 = uStack_468 & 0xffffffffffffff00;
    uStack_460 = 0;
    func_0x00010739cfd8(lVar26 + 0x70);
    func_0x00010739cff0();
    func_0x00010739cf8c(auStack_848);
    dVar33 = (double)fVar34;
    while( true ) {
      bVar12 = false;
      if ((1 < (ulong)(lStack_780 - lStack_788 >> 4)) &&
         (bVar12 = false, !NAN(dStack_7f0) && !NAN(dVar33))) {
        bVar12 = dStack_7f0 < dVar33;
      }
      if (!bVar12) break;
      lStack_780 = lStack_780 + -0x10;
      func_0x00010739cf8c(&uStack_4a0);
      _memcpy(auStack_848,&uStack_4a0,0x88);
    }
    if (bStack_6e8 == 1) {
      if (lStack_780 - lStack_788 == 0x10) {
        dStack_7f0 = dVar33;
        if ((bStack_7e8 & 1) == 0) {
          bStack_7e8 = 1;
        }
      }
      else {
        dVar31 = (double)fVar36;
        bVar12 = false;
        bVar13 = false;
        bVar14 = false;
        if (dVar33 <= dStack_7f0) {
          bVar12 = false;
          bVar13 = false;
          bVar14 = true;
          if (!NAN(dStack_7f0) && !NAN(dVar31)) {
            bVar12 = dStack_7f0 < dVar31;
            bVar13 = dStack_7f0 == dVar31;
            bVar14 = false;
          }
        }
        if (!bVar13 && bVar12 == bVar14) {
          fVar27 = (float)dStack_7f0;
          if (fVar27 <= fVar36) {
            fVar36 = fVar27;
          }
          if (fVar34 <= fVar27) {
            fVar34 = fVar36;
          }
          if ((bStack_7e8 & 1) == 0) {
            bStack_7e8 = 1;
          }
          dStack_7f0 = (double)fVar34;
        }
      }
    }
    if ((bStack_7e8 & 1) == 0) {
      bStack_7e8 = 1;
      dStack_7f0 = dVar33;
    }
    uStack_4a0 = (long ****)CONCAT44(uStack_4a0._4_4_,0x11d);
    uStack_488 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    uStack_460 = CONCAT44(uStack_460._4_4_,0x11d);
    uStack_458 = 0;
    uStack_454 = 1;
    func_0x00010739cf20();
    ppplStack_798._0_4_ = 3;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(0x11b);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    puVar22 = &uStack_4a0;
    func_0x00010729d56c(puVar22,"step",&UNK_10f40b3c8);
    ppplStack_7a0 = (long ***)(long)dStack_7f0;
    ppplStack_798._0_4_ = 3;
    func_0x00010726e09c(lVar16,puVar22,&ppplStack_7a0);
    func_0x00010739cf60();
    func_0x00010739cedc(0x18e);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    ppplStack_7a0 = (long ***)(long)(dStack_7f0 * 100.0);
    ppplStack_798._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(399);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    dStack_7d0 = dStack_7d0 * 100.0;
    if (cStack_7c8 == '\0') {
      dStack_7d0 = 0.0;
    }
    ppplStack_7a0 = (long ***)(long)dStack_7d0;
    ppplStack_798._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(400);
    uStack_478 = 0;
    ppuStack_480 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_454 = 1;
    func_0x00010739cf20();
    if (cStack_7d8 == '\0') {
      dStack_7e0 = 0.0;
    }
    ppplStack_7a0 = (long ***)(long)dStack_7e0;
    ppplStack_798 = (long ***)CONCAT44(ppplStack_798._4_4_,2);
    func_0x00010739ceb4();
    fVar34 = SUB84(dStack_7e0,0);
    func_0x00010739cf60();
    func_0x000107267da8(&ppplStack_410);
    func_0x00010739d010();
    ppplStack_410 = (long ***)((ulong)ppplStack_410 & 0xffffffffffffff00);
    uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
    uStack_3d0 = 0;
    func_0x0001073837dc(lVar26,&uStack_630,&ppplStack_410,&UNK_10de60798);
    func_0x00010724b3d8(&ppplStack_410);
    ppplStack_400 = (long ***)((ulong)ppplStack_400 & 0xffffffffffffff00);
    ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffffffffff00);
    ppuStack_3f0 = (undefined **)((ulong)ppuStack_3f0 & 0xffffffffffffff00);
    uStack_3e8 = uStack_3e8 & 0xffffffffffffff00;
    uStack_390 = 0;
    uStack_370 = 0;
    ppplStack_410 = (long ***)((ulong)(uint)(int)fVar34 * 1000000);
    ppplStack_408 = (long ***)CONCAT71(ppplStack_408._1_7_,1);
    uStack_3d8 = 0x4008000000000000;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0xc000000000000000;
    uStack_3b8 = 0xc000000000000000;
    uStack_3c0 = 0x4008000000000000;
    uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_848,&ppplStack_410);
    bVar5 = bStack_7e8;
    dVar33 = dStack_7f0;
    func_0x00010725ab38(&ppplStack_410);
    puVar22 = &uStack_630;
    func_0x000107267da8();
    if (bVar5 == 0) {
      dVar33 = 0.0;
    }
    uStack_880 = 0;
    if (lStack_860 != 0) {
      uStack_880 = 0x100;
    }
    uStack_880 = uStack_880 | bStack_6e8;
    *(undefined1 *)(plVar25 + 0xe) = 1;
    puVar21 = (undefined8 *)plVar25[8];
    ppplStack_410 = (long ***)CONCAT44(ppplStack_410._4_4_,0x11c);
    ppplStack_3f8 = (long ***)((ulong)ppplStack_3f8 & 0xffffffff00000000);
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    ppuStack_3f0 = &PTR_DAT_110996720;
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,0x11c);
    uStack_3c8 = CONCAT35((int3)((ulong)uStack_3c8 >> 0x28),0x100000000);
    uStack_3b0 = 0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    dStack_888 = dVar33;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_4a0 = (long ****)((((long)puVar22 - plVar20[1]) / 1000000) * 1000);
    uStack_630 = *puVar21;
    uStack_628 = 3;
    FUN_10743f9dc(puVar21,&ppplStack_410,&uStack_4a0,&uStack_630,7);
    func_0x000107262330(&ppplStack_410);
    uVar15 = (char)plVar20[6] == '\x01';
    if ((bool)uVar15) {
      plVar18 = (long *)plVar20[5];
      if (plVar18 == (long *)0x0) {
        func_0x000104bfeb48();
        goto LAB_10739bd6c;
      }
      (**(code **)(*plVar18 + 0x30))(plVar18,&dStack_888);
    }
    func_0x0001072bb81c(auStack_878);
    func_0x0001072bbee8(auStack_750);
    func_0x00010739cf4c(uStack_1b8);
    if ((bool)uVar15) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10739c28c();
LAB_10739bd6c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10739bd70);
  (*pcVar11)();
}



/* Entry: 10739b2b0; end: 10739be8b;  */

void FUN_10739b2b0(undefined8 param_1,double param_2,double param_3,double param_4,long *param_5,
                  long *param_6)

{
  long lVar1;
  long lVar2;
  long ****pppplVar3;
  undefined *puVar4;
  byte bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  long ****pppplVar26;
  long ****pppplVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dStack_788;
  ulong uStack_780;
  undefined1 auStack_778 [16];
  undefined8 uStack_768;
  long lStack_760;
  undefined1 auStack_748 [88];
  double dStack_6f0;
  byte bStack_6e8;
  double dStack_6e0;
  char cStack_6d8;
  double dStack_6d0;
  char cStack_6c8;
  undefined1 auStack_6c0 [32];
  long ***ppplStack_6a0;
  long ***ppplStack_698;
  long ***ppplStack_690;
  long lStack_688;
  long lStack_680;
  undefined8 uStack_678;
  long ***appplStack_670 [2];
  long ***ppplStack_660;
  long ***ppplStack_658;
  undefined1 auStack_650 [88];
  long ***ppplStack_5f8;
  long ***ppplStack_5f0;
  byte bStack_5e8;
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long ***ppplStack_390;
  undefined4 uStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined1 uStack_354;
  long ***ppplStack_310;
  long ***ppplStack_308;
  long ***ppplStack_300;
  long ***ppplStack_2f8;
  undefined **ppuStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_290;
  undefined8 uStack_270;
  undefined8 uStack_b8;
  
  plVar23 = param_5;
  func_0x00010739cf9c();
  plVar23 = (long *)*plVar23;
  uStack_b8 = extraout_x8;
  (**(code **)(*(long *)plVar23[5] + 0x20))(auStack_650);
  (**(code **)(*(long *)plVar23[5] + 0x30))(auStack_778);
  lVar24 = *plVar23;
  plVar17 = (long *)plVar23[7];
  lVar1 = plVar23[8];
  func_0x000107751284(&uStack_530);
  dVar31 = 0.0;
  ppplStack_308 = (long ***)0x0;
  ppplStack_310 = (long ***)0x0;
  ppplStack_2f8 = (long ***)0x0;
  ppplStack_300 = (long ***)0x0;
  func_0x00010727ce6c(plVar23 + 9,&ppplStack_310);
  ppplStack_310 = (long ***)((ulong)ppplStack_310 & 0xffffffffffffff00);
  uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
  uStack_2d0 = 0;
  fVar32 = 0.0;
  if (*(int *)(lVar24 + 0xe8) == 0) {
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar25 = 0.0;
  }
  else {
    if (*(int *)(lVar24 + 0xe8) == 1) {
      uVar28 = *(ulong *)(lVar24 + 0xb0);
      uStack_3a0 = *(long *****)(lVar24 + 0xa8);
      uStack_398._4_4_ = (float)(uVar28 >> 0x20);
      uStack_398._0_4_ = (float)uVar28;
      fVar33 = uStack_398._4_4_;
      fVar34 = (float)uStack_398;
      uStack_398 = (long ****)uVar28;
    }
    else {
      func_0x0001072803d4(&uStack_3a0,lVar24 + 0xa8,&uStack_530,&ppplStack_310);
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar25 = 0.0;
      if (((ulong)ppplStack_390 & 1) == 0) goto LAB_10739b3dc;
      fVar33 = uStack_398._4_4_;
      fVar34 = (float)uStack_398;
    }
    fVar32 = (float)uStack_3a0;
    fVar25 = uStack_3a0._4_4_;
  }
LAB_10739b3dc:
  func_0x00010724b3d8(&ppplStack_310);
  if (fVar32 <= (float)dVar31) {
    fVar32 = (float)dVar31;
  }
  if (fVar25 <= (float)param_2) {
    fVar25 = (float)param_2;
  }
  if (fVar34 <= (float)param_3) {
    fVar34 = (float)param_3;
  }
  if (fVar33 <= (float)param_4) {
    fVar33 = (float)param_4;
  }
  func_0x00010725aba0((double)fVar32,(double)fVar25,(double)fVar34,(double)fVar33,auStack_6c0);
  lVar16 = *param_6;
  lVar2 = param_6[1];
  uVar18 = (lVar2 - lVar16) / 0x250;
  ppplStack_698 = (long ***)0x0;
  ppplStack_690 = (long ***)0x0;
  uVar28 = 3;
  if (bStack_5e8 != 0) {
    uVar28 = 1;
  }
  ppplStack_6a0 = (long ***)0x0;
  if (uVar18 < uVar28) {
    puVar20 = &uStack_768;
    while (puVar20 = (undefined8 *)*puVar20, puVar20 != (undefined8 *)0x0) {
      func_0x0001072639d8(&ppplStack_310,puVar20 + 9);
      func_0x0001072ee420(&ppplStack_6a0,&ppplStack_310);
      func_0x000107264bb8(&ppplStack_310);
    }
  }
  else {
    uStack_3a0 = &ppplStack_6a0;
    uStack_398 = (long ****)((ulong)uStack_398 & 0xffffffffffffff00);
    if (lVar2 != lVar16) {
      if (0x6eb3e45306eb3e < uVar18) {
        func_0x0001072ee16c();
        goto LAB_10739bd6c;
      }
      pppplVar27 = &ppplStack_690;
      func_0x0001072ee244();
      ppplStack_690 = (long ***)(pppplVar27 + uVar18 * 0x4a);
      ppplStack_308 = (long ***)appplStack_670;
      ppplStack_300 = (long ***)&ppplStack_660;
      ppplStack_2f8 = (long ***)((ulong)ppplStack_2f8 & 0xffffffffffffff00);
      ppplStack_6a0 = (long ***)pppplVar27;
      ppplStack_698 = (long ***)pppplVar27;
      appplStack_670[0] = (long ***)pppplVar27;
      ppplStack_310 = (long ***)&ppplStack_690;
      for (; ppplStack_660 = (long ***)pppplVar27, lVar16 != lVar2; lVar16 = lVar16 + 0x250) {
        func_0x0001072639d8(pppplVar27,lVar16);
        pppplVar27 = (long ****)(ppplStack_660 + 0x4a);
      }
      ppplStack_2f8 = (long ***)CONCAT71(ppplStack_2f8._1_7_,1);
      func_0x0001072ee33c(&ppplStack_310);
      ppplStack_698 = (long ***)pppplVar27;
    }
    uStack_398 = (long ****)CONCAT71(uStack_398._1_7_,1);
    func_0x00010739cca4(&uStack_3a0);
  }
  if (bStack_5e8 == 1) {
    ppplStack_308 = ppplStack_5f0;
    ppplStack_310 = ppplStack_5f8;
  }
  else if (ppplStack_6a0 == ppplStack_698) {
    ppplStack_308 = (long ***)0x0;
    ppplStack_310 = (long ***)0x0;
  }
  else {
    dVar29 = 0.0;
    dVar31 = 0.0;
    for (pppplVar27 = (long ****)ppplStack_6a0; pppplVar27 != (long ****)ppplStack_698;
        pppplVar27 = pppplVar27 + 0x4a) {
      dVar31 = dVar31 + (double)pppplVar27[0x13];
      dVar29 = dVar29 + (double)pppplVar27[0x12];
    }
    dVar30 = (double)(ulong)(((long)ppplStack_698 - (long)ppplStack_6a0) / 0x250);
    func_0x000107246514(dVar31 / dVar30,dVar29 / dVar30,&ppplStack_310,0);
  }
  ppplVar9 = ppplStack_308;
  ppplVar8 = ppplStack_310;
  pppplVar27 = (long ****)ppplStack_310;
  func_0x00010739c204(appplStack_670,3);
  uStack_398 = (long ****)0x0;
  uStack_3a0 = (long ****)0x0;
  ppplStack_390 = (long ***)0x0;
  uVar18 = ((long)ppplStack_698 - (long)ppplStack_6a0) / 0x250;
  uVar28 = uVar18 + 1;
  if (uVar18 < 0xffffffffffffffff) {
    if (uVar28 < 0xaaaaaaaaaaaaaab) {
      FUN_10739c2a0(&ppplStack_310,uVar28,0,&ppplStack_390);
      func_0x00010739cef8();
      func_0x00010739cfbc();
      ppplStack_390 = ppplStack_2f8;
      uStack_398 = (long ****)ppplStack_300;
      pppplVar27 = (long ****)ppplStack_300;
      func_0x00010739cec4();
      goto LAB_10739b648;
    }
  }
  else {
LAB_10739b648:
    pppplVar22 = (long ****)ppplStack_6a0;
    pppplVar3 = (long ****)ppplStack_698;
    if (bStack_5e8 == 1) {
      ppplStack_658 = ppplStack_5f0;
      ppplStack_660 = ppplStack_5f8;
      if (uStack_398 < ppplStack_390) {
        uStack_398[1] = ppplStack_5f0;
        *uStack_398 = ppplStack_5f8;
        uStack_398[2] = (long ***)0x0;
        pppplVar27 = (long ****)ppplStack_5f8;
        uStack_398 = uStack_398 + 3;
      }
      else {
        func_0x00010739cfac();
        lVar16 = 0;
        if (extraout_x9 != 0) {
          lVar16 = extraout_x8_00 / extraout_x9;
        }
        func_0x00010739cff8(lVar16);
        func_0x00010739cfac(uStack_398);
        func_0x00010739d004();
        ppplVar6 = ppplStack_300;
        pppplVar27 = (long ****)ppplStack_660;
        ppplStack_300[1] = (long **)ppplStack_658;
        *ppplVar6 = (long **)ppplStack_660;
        ppplVar6[2] = (long **)0x0;
        func_0x00010739cef8();
        func_0x00010739cfbc();
        ppplStack_390 = ppplStack_2f8;
        uStack_398 = (long ****)(ppplVar6 + 3);
        func_0x00010739cec4();
        pppplVar22 = (long ****)ppplStack_6a0;
        uStack_398 = (long ****)(ppplVar6 + 3);
        pppplVar3 = (long ****)ppplStack_698;
      }
    }
    for (; pppplVar21 = uStack_398, pppplVar26 = uStack_3a0, puVar4 = PTR___ZSt7nothrow_1103469d8,
        pppplVar22 != pppplVar3; pppplVar22 = pppplVar22 + 0x4a) {
      func_0x000107246514(pppplVar22[0x13],pppplVar22[0x12],&ppplStack_660,0);
      pppplVar26 = (long ****)pppplVar22[0x12];
      func_0x00010739c1b8(pppplVar26,pppplVar22[0x13],ppplVar9,ppplVar8,appplStack_670);
      ppplVar7 = ppplStack_658;
      ppplVar6 = ppplStack_660;
      pppplVar27 = pppplVar26;
      if (uStack_398 < ppplStack_390) {
        *uStack_398 = ppplStack_660;
        uStack_398[1] = ppplStack_658;
        pppplVar21 = uStack_398 + 3;
        uStack_398[2] = (long ***)pppplVar26;
      }
      else {
        func_0x00010739cff8(((long)uStack_398 - (long)uStack_3a0) / 0x18);
        func_0x00010739d004();
        ppplVar10 = ppplStack_300;
        *ppplStack_300 = (long **)ppplVar6;
        ppplVar10[1] = (long **)ppplVar7;
        ppplVar10[2] = (long **)pppplVar26;
        pppplVar21 = (long ****)(ppplVar10 + 3);
        _memcpy(ppplStack_308 + (((long)uStack_398 - (long)uStack_3a0) / -0x18) * 3);
        func_0x00010739cfbc();
        ppplStack_390 = ppplStack_2f8;
        uStack_398 = pppplVar21;
        func_0x00010739cec4();
      }
      uStack_398 = pppplVar21;
    }
    ppplStack_308 = (long ***)0x0;
    ppplStack_310 = (long ***)0x0;
    pppplVar3 = (long ****)(((long)uStack_398 - (long)uStack_3a0) / 0x18);
    pppplVar22 = pppplVar3;
    if ((long)uStack_398 - (long)uStack_3a0 < 1) {
      pppplVar22 = (long ****)0x0;
    }
    else {
      for (; 0 < (long)pppplVar22; pppplVar22 = (long ****)((ulong)pppplVar22 >> 1)) {
        lVar16 = (long)pppplVar22 * 0x18;
        __ZnwmRKSt9nothrow_t(lVar16,puVar4);
        if (lVar16 != 0) goto LAB_10739b81c;
      }
      lVar16 = 0;
LAB_10739b81c:
      ppplStack_660 = (long ***)0x0;
      ppplStack_658 = (long ***)pppplVar22;
      FUN_10739c604(&ppplStack_310,lVar16);
      ppplStack_308 = (long ***)pppplVar22;
      FUN_10739c61c(&ppplStack_660);
    }
    FUN_10739c3b8(pppplVar26,pppplVar21,pppplVar3,ppplStack_310,pppplVar22);
    FUN_10739c61c(&ppplStack_310);
    lStack_680 = 0;
    uStack_678 = 0;
    lStack_688 = 0;
    func_0x00010739cfac(uStack_398);
    lVar16 = 0;
    if (extraout_x9_00 != 0) {
      lVar16 = extraout_x8_01 / extraout_x9_00;
    }
    func_0x000107257f58(&lStack_688,lVar16);
    pppplVar3 = uStack_398;
    for (pppplVar22 = uStack_3a0; fVar32 = SUB84(pppplVar27,0), pppplVar22 != pppplVar3;
        pppplVar22 = pppplVar22 + 3) {
      ppplStack_308 = pppplVar22[1];
      pppplVar27 = (long ****)*pppplVar22;
      ppplStack_310 = (long ***)pppplVar27;
      func_0x00010725ade4(&lStack_688,&ppplStack_310);
    }
    FUN_10739cc78(&uStack_3a0);
    func_0x0001072bbf74(&ppplStack_6a0);
    func_0x000107751284(&ppplStack_310);
    uStack_3a0 = (long ****)((ulong)uStack_3a0 & 0xffffffffffffff00);
    uStack_368 = uStack_368 & 0xffffffffffffff00;
    uStack_360 = 0;
    func_0x00010739cfd8(lVar24 + 0x38);
    fVar34 = fVar32;
    func_0x00010739cff0();
    uStack_3a0 = (long ****)((ulong)uStack_3a0 & 0xffffffffffffff00);
    uStack_368 = uStack_368 & 0xffffffffffffff00;
    uStack_360 = 0;
    func_0x00010739cfd8(lVar24 + 0x70);
    func_0x00010739cff0();
    func_0x00010739cf8c(auStack_748);
    dVar31 = (double)fVar32;
    while( true ) {
      bVar12 = false;
      if ((1 < (ulong)(lStack_680 - lStack_688 >> 4)) &&
         (bVar12 = false, !NAN(dStack_6f0) && !NAN(dVar31))) {
        bVar12 = dStack_6f0 < dVar31;
      }
      if (!bVar12) break;
      lStack_680 = lStack_680 + -0x10;
      func_0x00010739cf8c(&uStack_3a0);
      _memcpy(auStack_748,&uStack_3a0,0x88);
    }
    if (bStack_5e8 == 1) {
      if (lStack_680 - lStack_688 == 0x10) {
        dStack_6f0 = dVar31;
        if ((bStack_6e8 & 1) == 0) {
          bStack_6e8 = 1;
        }
      }
      else {
        dVar29 = (double)fVar34;
        bVar12 = false;
        bVar13 = false;
        bVar14 = false;
        if (dVar31 <= dStack_6f0) {
          bVar12 = false;
          bVar13 = false;
          bVar14 = true;
          if (!NAN(dStack_6f0) && !NAN(dVar29)) {
            bVar12 = dStack_6f0 < dVar29;
            bVar13 = dStack_6f0 == dVar29;
            bVar14 = false;
          }
        }
        if (!bVar13 && bVar12 == bVar14) {
          fVar25 = (float)dStack_6f0;
          if (fVar25 <= fVar34) {
            fVar34 = fVar25;
          }
          if (fVar32 <= fVar25) {
            fVar32 = fVar34;
          }
          if ((bStack_6e8 & 1) == 0) {
            bStack_6e8 = 1;
          }
          dStack_6f0 = (double)fVar32;
        }
      }
    }
    if ((bStack_6e8 & 1) == 0) {
      bStack_6e8 = 1;
      dStack_6f0 = dVar31;
    }
    uStack_3a0 = (long ****)CONCAT44(uStack_3a0._4_4_,0x11d);
    uStack_388 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_378 = 0;
    ppuStack_380 = &PTR_DAT_110996720;
    uStack_360 = CONCAT44(uStack_360._4_4_,0x11d);
    uStack_358 = 0;
    uStack_354 = 1;
    func_0x00010739cf20();
    ppplStack_698._0_4_ = 3;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(0x11b);
    uStack_378 = 0;
    ppuStack_380 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_354 = 1;
    func_0x00010739cf20();
    puVar20 = &uStack_3a0;
    func_0x00010729d56c(puVar20,"step",&UNK_10f40b3c8);
    ppplStack_6a0 = (long ***)(long)dStack_6f0;
    ppplStack_698._0_4_ = 3;
    func_0x00010726e09c(lVar1,puVar20,&ppplStack_6a0);
    func_0x00010739cf60();
    func_0x00010739cedc(0x18e);
    uStack_378 = 0;
    ppuStack_380 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_354 = 1;
    func_0x00010739cf20();
    ppplStack_6a0 = (long ***)(long)(dStack_6f0 * 100.0);
    ppplStack_698._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(399);
    uStack_378 = 0;
    ppuStack_380 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_354 = 1;
    func_0x00010739cf20();
    dStack_6d0 = dStack_6d0 * 100.0;
    if (cStack_6c8 == '\0') {
      dStack_6d0 = 0.0;
    }
    ppplStack_6a0 = (long ***)(long)dStack_6d0;
    ppplStack_698._0_4_ = 2;
    func_0x00010739ceb4();
    func_0x00010739cf60();
    func_0x00010739cedc(400);
    uStack_378 = 0;
    ppuStack_380 = &PTR_DAT_110996720;
    func_0x00010739d040();
    uStack_354 = 1;
    func_0x00010739cf20();
    if (cStack_6d8 == '\0') {
      dStack_6e0 = 0.0;
    }
    ppplStack_6a0 = (long ***)(long)dStack_6e0;
    ppplStack_698 = (long ***)CONCAT44(ppplStack_698._4_4_,2);
    func_0x00010739ceb4();
    fVar32 = SUB84(dStack_6e0,0);
    func_0x00010739cf60();
    func_0x000107267da8(&ppplStack_310);
    func_0x00010739d010();
    ppplStack_310 = (long ***)((ulong)ppplStack_310 & 0xffffffffffffff00);
    uStack_2d8 = uStack_2d8 & 0xffffffffffffff00;
    uStack_2d0 = 0;
    func_0x0001073837dc(lVar24,&uStack_530,&ppplStack_310,&UNK_10de60798);
    func_0x00010724b3d8(&ppplStack_310);
    ppplStack_300 = (long ***)((ulong)ppplStack_300 & 0xffffffffffffff00);
    ppplStack_2f8 = (long ***)((ulong)ppplStack_2f8 & 0xffffffffffffff00);
    ppuStack_2f0 = (undefined **)((ulong)ppuStack_2f0 & 0xffffffffffffff00);
    uStack_2e8 = uStack_2e8 & 0xffffffffffffff00;
    uStack_290 = 0;
    uStack_270 = 0;
    ppplStack_310 = (long ***)((ulong)(uint)(int)fVar32 * 1000000);
    ppplStack_308 = (long ***)CONCAT71(ppplStack_308._1_7_,1);
    uStack_2d8 = 0x4008000000000000;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0xc000000000000000;
    uStack_2b8 = 0xc000000000000000;
    uStack_2c0 = 0x4008000000000000;
    uStack_2b0 = CONCAT71(uStack_2b0._1_7_,1);
    (**(code **)(*plVar17 + 0x18))(plVar17,auStack_748,&ppplStack_310);
    bVar5 = bStack_6e8;
    dVar31 = dStack_6f0;
    func_0x00010725ab38(&ppplStack_310);
    puVar20 = &uStack_530;
    func_0x000107267da8();
    if (bVar5 == 0) {
      dVar31 = 0.0;
    }
    uStack_780 = 0;
    if (lStack_760 != 0) {
      uStack_780 = 0x100;
    }
    uStack_780 = uStack_780 | bStack_5e8;
    *(undefined1 *)(plVar23 + 0xe) = 1;
    puVar19 = (undefined8 *)plVar23[8];
    ppplStack_310 = (long ***)CONCAT44(ppplStack_310._4_4_,0x11c);
    ppplStack_2f8 = (long ***)((ulong)ppplStack_2f8 & 0xffffffff00000000);
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    ppuStack_2f0 = &PTR_DAT_110996720;
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,0x11c);
    uStack_2c8 = CONCAT35((int3)((ulong)uStack_2c8 >> 0x28),0x100000000);
    uStack_2b0 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    dStack_788 = dVar31;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_3a0 = (long ****)((((long)puVar20 - param_5[1]) / 1000000) * 1000);
    uStack_530 = *puVar19;
    uStack_528 = 3;
    FUN_10743f9dc(puVar19,&ppplStack_310,&uStack_3a0,&uStack_530,7);
    func_0x000107262330(&ppplStack_310);
    uVar15 = (char)param_5[6] == '\x01';
    if ((bool)uVar15) {
      plVar17 = (long *)param_5[5];
      if (plVar17 == (long *)0x0) {
        func_0x000104bfeb48();
        goto LAB_10739bd6c;
      }
      (**(code **)(*plVar17 + 0x30))(plVar17,&dStack_788);
    }
    func_0x0001072bb81c(auStack_778);
    func_0x0001072bbee8(auStack_650);
    func_0x00010739cf4c(uStack_b8);
    if ((bool)uVar15) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10739c28c();
LAB_10739bd6c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10739bd70);
  (*pcVar11)();
}



/* Entry: 10739be8c; end: 10739beb3;  */

undefined8 * FUN_10739be8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_10739c0ec(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10739beb4; end: 10739c0eb;  */

undefined8 * FUN_10739beb4(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 auStack_250 [2];
  undefined4 uStack_248;
  undefined1 auStack_240 [24];
  undefined4 auStack_228 [6];
  undefined4 uStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong auStack_1a0 [2];
  ulong auStack_190 [2];
  ulong uStack_180;
  ulong uStack_178;
  undefined1 uStack_170;
  ulong uStack_128;
  undefined1 uStack_120;
  ulong uStack_118;
  undefined8 uStack_58;
  
  func_0x00010739cf9c();
  uStack_58 = extraout_x8;
  if (((*(byte *)((long)param_1 + 0x71) & 1) == 0) && ((*(byte *)(param_1 + 0xe) & 1) == 0)) {
    puVar4 = param_1;
    func_0x00010785f1f4();
    uStack_180 = uStack_180 & 0xffffffffffffff00;
    puVar4 = puVar4 + 0x11c;
    func_0x00010724e2c8(puVar4,&uStack_180);
    (**(code **)(*(long *)param_1[5] + 0x20))(&uStack_180);
    auStack_1a0[0] = uStack_128;
    auStack_190[0] = uStack_118;
    func_0x0001072bbee8(&uStack_180);
    uVar3 = auStack_190[0];
    puVar1 = auStack_190;
    if ((auStack_190[0] & 1) == 0) {
      puVar1 = param_1 + 4;
    }
    uVar2 = *puVar1;
    _memcpy(&uStack_180,param_2,0x88);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    in_ZR = ((uint)puVar4 & (uint)(byte)uVar2) == 1;
    if ((bool)in_ZR) {
      in_ZR = (uVar3 & 1) == 0;
      puVar1 = auStack_1a0;
      if ((bool)in_ZR) {
        puVar1 = param_1 + 2;
      }
      uStack_178 = puVar1[1];
      uStack_180 = *puVar1;
      uStack_170 = 1;
      uStack_128 = 0x4024000000000000;
      uStack_120 = 1;
      pcVar6 = "user_location";
    }
    else {
      pcVar6 = "style";
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_1b8,pcVar6);
    uVar7 = param_1[8];
    auStack_228[0] = 0x121;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuStack_208 = &PTR_DAT_110996720;
    uStack_200 = 0;
    uStack_1e8 = 0x121;
    uStack_1e0 = 0;
    uStack_1dc = 1;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_240,&uStack_1b8);
    puVar5 = auStack_228;
    func_0x00010726e300(puVar5,"source",auStack_240);
    auStack_250[0] = 1;
    uStack_248 = 0;
    uStack_260 = *(undefined8 *)param_1[8];
    uStack_258 = 3;
    FUN_10743fa9c(uVar7,puVar5,auStack_250,&uStack_260,7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
    func_0x000107262330(auStack_228);
    (**(code **)(*(long *)param_1[7] + 0x20))((long *)param_1[7],&uStack_180);
    *(undefined1 *)((long)param_1 + 0x71) = 1;
    param_1 = &uStack_1b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010739cf4c(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  func_0x000107262330(auStack_228);
  puVar4 = &uStack_1b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010739cf84();
  *(undefined1 *)puVar4 = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  FUN_10739c128();
  return puVar4;
}


