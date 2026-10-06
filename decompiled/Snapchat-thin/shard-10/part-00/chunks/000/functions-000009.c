/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107331bbc; end: 107331bd3;  */

void FUN_107331bbc(long *param_1)

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



/* Entry: 107331bd4; end: 107331bf7;  */

void FUN_107331bd4(void)

{
  func_0x000107348008();
  func_0x00010028ad98();
  func_0x000107345ab0();
  return;
}



/* Entry: 107331bf8; end: 107331bff;  */

void FUN_107331bf8(void)

{
  return;
}



/* Entry: 107331c00; end: 107331c23;  */

void FUN_107331c00(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_FUN_1109a1560);
  return;
}



/* Entry: 107331c24; end: 107331c3f;  */

void FUN_107331c24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a1560;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107331c40; end: 107331e27;  */

void FUN_107331c40(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [16];
  long lStack_298;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107346ea8();
  func_0x0001073447e0();
  lVar6 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar6 + 0x68);
  uStack_2b8 = *(undefined8 *)(lVar6 + 0xa0);
  uStack_2c0 = *(undefined8 *)(lVar6 + 0x98);
  uStack_48 = extraout_x8;
  if (*(long *)(lVar6 + 0xa0) != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  auStack_2a8[0] = 0;
  uStack_50 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_1073263dc(auStack_2a8);
  func_0x00010725b6e0(&uStack_2c0);
  plVar2 = *(long **)(lVar6 + 0x78);
  uStack_2d8 = unaff_x19[1];
  uStack_2e0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  uStack_2d0 = 0;
  (**(code **)(*plVar2 + 0x88))();
  func_0x0001072b978c(&uStack_2e0);
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x0001073480a0();
  FUN_107323634();
  uStack_2f8 = unaff_x19[1];
  uStack_300 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_01 != 0);
  }
  uStack_2f0 = 0;
  uVar5 = plVar2[2];
  uVar3 = plVar2[1];
  uVar1 = uVar3 == uVar5;
  if (uVar3 < uVar5) {
    FUN_1073255f0(uVar3,&uStack_300);
    lVar6 = uVar3 + 0x18;
  }
  else {
    plVar4 = plVar2;
    FUN_1073254b4(plVar2,(long)(uVar3 - *plVar2) / 0x18 + 1);
    FUN_1073255bc(auStack_2a8,plVar4,(plVar2[1] - *plVar2) / 0x18,plVar2 + 2);
    FUN_1073255f0(lStack_298,&uStack_300);
    lStack_298 = lStack_298 + 0x18;
    FUN_1073254fc(plVar2,auStack_2a8);
    lVar6 = plVar2[1];
    FUN_107325664(auStack_2a8);
  }
  plVar2[1] = lVar6;
  func_0x0001072b978c();
  func_0x0001073447cc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072b978c(&uStack_300);
  func_0x00010726ee94(lVar6);
  func_0x000107345614();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 107331e28; end: 107331e4f;  */

void FUN_107331e28(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a15d0);
  func_0x000107344bc4();
  return;
}



/* Entry: 107331e50; end: 107331e5b;  */

undefined ** FUN_107331e50(void)

{
  return &PTR_DAT_1109a15d0;
}



/* Entry: 107331e5c; end: 107331ebb;  */

void FUN_107331e5c(long param_1)

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



/* Entry: 107331ebc; end: 107331ecf;  */

void FUN_107331ebc(void)

{
  func_0x000107331e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107331ed0; end: 107331f03;  */

void FUN_107331ed0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010734506c();
  func_0x000107347ed4(&PTR_SUB_1109a15f0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107331f04; end: 107331f4b;  */

void FUN_107331f04(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_1109a15f0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107331f4c; end: 107331f9b;  */

void FUN_107331f4c(ulong param_1)

{
  undefined1 *unaff_x20;
  long unaff_x21;
  
  func_0x00010734742c();
  func_0x00010785f1f4();
  func_0x000107346dc4();
  if ((param_1 & 1) == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x20] = 0;
  }
  else {
    (**(code **)(**(long **)(unaff_x21 + 8) + 0xa0))();
  }
  return;
}



/* Entry: 107331f9c; end: 107331fc3;  */

void FUN_107331f9c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1660);
  func_0x000107344bc4();
  return;
}



/* Entry: 107331fc4; end: 107331fcf;  */

undefined ** FUN_107331fc4(void)

{
  return &PTR_DAT_1109a1660;
}



/* Entry: 107331fd0; end: 107331ffb;  */

undefined8 * FUN_107331fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a1680;
  func_0x0001072aa27c(param_1 + 1);
  return param_1;
}



/* Entry: 107331ffc; end: 10733200f;  */

void FUN_107331ffc(void)

