/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10727fab0; end: 10727facf;  */

void FUN_10727fab0(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x18) == '\0') {
    param_2 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2);
  return;
}



/* Entry: 10727fad0; end: 10727faff;  */

void FUN_10727fad0(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x100) = extraout_w8;
  FUN_10727fb00();
  return;
}



/* Entry: 10727fb00; end: 10727fb43;  */

void FUN_10727fb00(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727fb44();
  iVar1 = *(int *)(unaff_x20 + 0x100);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_DAT_110996f78);
    *(int *)(unaff_x19 + 0x100) = iVar1;
  }
  return;
}



/* Entry: 10727fb44; end: 10727fb87;  */

void FUN_10727fb44(long param_1)

{
  if (*(uint *)(param_1 + 0x100) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f28)[*(uint *)(param_1 + 0x100)]);
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  return;
}



/* Entry: 10727fb88; end: 10727fb9f;  */

void FUN_10727fb88(void)

{
  return;
}



/* Entry: 10727fba0; end: 10727fbcf;  */

long FUN_10727fba0(long param_1)

{
  FUN_10727fbd0(param_1 + 0x80);
  FUN_10727fc70(param_1 + 0x38);
  func_0x000107285750();
  return param_1;
}



/* Entry: 10727fbd0; end: 10727fbef;  */

void FUN_10727fbd0(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_10727fbf0();
  }
  return;
}



/* Entry: 10727fbf0; end: 10727fc1b;  */

long FUN_10727fbf0(long param_1)

{
  func_0x00010727e950(param_1 + 0x38);
  FUN_10727fc1c(param_1);
  return param_1;
}



/* Entry: 10727fc1c; end: 10727fc5f;  */

void FUN_10727fc1c(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f48)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10727fc60; end: 10727fc6f;  */

void FUN_10727fc60(void)

{
  return;
}



/* Entry: 10727fc70; end: 10727fcb3;  */

void FUN_10727fc70(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f60)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10727fcb4; end: 10727fcdb;  */

void FUN_10727fcb4(void)

{
  return;
}



/* Entry: 10727fcdc; end: 10727fd2b;  */

void FUN_10727fcdc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727d614();
  func_0x000107285b90();
  FUN_10727fd2c();
  FUN_10727fde8(unaff_x19 + 0x80,unaff_x20 + 0x80);
  return;
}



/* Entry: 10727fd2c; end: 10727fd5b;  */

void FUN_10727fd2c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_10727fd5c();
  return;
}



/* Entry: 10727fd5c; end: 10727fd9f;  */

void FUN_10727fd5c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727fc70();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996f98);
    *(int *)(unaff_x19 + 0x40) = iVar1;
  }
  return;
}



/* Entry: 10727fda0; end: 10727fdbf;  */

void FUN_10727fda0(void)

{
  return;
}



/* Entry: 10727fdc0; end: 10727fde7;  */

void FUN_10727fdc0(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107285c78();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10727fde8; end: 10727fe17;  */

void FUN_10727fde8(long param_1)

{
  func_0x000107285760();
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_10727fe18();
  return;
}



/* Entry: 10727fe18; end: 10727fe2b;  */

void FUN_10727fe18(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_10727fe48();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 10727fe2c; end: 10727fe47;  */

void FUN_10727fe2c(long param_1)

{
  FUN_10727fe48();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10727fe48; end: 10727fe7b;  */

void FUN_10727fe48(void)

{
  func_0x0001006392cc();
  FUN_10727fe7c();
  func_0x000107285b90();
  FUN_10727eb70();
  return;
}



/* Entry: 10727fe7c; end: 10727feab;  */

void FUN_10727fe7c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10727feac();
  return;
}



/* Entry: 10727feac; end: 10727feef;  */

void FUN_10727feac(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727fc1c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996fb0);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 10727fef0; end: 10727ff0f;  */

void FUN_10727fef0(void)

{
  return;
}



/* Entry: 10727ff10; end: 10727ff2f;  */

void FUN_10727ff10(long param_1)

{
  long unaff_x19;
  
  func_0x000107285c78();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10727ff30; end: 10727ff57;  */

void FUN_10727ff30(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc(*param_1);
  FUN_10727d614();
  func_0x000107285b90();
  FUN_10727d614();
  FUN_10727d614(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_10727d614(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 10727ff58; end: 107280297;  */

void FUN_10727ff58(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long lVar7;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [56];
  undefined1 uStack_360;
  undefined8 uStack_358;
  long lStack_2b0;
  undefined1 auStack_290 [136];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_78;
  
  func_0x000107285500();
  lVar7 = *(long *)*param_1;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_78 = extraout_x8;
  func_0x00010726acf0(&uStack_208);
  lVar7 = lVar7 + 0x38;
  uVar4 = param_2;
  FUN_10727f5d8(param_2,lVar7,&uStack_208);
  FUN_10726b264(&uStack_208);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  func_0x00010726acf0(&uStack_3c8);
  iVar1 = *(int *)(param_2 + 0x78);
  if (iVar1 == 0) {
    fVar11 = 0.0;
    dVar10 = 5.18065378653631e-315;
    fVar12 = 1.0;
    fVar13 = 0.1;
  }
  else if (iVar1 == 1) {
    fVar11 = *(float *)(param_2 + 0x38);
    fVar13 = *(float *)(param_2 + 0x3c);
    dVar10 = (double)(ulong)*(uint *)(param_2 + 0x40);
    fVar12 = *(float *)(param_2 + 0x44);
  }
  else {
    func_0x000107751284(auStack_398);
    FUN_107295f10(auStack_290,&uStack_3c8);
    lStack_2b0 = lVar7;
    func_0x000107285ce0();
    FUN_107267da8(auStack_398);
    auStack_398[0] = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    fVar11 = 0.0;
    fVar13 = 0.0;
    dVar10 = 0.0;
    fVar12 = 0.0;
    FUN_107280384(0,0,0,0,param_2 + 0x38,&uStack_208,auStack_398);
    func_0x000107285a00();
    FUN_107267da8(&uStack_208);
  }
  FUN_10726b264(&uStack_3c8);
  dVar9 = 0.25;
  if (iVar1 != 0) {
    dVar9 = (double)fVar11;
  }
  func_0x00010725aa9c(dVar9,(double)fVar13,(double)SUB84(dVar10,0),(double)fVar12);
  cVar6 = *(char *)(param_2 + 0xf8);
  if (cVar6 == '\x01') {
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010726acf0(&uStack_3d8);
    if (*(int *)(param_2 + 0xb0) == 0) {
      uVar8 = 0;
    }
    else if (*(int *)(param_2 + 0xb0) == 1) {
      uVar8 = *(undefined1 *)(param_2 + 0x80);
    }
    else {
      func_0x000107751284(auStack_398);
      FUN_107295f10(auStack_290,&uStack_3d8);
      lStack_2b0 = lVar7;
      func_0x000107285ce0();
      FUN_107267da8(auStack_398);
      auStack_398[0] = 0;
      uStack_360 = 0;
      uStack_358 = 0;
      lVar5 = param_2 + 0x80;
      FUN_107280464(lVar5,&uStack_208,auStack_398,0);
      uVar8 = (undefined1)lVar5;
      func_0x000107285a00();
      FUN_107267da8(&uStack_208);
    }
    FUN_10726b264();
    uVar2 = *(char *)(param_2 + 0xf0) == '\x01';
    if ((bool)uVar2) {
      FUN_10727f6dc(param_2 + 0xb8);
      uStack_208 = 0;
      uStack_200 = 0;
      func_0x00010726acf0(&uStack_208);
      FUN_10727f5d8(param_2 + 0xb8,lVar7,&uStack_208);
      func_0x000107285e08();
      dVar10 = 0.0;
      if (!(bool)uVar2) {
        dVar10 = dVar9;
      }
      FUN_10726b264();
      cVar6 = '\x01';
      uVar2 = 1;
    }
    else {
      cVar6 = '\0';
      uVar2 = 1;
      dVar10 = 0.0;
    }
  }
  else {
    uVar8 = 0;
    uVar2 = 0;
  }
  bVar3 = uVar4 >> 0x20 == 0;
  dVar9 = 0.0;
  if (!bVar3) {
    dVar9 = (double)(float)uVar4;
  }
  *(double *)(unaff_x19 + 8) = dVar9;
  *(undefined8 *)(unaff_x19 + 0x18) = uStack_3c0;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_3c8;
  *(undefined8 *)(unaff_x19 + 0x28) = uStack_3b0;
  *(undefined8 *)(unaff_x19 + 0x20) = uStack_3b8;
  *(undefined8 *)(unaff_x19 + 0x38) = uStack_3a0;
  *(undefined8 *)(unaff_x19 + 0x30) = uStack_3a8;
  *(undefined1 *)(unaff_x19 + 0x40) = uVar8;
  *(double *)(unaff_x19 + 0x48) = dVar10;
  *(char *)(unaff_x19 + 0x50) = cVar6;
  *(undefined1 *)(unaff_x19 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xf0) = &PTR_FUN_110997078;
  *(undefined4 *)(unaff_x19 + 0xe8) = 1;
  *(undefined8 **)(unaff_x19 + 0x108) = (undefined8 *)(unaff_x19 + 0xf0);
  func_0x0001072854dc(uStack_78);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107285a00();
  FUN_107267da8(&uStack_208);
  FUN_10726b264(&uStack_3d8);
  func_0x00010728561c();
  FUN_10727d5ac(extraout_x8_00 + 8);
  *(undefined8 *)(extraout_x8_00 + 0xf0) = &PTR_DAT_1109970f8;
  *(undefined4 *)(extraout_x8_00 + 0xe8) = 2;
  *(undefined8 **)(extraout_x8_00 + 0x108) = (undefined8 *)(extraout_x8_00 + 0xf0);
  return;
}



/* Entry: 107280298; end: 107280307;  */

void FUN_107280298(long param_1)

{
  FUN_10727d5ac(param_1 + 8);
  *(undefined8 *)(param_1 + 0xf0) = &PTR_DAT_1109970f8;
  *(undefined4 *)(param_1 + 0xe8) = 2;
  *(undefined8 **)(param_1 + 0x108) = (undefined8 *)(param_1 + 0xf0);
  return;
}



/* Entry: 107280308; end: 10728030f;  */

void FUN_107280308(void)

{
  return;
}



/* Entry: 107280310; end: 10728032f;  */

void FUN_107280310(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_FUN_110996ff8;
  return;
}



/* Entry: 107280330; end: 10728034f;  */

void FUN_107280330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110996ff8;
  return;
}



/* Entry: 107280350; end: 107280377;  */

void FUN_107280350(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997058);
  func_0x000107285554();
  return;
}



/* Entry: 107280378; end: 107280383;  */

undefined ** FUN_107280378(void)

{
  return &PTR_DAT_110997058;
}



/* Entry: 107280384; end: 1072803d3;  */

void FUN_107280384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  undefined1 auStack_44 [20];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_1072803d4(auStack_44);
  puVar1 = (undefined4 *)(param_5 + 0x28);
  if (*(char *)(param_5 + 0x38) == '\0') {
    puVar1 = &uStack_30;
  }
  FUN_10728044c(auStack_44,puVar1);
  return;
}



/* Entry: 1072803d4; end: 10728044b;  */

ulong FUN_1072803d4(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  undefined1 in_ZR;
  uint *puVar1;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined4 uVar2;
  undefined4 uVar3;
  uint auStack_a9 [32];
  undefined8 uStack_28;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  func_0x000107285500();
  puVar1 = (uint *)*param_2;
  uStack_28 = extraout_x8;
  func_0x000107285a94();
  func_0x000107285d48();
  if ((bool)in_ZR) {
    func_0x000107285a70();
    param_3 = auStack_a9;
    func_0x000107775330();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x10] = 0;
  }
  func_0x0001072855b4();
  func_0x0001072854dc(uStack_28);
  if ((bool)in_ZR) {
    return CONCAT44(uVar3,uVar2);
  }
  ___stack_chk_fail();
  func_0x0001072855b4();
  func_0x00010728561c();
  if ((char)puVar1[4] == '\0') {
    puVar1 = param_3;
  }
  return (ulong)*puVar1;
}



/* Entry: 10728044c; end: 107280463;  */

undefined4 FUN_10728044c(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 4) == '\0') {
    param_1 = param_2;
  }
  return *param_1;
}



