/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777ca5c; end: 10777cab3;  */

undefined2 FUN_10777ca5c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f333c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cc7c; end: 10777ccd3;  */

undefined2 FUN_10777cc7c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f347c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777ce9c; end: 10777cef3;  */

undefined2 FUN_10777ce9c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f3558();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777d1c4; end: 10777de9b;  */

undefined8 FUN_10777d1c4(void)

{
  undefined8 unaff_x19;
  undefined8 in_stack_00000008;
  int in_stack_0000001c;
  
  if (-1 < in_stack_0000001c) {
    in_stack_00000008 = unaff_x19;
  }
  return in_stack_00000008;
}



/* Entry: 10777e8c8; end: 10777e8d7;  */

long FUN_10777e8c8(long param_1)

{
  func_0x000100060934(param_1,"within");
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10777f25c; end: 10777f357;  */

/* WARNING: Possible PIC construction at 0x00010777f334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777f338) */

void FUN_10777f25c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong uVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar6;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010777fa9c();
  puVar3 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] <= puVar3) {
    uVar1 = ((long)puVar3 - *unaff_x19) / 0x18 + 1;
    if (uVar1 < 0xaaaaaaaaaaaaaab) {
      uVar2 = (param_1[2] - *unaff_x19) / 0x18;
      uVar5 = uVar2 * 2;
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
        uVar5 = uVar1;
      }
      if (0x555555555555554 < uVar2) {
        uVar5 = 0xaaaaaaaaaaaaaaa;
      }
      func_0x00010777f3a4(auStack_48,uVar5);
      puStack_38[1] = 0;
      puStack_38[2] = 0;
      *puStack_38 = 0;
      uVar6 = *unaff_x20;
      puStack_38[1] = unaff_x20[1];
      *puStack_38 = uVar6;
      puStack_38[2] = unaff_x20[2];
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      puStack_38 = puStack_38 + 3;
      param_1 = unaff_x19;
    }
    else {
      func_0x00010777f398();
    }
    func_0x00010777f968();
    plVar4 = extraout_x9;
    while (plVar4 != unaff_x21) {
      func_0x00010777f998();
      plVar4 = extraout_x9_00;
    }
    for (; param_1 != unaff_x21; param_1 = param_1 + 3) {
      func_0x0001073c6654();
    }
    func_0x00010777f92c();
    return;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar6 = *unaff_x20;
  puVar3[1] = unaff_x20[1];
  *puVar3 = uVar6;
  puVar3[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  unaff_x19[1] = (long)(puVar3 + 3);
  return;
}



/* Entry: 10777f5ec; end: 10777f5f7;  */

void FUN_10777f5ec(long param_1)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  long unaff_x21;
  
  func_0x00010777fa70();
  func_0x00010777f968();
  lVar1 = extraout_x9;
  while (lVar1 != unaff_x21) {
    func_0x00010777f998();
    lVar1 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x18) {
    func_0x0001073c66e0();
  }
  func_0x00010777f92c();
  return;
}



/* Entry: 10777f8b8; end: 10777f8df;  */

long FUN_10777f8b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10777fd74; end: 10777fdaf;  */

void FUN_10777fd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  func_0x00010777fdb0(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 10778039c; end: 10778049b;  */

/* WARNING: Possible PIC construction at 0x000107298084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107780420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107298088) */
/* WARNING: Removing unreachable block (ram,0x000107780424) */

undefined1  [16] FUN_10778039c(byte *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  undefined8 extraout_x8_01;
  byte *extraout_x8_02;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 ***pppuVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [56];
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined1 uStack_170;
  undefined1 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  byte abStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  pbVar4 = abStack_f0;
  pppuVar10 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000107781398();
  if (*(int *)(param_2 + 0x70) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
    func_0x000107781384(extraout_x8);
    pbVar4 = param_2;
    pbVar1 = unaff_x20;
    if ((bool)in_ZR) {
      auVar12._8_8_ = param_3;
      auVar12._0_8_ = param_2;
      return auVar12;
    }
  }
  else {
    bVar2 = *(int *)(param_2 + 0x70) == 1;
    if (!bVar2) {
      auStack_b8[0] = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_1e8 = (undefined *)0x107780424;
      pbVar1 = abStack_f0;
      pbVar8 = (byte *)0x1138369c0;
      goto code_r0x0001000df598;
    }
    pbVar4 = param_2;
    func_0x000107781384(extraout_x8);
    pbVar1 = param_2;
    if (bVar2) {
      pppuVar10 = (undefined8 ***)&stack0xfffffffffffffff0;
      puStack_1e8 = &UNK_107298088;
      pbVar1 = &stack0xfffffffffffffff0;
      pbVar4 = param_1;
      pbVar8 = param_2 + 8;
      param_1 = unaff_x19;
      param_2 = unaff_x20;
      goto code_r0x0001000df598;
    }
  }
  param_2 = pbVar1;
  ___stack_chk_fail();
  func_0x000104c2f714(abStack_f0);
  puVar5 = (undefined8 *)auStack_b8;
  func_0x00010724b3d8();
  func_0x0001077813bc();
  puStack_f8 = &UNK_10778049c;
  ppuStack_100 = pppuVar10;
  func_0x000107781398();
  lStack_128 = extraout_x8_00;
  if (*(int *)(puVar5 + 7) == 0) {
    param_1 = (byte *)0x0;
    uVar9 = 0;
  }
  else {
    if (*(int *)(puVar5 + 7) == 1) {
      param_1 = (byte *)*puVar5;
    }
    else {
      uStack_170 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      param_1 = (byte *)*param_4;
      func_0x00010778104c();
      func_0x0001077813f8();
    }
    uVar9 = 1;
  }
  uVar3 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128;
  if ((bool)uVar3) {
    auVar13._8_8_ = uVar9;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  puStack_178 = &UNK_107780540;
  pppuVar10 = &ppuStack_180;
  pbStack_190 = param_2;
  pbStack_188 = pbVar4;
  ppuStack_180 = &ppuStack_100;
  func_0x000107781398();
  uStack_198 = extraout_x8_01;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar6 = 0;
    param_1 = pbVar4;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x30) == 1;
    if ((bool)uVar3) {
      param_1 = (byte *)(ulong)*param_1;
    }
    else {
      auStack_1e0[0] = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      func_0x000107280464();
      func_0x0001077813f8();
    }
    uVar6 = (ulong)((uint)param_1 | 0x100);
  }
  func_0x000107781384(uStack_198);
  if ((bool)uVar3) {
    auVar14._8_8_ = param_3;
    auVar14._0_8_ = uVar6;
    return auVar14;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  puStack_1e8 = &UNK_1077805c4;
  pbVar7 = *(byte **)(uVar6 + 0x150);
  (**(code **)(*(long *)pbVar7 + 0x18))();
  pbVar1 = auStack_1e0;
  pbVar4 = extraout_x8_02;
  pbVar8 = (byte *)(uVar6 + 0x18);
  if (*(char *)(uVar6 + 0x50) == '\0') {
    pbVar1 = auStack_1e0;
    pbVar8 = pbVar7;
  }
code_r0x0001000df598:
  *(byte **)(pbVar1 + -0x20) = param_2;
  *(byte **)(pbVar1 + -0x18) = param_1;
  *(undefined8 ****)(pbVar1 + -0x10) = pppuVar10;
  *(undefined **)(pbVar1 + -8) = puStack_1e8;
  func_0x0001000d03a8(pbVar4,pbVar8);
  func_0x000104c2feb0();
  param_1[0x30] = 0xff;
  param_1[0x31] = 0xff;
  param_1[0x32] = 0xff;
  param_1[0x33] = 0xff;
  param_1[0x34] = 0xff;
  param_1[0x35] = 0xff;
  param_1[0x36] = 0xff;
  param_1[0x37] = 0xff;
  func_0x000104c2fe38();
  *(byte **)(param_1 + 0x30) = param_2;
  auVar11._8_8_ = pbVar8;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 107780ba8; end: 107780bcb;  */

byte FUN_107780ba8(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    bVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x40) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 107780e28; end: 107780e3b;  */

void FUN_107780e28(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    func_0x000107780e58();
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  return;
}



/* Entry: 10778100c; end: 107781033;  */

long FUN_10778100c(long param_1)

{
  func_0x000107781034(param_1 + 8);
  return param_1;
}



/* Entry: 1077811cc; end: 107781203;  */

long FUN_1077811cc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6d30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077812c8; end: 107781303;  */

long FUN_1077812c8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x0001077813c4();
  func_0x000107781460();
  func_0x0001077813f8();
  func_0x000107781384(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6e00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10778196c; end: 107781abb;  */

long FUN_10778196c(long *param_1)

{
  for (; *(int *)(param_1 + 0x16) != 0; param_1 = (long *)*param_1) {
    func_0x000107781b48();
  }
  return (long)(param_1 + 7);
}



/* Entry: 107781c84; end: 107781d2f;  */

undefined8 FUN_107781c84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001074e3d18(param_1,&uStack_30);
  func_0x0001073ad4c4(&uStack_30);
  return param_1;
}



/* Entry: 1077823b4; end: 107782567;  */

void FUN_1077823b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [120];
  undefined4 auStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_f8 [120];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107783740();
  uStack_48 = extraout_x8;
  func_0x000107782568();
  func_0x000107267ef0();
  uVar2 = param_5 == 0;
  puVar1 = &UNK_10f4273f6;
  if ((bool)uVar2) {
    puVar1 = &UNK_10f4273ef;
  }
  func_0x000100060964(auStack_80,puVar1);
  puVar4 = auStack_80;
  lVar3 = param_2;
  func_0x000107297a44(param_2,puVar4);
  func_0x000100060964(auStack_138,param_4);
  func_0x000107268350(auStack_1b0,param_3);
  func_0x000107386324(auStack_f8,auStack_138,auStack_1b0);
  func_0x000104c3323c(auStack_1b0);
  func_0x000104c2f714(auStack_138);
  if (lVar3 == 0) {
    func_0x00010778331c(auStack_1b0,auStack_f8);
    func_0x000107268084(&uStack_1c0,auStack_1b0,1);
    auStack_138[0] = 1;
    uStack_128 = uStack_1b8;
    uStack_130 = uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x000107269164(param_2,auStack_80);
    func_0x000104c3302c();
    func_0x000104c3323c(auStack_138);
    func_0x0001077838fc();
    func_0x0001072684c8(auStack_1b0);
  }
  else {
    func_0x000107782568(puVar4 + 0x38);
    func_0x00010778258c(auStack_1b0);
  }
  func_0x000104c32ad0(auStack_f8);
  func_0x000104c2f714(auStack_80);
  func_0x00010778372c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_138);
  func_0x0001077838fc();
  func_0x0001072684c8(auStack_1b0);
  func_0x000104c32ad0(auStack_f8);
  func_0x000104c2f714(auStack_80);
  do {
    func_0x0001077837a0();
  } while( true );
}



/* Entry: 1077831d0; end: 107783253;  */

