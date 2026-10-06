/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077e1dec; end: 1077e1e23;  */

long FUN_1077e1dec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_DAT_1109de2a0);
  func_0x000104c2f714(lVar1 + 0x90);
  func_0x00010726afc0();
  return param_1;
}



/* Entry: 1077e21a0; end: 1077e239b;  */

undefined1 * FUN_1077e21a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  long lVar5;
  long extraout_x9_00;
  long extraout_x10;
  long lVar6;
  long extraout_x10_00;
  int extraout_w11;
  int iVar7;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 uStack_38d;
  char cStack_38c;
  char cStack_38b;
  char cStack_38a;
  byte bStack_389;
  undefined1 auStack_388 [24];
  undefined1 *puStack_370;
  undefined1 auStack_350 [72];
  undefined1 auStack_308 [72];
  undefined1 auStack_2c0 [72];
  undefined1 auStack_278 [16];
  undefined4 uStack_268;
  undefined4 uStack_250;
  undefined4 uStack_238;
  undefined1 auStack_230 [72];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [416];
  
  puVar8 = auStack_350;
  func_0x0001077efc88();
  func_0x0001077ee374();
  func_0x0001077eea20(1);
  func_0x0001077e29c0(auStack_1d0);
  func_0x0001077e4110(auStack_230,unaff_x20 + 8,param_2);
  func_0x0001077e263c(auStack_1d0);
  if ((*(int *)(unaff_x20 + 0x90) == 0) || (in_ZR = *(int *)(unaff_x20 + 0x90) == 1, (bool)in_ZR)) {
    uStack_268 = 1;
    uStack_250 = uStack_268;
    uStack_238 = uStack_268;
  }
  else {
    func_0x0001077f0de8(auStack_1d0);
    func_0x0001077ef0c4(auStack_278,unaff_x20 + 0x60,auStack_1d0);
    func_0x0001077f0af4();
  }
  func_0x0001077e41f0(auStack_2c0,unaff_x20 + 0x98,param_2);
  func_0x0001077e41f0(auStack_308,unaff_x20 + 0xd0,param_2);
  func_0x0001077e410c(auStack_1e8);
  if ((*(int *)(unaff_x20 + 0x150) == 0) || (in_ZR = *(int *)(unaff_x20 + 0x150) == 1, (bool)in_ZR))
  {
    func_0x0001077f02c4(1);
  }
  else {
    func_0x0001077f0de8(auStack_1d0);
    func_0x0001077ef0c4(auStack_350,unaff_x20 + 0x108,auStack_1d0);
    func_0x0001077f0af4();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  func_0x0001077ef1ec(auStack_230);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_230);
  func_0x0001077ef1ec(auStack_278);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_278);
  func_0x0001077ef1ec(auStack_2c0);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_2c0);
  func_0x0001077ef1ec(auStack_308);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_308);
  func_0x0001077ef1ec();
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_350);
  func_0x0001077ef870();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077f02a0();
  func_0x0001077f0ba0();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  uStack_38d = SUB81(auStack_1e8,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077f02a0();
  func_0x0001077f0ba0();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  puStack_370 = puVar8;
  func_0x0001077ef1b8();
  FUN_1077e4248();
  cVar2 = (char)unaff_x19;
  cStack_38c = cVar2 + '`';
  func_0x0001077e42ac();
  cStack_38b = cVar2 + -0x68;
  func_0x0001077df020();
  cStack_38a = cVar2 + -0x30;
  func_0x0001077df020();
  if (*(int *)(unaff_x19 + 0x150) == 0) {
    bStack_389 = 1;
  }
  else {
    bStack_389 = *(byte *)(unaff_x19 + 0x118) >> 1 & 1;
    if (*(int *)(unaff_x19 + 0x150) == 1) {
      bStack_389 = 1;
    }
  }
  func_0x0001077df080(auStack_388,&uStack_38d,5);
  func_0x0001077ee5f4();
  uVar4 = extraout_x8;
  lVar5 = extraout_x9;
  lVar6 = extraout_x10;
  iVar7 = extraout_w11;
  while( true ) {
    uVar3 = lVar5 == lVar6 && (int)uVar4 == iVar7;
    puVar8 = (undefined1 *)(ulong)(byte)uVar3;
    if (((bool)uVar3) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar5 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar3) {
      uVar1 = extraout_w8 + 1;
    }
    uVar4 = (ulong)uVar1;
    lVar6 = extraout_x10_00;
    iVar7 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return puVar8;
}



/* Entry: 1077e2590; end: 1077e25cb;  */

void FUN_1077e2590(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001077ef34c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001077e24b8(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e2760; end: 1077e278b;  */

undefined1 * FUN_1077e2760(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x0001077e278c();
  return param_1;
}



/* Entry: 1077e2868; end: 1077e2903;  */

undefined8 * FUN_1077e2868(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  
  func_0x0001077ee374();
  func_0x0001077f0410();
  func_0x0001077dde7c();
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  func_0x0001077e2964(puStack_c8,uStack_c0,param_1);
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return puStack_c8;
  }
  ___stack_chk_fail();
  func_0x0001077eebdc();
  func_0x0001077ef650();
  func_0x0001077ef0b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puStack_c8 + 6);
  func_0x0001077ef1b8(puStack_c8);
  func_0x0001077e2660();
  puVar1 = param_1;
  func_0x0001077ef0d4();
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return param_1;
}



/* Entry: 1077e2d5c; end: 1077e2e27;  */

void FUN_1077e2d5c(undefined8 param_1)

{
  undefined8 *extraout_x8;
  
  func_0x0001077f0f94();
  func_0x0001077f06b8();
  func_0x0001077e30e8();
  *extraout_x8 = param_1;
  return;
}



/* Entry: 1077e31f0; end: 1077e31f3;  */

long FUN_1077e31f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109de6f8);
  func_0x000104c2f714(lVar1 + 0x120);
  func_0x0001077e34e0();
  return param_1;
}



/* Entry: 1077e3570; end: 1077e360f;  */

long FUN_1077e3570(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_2 != 0) {
      func_0x0001077efcb8();
      goto LAB_1077e35cc;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
LAB_1077e35cc:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001077eef78();
  func_0x0001077ef068();
  func_0x0001077efa58();
  for (; unaff_x21 != param_2; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e3648();
  }
  return param_2;
}



/* Entry: 1077e3724; end: 1077e3747;  */

void FUN_1077e3724(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e3750(extraout_x9);
  return;
}



/* Entry: 1077e3874; end: 1077e3893;  */

void FUN_1077e3874(void)

{
  func_0x0001077ee210();
  func_0x0001077e3894();
  return;
}



/* Entry: 1077e3984; end: 1077e39c3;  */

void FUN_1077e3984(void)

{
  func_0x0001077ee210();
  func_0x0001077e39a4();
  return;
}



/* Entry: 1077e3b80; end: 1077e3b9b;  */

void FUN_1077e3b80(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e27bc();
    func_0x0001077f1b84();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e3bf8();
  func_0x0001077e3c28(auStack_70);
  return;
}



/* Entry: 1077e3cf8; end: 1077e3d37;  */

void FUN_1077e3cf8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001077e3d38(*unaff_x20);
  func_0x0001077e3e50(unaff_x19 + 8,unaff_x20 + 1);
  return;
}



/* Entry: 1077e3f84; end: 1077e3fdb;  */

void FUN_1077e3f84(void)

{
  uint extraout_w8;
  
  func_0x0001077f199c();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077e2684();
  }
  return;
}



/* Entry: 1077e4248; end: 1077e42ab;  */

byte FUN_1077e4248(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
    func_0x0001077f0cc4();
    if ((int)lVar2 == 0) {
      bVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x10);
      do {
        if (uVar5 == uVar1) {
          return 1;
        }
        uVar3 = uVar5;
        FUN_1077e4248();
        uVar5 = uVar5 + 0x58;
        bVar4 = 0;
      } while ((uVar3 & 1) != 0);
    }
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x10) >> 1 & 1;
  }
  return bVar4;
}



/* Entry: 1077e4520; end: 1077e4523;  */

long FUN_1077e4520(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109de790);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x468);
  func_0x0001077f157c();
  func_0x0001077e49b4();
  return param_1;
}



/* Entry: 1077e4c7c; end: 1077e4ccf;  */