/* Entry: 107280464; end: 1072804a3;  */

uint FUN_107280464(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1072804a4();
  uVar1 = (uint)lVar2;
  if ((((uint)lVar2 >> 8 & 1) == 0) && (uVar1 = param_4, *(char *)(param_1 + 0x29) == '\x01')) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  return uVar1 & 1;
}



/* Entry: 1072804a4; end: 10728052f;  */

uint FUN_1072804a4(undefined8 *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  undefined8 extraout_x8;
  byte *pbVar3;
  uint uVar4;
  
  func_0x000107285528();
  pbVar2 = (byte *)*param_1;
  func_0x000107285a94();
  func_0x000107285d48();
  if ((bool)in_ZR) {
    func_0x000107285a70();
    FUN_107280530();
    uVar4 = (uint)pbVar2 >> 8 & 0xff;
    pbVar3 = pbVar2;
  }
  else {
    uVar4 = 0;
    pbVar3 = (byte *)0x0;
  }
  func_0x0001072855b4();
  func_0x0001072854dc(extraout_x8);
  if ((bool)in_ZR) {
    return (uint)pbVar3 & 0xff | uVar4 << 8;
  }
  ___stack_chk_fail();
  func_0x0001072855b4();
  func_0x00010728561c();
  iVar1 = *(int *)(pbVar2 + 0x68);
  if (iVar1 != 1) {
    uVar4 = 0;
  }
  else {
    func_0x000107280568();
    uVar4 = (uint)*pbVar2;
  }
  return uVar4 | (uint)(iVar1 == 1) << 8;
}



/* Entry: 107280530; end: 107280583;  */

uint FUN_107280530(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 1) {
    uVar2 = 0;
  }
  else {
    func_0x000107280568();
    uVar2 = (uint)*param_1;
  }
  return uVar2 | (uint)(iVar1 == 1) << 8;
}



/* Entry: 107280584; end: 10728058b;  */

void FUN_107280584(void)

{
  return;
}



/* Entry: 10728058c; end: 1072805ab;  */

void FUN_10728058c(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_FUN_110997078;
  return;
}



/* Entry: 1072805ac; end: 1072805cb;  */

void FUN_1072805ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110997078;
  return;
}



/* Entry: 1072805cc; end: 1072805f3;  */

void FUN_1072805cc(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109970d8);
  func_0x000107285554();
  return;
}



/* Entry: 1072805f4; end: 107280607;  */

undefined ** FUN_1072805f4(void)

{
  return &PTR_DAT_1109970d8;
}



/* Entry: 107280608; end: 107280627;  */

void FUN_107280608(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_DAT_1109970f8;
  return;
}



/* Entry: 107280628; end: 107280647;  */

void FUN_107280628(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109970f8;
  return;
}



/* Entry: 107280648; end: 10728066f;  */

void FUN_107280648(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997158);
  func_0x000107285554();
  return;
}



/* Entry: 107280670; end: 107280683;  */

undefined ** FUN_107280670(void)

{
  return &PTR_DAT_110997158;
}



/* Entry: 107280684; end: 1072806a3;  */

void FUN_107280684(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_DAT_110997178;
  return;
}



/* Entry: 1072806a4; end: 1072806c3;  */

void FUN_1072806a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110997178;
  return;
}



/* Entry: 1072806c4; end: 1072806eb;  */

void FUN_1072806c4(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109971d8);
  func_0x000107285554();
  return;
}



/* Entry: 1072806ec; end: 1072806ff;  */

undefined ** FUN_1072806ec(void)

{
  return &PTR_DAT_1109971d8;
}



/* Entry: 107280700; end: 107280733;  */

void FUN_107280700(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000104c2fe00(lVar1);
  func_0x000104c2fe00(lVar1 + 0x38,param_2 + 0x38);
  func_0x000107285da0();
  return;
}



/* Entry: 107280734; end: 107280787;  */

void FUN_107280734(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000104c2fe00(lVar1);
  func_0x000104c2fe00(lVar1 + 0x38,param_2 + 0x38);
  func_0x00010028af84(lVar1 + 0x70,param_2 + 0x70);
  func_0x000107285d78();
  return;
}



/* Entry: 107280788; end: 10728079f;  */

void FUN_107280788(int param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  if (param_1 != -1) {
    return;
  }
  func_0x00010563ab98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(extraout_x8,param_2,0x48);
  return;
}



/* Entry: 1072807a0; end: 107280827;  */

void FUN_1072807a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_3,0x48);
  return;
}



/* Entry: 107280828; end: 107280913;  */

void FUN_107280828(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  func_0x000107285a64(*(undefined8 *)*param_2);
  lVar1 = **(long **)(extraout_x8 + 0x28);
  func_0x000107285a3c(lVar1,(*(long **)(extraout_x8 + 0x28))[1]);
  func_0x0001072856a8();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x158) != '\x01')) {
    puVar2 = (undefined8 *)(param_3 + 0x70);
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x148);
    FUN_107280b2c();
  }
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_3 + 0x84) == '\x01') {
    param_1[3] = (double)*(float *)(param_3 + 0x80);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_3 + 0x8c) == '\x01') {
    param_1[5] = (double)*(float *)(param_3 + 0x88);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_3 + 0x94) == '\x01') {
    param_1[7] = (double)*(float *)(param_3 + 0x90);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 107280914; end: 1072809ff;  */

void FUN_107280914(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [2];
  
  uVar2 = *(undefined8 *)(param_4 + 0x90);
  uVar3 = *(undefined8 *)(param_4 + 0x98);
  lVar1 = *(long *)(*param_3 + 0x10);
  func_0x0001072858b8(*(undefined8 *)(*param_3 + 8));
  if ((param_3 != (long *)0x0) && ((char)param_3[0x28] == '\x01')) {
    func_0x000107280b44(param_3 + 0x24);
    func_0x000107285d8c(*(undefined8 *)(lVar1 + 8));
    auStack_50[0] = param_2;
    func_0x00010740ed34(extraout_x8,auStack_50);
    func_0x000107285a80();
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_4 + 0xa4) == '\x01') {
    param_1[3] = (double)*(float *)(param_4 + 0xa0);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_4 + 0xac) == '\x01') {
    param_1[5] = (double)*(float *)(param_4 + 0xa8);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_4 + 0xb4) == '\x01') {
    param_1[7] = (double)*(float *)(param_4 + 0xb0);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 107280a00; end: 107280b2b;  */

undefined1 *
FUN_107280a00(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined1 *unaff_x24;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [56];
  char cStack_70;
  undefined8 uStack_68;
  
  func_0x000107285b9c();
  puVar4 = param_1;
  func_0x000107285528();
  uStack_68 = extraout_x8;
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    if ((param_1[0x38] == '\x04') && (puVar4 = param_1, FUN_107262f24(), ((ulong)puVar4 & 1) == 0))
    {
      puVar6 = *(undefined1 **)(param_1 + 0x40);
      puVar1 = *(undefined1 **)(param_1 + 0x48);
      while (puVar6 != puVar1) {
        FUN_10726236c(auStack_a8,puVar6);
        uVar2 = cStack_70 == '\x01';
        if ((bool)uVar2) {
          iVar3 = (int)auStack_a8;
          func_0x000104c32db4();
          if (iVar3 == 0) goto LAB_107280ac8;
          uVar2 = *(char *)(param_5 + 0x18) == '\x01';
          if ((bool)uVar2) {
            lVar5 = param_5;
            func_0x00010549026c(param_5);
            puVar4 = puVar6 + 0x40;
            func_0x0001000e107c(puVar4,lVar5);
            if (((ulong)puVar4 & 1) == 0) goto LAB_107280ac8;
          }
          bVar7 = false;
          unaff_x24 = puVar6;
        }
        else {
LAB_107280ac8:
          bVar7 = true;
        }
        puVar4 = auStack_a8;
        func_0x00010724b3d8();
        puVar6 = puVar6 + 0x160;
        if (!bVar7) goto LAB_107280ae4;
      }
    }
  }
  unaff_x24 = (undefined1 *)0x0;
  uVar2 = 1;
LAB_107280ae4:
  func_0x0001072854dc(uStack_68);
  if ((bool)uVar2) {
    return unaff_x24;
  }
  ___stack_chk_fail();
  func_0x000107285908();
  func_0x00010724b3d8();
  func_0x00010728561c();
  if ((puVar4[0x10] & 1) == 0) {
    func_0x000104bdc2c8();
    if ((puVar4[0x20] & 1) == 0) {
      func_0x000104bdc2c8();
      if (puVar4[0x110] == '\x01') {
        FUN_10727fb44(puVar4 + 8);
      }
      return puVar4;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 107280b2c; end: 107280b5b;  */

long FUN_107280b2c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_10727fb44(param_1 + 8);
  }
  return param_1;
}



/* Entry: 107280b5c; end: 107280bbb;  */

long FUN_107280b5c(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_10727fb44(param_1 + 8);
  }
  return param_1;
}