void FUN_1077831d0(undefined8 *param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010724ef84(auStack_50,*(long *)(param_2 + 8) + 8);
  func_0x0001004c3cd0(&uStack_38,&UNK_10f4273fc,auStack_50);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 107783398; end: 1077833db;  */

void FUN_107783398(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x000107783840((&PTR_DAT_1109d6f00)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1077834bc; end: 1077834ff;  */

void FUN_1077834bc(long param_1)

{
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    func_0x000107783840((&PTR_DAT_1109d6f20)[*(uint *)(param_1 + 0x20)]);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 10778364c; end: 107783673;  */

void FUN_10778364c(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  func_0x00010778369c(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107783ad4; end: 107783bff;  */

undefined8 * FUN_107783ad4(undefined8 *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [15];
  int iStack_30;
  long lStack_28;
  
  puVar2 = &uStack_f0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 3);
    goto LAB_107783bac;
  }
  puVar1 = param_1;
  func_0x0001077832e0();
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x000107753050(auStack_a8,*puVar1,param_2,&uStack_f0);
  func_0x00010724b3d8();
  if (iStack_30 == 1) {
    puVar2 = auStack_a8;
    func_0x0001073405dc();
    if (*(int *)(puVar2 + 0xd) != 3) goto LAB_107783ba4;
    puVar2 = auStack_a8;
    func_0x0001073405dc();
    func_0x000107573ddc();
    param_2 = &UNK_10f427436;
    puVar1 = puVar2;
    func_0x000107278484();
    if (((ulong)puVar1 & 1) == 0) {
      param_2 = &UNK_10f42743b;
      func_0x000107278484();
      if (((ulong)puVar2 & 1) == 0) goto LAB_107783ba4;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      puVar2 = puVar1;
    }
  }
  else {
LAB_107783ba4:
    uVar3 = (uint)*(byte *)(param_1 + 3);
  }
  func_0x000107783c38();
  param_1 = puVar2;
LAB_107783bac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)(ulong)(uVar3 & 1);
  }
  ___stack_chk_fail();
  func_0x000107783c38();
  __Unwind_Resume();
  func_0x000107338c5c();
  *(undefined *)(param_1 + 3) = param_2[0x18];
  return param_1;
}



/* Entry: 107783e5c; end: 107783fab;  */

undefined8 * FUN_107783e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 auStack_1d0 [104];
  undefined1 auStack_168 [96];
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  func_0x000107786398();
  uStack_38 = extraout_x8;
  func_0x000107783d0c(&lStack_270,*(undefined8 *)(param_1 + 8));
  func_0x000107262f3c(lStack_270 + 8,param_2);
  func_0x00010778583c(&lStack_240);
  lVar1 = lStack_270;
  func_0x000107784a14(lStack_270 + 0x1d8,&lStack_240);
  func_0x000107784a4c(lVar1 + 0x248,auStack_1d0);
  func_0x000107784a7c(lVar1 + 0x2b0,auStack_168);
  func_0x000107784ab4(lVar1 + 0x310,auStack_108);
  func_0x000107784aec(&lStack_240);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_238 = uStack_268;
  lStack_240 = lStack_270;
  lStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  plVar4 = &lStack_240;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_240);
  func_0x0001073db32c(&uStack_250);
  *puVar2 = &PTR_DAT_1109d6fe0;
  puVar3 = &uStack_260;
  func_0x0001073db32c();
  *unaff_x19 = puVar2;
  func_0x000107786560();
  func_0x00010778634c(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_240);
  func_0x0001073db32c(&uStack_250);
  func_0x0001073db32c(&uStack_260);
  __ZdlPv(puVar2);
  func_0x000107786560();
  func_0x000107786550();
  func_0x000107786544();
  func_0x00010734936c(plVar4);
  if (*(int *)(puVar2 + 0x33) != 0) {
    func_0x000107786538();
    func_0x000107777bdc();
    func_0x0001077858cc(puVar3,puVar2 + 0x2d);
  }
  if (*(int *)(puVar2 + 0x3a) != 0) {
    func_0x000107786538();
    func_0x000107777bdc();
    func_0x0001077858cc(puVar3,puVar2 + 0x34);
  }
  puVar3[4] = puVar3[4] + -0x10;
  func_0x000107349610(*puVar3,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 107784988; end: 107784b27;  */

void FUN_107784988(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107783d0c(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x000107786560();
  return;
}



/* Entry: 107784ce8; end: 107784d2b;  */

/* WARNING: Possible PIC construction at 0x000107784d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784d08) */
/* WARNING: Removing unreachable block (ram,0x000107784d24) */
/* WARNING: Removing unreachable block (ram,0x000107784d1c) */

void FUN_107784ce8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  float *extraout_x8_01;
  undefined8 extraout_x8_02;
  float *extraout_x8_03;
  float *pfVar7;
  float *extraout_x8_04;
  float *extraout_x8_05;
  undefined4 *extraout_x8_06;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1e0 [8];
  float afStack_1d8 [2];
  double dStack_1d0;
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [80];
  long lStack_130;
  float *pfStack_128;
  undefined8 *****pppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float afStack_100 [8];
  double dStack_e0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [72];
  undefined1 *puVar2;
  
  func_0x000107786380();
  uStack_78 = 0x107784d08;
  ppppuStack_80 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x000107786398(auStack_68);
  afStack_100[0] = 0.0;
  afStack_100[1] = 0.0;
  afStack_100[2] = 0.0;
  afStack_100[3] = 0.0;
  afStack_100[4] = 0.0;
  afStack_100[5] = 0.0;
  uStack_a8 = extraout_x8;
  func_0x0001072ac134(afStack_100,2);
  for (lVar8 = 0; uVar3 = lVar8 == 8, !(bool)uVar3; lVar8 = lVar8 + 4) {
    dStack_e0 = (double)*(float *)(param_2 + lVar8);
    afStack_100[6] = 4.2039e-45;
    func_0x0001072aad1c(afStack_100,afStack_100 + 6);
    func_0x000104c3323c(afStack_100 + 6);
  }
  pfVar6 = afStack_100;
  func_0x000107327958(&uStack_110);
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_108;
  *(undefined8 *)(unaff_x19 + 2) = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x000104c33108(&uStack_110);
  pfVar4 = afStack_100;
  func_0x000107269124();
  func_0x00010778634c(uStack_a8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  pfVar5 = afStack_100;
  func_0x000107269124();
  func_0x000107786550();
  puVar2 = auStack_180;
  puStack_118 = &UNK_107784e0c;
  pppppppuVar9 = (undefined8 *******)&pppppuStack_120;
  lStack_130 = param_2;
  pfStack_128 = pfVar4;
  pppppuStack_120 = &ppppuStack_80;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar11 = &UNK_107784e48;
    __Unwind_Resume();
    pfVar4 = extraout_x8_01;
    if (pfVar5[0xc] == 0.0) {
code_r0x0001077863ac:
      pfVar4[0x10] = 0.0;
      pfVar4[0x11] = 0.0;
      pfVar4[10] = 0.0;
      pfVar4[0xb] = 0.0;
      pfVar4[8] = 0.0;
      pfVar4[9] = 0.0;
      pfVar4[0xe] = 0.0;
      pfVar4[0xf] = 0.0;
      pfVar4[0xc] = 0.0;
      pfVar4[0xd] = 0.0;
      pfVar4[2] = 0.0;
      pfVar4[3] = 0.0;
      pfVar4[0] = 0.0;
      pfVar4[1] = 0.0;
      pfVar4[6] = 0.0;
      pfVar4[7] = 0.0;
      pfVar4[4] = 0.0;
      pfVar4[5] = 0.0;
      *pfVar4 = 9.80909e-45;
      return;
    }
    uVar3 = pfVar5[0xc] == 1.4013e-45;
    pfVar7 = extraout_x8_01;
    if ((bool)uVar3) {
      puVar2 = auStack_1e0;
      puStack_188 = &UNK_107784e48;
      pfVar6 = extraout_x8_01;
      ppppppuStack_190 = pppppppuVar9;
      func_0x000107786418();
      dStack_1d0 = (double)*pfVar5;
      afStack_1d8[0] = 4.2039e-45;
      pfVar5 = afStack_1d8;
      uStack_198 = extraout_x8_02;
      func_0x000104c32a18();
      *(undefined1 *)(pfVar6 + 0x10) = 1;
      func_0x000107786500();
      func_0x00010778634c(uStack_198);
      if ((bool)uVar3) {
        return;
      }
      puVar11 = &UNK_107784ed0;
      ___stack_chk_fail();
      pfVar7 = extraout_x8_03;
      pppppppuVar9 = &ppppppuStack_190;
    }
    puVar1 = puVar2 + -0x70;
    *(long *)(puVar2 + -0x20) = param_2;
    *(undefined8 *)(puVar2 + -0x18) = extraout_x8_00;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar9;
    *(undefined **)(puVar2 + -8) = puVar11;
    puVar10 = puVar2 + -0x10;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      pcVar12 = (code *)&UNK_107784f0c;
      __Unwind_Resume();
      pfVar4 = extraout_x8_04;
      if (pfVar6[0x26] == 0.0) goto code_r0x0001077863ac;
      pfVar4 = pfVar6 + 2;
      uVar3 = pfVar6[0x26] == 1.4013e-45;
      pfVar6 = extraout_x8_04;
      if ((bool)uVar3) {
        puVar1 = puVar2 + -0xe0;
        *(long *)(puVar2 + -0x90) = param_2;
        *(float **)(puVar2 + -0x88) = pfVar7;
        *(undefined1 **)(puVar2 + -0x80) = puVar10;
        *(undefined **)(puVar2 + -0x78) = &UNK_107784f0c;
        puVar10 = puVar2 + -0x80;
        func_0x000107786380();
        func_0x00010775f12c(puVar2 + -0xd8);
        func_0x000107786470();
        func_0x00010778647c(1);
        func_0x000107786334();
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        pcVar12 = FUN_107784f80;
        __Unwind_Resume();
        pfVar5 = pfVar4;
        pfVar6 = extraout_x8_05;
      }
      *(long *)(puVar1 + -0x20) = param_2;
      *(float **)(puVar1 + -0x18) = pfVar7;
      *(undefined1 **)(puVar1 + -0x10) = puVar10;
      *(code **)(puVar1 + -8) = pcVar12;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(long *)(puVar1 + -0x90) = param_2;
        *(float **)(puVar1 + -0x88) = pfVar6;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x78) = &UNK_107784fbc;
        func_0x000107269c1c(puVar1 + -0xa0);
        if (*(char *)(pfVar5 + 2) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)pfVar5);
          func_0x000107785078(puVar1 + -0xc0);
        }
        if (*(char *)(pfVar5 + 6) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)(pfVar5 + 4));
          func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
        }
        uVar14 = *(undefined8 *)(puVar1 + -0x98);
        uVar13 = *(undefined8 *)(puVar1 + -0xa0);
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *extraout_x8_06 = 1;
        *(undefined8 *)(extraout_x8_06 + 4) = uVar14;
        *(undefined8 *)(extraout_x8_06 + 2) = uVar13;
        *(undefined8 *)(puVar1 + -0xd0) = 0;
        *(undefined8 *)(puVar1 + -200) = 0;
        func_0x000104c335c0(puVar1 + -0xd0);
        func_0x000104c335c0(puVar1 + -0xa0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107784f80; end: 107784fbb;  */

void FUN_107784f80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107269c1c(&uStack_a0);
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x0001077867e0(*param_1);
    func_0x000107785078(auStack_c0);
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    func_0x0001077867e0(param_1[2]);
    func_0x0001077850a0(auStack_c0,&uStack_a0,"delay",auStack_a8);
  }
  uVar2 = uStack_98;
  uVar1 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  *extraout_x8 = 1;
  *(undefined8 *)(extraout_x8 + 4) = uVar2;
  *(undefined8 *)(extraout_x8 + 2) = uVar1;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x000104c335c0(&uStack_d0);
  func_0x000104c335c0(&uStack_a0);
  return;
}



/* Entry: 107785170; end: 107785193;  */

void FUN_107785170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x000107785194(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10778527c; end: 107785297;  */

void FUN_10778527c(void)

{
  func_0x00010778675c();
  func_0x000107786694();
  return;
}



/* Entry: 10778549c; end: 107785513;  */

long FUN_10778549c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_40;
  
  func_0x000107786398();
  func_0x000107786750();
  lVar1 = lStack_40;
  func_0x00010778556c(lStack_40,param_2,param_3);
  *unaff_x19 = lStack_40 + 0x18;
  unaff_x19[1] = lStack_40;
  func_0x000107786668();
  func_0x00010778634c(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000107786668();
  func_0x000107786550();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x00010778553c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 107785624; end: 107785643;  */

void FUN_107785624(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d7158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107785914; end: 107785937;  */

void FUN_107785914(void)

{
  func_0x000107786790();
  func_0x000107786770();
  return;
}



/* Entry: 107785b28; end: 107785b9b;  */

undefined8 FUN_107785b28(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001074d2690(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 107785cec; end: 107785d0f;  */

void FUN_107785cec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107432d98(lVar1);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  return;
}



/* Entry: 107785dd0; end: 107785dfb;  */

void FUN_107785dd0(void)

{
  long unaff_x20;
  
  func_0x000107786544();
  func_0x000107432d98();
  func_0x0001077866f4();
  func_0x0001073dec2c();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107785f24; end: 107785f57;  */

void FUN_107785f24(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x38) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107786568();
  func_0x000107785f58();
  return;
}



/* Entry: 107786038; end: 107786083;  */

void FUN_107786038(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    func_0x000107786784(*(int *)(param_2 + 0x30) == iVar1,param_1);
    func_0x000107786518();
  }
  return;
}



/* Entry: 1077861c8; end: 1077861cf;  */

void FUN_1077861c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x90) == 1) {
    func_0x00010729e5f0(param_2,param_3);
    func_0x000107262f3c();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a969c(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x000107786568();
  func_0x000107786204();
  return;
}



/* Entry: 107786800; end: 107786813;  */

void FUN_107786800(void)

{
  func_0x000107786840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107786980; end: 107786997;  */

void FUN_107786980(void)

{
  func_0x000107786998();
  return;
}



/* Entry: 107786b34; end: 107786b63;  */

void FUN_107786b34(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 107786dfc; end: 107786dff;  */

void FUN_107786dfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d7408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107786f94; end: 107786fdb;  */

undefined8 * FUN_107786f94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107787068(&uStack_30);
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x0001073ad824(&uStack_30);
  return param_1;
}



/* Entry: 1077870e0; end: 1077870f7;  */

void FUN_1077870e0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001077870f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1077878d4; end: 107787c4b;  */

undefined8 * FUN_1077878d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long lStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  long lStack_1020;
  undefined8 uStack_1018;
  undefined1 auStack_fc0 [112];
  undefined1 auStack_f50 [104];
  undefined1 auStack_ee8 [96];
  undefined1 auStack_e88 [104];
  undefined1 auStack_e20 [104];
  undefined1 auStack_db8 [96];
  undefined1 auStack_d58 [96];
  undefined1 auStack_cf8 [96];
  undefined1 auStack_c98 [96];
  undefined1 auStack_c38 [104];
  undefined1 auStack_bd0 [96];
  undefined1 auStack_b70 [96];
  undefined1 auStack_b10 [96];
  undefined1 auStack_ab0 [96];
  undefined1 auStack_a50 [112];
  undefined1 auStack_9e0 [104];
  undefined1 auStack_978 [96];
  undefined1 auStack_918 [96];
  undefined1 auStack_8b8 [112];
  undefined1 auStack_848 [96];
  undefined1 auStack_7e8 [112];
  undefined1 auStack_778 [112];
  undefined1 auStack_708 [112];
  undefined1 auStack_698 [112];
  undefined1 auStack_628 [112];
  undefined1 auStack_5b8 [56];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined1 auStack_558 [96];
  undefined1 auStack_4f8 [112];
  undefined1 auStack_488 [104];
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [96];
  undefined1 auStack_340 [96];
  undefined1 auStack_2e0 [112];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [104];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [96];
  undefined1 auStack_a8 [120];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010778c620();
  func_0x0001077871f8(&lStack_1050,*(undefined8 *)(param_1 + 8));
  func_0x000107262f3c(lStack_1050 + 8,param_2);
  func_0x00010778b83c(&lStack_1020);
  lVar1 = lStack_1050;
  func_0x000107784a7c(lStack_1050 + 0x548,&lStack_1020);
  func_0x000107784a14(lVar1 + 0x5a8,auStack_fc0);
  func_0x000107784a4c(lVar1 + 0x618,auStack_f50);
  func_0x000107784a7c(lVar1 + 0x680,auStack_ee8);
  func_0x000107784a4c(lVar1 + 0x6e0,auStack_e88);
  func_0x000107784a4c(lVar1 + 0x748,auStack_e20);
  func_0x000107784a7c(lVar1 + 0x7b0,auStack_db8);
  func_0x000107784a7c(lVar1 + 0x810,auStack_d58);
  func_0x000107784a7c(lVar1 + 0x870,auStack_cf8);
  func_0x000107784a7c(lVar1 + 0x8d0,auStack_c98);
  func_0x000107784a4c(lVar1 + 0x930,auStack_c38);
  func_0x00010778adcc(lVar1 + 0x998,auStack_bd0);
  func_0x000107784a7c(lVar1 + 0x9f8,auStack_b70);
  func_0x000107784a7c(lVar1 + 0xa58,auStack_b10);
  func_0x000107784a7c(lVar1 + 0xab8,auStack_ab0);
  func_0x000107784a14(lVar1 + 0xb18,auStack_a50);
  func_0x000107784a4c(lVar1 + 0xb88,auStack_9e0);
  func_0x00010778adec(lVar1 + 0xbf0,auStack_978);
  func_0x00010778adcc(lVar1 + 0xc50,auStack_918);
  func_0x000107784a14(lVar1 + 0xcb0,auStack_8b8);
  func_0x000107784a7c(lVar1 + 0xd20,auStack_848);
  func_0x00010778ae0c(lVar1 + 0xd80,auStack_7e8);
  func_0x00010778ae0c(lVar1 + 0xdf0,auStack_778);
  func_0x00010778ae0c(lVar1 + 0xe60,auStack_708);
  func_0x00010778ae0c(lVar1 + 0xed0,auStack_698);
  func_0x00010778ae0c(lVar1 + 0xf40,auStack_628);
  func_0x00010748b3dc(lVar1 + 0xfb0,auStack_5b8);
  *(undefined8 *)(lVar1 + 0xff0) = uStack_578;
  *(undefined8 *)(lVar1 + 0xfe8) = uStack_580;
  *(undefined8 *)(lVar1 + 0x1000) = uStack_568;
  *(undefined8 *)(lVar1 + 0xff8) = uStack_570;
  *(undefined1 *)(lVar1 + 0x1008) = uStack_560;
  func_0x000107784a7c(lVar1 + 0x1010,auStack_558);
  func_0x00010778ae0c(lVar1 + 0x1070,auStack_4f8);
  func_0x000107784a4c(lVar1 + 0x10e0,auStack_488);
  func_0x00010778ae44(lVar1 + 0x1148,auStack_420);
  func_0x000107784a7c(lVar1 + 0x11c8,auStack_3a0);
  func_0x000107784a7c(lVar1 + 0x1228,auStack_340);
  func_0x00010778ae0c(lVar1 + 0x1288,auStack_2e0);
  func_0x00010778ae44(lVar1 + 0x12f8,auStack_270);
  func_0x000107784a4c(lVar1 + 0x1378,auStack_1f0);
  func_0x00010778ae44(lVar1 + 0x13e0,auStack_188);
  func_0x000107784a7c(lVar1 + 0x1460,auStack_108);
  func_0x00010778ae0c(lVar1 + 0x14c0,auStack_a8);
  func_0x00010778ae7c(&lStack_1020);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_1018 = uStack_1048;
  lStack_1020 = lStack_1050;
  lStack_1050 = 0;
  uStack_1048 = 0;
  uStack_1040 = 0;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1028 = 0;
  plVar4 = &lStack_1020;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_1020);
  func_0x0001073db868(&uStack_1030);
  *puVar2 = &PTR_DAT_1109d7560;
  puVar3 = &uStack_1040;
  func_0x0001073db868();
  *unaff_x19 = puVar2;
  func_0x00010778c86c();
  func_0x00010778c564();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_1020);
  func_0x0001073db868(&uStack_1030);
  func_0x0001073db868(&uStack_1040);
  __ZdlPv(puVar2);
  func_0x00010778c86c();
  func_0x00010778c858();
  func_0x00010778c87c();
  func_0x00010734936c(plVar4);
  if (*(int *)(puVar2 + 0x33) != 0) {
    func_0x00010778c5e4(&DAT_10f428372);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x42) != 0) {
    func_0x00010778c5e4(&DAT_10f427b79);
    func_0x00010778c8f0();
  }
  if (*(int *)(puVar2 + 0x49) != 0) {
    func_0x00010778c5e4(&DAT_10f427c8d);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x50) != 0) {
    func_0x00010778c5e4(&DAT_10f42818e);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x57) != 0) {
    func_0x00010778c5e4(&DAT_10f427f1c);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x5e) != 0) {
    func_0x00010778c5e4(&DAT_10f427859);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x65) != 0) {
    func_0x00010778c5e4(&DAT_10f427abc);
    func_0x00010778c874();
  }
  if (*(int *)(puVar2 + 0x74) != 0) {
    func_0x00010778c5e4(&DAT_10f4278a2);
    func_0x00010778c8f0();
  }
  if (*(int *)(puVar2 + 0x83) != 0) {
    func_0x00010778c5e4(&DAT_10f427fad);
    func_0x00010778c8f0();
  }
  if (*(int *)(puVar2 + 0x92) != 0) {
    func_0x00010778c5e4(&DAT_10f427a32);
    func_0x00010778c8f0();
  }
  if (*(int *)(puVar2 + 0xa1) != 0) {
    func_0x00010778c5e4(&DAT_10f428275);
    func_0x00010778c8f0();
  }
  if (*(int *)(puVar2 + 0xa8) != 0) {
    func_0x00010778c5e4(&DAT_10f428116);
    func_0x00010778c874();
  }
  puVar3[4] = puVar3[4] + -0x10;
  func_0x000107349610(*puVar3,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 10778ad40; end: 10778afcf;  */

void FUN_10778ad40(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077871f8(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x00010778c86c();
  return;
}



/* Entry: 10778b208; end: 10778b237;  */

/* WARNING: Possible PIC construction at 0x00010778b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b25c) */
/* WARNING: Removing unreachable block (ram,0x00010778b27c) */
/* WARNING: Removing unreachable block (ram,0x00010778b274) */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined8 * FUN_10778b208(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  undefined1 **unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined *puVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  double dStack_e0;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = 0;
    puVar4 = param_2;
    if (*(int *)(param_2 + 8) == 1) {
      func_0x00010778c620();
      puStack_78 = &UNK_10778b25c;
      unaff_x29 = &puStack_80;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x00010778c620(auStack_68);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puVar3 = &uStack_100;
      func_0x00010778ca0c();
      for (lVar5 = 0; uVar2 = lVar5 == 0x10, !(bool)uVar2; lVar5 = lVar5 + 4) {
        dStack_e0 = (double)*(float *)((long)param_2 + lVar5);
        uStack_e8 = 3;
        func_0x00010778ca48();
        func_0x00010778c8e8();
      }
      func_0x00010778ca28();
      *(undefined4 *)unaff_x19 = 0;
      unaff_x19[2] = uStack_108;
      unaff_x19[1] = uStack_110;
      func_0x00010778c8d4();
      func_0x00010778c9a8();
      func_0x00010778c564();
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      param_3 = puVar3;
      func_0x00010778c9a8();
      unaff_x30 = &LAB_10778b328;
      func_0x00010778c858();
      register0x00000008 = (BADSPACEBASE *)&uStack_110;
      unaff_x19 = puVar3;
      unaff_x20 = param_2;
    }
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      puVar7 = &UNK_10778b36c;
      __Unwind_Resume();
      param_2 = param_3;
      param_1 = extraout_x8;
      if (*(int *)(param_3 + 0xe) == 0) goto LAB_10778c6f0;
      uVar2 = *(int *)(param_3 + 0xe) == 1;
      if ((bool)uVar2) {
        *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x80) = puVar6;
        *(undefined **)((long)register0x00000008 + -0x78) = &UNK_10778b36c;
        func_0x00010778c620(param_3 + 1);
        *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x8_00;
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x140);
        puVar4 = (undefined8 *)((long)register0x00000008 + -0x140);
        *(undefined8 **)((long)register0x00000008 + -0x100) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0xf8) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0x80);
        *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10778b3c0;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xf0);
        func_0x00010778c620((undefined1 *)((long)register0x00000008 + -0xd8));
        *(undefined8 *)((long)register0x00000008 + -0x108) = extraout_x8_01;
        func_0x000104c2fe00((undefined1 *)((long)register0x00000008 + -0x140));
        func_0x000104c33004(unaff_x19,(undefined1 *)((long)register0x00000008 + -0x140));
        func_0x000104c2f714();
        func_0x00010778c57c(*(undefined8 *)((long)register0x00000008 + -0x108));
        if ((bool)uVar2) {
          return puVar4;
        }
        puVar7 = &UNK_10778b440;
        ___stack_chk_fail();
      }
      *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar6;
      *(undefined **)(puVar1 + -8) = puVar7;
      func_0x00010778c620();
      func_0x00010778c7e0();
      func_0x00010778c980();
      func_0x00010778c758();
      func_0x00010778c738(2);
      func_0x00010778c57c(*(undefined8 *)(puVar1 + -0x28));
      param_3 = puVar4;
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(undefined8 **)(puVar1 + -0x90) = unaff_x20;
        *(undefined8 **)(puVar1 + -0x88) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x78) = FUN_10778b484;
        if (*(char *)(puVar4 + 7) == '\x01') {
          func_0x00010748aaa4(puVar4);
        }
        return puVar4;
      }
    }
    return param_3;
  }