{
  FUN_107331fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107332010; end: 107332043;  */

void FUN_107332010(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010734506c();
  func_0x000107347ed4(&PTR_FUN_1109a1680);
  if (extraout_x8 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107332044; end: 10733208b;  */

void FUN_107332044(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a1680;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107345624(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10733208c; end: 1073320f7;  */

void FUN_10733208c(int param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010785f1f4();
  func_0x000107346dc4();
  if (param_1 != 0) {
    (**(code **)(**(long **)(unaff_x20 + 8) + 0xb0))();
  }
  return;
}



/* Entry: 1073320f8; end: 107332103;  */

undefined ** FUN_1073320f8(void)

{
  return &PTR_DAT_1109a16e0;
}



/* Entry: 107332104; end: 107332183;  */

void FUN_107332104(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346b2c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x0001073448d0();
  }
  else {
    func_0x000107344fa8();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 107332184; end: 1073321c7;  */

void FUN_107332184(undefined8 param_1,long param_2)

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



/* Entry: 1073321c8; end: 10733220b;  */

void FUN_1073321c8(undefined8 param_1,long param_2)

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



/* Entry: 10733220c; end: 107332233;  */

void FUN_10733220c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 8) = extraout_w8;
  FUN_107332234();
  return;
}



/* Entry: 107332234; end: 107332277;  */

void FUN_107332234(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  func_0x0001072c9368();
  iVar1 = *(int *)(unaff_x20 + 8);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_FUN_1109a16f0);
    *(int *)(unaff_x19 + 8) = iVar1;
  }
  return;
}



/* Entry: 107332278; end: 107332297;  */

void FUN_107332278(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 107332298; end: 1073322cf;  */

undefined8 FUN_107332298(undefined8 param_1)

{
  func_0x000107346c9c();
  FUN_1073322d0();
  return param_1;
}



/* Entry: 1073322d0; end: 10733231f;  */

void FUN_1073322d0(void)

{
  long in_x3;
  
  func_0x000107347f70();
  if (in_x3 != 0) {
    func_0x000107345fc4();
    FUN_107332320();
    func_0x00010734671c();
    FUN_107332368();
  }
  func_0x00010734660c();
  FUN_107332454();
  return;
}



/* Entry: 107332320; end: 107332367;  */

void FUN_107332320(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    func_0x000107346d78();
    func_0x0001073241f0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x58;
  }
  else {
    FUN_1073241b0();
    func_0x0001073469b0();
    param_1 = param_1 + 0x10;
    FUN_107332394();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 107332368; end: 107332393;  */

void FUN_107332368(long param_1)

{
  long unaff_x19;
  
  func_0x0001073469b0();
  param_1 = param_1 + 0x10;
  FUN_107332394();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 107332394; end: 1073323a7;  */

void FUN_107332394(void)

{
  FUN_1073323a8();
  return;
}



/* Entry: 1073323a8; end: 10733241b;  */

long FUN_1073323a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010734513c();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x000107346964();
    FUN_10733241c();
    param_4 = lStack_38 + 0x58;
    lStack_38 = param_4;
  }
  func_0x000107346cb4();
  FUN_1073242e8(auStack_60);
  return param_4;
}



/* Entry: 10733241c; end: 107332453;  */

void FUN_10733241c(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  func_0x000104c2fe00();
  func_0x0001073248fc(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 107332454; end: 10733247f;  */

long FUN_107332454(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072c9264(param_1);
  }
  return param_1;
}



/* Entry: 107332480; end: 1073324c3;  */

void FUN_107332480(undefined8 param_1,long param_2)

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



/* Entry: 1073324c4; end: 1073324f7;  */

long FUN_1073324c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1073324f8(param_1);
    func_0x0001073457b0();
  }
  return param_1;
}



/* Entry: 1073324f8; end: 107332533;  */

void FUN_1073324f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x000107325350(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 107332534; end: 10733253f;  */

void FUN_107332534(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107345150();
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



/* Entry: 107332540; end: 1073325b3;  */

void FUN_107332540(long param_1)

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



/* Entry: 1073325b4; end: 1073325bb;  */

void FUN_1073325b4(void)

{
  return;
}



/* Entry: 1073325bc; end: 1073325db;  */

void FUN_1073325bc(undefined8 *param_1)

{
  func_0x000107345a98();
  *param_1 = &PTR_FUN_1109a1720;
  return;
}



/* Entry: 1073325dc; end: 1073325f7;  */

void FUN_1073325dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a1720;
  return;
}



/* Entry: 1073375f8; end: 10733761f;  */

void FUN_1073375f8(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2a10);
  func_0x000107344bc4();
  return;
}



/* Entry: 107337620; end: 10733762b;  */

undefined ** FUN_107337620(void)

{
  return &PTR_DAT_1109a2a10;
}



/* Entry: 10733762c; end: 107338a13;  */

void FUN_10733762c(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  char **ppcVar10;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  char **unaff_x19;
  char in_stack_00000058;
  undefined8 uStack_d80;
  undefined1 auStack_d78 [47];
  char cStack_d49;
  undefined4 auStack_d48 [12];
  undefined4 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined1 uStack_cf2;
  undefined1 uStack_cf1;
  undefined1 auStack_cf0 [112];
  long lStack_c80;
  undefined1 auStack_c78 [8];
  byte bStack_c70;
  undefined1 auStack_c68 [56];
  undefined1 auStack_c30 [16];
  char cStack_c20;
  undefined1 auStack_c18 [16];
  undefined1 uStack_c08;
  undefined1 uStack_c00;
  undefined1 uStack_bc0;
  undefined1 auStack_bb8 [16];
  char cStack_ba8;
  undefined1 auStack_ba0 [16];
  undefined1 uStack_b90;
  undefined1 uStack_b88;
  undefined1 uStack_b48;
  char *pcStack_b40;
  undefined1 auStack_b38 [96];
  int iStack_ad8;
  undefined1 auStack_ac0 [72];
  undefined1 auStack_a78 [88];
  undefined1 auStack_a20 [80];
  undefined1 auStack_9d0 [72];
  undefined1 auStack_988 [72];
  undefined1 auStack_940 [72];
  undefined1 auStack_8f8 [64];
  undefined1 auStack_8b8 [64];
  undefined1 auStack_878 [64];
  undefined1 auStack_838 [88];
  undefined1 auStack_7e0 [72];
  undefined1 auStack_798 [72];
  undefined1 auStack_750 [120];
  undefined1 auStack_6d8 [112];
  undefined1 auStack_668 [56];
  undefined1 auStack_630 [48];
  undefined4 uStack_600;
  char *pcStack_5f8;
  undefined1 auStack_5f0 [112];
  char *pcStack_580;
  undefined1 auStack_578 [12];
  undefined4 uStack_56c;
  undefined1 uStack_568;
  undefined4 uStack_550;
  undefined4 uStack_538;
  undefined *puStack_508;
  undefined8 uStack_500;
  char cStack_4f8;
  undefined4 uStack_4c8;
  undefined **ppuStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_480;
  char *pcStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined1 auStack_438 [8];
  undefined4 uStack_430;
  undefined1 auStack_428 [8];
  undefined8 uStack_420;
  char cStack_418;
  undefined1 auStack_3f0 [8];
  undefined4 uStack_3e8;
  undefined1 auStack_3e0 [8];
  undefined8 uStack_3d8;
  undefined4 uStack_3a0;
  undefined1 auStack_398 [8];
  undefined8 auStack_390 [7];
  undefined4 uStack_358;
  ulong *puStack_350;
  undefined8 auStack_348 [7];
  undefined4 uStack_310;
  char *pcStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  ulong auStack_2b8 [2];
  undefined1 uStack_2a8;
  uint uStack_278;
  undefined *puStack_270;
  ulong uStack_268;
  char cStack_260;
  undefined1 auStack_230 [16];
  uint uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined1 auStack_1f0 [24];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [88];
  undefined1 auStack_158 [8];
  char *pcStack_150;
  undefined1 auStack_148 [8];
  char cStack_140;
  char cStack_118;
  undefined1 auStack_110 [16];
  char cStack_100;
  char cStack_f8;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [4];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  char cStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar9 = param_1;
  func_0x000107344b50();
  cStack_d49 = '\x10';
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  auStack_ba0[0] = 0;
  uStack_b90 = 0;
  uStack_b88 = 0;
  uStack_b48 = 0;
  uStack_70 = extraout_x8;
  func_0x00010734602c();
  func_0x00010734560c(auStack_bb8);
  if (cStack_ba8 == '\x01') {
    unaff_x19 = &pcStack_b40;
    func_0x00010734577c(&pcStack_b40,auStack_bb8);
    if (iStack_ad8 == 0) {
      func_0x000107345800(auStack_ba0);
    }
    else {
      func_0x000107346e04();
      func_0x000107344e54();
      func_0x00010734576c(&pcStack_150);
      func_0x0001073477b8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_150);
    }
    func_0x000107345634();
  }
  auStack_c18[0] = 0;
  uStack_c08 = 0;
  uStack_c00 = 0;
  uStack_bc0 = 0;
  func_0x0001073456a4();
  func_0x000107345ffc();
  func_0x00010734560c(auStack_c30);
  if (cStack_c20 == '\x01') {
    unaff_x19 = &pcStack_b40;
    func_0x00010734577c(&pcStack_b40,auStack_c30);
    if (iStack_ad8 == 0) {
      func_0x000107345800(auStack_c18);
    }
    else {
      func_0x000107346e04();
      func_0x000107344e48();
      func_0x00010734576c(&pcStack_150);
      func_0x0001073477b8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_150);
    }
    func_0x000107345634();
  }
  func_0x000107347c9c();
  func_0x0001073456a4();
  func_0x00010734560c(&pcStack_150);
  if (cStack_140 == '\x01') {
    func_0x000107345a54(&pcStack_b40,&pcStack_150);
    FUN_107338d70(auStack_d78,&pcStack_b40);
    FUN_107338e64(&pcStack_b40);
  }
  func_0x0001072f5f4c(&pcStack_150);
  func_0x0001073456a4();
  func_0x000107347c90();
  func_0x00010734560c();
  (**(code **)(pcStack_150 + 0x68))(&pcStack_b40,unaff_x19 + 1);
  func_0x000104c318bc(auStack_c68,&pcStack_b40);
  func_0x00010734791c();
  func_0x0001072f5f4c(&pcStack_150);
  func_0x0001073456a4();
  func_0x000107345fe4();
  func_0x00010734560c(&lStack_c80);
  cVar4 = cStack_d49;
  uVar8 = bStack_c70 == 1;
  if ((bool)uVar8) {
    (**(code **)(lStack_c80 + 0x70))(&pcStack_b40,auStack_c78);
    func_0x0001077765a4(auStack_cf0,&pcStack_b40,&pcStack_150);
    func_0x000107267ed0(&pcStack_b40);
    cVar4 = cStack_d49;
    if ((bStack_c70 & 1) == 0) goto LAB_1073384fc;
    func_0x000107345f14();
    func_0x000107345e9c();
    func_0x000107344dec(&puStack_270);
    uVar8 = cStack_260 == '\x01';
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_580 = "movement";
        func_0x000107344c04();
        func_0x000107345978();
        func_0x00010734582c();
      }
      FUN_10733afa0(&pcStack_580);
      unaff_x19 = &pcStack_150;
      FUN_107339874(&pcStack_150,&pcStack_580);
      func_0x000107346264(auStack_1d0,&puStack_270);
      FUN_10733b4cc();
      func_0x000107345f74();
      ppcVar10 = &pcStack_580;
    }
    else {
      FUN_10733afa0(&pcStack_150);
      func_0x0001073477b0(auStack_1d0);
      ppcVar10 = &pcStack_150;
    }
    func_0x000104c2f714(ppcVar10);
    func_0x0001072f5f4c(&puStack_270);
    func_0x000107345ee4();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        puStack_270 = &DAT_10f68f0c6;
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x000107347518();
      func_0x000107346264(auStack_218,&pcStack_5f8);
      FUN_10733b524();
      func_0x000107346bc8();
    }
    else {
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_1d8 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    auStack_2b8[0] = 0;
    uStack_2c0 = 0;
    auStack_2b8[1] = 0;
    func_0x000107345e9c();
    func_0x000107344dec(&pcStack_478);
    if ((char)uStack_468 == '\x01') {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_580 = "lat-lngs";
        func_0x000107344c04();
        func_0x000107345978();
        func_0x00010734582c();
      }
      pcStack_308._0_1_ = 0;
      uStack_2f8 = uStack_2f8 & 0xffffff00;
      FUN_10733b74c(&pcStack_580,&pcStack_308);
      func_0x000107345f14();
      func_0x0001073458f0(&pcStack_150,&puStack_350,&pcStack_478,&pcStack_5f8);
      FUN_1075594a8();
      uStack_268._0_1_ = 0;
      uStack_220 = 0xffffffff;
      FUN_10733a880(&uStack_268);
      ppcVar10 = &pcStack_150;
      if (cStack_f8 == '\0') {
        ppcVar10 = &pcStack_580;
      }
      uVar2 = *(uint *)(ppcVar10 + 10);
      unaff_x19 = (char **)(ulong)uVar2;
      if (uVar2 != 0xffffffff) {
        ppcVar10 = &pcStack_150;
        if (cStack_f8 == '\0') {
          ppcVar10 = &pcStack_580;
        }
        puStack_350 = &uStack_268;
        (*(code *)(&PTR_FUN_1109a1da8)[uVar2])(&puStack_350,ppcVar10 + 1);
        uStack_220 = uVar2;
      }
      FUN_10733b71c(&pcStack_150);
      func_0x000107345ee4();
      func_0x000107346f38(&pcStack_580);
      ppcVar10 = &pcStack_308;
    }
    else {
      pcStack_150 = (char *)((ulong)pcStack_150 & 0xffffffffffffff00);
      cStack_140 = '\0';
      FUN_10733b74c(&puStack_270,&pcStack_150);
      ppcVar10 = &pcStack_150;
    }
    FUN_10733a8d0(ppcVar10);
    func_0x0001072f5f4c(&pcStack_478);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2c0);
    uStack_470 = 0;
    pcStack_478 = (char *)0x0;
    uStack_468 = 0;
    func_0x000107345e9c();
    func_0x000107344dec(&pcStack_308);
    uVar8 = (char)uStack_2f8 == '\x01';
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_580 = "padding";
        func_0x000107344c04();
        func_0x000107345978();
        func_0x00010734582c();
      }
      auStack_578[0] = 0;
      uStack_568 = 0;
      uStack_538 = 1;
      func_0x000107345f14();
      func_0x0001073458f0(&pcStack_150,&puStack_350,&pcStack_308,&pcStack_5f8);
      FUN_107559250();
      cVar6 = cStack_100;
      auStack_2b8[0] = auStack_2b8[0] & 0xffffffffffffff00;
      uStack_278 = 0xffffffff;
      FUN_10733aafc(auStack_2b8);
      ppcVar10 = &pcStack_150;
      if (cVar6 == '\0') {
        ppcVar10 = &pcStack_580;
      }
      uVar2 = *(uint *)(ppcVar10 + 9);
      unaff_x19 = (char **)(ulong)uVar2;
      uVar8 = uVar2 == 0xffffffff;
      if (!(bool)uVar8) {
        uVar8 = cVar6 == '\0';
        puVar1 = auStack_148;
        if ((bool)uVar8) {
          puVar1 = auStack_578;
        }
        puStack_350 = auStack_2b8;
        (*(code *)(&PTR_FUN_1109a1dc0)[uVar2])(&puStack_350,puVar1);
        uStack_278 = uVar2;
      }
      func_0x00010733b7b4(&pcStack_150);
      func_0x000107345ee4();
      FUN_10733aafc(auStack_578);
    }
    else {
      auStack_2b8[0] = auStack_2b8[0] & 0xffffffffffffff00;
      uStack_2a8 = 0;
      uStack_278 = 1;
    }
    func_0x0001072f5f4c(&pcStack_308);
    func_0x0001073472ac();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_478 = "camera-anchor";
        func_0x000107344bec();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x000107347518();
      func_0x000107346264(&pcStack_308,&pcStack_5f8);
      FUN_10733b524();
      func_0x000107346bc8();
    }
    else {
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2c8 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_478 = "zoom";
        func_0x000107344bec();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(&puStack_350);
      func_0x000107345aa0();
    }
    else {
      auStack_348[0] = 0;
      uStack_310 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_478 = "bearing";
        func_0x000107344bec();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(auStack_398);
      func_0x000107345aa0();
    }
    else {
      auStack_390[0] = 0;
      uStack_358 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_478 = "pitch";
        func_0x000107344bec();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(auStack_3e0);
      func_0x000107345aa0();
    }
    else {
      uStack_3d8 = 0;
      uStack_3a0 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    uStack_470 = 0;
    pcStack_478 = (char *)0x0;
    uStack_468 = 0;
    func_0x000107345e9c();
    func_0x000107344dec(auStack_428);
    uVar8 = cStack_418 == '\x01';
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_580 = "animation-duration";
        func_0x000107344c04();
        func_0x000107345978();
        func_0x00010734582c();
      }
      pcStack_580 = (char *)((ulong)pcStack_580 & 0xffffffff00000000);
      uStack_550 = 1;
      func_0x000107345f14();
      ppuStack_4c0 = (undefined **)CONCAT71(ppuStack_4c0._1_7_,extraout_w8);
      puStack_508 = (undefined *)((ulong)puStack_508 & 0xffffffffffffff00);
      func_0x000107347c90();
      func_0x000107346f04(auStack_428,&pcStack_5f8);
      uVar8 = cStack_118 == '\0';
      ppcVar10 = unaff_x19;
      if ((bool)uVar8) {
        ppcVar10 = &pcStack_580;
      }
      func_0x00010727d614(auStack_d48,ppcVar10);
      func_0x00010727e950(&pcStack_150);
      func_0x000107345ee4();
      func_0x000107266a30(&pcStack_580);
    }
    else {
      auStack_d48[0] = 0;
      uStack_d18 = 1;
    }
    func_0x0001072f5f4c(auStack_428);
    func_0x0001073472ac();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_478 = "animation-velocity";
        func_0x000107344bec();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(auStack_428);
      func_0x000107345aa0();
    }
    else {
      uStack_420 = 0;
      uStack_3e8 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    uStack_4b8 = 0;
    ppuStack_4c0 = (undefined **)0x0;
    uStack_4b0 = 0;
    func_0x000107345e9c();
    func_0x000107344dec(&puStack_508);
    uVar8 = cStack_4f8 == '\x01';
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_580 = "animation-interpolator";
        func_0x000107344c04();
        func_0x000107345978();
        func_0x00010734582c();
      }
      pcStack_580 = (char *)((ulong)pcStack_580 & 0xffffffffffffff00);
      uStack_56c = 0;
      uStack_538 = 1;
      func_0x000107345f14();
      pcStack_d8 = (char *)CONCAT71(pcStack_d8._1_7_,extraout_w8_00);
      auStack_630[0] = 0;
      func_0x000107347c90();
      func_0x00010733b920(&puStack_508,&pcStack_5f8,param_3,&pcStack_d8,auStack_630);
      uVar8 = cStack_100 == '\0';
      ppcVar10 = unaff_x19;
      if ((bool)uVar8) {
        ppcVar10 = &pcStack_580;
      }
      FUN_10733b93c(&pcStack_478,ppcVar10);
      func_0x00010733b9dc(&pcStack_150);
      func_0x000107345ee4();
      FUN_10733acb4(&pcStack_580);
    }
    else {
      pcStack_478 = (char *)((ulong)pcStack_478 & 0xffffffffffffff00);
      uStack_468 = uStack_468 & 0xffffffff;
      uStack_430 = 1;
    }
    func_0x0001072f5f4c(&puStack_508);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_4c0);
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        puStack_508 = &UNK_10f40a753;
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(&ppuStack_4c0);
      func_0x000107345aa0();
    }
    else {
      uStack_4b8 = 0;
      uStack_480 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    func_0x000107344b60();
    func_0x000107344d48();
    func_0x000107346b44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_d8 = "height";
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      func_0x0001073450fc();
      func_0x000107344f7c(&puStack_508);
      func_0x000107345aa0();
    }
    else {
      uStack_500 = 0;
      uStack_4c8 = 1;
    }
    func_0x000107345968();
    func_0x000107345970();
    pcStack_d8 = (char *)0x0;
    uStack_d0 = 0;
    auStack_c8[0] = 0;
    func_0x000107345e9c();
    func_0x000107344dec(auStack_630);
    func_0x000107347f44();
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_5f8 = "feature-id";
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      FUN_10733b400(&pcStack_5f8);
      unaff_x19 = &pcStack_150;
      FUN_107339874(&pcStack_150,&pcStack_5f8);
      func_0x000107346264(&pcStack_580,auStack_630);
      FUN_10733b4cc();
      func_0x000107345f74();
      ppcVar10 = &pcStack_5f8;
    }
    else {
      FUN_10733b400(&pcStack_150);
      func_0x0001073477b0(&pcStack_580);
      ppcVar10 = &pcStack_150;
    }
    func_0x000104c2f714(ppcVar10);
    func_0x0001073461f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_d8);
    func_0x000107345528();
    func_0x000107345e9c();
    func_0x000107344dec(&uStack_88);
    if ((char)uStack_78 == '\x01') {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_d8 = "layer-id";
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      FUN_10733b400(&pcStack_d8);
      unaff_x19 = &pcStack_150;
      FUN_107339874(&pcStack_150,&pcStack_d8);
      func_0x000107346264(&pcStack_5f8,&uStack_88);
      FUN_10733b4cc();
      func_0x000107345f74();
      ppcVar10 = &pcStack_d8;
    }
    else {
      FUN_10733b400(&pcStack_150);
      func_0x0001073477b0(&pcStack_5f8);
      ppcVar10 = &pcStack_150;
    }
    func_0x000104c2f714(ppcVar10);
    func_0x0001072f5f4c(&uStack_88);
    func_0x000107345954();
    uStack_d10 = 0;
    uStack_d08 = 0;
    uStack_d00 = 0;
    func_0x000107345e9c();
    func_0x000107344dec(auStack_a0);
    uVar8 = cStack_90 == '\x01';
    if ((bool)uVar8) {
      if ((bRam00000001131ad3b0 & 1) == 0) {
        pcStack_d8 = "feature-anchor";
        func_0x000107344f34();
        func_0x00010734561c();
        func_0x000107345978();
        func_0x00010734582c();
      }
      pcStack_d8 = (char *)((ulong)pcStack_d8 & 0xffffffffffffff00);
      uStack_a8 = 1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_cf1 = 1;
      uStack_cf2 = 0;
      func_0x000107347c90();
      FUN_10733ba0c(auStack_a0,&uStack_88,param_3,&uStack_cf1,&uStack_cf2);
      uVar8 = cStack_118 == '\0';
      if ((bool)uVar8) {
        unaff_x19 = &pcStack_d8;
      }
      FUN_10733ba28(auStack_630,unaff_x19);
      func_0x00010733bad0(&pcStack_150);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      FUN_10733ad98(&pcStack_d8);
    }
    else {
      auStack_630[0] = 0;
      uStack_600 = 1;
    }
    func_0x0001072f5f4c(auStack_a0);
    func_0x000107345e10();
    FUN_1073244ec(auStack_b38,auStack_1c8);
    FUN_10733a728(auStack_ac0,&uStack_210);
    FUN_10733a818(auStack_a78,&uStack_268);
    FUN_10733aa98(auStack_a20,auStack_2b8);
    FUN_10733a728(auStack_9d0,&uStack_300);
    FUN_10733ab70(auStack_988,auStack_348);
    FUN_10733ab70(auStack_940,auStack_390);
    func_0x000107347254(auStack_8f8);
    func_0x00010727d9cc(auStack_8b8,auStack_d48);
    FUN_10733ab70(auStack_878,&uStack_420);
    FUN_10733ac4c(auStack_838,&pcStack_478);
    FUN_10733ab70(auStack_7e0,&uStack_4b8);
    FUN_10733ab70(auStack_798,&uStack_500);
    FUN_1073244ec(auStack_750,auStack_578);
    FUN_1073244ec(auStack_6d8,auStack_5f0);
    FUN_10733ad2c(auStack_668,auStack_630);
    FUN_10733ad98(auStack_630);
    FUN_10732442c(auStack_5f0);
    FUN_10732442c(auStack_578);
    FUN_10733abd8(&uStack_500);
    FUN_10733abd8(&uStack_4b8);
    FUN_10733acb4(&pcStack_478);
    func_0x000107345aa0();
    func_0x000107266a30(auStack_d48);
    func_0x00010734726c();
    FUN_10733abd8(auStack_390);
    FUN_10733abd8(auStack_348);
    FUN_10733a790(&uStack_300);
    func_0x000107347b74();
    func_0x000107346f38(&puStack_270);
    func_0x000107346f40(auStack_218);
    func_0x000107345e30(auStack_1d0);
    __Znwm(0x520);
    func_0x000107345c44();
    FUN_10733a728(auStack_438,auStack_ac0);
    FUN_10733a818(auStack_3f0,auStack_a78);
    FUN_10733aa98(auStack_398,auStack_a20);
    FUN_10733a728(auStack_348,auStack_9d0);
    FUN_10733ab70(&uStack_300,auStack_988);
    FUN_10733ab70(auStack_2b8,auStack_940);
    FUN_10733ab70(&puStack_270,auStack_8f8);
    func_0x00010727d9cc(auStack_230,auStack_8b8);
    FUN_10733ab70(auStack_1f0,auStack_878);
    FUN_10733ac4c(auStack_1b0,auStack_838);
    FUN_10733ab70(auStack_158,auStack_7e0);
    FUN_10733ab70(auStack_110,auStack_798);
    FUN_1073244ec(auStack_c8,auStack_750);
    FUN_1073244ec(&stack0xffffffffffffffb0,auStack_6d8);
    FUN_10733ad2c(&stack0x00000020,auStack_668);
    ppuStack_4c0 = &PTR_DAT_1109a1b78;
    in_stack_00000058 = cVar4;
    func_0x00010733ae14(&pcStack_b40);
    func_0x000107347c54(&uStack_d80);
    FUN_107338ab4();
    uVar3 = uStack_d80;
    uStack_d80 = 0;
    FUN_107339b18(param_1,uVar3);
    func_0x00010733ea58(&uStack_d80);
    if (&stack0x00000000 != (undefined1 *)0x4c0) {
      func_0x000107344b90();
    }
    func_0x000107345900(auStack_cf0);
  }
  else {
    __Znwm(0x520);
    func_0x00010734595c();
    _bzero();
    *(undefined ***)param_3 = &PTR_DAT_1109a1b78;
    param_3[0x518] = cVar4;
    pcStack_b40 = param_3;
    func_0x000107347c54(&pcStack_150);
    FUN_107338b68();
    pcVar5 = pcStack_150;
    pcStack_150 = (char *)0x0;
    FUN_107339b18(param_1,pcVar5);
    func_0x00010733ea58(&pcStack_150);
    pcVar5 = pcStack_b40;
    pcStack_b40 = (char *)0x0;
    if (pcVar5 != (char *)0x0) {
      func_0x000107344b90();
    }
  }
  func_0x00010734724c();
  func_0x000104c2f714(auStack_c68);
  FUN_107338e64(auStack_d78);
  func_0x0001072f5f4c(auStack_c30);
  func_0x000107284d8c(auStack_c18);
  func_0x0001072f5f4c(auStack_bb8);
  func_0x000107284d8c(auStack_ba0);
  func_0x0001073447cc(uStack_70);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_1073384fc:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x107338504);
  (*pcVar7)();
}



