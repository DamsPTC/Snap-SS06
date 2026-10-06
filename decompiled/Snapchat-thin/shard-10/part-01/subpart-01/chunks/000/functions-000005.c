/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10779aaac; end: 10779ac1b;  */

void FUN_10779aaac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_98 [24];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000633dc(param_3,param_4,&DAT_10f41019d,6);
  if ((int)param_3 == 0) {
    func_0x00010779bb14();
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_107799cb4(auStack_98,param_5,&uStack_78,param_6,*(long *)(param_2 + 8) + 8);
    if ((bStack_80 & 1) == 0) {
      param_1[1] = uStack_70;
      *param_1 = uStack_78;
      param_1[2] = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      uVar3 = 1;
    }
    else {
      if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + 8) != 0)) {
        func_0x00010779a818(&lStack_60,*(undefined8 *)(param_2 + 8));
        lVar1 = lStack_60;
        func_0x0001073e62c0(lStack_60 + 0x168,auStack_98);
        uVar2 = uStack_58;
        lStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_38 = *(undefined8 *)(param_2 + 0x10);
        uStack_40 = *(undefined8 *)(param_2 + 8);
        *(long *)(param_2 + 8) = lVar1;
        *(undefined8 *)(param_2 + 0x10) = uVar2;
        func_0x0001073ad4c4(&uStack_40);
        func_0x0001073e65f8(&uStack_50);
        func_0x00010779b684(&lStack_60);
      }
      else {
        func_0x0001073e62c0(*(long *)(param_2 + 8) + 0x168,auStack_98);
      }
      (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),param_2);
      uVar3 = 0;
      *(undefined1 *)param_1 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar3;
    func_0x0001073e6568(auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  return;
}



/* Entry: 10779b304; end: 10779b3d3;  */

long FUN_10779b304(void)

{
  long lVar1;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010779bb04();
  if (extraout_w8 == 1) {
    func_0x00010779bac4();
    func_0x000107383540(unaff_x20 + 0x40,unaff_x19 + 0x40);
    func_0x00010727dfac(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
    return unaff_x20 + 0xb0;
  }
  func_0x00010779bb54();
  lVar1 = unaff_x21;
  func_0x0001074e1450();
  *(undefined4 *)(unaff_x21 + 0x128) = 1;
  return lVar1;
}



/* Entry: 10779b554; end: 10779b55b;  */

void FUN_10779b554(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_20;
  undefined8 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x50) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  puStack_18 = param_3;
  func_0x00010779b59c(&lStack_20);
  return;
}



/* Entry: 10779b6e0; end: 10779b703;  */

void FUN_10779b6e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010779b704(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10779b85c; end: 10779b8e3;  */

undefined8 * FUN_10779b85c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  func_0x0001077839b8(param_1,param_2,0x1138369c0);
  *param_1 = &PTR_DAT_1109d95a0;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x0001073e6588(&uStack_48);
  return param_1;
}



/* Entry: 10779bc54; end: 10779bdef;  */

void FUN_10779bc54(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puStack_40;
  
  func_0x00010779d0bc();
  func_0x00010779d1ac();
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109d9988;
  func_0x000107785684(puStack_40 + 3,param_2);
  puStack_40[3] = &PTR_DAT_1109d9a20;
  func_0x0001074c4824(puStack_40 + 0x30,param_2 + 0x168);
  func_0x0001074c4824(puStack_40 + 0x3c,param_2 + 0x1c8);
  func_0x0001074c4824(puStack_40 + 0x48,param_2 + 0x228);
  func_0x0001074c4824(puStack_40 + 0x54,param_2 + 0x288);
  func_0x0001074c4824(puStack_40 + 0x60,param_2 + 0x2e8);
  func_0x0001074c4824(puStack_40 + 0x6c,param_2 + 0x348);
  func_0x0001074b9378(puStack_40 + 0x78,param_2 + 0x3a8);
  uVar2 = *(undefined8 *)(param_2 + 1000);
  uVar1 = *(undefined8 *)(param_2 + 0x3e0);
  uVar4 = *(undefined8 *)(param_2 + 0x3f8);
  uVar3 = *(undefined8 *)(param_2 + 0x3f0);
  puStack_40[0x83] = *(undefined8 *)(param_2 + 0x400);
  puStack_40[0x80] = uVar2;
  puStack_40[0x7f] = uVar1;
  puStack_40[0x82] = uVar4;
  puStack_40[0x81] = uVar3;
  func_0x0001074c4824(puStack_40 + 0x84,param_2 + 0x408);
  func_0x00010779d108();
  *param_1 = (long)(puStack_40 + 3);
  param_1[1] = (long)puStack_40;
  func_0x00010779d0e0();
  func_0x00010779d028(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074b8cd4(puStack_40 + 0x78);
  func_0x000107266a30(puStack_40 + 0x6c);
  func_0x000107266a30(puStack_40 + 0x60);
  func_0x000107266a30(puStack_40 + 0x54);
  func_0x000107266a30(puStack_40 + 0x48);
  do {
    func_0x000107266a30(puStack_40 + 0x3c);
    func_0x000107266a30(puStack_40 + 0x30);
    func_0x000107785780(puStack_40 + 3);
    __ZNSt3__119__shared_weak_countD2Ev(puStack_40);
    func_0x00010779d108();
    func_0x00010779d1cc();
  } while( true );
}



/* Entry: 10779cbbc; end: 10779cbe3;  */

void FUN_10779cbbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010779cbe4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10779cd20; end: 10779cd57;  */

undefined8 * FUN_10779cd20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d9a20;
  func_0x00010779cdb8(puVar1 + 0x2d);
  return param_1;
}



/* Entry: 10779cf2c; end: 10779cfab;  */

void FUN_10779cf2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x0001074b8cd4(lVar1);
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10779d314; end: 10779d357;  */

undefined8 FUN_10779d314(void)

{
  return 0;
}



/* Entry: 10779d6cc; end: 10779daa3;  */

undefined8 FUN_10779d6cc(void)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001077a2ee8();
  func_0x00010734936c();
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001077a2afc(&DAT_10f429808);
    func_0x00010778f294();
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    func_0x0001077a2afc(&DAT_10f429a2c);
    func_0x000107798450();
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    func_0x0001077a2afc(&DAT_10f42975d);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0xe8) != 0) {
    func_0x0001077a2afc(&DAT_10f4297b0);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0x130) != 0) {
    func_0x0001077a2afc(&DAT_10f42974a);
    func_0x000107798450();
  }
  if (*(int *)(unaff_x20 + 0x168) != 0) {
    func_0x0001077a2afc(&DAT_10f429987);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x1a0) != 0) {
    func_0x0001077a2afc(&DAT_10f4298c5);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x1d8) != 0) {
    func_0x0001077a2afc(&DAT_10f4299f4);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x210) != 0) {
    func_0x0001077a2afc(&DAT_10f4297d8);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x248) != 0) {
    func_0x0001077a2afc(&DAT_10f4298f2);
    func_0x0001073f687c(unaff_x20 + 0x218);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x248));
    func_0x0001077a2f4c();
    (*extraout_x8)();
  }
  if (*(int *)(unaff_x20 + 0x280) != 0) {
    func_0x0001077a2afc(&DAT_10f42996a);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x2b8) != 0) {
    func_0x0001077a2afc(&DAT_10f42922d);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0x2f0) != 0) {
    func_0x0001077a2afc(&DAT_10f4292fd);
    func_0x0001077a1a28();
  }
  if (*(int *)(unaff_x20 + 0x328) != 0) {
    func_0x0001077a2afc(&DAT_10f4295ce);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0x360) != 0) {
    func_0x0001077a2afc(&DAT_10f42950d);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0x400) != 0) {
    func_0x0001077a2afc(&DAT_10f4291e7);
    func_0x0001077a1adc();
  }
  if (*(int *)(unaff_x20 + 0x478) != 0) {
    func_0x0001077a2afc(&DAT_10f4294f7);
    func_0x00010778bbf8();
  }
  if (*(int *)(unaff_x20 + 0x4b8) != 0) {
    func_0x0001077a2afc(&DAT_10f429713);
    func_0x0001077a1bd4();
  }
  if (*(int *)(unaff_x20 + 0x530) != 0) {
    func_0x0001077a2afc(&DAT_10f429215);
    func_0x00010778bbf8();
  }
  if (*(int *)(unaff_x20 + 0x568) != 0) {
    func_0x0001077a2afc(&DAT_10f42972b);
    func_0x0001077a1a28();
  }
  if (*(int *)(unaff_x20 + 0x5a0) != 0) {
    func_0x0001077a2afc(&DAT_10f4296ab);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x5d8) != 0) {
    func_0x0001077a2afc(&DAT_10f42942a);
    func_0x0001077a2f3c();
  }
  if (*(int *)(unaff_x20 + 0x610) != 0) {
    func_0x0001077a2afc(&DAT_10f42952f);
    func_0x0001077a2fec();
  }
  if (*(int *)(unaff_x20 + 0x648) != 0) {
    func_0x0001077a2afc(&DAT_10f429371);
    func_0x0001073f7090(unaff_x20 + 0x618);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x648));
    func_0x0001077a2f4c();
    (*extraout_x8_00)();
  }
  if (*(int *)(unaff_x20 + 0x680) != 0) {
    func_0x0001077a2afc(&DAT_10f4294ba);
    func_0x0001073f71c0(unaff_x20 + 0x650);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x680));
    func_0x0001077a2f4c();
    (*extraout_x8_01)();
  }
  if (*(int *)(unaff_x20 + 0x6b8) != 0) {
    func_0x0001077a2afc(&DAT_10f4296cf);
    func_0x0001073f72f4(unaff_x20 + 0x688);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x6b8));
    func_0x0001077a2f4c();
    (*extraout_x8_02)();
  }
  if (*(int *)(unaff_x20 + 0x6f0) != 0) {
    func_0x0001077a2afc(&DAT_10f429299);
    func_0x0001077a2f3c();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x7d);
  return 1;
}



/* Entry: 10779e164; end: 10779e183;  */

long FUN_10779e164(long param_1,undefined4 param_2)

{
  func_0x0001077a2ddc(*(undefined8 *)(param_1 + 8),param_1,param_2);
  return param_1 + 0xd10;
}



/* Entry: 1077a09ac; end: 1077a0c4b;  */

