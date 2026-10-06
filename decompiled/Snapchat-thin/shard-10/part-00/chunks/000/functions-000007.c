/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10732e020; end: 10732e02f;  */

void FUN_10732e020(long param_1)

{
  long unaff_x19;
  
  func_0x000107346d1c();
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x00010732cbc0();
  }
  return;
}



/* Entry: 10732e030; end: 10732e087;  */

void FUN_10732e030(long param_1)

{
  long unaff_x19;
  
  func_0x000107347e90();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x00010732cbc0();
  }
  return;
}



/* Entry: 10732e088; end: 10732e08f;  */

void FUN_10732e088(void)

{
  return;
}



/* Entry: 10732e090; end: 10732e0b7;  */

void FUN_10732e090(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a4128;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10732e0b8; end: 10732e0df;  */

void FUN_10732e0b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a4128;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10732e0e0; end: 10732e107;  */

void FUN_10732e0e0(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a4198);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732e108; end: 10732e123;  */

undefined ** FUN_10732e108(void)

{
  return &PTR_DAT_1109a4198;
}



/* Entry: 10732e124; end: 10732e157;  */

long FUN_10732e124(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073474ac();
  if ((bool)in_CY) {
    FUN_10732e184();
  }
  else {
    FUN_10732e158();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 10732e158; end: 10732e183;  */

void FUN_10732e158(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073469b0();
  FUN_10732d56c();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 10732e184; end: 10732e1f7;  */

undefined8 FUN_10732e184(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000107345658();
  func_0x000107347efc();
  FUN_10732e1f8();
  func_0x000107346820();
  FUN_10732e25c(auStack_48);
  FUN_10732d56c(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x000107346270();
  FUN_10732e220();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10732e36c(auStack_48);
  return uVar1;
}



/* Entry: 10732e1f8; end: 10732e21f;  */

undefined8 FUN_10732e1f8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107346c68();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10732df30();
  func_0x000100a2b988();
  func_0x0001073476d4();
  FUN_10732e28c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return param_1;
}



/* Entry: 10732e220; end: 10732e25b;  */

void FUN_10732e220(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100a2b988();
  func_0x0001073476d4();
  FUN_10732e28c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107344920();
  return;
}



/* Entry: 10732e25c; end: 10732e28b;  */

void FUN_10732e25c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001073467d0();
  if (param_2 != 0) {
    FUN_10732df3c(param_4);
  }
  func_0x00010734768c();
  return;
}



/* Entry: 10732e28c; end: 10732e2f7;  */

void FUN_10732e28c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x0001073450dc();
  func_0x00010734513c();
  while (param_2 != unaff_x19) {
    FUN_10732e328(param_4,param_2);
    func_0x000107347f5c();
  }
  func_0x000107346cb4();
  func_0x0001073461d0();
  FUN_10732e2f8();
  FUN_10732dff4(auStack_60);
  return;
}



/* Entry: 10732e2f8; end: 10732e327;  */

void FUN_10732e2f8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x00010732cbc0();
  }
  return;
}



/* Entry: 10732e328; end: 10732e36b;  */

void FUN_10732e328(undefined8 param_1,long param_2)

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



/* Entry: 10732e36c; end: 10732e397;  */

long * FUN_10732e36c(long *param_1)

{
  FUN_10732e398();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10732e398; end: 10732e39f;  */

void FUN_10732e398(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010732cbc0();
  }
  return;
}



/* Entry: 10732e3a0; end: 10732e43b;  */

void FUN_10732e3a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010732cbc0();
  }
  return;
}



/* Entry: 10732e43c; end: 10732e453;  */

void FUN_10732e43c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107345578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000107344d70(uVar2);
  return;
}



/* Entry: 10732e454; end: 10732e487;  */

void FUN_10732e454(long param_1)

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



/* Entry: 10732e488; end: 10732e4bf;  */