/* Entry: 107338a14; end: 107338ab3;  */

void FUN_107338a14(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 in_x6;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x19;
  undefined1 auStack_190 [120];
  undefined8 uStack_118;
  undefined1 auStack_90 [112];
  
  func_0x0001073447e0(param_1,param_2,param_2);
  FUN_107338bfc(auStack_90);
  func_0x000107347218();
  if ((bool)in_ZR) {
    func_0x000107338c18(unaff_x19 + 8,auStack_90);
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 8) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x68) = 1;
  }
  puVar2 = auStack_90;
  func_0x000107284d6c();
  func_0x000107345728();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346d84();
  func_0x000107284d6c();
  func_0x000107345728();
  func_0x000107345604();
  func_0x000107346728();
  puVar3 = puVar2;
  func_0x000107344b50();
  uStack_118 = extraout_x8_00;
  func_0x0001073470b0();
  uVar1 = *puVar2;
  FUN_107338e84(auStack_190,in_x6);
  puVar2 = puVar3;
  func_0x000107346848(puVar3,uVar1);
  *extraout_x8 = (long)puVar3;
  func_0x000107346e58();
  func_0x0001073447cc(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346e58();
  func_0x00010734594c();
  func_0x000107345614();
  func_0x000107346728();
  func_0x000107344b50();
  func_0x0001073470b0();
  func_0x000107346848();
  *extraout_x8_01 = (long)puVar2;
  func_0x000107346e58();
  func_0x0001073447cc(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346e58();
  func_0x00010734594c();
  func_0x000107345614();
  func_0x000107344fd4();
  FUN_10753788c();
  return;
}



/* Entry: 107338ab4; end: 107338b67;  */

void FUN_107338ab4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 in_x6;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 auStack_e0 [120];
  undefined8 uStack_68;
  
  func_0x000107346728();
  puVar2 = param_1;
  func_0x000107344b50();
  uStack_68 = extraout_x8_00;
  func_0x0001073470b0();
  uVar1 = *param_1;
  FUN_107338e84(auStack_e0,in_x6);
  puVar3 = puVar2;
  func_0x000107346848(puVar2,uVar1);
  *extraout_x8 = puVar2;
  func_0x000107346e58();
  func_0x0001073447cc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346e58();
  func_0x00010734594c();
  func_0x000107345614();
  func_0x000107346728();
  func_0x000107344b50();
  func_0x0001073470b0();
  func_0x000107346848();
  *extraout_x8_01 = puVar3;
  func_0x000107346e58();
  func_0x0001073447cc(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346e58();
  func_0x00010734594c();
  func_0x000107345614();
  func_0x000107344fd4();
  FUN_10753788c();
  return;
}



/* Entry: 107338b68; end: 107338bfb;  */

void FUN_107338b68(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x000107346728();
  func_0x000107344b50();
  func_0x0001073470b0();
  func_0x000107346848();
  *extraout_x8 = param_1;
  func_0x000107346e58();
  func_0x0001073447cc(extraout_x8_00);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107346e58();
  func_0x00010734594c();
  func_0x000107345614();
  func_0x000107344fd4();
  FUN_10753788c();
  return;
}



/* Entry: 107338bfc; end: 107338c2f;  */

void FUN_107338bfc(void)

{
  func_0x000107344fd4();
  FUN_10753788c();
  return;
}



/* Entry: 107338c30; end: 107338c5b;  */

void FUN_107338c30(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  FUN_107338c5c();
  FUN_107338cd4(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 107338c5c; end: 107338caf;  */

void FUN_107338c5c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      func_0x0001072f9cd0();
      if (extraout_x8 != 0) {
        do {
          func_0x0001072f9af4();
        } while (extraout_w10 != 0);
      }
      func_0x0001072f9db8();
      func_0x000107266acc();
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 2) == '\x01') {
        func_0x000107266acc();
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return;
    }
    lVar2 = param_2[1];
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000107345624();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107347c48();
  }
  return;
}