void FUN_1077a09ac(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8_00;
  long unaff_x20;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x0001077a312c();
  func_0x0001077a2d10();
  lStack_80 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lStack_80 = (long)param_2;
  }
  ppuVar5 = &PTR_DAT_1109d9f58;
  uStack_38 = extraout_x8;
  func_0x00010778edbc(&PTR_DAT_1109d9f58,&lStack_80);
  uVar4 = true;
  if (ppuVar5 == &PTR_DAT_1109da180) goto LAB_1077a0a00;
  uVar4 = *(char *)(ppuVar5 + 1) == '\x16';
  switch(*(char *)(ppuVar5 + 1)) {
  case '\0':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x860);
    func_0x0001077a2f04();
    break;
  case '\x01':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x8c0);
    func_0x0001077a2f04();
    break;
  case '\x02':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x920);
    func_0x0001077a31dc();
    break;
  case '\x03':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x988);
    func_0x0001077a31dc();
    break;
  case '\x04':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x9f0);
    func_0x0001077a2f04();
    break;
  case '\x05':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0xa50);
    func_0x0001077a31dc();
    break;
  case '\x06':
    func_0x0001077a2f7c(*(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x8b8));
    func_0x0001077a2c50();
    break;
  case '\a':
    func_0x0001077a2f7c(*(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x918));
    func_0x0001077a2c50();
    break;
  case '\b':
    lVar6 = *(long *)(unaff_x20 + 8);
    uStack_78 = *(undefined8 *)(lVar6 + 0x968);
    lStack_80 = *(long *)(lVar6 + 0x960);
    uStack_68 = *(undefined8 *)(lVar6 + 0x978);
    uStack_70 = *(undefined8 *)(lVar6 + 0x970);
    uStack_60 = *(undefined8 *)(lVar6 + 0x980);
    func_0x0001077a2c50();
    break;
  case '\t':
    func_0x0001077a2f7c(*(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x9e8));
    func_0x0001077a2c50();
    break;
  case '\n':
    func_0x0001077a2f7c(*(undefined8 *)(*(long *)(unaff_x20 + 8) + 0xa48));
    func_0x0001077a2c50();
    break;
  case '\v':
    lVar6 = *(long *)(unaff_x20 + 8);
    uStack_78 = *(undefined8 *)(lVar6 + 0xa98);
    lStack_80 = *(long *)(lVar6 + 0xa90);
    uStack_68 = *(undefined8 *)(lVar6 + 0xaa8);
    uStack_70 = *(undefined8 *)(lVar6 + 0xaa0);
    uStack_60 = *(undefined8 *)(lVar6 + 0xab0);
    func_0x0001077a2c50();
    break;
  case '\f':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x168);
    func_0x0001077a2f04();
    break;
  case '\r':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x1a0);
    func_0x000107797c80();
    break;
  case '\x0e':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x1e8);
    func_0x000107784bf0();
    break;
  case '\x0f':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x220);
    func_0x000107784bf0();
    break;
  case '\x10':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 600);
    func_0x000107797c80();
    break;
  case '\x11':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x2a0);
    func_0x0001077a2f04();
    break;
  case '\x12':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x2d8);
    func_0x0001077a2f04();
    break;
  case '\x13':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x310);
    func_0x0001077a2f04();
    break;
  case '\x14':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x348);
    func_0x0001077a2f04();
    break;
  case '\x15':
    lVar6 = *(long *)(unaff_x20 + 8);
    if (*(int *)(lVar6 + 0x3b0) != 0) {
      uVar4 = *(int *)(lVar6 + 0x3b0) == 1;
      if ((bool)uVar4) {
        ppuVar5 = (undefined **)(ulong)*(byte *)(lVar6 + 0x380);
        func_0x0001077f28f0();
        func_0x0001077a307c();
        func_0x0001077a2ea8();
        uVar7 = 1;
      }
      else {
        ppuVar5 = *(undefined ***)(lVar6 + 0x380);
        func_0x0001077a2f18();
        func_0x0001077a30a0();
        func_0x0001077a2ea8();
        uVar7 = 2;
      }
      func_0x0001077a31f0(uVar7);
      break;
    }
  default:
LAB_1077a0a00:
    func_0x0001077a2d50();
    break;
  case '\x16':
    ppuVar5 = (undefined **)(*(long *)(unaff_x20 + 8) + 0x3b8);
    func_0x0001077a2f04();
  }
  func_0x0001077a2ae8(uStack_38);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x00010779d418(&uStack_c0,ppuVar5[1]);
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
    extraout_x8_00[1] = lStack_b8;
    *extraout_x8_00 = uStack_c0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_1077832b8(&uStack_b0);
    func_0x0001077a2fe4();
    return;
  }
  return;
}



/* Entry: 1077a0ed8; end: 1077a0f07;  */

void FUN_1077a0ed8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xfe03f80fe03f9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1020);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077a30a8();
  func_0x0001077a0f58();
  return;
}



/* Entry: 1077a1008; end: 1077a1027;  */

void FUN_1077a1008(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077a1028(&uStack_11,param_1);
  return;
}



/* Entry: 1077a1288; end: 1077a129b;  */

void FUN_1077a1288(void)

{
  func_0x000104bd47e8(&UNK_10f4291e0);
  func_0x0001077a12c0();
  return;
}



/* Entry: 1077a148c; end: 1077a14c3;  */

void FUN_1077a148c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xe98;
    func_0x0001074c49a8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1077a19c0; end: 1077a19e3;  */

void FUN_1077a19c0(void)

{
  func_0x0001077a2fbc();
  func_0x0001077f28f0();
  func_0x0001077a2dac();
  return;
}



/* Entry: 1077a1b20; end: 1077a1b53;  */

void FUN_1077a1b20(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001077a2ef8(*(undefined4 *)(param_2 + 0x98));
  func_0x0001077a2f4c();
  (*extraout_x8)();
  return;
}



/* Entry: 1077a1ca4; end: 1077a1cb3;  */

undefined8 * FUN_1077a1ca4(undefined8 param_1,undefined8 *param_2)

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
  
  func_0x0001077a2c5c();
  param_2 = (undefined8 *)*param_2;
  func_0x0001077a2f18();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
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



/* Entry: 1077a1dfc; end: 1077a1dff;  */

undefined8 FUN_1077a1dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
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
  return 1;
}



/* Entry: 1077a1f6c; end: 1077a1fab;  */

void FUN_1077a1f6c(void)

{
  func_0x0001077a2d2c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a20dc; end: 1077a20f7;  */

void FUN_1077a20dc(void)

{
  func_0x0001077a321c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a221c; end: 1077a2227;  */

undefined8 FUN_1077a221c(void)

{
  return 1;
}



/* Entry: 1077a24b0; end: 1077a24ef;  */

void FUN_1077a24b0(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077a302c();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077a3150();
    func_0x0001077a2e1c();
  }
  return;
}



/* Entry: 1077a2750; end: 1077a278f;  */

void FUN_1077a2750(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077a302c();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077a3150();
    func_0x0001077a2e1c();
  }
  return;
}



/* Entry: 1077a2964; end: 1077a2a07;  */

void FUN_1077a2964(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 3) != 0) {
    func_0x0001072ca6c8(puVar1);
    uVar5 = param_3[1];
    uVar3 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar5;
    *puVar1 = uVar3;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    return;
  }
  func_0x0001077a3094();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  lVar4 = param_2[1];
  lVar2 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = lVar4;
  *param_1 = lVar2;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 1077a3910; end: 1077a3933;  */

undefined ** FUN_1077a3910(void)

{
  return &PTR_DAT_1109d9ac0;
}



/* Entry: 1077a3f10; end: 1077a3f3b;  */

long * FUN_1077a3f10(long *param_1)

{
  func_0x0001077a3f3c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077a42ac; end: 1077a431f;  */

undefined8 FUN_1077a42ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001077a42e0(&uStack_28);
  return param_1;
}



/* Entry: 1077a4674; end: 1077a4ec3;  */