void FUN_10732e488(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107345b6c();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10732e4c0; end: 10732e4df;  */

void FUN_10732e4c0(void)

{
  func_0x000107346294();
  FUN_10732e4e0();
  return;
}



/* Entry: 10732e4e0; end: 10732e4f7;  */

void FUN_10732e4e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078996c4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10732e4f8; end: 10732e513;  */

void FUN_10732e4f8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078996c4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732e514; end: 10732e547;  */

long FUN_10732e514(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10732e548(param_1);
    func_0x0001073457b0();
  }
  return param_1;
}



/* Entry: 10732e548; end: 10732e5ef;  */

void FUN_10732e548(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010732e584(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x58;
  }
  return;
}



/* Entry: 10732e5f0; end: 10732e617;  */

long FUN_10732e5f0(long param_1)

{
  FUN_10732e618();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10732e618; end: 10732e68b;  */

void FUN_10732e618(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000100a2b9b4();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10732e68c; end: 10732e72b;  */

void FUN_10732e68c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_1109a3570;
  puVar1 = param_1 + 0x5d;
  FUN_10732b204();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    FUN_1073554b4(*(undefined8 *)(lStack_28 + 0x38));
    FUN_10732b22c(&puStack_30);
  }
  func_0x00010725b238(param_1 + 0x68);
  FUN_10732e4c0(param_1 + 0x67);
  FUN_10732e514(param_1 + 0x61);
  FUN_10732acdc(param_1 + 0x5d);
  func_0x00010732e5a8(param_1 + 0x31);
  func_0x00010724ae28(param_1 + 0x2f);
  func_0x00010724b54c(param_1 + 0x2c);
  FUN_10732b264(param_1);
  return;
}



/* Entry: 10732e72c; end: 10732e7d7;  */

void FUN_10732e72c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_58;
  long alStack_50 [2];
  
  func_0x000107346d60();
  func_0x00010724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    FUN_10732e978(&lStack_58,*param_1,param_2);
    func_0x000107346270();
    FUN_1073ae140();
    lVar1 = lStack_58;
    lStack_58 = 0;
    if (lVar1 != 0) {
      func_0x000107344b90();
    }
  }
  func_0x00010724bcd8(alStack_50);
  return;
}



/* Entry: 10732e7d8; end: 10732e917;  */

void FUN_10732e7d8(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  uint auStack_4c4 [3];
  undefined1 auStack_4a0 [504];
  undefined1 auStack_2a8 [56];
  undefined4 uStack_270;
  undefined8 auStack_268 [4];
  undefined1 auStack_248 [504];
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x0001073449c4();
  if (*(long *)(param_1 + 0x338) == 0) {
    func_0x000100a2b988();
    auStack_4c4[0] = auStack_4c4[0] & 0xffffff00;
    auStack_4c4[1] = 0;
    auStack_4c4[2] = 0;
    FUN_10732898c(auStack_248,param_1 + 0x18,auStack_4c4);
    in_ZR = cStack_50 == '\x01';
    if ((bool)in_ZR) {
      FUN_10732eb8c(auStack_268);
      uVar1 = auStack_268[0];
      auStack_268[0] = 0;
      FUN_10732e4e0(unaff_x20 + 0x338,uVar1);
      FUN_10732e4c0(auStack_268);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x338);
      lVar2 = *(long *)(unaff_x20 + 0x328);
      func_0x0001072d62a0(auStack_4a0,auStack_248);
      func_0x000104c2fe00(auStack_2a8);
      uStack_270 = *(undefined4 *)(unaff_x19 + 0x38);
      FUN_10732ebb4(auStack_268,&stack0xfffffffffffffb48);
      func_0x0001078995ec(uVar1,0,lVar2 * 1000000,auStack_268);
      func_0x0001006393ec(auStack_268);
      func_0x000107331024(&stack0xfffffffffffffb48);
    }
    FUN_10732a468(auStack_248);
  }
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_268);
  func_0x000107331024(&stack0xfffffffffffffb48);
  FUN_10732a468(auStack_248);
  func_0x000107345604();
  func_0x000107345eb4();
  FUN_10733108c();
  return;
}



/* Entry: 10732e918; end: 10732e933;  */

void FUN_10732e918(void)

{
  func_0x000107345eb4();
  FUN_10733108c();
  return;
}



/* Entry: 10732e934; end: 10732e957;  */

