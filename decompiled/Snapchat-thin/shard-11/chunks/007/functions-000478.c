/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10887a5fc; end: 10887a6a3;  */

long FUN_10887a5fc(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887a670;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887a670:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  FUN_10887a730();
  func_0x000107c343c0();
  FUN_10887a73c();
  return param_1;
}



/* Entry: 10887a6a4; end: 10887a6fb;  */

void FUN_10887a6a4(void)

{
  func_0x000107c343c4();
  FUN_10887a730();
  func_0x000107c343c0();
  FUN_10887a73c();
  return;
}



/* Entry: 10887a6fc; end: 10887a6ff;  */

undefined8 * FUN_10887a6fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887a700; end: 10887a713;  */

void FUN_10887a700(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887a714; end: 10887a72f;  */

void FUN_10887a714(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10887a730; end: 10887a73b;  */

void FUN_10887a730(undefined8 param_1)

{
  int iVar1;
  
  func_0x0001005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887a73c; end: 10887a75f;  */

void FUN_10887a73c(void)

{
  func_0x000107c34170();
  FUN_10887a760();
  return;
}



/* Entry: 10887a760; end: 10887a78f;  */

void FUN_10887a760(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10867c588();
  return;
}



/* Entry: 10887a790; end: 10887a7e3;  */

void FUN_10887a790(void)

{
  func_0x000107c343c4();
  FUN_10887a7e4();
  func_0x000107c342c4();
  return;
}



/* Entry: 10887a7e4; end: 10887a807;  */

void FUN_10887a7e4(int param_1)

{
  func_0x000107c34200();
  func_0x000107c287ac();
  func_0x000107c342bc();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887a808; end: 10887a85f;  */

void FUN_10887a808(void)

{
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x000107c2a148();
  return;
}



/* Entry: 10887a860; end: 10887a863;  */

undefined8 * FUN_10887a860(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887a864; end: 10887a877;  */

void FUN_10887a864(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887a878; end: 10887a8ab;  */

long FUN_10887a878(long param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    FUN_10887a94c();
  }
  else {
    FUN_10887a9a0();
  }
  return param_1;
}



/* Entry: 10887a8ac; end: 10887a94b;  */

void FUN_10887a8ac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  func_0x000107c313f8();
  func_0x00010887c3a4(param_1);
  func_0x00010887bde4();
  *(ulong *)(param_1 + 0x18) = CONCAT44(uVar2,uVar1);
  func_0x000107c34464(param_1 + 0x20);
  FUN_1086adb3c();
  func_0x00010887c434(param_1 + 0x60);
  func_0x000107c28988();
  func_0x000107c345c4(param_1 + 0xd8);
  func_0x000107c2879c();
  func_0x000107c345c0();
  func_0x000107c313d8();
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  return;
}



/* Entry: 10887a94c; end: 10887a99f;  */

void FUN_10887a94c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8();
  func_0x000107c3194c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  FUN_1086a8024(unaff_x20 + 0x20,unaff_x19 + 0x20);
  func_0x000107c2895c(unaff_x20 + 0x60,unaff_x19 + 0x60);
  func_0x000107c3194c(unaff_x20 + 0xd8,unaff_x19 + 0xd8);
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  return;
}



/* Entry: 10887a9a0; end: 10887a9bb;  */

void FUN_10887a9a0(long param_1)

{
  FUN_10887a9bc();
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



/* Entry: 10887a9bc; end: 10887aa3b;  */

void FUN_10887a9bc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c343b8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  FUN_1086a7fe8(param_1 + 4,param_2 + 4);
  func_0x000107c28974(unaff_x20 + 0x60,unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  return;
}



/* Entry: 10887aa3c; end: 10887aa83;  */

void FUN_10887aa3c(void)

{
  undefined1 auStack_128 [248];
  
  func_0x000107c343b8();
  func_0x00010887cb4c();
  FUN_10887a9bc();
  func_0x00010887c048();
  FUN_10887a94c();
  func_0x000107c344fc();
  FUN_10887a94c();
  func_0x00010878858c(auStack_128);
  return;
}



/* Entry: 10887aa84; end: 10887aae7;  */

long FUN_10887aa84(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010887aac0();
    lVar2 = uVar1 + 0xf8;
  }
  else {
    lVar2 = param_1;
    FUN_10887aae8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xf8;
}



/* Entry: 10887aae8; end: 10887ac07;  */

long * FUN_10887aae8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar1 = (lVar7 - lVar6) / 0xf8 + 1;
  uVar3 = uVar1 == 0x108421084210842;
  if (0x108421084210842 < uVar1) {
    FUN_10887ac08();
LAB_10887ac04:
    func_0x000104bd35f4();
    func_0x00010887be1c();
    func_0x00010887d174();
    while (func_0x00010887d07c(), !(bool)uVar3) {
      unaff_x19[2] = extraout_x8_00 + -0xf8;
      func_0x00010878858c();
    }
    if (*unaff_x19 != 0) {
      __ZdlPv();
    }
    return unaff_x19;
  }
  func_0x00010887c3f0();
  func_0x00010887d0ec();
  uVar1 = extraout_x9;
  if (0x84210842108420 < extraout_x10) {
    uVar1 = extraout_x8;
  }
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = uVar1 == extraout_x8;
    if (extraout_x8 <= uVar1 && !(bool)uVar3) goto LAB_10887ac04;
    lVar4 = uVar1 * 0xf8;
    __Znwm(lVar4);
  }
  lVar4 = lVar4 + (lVar7 - lVar6);
  func_0x00010887c4f0();
  FUN_10887a9bc();
  lVar5 = *unaff_x19;
  lVar2 = unaff_x19[1];
  lVar7 = lVar4 + ((lVar2 - lVar5) / -0xf8) * 0xf8;
  for (lVar6 = lVar5; lVar6 != lVar2; lVar6 = lVar6 + 0xf8) {
    FUN_10887a9bc(lVar7,lVar6);
    lVar7 = lVar7 + 0xf8;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0xf8) {
    func_0x00010878858c(lVar5);
  }
  func_0x00010887c8cc(0xf8);
  FUN_10887ac14();
  return (long *)(lVar4 + 0xf8);
}



/* Entry: 10887ac08; end: 10887ac13;  */

void FUN_10887ac08(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010887be1c();
  func_0x00010887d174();
  while (func_0x00010887d07c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0xf8;
    func_0x00010878858c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10887ac14; end: 10887ac53;  */

void FUN_10887ac14(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010887d174();
  while (func_0x00010887d07c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0xf8;
    func_0x00010878858c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10887ac54; end: 10887aca3;  */

long FUN_10887ac54(long param_1)

{
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 10887aca4; end: 10887acbf;  */

void FUN_10887aca4(long param_1)

{
  FUN_10887acc0();
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



/* Entry: 10887acc0; end: 10887ad43;  */

void FUN_10887acc0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c344b4();
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1086a9cbc(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107c287dc(unaff_x19 + 0x60,unaff_x20 + 0x60);
  func_0x000107c27994(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  *(undefined4 *)(unaff_x19 + 0xf0) = *(undefined4 *)(unaff_x20 + 0xf0);
  return;
}



/* Entry: 10887ad44; end: 10887ad6f;  */

void FUN_10887ad44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010887b678();
  func_0x000108872198();
  func_0x00010887bad4();
  func_0x000108872194();
  func_0x00010887bae4();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 10887ad70; end: 10887adfb;  */

/* WARNING: Possible PIC construction at 0x00010887adb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010887add8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010887adb4) */
/* WARNING: Removing unreachable block (ram,0x00010887addc) */

void FUN_10887ad70(undefined8 param_1,undefined8 param_2,long param_3)

{
  int unaff_w25;
  
  func_0x000107c34578();
  func_0x00010887ba3c();
  func_0x00010887bfb4();
  func_0x00010887c5b0();
  func_0x00010887c6c4();
  func_0x0001073a80e0();
  func_0x00010887c6a4();
  func_0x0001073a80e0();
  func_0x00010887c6b4();
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (unaff_w25 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x000107c31418();
  return;
}



/* Entry: 10887adfc; end: 10887ae23;  */

void FUN_10887adfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(char *)(param_3 + 0x18) == '\x01') {
    func_0x00010885dc04();
    FUN_10885daf0();
    func_0x00010885dbc0();
    func_0x00010885dbb8();
    return;
  }
  func_0x00010887c4cc();
  return;
}



/* Entry: 10887ae24; end: 10887aecb;  */

long FUN_10887ae24(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887ae98;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887ae98:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x00010887af58();
  return param_1;
}



/* Entry: 10887aecc; end: 10887af23;  */

void FUN_10887aecc(void)

{
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x00010887af58();
  return;
}



/* Entry: 10887af24; end: 10887af27;  */

undefined8 * FUN_10887af24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887af28; end: 10887af3b;  */

void FUN_10887af28(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887af3c; end: 10887af7b;  */

void FUN_10887af3c(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10887af7c; end: 10887afab;  */

void FUN_10887af7c(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_10866a30c();
  return;
}



/* Entry: 10887afac; end: 10887afc7;  */

void FUN_10887afac(long param_1)

{
  FUN_10866a1b0();
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}



/* Entry: 10887afc8; end: 10887b01f;  */

void FUN_10887afc8(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x00010887af58();
  return;
}



/* Entry: 10887b020; end: 10887b077;  */

void FUN_10887b020(void)

{
  func_0x000107c343c4();
  FUN_10887b078();
  func_0x000107c343c0();
  func_0x00010887af58();
  return;
}



/* Entry: 10887b078; end: 10887b083;  */

void FUN_10887b078(undefined8 param_1)

{
  int iVar1;
  
  func_0x0001005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887b084; end: 10887b0db;  */

void FUN_10887b084(void)

{
  func_0x000107c343c4();
  FUN_108871fe0();
  func_0x000107c343c0();
  func_0x0001088727b0();
  return;
}



/* Entry: 10887b0dc; end: 10887b133;  */

void FUN_10887b0dc(void)

{
  func_0x000107c343c4();
  FUN_10887a428();
  func_0x000107c343c0();
  func_0x000107c29f38();
  return;
}



/* Entry: 10887b134; end: 10887b1db;  */

long FUN_10887b134(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887b1a8;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887b1a8:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  FUN_10887b268();
  func_0x000107c343c0();
  FUN_10887b29c();
  return param_1;
}



/* Entry: 10887b1dc; end: 10887b233;  */

void FUN_10887b1dc(void)

{
  func_0x000107c343c4();
  FUN_10887b268();
  func_0x000107c343c0();
  FUN_10887b29c();
  return;
}



/* Entry: 10887b234; end: 10887b237;  */

undefined8 * FUN_10887b234(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887b238; end: 10887b24b;  */

void FUN_10887b238(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887b24c; end: 10887b267;  */

void FUN_10887b24c(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10887b268; end: 10887b29b;  */

void FUN_10887b268(int param_1)

{
  func_0x00010887b678();
  func_0x000107c2a0d0();
  func_0x00010887bad4();
  func_0x000107c287ac();
  func_0x00010887bae4();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887b29c; end: 10887b333;  */

void FUN_10887b29c(void)

{
  func_0x000107c34170();
  func_0x00010887b2c0();
  return;
}



/* Entry: 10887b334; end: 10887b363;  */

undefined8 * FUN_10887b334(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 10887b364; end: 10887b37b;  */

void FUN_10887b364(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  func_0x000107c34260(param_1,param_2 + 8);
  FUN_10887b3ec();
  func_0x000107c3425c();
  return;
}



/* Entry: 10887b37c; end: 10887b3cb;  */

long FUN_10887b37c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 10887b3cc; end: 10887b3eb;  */

void FUN_10887b3cc(void)

{
  func_0x000107c34260();
  FUN_10887b3ec();
  func_0x000107c3425c();
  return;
}



/* Entry: 10887b3ec; end: 10887d1ab;  */

void FUN_10887b3ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 == *(char *)(param_2 + 1)) {
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      return;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10887d1ac; end: 10887d30f;  */

/* WARNING: Possible PIC construction at 0x00010887d25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010887d2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010887d260) */
/* WARNING: Removing unreachable block (ram,0x00010887d264) */
/* WARNING: Removing unreachable block (ram,0x00010887d2a0) */
/* WARNING: Removing unreachable block (ram,0x00010887d2d8) */
/* WARNING: Removing unreachable block (ram,0x00010887d2c0) */
/* WARNING: Removing unreachable block (ram,0x00010887d26c) */
/* WARNING: Removing unreachable block (ram,0x00010887d2e8) */
/* WARNING: Removing unreachable block (ram,0x00010887d308) */
/* WARNING: Removing unreachable block (ram,0x00010887d348) */
/* WARNING: Removing unreachable block (ram,0x00010887d324) */
/* WARNING: Removing unreachable block (ram,0x00010887d364) */

undefined8 ** FUN_10887d1ac(void)

{
  long lVar1;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined *apuStack_c0 [17];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  apuStack_c0[0] = &UNK_10f4e9108;
  apuStack_c0[1] = &UNK_10f4e9299;
  apuStack_c0[2] = &UNK_10f4e9424;
  apuStack_c0[3] = &UNK_10f4e94bf;
  apuStack_c0[4] = &UNK_10f4e95aa;
  puStack_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  puStack_d0 = &uStack_e8;
  uStack_c8 = 0;
  FUN_10887d310(&uStack_e8,5);
  for (lVar1 = 0; lVar1 != 0x28; lVar1 = lVar1 + 8) {
    *puStack_e0 = *(undefined8 *)((long)apuStack_c0 + lVar1);
    puStack_e0 = puStack_e0 + 1;
  }
  return &puStack_d0;
}



/* Entry: 10887d310; end: 10887d37b;  */

long * FUN_10887d310(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    func_0x000107c28484();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return plVar1;
  }
  func_0x000104c43284();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x000107426c54(param_1);
  }
  return param_1;
}



/* Entry: 10887d37c; end: 10887db77;  */

undefined *** FUN_10887d37c(undefined8 param_1)

{
  int iVar1;
  undefined ****ppppuVar2;
  undefined ***pppuVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  int iVar7;
  undefined ***apppuStack_b50 [21];
  int iStack_aa8;
  int iStack_aa4;
  undefined8 uStack_a88;
  undefined1 auStack_a80 [24];
  undefined1 auStack_a68 [32];
  int iStack_a48;
  undefined1 auStack_a40 [32];
  int iStack_a20;
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined1 auStack_9d0 [24];
  ulong uStack_9b8;
  undefined8 uStack_9b0;
  undefined1 uStack_9a8;
  undefined1 auStack_9a0 [24];
  char cStack_988;
  undefined1 auStack_980 [32];
  undefined1 auStack_960 [32];
  undefined1 uStack_940;
  undefined1 auStack_938 [32];
  undefined1 auStack_918 [200];
  long ***ppplStack_850;
  undefined1 uStack_848;
  byte bStack_610;
  long ***ppplStack_608;
  long ***ppplStack_600;
  undefined1 auStack_5f8 [7];
  char cStack_5f1;
  char cStack_3c0;
  undefined1 auStack_3b8 [24];
  long ***ppplStack_3a0;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [32];
  int iStack_358;
  undefined1 auStack_350 [32];
  int iStack_330;
  undefined1 auStack_328 [16];
  long **pplStack_318;
  undefined1 auStack_310 [24];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [24];
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 auStack_2b0 [32];
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [32];
  undefined1 uStack_250;
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [200];
  byte bStack_160;
  long **pplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long lStack_e8;
  undefined **appuStack_e0 [3];
  undefined1 auStack_c8 [112];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c31430(&ppplStack_608,&UNK_10f4e035d,0x15,0x15);
  if (-1 < cStack_5f1) {
    ppplStack_608 = (long ***)&ppplStack_608;
  }
  pppplVar5 = (long ****)ppplStack_608;
  _strlen(ppplStack_608);
  func_0x000107c313f4(appuStack_e0,param_1,ppplStack_608,pppplVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_608);
  appuStack_e0[0] = &PTR_FUN_110a7f818;
  ppplStack_608 = (long ***)&UNK_10f4e3c60;
  ppplStack_600 = (long ***)0x23;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  pplStack_158 = (long **)0x32aaaba7;
  uStack_120 = 0;
  uStack_118 = param_1;
  func_0x000107c27958(&pppuStack_110,&ppplStack_608);
  lStack_e8 = 0;
  uStack_848 = 1;
  ppplStack_850 = &pplStack_158;
  ppplStack_f8 = (long ***)&ppplStack_f8;
  ppplStack_f0 = (long ***)&ppplStack_f8;
  __ZNSt3__15mutex4lockEv(&pplStack_158);
  pppplVar5 = &ppplStack_f0;
  do {
    pppplVar4 = (long ****)*pppplVar5;
    if (pppplVar4 == &ppplStack_f8) {
      func_0x000107c280c4(&ppplStack_850);
      if (-1 < (char)bStack_f9) {
        uStack_108 = (ulong)bStack_f9;
        pppuStack_110 = &pppuStack_110;
      }
      func_0x000107c313f4(&ppplStack_3a0,uStack_118,pppuStack_110,uStack_108);
      ppplStack_3a0 = (long ***)&PTR_FUN_110a7f858;
      pplStack_318 = (long **)0x0;
      func_0x000107c28204(&ppplStack_850);
      pppplVar5 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar5 + 2,&ppplStack_3a0);
      pppplVar5[1] = (long ***)&ppplStack_f8;
      pppplVar5[2] = (long ***)&PTR_FUN_110a7f858;
      pppplVar5[0x13] = (long ***)pplStack_318;
      *pppplVar5 = ppplStack_f8;
      ppplStack_f8[1] = (long **)pppplVar5;
      lStack_e8 = lStack_e8 + 1;
      ppplStack_f8 = (long ***)pppplVar5;
      func_0x000107c31400(&ppplStack_3a0);
      goto LAB_10887d558;
    }
    pppplVar5 = pppplVar4 + 1;
  } while (pppplVar4[0x13] != (long ***)0x0);
  pppplVar5 = (long ****)*pppplVar5;
  if (&ppplStack_f8 != pppplVar5) {
    ppplVar6 = *pppplVar4;
    ppplVar6[1] = (long **)pppplVar5;
    *pppplVar5 = ppplVar6;
    ppplStack_f8[1] = (long **)pppplVar4;
    *pppplVar4 = ppplStack_f8;
    pppplVar4[1] = (long ***)&ppplStack_f8;
    ppplStack_f8 = (long ***)pppplVar4;
  }
LAB_10887d558:
  pppplVar5 = (long ****)(ppplStack_f8 + 2);
  ppplStack_f8[0x13] = (long **)&pplStack_158;
  func_0x000107c2798c(&ppplStack_850);
  auStack_5f8[0] = 0;
  cStack_3c0 = '\0';
  ppplStack_608 = (long ***)pppplVar5;
  ppplStack_600 = (long ***)pppplVar5;
  FUN_10887dd64(&ppplStack_600);
  ppplStack_3a0 = (long ***)0x0;
  uStack_398 = 0;
  bStack_160 = 0;
  if (cStack_3c0 == '\0') {
    ppplVar6 = (long ***)0x0;
  }
  else {
    FUN_10887e108(&uStack_398,auStack_5f8);
    FUN_10887e0e4(auStack_5f8);
    ppplVar6 = ppplStack_3a0;
  }
  ppplStack_3a0 = ppplStack_600;
  ppplStack_600 = ppplVar6;
  _bzero(&ppplStack_850,0x248);
  while ((((bStack_160 & 1) != 0 || ((bStack_610 & 1) != 0)) && (ppplStack_3a0 != ppplStack_850))) {
    if ((bStack_160 & 1) == 0) {
      ppplVar6 = (long ***)ppplStack_3a0[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_3b8,ppplStack_3a0 + 0xb);
      func_0x000107c27f54(apppuStack_b50,&UNK_10f2e0451,auStack_3b8);
      func_0x00010bcc7444(ppplVar6,0x65,apppuStack_b50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_b50);
      FUN_10887e234();
    }
    uStack_a88 = CONCAT71(uStack_397,uStack_398);
    func_0x000107c27994(auStack_a80,auStack_390);
    func_0x000107c28aa0(auStack_a68,auStack_378);
    iStack_a48 = iStack_358;
    func_0x000104be0ccc(auStack_a40,auStack_350);
    iStack_a20 = iStack_330;
    func_0x000107c27994(auStack_a18,auStack_328);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a00,auStack_310);
    uStack_9e0 = uStack_2f0;
    uStack_9e8 = uStack_2f8;
    uStack_9d8 = uStack_2e8;
    FUN_10867be90(auStack_9d0,auStack_2e0);
    uStack_9b0 = uStack_2c0;
    uStack_9b8 = uStack_2c8;
    uStack_9a8 = uStack_2b8;
    func_0x000104be0ccc(auStack_9a0,auStack_2b0);
    func_0x000104be0ccc(auStack_980,auStack_290);
    func_0x000104be0ccc(auStack_960,auStack_270);
    uStack_940 = uStack_250;
    func_0x000107c279d4(auStack_938,auStack_248);
    FUN_108656428(auStack_918,auStack_228);
    FUN_1086a2e08(apppuStack_b50);
    func_0x000107c29edc(auStack_3b8,auStack_a80);
    FUN_10879d9ac(apppuStack_b50);
    func_0x000107c27b9c();
    FUN_10887e234();
    iVar7 = (int)uStack_9d8;
    iVar1 = iVar7;
    func_0x000108848188();
    iStack_aa8 = iVar1;
    iStack_aa4 = 1;
    if (uStack_9d8._4_4_ - 1U < 3) {
      iStack_aa4 = uStack_9d8._4_4_ + 1;
    }
    if (cStack_988 == '\x01') {
      FUN_10879c7c4(apppuStack_b50);
      func_0x000107c3034c();
      iVar7 = (int)uStack_9d8;
    }
    if (iVar7 == 5) {
      ppppuVar2 = apppuStack_b50;
      FUN_1086eb3c8();
      *(undefined1 *)((long)ppppuVar2 + 0x20) = uStack_940;
    }
    FUN_1086ac3c8(auStack_918,apppuStack_b50);
    func_0x000107c2a500(apppuStack_b50);
    apppuStack_b50[0] = appuStack_e0;
    __ZNSt3__15mutex4lockEv(auStack_c8);
    func_0x000107c3140c(appuStack_e0,1,uStack_a88);
    func_0x000107c31410(appuStack_e0,2,auStack_a80);
    FUN_108873a40(appuStack_e0,3,auStack_a68);
    func_0x000107c3140c(appuStack_e0,4,(long)iStack_a48);
    func_0x0001073a80e0(appuStack_e0,5,auStack_a40);
    func_0x000107c3140c(appuStack_e0,6,(long)iStack_a20);
    func_0x000107c287ac(appuStack_e0,7,auStack_a18);
    func_0x000107c2820c(appuStack_e0,8,auStack_a00);
    func_0x000107c3140c(appuStack_e0,9,uStack_9e8);
    func_0x000107c3140c(appuStack_e0,10,uStack_9e0);
    func_0x000107c3140c(appuStack_e0,0xb,(long)(int)uStack_9d8);
    func_0x000107c3140c(appuStack_e0,0xc,(long)uStack_9d8._4_4_);
    FUN_108873a68(appuStack_e0,0xd,auStack_9d0);
    func_0x000107c3140c(appuStack_e0,0xe,uStack_9b8 & 0xff);
    func_0x000107c28230(appuStack_e0,0xf,&uStack_9b0);
    func_0x0001073a80e0(appuStack_e0,0x10,auStack_9a0);
    func_0x0001073a80e0(appuStack_e0,0x11,auStack_980);
    func_0x0001073a80e0(appuStack_e0,0x12,auStack_960);
    func_0x000107c3140c(appuStack_e0,0x13,uStack_940);
    func_0x000107c2a10c(appuStack_e0,0x14,auStack_938);
    FUN_108876440(appuStack_e0,0x15,auStack_918);
    func_0x000107c3141c(appuStack_e0);
    __ZNSt3__15mutex6unlockEv(auStack_c8);
    func_0x000107c27e6c(apppuStack_b50);
    FUN_10887db78(&uStack_a88);
    FUN_10887dd64(&ppplStack_3a0);
  }
  func_0x00010887e23c();
  FUN_10887dce8(&uStack_398);
  FUN_10887dbf0(&ppplStack_608);
  FUN_10887dc64(&pplStack_158);
  pppuVar3 = appuStack_e0;
  func_0x000107c31400();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000107c2798c(&ppplStack_850);
    FUN_10887dc64(&pplStack_158);
    func_0x000107c31400(appuStack_e0);
    __Unwind_Resume(pppuVar3);
    func_0x000107c2a500(pppuVar3 + 0x2e);
    func_0x000107c279dc(pppuVar3 + 0x2a);
    func_0x000107c279c4(pppuVar3 + 0x25);
    func_0x000107c279c4(pppuVar3 + 0x21);
    func_0x000107c279c4(pppuVar3 + 0x1d);
    func_0x000104bee630(pppuVar3 + 0x17);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar3 + 0x11);
    func_0x000107c27914(pppuVar3 + 0xe);
    func_0x000107c279c4(pppuVar3 + 9);
    func_0x000107c28754(pppuVar3 + 4);
    func_0x000107c27914(pppuVar3 + 1);
    return pppuVar3;
  }
  return (undefined ***)0x1;
}



/* Entry: 10887db78; end: 10887dbef;  */

long FUN_10887db78(long param_1)

{
  func_0x000107c2a500(param_1 + 0x170);
  func_0x000107c279dc(param_1 + 0x150);
  func_0x000107c279c4(param_1 + 0x128);
  func_0x000107c279c4(param_1 + 0x108);
  func_0x000107c279c4(param_1 + 0xe8);
  func_0x000104bee630(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  func_0x000107c27914(param_1 + 0x70);
  func_0x000107c279c4(param_1 + 0x48);
  func_0x000107c28754(param_1 + 0x20);
  func_0x000107c27914(param_1 + 8);
  return param_1;
}



/* Entry: 10887dbf0; end: 10887dc63;  */

undefined8 * FUN_10887dbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [576];
  
  _bzero(auStack_278,0x248);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x49) != '\0') {
    FUN_10887e0e4(param_1 + 2);
  }
  FUN_10887dce8(auStack_270);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10887dce8(param_1 + 2);
  return param_1;
}



/* Entry: 10887dc64; end: 10887dce3;  */

void FUN_10887dc64(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10887dce4; end: 10887dce7;  */

undefined8 * FUN_10887dce4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887dce8; end: 10887dd1b;  */

void FUN_10887dce8(long param_1)

{
  if (*(char *)(param_1 + 0x238) == '\x01') {
    FUN_10887db78();
  }
  return;
}



/* Entry: 10887dd1c; end: 10887dd1f;  */

undefined8 * FUN_10887dd1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887dd20; end: 10887dd33;  */

void FUN_10887dd20(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887dd34; end: 10887dd63;  */

void FUN_10887dd34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10887dd64; end: 10887e0e3;  */

void FUN_10887dd64(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [32];
  undefined4 uStack_258;
  undefined1 auStack_250 [32];
  undefined4 uStack_230;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  long lStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [24];
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  long lStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [200];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    func_0x000107c313f8();
    lVar1 = lVar2;
    func_0x000107c313d8();
    lStack_298 = lVar1;
    func_0x000107c313e0(auStack_290,lVar2,1);
    func_0x000107c28990(auStack_278,lVar2,2);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,3);
    uStack_258 = (undefined4)lVar1;
    func_0x0001073a755c(auStack_250,lVar2,4);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,5);
    uStack_230 = (undefined4)lVar1;
    func_0x000107c2879c(auStack_228,lVar2,6);
    func_0x000107c313dc(auStack_210,lVar2,7);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,8);
    lVar3 = lVar2;
    lStack_1f8 = lVar1;
    func_0x000107c313d8(lVar2,9);
    lVar1 = lVar2;
    lStack_1f0 = lVar3;
    func_0x000107c313d8(lVar2,10);
    uStack_1e8 = (undefined4)lVar1;
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,0xb);
    uStack_1e4 = (undefined4)lVar1;
    FUN_10865fa68(auStack_1e0,lVar2,0xc);
    lVar1 = lVar2;
    func_0x000107c287bc(lVar2,0xd);
    uStack_1c8 = (undefined1)lVar1;
    uStack_1b8 = 0xe;
    lVar1 = lVar2;
    func_0x000107c28228();
    lStack_1c0 = lVar1;
    func_0x0001073a755c(auStack_1b0,lVar2,0xf);
    func_0x0001073a755c(auStack_190,lVar2,0x10);
    func_0x0001073a755c(auStack_170,lVar2,0x11);
    lVar1 = lVar2;
    func_0x000107c287bc(lVar2,0x12);
    uStack_150 = (undefined1)lVar1;
    func_0x000107c2893c(auStack_148,lVar2,0x13);
    FUN_108795ad0(auStack_128,lVar2,0x14);
    if ((char)param_1[0x48] == '\x01') {
      param_1[1] = lStack_298;
      func_0x000107c3194c(param_1 + 2,auStack_290);
      func_0x000107c28960(param_1 + 5,auStack_278);
      *(undefined4 *)(param_1 + 9) = uStack_258;
      func_0x0001052b2b60(param_1 + 10,auStack_250);
      *(undefined4 *)(param_1 + 0xe) = uStack_230;
      func_0x000107c3194c(param_1 + 0xf,auStack_228);
      func_0x000107c27b9c(param_1 + 0x12,auStack_210);
      param_1[0x16] = lStack_1f0;
      param_1[0x15] = lStack_1f8;
      param_1[0x17] = CONCAT44(uStack_1e4,uStack_1e8);
      FUN_10865f9c0(param_1 + 0x18,auStack_1e0);
      param_1[0x1c] = lStack_1c0;
      param_1[0x1b] = CONCAT71(uStack_1c7,uStack_1c8);
      *(undefined1 *)(param_1 + 0x1d) = uStack_1b8;
      func_0x0001052b2b60(param_1 + 0x1e,auStack_1b0);
      func_0x0001052b2b60(param_1 + 0x22,auStack_190);
      func_0x0001052b2b60(param_1 + 0x26,auStack_170);
      *(undefined1 *)(param_1 + 0x2a) = uStack_150;
      func_0x000107c28908(param_1 + 0x2b,auStack_148);
      FUN_1086ac3c8(param_1 + 0x2f,auStack_128);
    }
    else {
      FUN_10887e108(param_1 + 1,&lStack_298);
    }
    FUN_10887db78(&lStack_298);
    return;
  }
  plVar4 = param_1 + 1;
  if ((char)param_1[0x48] == '\x01') {
    FUN_10887db78();
    *(undefined1 *)(plVar4 + 0x47) = 0;
  }
  return;
}



/* Entry: 10887e0e4; end: 10887e107;  */

void FUN_10887e0e4(long param_1)

{
  if (*(char *)(param_1 + 0x238) == '\x01') {
    FUN_10887db78();
    *(undefined1 *)(param_1 + 0x238) = 0;
  }
  return;
}



/* Entry: 10887e108; end: 10887e233;  */

void FUN_10887e108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x000107c28978(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  func_0x000107c27b7c(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_2[0x10];
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x11];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  uVar2 = param_2[0x14];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  uVar2 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1b] = uVar2;
  param_1[0x1a] = uVar1;
  func_0x000107c27b7c(param_1 + 0x1d,param_2 + 0x1d);
  func_0x000107c27b7c(param_1 + 0x21,param_2 + 0x21);
  func_0x000107c27b7c(param_1 + 0x25,param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  func_0x000107c27afc(param_1 + 0x2a,param_2 + 0x2a);
  FUN_1086ac390(param_1 + 0x2e,param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x47) = 1;
  return;
}



/* Entry: 10887e234; end: 10887e247;  */

void FUN_10887e234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000798);
  return;
}



/* Entry: 10887e248; end: 10887e2e3;  */

undefined8 FUN_10887e248(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *****pppppuVar7;
  long ****pppplVar8;
  ulong uVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  ulong uVar12;
  ulong uVar13;
  undefined ****ppppuVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  undefined1 auStack_7b8 [8];
  ulong uStack_7b0;
  char cStack_7a8;
  long ***ppplStack_7a0;
  undefined1 auStack_798 [176];
  undefined1 auStack_6e8 [176];
  long ***ppplStack_638;
  ulong auStack_630 [20];
  undefined1 uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong auStack_578 [20];
  ulong *puStack_4d8;
  undefined1 uStack_4d0;
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined *puStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long ***ppplStack_438;
  long ***ppplStack_430;
  undefined1 auStack_428 [8];
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined1 auStack_410 [80];
  undefined1 auStack_3c0 [24];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [16];
  char cStack_388;
  undefined ***pppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 *puStack_340;
  undefined8 ***pppuStack_338;
  ulong uStack_330;
  byte bStack_321;
  long ***ppplStack_320;
  long ***ppplStack_318;
  long lStack_310;
  undefined1 auStack_308 [120];
  undefined ****ppppuStack_290;
  undefined1 uStack_288;
  char cStack_279;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int iStack_260;
  undefined ****ppppuStack_258;
  byte bStack_1e8;
  undefined ****ppppuStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [112];
  long **pplStack_158;
  byte bStack_138;
  long lStack_130;
  undefined1 auStack_b0 [136];
  long lStack_28;
  
  puVar4 = auStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c313f4(auStack_b0,param_1,&UNK_10f4e968b,0x16c);
  FUN_108651ed8(auStack_b0,param_2);
  func_0x000107c31400();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x000107c31400(auStack_b0);
  __Unwind_Resume();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_7a0 = (long ***)0x2;
  func_0x000107c2a0bc(auStack_308,puVar4,&UNK_10f4e97f8,0x2a);
  func_0x000107c2a008(&ppplStack_438,auStack_308,&ppplStack_7a0);
  func_0x000107c29db8(auStack_7b8,&ppplStack_438);
  func_0x000107c29db4(&ppplStack_438);
  uVar16 = uStack_7b0;
  if (cStack_7a8 == '\0') {
    uVar16 = 0;
  }
  ppplStack_438 = (long ***)&UNK_10f4e9823;
  ppplStack_430 = (long ***)0x41;
  uStack_370 = 0;
  uStack_378 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  pppuStack_380 = (undefined ***)0x32aaaba7;
  uStack_348 = 0;
  puStack_340 = puVar4;
  func_0x000107c27958(&pppuStack_338,&ppplStack_438);
  lStack_310 = 0;
  uStack_288 = 1;
  ppplStack_320 = (long ***)&ppplStack_320;
  ppplStack_318 = (long ***)&ppplStack_320;
  ppppuStack_290 = &pppuStack_380;
  __ZNSt3__15mutex4lockEv(&pppuStack_380);
  pppplVar10 = &ppplStack_318;
  do {
    pppplVar8 = (long ****)*pppplVar10;
    if (pppplVar8 == &ppplStack_320) {
      func_0x000107c280c4(&ppppuStack_290);
      if (-1 < (char)bStack_321) {
        uStack_330 = (ulong)bStack_321;
        pppuStack_338 = &pppuStack_338;
      }
      func_0x000107c313f4(&ppppuStack_1e0,puStack_340,pppuStack_338,uStack_330);
      ppppuStack_1e0 = (undefined ****)&PTR_FUN_110a7f8f8;
      pplStack_158 = (long **)0x0;
      func_0x000107c28204(&ppppuStack_290);
      pppplVar10 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar10 + 2,&ppppuStack_1e0);
      pppplVar10[1] = (long ***)&ppplStack_320;
      pppplVar10[2] = (long ***)&PTR_FUN_110a7f8f8;
      pppplVar10[0x13] = (long ***)pplStack_158;
      *pppplVar10 = ppplStack_320;
      ppplStack_320[1] = (long **)pppplVar10;
      lStack_310 = lStack_310 + 1;
      ppplStack_320 = (long ***)pppplVar10;
      func_0x00010887f70c();
      goto LAB_10887e4c4;
    }
    pppplVar10 = pppplVar8 + 1;
  } while (pppplVar8[0x13] != (long ***)0x0);
  pppplVar10 = (long ****)*pppplVar10;
  if (&ppplStack_320 != pppplVar10) {
    ppplVar11 = *pppplVar8;
    ppplVar11[1] = (long **)pppplVar10;
    *pppplVar10 = ppplVar11;
    ppplStack_320[1] = (long **)pppplVar8;
    *pppplVar8 = ppplStack_320;
    pppplVar8[1] = (long ***)&ppplStack_320;
    ppplStack_320 = (long ***)pppplVar8;
  }
LAB_10887e4c4:
  pppplVar10 = (long ****)(ppplStack_320 + 2);
  ppplStack_320[0x13] = (long **)&pppuStack_380;
  func_0x000107c2798c(&ppppuStack_290);
  auStack_428[0] = 0;
  cStack_388 = '\0';
  ppplStack_438 = (long ***)pppplVar10;
  ppplStack_430 = (long ***)pppplVar10;
  FUN_10887f2a8(&ppplStack_430);
  ppplStack_638 = (long ***)0x0;
  auStack_630[0] = auStack_630[0] & 0xffffffffffffff00;
  uStack_590 = 0;
  if (cStack_388 == '\0') {
    ppplVar11 = (long ***)0x0;
  }
  else {
    FUN_10887f43c(auStack_630,auStack_428);
    FUN_10887f3c4(auStack_428);
    ppplVar11 = ppplStack_638;
  }
  ppplStack_638 = ppplStack_430;
  ppplStack_430 = ppplVar11;
  FUN_10887f514(&uStack_588,&ppplStack_638);
  _bzero(auStack_798,0xb0);
  FUN_10887f514(auStack_6e8,auStack_798);
  uStack_7c8 = 0;
  uStack_7c0 = 0;
  uStack_7d0 = 0;
  FUN_10887f5d4(&ppppuStack_1e0,&uStack_588);
  FUN_10887f5d4(&ppppuStack_290,auStack_6e8);
  puStack_4d8 = &uStack_7d0;
  uStack_4d0 = 0;
  while ((((bStack_138 & 1) != 0 || ((bStack_1e8 & 1) != 0)) && (ppppuStack_1e0 != ppppuStack_290)))
  {
    if ((bStack_138 & 1) == 0) {
      ppppuVar14 = (undefined ****)ppppuStack_1e0[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_4c8,ppppuStack_1e0 + 0xb);
      func_0x000107c27f54(auStack_4b0,&UNK_10f2e0451,auStack_4c8);
      func_0x00010bcc7444(ppppuVar14,0x65,auStack_4b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4c8);
    }
    if (uStack_7c8 < uStack_7c0) {
      FUN_10887f458(uStack_7c8,auStack_1d8);
      uVar9 = uStack_7c8 + 0xa0;
    }
    else {
      lVar15 = uStack_7c8 - uStack_7d0;
      uVar9 = lVar15 / 0xa0 + 1;
      if (0x199999999999999 < uVar9) {
        FUN_10887f59c();
        goto LAB_10887ed0c;
      }
      uVar6 = (long)(uStack_7c0 - uStack_7d0) / 0xa0;
      uVar12 = uVar6 * 2;
      if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
        uVar12 = uVar9;
      }
      if (0xcccccccccccccb < uVar6) {
        uVar12 = 0x199999999999999;
      }
      if (uVar12 == 0) {
        lVar5 = 0;
      }
      else {
        if (0x199999999999999 < uVar12) {
          func_0x000104bd35f4();
          goto LAB_10887ed0c;
        }
        lVar5 = uVar12 * 0xa0;
        __Znwm();
      }
      lVar15 = lVar5 + lVar15;
      FUN_10887f458(lVar15,auStack_1d8);
      uVar2 = uStack_7c8;
      uVar13 = uStack_7d0;
      uVar17 = lVar15 + ((long)(uStack_7c8 - uStack_7d0) / -0xa0) * 0xa0;
      uVar6 = uVar17;
      for (uVar9 = uStack_7d0; uVar9 != uVar2; uVar9 = uVar9 + 0xa0) {
        FUN_10887f458(uVar6,uVar9);
        uVar6 = uVar6 + 0xa0;
      }
      for (; uVar13 != uVar2; uVar13 = uVar13 + 0xa0) {
        FUN_10887f1b0(uVar13);
      }
      uVar9 = lVar15 + 0xa0;
      uStack_7c0 = lVar5 + uVar12 * 0xa0;
      bVar1 = uStack_7d0 != 0;
      uStack_7d0 = uVar17;
      if (bVar1) {
        uStack_7c8 = uVar9;
        __ZdlPv();
      }
    }
    uStack_7c8 = uVar9;
    FUN_10887f2a8(&ppppuStack_1e0);
  }
  uStack_4d0 = 1;
  FUN_10887f5a8(&puStack_4d8);
  func_0x00010887f6f0(&ppppuStack_290);
  FUN_10887f488(auStack_1d8);
  func_0x00010887f6f0(auStack_6e8);
  func_0x00010887f6f0(auStack_798);
  FUN_10887f488(&uStack_580);
  func_0x00010887f6f0(&ppplStack_638);
  FUN_10887f4a8(&ppplStack_438);
  uStack_580 = 0;
  uStack_588 = 0;
  auStack_578[0] = 0;
  uVar12 = uStack_7d0;
  uVar9 = uStack_7c8;
  if (uStack_7c8 - uStack_7d0 != 0) {
    uVar9 = (long)(uStack_7c8 - uStack_7d0) / 0xa0;
    if (0x1642c8590b21642 < uVar9) goto LAB_10887ec60;
    FUN_10887ef8c(&ppplStack_438,uVar9,0,auStack_578);
    FUN_10887eed0(&uStack_588,&ppplStack_438);
    func_0x00010887f050(&ppplStack_438);
    uVar12 = uStack_7d0;
    uVar9 = uStack_7c8;
  }
  for (; uVar12 != uVar9; uVar12 = uVar12 + 0xa0) {
    func_0x000107c27994(&ppplStack_438,uVar12);
    uStack_420 = *(undefined8 *)(uVar12 + 0x18);
    uStack_418 = *(undefined1 *)(uVar12 + 0x20);
    func_0x00010869fbb8(auStack_410,uVar12 + 0x28);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_3c0,uVar12 + 0x78);
    uStack_3a0 = *(undefined8 *)(uVar12 + 0x98);
    uStack_3a8 = *(undefined8 *)(uVar12 + 0x90);
    FUN_108848684(auStack_398);
    if (uStack_580 < auStack_578[0]) {
      func_0x00010887f000(uStack_580,&ppplStack_438);
      uVar6 = uStack_580 + 0xb8;
    }
    else {
      lVar15 = (long)(uStack_580 - uStack_588) / 0xb8;
      uVar6 = lVar15 + 1;
      if (0x1642c8590b21642 < uVar6) {
        FUN_10887eec4();
        goto LAB_10887ed0c;
      }
      uVar2 = (long)(auStack_578[0] - uStack_588) / 0xb8;
      uVar13 = uVar2 * 2;
      if (uVar13 < uVar6 || uVar13 - uVar6 == 0) {
        uVar13 = uVar6;
      }
      if (0xb21642c8590b20 < uVar2) {
        uVar13 = 0x1642c8590b21642;
      }
      FUN_10887ef8c(&ppppuStack_1e0,uVar13,lVar15,auStack_578);
      func_0x00010887f000(uStack_1d0,&ppplStack_438);
      uStack_1d0 = uStack_1d0 + 0xb8;
      FUN_10887eed0(&uStack_588,&ppppuStack_1e0);
      uVar6 = uStack_580;
      func_0x00010887f050(&ppppuStack_1e0);
    }
    uStack_580 = uVar6;
    func_0x00010887f098(&ppplStack_438);
  }
  func_0x000107c31430(&ppppuStack_1e0,&UNK_10f4e4e58,0x17,7);
  func_0x00010887f714((long)uStack_1d0._7_1_);
  func_0x00010887f738(&ppplStack_438);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_1e0);
  uVar12 = uStack_580;
  ppplStack_438 = (long ***)&PTR_DAT_110a7f998;
  for (uVar9 = uStack_588; uVar9 != uVar12; uVar9 = uVar9 + 0xb8) {
    func_0x000107c27994(&ppppuStack_290,uVar9 + 0xa0);
    uStack_270 = *(undefined8 *)(uVar9 + 0x90);
    uStack_268 = 0x300000000;
    iStack_260 = 0;
    uStack_278 = uVar16;
    FUN_108847164(&ppppuStack_1e0,uVar9);
    pppppuVar7 = &ppppuStack_1e0;
    FUN_10869fae4(pppppuVar7,0);
    ppppuStack_258 = (undefined ****)pppppuVar7;
    func_0x000104bee768(&ppppuStack_1e0);
    ppppuStack_1e0 = (undefined ****)&ppplStack_438;
    __ZNSt3__15mutex4lockEv(&uStack_420);
    func_0x000107c287ac(&ppplStack_438,1,&ppppuStack_290);
    func_0x000107c3140c(&ppplStack_438,2,uStack_278);
    func_0x000107c3140c(&ppplStack_438,3,uStack_270);
    func_0x000107c3140c(&ppplStack_438,4,uStack_268 & 0xffffffff);
    func_0x000107c3140c(&ppplStack_438,5,(long)uStack_268._4_4_);
    func_0x000107c3140c(&ppplStack_438,6,(long)iStack_260);
    func_0x000107c3140c(&ppplStack_438,7,ppppuStack_258);
    func_0x000107c3141c(&ppplStack_438);
    func_0x00010887f724();
    func_0x000107c27e6c(&ppppuStack_1e0);
    func_0x000107c27914(&ppppuStack_290);
    uVar16 = uVar16 + 1;
  }
  uStack_450 = 0;
  uStack_458 = 0;
  uStack_440 = 0;
  uStack_448 = 0;
  puStack_468 = &UNK_105277f7c;
  ppuStack_460 = &PTR_DAT_110873830;
  func_0x000107c31358(puVar4,&UNK_10f4e9865,0x28,1,&puStack_468);
  func_0x00010887f700(ppuStack_460);
  uStack_480 = 0;
  uStack_488 = 0;
  uStack_470 = 0;
  uStack_478 = 0;
  puStack_498 = &UNK_105277f7c;
  ppuStack_490 = &PTR_DAT_110873830;
  func_0x000107c31358(puVar4,&UNK_10f4e988e,0x36a,1,&puStack_498);
  func_0x00010887f700(ppuStack_490);
  func_0x000107c31430(&ppppuStack_290,&DAT_10f4b467c,0x13,7);
  func_0x00010887f714((long)cStack_279);
  func_0x00010887f738(&ppppuStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_290);
  uVar12 = uStack_580;
  ppppuStack_1e0 = (undefined ****)&PTR_FUN_110a7f9d8;
  for (uVar9 = uStack_588; uVar9 != uVar12; uVar9 = uVar9 + 0xb8) {
    ppppuStack_290 = (undefined ****)&ppppuStack_1e0;
    __ZNSt3__15mutex4lockEv(auStack_1c8);
    func_0x000107c287ac(&ppppuStack_1e0,1,uVar9);
    func_0x000107c28230(&ppppuStack_1e0,2,uVar9 + 0x18);
    FUN_108873d64(&ppppuStack_1e0,3,uVar9 + 0x28);
    func_0x000107c2820c(&ppppuStack_1e0,4,uVar9 + 0x78);
    func_0x000107c28208(&ppppuStack_1e0,5,uVar9 + 0x90);
    func_0x000107c28208(&ppppuStack_1e0,6,uVar9 + 0x98);
    func_0x000107c287ac(&ppppuStack_1e0,7,uVar9 + 0xa0);
    func_0x000107c3141c(&ppppuStack_1e0);
    func_0x00010887f724();
    func_0x000107c27e6c(&ppppuStack_290);
  }
  func_0x000107c2a0c0(&ppppuStack_290,puVar4,&UNK_10f4e2ca4,10);
  ppplStack_638 = ppplStack_7a0;
  auStack_630[0] = uVar16;
  FUN_108868020(&ppppuStack_290,&ppplStack_638);
  func_0x000107c31400(&ppppuStack_290);
  func_0x00010887f70c();
  func_0x000107c31400(&ppplStack_438);
  func_0x00010887f0d0(&uStack_588);
  func_0x00010887f118(&uStack_7d0);
  FUN_10887f1e0(&pppuStack_380);
  FUN_108870ce0(auStack_308);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return 1;
  }
  ___stack_chk_fail();