void FUN_1077e4c7c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [64];
  
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x0001077e37f4(auStack_70);
  lVar1 = unaff_x20 + 0x120;
  func_0x0001077efae0(lVar1);
  func_0x0001077e50d4();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eea08();
  func_0x0001077ef068();
  func_0x0001077f0070();
  func_0x0001077efda8(lVar1 + 0x198);
  return;
}



/* Entry: 1077e5120; end: 1077e5153;  */

void FUN_1077e5120(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077e5170();
  return;
}



/* Entry: 1077e5270; end: 1077e529f;  */

void FUN_1077e5270(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077e52f0();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e55e8; end: 1077e55eb;  */

void FUN_1077e55e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1077e5788; end: 1077e57e3;  */

void FUN_1077e5788(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e244c();
    func_0x0001077f1858();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e57e4();
  func_0x0001077e5814(auStack_60);
  return;
}



/* Entry: 1077e593c; end: 1077e5953;  */

void FUN_1077e593c(void)

{
  func_0x0001077e5954();
  return;
}



/* Entry: 1077e5cb0; end: 1077e5e0f;  */

ulong FUN_1077e5cb0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  long extraout_x10;
  long lVar4;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  ulong unaff_x19;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_2c0 [72];
  undefined1 auStack_278 [16];
  undefined4 uStack_268;
  undefined4 uStack_250;
  undefined4 uStack_238;
  undefined1 auStack_230 [72];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [416];
  
  func_0x0001077efc88();
  func_0x0001077ee374();
  func_0x0001077eea20(1);
  func_0x0001077e63ec(auStack_1d0);
  func_0x0001077e99a0(auStack_230,unaff_x20 + 8,param_2);
  func_0x0001077e608c(auStack_1d0);
  if ((*(int *)(unaff_x20 + 0x90) == 0) || (in_ZR = *(int *)(unaff_x20 + 0x90) == 1, (bool)in_ZR)) {
    uStack_268 = 1;
    uStack_250 = uStack_268;
    uStack_238 = uStack_268;
  }
  else {
    func_0x0001077f0de8(auStack_1d0);
    func_0x0001077ef0c4(auStack_278,unaff_x20 + 0x60,auStack_1d0);
    func_0x0001074332fc(auStack_1d0);
  }
  func_0x0001077e999c(auStack_1e8);
  if ((*(int *)(unaff_x20 + 0xe0) == 0) || (in_ZR = *(int *)(unaff_x20 + 0xe0) == 1, (bool)in_ZR)) {
    func_0x0001077f02c4(1);
  }
  else {
    func_0x0001077f0de8(auStack_1d0);
    func_0x0001077ef0c4(auStack_2c0,unaff_x20 + 0x98,auStack_1d0);
    func_0x0001074332fc(auStack_1d0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  func_0x0001077df7bc();
  func_0x0001077ef870();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  func_0x0001077ef1b8();
  func_0x0001077e9a48();
  func_0x0001077e42ac();
  func_0x0001077f0bd8();
  func_0x0001077ee5f4();
  uVar6 = extraout_x8;
  lVar3 = extraout_x9;
  lVar4 = extraout_x10;
  iVar5 = extraout_w11;
  while( true ) {
    uVar2 = lVar3 == lVar4 && (int)uVar6 == iVar5;
    uVar6 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar3 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar4 = extraout_x10_00;
    iVar5 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return uVar6;
}



/* Entry: 1077e5fe0; end: 1077e601b;  */

void FUN_1077e5fe0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001077ef34c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    func_0x0001077e5f08(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e61b0; end: 1077e61db;  */

undefined1 * FUN_1077e61b0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x0001077e61dc();
  return param_1;
}



/* Entry: 1077e62a8; end: 1077e632f;  */

undefined8 * FUN_1077e62a8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  
  func_0x0001077ee374();
  func_0x0001077f1a60();
  func_0x0001077f0410();
  func_0x0001077dde7c();
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  func_0x0001077e6390(puStack_98,uStack_90,param_1);
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return puStack_98;
  }
  ___stack_chk_fail();
  func_0x0001077eebdc();
  func_0x0001077ef650();
  func_0x0001077ef0b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puStack_98 + 5);
  func_0x0001077ef1b8(puStack_98);
  func_0x0001077e60b0();
  puVar1 = param_1;
  func_0x0001077ef0d4();
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return param_1;
}



/* Entry: 1077e6a58; end: 1077e6be3;  */

void FUN_1077e6a58(undefined8 param_1)

{
  undefined8 *extraout_x8;
  
  func_0x0001077f0928();
  func_0x0001077f16d0();
  func_0x0001077f1230();
  func_0x0001077e737c();
  *extraout_x8 = param_1;
  return;
}



/* Entry: 1077e7314; end: 1077e735b;  */

void FUN_1077e7314(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0001077ee9f8();
  func_0x0001072f6da0(auStack_40);
  func_0x0001077eeee0();
  func_0x0001077e9020();
  func_0x0001077effa8();
  return;
}



/* Entry: 1077e7630; end: 1077e770b;  */

undefined4 * FUN_1077e7630(void)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *in_x3;
  undefined4 *in_x4;
  undefined8 *in_x5;
  undefined4 *in_x6;
  undefined8 *in_x7;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puStack_4a0;
  undefined8 *puStack_498;
  undefined1 *puStack_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined1 *puStack_430;
  undefined1 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined1 *puStack_398;
  undefined8 *puStack_390;
  undefined4 *puStack_388;
  undefined4 *puStack_380;
  undefined8 *puStack_378;
  undefined4 *puStack_370;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [272];
  
  func_0x0001077efc88();
  func_0x0001077ee374();
  _bzero(&puStack_488,0x330);
  func_0x0001077e7cfc(auStack_158);
  _bzero(auStack_140,0x108);
  func_0x0001077dde7c(&puStack_4a0,&puStack_488,0x2e);
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  puVar1 = puStack_4a0;
  puVar2 = puStack_498;
  func_0x0001077e7d04();
  func_0x0001077f0c28();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001077eebdc();
  func_0x0001077f0c28();
  func_0x0001077ef0b0();
  *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
  uVar3 = *unaff_x19;
  *(undefined8 *)(puVar1 + 3) = unaff_x19[1];
  *(undefined8 *)(puVar1 + 1) = uVar3;
  puVar1[5] = *in_x3;
  puVar1[6] = *in_x4;
  uVar3 = *in_x5;
  *(undefined8 *)(puVar1 + 9) = in_x5[1];
  *(undefined8 *)(puVar1 + 7) = uVar3;
  puVar1[0xb] = *in_x6;
  *(undefined8 *)(puVar1 + 0xc) = *in_x7;
  puVar1[0xe] = *puStack_4a0;
  uVar3 = *puStack_498;
  *(undefined8 *)(puVar1 + 0x11) = puStack_498[1];
  *(undefined8 *)(puVar1 + 0xf) = uVar3;
  *(undefined1 *)(puVar1 + 0x13) = *puStack_490;
  *(undefined1 *)((long)puVar1 + 0x4d) = *puStack_488;
  *(undefined1 *)((long)puVar1 + 0x4e) = *puStack_480;
  *(undefined1 *)((long)puVar1 + 0x4f) = *puStack_478;
  *(undefined1 *)(puVar1 + 0x14) = *puStack_470;
  *(undefined1 *)((long)puVar1 + 0x51) = *puStack_468;
  uVar4 = puStack_460[1];
  uVar3 = *puStack_460;
  puVar1[0x19] = *(undefined4 *)(puStack_460 + 2);
  *(undefined8 *)(puVar1 + 0x17) = uVar4;
  *(undefined8 *)(puVar1 + 0x15) = uVar3;
  uVar4 = puStack_458[1];
  uVar3 = *puStack_458;
  puVar1[0x1e] = *(undefined4 *)(puStack_458 + 2);
  *(undefined8 *)(puVar1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar1 + 0x1a) = uVar3;
  uVar4 = puStack_450[1];
  uVar3 = *puStack_450;
  puVar1[0x23] = *(undefined4 *)(puStack_450 + 2);
  *(undefined8 *)(puVar1 + 0x21) = uVar4;
  *(undefined8 *)(puVar1 + 0x1f) = uVar3;
  uVar4 = puStack_448[1];
  uVar3 = *puStack_448;
  puVar1[0x28] = *(undefined4 *)(puStack_448 + 2);
  *(undefined8 *)(puVar1 + 0x26) = uVar4;
  *(undefined8 *)(puVar1 + 0x24) = uVar3;
  *(undefined1 *)(puVar1 + 0x29) = *puStack_440;
  *(undefined1 *)((long)puVar1 + 0xa5) = *puStack_438;
  *(undefined1 *)((long)puVar1 + 0xa6) = *puStack_430;
  *(undefined1 *)((long)puVar1 + 0xa7) = *puStack_428;
  *(undefined8 *)(puVar1 + 0x2a) = *puStack_420;
  *(undefined8 *)(puVar1 + 0x2c) = *puStack_418;
  *(undefined8 *)(puVar1 + 0x2e) = *puStack_410;
  *(undefined8 *)(puVar1 + 0x30) = *puStack_408;
  *(undefined8 *)(puVar1 + 0x32) = *puStack_400;
  *(undefined8 *)(puVar1 + 0x34) = *puStack_3f8;
  *(undefined8 *)(puVar1 + 0x36) = *puStack_3f0;
  *(undefined8 *)(puVar1 + 0x38) = *puStack_3e8;
  *(undefined8 *)(puVar1 + 0x3a) = *puStack_3e0;
  *(undefined8 *)(puVar1 + 0x3c) = *puStack_3d8;
  *(undefined8 *)(puVar1 + 0x3e) = *puStack_3d0;
  func_0x00010726ccd4(puVar1 + 0x40,uStack_3c8);
  func_0x000104c318bc(puVar1 + 0x58,uStack_3c0);
  func_0x000104c318bc(puVar1 + 0x66,uStack_3b8);
  *(undefined1 *)(puVar1 + 0x74) = *puStack_3b0;
  *(undefined1 *)((long)puVar1 + 0x1d1) = *puStack_3a8;
  uVar3 = *puStack_3a0;
  *(undefined8 *)(puVar1 + 0x77) = puStack_3a0[1];
  *(undefined8 *)(puVar1 + 0x75) = uVar3;
  *(undefined1 *)(puVar1 + 0x79) = *puStack_398;
  *(undefined8 *)(puVar1 + 0x7c) = 0;
  *(undefined8 *)(puVar1 + 0x7e) = 0;
  *(undefined8 *)(puVar1 + 0x7a) = 0;
  uVar3 = *puStack_390;
  *(undefined8 *)(puVar1 + 0x7c) = puStack_390[1];
  *(undefined8 *)(puVar1 + 0x7a) = uVar3;
  *(undefined8 *)(puVar1 + 0x7e) = puStack_390[2];
  *puStack_390 = 0;
  puStack_390[1] = 0;
  puStack_390[2] = 0;
  puVar1[0x80] = *puStack_388;
  puVar1[0x81] = *puStack_380;
  uVar3 = *puStack_378;
  *(undefined8 *)(puVar1 + 0x84) = puStack_378[1];
  *(undefined8 *)(puVar1 + 0x82) = uVar3;
  *puStack_378 = 0;
  puStack_378[1] = 0;
  puVar1[0x86] = *puStack_370;
  return puVar1;
}



