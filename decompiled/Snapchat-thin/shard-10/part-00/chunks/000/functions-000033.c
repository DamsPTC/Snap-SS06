/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107383504; end: 107383517;  */

void FUN_107383504(void)

{
  return;
}



/* Entry: 107383518; end: 10738353f;  */

long FUN_107383518(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107267ed0(param_1 + 0x28);
  func_0x000107274b8c(param_1);
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107383540; end: 107383563;  */

undefined8 FUN_107383540(undefined8 param_1)

{
  FUN_107383564();
  return param_1;
}



/* Entry: 107383564; end: 1073835bf;  */

void FUN_107383564(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x68);
  if (*(int *)(param_1 + 0x68) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x68) != 0xffffffff) {
        func_0x000107344d8c((&PTR_FUN_1109a0f70)[*(uint *)(param_1 + 0x68)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109a7bc8)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1073835c0; end: 1073835d3;  */

void FUN_1073835c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x68) != 0) {
    uStack_18 = param_3;
    FUN_107383600(&lStack_20);
  }
  return;
}



/* Entry: 1073835d4; end: 1073835ff;  */

void FUN_1073835d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_107383600(&lStack_20);
  }
  return;
}



/* Entry: 107383600; end: 107383627;  */

void FUN_107383600(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10732442c(lVar1);
  *(undefined4 *)(lVar1 + 0x68) = 0;
  return;
}



/* Entry: 107383628; end: 10738362f;  */

void FUN_107383628(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x68) == 1) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  FUN_107383668(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107383630; end: 107383667;  */

void FUN_107383630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x68) == 1) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  FUN_107383668(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107383668; end: 107383673;  */

void FUN_107383668(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010738a440(*param_1,param_1[1]);
  FUN_10732442c();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x68) = 1;
  return;
}



/* Entry: 107383674; end: 1073836a3;  */

void FUN_107383674(void)

{
  long unaff_x20;
  
  func_0x00010738a440();
  FUN_10732442c();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x68) = 1;
  return;
}



/* Entry: 1073836a4; end: 1073836ab;  */

void FUN_1073836a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x68) == 2) {
    func_0x00010738a440(param_2,param_3);
    func_0x00010727e15c();
    func_0x0001072e948c(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  FUN_107383710(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073836ac; end: 1073836e3;  */

void FUN_1073836ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x68) == 2) {
    func_0x00010738a440(param_2,param_3);
    func_0x00010727e15c();
    func_0x0001072e948c(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  FUN_107383710(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1073836e4; end: 10738370f;  */

void FUN_1073836e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738a440();
  func_0x00010727e15c();
  func_0x0001072e948c(unaff_x20 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 107383710; end: 10738371b;  */

void FUN_107383710(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010738a440(*param_1,param_1[1]);
  FUN_10732442c();
  FUN_107324574();
  *(undefined4 *)(unaff_x20 + 0x68) = 2;
  return;
}



/* Entry: 10738371c; end: 10738374b;  */

void FUN_10738371c(void)

{
  long unaff_x20;
  
  func_0x00010738a440();
  FUN_10732442c();
  FUN_107324574();
  *(undefined4 *)(unaff_x20 + 0x68) = 2;
  return;
}



/* Entry: 10738374c; end: 1073837ab;  */

long FUN_10738374c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107266a30(param_1 + 0xa0);
  plVar2 = *(long **)(param_1 + 0x88);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107383498(lVar1);
    func_0x00010738aac0();
  }
  lVar1 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10732442c(param_1 + 8);
  return param_1;
}



/* Entry: 1073837ac; end: 10738380b;  */

uint FUN_1073837ac(ulong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  
  func_0x0001073838d8();
  uVar1 = (uint)*param_4;
  if ((param_1 & 0x100) != 0) {
    uVar1 = (uint)param_1;
  }
  return uVar1 & 0xff;
}



/* Entry: 10738380c; end: 10738386b;  */

undefined1 * FUN_10738380c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 in_x3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010738a2c0();
  uStack_28 = extraout_x8;
  func_0x000107383a64(auStack_68);
  func_0x000107262398(param_1,auStack_68,in_x3);
  puVar1 = auStack_68;
  func_0x00010724b3d8(puVar1);
  func_0x00010738a280(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_78 = FUN_10738386c;
  puVar2 = &uStack_81;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010786e5e4(puVar2,puVar1);
  func_0x00010738a710();
  return puVar2 + extraout_x8_00;
}



/* Entry: 10738386c; end: 107383917;  */

undefined1 * FUN_10738386c(undefined8 param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 uStack_11;
  
  puVar1 = &uStack_11;
  func_0x00010786e5e4(puVar1,param_1);
  func_0x00010738a710();
  return puVar1 + extraout_x8;
}



/* Entry: 107383918; end: 107383963;  */

/* WARNING: Possible PIC construction at 0x0001072804d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072804d8) */

uint FUN_107383918(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar2 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar2) {
    return *param_1 | 0x100;
  }
  func_0x000107285528(param_1,*param_2,param_2[1]);
  param_1 = *(byte **)param_1;
  func_0x000107285a94();
  func_0x000107285d48();
  if ((bool)uVar2) {
    func_0x000107285a70();
  }
  else {
    func_0x0001072855b4();
    func_0x0001072854dc(extraout_x8);
    if ((bool)uVar2) {
      return 0;
    }
    ___stack_chk_fail();
    func_0x0001072855b4();
    func_0x00010728561c();
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 1) {
    uVar3 = 0;
  }
  else {
    func_0x000107280568();
    uVar3 = (uint)*param_1;
  }
  return uVar3 | (uint)(iVar1 == 1) << 8;
}



/* Entry: 107383964; end: 107383a9f;  */

ulong FUN_107383964(ulong param_1)

{
  func_0x00010738a644();
  func_0x000107383988();
  return param_1 & 0xffffffffff;
}



/* Entry: 107383aa0; end: 107383aef;  */

/* WARNING: Possible PIC construction at 0x000107298084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107298088) */

long FUN_107383aa0(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  code *pcVar3;
  undefined1 auStack_b0 [144];
  
  if (*(int *)(param_2 + 0x70) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
    return param_2;
  }
  uVar2 = *(int *)(param_2 + 0x70) == 1;
  if ((bool)uVar2) {
    puVar1 = &stack0xfffffffffffffff0;
    pcVar3 = (code *)&UNK_107298088;
  }
  else {
    unaff_x19 = param_2 + 8;
    puVar1 = auStack_b0;
    func_0x0001073447e0(unaff_x19,*param_3,param_3[1]);
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
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x000107344f10();
    pcVar3 = FUN_107339494;
    func_0x000107345604();
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar3;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107383af0; end: 107383b5b;  */

void FUN_107383af0(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010738a388();
  uVar1 = *(ulong *)(unaff_x21 + -8);
  if (uVar1 < extraout_x8) {
    FUN_107383b5c();
    unaff_x20 = uVar1 + 0x60;
  }
  else {
    func_0x00010738a5b0();
    func_0x00010738a32c();
    FUN_107383c80();
    FUN_107383b5c();
    func_0x0001001e7b20();
    FUN_107383bf0();
    func_0x00010738a970();
  }
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 107383b5c; end: 107383ba7;  */

void FUN_107383b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010738a440();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  func_0x000104c318bc(param_1 + 3,param_2 + 3);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined4 *)(unaff_x20 + 0x58) = *(undefined4 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  return;
}



/* Entry: 107383ba8; end: 107383bef;  */

ulong FUN_107383ba8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    uVar2 = (long)(param_1[2] - *param_1) / 0x60;
    uVar3 = uVar2 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x155555555555554 < uVar2) {
      uVar3 = 0x2aaaaaaaaaaaaaa;
    }
    return uVar3;
  }
  FUN_107383c74();
  func_0x00010738a440();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar5 = *(long *)(param_2 + 8) + ((long)(uVar1 - uVar4) / -0x60) * 0x60;
  uVar2 = uVar5;
  for (uVar3 = uVar4; uVar3 != uVar1; uVar3 = uVar3 + 0x60) {
    FUN_107383b5c(uVar2,uVar3);
    uVar2 = uVar2 + 0x60;
  }
  for (; uVar4 != uVar1; uVar4 = uVar4 + 0x60) {
    uVar2 = uVar4;
    func_0x000107383d34(uVar4);
  }
  *(ulong *)(unaff_x19 + 8) = uVar5;
  uVar3 = *unaff_x20;
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar3;
  func_0x00010738a2f0();
  return uVar2;
}



/* Entry: 107383bf0; end: 107383c73;  */

void FUN_107383bf0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x00010738a440();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x60) * 0x60;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
    FUN_107383b5c(lVar2,lVar3);
    lVar2 = lVar2 + 0x60;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x60) {
    func_0x000107383d34(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x00010738a2f0();
  return;
}



/* Entry: 107383c74; end: 107383c7f;  */

long * FUN_107383c74(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010738ab04();
  func_0x0001001e7a38();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x60;
        func_0x000107383d34();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x60;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x60;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x60;
  return unaff_x19;
}



/* Entry: 107383c80; end: 107383ceb;  */

long * FUN_107383c80(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001001e7a38();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x60;
        func_0x000107383d34();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x60;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x60;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x60;
  return unaff_x19;
}



/* Entry: 107383cec; end: 107383d5b;  */

long * FUN_107383cec(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x60;
    func_0x000107383d34();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107383d5c; end: 107384483;  */

void FUN_107383d5c(byte *param_1,byte *param_2,byte *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  byte extraout_w8;
  byte extraout_w8_00;
  byte extraout_w8_01;
  byte extraout_w8_02;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  byte extraout_w9;
  byte extraout_w9_00;
  byte extraout_w9_01;
  byte extraout_w9_02;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  ulong uVar13;
  uint uVar14;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  byte *extraout_x11;
  byte *extraout_x11_00;
  byte *extraout_x11_01;
  uint extraout_w12;
  uint extraout_w12_00;
  uint extraout_w12_01;
  uint extraout_w12_02;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  
  func_0x00010738a8c4();
LAB_107383d88:
  pbVar22 = param_2 + -1;
  pbVar23 = param_1;
LAB_107383d9c:
  param_1 = pbVar23;
  uVar7 = (long)param_2 - (long)param_1;
  switch(uVar7) {
  case 0:
  case 1:
    goto LAB_10738a5e8;
  case 2:
    uVar8 = (uint)*param_3 - (uint)param_2[-1];
    uVar5 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    bVar12 = *param_1;
    uVar15 = (uint)*param_3 - (uint)bVar12;
    uVar8 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar8 = uVar15;
    }
    if (uVar8 <= uVar5) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = bVar12;
    return;
  case 3:
    pbVar23 = param_1 + 1;
    func_0x00010738a790();
    bVar12 = *param_3;
    bVar21 = *pbVar23;
    uVar8 = (uint)bVar12 - (uint)bVar21;
    uVar5 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    bVar2 = *param_1;
    uVar15 = (uint)bVar12 - (uint)bVar2;
    uVar8 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar8 = uVar15;
    }
    bVar3 = *pbVar22;
    uVar14 = (uint)bVar12 - (uint)bVar3;
    uVar15 = -uVar14;
    if (-1 < (int)uVar14) {
      uVar15 = uVar14;
    }
    if (uVar5 < uVar8) {
      if (uVar15 < uVar5) {
        *param_1 = bVar3;
      }
      else {
        *param_1 = bVar21;
        *pbVar23 = bVar2;
        uVar8 = (uint)*param_3 - (uint)*pbVar22;
        uVar5 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8;
        }
        uVar15 = (uint)*param_3 - (uint)bVar2;
        uVar8 = -uVar15;
        if (-1 < (int)uVar15) {
          uVar8 = uVar15;
        }
        if (uVar8 <= uVar5) {
          return;
        }
        *pbVar23 = *pbVar22;
      }
      *pbVar22 = bVar2;
    }
    else if (uVar15 < uVar5) {
      *pbVar23 = bVar3;
      *pbVar22 = bVar21;
      uVar8 = (uint)*param_3 - (uint)*pbVar23;
      uVar5 = -uVar8;
      if (-1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      bVar12 = *param_1;
      uVar15 = (uint)*param_3 - (uint)bVar12;
      uVar8 = -uVar15;
      if (-1 < (int)uVar15) {
        uVar8 = uVar15;
      }
      if (uVar5 < uVar8) {
        *param_1 = *pbVar23;
        *pbVar23 = bVar12;
        return;
      }
    }
    return;
  case 4:
    pbVar23 = param_1 + 2;
    func_0x00010738a790(param_1,param_1 + 1);
    func_0x00010738a440();
    FUN_107384484();
    func_0x00010738a7f8();
    if (extraout_w11 < extraout_w10_03) {
      *pbVar23 = extraout_w8;
      *pbVar22 = extraout_w9;
      func_0x00010738a4d4(*pbVar23);
      if ((extraout_w11_00 < extraout_w10_04) &&
         (func_0x00010738a66c(), extraout_w11_01 < extraout_w10_05)) {
        *param_2 = extraout_w8_00;
        *param_3 = extraout_w9_00;
      }
    }
    break;
  case 5:
    pbVar23 = param_1 + 2;
    pbVar10 = param_1 + 3;
    pbVar16 = param_3;
    func_0x00010738a790(param_1,param_1 + 1);
    func_0x00010738a440();
    FUN_107384538();
    uVar8 = (uint)*pbVar16 - (uint)*pbVar22;
    uVar5 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    bVar12 = *pbVar10;
    uVar15 = (uint)*pbVar16 - (uint)bVar12;
    uVar8 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar8 = uVar15;
    }
    if (uVar5 < uVar8) {
      *pbVar10 = *pbVar22;
      *pbVar22 = bVar12;
      func_0x00010738a7f8();
      if (extraout_w11_02 < extraout_w10_06) {
        *pbVar23 = extraout_w8_01;
        *pbVar10 = extraout_w9_01;
        func_0x00010738a4d4(*pbVar23);
        if ((extraout_w11_03 < extraout_w10_07) &&
           (func_0x00010738a66c(), extraout_w11_04 < extraout_w10_08)) {
          *param_2 = extraout_w8_02;
          *param_3 = extraout_w9_02;
        }
      }
    }
    break;
  default:
    goto code_r0x000107383dac;
  }
  return;