undefined8 FUN_1077a4674(long param_1,undefined8 *param_2)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  
  func_0x00010734936c(param_2);
  if (*(int *)(param_1 + 0x198) != 0) {
    func_0x0001077ac780(&DAT_10f429eff);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    func_0x0001077ac780(&DAT_10f429f45);
    func_0x0001077aa8dc(param_2,param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    func_0x0001077ac780(&DAT_10f42a0e6);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    func_0x0001077ac780(&DAT_10f429bf4);
    func_0x0001077aa99c(param_2,param_1 + 0x210);
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    func_0x0001077ac780(&DAT_10f429d2e);
    func_0x0001077a1adc(param_2,param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x318) != 0) {
    func_0x0001077ac780(&DAT_10f42a04b);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x358) != 0) {
    func_0x0001077ac780(&DAT_10f429f8e);
    func_0x0001077acfa8();
  }
  if (*(int *)(param_1 + 0x390) != 0) {
    func_0x0001077ac780(&DAT_10f429d85);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x3c8) != 0) {
    func_0x0001077ac780(&DAT_10f429e99);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    func_0x0001077ac780(&DAT_10f42a05d);
    func_0x0001077acdb0();
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    func_0x0001077ac780(&DAT_10f429c8b);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x470) != 0) {
    func_0x0001077ac780(&DAT_10f429c64);
    func_0x0001077acdb0();
  }
  if (*(int *)(param_1 + 0x4a8) != 0) {
    func_0x0001077ac780(&DAT_10f42a0cd);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x4e0) != 0) {
    func_0x0001077ac780(&DAT_10f429b8a);
    func_0x000107403790(param_1 + 0x4b0);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x4e0));
    func_0x0001077acbc0();
    (*extraout_x8)();
  }
  if (*(int *)(param_1 + 0x528) != 0) {
    func_0x0001077ac780(&DAT_10f429d93);
    func_0x000107403898(param_1 + 0x4e8);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x528));
    func_0x0001077acbc0();
    (*extraout_x8_00)();
  }
  if (*(int *)(param_1 + 0x570) != 0) {
    func_0x0001077ac780(&DAT_10f429e60);
    func_0x0001077acda8();
  }
  if (*(int *)(param_1 + 0x5a8) != 0) {
    func_0x0001077ac780(&DAT_10f429b1c);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x5e0) != 0) {
    func_0x0001077ac780(&DAT_10f42a10e);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x618) != 0) {
    func_0x0001077ac780(&DAT_10f429db4);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x658) != 0) {
    func_0x0001077ac780(&DAT_10f429d39);
    func_0x0001077acfa8();
  }
  if (*(int *)(param_1 + 0x690) != 0) {
    func_0x0001077ac780(&DAT_10f429d0d);
    func_0x000107403a20(param_1 + 0x660);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x690));
    func_0x0001077acbc0();
    (*extraout_x8_01)();
  }
  if (*(int *)(param_1 + 0x6d8) != 0) {
    func_0x0001077ac780(&DAT_10f42a165);
    func_0x0001077acda8();
  }
  if (*(int *)(param_1 + 0x710) != 0) {
    func_0x0001077ac780(&DAT_10f42a148);
    func_0x000107403aec(param_1 + 0x6e0);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x710));
    func_0x0001077acbc0();
    (*extraout_x8_02)();
  }
  if (*(int *)(param_1 + 0x748) != 0) {
    func_0x0001077ac780(&DAT_10f429c48);
    func_0x000107403bb8(param_1 + 0x718);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x748));
    func_0x0001077acbc0();
    (*extraout_x8_03)();
  }
  if (*(int *)(param_1 + 0x780) != 0) {
    func_0x0001077ac780(&DAT_10f429c0f);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x7b8) != 0) {
    func_0x0001077ac780(&DAT_10f42a0d7);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x7f0) != 0) {
    func_0x0001077ac780(&DAT_10f429bb0);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x828) != 0) {
    func_0x0001077ac780(&DAT_10f429dd1);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x860) != 0) {
    func_0x0001077ac780(&DAT_10f429b4b);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x898) != 0) {
    func_0x0001077ac780(&DAT_10f42a01f);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0x8d0) != 0) {
    func_0x0001077ac780(&DAT_10f42a037);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    func_0x0001077ac780(&DAT_10f429b73);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0x950) != 0) {
    func_0x0001077ac780(&DAT_10f429af5);
    FUN_10779861c(param_2,param_1 + 0x910);
  }
  if (*(int *)(param_1 + 0x998) != 0) {
    func_0x0001077ac780(&DAT_10f429edb);
    func_0x0001077acda8();
  }
  if (*(int *)(param_1 + 0x9d0) != 0) {
    func_0x0001077ac780(&DAT_10f429d5f);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xa08) != 0) {
    func_0x0001077ac780(&DAT_10f429fcf);
    func_0x000107403cc8(param_1 + 0x9d8);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xa08));
    func_0x0001077acbc0();
    (*extraout_x8_04)();
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    func_0x0001077ac780(&DAT_10f429ce8);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0xa78) != 0) {
    func_0x0001077ac780("text-anchor");
    func_0x0001077aa8dc(param_2,param_1 + 0xa48);
  }
  if (*(int *)(param_1 + 0xac8) != 0) {
    func_0x0001077ac780(&DAT_10f429da9);
    func_0x000107403d94(param_1 + 0xa80);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xac8));
    func_0x0001077acbc0();
    (*extraout_x8_05)();
  }
  if (*(int *)(param_1 + 0xb10) != 0) {
    func_0x0001077ac780(&DAT_10f4271b2);
    func_0x0001077acda8();
  }
  if (*(int *)(param_1 + 0xb48) != 0) {
    func_0x0001077ac780(&DAT_10f42a1b1);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0xb80) != 0) {
    func_0x0001077ac780(&DAT_10f42a196);
    func_0x0001077aa99c(param_2,param_1 + 0xb50);
  }
  if (*(int *)(param_1 + 3000) != 0) {
    func_0x0001077ac780(&DAT_10f429e32);
    func_0x000107404298(param_1 + 0xb88);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 3000));
    func_0x0001077acbc0();
    (*extraout_x8_06)();
  }
  if (*(int *)(param_1 + 0xbf0) != 0) {
    func_0x0001077ac780(&DAT_10f429bd5);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0xc28) != 0) {
    func_0x0001077ac780(&DAT_10f42a098);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xc60) != 0) {
    func_0x0001077ac780(&DAT_10f429ad6);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xc98) != 0) {
    func_0x0001077ac780(&DAT_10f429fa6);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xcd0) != 0) {
    func_0x0001077ac780(&DAT_10f429f1c);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xd10) != 0) {
    func_0x0001077ac780(&DAT_10f429f9a);
    func_0x0001077acfa8();
  }
  if (*(int *)(param_1 + 0xd48) != 0) {
    func_0x0001077ac780(&DAT_10f429ae7);
    func_0x0001077acbb8();
  }
  if (*(int *)(param_1 + 0xd80) != 0) {
    func_0x0001077ac780(&DAT_10f429b2f);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xdb8) != 0) {
    func_0x0001077ac780(&DAT_10f429aa7);
    func_0x0001077acdb0();
  }
  if (*(int *)(param_1 + 0xdf0) != 0) {
    func_0x0001077ac780(&DAT_10f429f7b);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xe28) != 0) {
    func_0x0001077ac780(&DAT_10f429e10);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xe60) != 0) {
    func_0x0001077ac780(&DAT_10f429ec3);
    func_0x0001077acdb0();
  }
  if (*(int *)(param_1 + 0xe98) != 0) {
    func_0x0001077ac780(&DAT_10f429f12);
    func_0x0001077acaf8();
  }
  if (*(int *)(param_1 + 0xed0) != 0) {
    func_0x0001077ac780(&DAT_10f429b3c);
    func_0x000107404448(param_1 + 0xea0);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xed0));
    func_0x0001077acbc0();
    (*extraout_x8_07)();
  }
  if (*(int *)(param_1 + 0xf18) != 0) {
    func_0x0001077ac780(&DAT_10f429cd3);
    func_0x0001074045f8(param_1 + 0xed8);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xf18));
    func_0x0001077acbc0();
    (*extraout_x8_08)();
  }
  if (*(int *)(param_1 + 0xf60) != 0) {
    func_0x0001077ac780(&DAT_10f429cfb);
    func_0x000107404930(param_1 + 0xf20);
    func_0x0001077acc1c();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xf60));
    func_0x0001077acbc0();
    (*extraout_x8_09)();
  }
  param_2[4] = param_2[4] + -0x10;
  func_0x000107349610(*param_2,0x7d);
  return 1;
}



/* Entry: 1077a8fa0; end: 1077a902f;  */

void FUN_1077a8fa0(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109da590;
  FUN_107785358(&PTR_DAT_1109da590,&UNK_1109dae48,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109dae48) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x0001077a5a0c(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x0001077ac93c();
  return;
}



/* Entry: 1077a95b8; end: 1077a95df;  */

long FUN_1077a95b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077a95e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077a96c0; end: 1077a96f7;  */

undefined8 * FUN_1077a96c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e7510(&uStack_30);
  return param_1;
}



/* Entry: 1077aa368; end: 1077aa36f;  */

void FUN_1077aa368(void)

{
  return;
}



/* Entry: 1077aa438; end: 1077aa453;  */

void FUN_1077aa438(void)

{
  func_0x0001077aca20();
  func_0x0001077acd10();
  return;
}



/* Entry: 1077aa500; end: 1077aa52f;  */