/* Entry: 1077e7dc4; end: 1077e7dfb;  */

void FUN_1077e7dc4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077efa58();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e7dfc();
  }
  return;
}



/* Entry: 1077e7fa4; end: 1077e7fe3;  */

void FUN_1077e7fa4(void)

{
  func_0x0001077ee210();
  func_0x0001077e7fc4();
  return;
}



/* Entry: 1077e80c0; end: 1077e80f7;  */

void FUN_1077e80c0(void)

{
  func_0x0001077ee210();
  func_0x0001077e80dc();
  return;
}



/* Entry: 1077e82e8; end: 1077e831f;  */

void FUN_1077e82e8(void)

{
  func_0x0001077ee210();
  func_0x0001077e8304();
  return;
}



/* Entry: 1077e8510; end: 1077e854f;  */

void FUN_1077e8510(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e8534(extraout_x9);
  return;
}



/* Entry: 1077e875c; end: 1077e87c7;  */

void FUN_1077e875c(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d3c();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e87e4();
  return;
}



/* Entry: 1077e8984; end: 1077e89ef;  */

void FUN_1077e8984(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d74();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e8a0c();
  return;
}



/* Entry: 1077e8c68; end: 1077e8c9f;  */

/* WARNING: Possible PIC construction at 0x0001077e8cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e8cc4) */
/* WARNING: Removing unreachable block (ram,0x0001077e8ce4) */
/* WARNING: Removing unreachable block (ram,0x0001077e8cf4) */
/* WARNING: Removing unreachable block (ram,0x0001077ef1e4) */
/* WARNING: Removing unreachable block (ram,0x0001077e8cdc) */
/* WARNING: Removing unreachable block (ram,0x0001077ee6ac) */

void FUN_1077e8c68(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [104];
  
  if ((*(int *)(param_2 + 0x98) != 0) && (*(int *)(param_2 + 0x98) != 1)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ee254(param_3 + 8,param_2 + 8);
    func_0x0001077f0980();
    param_1 = auStack_98;
    unaff_x30 = &UNK_1077e8cc4;
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a484();
  func_0x000104c2fe00();
  param_1[0x38] = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1077e8dd0; end: 1077e8e07;  */

void FUN_1077e8dd0(void)

{
  func_0x0001077ee210();
  func_0x0001077e8dec();
  return;
}



/* Entry: 1077e8f7c; end: 1077e8f97;  */

void FUN_1077e8f7c(void)

{
  func_0x0001077ee448();
  func_0x0001077e8f98();
  return;
}



/* Entry: 1077e91a8; end: 1077e91cf;  */

undefined8 FUN_1077e91a8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001077f1b98();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x0001077e91f8();
  func_0x0001077ef34c();
  func_0x0001077f1144();
  func_0x0001077e9270();
  func_0x0001077ee520();
  return param_1;
}



/* Entry: 1077e9328; end: 1077e9337;  */

void FUN_1077e9328(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x0001077e608c();
  }
  return;
}



/* Entry: 1077e9648; end: 1077e966f;  */

void FUN_1077e9648(void)

{
  func_0x0001077efb38();
  func_0x0001077e9670();
  return;
}



/* Entry: 1077e9838; end: 1077e987b;  */

void FUN_1077e9838(void)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e987c();
  func_0x0001077f012c();
  *unaff_x19 = extraout_x8;
  puVar1 = unaff_x19;
  func_0x0001077e7434();
  unaff_x19[0x45] = puVar1;
  func_0x0001077f1194();
  return;
}



/* Entry: 1077e9c54; end: 1077e9c6b;  */

void FUN_1077e9c54(void)

{
  func_0x0001077e9c6c();
  return;
}



/* Entry: 1077eab74; end: 1077eaf47;  */