void FUN_10732e934(void)

{
  func_0x000107345010();
  func_0x000107331610();
  return;
}



/* Entry: 10732e958; end: 10732e977;  */

void FUN_10732e958(undefined8 param_1,undefined8 param_2)

{
  func_0x000107345eb4(param_1,param_2,param_2);
  FUN_107331660();
  return;
}



/* Entry: 10732e978; end: 10732e9e3;  */

void FUN_10732e978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [72];
  
  func_0x0001073447e0();
  uStack_78 = param_2;
  uStack_70 = param_3;
  FUN_10732ea60(auStack_68,param_4);
  FUN_10732e9e4(&uStack_80,param_1,&uStack_78,auStack_68);
  *unaff_x19 = uStack_80;
  func_0x000107347884();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107347884();
  func_0x000107345604();
  func_0x0001073450dc();
  func_0x0001073449c4();
  func_0x0001073464f4();
  func_0x000107347584();
  func_0x00010732ea80();
  func_0x00010732ea9c(param_1);
  *extraout_x8 = param_1;
  func_0x000107345e20();
  func_0x0001073447cc(uStack_c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2fe00();
  func_0x0001073475d8();
  return;
}



/* Entry: 10732e9e4; end: 10732ea5f;  */

void FUN_10732e9e4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 uStack_48;
  
  func_0x0001073450dc();
  func_0x0001073449c4();
  func_0x0001073464f4();
  func_0x000107347584();
  func_0x00010732ea80();
  func_0x00010732ea9c(param_1);
  *extraout_x8 = param_1;
  func_0x000107345e20();
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2fe00();
  func_0x0001073475d8();
  return;
}



/* Entry: 10732ea60; end: 10732ead7;  */

void FUN_10732ea60(void)

{
  func_0x000104c2fe00();
  func_0x0001073475d8();
  return;
}



/* Entry: 10732ead8; end: 10732eadb;  */

undefined8 * FUN_10732ead8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a37b0;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10732eadc; end: 10732eaef;  */

void FUN_10732eadc(void)

{
  FUN_10732eaf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732eaf0; end: 10732eaf3;  */

void FUN_10732eaf0(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  code *pcVar2;
  undefined1 auStack_68 [72];
  
  func_0x000107344b40(param_1);
  pcVar2 = *(code **)(param_1 + 0x10);
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*(long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1))
                       + ((ulong)pcVar2 & 0xffffffff));
  }
  func_0x00010732ea80(auStack_68,extraout_x8 + 0x20);
  func_0x000107346270();
  (*pcVar2)();
  func_0x000107345e20();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107345604();
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 0;
  *extraout_x8_00 = puVar1;
  return;
}



/* Entry: 10732eaf4; end: 10732eb23;  */

undefined8 * FUN_10732eaf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a37b0;
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10732eb24; end: 10732eb8b;  */

void FUN_10732eb24(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  code *pcVar2;
  undefined1 auStack_68 [72];
  
  func_0x000107344b40(param_1);
  pcVar2 = *(code **)(param_1 + 0x10);
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*(long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1))
                       + ((ulong)pcVar2 & 0xffffffff));
  }
  func_0x00010732ea80(auStack_68,extraout_x8 + 0x20);
  func_0x000107346270();
  (*pcVar2)();
  func_0x000107345e20();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107345604();
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 0;
  *extraout_x8_00 = puVar1;
  return;
}



/* Entry: 10732eb8c; end: 10732ebb3;  */

void FUN_10732eb8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10732ebb4; end: 10732ebef;  */

void FUN_10732ebb4(void)

{
  func_0x0001073451ec();
  __Znwm(600);
  FUN_10732ebf0();
  func_0x000107346384();
  return;
}



/* Entry: 10732ebf0; end: 10732ec0f;  */

void FUN_10732ebf0(void)

{
  func_0x0001073469e0();
  FUN_10732ecc0();
  return;
}



/* Entry: 10732ec10; end: 10732ec13;  */

void FUN_10732ec10(void)

{
  func_0x0001073469e0();
  func_0x000107331024();
  return;
}



/* Entry: 10732ec14; end: 10732ec27;  */