/* Entry: 107338cb0; end: 107338cd3;  */

void FUN_107338cb0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107266acc();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107338cd4; end: 107338cfb;  */

void FUN_107338cd4(undefined4 *param_1,long param_2)

{
  char cVar1;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        func_0x000104c3323c();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x000107268350();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001072d8e74();
    func_0x000104c33084(*param_1,unaff_x20 + 2);
    *unaff_x20 = 0xffffffff;
    func_0x000107268370(*unaff_x19,unaff_x19 + 2,unaff_x20 + 2);
    *unaff_x20 = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 107338cfc; end: 107338d1f;  */

void FUN_107338cfc(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000104c3323c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 107338d20; end: 107338d63;  */

void FUN_107338d20(long param_1)

{
  if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
    func_0x000107344d8c((&PTR_FUN_1109a1790)[*(uint *)(param_1 + 0x60)]);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



/* Entry: 107338d64; end: 107338d6f;  */

void FUN_107338d64(undefined8 param_1,long param_2)

{
  func_0x000107267ed0(param_2 + 0x18);
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x000107266acc();
  }
  return;
}



/* Entry: 107338d70; end: 107338d93;  */

undefined8 FUN_107338d70(undefined8 param_1)

{
  FUN_107338d94();
  return param_1;
}



/* Entry: 107338d94; end: 107338dbb;  */

void FUN_107338d94(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_107338e24();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    FUN_107338e48();
    func_0x000107347da8();
    return;
  }
  if (cVar1 != '\0') {
    func_0x000100a2b988();
    func_0x00010727e190();
    func_0x00010727e190(unaff_x20 + 0x10,unaff_x19 + 0x10);
    return;
  }
  return;
}



/* Entry: 107338dbc; end: 107338de7;  */

void FUN_107338dbc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727e190();
  func_0x00010727e190(unaff_x20 + 0x10,unaff_x19 + 0x10);
  return;
}



