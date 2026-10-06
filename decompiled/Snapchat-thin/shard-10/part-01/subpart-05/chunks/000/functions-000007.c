/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077e244c; end: 1077e2473;  */

void FUN_1077e244c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x50) = extraout_w8;
  func_0x0001077e2474();
  return;
}



/* Entry: 1077e261c; end: 1077e263b;  */

void FUN_1077e261c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e27a0; end: 1077e27bb;  */

void FUN_1077e27a0(long param_1)

{
  func_0x0001077e27bc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077e2964; end: 1077e2983;  */

undefined8 FUN_1077e2964(void)

{
  undefined8 uStack_18;
  
  func_0x0001077efa78();
  func_0x0001077e2984();
  return uStack_18;
}



/* Entry: 1077e2e90; end: 1077e2ee3;  */

void FUN_1077e2e90(void)

{
  undefined1 in_ZR;
  undefined1 auStack_e0 [72];
  undefined1 auStack_70 [64];
  
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  func_0x0001077e3748(auStack_70);
  func_0x0001077eeee0();
  func_0x0001077e3724();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ee9f8();
    func_0x0001077ee374();
    func_0x0001077e37f4(auStack_e0);
    func_0x0001077eeee0();
    func_0x0001077e3724();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f002c();
      func_0x0001077ee7c4();
      return;
    }
  }
  return;
}



/* Entry: 1077e3208; end: 1077e3217;  */

undefined8 FUN_1077e3208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1077e3648; end: 1077e364b;  */

long FUN_1077e3648(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [40];
  
  param_1 = (long *)*param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = (param_2[1] - lVar1) / 0x88;
  if (0 < lVar2) {
    lVar6 = param_1[1];
    if ((param_1[2] - lVar6) / 0x88 < lVar2) {
      plVar4 = param_1;
      func_0x0001077de50c(param_1,(lVar6 - *param_1) / 0x88 + lVar2);
      func_0x0001077dea24(auStack_78,plVar4,(lVar5 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,lVar1,lVar2);
      func_0x0001077de5c8(param_1,auStack_78,lVar5);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar6 = lVar6 - lVar5;
      lVar3 = lVar2 - lVar6 / 0x88;
      if (lVar3 == 0 || lVar2 < lVar6 / 0x88) {
        func_0x0001077ef474();
        FUN_1077de3fc();
        func_0x0001077efe94();
      }
      else {
        func_0x0001077de3d4(param_1,lVar1 + lVar6,param_2[1],lVar3);
        if (lVar6 < 1) {
          return lVar5;
        }
        func_0x0001077ef474();
        FUN_1077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return lVar5;
}



/* Entry: 1077e3750; end: 1077e376b;  */

void FUN_1077e3750(void)

{
  func_0x0001077ee448();
  func_0x0001077e376c();
  return;
}



/* Entry: 1077e3898; end: 1077e38b7;  */

void FUN_1077e3898(void)

{
  func_0x0001077ee234();
  func_0x0001077e38b8();
  return;
}



/* Entry: 1077e3a14; end: 1077e3a6b;  */

long FUN_1077e3a14(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077efb28();
  if ((bool)in_CY) {
    func_0x0001077e3a6c();
  }
  else {
    func_0x0001077e3a48();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1077e3bf8; end: 1077e3c27;  */

void FUN_1077e3bf8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e3d74; end: 1077e3e77;  */

void FUN_1077e3d74(long param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001077e3db8(param_1 + 8,param_2 + 8);
  func_0x0001077f014c();
  *unaff_x20 = extraout_x8;
  unaff_x20[0x23] = *(undefined8 *)(unaff_x19 + 0x118);
  func_0x000104c2fe00(unaff_x20 + 0x24,unaff_x19 + 0x120);
  return;
}



/* Entry: 1077e4040; end: 1077e4083;  */

void FUN_1077e4040(void)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e4084();
  func_0x0001077f014c();
  *unaff_x19 = extraout_x8;
  puVar1 = unaff_x19;
  func_0x0001077e3150();
  unaff_x19[0x23] = puVar1;
  func_0x0001077f1204();
  return;
}



/* Entry: 1077e42cc; end: 1077e4393;  */

/* WARNING: Possible PIC construction at 0x0001077e431c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e4320) */
/* WARNING: Removing unreachable block (ram,0x0001077e4330) */
/* WARNING: Removing unreachable block (ram,0x0001077e4340) */
/* WARNING: Removing unreachable block (ram,0x0001077e4344) */
/* WARNING: Removing unreachable block (ram,0x0001077e4370) */
/* WARNING: Removing unreachable block (ram,0x0001077e438c) */
/* WARNING: Removing unreachable block (ram,0x0001077e4360) */
/* WARNING: Removing unreachable block (ram,0x0001077eea40) */

void FUN_1077e42cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_500 [48];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  
  func_0x0001077ee32c();
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  func_0x0001077e4474();
  func_0x0001077e2510(&uStack_480);
  func_0x0001077e44a4();
  func_0x0001077e5354(&uStack_480,*param_2);
  func_0x0001077f0fc4();
  func_0x0001077efea0();
  func_0x0001077f14a4();
  func_0x0001077f1394();
  func_0x0001077eff10(auStack_500);
  func_0x0001077ef464();
  func_0x0001077e44bc();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e4538; end: 1077e453b;  */

/* WARNING: Possible PIC construction at 0x0001077e2cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e2cd4) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d00) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d48) */
/* WARNING: Removing unreachable block (ram,0x0001077e2ce8) */

void FUN_1077e4538(undefined4 param_1,long param_2)

{
  long lVar1;
  long *extraout_x8;
  undefined4 uStack_11c;
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [104];
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  func_0x0001077e2e28(auStack_a8);
  func_0x0001077ee718(auStack_e0);
  FUN_1077e2e90();
  func_0x0001077ee718(auStack_118);
  func_0x0001077e2ee4();
  func_0x0001077ee718();
  func_0x0001077e2f38();
  uStack_11c = param_1;
  func_0x0001077ee718();
  func_0x0001077e2f58();
  func_0x0001077ee718();
  func_0x0001077e2f78();
  func_0x0001077ee718();
  func_0x0001077e2fac();
  func_0x0001077ee718();
  func_0x0001077e2fcc();
  func_0x0001077ee718();
  func_0x0001077e2fec();
  func_0x0001077ee718();
  func_0x0001077e300c();
  func_0x0001077ee718();
  func_0x0001077e3030();
  func_0x0001077ee718();
  func_0x0001077e3054();
  func_0x0001077ee718();
  func_0x0001077e3074();
  func_0x0001077ee718();
  func_0x0001077e3094();
  func_0x0001077ee718();
  func_0x0001077e30c8();
  lVar1 = param_2 + 0x450;
  func_0x0001077f0f94(lVar1,param_2 + 0x468,auStack_a8,auStack_e0,auStack_118,&uStack_11c);
  func_0x0001077f06b8();
  func_0x0001077e30e8();
  *extraout_x8 = lVar1;
  return;
}



/* Entry: 1077e4e74; end: 1077e5053;  */

void FUN_1077e4e74(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  func_0x0001077ee398();
  func_0x0001077ee388();
  func_0x0001077ee708();
  if (((int)param_1[2] == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    func_0x00010774a660(param_2,&stack0xffffffffffffffcf);
  }
  else if ((int)param_1[2] == 2) {
    if (*(int *)(param_2 + 0x10) == 2) {
      func_0x00010774a6b0();
      plVar2 = param_1;
      func_0x00010774a6b0();
      lVar4 = *(long *)(*plVar2 + 0x18);
      func_0x00010774a6b8();
      lVar4 = *(long *)(*plVar2 + 0x18) + lVar4;
      func_0x00010747b534();
      func_0x00010774a6b0();
      plVar2 = param_1;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar3 = *param_1;
      while (plVar2 != (long *)0x0) {
        func_0x0001072628ec(auStack_48,lVar3,lVar4);
        func_0x000107262260(&stack0xffffffffffffffd0);
      }
      return;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if (*(int *)(param_2 + 0x10) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(param_2 + 0x10) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(param_2 + 0x10)])
                    (&stack0xffffffffffffffdf,param_2,param_1);
        }
        *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
    }
    return;
  }
  return;
}



/* Entry: 1077e5170; end: 1077e519f;  */

void FUN_1077e5170(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    FUN_1077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077e51f0();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e52d4; end: 1077e52ef;  */

void FUN_1077e52d4(void)

{
  func_0x0001077ef51c();
  func_0x0001077e52f0();
  return;
}



/* Entry: 1077e5644; end: 1077e56af;  */

void FUN_1077e5644(void)

{
  func_0x0001077eef14();
  func_0x0001077e56b0();
  func_0x0001077ef4c8();
  func_0x0001077e570c();
  func_0x0001077f1814();
  FUN_1077e244c();
  func_0x0001077efec4();
  func_0x0001077e56d8();
  func_0x0001077f1000();
  func_0x0001077e5884();
  return;
}



/* Entry: 1077e5814; end: 1077e583f;  */

void FUN_1077e5814(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077e5840();
  }
  return;
}



/* Entry: 1077e5970; end: 1077e59df;  */

long FUN_1077e5970(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x0001077f1458();
  }
  return param_1;
}



/* Entry: 1077e5e9c; end: 1077e5ec3;  */

void FUN_1077e5e9c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x50) = extraout_w8;
  func_0x0001077e5ec4();
  return;
}



/* Entry: 1077e606c; end: 1077e608b;  */

void FUN_1077e606c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001077e608c();
  }
  return;
}