LAB_10887ec60:
  FUN_10887eec4();
LAB_10887ed0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10887ed10);
  (*pcVar3)();
}



/* Entry: 10887e2e4; end: 10887eebb;  */

undefined8 FUN_10887e2e4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *****pppppuVar6;
  long ****pppplVar7;
  ulong uVar8;
  long ****pppplVar9;
  long ***ppplVar10;
  ulong uVar11;
  ulong uVar12;
  undefined ****ppppuVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  undefined1 auStack_708 [8];
  ulong uStack_700;
  char cStack_6f8;
  long ***ppplStack_6f0;
  undefined1 auStack_6e8 [176];
  undefined1 auStack_638 [176];
  long ***ppplStack_588;
  ulong auStack_580 [20];
  undefined1 uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong auStack_4c8 [20];
  ulong *puStack_428;
  undefined1 uStack_420;
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined *puStack_3e8;
  undefined **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long ***ppplStack_388;
  long ***ppplStack_380;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined1 auStack_360 [80];
  undefined1 auStack_310 [24];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  char cStack_2d8;
  undefined ***pppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 ***pppuStack_288;
  ulong uStack_280;
  byte bStack_271;
  long ***ppplStack_270;
  long ***ppplStack_268;
  long lStack_260;
  undefined1 auStack_258 [120];
  undefined ****ppppuStack_1e0;
  undefined1 uStack_1d8;
  char cStack_1c9;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int iStack_1b0;
  undefined ****ppppuStack_1a8;
  byte bStack_138;
  undefined ****ppppuStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [112];
  long **pplStack_a8;
  byte bStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_6f0 = (long ***)0x2;
  func_0x000107c2a0bc(auStack_258,param_1,&UNK_10f4e97f8,0x2a);
  func_0x000107c2a008(&ppplStack_388,auStack_258,&ppplStack_6f0);
  func_0x000107c29db8(auStack_708,&ppplStack_388);
  func_0x000107c29db4(&ppplStack_388);
  uVar15 = uStack_700;
  if (cStack_6f8 == '\0') {
    uVar15 = 0;
  }
  ppplStack_388 = (long ***)&UNK_10f4e9823;
  ppplStack_380 = (long ***)0x41;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  pppuStack_2d0 = (undefined ***)0x32aaaba7;
  uStack_298 = 0;
  uStack_290 = param_1;
  func_0x000107c27958(&pppuStack_288,&ppplStack_388);
  lStack_260 = 0;
  uStack_1d8 = 1;
  ppplStack_270 = (long ***)&ppplStack_270;
  ppplStack_268 = (long ***)&ppplStack_270;
  ppppuStack_1e0 = &pppuStack_2d0;
  __ZNSt3__15mutex4lockEv(&pppuStack_2d0);
  pppplVar9 = &ppplStack_268;
  do {
    pppplVar7 = (long ****)*pppplVar9;
    if (pppplVar7 == &ppplStack_270) {
      func_0x000107c280c4(&ppppuStack_1e0);
      if (-1 < (char)bStack_271) {
        uStack_280 = (ulong)bStack_271;
        pppuStack_288 = &pppuStack_288;
      }
      func_0x000107c313f4(&ppppuStack_130,uStack_290,pppuStack_288,uStack_280);
      ppppuStack_130 = (undefined ****)&PTR_FUN_110a7f8f8;
      pplStack_a8 = (long **)0x0;
      func_0x000107c28204(&ppppuStack_1e0);
      pppplVar9 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar9 + 2,&ppppuStack_130);
      pppplVar9[1] = (long ***)&ppplStack_270;
      pppplVar9[2] = (long ***)&PTR_FUN_110a7f8f8;
      pppplVar9[0x13] = (long ***)pplStack_a8;
      *pppplVar9 = ppplStack_270;
      ppplStack_270[1] = (long **)pppplVar9;
      lStack_260 = lStack_260 + 1;
      ppplStack_270 = (long ***)pppplVar9;
      func_0x00010887f70c();
      goto LAB_10887e4c4;
    }
    pppplVar9 = pppplVar7 + 1;
  } while (pppplVar7[0x13] != (long ***)0x0);
  pppplVar9 = (long ****)*pppplVar9;
  if (&ppplStack_270 != pppplVar9) {
    ppplVar10 = *pppplVar7;
    ppplVar10[1] = (long **)pppplVar9;
    *pppplVar9 = ppplVar10;
    ppplStack_270[1] = (long **)pppplVar7;
    *pppplVar7 = ppplStack_270;
    pppplVar7[1] = (long ***)&ppplStack_270;
    ppplStack_270 = (long ***)pppplVar7;
  }