/* Entry: 107280bbc; end: 107280bc3;  */

void FUN_107280bbc(void)

{
  return;
}



/* Entry: 107280bc4; end: 107280d17;  */

void FUN_107280bc4(undefined8 param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  ulong uVar6;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  double dStack_88;
  undefined1 uStack_80;
  double dStack_78;
  undefined1 uStack_70;
  double dStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [40];
  
  lVar1 = ((undefined8 *)*param_3)[1];
  func_0x000107285a64(*(undefined8 *)*param_3);
  lVar2 = **(long **)(extraout_x8 + 0x28);
  func_0x000107285a3c(lVar2,(*(long **)(extraout_x8 + 0x28))[1]);
  func_0x0001072856a8();
  lVar3 = lVar1 + 0x220;
  FUN_107280f68();
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x158) != '\x01')) {
    if (*(char *)(lVar3 + 0x200) == '\x01') {
      *(undefined1 *)(lVar3 + 0x200) = 0;
    }
    uStack_98 = *(ulong *)(param_4 + 0x78);
    uStack_a0 = *(ulong *)(param_4 + 0x70);
  }
  else {
    puVar4 = (ulong *)(lVar2 + 0x148);
    FUN_107280b2c();
    uStack_98 = puVar4[1];
    uStack_a0 = *puVar4;
    if (*(char *)(param_4 + 0x9c) == '\x01') {
      uVar6 = (ulong)*(uint *)(param_4 + 0x98);
      FUN_107280e50(&uStack_a0,lVar3 + 0x1e0);
      uStack_98 = param_2;
      uStack_a0 = uVar6;
    }
  }
  uVar5 = *(undefined8 *)(lVar1 + 8);
  uStack_90 = 0;
  dStack_88 = (double)((ulong)dStack_88 & 0xffffffffffffff00);
  uStack_80 = *(char *)(param_4 + 0x84) == '\x01';
  if ((bool)uStack_80) {
    dStack_88 = (double)*(float *)(param_4 + 0x80);
  }
  dStack_78 = (double)((ulong)dStack_78 & 0xffffffffffffff00);
  uStack_70 = *(char *)(param_4 + 0x8c) == '\x01';
  if ((bool)uStack_70) {
    dStack_78 = (double)*(float *)(param_4 + 0x88);
  }
  dStack_68 = (double)((ulong)dStack_68 & 0xffffffffffffff00);
  uStack_60 = *(char *)(param_4 + 0x94) == '\x01';
  if ((bool)uStack_60) {
    dStack_68 = (double)*(float *)(param_4 + 0x90);
  }
  FUN_10727b368(auStack_58,lVar1,&uStack_a0);
  func_0x00010740e2f4(uVar5,auStack_58);
  return;
}



/* Entry: 107280d18; end: 107280e4f;  */

void FUN_107280d18(ulong param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  double dStack_90;
  undefined1 uStack_88;
  double dStack_80;
  undefined1 uStack_78;
  double dStack_70;
  undefined1 uStack_68;
  ulong auStack_60 [6];
  
  lVar1 = *(long *)(*param_3 + 0x18);
  func_0x0001072858b8(*(undefined8 *)(*param_3 + 0x10));
  lVar2 = lVar1 + 0x220;
  FUN_107280f68();
  if ((param_3 == (long *)0x0) || ((char)param_3[0x28] != '\x01')) {
    if (*(char *)(lVar2 + 0x200) == '\x01') {
      *(undefined1 *)(lVar2 + 0x200) = 0;
    }
    uVar4 = *(ulong *)(param_4 + 0x90);
    param_2 = *(undefined8 *)(param_4 + 0x98);
  }
  else {
    func_0x000107280b44(param_3 + 0x24);
    func_0x000107285d8c(*(undefined8 *)(lVar1 + 8));
    auStack_60[0] = param_1;
    func_0x00010740ed34(extraout_x8,auStack_60);
    uVar4 = param_1;
    if (*(char *)(param_4 + 0xbc) == '\x01') {
      uVar4 = (ulong)*(uint *)(param_4 + 0xb8);
      uStack_a8 = param_1;
      uStack_a0 = param_2;
      FUN_107280e50(&uStack_a8,lVar2 + 0x1e0);
    }
  }
  uVar3 = *(undefined8 *)(lVar1 + 8);
  uStack_98 = 0;
  dStack_90 = (double)((ulong)dStack_90 & 0xffffffffffffff00);
  uStack_88 = *(char *)(param_4 + 0xa4) == '\x01';
  if ((bool)uStack_88) {
    dStack_90 = (double)*(float *)(param_4 + 0xa0);
  }
  dStack_80 = (double)((ulong)dStack_80 & 0xffffffffffffff00);
  uStack_78 = *(char *)(param_4 + 0xac) == '\x01';
  if ((bool)uStack_78) {
    dStack_80 = (double)*(float *)(param_4 + 0xa8);
  }
  dStack_70 = (double)((ulong)dStack_70 & 0xffffffffffffff00);
  uStack_68 = *(char *)(param_4 + 0xb4) == '\x01';
  if ((bool)uStack_68) {
    dStack_70 = (double)*(float *)(param_4 + 0xb0);
  }
  uStack_a8 = uVar4;
  uStack_a0 = param_2;
  FUN_10727b368(auStack_60,lVar1,&uStack_a8);
  func_0x00010740e2f4(uVar3,auStack_60);
  return;
}



/* Entry: 107280e50; end: 107280f67;  */

void FUN_107280e50(float param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_60 [16];
  double dStack_50;
  double dStack_48;
  
  pdVar1 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(char *)(param_3 + 4) == '\x01') {
    dVar2 = (double)((long)pdVar1 - (long)param_3[3]) / 1000000000.0;
    dVar3 = -dVar2;
    if (dVar2 <= 0.0) {
      dVar3 = -0.0;
    }
    dVar3 = dVar3 * (double)param_1;
    _exp();
    dStack_48 = param_3[2];
    dStack_50 = param_3[1];
    FUN_107259504(&dStack_50,param_2);
    dVar2 = dStack_50 + (*param_2 - dStack_50) * (1.0 - dVar3);
    dVar3 = dStack_48 + (param_2[1] - dStack_48) * (1.0 - dVar3);
    func_0x000107285748(auStack_60);
    FUN_107259180(auStack_60);
    *param_3 = (double)param_1;
    param_3[1] = dVar2;
    param_3[2] = dVar3;
    param_3[3] = (double)pdVar1;
    if (((ulong)param_3[4] & 1) == 0) {
      *(undefined1 *)(param_3 + 4) = 1;
    }
  }
  else {
    dVar3 = param_2[1];
    dVar2 = *param_2;
    *param_3 = (double)param_1;
    param_3[2] = dVar3;
    param_3[1] = dVar2;
    param_3[3] = (double)pdVar1;
    *(undefined1 *)(param_3 + 4) = 1;
  }
  return;
}



/* Entry: 107280f68; end: 107280f9b;  */

undefined8 * FUN_107280f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x42) == 2) {
    return param_1 + 1;
  }
  func_0x00010563ab98();
  if ((int)param_1 != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  extraout_x8[1] = param_2[1];
  *extraout_x8 = uVar4;
  puVar2 = (undefined8 *)puVar3[3];
  puVar1 = (undefined8 *)(puVar3[1] + 0x28);
  if (*(char *)(puVar3[1] + 0x30) == '\0') {
    puVar1 = (undefined8 *)puVar3[2];
  }
  uVar4 = *puVar1;
  extraout_x8[2] = *(undefined8 *)*puVar3;
  extraout_x8[3] = uVar4;
  extraout_x8[4] = *puVar2;
  return param_1;
}



/* Entry: 107280f9c; end: 10728109b;  */