/* Entry: 1077e61f0; end: 1077e620b;  */

void FUN_1077e61f0(long param_1)

{
  func_0x0001077e620c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077e6390; end: 1077e63af;  */

undefined8 FUN_1077e6390(void)

{
  undefined8 uStack_18;
  
  func_0x0001077efa78();
  func_0x0001077e63b0();
  return uStack_18;
}



/* Entry: 1077e70d4; end: 1077e713b;  */

void FUN_1077e70d4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_180 [80];
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  undefined1 auStack_98 [104];
  
  func_0x0001077ef62c();
  func_0x0001077ee374();
  func_0x0001077e8c44(auStack_98);
  func_0x0001077ef474(extraout_x8);
  func_0x0001077e8c20();
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  uStack_d0 = param_1;
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  func_0x0001077e8d1c(auStack_110);
  func_0x0001077eeee0();
  FUN_1077e8cf8();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ee9f8();
    func_0x0001077ee374();
    func_0x0001077e8dc8(auStack_180);
    func_0x0001077eeee0();
    FUN_1077e8cf8();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f0020();
      func_0x0001077ee99c();
      func_0x0001077e8dd0();
      return;
    }
  }
  return;
}



/* Entry: 1077e737c; end: 1077e7433;  */

void FUN_1077e737c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  
  func_0x0001077efd70(param_7,param_1,param_4);
  func_0x0001077f0884(in_stack_00000010,in_stack_00000020,in_stack_00000030);
  func_0x0001077e770c();
  func_0x0001077f012c();
  *unaff_x19 = extraout_x8;
  puVar1 = unaff_x19;
  func_0x0001077e7434();
  unaff_x19[0x45] = puVar1;
  func_0x0001077f1194();
  return;
}



/* Entry: 1077e7c00; end: 1077e7c43;  */

void FUN_1077e7c00(ulong *param_1)

{
  ulong extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined1 uStack_21;
  
  func_0x0001078cb644(&uStack_21);
  func_0x0001077f11bc(*param_1);
  *param_1 = extraout_x9 + extraout_x10 ^ extraout_x8;
  return;
}



/* Entry: 1077e7e00; end: 1077e7e37;  */

void FUN_1077e7e00(void)

{
  func_0x0001077ee210();
  func_0x0001077e7e1c();
  return;
}



/* Entry: 1077e801c; end: 1077e803b;  */

void FUN_1077e801c(void)

{
  func_0x0001077ee210();
  func_0x0001077e803c();
  return;
}



/* Entry: 1077e8138; end: 1077e8167;  */

uint FUN_1077e8138(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8168();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8360; end: 1077e838f;  */

uint FUN_1077e8360(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8390();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e85a4; end: 1077e85df;  */

void FUN_1077e85a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  puVar1 = (undefined8 *)param_1[2];
  uStack_20 = *(undefined4 *)(puVar1 + 2);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  func_0x0001077e85e0(param_2,*param_1,param_1[1],&uStack_30);
  return;
}



/* Entry: 1077e8800; end: 1077e883f;  */

uint FUN_1077e8800(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8870();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8a28; end: 1077e8a67;  */

uint FUN_1077e8a28(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8a98();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8cf8; end: 1077e8d1b;  */

void FUN_1077e8cf8(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e8d24(extraout_x9);
  return;
}



/* Entry: 1077e8e3c; end: 1077e8e73;  */

void FUN_1077e8e3c(void)

{
  func_0x0001077ee210();
  func_0x0001077e8e58();
  return;
}



/* Entry: 1077e8fd8; end: 1077e901f;  */

void FUN_1077e8fd8(void)

{
  undefined1 auStack_48 [24];
  
  func_0x0001077ef398();
  func_0x0001077f0980();
  func_0x0001072787e4(auStack_48);
  func_0x0001077eec28();
  func_0x000107403f50();
  func_0x0001077f0368();
  return;
}



/* Entry: 1077e91f8; end: 1077e9203;  */

void FUN_1077e91f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077eed88();
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e9234(param_4);
  }
  func_0x0001077f0f58();
  return;
}



/* Entry: 1077e9394; end: 1077e939b;  */

void FUN_1077e9394(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x0001077e608c();
  }
  return;
}



/* Entry: 1077e96bc; end: 1077e96ef;  */

void FUN_1077e96bc(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001077f0c6c();
    func_0x0001077e9234();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_1077e91f8();
    func_0x0001077f0638();
    func_0x0001077f0a90();
    func_0x0001077e9718();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1077e9998; end: 1077e999f;  */

void FUN_1077e9998(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1077e9c9c; end: 1077e9cff;  */

void FUN_1077e9c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  
  func_0x0001077eec18();
  func_0x0001077ea778(param_1 + 8,param_4);
  func_0x0001077f0608(&UNK_1109de968);
  func_0x0001077efe2c(unaff_x19 + 0xc80);
  func_0x0001077f05cc(unaff_x19 + 0xc98);
  return;
}



/* Entry: 1077eb3f8; end: 1077eb45b;  */

void FUN_1077eb3f8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 uStack_191;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [64];
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [64];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [104];
  
  func_0x0001077ee2b8();
  func_0x0001077e8c44(auStack_98);
  func_0x0001077ec35c(param_1 + 0x8c0,auStack_98,param_2);
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  puStack_a8 = &UNK_1077eb45c;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x0001077e8d1c(auStack_110);
  func_0x0001077efae0(unaff_x20 + 0x960);
  func_0x0001077ec3dc();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    puStack_118 = &UNK_1077eb4b0;
    ppuStack_120 = &puStack_b0;
    func_0x0001077ef34c();
    func_0x0001077ee374();
    func_0x0001077e8dc8(auStack_180);
    lVar1 = unaff_x20 + 0x9d8;
    func_0x0001077efae0(lVar1);
    func_0x0001077ec3dc();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      puStack_188 = &UNK_1077eb504;
      ppuStack_190 = &ppuStack_120;
      func_0x0001077f0064();
      func_0x0001077ec45c(lVar1 + 0xa50,&uStack_191);
      return;
    }
  }
  return;
}



/* Entry: 1077eb69c; end: 1077ebc5b;  */

void FUN_1077eb69c(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  func_0x0001077ee398();
  func_0x0001077ee388();
  func_0x0001077ee708();
  if (((int)param_1[2] == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    func_0x00010774a660(param_2,&stack0xffffffffffffffcf);
  }
  else if ((int)param_1[2] == 2) {
    if (*(int *)(param_2 + 0x10) == 2) {
      func_0x00010774a6b0();
      plVar2 = param_1;
      func_0x00010774a6b0();
      lVar4 = *(long *)(*plVar2 + 0x18);
      func_0x00010774a6b8();
      lVar4 = *(long *)(*plVar2 + 0x18) + lVar4;
      func_0x00010747b534();
      func_0x00010774a6b0();
      plVar2 = param_1;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar3 = *param_1;
      while (plVar2 != (long *)0x0) {
        func_0x0001072628ec(auStack_48,lVar3,lVar4);
        func_0x000107262260(&stack0xffffffffffffffd0);
      }
      return;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if (*(int *)(param_2 + 0x10) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(param_2 + 0x10) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(param_2 + 0x10)])
                    (&stack0xffffffffffffffdf,param_2,param_1);
        }
        *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
    }
    return;
  }
  return;
}



/* Entry: 1077ebd78; end: 1077ebda7;  */

void FUN_1077ebd78(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    FUN_1077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebdf8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ebedc; end: 1077ebef7;  */

void FUN_1077ebedc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebef8();
  return;
}



/* Entry: 1077ec028; end: 1077ec05b;  */

void FUN_1077ec028(void)

{
  undefined1 in_ZR;
  
  FUN_1077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec078();
  return;
}



/* Entry: 1077ec178; end: 1077ec1a7;  */

void FUN_1077ec178(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    FUN_1077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec1f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec2dc; end: 1077ec2f7;  */

void FUN_1077ec2dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec2f8();
  return;
}



/* Entry: 1077ec428; end: 1077ec45b;  */

void FUN_1077ec428(void)

{
  undefined1 in_ZR;
  
  FUN_1077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec478();
  return;
}



/* Entry: 1077ec578; end: 1077ec5a7;  */

void FUN_1077ec578(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x48) != 0) && (uVar1 = *(int *)(param_2 + 0x48) == 1, !(bool)uVar1)) {
    FUN_1077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec5f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ece38; end: 1077ece43;  */

void FUN_1077ece38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1077ed0a0; end: 1077ed0f3;  */

void FUN_1077ed0a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077ed0d4(param_4);
  }
  func_0x0001077efa00(0x58);
  return;
}