LAB_10887e4c4:
  pppplVar9 = (long ****)(ppplStack_270 + 2);
  ppplStack_270[0x13] = (long **)&pppuStack_2d0;
  func_0x000107c2798c(&ppppuStack_1e0);
  auStack_378[0] = 0;
  cStack_2d8 = '\0';
  ppplStack_388 = (long ***)pppplVar9;
  ppplStack_380 = (long ***)pppplVar9;
  FUN_10887f2a8(&ppplStack_380);
  ppplStack_588 = (long ***)0x0;
  auStack_580[0] = auStack_580[0] & 0xffffffffffffff00;
  uStack_4e0 = 0;
  if (cStack_2d8 == '\0') {
    ppplVar10 = (long ***)0x0;
  }
  else {
    FUN_10887f43c(auStack_580,auStack_378);
    FUN_10887f3c4(auStack_378);
    ppplVar10 = ppplStack_588;
  }
  ppplStack_588 = ppplStack_380;
  ppplStack_380 = ppplVar10;
  FUN_10887f514(&uStack_4d8,&ppplStack_588);
  _bzero(auStack_6e8,0xb0);
  FUN_10887f514(auStack_638,auStack_6e8);
  uStack_718 = 0;
  uStack_710 = 0;
  uStack_720 = 0;
  FUN_10887f5d4(&ppppuStack_130,&uStack_4d8);
  FUN_10887f5d4(&ppppuStack_1e0,auStack_638);
  puStack_428 = &uStack_720;
  uStack_420 = 0;
  while ((((bStack_88 & 1) != 0 || ((bStack_138 & 1) != 0)) && (ppppuStack_130 != ppppuStack_1e0)))
  {
    if ((bStack_88 & 1) == 0) {
      ppppuVar13 = (undefined ****)ppppuStack_130[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_418,ppppuStack_130 + 0xb);
      func_0x000107c27f54(auStack_400,&UNK_10f2e0451,auStack_418);
      func_0x00010bcc7444(ppppuVar13,0x65,auStack_400);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_400);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_418);
    }
    if (uStack_718 < uStack_710) {
      FUN_10887f458(uStack_718,auStack_128);
      uVar8 = uStack_718 + 0xa0;
    }
    else {
      lVar14 = uStack_718 - uStack_720;
      uVar8 = lVar14 / 0xa0 + 1;
      if (0x199999999999999 < uVar8) {
        FUN_10887f59c();
        goto LAB_10887ed0c;
      }
      uVar5 = (long)(uStack_710 - uStack_720) / 0xa0;
      uVar11 = uVar5 * 2;
      if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
        uVar11 = uVar8;
      }
      if (0xcccccccccccccb < uVar5) {
        uVar11 = 0x199999999999999;
      }
      if (uVar11 == 0) {
        lVar4 = 0;
      }
      else {
        if (0x199999999999999 < uVar11) {
          func_0x000104bd35f4();
          goto LAB_10887ed0c;
        }
        lVar4 = uVar11 * 0xa0;
        __Znwm();
      }
      lVar14 = lVar4 + lVar14;
      FUN_10887f458(lVar14,auStack_128);
      uVar2 = uStack_718;
      uVar12 = uStack_720;
      uVar16 = lVar14 + ((long)(uStack_718 - uStack_720) / -0xa0) * 0xa0;
      uVar5 = uVar16;
      for (uVar8 = uStack_720; uVar8 != uVar2; uVar8 = uVar8 + 0xa0) {
        FUN_10887f458(uVar5,uVar8);
        uVar5 = uVar5 + 0xa0;
      }
      for (; uVar12 != uVar2; uVar12 = uVar12 + 0xa0) {
        FUN_10887f1b0(uVar12);
      }
      uVar8 = lVar14 + 0xa0;
      uStack_710 = lVar4 + uVar11 * 0xa0;
      bVar1 = uStack_720 != 0;
      uStack_720 = uVar16;
      if (bVar1) {
        uStack_718 = uVar8;
        __ZdlPv();
      }
    }
    uStack_718 = uVar8;
    FUN_10887f2a8(&ppppuStack_130);
  }
  uStack_420 = 1;
  FUN_10887f5a8(&puStack_428);
  func_0x00010887f6f0(&ppppuStack_1e0);
  FUN_10887f488(auStack_128);
  func_0x00010887f6f0(auStack_638);
  func_0x00010887f6f0(auStack_6e8);
  FUN_10887f488(&uStack_4d0);
  func_0x00010887f6f0(&ppplStack_588);
  FUN_10887f4a8(&ppplStack_388);
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  auStack_4c8[0] = 0;
  uVar11 = uStack_720;
  uVar8 = uStack_718;
  if (uStack_718 - uStack_720 != 0) {
    uVar8 = (long)(uStack_718 - uStack_720) / 0xa0;
    if (0x1642c8590b21642 < uVar8) goto LAB_10887ec60;
    FUN_10887ef8c(&ppplStack_388,uVar8,0,auStack_4c8);
    FUN_10887eed0(&uStack_4d8,&ppplStack_388);
    func_0x00010887f050(&ppplStack_388);
    uVar11 = uStack_720;
    uVar8 = uStack_718;
  }
  for (; uVar11 != uVar8; uVar11 = uVar11 + 0xa0) {
    func_0x000107c27994(&ppplStack_388,uVar11);
    uStack_370 = *(undefined8 *)(uVar11 + 0x18);
    uStack_368 = *(undefined1 *)(uVar11 + 0x20);
    func_0x00010869fbb8(auStack_360,uVar11 + 0x28);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_310,uVar11 + 0x78);
    uStack_2f0 = *(undefined8 *)(uVar11 + 0x98);
    uStack_2f8 = *(undefined8 *)(uVar11 + 0x90);
    FUN_108848684(auStack_2e8);
    if (uStack_4d0 < auStack_4c8[0]) {
      func_0x00010887f000(uStack_4d0,&ppplStack_388);
      uVar5 = uStack_4d0 + 0xb8;
    }
    else {
      lVar14 = (long)(uStack_4d0 - uStack_4d8) / 0xb8;
      uVar5 = lVar14 + 1;
      if (0x1642c8590b21642 < uVar5) {
        FUN_10887eec4();
        goto LAB_10887ed0c;
      }
      uVar2 = (long)(auStack_4c8[0] - uStack_4d8) / 0xb8;
      uVar12 = uVar2 * 2;
      if (uVar12 < uVar5 || uVar12 - uVar5 == 0) {
        uVar12 = uVar5;
      }
      if (0xb21642c8590b20 < uVar2) {
        uVar12 = 0x1642c8590b21642;
      }
      FUN_10887ef8c(&ppppuStack_130,uVar12,lVar14,auStack_4c8);
      func_0x00010887f000(uStack_120,&ppplStack_388);
      uStack_120 = uStack_120 + 0xb8;
      FUN_10887eed0(&uStack_4d8,&ppppuStack_130);
      uVar5 = uStack_4d0;
      func_0x00010887f050(&ppppuStack_130);
    }
    uStack_4d0 = uVar5;
    func_0x00010887f098(&ppplStack_388);
  }
  func_0x000107c31430(&ppppuStack_130,&UNK_10f4e4e58,0x17,7);
  func_0x00010887f714((long)uStack_120._7_1_);
  func_0x00010887f738(&ppplStack_388);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_130);
  uVar11 = uStack_4d0;
  ppplStack_388 = (long ***)&PTR_DAT_110a7f998;
  for (uVar8 = uStack_4d8; uVar8 != uVar11; uVar8 = uVar8 + 0xb8) {
    func_0x000107c27994(&ppppuStack_1e0,uVar8 + 0xa0);
    uStack_1c0 = *(undefined8 *)(uVar8 + 0x90);
    uStack_1b8 = 0x300000000;
    iStack_1b0 = 0;
    uStack_1c8 = uVar15;
    FUN_108847164(&ppppuStack_130,uVar8);
    pppppuVar6 = &ppppuStack_130;
    FUN_10869fae4(pppppuVar6,0);
    ppppuStack_1a8 = (undefined ****)pppppuVar6;
    func_0x000104bee768(&ppppuStack_130);
    ppppuStack_130 = (undefined ****)&ppplStack_388;
    __ZNSt3__15mutex4lockEv(&uStack_370);
    func_0x000107c287ac(&ppplStack_388,1,&ppppuStack_1e0);
    func_0x000107c3140c(&ppplStack_388,2,uStack_1c8);
    func_0x000107c3140c(&ppplStack_388,3,uStack_1c0);
    func_0x000107c3140c(&ppplStack_388,4,uStack_1b8 & 0xffffffff);
    func_0x000107c3140c(&ppplStack_388,5,(long)uStack_1b8._4_4_);
    func_0x000107c3140c(&ppplStack_388,6,(long)iStack_1b0);
    func_0x000107c3140c(&ppplStack_388,7,ppppuStack_1a8);
    func_0x000107c3141c(&ppplStack_388);
    func_0x00010887f724();
    func_0x000107c27e6c(&ppppuStack_130);
    func_0x000107c27914(&ppppuStack_1e0);
    uVar15 = uVar15 + 1;
  }
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  uStack_390 = 0;
  uStack_398 = 0;
  puStack_3b8 = &UNK_105277f7c;
  ppuStack_3b0 = &PTR_DAT_110873830;
  func_0x000107c31358(param_1,&UNK_10f4e9865,0x28,1,&puStack_3b8);
  func_0x00010887f700(ppuStack_3b0);
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  puStack_3e8 = &UNK_105277f7c;
  ppuStack_3e0 = &PTR_DAT_110873830;
  func_0x000107c31358(param_1,&UNK_10f4e988e,0x36a,1,&puStack_3e8);
  func_0x00010887f700(ppuStack_3e0);
  func_0x000107c31430(&ppppuStack_1e0,&DAT_10f4b467c,0x13,7);
  func_0x00010887f714((long)cStack_1c9);
  func_0x00010887f738(&ppppuStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_1e0);
  uVar11 = uStack_4d0;
  ppppuStack_130 = (undefined ****)&PTR_FUN_110a7f9d8;
  for (uVar8 = uStack_4d8; uVar8 != uVar11; uVar8 = uVar8 + 0xb8) {
    ppppuStack_1e0 = (undefined ****)&ppppuStack_130;
    __ZNSt3__15mutex4lockEv(auStack_118);
    func_0x000107c287ac(&ppppuStack_130,1,uVar8);
    func_0x000107c28230(&ppppuStack_130,2,uVar8 + 0x18);
    FUN_108873d64(&ppppuStack_130,3,uVar8 + 0x28);
    func_0x000107c2820c(&ppppuStack_130,4,uVar8 + 0x78);
    func_0x000107c28208(&ppppuStack_130,5,uVar8 + 0x90);
    func_0x000107c28208(&ppppuStack_130,6,uVar8 + 0x98);
    func_0x000107c287ac(&ppppuStack_130,7,uVar8 + 0xa0);
    func_0x000107c3141c(&ppppuStack_130);
    func_0x00010887f724();
    func_0x000107c27e6c(&ppppuStack_1e0);
  }
  func_0x000107c2a0c0(&ppppuStack_1e0,param_1,&UNK_10f4e2ca4,10);
  ppplStack_588 = ppplStack_6f0;
  auStack_580[0] = uVar15;
  FUN_108868020(&ppppuStack_1e0,&ppplStack_588);
  func_0x000107c31400(&ppppuStack_1e0);
  func_0x00010887f70c();
  func_0x000107c31400(&ppplStack_388);
  func_0x00010887f0d0(&uStack_4d8);
  func_0x00010887f118(&uStack_720);
  FUN_10887f1e0(&pppuStack_2d0);
  FUN_108870ce0(auStack_258);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return 1;
  }
  ___stack_chk_fail();