void FUN_107280f9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_2 = (undefined8 *)*param_2;
  uVar3 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar3;
  puVar2 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)(param_2[1] + 0x28);
  if (*(char *)(param_2[1] + 0x30) == '\0') {
    puVar1 = (undefined8 *)param_2[2];
  }
  uVar3 = *puVar1;
  param_1[2] = *(undefined8 *)*param_2;
  param_1[3] = uVar3;
  param_1[4] = *puVar2;
  return;
}



/* Entry: 10728109c; end: 1072810ef;  */

void FUN_10728109c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 1072810f0; end: 107281173;  */

double * FUN_1072810f0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  double *pdVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar9;
  double *unaff_x20;
  double *pdVar10;
  double *unaff_x21;
  long lVar11;
  long unaff_x22;
  double *unaff_x23;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar16;
  double dStack_1380;
  double dStack_1378;
  double dStack_1370;
  double dStack_1368;
  double adStack_1358 [8];
  undefined1 auStack_1318 [24];
  undefined8 *puStack_1300;
  undefined1 auStack_12f8 [32];
  undefined8 uStack_12d8;
  undefined1 auStack_1258 [224];
  long alStack_1178 [3];
  undefined8 uStack_1160;
  undefined1 auStack_1158 [32];
  double adStack_1138 [7];
  undefined1 auStack_1100 [56];
  undefined1 auStack_10c8 [56];
  undefined1 auStack_1090 [56];
  undefined8 uStack_1058;
  double dStack_1050;
  double *pdStack_1048;
  long lStack_1040;
  double *pdStack_1038;
  double *pdStack_1030;
  undefined1 auStack_1010 [8];
  undefined1 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  double dStack_fe0;
  double dStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined1 uStack_fc0;
  double dStack_fa0;
  double dStack_f98;
  double dStack_f90;
  double dStack_f88;
  double dStack_f80;
  double dStack_f78;
  double dStack_f70;
  undefined1 auStack_f68 [24];
  undefined8 *puStack_f50;
  double adStack_148 [5];
  double dStack_120;
  undefined8 uStack_118;
  double adStack_88 [8];
  double adStack_48 [4];
  undefined8 uStack_28;
  
  func_0x000107285500();
  uStack_28 = extraout_x8;
  FUN_107281888(adStack_88,*(undefined8 *)*param_5);
  FUN_1072818bc(adStack_48,adStack_88);
  pdVar10 = adStack_48;
  FUN_107281b58();
  func_0x0001006393ec(adStack_48);
  pdVar8 = adStack_88;
  FUN_10727b578();
  func_0x0001072854dc(uStack_28);
  if ((bool)in_ZR) {
    return pdVar8;
  }
  ___stack_chk_fail();
  func_0x000107285908();
  FUN_10727b578();
  func_0x00010728561c();
  func_0x000107285500();
  dVar12 = *pdVar8;
  uVar1 = *pdVar10 == 0.0;
  uStack_118 = extraout_x8_00;
  if (*pdVar10 <= 0.0) {
    FUN_107281888(&dStack_fa0,*(undefined8 *)((long)dVar12 + 8));
    FUN_1072818bc(&dStack_fe0,&dStack_fa0);
    pdVar8 = &dStack_fe0;
    FUN_107281b58();
    func_0x0001006393ec(&dStack_fe0);
    pdVar2 = &dStack_fa0;
LAB_1072813cc:
    FUN_10727b578(pdVar2);
  }
  else {
    lVar11 = *(long *)((long)dVar12 + 0x10);
    if (((ulong)pdVar10[10] & 1) == 0) {
      lVar9 = **(long **)(lVar11 + 8);
      dStack_f98 = *(double *)(lVar9 + 0x60);
      dStack_fa0 = *(double *)(lVar9 + 0x58);
      dStack_f88 = *(double *)(lVar9 + 0x70);
      dStack_f90 = *(double *)(lVar9 + 0x68);
      dStack_f80 = *(double *)(lVar9 + 0x78);
      dVar13 = 90.0;
      dStack_fd8 = -180.0;
      dStack_fe0 = -90.0;
      uStack_fc8 = 0x4066800000000000;
      uStack_fd0 = 0x4056800000000000;
      uStack_fc0 = 0;
      pdVar8 = &dStack_fa0;
      FUN_107281b70(pdVar8,&dStack_fe0);
      if (((int)pdVar8 == 0) || ((*(byte *)(**(long **)(lVar11 + 8) + 0xb7) & 1) != 0)) {
        dStack_fa0 = *pdVar10;
        dStack_f70 = pdVar10[6];
        dStack_f78 = pdVar10[5];
        dStack_f80 = pdVar10[4];
        dStack_f88 = pdVar10[3];
        dStack_f90 = pdVar10[2];
        dStack_f98 = pdVar10[1];
        unaff_x21 = *(double **)((long)dVar12 + 0x18);
        unaff_x20 = *(double **)((long)dVar12 + 0x20);
        dVar16 = unaff_x21[2];
        _exp2();
        dStack_fd8 = unaff_x21[1];
        dStack_fe0 = *unaff_x21;
        FUN_107259504(&dStack_fe0,unaff_x20);
        unaff_d9 = dVar16;
        FUN_107246504(&dStack_fe0);
        unaff_d11 = dVar16;
        dVar15 = dVar13;
        FUN_107246504(unaff_x20);
        puVar6 = (undefined8 *)0x30;
        __Znwm();
        *puVar6 = &PTR_FUN_1109973a8;
        puVar6[1] = dVar16;
        puVar6[2] = unaff_d9;
        puVar6[3] = dVar13;
        puVar6[4] = unaff_d11;
        puVar6[5] = dVar15;
        pdVar8 = *(double **)((long)dVar12 + 8);
        puStack_f50 = puVar6;
        func_0x000107285bb4();
        func_0x000107285808(&dStack_fa0);
        func_0x000107285d30();
        FUN_1072822c8(&dStack_fa0);
        pdVar2 = &dStack_fe0;
        unaff_d10 = dVar13;
        goto LAB_1072813cc;
      }
      unaff_x23 = &dStack_fa0;
      func_0x000107285844(**(long **)(lVar11 + 8),&dStack_fa0);
      unaff_x21 = *(double **)((long)dVar12 + 0x18);
      unaff_x22 = *(long *)((long)dVar12 + 0x20);
      dVar16 = unaff_x21[2];
      unaff_d9 = *(double *)(unaff_x22 + 0x10);
      dVar15 = 0.0;
      uStack_ff8 = 0;
      uStack_1000 = 0;
      uStack_fe8 = 0;
      uStack_ff0 = 0;
      FUN_10727ce6c(*(long *)((long)dVar12 + 0x28) + 0x18,&uStack_1000);
      auStack_1010[0] = 0;
      uStack_1008 = 0;
      dStack_fe0 = dVar15;
      dStack_fd8 = dVar13;
      uStack_fd0 = param_3;
      uStack_fc8 = param_4;
      FUN_107281bd0(dVar16,unaff_d9,adStack_148,&dStack_fa0,unaff_x21,unaff_x22,1,&dStack_fe0,
                    auStack_1010);
      func_0x000107285954(*pdVar10);
      FUN_1072821ec(auStack_f68,adStack_148);
      pdVar8 = *(double **)((long)dVar12 + 8);
      func_0x000107285bb4();
      func_0x000107285808(&dStack_fa0);
    }
    else {
      func_0x000107285844(**(undefined8 **)(lVar11 + 8),&dStack_fa0);
      unaff_x21 = *(double **)((long)dVar12 + 0x18);
      unaff_x22 = *(long *)((long)dVar12 + 0x20);
      dVar15 = unaff_x21[2];
      unaff_d9 = *(double *)(unaff_x22 + 0x10);
      unaff_x23 = (double *)(ulong)*(byte *)(pdVar10 + 7);
      dVar13 = 0.0;
      uStack_ff8 = 0;
      uStack_1000 = 0;
      uStack_fe8 = 0;
      uStack_ff0 = 0;
      FUN_10727ce6c(*(long *)((long)dVar12 + 0x28) + 0x18,&uStack_1000);
      dStack_fe0 = dVar13;
      dStack_fd8 = param_2;
      uStack_fd0 = param_3;
      uStack_fc8 = param_4;
      FUN_107281bd0(dVar15,unaff_d9,adStack_148,&dStack_fa0,unaff_x21,unaff_x22,unaff_x23,
                    &dStack_fe0,pdVar10 + 8);
      dVar13 = *pdVar10;
      uVar1 = dVar13 == 0.0;
      if ((bool)uVar1) {
        dVar13 = dStack_120 / 1.2;
      }
      func_0x000107285954(dVar13);
      pdVar10 = &dStack_fa0;
      FUN_1072821ec(auStack_f68,adStack_148);
      pdVar8 = *(double **)((long)dVar12 + 8);
      func_0x000107285bb4();
      func_0x000107285808(&dStack_fa0);
    }
    func_0x000107285d30();
    FUN_1072822c8(&dStack_fa0);
    FUN_10727b578(&dStack_fe0);
    pdVar2 = adStack_148;
    func_0x0001072822ec(pdVar2);
    unaff_x20 = pdVar10;
  }
  func_0x0001072854dc(uStack_118);
  if ((bool)uVar1) {
    return pdVar2;
  }
  ___stack_chk_fail();
  func_0x0001072858f0();
  func_0x0001072822ec(unaff_x23 + 7);
  pdVar10 = adStack_148;
  func_0x0001072822ec();
  func_0x00010728561c();
  dStack_1050 = dVar12;
  pdStack_1048 = unaff_x23;
  lStack_1040 = unaff_x22;
  pdStack_1038 = unaff_x21;
  pdStack_1030 = unaff_x20;
  func_0x000107285500();
  dVar12 = *pdVar10;
  uStack_1058 = extraout_x8_01;
  FUN_10727d614(adStack_1138);
  FUN_10727d614(auStack_1100,pdVar8 + 7);
  FUN_10727d614(auStack_10c8,pdVar8 + 0xe);
  FUN_10727d614(auStack_1090,pdVar8 + 0x15);
  FUN_10727d5ac(auStack_1258,adStack_1138);
  uVar3 = 0xe8;
  __Znwm();
  func_0x000107285b20();
  FUN_10727d5ac();
  uStack_1160 = uVar3;
  FUN_10727d560(auStack_1258);
  FUN_10727d560(adStack_1138);
  FUN_107281888(adStack_1138,*(undefined8 *)((long)dVar12 + 0x30));
  FUN_1072818bc(auStack_1158,adStack_1138);
  plVar5 = alStack_1178;
  func_0x000107282a30();
  func_0x000107282a64(alStack_1178);
  pdVar8 = adStack_1138;
  FUN_10727b578();
  func_0x0001072854dc(uStack_1058);
  if ((bool)uVar1) {
    return pdVar8;
  }
  ___stack_chk_fail();
  FUN_10727b578(adStack_1138);
  plVar4 = alStack_1178;
  func_0x0001072822ec();
  func_0x00010728561c();
  func_0x000107285500();
  lVar11 = *plVar4;
  uStack_12d8 = extraout_x8_02;
  func_0x0001078696e8(auStack_1318);
  adStack_1358[0] = 0.0;
  adStack_1358[1] = 0.0;
  func_0x00010726acf0(adStack_1358);
  FUN_10727f5d8(plVar5,auStack_1318,adStack_1358);
  FUN_10726b264(adStack_1358);
  FUN_10726b264(auStack_1318);
  dVar12 = 1.0;
  if ((ulong)plVar5 >> 0x20 != 0) {
    dVar12 = (double)SUB84(plVar5,0) / 1000.0;
  }
  pdVar10 = (double *)(lVar11 + 0x38);
  FUN_10726c7c0(*pdVar10);
  func_0x000107285a80();
  FUN_10726c7c0(*(long *)(lVar11 + 0x40));
  func_0x000107285b84();
  lVar9 = *(long *)(lVar11 + 0x40);
  dVar15 = *(double *)(lVar9 + 0x10);
  dVar16 = *(double *)((long)*pdVar10 + 0x10);
  dVar13 = *(double *)(lVar9 + 0x18) - *(double *)((long)*pdVar10 + 0x18);
  FUN_107246670(dVar13,0xc066800000000000,0x4066800000000000);
  uVar1 = dVar12 == 0.0;
  dStack_1378 = 1.79769313486232e+308;
  dStack_1380 = 1.79769313486232e+308;
  dStack_1368 = 1.79769313486232e+308;
  dStack_1370 = 1.79769313486232e+308;
  if (0.0 < dVar12) {
    dVar14 = unaff_d10 - (double)SUB84(plVar5,0);
    dStack_1380 = ABS(dVar13) / dVar12;
    dStack_1378 = ABS(*(double *)(*(long *)(lVar11 + 0x40) + 0x20) -
                      *(double *)(*(long *)(lVar11 + 0x38) + 0x20)) / dVar12;
    dStack_1370 = SQRT(dVar14 * dVar14 + (unaff_d11 - unaff_d9) * (unaff_d11 - unaff_d9)) / dVar12;
    dStack_1368 = ABS(dVar15 - dVar16) / dVar12;
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  *puVar6 = &PTR_FUN_1109974a8;
  puVar6[2] = dStack_1368;
  puVar6[1] = dStack_1370;
  puVar6[4] = dStack_1378;
  puVar6[3] = dStack_1380;
  puStack_1300 = puVar6;
  FUN_107281888(adStack_1358,*(undefined8 *)(lVar11 + 0x48));
  FUN_1072818bc(auStack_12f8,adStack_1358);
  func_0x000107282a30(pdVar8,auStack_1318);
  func_0x000107282a64(auStack_1318);
  pdVar8 = adStack_1358;
  FUN_10727b578();
  func_0x0001072854dc(uStack_12d8);
  if ((bool)uVar1) {
    return pdVar8;
  }
  ___stack_chk_fail();
  FUN_10727b578(adStack_1358);
  puVar7 = auStack_1318;
  func_0x0001072822ec(puVar7);
  func_0x00010728561c();
  func_0x0001072856b0();
  FUN_10724cbe8();
  FUN_107281910(puVar7 + 0x20,pdVar8 + 4);
  *(double *)(lVar11 + 0x70) = pdVar8[7];
  return pdVar10;
}