void FUN_10732ec14(void)

{
  func_0x00010732ecf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732ec28; end: 10732ec5f;  */

undefined8 FUN_10732ec28(void)

{
  undefined8 uVar1;
  
  uVar1 = 600;
  __Znwm(600);
  func_0x00010732ed18();
  return uVar1;
}



/* Entry: 10732ec60; end: 10732ec8b;  */

void FUN_10732ec60(long param_1,undefined8 param_2)

{
  func_0x0001073469e0(param_2,param_1 + 8);
  func_0x00010732ed38();
  return;
}



/* Entry: 10732ec8c; end: 10732ecb3;  */

void FUN_10732ec8c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a39a0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732ecb4; end: 10732ecbf;  */

undefined ** FUN_10732ecb4(void)

{
  return &PTR_DAT_1109a39a0;
}



/* Entry: 10732ecc0; end: 10732ed6f;  */

void FUN_10732ecc0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x000107344e18();
  func_0x0001072d62a0();
  func_0x000104c318bc(unaff_x20 + 0x210,unaff_x19 + 0x210);
  *(undefined4 *)(unaff_x20 + 0x248) = *(undefined4 *)(unaff_x19 + 0x248);
  return;
}



/* Entry: 10732ed70; end: 10732eecf;  */

void FUN_10732ed70(long *param_1)

{
  undefined1 uVar1;
  long unaff_x19;
  long *plVar2;
  long lVar3;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined1 auStack_98 [56];
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  func_0x00010734479c();
  lVar3 = *param_1;
  uVar1 = *(int *)(lVar3 + 0x330) == 1;
  if ((bool)uVar1) {
    plVar2 = *(long **)(lVar3 + 8);
    uStack_58 = *(undefined8 *)(unaff_x19 + 8);
    uStack_50 = *(undefined4 *)(unaff_x19 + 0x10);
    FUN_10732926c(auStack_e8,lVar3 + 0x148);
    uStack_c8 = uStack_58;
    uStack_c0 = uStack_50;
    lStack_d0 = lVar3;
    FUN_10732f910(auStack_98,auStack_e8);
    (**(code **)(*plVar2 + 0x10))
              (plVar2,unaff_x19 + 0x210,unaff_x19 + 0x18,auStack_98,
               *(undefined4 *)(unaff_x19 + 0x248));
    func_0x0001072d52dc(auStack_98);
  }
  else {
    if (*(int *)(lVar3 + 0x330) != 0) goto LAB_10732ee64;
    FUN_10732926c(auStack_b8,lVar3 + 0x148);
    lStack_a0 = lVar3;
    FUN_10732eed0(&uStack_58,auStack_b8);
    func_0x000104c2fe00(auStack_98,unaff_x19 + 0x210);
    uStack_60 = *(undefined4 *)(unaff_x19 + 0x248);
    FUN_10732c824(lVar3 + 0x188,unaff_x19 + 8,&uStack_58,auStack_98);
    func_0x000104c2f714(auStack_98);
    func_0x00010732cbc0(&uStack_58);
  }
  func_0x00010725b1d4();
LAB_10732ee64:
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072d52dc(auStack_98);
  func_0x00010725b1d4(auStack_e8);
  func_0x000107345604();
  func_0x0001073451ec();
  func_0x000107346180();
  FUN_10732ef08();
  func_0x000107346384();
  return;
}



/* Entry: 10732eed0; end: 10732ef07;  */

void FUN_10732eed0(void)

{
  func_0x0001073451ec();
  func_0x000107346180();
  FUN_10732ef08();
  func_0x000107346384();
  return;
}



/* Entry: 10732ef08; end: 10732ef27;  */

void FUN_10732ef08(void)

{
  func_0x00010734699c();
  func_0x00010732efc4();
  return;
}



/* Entry: 10732ef28; end: 10732ef2b;  */

void FUN_10732ef28(void)

{
  func_0x00010734699c();
  func_0x00010725b1d4();
  return;
}



/* Entry: 10732ef2c; end: 10732ef3f;  */

void FUN_10732ef2c(void)