/* Entry: 107338de8; end: 107338e23;  */

void FUN_107338de8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_107338e24();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 107338e24; end: 107338e47;  */

/* WARNING: Possible PIC construction at 0x000107338e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107338e38) */

void FUN_107338e24(long param_1)

{
  func_0x000107346d78();
  func_0x000107274970();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107338e48; end: 107338e63;  */

void FUN_107338e48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 107338e64; end: 107338e83;  */

void FUN_107338e64(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_107338e24();
  }
  return;
}



/* Entry: 107338e84; end: 107338eef;  */

void FUN_107338e84(void)

{
  long unaff_x19;
  
  func_0x000107345708();
  func_0x0001072786d8();
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  return;
}



/* Entry: 107338ef0; end: 1073390b3;  */

void FUN_107338ef0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [56];
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  func_0x000107345878();
  func_0x0001073447e0();
  uStack_48 = extraout_x8;
  FUN_1073393bc(auStack_90);
  func_0x0001073479fc(auStack_c8);
  func_0x000104c2f714(auStack_90);
  FUN_107339494(auStack_90);
  func_0x0001073479fc(auStack_100);
  func_0x000104c2f714(auStack_90);
  if (*(int *)(unaff_x21 + 0x130) == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x130) == 1;
    if ((bool)in_ZR) {
      uVar1 = *(undefined4 *)(unaff_x21 + 0xf8);
      uVar2 = *(undefined4 *)(unaff_x21 + 0xfc);
    }
    else {
      func_0x000107345f7c();
      uVar1 = 0;
      uVar2 = 0;
      FUN_107339498(unaff_x21 + 0xf8);
      func_0x000107345e40();
    }
  }
  FUN_10733958c(auStack_120);
  if ((*(int *)(unaff_x21 + 0x178) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x178) == 1, (bool)in_ZR))
  {
    func_0x0001073477fc();
  }
  else {
    func_0x000107345f7c();
    func_0x000107347b48();
    func_0x0001073461d0(&uStack_130);
    FUN_107339590();
    func_0x000104c335c0(auStack_110);
    func_0x000107345e40();
  }
  func_0x000104c335c0(auStack_120);
  __Znwm(0x90);
  func_0x00010734595c();
  func_0x000107347930();
  func_0x000107347994();
  *(undefined4 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined4 *)(unaff_x20 + 0x7c) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x000107347f24(&PTR_DAT_1109a1890);
  func_0x000107346e60();
  func_0x0001073465e4();
  func_0x000107346dec();
  func_0x0001073447cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107346d84();
    func_0x000104c335c0();
    func_0x000107345e40();
    func_0x000104c335c0(auStack_120);
    func_0x000104c2f714(auStack_100);
    do {
      func_0x000104c2f714();
      func_0x000107345604();
      func_0x000107346b20();
    } while( true );
  }
  return;
}