/* Entry: 107281174; end: 10728150b;  */

double * FUN_107281174(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                      long *param_5,double *param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  double *pdVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  double *unaff_x20;
  double *pdVar9;
  double *unaff_x21;
  long lVar10;
  long unaff_x22;
  double *unaff_x23;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar15;
  double dVar16;
  double dStack_12f0;
  double dStack_12e8;
  double dStack_12e0;
  double dStack_12d8;
  double adStack_12c8 [8];
  undefined1 auStack_1288 [24];
  undefined8 *puStack_1270;
  undefined1 auStack_1268 [32];
  undefined8 uStack_1248;
  undefined1 auStack_11c8 [224];
  long alStack_10e8 [3];
  undefined8 uStack_10d0;
  undefined1 auStack_10c8 [32];
  double adStack_10a8 [7];
  undefined1 auStack_1070 [56];
  undefined1 auStack_1038 [56];
  undefined1 auStack_1000 [56];
  undefined8 uStack_fc8;
  long lStack_fc0;
  double *pdStack_fb8;
  long lStack_fb0;
  double *pdStack_fa8;
  double *pdStack_fa0;
  undefined1 auStack_f80 [8];
  undefined1 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  double dStack_f50;
  double dStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined1 uStack_f30;
  double dStack_f10;
  double dStack_f08;
  double dStack_f00;
  double dStack_ef8;
  double dStack_ef0;
  double dStack_ee8;
  double dStack_ee0;
  undefined1 auStack_ed8 [24];
  undefined8 *puStack_ec0;
  double adStack_b8 [5];
  double dStack_90;
  undefined8 uStack_88;
  
  func_0x000107285500();
  lVar11 = *param_5;
  uVar1 = *param_6 == 0.0;
  uStack_88 = extraout_x8;
  if (*param_6 <= 0.0) {
    FUN_107281888(&dStack_f10,*(undefined8 *)(lVar11 + 8));
    FUN_1072818bc(&dStack_f50,&dStack_f10);
    pdVar7 = &dStack_f50;
    FUN_107281b58();
    func_0x0001006393ec(&dStack_f50);
    pdVar9 = &dStack_f10;
LAB_1072813cc:
    FUN_10727b578(pdVar9);
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x10);
    if (((ulong)param_6[10] & 1) == 0) {
      lVar8 = **(long **)(lVar10 + 8);
      dStack_f08 = *(double *)(lVar8 + 0x60);
      dStack_f10 = *(double *)(lVar8 + 0x58);
      dStack_ef8 = *(double *)(lVar8 + 0x70);
      dStack_f00 = *(double *)(lVar8 + 0x68);
      dStack_ef0 = *(double *)(lVar8 + 0x78);
      dVar12 = 90.0;
      dStack_f48 = -180.0;
      dStack_f50 = -90.0;
      uStack_f38 = 0x4066800000000000;
      uStack_f40 = 0x4056800000000000;
      uStack_f30 = 0;
      pdVar7 = &dStack_f10;
      FUN_107281b70(pdVar7,&dStack_f50);
      if (((int)pdVar7 == 0) || ((*(byte *)(**(long **)(lVar10 + 8) + 0xb7) & 1) != 0)) {
        dStack_f10 = *param_6;
        dStack_ee0 = param_6[6];
        dStack_ee8 = param_6[5];
        dStack_ef0 = param_6[4];
        dStack_ef8 = param_6[3];
        dStack_f00 = param_6[2];
        dStack_f08 = param_6[1];
        unaff_x21 = *(double **)(lVar11 + 0x18);
        unaff_x20 = *(double **)(lVar11 + 0x20);
        dVar15 = unaff_x21[2];
        _exp2();
        dStack_f48 = unaff_x21[1];
        dStack_f50 = *unaff_x21;
        FUN_107259504(&dStack_f50,unaff_x20);
        unaff_d9 = dVar15;
        FUN_107246504(&dStack_f50);
        unaff_d11 = dVar15;
        dVar14 = dVar12;
        FUN_107246504(unaff_x20);
        puVar5 = (undefined8 *)0x30;
        __Znwm();
        *puVar5 = &PTR_FUN_1109973a8;
        puVar5[1] = dVar15;
        puVar5[2] = unaff_d9;
        puVar5[3] = dVar12;
        puVar5[4] = unaff_d11;
        puVar5[5] = dVar14;
        pdVar7 = *(double **)(lVar11 + 8);
        puStack_ec0 = puVar5;
        func_0x000107285bb4();
        func_0x000107285808(&dStack_f10);
        func_0x000107285d30();
        FUN_1072822c8(&dStack_f10);
        pdVar9 = &dStack_f50;
        unaff_d10 = dVar12;
        goto LAB_1072813cc;
      }
      unaff_x23 = &dStack_f10;
      func_0x000107285844(**(long **)(lVar10 + 8),&dStack_f10);
      unaff_x21 = *(double **)(lVar11 + 0x18);
      unaff_x22 = *(long *)(lVar11 + 0x20);
      dVar15 = unaff_x21[2];
      unaff_d9 = *(double *)(unaff_x22 + 0x10);
      dVar14 = 0.0;
      uStack_f68 = 0;
      uStack_f70 = 0;
      uStack_f58 = 0;
      uStack_f60 = 0;
      FUN_10727ce6c(*(long *)(lVar11 + 0x28) + 0x18,&uStack_f70);
      auStack_f80[0] = 0;
      uStack_f78 = 0;
      dStack_f50 = dVar14;
      dStack_f48 = dVar12;
      uStack_f40 = param_3;
      uStack_f38 = param_4;
      FUN_107281bd0(dVar15,unaff_d9,adStack_b8,&dStack_f10,unaff_x21,unaff_x22,1,&dStack_f50,
                    auStack_f80);
      func_0x000107285954(*param_6);
      FUN_1072821ec(auStack_ed8,adStack_b8);
      pdVar7 = *(double **)(lVar11 + 8);
      func_0x000107285bb4();
      func_0x000107285808(&dStack_f10);
    }
    else {
      func_0x000107285844(**(undefined8 **)(lVar10 + 8),&dStack_f10);
      unaff_x21 = *(double **)(lVar11 + 0x18);
      unaff_x22 = *(long *)(lVar11 + 0x20);
      dVar14 = unaff_x21[2];
      unaff_d9 = *(double *)(unaff_x22 + 0x10);
      unaff_x23 = (double *)(ulong)*(byte *)(param_6 + 7);
      dVar12 = 0.0;
      uStack_f68 = 0;
      uStack_f70 = 0;
      uStack_f58 = 0;
      uStack_f60 = 0;
      FUN_10727ce6c(*(long *)(lVar11 + 0x28) + 0x18,&uStack_f70);
      dStack_f50 = dVar12;
      dStack_f48 = param_2;
      uStack_f40 = param_3;
      uStack_f38 = param_4;
      FUN_107281bd0(dVar14,unaff_d9,adStack_b8,&dStack_f10,unaff_x21,unaff_x22,unaff_x23,&dStack_f50
                    ,param_6 + 8);
      dVar12 = *param_6;
      uVar1 = dVar12 == 0.0;
      if ((bool)uVar1) {
        dVar12 = dStack_90 / 1.2;
      }
      func_0x000107285954(dVar12);
      param_6 = &dStack_f10;
      FUN_1072821ec(auStack_ed8,adStack_b8);
      pdVar7 = *(double **)(lVar11 + 8);
      func_0x000107285bb4();
      func_0x000107285808(&dStack_f10);
    }
    func_0x000107285d30();
    FUN_1072822c8(&dStack_f10);
    FUN_10727b578(&dStack_f50);
    pdVar9 = adStack_b8;
    func_0x0001072822ec(pdVar9);
    unaff_x20 = param_6;
  }
  func_0x0001072854dc(uStack_88);
  if ((bool)uVar1) {
    return pdVar9;
  }
  ___stack_chk_fail();
  func_0x0001072858f0();
  func_0x0001072822ec(unaff_x23 + 7);
  pdVar9 = adStack_b8;
  func_0x0001072822ec();
  func_0x00010728561c();
  lStack_fc0 = lVar11;
  pdStack_fb8 = unaff_x23;
  lStack_fb0 = unaff_x22;
  pdStack_fa8 = unaff_x21;
  pdStack_fa0 = unaff_x20;
  func_0x000107285500();
  dVar12 = *pdVar9;
  uStack_fc8 = extraout_x8_00;
  FUN_10727d614(adStack_10a8);
  FUN_10727d614(auStack_1070,pdVar7 + 7);
  FUN_10727d614(auStack_1038,pdVar7 + 0xe);
  FUN_10727d614(auStack_1000,pdVar7 + 0x15);
  FUN_10727d5ac(auStack_11c8,adStack_10a8);
  uVar2 = 0xe8;
  __Znwm();
  func_0x000107285b20();
  FUN_10727d5ac();
  uStack_10d0 = uVar2;
  FUN_10727d560(auStack_11c8);
  FUN_10727d560(adStack_10a8);
  FUN_107281888(adStack_10a8,*(undefined8 *)((long)dVar12 + 0x30));
  FUN_1072818bc(auStack_10c8,adStack_10a8);
  plVar4 = alStack_10e8;
  func_0x000107282a30();
  func_0x000107282a64(alStack_10e8);
  pdVar7 = adStack_10a8;
  FUN_10727b578();
  func_0x0001072854dc(uStack_fc8);
  if ((bool)uVar1) {
    return pdVar7;
  }
  ___stack_chk_fail();
  FUN_10727b578(adStack_10a8);
  plVar3 = alStack_10e8;
  func_0x0001072822ec();
  func_0x00010728561c();
  func_0x000107285500();
  lVar11 = *plVar3;
  uStack_1248 = extraout_x8_01;
  func_0x0001078696e8(auStack_1288);
  adStack_12c8[0] = 0.0;
  adStack_12c8[1] = 0.0;
  func_0x00010726acf0(adStack_12c8);
  FUN_10727f5d8(plVar4,auStack_1288,adStack_12c8);
  FUN_10726b264(adStack_12c8);
  FUN_10726b264(auStack_1288);
  dVar12 = 1.0;
  if ((ulong)plVar4 >> 0x20 != 0) {
    dVar12 = (double)SUB84(plVar4,0) / 1000.0;
  }
  pdVar9 = (double *)(lVar11 + 0x38);
  FUN_10726c7c0(*pdVar9);
  func_0x000107285a80();
  FUN_10726c7c0(*(long *)(lVar11 + 0x40));
  func_0x000107285b84();
  lVar10 = *(long *)(lVar11 + 0x40);
  dVar15 = *(double *)(lVar10 + 0x10);
  dVar16 = *(double *)((long)*pdVar9 + 0x10);
  dVar14 = *(double *)(lVar10 + 0x18) - *(double *)((long)*pdVar9 + 0x18);
  FUN_107246670(dVar14,0xc066800000000000,0x4066800000000000);
  uVar1 = dVar12 == 0.0;
  dStack_12e8 = 1.79769313486232e+308;
  dStack_12f0 = 1.79769313486232e+308;
  dStack_12d8 = 1.79769313486232e+308;
  dStack_12e0 = 1.79769313486232e+308;
  if (0.0 < dVar12) {
    dVar13 = unaff_d10 - (double)SUB84(plVar4,0);
    dStack_12f0 = ABS(dVar14) / dVar12;
    dStack_12e8 = ABS(*(double *)(*(long *)(lVar11 + 0x40) + 0x20) -
                      *(double *)(*(long *)(lVar11 + 0x38) + 0x20)) / dVar12;
    dStack_12e0 = SQRT(dVar13 * dVar13 + (unaff_d11 - unaff_d9) * (unaff_d11 - unaff_d9)) / dVar12;
    dStack_12d8 = ABS(dVar15 - dVar16) / dVar12;
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  *puVar5 = &PTR_FUN_1109974a8;
  puVar5[2] = dStack_12d8;
  puVar5[1] = dStack_12e0;
  puVar5[4] = dStack_12e8;
  puVar5[3] = dStack_12f0;
  puStack_1270 = puVar5;
  FUN_107281888(adStack_12c8,*(undefined8 *)(lVar11 + 0x48));
  FUN_1072818bc(auStack_1268,adStack_12c8);
  func_0x000107282a30(pdVar7,auStack_1288);
  func_0x000107282a64(auStack_1288);
  pdVar7 = adStack_12c8;
  FUN_10727b578();
  func_0x0001072854dc(uStack_1248);
  if ((bool)uVar1) {
    return pdVar7;
  }
  ___stack_chk_fail();
  FUN_10727b578(adStack_12c8);
  puVar6 = auStack_1288;
  func_0x0001072822ec(puVar6);
  func_0x00010728561c();
  func_0x0001072856b0();
  FUN_10724cbe8();
  FUN_107281910(puVar6 + 0x20,pdVar7 + 4);
  *(double *)(lVar11 + 0x70) = pdVar7[7];
  return pdVar9;
}