code_r0x000107383dac:
  if ((long)uVar7 < 0x18) {
    if ((param_5 & 1) == 0) {
      pbVar23 = param_1;
      if (param_1 == param_2) {
        return;
      }
      while( true ) {
        param_1 = param_1 + 1;
        pbVar22 = pbVar23 + 1;
        if (pbVar22 == param_2) break;
        bVar12 = pbVar23[1];
        uVar8 = (uint)*param_3 - (uint)bVar12;
        uVar5 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8;
        }
        uVar14 = (uint)*pbVar23;
        uVar15 = (uint)*param_3 - (uint)*pbVar23;
        uVar8 = -uVar15;
        if (-1 < (int)uVar15) {
          uVar8 = uVar15;
        }
        pbVar10 = param_1;
        pbVar23 = pbVar22;
        if (uVar5 < uVar8) {
          do {
            *pbVar10 = (byte)uVar14;
            uVar8 = (uint)*param_3 - (uint)bVar12;
            uVar5 = -uVar8;
            if (-1 < (int)uVar8) {
              uVar5 = uVar8;
            }
            uVar14 = (uint)pbVar10[-2];
            uVar15 = *param_3 - uVar14;
            uVar8 = -uVar15;
            if (-1 < (int)uVar15) {
              uVar8 = uVar15;
            }
            pbVar10 = pbVar10 + -1;
          } while (uVar5 < uVar8);
          *pbVar10 = bVar12;
        }
      }
      return;
    }
    if (param_1 == param_2) {
      return;
    }
    lVar20 = 1;
    pbVar23 = param_1;
    goto LAB_107384148;
  }
  if (param_4 == 0) {
    if (param_1 == param_2) {
      return;
    }
    uVar11 = uVar7 - 2 >> 1;
    uVar13 = uVar11;
    goto LAB_1073841e4;
  }
  pbVar23 = param_1 + (uVar7 >> 1);
  if (uVar7 < 0x81) {
    func_0x00010738a7e4(pbVar23,param_1,pbVar22);
  }
  else {
    func_0x00010738a7e4(param_1,pbVar23,pbVar22);
    func_0x00010738a7e4(param_1 + 1,pbVar23 + -1,param_2 + -2);
    func_0x00010738a7e4(param_1 + 2,pbVar23 + 1,param_2 + -3);
    func_0x00010738a7e4(pbVar23 + -1,pbVar23,pbVar23 + 1);
    bVar12 = *param_1;
    *param_1 = *pbVar23;
    *pbVar23 = bVar12;
  }
  param_4 = param_4 + -1;
  bVar12 = *param_1;
  uVar7 = (ulong)bVar12;
  uVar5 = (uint)bVar12;
  uVar8 = (uint)*param_3;
  if ((param_5 & 1) == 0) {
    uVar9 = (uint)*param_3;
    uVar15 = uVar9 - param_1[-1];
    uVar14 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar14 = uVar15;
    }
    uVar18 = uVar9 - uVar5;
    uVar15 = -uVar18;
    if (-1 < (int)uVar18) {
      uVar15 = uVar18;
    }
    if (uVar15 <= uVar14) {
      uVar8 = uVar9 - *pbVar22;
      uVar5 = -uVar8;
      if (-1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      pbVar23 = param_1;
      if (uVar15 < uVar5) {
        do {
          pbVar23 = pbVar23 + 1;
          uVar8 = uVar9 - *pbVar23;
          uVar5 = -uVar8;
          if (-1 < (int)uVar8) {
            uVar5 = uVar8;
          }
        } while (uVar5 <= uVar15);
      }
      else {
        pbVar10 = param_1 + 1;
        do {
          pbVar23 = pbVar10;
          if (param_2 <= pbVar23) break;
          func_0x00010738abc4();
          uVar7 = extraout_x8;
          pbVar10 = extraout_x11;
        } while (extraout_w12 <= extraout_w10);
      }
      pbVar10 = param_2;
      if (pbVar23 < param_2) {
        do {
          func_0x00010738abc4();
          uVar7 = extraout_x8_00;
          pbVar10 = extraout_x11_00;
        } while (extraout_w10_00 < extraout_w12_00);
      }
      while (pbVar23 < pbVar10) {
        bVar12 = *pbVar23;
        *pbVar23 = *pbVar10;
        *pbVar10 = bVar12;
        do {
          pbVar23 = pbVar23 + 1;
          func_0x00010738abc4();
        } while (extraout_w12_01 <= extraout_w10_01);
        do {
          func_0x00010738abc4();
          uVar7 = extraout_x8_01;
          pbVar10 = extraout_x11_01;
        } while (extraout_w10_02 < extraout_w12_02);
      }
      pbVar10 = pbVar23 + -1;
      if (param_1 != pbVar10) {
        *param_1 = *pbVar10;
      }
      param_5 = 0;
      *pbVar10 = (byte)uVar7;
      goto LAB_107383d9c;
    }
  }
  else {
    uVar14 = uVar8 - uVar5;
    uVar15 = -uVar14;
    if (-1 < (int)uVar14) {
      uVar15 = uVar14;
    }
  }
  lVar20 = 0;
  do {
    uVar18 = (uint)param_1[lVar20 + 1];
    uVar9 = uVar8 - param_1[lVar20 + 1];
    uVar14 = -uVar9;
    if (-1 < (int)uVar9) {
      uVar14 = uVar9;
    }
    lVar20 = lVar20 + 1;
  } while (uVar14 < uVar15);
  pbVar10 = param_1 + lVar20;
  pbVar16 = param_2;
  pbVar23 = pbVar10;
  if (lVar20 == 1) {
    do {
      pbVar6 = pbVar16;
      if (pbVar16 <= pbVar10) break;
      pbVar16 = pbVar16 + -1;
      uVar9 = uVar8 - *pbVar16;
      uVar14 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar14 = uVar9;
      }
      pbVar6 = pbVar16;
    } while (uVar15 <= uVar14);
  }
  else {
    do {
      pbVar16 = pbVar16 + -1;
      uVar9 = uVar8 - *pbVar16;
      uVar14 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar14 = uVar9;
      }
      pbVar6 = pbVar16;
    } while (uVar15 <= uVar14);
  }
  while (pbVar23 < pbVar16) {
    *pbVar23 = *pbVar16;
    *pbVar16 = (byte)uVar18;
    bVar21 = *param_3;
    uVar15 = bVar21 - uVar5;
    uVar8 = -uVar15;
    if (-1 < (int)uVar15) {
      uVar8 = uVar15;
    }
    do {
      pbVar23 = pbVar23 + 1;
      uVar18 = (uint)*pbVar23;
      uVar14 = bVar21 - uVar18;
      uVar15 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar15 = uVar14;
      }
    } while (uVar15 < uVar8);
    do {
      pbVar16 = pbVar16 + -1;
      uVar14 = (uint)bVar21 - (uint)*pbVar16;
      uVar15 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar15 = uVar14;
      }
    } while (uVar8 <= uVar15);
  }
  pbVar16 = pbVar23 + -1;
  if (param_1 != pbVar16) {
    *param_1 = *pbVar16;
  }
  *pbVar16 = bVar12;
  if (pbVar10 < pbVar6) goto LAB_107383f6c;
  pbVar10 = param_1;
  FUN_107384648(param_1,pbVar16,param_3);
  pbVar6 = pbVar23;
  FUN_107384648(pbVar23,param_2,param_3);
  if ((int)pbVar6 == 0) goto code_r0x000107383f68;
  param_2 = pbVar16;
  if (((ulong)pbVar10 & 1) != 0) {
    return;
  }
  goto LAB_107383d88;
LAB_107384148:
  if (pbVar23 + 1 == param_2) {
    return;
  }
  bVar12 = pbVar23[1];
  uVar8 = (uint)*param_3 - (uint)bVar12;
  uVar5 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar5 = uVar8;
  }
  uVar14 = (uint)*pbVar23;
  uVar15 = (uint)*param_3 - (uint)*pbVar23;
  uVar8 = -uVar15;
  if (-1 < (int)uVar15) {
    uVar8 = uVar15;
  }
  lVar19 = lVar20;
  if (uVar5 < uVar8) {
    do {
      param_1[lVar19] = (byte)uVar14;
      lVar4 = lVar19 + -1;
      pbVar22 = param_1;
      if (lVar4 == 0) goto LAB_1073841bc;
      uVar8 = (uint)*param_3 - (uint)bVar12;
      uVar5 = -uVar8;
      if (-1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      uVar14 = (uint)param_1[lVar19 + -2];
      uVar15 = *param_3 - uVar14;
      uVar8 = -uVar15;
      if (-1 < (int)uVar15) {
        uVar8 = uVar15;
      }
      lVar19 = lVar4;
    } while (uVar5 < uVar8);
    pbVar22 = param_1 + lVar4;
LAB_1073841bc:
    *pbVar22 = bVar12;
  }
  lVar20 = lVar20 + 1;
  pbVar23 = pbVar23 + 1;
  goto LAB_107384148;
LAB_1073841e4:
  do {
    if ((long)uVar13 <= (long)uVar11) {
      uVar1 = (uVar13 & 0x3fffffffffffffff) << 1 | 1;
      pbVar23 = param_1 + uVar1;
      uVar17 = uVar13 * 2 + 2;
      bVar12 = *param_3;
      if ((long)uVar17 < (long)uVar7) {
        uVar5 = (uint)bVar12 - (uint)*pbVar23;
        uVar8 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar8 = uVar5;
        }
        uVar5 = (uint)pbVar23[1];
        uVar14 = bVar12 - uVar5;
        uVar15 = -uVar14;
        if (-1 < (int)uVar14) {
          uVar15 = uVar14;
        }
        pbVar22 = pbVar23 + 1;
        if (uVar15 <= uVar8) {
          pbVar22 = pbVar23;
          uVar17 = uVar1;
          uVar5 = (uint)*pbVar23;
        }
      }
      else {
        pbVar22 = pbVar23;
        uVar17 = uVar1;
        uVar5 = (uint)*pbVar23;
      }
      uVar15 = bVar12 - uVar5;
      uVar8 = -uVar15;
      if (-1 < (int)uVar15) {
        uVar8 = uVar15;
      }
      bVar21 = param_1[uVar13];
      uVar14 = (uint)bVar12 - (uint)bVar21;
      uVar15 = -uVar14;
      if (-1 < (int)uVar14) {
        uVar15 = uVar14;
      }
      pbVar23 = param_1 + uVar13;
      if (uVar15 <= uVar8) {
        do {
          pbVar10 = pbVar22;
          *pbVar23 = (byte)uVar5;
          if ((long)uVar11 < (long)uVar17) break;
          uVar1 = uVar17 << 1 | 1;
          pbVar23 = param_1 + uVar1;
          uVar17 = uVar17 * 2 + 2;
          bVar12 = *param_3;
          if ((long)uVar17 < (long)uVar7) {
            uVar5 = (uint)bVar12 - (uint)*pbVar23;
            uVar8 = -uVar5;
            if (-1 < (int)uVar5) {
              uVar8 = uVar5;
            }
            uVar5 = (uint)pbVar23[1];
            uVar14 = bVar12 - uVar5;
            uVar15 = -uVar14;
            if (-1 < (int)uVar14) {
              uVar15 = uVar14;
            }
            pbVar22 = pbVar23 + 1;
            if (uVar15 <= uVar8) {
              pbVar22 = pbVar23;
              uVar17 = uVar1;
              uVar5 = (uint)*pbVar23;
            }
          }
          else {
            pbVar22 = pbVar23;
            uVar17 = uVar1;
            uVar5 = (uint)*pbVar23;
          }
          uVar15 = bVar12 - uVar5;
          uVar8 = -uVar15;
          if (-1 < (int)uVar15) {
            uVar8 = uVar15;
          }
          uVar14 = (uint)bVar12 - (uint)bVar21;
          uVar15 = -uVar14;
          if (-1 < (int)uVar14) {
            uVar15 = uVar14;
          }
          pbVar23 = pbVar10;
        } while (uVar15 <= uVar8);
        *pbVar10 = bVar21;
      }
    }
    uVar13 = uVar13 - 1;
  } while (-1 < (long)uVar13);
  do {
    if ((long)uVar7 < 2) {
LAB_10738a5e8:
      return;
    }
    uVar13 = 0;
    bVar12 = *param_1;
    pbVar23 = param_1;
    do {
      pbVar22 = pbVar23 + uVar13 + 1;
      uVar17 = uVar13 << 1 | 1;
      uVar11 = uVar13 * 2 + 2;
      if ((long)uVar11 < (long)uVar7) {
        bVar21 = pbVar23[uVar13 + 2];
        lVar20 = uVar13 + 1;
        uVar8 = (uint)*param_3 - (uint)pbVar23[lVar20];
        uVar5 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8;
        }
        uVar15 = (uint)*param_3 - (uint)bVar21;
        uVar8 = -uVar15;
        if (-1 < (int)uVar15) {
          uVar8 = uVar15;
        }
        pbVar10 = pbVar23 + uVar13 + 2;
        uVar13 = uVar11;
        if (uVar8 <= uVar5) {
          pbVar10 = pbVar22;
          uVar13 = uVar17;
          bVar21 = pbVar23[lVar20];
        }
      }
      else {
        pbVar10 = pbVar22;
        uVar13 = uVar17;
        bVar21 = *pbVar22;
      }
      *pbVar23 = bVar21;
      pbVar23 = pbVar10;
    } while ((long)uVar13 <= (long)(uVar7 - 2 >> 1));
    param_2 = param_2 + -1;
    if (pbVar10 == param_2) {
LAB_1073843f4:
      *pbVar10 = bVar12;
    }
    else {
      *pbVar10 = *param_2;
      *param_2 = bVar12;
      pbVar23 = pbVar10 + (-1 - (long)param_1);
      if (1 < (long)(pbVar10 + (1 - (long)param_1))) {
        bVar12 = param_1[(ulong)pbVar23 >> 1];
        uVar15 = (uint)bVar12;
        uVar8 = (uint)*param_3 - (uint)bVar12;
        uVar5 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8;
        }
        bVar12 = *pbVar10;
        uVar14 = (uint)*param_3 - (uint)bVar12;
        uVar8 = -uVar14;
        if (-1 < (int)uVar14) {
          uVar8 = uVar14;
        }
        pbVar22 = pbVar10;
        pbVar16 = param_1 + ((ulong)pbVar23 >> 1);
        if (uVar5 < uVar8) {
          do {
            pbVar10 = pbVar16;
            *pbVar22 = (byte)uVar15;
            if ((ulong)pbVar23 >> 1 == 0) break;
            pbVar23 = (byte *)(((ulong)pbVar23 >> 1) - 1);
            uVar15 = (uint)param_1[(ulong)pbVar23 >> 1];
            uVar8 = *param_3 - uVar15;
            uVar5 = -uVar8;
            if (-1 < (int)uVar8) {
              uVar5 = uVar8;
            }
            uVar14 = (uint)*param_3 - (uint)bVar12;
            uVar8 = -uVar14;
            if (-1 < (int)uVar14) {
              uVar8 = uVar14;
            }
            pbVar22 = pbVar10;
            pbVar16 = param_1 + ((ulong)pbVar23 >> 1);
          } while (uVar5 < uVar8);
          goto LAB_1073843f4;
        }
      }
    }
    uVar7 = uVar7 - 1;
  } while( true );
code_r0x000107383f68:
  if (((ulong)pbVar10 & 1) == 0) {
LAB_107383f6c:
    FUN_107383d5c(param_1,pbVar16,param_3,param_4,(uint)param_5 & 1);
    param_5 = 0;
  }
  goto LAB_107383d9c;
}



/* Entry: 107384484; end: 107384537;  */