/* Entry: 1077ed24c; end: 1077ed27b;  */

void FUN_1077ed24c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c();
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x0001077e5f08();
  }
  return;
}



/* Entry: 1077ed43c; end: 1077ed44f;  */

void FUN_1077ed43c(void)

{
  func_0x0001077eda18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077edb24; end: 1077edb83;  */

long FUN_1077edb24(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  func_0x0001077f03e8();
  return param_1;
}



/* Entry: 1077ee03c; end: 1077ee03f;  */

long FUN_1077ee03c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de670);
  func_0x000104c2f714(lVar1 + 0x58);
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 1077ee1ec; end: 1077f093f;  */

void FUN_1077ee1ec(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107751334();
  *(undefined1 *)((long)register0x00000008 + 400) = 1;
  return;
}



/* Entry: 1077f21d0; end: 1077f22bb;  */

long FUN_1077f21d0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x110;
      func_0x000107283140(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1077f262c; end: 1077f2663;  */

undefined8 FUN_1077f262c(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109deb98;
  do {
    pbVar2 = &UNK_1109debd8;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f28f0; end: 1077f2927;  */

undefined8 FUN_1077f28f0(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109ded08;
  do {
    pbVar2 = &UNK_1109ded48;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2b60; end: 1077f2b97;  */

undefined8 FUN_1077f2b60(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109dedf8;
  do {
    pbVar2 = &UNK_1109dee38;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f34cc; end: 1077f3503;  */

undefined8 FUN_1077f34cc(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x60;
  pbVar1 = &UNK_1109df598;
  do {
    pbVar2 = &UNK_1109df608;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f3870; end: 1077f3887;  */

void FUN_1077f3870(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001072a8ef4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077f3a18; end: 1077f3aa3;  */

undefined8 *
FUN_1077f3a18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
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
    puVar5 = puVar5 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar5;
  func_0x0001077f3aa4(&uStack_50);
  return puVar5;
}



/* Entry: 1077f3c4c; end: 1077f3cab;  */

undefined8 FUN_1077f3c4c(void)

{
  int iVar1;
  
  if ((bRam0000000113822d28 & 1) == 0) {
    iVar1 = 0x13822d28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000113822d08 = &PTR_DAT_1109df680;
      uRam0000000113822d20 = 0x113822d08;
      ___cxa_guard_release(0x113822d28);
    }
  }
  return 0x113822d08;
}



/* Entry: 1077f3e24; end: 1077f3e43;  */

void FUN_1077f3e24(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010743e2a8();
  }
  return;
}



/* Entry: 1077f45c0; end: 1077f4667;  */

undefined1  [16] FUN_1077f45c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1077f4df8; end: 1077f4ebf;  */

long FUN_1077f4df8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x0001077f4eec(param_1,(param_1[1] - *param_1 >> 5) + 1);
  func_0x0001077f513c();
  func_0x0001077f4fac(auStack_68);
  func_0x0001077f4ec0(lStack_58,param_2,param_3,param_4,param_5,param_6);
  lStack_58 = lStack_58 + 0x20;
  func_0x0001077f4f2c(param_1,auStack_68);
  lVar1 = param_1[1];
  func_0x0001077f4ff4(auStack_68);
  return lVar1;
}



/* Entry: 1077f50b4; end: 1077f50cf;  */

void FUN_1077f50b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077f50d0(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1077f572c; end: 1077f579b;  */

float FUN_1077f572c(float param_1,undefined8 param_2,float param_3,float param_4,undefined8 param_5,
                   long param_6)

{
  float fVar1;
  
  fVar1 = param_1;
  func_0x0001077f702c();
  return fVar1 + param_3 * param_4 * (param_1 + *(float *)(param_6 + 0xc));
}



/* Entry: 1077f6540; end: 1077f67bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1077f6540(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,double *****param_6,double *****param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined1 *puVar7;
  double *****pppppdVar8;
  double *****pppppdVar9;
  long lVar10;
  double *****pppppdVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar12;
  ulong uVar13;
  double ****ppppdVar14;
  double *****pppppdVar15;
  uint uVar16;
  double *****pppppdVar17;
  double *****pppppdVar18;
  double *****pppppdVar19;
  double *****pppppdVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  short sVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  double ****ppppdVar41;
  undefined4 uVar42;
  float fVar43;
  double *****in_stack_00000000;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  double ****ppppdStack_3c0;
  double ****ppppdStack_3b8;
  double ****ppppdStack_3a8;
  double ****ppppdStack_3a0;
  double ****ppppdStack_398;
  double ***pppdStack_390;
  undefined8 uStack_388;
  double ****ppppdStack_378;
  double ****ppppdStack_370;
  double ****ppppdStack_368;
  double ****ppppdStack_360;
  double ****ppppdStack_358;
  double ****ppppdStack_350;
  double ****ppppdStack_348;
  double ****ppppdStack_340;
  double ****appppdStack_330 [3];
  double ****ppppdStack_318;
  double ****ppppdStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  double dStack_2e0;
  double dStack_2d8;
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [72];
  double ***pppdStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_88;
  
  sVar37 = (short)((ulong)param_4 >> 0x30);
  sVar36 = (short)((ulong)param_4 >> 0x20);
  sVar35 = (short)((ulong)param_4 >> 0x10);
  sVar34 = (short)param_4;
  uVar33 = (undefined2)((ulong)param_3 >> 0x30);
  uVar32 = (undefined2)((ulong)param_3 >> 0x20);
  uVar30 = (undefined2)((ulong)param_3 >> 0x10);
  uVar29 = (undefined2)param_3;
  pppppdVar20 = param_7;
  func_0x0001077f8548();
  uStack_88 = extraout_x8;
  if (*(int *)(pppppdVar20 + 3) == 0) {
    func_0x0001074b5408(param_7);
    fVar38 = *(float *)(param_5 + 0xe58);
    func_0x0001072a0e60();
    dVar22 = (double)((float)CONCAT22(uVar30,uVar29) - fVar38);
    dVar40 = (double)((float)CONCAT22(sVar35,sVar34) - fVar38);
  }
  else {
    func_0x0001074b5420(param_7);
    uStack_1a8 = func_0x0001077f6258();
    uStack_1a0 = CONCAT22(uVar30,uVar29);
    uStack_19c = CONCAT22(sVar35,sVar34);
    uStack_1a4 = param_2;
    func_0x0001077f6510(&uStack_1a8);
    dVar22 = (double)CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar30,uVar29)));
    dVar40 = (double)CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar35,sVar34)));
  }
  if (param_8 == 0) {
    if (*(int *)(param_7 + 3) == 0) {
      func_0x0001074b5408();
      func_0x0001072a77dc(&pppdStack_1c0);
      func_0x0001077f8558();
      func_0x0001077f864c(auStack_248);
      func_0x0001077f8608();
      func_0x0001077f8538();
      func_0x0001077f86a0(param_5 + 0xe60);
      func_0x0001077f85d8();
      puVar7 = auStack_248;
      goto LAB_1077f6708;
    }
    func_0x0001074b5420();
    uStack_1b8 = *(undefined4 *)(param_7 + 1);
    pppdStack_1c0 = (double ***)*param_7;
    func_0x0001077f8558();
    func_0x0001077f864c(auStack_268);
    func_0x0001077f8608();
    func_0x0001077f8538();
    func_0x0001077f86ac(param_5 + 0xe60);
    func_0x0001077f85d8();
    puVar7 = auStack_268;
  }
  else {
    if (*(int *)(param_7 + 3) == 0) {
      func_0x0001074b5408();
      func_0x0001072a77dc(&pppdStack_1c0);
      func_0x0001077f8558();
      func_0x0001077f864c(auStack_208);
      func_0x0001077f8608();
      func_0x0001077f8538();
      func_0x0001077f86a0(param_5 + 0xf80);
      func_0x0001077f85d8();
      puVar7 = auStack_208;
LAB_1077f6708:
      func_0x0001072a6b60(puVar7);
      func_0x0001072a7938(&pppdStack_1c0);
      goto LAB_1077f6714;
    }
    func_0x0001074b5420();
    uStack_1b8 = *(undefined4 *)(param_7 + 1);
    pppdStack_1c0 = (double ***)*param_7;
    func_0x0001077f8558();
    func_0x0001077f864c(auStack_228);
    func_0x0001077f8608();
    func_0x0001077f8538();
    func_0x0001077f86ac(param_5 + 0xf80);
    func_0x0001077f85d8();
    puVar7 = auStack_228;
  }
  func_0x0001072a6b60(puVar7);
  param_7 = param_6;
LAB_1077f6714:
  func_0x0001077f8514(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077f8574();
  func_0x0001072a6b60(auStack_248);
  pppppdVar8 = (double *****)&pppdStack_1c0;
  func_0x0001072a7938();
  func_0x0001077f85e0();
  uStack_2f0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  *(undefined4 *)(extraout_x8_00 + 4) = 0x3f800000;
  pppppdVar17 = (double *****)*param_7;
  pppppdVar11 = (double *****)param_7[1];
  uVar6 = pppppdVar17 == pppppdVar11;
  dStack_2e0 = dVar22;
  dStack_2d8 = dVar40;
  if ((!(bool)uVar6) &&
     ((pppppdVar8[0x1da] != pppppdVar8[0x1db] ||
      (uVar6 = pppppdVar8[0x1fe] == pppppdVar8[0x1ff], !(bool)uVar6)))) {
    ppppdStack_378 = (double ****)0x0;
    ppppdStack_370 = (double ****)0x0;
    ppppdStack_368 = (double ****)0x0;
    for (; pppppdVar19 = (double *****)ppppdStack_378, auVar24 = _UNK_10dea5e90,
        pppppdVar17 != pppppdVar11; pppppdVar17 = pppppdVar17 + 2) {
      ppppdVar41 = (double ****)
                   CONCAT44((float)((double)pppppdVar17[1] + (double)*(float *)(pppppdVar8 + 0x1cb))
                            ,(float)((double)*pppppdVar17 + (double)*(float *)(pppppdVar8 + 0x1cb)))
      ;
      if (ppppdStack_370 < ppppdStack_368) {
        pppppdVar19 = (double *****)(ppppdStack_370 + 1);
        *ppppdStack_370 = (double ***)ppppdVar41;
      }
      else {
        pppppdVar19 = &ppppdStack_378;
        func_0x000107389488(pppppdVar19,((long)ppppdStack_370 - (long)ppppdStack_378 >> 3) + 1);
        pppppdVar18 = (double *****)((long)ppppdStack_370 - (long)ppppdStack_378);
        ppppdStack_340 = (double ****)&ppppdStack_368;
        if (pppppdVar19 == (double *****)0x0) {
          pppppdVar9 = (double *****)0x0;
          pppppdVar20 = pppppdVar18;
        }
        else {
          pppppdVar9 = &ppppdStack_368;
          func_0x0001072a78c0();
          pppppdVar20 = (double *****)((long)ppppdStack_370 - (long)ppppdStack_378);
        }
        ppppdStack_358 = (double ****)((long)pppppdVar9 + (long)pppppdVar18);
        ppppdStack_348 = (double ****)(pppppdVar9 + (long)pppppdVar19);
        pppppdVar18 = (double *****)((long)ppppdStack_358 - (long)pppppdVar20);
        pppppdVar19 = (double *****)(ppppdStack_358 + 1);
        ppppdStack_360 = (double ****)pppppdVar9;
        *ppppdStack_358 = (double ***)ppppdVar41;
        ppppdStack_350 = (double ****)pppppdVar19;
        _memcpy(pppppdVar18);
        pppppdVar19 = (double *****)ppppdStack_350;
        ppppdVar41 = ppppdStack_368;
        ppppdStack_368 = ppppdStack_348;
        ppppdStack_370 = ppppdStack_350;
        ppppdStack_350 = ppppdStack_378;
        ppppdStack_348 = ppppdVar41;
        ppppdStack_360 = ppppdStack_378;
        ppppdStack_358 = ppppdStack_378;
        ppppdStack_378 = (double ****)pppppdVar18;
        func_0x000107388ffc(&ppppdStack_360);
      }
      ppppdStack_370 = (double ****)pppppdVar19;
    }
    for (; pppppdVar19 != (double *****)ppppdStack_370; pppppdVar19 = pppppdVar19 + 1) {
      ppppdVar41 = *pppppdVar19;
      fVar38 = SUB84(ppppdVar41,0);
      fVar27 = (float)((ulong)ppppdVar41 >> 0x20);
      sVar31 = -(ushort)(fVar27 < auVar24._4_4_);
      sVar34 = -(ushort)(auVar24._0_4_ < fVar38);
      sVar35 = -(ushort)(auVar24._4_4_ < fVar27);
      sVar36 = -(ushort)(auVar24._8_4_ < fVar38);
      sVar37 = -(ushort)(auVar24._12_4_ < fVar27);
      auVar3._8_4_ = fVar38;
      auVar3._0_8_ = ppppdVar41;
      auVar3._12_4_ = fVar27;
      auVar4._4_2_ = sVar31;
      auVar4._0_4_ = (int)(short)-(ushort)(fVar38 < auVar24._0_4_);
      auVar4._6_2_ = sVar31 >> 0xf;
      auVar4._8_2_ = sVar36;
      auVar4._10_2_ = sVar36 >> 0xf;
      auVar4._12_2_ = sVar37;
      auVar4._14_2_ = sVar37 >> 0xf;
      auVar24 = auVar24 ^ (auVar24 ^ auVar3) & auVar4;
    }
    uStack_388 = auVar24._8_8_;
    pppdStack_390 = auVar24._0_8_;
    func_0x0001072a12c8(&ppppdStack_3a8,pppppdVar8 + 0x1cc,&pppdStack_390);
    param_7 = (double *****)&pppdStack_390;
    func_0x0001072a12c8(&ppppdStack_3c0,pppppdVar8 + 0x1f0);
    pppppdVar8 = (double *****)ppppdStack_3a0;
    pppppdVar17 = (double *****)((long)ppppdStack_3b8 - (long)ppppdStack_3c0);
    if (0 < (long)pppppdVar17) {
      if ((long)ppppdStack_398 - (long)ppppdStack_3a0 < (long)pppppdVar17) {
        pppppdVar20 = &ppppdStack_3a8;
        func_0x0001072abcd4(pppppdVar20,
                            ((long)ppppdStack_3a0 - (long)ppppdStack_3a8) / 0x130 +
                            (long)pppppdVar17 / 0x130);
        func_0x0001072a7c48(&ppppdStack_360,pppppdVar20,
                            ((long)pppppdVar8 - (long)ppppdStack_3a8) / 0x130,&ppppdStack_398);
        ppppdVar41 = (double ****)((long)ppppdStack_350 + (long)pppppdVar17);
        in_stack_00000000 = (double *****)ppppdStack_350;
        for (; pppppdVar17 != (double *****)0x0; pppppdVar17 = pppppdVar17 + -0x26) {
                    /* WARNING: Read-only address (ram,0x00010dea5e90) is written */
          func_0x0001077f7b14(in_stack_00000000,ppppdStack_3c0);
          in_stack_00000000 = in_stack_00000000 + 0x26;
          ppppdStack_3c0 = ppppdStack_3c0 + 0x26;
        }
        ppppdStack_350 = ppppdVar41;
                    /* WARNING: Read-only address (ram,0x00010dea5e90) is written */
        func_0x0001072a7ccc(&ppppdStack_398,pppppdVar8,ppppdStack_3a0,ppppdVar41);
        ppppdStack_350 =
             (double ****)((long)ppppdStack_3a0 + ((long)ppppdStack_350 - (long)pppppdVar8));
        pppppdVar20 = (double *****)
                      (ppppdStack_358 + (((long)pppppdVar8 - (long)ppppdStack_3a8) / -0x130) * 0x26)
        ;
        param_7 = (double *****)ppppdStack_3a8;
        func_0x0001072a7ccc(&ppppdStack_398,ppppdStack_3a8,pppppdVar8,pppppdVar20);
        ppppdVar41 = ppppdStack_398;
        ppppdStack_398 = ppppdStack_348;
        ppppdStack_3a0 = ppppdStack_350;
        ppppdStack_350 = ppppdStack_3a8;
        ppppdStack_348 = ppppdVar41;
        ppppdStack_360 = ppppdStack_3a8;
        ppppdStack_358 = ppppdStack_3a8;
        ppppdStack_3a8 = (double ****)pppppdVar20;
        func_0x0001072a7dec(&ppppdStack_360);
        pppppdVar17 = (double *****)0x0;
        pppppdVar20 = pppppdVar8;
      }
      else {
        appppdStack_330[0] = ppppdStack_3a0;
        ppppdStack_358 = (double ****)appppdStack_330;
        ppppdStack_350 = (double ****)&ppppdStack_318;
        ppppdStack_348 = (double ****)((ulong)ppppdStack_348 & 0xffffffffffffff00);
        ppppdStack_360 = (double ****)&ppppdStack_398;
        for (pppppdVar8 = (double *****)ppppdStack_3c0; ppppdStack_318 = ppppdStack_3a0,
            pppppdVar8 != (double *****)ppppdStack_3b8; pppppdVar8 = pppppdVar8 + 0x26) {
          param_7 = pppppdVar8;
          func_0x0001077f7b14(ppppdStack_3a0);
          ppppdStack_3a0 = ppppdStack_318 + 0x26;
        }
        ppppdStack_348 = (double ****)CONCAT71(ppppdStack_348._1_7_,1);
        func_0x0001072a7d84(&ppppdStack_360);
      }
    }
    ppppdVar41 = ppppdStack_3a0;
    ppppdStack_358 = (double ****)0x0;
    ppppdStack_360 = (double ****)0x0;
    ppppdStack_348 = (double ****)0x0;
    ppppdStack_350 = (double ****)0x0;
    ppppdStack_340 = (double ****)CONCAT44(ppppdStack_340._4_4_,0x3f800000);
    for (pppppdVar8 = (double *****)ppppdStack_3a8; pppppdVar11 = (double *****)ppppdStack_358,
        uVar6 = pppppdVar8 == (double *****)ppppdVar41, !(bool)uVar6; pppppdVar8 = pppppdVar8 + 0x26
        ) {
      uVar1 = *(uint *)(pppppdVar8 + 0x14);
      pppppdVar20 = (double *****)(ulong)uVar1;
      if ((double *****)ppppdStack_358 != (double *****)0x0) {
        uVar12 = (long)ppppdStack_358 - 1;
        uVar16 = (uint)ppppdStack_358;
        if (((ulong)ppppdStack_358 & uVar12) == 0) {
          in_stack_00000000 = (double *****)(ulong)(uVar16 - 1 & uVar1);
        }
        else {
          in_stack_00000000 = pppppdVar20;
          if (ppppdStack_358 <= pppppdVar20) {
            uVar2 = 0;
            if (uVar16 != 0) {
              uVar2 = uVar1 / uVar16;
            }
            in_stack_00000000 = (double *****)(ulong)(uVar1 - uVar2 * uVar16);
          }
        }
        pppppdVar19 = (double *****)ppppdStack_360[(long)in_stack_00000000];
        if (pppppdVar19 != (double *****)0x0) {
          do {
            while( true ) {
              pppppdVar19 = (double *****)*pppppdVar19;
              if (pppppdVar19 == (double *****)0x0) goto code_r0x0001077f6bd0;
              pppppdVar17 = (double *****)pppppdVar19[1];
              if (pppppdVar17 != pppppdVar20) break;
              if (*(uint *)(pppppdVar19 + 2) == uVar1) goto code_r0x0001077f6e80;
            }
            if (((ulong)ppppdStack_358 & uVar12) == 0) {
              pppppdVar17 = (double *****)((ulong)pppppdVar17 & uVar12);
            }
            else if (ppppdStack_358 <= pppppdVar17) {
              uVar13 = 0;
              if ((double *****)ppppdStack_358 != (double *****)0x0) {
                uVar13 = (ulong)pppppdVar17 / (ulong)ppppdStack_358;
              }
              pppppdVar17 = (double *****)((long)pppppdVar17 - uVar13 * (long)ppppdStack_358);
            }
          } while (pppppdVar17 == in_stack_00000000);
        }
      }
code_r0x0001077f6bd0:
      pppppdVar19 = (double *****)0x40;
      __Znwm();
      uStack_308 = 1;
      *pppppdVar19 = (double ****)0x0;
      pppppdVar19[1] = (double ****)pppppdVar20;
      *(uint *)(pppppdVar19 + 2) = uVar1;
      pppppdVar19[4] = (double ****)0x0;
      pppppdVar19[3] = (double ****)0x0;
      pppppdVar19[6] = (double ****)0x0;
      pppppdVar19[5] = (double ****)0x0;
      *(undefined4 *)(pppppdVar19 + 7) = 0x3f800000;
      ppppdStack_310 = (double ****)&ppppdStack_350;
      if ((pppppdVar11 == (double *****)0x0) ||
         (ppppdStack_340._0_4_ * (float)pppppdVar11 < (float)((long)ppppdStack_348 + 1))) {
        uVar12 = 1;
        if ((double *****)0x2 < pppppdVar11) {
          uVar12 = (ulong)(((ulong)pppppdVar11 & (long)pppppdVar11 - 1U) != 0);
        }
        pppppdVar17 = (double *****)(uVar12 | (long)pppppdVar11 << 1);
        pppppdVar18 = (double *****)(long)((float)((long)ppppdStack_348 + 1) / ppppdStack_340._0_4_)
        ;
        if (pppppdVar17 <= pppppdVar18) {
          pppppdVar17 = pppppdVar18;
        }
        pppppdVar18 = pppppdVar11;
        ppppdStack_318 = (double ****)pppppdVar19;
        if ((long)pppppdVar17 - 1U == 0) {
          pppppdVar17 = (double *****)0x2;
        }
        else if (((ulong)pppppdVar17 & (long)pppppdVar17 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppppdVar18 = (double *****)ppppdStack_358;
        }
        pppppdVar11 = pppppdVar17;
        if (pppppdVar18 < pppppdVar17) {
code_r0x0001077f6c84:
          if ((ulong)pppppdVar11 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1077f6f80);
            (*pcVar5)();
          }
          lVar10 = (long)pppppdVar11 << 3;
          __Znwm(lVar10);
          func_0x0001077f84bc(&ppppdStack_360,lVar10);
          for (pppppdVar17 = (double *****)0x0; pppppdVar11 != pppppdVar17;
              pppppdVar17 = (double *****)((long)pppppdVar17 + 1)) {
            ppppdStack_360[(long)pppppdVar17] = (double ***)0x0;
          }
          ppppdStack_358 = (double ****)pppppdVar11;
          if ((double *****)ppppdStack_350 != (double *****)0x0) {
            pppppdVar17 = (double *****)ppppdStack_350[1];
            uVar13 = (long)pppppdVar11 - 1;
            uVar12 = 0;
            if (pppppdVar11 != (double *****)0x0) {
              uVar12 = (ulong)pppppdVar17 / (ulong)pppppdVar11;
            }
            pppppdVar18 = pppppdVar17;
            if (pppppdVar11 <= pppppdVar17) {
              pppppdVar18 = (double *****)((long)pppppdVar17 - uVar12 * (long)pppppdVar11);
            }
            if (((ulong)pppppdVar11 & uVar13) == 0) {
              pppppdVar18 = (double *****)((ulong)pppppdVar17 & uVar13);
            }
            ppppdStack_360[(long)pppppdVar18] = (double ***)&ppppdStack_350;
            pppppdVar17 = (double *****)ppppdStack_350;
            while (pppppdVar9 = pppppdVar17, pppppdVar17 = (double *****)*pppppdVar9,
                  pppppdVar17 != (double *****)0x0) {
              pppppdVar15 = (double *****)pppppdVar17[1];
              if (((ulong)pppppdVar11 & uVar13) == 0) {
                pppppdVar15 = (double *****)((ulong)pppppdVar15 & uVar13);
              }
              else if (pppppdVar11 <= pppppdVar15) {
                uVar12 = 0;
                if (pppppdVar11 != (double *****)0x0) {
                  uVar12 = (ulong)pppppdVar15 / (ulong)pppppdVar11;
                }
                pppppdVar15 = (double *****)((long)pppppdVar15 - uVar12 * (long)pppppdVar11);
              }
              if (pppppdVar15 != pppppdVar18) {
                if ((double ****)ppppdStack_360[(long)pppppdVar15] == (double ****)0x0) {
                  ppppdStack_360[(long)pppppdVar15] = (double ***)pppppdVar9;
                  pppppdVar18 = pppppdVar15;
                }
                else {
                  *pppppdVar9 = *pppppdVar17;
                  *pppppdVar17 = (double ****)*ppppdStack_360[(long)pppppdVar15];
                  *ppppdStack_360[(long)pppppdVar15] = (double **)pppppdVar17;
                  pppppdVar17 = pppppdVar9;
                }
              }
            }
          }
        }
        else {
          pppppdVar11 = pppppdVar18;
          if (pppppdVar17 < pppppdVar18) {
            pppppdVar11 = (double *****)(long)((float)ppppdStack_348 / ppppdStack_340._0_4_);
            if ((pppppdVar18 < (double *****)0x3) ||
               (((ulong)pppppdVar18 & (long)pppppdVar18 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((double *****)0x1 < pppppdVar11) {
              pppppdVar11 = (double *****)(1L << (-LZCOUNT((long)pppppdVar11 + -1) & 0x3fU));
            }
            if (pppppdVar17 <= pppppdVar11) {
              pppppdVar17 = pppppdVar11;
            }
            pppppdVar11 = (double *****)ppppdStack_358;
            if (pppppdVar17 < pppppdVar18) {
              pppppdVar11 = pppppdVar17;
              if (pppppdVar17 != (double *****)0x0) goto code_r0x0001077f6c84;
              func_0x0001077f84bc(&ppppdStack_360,0);
              ppppdStack_358 = (double ****)0x0;
              pppppdVar11 = (double *****)0x0;
            }
          }
        }
        if (((ulong)pppppdVar11 & (long)pppppdVar11 - 1U) == 0) {
          in_stack_00000000 = (double *****)(ulong)((int)pppppdVar11 - 1U & uVar1);
        }
        else {
          in_stack_00000000 = pppppdVar20;
          if (pppppdVar11 <= pppppdVar20) {
            uVar12 = 0;
            if (pppppdVar11 != (double *****)0x0) {
              uVar12 = (ulong)pppppdVar20 / (ulong)pppppdVar11;
            }
            in_stack_00000000 = (double *****)((long)pppppdVar20 - uVar12 * (long)pppppdVar11);
          }
        }
      }
      ppppdVar14 = (double ****)ppppdStack_360[(long)in_stack_00000000];
      if (ppppdVar14 == (double ****)0x0) {
        *pppppdVar19 = ppppdStack_350;
        ppppdStack_360[(long)in_stack_00000000] = (double ***)&ppppdStack_350;
        ppppdStack_350 = (double ****)pppppdVar19;
        if (*pppppdVar19 != (double ****)0x0) {
          pppppdVar20 = (double *****)(*pppppdVar19)[1];
          if (((ulong)pppppdVar11 & (long)pppppdVar11 - 1U) == 0) {
            pppppdVar20 = (double *****)((ulong)pppppdVar20 & (long)pppppdVar11 - 1U);
          }
          else if (pppppdVar11 <= pppppdVar20) {
            uVar12 = 0;
            if (pppppdVar11 != (double *****)0x0) {
              uVar12 = (ulong)pppppdVar20 / (ulong)pppppdVar11;
            }
            pppppdVar20 = (double *****)((long)pppppdVar20 - uVar12 * (long)pppppdVar11);
          }
          ppppdStack_360[(long)pppppdVar20] = (double ***)pppppdVar19;
        }
      }
      else {
        *pppppdVar19 = (double ****)*ppppdVar14;
        *ppppdVar14 = (double ***)pppppdVar19;
      }
      ppppdStack_318 = (double ****)0x0;
      ppppdStack_348 = (double ****)((long)ppppdStack_348 + 1);
      func_0x0001077f84d4(&ppppdStack_318);
code_r0x0001077f6e80:
      pppppdVar17 = (double *****)ppppdStack_370;
      ppppdStack_318 = (double ****)0x0;
      ppppdStack_310 = (double ****)0x0;
      uStack_308 = 0;
      for (pppppdVar20 = (double *****)ppppdStack_378; pppppdVar20 != pppppdVar17;
          pppppdVar20 = pppppdVar20 + 1) {
        pppppdVar11 = pppppdVar20;
        func_0x0001077f4410();
        appppdStack_330[0] = (double ****)CONCAT44(appppdStack_330[0]._4_4_,(int)pppppdVar11);
        func_0x0001072c7768(&ppppdStack_318,appppdStack_330);
      }
      auVar23._0_2_ = (undefined2)(int)*(float *)(pppppdVar8 + 0x24);
      auVar23._2_2_ = (short)(int)*(float *)((long)pppppdVar8 + 0x124);
      auVar23._4_2_ = (short)(int)*(float *)(pppppdVar8 + 0x25);
      auVar23._6_2_ = (short)(int)*(float *)((long)pppppdVar8 + 300);
      auVar23._8_8_ = 0;
      auVar24._8_4_ = 0x7060504;
      auVar24._0_8_ = 0x302050403020100;
      auVar24._12_4_ = 0x7060100;
      auVar24 = a64_TBL(ZEXT816(0),auVar23,auVar24);
      uStack_2f8 = auVar24._8_8_;
      uStack_300 = auVar24._0_8_;
      pppppdVar20 = (double *****)0x4;
      func_0x00010737c664(appppdStack_330,&uStack_300);
      in_stack_00000000 = &ppppdStack_318;
      param_7 = appppdStack_330;
      func_0x00010787554c();
      func_0x000104c336c8(appppdStack_330);
      func_0x000104c336c8(&ppppdStack_318);
      if (((ulong)in_stack_00000000 & 1) != 0) {
        func_0x0001072a1b80(pppppdVar19 + 3,pppppdVar8);
        func_0x0001074f2a9c(extraout_x8_00,pppppdVar8 + 0x14);
        param_7 = pppppdVar8;
        func_0x0001072ab794();
      }
    }
    func_0x0001077f846c(&ppppdStack_360);
    func_0x0001072a7e50(&ppppdStack_3c0);
    func_0x0001072a7e50(&ppppdStack_3a8);
    pppppdVar8 = &ppppdStack_378;
    func_0x0001072a7938();
  }
  func_0x0001077f8514(uStack_2f0);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072a7dec(&ppppdStack_360);
  func_0x0001072a7e50(&ppppdStack_3c0);
  func_0x0001072a7e50(&ppppdStack_3a8);
  func_0x0001072a7938(&ppppdStack_378);
  func_0x0001074fc0dc(extraout_x8_00);
  pppppdVar11 = pppppdVar8;
  __Unwind_Resume();
  pppppdVar19 = pppppdVar20;
  func_0x0001077f873c();
  uVar42 = *(undefined4 *)param_7;
  fVar43 = *(float *)((long)param_7 + 4);
  fVar39 = *(float *)(param_7 + 1);
  uVar28 = 0;
  uVar29 = SUB42(fVar39,0);
  uVar30 = (undefined2)((uint)fVar39 >> 0x10);
  uVar32 = 0;
  uVar33 = 0;
  fVar25 = fVar43;
  fVar21 = (float)func_0x0001077f7194(uVar42,pppppdVar19,*(undefined8 *)((long)pppppdVar11 + 0x4c));
  fVar38 = (float)CONCAT22(uVar30,uVar29);
  fVar27 = (float)CONCAT22(sVar35,sVar34);
  uStack_460 = CONCAT44(fVar25,fVar21);
  uStack_458 = CONCAT44(CONCAT22(sVar35,sVar34),CONCAT22(uVar30,uVar29));
  fVar26 = fVar25;
  if (fVar39 != 0.0) {
    uVar29 = 0;
    uVar30 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar28 = 0;
    func_0x00010740b850(uVar42,pppppdVar20);
    fVar26 = fVar43;
  }
  if ((*(char *)((long)pppppdVar17 + 0xa94) == '\x01') &&
     (fVar43 = *(float *)(pppppdVar17 + 0x152), 0.0 < fVar43)) {
    uStack_480 = (double)SUB84(*pppppdVar8,0);
    dStack_478 = (double)(float)((ulong)*pppppdVar8 >> 0x20);
    func_0x00010741848c(&uStack_480,pppppdVar20 + 0x61);
    uStack_4a0 = func_0x0001074185bc(pppppdVar20 + 0x30,*(undefined8 *)((long)pppppdVar17 + 0x4c),1)
    ;
    uStack_480 = (double)fVar21;
    dStack_478 = (double)fVar25;
    dStack_470 = (double)fVar38;
    dStack_468 = (double)fVar27;
    uStack_498 = CONCAT44(uVar28,fVar26);
    uStack_490 = CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar30,uVar29)));
    uStack_488 = CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar35,sVar34)));
    dVar22 = (double)func_0x00010740b8e0((double)fVar43,&uStack_480,&uStack_4a0);
    uStack_460 = CONCAT44((float)(double)CONCAT44(uVar28,fVar26),(float)dVar22);
    uStack_458 = CONCAT44((float)(double)CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar35,sVar34))),
                          (float)(double)CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar30,uVar29))));
  }
  uStack_480 = (double)CONCAT44(*(undefined4 *)(pppppdVar17 + 0x1cb),
                                *(undefined4 *)(pppppdVar17 + 0x1cb));
  dStack_478 = 0.0;
  func_0x0001073b5da0(&uStack_460,&uStack_480);
  return;
}