/* Entry: 10728150c; end: 107281677;  */

long * FUN_10728150c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar13;
  double dVar14;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  long alStack_348 [8];
  undefined1 auStack_308 [24];
  undefined8 *puStack_2f0;
  undefined1 auStack_2e8 [32];
  undefined8 uStack_2c8;
  undefined1 auStack_248 [224];
  long alStack_168 [3];
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  long alStack_128 [7];
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x000107285500();
  lVar9 = *param_1;
  uStack_48 = extraout_x8;
  FUN_10727d614(alStack_128);
  FUN_10727d614(auStack_f0,param_2 + 0x38);
  FUN_10727d614(auStack_b8,param_2 + 0x70);
  FUN_10727d614(auStack_80,param_2 + 0xa8);
  FUN_10727d5ac(auStack_248,alStack_128);
  uVar2 = 0xe8;
  __Znwm();
  func_0x000107285b20();
  FUN_10727d5ac();
  uStack_150 = uVar2;
  FUN_10727d560(auStack_248);
  FUN_10727d560(alStack_128);
  FUN_107281888(alStack_128,*(undefined8 *)(lVar9 + 0x30));
  FUN_1072818bc(auStack_148,alStack_128);
  plVar4 = alStack_168;
  func_0x000107282a30();
  func_0x000107282a64(alStack_168);
  plVar3 = alStack_128;
  FUN_10727b578();
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_10727b578(alStack_128);
  plVar8 = alStack_168;
  func_0x0001072822ec();
  func_0x00010728561c();
  func_0x000107285500();
  lVar9 = *plVar8;
  uStack_2c8 = extraout_x8_00;
  func_0x0001078696e8(auStack_308);
  alStack_348[0] = 0;
  alStack_348[1] = 0;
  func_0x00010726acf0(alStack_348);
  FUN_10727f5d8(plVar4,auStack_308,alStack_348);
  FUN_10726b264(alStack_348);
  FUN_10726b264(auStack_308);
  dVar10 = 1.0;
  if ((ulong)plVar4 >> 0x20 != 0) {
    dVar10 = (double)SUB84(plVar4,0) / 1000.0;
  }
  plVar8 = (long *)(lVar9 + 0x38);
  FUN_10726c7c0(*plVar8);
  func_0x000107285a80();
  FUN_10726c7c0(*(long *)(lVar9 + 0x40));
  func_0x000107285b84();
  lVar7 = *(long *)(lVar9 + 0x40);
  dVar13 = *(double *)(lVar7 + 0x10);
  dVar14 = *(double *)(*plVar8 + 0x10);
  dVar11 = *(double *)(lVar7 + 0x18) - *(double *)(*plVar8 + 0x18);
  FUN_107246670(dVar11,0xc066800000000000,0x4066800000000000);
  uVar1 = dVar10 == 0.0;
  dStack_368 = 1.79769313486232e+308;
  dStack_370 = 1.79769313486232e+308;
  dStack_358 = 1.79769313486232e+308;
  dStack_360 = 1.79769313486232e+308;
  if (0.0 < dVar10) {
    dVar12 = unaff_d10 - (double)SUB84(plVar4,0);
    dStack_370 = ABS(dVar11) / dVar10;
    dStack_368 = ABS(*(double *)(*(long *)(lVar9 + 0x40) + 0x20) -
                     *(double *)(*(long *)(lVar9 + 0x38) + 0x20)) / dVar10;
    dStack_360 = SQRT(dVar12 * dVar12 + (unaff_d11 - unaff_d9) * (unaff_d11 - unaff_d9)) / dVar10;
    dStack_358 = ABS(dVar13 - dVar14) / dVar10;
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  *puVar5 = &PTR_FUN_1109974a8;
  puVar5[2] = dStack_358;
  puVar5[1] = dStack_360;
  puVar5[4] = dStack_368;
  puVar5[3] = dStack_370;
  puStack_2f0 = puVar5;
  FUN_107281888(alStack_348,*(undefined8 *)(lVar9 + 0x48));
  FUN_1072818bc(auStack_2e8,alStack_348);
  func_0x000107282a30(plVar3,auStack_308);
  func_0x000107282a64(auStack_308);
  plVar4 = alStack_348;
  FUN_10727b578();
  func_0x0001072854dc(uStack_2c8);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_10727b578(alStack_348);
  puVar6 = auStack_308;
  func_0x0001072822ec(puVar6);
  func_0x00010728561c();
  func_0x0001072856b0();
  FUN_10724cbe8();
  FUN_107281910(puVar6 + 0x20,plVar4 + 4);
  *(long *)(lVar9 + 0x70) = plVar4[7];
  return plVar8;
}