void FUN_107384484(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = *param_4;
  bVar3 = *param_2;
  uVar6 = (uint)bVar2 - (uint)bVar3;
  uVar1 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar1 = uVar6;
  }
  bVar4 = *param_1;
  uVar7 = (uint)bVar2 - (uint)bVar4;
  uVar6 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar6 = uVar7;
  }
  bVar5 = *param_3;
  uVar8 = (uint)bVar2 - (uint)bVar5;
  uVar7 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar7 = uVar8;
  }
  if (uVar1 < uVar6) {
    if (uVar7 < uVar1) {
      *param_1 = bVar5;
    }
    else {
      *param_1 = bVar3;
      *param_2 = bVar4;
      uVar6 = (uint)*param_4 - (uint)*param_3;
      uVar1 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6;
      }
      uVar7 = (uint)*param_4 - (uint)bVar4;
      uVar6 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 <= uVar1) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = bVar4;
  }
  else if (uVar7 < uVar1) {
    *param_2 = bVar5;
    *param_3 = bVar3;
    uVar6 = (uint)*param_4 - (uint)*param_2;
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    bVar2 = *param_1;
    uVar7 = (uint)*param_4 - (uint)bVar2;
    uVar6 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar6 = uVar7;
    }
    if (uVar1 < uVar6) {
      *param_1 = *param_2;
      *param_2 = bVar2;
      return;
    }
  }
  return;
}



/* Entry: 107384538; end: 107384647;  */

void FUN_107384538(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010738a440();
  FUN_107384484();
  func_0x00010738a7f8();
  if (extraout_w11 < extraout_w10) {
    *param_3 = extraout_w8;
    *param_4 = extraout_w9;
    func_0x00010738a4d4(*param_3);
    if ((extraout_w11_00 < extraout_w10_00) &&
       (func_0x00010738a66c(), extraout_w11_01 < extraout_w10_01)) {
      *unaff_x20 = extraout_w8_00;
      *unaff_x19 = extraout_w9_00;
    }
  }
  return;
}



/* Entry: 107384648; end: 1073847cb;  */

void FUN_107384648(long param_1,long param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte extraout_w8;
  int iVar6;
  byte extraout_w9;
  long lVar7;
  uint extraout_w10;
  uint extraout_w11;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  byte *unaff_x19;
  byte *unaff_x21;
  byte *pbVar12;
  
  func_0x00010738ac0c();
  switch(param_2 - param_1) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010738a4d4(unaff_x21[-1],1);
    if (extraout_w11 < extraout_w10) {
      *unaff_x19 = extraout_w8;
      unaff_x21[-1] = extraout_w9;
    }
    break;
  case 3:
    FUN_107384484();
    break;
  case 4:
    func_0x000107384538();
    break;
  case 5:
    func_0x0001073845a8();
    break;
  default:
    FUN_107384484();
    iVar6 = 0;
    lVar7 = 3;
    pbVar10 = unaff_x19 + 3;
    pbVar12 = unaff_x19 + 2;
    while (pbVar8 = pbVar10, pbVar8 != unaff_x21) {
      bVar2 = *pbVar8;
      uVar4 = (uint)*param_3 - (uint)bVar2;
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar9 = (uint)*pbVar12;
      uVar5 = (uint)*param_3 - (uint)*pbVar12;
      uVar4 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar4 = uVar5;
      }
      lVar11 = lVar7;
      if (uVar1 < uVar4) {
        do {
          unaff_x19[lVar11] = (byte)uVar9;
          lVar3 = lVar11 + -1;
          pbVar10 = unaff_x19;
          if (lVar3 == 0) goto LAB_107384778;
          uVar4 = (uint)*param_3 - (uint)bVar2;
          uVar1 = -uVar4;
          if (-1 < (int)uVar4) {
            uVar1 = uVar4;
          }
          uVar9 = (uint)unaff_x19[lVar11 + -2];
          uVar5 = *param_3 - uVar9;
          uVar4 = -uVar5;
          if (-1 < (int)uVar5) {
            uVar4 = uVar5;
          }
          lVar11 = lVar3;
        } while (uVar1 < uVar4);
        pbVar10 = unaff_x19 + lVar3;
LAB_107384778:
        *pbVar10 = bVar2;
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return;
        }
      }
      lVar7 = lVar7 + 1;
      pbVar12 = pbVar8;
      pbVar10 = pbVar8 + 1;
    }
  }
  return;
}



/* Entry: 1073847cc; end: 10738480b;  */

long * FUN_1073847cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x60;
      func_0x000107383d34();
    }
    func_0x00010738a964();
  }
  return param_1;
}



/* Entry: 10738480c; end: 107384813;  */

void FUN_10738480c(void)

{
  return;
}



/* Entry: 107384814; end: 107384843;  */