LAB_10887ec60:
  FUN_10887eec4();
LAB_10887ed0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10887ed10);
  (*pcVar3)();
}



/* Entry: 10887eebc; end: 10887eec3;  */

undefined8 * FUN_10887eebc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887eec4; end: 10887eecf;  */

void FUN_10887eec4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010887f750();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0xb8) * 0xb8;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0xb8) {
    FUN_10887f000(lVar2,lVar3);
    lVar2 = lVar2 + 0xb8;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
    func_0x00010887f098(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10887eed0; end: 10887ef8b;  */

void FUN_10887eed0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0xb8) * 0xb8;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0xb8) {
    FUN_10887f000(lVar2,lVar3);
    lVar2 = lVar2 + 0xb8;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
    func_0x00010887f098(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10887ef8c; end: 10887efff;  */

long * FUN_10887ef8c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x1642c8590b21642 < param_2) {
      func_0x000104bd35f4();
      FUN_10887f6b4();
      func_0x00010887f75c();
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xf] = 0;
      lVar1 = param_1[0x12];
      param_2[0x13] = param_1[0x13];
      param_2[0x12] = lVar1;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x14] = 0;
      lVar1 = param_1[0x14];
      param_2[0x15] = param_1[0x15];
      param_2[0x14] = lVar1;
      param_2[0x16] = param_1[0x16];
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      return param_2;
    }
    lVar1 = (long)param_2 * 0xb8;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0xb8;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + (long)param_2 * 0xb8;
  return param_1;
}