/* Entry: 1073390b4; end: 1073390db;  */

void FUN_1073390b4(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_1073390dc();
  return;
}



/* Entry: 1073390dc; end: 10733911b;  */

void FUN_1073390dc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  func_0x0001072ca524();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1838);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10733911c; end: 10733912f;  */

void FUN_10733911c(void)

{
  return;
}



/* Entry: 107339130; end: 10733914b;  */

void FUN_107339130(void)

{
  func_0x000107346244();
  func_0x0001073459fc();
  return;
}



/* Entry: 10733914c; end: 10733916f;  */

void FUN_10733914c(void)

{
  func_0x000107344d34();
  FUN_107339170();
  return;
}



/* Entry: 107339170; end: 1073391af;  */

void FUN_107339170(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_1073391b0();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1868);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1073391b0; end: 1073391e7;  */

void FUN_1073391b0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107346090();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1850)[extraout_x8]);
  }
  func_0x00010734765c();
  return;
}



/* Entry: 1073391e8; end: 1073391fb;  */

void FUN_1073391e8(void)

{
  return;
}



/* Entry: 1073391fc; end: 10733921b;  */

long FUN_1073391fc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107346d6c();
  FUN_10733921c();
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10733921c; end: 10733923b;  */

void FUN_10733921c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104c335c0();
  }
  return;
}