/* Entry: 1077f7858; end: 1077f78f3;  */

/* WARNING: Possible PIC construction at 0x0001077f787c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077f7880) */

void FUN_1077f7858(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined4 auStack_c0 [6];
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &stack0xfffffffffffffff0;
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  uStack_38 = 0x1077f7880;
  auStack_c0[0] = 0x94;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_a0 = &PTR_DAT_110996720;
  uStack_98 = 0;
  uStack_80 = 0x94;
  uStack_78 = 0;
  uStack_74 = 1;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  lStack_50 = param_2;
  uStack_48 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,param_3);
  func_0x00010726e300(auStack_c0,&UNK_10f42acba,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  uStack_e0 = 3;
  uStack_f8 = *param_1;
  uStack_f0 = 3;
  uStack_e8 = uVar1;
  func_0x00010743fa44(param_1,auStack_c0,&uStack_e8,&uStack_f8,7);
  func_0x000107262330(auStack_c0);
  return;
}



/* Entry: 1077f7bac; end: 1077f7bb3;  */

void FUN_1077f7bac(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077f8664(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x0001072792b8(lVar1 + -0x10);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077f7ef4; end: 1077f7f6f;  */

long * FUN_1077f7ef4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x18;
    func_0x0001072792b8(lVar1 + -0x10);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077f8164; end: 1077f81b3;  */

long * FUN_1077f8164(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0xccccccccccccccd) {
    uVar1 = (param_1[2] - *param_1) / 0x14;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x666666666666665 < uVar1) {
      plVar2 = (long *)0xccccccccccccccc;
    }
    return plVar2;
  }
  func_0x0001074c3118();
  func_0x0001077f8664();
  func_0x0001077f86c4(param_2[1]);
  func_0x0001077f858c();
  return param_1;
}