/* Entry: 10887f000; end: 10887f14b;  */

void FUN_10887f000(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_10887f6b4();
  func_0x00010887f75c();
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  return;
}



/* Entry: 10887f14c; end: 10887f1af;  */

void FUN_10887f14c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0xa0;
      FUN_10887f1b0();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10887f1b0; end: 10887f1df;  */

long FUN_10887f1b0(long param_1)

{
  long lStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x78);
  FUN_1088f9cb4(param_1 + 0x28);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10887f1e0; end: 10887f25f;  */

void FUN_10887f1e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10887f260; end: 10887f263;  */

undefined8 * FUN_10887f260(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887f264; end: 10887f277;  */

void FUN_10887f264(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887f278; end: 10887f2a7;  */

void FUN_10887f278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10887f2a8; end: 10887f3c3;  */

void FUN_10887f2a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [80];
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (func_0x000107c3141c(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    func_0x000107c313f8();
    func_0x000107c2879c(auStack_d0);
    uStack_b0 = 1;
    lVar1 = lVar2;
    func_0x000107c28228();
    lStack_b8 = lVar1;
    FUN_1086ad9fc(auStack_a8,lVar2,2);
    func_0x000107c313dc(auStack_58,lVar2,3);
    lVar1 = lVar2;
    func_0x000107c313d8(lVar2,4);
    lStack_40 = lVar1;
    func_0x000107c313d8(lVar2,5);
    lStack_38 = lVar2;
    if ((char)param_1[0x15] == '\x01') {
      FUN_10887f3e8();
    }
    else {
      FUN_10887f43c(param_1 + 1,auStack_d0);
    }
    FUN_10887f1b0(auStack_d0);
    return;
  }
  plVar3 = param_1 + 1;
  if ((char)param_1[0x15] == '\x01') {
    FUN_10887f1b0();
    *(undefined1 *)(plVar3 + 0x14) = 0;
  }
  return;
}



/* Entry: 10887f3c4; end: 10887f3e7;  */

void FUN_10887f3c4(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10887f1b0();
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



/* Entry: 10887f3e8; end: 10887f43b;  */

long FUN_10887f3e8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3194c();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_1086a76e0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c27b9c(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return param_1;
}



/* Entry: 10887f43c; end: 10887f457;  */

void FUN_10887f43c(long param_1)

{
  FUN_10887f458();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 10887f458; end: 10887f487;  */

void FUN_10887f458(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_10887f6b4();
  func_0x00010887f75c();
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  return;
}



/* Entry: 10887f488; end: 10887f4a7;  */

void FUN_10887f488(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10887f1b0();
  }
  return;
}



/* Entry: 10887f4a8; end: 10887f513;  */

undefined8 * FUN_10887f4a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [168];
  
  _bzero(auStack_d0,0xb0);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_10887f3c4(param_1 + 2);
  }
  FUN_10887f488(auStack_c8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10887f488(param_1 + 2);
  return param_1;
}



/* Entry: 10887f514; end: 10887f59b;  */

void FUN_10887f514(undefined8 param_1)

{
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [168];
  
  func_0x00010887f558(auStack_d0);
  func_0x00010887f558(param_1,auStack_d0);
  FUN_10887f488(auStack_c8);
  return;
}



/* Entry: 10887f59c; end: 10887f5a7;  */

long FUN_10887f59c(long param_1)

{
  func_0x00010887f750();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10887f14c(param_1);
  }
  return param_1;
}



/* Entry: 10887f5a8; end: 10887f5d3;  */

long FUN_10887f5a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10887f14c(param_1);
  }
  return param_1;
}