void FUN_1077eab74(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 uStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined1 auStack_228 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001077f0928();
  func_0x0001077efb6c();
  func_0x0001077ef678(in_stack_00000130);
  uStack_18 = param_2;
  uStack_10 = param_1;
  func_0x0001077efbc0();
  func_0x0001077eb69c(&uStack_18);
  func_0x0001077eb6bc(&stack0xffffffffffffffd8);
  func_0x0001077eb6dc(&stack0xffffffffffffffc8);
  func_0x0001077eb6fc(&stack0xffffffffffffffb8);
  func_0x0001077eb71c(&stack0xffffffffffffffa8);
  uStack_68 = in_x6;
  func_0x0001077eb73c(&uStack_68);
  uStack_78 = in_x7;
  func_0x0001077eb75c(&uStack_78);
  uStack_88 = in_stack_00000060;
  func_0x0001077eb77c(&uStack_88);
  uStack_98 = in_stack_00000068;
  func_0x0001077eb79c(&uStack_98);
  uStack_a8 = in_stack_00000070;
  func_0x0001077eb7bc(&uStack_a8);
  uStack_b8 = in_stack_00000078;
  func_0x0001077eb7dc(&uStack_b8);
  uStack_c8 = in_stack_00000080;
  func_0x0001077eb7fc(&uStack_c8);
  uStack_d8 = in_stack_00000088;
  func_0x0001077eb81c(&uStack_d8);
  uStack_e8 = in_stack_00000090;
  func_0x0001077eb83c(&uStack_e8);
  uStack_f8 = in_stack_00000098;
  func_0x0001077eb85c(&uStack_f8);
  func_0x0001077eb87c(auStack_108);
  func_0x0001077eb89c(auStack_118);
  func_0x0001077eb8bc(auStack_128);
  func_0x0001077eb8dc(auStack_138);
  func_0x0001077eb8fc(auStack_148);
  func_0x0001077eb91c(auStack_158);
  func_0x0001077eb93c(auStack_168);
  func_0x0001077eb95c(auStack_178);
  func_0x0001077eb97c(auStack_188);
  func_0x0001077eb99c(auStack_198);
  func_0x0001077eb9bc(auStack_1a8);
  func_0x0001077eb9dc(auStack_1b8);
  func_0x0001077eb9fc(auStack_1c8);
  func_0x0001077eba1c(auStack_1d8);
  func_0x0001077eba3c(auStack_1e8);
  func_0x0001077eba5c(auStack_1f8);
  func_0x0001077eba7c(auStack_208);
  func_0x0001077eba9c(auStack_218);
  func_0x0001077ebabc(auStack_228);
  uStack_238 = in_stack_00000138;
  func_0x0001077ebadc(&uStack_238);
  uStack_248 = in_stack_00000140;
  func_0x0001077ebafc(&uStack_248);
  uStack_258 = in_stack_00000148;
  func_0x0001077ebb1c(&uStack_258);
  uStack_268 = in_stack_00000150;
  func_0x0001077ebb3c(&uStack_268);
  uStack_278 = in_stack_00000158;
  func_0x0001077ebb5c(&uStack_278);
  uStack_288 = in_stack_00000160;
  func_0x0001077ebb7c(&uStack_288);
  uStack_298 = in_stack_00000168;
  func_0x0001077ebb9c(&uStack_298);
  uStack_2a8 = in_stack_00000170;
  func_0x0001077ebbbc(&uStack_2a8);
  uStack_2b8 = in_stack_00000178;
  func_0x0001077ebbdc(&uStack_2b8);
  uStack_2c8 = in_stack_00000180;
  func_0x0001077ebbfc(&uStack_2c8);
  uStack_2d8 = in_stack_00000188;
  func_0x0001077ebc1c(&uStack_2d8);
  uStack_2e8 = in_stack_00000190;
  func_0x0001077ebc3c(&uStack_2e8);
  return;
}



/* Entry: 1077eb634; end: 1077eb67b;  */

void FUN_1077eb634(void)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x0001077ef34c();
  func_0x0001072f6da0(auStack_40);
  func_0x0001077efae0(unaff_x20 + 0xc00);
  func_0x0001077ec5dc();
  func_0x0001077effa8();
  return;
}



/* Entry: 1077ebd28; end: 1077ebd5b;  */

void FUN_1077ebd28(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebd78();
  return;
}



/* Entry: 1077ebe78; end: 1077ebea7;  */

void FUN_1077ebe78(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebef8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ebfdc; end: 1077ebff7;  */

void FUN_1077ebfdc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebff8();
  return;
}



/* Entry: 1077ec128; end: 1077ec15b;  */

void FUN_1077ec128(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec178();
  return;
}



/* Entry: 1077ec278; end: 1077ec2a7;  */

void FUN_1077ec278(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec2f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec3dc; end: 1077ec3f7;  */

void FUN_1077ec3dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec3f8();
  return;
}



/* Entry: 1077ec528; end: 1077ec55b;  */

void FUN_1077ec528(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec578();
  return;
}



/* Entry: 1077ec7fc; end: 1077ec98f;  */

void FUN_1077ec7fc(long param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001077f0928();
  func_0x0001077ec990(extraout_x8,param_1 + 8,param_1 + 0xc,param_1 + 0x1c,param_1 + 0x20,
                      param_1 + 0x24,param_1 + 0x34,param_1 + 0x38,param_1 + 0x40,param_1 + 0x44,
                      param_1 + 0x54,param_1 + 0x55,param_1 + 0x56,param_1 + 0x57,param_1 + 0x58,
                      param_1 + 0x59,param_1 + 0x5c,param_1 + 0x70,param_1 + 0x84,param_1 + 0x98,
                      param_1 + 0xac,param_1 + 0xad,param_1 + 0xae,param_1 + 0xaf,param_1 + 0xb0,
                      param_1 + 0xb8,param_1 + 0xc0,param_1 + 200,param_1 + 0xd0,param_1 + 0xd8,
                      param_1 + 0xe0,param_1 + 0xe8,param_1 + 0xf0,param_1 + 0xf8,param_1 + 0x100,
                      param_1 + 0x108,param_1 + 0x168,param_1 + 0x1a0,param_1 + 0x1d8,
                      param_1 + 0x1d9,param_1 + 0x1dc,param_1 + 0x1ec,param_1 + 0x1f0,
                      param_1 + 0x208,param_1 + 0x20c,param_1 + 0x210,param_1 + 0x220);
  return;
}



/* Entry: 1077ed06c; end: 1077ed093;  */

void FUN_1077ed06c(void)

{
  func_0x0001077ef34c();
  func_0x0001077f068c();
  func_0x0001077ed11c();
  func_0x0001077ee520();
  return;
}



/* Entry: 1077ed1e4; end: 1077ed243;  */

void FUN_1077ed1e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x0001077e5f08(param_3);
  }
  return;
}



/* Entry: 1077ed3d4; end: 1077ed437;  */

void FUN_1077ed3d4(long param_1)

{
  long unaff_x19;
  
  func_0x0001077eec18();
  _bzero(param_1 + 8,0xc78);
  func_0x0001077f0608(&UNK_1109de968);
  func_0x0001077efe2c(unaff_x19 + 0xc80);
  func_0x0001077f05cc(unaff_x19 + 0xc98);
  return;
}



/* Entry: 1077eda70; end: 1077eda7f;  */

undefined8 FUN_1077eda70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1077eddcc; end: 1077edf43;  */

undefined1 * FUN_1077eddcc(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar6;
  long extraout_x9;
  long lVar7;
  long extraout_x9_00;
  long extraout_x10;
  long lVar8;
  long extraout_x10_00;
  int extraout_w11;
  int iVar9;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  char unaff_w19;
  undefined1 *puVar10;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined1 uStack_2fc;
  undefined1 uStack_2fb;
  undefined1 uStack_2fa;
  char cStack_2f9;
  undefined1 auStack_2f8 [24];
  undefined1 *puStack_2e0;
  undefined1 auStack_2b8 [72];
  undefined1 auStack_270 [16];
  undefined4 uStack_260;
  undefined4 uStack_248;
  undefined4 uStack_230;
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [416];
  
  func_0x0001077ee358();
  func_0x0001077efc18();
  func_0x0001077ee13c(auStack_228);
  uVar2 = unaff_w22;
  uVar3 = unaff_w22;
  uVar4 = unaff_w22;
  if (*(int *)(unaff_x21 + 0x78) != 0) {
    in_ZR = *(int *)(unaff_x21 + 0x78) == 1;
    if ((bool)in_ZR) {
      uVar2 = 1;
      uVar3 = 1;
      uVar4 = 1;
    }
    else {
      func_0x0001077efe74(auStack_1e0);
      func_0x0001077ef0c4(auStack_270,unaff_x21 + 0x10,auStack_1e0);
      func_0x0001074332fc(auStack_1e0);
      uVar2 = uStack_260;
      uVar3 = uStack_248;
      uVar4 = uStack_230;
    }
  }
  uStack_230 = uVar4;
  uStack_248 = uVar3;
  uStack_260 = uVar2;
  func_0x000104c2f714(auStack_228);
  func_0x0001077f1340(auStack_1e0,unaff_x21 + 0x80);
  func_0x0001077f1340(auStack_228,unaff_x21 + 0xb8);
  func_0x0001077f1340(auStack_2b8,unaff_x21 + 0xf0);
  func_0x0001077ef1ec(auStack_270);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_270);
  func_0x0001077ef1ec(auStack_1e0);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_1e0);
  func_0x0001077ef1ec(auStack_228);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_228);
  func_0x0001077ef1ec(auStack_2b8);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_2b8);
  puVar10 = auStack_2b8;
  func_0x0001073ebef4();
  func_0x0001077f0d50();
  func_0x0001077f0e44();
  func_0x0001077f09ac();
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return puVar10;
  }
  ___stack_chk_fail();
  uStack_2fc = SUB81(auStack_228,0);
  func_0x000104c2f714();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  puStack_2e0 = puVar10;
  func_0x0001077ef1b8();
  func_0x0001077df888();
  uStack_2fb = uStack_2fc;
  func_0x0001077f1184();
  uStack_2fa = uStack_2fb;
  func_0x0001077f118c();
  cStack_2f9 = unaff_w19 + -0x10;
  func_0x0001077df020();
  func_0x0001077df080(auStack_2f8,&uStack_2fc,4);
  func_0x0001077ee5f4();
  uVar6 = extraout_x8;
  lVar7 = extraout_x9;
  lVar8 = extraout_x10;
  iVar9 = extraout_w11;
  while( true ) {
    uVar5 = lVar7 == lVar8 && (int)uVar6 == iVar9;
    puVar10 = (undefined1 *)(ulong)(byte)uVar5;
    if (((bool)uVar5) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar7 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar5) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar8 = extraout_x10_00;
    iVar9 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return puVar10;
}