{
  FUN_10732efdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732ef40; end: 10732ef63;  */

undefined8 FUN_10732ef40(void)

{
  undefined8 unaff_x19;
  
  func_0x000107346180();
  func_0x00010734699c();
  func_0x00010732f01c();
  return unaff_x19;
}



/* Entry: 10732ef64; end: 10732ef8f;  */

void FUN_10732ef64(long param_1,undefined8 param_2)

{
  func_0x00010734699c(param_2,param_1 + 8);
  func_0x00010732f01c();
  return;
}



/* Entry: 10732ef90; end: 10732efb7;  */

void FUN_10732ef90(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3910);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732efb8; end: 10732efdb;  */

undefined ** FUN_10732efb8(void)

{
  return &PTR_DAT_1109a3910;
}



/* Entry: 10732efdc; end: 10732f03f;  */

void FUN_10732efdc(void)

{
  func_0x00010734699c();
  func_0x00010725b1d4();
  return;
}



/* Entry: 10732f040; end: 10732f07f;  */

void FUN_10732f040(int param_1)

{
  func_0x000100a2b988();
  func_0x000107347780();
  func_0x000107347bdc();
  if (param_1 != 0) {
    func_0x000107347dcc();
    FUN_10732f080();
  }
  func_0x00010734613c();
  return;
}



/* Entry: 10732f080; end: 10732f0d3;  */

void FUN_10732f080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 7) == '\x01' && *(int *)(param_2 + 6) != 1) {
    uVar1 = *param_1;
    func_0x00010732f0f8();
    uStack_28 = uVar1;
    func_0x00010732f0d4(*param_2,&uStack_28,&uStack_29);
  }
  return;
}



/* Entry: 10732f0d4; end: 10732f10f;  */

void FUN_10732f0d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  FUN_10732f110(param_1,&uStack_18);
  return;
}



/* Entry: 10732f110; end: 10732f143;  */

void FUN_10732f110(int *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long lVar3;
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [4];
  undefined1 auStack_60 [64];
  
  if (*param_1 == 2) {
    return;
  }
  uVar1 = *param_1 == 1;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010734490c();
  lVar3 = *param_2;
  func_0x0001073480a0();
  func_0x000104c2fe00(auStack_60);
  func_0x000107345ba8(auStack_80);
  FUN_10732f208();
  FUN_10732f24c(auStack_98,lVar3,auStack_60,auStack_80);
  puVar2 = (undefined8 *)(lVar3 + 0x2e8);
  FUN_10732a90c(puVar2,auStack_60);
  (**(code **)(*(long *)*puVar2 + 0x48))((long *)*puVar2,auStack_98,param_1 + 2);
  FUN_10732f298(lVar3 + 0x308,auStack_60);
  puVar2 = auStack_80;
  FUN_10732f7e8();
  func_0x0001073462e8();
  func_0x000107347294();
  func_0x000107347898();
  func_0x00010734471c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107347294();
  func_0x000107347898();
  func_0x000107345604();
  *extraout_x8 = &UNK_10e52b660;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  func_0x00010732f2c0(*(undefined8 *)*puVar2,((undefined8 *)*puVar2)[1],extraout_x8);
  return;
}



/* Entry: 10732f144; end: 10732f207;  */

void FUN_10732f144(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [4];
  undefined1 auStack_60 [64];
  
  func_0x00010734490c();
  lVar2 = *param_1;
  func_0x0001073480a0();
  func_0x000104c2fe00(auStack_60);
  func_0x000107345ba8(auStack_80);
  FUN_10732f208();
  FUN_10732f24c(auStack_98,lVar2,auStack_60,auStack_80);
  puVar1 = (undefined8 *)(lVar2 + 0x2e8);
  FUN_10732a90c(puVar1,auStack_60);
  (**(code **)(*(long *)*puVar1 + 0x48))((long *)*puVar1,auStack_98,param_2);
  FUN_10732f298(lVar2 + 0x308,auStack_60);
  puVar1 = auStack_80;
  FUN_10732f7e8();
  func_0x0001073462e8();
  func_0x000107347294();
  func_0x000107347898();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107347294();
  func_0x000107347898();
  func_0x000107345604();
  *extraout_x8 = &UNK_10e52b660;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  func_0x00010732f2c0(*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],extraout_x8);
  return;
}