void FUN_107384814(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109a7bf0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107384844; end: 107384867;  */

void FUN_107384844(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a7bf0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107384868; end: 107384937;  */

void FUN_107384868(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar8 = *(long **)(param_1 + 8);
  puVar2 = (undefined8 *)plVar8[1];
  if (puVar2 < (undefined8 *)plVar8[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = param_2;
  }
  else {
    lVar6 = *plVar8;
    lVar7 = (long)puVar2 - lVar6;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10738496c();
LAB_107384934:
      func_0x000104bd35f4();
      func_0x00010738a75c();
      func_0x00010738a598();
      func_0x00010738a36c();
      return;
    }
    uVar4 = plVar8[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_107384934;
      lVar3 = uVar5 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar7);
    puVar9 = puVar2 + 1;
    *puVar2 = param_2;
    _memcpy(puVar2 + -(lVar7 >> 3),lVar6,lVar7);
    *plVar8 = (long)(puVar2 + -(lVar7 >> 3));
    plVar8[1] = (long)puVar9;
    plVar8[2] = lVar3 + uVar5 * 8;
    if (lVar6 != 0) {
      __ZdlPv(lVar6);
    }
  }
  plVar8[1] = (long)puVar9;
  return;
}



/* Entry: 107384938; end: 10738495f;  */

void FUN_107384938(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a7c50);
  func_0x00010738a36c();
  return;
}



/* Entry: 107384960; end: 10738496b;  */

undefined ** FUN_107384960(void)

{
  return &PTR_DAT_1109a7c50;
}



/* Entry: 10738496c; end: 107384977;  */

void FUN_10738496c(long *param_1,long *param_2,byte *param_3,long param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long *plStack_80;
  
  func_0x00010738ab04();
  plVar9 = param_1;
  plStack_80 = param_2;
LAB_1073849b0:
  plVar12 = plStack_80 + -1;
  plVar24 = plVar9;
  plVar8 = plVar9;
LAB_1073849cc:
  plVar9 = plVar8;
  uVar27 = (long)plStack_80 - (long)plVar9 >> 3;
  switch(uVar27) {
  case 0:
  case 1:
    goto LAB_10738a5cc;
  case 2:
    lVar13 = plStack_80[-1];
    lVar16 = *plVar9;
    uVar23 = (uint)*param_3;
    func_0x00010738a90c();
    FUN_107385100();
    if (uVar23 == 0) {
      return;
    }
    *plVar9 = lVar13;
    plStack_80[-1] = lVar16;
    return;
  case 3:
    uVar28 = (ulong)*param_3;
    plVar8 = plVar9 + 1;
    func_0x00010738a774();
    func_0x00010738a8c4();
    puVar17 = (undefined1 *)*plVar8;
    lVar13 = *plVar9;
    uVar2 = puVar17[1];
    uVar1 = *puVar17;
    uVar27 = uVar28;
    func_0x00010738aa64(uVar28,uVar1,uVar2);
    puVar22 = (undefined1 *)*plVar12;
    uVar19 = uVar28;
    FUN_107385100(uVar28,*puVar22,puVar22[1],uVar1,uVar2);
    iVar7 = (int)uVar19;
    if ((uVar27 & 1) == 0) {
      if (iVar7 != 0) {
        *plVar8 = (long)puVar22;
        *plVar12 = (long)puVar17;
        lVar13 = *plVar8;
        lVar16 = *plVar9;
        func_0x00010738a90c();
        func_0x00010738a4f4();
        if (iVar7 != 0) {
          *plVar9 = lVar13;
          *plVar8 = lVar16;
        }
      }
    }
    else {
      if (iVar7 == 0) {
        *plVar9 = (long)puVar17;
        *plVar8 = lVar13;
        lVar16 = *plVar12;
        func_0x00010738a90c();
        func_0x00010738aa64();
        if ((int)uVar28 == 0) {
          return;
        }
        *plVar8 = lVar16;
      }
      else {
        *plVar9 = (long)puVar22;
      }
      *plVar12 = lVar13;
    }
    return;
  case 4:
    plVar8 = plVar9 + 2;
    plVar11 = plVar9;
    func_0x00010738a774(plVar9,plVar9 + 1);
    iVar7 = (int)plVar11;
    func_0x00010738a440();
    FUN_107385154();
    func_0x00010738a924();
    func_0x00010738a4f4();
    if (((iVar7 != 0) && (func_0x00010738a49c(), iVar7 != 0)) && (func_0x00010738a474(), iVar7 != 0)
       ) {
      *plVar9 = (long)plVar8;
      *plVar24 = (long)plVar12;
    }
    break;
  case 5:
    plVar8 = plVar9 + 2;
    plVar11 = plVar9 + 3;
    plVar10 = plVar9;
    func_0x00010738a774(plVar9,plVar9 + 1);
    iVar7 = (int)plVar10;
    func_0x00010738a440();
    FUN_10738524c();
    lVar13 = *plVar12;
    lVar16 = *plVar11;
    func_0x00010738a4f4();
    if (iVar7 != 0) {
      *plVar11 = lVar13;
      *plVar12 = lVar16;
      func_0x00010738a924();
      func_0x00010738a4f4();
      if (((iVar7 != 0) && (func_0x00010738a49c(), iVar7 != 0)) &&
         (func_0x00010738a474(), iVar7 != 0)) {
        *plVar9 = (long)plVar8;
        *plVar24 = (long)plVar11;
      }
    }
    break;
  default:
    if ((long)uVar27 < 0x18) {
      if ((param_5 & 1) == 0) {
        plVar8 = plVar9;
        if (plVar9 == plStack_80) {
          return;
        }
        while( true ) {
          plVar9 = plVar9 + 1;
          plVar24 = plVar8 + 1;
          if (plVar24 == plStack_80) break;
          lVar13 = *plVar8;
          lVar16 = plVar8[1];
          func_0x00010738a924();
          func_0x00010738a39c();
          plVar8 = plVar24;
          plVar24 = plVar9;
          if ((int)param_1 != 0) {
            do {
              *plVar24 = lVar13;
              lVar13 = plVar24[-2];
              func_0x00010738a924();
              func_0x00010738a39c();
              plVar24 = plVar24 + -1;
            } while (((ulong)param_1 & 1) != 0);
            *plVar24 = lVar16;
          }
        }
        return;
      }
      if (plVar9 == plStack_80) {
        return;
      }
      lVar13 = 8;
      plVar8 = plVar9;
      goto LAB_107384d78;
    }
    if (param_4 == 0) {
      if (plVar9 == plStack_80) {
        return;
      }
      uVar28 = uVar27 - 2 >> 1;
      uVar19 = uVar28;
      goto LAB_107384e0c;
    }
    param_1 = plVar9 + (uVar27 >> 1);
    if (uVar27 < 0x81) {
      FUN_107385154(param_1,plVar9,plVar12,*param_3);
    }
    else {
      FUN_107385154(plVar9,param_1,plVar12,*param_3);
      plVar8 = param_1 + -1;
      FUN_107385154(plVar9 + 1,plVar8,plStack_80 + -2,*param_3);
      FUN_107385154(plVar9 + 2,param_1 + 1,plStack_80 + -3,*param_3);
      FUN_107385154(plVar8,param_1,param_1 + 1,*param_3);
      lVar13 = *plVar9;
      *plVar9 = *param_1;
      *param_1 = lVar13;
      param_1 = plVar8;
    }
    param_4 = param_4 + -1;
    lVar13 = *plVar9;
    plVar11 = param_1;
    if (((param_5 & 1) == 0) &&
       (func_0x00010738a2b0(), plVar11 = param_1, ((ulong)param_1 & 1) == 0)) goto LAB_107384bd4;
    lVar16 = 0;
    do {
      lVar15 = *(long *)((long)plVar9 + lVar16 + 8);
      func_0x00010738a90c();
      func_0x00010738a2b0();
      lVar16 = lVar16 + 8;
    } while (((ulong)plVar11 & 1) != 0);
    plVar10 = (long *)((long)plVar9 + lVar16);
    plVar24 = plStack_80;
    plVar8 = plVar10;
    if (lVar16 == 8) {
      do {
        plVar20 = plVar24;
        if (plVar24 <= plVar10) break;
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
        plVar20 = plVar24;
      } while (((ulong)plVar11 & 1) == 0);
    }
    else {
      do {
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
        plVar20 = plVar24;
      } while ((int)plVar11 == 0);
    }
    while (plVar8 < plVar24) {
      *plVar8 = *plVar24;
      *plVar24 = lVar15;
      do {
        plVar8 = plVar8 + 1;
        lVar15 = *plVar8;
        func_0x00010738a90c();
        func_0x00010738a2b0();
      } while (((ulong)plVar11 & 1) != 0);
      do {
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
      } while (((ulong)plVar11 & 1) == 0);
    }
    plVar21 = plVar8 + -1;
    if (plVar9 != plVar21) {
      *plVar9 = *plVar21;
    }
    *plVar21 = lVar13;
    param_1 = plVar11;
    plVar24 = plVar9;
    if (plVar20 <= plVar10) {
      func_0x00010738a918();
      FUN_107385358();
      param_1 = plVar8;
      FUN_107385358(plVar8,plStack_80,param_3);
      if ((int)param_1 != 0) goto LAB_107384c88;
      if (((ulong)plVar11 & 1) != 0) goto LAB_1073849cc;
    }
    func_0x00010738a918();
    FUN_107384978();
    param_5 = 0;
    goto LAB_1073849cc;
  }
  return;
LAB_107384d78:
  if (plVar8 + 1 == plStack_80) {
    return;
  }
  lVar16 = *plVar8;
  lVar15 = plVar8[1];
  func_0x00010738a39c();
  lVar26 = lVar13;
  if ((int)param_1 != 0) {
    do {
      *(long *)((long)plVar9 + lVar26) = lVar16;
      lVar5 = lVar26 + -8;
      plVar24 = plVar9;
      if (lVar5 == 0) goto LAB_107384de0;
      lVar16 = *(long *)((long)plVar9 + lVar26 + -0x10);
      func_0x00010738a39c();
      lVar26 = lVar5;
    } while (((ulong)param_1 & 1) != 0);
    plVar24 = (long *)((long)plVar9 + lVar5);
LAB_107384de0:
    *plVar24 = lVar15;
  }
  lVar13 = lVar13 + 8;
  plVar8 = plVar8 + 1;
  goto LAB_107384d78;
LAB_107384e0c:
  do {
    if ((long)uVar19 <= (long)uVar28) {
      plVar24 = (long *)(ulong)*param_3;
      uVar14 = (uVar19 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = plVar9 + uVar14;
      uVar25 = uVar19 * 2 + 2;
      puVar17 = (undefined1 *)*plVar8;
      uVar23 = (uint)*param_3;
      if ((long)uVar25 < (long)uVar27) {
        puVar22 = (undefined1 *)plVar8[1];
        uVar1 = *puVar17;
        uVar2 = *puVar22;
        uVar6 = uVar23;
        FUN_107385100(uVar23,uVar1,puVar17[1],uVar2,puVar22[1]);
        if (uVar6 == 0) {
          uVar2 = uVar1;
        }
        plVar24 = (long *)(ulong)uVar23;
        plVar12 = plVar8 + 1;
        if (uVar6 == 0) {
          puVar22 = puVar17;
          plVar12 = plVar8;
          uVar25 = uVar14;
        }
      }
      else {
        uVar2 = *puVar17;
        puVar22 = puVar17;
        plVar12 = plVar8;
        uVar25 = uVar14;
      }
      plVar8 = plVar9 + uVar19;
      puVar17 = (undefined1 *)*plVar8;
      uVar1 = *puVar17;
      uVar3 = puVar17[1];
      param_1 = plVar24;
      FUN_107385100(plVar24,uVar2,puVar22[1]);
      if (((ulong)param_1 & 1) == 0) {
        do {
          plVar11 = plVar12;
          *plVar8 = (long)puVar22;
          if ((long)uVar28 < (long)uVar25) break;
          uVar14 = uVar25 << 1 | 1;
          plVar8 = plVar9 + uVar14;
          uVar25 = uVar25 * 2 + 2;
          puVar18 = (undefined1 *)*plVar8;
          if ((long)uVar25 < (long)uVar27) {
            puVar22 = (undefined1 *)plVar8[1];
            uVar4 = *puVar18;
            uVar2 = *puVar22;
            uVar6 = uVar23;
            FUN_107385100(uVar23,uVar4,puVar18[1],uVar2,puVar22[1]);
            if (uVar6 == 0) {
              puVar22 = puVar18;
              uVar2 = uVar4;
            }
            plVar24 = (long *)(ulong)uVar23;
            plVar12 = plVar8 + 1;
            if (uVar6 == 0) {
              plVar12 = plVar8;
              uVar25 = uVar14;
            }
          }
          else {
            uVar2 = *puVar18;
            puVar22 = puVar18;
            plVar12 = plVar8;
            uVar25 = uVar14;
          }
          param_1 = plVar24;
          FUN_107385100(plVar24,uVar2,puVar22[1],uVar1,uVar3);
          plVar8 = plVar11;
        } while ((int)param_1 == 0);
        *plVar11 = (long)puVar17;
      }
    }
    uVar19 = uVar19 - 1;
  } while (-1 < (long)uVar19);
  do {
    if ((long)uVar27 < 2) {
LAB_10738a5cc:
      return;
    }
    lVar13 = *plVar9;
    uVar19 = 0;
    plVar8 = plVar9;
    do {
      plVar12 = plVar8 + uVar19 + 1;
      lVar26 = *plVar12;
      lVar15 = uVar19 * 2;
      uVar25 = uVar19 << 1 | 1;
      uVar28 = lVar15 + 2;
      uVar14 = uVar25;
      plVar24 = plVar12;
      lVar16 = lVar26;
      if ((long)uVar28 < (long)uVar27) {
        lVar16 = plVar8[uVar19 + 2];
        func_0x00010738a924();
        func_0x00010738a4f4();
        uVar14 = uVar28;
        plVar24 = plVar8 + uVar19 + 2;
        if ((int)param_1 == 0) {
          uVar14 = uVar25;
          plVar24 = plVar12;
          lVar16 = lVar26;
        }
      }
      *plVar8 = lVar16;
      uVar19 = uVar14;
      plVar8 = plVar24;
    } while ((long)uVar14 <= (long)(uVar27 - 2 >> 1));
    plStack_80 = plStack_80 + -1;
    if (plVar24 == plStack_80) {
      *plVar24 = lVar13;
    }
    else {
      *plVar24 = *plStack_80;
      *plStack_80 = lVar13;
      lVar13 = (long)plVar24 + (8 - (long)plVar9) >> 3;
      if (1 < lVar13) {
        func_0x00010738abb0(lVar13 + -2);
        lVar13 = *plVar24;
        func_0x00010738a6f8();
        if ((int)param_1 != 0) {
          do {
            *plVar24 = lVar16;
            if (uVar28 == 0) break;
            func_0x00010738abb0(lVar15 + 1);
            func_0x00010738a6f8();
          } while (((ulong)param_1 & 1) != 0);
          *plVar24 = lVar13;
        }
      }
    }
    uVar27 = uVar27 - 1;
  } while( true );
LAB_107384bd4:
  func_0x00010738a268(*plVar12);
  plVar8 = plVar9;
  if (((ulong)param_1 & 1) == 0) {
    do {
      plVar8 = plVar8 + 1;
      if (plStack_80 <= plVar8) break;
      func_0x00010738a268(*plVar8);
    } while ((int)param_1 == 0);
  }
  else {
    do {
      plVar8 = plVar8 + 1;
      func_0x00010738a268(*plVar8);
    } while (((ulong)param_1 & 1) == 0);
  }
  plVar24 = plStack_80;
  if (plVar8 < plStack_80) {
    do {
      plVar24 = plVar24 + -1;
      func_0x00010738a268(*plVar24);
    } while (((ulong)param_1 & 1) != 0);
  }
  while (plVar8 < plVar24) {
    lVar16 = *plVar8;
    *plVar8 = *plVar24;
    *plVar24 = lVar16;
    do {
      plVar8 = plVar8 + 1;
      func_0x00010738a268(*plVar8);
    } while ((int)param_1 == 0);
    do {
      plVar24 = plVar24 + -1;
      func_0x00010738a268(*plVar24);
    } while (((ulong)param_1 & 1) != 0);
  }
  plVar11 = plVar8 + -1;
  if (plVar9 != plVar11) {
    *plVar9 = *plVar11;
  }
  param_5 = 0;
  *plVar11 = lVar13;
  goto LAB_1073849cc;
LAB_107384c88:
  plStack_80 = plVar21;
  if (((ulong)plVar11 & 1) != 0) {
    return;
  }
  goto LAB_1073849b0;
}



/* Entry: 107384978; end: 1073850ff;  */

void FUN_107384978(long *param_1,long *param_2,byte *param_3,long param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  uint uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long *plStack_70;
  
  plVar9 = param_1;
  plStack_70 = param_2;
LAB_1073849b0:
  plVar12 = plStack_70 + -1;
  plVar24 = plVar9;
  plVar8 = plVar9;
LAB_1073849cc:
  plVar9 = plVar8;
  uVar27 = (long)plStack_70 - (long)plVar9 >> 3;
  switch(uVar27) {
  case 0:
  case 1:
    goto LAB_10738a5cc;
  case 2:
    lVar13 = plStack_70[-1];
    lVar16 = *plVar9;
    uVar23 = (uint)*param_3;
    func_0x00010738a90c();
    FUN_107385100();
    if (uVar23 == 0) {
      return;
    }
    *plVar9 = lVar13;
    plStack_70[-1] = lVar16;
    return;
  case 3:
    uVar28 = (ulong)*param_3;
    plVar8 = plVar9 + 1;
    func_0x00010738a774();
    func_0x00010738a8c4();
    puVar17 = (undefined1 *)*plVar8;
    lVar13 = *plVar9;
    uVar2 = puVar17[1];
    uVar1 = *puVar17;
    uVar27 = uVar28;
    func_0x00010738aa64(uVar28,uVar1,uVar2);
    puVar22 = (undefined1 *)*plVar12;
    uVar19 = uVar28;
    FUN_107385100(uVar28,*puVar22,puVar22[1],uVar1,uVar2);
    iVar7 = (int)uVar19;
    if ((uVar27 & 1) == 0) {
      if (iVar7 != 0) {
        *plVar8 = (long)puVar22;
        *plVar12 = (long)puVar17;
        lVar13 = *plVar8;
        lVar16 = *plVar9;
        func_0x00010738a90c();
        func_0x00010738a4f4();
        if (iVar7 != 0) {
          *plVar9 = lVar13;
          *plVar8 = lVar16;
        }
      }
    }
    else {
      if (iVar7 == 0) {
        *plVar9 = (long)puVar17;
        *plVar8 = lVar13;
        lVar16 = *plVar12;
        func_0x00010738a90c();
        func_0x00010738aa64();
        if ((int)uVar28 == 0) {
          return;
        }
        *plVar8 = lVar16;
      }
      else {
        *plVar9 = (long)puVar22;
      }
      *plVar12 = lVar13;
    }
    return;
  case 4:
    plVar8 = plVar9 + 2;
    plVar11 = plVar9;
    func_0x00010738a774(plVar9,plVar9 + 1);
    iVar7 = (int)plVar11;
    func_0x00010738a440();
    FUN_107385154();
    func_0x00010738a924();
    func_0x00010738a4f4();
    if (((iVar7 != 0) && (func_0x00010738a49c(), iVar7 != 0)) && (func_0x00010738a474(), iVar7 != 0)
       ) {
      *plVar9 = (long)plVar8;
      *plVar24 = (long)plVar12;
    }
    break;
  case 5:
    plVar8 = plVar9 + 2;
    plVar11 = plVar9 + 3;
    plVar10 = plVar9;
    func_0x00010738a774(plVar9,plVar9 + 1);
    iVar7 = (int)plVar10;
    func_0x00010738a440();
    FUN_10738524c();
    lVar13 = *plVar12;
    lVar16 = *plVar11;
    func_0x00010738a4f4();
    if (iVar7 != 0) {
      *plVar11 = lVar13;
      *plVar12 = lVar16;
      func_0x00010738a924();
      func_0x00010738a4f4();
      if (((iVar7 != 0) && (func_0x00010738a49c(), iVar7 != 0)) &&
         (func_0x00010738a474(), iVar7 != 0)) {
        *plVar9 = (long)plVar8;
        *plVar24 = (long)plVar11;
      }
    }
    break;
  default:
    if ((long)uVar27 < 0x18) {
      if ((param_5 & 1) == 0) {
        plVar8 = plVar9;
        if (plVar9 == plStack_70) {
          return;
        }
        while( true ) {
          plVar9 = plVar9 + 1;
          plVar24 = plVar8 + 1;
          if (plVar24 == plStack_70) break;
          lVar13 = *plVar8;
          lVar16 = plVar8[1];
          func_0x00010738a924();
          func_0x00010738a39c();
          plVar8 = plVar24;
          plVar24 = plVar9;
          if ((int)param_1 != 0) {
            do {
              *plVar24 = lVar13;
              lVar13 = plVar24[-2];
              func_0x00010738a924();
              func_0x00010738a39c();
              plVar24 = plVar24 + -1;
            } while (((ulong)param_1 & 1) != 0);
            *plVar24 = lVar16;
          }
        }
        return;
      }
      if (plVar9 == plStack_70) {
        return;
      }
      lVar13 = 8;
      plVar8 = plVar9;
      goto LAB_107384d78;
    }
    if (param_4 == 0) {
      if (plVar9 == plStack_70) {
        return;
      }
      uVar28 = uVar27 - 2 >> 1;
      uVar19 = uVar28;
      goto LAB_107384e0c;
    }
    param_1 = plVar9 + (uVar27 >> 1);
    if (uVar27 < 0x81) {
      FUN_107385154(param_1,plVar9,plVar12,*param_3);
    }
    else {
      FUN_107385154(plVar9,param_1,plVar12,*param_3);
      plVar8 = param_1 + -1;
      FUN_107385154(plVar9 + 1,plVar8,plStack_70 + -2,*param_3);
      FUN_107385154(plVar9 + 2,param_1 + 1,plStack_70 + -3,*param_3);
      FUN_107385154(plVar8,param_1,param_1 + 1,*param_3);
      lVar13 = *plVar9;
      *plVar9 = *param_1;
      *param_1 = lVar13;
      param_1 = plVar8;
    }
    param_4 = param_4 + -1;
    lVar13 = *plVar9;
    plVar11 = param_1;
    if (((param_5 & 1) == 0) &&
       (func_0x00010738a2b0(), plVar11 = param_1, ((ulong)param_1 & 1) == 0)) goto LAB_107384bd4;
    lVar16 = 0;
    do {
      lVar15 = *(long *)((long)plVar9 + lVar16 + 8);
      func_0x00010738a90c();
      func_0x00010738a2b0();
      lVar16 = lVar16 + 8;
    } while (((ulong)plVar11 & 1) != 0);
    plVar10 = (long *)((long)plVar9 + lVar16);
    plVar24 = plStack_70;
    plVar8 = plVar10;
    if (lVar16 == 8) {
      do {
        plVar20 = plVar24;
        if (plVar24 <= plVar10) break;
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
        plVar20 = plVar24;
      } while (((ulong)plVar11 & 1) == 0);
    }
    else {
      do {
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
        plVar20 = plVar24;
      } while ((int)plVar11 == 0);
    }
    while (plVar8 < plVar24) {
      *plVar8 = *plVar24;
      *plVar24 = lVar15;
      do {
        plVar8 = plVar8 + 1;
        lVar15 = *plVar8;
        func_0x00010738a90c();
        func_0x00010738a2b0();
      } while (((ulong)plVar11 & 1) != 0);
      do {
        plVar24 = plVar24 + -1;
        func_0x00010738a2b0();
      } while (((ulong)plVar11 & 1) == 0);
    }
    plVar21 = plVar8 + -1;
    if (plVar9 != plVar21) {
      *plVar9 = *plVar21;
    }
    *plVar21 = lVar13;
    param_1 = plVar11;
    plVar24 = plVar9;
    if (plVar20 <= plVar10) {
      func_0x00010738a918();
      FUN_107385358();
      param_1 = plVar8;
      FUN_107385358(plVar8,plStack_70,param_3);
      if ((int)param_1 != 0) goto LAB_107384c88;
      if (((ulong)plVar11 & 1) != 0) goto LAB_1073849cc;
    }
    func_0x00010738a918();
    FUN_107384978();
    param_5 = 0;
    goto LAB_1073849cc;
  }
  return;
LAB_107384d78:
  if (plVar8 + 1 == plStack_70) {
    return;
  }
  lVar16 = *plVar8;
  lVar15 = plVar8[1];
  func_0x00010738a39c();
  lVar26 = lVar13;
  if ((int)param_1 != 0) {
    do {
      *(long *)((long)plVar9 + lVar26) = lVar16;
      lVar5 = lVar26 + -8;
      plVar24 = plVar9;
      if (lVar5 == 0) goto LAB_107384de0;
      lVar16 = *(long *)((long)plVar9 + lVar26 + -0x10);
      func_0x00010738a39c();
      lVar26 = lVar5;
    } while (((ulong)param_1 & 1) != 0);
    plVar24 = (long *)((long)plVar9 + lVar5);
LAB_107384de0:
    *plVar24 = lVar15;
  }
  lVar13 = lVar13 + 8;
  plVar8 = plVar8 + 1;
  goto LAB_107384d78;
LAB_107384e0c:
  do {
    if ((long)uVar19 <= (long)uVar28) {
      plVar24 = (long *)(ulong)*param_3;
      uVar14 = (uVar19 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = plVar9 + uVar14;
      uVar25 = uVar19 * 2 + 2;
      puVar17 = (undefined1 *)*plVar8;
      uVar23 = (uint)*param_3;
      if ((long)uVar25 < (long)uVar27) {
        puVar22 = (undefined1 *)plVar8[1];
        uVar1 = *puVar17;
        uVar2 = *puVar22;
        uVar6 = uVar23;
        FUN_107385100(uVar23,uVar1,puVar17[1],uVar2,puVar22[1]);
        if (uVar6 == 0) {
          uVar2 = uVar1;
        }
        plVar24 = (long *)(ulong)uVar23;
        plVar12 = plVar8 + 1;
        if (uVar6 == 0) {
          puVar22 = puVar17;
          plVar12 = plVar8;
          uVar25 = uVar14;
        }
      }
      else {
        uVar2 = *puVar17;
        puVar22 = puVar17;
        plVar12 = plVar8;
        uVar25 = uVar14;
      }
      plVar8 = plVar9 + uVar19;
      puVar17 = (undefined1 *)*plVar8;
      uVar1 = *puVar17;
      uVar3 = puVar17[1];
      param_1 = plVar24;
      FUN_107385100(plVar24,uVar2,puVar22[1]);
      if (((ulong)param_1 & 1) == 0) {
        do {
          plVar11 = plVar12;
          *plVar8 = (long)puVar22;
          if ((long)uVar28 < (long)uVar25) break;
          uVar14 = uVar25 << 1 | 1;
          plVar8 = plVar9 + uVar14;
          uVar25 = uVar25 * 2 + 2;
          puVar18 = (undefined1 *)*plVar8;
          if ((long)uVar25 < (long)uVar27) {
            puVar22 = (undefined1 *)plVar8[1];
            uVar4 = *puVar18;
            uVar2 = *puVar22;
            uVar6 = uVar23;
            FUN_107385100(uVar23,uVar4,puVar18[1],uVar2,puVar22[1]);
            if (uVar6 == 0) {
              puVar22 = puVar18;
              uVar2 = uVar4;
            }
            plVar24 = (long *)(ulong)uVar23;
            plVar12 = plVar8 + 1;
            if (uVar6 == 0) {
              plVar12 = plVar8;
              uVar25 = uVar14;
            }
          }
          else {
            uVar2 = *puVar18;
            puVar22 = puVar18;
            plVar12 = plVar8;
            uVar25 = uVar14;
          }
          param_1 = plVar24;
          FUN_107385100(plVar24,uVar2,puVar22[1],uVar1,uVar3);
          plVar8 = plVar11;
        } while ((int)param_1 == 0);
        *plVar11 = (long)puVar17;
      }
    }
    uVar19 = uVar19 - 1;
  } while (-1 < (long)uVar19);
  do {
    if ((long)uVar27 < 2) {
LAB_10738a5cc:
      return;
    }
    lVar13 = *plVar9;
    uVar19 = 0;
    plVar8 = plVar9;
    do {
      plVar12 = plVar8 + uVar19 + 1;
      lVar26 = *plVar12;
      lVar15 = uVar19 * 2;
      uVar25 = uVar19 << 1 | 1;
      uVar28 = lVar15 + 2;
      uVar14 = uVar25;
      plVar24 = plVar12;
      lVar16 = lVar26;
      if ((long)uVar28 < (long)uVar27) {
        lVar16 = plVar8[uVar19 + 2];
        func_0x00010738a924();
        func_0x00010738a4f4();
        uVar14 = uVar28;
        plVar24 = plVar8 + uVar19 + 2;
        if ((int)param_1 == 0) {
          uVar14 = uVar25;
          plVar24 = plVar12;
          lVar16 = lVar26;
        }
      }
      *plVar8 = lVar16;
      uVar19 = uVar14;
      plVar8 = plVar24;
    } while ((long)uVar14 <= (long)(uVar27 - 2 >> 1));
    plStack_70 = plStack_70 + -1;
    if (plVar24 == plStack_70) {
      *plVar24 = lVar13;
    }
    else {
      *plVar24 = *plStack_70;
      *plStack_70 = lVar13;
      lVar13 = (long)plVar24 + (8 - (long)plVar9) >> 3;
      if (1 < lVar13) {
        func_0x00010738abb0(lVar13 + -2);
        lVar13 = *plVar24;
        func_0x00010738a6f8();
        if ((int)param_1 != 0) {
          do {
            *plVar24 = lVar16;
            if (uVar28 == 0) break;
            func_0x00010738abb0(lVar15 + 1);
            func_0x00010738a6f8();
          } while (((ulong)param_1 & 1) != 0);
          *plVar24 = lVar13;
        }
      }
    }
    uVar27 = uVar27 - 1;
  } while( true );
LAB_107384bd4:
  func_0x00010738a268(*plVar12);
  plVar8 = plVar9;
  if (((ulong)param_1 & 1) == 0) {
    do {
      plVar8 = plVar8 + 1;
      if (plStack_70 <= plVar8) break;
      func_0x00010738a268(*plVar8);
    } while ((int)param_1 == 0);
  }
  else {
    do {
      plVar8 = plVar8 + 1;
      func_0x00010738a268(*plVar8);
    } while (((ulong)param_1 & 1) == 0);
  }
  plVar24 = plStack_70;
  if (plVar8 < plStack_70) {
    do {
      plVar24 = plVar24 + -1;
      func_0x00010738a268(*plVar24);
    } while (((ulong)param_1 & 1) != 0);
  }
  while (plVar8 < plVar24) {
    lVar16 = *plVar8;
    *plVar8 = *plVar24;
    *plVar24 = lVar16;
    do {
      plVar8 = plVar8 + 1;
      func_0x00010738a268(*plVar8);
    } while ((int)param_1 == 0);
    do {
      plVar24 = plVar24 + -1;
      func_0x00010738a268(*plVar24);
    } while (((ulong)param_1 & 1) != 0);
  }
  plVar11 = plVar8 + -1;
  if (plVar9 != plVar11) {
    *plVar9 = *plVar11;
  }
  param_5 = 0;
  *plVar11 = lVar13;
  goto LAB_1073849cc;
LAB_107384c88:
  plStack_70 = plVar21;
  if (((ulong)plVar11 & 1) != 0) {
    return;
  }
  goto LAB_1073849b0;
}



/* Entry: 107385100; end: 107385153;  */

bool FUN_107385100(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1073854f4(param_2,param_3,param_1);
  FUN_1073854f4(param_4,param_5,param_1);
  return (uint)param_2 < (uint)param_4;
}



/* Entry: 107385154; end: 10738524b;  */

void FUN_107385154(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  func_0x00010738a8c4();
  puVar6 = (undefined1 *)*param_2;
  uVar9 = *param_1;
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  uVar4 = param_4;
  func_0x00010738aa64(param_4,uVar2,uVar1);
  puVar8 = (undefined1 *)*param_3;
  uVar5 = param_4;
  FUN_107385100(param_4,*puVar8,puVar8[1],uVar2,uVar1);
  iVar3 = (int)uVar5;
  if ((uVar4 & 1) == 0) {
    if (iVar3 != 0) {
      *param_2 = puVar8;
      *param_3 = puVar6;
      uVar9 = *param_2;
      uVar7 = *param_1;
      func_0x00010738a90c();
      func_0x00010738a4f4();
      if (iVar3 != 0) {
        *param_1 = uVar9;
        *param_2 = uVar7;
      }
    }
  }
  else {
    if (iVar3 == 0) {
      *param_1 = puVar6;
      *param_2 = uVar9;
      uVar7 = *param_3;
      func_0x00010738a90c();
      func_0x00010738aa64();
      if ((int)param_4 == 0) {
        return;
      }
      *param_2 = uVar7;
    }
    else {
      *param_1 = puVar8;
    }
    *param_3 = uVar9;
  }
  return;
}



/* Entry: 10738524c; end: 107385357;  */

void FUN_10738524c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010738a440();
  FUN_107385154();
  func_0x00010738a924();
  func_0x00010738a4f4();
  if (((param_1 != 0) && (func_0x00010738a49c(), param_1 != 0)) &&
     (func_0x00010738a474(), param_1 != 0)) {
    *unaff_x20 = param_3;
    *unaff_x19 = param_4;
  }
  return;
}



/* Entry: 107385358; end: 1073854f3;  */

void FUN_107385358(long param_1,long param_2,byte *param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x30;
  
  func_0x00010738a8c4();
  func_0x0001001e7a38();
  bVar2 = true;
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    goto LAB_1073854d0;
  case 2:
    puVar8 = (undefined1 *)unaff_x20[-1];
    puVar9 = (undefined1 *)*unaff_x19;
    uVar3 = (uint)*param_3;
    FUN_107385100(*param_3,*puVar8,puVar8[1],*puVar9,puVar9[1]);
    if (uVar3 != 0) {
      *unaff_x19 = puVar8;
      unaff_x20[-1] = puVar9;
    }
    break;
  case 3:
    FUN_107385154();
    break;
  case 4:
    func_0x00010738524c();
    break;
  case 5:
    func_0x0001073852bc();
    break;
  default:
    puVar4 = unaff_x19;
    FUN_107385154();
    iVar11 = 0;
    lVar12 = 0x18;
    puVar7 = unaff_x19 + 3;
    puVar10 = unaff_x19 + 2;
    while (puVar5 = puVar7, puVar5 != unaff_x20) {
      uVar13 = *puVar5;
      uVar14 = *puVar10;
      func_0x00010738a6ac();
      lVar6 = lVar12;
      if ((int)puVar4 != 0) {
        do {
          *(undefined8 *)((long)unaff_x19 + lVar6) = uVar14;
          lVar1 = lVar6 + -8;
          puVar7 = unaff_x19;
          if (lVar1 == 0) goto LAB_107385490;
          uVar14 = *(undefined8 *)((long)unaff_x19 + lVar6 + -0x10);
          func_0x00010738a6ac();
          lVar6 = lVar1;
        } while (((ulong)puVar4 & 1) != 0);
        puVar7 = (undefined8 *)((long)unaff_x19 + lVar1);
LAB_107385490:
        *puVar7 = uVar13;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          bVar2 = puVar5 + 1 == unaff_x20;
          goto LAB_1073854d0;
        }
      }
      lVar12 = lVar12 + 8;
      puVar10 = puVar5;
      puVar7 = puVar5 + 1;
    }
  }
  bVar2 = true;
LAB_1073854d0:
  func_0x00010738a790(bVar2,unaff_x30);
  return;
}