/* Entry: 10887f5d4; end: 10887f68b;  */

undefined8 * FUN_10887f5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0x15) == '\x01') {
    func_0x000107c27994(param_1 + 1,param_2 + 1);
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    func_0x00010869fbb8(param_1 + 6,param_2 + 6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 0x10,param_2 + 0x10);
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 10887f68c; end: 10887f6b3;  */

void FUN_10887f68c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887f6b4; end: 10887f76f;  */

undefined8 * FUN_10887f6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1 = param_1 + 5;
  puVar1 = param_1;
  func_0x0001086b04f4(&UNK_110a8ea08,param_1,0,param_2 + 5);
  *(undefined4 *)(puVar1 + 9) = 0;
  func_0x0001086b0f38();
  FUN_1086a76e0();
  return param_1;
}



/* Entry: 10887f770; end: 10887fd6f;  */

long *** FUN_10887f770(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long ***ppplVar10;
  long **pplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  long ***ppplVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [160];
  long ***ppplStack_3f0;
  long **pplStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  long ***ppplStack_398;
  undefined1 uStack_390;
  byte bStack_2f8;
  long ***ppplStack_2f0;
  long ***ppplStack_2e8;
  undefined1 auStack_2e0 [152];
  char cStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long ***ppplStack_220;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  byte bStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  long **pplStack_198;
  int iStack_190;
  byte bStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [112];
  long **pplStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_2f0 = (long ***)&UNK_10f4e9bf9;
  ppplStack_2e8 = (long ***)0x5b;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  pplStack_f0 = (long **)0x32aaaba7;
  uStack_b8 = 0;
  uStack_3c8 = param_2;
  uStack_b0 = param_1;
  func_0x000107c27958(&pppuStack_a8,&ppplStack_2f0);
  lStack_80 = 0;
  ppplStack_90 = (long ***)&ppplStack_90;
  ppplStack_88 = (long ***)&ppplStack_90;
  func_0x000107c313f4(auStack_178,param_1,&UNK_10f4e9c55,0x124);
  ppplStack_398 = &pplStack_f0;
  uStack_390 = 1;
  __ZNSt3__15mutex4lockEv(&pplStack_f0);
  pppplVar13 = &ppplStack_88;
  do {
    pppplVar12 = (long ****)*pppplVar13;
    if (pppplVar12 == &ppplStack_90) {
      func_0x000107c280c4(&ppplStack_398);
      if (-1 < (char)bStack_91) {
        uStack_a0 = (ulong)bStack_91;
        pppuStack_a8 = &pppuStack_a8;
      }
      func_0x000107c313f4(&ppplStack_220,uStack_b0,pppuStack_a8,uStack_a0);
      ppplStack_220 = (long ***)&PTR_FUN_110a7fa18;
      pplStack_198 = (long **)0x0;
      func_0x000107c28204(&ppplStack_398);
      pppplVar13 = (long ****)0xa0;
      __Znwm();
      func_0x000107c313fc(pppplVar13 + 2,&ppplStack_220);
      pppplVar13[1] = (long ***)&ppplStack_90;
      pppplVar13[2] = (long ***)&PTR_FUN_110a7fa18;
      pppplVar13[0x13] = (long ***)pplStack_198;
      *pppplVar13 = ppplStack_90;
      ppplStack_90[1] = (long **)pppplVar13;
      lStack_80 = lStack_80 + 1;
      ppplStack_90 = (long ***)pppplVar13;
      func_0x000107c31400(&ppplStack_220);
      goto LAB_10887f900;
    }
    pppplVar13 = pppplVar12 + 1;
  } while (pppplVar12[0x13] != (long ***)0x0);
  pppplVar13 = (long ****)*pppplVar13;
  if (&ppplStack_90 != pppplVar13) {
    ppplVar14 = *pppplVar12;
    ppplVar14[1] = (long **)pppplVar13;
    *pppplVar13 = ppplVar14;
    ppplStack_90[1] = (long **)pppplVar12;
    *pppplVar12 = ppplStack_90;
    pppplVar12[1] = (long ***)&ppplStack_90;
    ppplStack_90 = (long ***)pppplVar12;
  }
LAB_10887f900:
  pppplVar13 = (long ****)(ppplStack_90 + 2);
  ppplStack_90[0x13] = (long **)&pplStack_f0;
  func_0x000107c2798c(&ppplStack_398);
  auStack_2e0[0] = 0;
  cStack_248 = '\0';
  ppplStack_2f0 = (long ***)pppplVar13;
  ppplStack_2e8 = (long ***)pppplVar13;
  FUN_10887feec(&ppplStack_2e8);
  ppplStack_220 = (long ***)0x0;
  auStack_218[0] = 0;
  bStack_180 = 0;
  if (cStack_248 == '\0') {
    ppplVar14 = (long ***)0x0;
  }
  else {
    FUN_10887fff8(auStack_218,auStack_2e0);
    FUN_10887ffd4(auStack_2e0);
    ppplVar14 = ppplStack_220;
  }
  ppplStack_220 = ppplStack_2e8;
  ppplStack_2e8 = ppplVar14;
  _bzero(&ppplStack_398,0xa8);
  while ((((bStack_180 & 1) != 0 || ((bStack_2f8 & 1) != 0)) && (ppplStack_220 != ppplStack_398))) {
    if ((bStack_180 & 1) == 0) {
      ppplVar14 = (long ***)ppplStack_220[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&puStack_240,ppplStack_220 + 0xb);
      func_0x000107c27f54(&puStack_3c0,&UNK_10f2e0451,&puStack_240);
      func_0x00010bcc7444(ppplVar14,0x65,&puStack_3c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_240);
    }
    uVar7 = ppuStack_1c8 == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_113286e08;
    if (!(bool)uVar7) {
      ppuVar1 = ppuStack_1c8;
    }
    ppuVar15 = ppuVar1 + 3;
    iVar3 = *(int *)(ppuVar1 + 10);
    func_0x000108880064(*ppuVar15);
    ppuVar8 = ppuVar15;
    if (!(bool)uVar7) {
      ppuVar8 = extraout_x9;
    }
    func_0x000107c28f0c(ppuVar8,ppuVar8 + *(int *)(ppuVar1 + 4),uStack_3c8);
    func_0x000108880064(ppuVar1[3]);
    if (!(bool)uVar7) {
      ppuVar15 = extraout_x9_00;
    }
    lStack_3d0 = (long)*(int *)(ppuVar1 + 4);
    ppuVar2 = &PTR_PTR_113280c30;
    if (ppuStack_1d0 != (undefined **)0x0) {
      ppuVar2 = ppuStack_1d0;
    }
    iVar4 = *(int *)(ppuVar2 + 7);
    iVar5 = *(int *)(ppuVar2 + 0x15);
    lVar16 = (long)iStack_190;
    uVar7 = ppuStack_1c8 == (undefined **)0x0;
    ppuVar2 = &PTR_PTR_113286e08;
    if (!(bool)uVar7) {
      ppuVar2 = ppuStack_1c8;
    }
    iVar6 = *(int *)(ppuVar2 + 7);
    if ((bStack_1e8 & 1) == 0) {
      puStack_3c0 = (undefined1 *)((ulong)puStack_3c0 & 0xffffffffffffff00);
      uStack_3a8 = 0;
    }
    else {
      func_0x000107c29ee0(&puStack_240,uStack_1e0);
      uStack_3b8 = uStack_238;
      puStack_3c0 = puStack_240;
      uStack_3b0 = uStack_230;
      uStack_238 = 0;
      uStack_230 = 0;
      puStack_240 = (undefined1 *)0x0;
      uStack_3a8 = 1;
      func_0x000107c27914(&puStack_240);
    }
    ppuVar2 = ppuVar1 + 6;
    func_0x000108880064(ppuVar1[6]);
    ppuVar9 = ppuVar2;
    if (!(bool)uVar7) {
      ppuVar9 = extraout_x9_01;
    }
    func_0x000107c28f0c(ppuVar9,ppuVar9 + *(int *)(ppuVar1 + 7),uStack_3c8);
    func_0x000108880064(ppuVar1[6]);
    if (!(bool)uVar7) {
      ppuVar2 = extraout_x9_02;
    }
    pppplVar13 = (long ****)(long)*(int *)(ppuVar1 + 7);
    puStack_240 = auStack_178;
    __ZNSt3__15mutex4lockEv(auStack_160);
    func_0x000107c3140c(auStack_178,1,0 < iVar3);
    func_0x000107c3140c(auStack_178,2,ppuVar15 + lStack_3d0 != ppuVar8);
    func_0x000107c3140c(auStack_178,3,(long)iVar4);
    func_0x000107c3140c(auStack_178,4,(long)iVar5);
    func_0x000107c3140c(auStack_178,5,lVar16);
    func_0x000107c3140c(auStack_178,6,(long)iVar6);
    func_0x000107c2a10c(auStack_178,7,&puStack_3c0);
    func_0x000107c3140c(auStack_178,8,ppuVar2 + (long)pppplVar13 != ppuVar9);
    func_0x000107c287ac(auStack_178,9,auStack_218);
    func_0x000107c3140c(auStack_178,10,uStack_200);
    func_0x000107c3141c(auStack_178);
    func_0x000108880058();
    func_0x000107c27e6c(&puStack_240);
    func_0x000107c279dc(&puStack_3c0);
    FUN_10887feec(&ppplStack_220);
  }
  func_0x00010888004c();
  FUN_10887fe5c(auStack_218);
  FUN_10887fd70(&ppplStack_2f0);
  func_0x000107c31400(auStack_178);
  ppplVar14 = &pplStack_f0;
  FUN_10887fddc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x000107c2798c(&ppplStack_398);
    func_0x000107c31400(auStack_178);
    FUN_10887fddc(&pplStack_f0);
    ppplVar10 = ppplVar14;
    __Unwind_Resume();
    pcStack_3d8 = FUN_10887fd70;
    ppplStack_3f0 = (long ***)pppplVar13;
    pplStack_3e8 = (long **)ppplVar14;
    puStack_3e0 = &stack0xfffffffffffffff0;
    _bzero(auStack_498,0xa8);
    ppplVar10[1] = (long **)0x0;
    if (*(char *)(ppplVar10 + 0x15) != '\0') {
      FUN_10887ffd4(ppplVar10 + 2);
    }
    FUN_10887fe5c(auStack_490);
    pplVar11 = *ppplVar10;
    *ppplVar10 = (long **)0x0;
    func_0x000107c31408(pplVar11);
    FUN_10887fe5c(ppplVar10 + 2);
    return ppplVar10;
  }
  return (long ***)0x1;
}



/* Entry: 10887fd70; end: 10887fddb;  */

undefined8 * FUN_10887fd70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [160];
  
  _bzero(auStack_c8,0xa8);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    FUN_10887ffd4(param_1 + 2);
  }
  FUN_10887fe5c(auStack_c0);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10887fe5c(param_1 + 2);
  return param_1;
}



/* Entry: 10887fddc; end: 10887fe5b;  */

void FUN_10887fddc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar3 = *(long **)(param_1 + 0x68);
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x70) = 0;
    while (plVar3 != (long *)(param_1 + 0x60)) {
      plVar1 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      __ZdlPv(plVar3);
      plVar3 = plVar1;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10887fe5c; end: 10887fe7b;  */

void FUN_10887fe5c(long param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_10887fe7c();
  }
  return;
}



/* Entry: 10887fe7c; end: 10887fea3;  */

long FUN_10887fe7c(long param_1)

{
  long lStack_28;
  
  func_0x000107c2a5a4(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10887fea4; end: 10887fea7;  */

undefined8 * FUN_10887fea4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}