/* Entry: 1077ee15c; end: 1077ee1b3;  */

void FUN_1077ee15c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001077eeaec();
    func_0x0001075620d4();
    return;
  }
  return;
}



/* Entry: 1077f1cb4; end: 1077f219f;  */

void FUN_1077f1cb4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  byte bVar15;
  uint6 uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar17;
  byte bVar23;
  undefined1 auStack_3e8 [32];
  undefined *puStack_3c8;
  long lStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [56];
  undefined1 auStack_370 [64];
  undefined1 auStack_330 [56];
  undefined1 auStack_2f8 [56];
  undefined1 auStack_2c0 [216];
  undefined1 auStack_1e8 [216];
  byte bStack_110;
  undefined1 auStack_108 [56];
  long alStack_d0 [2];
  byte bStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  byte bStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_3c8 = &UNK_10e52b660;
  lStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  plVar11 = param_3 + 1;
  plVar13 = plVar11;
  (**(code **)(*param_3 + 0x18))();
  if ((int)plVar13 == 0) {
    func_0x0001077f23f0();
  }
  else {
    plVar13 = (long *)0x0;
    do {
      plVar6 = plVar11;
      (**(code **)(*param_3 + 0x20))();
      in_ZR = plVar13 == plVar6;
      if (plVar6 <= plVar13) {
        func_0x0001073b03fc(auStack_3e8,&puStack_3c8);
        func_0x0001073b03fc(auStack_2f8,auStack_3e8);
        func_0x00010752eb38(param_1,auStack_2f8);
        *(undefined1 *)(param_1 + 0x20) = 1;
        func_0x0001073b0384(auStack_2f8);
        func_0x0001073b0384(auStack_3e8);
        break;
      }
      (**(code **)(*param_3 + 0x28))(&lStack_a0,plVar11,plVar13);
      uVar10 = 0;
      (**(code **)(lStack_a0 + 0x30))();
      if ((uVar10 & 1) == 0) {
        func_0x0001077f23f0();
LAB_1077f2068:
        func_0x0001077f23fc();
        break;
      }
      (**(code **)(lStack_a0 + 0x38))(&lStack_b8,auStack_98,&DAT_10f68f148);
      if ((bStack_a8 & 1) == 0) {
        func_0x0001077f23f0();
LAB_1077f2064:
        func_0x0001077f2404();
        goto LAB_1077f2068;
      }
      (**(code **)(lStack_a0 + 0x38))(alStack_d0,auStack_98,&DAT_10f2cb778);
      in_ZR = bStack_c0 == 1;
      if ((bool)in_ZR) {
        uVar10 = 0;
        (**(code **)(alStack_d0[0] + 0x18))();
        if ((uVar10 & 1) == 0) {
          func_0x0001077f23f0();
          func_0x0001077f240c();
          goto LAB_1077f2064;
        }
      }
      if ((bStack_a8 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_1077f20c4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1077f20c8);
        (*pcVar5)();
      }
      (**(code **)(lStack_b8 + 0x68))(auStack_2f8,auStack_b0);
      func_0x000100060964(auStack_1e8,"unknown");
      func_0x0001073232c8(auStack_108,auStack_2f8,auStack_1e8);
      func_0x000104c2f714(auStack_1e8);
      func_0x0001077f23e8();
      func_0x00010729d1b0(auStack_2f8,auStack_108);
      if ((bStack_c0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1077f20c4;
      }
      func_0x0001077b3ffc(auStack_1e8,param_2,auStack_2f8,alStack_d0,param_4);
      func_0x0001077f23e8();
      bVar4 = bStack_110;
      if ((bStack_110 & 1) == 0) {
        func_0x0001077f23f0();
      }
      else {
        if ((bStack_a8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1077f20c4;
        }
        (**(code **)(lStack_b8 + 0x68))(auStack_370,auStack_b0);
        func_0x000100060964(auStack_3a8,"unknown");
        func_0x0001073232c8(auStack_330,auStack_370,auStack_3a8);
        if ((bStack_110 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1077f20c4;
        }
        func_0x000104c318bc(auStack_2f8,auStack_330);
        func_0x0001077b3ed4(auStack_2c0,auStack_1e8);
        Hint_Prefetch(puStack_3c8,0,2,0);
        puVar7 = auStack_2f8;
        func_0x000104c2fe38(puStack_3c8);
        uVar3 = uStack_3b8;
        puVar2 = puStack_3c8;
        lVar12 = 0;
        uVar10 = (ulong)puStack_3c8 >> 0xc ^ (ulong)puVar7 >> 7;
        bVar1 = (byte)puVar7;
        uVar16 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1)))
                                        )) & 0x7f7f7f7f7f7f;
        while( true ) {
          uVar10 = uVar10 & uVar3;
          uVar17 = *(undefined8 *)(puVar2 + uVar10);
          cVar18 = (char)((ulong)uVar17 >> 8);
          cVar19 = (char)((ulong)uVar17 >> 0x10);
          cVar20 = (char)((ulong)uVar17 >> 0x18);
          cVar21 = (char)((ulong)uVar17 >> 0x20);
          cVar22 = (char)((ulong)uVar17 >> 0x28);
          bVar15 = (byte)((ulong)uVar17 >> 0x30);
          bVar23 = (byte)((ulong)uVar17 >> 0x38);
          for (uVar14 = CONCAT17(-(bVar23 == (bVar1 & 0x7f)),
                                 CONCAT16(-(bVar15 == (bVar1 & 0x7f)),
                                          CONCAT15(-(cVar22 == (char)(uVar16 >> 0x28)),
                                                   CONCAT14(-(cVar21 == (char)(uVar16 >> 0x20)),
                                                            CONCAT13(-(cVar20 ==
                                                                      (char)(uVar16 >> 0x18)),
                                                                     CONCAT12(-(cVar19 ==
                                                                               (char)(uVar16 >> 0x10
                                                                                     )),
                                                                              CONCAT11(-(cVar18 ==
                                                                                        (char)(
                                                  uVar16 >> 8)),-((char)uVar17 == (char)uVar16))))))
                                         )) & 0x8080808080808080; uVar14 != 0;
              uVar14 = uVar14 - 1 & uVar14) {
            uVar8 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar8 = lStack_3c0 +
                    (uVar10 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3) * 0x110;
            func_0x000104c32db4(uVar8,auStack_2f8);
            if ((uVar8 & 1) != 0) goto LAB_1077f1f9c;
          }
          bVar15 = NEON_umaxv(CONCAT17(-(bVar23 == 0x80),
                                       CONCAT16(-(bVar15 == 0x80),
                                                CONCAT15(-(cVar22 == -0x80),
                                                         CONCAT14(-(cVar21 == -0x80),
                                                                  CONCAT13(-(cVar20 == -0x80),
                                                                           CONCAT12(-(cVar19 ==
                                                                                     -0x80),CONCAT11
                                                  (-(cVar18 == -0x80),-((char)uVar17 == -0x80)))))))
                                      ),1);
          if ((bVar15 & 1) != 0) break;
          lVar12 = lVar12 + 8;
          uVar10 = lVar12 + uVar10;
        }
        ppuVar9 = &puStack_3c8;
        func_0x0001077f22bc(ppuVar9,puVar7);
        lVar12 = lStack_3c0 + (long)ppuVar9 * 0x110;
        func_0x000104c318bc(lVar12,auStack_2f8);
        func_0x0001077b3ed4(lVar12 + 0x38,auStack_2c0);
LAB_1077f1f9c:
        func_0x0001077f21a0(auStack_2f8);
        func_0x000104c2f714(auStack_330);
        func_0x000104c2f714(auStack_3a8);
        func_0x00010724b3d8(auStack_370);
      }
      func_0x000107266948(auStack_1e8);
      func_0x000104c2f714(auStack_108);
      func_0x0001077f240c();
      func_0x0001077f2404();
      func_0x0001077f23fc();
      plVar13 = (long *)((long)plVar13 + 1);
    } while ((bVar4 & 1) != 0);
  }
  ppuVar9 = &puStack_3c8;
  func_0x0001073b0384(ppuVar9);
  func_0x0001077f2414(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073b0384(auStack_3e8);
  do {
    func_0x0001073b0384(&puStack_3c8);
    __Unwind_Resume(ppuVar9);
    func_0x0001077f2404();
    func_0x0001077f23fc();
  } while( true );
}