void FUN_1077aa500(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077acd80();
  func_0x0001075430ac(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 1077aa92c; end: 1077aa973;  */

void FUN_1077aa92c(undefined8 param_1,uint param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  FUN_1077f27dc(param_2 & 0xff);
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aaac0; end: 1077aab07;  */

undefined8 * FUN_1077aaac0(undefined8 *param_1)

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
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
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



/* Entry: 1077aac1c; end: 1077aac3f;  */

void FUN_1077aac1c(void)

{
  func_0x0001077acab8();
  func_0x0001077f262c();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aad7c; end: 1077aad7f;  */

undefined8 FUN_1077aad7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
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
  return 1;
}



/* Entry: 1077aaeb4; end: 1077aaeb7;  */

undefined8 FUN_1077aaeb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
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
  return 1;
}



/* Entry: 1077ab030; end: 1077ab077;  */

long FUN_1077ab030(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  lStack_a0 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    lStack_a0 = 0;
  }
  else {
    func_0x0001077acdc8();
    func_0x0001074033c8();
    puStack_98 = auStack_a8;
    func_0x0001077acb00(*(undefined4 *)(unaff_x19 + 0x30));
    func_0x0001077acb6c((&PTR_DAT_1109db120)[extraout_x8],&puStack_98);
  }
  return lStack_a0;
}



/* Entry: 1077ab1f8; end: 1077ab1ff;  */

void FUN_1077ab1f8(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab2b8; end: 1077ab2bf;  */

void FUN_1077ab2b8(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab350; end: 1077ab357;  */

void FUN_1077ab350(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab4f8; end: 1077ab51b;  */

undefined8 FUN_1077ab4f8(undefined8 param_1)

{
  func_0x0001077ab51c();
  return param_1;
}



/* Entry: 1077ab77c; end: 1077ab787;  */

undefined8 FUN_1077ab77c(void)

{
  return 1;
}



/* Entry: 1077ab9dc; end: 1077ab9e7;  */

undefined8 FUN_1077ab9dc(void)

{
  return 1;
}



/* Entry: 1077abc3c; end: 1077abc47;  */

undefined8 FUN_1077abc3c(void)

{
  return 1;
}



/* Entry: 1077abe8c; end: 1077abed7;  */

void FUN_1077abe8c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != -1 && *(int *)(param_2 + 0x48) == iVar1) {
    func_0x0001077acc28(*(int *)(param_2 + 0x48) == iVar1,param_1);
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077ac150; end: 1077ac18f;  */

void FUN_1077ac150(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077acc34();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077acc28();
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077ac360; end: 1077ac3af;  */

void FUN_1077ac360(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077acffc();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acfa0();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db498)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ac640; end: 1077ad037;  */

void FUN_1077ac640(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077adafc; end: 1077adb8f;  */

void FUN_1077adafc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1077adee8; end: 1077adfa7;  */

undefined8 * FUN_1077adee8(undefined8 *param_1)

{
  undefined1 auStack_40 [32];
  
  func_0x0001077ae0bc();
  func_0x0001073e7510(auStack_40);
  *param_1 = &PTR_DAT_1109db578;
  _bzero(param_1 + 4,0x179);
  _bzero(param_1 + 0x34,0x1b1);
  return param_1;
}



/* Entry: 1077ae1cc; end: 1077ae20f;  */

void FUN_1077ae1cc(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x000107433610(uStack_30 + 0x918);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae3d4; end: 1077ae413;  */

void FUN_1077ae3d4(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x7b8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae5d4; end: 1077ae613;  */

void FUN_1077ae5d4(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x1a8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae7f0; end: 1077ae833;  */

void FUN_1077ae7f0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x8f8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x8f0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x908) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x900) = param_1;
  *(undefined1 *)(extraout_x8 + 0x910) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aea08; end: 1077aea4b;  */

void FUN_1077aea08(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x7f8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x7f0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x808) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x800) = param_1;
  *(undefined1 *)(extraout_x8 + 0x810) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aec20; end: 1077aec63;  */

void FUN_1077aec20(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x898) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x890) = param_2;
  *(undefined8 *)(extraout_x8 + 0x8a8) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x8a0) = param_1;
  *(undefined1 *)(extraout_x8 + 0x8b0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aede0; end: 1077aee7b;  */

/* WARNING: Possible PIC construction at 0x0001077aee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077aee20) */
/* WARNING: Removing unreachable block (ram,0x0001077aee60) */
/* WARNING: Removing unreachable block (ram,0x0001077aee78) */
/* WARNING: Removing unreachable block (ram,0x0001077aee50) */

undefined8 * FUN_1077aede0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001074f9e38(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109b6550;
  puStack_30[1] = 0;
  func_0x0001077aeec8(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 1077af7b8; end: 1077af833;  */

/* WARNING: Possible PIC construction at 0x0001077af804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077af808) */
/* WARNING: Removing unreachable block (ram,0x0001077af81c) */
/* WARNING: Removing unreachable block (ram,0x0001077af80c) */

void FUN_1077af7b8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR_DAT_1131ad2e8;
  uStack_30 = param_2;
  (*(code *)PTR_DAT_1131ad358)(param_1,&uStack_30);
  func_0x0001072f5f6c(&ppuStack_38);
  return;
}



/* Entry: 1077afd34; end: 1077afd63;  */

void FUN_1077afd34(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x572620ae4c415d) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x2f0);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077b00dc();
  func_0x0001077afde8();
  return;
}



/* Entry: 1077afe28; end: 1077afebb;  */

undefined8 * FUN_1077afe28(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  _bzero(param_1 + 0xe,0xa0);
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  _bzero(param_1 + 0x3a,0xa0);
  *(undefined1 *)(param_1 + 0x4d) = 1;
  param_1[0x5a] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  return param_1;
}



/* Entry: 1077b0148; end: 1077b01f3;  */

/* WARNING: Possible PIC construction at 0x0001077b09bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001077b0a50) */
/* WARNING: Removing unreachable block (ram,0x0001077b09e0) */
/* WARNING: Removing unreachable block (ram,0x0001077b09c0) */
/* WARNING: Removing unreachable block (ram,0x0001077b095c) */

undefined **
FUN_1077b0148(undefined **param_1,char *param_2,undefined **param_3,undefined **param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined1 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar12;
  undefined8 extraout_x8_01;
  undefined **extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined **extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined **unaff_x19;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x21;
  long lVar15;
  undefined **unaff_x24;
  undefined8 ******ppppppuVar16;
  float fVar17;
  undefined1 auStack_870 [328];
  undefined *apuStack_728 [7];
  undefined *apuStack_6f0 [9];
  undefined8 uStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined8 *****pppppuStack_690;
  undefined *puStack_688;
  undefined1 auStack_680 [8];
  undefined *apuStack_678 [4];
  undefined *apuStack_658 [6];
  undefined *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [72];
  undefined8 uStack_588;
  undefined8 ****ppppuStack_560;
  undefined *puStack_558;
  undefined2 uStack_54a;
  undefined *puStack_548;
  undefined *apuStack_540 [5];
  undefined4 uStack_518;
  undefined4 uStack_510;
  byte bStack_508;
  byte bStack_460;
  byte bStack_428;
  byte bStack_420;
  undefined *puStack_418;
  undefined *apuStack_410 [5];
  undefined4 uStack_3e8;
  undefined4 auStack_3e0 [2];
  undefined1 auStack_3d8 [40];
  undefined4 uStack_3b0;
  undefined1 auStack_3a0 [24];
  undefined4 uStack_388;
  undefined4 uStack_370;
  undefined1 auStack_368 [48];
  undefined4 uStack_338;
  undefined4 auStack_330 [12];
  undefined4 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  undefined *apuStack_2e0 [2];
  char cStack_2d0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined *apuStack_238 [11];
  byte bStack_1e0;
  undefined1 auStack_1d1 [17];
  char cStack_1c0;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined2 uStack_172;
  undefined *puStack_170;
  undefined *apuStack_168 [14];
  byte bStack_f8;
  undefined1 auStack_f0 [16];
  char cStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined2 uStack_92;
  undefined *apuStack_90 [7];
  byte bStack_58;
  undefined1 uStack_50;
  char cStack_40;
  undefined8 uStack_38;
  undefined1 *puVar2;
  
  func_0x0001077b0e08();
  uStack_38 = extraout_x8;
  if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
    uStack_50 = 0;
    cStack_40 = '\0';
LAB_1077b01b4:
    ppuVar13 = (undefined **)0x1;
  }
  else {
    func_0x0001077b0eec();
    func_0x0001077b0e7c();
    in_ZR = cStack_40 == '\x01';
    if (!(bool)in_ZR) goto LAB_1077b01b4;
    uStack_92 = 0;
    func_0x0001077b0ec4();
    func_0x00010733b904();
    ppuVar13 = (undefined **)(ulong)bStack_58;
    if ((bStack_58 & 1) != 0) {
      param_2 = (char *)apuStack_90;
      func_0x00010727df88();
    }
    param_1 = apuStack_90;
    func_0x00010727e950();
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_a8 = &UNK_1077b01f4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001077b0e08();
  uStack_d8 = extraout_x8_00;
  ppuVar13 = param_3;
  if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
    auStack_f0[0] = 0;
    cStack_e0 = '\0';
    ppuVar5 = param_1;
code_r0x0001077b0288:
    ppuVar14 = (undefined **)0x1;
  }
  else {
    ppuVar5 = (undefined **)((long)param_2 + 8);
    puVar12 = *(undefined **)param_2;
    param_2 = "source";
    (**(code **)(puVar12 + 0x38))(auStack_f0);
    in_ZR = cStack_e0 == '\x01';
    unaff_x19 = param_1;
    unaff_x21 = param_3;
    if (!(bool)in_ZR) goto code_r0x0001077b0288;
    uStack_172 = 0;
    func_0x0001077b0ec4();
    func_0x000107323db4();
    ppuVar14 = (undefined **)(ulong)bStack_f8;
    if ((bStack_f8 & 1) != 0) {
      param_2 = (char *)apuStack_168;
      func_0x000107383540(param_1 + 1);
    }
    ppuVar5 = &puStack_170;
    func_0x00010732493c();
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_d8);
  if ((bool)in_ZR) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_188 = &UNK_1077b02c8;
  ppuStack_190 = &puStack_b0;
  func_0x0001077b0e08();
  uStack_1b8 = extraout_x8_01;
  if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
    auStack_1d1[1] = 0;
    cStack_1c0 = '\0';
code_r0x0001077b0354:
    ppuVar14 = param_4;
    unaff_x21 = ppuVar13;
    ppuVar13 = (undefined **)0x1;
  }
  else {
    func_0x0001077b0eec();
    func_0x0001077b0e7c();
    in_ZR = cStack_1c0 == '\x01';
    if (!(bool)in_ZR) goto code_r0x0001077b0354;
    ppuVar5 = (undefined **)auStack_1d1;
    param_2 = auStack_1d1 + 1;
    func_0x000107555b80(apuStack_238);
    ppuVar13 = (undefined **)(ulong)bStack_1e0;
    if ((bStack_1e0 & 1) != 0) {
      param_2 = (char *)apuStack_238;
      func_0x00010779b470();
      in_ZR = bStack_1e0 == 1;
      ppuVar5 = unaff_x19;
      if ((bool)in_ZR) {
        ppuVar5 = apuStack_238;
        func_0x0001073e6484();
      }
    }
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_1b8);
  if ((bool)in_ZR) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_248 = &SUB_1077b0394;
  ppuVar13 = ppuVar5;
  ppuVar7 = (undefined **)param_2;
  pcVar10 = (char *)unaff_x21;
  pppuStack_250 = (undefined8 ***)&ppuStack_190;
  func_0x0001077b0e08();
  iVar4 = (int)ppuVar13;
  uStack_2a8 = extraout_x8_03;
  uVar3 = *(char *)(ppuVar7 + 2) == '\x01';
  if ((bool)uVar3) {
    ppuVar13 = (undefined **)((long)param_2 + 8);
    (**(code **)(*(undefined **)param_2 + 0x30))();
    iVar4 = (int)ppuVar13;
    if (((ulong)ppuVar13 & 1) != 0) goto code_r0x0001077b03f0;
    ppuVar13 = (undefined **)&UNK_10f42a235;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
code_r0x0001077b084c:
    *(char *)extraout_x8_02 = '\0';
    *(char *)(extraout_x8_02 + 0x27) = '\0';
  }
  else {
code_r0x0001077b03f0:
    unaff_x24 = &puStack_418;
    func_0x0001077b0eac();
    if (iVar4 == 0) {
      ppuVar13 = (undefined **)&UNK_10f415ce6;
      func_0x0001077b0eac();
      if (iVar4 == 0) {
        func_0x0001077b0eac();
        if (iVar4 == 0) {
          func_0x0001077b0eac();
          if (iVar4 == 0) {
            func_0x00010002b838(apuStack_2e0,&UNK_10f42a254);
            func_0x000100610910(&puStack_548);
            func_0x00010048a6c8(&puStack_418,&puStack_548,&DAT_10f3b3c06);
            ppuVar13 = &puStack_418;
            func_0x000100066230(unaff_x21);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_418);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_548);
            unaff_x21 = apuStack_2e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            goto code_r0x0001077b084c;
          }
          uStack_3e8 = 0;
          uStack_3b0 = 0;
          uStack_338 = 0;
          uStack_300 = 0;
          puStack_548._0_4_ = 0x3eb33333;
          uStack_518 = 1;
          ppuVar5 = &puStack_418;
          func_0x0001077b0e54(&puStack_418);
          func_0x0001077b0e4c();
          puStack_548._0_4_ = 0;
          uStack_518 = 1;
          func_0x0001077b0e54(auStack_3e0);
          func_0x0001077b0e4c();
          func_0x0001077b0e64();
          func_0x0001077b0f20();
          ppuVar13 = apuStack_540;
          func_0x000107383540(auStack_3a0);
          func_0x00010732442c(apuStack_540);
          func_0x000104c2f714(apuStack_2e0);
          puStack_548 = (undefined *)CONCAT44(puStack_548._4_4_,0x3eb33333);
          uStack_518 = 1;
          func_0x0001077b0e54(auStack_330);
          func_0x0001077b0e4c();
          pcVar10 = "bottom";
          uVar6 = 0;
          func_0x0001077b0df8();
          if ((uVar6 & 1) == 0) {
code_r0x0001077b07a8:
            puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffffffffff00);
            bStack_428 = 0;
          }
          else {
            pcVar10 = &UNK_10f42a22d;
            uVar6 = 0;
            func_0x0001077b0df8();
            if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
            uVar6 = 0;
            func_0x0001077b0e9c();
            if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
            pcVar10 = "top";
            uVar6 = 0;
            func_0x0001077b0df8();
            if ((uVar6 & 1) == 0) goto code_r0x0001077b07a8;
            ppuVar13 = &puStack_418;
            func_0x0001074e157c(&puStack_548);
            bStack_428 = 1;
          }
          unaff_x21 = &puStack_418;
          func_0x0001073e652c();
          if ((bStack_428 & 1) == 0) goto code_r0x0001077b084c;
          unaff_x21 = apuStack_410;
          ppuVar13 = &puStack_548;
          func_0x0001074e157c();
          func_0x0001077b0e18(4);
          func_0x0001077b0e74();
          uVar3 = bStack_428 == 1;
          if ((bool)uVar3) {
            unaff_x21 = &puStack_548;
            func_0x0001073e652c();
          }
        }
        else {
          uStack_2e8 = 3;
          ppuVar13 = &puStack_418;
          unaff_x21 = extraout_x8_02;
          FUN_1077b0db0();
          func_0x0001077b0e74();
        }
      }
      else {
        auStack_3e0[0] = 0;
        uStack_388 = 0;
        auStack_330[0] = 0;
        uStack_2f8 = 0;
        puStack_548 = (undefined *)0x0;
        apuStack_540[0]._0_4_ = 0;
        uStack_510 = 1;
        func_0x0001077b0f0c();
        func_0x0001073e64d8(&puStack_548);
        if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
          apuStack_2e0[0]._0_1_ = 0;
          cStack_2d0 = '\0';
code_r0x0001077b05f8:
          func_0x0001077b0f04();
          pcVar10 = &UNK_10f42a1ef;
          uVar6 = 0;
          func_0x0001077b0e8c();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          pcVar10 = &UNK_10f42a1ff;
          uVar6 = 0;
          func_0x0001077b0e8c();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          pcVar10 = &UNK_10f42a20f;
          uVar6 = 0;
          func_0x0001077b0df8();
          if ((uVar6 & 1) == 0) goto code_r0x0001077b0800;
          ppuVar13 = &puStack_418;
          func_0x0001074e1490(&puStack_548);
          bStack_420 = 1;
        }
        else {
          ppuVar13 = (undefined **)&UNK_10f42a1e2;
          (**(code **)(*(undefined **)param_2 + 0x38))
                    (apuStack_2e0,(undefined **)((long)param_2 + 8));
          uVar3 = cStack_2d0 == '\x01';
          if (!(bool)uVar3) goto code_r0x0001077b05f8;
          uStack_54a = 0;
          pcVar10 = (char *)ppuVar14;
          func_0x000107797a58(&puStack_548,apuStack_2e0,unaff_x21,ppuVar14,(long)&uStack_54a + 1,
                              &uStack_54a);
          if ((bStack_508 & 1) != 0) {
            func_0x0001077b0f0c();
            func_0x000107554964(&puStack_548);
            ppuVar13 = unaff_x21;
            goto code_r0x0001077b05f8;
          }
          func_0x000107554964(&puStack_548);
          func_0x0001077b0f04();
          ppuVar13 = unaff_x21;
code_r0x0001077b0800:
          puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffffffffff00);
          bStack_420 = 0;
        }
        unaff_x21 = &puStack_418;
        func_0x0001073e6448();
        if ((bStack_420 & 1) == 0) goto code_r0x0001077b084c;
        unaff_x21 = apuStack_410;
        ppuVar13 = &puStack_548;
        func_0x0001074e1490();
        func_0x0001077b0e18(2);
        func_0x0001077b0e74();
        uVar3 = bStack_420 == 1;
        if ((bool)uVar3) {
          unaff_x21 = &puStack_548;
          func_0x0001073e6448();
        }
      }
    }
    else {
      uStack_3e8 = 0;
      uStack_370 = 0;
      uStack_338 = 0;
      puStack_548._0_4_ = 0x3f800000;
      uStack_518 = 1;
      ppuVar5 = &puStack_418;
      func_0x0001077b0e54(&puStack_418);
      func_0x0001077b0e4c();
      func_0x0001077b0e64();
      func_0x0001077b0f20();
      ppuVar13 = apuStack_540;
      func_0x000107383540(auStack_3d8);
      func_0x00010732442c(apuStack_540);
      func_0x000104c2f714(apuStack_2e0);
      puStack_548 = (undefined *)CONCAT44(puStack_548._4_4_,0x3f400000);
      uStack_518 = 1;
      func_0x0001077b0e54(auStack_368);
      func_0x0001077b0e4c();
      pcVar10 = &DAT_10f4154b4;
      uVar6 = 0;
      func_0x0001077b0df8();
      if ((uVar6 & 1) == 0) {
code_r0x0001077b0560:
        puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffffffffff00);
        bStack_460 = 0;
      }
      else {
        uVar6 = 0;
        func_0x0001077b0e9c();
        if ((uVar6 & 1) == 0) goto code_r0x0001077b0560;
        pcVar10 = &DAT_10f2e8c7d;
        uVar6 = 0;
        func_0x0001077b0df8();
        if ((uVar6 & 1) == 0) goto code_r0x0001077b0560;
        ppuVar13 = &puStack_418;
        func_0x0001074e1450(&puStack_548);
        bStack_460 = 1;
      }
      unaff_x21 = &puStack_418;
      func_0x0001073e6414();
      if ((bStack_460 & 1) == 0) goto code_r0x0001077b084c;
      unaff_x21 = apuStack_410;
      ppuVar13 = &puStack_548;
      func_0x0001074e1450();
      func_0x0001077b0e18(1);
      func_0x0001077b0e74();
      uVar3 = bStack_460 == 1;
      if ((bool)uVar3) {
        unaff_x21 = &puStack_548;
        func_0x0001073e6414();
      }
    }
  }
  func_0x0001077b0de4(uStack_2a8);
  if ((bool)uVar3) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_548);
  ppuVar7 = apuStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077b0e28();
  puVar1 = auStack_680;
  puVar2 = auStack_680;
  puStack_558 = &UNK_1077b08e8;
  ppppppuVar16 = (undefined8 ******)&ppppuStack_560;
  ppppuStack_560 = &pppuStack_250;
  func_0x0001077b0e08();
  puStack_628 = &UNK_10e52b660;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  uVar3 = *(int *)(ppuVar7 + 0x26) + -1 == 3;
  uStack_588 = extraout_x8_05;
  switch(*(int *)(ppuVar7 + 0x26) + -1) {
  case 0:
    func_0x0001077b0f34();
    ppuVar13 = &puStack_628;
    ppuVar8 = ppuVar7 + 8;
    puVar12 = &UNK_1077b095c;
    ppuVar9 = extraout_x8_04;
    goto code_r0x0001077b0bac;
  case 1:
    if (*(int *)(ppuVar7 + 8) != 0) {
      func_0x000107797c64(auStack_5d0,ppuVar7 + 1);
      func_0x000100060964(auStack_608,&UNK_10f42a1e2);
      func_0x000107267f10(&puStack_628,auStack_608);
      func_0x0001072d80fc();
      func_0x0001077b0eb4();
      func_0x000104c3323c(auStack_5d0);
    }
    ppuVar8 = (undefined **)&UNK_10f42a1ef;
    ppuVar13 = &puStack_628;
    pcVar10 = (char *)(ppuVar7 + 9);
    puVar12 = &UNK_1077b0a50;
    ppuVar9 = extraout_x8_04;
    goto code_r0x0001077b0c3c;
  case 2:
    ppuVar7 = apuStack_658;
    func_0x0001077b0e44(apuStack_658);
    func_0x0001077b0ee0();
    apuStack_678[0] = apuStack_658[0];
    break;
  case 3:
    func_0x0001077b0f34();
    ppuVar13 = (undefined **)&UNK_10f42a22d;
    ppuVar9 = &puStack_628;
    pcVar10 = (char *)(ppuVar7 + 8);
    puVar12 = &UNK_1077b09c0;
    ppuVar8 = extraout_x8_04;
    goto code_r0x0001077b0b1c;
  default:
    ppuVar7 = apuStack_678;
    func_0x0001077b0e44(apuStack_678);
    func_0x0001077b0ee0();
  }
  extraout_x8_04[1] = apuStack_678[0];
  extraout_x8_04[2] = ppuVar7[1];
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  func_0x000104c335c0(ppuVar7);
  ppuVar8 = &puStack_628;
  func_0x000104c33548();
  func_0x0001077b0de4(uStack_588);
  if ((bool)uVar3) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_5d0);
  ppuVar9 = &puStack_628;
  func_0x000104c33548();
  puVar12 = &UNK_1077b0b1c;
  func_0x0001077b0e28();