/* Entry: 10733923c; end: 10733924f;  */

void FUN_10733923c(void)

{
  return;
}



/* Entry: 107339250; end: 107339273;  */

void FUN_107339250(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  FUN_107339274();
  return;
}



/* Entry: 107339274; end: 10733929b;  */

void FUN_107339274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 10733929c; end: 10733933f;  */

long FUN_10733929c(long param_1)

{
  FUN_1073391b0(param_1 + 0x130);
  func_0x0001072ca524(param_1 + 0xf0);
  FUN_10732442c(param_1 + 0x80);
  func_0x000107345f74();
  return param_1;
}



/* Entry: 107339340; end: 1073393bb;  */

long FUN_107339340(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010734479c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001073446ac();
    if ((bool)in_ZR) {
      func_0x000107346afc();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x000107347e9c();
    if ((bool)in_ZR) {
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        func_0x0001073470b8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x000107344da4();
      func_0x000107344f44();
      func_0x000107345e20();
      func_0x000107346168();
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107346168();
  unaff_x30 = FUN_1073393bc;
  func_0x000107345604();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1073393bc; end: 1073393bf;  */

void FUN_1073393bc(undefined8 param_1)

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



/* Entry: 1073393c0; end: 107339427;  */

undefined1 * FUN_1073393c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [72];
  
  func_0x0001073447e0();
  FUN_107339428(auStack_78);
  uVar2 = *(char *)(param_1 + 0x60) == '\0';
  lVar1 = param_1 + 0x28;
  if ((bool)uVar2) {
    lVar1 = param_4;
  }
  func_0x0001072e7640(auStack_78,lVar1);
  puVar3 = auStack_78;
  func_0x00010724b3d8();
  func_0x0001073446ac();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001073447e0();
  func_0x0001073476ec();
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)uVar2) {
    func_0x0001073462f0();
    FUN_107323900();
  }
  else {
    func_0x000107346ed8();
  }
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107344f10();
  func_0x000107345604();
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(long *)(puVar3 + 0x30) = param_4;
  return puVar3;
}



