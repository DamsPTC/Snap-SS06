/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0050d194; end: 0050d1bf;  */

undefined8 * FUN_0050d194(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_005061a8(param_1,param_3);
  return param_1;
}



/* Entry: 0050d1c0; end: 0050d1eb;  */

long * FUN_0050d1c0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0050f668();
  }
  return param_1;
}



/* Entry: 0050d1ec; end: 0050d217;  */

long * FUN_0050d1ec(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0050f668();
  }
  return param_1;
}



/* Entry: 0050d218; end: 0050d243;  */

long * FUN_0050d218(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0050f668();
  }
  return param_1;
}



/* Entry: 0050d244; end: 0050e0e3;  */

long FUN_0050d244(long param_1)

{
  FUN_0050d1ec(param_1 + 0xe0);
  FUN_004dfae8(param_1 + 200);
  FUN_0050d218(param_1 + 0xb0);
  FUN_004ddab4(param_1 + 0x98);
  FUN_004ddab4(param_1 + 0x80);
  FUN_004ddab4(param_1 + 0x68);
  FUN_004ddab4(param_1 + 0x50);
  FUN_004ddab4(param_1 + 0x38);
  FUN_004ddab4(param_1 + 0x20);
  FUN_004ddab4(param_1 + 8);
  return param_1;
}



/* Entry: 0050e0e4; end: 0050e0f7;  */

void FUN_0050e0e4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0050e0f8; end: 0050e127;  */

undefined8 * FUN_0050e0f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  func_0x0050f2e4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f3a4();
  }
  else {
    func_0x0050f62c();
  }
  func_0x0050f3e8();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f5fe8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004f34e0();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 5) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004f320c(param_2,*(undefined8 *)(param_3 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 5);
  }
  param_1[3] = param_2;
  switch(uVar2) {
  case 1:
    func_0x004f3644();
    func_0x004f3244();
    break;
  case 2:
    func_0x004f3644();
    func_0x004f32f4();
    break;
  case 3:
    func_0x004f3644();
    func_0x004f3390();
    break;
  case 4:
    func_0x004f3644();
    func_0x004f33fc();
    break;
  default:
    goto LAB_004f2220;
  }
  param_1[4] = param_2;
LAB_004f2220:
  return param_1;
}



/* Entry: 0050e128; end: 0050e1f3;  */

void FUN_0050e128(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0050f2e4();
  if (param_1 == 0) {
    func_0x0050f21c();
  }
  else {
    func_0x0050f134();
  }
  func_0x0050f4ec();
  func_0x0050f4bc(&PTR_FUN_009fa6b0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x00487c6c();
  *(long *)(unaff_x21 + 0x10) = lVar2;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  uVar1 = *(undefined1 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x21 + 0x1c) = uVar1;
  return;
}



/* Entry: 0050e1f4; end: 0050e24b;  */

undefined8 * FUN_0050e1f4(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0050f240();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  *param_1 = &PTR_FUN_009f9f80;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_00505acc();
  return param_1;
}



/* Entry: 0050e24c; end: 0050e4db;  */

void FUN_0050e24c(long param_1)

{
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x21;
  
  func_0x0050f224();
  if (param_1 == 0) {
    func_0x0050f284();
  }
  else {
    func_0x0050f0e0();
  }
  func_0x0050f348();
  func_0x0050f33c(&PTR_FUN_009fab10);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f3f4();
  FUN_004eb2b4(unaff_x21 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_0050e1f4();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x19;
  return;
}



/* Entry: 0050e4dc; end: 0050e50f;  */

undefined8 * FUN_0050e4dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0050f2e4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f238();
  }
  else {
    func_0x0050f230();
    param_1 = unaff_x20;
  }
  func_0x0050f3e8();
  *param_1 = &PTR_FUN_009fa5c0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_00507a40();
  return param_1;
}



/* Entry: 0050e510; end: 0050e55f;  */

long FUN_0050e510(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa520);
  func_0x00507a64();
  return param_1;
}



/* Entry: 0050e560; end: 0050e593;  */