LAB_10778c6f0:
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)param_1 = 7;
  return param_2;
}



/* Entry: 10778b484; end: 10778b513;  */

long FUN_10778b484(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010748aaa4(param_1);
  }
  return param_1;
}



/* Entry: 10778b664; end: 10778b673;  */

void FUN_10778b664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010778b66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10778bc40; end: 10778bc63;  */

void FUN_10778bc40(void)

{
  func_0x00010778ca60();
  func_0x00010778c970();
  return;
}



/* Entry: 10778be7c; end: 10778bedb;  */

void FUN_10778be7c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x70) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_DAT_1109d7ec8)[uVar1])(&puStack_18,param_1 + 8,param_2 + 8);
  }
  return;
}



/* Entry: 10778c010; end: 10778c017;  */

void FUN_10778c010(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  puStack_18 = param_3;
  func_0x00010778c050(&lStack_20);
  return;
}



/* Entry: 10778c100; end: 10778c12b;  */

void FUN_10778c100(void)

{
  long unaff_x20;
  
  func_0x00010778c87c();
  func_0x00010748aaa4();
  func_0x00010778c9d0();
  func_0x00010748d780();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10778c348; end: 10778c393;  */

void FUN_10778c348(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != -1 && *(int *)(param_2 + 0x50) == iVar1) {
    func_0x00010778cb28(*(int *)(param_2 + 0x50) == iVar1,param_1);
    func_0x00010778c824();
  }
  return;
}



/* Entry: 10778cb48; end: 10778cf83;  */