code_r0x0001077b0b1c:
  puVar2 = auStack_870 + 0x140;
  ppuStack_6a0 = ppuVar7;
  ppuStack_698 = ppuVar8;
  pppppuStack_690 = ppppppuVar16;
  puStack_688 = puVar12;
  func_0x0001077b0e08();
  uStack_6a8 = extraout_x8_06;
  ppuVar8 = ppuVar13;
  if (*(int *)((long)pcVar10 + 0x30) != 0) {
    func_0x000107784b60(apuStack_6f0,pcVar10);
    ppuVar9 = (undefined **)(auStack_870 + 0x148);
    func_0x000100060964(ppuVar9,ppuVar13);
    func_0x0001077b0f2c();
    ppuVar8 = apuStack_6f0;
    func_0x0001072d80fc();
    func_0x0001077b0ebc();
    func_0x0001077b0e5c();
    ppuVar7 = ppuVar13;
  }
  func_0x0001077b0de4(uStack_6a8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppuVar13 = ppuVar9;
    func_0x0001077b0e5c();
    puVar12 = &UNK_1077b0bac;
    func_0x0001077b0e28();
    ppppppuVar16 = &pppppuStack_690;
code_r0x0001077b0bac:
    puVar1 = puVar2 + -0xb0;
    *(undefined ***)(puVar2 + -0x20) = ppuVar7;
    *(undefined ***)(puVar2 + -0x18) = ppuVar9;
    *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar16;
    *(undefined **)(puVar2 + -8) = puVar12;
    ppppppuVar16 = (undefined8 ******)(puVar2 + -0x10);
    func_0x0001077b0e08();
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8_07;
    ppuVar9 = ppuVar13;
    if (*(int *)(ppuVar8 + 0xe) != 0) {
      func_0x00010778b104(puVar2 + -0x70,ppuVar8);
      ppuVar9 = (undefined **)(puVar2 + -0xa8);
      func_0x000100060964(ppuVar9,"source");
      func_0x0001077b0f2c();
      ppuVar8 = (undefined **)(puVar2 + -0x70);
      func_0x0001072d80fc();
      func_0x0001077b0ebc();
      func_0x0001077b0e5c();
    }
    func_0x0001077b0de4(*(undefined8 *)(puVar2 + -0x28));
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      ppuVar13 = ppuVar9;
      func_0x0001077b0e5c();
      puVar12 = &UNK_1077b0c3c;
      func_0x0001077b0e28();
code_r0x0001077b0c3c:
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = ppuVar5;
      *(char **)(puVar1 + -0x30) = param_2;
      *(undefined ***)(puVar1 + -0x28) = ppuVar14;
      *(undefined ***)(puVar1 + -0x20) = ppuVar7;
      *(undefined ***)(puVar1 + -0x18) = ppuVar9;
      *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar16;
      *(undefined **)(puVar1 + -8) = puVar12;
      func_0x0001077b0e08();
      *(undefined8 *)(puVar1 + -0x48) = extraout_x8_08;
      ppuVar5 = ppuVar8;
      if (*(int *)((long)pcVar10 + 0x50) != 0) {
        uVar3 = *(int *)((long)pcVar10 + 0x50) == 1;
        if ((bool)uVar3) {
          *(undefined8 *)(puVar1 + -0xe8) = 0;
          *(undefined8 *)(puVar1 + -0xe0) = 0;
          *(undefined8 *)(puVar1 + -0xd8) = 0;
          func_0x0001072ac134(puVar1 + -0xe8,9);
          for (lVar15 = 0; uVar3 = lVar15 == 0x24, !(bool)uVar3; lVar15 = lVar15 + 4) {
            fVar17 = *(float *)((long)pcVar10 + lVar15);
            *(undefined4 *)(puVar1 + -0x88) = 3;
            *(double *)(puVar1 + -0x80) = (double)fVar17;
            func_0x0001072aad1c(puVar1 + -0xe8,puVar1 + -0x88);
            func_0x0001077b0f18();
          }
          func_0x000107327958(puVar1 + -0x100,puVar1 + -0xe8);
          *(undefined4 *)(puVar1 + -0x88) = 0;
          *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0xf8);
          *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x100);
          *(undefined8 *)(puVar1 + -0x100) = 0;
          *(undefined8 *)(puVar1 + -0xf8) = 0;
          func_0x000104c33108(puVar1 + -0x100);
          func_0x000107269124(puVar1 + -0xe8);
          func_0x0001077b0f40();
          uVar11 = 1;
        }
        else {
          (**(code **)(**(long **)pcVar10 + 0x28))(puVar1 + -0x88);
          func_0x0001077b0f40();
          uVar11 = 2;
        }
        puVar1[-0x90] = uVar11;
        func_0x0001077b0f18();
        func_0x000100060964(puVar1 + -0x88,ppuVar8);
        func_0x0001077b0f2c();
        ppuVar5 = (undefined **)(puVar1 + -0xd0);
        func_0x0001072d80fc();
        func_0x0001077b0eb4();
        ppuVar13 = (undefined **)(puVar1 + -0xd0);
        func_0x000104c3323c();
        ppuVar7 = ppuVar8;
      }
      func_0x0001077b0de4(*(undefined8 *)(puVar1 + -0x48));
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        ppuVar14 = ppuVar13;
        func_0x0001077b0e28();
        *(undefined ***)(puVar1 + -0x120) = ppuVar7;
        *(undefined ***)(puVar1 + -0x118) = ppuVar13;
        *(undefined1 **)(puVar1 + -0x110) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x108) = FUN_1077b0db0;
        func_0x0001074e13c8(ppuVar14 + 1,ppuVar5 + 1);
        *(undefined1 *)(ppuVar14 + 0x27) = 1;
        return ppuVar14;
      }
      return ppuVar13;
    }
  }
  return ppuVar9;
}