long FUN_0050e560(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x0050f2e4();
  if (param_1 == 0) {
    func_0x0050f284();
  }
  else {
    param_1 = unaff_x20;
    func_0x0050f28c();
  }
  func_0x0050f3e8();
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb100);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f5f0();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    FUN_004fd4b4();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = unaff_x20;
    FUN_0050eb4c(unaff_x20,*(undefined8 *)(unaff_x21 + 0x20));
  }
  *(long *)(unaff_x19 + 0x20) = lVar1;
  if ((unaff_w22 >> 2 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = unaff_x20;
    FUN_004efbac(unaff_x20,*(undefined8 *)(unaff_x21 + 0x28));
  }
  *(long *)(unaff_x19 + 0x28) = lVar1;
  if ((unaff_w22 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004fd4b4(unaff_x20,*(undefined8 *)(unaff_x21 + 0x30));
  }
  *(long *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 0050e594; end: 0050e5e3;  */

long FUN_0050e594(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa070);
  FUN_00507b4c();
  return param_1;
}



/* Entry: 0050e5e4; end: 0050e617;  */

long FUN_0050e5e4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050f2e4();
  if (param_1 == 0) {
    func_0x0050f238();
  }
  else {
    func_0x0050f230();
    param_1 = unaff_x20;
  }
  func_0x0050f3e8();
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb330);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    func_0x004e035c();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  return unaff_x19;
}



/* Entry: 0050e618; end: 0050e667;  */

long FUN_0050e618(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa110);
  FUN_00507bb4();
  return param_1;
}



/* Entry: 0050e668; end: 0050e6b7;  */

long FUN_0050e668(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa340);
  func_0x00507bc0();
  return param_1;
}



/* Entry: 0050e6b8; end: 0050e707;  */

long FUN_0050e6b8(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa200);
  func_0x00507bcc();
  return param_1;
}



/* Entry: 0050e708; end: 0050e757;  */

long FUN_0050e708(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa2a0);
  func_0x00507bd8();
  return param_1;
}



/* Entry: 0050e758; end: 0050e78f;  */

undefined8 * FUN_0050e758(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x0050f2e4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f18c();
  }
  else {
    param_2 = 0x18;
    func_0x005510c4();
    param_1 = unaff_x20;
  }
  func_0x0050f3e8();
  *param_1 = &PTR_DAT_009fa3e0;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00507be4();
  return param_1;
}



/* Entry: 0050e790; end: 0050e84b;  */

void FUN_0050e790(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x0050f224();
  if (param_1 == 0) {
    func_0x0050f238();
  }
  else {
    func_0x0050f068();
  }
  func_0x0050f348();
  func_0x0050f33c(&PTR_DAT_009fb060);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f3f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f4d4();
    FUN_004fd4b4();
  }
  func_0x0050f57c();
  return;
}



/* Entry: 0050e84c; end: 0050e89b;  */

long FUN_0050e84c(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa4d0);
  FUN_00507cc8();
  return param_1;
}



/* Entry: 0050e89c; end: 0050e8ff;  */

long FUN_0050e89c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0050f2e4();
  if (param_1 == 0) {
    func_0x0050f3a4();
  }
  else {
    func_0x0050f62c();
  }
  func_0x0050f3e8();
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fae80);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  FUN_004dfac8(unaff_x19 + 0x10,unaff_x20,unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 0050e900; end: 0050e957;  */

undefined8 * FUN_0050e900(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0050f240();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  *param_1 = &PTR_DAT_009f9fd0;
  param_1[1] = unaff_x21;
  func_0x0050f684();
  FUN_00507d6c();
  return param_1;
}



/* Entry: 0050e958; end: 0050e9db;  */

void FUN_0050e958(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050f224();
  if (param_1 == 0) {
    func_0x0050f21c();
  }
  else {
    func_0x0050f09c();
  }
  func_0x0050f348();
  func_0x0050f33c(&PTR_DAT_009fb290);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f4d4();
    FUN_0050eb4c();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_004fe0b4();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  return;
}



/* Entry: 0050e9dc; end: 0050ea0b;  */

long FUN_0050e9dc(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  
  func_0x0050f2e4();
  if (param_1 == 0) {
    func_0x0050f21c();
  }
  else {
    func_0x0050f134();
  }
  func_0x0050f3e8();
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb240);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f5f0();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    FUN_0050eb4c();
  }
  *(long *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004efbac(unaff_x20,*(undefined8 *)(unaff_x21 + 0x20));
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return unaff_x19;
}