/* Entry: 1073854f4; end: 107385537;  */

uint FUN_1073854f4(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 < (param_1 & 0xff)) || ((param_2 & 0xff) <= param_3)) {
    uVar2 = (param_1 & 0xff) - param_3;
    uVar1 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ~param_3 + (param_2 & 0xff);
    uVar3 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xff;
}



/* Entry: 107385538; end: 107385563;  */

long * FUN_107385538(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107385564; end: 1073855cb;  */

undefined8 * FUN_107385564(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    while (plVar6 != plVar7) {
      plVar7 = plVar7 + -1;
      plVar4 = (long *)*plVar7;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    func_0x00010738a964();
  }
  return param_1;
}



/* Entry: 1073855cc; end: 10738576f;  */

void FUN_1073855cc(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lVar5 = *(long *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 - lVar5 != 0) {
    uVar6 = lVar7 - lVar5 >> 5;
    if (uVar6 >> 0x3b != 0) {
      FUN_10735c064();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10738573c);
      (*pcVar4)();
    }
    FUN_10736cdb8(&uStack_68,uVar6,0,&uStack_80);
    FUN_10736cd94(&lStack_90,&uStack_68);
    FUN_10736cedc(&uStack_68);
    lVar5 = *(long *)(param_2 + 0x18);
    lVar7 = *(long *)(param_2 + 0x20);
  }
  for (; lVar3 = lStack_88, lVar2 = lStack_90, puVar1 = PTR___ZSt7nothrow_1103469d8, lVar5 != lVar7;
      lVar5 = lVar5 + 0x20) {
    if ((*(long *)(lVar5 + 0x10) != 0) && (*(long *)(*(long *)(lVar5 + 0x10) + 8) != -1)) {
      FUN_10736cc9c(&lStack_90,lVar5);
    }
  }
  uVar8 = lStack_88 - lStack_90 >> 5;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar6 = uVar8;
  if ((long)uVar8 < 1) {
    uVar6 = 0;
  }
  else {
    for (; uVar6 != 0; uVar6 = uVar6 >> 1) {
      lVar5 = uVar6 << 5;
      __ZnwmRKSt9nothrow_t(lVar5,puVar1);
      if (lVar5 != 0) goto LAB_1073856c0;
    }
    lVar5 = 0;
LAB_1073856c0:
    uStack_78 = 0;
    uStack_70 = uVar6;
    FUN_1073859d4(&uStack_68,lVar5);
    uStack_60 = uVar6;
    FUN_1073859ec(&uStack_78);
  }
  FUN_107385770(lVar2,lVar3,uVar8,uStack_68,uVar6);
  FUN_1073859ec(&uStack_68);
  *param_1 = 0;
  param_1[0x10] = 0;
  *(long *)(param_1 + 0x20) = lStack_88;
  *(long *)(param_1 + 0x18) = lStack_90;
  *(undefined8 *)(param_1 + 0x28) = uStack_80;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  func_0x00010735a1b8(&lStack_90);
  return;
}



/* Entry: 107385770; end: 1073859d3;  */