/* Entry: 1077b0db0; end: 1077b0de3;  */

long FUN_1077b0db0(long param_1,long param_2)

{
  func_0x0001074e13c8(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x138) = 1;
  return param_1;
}



/* Entry: 1077b1244; end: 1077b1297;  */

float FUN_1077b1244(float param_1,long param_2,undefined8 *param_3)

{
  double dVar1;
  float fVar2;
  double dStack_20;
  double dStack_18;
  
  fVar2 = 0.0;
  if (*(int *)(*(undefined8 **)(param_2 + 0x18) + 1) == 1) {
    dStack_20 = (double)(float)*param_3;
    dStack_18 = (double)(float)((ulong)*param_3 >> 0x20);
    dVar1 = (double)param_1;
    FUN_107764890(dVar1,**(undefined8 **)(param_2 + 0x18),&dStack_20);
    fVar2 = (float)dVar1;
  }
  return fVar2;
}



/* Entry: 1077b143c; end: 1077b1467;  */

undefined8 * FUN_1077b143c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x222222222222223) {
    puVar1 = (undefined8 *)(param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109db640;
  func_0x0001077b14bc(param_1 + 3);
  return param_1;
}



/* Entry: 1077b15a8; end: 1077b15cb;  */

void FUN_1077b15a8(void)

{
  return;
}



/* Entry: 1077b18ac; end: 1077b192b;  */

void FUN_1077b18ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x0001074f8668(param_1 + 0x98);
  if ((*(char *)(param_1 + 0x50) == '\x01') && ((*(byte *)(param_1 + 0xb0) & 1) == 0)) {
    func_0x0001077f1c30(auStack_38,param_1 + 0x30,param_1 + 0x80);
    func_0x0001077506b8(param_3,auStack_38);
    func_0x0001073ebb78(auStack_38);
    if ((int)param_3 != 0) {
      func_0x0001077b189c(param_1);
    }
  }
  return;
}



/* Entry: 1077b2f78; end: 1077b2ff3;  */

void FUN_1077b2f78(void)

{
  func_0x0001077b3e80();
  func_0x0001077b2ff4();
  return;
}



/* Entry: 1077b3124; end: 1077b3187;  */

long FUN_1077b3124(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001077b3160();
    lVar2 = uVar1 + 0xe8;
  }
  else {
    lVar2 = param_1;
    func_0x0001077b3188();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xe8;
}



/* Entry: 1077b33f4; end: 1077b348b;  */

void FUN_1077b33f4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xe8) {
    func_0x0001077b3230(param_4,lVar1);
    param_4 = lStack_38 + 0xe8;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0xe8) {
    func_0x0001077b356c(param_2);
  }
  func_0x0001077b348c(&uStack_60);
  return;
}



/* Entry: 1077b3738; end: 1077b375f;  */

void FUN_1077b3738(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x0001056d1ce4();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107479ce4();
    func_0x000107471510();
    func_0x00010747a468();
    return;
  }
  return;
}



/* Entry: 1077b3940; end: 1077b3997;  */