/* Entry: 1077f25a0; end: 1077f25d7;  */

undefined8 FUN_1077f25a0(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x50;
  pbVar1 = &UNK_1109deb48;
  do {
    pbVar2 = &UNK_1109deba8;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2868; end: 1077f289f;  */

undefined8 FUN_1077f2868(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109decd8;
  do {
    pbVar2 = &UNK_1109ded18;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2ad8; end: 1077f2b0f;  */

undefined8 FUN_1077f2ad8(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x40;
  pbVar1 = &UNK_1109dedb8;
  do {
    pbVar2 = &UNK_1109dee08;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2d98; end: 1077f2dcf;  */

undefined8 FUN_1077f2d98(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x90;
  pbVar1 = &UNK_1109deed8;
  do {
    pbVar2 = &UNK_1109def78;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f3790; end: 1077f383f;  */

void FUN_1077f3790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (lRam0000000113822d00 == 0) {
    uVar1 = 0x1d0;
    __Znwm(0x1d0);
    func_0x0001072ac748(auStack_48,param_1);
    func_0x0001077f3644(uVar1,auStack_48);
    uStack_38 = 0;
    func_0x0001077f3870(0x113822cf8,uVar1);
    func_0x0001077f3bfc(&uStack_38);
    func_0x0001072ac768(auStack_48);
    lRam0000000113822d00 = lRam0000000113822cf8;
  }
  return;
}



/* Entry: 1077f39c4; end: 1077f39e7;  */

void FUN_1077f39c4(void)

{
  func_0x0001077f39e8();
  return;
}



/* Entry: 1077f3c20; end: 1077f3c3b;  */

void FUN_1077f3c20(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001072a8ef4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f3ddc; end: 1077f3e17;  */

long FUN_1077f3ddc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109df6f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077f44a8; end: 1077f4597;  */

void FUN_1077f44a8(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      func_0x0001077f45c0();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      func_0x0001077f4598(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x0001077f4624(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1077f4d88; end: 1077f4dbf;  */

undefined4 FUN_1077f4d88(undefined4 *param_1,long param_2)

{
  FUN_1077f5044(param_1,param_1 + param_2);
  return *param_1;
}



/* Entry: 1077f5044; end: 1077f507f;  */

void FUN_1077f5044(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077f5060(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1077f5568; end: 1077f5677;  */

float FUN_1077f5568(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar6;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  float fVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_d3;
  float fVar11;
  float fVar12;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  uVar2 = *param_2;
  uVar4 = (ulong)*(uint *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_1 + 0x4c);
  fVar6 = (float)((ulong)uVar2 >> 0x20);
  uVar8 = 0;
  uVar3 = uVar2;
  fVar7 = fVar6;
  uVar9 = uVar4;
  func_0x0001077f7194(param_3,uVar1);
  fVar11 = (float)uVar3;
  if ((*(char *)(param_1 + 0xa94) == '\x01') && (fVar12 = *(float *)(param_1 + 0xa90), 0.0 < fVar12)
     ) {
    dStack_80 = (double)(float)uVar2;
    dStack_78 = (double)fVar6;
    fVar6 = fVar7;
    uVar10 = uVar9;
    uVar3 = in_d3;
    func_0x00010741848c(&dStack_80,param_3 + 0x308);
    func_0x0001074185bc(param_3 + 0x180,uVar1,1);
    dStack_80 = (double)fVar11;
    dStack_78 = (double)fVar7;
    dStack_70 = (double)(float)uVar9;
    dStack_68 = (double)(float)in_d3;
    uStack_98 = CONCAT44(uVar8,fVar6);
    dVar5 = (double)fVar12;
    uStack_a0 = uVar4;
    uStack_90 = uVar10;
    uStack_88 = uVar3;
    func_0x00010740b8e0(dVar5,&dStack_80,&uStack_a0);
    fVar11 = (float)dVar5;
  }
  return fVar11 + *(float *)(param_1 + 0xe58);
}



/* Entry: 1077f6274; end: 1077f650f;  */

/* WARNING: Possible PIC construction at 0x0001077f62f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077f637c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077f62fc) */
/* WARNING: Removing unreachable block (ram,0x0001077f632c) */
/* WARNING: Removing unreachable block (ram,0x0001077f6300) */
/* WARNING: Removing unreachable block (ram,0x0001077f6354) */
/* WARNING: Removing unreachable block (ram,0x0001077f6380) */
/* WARNING: Removing unreachable block (ram,0x0001077f63b0) */
/* WARNING: Removing unreachable block (ram,0x0001077f6384) */
/* WARNING: Removing unreachable block (ram,0x0001077f63d8) */

double FUN_1077f6274(double param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined8 param_5,long param_6,undefined8 *param_7,undefined8 param_8,
                    undefined4 param_9)

{
  undefined1 uVar1;
  double *pdVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  double dVar6;
  float fVar7;
  double dVar8;
  float afStack_238 [32];
  undefined8 auStack_1b8 [5];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_70;
  
  func_0x0001077f873c();
  func_0x0001077f8548();
  uStack_70 = extraout_x8;
  pfVar5 = (float *)*param_7;
  if (*(char *)(param_6 + 0x138) == '\x01') {
    for (; pfVar5 != (float *)param_7[1]; pfVar5 = pfVar5 + 5) {
      if (*(char *)(pfVar5 + 4) == '\x02') {
        func_0x0001077f6258(pfVar5);
        uStack_190 = CONCAT44(param_2,SUB84(param_1,0));
        uStack_188 = CONCAT44(param_4,param_3);
        fVar7 = *(float *)(unaff_x19 + 0xe58);
        pfVar5 = (float *)&uStack_190;
        goto code_r0x0001077f6510;
      }
    }
  }
  else {
    for (; pfVar5 != (float *)param_7[1]; pfVar5 = pfVar5 + 5) {
      if (*(char *)(pfVar5 + 4) == '\x01') {
        fVar7 = *(float *)(unaff_x19 + 0xe58);
        goto code_r0x0001077f6510;
      }
    }
  }
  uVar1 = *(char *)(unaff_x21 + 0x130) == '\x01';
  if ((bool)uVar1) {
    pdVar2 = (double *)(unaff_x21 + 0x120);
    func_0x000107392e34();
    plVar3 = (long *)(unaff_x19 + 0x10a0);
    func_0x0001077f7da8(plVar3,auStack_1b8,param_9);
    if (*plVar3 == 0) {
      dVar6 = pdVar2[1];
      dVar8 = pdVar2[1];
      param_1 = *pdVar2;
      lVar4 = 0x38;
      __Znwm();
      uStack_188 = unaff_x19 + 0x10a8;
      uStack_180 = 1;
      *(undefined4 *)(lVar4 + 0x20) = param_9;
      *(double *)(lVar4 + 0x30) = dVar8;
      *(double *)(lVar4 + 0x28) = param_1;
      if (dVar6 != 0.0) {
        do {
          func_0x0001077f8618();
        } while (extraout_w10 != 0);
      }
      func_0x0001077f7d58(unaff_x19 + 0x10a0,auStack_1b8[0],plVar3);
      uStack_190 = 0;
      func_0x0001077f7df4(&uStack_190);
    }
  }
  func_0x0001077f8514(uStack_70);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  fVar7 = SUB84(param_1,0);
  func_0x0001077f8580();
  pfVar5 = afStack_238;
  func_0x0001072a6b60();
  func_0x0001077f85e0();
code_r0x0001077f6510:
  return (double)(*pfVar5 - fVar7);
}



/* Entry: 1077f7610; end: 1077f77e3;  */

void FUN_1077f7610(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined4 *param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong *extraout_x8;
  undefined4 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [16];
  undefined4 *puStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  ulong uVar7;
  
  uVar13 = (undefined4)((ulong)param_4 >> 0x20);
  uVar12 = (undefined4)param_4;
  uVar11 = (undefined4)((ulong)param_3 >> 0x20);
  uVar10 = (undefined4)param_3;
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  if ((undefined4 *)((param_5[2] - *param_5) / 0x18) < param_6) {
    if (param_6 < (undefined4 *)0xaaaaaaaaaaaaaab) {
      func_0x0001077f7e84(auStack_48,param_6,(param_5[1] - *param_5) / 0x18);
      func_0x0001077f86d0();
      func_0x0001077f7ef4(auStack_48);
      return;
    }
    FUN_1077f7e34();
    uStack_58 = 0x1077f7688;
    ppuStack_b0 = &puStack_60;
    puVar3 = (undefined4 *)param_5[1];
    if (puVar3 < (undefined4 *)param_5[2]) {
      *puVar3 = *param_6;
      uVar6 = *(undefined8 *)(param_6 + 2);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_6 + 4);
      *(undefined8 *)(puVar3 + 2) = uVar6;
      *(undefined8 *)(param_6 + 2) = 0;
      *(undefined8 *)(param_6 + 4) = 0;
      puVar3 = puVar3 + 6;
    }
    else {
      uVar7 = ((long)puVar3 - *param_5) / 0x18 + 1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        plVar2 = param_5;
        puVar3 = param_6;
        FUN_1077f7e34();
        uStack_a8 = 0x1077f7764;
        puStack_c0 = param_6;
        plStack_b8 = param_5;
        if (*(char *)(puVar3 + 4) == '\x01') {
          uVar5 = *(uint *)(plVar2 + 0x1cb);
        }
        else {
          if (*(char *)(puVar3 + 4) != '\x02') {
            *(undefined1 *)extraout_x8 = 0;
            *(undefined1 *)(extraout_x8 + 4) = 0;
            return;
          }
          func_0x0001077f6258(puVar3);
          uVar5 = *(uint *)(plVar2 + 0x1cb);
          puVar3 = &uStack_d0;
          uStack_d0 = param_1;
          uStack_cc = uVar8;
          uStack_c8 = uVar10;
          uStack_c4 = uVar12;
        }
        uVar7 = (ulong)uVar5;
        func_0x0001077f6510(puVar3);
        *extraout_x8 = uVar7;
        extraout_x8[1] = CONCAT44(uVar9,uVar8);
        extraout_x8[2] = CONCAT44(uVar11,uVar10);
        extraout_x8[3] = CONCAT44(uVar13,uVar12);
        *(undefined1 *)(extraout_x8 + 4) = 1;
        return;
      }
      uVar1 = (param_5[2] - *param_5) / 0x18;
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
        uVar4 = uVar7;
      }
      if (0x555555555555554 < uVar1) {
        uVar4 = 0xaaaaaaaaaaaaaaa;
      }
      func_0x0001077f7e84(auStack_98,uVar4);
      *puStack_88 = *param_6;
      uVar6 = *(undefined8 *)(param_6 + 2);
      *(undefined8 *)(puStack_88 + 4) = *(undefined8 *)(param_6 + 4);
      *(undefined8 *)(puStack_88 + 2) = uVar6;
      *(undefined8 *)(param_6 + 2) = 0;
      *(undefined8 *)(param_6 + 4) = 0;
      puStack_88 = puStack_88 + 6;
      func_0x0001077f86d0();
      puVar3 = (undefined4 *)param_5[1];
      func_0x0001077f7ef4(auStack_98);
    }
    param_5[1] = (long)puVar3;
  }
  return;
}



/* Entry: 1077f79f8; end: 1077f7b13;  */

undefined8 *
FUN_1077f79f8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined2 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  func_0x000104c2fe00(param_1 + 1,param_2 + 1);
  func_0x000104c2fe00(param_1 + 8,param_2 + 8);
  param_1[0xf] = param_2[0xf];
  func_0x000107299490(param_1 + 0x10,param_2 + 0x10);
  func_0x000107299490(param_1 + 0x12,param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined2 *)((long)param_1 + 0xa4) = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x15,param_5);
  uVar2 = param_6[1];
  uVar1 = *param_6;
  uVar4 = param_6[3];
  uVar3 = param_6[2];
  param_1[0x1c] = param_6[4];
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar3;
  func_0x0001072ab948(param_1 + 0x1d,param_7);
  func_0x0001072ab9cc(param_1 + 0x21,param_2 + 0x21);
  return param_1;
}



/* Entry: 1077f7e34; end: 1077f7e47;  */

void FUN_1077f7e34(undefined8 param_1,long param_2)

{
  func_0x000104bd47e8();
  func_0x0001077f8664();
  func_0x0001077f86c4(*(undefined8 *)(param_2 + 8));
  func_0x0001077f858c();
  return;
}



/* Entry: 1077f80f0; end: 1077f80fb;  */

undefined ** FUN_1077f80f0(void)

{
  return &PTR_DAT_1109df7c0;
}



/* Entry: 1077f82d8; end: 1077f830b;  */

void FUN_1077f82d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109df800;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077f8514; end: 1077f875b;  */

void FUN_1077f8514(void)

{
  return;
}



/* Entry: 1077f90d4; end: 1077f9163;  */

void FUN_1077f90d4(long param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_41;
  
  lVar2 = *(long *)(param_3 + 0x50);
  uStack_41 = param_2;
  while (lVar2 != param_3 + 0x58) {
    lVar1 = *(long *)(lVar2 + 0x40);
    for (lVar3 = *(long *)(lVar2 + 0x38); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      func_0x0001077f9164(param_1 + 0x20,&uStack_41);
      func_0x0001077f9f4c();
    }
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 1077f9510; end: 1077f9523;  */

void FUN_1077f9510(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar5;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x0001077fa5cc();
  plVar5 = (long *)(puVar1 + 8);
  func_0x0001074f50ac();
  *unaff_x20 = *unaff_x19;
  plVar2 = unaff_x19 + 1;
  lVar3 = *plVar2;
  *plVar5 = lVar3;
  lVar4 = unaff_x19[2];
  unaff_x20[2] = lVar4;
  if (lVar4 == 0) {
    *unaff_x20 = plVar5;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar5;
    *unaff_x19 = plVar2;
    *plVar2 = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 1077f97e8; end: 1077f981f;  */

void FUN_1077f97e8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077fa4fc();
  if ((bool)in_ZR) {
    func_0x0001074f5144(unaff_x19 + 0x30);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f9a44; end: 1077f9aef;  */

void FUN_1077f9a44(void)

{
  func_0x0001077fa538();
  func_0x0001077fa4c0();
  return;
}



/* Entry: 1077f9d70; end: 1077f9d87;  */

void FUN_1077f9d70(void)

{
  func_0x0001077f9d88();
  return;
}



/* Entry: 1077fa000; end: 1077fa073;  */

long FUN_1077fa000(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077fa458();
  func_0x0001077fa038();
  if ((unaff_x19 == param_1) || (func_0x0001077fa54c(), (int)param_1 != 0)) {
    unaff_x21 = unaff_x19;
  }
  return unaff_x21;
}



/* Entry: 1077fa230; end: 1077fa293;  */

long FUN_1077fa230(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  uVar2 = *param_3;
  func_0x00010785f1f4();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 **)(param_1 + 0x58) = (undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  return param_1;
}



/* Entry: 1077fa408; end: 1077fa677;  */

void FUN_1077fa408(void)

{
  return;
}



/* Entry: 1077fabe0; end: 1077faca3;  */

void FUN_1077fabe0(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  
  func_0x00010780a21c();
  func_0x00010780907c();
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar3 = uVar6 >> 6;
  if (uVar3 < uVar1) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 4) + (ulong)uVar3 * 8);
  }
  else {
    if (unaff_x19[2] <= uVar3) {
      uVar6 = unaff_x19[6] + unaff_x19[2];
      lVar4 = (ulong)uVar6 << 3;
      __Znam();
      lVar5 = *(long *)(unaff_x19 + 4);
      if (lVar5 != 0) {
        _memcpy(lVar4,lVar5,(ulong)uVar1 << 3);
        __ZdaPv(lVar5);
        uVar6 = unaff_x19[2] + unaff_x19[6];
      }
      *(long *)(unaff_x19 + 4) = lVar4;
      unaff_x19[2] = uVar6;
    }
    lVar4 = 0x400;
    __Znam();
    *(long *)(*(long *)(unaff_x19 + 4) + (ulong)uVar3 * 8) = lVar4;
    uVar6 = *unaff_x19;
    unaff_x19[1] = unaff_x19[1] + 1;
  }
  uVar7 = *unaff_x20;
  puVar2 = (undefined8 *)(lVar4 + (ulong)(uVar6 & 0x3f) * 0x10);
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar7;
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1077fb4d8; end: 1077fb60f;  */

undefined8 FUN_1077fb4d8(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  double dStack_70;
  double dStack_68;
  
  if (*(long *)(param_4 + 0x18) != *(long *)(param_4 + 0x20)) {
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -8;
    lVar1 = *param_2;
    lVar4 = *param_3;
    lVar2 = param_3[1];
    uStack_88 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_80 = 0x40;
    uStack_90 = 0;
    uStack_98 = 0;
    iStack_a0 = 0;
    uVar7 = 0x3fd0000000000000;
    uVar5 = 0x3ff0000000000000;
    func_0x000107809ee8();
    dStack_70 = (double)uVar5;
    dStack_68 = (double)uVar7;
    func_0x000107809e44();
    dVar6 = (double)(ulong)(uint)((float)lVar1 / 64.0);
    func_0x000107809d28();
    func_0x0001077faca4(auStack_c0,0);
    dStack_70 = (double)((float)lVar4 / 64.0);
    dStack_68 = (double)((float)lVar2 / 64.0);
    func_0x000107809e44();
    iVar3 = (int)uStack_98;
    lVar4 = 0;
    while (iVar3 != (int)lVar4) {
      func_0x000107809af8();
      dStack_70 = dVar6;
      func_0x000107809e78();
      lVar4 = lVar1;
    }
    iStack_a0 = iVar3;
    func_0x0001077fe4e8(&uStack_98);
  }
  return 0;
}



/* Entry: 1077fbd60; end: 1077fbdcf;  */

uint FUN_1077fbd60(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0xf1) == '\0') {
    uVar1 = 4;
  }
  if (8 < uVar1) {
    uVar1 = 4;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xf2);
  if (*(char *)(param_1 + 0xf3) == '\0') {
    uVar2 = 4;
  }
  if (10 < uVar2) {
    uVar2 = 4;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xf4);
  if (*(char *)(param_1 + 0xf5) == '\0') {
    uVar3 = 0;
  }
  if (uVar3 != 2) {
    uVar3 = (uint)(uVar3 == 1);
  }
  return uVar2 << 8 | uVar3 << 0x10 | uVar1;
}



/* Entry: 1077fc380; end: 1077fc3a7;  */

int * FUN_1077fc380(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  param_1 = param_1 + 2;
  if (iVar3 != 4) {
    param_1 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (1 < iVar3 - 5U) {
    piVar1 = param_1;
  }
  piVar2 = (int *)0x0;
  if (iVar3 != 7) {
    piVar2 = piVar1;
  }
  return piVar2;
}



/* Entry: 1077fde50; end: 1077fdfdf;  */

/* WARNING: Possible PIC construction at 0x0001077fdf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077fdfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077fdf58) */
/* WARNING: Removing unreachable block (ram,0x0001077fdf84) */
/* WARNING: Removing unreachable block (ram,0x0001077fdfa4) */
/* WARNING: Removing unreachable block (ram,0x0001077fdfb4) */
/* WARNING: Removing unreachable block (ram,0x0001077fdf6c) */
/* WARNING: Removing unreachable block (ram,0x0001077fdfbc) */
/* WARNING: Removing unreachable block (ram,0x0001077fdfd4) */

long * FUN_1077fde50(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_250 [32];
  undefined1 uStack_230;
  undefined1 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1ac;
  long lStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [216];
  
  lVar1 = param_1;
  func_0x000107808a58();
  plVar3 = *(long **)(lVar1 + 0x6b0);
  lStack_1a8 = lVar1;
  func_0x0001078082f0(auStack_1a0);
  func_0x0001077ff744(&uStack_180,param_1 + 0x818);
  func_0x0001077ff7a8(&uStack_168,&lStack_1a8);
  puStack_120 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = &PTR_DAT_1109dfc28;
  puVar2[2] = uStack_178;
  puVar2[1] = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  puVar2[4] = uStack_168;
  puVar2[3] = uStack_170;
  func_0x0001078082f0(puVar2 + 5,auStack_160);
  puStack_120 = puVar2;
  func_0x000107474460(auStack_250,&UNK_10f42adae);
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  func_0x000107273dcc(auStack_118,auStack_138,auStack_250);
  (**(code **)(*plVar3 + 0x18))(plVar3,auStack_118);
  func_0x000107273efc(auStack_118);
  func_0x000107273f24(auStack_250);
  func_0x0001006393ec(auStack_138);
  puVar2 = &uStack_180;
  func_0x0001072af654(auStack_160);
  func_0x00010725c0a0();
  if (puVar2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar3;
}



/* Entry: 1077fe1fc; end: 1077fe26f;  */

undefined1  [16] FUN_1077fe1fc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
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
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1077fe5d0; end: 1077fe6f3;  */

void FUN_1077fe5d0(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lStack_48;
  
  func_0x000107809f40();
  lVar7 = *(long *)(param_1 - 8);
  uVar4 = *(ulong *)(lVar7 + 0x38) & 0xfffffffffffffffe;
  uVar1 = 1;
  while (uVar4 != 0) {
    lVar7 = uVar4 - 0x38;
    func_0x00010780918c();
    func_0x000104c2fc44();
    lVar3 = 0x40;
    if ((int)param_1 == 0) {
      lVar3 = 0x48;
    }
    uVar1 = param_1;
    uVar4 = *(ulong *)(lVar7 + lVar3);
  }
  lVar3 = lVar7;
  if ((uVar1 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x19 + -8) + 0x40);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + -0x38;
    }
    if (lVar7 == lVar3) {
      uVar8 = 0;
      goto LAB_1077fe68c;
    }
    lStack_48 = lVar7 + 0x38;
    func_0x0001077fe774(&lStack_48);
    lVar3 = lStack_48 + -0x38;
  }
  iVar2 = (int)lVar3;
  func_0x000104c2fc44();
  if (iVar2 == 0) {
    return;
  }
  uVar8 = ((uint)uVar1 ^ 0xffffffff) & 1;
LAB_1077fe68c:
  lVar5 = 0x60;
  __Znwm();
  lVar3 = lVar5;
  func_0x000104c2fe00();
  func_0x0001077fe6f4(lVar3 + 0x38,uVar8,lVar7 + 0x38,*(long *)(unaff_x19 + -8) + 0x38);
  plVar6 = (long *)(*(long *)(unaff_x19 + -8) + 0x50);
  plVar9 = (long *)(lVar5 + 0x50);
  *plVar9 = *plVar6;
  *(long **)(lVar5 + 0x58) = plVar6;
  *plVar6 = (long)plVar9;
  *(long **)(*plVar9 + 8) = plVar9;
  *(long *)(unaff_x19 + 8) = *(long *)(unaff_x19 + 8) + 1;
  return;
}



/* Entry: 1077feacc; end: 1077feafb;  */

void FUN_1077feacc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x0001077feafc(param_2);
    param_2 = param_2 + 0x60;
  }
  return;
}



/* Entry: 1077fec94; end: 1077feccf;  */

void FUN_1077fec94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 1077fef10; end: 1077fef1b;  */

long * FUN_1077fef10(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001078090a4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001077fef68();
  }
  lVar1 = param_4 + param_3 * 0x88;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x88;
  return param_1;
}



/* Entry: 1077ff130; end: 1077ff137;  */

void FUN_1077ff130(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107808f04(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x88;
    func_0x0001074058d8();
  }
  return;
}



/* Entry: 1077ff34c; end: 1077ff3b7;  */

long * FUN_1077ff34c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107276ba4(param_1 + 0xc);
  func_0x0001077ff1f8(param_1 + 8);
  func_0x00010726e078(param_1 + 5);
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001077ff2a0(lVar1);
    func_0x000107809de4();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