uint FUN_10778cb48(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010778d284();
  uVar4 = param_1 + 0xd0;
  func_0x00010778cf84(uVar4,param_2 + 0xd0);
  if ((uVar4 & 1) == 0) {
    lVar5 = unaff_x20 + 0x140;
    func_0x000107781d84(lVar5,unaff_x19 + 0x140);
    if ((int)lVar5 != 0) {
      lVar5 = unaff_x20 + 0x168;
      func_0x000107785b50(lVar5,unaff_x19 + 0x168);
      if ((int)lVar5 != 0) {
        lVar5 = unaff_x20 + 0x1a0;
        FUN_10778be7c(lVar5,unaff_x19 + 0x1a0);
        if ((int)lVar5 != 0) {
          lVar5 = unaff_x20 + 0x218;
          func_0x000107785b50(lVar5,unaff_x19 + 0x218);
          if ((int)lVar5 != 0) {
            lVar5 = unaff_x20 + 0x250;
            func_0x000107785b50(lVar5,unaff_x19 + 0x250);
            if ((int)lVar5 != 0) {
              lVar5 = unaff_x20 + 0x288;
              func_0x000107785b50(lVar5,unaff_x19 + 0x288);
              if ((int)lVar5 != 0) {
                lVar5 = unaff_x20 + 0x2c0;
                func_0x000107785b50(lVar5,unaff_x19 + 0x2c0);
                if ((int)lVar5 != 0) {
                  lVar5 = unaff_x20 + 0x2f8;
                  func_0x000107785b50(lVar5,unaff_x19 + 0x2f8);
                  if ((int)lVar5 != 0) {
                    lVar5 = unaff_x20 + 0x330;
                    FUN_10778be7c(lVar5,unaff_x19 + 0x330);
                    if ((int)lVar5 != 0) {
                      lVar5 = unaff_x20 + 0x3a8;
                      FUN_10778be7c(lVar5,unaff_x19 + 0x3a8);
                      if ((int)lVar5 != 0) {
                        lVar5 = unaff_x20 + 0x420;
                        FUN_10778be7c(lVar5,unaff_x19 + 0x420);
                        if ((int)lVar5 != 0) {
                          lVar5 = unaff_x20 + 0x498;
                          FUN_10778be7c(lVar5,unaff_x19 + 0x498);
                          if ((int)lVar5 != 0) {
                            lVar5 = unaff_x20 + 0x510;
                            func_0x000107785b50(lVar5,unaff_x19 + 0x510);
                            if ((int)lVar5 != 0) {
                              lVar5 = unaff_x20 + 0x548;
                              func_0x00010778d01c(lVar5,unaff_x19 + 0x548);
                              lVar6 = unaff_x20 + 0x5a8;
                              func_0x00010778d05c(lVar6,unaff_x19 + 0x5a8);
                              func_0x00010778d09c(unaff_x20 + 0x618,unaff_x19 + 0x618);
                              func_0x00010778d01c(unaff_x20 + 0x680,unaff_x19 + 0x680);
                              func_0x00010778d09c(unaff_x20 + 0x6e0,unaff_x19 + 0x6e0);
                              func_0x00010778d09c(unaff_x20 + 0x748,unaff_x19 + 0x748);
                              func_0x00010778d01c(unaff_x20 + 0x7b0,unaff_x19 + 0x7b0);
                              func_0x00010778d01c(unaff_x20 + 0x810,unaff_x19 + 0x810);
                              func_0x00010778d01c(unaff_x20 + 0x870,unaff_x19 + 0x870);
                              func_0x00010778d01c(unaff_x20 + 0x8d0,unaff_x19 + 0x8d0);
                              func_0x00010778d09c(unaff_x20 + 0x930,unaff_x19 + 0x930);
                              func_0x00010778d0dc(unaff_x20 + 0x998,unaff_x19 + 0x998);
                              func_0x00010778d01c(unaff_x20 + 0x9f8,unaff_x19 + 0x9f8);
                              func_0x00010778d01c(unaff_x20 + 0xa58,unaff_x19 + 0xa58);
                              func_0x00010778d01c(unaff_x20 + 0xab8,unaff_x19 + 0xab8);
                              func_0x00010778d05c(unaff_x20 + 0xb18,unaff_x19 + 0xb18);
                              lVar7 = unaff_x20 + 0xb88;
                              func_0x00010778d09c(lVar7,unaff_x19 + 0xb88);
                              lVar8 = unaff_x20 + 0xbf0;
                              func_0x00010778d11c(lVar8,unaff_x19 + 0xbf0);
                              lVar9 = unaff_x20 + 0xc50;
                              func_0x00010778d0dc(lVar9,unaff_x19 + 0xc50);
                              lVar10 = unaff_x20 + 0xcb0;
                              func_0x00010778d05c(lVar10,unaff_x19 + 0xcb0);
                              lVar11 = unaff_x20 + 0xd20;
                              func_0x00010778d01c(lVar11,unaff_x19 + 0xd20);
                              lVar12 = unaff_x20 + 0xd80;
                              func_0x00010778d15c(lVar12,unaff_x19 + 0xd80);
                              lVar13 = unaff_x20 + 0xdf0;
                              func_0x00010778d15c(lVar13,unaff_x19 + 0xdf0);
                              lVar14 = unaff_x20 + 0xe60;
                              func_0x00010778d15c(lVar14,unaff_x19 + 0xe60);
                              lVar15 = unaff_x20 + 0xed0;
                              func_0x00010778d15c(lVar15,unaff_x19 + 0xed0);
                              lVar16 = unaff_x20 + 0xf40;
                              func_0x00010778d15c(lVar16,unaff_x19 + 0xf40);
                              uVar4 = unaff_x20 + 0xfb0;
                              func_0x00010778c198(uVar4,unaff_x19 + 0xfb0);
                              if ((uVar4 & 1) == 0) {
                                uVar4 = unaff_x20 + 0xfb0;
                                func_0x00010748e8a4();
                                if ((uVar4 & 1) == 0) {
                                  lVar17 = unaff_x19 + 0xfb0;
                                  func_0x00010748e8a4(lVar17);
                                  uVar18 = (uint)lVar17;
                                }
                                else {
                                  uVar18 = 1;
                                }
                              }
                              else {
                                uVar18 = 0;
                              }
                              func_0x00010778d290((uint)lVar5 | (uint)lVar6);
                              func_0x00010778d290();
                              func_0x00010778d290();
                              func_0x00010778d290();
                              uVar1 = (uint)lVar13 | (uint)lVar14 | (uint)lVar15 | (uint)lVar16 |
                                      uVar18;
                              func_0x00010778d264(0x1010);
                              uVar1 = uVar1 | uVar18;
                              func_0x00010778d270(0x1070);
                              func_0x00010778d15c();
                              uVar1 = uVar1 | uVar18;
                              func_0x00010778d270(0x10e0);
                              func_0x00010778d09c();
                              uVar2 = uVar18;
                              func_0x00010778d270(0x1148);
                              func_0x00010778d1a4();
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d264(0x11c8);
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d264(0x1228);
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d270(0x1288);
                              func_0x00010778d15c();
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d270(0x12f8);
                              func_0x00010778d1a4();
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d270(0x1378);
                              func_0x00010778d09c();
                              uVar18 = uVar18 | uVar2;
                              func_0x00010778d270(0x13e0);
                              func_0x00010778d1a4();
                              uVar3 = uVar2;
                              func_0x00010778d264(0x1460);
                              uVar2 = uVar2 | uVar3;
                              func_0x00010778d270(0x14c0);
                              func_0x00010778d15c();
                              uVar18 = extraout_w8 |
                                       (uint)lVar7 | (uint)lVar8 | (uint)lVar9 | (uint)lVar10 |
                                       (uint)lVar11 | (uint)lVar12 | uVar1 | uVar18 | uVar2 | uVar3;
                              goto LAB_10778ce08;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar18 = 1;
LAB_10778ce08:
  return uVar18 & 1;
}



/* Entry: 10778d29c; end: 10778d2ff;  */

undefined8 * FUN_10778d29c(undefined8 *param_1)

{
  undefined1 auStack_40 [32];
  
  func_0x00010778d44c();
  func_0x0001073db868(auStack_40);
  *param_1 = &PTR_DAT_1109d8020;
  _bzero(param_1 + 5,0x155);
  _bzero(param_1 + 0x30,0x92);
  _bzero(param_1 + 0x43,0x150);
  return param_1;
}



/* Entry: 10778d524; end: 10778d527;  */

undefined8 * FUN_10778d524(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10778df50; end: 10778ebd3;  */

/* WARNING: Possible PIC construction at 0x00010778df94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778df98) */
/* WARNING: Removing unreachable block (ram,0x00010778dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010778dfbc) */
/* WARNING: Removing unreachable block (ram,0x00010778e068) */
/* WARNING: Removing unreachable block (ram,0x00010778e074) */
/* WARNING: Removing unreachable block (ram,0x00010778e684) */
/* WARNING: Removing unreachable block (ram,0x00010778e68c) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010778e088) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e9d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e094) */
/* WARNING: Removing unreachable block (ram,0x00010778e6e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e700) */
/* WARNING: Removing unreachable block (ram,0x00010778e9e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e708) */
/* WARNING: Removing unreachable block (ram,0x00010778e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e09c) */
/* WARNING: Removing unreachable block (ram,0x00010778e0ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e0b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0bc) */
/* WARNING: Removing unreachable block (ram,0x00010778e9c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9fc) */
/* WARNING: Removing unreachable block (ram,0x00010778ea00) */
/* WARNING: Removing unreachable block (ram,0x00010778dfd4) */
/* WARNING: Removing unreachable block (ram,0x00010778e044) */
/* WARNING: Removing unreachable block (ram,0x00010778e04c) */
/* WARNING: Removing unreachable block (ram,0x00010778e060) */
/* WARNING: Removing unreachable block (ram,0x00010778dff0) */
/* WARNING: Removing unreachable block (ram,0x00010778e120) */
/* WARNING: Removing unreachable block (ram,0x00010778e134) */
/* WARNING: Removing unreachable block (ram,0x00010778e13c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e144) */
/* WARNING: Removing unreachable block (ram,0x00010778e7e8) */
/* WARNING: Removing unreachable block (ram,0x00010778dff8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e100) */
/* WARNING: Removing unreachable block (ram,0x00010778e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e000) */
/* WARNING: Removing unreachable block (ram,0x00010778e164) */
/* WARNING: Removing unreachable block (ram,0x00010778e17c) */
/* WARNING: Removing unreachable block (ram,0x00010778e194) */
/* WARNING: Removing unreachable block (ram,0x00010778e1fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e204) */
/* WARNING: Removing unreachable block (ram,0x00010778e218) */
/* WARNING: Removing unreachable block (ram,0x00010778e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e220) */
/* WARNING: Removing unreachable block (ram,0x00010778e234) */
/* WARNING: Removing unreachable block (ram,0x00010778e23c) */
/* WARNING: Removing unreachable block (ram,0x00010778e860) */
/* WARNING: Removing unreachable block (ram,0x00010778e244) */
/* WARNING: Removing unreachable block (ram,0x00010778e86c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e264) */
/* WARNING: Removing unreachable block (ram,0x00010778e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e360) */
/* WARNING: Removing unreachable block (ram,0x00010778e368) */
/* WARNING: Removing unreachable block (ram,0x00010778e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e30c) */
/* WARNING: Removing unreachable block (ram,0x00010778e314) */
/* WARNING: Removing unreachable block (ram,0x00010778e728) */
/* WARNING: Removing unreachable block (ram,0x00010778e31c) */
/* WARNING: Removing unreachable block (ram,0x00010778e734) */
/* WARNING: Removing unreachable block (ram,0x00010778e278) */
/* WARNING: Removing unreachable block (ram,0x00010778e280) */
/* WARNING: Removing unreachable block (ram,0x00010778e33c) */
/* WARNING: Removing unreachable block (ram,0x00010778e344) */
/* WARNING: Removing unreachable block (ram,0x00010778e358) */
/* WARNING: Removing unreachable block (ram,0x00010778e294) */
/* WARNING: Removing unreachable block (ram,0x00010778e378) */
/* WARNING: Removing unreachable block (ram,0x00010778e38c) */
/* WARNING: Removing unreachable block (ram,0x00010778e394) */
/* WARNING: Removing unreachable block (ram,0x00010778e828) */
/* WARNING: Removing unreachable block (ram,0x00010778e39c) */
/* WARNING: Removing unreachable block (ram,0x00010778e830) */
/* WARNING: Removing unreachable block (ram,0x00010778e29c) */
/* WARNING: Removing unreachable block (ram,0x00010778e3b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e600) */
/* WARNING: Removing unreachable block (ram,0x00010778e614) */
/* WARNING: Removing unreachable block (ram,0x00010778e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e4d8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010778e764) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e76c) */
/* WARNING: Removing unreachable block (ram,0x00010778e774) */
/* WARNING: Removing unreachable block (ram,0x00010778e778) */
/* WARNING: Removing unreachable block (ram,0x00010778e3cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e450) */
/* WARNING: Removing unreachable block (ram,0x00010778e5d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e5dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e5e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e46c) */
/* WARNING: Removing unreachable block (ram,0x00010778e480) */
/* WARNING: Removing unreachable block (ram,0x00010778e488) */
/* WARNING: Removing unreachable block (ram,0x00010778e740) */
/* WARNING: Removing unreachable block (ram,0x00010778e490) */
/* WARNING: Removing unreachable block (ram,0x00010778e74c) */
/* WARNING: Removing unreachable block (ram,0x00010778e754) */
/* WARNING: Removing unreachable block (ram,0x00010778e758) */
/* WARNING: Removing unreachable block (ram,0x00010778e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e504) */
/* WARNING: Removing unreachable block (ram,0x00010778e61c) */
/* WARNING: Removing unreachable block (ram,0x00010778e624) */
/* WARNING: Removing unreachable block (ram,0x00010778e638) */
/* WARNING: Removing unreachable block (ram,0x00010778e520) */
/* WARNING: Removing unreachable block (ram,0x00010778e534) */
/* WARNING: Removing unreachable block (ram,0x00010778e53c) */
/* WARNING: Removing unreachable block (ram,0x00010778e784) */
/* WARNING: Removing unreachable block (ram,0x00010778e544) */
/* WARNING: Removing unreachable block (ram,0x00010778e78c) */
/* WARNING: Removing unreachable block (ram,0x00010778e794) */
/* WARNING: Removing unreachable block (ram,0x00010778e798) */
/* WARNING: Removing unreachable block (ram,0x00010778e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e560) */
/* WARNING: Removing unreachable block (ram,0x00010778e664) */
/* WARNING: Removing unreachable block (ram,0x00010778e584) */
/* WARNING: Removing unreachable block (ram,0x00010778e590) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea58) */
/* WARNING: Removing unreachable block (ram,0x00010778e900) */
/* WARNING: Removing unreachable block (ram,0x00010778e974) */
/* WARNING: Removing unreachable block (ram,0x00010778e97c) */
/* WARNING: Removing unreachable block (ram,0x00010778eaa8) */
/* WARNING: Removing unreachable block (ram,0x00010778e984) */
/* WARNING: Removing unreachable block (ram,0x00010778e940) */
/* WARNING: Removing unreachable block (ram,0x00010778e948) */
/* WARNING: Removing unreachable block (ram,0x00010778ea8c) */
/* WARNING: Removing unreachable block (ram,0x00010778e950) */
/* WARNING: Removing unreachable block (ram,0x00010778e884) */
/* WARNING: Removing unreachable block (ram,0x00010778e88c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea34) */
/* WARNING: Removing unreachable block (ram,0x00010778e894) */
/* WARNING: Removing unreachable block (ram,0x00010778e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8d4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010778e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea40) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e914) */
/* WARNING: Removing unreachable block (ram,0x00010778e91c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea78) */
/* WARNING: Removing unreachable block (ram,0x00010778e924) */
/* WARNING: Removing unreachable block (ram,0x00010778e5a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea64) */
/* WARNING: Removing unreachable block (ram,0x00010778ea9c) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e968) */
/* WARNING: Removing unreachable block (ram,0x00010778e994) */
/* WARNING: Removing unreachable block (ram,0x00010778e9a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e640) */
/* WARNING: Removing unreachable block (ram,0x00010778e648) */
/* WARNING: Removing unreachable block (ram,0x00010778e65c) */
/* WARNING: Removing unreachable block (ram,0x00010778e410) */
/* WARNING: Removing unreachable block (ram,0x00010778e424) */
/* WARNING: Removing unreachable block (ram,0x00010778e42c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e434) */
/* WARNING: Removing unreachable block (ram,0x00010778e7ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e2b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e814) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e81c) */
/* WARNING: Removing unreachable block (ram,0x00010778e838) */
/* WARNING: Removing unreachable block (ram,0x00010778e83c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e1cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e848) */
/* WARNING: Removing unreachable block (ram,0x00010778e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e854) */
/* WARNING: Removing unreachable block (ram,0x00010778e874) */
/* WARNING: Removing unreachable block (ram,0x00010778e878) */
/* WARNING: Removing unreachable block (ram,0x00010778e004) */
/* WARNING: Removing unreachable block (ram,0x00010778e018) */
/* WARNING: Removing unreachable block (ram,0x00010778e020) */
/* WARNING: Removing unreachable block (ram,0x00010778e7f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e028) */
/* WARNING: Removing unreachable block (ram,0x00010778e7fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e804) */
/* WARNING: Removing unreachable block (ram,0x00010778e808) */
/* WARNING: Removing unreachable block (ram,0x00010778ea08) */
/* WARNING: Removing unreachable block (ram,0x00010778ea0c) */
/* WARNING: Removing unreachable block (ram,0x00010778dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea10) */
/* WARNING: Removing unreachable block (ram,0x00010778eab4) */
/* WARNING: Removing unreachable block (ram,0x00010778eabc) */
/* WARNING: Removing unreachable block (ram,0x00010778eb8c) */
/* WARNING: Removing unreachable block (ram,0x00010778ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea1c) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined *
FUN_10778df50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  func_0x00010778f7e4();
  puVar2 = auStack_180;
  iVar1 = (int)auStack_180;
  uStack_158 = 0x10778df98;
  uStack_170 = param_2;
  uStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  uStack_120 = param_3;
  uStack_118 = param_4;
  FUN_10772d2fc(auStack_180,&uStack_120);
  func_0x00010778f938();
  func_0x000107785358();
  if ((puVar2 == &UNK_1109d8320) || (func_0x000107785400(auStack_180,puVar2), iVar1 != 0)) {
    puVar2 = &UNK_1109d8320;
  }
  return puVar2;
}



/* Entry: 10778ef34; end: 10778ef73;  */

undefined8 * FUN_10778ef34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8330;
  func_0x00010778ef9c(param_1 + 3);
  return param_1;
}



/* Entry: 10778f04c; end: 10778f0c7;  */

void FUN_10778f04c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010727d6bc();
  *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 10778f2b4; end: 10778f2d3;  */

void FUN_10778f2b4(undefined8 param_1,long param_2)

{
  func_0x00010778f920();
  func_0x00010778f938();
  func_0x00010778fa48(*(undefined4 *)(param_2 + 0x30));
  func_0x00010778fa3c();
  return;
}



/* Entry: 10778f48c; end: 10778f4bb;  */

void FUN_10778f48c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 10778fc2c; end: 10778fc43;  */

uint FUN_10778fc2c(uint param_1)

{
  func_0x0001077860a0();
  return param_1 ^ 1;
}



/* Entry: 10778fdf4; end: 10778fe07;  */

void FUN_10778fdf4(void)

{
  func_0x00010778fdc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778ff94; end: 10778ffff;  */

undefined8 * FUN_10778ff94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000107790000(auStack_40,param_2,param_3);
  func_0x000107791794(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x000107791a68();
  func_0x000107791990();
  *param_1 = &PTR_DAT_1109d8510;
  return param_1;
}



/* Entry: 107790694; end: 10779071b;  */

void FUN_107790694(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010002b838(auStack_50,&UNK_10f4285b6);
  func_0x00010779071c(&uStack_70,auStack_50,&uStack_38);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107791528(&uStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 107791440; end: 107791527;  */

void FUN_107791440(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107790054(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x000107791990();
  return;
}



/* Entry: 1077916f0; end: 1077916f3;  */

void FUN_1077916f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d8730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107791ae0; end: 107791ae3;  */

long FUN_107791ae0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d8798;
  func_0x000107791500(param_1 + 0x88);
  func_0x0001077917d4(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 107791cb8; end: 107791ceb;  */

void FUN_107791cb8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107793e18(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077949f4();
  return;
}



/* Entry: 1077925f0; end: 10779296b;  */

/* WARNING: Possible PIC construction at 0x000107792d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107792d1c) */
/* WARNING: Removing unreachable block (ram,0x000107792e80) */
/* WARNING: Removing unreachable block (ram,0x000107792e88) */
/* WARNING: Removing unreachable block (ram,0x000107792e9c) */
/* WARNING: Removing unreachable block (ram,0x000107792d24) */
/* WARNING: Removing unreachable block (ram,0x000107792d38) */
/* WARNING: Removing unreachable block (ram,0x000107792d40) */
/* WARNING: Removing unreachable block (ram,0x0001077933c8) */
/* WARNING: Removing unreachable block (ram,0x000107792d48) */
/* WARNING: Removing unreachable block (ram,0x0001077933d0) */
/* WARNING: Removing unreachable block (ram,0x0001077933d8) */
/* WARNING: Removing unreachable block (ram,0x0001077933dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1077925f0(undefined1 *param_1,long *param_2,ulong param_3,undefined1 *param_4,long *param_5
                  )

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 ******ppppppuVar6;
  undefined1 *puVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
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
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 *puVar14;
  long unaff_x19;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  undefined1 uStack_1e1;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 ******appppppuStack_1d0 [3];
  undefined8 ******ppppppuStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 ******ppppppuStack_170;
  undefined8 *****pppppuStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 *****pppppuStack_158;
  undefined1 uStack_150;
  byte bStack_148;
  byte bStack_138;
  byte bStack_130;
  byte bStack_128;
  byte bStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_28;
  
  plVar12 = &lStack_70;
  plVar3 = &lStack_70;
  puVar4 = param_1;
  func_0x000107794804();
  uVar2 = (int)param_3 == 0x1e;
  switch(param_3 & 0xffffffff) {
  case 0:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x5e;
code_r0x0001077928dc:
      func_0x000107784e48(param_1,param_2,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 1:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107784c0c(param_1,param_2 + 0x6a,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 2:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107793bbc(param_1,param_2 + 0x78,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 3:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x92;
      goto code_r0x0001077928dc;
    }
    break;
  case 4:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar3 = param_2 + 0x9e;
      func_0x000107791900(param_1);
      plVar3 = (long *)*plVar3;
      uStack_28 = extraout_x8;
      if (plVar3 == (long *)0x0) {
        func_0x0001077919d0();
      }
      else {
        (**(code **)(*plVar3 + 0x28))(&lStack_68);
        param_2 = &lStack_68;
        func_0x000104c32a18(unaff_x19,param_2);
        *(undefined1 *)(unaff_x19 + 0x40) = 2;
        plVar3 = &lStack_68;
        func_0x000104c3323c(plVar3);
      }
      func_0x0001077918dc(uStack_28);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        __Unwind_Resume();
        puStack_78 = &UNK_1077915b8;
        puStack_80 = &stack0xfffffffffffffff0;
        func_0x0001077915e0((long)&uStack_88 + 7,plVar3,param_2);
        return;
      }
      return;
    }
    break;
  case 5:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0xa5;
code_r0x0001077927e4:
      func_0x000107784cb8(param_1,param_2,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 6:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0xb2;
      goto code_r0x0001077928dc;
    }
    break;
  case 7:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0xbe;
      goto code_r0x0001077928dc;
    }
    break;
  case 8:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107784f0c(param_1,param_2 + 0xca,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 9:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0xe3;
      goto code_r0x0001077927e4;
    }
    break;
  case 10:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x00010778b120(param_1,param_2 + 0xf0,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0xb:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0xfc;
      goto code_r0x0001077928dc;
    }
    break;
  case 0xc:
    func_0x000107794814(param_2 + 0x65);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0xd:
    func_0x000107794814(param_2 + 0x73);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0xe:
    func_0x000107794814(param_2 + 0x81);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0xf:
    func_0x000107794814(param_2 + 0x99);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x10:
    lStack_68 = param_2[0xa1];
    lStack_70 = param_2[0xa0];
    lStack_58 = param_2[0xa3];
    lStack_60 = param_2[0xa2];
    lStack_50 = param_2[0xa4];
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x11:
    func_0x000107794814(param_2 + 0xad);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x12:
    func_0x000107794814(param_2 + 0xb9);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x13:
    func_0x000107794814(param_2 + 0xc5);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x14:
    lStack_68 = param_2[0xdf];
    lStack_70 = param_2[0xde];
    lStack_58 = param_2[0xe1];
    lStack_60 = param_2[0xe0];
    lStack_50 = param_2[0xe2];
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x15:
    func_0x000107794814(param_2 + 0xeb);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x16:
    func_0x000107794814(param_2 + 0xf7);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x17:
    func_0x000107794814(param_2 + 0x103);
    func_0x0001077947d8();
    goto LAB_107792954;
  case 0x18:
    if ((int)param_2[0x33] == 0) goto LAB_10779272c;
    uVar2 = (int)param_2[0x33] == 1;
    if (!(bool)uVar2) {
      puVar4 = (undefined1 *)param_2[0x2d];
      func_0x000107794aa4();
      (*extraout_x9_00)(&lStack_70);
      goto code_r0x000107792944;
    }
    param_2 = (long *)(ulong)*(byte *)(param_2 + 0x2d);
    func_0x0001077f2518();
    func_0x00010724ae4c();
code_r0x000107792720:
    func_0x000107794b7c();
    uVar13 = 1;
    puVar4 = (undefined1 *)plVar3;
code_r0x00010779294c:
    param_1[0x40] = uVar13;
    func_0x000107794b64();
    goto LAB_107792954;
  case 0x19:
    if ((int)param_2[0x3a] != 0) {
      uVar2 = (int)param_2[0x3a] == 1;
      if ((bool)uVar2) {
        param_2 = (long *)(ulong)*(byte *)(param_2 + 0x34);
        func_0x0001077f25a0();
        func_0x00010724ae4c();
        plVar3 = plVar12;
        goto code_r0x000107792720;
      }
      puVar4 = (undefined1 *)param_2[0x34];
      func_0x000107794aa4();
      (*extraout_x9)(&lStack_70);
code_r0x000107792944:
      func_0x000107794b7c();
      uVar13 = 2;
      goto code_r0x00010779294c;
    }
  default:
LAB_10779272c:
    func_0x000107794a30();
LAB_107792954:
    func_0x000107794700();
    if ((bool)uVar2) {
      return;
    }
    break;
  case 0x1a:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x3b;
code_r0x00010779290c:
      func_0x000107785298(param_1,param_2,&stack0xffffffffffffffef);
      return;
    }
    break;
  case 0x1b:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x42;
      goto code_r0x0001077928dc;
    }
    break;
  case 0x1c:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x49;
      goto code_r0x0001077928dc;
    }
    break;
  case 0x1d:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x50;
      goto code_r0x00010779290c;
    }
    break;
  case 0x1e:
    func_0x000107794700();
    if ((bool)uVar2) {
      param_2 = param_2 + 0x57;
      goto code_r0x0001077928dc;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar11 = (long *)appppppuStack_1d0;
  pppppppuVar8 = appppppuStack_1d0;
  puStack_78 = &DAT_10779296c;
  puVar10 = param_4;
  plVar12 = param_5;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077947e4();
  plStack_1a0 = param_2;
  uStack_198 = param_3;
  uStack_c8 = extraout_x8_00;
  FUN_10772d2fc(&ppppppuStack_170,&plStack_1a0);
  ppuVar5 = &PTR_DAT_1109d88e0;
  pppppppuVar9 = (undefined8 *******)&UNK_1109d8bc8;
  plVar3 = (long *)&ppppppuStack_170;
  func_0x000107785358(&PTR_DAT_1109d88e0,&UNK_1109d8bc8,plVar3);
  uVar2 = ppuVar5 == (undefined **)&UNK_1109d8bc8;
  if ((bool)uVar2) {
code_r0x0001077929e0:
    *param_1 = 0;
    param_1[0x18] = 0;
    goto code_r0x000107793744;
  }
  ppppppuVar6 = &ppppppuStack_170;
  pppppppuVar9 = (undefined8 *******)ppuVar5;
  func_0x000107785400(ppppppuVar6,ppuVar5);
  if ((int)ppppppuVar6 != 0) goto code_r0x0001077929e0;
  bVar1 = *(byte *)(ppuVar5 + 1);
  uVar2 = bVar1 == 0x1e;
  uVar15 = (uint)bVar1;
  switch(bVar1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 0xb:
  case 0x1e:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x00010733b904();
    if ((bStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_02 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
code_r0x000107792aa0:
        func_0x0001077947f8();
        func_0x000107794930();
      }
      goto code_r0x000107792aa8;
    }
    uVar16 = (uint)bVar1;
    uVar2 = uVar16 == 0xb;
    switch(bVar1) {
    case 0:
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_01 + 0x2f0);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x00010779494c(pppppppuStack_190 + 0x5e);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x00010779494c(*param_5 + 0x2f0);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      break;
    case 1:
    case 2:
    case 4:
    case 5:
    case 8:
    case 9:
    case 10:
code_r0x000107792afc:
      func_0x00010727e950(&ppppppuStack_170);
      ppppppuVar6 = &ppppppuStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
      uVar2 = uVar16 - 1 == 9;
      switch(uVar16 - 1) {
      case 0:
        goto code_r0x000107792b30;
      case 1:
        goto code_r0x000107792d10;
      case 2:
      case 5:
      case 6:
        break;
      case 3:
        goto code_r0x000107792bdc;
      case 4:
        goto code_r0x000107792b84;
      case 7:
        goto code_r0x000107792cb8;
      case 8:
        goto code_r0x000107792c60;
      case 9:
        goto code_r0x000107792d64;
      default:
        uVar2 = uVar16 - 0x18 == 5;
        switch(uVar16 - 0x18) {
        case 0:
          goto code_r0x0001077930c4;
        case 1:
          goto code_r0x000107793064;
        case 2:
        case 5:
          goto code_r0x000107792ffc;
        }
      }
      goto code_r0x0001077931e4;
    case 3:
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_18 + 0x490);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x00010779494c(pppppppuStack_190 + 0x92);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x00010779494c(*param_5 + 0x490);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      break;
    case 6:
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_17 + 0x590);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x00010779494c(pppppppuStack_190 + 0xb2);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x00010779494c(*param_5 + 0x590);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      break;
    case 7:
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_19 + 0x5f0);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x00010779494c(pppppppuStack_190 + 0xbe);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x00010779494c(*param_5 + 0x5f0);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      break;
    case 0xb:
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_16 + 0x7e0);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          func_0x00010779488c();
          pppppppuVar9 = pppppppuStack_190;
          func_0x0001077946cc(&ppppppuStack_170,pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x0001077946cc(&ppppppuStack_170,pppppppuVar9);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      break;
    default:
      uVar2 = uVar15 == 0x1e;
      if (!(bool)uVar2) goto code_r0x000107792afc;
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_03 + 0x2b8);
      FUN_107786038(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x0001077949a8(pppppppuStack_190 + 0x57);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x0001077949a8(*param_5 + 0x2b8);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
    }
code_r0x000107793730:
    func_0x000107794954();
code_r0x000107793734:
    func_0x000107794994();
    func_0x00010727e950();
    break;
  case 1:
code_r0x000107792b30:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848c0();
    if ((bStack_128 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_12 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_04 + 0x350);
      func_0x000107785bfc(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b90(pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b90(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754e888();
    break;
  case 2:
code_r0x000107792d10:
    func_0x000107794824();
    func_0x00010779474c();
    puVar17 = &UNK_107792d1c;
    goto code_r0x0001077939c8;
  case 4:
code_r0x000107792bdc:
    pppppppuStack_190 = (undefined8 *******)0x0;
    uStack_188 = 0;
    uStack_180 = 0;
    ppppppuStack_170._0_1_ = 0;
    appppppuStack_1d0[0]._0_1_ = 0;
    pppppppuVar9 = &pppppppuStack_190;
    puVar10 = (undefined1 *)&ppppppuStack_170;
    plVar3 = param_5;
    func_0x000107791374(&ppppppuStack_1b8,param_4,pppppppuVar9,param_5);
    if ((uStack_1a8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_11 != 0) {
        func_0x000105988308(&ppppppuStack_170,param_5 + 8,&pppppppuStack_190);
        func_0x0001077947cc();
        puVar10 = (undefined1 *)&ppppppuStack_170;
        plVar3 = (long *)0xdd;
        func_0x0001003a9204(appppppuStack_1d0);
        func_0x000100066230(&pppppppuStack_190,appppppuStack_1d0);
        func_0x000107794930();
        pppppppuVar9 = pppppppuVar8;
      }
      func_0x000107794a10();
      uVar13 = extraout_w8;
    }
    else {
      func_0x00010779491c();
      ppppppuVar6 = &ppppppuStack_1b8;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_06 + 0x4f0);
      func_0x0001077908b8(ppppppuVar6,pppppppuVar9);
      if (((ulong)ppppppuVar6 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          func_0x000107791d04(&ppppppuStack_170,*param_5);
          func_0x000107794b58(CONCAT71(ppppppuStack_170._1_7_,ppppppuStack_170._0_1_));
          pppppppuVar9 = &ppppppuStack_170;
          FUN_1077943bc(param_5,pppppppuVar9);
          func_0x000107793af4(&ppppppuStack_170);
        }
        else {
          func_0x000107794b58(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
      uVar13 = extraout_w8_01;
    }
    param_1[0x18] = uVar13;
    func_0x000107791528(&ppppppuStack_1b8);
    goto code_r0x00010779384c;
  case 5:
code_r0x000107792b84:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_130 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_10 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
code_r0x000107792e4c:
        func_0x0001077947f8();
        func_0x000107794930();
      }
      goto code_r0x000107792e54;
    }
    func_0x00010779491c();
    puVar7 = (undefined1 *)&ppppppuStack_170;
    pppppppuVar9 = (undefined8 *******)(extraout_x8_05 + 0x528);
    func_0x000107785dfc(puVar7,pppppppuVar9);
    if (((ulong)puVar7 & 1) == 0) {
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        pppppppuVar9 = (undefined8 *******)*param_5;
        func_0x00010779488c();
        func_0x000107794a54(pppppppuStack_190 + 0xa5);
        func_0x0001077947a0();
        func_0x00010779487c();
      }
      else {
        func_0x000107794a54(*param_5 + 0x528);
      }
      func_0x0001077947bc();
      func_0x000107794884();
    }
code_r0x000107793394:
    func_0x000107794954();
    goto code_r0x000107793398;
  case 8:
code_r0x000107792cb8:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848dc();
    if ((bStack_d0 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_14 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_08 + 0x650);
      func_0x0001077860a0(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b34(pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b34(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754f474();
    break;
  case 9:
code_r0x000107792c60:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_130 & 1) != 0) {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_07 + 0x718);
      func_0x000107785dfc(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794a54(pppppppuStack_190 + 0xe3);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794a54(*param_5 + 0x718);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      goto code_r0x000107793394;
    }
    func_0x000107794768();
    if (extraout_x8_13 != 0) {
      func_0x000107794780();
      func_0x0001077947cc();
      func_0x000107794790();
      goto code_r0x000107792e4c;
    }
code_r0x000107792e54:
    func_0x000107794718();
code_r0x000107793398:
    func_0x000107794994();
    func_0x000107339974();
    break;
  case 10:
code_r0x000107792d64:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010778ac78();
    if ((bStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_15 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_09 + 0x780);
      func_0x00010778bef0(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b1c(pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b1c(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    FUN_10778b484();
    break;
  default:
code_r0x0001077931e4:
    uVar2 = uVar15 - 0x1b == 1;
    if (uVar15 - 0x1b < 2) {
      func_0x000107794824();
      func_0x00010779474c();
      func_0x00010733b904();
      if ((bStack_138 & 1) != 0) {
        func_0x00010779491c();
        uVar2 = uVar15 == 0x1b;
        if ((bool)uVar2) {
          puVar7 = (undefined1 *)&ppppppuStack_170;
          pppppppuVar9 = (undefined8 *******)(extraout_x8_27 + 0x210);
          FUN_107786038(puVar7,pppppppuVar9);
          if (((ulong)puVar7 & 1) == 0) {
            if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
              pppppppuVar9 = (undefined8 *******)*param_5;
              func_0x00010779488c();
              func_0x0001077949a8(pppppppuStack_190 + 0x42);
              func_0x0001077947a0();
              func_0x00010779487c();
            }
            else {
              func_0x0001077949a8(*param_5 + 0x210);
            }
            func_0x0001077947bc();
            func_0x000107794884();
          }
        }
        else {
          puVar7 = (undefined1 *)&ppppppuStack_170;
          pppppppuVar9 = (undefined8 *******)(extraout_x8_27 + 0x248);
          FUN_107786038(puVar7,pppppppuVar9);
          if (((ulong)puVar7 & 1) == 0) {
            if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
              pppppppuVar9 = (undefined8 *******)*param_5;
              func_0x00010779488c();
              func_0x0001077949a8(pppppppuStack_190 + 0x49);
              func_0x0001077947a0();
              func_0x00010779487c();
            }
            else {
              func_0x0001077949a8(*param_5 + 0x248);
            }
            func_0x0001077947bc();
            func_0x000107794884();
          }
        }
        goto code_r0x000107793730;
      }
      func_0x000107794768();
      if (extraout_x8_28 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        goto code_r0x000107792aa0;
      }
code_r0x000107792aa8:
      func_0x000107794718();
      goto code_r0x000107793734;
    }
    pppppppuStack_190 = (undefined8 *******)0x0;
    uStack_188 = 0;
    uStack_180 = 0;
    pppppppuVar9 = &pppppppuStack_190;
    func_0x00010754bb48(&ppppppuStack_170,param_4,pppppppuVar9,param_5);
    if ((bStack_148 & 1) == 0) {
      func_0x000107794a10();
      uVar13 = extraout_w8_00;
      goto code_r0x000107793848;
    }
    uVar2 = uVar15 - 0xc == 0xb;
    switch(uVar15 - 0xc) {
    case 0:
      if ((*(long *)(puVar4 + 0x10) != 0) && (*(long *)(*(long *)(puVar4 + 0x10) + 8) == 0)) {
        puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x328);
        *(undefined1 *)(*(long *)(puVar4 + 8) + 0x348) = uStack_150;
        break;
      }
      func_0x000107794914();
      ppppppuVar6 = ppppppuStack_1b8 + 0x65;
      *(undefined1 *)(ppppppuStack_1b8 + 0x69) = uStack_150;
code_r0x0001077936c0:
      ppppppuVar6[1] = pppppuStack_168;
      *ppppppuVar6 = (undefined8 *****)CONCAT71(ppppppuStack_170._1_7_,ppppppuStack_170._0_1_);
      ppppppuVar6[3] = pppppuStack_158;
      ppppppuVar6[2] = pppppuStack_160;
code_r0x0001077936c8:
      pppppppuVar9 = &ppppppuStack_1b8;
      FUN_1077943bc(puVar4 + 8,pppppppuVar9);
      func_0x000107793af4(&ppppppuStack_1b8);
      goto code_r0x000107793844;
    case 1:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0x73;
        *(undefined1 *)(ppppppuStack_1b8 + 0x77) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x398);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x3b8) = uStack_150;
      break;
    case 2:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0x81;
        *(undefined1 *)(ppppppuStack_1b8 + 0x85) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x408);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x428) = uStack_150;
      break;
    case 3:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0x99;
        *(undefined1 *)(ppppppuStack_1b8 + 0x9d) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x4c8);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x4e8) = uStack_150;
      break;
    case 4:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        func_0x000107794ab0(ppppppuStack_1b8);
        goto code_r0x0001077936c8;
      }
      func_0x000107794ab0(*(undefined8 *)(puVar4 + 8));
      goto code_r0x000107793844;
    case 5:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0xad;
        *(undefined1 *)(ppppppuStack_1b8 + 0xb1) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x568);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x588) = uStack_150;
      break;
    case 6:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0xb9;
        *(undefined1 *)(ppppppuStack_1b8 + 0xbd) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x5c8);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x5e8) = uStack_150;
      break;
    case 7:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0xc5;
        *(undefined1 *)(ppppppuStack_1b8 + 0xc9) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x628);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x648) = uStack_150;
      break;
    case 8:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        func_0x000107794ac8(ppppppuStack_1b8);
        goto code_r0x0001077936c8;
      }
      func_0x000107794ac8(*(undefined8 *)(puVar4 + 8));
      goto code_r0x000107793844;
    case 9:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0xeb;
        *(undefined1 *)(ppppppuStack_1b8 + 0xef) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x758);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x778) = uStack_150;
      break;
    case 10:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0xf7;
        *(undefined1 *)(ppppppuStack_1b8 + 0xfb) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x7b8);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x7d8) = uStack_150;
      break;
    case 0xb:
      if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar6 = ppppppuStack_1b8 + 0x103;
        *(undefined1 *)(ppppppuStack_1b8 + 0x107) = uStack_150;
        goto code_r0x0001077936c0;
      }
      puVar14 = (undefined8 *)(*(long *)(puVar4 + 8) + 0x818);
      *(undefined1 *)(*(long *)(puVar4 + 8) + 0x838) = uStack_150;
      break;
    default:
      goto code_r0x000107793844;
    }
    puVar14[1] = pppppuStack_168;
    *puVar14 = CONCAT71(ppppppuStack_170._1_7_,ppppppuStack_170._0_1_);
    puVar14[3] = pppppuStack_158;
    puVar14[2] = pppppuStack_160;
code_r0x000107793844:
    func_0x000107794954();
    uVar13 = extraout_w8_02;
code_r0x000107793848:
    param_1[0x18] = uVar13;
    plVar3 = param_5;
    plVar11 = plVar12;
code_r0x00010779384c:
    pppppppuVar8 = &pppppppuStack_190;
    goto code_r0x000107793740;
  case 0x18:
code_r0x0001077930c4:
    ppppppuStack_1b8 = (undefined8 ******)0x0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107794a8c();
    plVar12 = (long *)0x0;
    func_0x000107557da8();
    if ((bStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_25 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_22 + 0x168);
      func_0x000107794360(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794af4(pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794af4(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dc0();
    break;
  case 0x19:
code_r0x000107793064:
    ppppppuStack_1b8 = (undefined8 ******)0x0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107794a8c();
    plVar12 = (long *)0x1;
    func_0x000107557f84();
    if ((bStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_24 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar7 = (undefined1 *)&ppppppuStack_170;
      pppppppuVar9 = (undefined8 *******)(extraout_x8_21 + 0x1a0);
      func_0x0001077944fc(puVar7,pppppppuVar9);
      if (((ulong)puVar7 & 1) == 0) {
        if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
          pppppppuVar9 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b00(pppppppuStack_190);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b00(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dec();
    break;
  case 0x1a:
  case 0x1d:
code_r0x000107792ffc:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010733e5bc();
    if ((bStack_138 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_23 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      uVar2 = uVar15 == 0x1d;
      if ((bool)uVar2) {
        func_0x00010779491c();
        puVar7 = (undefined1 *)&ppppppuStack_170;
        pppppppuVar9 = (undefined8 *******)(extraout_x8_26 + 0x280);
        func_0x000107785b50(puVar7,pppppppuVar9);
        if (((ulong)puVar7 & 1) == 0) {
          if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
            pppppppuVar9 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_190 + 0x50);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x280);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      else {
        uVar2 = uVar15 == 0x1a;
        if (!(bool)uVar2) {
          func_0x00010733e5d8(&ppppppuStack_170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_1b8);
          goto code_r0x0001077931e4;
        }
        func_0x00010779491c();
        puVar7 = (undefined1 *)&ppppppuStack_170;
        pppppppuVar9 = (undefined8 *******)(extraout_x8_20 + 0x1d8);
        func_0x000107785b50(puVar7,pppppppuVar9);
        if (((ulong)puVar7 & 1) == 0) {
          if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
            pppppppuVar9 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_190 + 0x3b);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x1d8);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010733e5d8();
  }
  pppppppuVar8 = &ppppppuStack_1b8;
  plVar11 = plVar12;
code_r0x000107793740:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar8);
  plVar12 = plVar11;
code_r0x000107793744:
  func_0x000107794738(uStack_c8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107794850();
  func_0x00010727e950(&ppppppuStack_170);
  ppppppuVar6 = &ppppppuStack_1b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar6);
  puVar17 = &UNK_1077939c8;
  func_0x000107794960();
code_r0x0001077939c8:
  ppuStack_1e0 = &puStack_80;
  puStack_1d8 = puVar17;
  func_0x000107555de4(&uStack_1e1,ppppppuVar6,pppppppuVar9,plVar3,*puVar10,(char)*plVar12);
  return;
}



/* Entry: 107793c54; end: 107793d3f;  */

long * FUN_107793c54(undefined8 *param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  float *pfVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  undefined4 auStack_78 [2];
  double dStack_70;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x0001077947e4();
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  alStack_90[0] = 0;
  uStack_38 = extraout_x8;
  func_0x0001072ac134(alStack_90,((long *)*puVar3)[1] - *(long *)*puVar3 >> 2);
  pfVar1 = (float *)((long *)*param_1)[1];
  for (pfVar6 = *(float **)*param_1; uVar2 = pfVar6 == pfVar1, !(bool)uVar2; pfVar6 = pfVar6 + 1) {
    dStack_70 = (double)*pfVar6;
    auStack_78[0] = 3;
    func_0x0001072aad1c(alStack_90,auStack_78);
    func_0x000104c3323c(auStack_78);
  }
  plVar5 = alStack_90;
  func_0x000107327958(&uStack_a0);
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_98;
  *(undefined8 *)(unaff_x19 + 2) = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000104c33108(&uStack_a0);
  plVar4 = alStack_90;
  func_0x000107269124();
  func_0x000107794738(uStack_38);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000107269124(alStack_90);
  func_0x000107794960();
  func_0x0001077947e4();
  plVar5 = (long *)*plVar5;
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  func_0x000104c32a18();
  *(undefined1 *)(plVar4 + 8) = 2;
  func_0x0001077949a0();
  func_0x000107794700();
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((char)plVar5[9] == '\x01') {
    func_0x0001072dbce8(plVar5);
  }
  return plVar5;
}



/* Entry: 107793f60; end: 107793f63;  */

void FUN_107793f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d8bd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107794054; end: 107794063;  */

void FUN_107794054(void)

{
  return;
}



/* Entry: 107794284; end: 1077942b7;  */

void FUN_107794284(void)

{
  func_0x0001077f25a0();
  func_0x000107794940();
  func_0x00010778f25c();
  return;
}



/* Entry: 1077943bc; end: 1077943ff;  */

undefined8 * FUN_1077943bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107794b88();
  func_0x0001073e3e04(&uStack_40);
  return param_1;
}



/* Entry: 1077946ac; end: 1077946cb;  */

undefined8 FUN_1077946ac(void)

{
  return 1;
}



/* Entry: 107794e5c; end: 107794ecf;  */

undefined8 *
FUN_107794e5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [32];
  
  func_0x0001077950fc();
  func_0x0001073e3e04(auStack_60);
  *param_4 = &PTR_DAT_1109d8db8;
  *(undefined4 *)((long)param_4 + 0x1c) = param_1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  func_0x00010749f474(param_4 + 5,param_6);
  return param_4;
}



/* Entry: 107795094; end: 1077950bf;  */

long FUN_107795094(long param_1)

{
  _bzero(param_1,0xd0);
  func_0x00010778ff24(param_1 + 8);
  return param_1;
}



/* Entry: 1077956e4; end: 1077958d7;  */

undefined8 * FUN_1077956e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 *unaff_x19;
  undefined8 *puStack_600;
  undefined1 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined1 *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 auStack_588 [14];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined1 auStack_4f0 [96];
  undefined1 auStack_490 [104];
  undefined1 auStack_428 [96];
  undefined1 auStack_3c8 [104];
  undefined1 auStack_360 [96];
  undefined1 auStack_300 [104];
  undefined1 auStack_298 [96];
  undefined1 auStack_238 [104];
  undefined1 auStack_1d0 [96];
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [104];
  undefined8 uStack_48;
  
  func_0x0001077991a8();
  uStack_48 = extraout_x8;
  func_0x0001077951ec(&lStack_5c0,*(undefined8 *)(param_1 + 8));
  func_0x000107262f3c(lStack_5c0 + 8,param_2);
  FUN_107798320(&lStack_590);
  lVar1 = lStack_5c0;
  func_0x000107383540(lStack_5c0 + 0x7f8,auStack_588);
  *(undefined8 *)(lVar1 + 0x870) = uStack_510;
  *(undefined8 *)(lVar1 + 0x868) = uStack_518;
  *(undefined8 *)(lVar1 + 0x880) = uStack_500;
  *(undefined8 *)(lVar1 + 0x878) = uStack_508;
  *(undefined1 *)(lVar1 + 0x888) = uStack_4f8;
  func_0x000107784a7c(lVar1 + 0x890,auStack_4f0);
  func_0x000107797bac(lVar1 + 0x8f0,auStack_490);
  func_0x000107784a7c(lVar1 + 0x958,auStack_428);
  func_0x000107797bac(lVar1 + 0x9b8,auStack_3c8);
  func_0x000107784a7c(lVar1 + 0xa20,auStack_360);
  func_0x000107797bac(lVar1 + 0xa80,auStack_300);
  func_0x000107784a7c(lVar1 + 0xae8,auStack_298);
  func_0x000107797bac(lVar1 + 0xb48,auStack_238);
  func_0x000107784a7c(lVar1 + 0xbb0,auStack_1d0);
  func_0x000107784a7c(lVar1 + 0xc10,auStack_170);
  func_0x000107784a7c(lVar1 + 0xc70,auStack_110);
  func_0x000107784a7c(lVar1 + 0xcd0,auStack_b0);
  func_0x000107797be0(&lStack_590);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  auStack_588[0] = uStack_5b8;
  lStack_590 = lStack_5c0;
  lStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_590);
  func_0x0001073e5fe0(&uStack_5a0);
  *puVar2 = &PTR_DAT_1109d8e18;
  func_0x0001073e5fe0(&uStack_5b0);
  uStack_5c8 = 0;
  *unaff_x19 = puVar2;
  puVar3 = &uStack_5c8;
  func_0x0001073e600c();
  func_0x00010779956c();
  func_0x0001077990c8(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_590);
  func_0x0001073e5fe0(&uStack_5a0);
  func_0x0001073e5fe0(&uStack_5b0);
  __ZdlPv(puVar2);
  func_0x00010779956c();
  func_0x00010779934c();
  puStack_5d8 = &DAT_1077958d8;
  puStack_5f0 = puVar2;
  puStack_5e8 = puVar3;
  puStack_5e0 = &stack0xfffffffffffffff0;
  func_0x000107799334();
  func_0x00010734936c();
  if (*(int *)(puVar2 + 0x33) != 0) {
    func_0x0001077990dc(&DAT_10f428e5a);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0x3a) != 0) {
    func_0x0001077990dc(&DAT_10f428c59);
    func_0x0001077994bc();
  }
  if (*(int *)(puVar2 + 0x41) != 0) {
    func_0x0001077990dc(&DAT_10f428bf0);
    func_0x0001077994bc();
  }
  if (*(int *)(puVar2 + 0x48) != 0) {
    func_0x0001077990dc(&DAT_10f428b24);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0x57) != 0) {
    func_0x0001077990dc(&DAT_10f428b72);
    func_0x00010779943c();
  }
  if (*(int *)(puVar2 + 0x66) != 0) {
    func_0x0001077990dc(&DAT_10f428b69);
    func_0x00010779943c();
  }
  if (*(int *)(puVar2 + 0x6d) != 0) {
    func_0x0001077990dc(&DAT_10f428f66);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0x74) != 0) {
    func_0x0001077990dc(&DAT_10f428dc2);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0x7b) != 0) {
    func_0x0001077990dc(&DAT_10f428d32);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0x8a) != 0) {
    func_0x0001077990dc(&DAT_10f428bba);
    func_0x00010779943c();
  }
  if (*(int *)(puVar2 + 0x99) != 0) {
    func_0x0001077990dc(&DAT_10f428e85);
    func_0x00010779943c();
  }
  if (*(int *)(puVar2 + 0xa2) != 0) {
    func_0x0001077990dc(&DAT_10f428f43);
    func_0x000107799544();
  }
  if (*(int *)(puVar2 + 0xa9) != 0) {
    func_0x0001077990dc(&DAT_10f428b3f);
    puStack_600 = puVar3;
    func_0x0001073f1cf4(puVar2 + 0xa3);
    uVar4 = (ulong)*(uint *)(puVar2 + 0xa9);
    if (*(uint *)(puVar2 + 0xa9) == 0xffffffff) {
      uVar4 = 0xffffffffffffffff;
    }
    puStack_5f8 = (undefined1 *)&puStack_600;
    (*(code *)(&PTR_DAT_1109d93a8)[uVar4])(&puStack_5f8,puVar2 + 0xa3);
  }
  if (*(int *)(puVar2 + 0xb0) != 0) {
    func_0x0001077990dc(&DAT_10f428b87);
    func_0x0001077994bc();
  }
  if (*(int *)(puVar2 + 0xb7) != 0) {
    func_0x0001077990dc(&DAT_10f428e6f);
    func_0x0001077994bc();
  }
  if (*(int *)(puVar2 + 0xc6) != 0) {
    func_0x0001077990dc(&DAT_10f428cd6);
    func_0x00010779943c();
  }
  if (*(int *)(puVar2 + 0xcf) != 0) {
    func_0x0001077990dc(&DAT_10f428d69);
    func_0x000107799544();
  }
  if (*(int *)(puVar2 + 0xd6) != 0) {
    func_0x0001077990dc(&DAT_10f428ce3);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0xdd) != 0) {
    func_0x0001077990dc(&DAT_10f428f08);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0xe4) != 0) {
    func_0x0001077990dc(&DAT_10f428c82);
    func_0x00010779935c();
  }
  if (*(int *)(puVar2 + 0xed) != 0) {
    func_0x0001077990dc(&DAT_10f428eab);
    func_0x00010779861c(puVar3,puVar2 + 0xe5);
  }
  if (*(int *)(puVar2 + 0xf6) != 0) {
    func_0x0001077990dc(&DAT_10f428b02);
    func_0x000107799544();
  }
  if (*(int *)(puVar2 + 0xfd) != 0) {
    func_0x0001077990dc(&DAT_10f428e1a);
    func_0x00010779935c();
  }
  puVar3[4] = puVar3[4] + -0x10;
  func_0x000107349610(*puVar3,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 107797b20; end: 107797c63;  */

void FUN_107797b20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077951ec(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x0001077994b4();
  return;
}



/* Entry: 107797e78; end: 107797f27;  */

undefined8 * FUN_107797e78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x0001077991a8();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puVar4 = &uStack_90;
  uStack_38 = extraout_x8;
  func_0x0001072ac134(puVar4,(((long *)*puVar3)[1] - *(long *)*puVar3) / 0x38);
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  for (puVar3 = *(undefined8 **)*param_1; uVar2 = puVar3 == puVar1, !(bool)uVar2;
      puVar3 = puVar3 + 7) {
    puVar4 = puVar3;
    func_0x00010778b3e8(auStack_78);
    func_0x000107799574();
    func_0x000107799450();
  }
  func_0x000107799530();
  func_0x0001077993b0();
  func_0x0001077994c4();
  func_0x0001077990c8(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001077994c4();
    func_0x00010779934c();
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (*(char *)(puVar4 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return puVar4;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1077980dc; end: 1077980df;  */

void FUN_1077980dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d9338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107798320; end: 107798337;  */

void FUN_107798320(void)

{
  func_0x000107798338();
  return;
}



/* Entry: 107798530; end: 107798587;  */

undefined8 * FUN_107798530(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  func_0x0001077991d0();
  param_2 = (undefined8 *)*param_2;
  func_0x000107799464();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x0001077778dc();
  func_0x000107799354();
  func_0x0001077990b0();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000107799354();
  func_0x00010779934c();
  uVar1 = *(undefined8 *)*param_2;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077986a4; end: 1077986eb;  */

undefined8 FUN_1077986a4(void)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  float *pfVar2;
  
  func_0x0001077994e4();
  pfVar1 = (float *)((long *)*unaff_x20)[1];
  for (pfVar2 = *(float **)*unaff_x20; pfVar2 != pfVar1; pfVar2 = pfVar2 + 1) {
    func_0x00010734946c((double)*pfVar2);
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x5d);
  return 1;
}



/* Entry: 107798858; end: 107798893;  */

void FUN_107798858(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 107798a68; end: 107798a87;  */

undefined8 FUN_107798a68(void)

{
  return 1;
}



/* Entry: 107798ba4; end: 107798bb7;  */

void FUN_107798ba4(undefined8 *param_1)

{
  func_0x0001072f9b88(*param_1,param_1[1]);
  func_0x0001072ca648();
  func_0x0001072f9c84();
  return;
}



/* Entry: 107798de4; end: 107798e5f;  */

void FUN_107798de4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x68) != 0) {
    func_0x00010732442c(lVar1);
    *(undefined4 *)(lVar1 + 0x68) = 0;
  }
  return;
}



/* Entry: 107799604; end: 1077998cf;  */

uint FUN_107799604(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  uVar1 = param_1 + 0xd0;
  func_0x00010778cf84(uVar1,param_2 + 0xd0);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x140;
    func_0x000107781d84(lVar2,param_2 + 0x140);
    if ((int)lVar2 != 0) {
      lVar2 = param_1 + 0x168;
      FUN_107786038(lVar2,param_2 + 0x168);
      if ((int)lVar2 != 0) {
        lVar2 = param_1 + 0x1a0;
        func_0x000107785b50(lVar2,param_2 + 0x1a0);
        if ((int)lVar2 != 0) {
          lVar2 = param_1 + 0x1d8;
          func_0x000107785b50(lVar2,param_2 + 0x1d8);
          if ((int)lVar2 != 0) {
            lVar2 = param_1 + 0x210;
            FUN_107786038(lVar2,param_2 + 0x210);
            if ((int)lVar2 != 0) {
              lVar2 = param_1 + 0x248;
              FUN_10778be7c(lVar2,param_2 + 0x248);
              if ((int)lVar2 != 0) {
                lVar2 = param_1 + 0x2c0;
                FUN_10778be7c(lVar2,param_2 + 0x2c0);
                if ((int)lVar2 != 0) {
                  lVar2 = param_1 + 0x338;
                  FUN_107786038(lVar2,param_2 + 0x338);
                  if ((int)lVar2 != 0) {
                    lVar2 = param_1 + 0x370;
                    FUN_107786038(lVar2,param_2 + 0x370);
                    if ((int)lVar2 != 0) {
                      lVar2 = param_1 + 0x3a8;
                      FUN_107786038(lVar2,param_2 + 0x3a8);
                      if ((int)lVar2 != 0) {
                        lVar2 = param_1 + 0x3e0;
                        FUN_10778be7c(lVar2,param_2 + 0x3e0);
                        if ((int)lVar2 != 0) {
                          lVar2 = param_1 + 0x458;
                          FUN_10778be7c(lVar2,param_2 + 0x458);
                          if ((int)lVar2 != 0) {
                            lVar2 = param_1 + 0x4d0;
                            func_0x000107798a18(lVar2,param_2 + 0x4d0);
                            if ((int)lVar2 != 0) {
                              lVar2 = param_1 + 0x518;
                              func_0x000107798bfc(lVar2,param_2 + 0x518);
                              if ((int)lVar2 != 0) {
                                lVar2 = param_1 + 0x550;
                                func_0x000107785b50(lVar2,param_2 + 0x550);
                                if ((int)lVar2 != 0) {
                                  lVar2 = param_1 + 0x588;
                                  func_0x000107785b50(lVar2,param_2 + 0x588);
                                  if ((int)lVar2 != 0) {
                                    lVar2 = param_1 + 0x5c0;
                                    FUN_10778be7c(lVar2,param_2 + 0x5c0);
                                    if ((int)lVar2 != 0) {
                                      lVar2 = param_1 + 0x638;
                                      func_0x000107798a18(lVar2,param_2 + 0x638);
                                      if ((int)lVar2 != 0) {
                                        lVar2 = param_1 + 0x680;
                                        FUN_107786038(lVar2,param_2 + 0x680);
                                        if ((int)lVar2 != 0) {
                                          lVar2 = param_1 + 0x6b8;
                                          FUN_107786038(lVar2,param_2 + 0x6b8);
                                          if ((int)lVar2 != 0) {
                                            lVar2 = param_1 + 0x6f0;
                                            FUN_107786038(lVar2,param_2 + 0x6f0);
                                            if ((int)lVar2 != 0) {
                                              lVar2 = param_1 + 0x728;
                                              func_0x00010779465c(lVar2,param_2 + 0x728);
                                              if ((int)lVar2 != 0) {
                                                lVar2 = param_1 + 0x770;
                                                func_0x000107798a18(lVar2,param_2 + 0x770);
                                                if ((int)lVar2 != 0) {
                                                  lVar2 = param_1 + 0x7b8;
                                                  FUN_107786038(lVar2,param_2 + 0x7b8);
                                                  if ((int)lVar2 != 0) {
                                                    uVar1 = param_1 + 0x7f0;
                                                    FUN_10778be7c(uVar1,param_2 + 0x7f0);
                                                    if ((uVar1 & 1) == 0) {
                                                      uVar1 = param_1 + 0x7f0;
                                                      func_0x000107438c60();
                                                      if ((uVar1 & 1) == 0) {
                                                        lVar2 = param_2 + 0x7f0;
                                                        func_0x000107438c60(lVar2);
                                                        uVar13 = (uint)lVar2;
                                                      }
                                                      else {
                                                        uVar13 = 1;
                                                      }
                                                    }
                                                    else {
                                                      uVar13 = 0;
                                                    }
                                                    lVar2 = param_1 + 0x890;
                                                    func_0x00010778d01c(lVar2,param_2 + 0x890);
                                                    lVar3 = param_1 + 0x8f0;
                                                    func_0x0001077999e0(lVar3,param_2 + 0x8f0);
                                                    lVar4 = param_1 + 0x958;
                                                    func_0x00010778d01c(lVar4,param_2 + 0x958);
                                                    lVar5 = param_1 + 0x9b8;
                                                    func_0x0001077999e0(lVar5,param_2 + 0x9b8);
                                                    lVar6 = param_1 + 0xa20;
                                                    func_0x00010778d01c(lVar6,param_2 + 0xa20);
                                                    lVar7 = param_1 + 0xa80;
                                                    func_0x0001077999e0(lVar7,param_2 + 0xa80);
                                                    lVar8 = param_1 + 0xae8;
                                                    func_0x00010778d01c(lVar8,param_2 + 0xae8);
                                                    lVar9 = param_1 + 0xb48;
                                                    func_0x0001077999e0(lVar9,param_2 + 0xb48);
                                                    lVar10 = param_1 + 0xbb0;
                                                    func_0x00010778d01c(lVar10,param_2 + 0xbb0);
                                                    lVar11 = param_1 + 0xc10;
                                                    func_0x00010778d01c(lVar11,param_2 + 0xc10);
                                                    lVar12 = param_1 + 0xc70;
                                                    func_0x00010778d01c(lVar12,param_2 + 0xc70);
                                                    param_1 = param_1 + 0xcd0;
                                                    func_0x00010778d01c(param_1,param_2 + 0xcd0);
                                                    uVar13 = uVar13 | (uint)lVar2 |
                                                             (uint)lVar3 | (uint)lVar4 |
                                                             (uint)lVar5 | (uint)lVar6 | (uint)lVar7
                                                             | (uint)lVar8 | (uint)lVar9 |
                                                               (uint)lVar10 | (uint)lVar11 |
                                                             (uint)lVar12 | (uint)param_1;
                                                    goto LAB_1077997c8;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar13 = 1;
LAB_1077997c8:
  return uVar13 & 1;
}



/* Entry: 107799af8; end: 107799bf3;  */

ulong FUN_107799af8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  bVar11 = *(int *)(param_1 + 0x90) == 0;
  uVar1 = 2;
  if (bVar11) {
    uVar1 = 3;
  }
  if (*(int *)(param_1 + 200) != 0) {
    uVar1 = (ulong)bVar11;
  }
  uVar2 = uVar1 | 4;
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 8;
  if (*(int *)(param_1 + 0x140) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0x10;
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar2 = 0;
  }
  uVar3 = 0x20;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar3 = 0;
  }
  uVar4 = 0x40;
  if (*(int *)(param_1 + 0x1f8) != 0) {
    uVar4 = 0;
  }
  uVar5 = 0x80;
  if (*(int *)(param_1 + 0x230) != 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100;
  if (*(int *)(param_1 + 0x270) != 0) {
    uVar6 = 0;
  }
  uVar7 = 0x200;
  if (*(int *)(param_1 + 0x2a8) != 0) {
    uVar7 = 0;
  }
  uVar8 = 0x400;
  if (*(int *)(param_1 + 0x2e0) != 0) {
    uVar8 = 0;
  }
  uVar9 = 0x800;
  if (*(int *)(param_1 + 0x318) != 0) {
    uVar9 = 0;
  }
  uVar10 = 0x1000;
  if (*(int *)(param_1 + 0x350) != 0) {
    uVar10 = 0;
  }
  return uVar3 | uVar2 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar1;
}



/* Entry: 10779a800; end: 10779a803;  */

undefined8 * FUN_10779a800(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779b2a8; end: 10779b2ab;  */

long FUN_10779b2a8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d95a0;
  func_0x0001073e6588(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10779b494; end: 10779b4ef;  */

void FUN_10779b494(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  if (*(int *)(param_1 + 0x50) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
        func_0x0001073e677c((&PTR_DAT_1109ac9d8)[*(uint *)(param_1 + 0x50)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_DAT_1109d96e8)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10779b5dc; end: 10779b5e3;  */

void FUN_10779b5dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(*param_1 + 0x50) == 2) {
    func_0x000107561800(param_2,param_3);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x45);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x45) = uVar1;
    return;
  }
  func_0x00010779b61c(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10779b7f4; end: 10779b833;  */

undefined8 * FUN_10779b7f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9710;
  func_0x00010779b85c(param_1 + 3);
  return param_1;
}



/* Entry: 10779bb94; end: 10779bbff;  */

undefined8 * FUN_10779bb94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010779bc00(auStack_40,param_2,param_3);
  func_0x00010779cd78(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x00010779d1c4();
  func_0x00010779d0e0();
  *param_1 = &PTR_DAT_1109d9780;
  return param_1;
}



/* Entry: 10779c03c; end: 10779c24b;  */

void FUN_10779c03c(long param_1,undefined8 param_2,long *param_3,undefined *param_4,ulong param_5,
                  undefined8 param_6,long *param_7)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 uVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 *extraout_x8;
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
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [32];
  undefined1 uStack_118;
  byte bStack_110;
  uint uStack_108;
  byte bStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar4 = &lStack_70;
  plVar3 = param_3;
  func_0x00010779d0bc();
  uVar2 = (int)param_5 == 0xf;
  switch(param_5 & 0xffffffff) {
  case 0:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x168;
code_r0x00010779c164:
      func_0x000107784e48(param_3,param_4,&stack0xffffffffffffffef);
      return;
    }
    goto LAB_10779c244;
  case 1:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x1c8;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 2:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x228;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 3:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x288;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 4:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x2e8;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 5:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x348;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 6:
    if (*(int *)(param_4 + 0x3d8) == 0) goto LAB_10779c1d0;
    uVar2 = *(int *)(param_4 + 0x3d8) == 1;
    if ((bool)uVar2) {
      uVar2 = param_4[0x3a8] == '\0';
      param_4 = &DAT_10f42a7b5;
      if ((bool)uVar2) {
        param_4 = &DAT_10f42a7ae;
      }
      func_0x00010724ae4c();
      func_0x00010779d1b8();
      uVar8 = 1;
    }
    else {
      plVar4 = *(long **)(param_4 + 0x3a8);
      (**(code **)(*plVar4 + 0x28))(&lStack_70);
      func_0x00010779d1b8();
      uVar8 = 2;
    }
    *(undefined1 *)(param_3 + 8) = uVar8;
    func_0x00010779d1a4();
    break;
  case 7:
    func_0x00010779d010();
    if ((bool)uVar2) {
      param_4 = param_4 + 0x408;
      goto code_r0x00010779c164;
    }
    goto LAB_10779c244;
  case 8:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x1a8);
    param_1 = *(long *)(param_4 + 0x1a0);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x1b8);
    param_2 = *(undefined8 *)(param_4 + 0x1b0);
    uStack_50 = *(undefined8 *)(param_4 + 0x1c0);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 9:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x208);
    param_1 = *(long *)(param_4 + 0x200);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x218);
    param_2 = *(undefined8 *)(param_4 + 0x210);
    uStack_50 = *(undefined8 *)(param_4 + 0x220);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 10:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x268);
    param_1 = *(long *)(param_4 + 0x260);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x278);
    param_2 = *(undefined8 *)(param_4 + 0x270);
    uStack_50 = *(undefined8 *)(param_4 + 0x280);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xb:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x2c8);
    param_1 = *(long *)(param_4 + 0x2c0);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x2d8);
    param_2 = *(undefined8 *)(param_4 + 0x2d0);
    uStack_50 = *(undefined8 *)(param_4 + 0x2e0);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xc:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x328);
    param_1 = *(long *)(param_4 + 800);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x338);
    param_2 = *(undefined8 *)(param_4 + 0x330);
    uStack_50 = *(undefined8 *)(param_4 + 0x340);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xd:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x388);
    param_1 = *(long *)(param_4 + 0x380);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x398);
    param_2 = *(undefined8 *)(param_4 + 0x390);
    uStack_50 = *(undefined8 *)(param_4 + 0x3a0);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xe:
    in_register_00005008 = *(undefined8 *)(param_4 + 1000);
    param_1 = *(long *)(param_4 + 0x3e0);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x3f8);
    param_2 = *(undefined8 *)(param_4 + 0x3f0);
    uStack_50 = *(undefined8 *)(param_4 + 0x400);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xf:
    in_register_00005008 = *(undefined8 *)(param_4 + 0x448);
    param_1 = *(long *)(param_4 + 0x440);
    in_register_00005028 = *(undefined8 *)(param_4 + 0x458);
    param_2 = *(undefined8 *)(param_4 + 0x450);
    uStack_50 = *(undefined8 *)(param_4 + 0x460);
    lStack_70 = param_1;
    uStack_68 = in_register_00005008;
    uStack_60 = param_2;
    uStack_58 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  default:
LAB_10779c1d0:
    func_0x00010779d110();
    plVar4 = plVar3;
  }
  func_0x00010779d010();
  plVar3 = plVar4;
  if ((bool)uVar2) {
    return;
  }
LAB_10779c244:
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_e0 = param_4;
  uStack_d8 = param_5;
  FUN_10772d2fc(auStack_138,&puStack_e0);
  ppuVar5 = &PTR_DAT_1109d97f8;
  func_0x000107785358(&PTR_DAT_1109d97f8,&UNK_1109d9978,auStack_138);
  if (ppuVar5 == (undefined **)&UNK_1109d9978) {
code_r0x00010779c2b8:
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 3) = 0;
    return;
  }
  puVar6 = auStack_138;
  func_0x000107785400(puVar6,ppuVar5);
  if ((int)puVar6 != 0) goto code_r0x00010779c2b8;
  bVar1 = *(byte *)(ppuVar5 + 1);
  if (bVar1 < 6) {
code_r0x00010779c2d0:
    puStack_f8 = (undefined1 *)0x0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puStack_d0 = (undefined1 *)((ulong)puStack_d0 & 0xffffffffffffff00);
    auStack_150[0] = 0;
    func_0x00010733b904(auStack_138,param_6,&puStack_f8,param_7,&puStack_d0,auStack_150);
    if ((bStack_100 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_01 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
      }
      func_0x00010779d0e8();
      uVar2 = extraout_w8;
    }
    else {
      switch(bVar1) {
      case 0:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_00 + 0x168);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x168);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x168);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 1:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_06 + 0x1c8);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x1c8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x1c8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 2:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_08 + 0x228);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x228);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x228);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 3:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_09 + 0x288);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x288);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x288);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 4:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_10 + 0x2e8);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x2e8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x2e8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 5:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_05 + 0x348);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x348);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x348);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      default:
        func_0x00010779d178();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_f8);
        if (bVar1 != 6) goto code_r0x00010779c39c;
        goto code_r0x00010779c444;
      case 7:
        func_0x00010779d0d4();
        puVar6 = auStack_138;
        FUN_107786038(puVar6,extraout_x8_07 + 0x408);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_d0 + 0x408);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_7 + 0x408);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      uVar2 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 3) = uVar2;
    func_0x00010779d178();
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 == 7) goto code_r0x00010779c2d0;
code_r0x00010779c39c:
      puStack_d0 = (undefined1 *)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      func_0x00010754bb48(auStack_138,param_6,&puStack_d0,param_7);
      if ((bStack_110 & 1) == 0) {
        extraout_x8[1] = uStack_c8;
        *extraout_x8 = puStack_d0;
        extraout_x8[2] = uStack_c0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        puStack_d0 = (undefined1 *)0x0;
        uVar2 = 1;
      }
      else {
        switch(bVar1) {
        case 8:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_02 + 0x1a8) = in_register_00005008;
            *(long *)(extraout_x8_02 + 0x1a0) = param_1;
            *(undefined8 *)(extraout_x8_02 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_02 + 0x1b0) = param_2;
            *(undefined1 *)(extraout_x8_02 + 0x1c0) = uStack_118;
code_r0x00010779c80c:
            func_0x00010779ce5c(plVar3 + 1,&puStack_f8);
            func_0x00010779cb08(&puStack_f8);
          }
          else {
            func_0x00010779d064();
            *(undefined8 *)(extraout_x8_20 + 0x1a8) = in_register_00005008;
            *(long *)(extraout_x8_20 + 0x1a0) = param_1;
            *(undefined8 *)(extraout_x8_20 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_20 + 0x1b0) = param_2;
            *(undefined1 *)(extraout_x8_20 + 0x1c0) = uStack_118;
          }
          break;
        case 9:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_14 + 0x208) = in_register_00005008;
            *(long *)(extraout_x8_14 + 0x200) = param_1;
            *(undefined8 *)(extraout_x8_14 + 0x218) = in_register_00005028;
            *(undefined8 *)(extraout_x8_14 + 0x210) = param_2;
            *(undefined1 *)(extraout_x8_14 + 0x220) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_21 + 0x208) = in_register_00005008;
          *(long *)(extraout_x8_21 + 0x200) = param_1;
          *(undefined8 *)(extraout_x8_21 + 0x218) = in_register_00005028;
          *(undefined8 *)(extraout_x8_21 + 0x210) = param_2;
          *(undefined1 *)(extraout_x8_21 + 0x220) = uStack_118;
          break;
        case 10:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_12 + 0x268) = in_register_00005008;
            *(long *)(extraout_x8_12 + 0x260) = param_1;
            *(undefined8 *)(extraout_x8_12 + 0x278) = in_register_00005028;
            *(undefined8 *)(extraout_x8_12 + 0x270) = param_2;
            *(undefined1 *)(extraout_x8_12 + 0x280) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_18 + 0x268) = in_register_00005008;
          *(long *)(extraout_x8_18 + 0x260) = param_1;
          *(undefined8 *)(extraout_x8_18 + 0x278) = in_register_00005028;
          *(undefined8 *)(extraout_x8_18 + 0x270) = param_2;
          *(undefined1 *)(extraout_x8_18 + 0x280) = uStack_118;
          break;
        case 0xb:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_13 + 0x2c8) = in_register_00005008;
            *(long *)(extraout_x8_13 + 0x2c0) = param_1;
            *(undefined8 *)(extraout_x8_13 + 0x2d8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_13 + 0x2d0) = param_2;
            *(undefined1 *)(extraout_x8_13 + 0x2e0) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_19 + 0x2c8) = in_register_00005008;
          *(long *)(extraout_x8_19 + 0x2c0) = param_1;
          *(undefined8 *)(extraout_x8_19 + 0x2d8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_19 + 0x2d0) = param_2;
          *(undefined1 *)(extraout_x8_19 + 0x2e0) = uStack_118;
          break;
        case 0xc:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_11 + 0x328) = in_register_00005008;
            *(long *)(extraout_x8_11 + 800) = param_1;
            *(undefined8 *)(extraout_x8_11 + 0x338) = in_register_00005028;
            *(undefined8 *)(extraout_x8_11 + 0x330) = param_2;
            *(undefined1 *)(extraout_x8_11 + 0x340) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_17 + 0x328) = in_register_00005008;
          *(long *)(extraout_x8_17 + 800) = param_1;
          *(undefined8 *)(extraout_x8_17 + 0x338) = in_register_00005028;
          *(undefined8 *)(extraout_x8_17 + 0x330) = param_2;
          *(undefined1 *)(extraout_x8_17 + 0x340) = uStack_118;
          break;
        case 0xd:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_15 + 0x388) = in_register_00005008;
            *(long *)(extraout_x8_15 + 0x380) = param_1;
            *(undefined8 *)(extraout_x8_15 + 0x398) = in_register_00005028;
            *(undefined8 *)(extraout_x8_15 + 0x390) = param_2;
            *(undefined1 *)(extraout_x8_15 + 0x3a0) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_22 + 0x388) = in_register_00005008;
          *(long *)(extraout_x8_22 + 0x380) = param_1;
          *(undefined8 *)(extraout_x8_22 + 0x398) = in_register_00005028;
          *(undefined8 *)(extraout_x8_22 + 0x390) = param_2;
          *(undefined1 *)(extraout_x8_22 + 0x3a0) = uStack_118;
          break;
        case 0xe:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_16 + 1000) = in_register_00005008;
            *(long *)(extraout_x8_16 + 0x3e0) = param_1;
            *(undefined8 *)(extraout_x8_16 + 0x3f8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_16 + 0x3f0) = param_2;
            *(undefined1 *)(extraout_x8_16 + 0x400) = uStack_118;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_23 + 1000) = in_register_00005008;
          *(long *)(extraout_x8_23 + 0x3e0) = param_1;
          *(undefined8 *)(extraout_x8_23 + 0x3f8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_23 + 0x3f0) = param_2;
          *(undefined1 *)(extraout_x8_23 + 0x400) = uStack_118;
          break;
        case 0xf:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            func_0x00010779d1d4();
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          func_0x00010779d1d4();
        }
        uVar2 = 0;
        *(undefined1 *)extraout_x8 = 0;
      }
      *(undefined1 *)(extraout_x8 + 3) = uVar2;
      ppuVar7 = &puStack_d0;
      goto code_r0x00010779c8ec;
    }