/* Entry: 107339428; end: 107339493;  */

long FUN_107339428(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  
  func_0x0001073447e0();
  func_0x0001073476ec();
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    FUN_107323900();
  }
  else {
    func_0x000107346ed8();
  }
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107344f10();
  func_0x000107345604();
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(param_1 + 0x30) = unaff_x20;
  return param_1;
}



/* Entry: 107339494; end: 107339497;  */

void FUN_107339494(undefined8 param_1)

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



/* Entry: 107339498; end: 1073394f3;  */

undefined1  [16] FUN_107339498(ulong param_1,ulong param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar1 = (uint)param_3;
  FUN_1073394f4();
  if ((param_4 & 1) == 0) {
    if (*(char *)(param_3 + 0x30) == '\x01') {
      param_1 = (ulong)*(uint *)(param_3 + 0x28);
      param_2 = (ulong)*(uint *)(param_3 + 0x2c);
    }
  }
  else {
    param_1 = (ulong)uVar1;
    param_2 = (ulong)uVar2;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1073394f4; end: 107339573;  */

undefined1  [16] FUN_1073394f4(ulong *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x000107344818();
  uVar1 = *param_1;
  func_0x000107346350(uVar1);
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    param_2 = 0xffffffffffffff47;
    FUN_107339574();
    unaff_x20 = uVar1 & 0xffffffffffffff00;
    unaff_x21 = uVar1 & 0xff;
    unaff_x19 = param_2 & 0xff;
  }
  else {
    func_0x000107346750();
  }
  func_0x000107344f10();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    auVar3._0_8_ = unaff_x21 | unaff_x20;
    auVar3._8_8_ = unaff_x19;
    return auVar3;
  }
  ___stack_chk_fail();
  func_0x000107344f10();
  func_0x000107345604();
  func_0x000107775240();
  auVar2._8_8_ = param_2 & 0xff;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 107339574; end: 10733958b;  */

void FUN_107339574(void)

{
  func_0x000107775240();
  return;
}



/* Entry: 10733958c; end: 10733958f;  */

void FUN_10733958c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072752cc();
  func_0x000104c3329c();
  return;
}



/* Entry: 107339590; end: 1073395db;  */

void FUN_107339590(void)

{
  undefined1 auStack_48 [24];
  
  func_0x000107346830();
  FUN_1073395dc(auStack_48);
  func_0x000107346708();
  FUN_10733964c(auStack_48);
  FUN_10733921c(auStack_48);
  return;
}



/* Entry: 1073395dc; end: 10733964b;  */

undefined1 * FUN_1073395dc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_a9 [137];
  
  func_0x0001073447e0();
  func_0x0001073476ec();
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    param_2 = auStack_a9;
    func_0x000107777380();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x10] = 0;
  }
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x000107344f10();
  func_0x000107345604();
  if (puVar1[0x10] == '\0') {
    puVar1 = param_2;
  }
  func_0x0001072752cc(extraout_x8,puVar1);
  func_0x000107268420();
  return param_1;
}



/* Entry: 10733964c; end: 10733965f;  */

void FUN_10733964c(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    param_2 = param_3;
  }
  func_0x0001072752cc(param_1,param_2);
  func_0x000107268420();
  return;
}



/* Entry: 107339660; end: 1073396b7;  */

void FUN_107339660(void)

{
  undefined1 in_ZR;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_107323db4();
  func_0x00010734661c();
  func_0x000107345c90();
  func_0x0001073461c8();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345d9c();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x0001073450dc();
  FUN_1073396ec();
  func_0x00010734529c();
  FUN_107339738();
  return;
}



/* Entry: 1073396b8; end: 1073396eb;  */

void FUN_1073396b8(void)

{
  func_0x0001073450dc();
  FUN_1073396ec();
  func_0x00010734529c();
  FUN_107339738();
  return;
}



/* Entry: 1073396ec; end: 107339737;  */

long FUN_1073396ec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

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
  func_0x0001073474dc();
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
    FUN_107339808();
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
      FUN_107339808();
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
      func_0x000107339828(&uStack_1c0,param_5);
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
    func_0x000107339844();
    *(undefined1 *)((long)unaff_x19 + lVar2) = 0;
    return param_5;
  }
  return param_5;
}



/* Entry: 107339738; end: 107339807;  */

void FUN_107339738(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
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
    FUN_107339808();
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
      FUN_107339808();
      func_0x00010734744c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
      func_0x000107345348();
    }
    else {
      func_0x000107339828(&uStack_60,param_5);
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
    func_0x000107339844();
    *(undefined1 *)((long)unaff_x19 + param_2) = 0;
    return;
  }
  return;
}



/* Entry: 107339808; end: 107339827;  */

void FUN_107339808(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346008();
  func_0x000107339844();
  *(undefined1 *)(unaff_x19 + param_2) = 0;
  return;
}



/* Entry: 107339828; end: 107339873;  */

void FUN_107339828(void)

{
  func_0x0001073476f8();
  func_0x00010734576c();
  return;
}



/* Entry: 107339874; end: 10733989b;  */

long FUN_107339874(long param_1)

{
  FUN_10733989c(param_1 + 8);
  return param_1;
}



/* Entry: 10733989c; end: 1073398d3;  */

void FUN_10733989c(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x68) = 1;
  return;
}