void FUN_1077b3940(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077b3d80();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xe8;
    func_0x0001077b356c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077b3b24; end: 1077b3b4f;  */

void FUN_1077b3b24(long param_1)

{
  func_0x0001072745e4(param_1 + 0x18);
  func_0x000107269d6c();
  return;
}



/* Entry: 1077b3ffc; end: 1077b438f;  */

/* WARNING: Possible PIC construction at 0x0001077b4634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b4638) */

uint *****
FUN_1077b3ffc(uint *****param_1,uint *****param_2,uint *****param_3,uint *****param_4,
             uint *****param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint ****ppppuVar5;
  byte bVar6;
  uint ****ppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  uint uVar11;
  uint *****pppppuVar12;
  uint *****extraout_x8;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  uint *****pppppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  uint ****ppppuStack_1f0;
  uint ****ppppuStack_1e8;
  uint ****ppppuStack_1e0;
  uint ****ppppuStack_1d8;
  uint ****ppppuStack_1d0;
  uint ****ppppuStack_1c8;
  uint ****ppppuStack_1c0;
  uint ****ppppuStack_1b8;
  uint ****ppppuStack_1b0;
  uint ***pppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  uint ****ppppuStack_190;
  uint ****ppppuStack_188;
  uint ****ppppuStack_180;
  uint ****ppppuStack_178;
  uint ****ppppuStack_170;
  uint ***pppuStack_168;
  uint ****ppppuStack_160;
  undefined1 auStack_158 [40];
  byte bStack_130;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint ****ppppuStack_b8;
  uint ****ppppuStack_b0;
  uint ****ppppuStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  uint ****ppppuStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  undefined1 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_190 = (uint ****)0x0;
  ppppuStack_188 = (uint ****)0x0;
  ppppuStack_180 = (uint ****)0x0;
  pppppuVar15 = param_4 + 1;
  pppppuVar16 = pppppuVar15;
  pppppuVar14 = param_3;
  pppppuVar10 = param_4;
  (*(code *)(*param_4)[3])();
  if ((int)pppppuVar16 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  else {
    pppppuVar16 = (uint *****)0x0;
    ppppuStack_1c8 = (uint ****)&ppppuStack_180;
    ppppuStack_1f0 = (uint ****)param_2;
    ppppuStack_1e8 = (uint ****)param_3;
    ppppuStack_1e0 = (uint ****)param_4;
    ppppuStack_1d8 = (uint ****)param_5;
    ppppuStack_1d0 = (uint ****)param_1;
    do {
      pppppuVar14 = pppppuVar15;
      (*(code *)(*param_4)[4])();
      if (pppppuVar14 <= pppppuVar16) {
        ppppuStack_1b8 = ppppuStack_188;
        ppppuStack_1c0 = ppppuStack_190;
        ppppuStack_1b0 = ppppuStack_180;
        ppppuStack_190 = (uint ****)0x0;
        ppppuStack_188 = (uint ****)0x0;
        ppppuStack_180 = (uint ****)0x0;
        do {
          pppuStack_168._0_4_ = iRam00000001137262f8;
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1137262f8,0x10);
          if (bVar2) {
            cVar4 = ExclusiveMonitorsStatus();
            iRam00000001137262f8 = iRam00000001137262f8 + 1;
          }
        } while (cVar4 != '\0');
        ppppuStack_160 = ppppuStack_1f0;
        func_0x000107263b58(auStack_158,ppppuStack_1e8);
        puStack_118 = &UNK_10e52b660;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        puStack_f8 = &UNK_10e52b660;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        puStack_d8 = &UNK_10e52b660;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        ppppuStack_b0 = ppppuStack_1b8;
        ppppuStack_b8 = ppppuStack_1c0;
        ppppuStack_a8 = ppppuStack_1b0;
        ppppuStack_1c0 = (uint ****)0x0;
        ppppuStack_1b8 = (uint ****)0x0;
        ppppuStack_1b0 = (uint ****)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        pppppuVar14 = (uint *****)&pppuStack_168;
        func_0x0001077b3ed4(param_1);
        *(undefined1 *)(param_1 + 0x1b) = 1;
        func_0x000107266968(&pppuStack_168);
        func_0x00010726699c(&ppppuStack_1c0);
        break;
      }
      pppuStack_1a8 = (uint ***)0x0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      (*(code *)(*param_4)[5])(&ppppuStack_90,pppppuVar15,pppppuVar16);
      ppppuStack_170 = (uint ****)CONCAT71(ppppuStack_170._1_7_,1);
      ppppuStack_178 = (uint ****)((ulong)ppppuStack_178 & 0xffffffffffffff00);
      pppppuVar14 = (uint *****)&pppuStack_1a8;
      pppppuVar10 = param_5;
      func_0x00010733b904(&pppuStack_168,&ppppuStack_90,pppppuVar14,param_5,&ppppuStack_170,
                          &ppppuStack_178);
      func_0x0001072f5f6c(&ppppuStack_90);
      bVar6 = bStack_130;
      if (bStack_130 == 1) {
        if (ppppuStack_188 < ppppuStack_180) {
          pppppuVar14 = (uint *****)&pppuStack_168;
          func_0x00010727d9cc();
          param_2 = (uint *****)(ppppuStack_188 + 7);
          ppppuStack_188 = (uint ****)param_2;
        }
        else {
          pppppuVar8 = &ppppuStack_190;
          FUN_1077b4b2c(pppppuVar8,((long)ppppuStack_188 - (long)ppppuStack_190) / 0x38 + 1);
          ppppuVar5 = ppppuStack_188;
          ppppuVar7 = ppppuStack_190;
          if (pppppuVar8 == (uint *****)0x0) {
            pppppuVar17 = (uint *****)0x0;
            pppppuVar8 = (uint *****)0x0;
          }
          else {
            pppppuVar17 = (uint *****)ppppuStack_1c8;
            func_0x0001077b48a8();
          }
          lVar1 = (long)pppppuVar17 + ((long)ppppuVar5 - (long)ppppuVar7);
          pppppuVar14 = (uint *****)&pppuStack_168;
          func_0x00010727d9cc(lVar1);
          ppppuVar7 = ppppuStack_188;
          pppppuVar12 = (uint *****)ppppuStack_190;
          pppppuVar13 = (uint *****)
                        (lVar1 + (((long)ppppuStack_188 - (long)ppppuStack_190) / -0x38) * 0x38);
          ppppuStack_88 = (uint ****)&ppppuStack_178;
          ppppuStack_90 = ppppuStack_1c8;
          ppppuStack_80 = (uint ****)&ppppuStack_170;
          ppppuStack_170 = (uint ****)pppppuVar13;
          ppppuStack_178 = (uint ****)pppppuVar13;
          for (pppppuVar9 = (uint *****)ppppuStack_190; pppppuVar9 != (uint *****)ppppuVar7;
              pppppuVar9 = pppppuVar9 + 7) {
            pppppuVar14 = pppppuVar9;
            func_0x00010727d9cc(ppppuStack_170);
            ppppuStack_170 = ppppuStack_170 + 7;
          }
          uStack_78 = 1;
          for (; pppppuVar12 != (uint *****)ppppuVar7; pppppuVar12 = pppppuVar12 + 7) {
            func_0x000107266a30(pppppuVar12);
          }
          param_2 = (uint *****)(lVar1 + 0x38);
          func_0x0001077b499c(&ppppuStack_90);
          bVar2 = (uint *****)ppppuStack_190 != (uint *****)0x0;
          param_1 = (uint *****)ppppuStack_1d0;
          param_5 = (uint *****)ppppuStack_1d8;
          param_4 = (uint *****)ppppuStack_1e0;
          ppppuStack_190 = (uint ****)pppppuVar13;
          ppppuStack_188 = (uint ****)param_2;
          ppppuStack_180 = (uint ****)(pppppuVar17 + (long)pppppuVar8 * 7);
          if (bVar2) {
            __ZdlPv();
            param_1 = (uint *****)ppppuStack_1d0;
            param_5 = (uint *****)ppppuStack_1d8;
            param_4 = (uint *****)ppppuStack_1e0;
            ppppuStack_188 = (uint ****)param_2;
          }
        }
      }
      else {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0x1b) = 0;
      }
      func_0x00010727e950(&pppuStack_168);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_1a8);
      pppppuVar16 = (uint *****)((long)pppppuVar16 + 1);
    } while ((bVar6 & 1) != 0);
  }
  pppppuVar16 = &ppppuStack_190;
  func_0x00010726699c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppuVar16;
  }
  ___stack_chk_fail();
  func_0x00010726699c(&ppppuStack_1c0);
  pppppuVar8 = &ppppuStack_190;
  func_0x00010726699c();
  puVar19 = &UNK_1077b4390;
  func_0x0001077b4d98();
  pppppuVar17 = &ppppuStack_1f0;
  while( true ) {
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)((long)pppppuVar17 + -0x170);
    *(undefined8 *)((long)pppppuVar17 + -0x40) = unaff_d9;
    *(undefined8 *)((long)pppppuVar17 + -0x38) = unaff_d8;
    *(uint ******)((long)pppppuVar17 + -0x30) = param_5;
    *(uint ******)((long)pppppuVar17 + -0x28) = param_1;
    *(uint ******)((long)pppppuVar17 + -0x20) = param_2;
    *(uint ******)((long)pppppuVar17 + -0x18) = pppppuVar16;
    *(undefined1 **)((long)pppppuVar17 + -0x10) = puVar18;
    *(undefined **)((long)pppppuVar17 + -8) = puVar19;
    *(undefined8 *)((long)pppppuVar17 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pppppuVar9 = pppppuVar14;
    if (((ulong)pppppuVar14 & 0xffffffff) <
        (ulong)(((long)pppppuVar8[0x17] - (long)pppppuVar8[0x16]) / 0x38)) {
      iVar3 = *(int *)(pppppuVar8 + 0x19);
      *(int *)(pppppuVar8 + 0x19) = iVar3 + 1;
      if (iVar3 == 0) {
        pppppuVar16 = pppppuVar8;
        __ZNSt3__16chrono12steady_clock3nowEv();
        pppppuVar8[0x1a] = (uint ****)pppppuVar16;
      }
      else if ((*(char *)(pppppuVar8 + 9) == '\x01') &&
              (pppppuVar16 = pppppuVar8, __ZNSt3__16chrono12steady_clock3nowEv(),
              4999999999 < (long)pppppuVar16 - (long)pppppuVar8[0x1a])) {
        *(undefined4 *)((long)pppppuVar17 + -0x160) = 0x186;
        *(undefined4 *)((long)pppppuVar17 + -0x148) = 0;
        *(undefined8 *)((long)pppppuVar17 + -0x130) = 0;
        *(undefined8 *)((long)pppppuVar17 + -0x128) = 0;
        *(undefined ***)((long)pppppuVar17 + -0x140) = &PTR_DAT_110996720;
        *(undefined8 *)((long)pppppuVar17 + -0x138) = 0;
        *(undefined4 *)((long)pppppuVar17 + -0x120) = 0x186;
        *(undefined4 *)((long)pppppuVar17 + -0x118) = 0;
        *(undefined1 *)((long)pppppuVar17 + -0x114) = 1;
        *(undefined8 *)((long)pppppuVar17 + -0x108) = 0;
        *(undefined8 *)((long)pppppuVar17 + -0x100) = 0;
        *(undefined8 *)((long)pppppuVar17 + -0x110) = 0;
        pppppuVar16 = pppppuVar8 + 2;
        func_0x00010725ffc4(pppppuVar16);
        func_0x000104c2fe00((undefined1 *)((long)pppppuVar17 + -0xf0),pppppuVar16);
        puVar18 = (undefined1 *)((long)pppppuVar17 + -0x160);
        func_0x000107371bc4(puVar18,&UNK_10f42a2a0,(undefined1 *)((long)pppppuVar17 + -0xf0));
        func_0x00010726e6c0((undefined1 *)((long)pppppuVar17 + -0xb8),puVar18);
        func_0x000104c2f714((undefined1 *)((long)pppppuVar17 + -0xf0));
        func_0x000107262330((undefined1 *)((long)pppppuVar17 + -0x160));
        ppppuVar7 = pppppuVar8[1];
        *(undefined4 *)((long)pppppuVar17 + -0x160) = *(undefined4 *)(pppppuVar8 + 0x19);
        *(undefined4 *)((long)pppppuVar17 + -0x158) = 1;
        *(uint ****)((long)pppppuVar17 + -0x170) = *ppppuVar7;
        *(undefined4 *)((long)pppppuVar17 + -0x168) = 3;
        pppppuVar9 = (uint *****)((long)pppppuVar17 + -0xb8);
        func_0x00010743fa44(ppppuVar7,pppppuVar9,(undefined1 *)((long)pppppuVar17 + -0x160),
                            (undefined1 *)((long)pppppuVar17 + -0x170),7);
        *(undefined4 *)(pppppuVar8 + 0x19) = 0;
        func_0x000107262330((undefined1 *)((long)pppppuVar17 + -0xb8));
      }
      pppppuVar16 = (uint *****)(pppppuVar8[0x16] + ((ulong)pppppuVar14 & 0xffffffff) * 7);
      uVar11 = *(uint *)(pppppuVar16 + 6);
      pppppuVar12 = (uint *****)(ulong)uVar11;
      param_2 = pppppuVar8;
      param_1 = pppppuVar14;
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          uVar11 = *(uint *)pppppuVar16;
          pppppuVar10 = pppppuVar9;
        }
        else {
          *(undefined1 *)((long)pppppuVar17 + -0xb8) = 0;
          *(undefined1 *)((long)pppppuVar17 + -0x80) = 0;
          *(uint ******)((long)pppppuVar17 + -0x78) = pppppuVar8 + 10;
          unaff_d8 = 0;
          func_0x00010727f6f4(pppppuVar16,pppppuVar10,(undefined1 *)((long)pppppuVar17 + -0xb8));
          pppppuVar16 = (uint *****)((long)pppppuVar17 + -0xb8);
          func_0x00010724b3d8();
          uVar11 = (uint)unaff_d8;
        }
        pppppuVar12 = (uint *****)((ulong)uVar11 | 0x100000000);
        pppppuVar9 = pppppuVar10;
      }
    }
    else {
      pppppuVar12 = (uint *****)0x0;
      pppppuVar16 = pppppuVar8;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppppuVar17 + -0x48)) break;
    ___stack_chk_fail();
    pppppuVar8 = (uint *****)((long)pppppuVar17 + -0xb8);
    func_0x000107262330();
    func_0x0001077b4d98();
    *(uint ******)((long)pppppuVar17 + -0x1b0) = pppppuVar15;
    *(uint ******)((long)pppppuVar17 + -0x1a8) = param_4;
    *(uint ******)((long)pppppuVar17 + -0x1a0) = param_5;
    *(uint ******)((long)pppppuVar17 + -0x198) = param_1;
    *(uint ******)((long)pppppuVar17 + -400) = param_2;
    *(uint ******)((long)pppppuVar17 + -0x188) = pppppuVar16;
    *(undefined1 **)((long)pppppuVar17 + -0x180) = (undefined1 *)((long)pppppuVar17 + -0x10);
    *(undefined **)((long)pppppuVar17 + -0x178) = &UNK_1077b45c0;
    *extraout_x8 = (uint ****)0x0;
    extraout_x8[1] = (uint ****)0x0;
    extraout_x8[2] = (uint ****)0x0;
    func_0x0001077b4688(extraout_x8,((long)pppppuVar8[0x17] - (long)pppppuVar8[0x16]) / 0x38);
    pppppuVar16 = pppppuVar8 + 10;
    func_0x000107752094(pppppuVar16);
    pppppuVar14 = (uint *****)0x0;
    param_4 = (uint *****)0x38;
    if (((long)pppppuVar8[0x17] - (long)pppppuVar8[0x16]) / 0x38 == 0) {
      return pppppuVar16;
    }
    puVar19 = &UNK_1077b4638;
    pppppuVar17 = (uint *****)((long)pppppuVar17 + -0x1c0);
    pppppuVar10 = pppppuVar9;
    pppppuVar16 = extraout_x8;
    param_2 = pppppuVar9;
    param_1 = pppppuVar8;
    param_5 = pppppuVar14;
  }
  return pppppuVar12;
}