/* Entry: 107281678; end: 107281887;  */

long * FUN_107281678(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar11;
  double dVar12;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  long alStack_f8 [8];
  undefined1 auStack_b8 [24];
  undefined8 *puStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  
  func_0x000107285500();
  lVar7 = *param_1;
  uStack_78 = extraout_x8;
  func_0x0001078696e8(auStack_b8);
  alStack_f8[0] = 0;
  alStack_f8[1] = 0;
  func_0x00010726acf0(alStack_f8);
  FUN_10727f5d8(param_2,auStack_b8,alStack_f8);
  FUN_10726b264(alStack_f8);
  FUN_10726b264(auStack_b8);
  dVar8 = 1.0;
  if (param_2 >> 0x20 != 0) {
    dVar8 = (double)(float)param_2 / 1000.0;
  }
  plVar6 = (long *)(lVar7 + 0x38);
  FUN_10726c7c0(*plVar6);
  func_0x000107285a80();
  FUN_10726c7c0(*(long *)(lVar7 + 0x40));
  func_0x000107285b84();
  lVar5 = *(long *)(lVar7 + 0x40);
  dVar11 = *(double *)(lVar5 + 0x10);
  dVar12 = *(double *)(*plVar6 + 0x10);
  dVar9 = *(double *)(lVar5 + 0x18) - *(double *)(*plVar6 + 0x18);
  FUN_107246670(dVar9,0xc066800000000000,0x4066800000000000);
  uVar1 = dVar8 == 0.0;
  dStack_118 = 1.79769313486232e+308;
  dStack_120 = 1.79769313486232e+308;
  dStack_108 = 1.79769313486232e+308;
  dStack_110 = 1.79769313486232e+308;
  if (0.0 < dVar8) {
    dVar10 = unaff_d10 - (double)(float)param_2;
    dStack_120 = ABS(dVar9) / dVar8;
    dStack_118 = ABS(*(double *)(*(long *)(lVar7 + 0x40) + 0x20) -
                     *(double *)(*(long *)(lVar7 + 0x38) + 0x20)) / dVar8;
    dStack_110 = SQRT(dVar10 * dVar10 + (unaff_d11 - unaff_d9) * (unaff_d11 - unaff_d9)) / dVar8;
    dStack_108 = ABS(dVar11 - dVar12) / dVar8;
  }
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_1109974a8;
  puVar2[2] = dStack_108;
  puVar2[1] = dStack_110;
  puVar2[4] = dStack_118;
  puVar2[3] = dStack_120;
  puStack_a0 = puVar2;
  FUN_107281888(alStack_f8,*(undefined8 *)(lVar7 + 0x48));
  FUN_1072818bc(auStack_98,alStack_f8);
  func_0x000107282a30();
  func_0x000107282a64(auStack_b8);
  plVar3 = alStack_f8;
  FUN_10727b578();
  func_0x0001072854dc(uStack_78);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_10727b578(alStack_f8);
  puVar4 = auStack_b8;
  func_0x0001072822ec(puVar4);
  func_0x00010728561c();
  func_0x0001072856b0();
  FUN_10724cbe8();
  FUN_107281910(puVar4 + 0x20,plVar3 + 4);
  *(long *)(lVar7 + 0x70) = plVar3[7];
  return plVar6;
}



/* Entry: 107281888; end: 1072818bb;  */

void FUN_107281888(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0();
  FUN_10724cbe8();
  FUN_107281910(param_1 + 0x20,unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1072818bc; end: 10728190f;  */

void FUN_1072818bc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072856b0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = 0x48;
  __Znwm();
  func_0x000107285b00();
  func_0x000105302f48();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(long *)(unaff_x20 + 0x18) = lVar1;
  return;
}



/* Entry: 107281910; end: 107281937;  */

void FUN_107281910(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107281938; end: 10728195b;  */

undefined8 FUN_107281938(undefined8 param_1)

{
  func_0x000107285b00();
  FUN_10727b578();
  return param_1;
}



/* Entry: 10728195c; end: 10728196f;  */

void FUN_10728195c(void)

{
  FUN_107281938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107281970; end: 1072819a7;  */

undefined8 FUN_107281970(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_107281a90();
  return uVar1;
}



/* Entry: 1072819a8; end: 1072819cb;  */

undefined8 FUN_1072819a8(long param_1,undefined8 param_2)

{
  func_0x000107285b00(param_2,param_1 + 8);
  FUN_107281888();
  return param_2;
}



/* Entry: 1072819cc; end: 107281a5b;  */

void FUN_1072819cc(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  func_0x00010728576c();
  func_0x000107281ab4();
  iVar1 = (int)unaff_x19 + 0x28;
  func_0x000107281b18();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x40);
    if ((*(long **)(lVar2 + 8) != (long *)0x0) &&
       ((*(byte *)(**(long **)(lVar2 + 8) + 0xb7) & 1) == 0)) {
      puVar4 = *(undefined8 **)(lVar2 + 0x458);
      for (puVar3 = *(undefined8 **)(lVar2 + 0x450); puVar3 != puVar4; puVar3 = puVar3 + 2) {
        (**(code **)(*(long *)*puVar3 + 0x10))();
      }
    }
  }
  func_0x000107285a08();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000104c003e8(unaff_x19 + 8);
  }
  return;
}



/* Entry: 107281a5c; end: 107281a83;  */

void FUN_107281a5c(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109972f8);
  func_0x000107285554();
  return;
}



/* Entry: 107281a84; end: 107281a8f;  */

undefined ** FUN_107281a84(void)

{
  return &PTR_DAT_1109972f8;
}



/* Entry: 107281a90; end: 107281b57;  */

undefined8 FUN_107281a90(undefined8 param_1)

{
  func_0x000107285b00();
  FUN_107281888();
  return param_1;
}



/* Entry: 107281b58; end: 107281b6f;  */

void FUN_107281b58(long param_1)