/* WARNING: Possible PIC construction at 0x000107385db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107385db4) */
/* WARNING: Removing unreachable block (ram,0x000107385dd0) */
/* WARNING: Removing unreachable block (ram,0x000107385ddc) */
/* WARNING: Removing unreachable block (ram,0x000107385de4) */
/* WARNING: Removing unreachable block (ram,0x000107385e10) */
/* WARNING: Removing unreachable block (ram,0x000107385e14) */
/* WARNING: Removing unreachable block (ram,0x000107385e00) */
/* WARNING: Removing unreachable block (ram,0x000107385e0c) */
/* WARNING: Removing unreachable block (ram,0x000107385e1c) */
/* WARNING: Removing unreachable block (ram,0x000107385e20) */
/* WARNING: Removing unreachable block (ram,0x000107385dc4) */
/* WARNING: Removing unreachable block (ram,0x000107385dc8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107385770(undefined8 *****param_1,undefined8 *****param_2,undefined8 ****param_3,
                  undefined8 *****param_4,long param_5)

{
  undefined8 *****pppppuVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *****extraout_x10;
  undefined8 *****extraout_x10_00;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *****unaff_x19;
  undefined8 *****unaff_x20;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_b0 [8];
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  
  if (param_3 < (undefined8 ****)0x2) {
    return;
  }
  if (param_3 == (undefined8 ****)0x2) {
    if (*(float *)(param_2 + -1) <= *(float *)(param_1 + 3)) {
      return;
    }
    pppppuVar4 = param_2 + -4;
    puVar2 = (undefined1 *)register0x00000008;
FUN_107386010:
    *(undefined8 ******)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 ******)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    *(undefined8 *****)(puVar2 + -0x40) = *param_1;
    ppppuVar9 = param_1[1];
    *(undefined8 *****)(puVar2 + -0x30) = param_1[2];
    *(undefined8 *****)(puVar2 + -0x38) = ppppuVar9;
    param_1[1] = (undefined8 ****)0x0;
    param_1[2] = (undefined8 ****)0x0;
    *(undefined4 *)(puVar2 + -0x28) = *(undefined4 *)(param_1 + 3);
    func_0x000107386064();
    func_0x000107386064(pppppuVar4,puVar2 + -0x40);
    func_0x000107358a58(puVar2 + -0x38);
    return;
  }
  if ((long)param_3 < 1) {
    if (param_1 == param_2) {
      return;
    }
    lVar10 = 0;
    pppppuVar4 = param_1;
    do {
      if (pppppuVar4 + 4 == param_2) {
        return;
      }
      fVar13 = *(float *)(pppppuVar4 + 7);
      if (*(float *)(pppppuVar4 + 3) < fVar13) {
        pppppuStack_70 = (undefined8 *****)pppppuVar4[4];
        pppppuStack_68 = (undefined8 *****)pppppuVar4[5];
        pppppuVar4[5] = (undefined8 ****)0x0;
        pppppuVar4[6] = (undefined8 ****)0x0;
        lVar12 = lVar10;
        do {
          lVar11 = lVar12;
          func_0x00010738a954((long)param_1 + lVar11 + 0x20);
          pppppuVar3 = param_1;
          if (lVar11 == 0) goto LAB_1073858e8;
          lVar12 = lVar11 + -0x20;
        } while (*(float *)((long)param_1 + lVar11 + -8) < fVar13);
        pppppuVar3 = (undefined8 *****)((long)param_1 + lVar11);
LAB_1073858e8:
        func_0x000107386064(pppppuVar3,&pppppuStack_70);
        func_0x00010738a990();
      }
      lVar10 = lVar10 + 0x20;
      pppppuVar4 = pppppuVar4 + 4;
    } while( true );
  }
  ppppuVar9 = (undefined8 ****)((ulong)param_3 >> 1);
  unaff_x20 = param_1 + (long)ppppuVar9 * 4;
  if (param_5 < (long)param_3) {
    func_0x00010738a918();
    func_0x00010738a9e0();
    pppppuVar4 = param_2;
    func_0x00010738a9e0(unaff_x20,param_2,(long)param_3 - (long)ppppuVar9);
    func_0x00010738a918();
    puVar2 = auStack_b0;
    param_1 = unaff_x20;
    lVar10 = (long)param_3 - (long)ppppuVar9;
    unaff_x19 = pppppuVar4;
    pppppuVar3 = param_4;
    while( true ) {
      if (lVar10 == 0) {
        return;
      }
      pppppuStack_80 = pppppuVar3;
      if (lVar10 <= param_5 || (long)ppppuVar9 <= param_5) break;
      lVar12 = 0;
      lVar11 = -(long)ppppuVar9;
      while( true ) {
        if (lVar11 == 0) {
          return;
        }
        pppppuVar3 = (undefined8 *****)((long)unaff_x20 + lVar12);
        uVar15 = (ulong)(uint)*(float *)(pppppuVar3 + 3);
        if (*(float *)(pppppuVar3 + 3) < *(float *)(unaff_x19 + 3)) break;
        lVar12 = lVar12 + 0x20;
        lVar11 = lVar11 + 1;
      }
      pppppuStack_88 = param_2;
      if (-lVar11 < lVar10) {
        lVar8 = lVar10 / 2;
        pppppuVar6 = unaff_x19 + lVar8 * 4;
        lVar7 = (long)unaff_x19 + (-lVar12 - (long)unaff_x20) >> 5;
        uVar14 = (ulong)*(uint *)(pppppuVar6 + 3);
        pppppuVar5 = pppppuVar3;
        while (lVar7 != 0) {
          func_0x00010738abf8();
          lVar10 = extraout_x13;
          lVar7 = extraout_x9;
          if ((float)uVar14 <= (float)uVar15) {
            pppppuVar5 = extraout_x10;
            lVar7 = extraout_x8;
          }
        }
        ppppuVar9 = (undefined8 ****)((long)pppppuVar5 + (-lVar12 - (long)unaff_x20) >> 5);
      }
      else {
        if (lVar11 == -1) {
          param_1 = (undefined8 *****)((long)unaff_x20 + lVar12);
          pppppuVar4 = unaff_x19;
          func_0x00010738a774(param_1,unaff_x19);
          goto FUN_107386010;
        }
        ppppuVar9 = (undefined8 ****)(-lVar11 / 2);
        pppppuVar5 = (undefined8 *****)((long)unaff_x20 + lVar12 + (long)ppppuVar9 * 0x20);
        lVar8 = (long)param_2 - (long)unaff_x19 >> 5;
        uVar14 = (ulong)*(uint *)(pppppuVar5 + 3);
        pppppuVar1 = unaff_x19;
        while (pppppuVar6 = pppppuVar1, lVar8 != 0) {
          func_0x00010738abf8();
          lVar10 = extraout_x13_00;
          pppppuVar1 = extraout_x10_00;
          lVar8 = extraout_x8_00;
          if ((float)uVar15 <= (float)uVar14) {
            pppppuVar1 = pppppuVar6;
            lVar8 = extraout_x9_00;
          }
        }
        lVar8 = (long)pppppuVar6 - (long)unaff_x19 >> 5;
      }
      param_2 = pppppuVar6;
      if ((pppppuVar5 != unaff_x19) && (param_2 = pppppuVar5, unaff_x19 != pppppuVar6)) {
        ppppuStack_a8 = ppppuVar9;
        lStack_a0 = lVar8;
        lStack_98 = lVar10;
        lStack_90 = param_5;
        func_0x00010738ab38();
        unaff_x30 = 0x107385db4;
        puVar2 = auStack_b0;
        unaff_x29 = &stack0xfffffffffffffff0;
        goto FUN_107386010;
      }
      if ((long)ppppuVar9 + lVar8 < (lVar10 - ((long)ppppuVar9 + lVar8)) - lVar11) {
        ppppuVar9 = (undefined8 ****)-((long)ppppuVar9 + lVar11);
        FUN_107385c58(pppppuVar3,pppppuVar5,param_2);
        param_1 = pppppuVar3;
        pppppuVar4 = pppppuVar5;
        lVar10 = lVar10 - lVar8;
        unaff_x20 = param_2;
        unaff_x19 = pppppuVar6;
        param_2 = pppppuStack_88;
        pppppuVar3 = pppppuStack_80;
      }
      else {
        param_1 = param_2;
        FUN_107385c58(param_2,pppppuVar6,pppppuStack_88,-((long)ppppuVar9 + lVar11),lVar10 - lVar8,
                      pppppuStack_80);
        unaff_x20 = (undefined8 *****)((long)unaff_x20 + lVar12);
        pppppuVar4 = pppppuVar6;
        lVar10 = lVar8;
        unaff_x19 = pppppuVar5;
        pppppuVar3 = pppppuStack_80;
      }
    }
    pppppuStack_70 = &pppppuStack_68;
    pppppuStack_68 = (undefined8 *****)0x0;
    pppppuVar4 = pppppuVar3;
    pppppuStack_78 = pppppuVar3;
    if (lVar10 < (long)ppppuVar9) {
      while (unaff_x19 != param_2) {
        FUN_10736cebc(pppppuVar3);
        func_0x00010738abe4();
      }
      while (param_2 = param_2 + -4, pppppuVar4 != pppppuVar3) {
        if (unaff_x19 == unaff_x20) goto LAB_107385fdc;
        pppppuVar5 = pppppuVar4;
        pppppuVar6 = unaff_x19 + -4;
        pppppuVar1 = unaff_x19 + -4;
        if (*(float *)(pppppuVar4 + -1) <= *(float *)(unaff_x19 + -1)) {
          pppppuVar5 = pppppuVar4 + -4;
          pppppuVar6 = unaff_x19;
          pppppuVar1 = pppppuVar4 + -4;
        }
        unaff_x19 = pppppuVar6;
        func_0x000107386064(param_2,pppppuVar1);
        pppppuVar4 = pppppuVar5;
      }
    }
    else {
      while (unaff_x20 != unaff_x19) {
        func_0x00010738ab38();
        FUN_10736cebc();
        func_0x00010738abe4();
        pppppuVar4 = pppppuVar4 + 4;
      }
      while (pppppuVar4 != pppppuVar3) {
        if (unaff_x19 == param_2) goto LAB_107385f84;
        if (*(float *)(unaff_x19 + 3) <= *(float *)(pppppuVar3 + 3)) {
          func_0x000107386064(unaff_x20,pppppuVar3);
          pppppuVar3 = pppppuVar3 + 4;
        }
        else {
          func_0x000107386064(unaff_x20,unaff_x19);
          unaff_x19 = unaff_x19 + 4;
        }
        unaff_x20 = unaff_x20 + 4;
      }
    }
    goto LAB_107385fe4;
  }
  pppppuStack_78 = (undefined8 *****)0x0;
  pppppuStack_68 = &pppppuStack_78;
  pppppuStack_70 = param_4;
  func_0x00010738a918();
  FUN_107385a10();
  pppppuVar3 = param_4 + (long)ppppuVar9 * 4;
  pppppuStack_78 = (undefined8 *****)ppppuVar9;
  FUN_107385a10(unaff_x20,param_2,(long)param_3 - (long)ppppuVar9,pppppuVar3);
  pppppuVar5 = param_4 + (long)param_3 * 4;
  pppppuVar4 = pppppuVar3;
  pppppuStack_78 = (undefined8 *****)param_3;
  while (param_4 != pppppuVar3) {
    if (pppppuVar4 == pppppuVar5) goto LAB_1073859b0;
    if (*(float *)(pppppuVar4 + 3) <= *(float *)(param_4 + 3)) {
      func_0x00010738a954(param_1);
      param_4 = param_4 + 4;
    }
    else {
      func_0x00010738aa84();
      pppppuVar4 = pppppuVar4 + 4;
    }
    param_1 = param_1 + 4;
  }
  for (; pppppuVar4 != pppppuVar5; pppppuVar4 = pppppuVar4 + 4) {
    func_0x00010738aa84(param_1);
    param_1 = param_1 + 4;
  }
LAB_1073859b8:
  FUN_1073860b0(&pppppuStack_70);
  return;
LAB_107385fdc:
  for (; pppppuVar4 != pppppuVar3; pppppuVar4 = pppppuVar4 + -4) {
    func_0x00010738aa84(param_2);
    param_2 = param_2 + -4;
  }
  goto LAB_107385fe4;
LAB_1073859b0:
  for (; param_4 != pppppuVar3; param_4 = param_4 + 4) {
    func_0x00010738a954(param_1);
    param_1 = param_1 + 4;
  }
  goto LAB_1073859b8;
LAB_107385f84:
  for (; pppppuVar4 != pppppuVar3; pppppuVar3 = pppppuVar3 + 4) {
    func_0x000107386064(unaff_x20,pppppuVar3);
    unaff_x20 = unaff_x20 + 4;
  }
LAB_107385fe4:
  FUN_1073860b0(&pppppuStack_78);
  return;
}



/* Entry: 1073859d4; end: 1073859eb;  */

void FUN_1073859d4(long *param_1,long param_2)

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



/* Entry: 1073859ec; end: 107385a0f;  */

undefined8 FUN_1073859ec(undefined8 param_1)

{
  FUN_1073859d4(param_1,0);
  return param_1;
}



/* Entry: 107385a10; end: 107385c57;  */

void FUN_107385a10(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 2) {
    puStack_60 = &uStack_58;
    uStack_58 = 0;
    puVar4 = param_1;
    puVar3 = param_2 + -4;
    if (*(float *)(param_2 + -1) <= *(float *)(param_1 + 3)) {
      puVar4 = param_2 + -4;
      puVar3 = param_1;
    }
    FUN_10736cebc(param_4,puVar3);
    func_0x00010738a3ac();
    FUN_10736cebc(param_4 + 4,puVar4);
  }
  else {
    if (param_3 == 1) {
      *param_4 = *param_1;
      uVar7 = param_1[1];
      param_4[2] = param_1[2];
      param_4[1] = uVar7;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 3);
      return;
    }
    puStack_68 = param_4;
    if ((long)param_3 < 9) {
      if (param_1 == param_2) {
        return;
      }
      puStack_60 = &uStack_58;
      uStack_58 = 0;
      func_0x00010738a9a8();
      lVar5 = 0;
      func_0x00010738a3ac();
      puVar4 = param_4;
      while (puVar3 = param_1 + 4, puVar3 != param_2) {
        puVar1 = puVar4 + 4;
        if (*(float *)(param_1 + 7) <= *(float *)(puVar4 + 3)) {
          FUN_10736cebc(puVar1,puVar3);
          func_0x00010738a3ac();
        }
        else {
          FUN_10736cebc(puVar1);
          func_0x00010738a3ac();
          lVar6 = lVar5;
          while (puVar4 = param_4, lVar6 != 0) {
            lVar2 = (long)param_4 + lVar6;
            if (*(float *)(param_1 + 7) <= *(float *)(lVar2 + -8)) {
              puVar4 = (undefined8 *)((long)param_4 + lVar6);
              break;
            }
            lVar6 = lVar6 + -0x20;
            func_0x000107386064(lVar2,lVar6 + (long)param_4);
          }
          func_0x000107386064(puVar4,puVar3);
        }
        lVar5 = lVar5 + 0x20;
        puVar4 = puVar1;
        param_1 = puVar3;
      }
    }
    else {
      puVar3 = param_1 + (param_3 >> 1) * 4;
      func_0x00010738ab38();
      FUN_107385770();
      lVar5 = param_3 - (param_3 >> 1);
      FUN_107385770(puVar3,param_2,lVar5,param_4 + (param_3 >> 1) * 4,lVar5);
      puStack_60 = &uStack_58;
      uStack_58 = 0;
      puVar4 = puVar3;
      while (param_1 != puVar3) {
        if (puVar4 == param_2) goto LAB_107385c2c;
        if (*(float *)(puVar4 + 3) <= *(float *)(param_1 + 3)) {
          FUN_10736cebc(param_4,param_1);
          param_1 = param_1 + 4;
        }
        else {
          FUN_10736cebc(param_4,puVar4);
          puVar4 = puVar4 + 4;
        }
        func_0x00010738a3ac();
        param_4 = param_4 + 4;
      }
      for (; puVar4 != param_2; puVar4 = puVar4 + 4) {
        FUN_10736cebc(param_4,puVar4);
        param_4 = param_4 + 4;
        func_0x00010738a3ac();
      }
    }
  }
LAB_107385c34:
  puStack_68 = (undefined8 *)0x0;
  FUN_1073860b0(&puStack_68);
  return;
LAB_107385c2c:
  for (; param_1 != puVar3; param_1 = param_1 + 4) {
    func_0x00010738a9a8();
    func_0x00010738a3ac();
  }
  goto LAB_107385c34;
}



/* Entry: 107385c58; end: 10738600f;  */