/* Entry: 1077b4894; end: 1077b48a7;  */

void FUN_1077b4894(void)

{
  func_0x000104bd47e8(&UNK_10f42a299);
  func_0x0001077b48cc();
  return;
}



/* Entry: 1077b4b2c; end: 1077b4b8b;  */

long * FUN_1077b4b2c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x492492492492492 < param_2) {
    FUN_1077b4894();
    plVar2 = param_3;
    for (; param_1 != param_2; param_1 = param_1 + 7) {
      func_0x000107342188(plVar2,param_1);
      plVar2 = plVar2 + 7;
      param_3 = param_3 + 7;
    }
    return param_3;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    plVar2 = (long *)0x492492492492492;
  }
  return plVar2;
}



/* Entry: 1077b4e60; end: 1077b4e67;  */

void FUN_1077b4e60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b52a8(&uStack_30,*param_2);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b5448();
  return;
}



/* Entry: 1077b51ac; end: 1077b51bf;  */

void FUN_1077b51ac(void)

{
  func_0x0001077b5288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b5334; end: 1077b5367;  */

void FUN_1077b5334(void)

{
  func_0x0001077b5468();
  func_0x0001077b5368();
  return;
}



/* Entry: 1077b55e4; end: 1077b563b;  */

void FUN_1077b55e4(long param_1,uint param_2)

{
  undefined8 uStack_40;
  
  if (*(byte *)(*(long *)(param_1 + 8) + 0x50) != param_2) {
    func_0x0001077b5824();
    *(char *)(uStack_40 + 0x50) = (char)param_2;
    func_0x0001077b584c();
    func_0x0001077b5834();
    func_0x0001077b5858();
    func_0x0001077b5844();
  }
  return;
}



/* Entry: 1077b5880; end: 1077b58e7;  */

undefined8 *
FUN_1077b5880(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = &PTR_DAT_1109db7c0;
  *(undefined1 *)(param_1 + 1) = param_2;
  func_0x000104c2fe00(param_1 + 2,param_3);
  *(undefined1 *)((long)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 100) = param_4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 1077b5e94; end: 1077b5ecb;  */

undefined8 * FUN_1077b5e94(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 0xc);
  func_0x0001077b6704(param_1 + 9);
  func_0x000107313354(param_1 + 7);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077b6248; end: 1077b62fb;  */

/* WARNING: Possible PIC construction at 0x0001075665a8: Changing call to branch */

void FUN_1077b6248(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar9;
  long unaff_x21;
  long *plVar10;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [40];
  undefined8 uStack_278;
  long lStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [168];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  undefined1 *puVar6;
  
  func_0x0001077b7208();
  func_0x00010785f1f4();
  uVar3 = param_1 + 0x2a0;
  func_0x00010724e330();
  uVar1 = ((uVar3 ^ 0xffffffff) & 0x101) == 0;
  if ((bool)uVar1) {
    if (*(int *)(unaff_x21 + 0x58) != 0) {
      puVar4 = (undefined8 *)(unaff_x21 + 0x48);
      func_0x0001077b6868();
      uVar8 = *puVar4;
      plVar10 = unaff_x20;
      func_0x0001075698a8();
      func_0x0001075696cc();
      lStack_270 = *plVar10;
      uStack_268 = (undefined4)plVar10[1];
      uStack_278 = uVar8;
      uStack_48 = extraout_x8;
      func_0x00010756854c(auStack_260,unaff_x19);
      func_0x000107569a38(auStack_238);
      func_0x000107568528(auStack_220,&uStack_278);
      func_0x0001073787dc(auStack_260);
      if (*unaff_x20 == 0) {
        puVar5 = auStack_238;
      }
      else {
        func_0x0001075666ec(&uStack_2d0,auStack_238);
        puStack_120 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)0x60;
        __Znwm();
        *puVar4 = &PTR_DAT_1109bdc30;
        puVar4[2] = uStack_2c8;
        puVar4[1] = uStack_2d0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        puVar4[3] = uStack_2c0;
        puVar4[5] = uStack_2b0;
        puVar4[4] = uStack_2b8;
        *(undefined4 *)(puVar4 + 6) = uStack_2a8;
        func_0x00010756854c(puVar4 + 7,auStack_2a0);
        puStack_120 = puVar4;
        func_0x00010756975c(auStack_1e0);
        func_0x000107273dcc(auStack_118,auStack_138,auStack_1e0);
        func_0x000107569aa4();
        func_0x00010756997c();
        func_0x000107273efc(auStack_118);
        func_0x000107273f24(auStack_1e0);
        func_0x0001006393ec(auStack_138);
        func_0x000107566718(&uStack_2d0);
        func_0x000107566718();
        func_0x000107569680(uStack_48);
        if ((bool)uVar1) {
          return;
        }
        ___stack_chk_fail();
        func_0x000107273efc(auStack_118);
        func_0x000107273f24(auStack_1e0);
        func_0x0001006393ec(auStack_138);
        func_0x000107566718(&uStack_2d0);
        puVar5 = auStack_238;
        func_0x000107566718();
        func_0x000107569710();
      }
      puVar6 = puVar5;
      func_0x0001075698e0();
      iVar2 = (int)puVar6;
      func_0x00010756998c();
      if (iVar2 != 0) {
        lVar9 = *(long *)(puVar5 + 0x18);
        func_0x0001072ab574(lVar9 + 0x100);
        lVar7 = lVar9 + 0x90;
        func_0x000107569b04();
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + 0x30);
          while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
            func_0x0001075685ec(plVar10 + 4,&UNK_10782d3f0,0,puVar5 + 0x30);
          }
        }
        __ZNSt3__15mutex6unlockEv(lVar9 + 0x100);
      }
      func_0x00010756978c();
      return;
    }
    func_0x0001077b6850(unaff_x21 + 0x48);
    func_0x0001077b7178();
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001077b7198();
      } while (extraout_w10 != 0);
    }
    func_0x0001077b62fc(&uStack_48,&LAB_10756648c,0);
    func_0x0001077b7280();
  }
  return;
}



/* Entry: 1077b66dc; end: 1077b6703;  */

long FUN_1077b66dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077b6888; end: 1077b689b;  */

void FUN_1077b6888(void)

{
  func_0x0001077b68ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b6a08; end: 1077b6a4b;  */

undefined8 * FUN_1077b6a08(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110995268;
  param_1[1] = 0;
  func_0x0001077b6a4c(param_1 + 3);
  return param_1;
}



/* Entry: 1077b6c78; end: 1077b6cf3;  */

void FUN_1077b6c78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_78 = *param_5;
  uStack_70 = *(undefined4 *)(param_5 + 1);
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00010756854c(auStack_68,param_6);
  func_0x0001077b6cf4(&uStack_80,param_2,&uStack_40,&uStack_78);
  *param_1 = uStack_80;
  func_0x0001073787dc(auStack_68);
  return;
}



/* Entry: 1077b6eac; end: 1077b6f07;  */

void FUN_1077b6eac(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_70 [48];
  
  func_0x0001077b7208();
  uVar1 = 0x50;
  __Znwm();
  func_0x0001077b6f08(auStack_70);
  func_0x0001077b7340();
  func_0x0001077b6f48();
  *extraout_x8 = uVar1;
  func_0x00010731e248(auStack_70);
  return;
}



/* Entry: 1077b6fe0; end: 1077b7003;  */

void FUN_1077b6fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x0001077b7004(param_1,&uStack_20,&uStack_21);
  return;
}



/* Entry: 1077b716c; end: 1077b7353;  */

void FUN_1077b716c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077b7174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1077b7550; end: 1077b7567;  */

void FUN_1077b7550(void)

{
  func_0x0001077b7568();
  return;
}



/* Entry: 1077b7710; end: 1077b7713;  */

void FUN_1077b7710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dba40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b7a00; end: 1077b7a13;  */

void FUN_1077b7a00(void)

{
  func_0x0001077b79bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b7d98; end: 1077b7ecb;  */

void FUN_1077b7d98(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077b8c7c();
  lVar6 = *(long *)(param_2 + 8);
  uStack_38 = extraout_x8_00;
  func_0x0001077b80b0(&uStack_50,1);
  puVar1 = puStack_40;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109dbae8;
  lVar4 = lVar6;
  func_0x0001077b706c(puStack_40 + 3);
  puVar1[3] = &PTR_DAT_1109dbcb8;
  lVar5 = *(long *)(lVar6 + 0x88);
  uVar7 = *(undefined8 *)(lVar6 + 0x80);
  puVar1[0x14] = *(undefined8 *)(lVar6 + 0x88);
  puVar1[0x13] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  lVar5 = *(long *)(lVar6 + 0x98);
  uVar7 = *(undefined8 *)(lVar6 + 0x90);
  puVar1[0x16] = *(undefined8 *)(lVar6 + 0x98);
  puVar1[0x15] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001077b81a4(&uStack_50);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001077b7ed4(&uStack_50);
  iVar3 = (int)lVar4;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      func_0x0001077b8c98();
      iVar3 = (int)lVar4;
    } while (extraout_w10_01 != 0);
  }
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar2 = &uStack_50;
  func_0x0001077b57e8();
  func_0x0001077b8d10();
  func_0x0001077b8c5c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      func_0x0001077b8cb0();
    }
    else {
      __ZNSt3__119__shared_weak_countD2Ev(puVar1 + 3);
      func_0x0001077b81a4(&uStack_50);
    }
    func_0x000104bd46a0(puVar2);
    func_0x000107346060(puVar2 + 0x12);
    if (extraout_x8 != 0) {
      do {
        func_0x00010734740c();
      } while (extraout_w11 != 0);
    }
    func_0x0001073269a0();
    func_0x0001073460e8();
    return;
  }
  return;
}



/* Entry: 1077b8040; end: 1077b80af;  */

long FUN_1077b8040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uStack_40;
  
  func_0x0001077b8c7c();
  func_0x0001077b8dc0();
  func_0x0001077b8108(uStack_40,param_2,param_3);
  func_0x0001077b8cc4();
  func_0x0001077b81a4();
  func_0x0001077b8c5c(extraout_x8);
  if ((bool)in_ZR) {
    return uStack_40;
  }
  ___stack_chk_fail();
  func_0x0001077b8cfc();
  func_0x0001077b81a4();
  func_0x0001077b8cb0();
  *(undefined8 *)(uStack_40 + 8) = param_2;
  lVar1 = uStack_40;
  func_0x0001077b80d8();
  *(long *)(uStack_40 + 0x10) = lVar1;
  return uStack_40;
}