/* Entry: 1077f8334; end: 1077f8427;  */

bool FUN_1077f8334(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  
  func_0x0001077f8664();
  bVar1 = *(byte *)(*(long **)(param_1 + 8) + 2);
  if ((*(byte *)(param_2 + 0x118) & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      return false;
    }
  }
  else if (bVar1 != 0) {
    pcVar8 = *(char **)(*(long *)(unaff_x19 + 0x108) + 0x30);
    pcVar9 = *(char **)(**(long **)(param_1 + 8) + 0x30);
    pcVar6 = pcVar8 + 0x20;
    if (*pcVar8 == *pcVar9) {
      pcVar3 = pcVar8 + 0x60;
      func_0x000104c32db4(pcVar3,pcVar9 + 0x60);
      if ((int)pcVar3 != 0) {
        pcVar8 = pcVar8 + 0x98;
        func_0x000104c32db4(pcVar8,pcVar9 + 0x98);
        if (((int)pcVar8 != 0) &&
           (func_0x00010735c498(pcVar6,pcVar9 + 0x20), ((ulong)pcVar6 & 1) != 0)) {
          return false;
        }
      }
    }
  }
  if (*(long *)(**(long **)(unaff_x20 + 0x10) + 0x18) == 0) {
    bVar2 = true;
  }
  else {
    plVar7 = (long *)(**(long **)(unaff_x20 + 0x10) + 0x10);
    do {
      plVar7 = (long *)*plVar7;
      bVar2 = plVar7 == (long *)0x0;
      if (plVar7 == (long *)0x0) {
        return true;
      }
      uVar4 = unaff_x19 + 0x90;
      func_0x000107262364(uVar4,plVar7 + 2);
      if ((uVar4 & 1) != 0) {
        return bVar2;
      }
      lVar5 = unaff_x19 + 0x80;
      func_0x000107262364(lVar5,plVar7 + 2);
    } while ((int)lVar5 == 0);
  }
  return bVar2;
}