void FUN_107385c58(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x13;
  long extraout_x13_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar10 = param_6;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    lStack_80 = lVar10;
    if (param_5 <= param_7 || param_4 <= param_7) break;
    lVar10 = 0;
    lVar9 = -param_4;
    while( true ) {
      if (lVar9 == 0) {
        return;
      }
      lVar1 = param_1 + lVar10;
      fVar13 = *(float *)(lVar1 + 0x18);
      if (fVar13 < *(float *)(param_2 + 0x18)) break;
      lVar10 = lVar10 + 0x20;
      lVar9 = lVar9 + 1;
    }
    lStack_88 = param_3;
    if (-lVar9 < param_5) {
      lVar5 = param_5 / 2;
      lVar11 = param_2 + lVar5 * 0x20;
      lVar4 = (param_2 - param_1) - lVar10 >> 5;
      uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
      lVar8 = lVar1;
      while (lVar4 != 0) {
        func_0x00010738abf8();
        param_5 = extraout_x13;
        lVar4 = extraout_x9;
        if ((float)uVar12 <= fVar13) {
          lVar8 = extraout_x10;
          lVar4 = extraout_x8;
        }
      }
      param_4 = (lVar8 - param_1) - lVar10 >> 5;
    }
    else {
      if (lVar9 == -1) {
        puVar3 = (undefined8 *)(param_1 + lVar10);
        lVar10 = param_2;
        func_0x00010738a774(puVar3,param_2);
        uStack_f0 = *puVar3;
        uStack_e0 = puVar3[2];
        uStack_e8 = puVar3[1];
        puVar3[1] = 0;
        puVar3[2] = 0;
        uStack_d8 = *(undefined4 *)(puVar3 + 3);
        lStack_d0 = param_1;
        lStack_c8 = param_2;
        func_0x000107386064();
        func_0x000107386064(lVar10,&uStack_f0);
        func_0x000107358a58(&uStack_e8);
        return;
      }
      param_4 = -lVar9 / 2;
      lVar8 = param_1 + param_4 * 0x20 + lVar10;
      lVar5 = param_3 - param_2 >> 5;
      uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
      lVar4 = param_2;
      while (lVar11 = lVar4, lVar5 != 0) {
        func_0x00010738abf8();
        param_5 = extraout_x13_00;
        lVar4 = extraout_x10_00;
        lVar5 = extraout_x8_00;
        if (fVar13 <= (float)uVar12) {
          lVar4 = lVar11;
          lVar5 = extraout_x9_00;
        }
      }
      lVar5 = lVar11 - param_2 >> 5;
    }
    param_3 = lVar11;
    if ((lVar8 != param_2) && (lVar4 = param_2, param_3 = lVar8, param_2 != lVar11)) {
      while( true ) {
        lStack_90 = param_7;
        lStack_98 = param_5;
        lStack_a0 = lVar5;
        lStack_a8 = param_4;
        lVar7 = lVar4;
        func_0x00010738ab38();
        FUN_107386010();
        param_3 = param_3 + 0x20;
        param_2 = param_2 + 0x20;
        param_4 = lStack_a8;
        lVar5 = lStack_a0;
        param_7 = lStack_90;
        param_5 = lStack_98;
        if (param_2 == lVar11) break;
        lVar4 = param_2;
        if (param_3 != lVar7) {
          lVar4 = lVar7;
        }
      }
      lVar2 = lVar7;
      lVar4 = param_3;
      if (param_3 != lVar7) {
        do {
          while( true ) {
            lVar6 = lVar2;
            FUN_107386010(lVar4,lVar7);
            lVar4 = lVar4 + 0x20;
            lVar7 = lVar7 + 0x20;
            if (lVar7 == lVar11) break;
            lVar2 = lVar7;
            if (lVar4 != lVar6) {
              lVar2 = lVar6;
            }
          }
          param_4 = lStack_a8;
          lVar5 = lStack_a0;
          param_7 = lStack_90;
          param_5 = lStack_98;
          lVar2 = lVar6;
          lVar7 = lVar6;
        } while (lVar4 != lVar6);
      }
    }
    if (param_4 + lVar5 < (param_5 - (param_4 + lVar5)) - lVar9) {
      param_4 = -(param_4 + lVar9);
      FUN_107385c58(lVar1,lVar8,param_3);
      param_5 = param_5 - lVar5;
      param_1 = param_3;
      param_2 = lVar11;
      param_3 = lStack_88;
      lVar10 = lStack_80;
    }
    else {
      FUN_107385c58(param_3,lVar11,lStack_88,-(param_4 + lVar9),param_5 - lVar5,lStack_80);
      param_1 = param_1 + lVar10;
      param_5 = lVar5;
      param_2 = lVar8;
      lVar10 = lStack_80;
    }
  }
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  lVar9 = lVar10;
  lStack_78 = lVar10;
  if (param_5 < param_4) {
    while (param_2 != param_3) {
      FUN_10736cebc(lVar10);
      func_0x00010738abe4();
    }
    while (param_3 = param_3 + -0x20, lVar9 != lVar10) {
      if (param_2 == param_1) goto LAB_107385fdc;
      lVar1 = lVar9;
      lVar5 = param_2 + -0x20;
      lVar8 = param_2 + -0x20;
      if (*(float *)(lVar9 + -8) <= *(float *)(param_2 + -8)) {
        lVar1 = lVar9 + -0x20;
        lVar5 = param_2;
        lVar8 = lVar9 + -0x20;
      }
      param_2 = lVar5;
      func_0x000107386064(param_3,lVar8);
      lVar9 = lVar1;
    }
  }
  else {
    while (param_1 != param_2) {
      func_0x00010738ab38();
      FUN_10736cebc();
      func_0x00010738abe4();
      lVar9 = lVar9 + 0x20;
    }
    while (lVar9 != lVar10) {
      if (param_2 == param_3) goto LAB_107385f84;
      if (*(float *)(param_2 + 0x18) <= *(float *)(lVar10 + 0x18)) {
        func_0x000107386064(param_1,lVar10);
        lVar10 = lVar10 + 0x20;
      }
      else {
        func_0x000107386064(param_1,param_2);
        param_2 = param_2 + 0x20;
      }
      param_1 = param_1 + 0x20;
    }
  }
LAB_107385fe4:
  FUN_1073860b0(&lStack_78);
  return;
LAB_107385fdc:
  for (; lVar9 != lVar10; lVar9 = lVar9 + -0x20) {
    func_0x00010738aa84(param_3);
    param_3 = param_3 + -0x20;
  }
  goto LAB_107385fe4;
LAB_107385f84:
  for (; lVar9 != lVar10; lVar10 = lVar10 + 0x20) {
    func_0x000107386064(param_1,lVar10);
    param_1 = param_1 + 0x20;
  }
  goto LAB_107385fe4;
}



/* Entry: 107386010; end: 1073860af;  */

void FUN_107386010(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uStack_38 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = *(undefined4 *)(param_1 + 3);
  func_0x000107386064();
  func_0x000107386064(param_2,&uStack_40);
  func_0x000107358a58(&uStack_38);
  return;
}



/* Entry: 1073860b0; end: 107386103;  */

long * FUN_1073860b0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    lVar1 = lVar1 + 8;
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      func_0x000107358a58(lVar1);
      lVar1 = lVar1 + 0x20;
    }
  }
  return param_1;
}



/* Entry: 107386104; end: 107386143;  */

long FUN_107386104(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010726928c();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  func_0x000107269c1c();
  *(undefined4 *)(param_1 + 0x30) = 4;
  return param_1;
}



/* Entry: 107386144; end: 10738616f;  */

void FUN_107386144(long param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  return;
}



/* Entry: 107386170; end: 107386203;  */