/* Entry: 10732f208; end: 10732f24b;  */

void FUN_10732f208(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010732f2c0(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1],param_1);
  return;
}



/* Entry: 10732f24c; end: 10732f297;  */

void FUN_10732f24c(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10732f298(param_2 + 0x308);
  func_0x0001072621e0();
  FUN_10732f450();
  return;
}



/* Entry: 10732f298; end: 10732f2e7;  */

long FUN_10732f298(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10732f508(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 10732f2e8; end: 10732f327;  */

long FUN_10732f2e8(long param_1,long param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    func_0x000107346964();
    FUN_10732f328();
  }
  return param_2;
}



/* Entry: 10732f328; end: 10732f3ab;  */

void FUN_10732f328(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  func_0x00010734490c();
  uVar2 = *param_1;
  func_0x00010726236c(auStack_a0,param_2 + 0x30);
  func_0x0001073480a0();
  func_0x000107262398(auStack_60,auStack_a0);
  FUN_10732f3ac(auStack_b8,uVar2,auStack_60);
  puVar1 = auStack_60;
  func_0x000104c2f714();
  func_0x00010734622c();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107348034();
  func_0x000104c2f714();
  func_0x00010734622c();
  func_0x000107345604();
  pcStack_c8 = FUN_10732f3ac;
  puStack_d8 = puVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10732f3cc(&puStack_d8);
  return;
}



/* Entry: 10732f3ac; end: 10732f3cb;  */

void FUN_10732f3ac(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10732f3cc(&uStack_18);
  return;
}



/* Entry: 10732f3cc; end: 10732f3d3;  */

void FUN_10732f3cc(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  func_0x00010726297c();
  if ((uVar3 & 1) != 0) {
    FUN_10732f43c(*param_2,lVar2,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 10732f3d4; end: 10732f43b;  */

void FUN_10732f3d4(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x00010726297c();
  if ((param_3 & 1) != 0) {
    FUN_10732f43c(*param_2,lVar2,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10732f43c; end: 10732f44f;  */

void FUN_10732f43c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x38;
  func_0x000104c318ec();
  *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  return;
}



/* Entry: 10732f450; end: 10732f47b;  */

undefined1  [16] FUN_10732f450(void)

{
  undefined1 auVar1 [16];
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_10732f47c();
  auVar1._8_8_ = in_x5;
  auVar1._0_8_ = in_x4;
  return auVar1;
}



/* Entry: 10732f47c; end: 10732f507;  */

void FUN_10732f47c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = param_1;
  uStack_28 = param_2;
  while (lStack_30 != param_3) {
    func_0x00010732f4d0(param_5,uStack_28);
    func_0x000107262260(&lStack_30);
  }
  return;
}



/* Entry: 10732f508; end: 10732f56b;  */

void FUN_10732f508(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_10732f56c();
  if ((uVar3 & 1) != 0) {
    FUN_10732f79c(param_2[1] + (long)plVar2 * 0x58,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x58;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 10732f56c; end: 10732f5d7;  */

void FUN_10732f56c(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x0001073459d0();
  func_0x000107344bd4();
  func_0x000107344ad0();
  while( true ) {
    func_0x000107344e30();
    while (unaff_x28 != 0) {
      func_0x000107344ea8();
      FUN_10732f634();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010734706c();
    }
    func_0x0001073450b0();
    if ((extraout_w8 & 1) != 0) break;
    func_0x000107347060();
  }
  func_0x0001073460c8();
  FUN_10732f5d8();
  func_0x00010734762c();
  return;
}



/* Entry: 10732f5d8; end: 10732f633;  */

void FUN_10732f5d8(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  
  func_0x000107345658();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    FUN_10732f6ac();
    func_0x000107345130();
  }
  func_0x000107345560();
  func_0x00010734475c();
  return;
}



/* Entry: 10732f634; end: 10732f63f;  */

bool FUN_10732f634(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10732f640; end: 10732f6ab;  */

void FUN_10732f640(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_10732f6dc();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      func_0x00010732f70c();
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



/* Entry: 10732f6ac; end: 10732f6db;  */

undefined * FUN_10732f6ac(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107344b50();
    puVar2 = &UNK_1109a38f0;
    func_0x00010734796c();
    func_0x0001073447cc(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107348074(param_1,uVar3 << 1 | 1);
  func_0x000107344ef0();
  FUN_10732f6dc();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      func_0x00010732f70c();
    }
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10732f6dc; end: 10732f757;  */

void FUN_10732f6dc(undefined8 param_1)

{
  func_0x000107345a40();
  func_0x000107345c6c();
  func_0x000107345994();
  func_0x0001000631d0(param_1,0x58);
  return;
}



/* Entry: 10732f758; end: 10732f75b;  */

void FUN_10732f758(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10732f75c; end: 10732f793;  */

undefined * FUN_10732f75c(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107344b50();
  puVar1 = &UNK_1109a38f0;
  func_0x00010734796c();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10732f794; end: 10732f79b;  */

long FUN_10732f794(undefined8 param_1,long param_2)

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



/* Entry: 10732f79c; end: 10732f7e7;  */

void FUN_10732f79c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010732f7c0(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10732f7e8; end: 10732f827;  */

void FUN_10732f7e8(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107345740();
  FUN_10732f828();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x000107261dac(&uStack_40);
  return;
}



/* Entry: 10732f828; end: 10732f90b;  */

void FUN_10732f828(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  long extraout_x9;
  long lVar5;
  long *unaff_x19;
  long lVar6;
  long unaff_x21;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107345c14();
  uVar3 = 0;
  FUN_10732f90c();
  lVar6 = *(long *)(unaff_x21 + 0x18);
  if (lVar6 != 0) {
    func_0x000107345ba8();
    func_0x0001072620a4();
    func_0x0001072621e0();
    lStack_40 = unaff_x21;
    while (uStack_38 = uVar3, lStack_40 != 0) {
      func_0x000104c2fe38();
      plVar2 = unaff_x19;
      func_0x00010ae6c8b4();
      bVar1 = (byte)uVar3 & 0x7f;
      uVar4 = unaff_x19[2];
      lVar5 = *unaff_x19;
      *(byte *)(lVar5 + (long)plVar2) = bVar1;
      *(byte *)(lVar5 + ((long)plVar2 - 7U & uVar4) + (uVar4 & 7)) = bVar1;
      func_0x0001072620f8();
      func_0x000107262260(&lStack_40);
      uVar3 = uStack_38;
    }
    unaff_x19[3] = lVar6;
    func_0x0001073464fc();
    *(long *)(extraout_x8 + -8) = extraout_x9 - lVar6;
  }
  return;
}



/* Entry: 10732f90c; end: 10732f90f;  */

void FUN_10732f90c(undefined8 param_1,long param_2)

{
  func_0x000107275560();
  if (param_2 != 0) {
    func_0x000107275410();
    func_0x00010726210c();
  }
  return;
}



/* Entry: 10732f910; end: 10732f93f;  */

void FUN_10732f910(long param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107347180();
  FUN_10732f940();
  *(long *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10732f940; end: 10732f977;  */

void FUN_10732f940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109a3930;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = param_2[2];
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[6] = param_2[5];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 10732f978; end: 10732f98b;  */

void FUN_10732f978(void)

{
  FUN_10732fa10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732f98c; end: 10732f9af;  */

undefined8 FUN_10732f98c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107347180();
  func_0x000107348054();
  func_0x00010732fa50();
  return unaff_x19;
}



/* Entry: 10732f9b0; end: 10732f9db;  */

void FUN_10732f9b0(long param_1,undefined8 param_2)

{
  func_0x000107348054(param_2,param_1 + 8);
  func_0x00010732fa50();
  return;
}



/* Entry: 10732f9dc; end: 10732fa03;  */

void FUN_10732f9dc(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3990);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732fa04; end: 10732fa0f;  */

undefined ** FUN_10732fa04(void)

{
  return &PTR_DAT_1109a3990;
}