/* Entry: 1077f8a04; end: 1077f8a6f;  */

undefined1  [16] FUN_1077f8a04(float param_1,float param_2,uint param_3,long param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  dVar1 = 1.0;
  _ldexp(0x3ff0000000000000,(uint)*(byte *)(param_4 + 4) - (param_3 & 0xff));
  uVar2 = NEON_ucvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20) << 0xd,
                              (int)*(undefined8 *)(param_4 + 8) << 0xd),4);
  auVar3._8_8_ = (long)(double)(long)((double)(param_2 + (float)((ulong)uVar2 >> 0x20)) *
                                     (0.03125 / dVar1));
  auVar3._0_8_ = (long)(double)(long)((double)(param_1 + (float)uVar2) * (0.03125 / dVar1));
  return auVar3;
}



/* Entry: 1077f9184; end: 1077f926f;  */

undefined8 FUN_1077f9184(long param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puStack_88;
  undefined8 *puStack_80;
  int *piStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_44;
  
  iVar1 = *(int *)(param_4 + 0x18);
  lVar2 = param_1 + 8;
  iStack_44 = iVar1;
  func_0x0001077f90b4();
  lVar3 = lVar2;
  func_0x0001077f9a64();
  if (lVar2 + 8 != lVar3) {
    if (*(int *)(lVar3 + 0x40) == iVar1) {
      return 0;
    }
    func_0x0001077f90d4(param_1,*param_2,lVar3 + 0x30);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x0001077f9c58(lVar2,param_2);
  lStack_70 = param_4 + 0x128;
  puStack_80 = &uStack_60;
  piStack_78 = &iStack_44;
  puStack_88 = param_2;
  puStack_68 = param_2;
  func_0x0001077f9270(lVar2,&UNK_10dd5b8f9,&puStack_68,&puStack_88);
  func_0x0001073e7858(&uStack_60);
  return 1;
}



/* Entry: 1077f9580; end: 1077f95fb;  */

long * FUN_1077f9580(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001074f51cc(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1077f9840; end: 1077f9903;  */

undefined1  [16]
FUN_1077f9840(long *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001077f9904(param_1,&uStack_48,param_2);
  lVar8 = *plVar2;
  if (lVar8 == 0) {
    uVar1 = *param_3;
    lVar8 = 0x40;
    __Znwm();
    *(undefined1 *)(lVar8 + 0x20) = uVar1;
    plVar4 = param_4 + 1;
    lVar5 = *plVar4;
    *(undefined8 *)(lVar8 + 0x28) = *param_4;
    plVar6 = (long *)(lVar8 + 0x30);
    *plVar6 = lVar5;
    lVar7 = param_4[2];
    *(long *)(lVar8 + 0x38) = lVar7;
    if (lVar7 == 0) {
      *(long **)(lVar8 + 0x28) = plVar6;
    }
    else {
      *(long **)(lVar5 + 0x10) = plVar6;
      *param_4 = plVar4;
      *plVar4 = 0;
      param_4[2] = 0;
    }
    func_0x0001077f9954(param_1,uStack_48,plVar2,lVar8);
    func_0x0001077fa61c();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = lVar8;
  return auVar9;
}



/* Entry: 1077f9b50; end: 1077f9b9f;  */

long * FUN_1077f9b50(long param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < *(byte *)(plVar3 + 4)) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_1077f9b98;
      }
      if (*param_3 <= *(byte *)(plVar3 + 4)) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_1077f9b98:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1077f9e04; end: 1077f9e4f;  */

void FUN_1077f9e04(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x23;
  
  func_0x0001077fa5d8();
  func_0x0001077fa5f8();
  *unaff_x19 = param_1;
  unaff_x19[1] = unaff_x23;
  unaff_x19[2] = 0;
  func_0x0001077fa630();
  func_0x0001077f9e50();
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 1077fa08c; end: 1077fa10f;  */

undefined1  [16] FUN_1077fa08c(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  func_0x0001077fa110(alStack_38);
  plVar2 = param_1;
  func_0x0001077fa160(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0001077fa1d8(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  func_0x0001077fa294(alStack_38);
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1077fa2b4; end: 1077fa2cb;  */

void FUN_1077fa2b4(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001077fa4fc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001074f4fe0(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077fa850; end: 1077fa857;  */

void FUN_1077fa850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077fb134; end: 1077fb1ef;  */

void FUN_1077fb134(long *param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  ulong *puStack_48;
  
  pfVar1 = (float *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if ((*pfVar1 != *(float *)(puVar3 + -1)) || (pfVar1[1] != *(float *)((long)puVar3 - 4))) {
    puVar7 = (ulong *)(param_1 + 2);
    if (puVar3 < (undefined8 *)*puVar7) {
      puVar6 = puVar3 + 1;
      *puVar3 = *(undefined8 *)pfVar1;
    }
    else {
      plVar5 = param_1;
      func_0x000107809094((long)puVar3 - (long)pfVar1);
      lVar2 = *param_1;
      lVar4 = param_1[1];
      puStack_48 = puVar7;
      if (plVar5 == (long *)0x0) {
        param_2 = 0;
      }
      else {
        func_0x0001077fe1fc();
      }
      puStack_60 = (undefined8 *)((long)plVar5 + (lVar4 - lVar2));
      plStack_50 = plVar5 + param_2;
      puStack_58 = puStack_60 + 1;
      *puStack_60 = *(undefined8 *)pfVar1;
      func_0x0001077fe1b8(param_1,auStack_68);
      puVar6 = (undefined8 *)param_1[1];
      func_0x0001077fe230(auStack_68);
    }
    param_1[1] = (long)puVar6;
  }
  return;
}



/* Entry: 1077fb61c; end: 1077fb65f;  */

undefined8 * FUN_1077fb61c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x000107807ab8(param_1);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 1077fbeb0; end: 1077fc10f;  */

undefined1 * FUN_1077fbeb0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_60;
  undefined1 auStack_58 [8];
  byte bStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x000107808a58();
  uStack_48 = extraout_x8;
  func_0x0001077fbc7c();
  uVar3 = lVar2 + 8;
  func_0x0001077fc110(uVar3,*(undefined8 *)*param_2);
  if ((uVar3 & 1) == 0) {
    lStack_a0 = *(long *)(param_1 + 0x648);
    if ((lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) != 0)) {
      do {
        func_0x000107809e9c();
        lStack_a0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8364();
    func_0x00010724ef84(auStack_78,*(undefined8 *)*param_2);
    puVar7 = auStack_78;
    func_0x0001003ac750(&uStack_90,uVar3);
    func_0x00010812dfe8(&lStack_60,&uStack_90);
    func_0x000107809e70();
    puVar4 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    in_ZR = lStack_60 == 2;
    if ((bool)in_ZR) goto LAB_1077fc050;
    uStack_90 = 0;
    func_0x0001003b1eb0(&uStack_90,auStack_58);
    func_0x00010812c2b4(auStack_78,0x41c00000,0x3ff0000000000000,lStack_a0,&uStack_90,
                        (ulong)bStack_50 << 8 | 4,0);
    func_0x0001077fbc7c();
    if ((lStack_70 != 0) && (*(long *)(lStack_70 + 0x10) != 0)) {
      do {
        func_0x0001078091f4();
      } while (extraout_w10 != 0);
    }
    lVar5 = param_1 + 8;
    func_0x0001077fb664(lVar5);
    func_0x000107807a88(auStack_98);
    func_0x000107807ab8(auStack_78);
    func_0x000107809e70();
    func_0x000107807e18(&lStack_60);
    func_0x0001074755f4(&lStack_a0);
    func_0x0001077fc198(param_1,lVar5);
  }
  puVar7 = *(undefined1 **)*param_2;
  puVar4 = (undefined1 *)(lVar2 + 8);
  func_0x000107807e3c(puVar4);
  func_0x0001078087c4(uStack_48);
  if ((bool)in_ZR) {
    return puVar4 + 0x58;
  }
  ___stack_chk_fail();
LAB_1077fc050:
  func_0x0001078099e4();
  uVar6 = *(undefined8 *)*param_2;
  func_0x0001072bb3b4();
  uStack_90 = uVar6;
  puStack_88 = puVar7;
  func_0x0001003a91d4(&UNK_10f42ad4b);
  func_0x0001003a9204(auStack_78);
  func_0x0001077fe9c8(puVar4,auStack_78);
  func_0x000107809ff8();
  ___cxa_throw(puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077fc0a8);
  (*pcVar1)();
}



/* Entry: 1077fc47c; end: 1077fc767;  */

/* WARNING: Possible PIC construction at 0x0001077fc67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077fc680) */
/* WARNING: Removing unreachable block (ram,0x0001077fc6b4) */
/* WARNING: Removing unreachable block (ram,0x0001077fc708) */
/* WARNING: Removing unreachable block (ram,0x0001077fc764) */
/* WARNING: Removing unreachable block (ram,0x0001077fc694) */

long * FUN_1077fc47c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long alStack_b8 [3];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  
  func_0x000107809f40();
  lVar10 = 0;
  func_0x000107808a58();
  *param_1 = &PTR_DAT_1109df958;
  do {
    lVar2 = unaff_x19 + lVar10;
    __ZNSt3__119__shared_mutex_baseC1Ev(lVar2 + 8);
    *(undefined **)(lVar2 + 0xb0) = &UNK_10e52b660;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    lVar10 = lVar10 + 200;
  } while (lVar10 != 0x640);
  *(undefined8 *)(unaff_x19 + 0x648) = 0;
  *(undefined8 *)(unaff_x19 + 0x650) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x658) = param_3;
  *(undefined1 *)(unaff_x19 + 0x660) = 0;
  *(undefined1 *)(unaff_x19 + 0x6a0) = 0;
  puStack_a0 = (undefined8 *)((ulong)puStack_a0 & 0xffffffffffffff00);
  cVar5 = (char)unaff_x21;
  cVar4 = cVar5 + -0x50;
  func_0x000107809ddc();
  *(char *)(unaff_x19 + 0x6a8) = cVar4;
  puStack_a0 = (undefined8 *)((ulong)puStack_a0 & 0xffffffffffffff00);
  cVar4 = cVar5 + -0x40;
  func_0x000107809ddc();
  *(char *)(unaff_x19 + 0x6a9) = cVar4;
  puStack_a0 = (undefined8 *)((ulong)puStack_a0 & 0xffffffffffffff00);
  cVar5 = cVar5 + -0x30;
  func_0x000107809ddc();
  *(char *)(unaff_x19 + 0x6aa) = cVar5;
  func_0x0001073af27c(&puStack_a0,0,0);
  *(undefined8 **)(unaff_x19 + 0x6b8) = puStack_98;
  *(undefined8 **)(unaff_x19 + 0x6b0) = puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  func_0x00010724b8b8(&puStack_a0);
  *(undefined8 *)(unaff_x19 + 0x6d8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6d0) = 0;
  *(undefined8 *)(unaff_x19 + 0x6c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6c0) = 0;
  *(undefined4 *)(unaff_x19 + 0x6e0) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x6e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x6f0) = 0;
  *(undefined **)(unaff_x19 + 0x700) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x708) = 0;
  *(undefined8 *)(unaff_x19 + 0x718) = 0;
  *(undefined8 *)(unaff_x19 + 0x710) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(unaff_x19 + 0x720);
  *(undefined8 *)(unaff_x19 + 0x7c8) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x7d8) = 0;
  *(undefined8 *)(unaff_x19 + 2000) = 0;
  *(undefined8 *)(unaff_x19 + 0x7e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x7e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x7f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x7f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x808) = 0;
  *(undefined8 *)(unaff_x19 + 0x800) = 0;
  *(undefined8 *)(unaff_x19 + 0x810) = 0;
  func_0x00010726ed14(unaff_x19 + 0x818);
  *(long *)(unaff_x19 + 0x828) = unaff_x19;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x650);
  func_0x00010002b838(alStack_b8,&UNK_10f40859c);
  func_0x00010785f0bc(&puStack_a0,uVar8,alStack_b8);
  func_0x000107542f90(unaff_x19 + 0x660,&puStack_a0);
  ppuVar6 = &puStack_a0;
  func_0x000107267ed0(ppuVar6);
  func_0x000107809d80();
  func_0x00010b99dc78();
  puVar7 = (undefined8 *)0x1c8;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1109dfb48;
  puVar1 = puVar7 + 3;
  func_0x00010812b694(puVar1,ppuVar6,1);
  if ((puVar7[5] == 0) || (*(long *)(puVar7[5] + 8) == -1)) {
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puStack_a0 = puVar1;
    puStack_98 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&puStack_a0);
    func_0x0001003a90c4(&puStack_a0);
  }
  plVar9 = (long *)(unaff_x19 + 0x648);
  if (plVar9 != alStack_b8) {
    alStack_b8[0] = 0;
    lVar10 = *plVar9;
    *plVar9 = (long)puVar1;
    func_0x000107475618(lVar10);
  }
  return plVar9;
}



/* Entry: 1077fe008; end: 1077fe033;  */

void FUN_1077fe008(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x648);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1077fe3b4; end: 1077fe44f;  */

ulong * FUN_1077fe3b4(ulong *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar1 != 0) {
    uVar3 = lVar1 >> 3;
    if (uVar3 >> 0x3d != 0) {
      func_0x0001077fe1f0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1077fe440);
      (*pcVar2)();
    }
    func_0x0001077fe1fc();
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + (long)param_2 * 8;
    _memmove();
    param_1[1] = uVar3 + lVar1;
  }
  uStack_38 = 1;
  func_0x0001077fe450(&puStack_40);
  return param_1;
}



/* Entry: 1077fe774; end: 1077fe7d3;  */

void FUN_1077fe774(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (ulong *)*puVar2;
  if ((((ulong)puVar4 & 1) == 0) && (puVar2 == (undefined8 *)(*puVar4 & 0xfffffffffffffffe))) {
    puVar3 = (undefined8 *)puVar2[2];
  }
  else {
    puVar1 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
      while (puVar3 = (undefined8 *)((ulong)puVar4 & 0xfffffffffffffffe),
            puVar2 == (undefined8 *)puVar3[1]) {
        *param_1 = (long)puVar3;
        puVar2 = puVar3;
        puVar4 = (ulong *)*puVar3;
      }
    }
    else {
      do {
        puVar3 = puVar1;
        puVar1 = (undefined8 *)puVar3[2];
      } while ((undefined8 *)puVar3[2] != (undefined8 *)0x0);
    }
  }
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 1077feb30; end: 1077feb4b;  */

void FUN_1077feb30(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077fed34; end: 1077fedcb;  */

long FUN_1077fed34(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010780907c();
  func_0x0001077fee7c();
  func_0x0001077fef1c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x88,unaff_x19 + 2);
  func_0x0001077fedcc(lStack_48);
  lStack_48 = lStack_48 + 0x88;
  func_0x0001077feecc();
  lVar1 = unaff_x19[1];
  func_0x0001077ff104(auStack_58);
  return lVar1;
}



/* Entry: 1077fef8c; end: 1077fefb3;  */

void FUN_1077fef8c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != param_3; param_2 = param_2 + 0x88) {
    func_0x0001077fedcc(param_4,param_2);
    param_4 = lStack_48 + 0x88;
  }
  uStack_58 = 1;
  func_0x00010780918c();
  func_0x0001077ff054();
  func_0x0001077ff084(&uStack_70);
  return;
}



/* Entry: 1077ff16c; end: 1077ff1cb;  */

void FUN_1077ff16c(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    pcVar1 = *(char **)(param_1 + 0xa8);
    lVar2 = *(long *)(param_1 + 0xb0);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x0001077ff1cc(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*(long *)(param_1 + 0xa8) + -8);
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 1077ff520; end: 1077ff557;  */

undefined1 * FUN_1077ff520(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x0001077ff558();
  return param_1;
}



/* Entry: 1077ff6dc; end: 1077ff6f3;  */

void FUN_1077ff6dc(void)

{
  func_0x0001077ff6f4();
  return;
}