{
  func_0x000105302f48();
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 107281b70; end: 107281bcf;  */

bool FUN_107281b70(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (*(char *)(param_2 + 4) == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((*(byte *)(param_1 + 4) != 0) && (*(char *)(param_2 + 4) != '\0')) {
      bVar1 = false;
      if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
        bVar1 = param_1[1] == param_2[1];
      }
      if (bVar1) {
        bVar1 = param_1[3] == param_2[3] && param_1[2] == param_2[2];
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}



/* Entry: 107281bd0; end: 107281e4b;  */

void FUN_107281bd0(undefined8 param_1,double param_2,long param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6,byte param_7,double *param_8,undefined8 *param_9)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  dVar16 = *(double *)(param_4 + 0x78);
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  dVar11 = param_2;
  FUN_107259504(&uStack_90,param_6);
  dVar4 = dVar16;
  FUN_107246504(&uStack_90);
  dVar5 = dVar16;
  dVar12 = dVar11;
  FUN_107246504(param_6);
  dVar15 = dVar16;
  _log2();
  dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(param_4 + 0x4c));
  dVar7 = (dVar6 - param_8[1]) - param_8[3];
  dVar6 = (double)NEON_ucvtf((ulong)*(uint *)(param_4 + 0x50));
  dVar6 = (dVar6 - *param_8) - param_8[2];
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar7 = param_2 - dVar15;
  _exp2();
  dVar14 = dVar5 - dVar4;
  dVar7 = dVar6 / dVar7;
  _hypot(dVar14,dVar12 - dVar11);
  cVar1 = *(char *)(param_9 + 1);
  if (((param_7 & 1) == 0) && (cVar1 == '\0')) {
    dVar15 = 1.42;
  }
  else {
    uVar17 = *param_9;
    dVar18 = dVar14;
    func_0x0001074169e0(param_4);
    if (dVar14 == 0.0) {
      dVar15 = 1.0;
    }
    else {
      uVar8 = *(undefined8 *)(param_4 + 0x30);
      _log2(uVar8);
      uVar13 = NEON_fminnm(dVar15,param_2);
      uVar17 = NEON_fminnm(uVar17,uVar13);
      if (cVar1 == '\0') {
        uVar17 = uVar13;
      }
      NEON_fminnm(uVar8,uVar17);
      dVar18 = dVar18 - dVar15;
      _exp2(dVar18,uVar17);
      dVar15 = (dVar6 / dVar18) / dVar14;
      dVar15 = SQRT(dVar15 + dVar15);
    }
  }
  dVar18 = dVar15 * dVar15;
  dStack_b0 = dVar7;
  dStack_a8 = dVar6;
  dStack_a0 = dVar18;
  dStack_98 = dVar14;
  if (dVar14 == 0.0) {
    dVar9 = INFINITY;
    dVar10 = INFINITY;
  }
  else {
    dVar9 = 0.0;
    FUN_107281e4c(&dStack_b0);
    dVar10 = 1.0;
    FUN_107281e4c(&dStack_b0);
  }
  bVar2 = ABS(dVar14) < 1e-06 ||
          (0x7fefffffffffffff < (ulong)ABS(dVar9) || 0x7fefffffffffffff < (ulong)ABS(dVar10));
  if (ABS(dVar14) < 1e-06 ||
      (0x7fefffffffffffff < (ulong)ABS(dVar9) || 0x7fefffffffffffff < (ulong)ABS(dVar10))) {
    dVar10 = dVar7 / dVar6;
    _log();
    dVar10 = ABS(dVar10);
  }
  else {
    dVar10 = dVar10 - dVar9;
  }
  puVar3 = (undefined8 *)0xa8;
  __Znwm();
  *puVar3 = &PTR_DAT_110997318;
  puVar3[1] = dVar10 / dVar15;
  puVar3[2] = dVar15;
  *(bool *)(puVar3 + 3) = bVar2;
  puVar3[4] = dVar6;
  puVar3[5] = dVar9;
  puVar3[6] = dVar18;
  puVar3[7] = dVar14;
  puVar3[8] = dVar4;
  puVar3[9] = dVar11;
  puVar3[10] = dVar5;
  puVar3[0xb] = dVar12;
  puVar3[0xc] = dVar16;
  *(byte *)(puVar3 + 0xd) = param_7;
  puVar3[0xe] = param_1;
  puVar3[0xf] = param_2;
  puVar3[0x10] = dVar15;
  *(bool *)(puVar3 + 0x11) = bVar2;
  puVar3[0x12] = dVar7;
  puVar3[0x13] = dVar6;
  puVar3[0x14] = dVar9;
  *(undefined8 **)(param_3 + 0x18) = puVar3;
  *(double *)(param_3 + 0x20) = dVar15;
  *(double *)(param_3 + 0x28) = dVar10 / dVar15;
  return;
}



/* Entry: 107281e4c; end: 107281ea3;  */

void FUN_107281e4c(double param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  dVar6 = dVar2;
  dVar1 = -dVar4;
  if (param_1 == 0.0) {
    dVar6 = dVar3;
    dVar1 = dVar4;
  }
  dVar1 = (-(dVar3 * dVar3) + dVar2 * dVar2 + dVar5 * dVar5 * dVar4 * dVar1) /
          (dVar5 * dVar4 * (dVar6 + dVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbeedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log_11034c518)(SQRT(dVar1 * dVar1 + 1.0) - dVar1);
  return;
}



/* Entry: 107281ea4; end: 107281ee3;  */

undefined8 * FUN_107281ea4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *puVar1 = &PTR_DAT_110997318;
  _memcpy(puVar1 + 1,param_1 + 8,0xa0);
  return puVar1;
}



/* Entry: 107281ee4; end: 107281f13;  */

void FUN_107281ee4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110997318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_2 + 1,param_1 + 8,0xa0);
  return;
}



/* Entry: 107281f14; end: 1072820d3;  */

void FUN_107281f14(long param_1,double *param_2,double *param_3,double *param_4)

{
  bool bVar1;
  double *extraout_x8;
  long unaff_x20;
  long unaff_x21;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107285b9c();
  dVar6 = *param_2;
  dVar7 = dVar6 * *(double *)(param_1 + 8);
  dVar4 = *param_3;
  dVar5 = param_3[1];
  bVar1 = false;
  if ((*param_4 == dVar4) && (bVar1 = false, !NAN(param_4[1]) && !NAN(dVar5))) {
    bVar1 = param_4[1] == dVar5;
  }
  if (!bVar1) {
    if ((dVar6 != 1.0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      dVar4 = *(double *)(param_1 + 0x28);
      dVar5 = dVar4;
      _cosh();
      _tanh();
      _sinh();
    }
    FUN_107282108(param_1 + 0x40,param_1 + 0x50);
    func_0x000107285c24(*(undefined8 *)(param_1 + 0x60));
    func_0x000107285a80();
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    dVar7 = *(double *)(param_1 + 0x78);
    dVar8 = dVar6 * dVar7 + (1.0 - dVar6) * *(double *)(param_1 + 0x70);
  }
  else {
    dVar8 = *(double *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x88) == '\x01') {
      dVar2 = -*(double *)(param_1 + 0x80);
      if (*(double *)(param_1 + 0x98) <= *(double *)(param_1 + 0x90)) {
        dVar2 = *(double *)(param_1 + 0x80);
      }
      dVar7 = dVar7 * dVar2;
      _exp();
    }
    else {
      dVar3 = *(double *)(param_1 + 0xa0);
      dVar2 = dVar3;
      _cosh();
      dVar3 = dVar3 + dVar7 * *(double *)(param_1 + 0x80);
      _cosh();
      dVar7 = dVar2 / dVar3;
    }
    dVar7 = 1.0 / dVar7;
    _log2();
    dVar8 = dVar8 + dVar7;
    dVar7 = *(double *)(param_1 + 0x78);
  }
  dVar2 = *(double *)(unaff_x21 + 0x18);
  if (*(double *)(unaff_x20 + 0x18) != dVar2) {
    dVar3 = dVar6 * *(double *)(unaff_x20 + 0x18);
    dVar2 = dVar3 + (1.0 - dVar6) * dVar2;
    func_0x000107285a2c(dVar2,dVar3,0x4076800000000000);
  }
  if (!NAN(dVar8)) {
    dVar7 = dVar8;
  }
  dVar8 = *(double *)(unaff_x21 + 0x20);
  dVar6 = dVar6 * *(double *)(unaff_x20 + 0x20) + (1.0 - dVar6) * dVar8;
  if (*(double *)(unaff_x20 + 0x20) == dVar8) {
    dVar6 = dVar8;
  }
  *extraout_x8 = dVar4;
  extraout_x8[1] = dVar5;
  extraout_x8[2] = dVar7;
  extraout_x8[3] = dVar2;
  extraout_x8[4] = dVar6;
  return;
}



/* Entry: 1072820d4; end: 1072820fb;  */

void FUN_1072820d4(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997388);
  func_0x000107285554();
  return;
}



/* Entry: 1072820fc; end: 107282107;  */

undefined ** FUN_1072820fc(void)

{
  return &PTR_DAT_110997388;
}



/* Entry: 107282108; end: 10728212f;  */

void FUN_107282108(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1072821c8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107282130; end: 1072821c7;  */

undefined1  [16] FUN_107282130(double param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_40 [16];
  
  dVar2 = *param_2;
  dVar1 = (180.0 - (param_2[1] * 360.0) / (param_1 * 512.0)) * 0.017453292519943295;
  _exp(dVar1);
  _atan();
  FUN_107246514(dVar1 * 114.59155902616465 + -90.0,(dVar2 * 360.0) / (param_1 * 512.0) + -180.0,
                auStack_40,param_3);
  return auStack_40;
}



/* Entry: 1072821c8; end: 1072821eb;  */

undefined1  [16] FUN_1072821c8(double param_1,undefined8 param_2,double *param_3,double *param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *param_3 * (1.0 - param_1) + *param_4 * param_1;
  auVar1._8_8_ = param_3[1] * (1.0 - param_1) + param_4[1] * param_1;
  return auVar1;
}



/* Entry: 1072821ec; end: 10728227b;  */

void FUN_1072821ec(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107285e28();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x00010728557c();
  }
  else {
    func_0x0001072856e4();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 10728227c; end: 1072822c7;  */

long FUN_10728227c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072855a0();
    func_0x0001006393a8();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072822c8; end: 10728231f;  */

void FUN_1072822c8(void)

{
  long unaff_x19;
  
  func_0x000107285d18();
  func_0x0001072822ec(unaff_x19 + 0x38);
  return;
}



/* Entry: 107282320; end: 107282327;  */

void FUN_107282320(void)

{
  return;
}



/* Entry: 107282328; end: 107282363;  */

void FUN_107282328(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x30;
  __Znwm();
  func_0x000107285af0(&PTR_FUN_1109973a8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}