/* Entry: 0050ea0c; end: 0050ea5b;  */

long FUN_0050ea0c(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa480);
  FUN_00507e98();
  return param_1;
}



/* Entry: 0050ea5c; end: 0050eaab;  */

long FUN_0050ea5c(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa160);
  func_0x00507ea4();
  return param_1;
}



/* Entry: 0050eaac; end: 0050eafb;  */

long FUN_0050eaac(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa8e0);
  func_0x00507eb0();
  return param_1;
}



/* Entry: 0050eafc; end: 0050eb4b;  */

long FUN_0050eafc(long param_1)

{
  func_0x0050f240();
  if (param_1 == 0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efd0();
  }
  func_0x0050f048(&PTR_DAT_009fa840);
  func_0x00507ebc();
  return param_1;
}



/* Entry: 0050eb4c; end: 0050eb9f;  */

void FUN_0050eb4c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0050f224();
  if (param_1 == 0) {
    func_0x0050f3a4();
  }
  else {
    func_0x0050f158();
  }
  func_0x0050f348();
  func_0x0050f33c(&PTR_FUN_009faf70);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f5b4();
  FUN_004fc6e8();
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  return;
}



/* Entry: 0050eba0; end: 0050ebd3;  */

undefined8 * FUN_0050eba0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *unaff_x20;
  
  func_0x0050f2e4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0050f238();
  }
  else {
    func_0x0050f230();
    param_1 = unaff_x20;
  }
  func_0x0050f3e8();
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_009f0138;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    param_3 = param_3 + 0x10;
    func_0x00487c6c(param_3,param_2);
    param_1[2] = param_3;
  }
  else if (iVar1 == 1) {
    param_1[2] = *(undefined8 *)(param_3 + 0x10);
  }
  return param_1;
}



/* Entry: 0050ebd4; end: 0050ee33;  */

void FUN_0050ebd4(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x0050f224();
  if (param_1 == 0) {
    func_0x0050f238();
  }
  else {
    func_0x0050f068();
  }
  func_0x0050f348();
  func_0x0050f33c(&PTR_FUN_009fab60);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f3f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f4d4();
    FUN_0050eba0();
  }
  func_0x0050f57c();
  return;
}



/* Entry: 0050ee34; end: 0050f6ff;  */

void FUN_0050ee34(void)

{
  return;
}



/* Entry: 0050f700; end: 0050f72b;  */

long FUN_0050f700(long param_1)