code_r0x00010779c444:
    puStack_f8 = (undefined1 *)0x0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x000107558408(auStack_138,&puStack_d0,param_6,&puStack_f8,param_7,0,0);
    if ((bStack_100 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_04 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
      }
      func_0x00010779d0e8();
      uVar2 = extraout_w8_00;
    }
    else {
      func_0x00010779d0d4();
      if (uStack_108 == 0xffffffff || *(uint *)(extraout_x8_03 + 0x3d8) != uStack_108) {
        if (*(uint *)(extraout_x8_03 + 0x3d8) != uStack_108) {
code_r0x00010779c680:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779ced0(puStack_d0 + 0x3a8,auStack_138);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779ced0(*param_7 + 0x3a8,auStack_138);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      else {
        ppuVar7 = &puStack_d0;
        puStack_d0 = auStack_150;
        (*(code *)(&PTR_DAT_1109d99c8)[uStack_108])(ppuVar7,auStack_138,extraout_x8_03 + 0x3a8);
        if (((ulong)ppuVar7 & 1) == 0) goto code_r0x00010779c680;
      }
      uVar2 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 3) = uVar2;
    func_0x00010779cb8c(auStack_138);
  }
  ppuVar7 = &puStack_f8;
code_r0x00010779c8ec:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  return;
}



/* Entry: 10779ccb8; end: 10779ccf7;  */

undefined8 * FUN_10779ccb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9988;
  func_0x00010779cd20(param_1 + 3);
  return param_1;
}