void FUN_107386170(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  undefined8 uVar6;
  undefined1 uStack_119;
  long alStack_118 [15];
  int iStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long alStack_70 [7];
  undefined8 uStack_38;
  
  plVar5 = alStack_70;
  plVar3 = alStack_70;
  plVar4 = alStack_70;
  func_0x00010738a2c0();
  uStack_38 = extraout_x8;
  func_0x0001072684ec();
  uVar6 = *param_2;
  func_0x000107262e9c(alStack_70,param_3);
  FUN_10738628c(param_1,uVar6,alStack_70,param_4);
  func_0x000104c2f714();
  func_0x00010738a280(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714();
  func_0x00010738a3dc();
  pcStack_78 = FUN_107386204;
  uStack_90 = param_1;
  puStack_88 = (undefined1 *)plVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010738a2c0();
  plVar4 = (long *)*plVar4;
  uStack_98 = extraout_x8_01;
  func_0x000107753050(alStack_118);
  uVar2 = iStack_a0 == 1;
  if ((bool)uVar2) {
    plVar4 = alStack_118;
    func_0x00010727f7dc();
    plVar5 = (long *)&uStack_119;
    func_0x00010729d318(extraout_x8_00);
  }
  else {
    *extraout_x8_00 = 0;
    extraout_x8_00[0x40] = 0;
  }
  func_0x00010738aa2c();
  func_0x00010738a280(uStack_98);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738aa2c();
  func_0x00010738a3dc();
  plVar3 = plVar4;
  func_0x000104c32bd8();
  if (((ulong)plVar5 & 1) == 0) {
    func_0x000104c3302c(plVar4[1] + (long)plVar3 * 0x78 + 0x38,param_4);
  }
  else {
    func_0x00010738ab38();
    FUN_10738630c();
  }
  lVar1 = plVar4[1];
  *extraout_x8_02 = *plVar4 + (long)plVar3;
  extraout_x8_02[1] = lVar1 + (long)plVar3 * 0x78;
  *(char *)(extraout_x8_02 + 2) = (char)plVar5;
  return;
}



/* Entry: 107386204; end: 10738628b;  */

void FUN_107386204(undefined1 *param_1,long *param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined1 uStack_a9;
  long alStack_a8 [15];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x00010738a2c0();
  param_2 = (long *)*param_2;
  uStack_28 = extraout_x8;
  func_0x000107753050(alStack_a8);
  uVar2 = iStack_30 == 1;
  if ((bool)uVar2) {
    param_2 = alStack_a8;
    func_0x00010727f7dc();
    param_3 = &uStack_a9;
    func_0x00010729d318(param_1);
  }
  else {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  func_0x00010738aa2c();
  func_0x00010738a280(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738aa2c();
  func_0x00010738a3dc();
  plVar3 = param_2;
  func_0x000104c32bd8();
  if (((ulong)param_3 & 1) == 0) {
    func_0x000104c3302c(param_2[1] + (long)plVar3 * 0x78 + 0x38,param_4);
  }
  else {
    func_0x00010738ab38();
    FUN_10738630c();
  }
  lVar1 = param_2[1];
  *extraout_x8_00 = *param_2 + (long)plVar3;
  extraout_x8_00[1] = lVar1 + (long)plVar3 * 0x78;
  *(char *)(extraout_x8_00 + 2) = (char)param_3;
  return;
}



/* Entry: 10738628c; end: 10738630b;  */

void FUN_10738628c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_2;
  func_0x000104c32bd8();
  if ((param_3 & 1) == 0) {
    func_0x000104c3302c(param_2[1] + (long)plVar2 * 0x78 + 0x38,param_4);
  }
  else {
    func_0x00010738ab38();
    FUN_10738630c();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x78;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10738630c; end: 107386323;  */

long FUN_10738630c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x78;
  lVar2 = lVar1;
  func_0x000104c318bc(lVar1,param_3);
  func_0x000104c32a18(lVar2 + 0x38,param_4);
  return lVar1;
}



/* Entry: 107386324; end: 107386377;  */

long FUN_107386324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  func_0x000104c32a18(lVar1 + 0x38,param_3);
  return param_1;
}



/* Entry: 107386378; end: 10738637b;  */

void FUN_107386378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7c70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10738637c; end: 10738638f;  */

void FUN_10738637c(void)

{
  func_0x00010738639c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107386390; end: 1073863af;  */

long FUN_107386390(long param_1)

{
  FUN_10738374c(param_1 + 0x180);
  FUN_10732442c(param_1 + 0x110);
  func_0x000107266a30(param_1 + 0xd0);
  FUN_10732442c(param_1 + 0x60);
  func_0x00010727fc1c(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 1073863b0; end: 1073863eb;  */

long FUN_1073863b0(long param_1,undefined8 param_2,undefined2 param_3)

{
  func_0x00010738a8dc();
  func_0x00010738ab10();
  func_0x00010738a754();
  *(undefined2 *)(param_1 + 0x28) = param_3;
  return param_1;
}



/* Entry: 1073863ec; end: 107386403;  */

void FUN_1073863ec(void)

{
  FUN_107386404();
  return;
}



/* Entry: 107386404; end: 10738641f;  */

void FUN_107386404(long param_1)

{
  func_0x000107310bc8();
  *(undefined4 *)(param_1 + 0x30) = 2;
  return;
}



/* Entry: 107386420; end: 107386427;  */

void FUN_107386420(void)

{
  return;
}



/* Entry: 107386428; end: 10738646b;  */

long FUN_107386428(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010738a8dc();
  func_0x00010738ab10();
  func_0x00010738a754();
  func_0x0001072649c8(param_1 + 0x28,param_3);
  return param_1;
}



/* Entry: 10738646c; end: 107386493;  */

long FUN_10738646c(long param_1)

{
  FUN_107386494(param_1 + 8);
  return param_1;
}



/* Entry: 107386494; end: 1073864af;  */

void FUN_107386494(long param_1)

{
  FUN_107324574();
  *(undefined4 *)(param_1 + 0x68) = 2;
  return;
}



/* Entry: 1073864b0; end: 1073864bb;  */

void FUN_1073864b0(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1073864bc; end: 10738652f;  */

void FUN_1073864bc(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_107324e4c(param_2,&uStack_38,param_3);
  bVar1 = (param_2 >> 0x20 & 1) != 0;
  if (bVar1) {
    *(int *)param_1 = (int)param_2;
  }
  else {
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
  }
  *(uint *)(param_1 + 3) = (uint)!bVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 107386530; end: 107386573;  */

void FUN_107386530(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x00010738a694((&PTR_FUN_1109a7cd0)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107386574; end: 107386583;  */

void FUN_107386574(void)

{
  return;
}



/* Entry: 107386584; end: 1073865a7;  */

void FUN_107386584(void)

{
  func_0x00010738a62c();
  func_0x00010738a464(&PTR_DAT_1109a7cf0);
  return;
}



/* Entry: 1073865a8; end: 1073865c3;  */

void FUN_1073865a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a7cf0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073865c4; end: 107386c43;  */

void FUN_1073865c4(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x8;
  long **pplVar11;
  long **extraout_x8_00;
  long extraout_x8_01;
  long **extraout_x9;
  ulong uVar12;
  ulong extraout_x9_00;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  long **pplVar15;
  long **extraout_x11;
  ulong uVar16;
  long **pplVar17;
  long lVar18;
  long *plVar19;
  long **pplVar20;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [8];
  undefined4 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [16];
  byte bStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined8 auStack_2c8 [8];
  undefined1 auStack_288 [120];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [128];
  ulong auStack_178 [8];
  undefined1 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined1 uStack_110;
  char cStack_f0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_80;
  undefined8 uStack_68;
  
  func_0x00010738a2c0();
  pplVar17 = &plStack_300;
  uStack_2f8 = param_3[1];
  plStack_300 = (long *)*param_3;
  lVar18 = *(long *)(param_2 + 8);
  uStack_68 = extraout_x8;
  func_0x000100060b18(&uStack_318,&plStack_300);
  uStack_320 = 6;
  plStack_128 = *(long **)((ulong)pplVar17 | 8);
  plStack_130 = plStack_300;
  func_0x0001003a91d4(&UNK_10f40b0a7);
  func_0x0001003a9204(auStack_340);
  auStack_2c8[0]._0_4_ = 7;
  plVar19 = param_4;
  func_0x000107766098();
  if ((int)plVar19 == 0) {
    auStack_178[0] = 0;
    auStack_178[1] = 0;
    auStack_178[2] = 0;
    (**(code **)(*param_4 + 0x70))(&plStack_130,param_4 + 1);
    if (cStack_f0 != '\x01') {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      auStack_178[1] = 0;
      auStack_178[2] = 0;
      auStack_178[0] = 0;
    }
    else {
      func_0x000107268350(&uStack_c0,&plStack_130);
    }
    uStack_80 = (uint)(cStack_f0 != '\x01');
    func_0x000107267ed0(&plStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    uVar5 = (int)uStack_80 < 0;
    uVar6 = uStack_80 == 0;
    puVar1 = &uStack_c0;
    if (!(bool)uVar6) {
      puVar1 = auStack_2c8;
    }
    func_0x000107268350(&plStack_130,puVar1);
    FUN_107386e1c(&uStack_c0);
LAB_1073867a0:
    FUN_107386e6c(auStack_288,&plStack_130);
    func_0x000104c3323c(&plStack_130);
  }
  else {
    func_0x0001072c9ff4(auStack_2d8,auStack_328);
    func_0x00010738a8ac(&uStack_c0,auStack_2d8);
    func_0x0001072c9884(auStack_2d8);
    uVar16 = auStack_178[0] >> 0x28;
    uVar2 = (uint)auStack_178[0];
    auStack_178[0]._0_5_ = (uint5)(uVar2 & 0xffffff00);
    auStack_178[0] = CONCAT35((int3)uVar16,(uint5)auStack_178[0]);
    plStack_130 = (long *)((ulong)plStack_130 & 0xffffffffffffff00);
    uStack_110 = 0;
    func_0x00010738a89c(auStack_2f0,&uStack_c0,param_4);
    func_0x0001072c94e0(&plStack_130);
    uVar5 = (int)(bStack_2e0 - 1) < 0;
    uVar6 = bStack_2e0 == 1;
    if (!(bool)uVar6) {
      func_0x00010738aa44();
      func_0x00010738aab0();
      func_0x000107268350(&plStack_130,auStack_2c8);
      goto LAB_1073867a0;
    }
    auStack_178[0] = auStack_178[0] & 0xffffffffffffff00;
    uStack_138 = 0;
    FUN_107386da4(&plStack_130,auStack_2f0,auStack_178);
    FUN_107386de8(auStack_288,&plStack_130);
    FUN_107383518(&plStack_130);
    func_0x000107267ed0(auStack_178);
    func_0x00010738aa44();
    func_0x00010738aab0();
  }
  uStack_208 = uStack_310;
  uStack_210 = uStack_318;
  uStack_200 = uStack_308;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  FUN_107386c78(auStack_1f8,auStack_288);
  pplVar8 = (long **)(lVar18 + 0x90);
  func_0x000100102e7c(pplVar8,&uStack_210);
  pplVar20 = *(long ***)(lVar18 + 0x80);
  if (pplVar20 != (long **)0x0) {
    uVar16 = (long)pplVar20 - 1;
    if (((ulong)pplVar20 & uVar16) == 0) {
      pplVar17 = (long **)(uVar16 & (ulong)pplVar8);
      uVar6 = true;
      uVar5 = false;
    }
    else {
      uVar5 = (long)pplVar8 - (long)pplVar20 < 0;
      uVar6 = pplVar8 == pplVar20;
      pplVar17 = pplVar8;
      if (pplVar20 <= pplVar8) {
        uVar12 = 0;
        if (pplVar20 != (long **)0x0) {
          uVar12 = (ulong)pplVar8 / (ulong)pplVar20;
        }
        pplVar17 = (long **)((long)pplVar8 - uVar12 * (long)pplVar20);
      }
    }
    plVar19 = *(long **)(*(long *)(lVar18 + 0x78) + (long)pplVar17 * 8);
    if (plVar19 != (long *)0x0) {
      do {
        while( true ) {
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_10738687c;
          pplVar11 = (long **)plVar19[1];
          uVar5 = (long)pplVar11 - (long)pplVar8 < 0;
          uVar6 = pplVar11 == pplVar8;
          if (!(bool)uVar6) break;
          uVar12 = (ulong)(plVar19 + 2);
          func_0x0001000e107c(uVar12,&uStack_210);
          if ((uVar12 & 1) != 0) goto LAB_107386b08;
        }
        if (((ulong)pplVar20 & uVar16) == 0) {
          pplVar11 = (long **)((ulong)pplVar11 & uVar16);
        }
        else if (pplVar20 <= pplVar11) {
          uVar12 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar12 = (ulong)pplVar11 / (ulong)pplVar20;
          }
          pplVar11 = (long **)((long)pplVar11 - uVar12 * (long)pplVar20);
        }
        uVar5 = (long)pplVar11 - (long)pplVar17 < 0;
        uVar6 = pplVar11 == pplVar17;
      } while ((bool)uVar6);
    }
  }
LAB_10738687c:
  plVar9 = (long *)0xa0;
  __Znwm();
  plVar19 = (long *)(lVar18 + 0x88);
  uStack_120 = 0;
  *plVar9 = 0;
  plVar9[1] = (long)pplVar8;
  plStack_130 = plVar9;
  plStack_128 = plVar19;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar9 + 2,&uStack_210);
  FUN_107386c78(plVar9 + 5,auStack_1f8);
  uStack_120 = CONCAT71(uStack_120._1_7_,1);
  if ((pplVar20 == (long **)0x0) ||
     (func_0x00010738a860((float)(*(long *)(lVar18 + 0x90) + 1),*(undefined4 *)(lVar18 + 0x98),
                          (float)pplVar20), (bool)uVar5)) {
    bVar4 = (long **)0x2 < pplVar20;
    bVar7 = pplVar20 == (long **)0x3;
    func_0x00010738a348((long)pplVar20 << 1);
    pplVar17 = extraout_x8_00;
    if (!bVar4 || bVar7) {
      pplVar17 = extraout_x9;
    }
    if ((long)pplVar17 - 1U == 0) {
      pplVar17 = (long **)0x2;
    }
    else if (((ulong)pplVar17 & (long)pplVar17 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pplVar20 = *(long ***)(lVar18 + 0x80);
    if (pplVar20 < pplVar17) {
LAB_10738692c:
      if ((ulong)pplVar17 >> 0x3d != 0) goto LAB_107386b70;
      lVar10 = (long)pplVar17 << 3;
      __Znwm(lVar10);
      FUN_107386d4c(lVar18 + 0x78,lVar10);
      *(long ***)(lVar18 + 0x80) = pplVar17;
      lVar10 = *(long *)(lVar18 + 0x78);
      for (pplVar20 = (long **)0x0; pplVar17 != pplVar20; pplVar20 = (long **)((long)pplVar20 + 1))
      {
        *(undefined8 *)(lVar10 + (long)pplVar20 * 8) = 0;
      }
      plVar13 = (long *)*plVar19;
      pplVar20 = pplVar17;
      if (plVar13 != (long *)0x0) {
        pplVar11 = (long **)plVar13[1];
        uVar12 = (long)pplVar17 - 1;
        uVar16 = 0;
        if (pplVar17 != (long **)0x0) {
          uVar16 = (ulong)pplVar11 / (ulong)pplVar17;
        }
        pplVar15 = pplVar11;
        if (pplVar17 <= pplVar11) {
          pplVar15 = (long **)((long)pplVar11 - uVar16 * (long)pplVar17);
        }
        if (((ulong)pplVar17 & uVar12) == 0) {
          pplVar15 = (long **)((ulong)pplVar11 & uVar12);
        }
        *(long **)(lVar10 + (long)pplVar15 * 8) = plVar19;
        while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
          pplVar11 = (long **)plVar13[1];
          if (((ulong)pplVar17 & uVar12) == 0) {
            pplVar11 = (long **)((ulong)pplVar11 & uVar12);
          }
          else if (pplVar17 <= pplVar11) {
            uVar16 = 0;
            if (pplVar17 != (long **)0x0) {
              uVar16 = (ulong)pplVar11 / (ulong)pplVar17;
            }
            pplVar11 = (long **)((long)pplVar11 - uVar16 * (long)pplVar17);
          }
          if (pplVar11 != pplVar15) {
            if (*(long *)(lVar10 + (long)pplVar11 * 8) == 0) {
              *(long **)(lVar10 + (long)pplVar11 * 8) = plVar14;
              pplVar15 = pplVar11;
            }
            else {
              *plVar14 = *plVar13;
              func_0x00010738a44c();
              lVar10 = extraout_x8_01;
              uVar12 = extraout_x9_00;
              plVar13 = extraout_x10;
              pplVar15 = extraout_x11;
            }
          }
        }
      }
    }
    else if (pplVar17 < pplVar20) {
      pplVar11 = (long **)(long)((float)*(ulong *)(lVar18 + 0x90) / *(float *)(lVar18 + 0x98));
      if ((pplVar20 < (long **)0x3) || (((ulong)pplVar20 & (long)pplVar20 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010738a3bc();
      }
      if (pplVar17 <= pplVar11) {
        pplVar17 = pplVar11;
      }
      if (pplVar17 < pplVar20) {
        if (pplVar17 != (long **)0x0) goto LAB_10738692c;
        FUN_107386d4c(lVar18 + 0x78,0);
        *(undefined8 *)(lVar18 + 0x80) = 0;
        pplVar20 = (long **)0x0;
      }
      else {
        pplVar20 = *(long ***)(lVar18 + 0x80);
      }
    }
    if (((ulong)pplVar20 & (long)pplVar20 - 1U) == 0) {
      uVar6 = 1;
      pplVar17 = (long **)((long)pplVar20 - 1U & (ulong)pplVar8);
    }
    else {
      uVar6 = pplVar8 == pplVar20;
      pplVar17 = pplVar8;
      if (pplVar20 <= pplVar8) {
        uVar16 = 0;
        if (pplVar20 != (long **)0x0) {
          uVar16 = (ulong)pplVar8 / (ulong)pplVar20;
        }
        pplVar17 = (long **)((long)pplVar8 - uVar16 * (long)pplVar20);
      }
    }
  }
  lVar10 = *(long *)(lVar18 + 0x78);
  plVar13 = *(long **)(lVar10 + (long)pplVar17 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar9 = *plVar19;
    *plVar19 = (long)plVar9;
    *(long **)(lVar10 + (long)pplVar17 * 8) = plVar19;
    if (*plVar9 != 0) {
      pplVar17 = *(long ***)(*plVar9 + 8);
      if (((ulong)pplVar20 & (long)pplVar20 - 1U) == 0) {
        pplVar17 = (long **)((ulong)pplVar17 & (long)pplVar20 - 1U);
        uVar6 = true;
      }
      else {
        uVar6 = pplVar17 == pplVar20;
        if (pplVar20 <= pplVar17) {
          uVar16 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar16 = (ulong)pplVar17 / (ulong)pplVar20;
          }
          pplVar17 = (long **)((long)pplVar17 - uVar16 * (long)pplVar20);
        }
      }
      *(long **)(lVar10 + (long)pplVar17 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar13;
    *plVar13 = (long)plVar9;
  }
  plStack_130 = (long *)0x0;
  *(long *)(lVar18 + 0x90) = *(long *)(lVar18 + 0x90) + 1;
  FUN_107386d64(&plStack_130);
LAB_107386b08:
  func_0x000107383498(&uStack_210);
  FUN_1073834c0(auStack_288);
  func_0x000104c3323c(auStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_340);
  func_0x0001072c9884(auStack_328);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_318);
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010738a280(uStack_68);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_107386b70:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107386b78);
  (*pcVar3)();
}



/* Entry: 107386c44; end: 107386c6b;  */

void FUN_107386c44(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a7d78);
  func_0x00010738a36c();
  return;
}



/* Entry: 107386c6c; end: 107386c77;  */

undefined ** FUN_107386c6c(void)

{
  return &PTR_DAT_1109a7d78;
}



/* Entry: 107386c78; end: 107386ca7;  */

undefined1 * FUN_107386c78(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  FUN_107386ca8();
  return param_1;
}



/* Entry: 107386ca8; end: 107386d03;  */

void FUN_107386ca8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001001e7a38();
  FUN_1073834c0();
  uVar1 = *(uint *)(unaff_x20 + 0x70);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a7d50)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x70) = uVar1;
  }
  return;
}



/* Entry: 107386d04; end: 107386d1f;  */

void FUN_107386d04(void)

{
  return;
}



/* Entry: 107386d20; end: 107386d4b;  */

void FUN_107386d20(long param_1)

{
  long unaff_x19;
  
  func_0x00010738a440();
  func_0x00010727da70();
  func_0x000107284cf0(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 107386d4c; end: 107386d63;  */

void FUN_107386d4c(long *param_1,long param_2)

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



/* Entry: 107386d64; end: 107386da3;  */

long * FUN_107386d64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107383498(lVar1 + 0x10);
    }
    func_0x00010738aac0();
  }
  return param_1;
}



/* Entry: 107386da4; end: 107386de7;  */

long FUN_107386da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010738a8dc();
  func_0x00010738ab10();
  func_0x00010738a754();
  func_0x000107284cf0(param_1 + 0x28,param_3);
  return param_1;
}



/* Entry: 107386de8; end: 107386dff;  */

void FUN_107386de8(void)

{
  FUN_107386e00();
  return;
}



/* Entry: 107386e00; end: 107386e1b;  */

void FUN_107386e00(long param_1)

{
  FUN_107386d20();
  *(undefined4 *)(param_1 + 0x70) = 2;
  return;
}



/* Entry: 107386e1c; end: 107386e5f;  */

void FUN_107386e1c(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x00010738a694((&PTR_FUN_1109a7d68)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 107386e60; end: 107386e6b;  */

void FUN_107386e60(undefined8 param_1,undefined8 param_2)

{
  func_0x000104c3463c(param_2);
  func_0x000104c33084();
  return;
}



/* Entry: 107386e6c; end: 107386e83;  */

void FUN_107386e6c(void)

{
  FUN_107386e84();
  return;
}



/* Entry: 107386e84; end: 107386e9f;  */

void FUN_107386e84(long param_1)

{
  func_0x000104c32a18();
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 107386ea0; end: 107386ea3;  */

void FUN_107386ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107386ea4; end: 107386eb7;  */

void FUN_107386ea4(void)

{
  func_0x000107386ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107386eb8; end: 107386ed3;  */

void FUN_107386eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107386ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