{
  func_0x005105ac();
  FUN_00510388(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050f72c; end: 0050f72f;  */

long FUN_0050f72c(long param_1)

{
  func_0x005105ac();
  FUN_00510388(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050f730; end: 0050f743;  */

void FUN_0050f730(void)

{
  FUN_0050f700();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050f744; end: 0050f74f;  */

undefined ** FUN_0050f744(void)

{
  return &PTR_DAT_009fcf48;
}



/* Entry: 0050f750; end: 0050f77f;  */

void FUN_0050f750(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005106e0();
  func_0x00510508();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0050f780; end: 0050f80b;  */

long * FUN_0050f780(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0051053c();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x14);
    func_0x0051051c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00510614();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050f80c; end: 0050f867;  */

long FUN_0050f80c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x005105dc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_0050f868();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 0050f868; end: 0050f893;  */

long FUN_0050f868(long param_1)

{
  FUN_0050fcb0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0050f894; end: 0050f8d7;  */

void FUN_0050f894(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x005106e0();
  FUN_0050f8d8();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050f8d8; end: 0050f8e7;  */

void FUN_0050f8d8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0050f8e8; end: 0050f94b;  */

long FUN_0050f8e8(long param_1)

{
  func_0x005105ac();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004d35b8();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 0050f94c; end: 0050f94f;  */

long FUN_0050f94c(long param_1)

{
  func_0x005105ac();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004d35b8();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 0050f950; end: 0050f963;  */

void FUN_0050f950(void)

{
  FUN_0050f8e8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050f964; end: 0050f96f;  */

undefined ** FUN_0050f964(void)

{
  return &PTR_DAT_009fcfa0;
}



/* Entry: 0050f970; end: 0050f9eb;  */

void FUN_0050f970(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_0048cfec(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x30);
  FUN_00532fa8(param_1 + 0x38);
  FUN_00532fa8(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d3650(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 0050f9ec; end: 0050fcaf;  */

long * FUN_0050f9ec(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar12 = param_1;
  plVar6 = param_3;
  if ((uVar3 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[9] + 0x18);
    plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0051058c();
    param_2 = plVar12;
  }
  puVar10 = (undefined8 *)(param_1[6] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    if (puVar10[1] != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_0050fa5c;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_0050fa5c:
    func_0x005106ac(puVar10);
    plVar12 = param_3;
    func_0x005105bc(param_3,2);
    param_2 = plVar12;
  }
  puVar10 = (undefined8 *)(param_1[7] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    if (puVar10[1] != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_0050faa0;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_0050faa0:
    func_0x005106ac(puVar10);
    plVar12 = param_3;
    func_0x005105bc(param_3,3);
    param_2 = plVar12;
  }
  puVar10 = (undefined8 *)(param_1[8] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    if (puVar10[1] == 0) goto LAB_0050fb00;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_0050fb00;
  func_0x005106ac(puVar10);
  plVar12 = param_3;
  func_0x005105bc(param_3,5);
  param_2 = plVar12;
LAB_0050fb00:
  plVar8 = plVar12;
  if (param_1[0xb] != 0) {
    func_0x005106a0();
    plVar8 = (long *)param_1[0xb];
    uVar4 = 0x30;
    func_0x00487cbc(0x30,plVar12);
    func_0x00487cf0(plVar8,uVar4);
    param_2 = plVar8;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(param_1[10] + 0x20);
    plVar8 = (long *)((long)&MACH_HEADER.cputype + 3);
    func_0x0051058c();
    param_2 = plVar8;
  }
  if ((char)param_1[0xc] == '\x01') {
    func_0x005106a0();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0xc);
    uVar4 = 0x40;
    func_0x00487cbc(0x40,plVar8);
    func_0x00487cbc(param_2,uVar4);
  }
  lVar14 = 8;
  for (uVar13 = (ulong)(*(uint *)(param_1 + 4) & ((int)*(uint *)(param_1 + 4) >> 0x1f ^ 0xffffffffU)
                       ); uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar7 = param_1[3];
    puVar2 = (ulong *)(param_1 + 3);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + lVar14 + -1);
    }
    plVar6 = (long *)*puVar2;
    lVar5 = (long)*(char *)((long)plVar6 + 0x17);
    plVar12 = plVar6;
    if (lVar5 < 0) {
      lVar5 = plVar6[1];
      plVar12 = (long *)*plVar6;
    }
    FUN_0054ddb8(plVar12,lVar5,1,"snapchat.messaging.PublicGroup.categories");
    plVar12 = (long *)(long)*(char *)((long)plVar6 + 0x17);
    if ((((long)plVar12 < 0) && (plVar12 = (long *)plVar6[1], 0x7f < (long)plVar12)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar12)) {
      plVar12 = param_3;
      func_0x0054f030(param_3,9,plVar6,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x4a;
      *(char *)((long)param_2 + 1) = (char)plVar12;
      plVar8 = plVar6;
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        plVar8 = (long *)*plVar6;
      }
      plVar6 = plVar12;
      _memcpy((undefined1 *)((long)param_2 + 2),plVar8);
      plVar12 = (long *)((undefined1 *)((long)param_2 + 2) + (long)plVar12);
    }
    lVar14 = lVar14 + 8;
    param_2 = plVar12;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00510614();
  if ((long)plVar6 < 0) {
    lVar14 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar14 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar14,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar9 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar9 - iVar11);
    if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
    param_2 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (long *)((long)param_2 + (long)iVar9);
}



/* Entry: 0050fcb0; end: 0050ff37;  */

void FUN_0050fcb0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar6 = (ulong)uVar5;
  lVar8 = 8;
  for (uVar7 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + lVar8 + -1);
    }
    uVar4 = *puVar1;
    FUN_0048910c();
    uVar6 = uVar4 + uVar6;
    uVar5 = (uint)uVar6;
    lVar8 = lVar8 + 8;
  }
  uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    FUN_0048910c();
    func_0x00510608();
  }
  uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    FUN_0048910c();
    func_0x00510608();
  }
  uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    FUN_0048910c();
    func_0x00510608();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(param_1 + 0x48));
      func_0x00510608();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_004d9f84(*(undefined8 *)(param_1 + 0x50));
      func_0x00510608();
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar5 = ((int)LZCOUNT(*(long *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + uVar5;
  }
  iVar3 = uVar5 + (uint)*(byte *)(param_1 + 0x60) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar8 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(uVar6 + 0x10);
    }
    iVar3 = (int)lVar8 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 0050ff38; end: 0050ff63;  */

undefined8 FUN_0050ff38(undefined8 param_1)

{
  func_0x005105ac();
  FUN_0050ff64(param_1);
  return param_1;
}



/* Entry: 0050ff64; end: 0050ff7f;  */

void FUN_0050ff64(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004f0520();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050ff80; end: 0050ff83;  */

undefined8 FUN_0050ff80(undefined8 param_1)

{
  func_0x005105ac();
  FUN_0050ff64(param_1);
  return param_1;
}



/* Entry: 0050ff84; end: 0050ff97;  */

void FUN_0050ff84(void)

{
  FUN_0050ff38();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050ff98; end: 0050ffa3;  */

undefined ** FUN_0050ff98(void)

{
  return &PTR_DAT_009fcfe0;
}



/* Entry: 0050ffa4; end: 0051008f;  */

void FUN_0050ffa4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x005106d4();
  if ((extraout_x8 & 1) != 0) {
    FUN_004f05c0(unaff_x19[3]);
  }
  func_0x005106b4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 00510090; end: 005100f7;  */

void FUN_00510090(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00510594();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3468();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004f097c();
      puVar1 = puVar2;
    }
  }
  func_0x005106c0();
  if ((extraout_x8 & 1) != 0) {
    func_0x0051057c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005100f8; end: 0051011b;  */

undefined8 FUN_005100f8(undefined8 param_1)

{
  func_0x005105ac();
  return param_1;
}



/* Entry: 0051011c; end: 0051011f;  */

undefined8 FUN_0051011c(undefined8 param_1)

{
  func_0x005105ac();
  return param_1;
}



/* Entry: 00510120; end: 00510133;  */

void FUN_00510120(void)

{
  FUN_005100f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00510134; end: 005101b3;  */

undefined ** FUN_00510134(void)

{
  return &PTR_DAT_009fd030;
}



/* Entry: 005101b4; end: 005101df;  */

long FUN_005101b4(long param_1)

{
  func_0x005105ac();
  FUN_00510388(param_1 + 0x10);
  return param_1;
}



/* Entry: 005101e0; end: 005101e3;  */

long FUN_005101e0(long param_1)

{
  func_0x005105ac();
  FUN_00510388(param_1 + 0x10);
  return param_1;
}



/* Entry: 005101e4; end: 005101f7;  */

void FUN_005101e4(void)

{
  FUN_005101b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005101f8; end: 00510203;  */

undefined ** FUN_005101f8(void)

{
  return &PTR_DAT_009fd080;
}



/* Entry: 00510204; end: 00510233;  */

void FUN_00510204(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005106e0();
  func_0x00510508();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00510234; end: 005102bf;  */

long * FUN_00510234(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0051053c();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x14);
    func_0x0051051c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00510614();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 005102c0; end: 0051031b;  */

long FUN_005102c0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x005105dc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_0050f868();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 0051031c; end: 0051035f;  */

void FUN_0051031c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x005106e0();
  FUN_0050f8d8();
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00510360; end: 00510387;  */

void FUN_00510360(undefined8 param_1,dword *param_2)

{
  dword *pdVar1;
  
  if (param_2 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_2;
    func_0x00510688();
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009fcdc8;
  *(dword **)(pdVar1 + 2) = param_2;
  pdVar1[4] = 0;
  return;
}



/* Entry: 00510388; end: 005103b7;  */

long * FUN_00510388(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 005103b8; end: 00510507;  */

void FUN_005103b8(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x00510688();
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009fcdc8;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  return;
}



/* Entry: 00510508; end: 005106eb;  */

void FUN_00510508(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 005106ec; end: 00510717;  */

long FUN_005106ec(long param_1)

{
  func_0x00510994();
  FUN_004eb228(param_1 + 0x10);
  return param_1;
}



/* Entry: 00510718; end: 0051071b;  */

long FUN_00510718(long param_1)

{
  func_0x00510994();
  FUN_004eb228(param_1 + 0x10);
  return param_1;
}



/* Entry: 0051071c; end: 0051072f;  */

void FUN_0051071c(void)

{
  FUN_005106ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00510730; end: 0051073b;  */

undefined ** FUN_00510730(void)

{
  return &PTR_DAT_009fd1a0;
}



/* Entry: 0051073c; end: 0051076b;  */

void FUN_0051073c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005109e0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0051076c; end: 005107f3;  */

long * FUN_0051076c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00510934();
  lVar2 = param_1[3];
  for (iVar3 = 0; (int)lVar2 != iVar3; iVar3 = iVar3 + 1) {
    func_0x005108fc();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x28) & 1) != 0) {
    func_0x005108d8();
    func_0x0051097c();
    func_0x005108e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005109ec();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 005107f4; end: 0051084f;  */

void FUN_005107f4(void)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar1 = (int)unaff_x20;
  func_0x00510944();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_004dff90();
    unaff_x20 = lVar2 + unaff_x20;
    iVar1 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x28) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005109f8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 00510850; end: 00510897;  */

void FUN_00510850(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00510968();
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00510898; end: 0051089f;  */

void FUN_00510898(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    __Znwm(0x30);
  }
  else {
    func_0x005109d4();
  }
  func_0x005109bc(&PTR_FUN_009fd160);
  return;
}



/* Entry: 005108a0; end: 005108d7;  */

void FUN_005108a0(long param_1)

{
  if (param_1 == 0) {
    __Znwm(0x30);
  }
  else {
    func_0x005109d4();
  }
  func_0x005109bc(&PTR_FUN_009fd160);
  return;
}



/* Entry: 005108d8; end: 00510a03;  */

ulong * FUN_005108d8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 00510a04; end: 00510a33;  */

long FUN_00510a04(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00510a34(param_1);
  return param_1;
}



/* Entry: 00510a34; end: 00510a4f;  */

void FUN_00510a34(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e07d8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00510a50; end: 00510a53;  */

long FUN_00510a50(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00510a34(param_1);
  return param_1;
}



/* Entry: 00510a54; end: 00510a67;  */

void FUN_00510a54(void)

{
  FUN_00510a04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00510a68; end: 00510a73;  */

undefined ** FUN_00510a68(void)

{
  return &PTR_DAT_009fd258;
}



/* Entry: 00510a74; end: 00510b6b;  */

void FUN_00510a74(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00510c54();
  if ((extraout_x8 & 1) != 0) {
    FUN_004e0950(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00510b6c; end: 00510bd7;  */

void FUN_00510b6c(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00510c60();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_004ebfe8();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_004e14b4(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x00510c88();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00510bd8; end: 00510bdf;  */

void FUN_00510bd8(undefined8 param_1,segment_command *param_2)

{
  segment_command *psVar1;
  
  if (param_2 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_2;
    func_0x00510c48();
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd218;
  *(segment_command **)psVar1->segname = param_2;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 00510be0; end: 00510c1b;  */

void FUN_00510be0(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x00510c48();
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd218;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 00510c1c; end: 00510c9b;  */

void FUN_00510c1c(void)

{
  return;
}



/* Entry: 00510c9c; end: 00510d1b;  */

undefined8 * FUN_00510c9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009fd328;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0051129c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 00510d1c; end: 00510d4b;  */

long FUN_00510d1c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00510d4c(param_1);
  return param_1;
}



/* Entry: 00510d4c; end: 00510d67;  */

void FUN_00510d4c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_005110a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00510d68; end: 00510d6b;  */

long FUN_00510d68(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00510d4c(param_1);
  return param_1;
}



/* Entry: 00510d6c; end: 00510d7f;  */

void FUN_00510d6c(void)

{
  FUN_00510d1c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


