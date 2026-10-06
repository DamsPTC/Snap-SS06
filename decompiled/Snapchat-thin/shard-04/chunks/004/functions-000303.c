/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034e5fbc; end: 1034e604b;  */

undefined8 FUN_1034e5fbc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    func_0x000107c61568(param_1,param_3);
  }
  func_0x000107c6157c(*param_2);
  return 0;
}



/* Entry: 1034e604c; end: 1034e6063;  */

void FUN_1034e604c(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined1 *)(lVar3 + 0x18) = param_2;
  return;
}



/* Entry: 1034e6064; end: 1034e610b;  */

void FUN_1034e6064(undefined8 param_1,undefined1 param_2,code *param_3,undefined8 param_4,
                  code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_68 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    (*param_3)(0);
    func_0x000107c613fc();
    (*param_5)(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_68,1,0);
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined1 *)(lVar3 + 0x18) = param_2;
  return;
}



/* Entry: 1034e610c; end: 1034e6197;  */

void FUN_1034e610c(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x20,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined1 *)(lVar3 + 0x28) = param_2;
  return;
}



/* Entry: 1034e6198; end: 1034e623f;  */

void FUN_1034e6198(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x30,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  uVar1 = *(undefined8 *)(lVar5 + 0x38);
  uVar4 = *(undefined8 *)(lVar5 + 0x40);
  *(ulong *)(lVar5 + 0x30) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x38) = param_2;
  *(undefined8 *)(lVar5 + 0x40) = param_3;
  func_0x000100d54cd0(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e6240; end: 1034e6357;  */

void FUN_1034e6240(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x48,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x48) = param_1;
  *(undefined1 *)(lVar3 + 0x50) = param_2;
  return;
}



/* Entry: 1034e6358; end: 1034e6747;  */

void FUN_1034e6358(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x68,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x68);
  uVar1 = *(undefined8 *)(lVar5 + 0x70);
  uVar4 = *(undefined8 *)(lVar5 + 0x78);
  *(ulong *)(lVar5 + 0x68) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x70) = param_2;
  *(undefined8 *)(lVar5 + 0x78) = param_3;
  func_0x000100d54cd0(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e6748; end: 1034e67ef;  */

void FUN_1034e6748(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x110,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x110);
  uVar1 = *(undefined8 *)(lVar5 + 0x118);
  uVar4 = *(undefined8 *)(lVar5 + 0x120);
  *(ulong *)(lVar5 + 0x110) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x118) = param_2;
  *(undefined8 *)(lVar5 + 0x120) = param_3;
  func_0x000100d54cd0(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e67f0; end: 1034e693f;  */

void FUN_1034e67f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x128,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x128);
  uVar1 = *(undefined8 *)(lVar5 + 0x130);
  uVar4 = *(undefined8 *)(lVar5 + 0x138);
  *(ulong *)(lVar5 + 0x128) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x130) = param_2;
  *(undefined8 *)(lVar5 + 0x138) = param_3;
  func_0x000100d54cd0(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e6940; end: 1034e697f;  */

undefined1  [16] FUN_1034e6940(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x188,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x188);
  return auVar1;
}



/* Entry: 1034e6980; end: 1034e6a97;  */

void FUN_1034e6980(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x188,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x188) = param_1;
  *(undefined1 *)(lVar3 + 400) = param_2;
  return;
}



/* Entry: 1034e6a98; end: 1034e6c8f;  */

void FUN_1034e6a98(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x1a8,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x1a8);
  uVar1 = *(undefined8 *)(lVar5 + 0x1b0);
  uVar4 = *(undefined8 *)(lVar5 + 0x1b8);
  *(ulong *)(lVar5 + 0x1a8) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x1b0) = param_2;
  *(undefined8 *)(lVar5 + 0x1b8) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1034e6c90; end: 1034e6d1b;  */

void FUN_1034e6c90(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x200,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x200) = param_1;
  *(undefined1 *)(lVar3 + 0x208) = param_2;
  return;
}



/* Entry: 1034e6d1c; end: 1034e6f3b;  */

void FUN_1034e6d1c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x220,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x220);
  uVar3 = *(undefined8 *)(lVar5 + 0x228);
  uVar4 = *(undefined8 *)(lVar5 + 0x230);
  *(ulong *)(lVar5 + 0x220) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x228) = param_2;
  *(undefined8 *)(lVar5 + 0x230) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1034e6f3c; end: 1034e6fc7;  */

void FUN_1034e6f3c(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x278,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x278) = param_1;
  *(undefined1 *)(lVar3 + 0x280) = param_2;
  return;
}



/* Entry: 1034e6fc8; end: 1034e707f;  */

void FUN_1034e6fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar6,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x288,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar6 + 0x288);
  uVar3 = *(undefined8 *)(lVar6 + 0x290);
  uVar4 = *(undefined8 *)(lVar6 + 0x298);
  uVar5 = *(undefined8 *)(lVar6 + 0x2a0);
  *(undefined8 *)(lVar6 + 0x288) = param_1;
  *(undefined8 *)(lVar6 + 0x290) = param_2;
  *(undefined8 *)(lVar6 + 0x298) = param_3;
  *(undefined8 *)(lVar6 + 0x2a0) = param_4;
  func_0x000101597ae4(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Entry: 1034e7080; end: 1034e710b;  */

void FUN_1034e7080(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x2a8,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x2a8) = param_1;
  *(undefined1 *)(lVar3 + 0x2b0) = param_2;
  return;
}



/* Entry: 1034e710c; end: 1034e79d7;  */

void FUN_1034e710c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar6,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x2b8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar6 + 0x2b8);
  uVar3 = *(undefined8 *)(lVar6 + 0x2c0);
  uVar4 = *(undefined8 *)(lVar6 + 0x2c8);
  uVar5 = *(undefined8 *)(lVar6 + 0x2d0);
  *(undefined8 *)(lVar6 + 0x2b8) = param_1;
  *(undefined8 *)(lVar6 + 0x2c0) = param_2;
  *(undefined8 *)(lVar6 + 0x2c8) = param_3;
  *(undefined8 *)(lVar6 + 0x2d0) = param_4;
  func_0x000101597ae4(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Entry: 1034e79d8; end: 1034e7a63;  */

void FUN_1034e79d8(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x4a0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x4a0) = param_1;
  *(undefined1 *)(lVar3 + 0x4a8) = param_2;
  return;
}



/* Entry: 1034e7a64; end: 1034e7bc3;  */

void FUN_1034e7a64(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1034ff618(0);
    func_0x000107c613fc();
    FUN_1034f58ac(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x4b0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x4b0);
  uVar3 = *(undefined8 *)(lVar5 + 0x4b8);
  uVar4 = *(undefined8 *)(lVar5 + 0x4c0);
  *(ulong *)(lVar5 + 0x4b0) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x4b8) = param_2;
  *(undefined8 *)(lVar5 + 0x4c0) = param_3;
  func_0x000100d54cd0(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1034e7bc4; end: 1034e7bcf;  */

void FUN_1034e7bc4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1034ff680();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7bd0; end: 1034e7c0f;  */

void FUN_1034e7bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f73d48;
  func_0x0001000285a8(0x112f73d48,&UNK_10dbcfbe0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034e7c10; end: 1034e7c27;  */

void FUN_1034e7c10(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1034ff680();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7c28; end: 1034e7c67;  */

void FUN_1034e7c28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f73dc8;
  func_0x0001000285a8(0x112f73dc8,&UNK_10dbcfbe8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034e7c68; end: 1034e7c73;  */

void FUN_1034e7c68(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10350336c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7c74; end: 1034e7cb3;  */

void FUN_1034e7c74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f73e18;
  func_0x0001000285a8(0x112f73e18,&UNK_10dbcfbf0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034e7cb4; end: 1034e7ccb;  */

void FUN_1034e7cb4(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1034e7ccc; end: 1034e7d0b;  */

void FUN_1034e7ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f73e78;
  func_0x0001000285a8(0x112f73e78,&UNK_10dbcfbf8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034e7d0c; end: 1034e7d27;  */

void FUN_1034e7d0c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1034e7d28; end: 1034e7e0b;  */

void FUN_1034e7d28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f73ec8;
  func_0x0001000285a8(0x112f73ec8,&UNK_10dbcfc00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034e7e0c; end: 1034e7e53;  */

bool FUN_1034e7e0c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 1034e7e54; end: 1034e7ec3;  */

void FUN_1034e7e54(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7ec4; end: 1034e7ecf;  */

void FUN_1034e7ec4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103503370)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7ed0; end: 1034e7f87;  */

void FUN_1034e7ed0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1034e7f88; end: 1034e7fcf;  */

void FUN_1034e7f88(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd0e00,900,2);
  uRam0000000113807358 = uStack_38;
  uRam0000000113807350 = uStack_40;
  uRam0000000113807368 = uStack_28;
  uRam0000000113807360 = uStack_30;
  uRam0000000113807378 = uStack_18;
  uRam0000000113807370 = uStack_20;
  return;
}



/* Entry: 1034e7fd0; end: 1034e7fef;  */

void FUN_1034e7fd0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1034e3f90();
  func_0x000107c613fc();
  FUN_1034e7ff0();
  uRam0000000112f73cd8 = uVar1;
  return;
}



/* Entry: 1034e7ff0; end: 1034e81e3;  */

void FUN_1034e7ff0(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_3a0 [424];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  FUN_1035031bc(auStack_3a0);
  func_0x000107c610b4(unaff_x20 + 0x20,auStack_3a0,0x1a1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x1c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 1;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  func_0x0001034fe960(&uStack_1f8);
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_1c8;
  *(undefined **)(unaff_x20 + 0x368) = puVar1;
  *(undefined **)(unaff_x20 + 0x370) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined1 *)(unaff_x20 + 0x380) = 1;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x3a0) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 3;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 2;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 2;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  FUN_1034fe9f0(&uStack_148);
  *(undefined8 *)(unaff_x20 + 0x530) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x528) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x540) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x538) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x550) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x548) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x558) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x4f0) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x500) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x510) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x508) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x520) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x518) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 0;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 0;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 1;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x610) = 0;
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  *(undefined8 *)(unaff_x20 + 0x618) = 0;
  *(undefined8 *)(unaff_x20 + 0x628) = 1;
  *(undefined8 *)(unaff_x20 + 0x638) = 0;
  *(undefined8 *)(unaff_x20 + 0x630) = 0;
  return;
}



/* Entry: 1034e81e4; end: 1034e924f;  */

void FUN_1034e81e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_12d0 [24];
  undefined1 auStack_12b8 [24];
  undefined1 auStack_12a0 [24];
  undefined1 auStack_1288 [24];
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined1 auStack_1210 [24];
  undefined1 auStack_11f8 [24];
  undefined1 auStack_11e0 [24];
  undefined1 auStack_11c8 [24];
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined1 auStack_10b0 [24];
  undefined1 auStack_1098 [24];
  undefined1 auStack_1080 [24];
  undefined1 auStack_1068 [24];
  undefined1 auStack_1050 [24];
  undefined1 auStack_1038 [24];
  undefined1 auStack_1020 [24];
  undefined1 auStack_1008 [24];
  undefined1 auStack_ff0 [24];
  undefined1 auStack_fd8 [24];
  undefined1 auStack_fc0 [24];
  undefined1 auStack_fa8 [24];
  undefined1 auStack_f90 [24];
  undefined1 auStack_f78 [24];
  undefined1 auStack_f60 [24];
  undefined1 auStack_f48 [24];
  undefined1 auStack_f30 [24];
  undefined1 auStack_f18 [24];
  undefined1 auStack_f00 [24];
  undefined1 auStack_ee8 [24];
  undefined1 auStack_ed0 [24];
  undefined1 auStack_eb8 [24];
  undefined1 auStack_ea0 [24];
  undefined1 auStack_e88 [24];
  undefined1 auStack_e70 [24];
  undefined1 auStack_e58 [24];
  undefined1 auStack_e40 [24];
  undefined1 auStack_e28 [24];
  undefined1 auStack_e10 [24];
  undefined1 auStack_df8 [24];
  undefined1 auStack_de0 [24];
  undefined1 auStack_dc8 [24];
  undefined1 auStack_db0 [24];
  undefined1 auStack_d98 [24];
  undefined1 auStack_d80 [24];
  undefined1 auStack_d68 [24];
  undefined1 auStack_d50 [24];
  undefined1 auStack_d38 [24];
  undefined1 auStack_d20 [24];
  undefined1 auStack_d08 [24];
  undefined1 auStack_cf0 [24];
  undefined1 auStack_cd8 [24];
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined1 auStack_b10 [24];
  undefined1 auStack_af8 [24];
  undefined1 auStack_ae0 [424];
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [424];
  undefined1 auStack_5e8 [424];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar19 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  FUN_1035031bc(auStack_ae0);
  func_0x000107c610b4(unaff_x20 + 0x20,auStack_ae0,0x1a1);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x1c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 1;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x2b8);
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  func_0x0001034fe960(&uStack_938);
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_8b0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_8b8;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_8a0;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_8a8;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_890;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_898;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_8f0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_8f8;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_8e0;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_8e8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_8d0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_8d8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_8c0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_8c8;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_930;
  *puVar2 = uStack_938;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_920;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_928;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_910;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_918;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_900;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_908;
  *(undefined **)(unaff_x20 + 0x368) = puVar6;
  *(undefined **)(unaff_x20 + 0x370) = puVar6;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined1 *)(unaff_x20 + 0x380) = 1;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x3a0) = puVar6;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 3;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 2;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 2;
  puVar3 = (undefined8 *)(unaff_x20 + 0x468);
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  FUN_1034fe9f0(&uStack_888);
  *(undefined8 *)(unaff_x20 + 0x530) = uStack_7c0;
  *(undefined8 *)(unaff_x20 + 0x528) = uStack_7c8;
  *(undefined8 *)(unaff_x20 + 0x540) = uStack_7b0;
  *(undefined8 *)(unaff_x20 + 0x538) = uStack_7b8;
  *(undefined8 *)(unaff_x20 + 0x550) = uStack_7a0;
  *(undefined8 *)(unaff_x20 + 0x548) = uStack_7a8;
  *(undefined8 *)(unaff_x20 + 0x558) = uStack_798;
  *(undefined8 *)(unaff_x20 + 0x4f0) = uStack_800;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uStack_808;
  *(undefined8 *)(unaff_x20 + 0x500) = uStack_7f0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uStack_7f8;
  *(undefined8 *)(unaff_x20 + 0x510) = uStack_7e0;
  *(undefined8 *)(unaff_x20 + 0x508) = uStack_7e8;
  *(undefined8 *)(unaff_x20 + 0x520) = uStack_7d0;
  *(undefined8 *)(unaff_x20 + 0x518) = uStack_7d8;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_840;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_848;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uStack_830;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uStack_838;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uStack_820;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uStack_828;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uStack_810;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uStack_818;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_880;
  *puVar3 = uStack_888;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_870;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_878;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_860;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_868;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_850;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_858;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 0;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 0;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 1;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0xf000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x5f8);
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x610) = 0;
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  *(undefined8 *)(unaff_x20 + 0x618) = 0;
  *(undefined8 *)(unaff_x20 + 0x628) = 1;
  *(undefined8 *)(unaff_x20 + 0x638) = 0;
  *(undefined8 *)(unaff_x20 + 0x630) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_af8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(puVar19,auStack_b10,1,0);
  *puVar19 = uVar8;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar5;
  func_0x000107c610b4(auStack_790,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_5e8,unaff_x20 + 0x20,0x1a1);
  func_0x000107c610b8(unaff_x20 + 0x20,param_1 + 0x20,0x1a1);
  FUN_1034ff638(auStack_790,&uStack_cc0,0x112f73c68,&UNK_10dbcfb78);
  FUN_10350317c(auStack_5e8,0x112f73c68,&UNK_10dbcfb78);
  func_0x000107c61428(param_1 + 0x1c8,auStack_cd8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428(unaff_x20 + 0x1c8,auStack_cf0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x1d0,auStack_d08,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar13 = *(undefined8 *)(param_1 + 0x1d8);
  uVar12 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_d20,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar12;
  FUN_103500a58(uVar8,uVar13,uVar12);
  FUN_103503054(uVar20,uVar15,uVar17);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1e8),auStack_d38,0,0);
  uStack_418 = *(undefined8 *)(param_1 + 0x210);
  uStack_420 = *(undefined8 *)(param_1 + 0x208);
  uStack_408 = *(undefined8 *)(param_1 + 0x220);
  uStack_410 = *(undefined8 *)(param_1 + 0x218);
  uStack_3f8 = *(undefined8 *)(param_1 + 0x230);
  uStack_400 = *(undefined8 *)(param_1 + 0x228);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x238);
  uStack_438 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_440 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_428 = *(undefined8 *)(param_1 + 0x200);
  uStack_430 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x000107c61428(puVar1,auStack_d50,1,0);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_3a0 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_3e0 = *puVar1;
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_3f8;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_400;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_3f0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_438;
  *puVar1 = uStack_440;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_428;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_430;
  FUN_1034ff638(&uStack_440,&uStack_cc0,0x112f73c80,&UNK_10dbcfb80);
  FUN_10350317c(&uStack_3e0,0x112f73c80,&UNK_10dbcfb80);
  func_0x000107c61428(param_1 + 0x240,auStack_d68,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x240);
  uVar20 = *(undefined8 *)(param_1 + 0x248);
  uVar13 = *(undefined8 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_d80,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x250);
  *(undefined8 *)(unaff_x20 + 0x240) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x248) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar13;
  func_0x000100d54cb4(uVar8,uVar20,uVar13);
  func_0x000100d54cd0(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 600,auStack_d98,0,0);
  uVar8 = *(undefined8 *)(param_1 + 600);
  uVar20 = *(undefined8 *)(param_1 + 0x260);
  uVar13 = *(undefined8 *)(param_1 + 0x268);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 600),auStack_db0,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 600);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x268);
  *(undefined8 *)(unaff_x20 + 600) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar13;
  func_0x000100d54cb4(uVar8,uVar20,uVar13);
  func_0x000100d54cd0(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x270,auStack_dc8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x270);
  uVar20 = *(undefined8 *)(param_1 + 0x278);
  uVar13 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x270,auStack_de0,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x270) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar13;
  func_0x000100d54cb4(uVar8,uVar20,uVar13);
  func_0x000100d54cd0(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x288,auStack_df8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x288);
  uVar20 = *(undefined8 *)(param_1 + 0x290);
  uVar13 = *(undefined8 *)(param_1 + 0x298);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x288),auStack_e10,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x298);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar13;
  func_0x000100d54cb4(uVar8,uVar20,uVar13);
  func_0x000100d54cd0(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x2a0,auStack_e28,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x2a0);
  uVar20 = *(undefined8 *)(param_1 + 0x2a8);
  uVar13 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a0,auStack_e40,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar13;
  func_0x000101541464(uVar8,uVar20,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar17);
  func_0x000107c61428((undefined8 *)(param_1 + 0x2b8),auStack_e58,0,0);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x340);
  uStack_300 = *(undefined8 *)(param_1 + 0x338);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x350);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x348);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x360);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x358);
  uStack_338 = *(undefined8 *)(param_1 + 0x300);
  uStack_340 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_328 = *(undefined8 *)(param_1 + 0x310);
  uStack_330 = *(undefined8 *)(param_1 + 0x308);
  uStack_318 = *(undefined8 *)(param_1 + 800);
  uStack_320 = *(undefined8 *)(param_1 + 0x318);
  uStack_308 = *(undefined8 *)(param_1 + 0x330);
  uStack_310 = *(undefined8 *)(param_1 + 0x328);
  uStack_378 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_380 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_368 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_370 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_358 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_360 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_348 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_350 = *(undefined8 *)(param_1 + 0x2e8);
  func_0x000107c61428(puVar2,auStack_e70,1,0);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x350);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x348);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x300);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x310);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x308);
  uStack_268 = *(undefined8 *)(unaff_x20 + 800);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x318);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_2d0 = *puVar2;
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x2e8);
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_330;
  *(undefined8 *)(unaff_x20 + 800) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_378;
  *puVar2 = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_370;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_350;
  FUN_1034ff638(&uStack_380,&uStack_cc0,0x112f73c90,&UNK_10dbcfb90);
  FUN_10350317c(&uStack_2d0,0x112f73c90,&UNK_10dbcfb90);
  func_0x000107c61428(param_1 + 0x368,auStack_e88,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x368);
  func_0x000107c61428(unaff_x20 + 0x368,auStack_ea0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x368);
  *(undefined8 *)(unaff_x20 + 0x368) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x370,auStack_eb8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x370);
  func_0x000107c61428(unaff_x20 + 0x370,auStack_ed0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x370);
  *(undefined8 *)(unaff_x20 + 0x370) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x378,auStack_ee8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x378);
  uVar5 = *(undefined1 *)(param_1 + 0x380);
  func_0x000107c61428(unaff_x20 + 0x378,auStack_f00,1,0);
  *(undefined8 *)(unaff_x20 + 0x378) = uVar8;
  *(undefined1 *)(unaff_x20 + 0x380) = uVar5;
  func_0x000107c61428(param_1 + 0x388,auStack_f18,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x388);
  uVar20 = *(undefined8 *)(param_1 + 0x390);
  uVar13 = *(undefined8 *)(param_1 + 0x398);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x388),auStack_f30,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x388);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x398);
  *(undefined8 *)(unaff_x20 + 0x388) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x390) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x398) = uVar13;
  func_0x000100d54cb4(uVar8,uVar20,uVar13);
  func_0x000100d54cd0(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x3a0,auStack_f48,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x3a0);
  func_0x000107c61428(unaff_x20 + 0x3a0,auStack_f60,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3a0);
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar20);
  func_0x000107c61428(param_1 + 0x3a8,auStack_f78,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x3a8);
  uVar20 = *(undefined8 *)(param_1 + 0x3b0);
  uVar13 = *(undefined8 *)(param_1 + 0x3b8);
  func_0x000107c61428(unaff_x20 + 0x3a8,auStack_f90,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3b8);
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar13;
  func_0x000101541464(uVar8,uVar20,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x3c0,auStack_fa8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x3c0);
  uVar10 = *(undefined8 *)(param_1 + 0x3c8);
  uVar11 = *(undefined8 *)(param_1 + 0x3d0);
  uVar14 = *(undefined8 *)(param_1 + 0x3d8);
  uVar16 = *(undefined8 *)(param_1 + 0x3e0);
  uVar18 = *(undefined8 *)(param_1 + 1000);
  uVar21 = *(undefined8 *)(param_1 + 0x3f0);
  func_0x000107c61428(unaff_x20 + 0x3c0,auStack_fc0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar13 = *(undefined8 *)(unaff_x20 + 1000);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3f0);
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar16;
  *(undefined8 *)(unaff_x20 + 1000) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar21;
  FUN_1034fe988(uVar9,uVar10,uVar11,uVar14,uVar16,uVar18,uVar21,&SUB_10006c00c,&SUB_101541464);
  FUN_1034fe988(uVar12,uVar8,uVar17,uVar20,uVar7,uVar13,uVar15,&SUB_10006c090,&SUB_101556278);
  func_0x000107c61428(param_1 + 0x3f8,auStack_fd8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x3f8);
  uVar13 = *(undefined8 *)(param_1 + 0x400);
  uVar15 = *(undefined8 *)(param_1 + 0x408);
  uVar12 = *(undefined8 *)(param_1 + 0x410);
  func_0x000107c61428(unaff_x20 + 0x3f8,auStack_ff0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x400);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x408);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x410);
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x400) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x408) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x410) = uVar12;
  func_0x000101597350(uVar8,uVar13,uVar15,uVar12);
  func_0x000101597ae4(uVar17,uVar7,uVar9,uVar20);
  func_0x000107c61428(param_1 + 0x418,auStack_1008,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x418);
  uVar20 = *(undefined8 *)(param_1 + 0x420);
  uVar13 = *(undefined8 *)(param_1 + 0x428);
  uVar15 = *(undefined8 *)(param_1 + 0x430);
  func_0x000107c61428(unaff_x20 + 0x418,auStack_1020,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x418);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x420);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x428);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x430);
  *(undefined8 *)(unaff_x20 + 0x418) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x420) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x428) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x430) = uVar15;
  func_0x000101597350(uVar8,uVar20,uVar13,uVar15);
  func_0x000101597ae4(uVar12,uVar17,uVar7,uVar9);
  func_0x000107c61428(param_1 + 0x438,auStack_1038,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x438);
  uVar20 = *(undefined8 *)(param_1 + 0x440);
  uVar13 = *(undefined8 *)(param_1 + 0x448);
  func_0x000107c61428(unaff_x20 + 0x438,auStack_1050,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x438);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x440);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x448);
  *(undefined8 *)(unaff_x20 + 0x438) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x440) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x448) = uVar13;
  func_0x000101541464(uVar8,uVar20,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x450,auStack_1068,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x450);
  uVar20 = *(undefined8 *)(param_1 + 0x458);
  uVar13 = *(undefined8 *)(param_1 + 0x460);
  func_0x000107c61428(unaff_x20 + 0x450,auStack_1080,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x450);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x458);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x460);
  *(undefined8 *)(unaff_x20 + 0x450) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x458) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x460) = uVar13;
  func_0x000101541464(uVar8,uVar20,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar17);
  func_0x000107c61428((undefined8 *)(param_1 + 0x468),auStack_1098,0,0);
  uStack_158 = *(undefined8 *)(param_1 + 0x530);
  uStack_160 = *(undefined8 *)(param_1 + 0x528);
  uStack_148 = *(undefined8 *)(param_1 + 0x540);
  uStack_150 = *(undefined8 *)(param_1 + 0x538);
  uStack_138 = *(undefined8 *)(param_1 + 0x550);
  uStack_140 = *(undefined8 *)(param_1 + 0x548);
  uStack_130 = *(undefined8 *)(param_1 + 0x558);
  uStack_198 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x4e8);
  uStack_188 = *(undefined8 *)(param_1 + 0x500);
  uStack_190 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_178 = *(undefined8 *)(param_1 + 0x510);
  uStack_180 = *(undefined8 *)(param_1 + 0x508);
  uStack_168 = *(undefined8 *)(param_1 + 0x520);
  uStack_170 = *(undefined8 *)(param_1 + 0x518);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_218 = *(undefined8 *)(param_1 + 0x470);
  uStack_220 = *(undefined8 *)(param_1 + 0x468);
  uStack_208 = *(undefined8 *)(param_1 + 0x480);
  uStack_210 = *(undefined8 *)(param_1 + 0x478);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x490);
  uStack_200 = *(undefined8 *)(param_1 + 0x488);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x498);
  func_0x000107c61428(puVar3,auStack_10b0,1,0);
  uStack_bf8 = *(undefined8 *)(unaff_x20 + 0x530);
  uStack_c00 = *(undefined8 *)(unaff_x20 + 0x528);
  uStack_be8 = *(undefined8 *)(unaff_x20 + 0x540);
  uStack_bf0 = *(undefined8 *)(unaff_x20 + 0x538);
  uStack_bd8 = *(undefined8 *)(unaff_x20 + 0x550);
  uStack_be0 = *(undefined8 *)(unaff_x20 + 0x548);
  uStack_bd0 = *(undefined8 *)(unaff_x20 + 0x558);
  uStack_c38 = *(undefined8 *)(unaff_x20 + 0x4f0);
  uStack_c40 = *(undefined8 *)(unaff_x20 + 0x4e8);
  uStack_c28 = *(undefined8 *)(unaff_x20 + 0x500);
  uStack_c30 = *(undefined8 *)(unaff_x20 + 0x4f8);
  uStack_c18 = *(undefined8 *)(unaff_x20 + 0x510);
  uStack_c20 = *(undefined8 *)(unaff_x20 + 0x508);
  uStack_c08 = *(undefined8 *)(unaff_x20 + 0x520);
  uStack_c10 = *(undefined8 *)(unaff_x20 + 0x518);
  uStack_c78 = *(undefined8 *)(unaff_x20 + 0x4b0);
  uStack_c80 = *(undefined8 *)(unaff_x20 + 0x4a8);
  uStack_c68 = *(undefined8 *)(unaff_x20 + 0x4c0);
  uStack_c70 = *(undefined8 *)(unaff_x20 + 0x4b8);
  uStack_c58 = *(undefined8 *)(unaff_x20 + 0x4d0);
  uStack_c60 = *(undefined8 *)(unaff_x20 + 0x4c8);
  uStack_c48 = *(undefined8 *)(unaff_x20 + 0x4e0);
  uStack_c50 = *(undefined8 *)(unaff_x20 + 0x4d8);
  uStack_cb8 = *(undefined8 *)(unaff_x20 + 0x470);
  uStack_cc0 = *puVar3;
  uStack_ca8 = *(undefined8 *)(unaff_x20 + 0x480);
  uStack_cb0 = *(undefined8 *)(unaff_x20 + 0x478);
  uStack_c98 = *(undefined8 *)(unaff_x20 + 0x490);
  uStack_ca0 = *(undefined8 *)(unaff_x20 + 0x488);
  uStack_c88 = *(undefined8 *)(unaff_x20 + 0x4a0);
  uStack_c90 = *(undefined8 *)(unaff_x20 + 0x498);
  *(undefined8 *)(unaff_x20 + 0x530) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x528) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x540) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x538) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x550) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x548) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x558) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x4f0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x500) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x510) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x508) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x520) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x518) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_218;
  *puVar3 = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_1f0;
  FUN_1034ff638(&uStack_220,&uStack_11b0,0x112f73ca0,&UNK_10dbcfba0);
  FUN_10350317c(&uStack_cc0,0x112f73ca0,&UNK_10dbcfba0);
  func_0x000107c61428(param_1 + 0x560,auStack_11c8,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x560);
  uVar20 = *(undefined8 *)(param_1 + 0x568);
  uVar13 = *(undefined8 *)(param_1 + 0x570);
  uVar15 = *(undefined8 *)(param_1 + 0x578);
  func_0x000107c61428(unaff_x20 + 0x560,auStack_11e0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x560);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x568);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x570);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x578);
  *(undefined8 *)(unaff_x20 + 0x560) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x568) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x570) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x578) = uVar15;
  func_0x000101597350(uVar8,uVar20,uVar13,uVar15);
  func_0x000101597ae4(uVar12,uVar17,uVar7,uVar9);
  func_0x000107c61428(param_1 + 0x580,auStack_11f8,0,0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x5a8);
  uStack_100 = *(undefined8 *)(param_1 + 0x5a0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x5b8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x5b0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x5c8);
  uStack_e0 = *(undefined8 *)(param_1 + 0x5c0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x5d0);
  uStack_118 = *(undefined8 *)(param_1 + 0x588);
  uStack_120 = *(undefined8 *)(param_1 + 0x580);
  uStack_108 = *(undefined8 *)(param_1 + 0x598);
  uStack_110 = *(undefined8 *)(param_1 + 0x590);
  func_0x000107c61428(unaff_x20 + 0x580,auStack_1210,1,0);
  uStack_1188 = *(undefined8 *)(unaff_x20 + 0x5a8);
  uStack_1190 = *(undefined8 *)(unaff_x20 + 0x5a0);
  uStack_1178 = *(undefined8 *)(unaff_x20 + 0x5b8);
  uStack_1180 = *(undefined8 *)(unaff_x20 + 0x5b0);
  uStack_1168 = *(undefined8 *)(unaff_x20 + 0x5c8);
  uStack_1170 = *(undefined8 *)(unaff_x20 + 0x5c0);
  uStack_11a8 = *(undefined8 *)(unaff_x20 + 0x588);
  uStack_11b0 = *(undefined8 *)(unaff_x20 + 0x580);
  uStack_1198 = *(undefined8 *)(unaff_x20 + 0x598);
  uStack_11a0 = *(undefined8 *)(unaff_x20 + 0x590);
  *(undefined8 *)(unaff_x20 + 0x5a8) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x5a0) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x5b8) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x5b0) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x5c0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x588) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x580) = uStack_120;
  uStack_1160 = *(undefined8 *)(unaff_x20 + 0x5d0);
  *(undefined8 *)(unaff_x20 + 0x5d0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x598) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x590) = uStack_110;
  FUN_1034ff638(&uStack_120,&uStack_1270,0x112f73cb0,&UNK_10dbcfbb0);
  FUN_10350317c(&uStack_11b0,0x112f73cb0,&UNK_10dbcfbb0);
  func_0x000107c61428(param_1 + 0x5d8,auStack_1288,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x5d8);
  uVar20 = *(undefined8 *)(param_1 + 0x5e0);
  uVar13 = *(undefined8 *)(param_1 + 0x5e8);
  uVar15 = *(undefined8 *)(param_1 + 0x5f0);
  func_0x000107c61428(unaff_x20 + 0x5d8,auStack_12a0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x5d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x5e0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x5e8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x5f0);
  *(undefined8 *)(unaff_x20 + 0x5d8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x5e0) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x5e8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x5f0) = uVar15;
  func_0x0001034fea24(uVar8,uVar20,uVar13,uVar15);
  func_0x000100d54dc0(uVar12,uVar17,uVar7,uVar9);
  func_0x000107c61428((undefined8 *)(param_1 + 0x5f8),auStack_12b8,0,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x620);
  uStack_a0 = *(undefined8 *)(param_1 + 0x618);
  uStack_88 = *(undefined8 *)(param_1 + 0x630);
  uStack_90 = *(undefined8 *)(param_1 + 0x628);
  uStack_80 = *(undefined8 *)(param_1 + 0x638);
  uStack_b8 = *(undefined8 *)(param_1 + 0x600);
  uStack_c0 = *(undefined8 *)(param_1 + 0x5f8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x610);
  uStack_b0 = *(undefined8 *)(param_1 + 0x608);
  FUN_1034ff638(&uStack_c0,&uStack_1270,0x112f73cc0,&UNK_10dbcfbc0);
  func_0x000107c61574(param_1);
  func_0x000107c61428(puVar4,auStack_12d0,1,0);
  uStack_1248 = *(undefined8 *)(unaff_x20 + 0x620);
  uStack_1250 = *(undefined8 *)(unaff_x20 + 0x618);
  uStack_1238 = *(undefined8 *)(unaff_x20 + 0x630);
  uStack_1240 = *(undefined8 *)(unaff_x20 + 0x628);
  uStack_1230 = *(undefined8 *)(unaff_x20 + 0x638);
  uStack_1268 = *(undefined8 *)(unaff_x20 + 0x600);
  uStack_1270 = *puVar4;
  uStack_1258 = *(undefined8 *)(unaff_x20 + 0x610);
  uStack_1260 = *(undefined8 *)(unaff_x20 + 0x608);
  *(undefined8 *)(unaff_x20 + 0x620) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x618) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x630) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x628) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x638) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x600) = uStack_b8;
  *puVar4 = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x610) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x608) = uStack_b0;
  FUN_10350317c(&uStack_1270,0x112f73cc0,&UNK_10dbcfbc0);
  return;
}



/* Entry: 1034e9250; end: 1034e926f;  */

int FUN_1034e9250(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0x19 < *(byte *)(param_1 + 0x1a0)) {
    iVar1 = (*(byte *)(param_1 + 0x1a0) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 1034e9270; end: 1034e92a3;  */

undefined8 FUN_1034e9270(undefined8 param_1,undefined8 param_2)

{
  FUN_1035017d8(param_2,param_1,&UNK_11065d6d8);
  return param_2;
}



/* Entry: 1034e92a4; end: 1034e92cf;  */

void FUN_1034e92a4(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  return;
}



/* Entry: 1034e92d0; end: 1034e930b;  */

undefined8 FUN_1034e92d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a297c(param_2,param_1);
  return param_2;
}



/* Entry: 1034e930c; end: 1034e932b;  */

void FUN_1034e930c(void)

{
  return;
}



/* Entry: 1034e932c; end: 1034e9367;  */

undefined8 FUN_1034e932c(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a1720(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9368; end: 1034e93d7;  */

void FUN_1034e9368(void)

{
  return;
}



/* Entry: 1034e93d8; end: 1034e9413;  */

undefined8 FUN_1034e93d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a72e8(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9414; end: 1034e9443;  */

void FUN_1034e9414(void)

{
  return;
}



/* Entry: 1034e9444; end: 1034e947f;  */

undefined8 FUN_1034e9444(undefined8 param_1,undefined8 param_2)

{
  FUN_103508e18(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9480; end: 1034e948f;  */

void FUN_1034e9480(void)

{
  return;
}



/* Entry: 1034e9490; end: 1034e94cb;  */

undefined8 FUN_1034e9490(undefined8 param_1,undefined8 param_2)

{
  FUN_103576658(param_2,param_1);
  return param_2;
}



/* Entry: 1034e94cc; end: 1034e94db;  */

void FUN_1034e94cc(void)

{
  return;
}



/* Entry: 1034e94dc; end: 1034e9517;  */

undefined8 FUN_1034e94dc(undefined8 param_1,undefined8 param_2)

{
  FUN_10355b2a8(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9518; end: 1034e9527;  */

void FUN_1034e9518(void)

{
  return;
}



/* Entry: 1034e9528; end: 1034e9563;  */

undefined8 FUN_1034e9528(undefined8 param_1,undefined8 param_2)

{
  FUN_10357e51c(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9564; end: 1034e9583;  */

void FUN_1034e9564(void)

{
  return;
}



/* Entry: 1034e9584; end: 1034e95bf;  */

undefined8 FUN_1034e9584(undefined8 param_1,undefined8 param_2)

{
  FUN_103510b4c(param_2,param_1);
  return param_2;
}



/* Entry: 1034e95c0; end: 1034e95cf;  */

void FUN_1034e95c0(void)

{
  return;
}



/* Entry: 1034e95d0; end: 1034e960b;  */

undefined8 FUN_1034e95d0(undefined8 param_1,undefined8 param_2)

{
  FUN_103525c78(param_2,param_1);
  return param_2;
}



/* Entry: 1034e960c; end: 1034e962b;  */

void FUN_1034e960c(void)

{
  return;
}



/* Entry: 1034e962c; end: 1034e9667;  */

undefined8 FUN_1034e962c(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a3c7c(param_2,param_1);
  return param_2;
}



/* Entry: 1034e9668; end: 1034e9677;  */

void FUN_1034e9668(void)

{
  return;
}



/* Entry: 1034e9678; end: 1034e96b3;  */

undefined8 FUN_1034e9678(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a9454(param_2,param_1);
  return param_2;
}



/* Entry: 1034e96b4; end: 1034e96d3;  */

void FUN_1034e96b4(void)

{
  return;
}



/* Entry: 1034e96d4; end: 1034e990f;  */

void FUN_1034e96d4(void)

{
  long unaff_x20;
  
  FUN_10350317c(unaff_x20 + 0x20,0x112f73c68,&UNK_10dbcfb78);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1c8));
  FUN_103503054(*(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  FUN_103502304(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                *(undefined8 *)(unaff_x20 + 0x238));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x20 + 0x248),
                      *(undefined8 *)(unaff_x20 + 0x250));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 600),*(undefined8 *)(unaff_x20 + 0x260),
                      *(undefined8 *)(unaff_x20 + 0x268));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                      *(undefined8 *)(unaff_x20 + 0x280));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                      *(undefined8 *)(unaff_x20 + 0x298));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x2a0),*(undefined8 *)(unaff_x20 + 0x2a8),
                      *(undefined8 *)(unaff_x20 + 0x2b0));
  FUN_10350317c(unaff_x20 + 0x2b8,0x112f73c90,&UNK_10dbcfb90);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x388),*(undefined8 *)(unaff_x20 + 0x390),
                      *(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0),
                      *(undefined8 *)(unaff_x20 + 0x3b8));
  FUN_1034fe988(*(undefined8 *)(unaff_x20 + 0x3c0),*(undefined8 *)(unaff_x20 + 0x3c8),
                *(undefined8 *)(unaff_x20 + 0x3d0),*(undefined8 *)(unaff_x20 + 0x3d8),
                *(undefined8 *)(unaff_x20 + 0x3e0),*(undefined8 *)(unaff_x20 + 1000),
                *(undefined8 *)(unaff_x20 + 0x3f0),&SUB_10006c090,&SUB_101556278);
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400),
                      *(undefined8 *)(unaff_x20 + 0x408),*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x418),*(undefined8 *)(unaff_x20 + 0x420),
                      *(undefined8 *)(unaff_x20 + 0x428),*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x438),*(undefined8 *)(unaff_x20 + 0x440),
                      *(undefined8 *)(unaff_x20 + 0x448));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x450),*(undefined8 *)(unaff_x20 + 0x458),
                      *(undefined8 *)(unaff_x20 + 0x460));
  FUN_10350317c(unaff_x20 + 0x468,0x112f73ca0,&UNK_10dbcfba0);
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x560),*(undefined8 *)(unaff_x20 + 0x568),
                      *(undefined8 *)(unaff_x20 + 0x570),*(undefined8 *)(unaff_x20 + 0x578));
  FUN_103502304(*(undefined8 *)(unaff_x20 + 0x580),*(undefined8 *)(unaff_x20 + 0x588),
                *(undefined8 *)(unaff_x20 + 0x590),*(undefined8 *)(unaff_x20 + 0x598),
                *(undefined8 *)(unaff_x20 + 0x5a0),*(undefined8 *)(unaff_x20 + 0x5a8),
                *(undefined8 *)(unaff_x20 + 0x5b0),*(undefined8 *)(unaff_x20 + 0x5b8),
                *(undefined8 *)(unaff_x20 + 0x5c0),*(undefined8 *)(unaff_x20 + 0x5c8),
                *(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000100d54dc0(*(undefined8 *)(unaff_x20 + 0x5d8),*(undefined8 *)(unaff_x20 + 0x5e0),
                      *(undefined8 *)(unaff_x20 + 0x5e8),*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000103502398(*(undefined8 *)(unaff_x20 + 0x5f8),*(undefined8 *)(unaff_x20 + 0x600),
                      *(undefined8 *)(unaff_x20 + 0x608),*(undefined8 *)(unaff_x20 + 0x610),
                      *(undefined8 *)(unaff_x20 + 0x618),*(undefined8 *)(unaff_x20 + 0x620),
                      *(undefined8 *)(unaff_x20 + 0x628),*(undefined8 *)(unaff_x20 + 0x630),
                      *(undefined8 *)(unaff_x20 + 0x638));
  return;
}



/* Entry: 1034e9910; end: 1034e992b;  */

void FUN_1034e9910(undefined8 param_1)

{
  FUN_1034e96d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x640,7);
  return;
}



/* Entry: 1034e992c; end: 1034e9fd7;  */

/* WARNING: Removing unreachable block (ram,0x0001034e99fc) */
/* WARNING: Removing unreachable block (ram,0x0001034e9c68) */
/* WARNING: Removing unreachable block (ram,0x0001034e9bb0) */
/* WARNING: Removing unreachable block (ram,0x0001034e9dd8) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e3c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e20) */
/* WARNING: Removing unreachable block (ram,0x0001034e9be8) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b24) */
/* WARNING: Removing unreachable block (ram,0x0001034e9aec) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e04) */
/* WARNING: Removing unreachable block (ram,0x0001034e9d68) */
/* WARNING: Removing unreachable block (ram,0x0001034e9eac) */
/* WARNING: Removing unreachable block (ram,0x0001034e9c4c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f9c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f48) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e58) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e74) */
/* WARNING: Removing unreachable block (ram,0x0001034e9ac0) */
/* WARNING: Removing unreachable block (ram,0x0001034e9a88) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f80) */
/* WARNING: Removing unreachable block (ram,0x0001034e9bcc) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f10) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b08) */
/* WARNING: Removing unreachable block (ram,0x0001034e9fb8) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b5c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b94) */
/* WARNING: Removing unreachable block (ram,0x0001034e9a50) */
/* WARNING: Removing unreachable block (ram,0x0001034e9e90) */
/* WARNING: Removing unreachable block (ram,0x0001034e9a18) */
/* WARNING: Removing unreachable block (ram,0x0001034e9d3c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9ed8) */
/* WARNING: Removing unreachable block (ram,0x0001034e9a34) */
/* WARNING: Removing unreachable block (ram,0x0001034e9a6c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b40) */
/* WARNING: Removing unreachable block (ram,0x0001034e9d04) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f64) */
/* WARNING: Removing unreachable block (ram,0x0001034e9aa4) */
/* WARNING: Removing unreachable block (ram,0x0001034e9c20) */
/* WARNING: Removing unreachable block (ram,0x0001034e9f2c) */
/* WARNING: Removing unreachable block (ram,0x0001034e9da0) */
/* WARNING: Removing unreachable block (ram,0x0001034e9ef4) */
/* WARNING: Removing unreachable block (ram,0x0001034e9d20) */
/* WARNING: Removing unreachable block (ram,0x0001034e9c94) */
/* WARNING: Removing unreachable block (ram,0x0001034e9dbc) */
/* WARNING: Removing unreachable block (ram,0x0001034e9b78) */
/* WARNING: Removing unreachable block (ram,0x0001034e9c04) */
/* WARNING: Removing unreachable block (ram,0x0001034e9ccc) */
/* WARNING: Removing unreachable block (ram,0x0001034e9d84) */
/* WARNING: Removing unreachable block (ram,0x0001034e9cb0) */
/* WARNING: Removing unreachable block (ram,0x0001034e9ce8) */
/* WARNING: Removing unreachable block (ram,0x0001034e9fd4) */

void FUN_1034e992c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1034f76dc(param_2,param_1,param_3,param_4,&SUB_101568cc4,&UNK_110664c98);
        break;
      case 2:
        FUN_1034e9fd8(param_1,param_2,param_3,param_4);
        break;
      case 3:
        FUN_1034ea25c(param_1,param_2,param_3,param_4);
        break;
      case 4:
        FUN_1034ea490(param_1,param_2,param_3,param_4);
        break;
      case 5:
        FUN_1034ea778(param_1,param_2,param_3,param_4);
        break;
      case 6:
        FUN_1034ea9ac(param_1,param_2,param_3,param_4);
        break;
      case 7:
        FUN_1034ead2c(param_1,param_2,param_3,param_4);
        break;
      case 8:
        FUN_1034eaf60(param_1,param_2,param_3,param_4);
        break;
      case 9:
        FUN_1034eb21c(param_1,param_2,param_3,param_4);
        break;
      case 10:
        FUN_1034eb4d8(param_1,param_2,param_3,param_4);
        break;
      case 0xb:
        FUN_1034eb70c(param_1,param_2,param_3,param_4);
        break;
      case 0xc:
        FUN_1034eb940(param_1,param_2,param_3,param_4);
        break;
      case 0xd:
        FUN_1034ebb74(param_1,param_2,param_3,param_4);
        break;
      case 0xe:
        FUN_1034ebe5c(param_1,param_2,param_3,param_4);
        break;
      case 0xf:
        FUN_1034ec128(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_1034f8278(param_2,param_1,param_3,param_4,FUN_1034ffecc,&UNK_11065d750);
        break;
      case 0x11:
        FUN_1034f8318(param_2,param_1,param_3,param_4,0x103502f54,&UNK_1106698f0);
        break;
      case 0x12:
        FUN_1034ec1bc(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1034f8608(param_2,param_1,param_3,param_4,&SUB_1015c5cfc,&UNK_110790a00);
        break;
      case 0x14:
        FUN_1034ec250(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1034f873c(param_2,param_1,param_3,param_4,&SUB_1015c5cfc,&UNK_110790a00);
        break;
      case 0x16:
        FUN_1034ec2e4(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_1034ec378(param_1,param_2,param_3,param_4);
        break;
      case 0x18:
        FUN_1034ec69c(param_1,param_2,param_3,param_4);
        break;
      case 0x19:
        FUN_1034f8870(param_2,param_1,param_3,param_4,0x103502f14,&UNK_11065e170);
        break;
      case 0x1a:
        FUN_1034ec958(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_1034ec9ec(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_1034eca80(param_1,param_2,param_3,param_4);
        break;
      case 0x1d:
        FUN_1034ecddc(param_1,param_2,param_3,param_4);
        break;
      case 0x1e:
        FUN_1034ed0c4(param_1,param_2,param_3,param_4);
        break;
      case 0x1f:
        FUN_1034ed3ac(param_1,param_2,param_3,param_4);
        break;
      case 0x20:
        FUN_1034ed8a8(param_1,param_2,param_3,param_4);
        break;
      case 0x21:
        FUN_1034edbc8(param_2,param_1,param_3,param_4);
        break;
      case 0x22:
        FUN_1034edc5c(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        FUN_1034edcf0(param_1,param_2,param_3,param_4);
        break;
      case 0x24:
        FUN_1034ee044(param_2,param_1,param_3,param_4);
        break;
      case 0x25:
        FUN_1034ee0d8(param_2,param_1,param_3,param_4);
        break;
      case 0x26:
        FUN_1034ee16c(param_2,param_1,param_3,param_4);
        break;
      case 0x27:
        FUN_1034ee200(param_1,param_2,param_3,param_4);
        break;
      case 0x28:
        FUN_1034f8f6c(param_2,param_1,param_3,param_4,&SUB_101568c04,&UNK_110790c80);
        break;
      case 0x29:
        FUN_1034ee3fc(param_2,param_1,param_3,param_4);
        break;
      case 0x2a:
        FUN_1034ee490(param_1,param_2,param_3,param_4);
        break;
      case 0x2b:
        FUN_1034ee7d8(param_1,param_2,param_3,param_4);
        break;
      case 0x2c:
        FUN_1034eeb2c(param_2,param_1,param_3,param_4);
        break;
      case 0x2d:
        FUN_1034eebc0(param_2,param_1,param_3,param_4);
        break;
      case 0x2e:
        FUN_1034eec54(param_1,param_2,param_3,param_4);
        break;
      case 0x2f:
        FUN_1034ef198(param_2,param_1,param_3,param_4);
        break;
      case 0x30:
        FUN_1034ef22c(param_2,param_1,param_3,param_4);
        break;
      case 0x31:
        FUN_1034ef2c0(param_1,param_2,param_3,param_4);
        break;
      case 0x32:
        FUN_1034ef61c(param_2,param_1,param_3,param_4);
        break;
      case 0x33:
        FUN_1034ef6b0(param_2,param_1,param_3,param_4);
        break;
      case 0x34:
        FUN_1034ef744(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1034e9fd8; end: 1034ea25b;  */

/* WARNING: Removing unreachable block (ram,0x0001034ea190) */

void FUN_1034e9fd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  long lStack_8c8;
  undefined1 auStack_740 [424];
  undefined8 auStack_598 [53];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined1 auStack_3c0 [424];
  undefined1 auStack_218 [440];
  
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lStack_3d0 = 1;
  func_0x000107c610b4(auStack_3c0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_218,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3c0;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_598,auStack_218,0x1a1);
    puVar3 = auStack_218;
    func_0x0001034e9264();
    if ((int)puVar3 == 0) {
      puVar2 = auStack_598;
      func_0x0001034e926c();
      lVar5 = puVar2[4];
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      func_0x000107c610b4(auStack_740,auStack_3c0,0x1a1);
      FUN_1034e9270(auStack_740,&uStack_8e8);
      puVar3 = (undefined1 *)0x0;
      FUN_103502f94(0,0,0,0,1);
      uStack_3f0 = uVar8;
      uStack_3e8 = uVar9;
      uStack_3e0 = uVar6;
      uStack_3d8 = uVar7;
      lStack_3d0 = lVar5;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502794();
  (*pcVar4)(&uStack_3f0,&UNK_110669320,puVar3,param_3,param_4);
  lVar5 = lStack_3d0;
  uVar9 = uStack_3d8;
  uVar8 = uStack_3e0;
  uVar7 = uStack_3e8;
  uVar6 = uStack_3f0;
  if (unaff_x21 == 0) {
    if (lStack_3d0 == 1) {
      FUN_103502f94(uStack_3f0,uStack_3e8,uStack_3e0,uStack_3d8,1);
    }
    else {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        FUN_103500a58(uVar8,uVar9,lVar5);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        FUN_103500a58(uVar8,uVar9,lVar5);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103502f94(uStack_3f0,uStack_3e8,uStack_3e0,uStack_3d8,lStack_3d0);
      uStack_8e8 = uVar6;
      uStack_8e0 = uVar7;
      uStack_8d8 = uVar8;
      uStack_8d0 = uVar9;
      lStack_8c8 = lVar5;
      FUN_1034e92a4(&uStack_8e8);
      func_0x000107c610b4(auStack_740,&uStack_8e8,0x1a1);
      func_0x0001034e92ac(auStack_740);
      func_0x000107c610b4(auStack_598,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_740,0x1a1);
      FUN_10350317c(auStack_598,0x112f73c68,&UNK_10dbcfb78);
    }
  }
  else {
    FUN_103502f94(uStack_3f0,uStack_3e8,uStack_3e0,uStack_3d8,lStack_3d0);
  }
  return;
}



/* Entry: 1034ea25c; end: 1034ea48f;  */

/* WARNING: Removing unreachable block (ram,0x0001034ea400) */

void FUN_1034ea25c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 1) {
      puVar2 = auStack_578;
      func_0x0001034e92b0();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar5)(&uStack_3d0,&UNK_110667f00,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      func_0x0001034e92b4(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034ea490; end: 1034ea777;  */

/* WARNING: Removing unreachable block (ram,0x0001034ea6c0) */

void FUN_1034ea490(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_7b8 [424];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lStack_3c0 = 1;
  uStack_3b8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_610,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 2) {
      puVar3 = &uStack_610;
      func_0x0001034e92c0();
      uStack_418 = uStack_3d8;
      uStack_420 = uStack_3e0;
      uStack_408 = uStack_3c8;
      uStack_410 = uStack_3d0;
      uStack_3f8 = uStack_3b8;
      lStack_400 = lStack_3c0;
      uStack_3e8 = uStack_3a8;
      uStack_3f0 = uStack_3b0;
      func_0x000107c610b4(auStack_7b8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_7b8,&uStack_960);
      puVar2 = &uStack_420;
      FUN_10350317c(puVar2,0x112f74ce0,&UNK_10dbd0d78);
      uStack_3b8 = puVar3[5];
      lStack_3c0 = puVar3[4];
      uStack_3a8 = puVar3[7];
      uStack_3b0 = puVar3[6];
      uStack_3d8 = puVar3[1];
      uStack_3e0 = *puVar3;
      uStack_3c8 = puVar3[3];
      uStack_3d0 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502814();
  (*pcVar6)(&uStack_3e0,&UNK_1106688e8,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_458 = uStack_3d8;
    uStack_460 = uStack_3e0;
    uStack_448 = uStack_3c8;
    uStack_450 = uStack_3d0;
    uStack_438 = uStack_3b8;
    lStack_440 = lStack_3c0;
    uStack_428 = uStack_3a8;
    uStack_430 = uStack_3b0;
    uStack_418 = uStack_3d8;
    uStack_420 = uStack_3e0;
    uStack_408 = uStack_3c8;
    uStack_410 = uStack_3d0;
    uStack_3f8 = uStack_3b8;
    lStack_400 = lStack_3c0;
    uStack_3e8 = uStack_3a8;
    uStack_3f0 = uStack_3b0;
    if (lStack_3c0 != 1) {
      if (iVar1 == 1) {
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e92d0(&uStack_610,auStack_7b8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e92d0(&uStack_610,auStack_7b8);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_3e0,0x112f74ce0,&UNK_10dbd0d78);
      uStack_958 = uStack_418;
      uStack_960 = uStack_420;
      uStack_948 = uStack_408;
      uStack_950 = uStack_410;
      uStack_938 = uStack_3f8;
      lStack_940 = lStack_400;
      uStack_928 = uStack_3e8;
      uStack_930 = uStack_3f0;
      func_0x0001034e92c4(&uStack_960);
      func_0x000107c610b4(auStack_7b8,&uStack_960,0x1a1);
      func_0x0001034e92ac(auStack_7b8);
      func_0x000107c610b4(&uStack_610,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_7b8,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_610;
      goto LAB_1034ea62c;
    }
  }
  uVar4 = 0x112f74ce0;
  puVar5 = &UNK_10dbd0d78;
  puVar2 = &uStack_3e0;
LAB_1034ea62c:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ea778; end: 1034ea9ab;  */

/* WARNING: Removing unreachable block (ram,0x0001034ea91c) */

void FUN_1034ea778(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 3) {
      puVar2 = auStack_578;
      FUN_1034e930c();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar5)(&uStack_3d0,&UNK_11066a9c0,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      FUN_1034e930c(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034ea9ac; end: 1034ead2b;  */

/* WARNING: Removing unreachable block (ram,0x0001034eac60) */

void FUN_1034ea9ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined1 auStack_848 [424];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  lStack_3f0 = 1;
  uStack_3a8 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_6a0,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 4) {
      puVar3 = &uStack_6a0;
      func_0x0001034e931c();
      uStack_438 = uStack_3c8;
      uStack_440 = uStack_3d0;
      uStack_428 = uStack_3b8;
      uStack_430 = uStack_3c0;
      uStack_418 = uStack_3a8;
      uStack_420 = uStack_3b0;
      uStack_478 = uStack_408;
      uStack_480 = uStack_410;
      uStack_468 = uStack_3f8;
      uStack_470 = uStack_400;
      uStack_448 = uStack_3d8;
      uStack_450 = uStack_3e0;
      uStack_458 = uStack_3e8;
      lStack_460 = lStack_3f0;
      func_0x000107c610b4(auStack_848,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_848,&uStack_9f0);
      puVar2 = &uStack_480;
      FUN_10350317c(puVar2,0x112f74ce8,&UNK_10dbd0d80);
      uStack_3f8 = puVar3[3];
      uStack_400 = puVar3[2];
      uStack_3e8 = puVar3[5];
      lStack_3f0 = puVar3[4];
      uStack_408 = puVar3[1];
      uStack_410 = *puVar3;
      uStack_3b8 = puVar3[0xb];
      uStack_3c0 = puVar3[10];
      uStack_3a8 = puVar3[0xd];
      uStack_3b0 = puVar3[0xc];
      uStack_3d8 = puVar3[7];
      uStack_3e0 = puVar3[6];
      uStack_3c8 = puVar3[9];
      uStack_3d0 = puVar3[8];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502894();
  (*pcVar6)(&uStack_410,&UNK_110668730,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_4c8 = uStack_3e8;
    lStack_4d0 = lStack_3f0;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_488 = uStack_3a8;
    uStack_490 = uStack_3b0;
    uStack_4e8 = uStack_408;
    uStack_4f0 = uStack_410;
    uStack_4d8 = uStack_3f8;
    uStack_4e0 = uStack_400;
    uStack_468 = uStack_3f8;
    uStack_470 = uStack_400;
    uStack_478 = uStack_408;
    uStack_480 = uStack_410;
    uStack_418 = uStack_3a8;
    uStack_420 = uStack_3b0;
    uStack_458 = uStack_3e8;
    lStack_460 = lStack_3f0;
    uStack_448 = uStack_3d8;
    uStack_450 = uStack_3e0;
    uStack_428 = uStack_3b8;
    uStack_430 = uStack_3c0;
    uStack_438 = uStack_3c8;
    uStack_440 = uStack_3d0;
    if (lStack_3f0 != 1) {
      if (iVar1 == 1) {
        uStack_658 = uStack_3c8;
        uStack_660 = uStack_3d0;
        uStack_648 = uStack_3b8;
        uStack_650 = uStack_3c0;
        uStack_638 = uStack_3a8;
        uStack_640 = uStack_3b0;
        uStack_698 = uStack_408;
        uStack_6a0 = uStack_410;
        uStack_688 = uStack_3f8;
        uStack_690 = uStack_400;
        uStack_678 = uStack_3e8;
        lStack_680 = lStack_3f0;
        uStack_668 = uStack_3d8;
        uStack_670 = uStack_3e0;
        FUN_1034e932c(&uStack_6a0,auStack_848);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_658 = uStack_3c8;
        uStack_660 = uStack_3d0;
        uStack_648 = uStack_3b8;
        uStack_650 = uStack_3c0;
        uStack_638 = uStack_3a8;
        uStack_640 = uStack_3b0;
        uStack_698 = uStack_408;
        uStack_6a0 = uStack_410;
        uStack_688 = uStack_3f8;
        uStack_690 = uStack_400;
        uStack_678 = uStack_3e8;
        lStack_680 = lStack_3f0;
        uStack_668 = uStack_3d8;
        uStack_670 = uStack_3e0;
        FUN_1034e932c(&uStack_6a0,auStack_848);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_410,0x112f74ce8,&UNK_10dbd0d80);
      uStack_9a8 = uStack_438;
      uStack_9b0 = uStack_440;
      uStack_998 = uStack_428;
      uStack_9a0 = uStack_430;
      uStack_988 = uStack_418;
      uStack_990 = uStack_420;
      uStack_9e8 = uStack_478;
      uStack_9f0 = uStack_480;
      uStack_9d8 = uStack_468;
      uStack_9e0 = uStack_470;
      uStack_9c8 = uStack_458;
      lStack_9d0 = lStack_460;
      uStack_9b8 = uStack_448;
      uStack_9c0 = uStack_450;
      func_0x0001034e9320(&uStack_9f0);
      func_0x000107c610b4(auStack_848,&uStack_9f0,0x1a1);
      func_0x0001034e92ac(auStack_848);
      func_0x000107c610b4(&uStack_6a0,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_848,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_6a0;
      goto LAB_1034eaba4;
    }
  }
  uVar4 = 0x112f74ce8;
  puVar5 = &UNK_10dbd0d80;
  puVar2 = &uStack_410;
LAB_1034eaba4:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ead2c; end: 1034eaf5f;  */

/* WARNING: Removing unreachable block (ram,0x0001034eaed0) */

void FUN_1034ead2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 5) {
      puVar2 = auStack_578;
      FUN_1034e9368();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001035028d4();
  (*pcVar5)(&uStack_3d0,&UNK_110664720,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      FUN_1034e9368(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034eaf60; end: 1034eb21b;  */

/* WARNING: Removing unreachable block (ram,0x0001034eb16c) */

void FUN_1034eaf60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_f18 [424];
  undefined1 auStack_d70 [424];
  undefined1 auStack_bc8 [424];
  undefined1 auStack_a20 [416];
  undefined1 auStack_880 [416];
  undefined1 auStack_6e0 [416];
  undefined1 auStack_540 [416];
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  FUN_103502fdc(auStack_540);
  func_0x000107c610b4(auStack_6e0,auStack_540,0x1a0);
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_bc8,auStack_1f8,0x1a1);
    puVar3 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar3 == 6) {
      puVar3 = auStack_bc8;
      func_0x0001034e9378(puVar3);
      func_0x000107c610b4(auStack_880,auStack_6e0,0x1a0);
      func_0x000107c610b4(auStack_d70,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_d70,auStack_f18);
      FUN_10350317c(auStack_880,0x112f74cf0,&UNK_10dbd0d88);
      func_0x000107c610b4(auStack_f18,puVar3,0x1a0);
      func_0x000103503018(auStack_f18);
      puVar3 = auStack_6e0;
      func_0x000107c610b4(puVar3,auStack_f18,0x1a0);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502914();
  (*pcVar6)(auStack_6e0,&UNK_1106659d0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_a20,auStack_6e0,0x1a0);
    func_0x000107c610b4(auStack_880,auStack_6e0,0x1a0);
    iVar2 = (int)auStack_a20;
    func_0x000100d54ddc();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_bc8,auStack_a20,0x1a0);
        func_0x0001034a24c8(auStack_bc8,auStack_d70);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_bc8,auStack_a20,0x1a0);
        func_0x0001034a24c8(auStack_bc8,auStack_d70);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(auStack_6e0,0x112f74cf0,&UNK_10dbd0d88);
      func_0x000107c610b4(auStack_f18,auStack_880,0x1a0);
      func_0x0001034e937c(auStack_f18);
      func_0x000107c610b4(auStack_d70,auStack_f18,0x1a1);
      func_0x0001034e92ac(auStack_d70);
      func_0x000107c610b4(auStack_bc8,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_d70,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar3 = auStack_bc8;
      goto LAB_1034eb0e8;
    }
  }
  uVar4 = 0x112f74cf0;
  puVar5 = &UNK_10dbd0d88;
  puVar3 = auStack_6e0;
LAB_1034eb0e8:
  FUN_10350317c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1034eb21c; end: 1034eb4d7;  */

/* WARNING: Removing unreachable block (ram,0x0001034eb428) */

void FUN_1034eb21c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_e18 [424];
  undefined1 auStack_c70 [424];
  undefined1 auStack_ac8 [424];
  undefined1 auStack_920 [352];
  undefined1 auStack_7c0 [352];
  undefined1 auStack_660 [352];
  undefined1 auStack_500 [352];
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  func_0x00010350301c(auStack_500);
  func_0x000107c610b4(auStack_660,auStack_500,0x160);
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_ac8,auStack_1f8,0x1a1);
    puVar3 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar3 == 7) {
      puVar3 = auStack_ac8;
      func_0x0001034e9388(puVar3);
      func_0x000107c610b4(auStack_7c0,auStack_660,0x160);
      func_0x000107c610b4(auStack_c70,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_c70,auStack_e18);
      FUN_10350317c(auStack_7c0,0x112f74cf8,&UNK_10dbd0d90);
      func_0x000107c610b4(auStack_e18,puVar3,0x160);
      func_0x000103503050(auStack_e18);
      puVar3 = auStack_660;
      func_0x000107c610b4(puVar3,auStack_e18,0x160);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502954();
  (*pcVar6)(auStack_660,&UNK_110669598,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_920,auStack_660,0x160);
    func_0x000107c610b4(auStack_7c0,auStack_660,0x160);
    iVar2 = (int)auStack_920;
    func_0x000100d54df4();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_ac8,auStack_920,0x160);
        FUN_1034d09cc(auStack_ac8,auStack_c70);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_ac8,auStack_920,0x160);
        FUN_1034d09cc(auStack_ac8,auStack_c70);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(auStack_660,0x112f74cf8,&UNK_10dbd0d90);
      func_0x000107c610b4(auStack_e18,auStack_7c0,0x160);
      func_0x0001034e938c(auStack_e18);
      func_0x000107c610b4(auStack_c70,auStack_e18,0x1a1);
      func_0x0001034e92ac(auStack_c70);
      func_0x000107c610b4(auStack_ac8,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_c70,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar3 = auStack_ac8;
      goto LAB_1034eb3a4;
    }
  }
  uVar4 = 0x112f74cf8;
  puVar5 = &UNK_10dbd0d90;
  puVar3 = auStack_660;
LAB_1034eb3a4:
  FUN_10350317c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1034eb4d8; end: 1034eb70b;  */

/* WARNING: Removing unreachable block (ram,0x0001034eb67c) */

void FUN_1034eb4d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 8) {
      puVar2 = auStack_578;
      func_0x0001034e9398();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar5)(&uStack_3d0,&UNK_110666c90,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      func_0x0001034e939c(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034eb70c; end: 1034eb93f;  */

/* WARNING: Removing unreachable block (ram,0x0001034eb8b0) */

void FUN_1034eb70c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 9) {
      puVar2 = auStack_578;
      func_0x0001034e93a8();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001035029d4();
  (*pcVar5)(&uStack_3d0,&UNK_110669630,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      func_0x0001034e93ac(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034eb940; end: 1034ebb73;  */

/* WARNING: Removing unreachable block (ram,0x0001034ebae4) */

void FUN_1034eb940(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined1 auStack_720 [424];
  undefined8 auStack_578 [53];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 auStack_3b8 [424];
  undefined1 auStack_210 [432];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_210,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3b8;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_578,auStack_210,0x1a1);
    puVar3 = auStack_210;
    func_0x0001034e9264();
    if ((int)puVar3 == 10) {
      puVar2 = auStack_578;
      func_0x0001034e93b8();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      lVar4 = puVar2[2];
      func_0x000107c610b4(auStack_720,auStack_3b8,0x1a1);
      FUN_1034e9270(auStack_720,&uStack_8c8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503054(0,0,0);
      uStack_3d0 = uVar6;
      uStack_3c8 = uVar7;
      lStack_3c0 = lVar4;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000103502a14();
  (*pcVar5)(&uStack_3d0,&UNK_110665b00,puVar3,param_3,param_4);
  lVar4 = lStack_3c0;
  uVar7 = uStack_3c8;
  uVar6 = uStack_3d0;
  if (unaff_x21 == 0) {
    if (lStack_3c0 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_103503054(uStack_3d0,uStack_3c8,lStack_3c0);
      uStack_8c8 = uVar6;
      uStack_8c0 = uVar7;
      lStack_8b8 = lVar4;
      func_0x0001034e93bc(&uStack_8c8);
      func_0x000107c610b4(auStack_720,&uStack_8c8,0x1a1);
      func_0x0001034e92ac(auStack_720);
      func_0x000107c610b4(auStack_578,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_720,0x1a1);
      FUN_10350317c(auStack_578,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503054(uStack_3d0,uStack_3c8,lVar4);
  return;
}



/* Entry: 1034ebb74; end: 1034ebe5b;  */

/* WARNING: Removing unreachable block (ram,0x0001034ebda4) */

void FUN_1034ebb74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_7b8 [424];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lStack_3c0 = 1;
  uStack_3b8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_610,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0xb) {
      puVar3 = &uStack_610;
      func_0x0001034e93c8();
      uStack_418 = uStack_3d8;
      uStack_420 = uStack_3e0;
      uStack_408 = uStack_3c8;
      uStack_410 = uStack_3d0;
      uStack_3f8 = uStack_3b8;
      lStack_400 = lStack_3c0;
      uStack_3e8 = uStack_3a8;
      uStack_3f0 = uStack_3b0;
      func_0x000107c610b4(auStack_7b8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_7b8,&uStack_960);
      puVar2 = &uStack_420;
      FUN_10350317c(puVar2,0x112f74d00,&UNK_10dbd0d98);
      uStack_3b8 = puVar3[5];
      lStack_3c0 = puVar3[4];
      uStack_3a8 = puVar3[7];
      uStack_3b0 = puVar3[6];
      uStack_3d8 = puVar3[1];
      uStack_3e0 = *puVar3;
      uStack_3c8 = puVar3[3];
      uStack_3d0 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502a54();
  (*pcVar6)(&uStack_3e0,&UNK_110668e10,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_458 = uStack_3d8;
    uStack_460 = uStack_3e0;
    uStack_448 = uStack_3c8;
    uStack_450 = uStack_3d0;
    uStack_438 = uStack_3b8;
    lStack_440 = lStack_3c0;
    uStack_428 = uStack_3a8;
    uStack_430 = uStack_3b0;
    uStack_418 = uStack_3d8;
    uStack_420 = uStack_3e0;
    uStack_408 = uStack_3c8;
    uStack_410 = uStack_3d0;
    uStack_3f8 = uStack_3b8;
    lStack_400 = lStack_3c0;
    uStack_3e8 = uStack_3a8;
    uStack_3f0 = uStack_3b0;
    if (lStack_3c0 != 1) {
      if (iVar1 == 1) {
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e93d8(&uStack_610,auStack_7b8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e93d8(&uStack_610,auStack_7b8);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_3e0,0x112f74d00,&UNK_10dbd0d98);
      uStack_958 = uStack_418;
      uStack_960 = uStack_420;
      uStack_948 = uStack_408;
      uStack_950 = uStack_410;
      uStack_938 = uStack_3f8;
      lStack_940 = lStack_400;
      uStack_928 = uStack_3e8;
      uStack_930 = uStack_3f0;
      func_0x0001034e93cc(&uStack_960);
      func_0x000107c610b4(auStack_7b8,&uStack_960,0x1a1);
      func_0x0001034e92ac(auStack_7b8);
      func_0x000107c610b4(&uStack_610,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_7b8,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_610;
      goto LAB_1034ebd10;
    }
  }
  uVar4 = 0x112f74d00;
  puVar5 = &UNK_10dbd0d98;
  puVar2 = &uStack_3e0;
LAB_1034ebd10:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ebe5c; end: 1034ec127;  */

/* WARNING: Removing unreachable block (ram,0x0001034ec07c) */

void FUN_1034ebe5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  undefined1 auStack_740 [424];
  long alStack_598 [53];
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined1 auStack_3c0 [424];
  undefined1 auStack_218 [440];
  
  lStack_3d8 = 0;
  lStack_3e0 = 0;
  lStack_3c8 = 0;
  lStack_3d0 = 0;
  lStack_3e8 = 0;
  lStack_3f0 = 0;
  func_0x000107c610b4(auStack_3c0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_218,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3c0;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(alStack_598,auStack_218,0x1a1);
    puVar3 = auStack_218;
    func_0x0001034e9264();
    if ((int)puVar3 == 0xc) {
      plVar2 = alStack_598;
      FUN_1034e9414();
      lVar5 = *plVar2;
      lVar6 = plVar2[5];
      lVar10 = plVar2[2];
      lVar9 = plVar2[1];
      lVar8 = plVar2[4];
      lVar7 = plVar2[3];
      func_0x000107c610b4(auStack_740,auStack_3c0,0x1a1);
      FUN_1034e9270(auStack_740,&lStack_8e8);
      puVar3 = (undefined1 *)0x0;
      FUN_103503080(0,0,0,0,0,0);
      lStack_3f0 = lVar5;
      lStack_3e8 = lVar9;
      lStack_3e0 = lVar10;
      lStack_3d8 = lVar7;
      lStack_3d0 = lVar8;
      lStack_3c8 = lVar6;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502a94();
  (*pcVar4)(&lStack_3f0,&UNK_1106651a0,puVar3,param_3,param_4);
  lVar10 = lStack_3c8;
  lVar9 = lStack_3d0;
  lVar8 = lStack_3d8;
  lVar7 = lStack_3e0;
  lVar6 = lStack_3e8;
  lVar5 = lStack_3f0;
  if (unaff_x21 == 0) {
    if (lStack_3f0 != 0) {
      if (iVar1 == 1) {
        func_0x000107c61434(lStack_3f0);
        func_0x00010006c00c(lVar6,lVar7);
        FUN_103500a58(lVar8,lVar9,lVar10);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_3f0);
        func_0x00010006c00c(lVar6,lVar7);
        FUN_103500a58(lVar8,lVar9,lVar10);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103503080(lStack_3f0,lStack_3e8,lStack_3e0,lStack_3d8,lStack_3d0,lStack_3c8);
      lStack_8e8 = lVar5;
      lStack_8e0 = lVar6;
      lStack_8d8 = lVar7;
      lStack_8d0 = lVar8;
      lStack_8c8 = lVar9;
      lStack_8c0 = lVar10;
      FUN_1034e9414(&lStack_8e8);
      func_0x000107c610b4(auStack_740,&lStack_8e8,0x1a1);
      func_0x0001034e92ac(auStack_740);
      func_0x000107c610b4(alStack_598,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_740,0x1a1);
      FUN_10350317c(alStack_598,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    lVar5 = 0;
  }
  FUN_103503080(lVar5,lStack_3e8,lStack_3e0,lStack_3d8,lStack_3d0,lStack_3c8);
  return;
}



/* Entry: 1034ec128; end: 1034ec1bb;  */

void FUN_1034ec128(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ec1bc; end: 1034ec24f;  */

void FUN_1034ec1bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x240,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ec250; end: 1034ec2e3;  */

void FUN_1034ec250(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x270,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ec2e4; end: 1034ec377;  */

void FUN_1034ec2e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x2a0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ec378; end: 1034ec69b;  */

/* WARNING: Removing unreachable block (ram,0x0001034ec5d8) */

void FUN_1034ec378(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  long lStack_9a8;
  long lStack_9a0;
  long lStack_998;
  long lStack_990;
  long lStack_988;
  long lStack_980;
  long lStack_978;
  long lStack_970;
  long lStack_968;
  undefined1 auStack_818 [424];
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long alStack_3a0 [53];
  long alStack_1f8 [53];
  
  lStack_3a8 = 0;
  lStack_3b0 = 0;
  lStack_3b8 = 0;
  lStack_3c0 = 0;
  lStack_3c8 = 0;
  lStack_3d0 = 0;
  lStack_3d8 = 0;
  lStack_3e0 = 0;
  lStack_3e8 = 0;
  lStack_3f0 = 0;
  lStack_3f8 = 0;
  lStack_400 = 0;
  func_0x000107c610b4(alStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(alStack_1f8,param_1 + 0x20,0x1a1);
  plVar2 = alStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&lStack_670,alStack_1f8,0x1a1);
    plVar2 = alStack_1f8;
    func_0x0001034e9264();
    if ((int)plVar2 == 0xd) {
      plVar3 = &lStack_670;
      func_0x0001034e9424();
      lStack_458 = 0;
      lStack_460 = 0;
      lStack_448 = 0;
      lStack_450 = 0;
      lStack_438 = 0;
      lStack_440 = 0;
      lStack_428 = 0;
      lStack_430 = 0;
      lStack_418 = 0;
      lStack_420 = 0;
      lStack_408 = 0;
      lStack_410 = 0;
      func_0x000107c610b4(auStack_818,alStack_3a0,0x1a1);
      FUN_1034e9270(auStack_818,&lStack_9c0);
      plVar2 = &lStack_460;
      FUN_10350317c(plVar2,0x112f74d08,&UNK_10dbd0da0);
      lStack_3f8 = plVar3[1];
      lStack_400 = *plVar3;
      lStack_3e8 = plVar3[3];
      lStack_3f0 = plVar3[2];
      lStack_3b8 = plVar3[9];
      lStack_3c0 = plVar3[8];
      lStack_3a8 = plVar3[0xb];
      lStack_3b0 = plVar3[10];
      lStack_3d8 = plVar3[5];
      lStack_3e0 = plVar3[4];
      lStack_3c8 = plVar3[7];
      lStack_3d0 = plVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502ad4();
  (*pcVar6)(&lStack_400,&UNK_1106606f8,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_498 = lStack_3d8;
    lStack_4a0 = lStack_3e0;
    lStack_488 = lStack_3c8;
    lStack_490 = lStack_3d0;
    lStack_478 = lStack_3b8;
    lStack_480 = lStack_3c0;
    lStack_468 = lStack_3a8;
    lStack_470 = lStack_3b0;
    lStack_4b8 = lStack_3f8;
    lStack_4c0 = lStack_400;
    lStack_4a8 = lStack_3e8;
    lStack_4b0 = lStack_3f0;
    lStack_438 = lStack_3d8;
    lStack_440 = lStack_3e0;
    lStack_428 = lStack_3c8;
    lStack_430 = lStack_3d0;
    lStack_418 = lStack_3b8;
    lStack_420 = lStack_3c0;
    lStack_408 = lStack_3a8;
    lStack_410 = lStack_3b0;
    lStack_458 = lStack_3f8;
    lStack_460 = lStack_400;
    lStack_448 = lStack_3e8;
    lStack_450 = lStack_3f0;
    if (lStack_400 != 0) {
      if (iVar1 == 1) {
        lStack_648 = lStack_3d8;
        lStack_650 = lStack_3e0;
        lStack_638 = lStack_3c8;
        lStack_640 = lStack_3d0;
        lStack_628 = lStack_3b8;
        lStack_630 = lStack_3c0;
        lStack_618 = lStack_3a8;
        lStack_620 = lStack_3b0;
        lStack_668 = lStack_3f8;
        lStack_670 = lStack_400;
        lStack_658 = lStack_3e8;
        lStack_660 = lStack_3f0;
        func_0x0001034a5668(&lStack_670,auStack_818);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_648 = lStack_3d8;
        lStack_650 = lStack_3e0;
        lStack_638 = lStack_3c8;
        lStack_640 = lStack_3d0;
        lStack_628 = lStack_3b8;
        lStack_630 = lStack_3c0;
        lStack_618 = lStack_3a8;
        lStack_620 = lStack_3b0;
        lStack_668 = lStack_3f8;
        lStack_670 = lStack_400;
        lStack_658 = lStack_3e8;
        lStack_660 = lStack_3f0;
        func_0x0001034a5668(&lStack_670,auStack_818);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&lStack_400,0x112f74d08,&UNK_10dbd0da0);
      lStack_998 = lStack_438;
      lStack_9a0 = lStack_440;
      lStack_988 = lStack_428;
      lStack_990 = lStack_430;
      lStack_978 = lStack_418;
      lStack_980 = lStack_420;
      lStack_968 = lStack_408;
      lStack_970 = lStack_410;
      lStack_9b8 = lStack_458;
      lStack_9c0 = lStack_460;
      lStack_9a8 = lStack_448;
      lStack_9b0 = lStack_450;
      func_0x0001034e9428(&lStack_9c0);
      func_0x000107c610b4(auStack_818,&lStack_9c0,0x1a1);
      func_0x0001034e92ac(auStack_818);
      func_0x000107c610b4(&lStack_670,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_818,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      plVar2 = &lStack_670;
      goto LAB_1034ec4dc;
    }
  }
  uVar4 = 0x112f74d08;
  puVar5 = &UNK_10dbd0da0;
  plVar2 = &lStack_400;
LAB_1034ec4dc:
  FUN_10350317c(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ec69c; end: 1034ec957;  */

/* WARNING: Removing unreachable block (ram,0x0001034ec8a8) */

void FUN_1034ec69c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auStack_cd8 [424];
  undefined1 auStack_b30 [424];
  undefined1 auStack_988 [424];
  undefined1 auStack_7e0 [272];
  undefined1 auStack_6d0 [272];
  undefined1 auStack_5c0 [272];
  undefined1 auStack_4b0 [272];
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  FUN_1035030e0(auStack_4b0);
  func_0x000107c610b4(auStack_5c0,auStack_4b0,0x110);
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar3 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_988,auStack_1f8,0x1a1);
    puVar3 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar3 == 0xe) {
      puVar3 = auStack_988;
      func_0x0001034e9434(puVar3);
      func_0x000107c610b4(auStack_6d0,auStack_5c0,0x110);
      func_0x000107c610b4(auStack_b30,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_b30,auStack_cd8);
      FUN_10350317c(auStack_6d0,0x112f74d10,&UNK_10dbd0da8);
      func_0x000107c610b4(auStack_cd8,puVar3,0x110);
      func_0x000103503118(auStack_cd8);
      puVar3 = auStack_5c0;
      func_0x000107c610b4(puVar3,auStack_cd8,0x110);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502b14();
  (*pcVar6)(auStack_5c0,&UNK_11065e438,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c610b4(auStack_7e0,auStack_5c0,0x110);
    func_0x000107c610b4(auStack_6d0,auStack_5c0,0x110);
    iVar2 = (int)auStack_7e0;
    func_0x000100d54cec();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        func_0x000107c610b4(auStack_988,auStack_7e0,0x110);
        FUN_1034e9444(auStack_988,auStack_b30);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        func_0x000107c610b4(auStack_988,auStack_7e0,0x110);
        FUN_1034e9444(auStack_988,auStack_b30);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(auStack_5c0,0x112f74d10,&UNK_10dbd0da8);
      func_0x000107c610b4(auStack_cd8,auStack_6d0,0x110);
      func_0x0001034e9438(auStack_cd8);
      func_0x000107c610b4(auStack_b30,auStack_cd8,0x1a1);
      func_0x0001034e92ac(auStack_b30);
      func_0x000107c610b4(auStack_988,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_b30,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar3 = auStack_988;
      goto LAB_1034ec824;
    }
  }
  uVar4 = 0x112f74d10;
  puVar5 = &UNK_10dbd0da8;
  puVar3 = auStack_5c0;
LAB_1034ec824:
  FUN_10350317c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1034ec958; end: 1034ec9eb;  */

void FUN_1034ec958(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x368;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x368,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ec9ec; end: 1034eca7f;  */

void FUN_1034ec9ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x370;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x370,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034eca80; end: 1034ecddb;  */

/* WARNING: Removing unreachable block (ram,0x0001034ecd10) */

void FUN_1034eca80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_9f0;
  long lStack_9e8;
  long lStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  long lStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  long lStack_9a8;
  long lStack_9a0;
  long lStack_998;
  long lStack_990;
  undefined1 auStack_848 [424];
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long alStack_3a0 [53];
  long alStack_1f8 [53];
  
  lStack_3b0 = 0;
  lStack_3b8 = 0;
  lStack_3c0 = 0;
  lStack_3c8 = 0;
  lStack_3d0 = 0;
  lStack_3d8 = 0;
  lStack_3e0 = 0;
  lStack_3e8 = 0;
  lStack_3f0 = 0;
  lStack_3f8 = 0;
  lStack_400 = 0;
  lStack_408 = 0;
  lStack_410 = 0;
  func_0x000107c610b4(alStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(alStack_1f8,param_1 + 0x20,0x1a1);
  plVar2 = alStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&lStack_6a0,alStack_1f8,0x1a1);
    plVar2 = alStack_1f8;
    func_0x0001034e9264();
    if ((int)plVar2 == 0xf) {
      plVar3 = &lStack_6a0;
      FUN_1034e9480();
      lStack_478 = 0;
      lStack_480 = 0;
      lStack_468 = 0;
      lStack_470 = 0;
      lStack_458 = 0;
      lStack_460 = 0;
      lStack_448 = 0;
      lStack_450 = 0;
      lStack_438 = 0;
      lStack_440 = 0;
      lStack_428 = 0;
      lStack_430 = 0;
      lStack_420 = 0;
      func_0x000107c610b4(auStack_848,alStack_3a0,0x1a1);
      FUN_1034e9270(auStack_848,&lStack_9f0);
      plVar2 = &lStack_480;
      FUN_10350317c(plVar2,0x112f74d18,&UNK_10dbd0db0);
      lStack_3f8 = plVar3[3];
      lStack_400 = plVar3[2];
      lStack_3e8 = plVar3[5];
      lStack_3f0 = plVar3[4];
      lStack_408 = plVar3[1];
      lStack_410 = *plVar3;
      lStack_3c8 = plVar3[9];
      lStack_3d0 = plVar3[8];
      lStack_3b8 = plVar3[0xb];
      lStack_3c0 = plVar3[10];
      lStack_3b0 = plVar3[0xc];
      lStack_3d8 = plVar3[7];
      lStack_3e0 = plVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502b54();
  (*pcVar6)(&lStack_410,&UNK_110666108,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_4a8 = lStack_3c8;
    lStack_4b0 = lStack_3d0;
    lStack_498 = lStack_3b8;
    lStack_4a0 = lStack_3c0;
    lStack_490 = lStack_3b0;
    lStack_4e8 = lStack_408;
    lStack_4f0 = lStack_410;
    lStack_4d8 = lStack_3f8;
    lStack_4e0 = lStack_400;
    lStack_4b8 = lStack_3d8;
    lStack_4c0 = lStack_3e0;
    lStack_4c8 = lStack_3e8;
    lStack_4d0 = lStack_3f0;
    lStack_468 = lStack_3f8;
    lStack_470 = lStack_400;
    lStack_478 = lStack_408;
    lStack_480 = lStack_410;
    lStack_420 = lStack_3b0;
    lStack_458 = lStack_3e8;
    lStack_460 = lStack_3f0;
    lStack_448 = lStack_3d8;
    lStack_450 = lStack_3e0;
    lStack_428 = lStack_3b8;
    lStack_430 = lStack_3c0;
    lStack_438 = lStack_3c8;
    lStack_440 = lStack_3d0;
    if (lStack_410 != 0) {
      if (iVar1 == 1) {
        lStack_658 = lStack_3c8;
        lStack_660 = lStack_3d0;
        lStack_648 = lStack_3b8;
        lStack_650 = lStack_3c0;
        lStack_640 = lStack_3b0;
        lStack_698 = lStack_408;
        lStack_6a0 = lStack_410;
        lStack_688 = lStack_3f8;
        lStack_690 = lStack_400;
        lStack_678 = lStack_3e8;
        lStack_680 = lStack_3f0;
        lStack_668 = lStack_3d8;
        lStack_670 = lStack_3e0;
        FUN_1034e9490(&lStack_6a0,auStack_848);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_658 = lStack_3c8;
        lStack_660 = lStack_3d0;
        lStack_648 = lStack_3b8;
        lStack_650 = lStack_3c0;
        lStack_640 = lStack_3b0;
        lStack_698 = lStack_408;
        lStack_6a0 = lStack_410;
        lStack_688 = lStack_3f8;
        lStack_690 = lStack_400;
        lStack_678 = lStack_3e8;
        lStack_680 = lStack_3f0;
        lStack_668 = lStack_3d8;
        lStack_670 = lStack_3e0;
        FUN_1034e9490(&lStack_6a0,auStack_848);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&lStack_410,0x112f74d18,&UNK_10dbd0db0);
      lStack_9a8 = lStack_438;
      lStack_9b0 = lStack_440;
      lStack_998 = lStack_428;
      lStack_9a0 = lStack_430;
      lStack_990 = lStack_420;
      lStack_9e8 = lStack_478;
      lStack_9f0 = lStack_480;
      lStack_9d8 = lStack_468;
      lStack_9e0 = lStack_470;
      lStack_9c8 = lStack_458;
      lStack_9d0 = lStack_460;
      lStack_9b8 = lStack_448;
      lStack_9c0 = lStack_450;
      FUN_1034e9480(&lStack_9f0);
      func_0x000107c610b4(auStack_848,&lStack_9f0,0x1a1);
      func_0x0001034e92ac(auStack_848);
      func_0x000107c610b4(&lStack_6a0,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_848,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      plVar2 = &lStack_6a0;
      goto LAB_1034ecbf8;
    }
  }
  uVar4 = 0x112f74d18;
  puVar5 = &UNK_10dbd0db0;
  plVar2 = &lStack_410;
LAB_1034ecbf8:
  FUN_10350317c(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ecddc; end: 1034ed0c3;  */

/* WARNING: Removing unreachable block (ram,0x0001034ed00c) */

void FUN_1034ecddc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_7b8 [424];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lStack_3c0 = 1;
  uStack_3b8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_610,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x10) {
      puVar3 = &uStack_610;
      FUN_1034e94cc();
      uStack_418 = uStack_3d8;
      uStack_420 = uStack_3e0;
      uStack_408 = uStack_3c8;
      uStack_410 = uStack_3d0;
      uStack_3f8 = uStack_3b8;
      lStack_400 = lStack_3c0;
      uStack_3e8 = uStack_3a8;
      uStack_3f0 = uStack_3b0;
      func_0x000107c610b4(auStack_7b8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_7b8,&uStack_960);
      puVar2 = &uStack_420;
      FUN_10350317c(puVar2,0x112f74d20,&UNK_10dbda6b0);
      uStack_3b8 = puVar3[5];
      lStack_3c0 = puVar3[4];
      uStack_3a8 = puVar3[7];
      uStack_3b0 = puVar3[6];
      uStack_3d8 = puVar3[1];
      uStack_3e0 = *puVar3;
      uStack_3c8 = puVar3[3];
      uStack_3d0 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502b94();
  (*pcVar6)(&uStack_3e0,&UNK_110664ff0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_458 = uStack_3d8;
    uStack_460 = uStack_3e0;
    uStack_448 = uStack_3c8;
    uStack_450 = uStack_3d0;
    uStack_438 = uStack_3b8;
    lStack_440 = lStack_3c0;
    uStack_428 = uStack_3a8;
    uStack_430 = uStack_3b0;
    uStack_418 = uStack_3d8;
    uStack_420 = uStack_3e0;
    uStack_408 = uStack_3c8;
    uStack_410 = uStack_3d0;
    uStack_3f8 = uStack_3b8;
    lStack_400 = lStack_3c0;
    uStack_3e8 = uStack_3a8;
    uStack_3f0 = uStack_3b0;
    if (lStack_3c0 != 1) {
      if (iVar1 == 1) {
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e94dc(&uStack_610,auStack_7b8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e94dc(&uStack_610,auStack_7b8);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_3e0,0x112f74d20,&UNK_10dbda6b0);
      uStack_958 = uStack_418;
      uStack_960 = uStack_420;
      uStack_948 = uStack_408;
      uStack_950 = uStack_410;
      uStack_938 = uStack_3f8;
      lStack_940 = lStack_400;
      uStack_928 = uStack_3e8;
      uStack_930 = uStack_3f0;
      FUN_1034e94cc(&uStack_960);
      func_0x000107c610b4(auStack_7b8,&uStack_960,0x1a1);
      func_0x0001034e92ac(auStack_7b8);
      func_0x000107c610b4(&uStack_610,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_7b8,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_610;
      goto LAB_1034ecf78;
    }
  }
  uVar4 = 0x112f74d20;
  puVar5 = &UNK_10dbda6b0;
  puVar2 = &uStack_3e0;
LAB_1034ecf78:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ed0c4; end: 1034ed3ab;  */

/* WARNING: Removing unreachable block (ram,0x0001034ed2f4) */

void FUN_1034ed0c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 auStack_7b8 [424];
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lStack_3c0 = 1;
  uStack_3b8 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_610,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x11) {
      puVar3 = &uStack_610;
      FUN_1034e9518();
      uStack_418 = uStack_3d8;
      uStack_420 = uStack_3e0;
      uStack_408 = uStack_3c8;
      uStack_410 = uStack_3d0;
      uStack_3f8 = uStack_3b8;
      lStack_400 = lStack_3c0;
      uStack_3e8 = uStack_3a8;
      uStack_3f0 = uStack_3b0;
      func_0x000107c610b4(auStack_7b8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_7b8,&uStack_960);
      puVar2 = &uStack_420;
      FUN_10350317c(puVar2,0x112f74d28,&UNK_10dbd0dc0);
      uStack_3b8 = puVar3[5];
      lStack_3c0 = puVar3[4];
      uStack_3a8 = puVar3[7];
      uStack_3b0 = puVar3[6];
      uStack_3d8 = puVar3[1];
      uStack_3e0 = *puVar3;
      uStack_3c8 = puVar3[3];
      uStack_3d0 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502bd4();
  (*pcVar6)(&uStack_3e0,&UNK_110666ae0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_458 = uStack_3d8;
    uStack_460 = uStack_3e0;
    uStack_448 = uStack_3c8;
    uStack_450 = uStack_3d0;
    uStack_438 = uStack_3b8;
    lStack_440 = lStack_3c0;
    uStack_428 = uStack_3a8;
    uStack_430 = uStack_3b0;
    uStack_418 = uStack_3d8;
    uStack_420 = uStack_3e0;
    uStack_408 = uStack_3c8;
    uStack_410 = uStack_3d0;
    uStack_3f8 = uStack_3b8;
    lStack_400 = lStack_3c0;
    uStack_3e8 = uStack_3a8;
    uStack_3f0 = uStack_3b0;
    if (lStack_3c0 != 1) {
      if (iVar1 == 1) {
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e9528(&uStack_610,auStack_7b8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_608 = uStack_3d8;
        uStack_610 = uStack_3e0;
        uStack_5f8 = uStack_3c8;
        uStack_600 = uStack_3d0;
        uStack_5e8 = uStack_3b8;
        lStack_5f0 = lStack_3c0;
        uStack_5d8 = uStack_3a8;
        uStack_5e0 = uStack_3b0;
        FUN_1034e9528(&uStack_610,auStack_7b8);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_3e0,0x112f74d28,&UNK_10dbd0dc0);
      uStack_958 = uStack_418;
      uStack_960 = uStack_420;
      uStack_948 = uStack_408;
      uStack_950 = uStack_410;
      uStack_938 = uStack_3f8;
      lStack_940 = lStack_400;
      uStack_928 = uStack_3e8;
      uStack_930 = uStack_3f0;
      FUN_1034e9518(&uStack_960);
      func_0x000107c610b4(auStack_7b8,&uStack_960,0x1a1);
      func_0x0001034e92ac(auStack_7b8);
      func_0x000107c610b4(&uStack_610,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_7b8,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_610;
      goto LAB_1034ed260;
    }
  }
  uVar4 = 0x112f74d28;
  puVar5 = &UNK_10dbd0dc0;
  puVar2 = &uStack_3e0;
LAB_1034ed260:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ed3ac; end: 1034ed8a7;  */

/* WARNING: Removing unreachable block (ram,0x0001034ed7c0) */

void FUN_1034ed3ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined1 auStack_9f8 [424];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  puVar5 = &uStack_ba0;
  func_0x00010350311c(&uStack_460);
  uStack_498 = uStack_3d8;
  uStack_4a0 = uStack_3e0;
  uStack_488 = uStack_3c8;
  uStack_490 = uStack_3d0;
  uStack_478 = uStack_3b8;
  uStack_480 = uStack_3c0;
  uStack_468 = uStack_3a8;
  uStack_470 = uStack_3b0;
  uStack_4d8 = uStack_418;
  uStack_4e0 = uStack_420;
  uStack_4c8 = uStack_408;
  uStack_4d0 = uStack_410;
  uStack_4b8 = uStack_3f8;
  uStack_4c0 = uStack_400;
  uStack_4a8 = uStack_3e8;
  uStack_4b0 = uStack_3f0;
  uStack_518 = uStack_458;
  uStack_520 = uStack_460;
  uStack_508 = uStack_448;
  uStack_510 = uStack_450;
  uStack_4f8 = uStack_438;
  uStack_500 = uStack_440;
  uStack_4e8 = uStack_428;
  uStack_4f0 = uStack_430;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_850,auStack_1f8,0x1a1);
    puVar3 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar3 == 0x12) {
      puVar4 = &uStack_850;
      FUN_1034e9564();
      uStack_558 = uStack_498;
      uStack_560 = uStack_4a0;
      uStack_548 = uStack_488;
      uStack_550 = uStack_490;
      uStack_538 = uStack_478;
      uStack_540 = uStack_480;
      uStack_528 = uStack_468;
      uStack_530 = uStack_470;
      uStack_598 = uStack_4d8;
      uStack_5a0 = uStack_4e0;
      uStack_588 = uStack_4c8;
      uStack_590 = uStack_4d0;
      uStack_578 = uStack_4b8;
      uStack_580 = uStack_4c0;
      uStack_568 = uStack_4a8;
      uStack_570 = uStack_4b0;
      uStack_5d8 = uStack_518;
      uStack_5e0 = uStack_520;
      uStack_5c8 = uStack_508;
      uStack_5d0 = uStack_510;
      uStack_5b8 = uStack_4f8;
      uStack_5c0 = uStack_500;
      uStack_5a8 = uStack_4e8;
      uStack_5b0 = uStack_4f0;
      func_0x000107c610b4(auStack_9f8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_9f8,&uStack_ba0);
      FUN_10350317c(&uStack_5e0,0x112f74d30,&UNK_10dbd4750);
      uStack_b78 = puVar4[5];
      uStack_b80 = puVar4[4];
      uStack_b68 = puVar4[7];
      uStack_b70 = puVar4[6];
      uStack_b98 = puVar4[1];
      uStack_ba0 = *puVar4;
      uStack_b88 = puVar4[3];
      uStack_b90 = puVar4[2];
      uStack_b38 = puVar4[0xd];
      uStack_b40 = puVar4[0xc];
      uStack_b28 = puVar4[0xf];
      uStack_b30 = puVar4[0xe];
      uStack_b58 = puVar4[9];
      uStack_b60 = puVar4[8];
      uStack_b48 = puVar4[0xb];
      uStack_b50 = puVar4[10];
      uStack_af8 = puVar4[0x15];
      uStack_b00 = puVar4[0x14];
      uStack_ae8 = puVar4[0x17];
      uStack_af0 = puVar4[0x16];
      uStack_b18 = puVar4[0x11];
      uStack_b20 = puVar4[0x10];
      uStack_b08 = puVar4[0x13];
      uStack_b10 = puVar4[0x12];
      func_0x00010350313c(&uStack_ba0);
      uStack_498 = uStack_b18;
      uStack_4a0 = uStack_b20;
      uStack_488 = uStack_b08;
      uStack_490 = uStack_b10;
      uStack_478 = uStack_af8;
      uStack_480 = uStack_b00;
      uStack_468 = uStack_ae8;
      uStack_470 = uStack_af0;
      uStack_4d8 = uStack_b58;
      uStack_4e0 = uStack_b60;
      uStack_4c8 = uStack_b48;
      uStack_4d0 = uStack_b50;
      uStack_4b8 = uStack_b38;
      uStack_4c0 = uStack_b40;
      uStack_4a8 = uStack_b28;
      uStack_4b0 = uStack_b30;
      uStack_518 = uStack_b98;
      uStack_520 = uStack_ba0;
      uStack_508 = uStack_b88;
      uStack_510 = uStack_b90;
      uStack_4f8 = uStack_b78;
      uStack_500 = uStack_b80;
      uStack_4e8 = uStack_b68;
      uStack_4f0 = uStack_b70;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  func_0x000103502c14();
  (*pcVar8)(&uStack_520,&UNK_110668c48,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_618 = uStack_498;
    uStack_620 = uStack_4a0;
    uStack_608 = uStack_488;
    uStack_610 = uStack_490;
    uStack_5f8 = uStack_478;
    uStack_600 = uStack_480;
    uStack_5e8 = uStack_468;
    uStack_5f0 = uStack_470;
    uStack_658 = uStack_4d8;
    uStack_660 = uStack_4e0;
    uStack_648 = uStack_4c8;
    uStack_650 = uStack_4d0;
    uStack_638 = uStack_4b8;
    uStack_640 = uStack_4c0;
    uStack_628 = uStack_4a8;
    uStack_630 = uStack_4b0;
    uStack_698 = uStack_518;
    uStack_6a0 = uStack_520;
    uStack_688 = uStack_508;
    uStack_690 = uStack_510;
    uStack_678 = uStack_4f8;
    uStack_680 = uStack_500;
    uStack_668 = uStack_4e8;
    uStack_670 = uStack_4f0;
    uStack_558 = uStack_498;
    uStack_560 = uStack_4a0;
    uStack_548 = uStack_488;
    uStack_550 = uStack_490;
    uStack_538 = uStack_478;
    uStack_540 = uStack_480;
    uStack_528 = uStack_468;
    uStack_530 = uStack_470;
    uStack_598 = uStack_4d8;
    uStack_5a0 = uStack_4e0;
    uStack_588 = uStack_4c8;
    uStack_590 = uStack_4d0;
    uStack_578 = uStack_4b8;
    uStack_580 = uStack_4c0;
    uStack_568 = uStack_4a8;
    uStack_570 = uStack_4b0;
    uStack_5d8 = uStack_518;
    uStack_5e0 = uStack_520;
    uStack_5c8 = uStack_508;
    uStack_5d0 = uStack_510;
    uStack_5b8 = uStack_4f8;
    uStack_5c0 = uStack_500;
    uStack_5a8 = uStack_4e8;
    uStack_5b0 = uStack_4f0;
    iVar1 = (int)&uStack_6a0;
    func_0x000100d54ddc();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_7b8 = uStack_608;
        uStack_7c0 = uStack_610;
        uStack_7a8 = uStack_5f8;
        uStack_7b0 = uStack_600;
        uStack_798 = uStack_5e8;
        uStack_7a0 = uStack_5f0;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_848 = uStack_698;
        uStack_850 = uStack_6a0;
        uStack_838 = uStack_688;
        uStack_840 = uStack_690;
        uStack_828 = uStack_678;
        uStack_830 = uStack_680;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        func_0x0001034a6864(&uStack_850,auStack_9f8);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_7b8 = uStack_608;
        uStack_7c0 = uStack_610;
        uStack_7a8 = uStack_5f8;
        uStack_7b0 = uStack_600;
        uStack_798 = uStack_5e8;
        uStack_7a0 = uStack_5f0;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_848 = uStack_698;
        uStack_850 = uStack_6a0;
        uStack_838 = uStack_688;
        uStack_840 = uStack_690;
        uStack_828 = uStack_678;
        uStack_830 = uStack_680;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        func_0x0001034a6864(&uStack_850,auStack_9f8);
        (*pcVar8)(param_3,param_4);
      }
      FUN_10350317c(&uStack_520,0x112f74d30,&UNK_10dbd4750);
      uStack_b18 = uStack_558;
      uStack_b20 = uStack_560;
      uStack_b08 = uStack_548;
      uStack_b10 = uStack_550;
      uStack_af8 = uStack_538;
      uStack_b00 = uStack_540;
      uStack_ae8 = uStack_528;
      uStack_af0 = uStack_530;
      uStack_b58 = uStack_598;
      uStack_b60 = uStack_5a0;
      uStack_b48 = uStack_588;
      uStack_b50 = uStack_590;
      uStack_b38 = uStack_578;
      uStack_b40 = uStack_580;
      uStack_b28 = uStack_568;
      uStack_b30 = uStack_570;
      uStack_b98 = uStack_5d8;
      uStack_ba0 = uStack_5e0;
      uStack_b88 = uStack_5c8;
      uStack_b90 = uStack_5d0;
      uStack_b78 = uStack_5b8;
      uStack_b80 = uStack_5c0;
      uStack_b68 = uStack_5a8;
      uStack_b70 = uStack_5b0;
      FUN_1034e9564(&uStack_ba0);
      func_0x000107c610b4(auStack_9f8,&uStack_ba0,0x1a1);
      func_0x0001034e92ac(auStack_9f8);
      func_0x000107c610b4(&uStack_850,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_9f8,0x1a1);
      uVar6 = 0x112f73c68;
      puVar7 = &UNK_10dbcfb78;
      puVar5 = &uStack_850;
      goto LAB_1034ed6cc;
    }
  }
  uVar6 = 0x112f74d30;
  puVar7 = &UNK_10dbd4750;
  puVar5 = &uStack_520;
LAB_1034ed6cc:
  FUN_10350317c(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 1034ed8a8; end: 1034edbc7;  */

/* WARNING: Removing unreachable block (ram,0x0001034edb08) */

void FUN_1034ed8a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 auStack_7e8 [424];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  lStack_3d0 = 1;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_640,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x13) {
      puVar3 = &uStack_640;
      func_0x0001034e9574();
      uStack_418 = uStack_3c8;
      lStack_420 = lStack_3d0;
      uStack_408 = uStack_3b8;
      uStack_410 = uStack_3c0;
      uStack_400 = uStack_3b0;
      uStack_428 = uStack_3d8;
      uStack_430 = uStack_3e0;
      uStack_438 = uStack_3e8;
      uStack_440 = uStack_3f0;
      func_0x000107c610b4(auStack_7e8,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_7e8,&uStack_990);
      puVar2 = &uStack_440;
      FUN_10350317c(puVar2,0x112f74d38,&UNK_10dbd0dd0);
      uStack_3e8 = puVar3[1];
      uStack_3f0 = *puVar3;
      uStack_3c8 = puVar3[5];
      lStack_3d0 = puVar3[4];
      uStack_3b8 = puVar3[7];
      uStack_3c0 = puVar3[6];
      uStack_3b0 = puVar3[8];
      uStack_3d8 = puVar3[3];
      uStack_3e0 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502c54();
  (*pcVar6)(&uStack_3f0,&UNK_11065f8d8,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_468 = uStack_3c8;
    lStack_470 = lStack_3d0;
    uStack_458 = uStack_3b8;
    uStack_460 = uStack_3c0;
    uStack_450 = uStack_3b0;
    uStack_478 = uStack_3d8;
    uStack_480 = uStack_3e0;
    uStack_488 = uStack_3e8;
    uStack_490 = uStack_3f0;
    uStack_418 = uStack_3c8;
    lStack_420 = lStack_3d0;
    uStack_408 = uStack_3b8;
    uStack_410 = uStack_3c0;
    uStack_400 = uStack_3b0;
    uStack_428 = uStack_3d8;
    uStack_430 = uStack_3e0;
    uStack_438 = uStack_3e8;
    uStack_440 = uStack_3f0;
    if (lStack_3d0 != 1) {
      if (iVar1 == 1) {
        uStack_618 = uStack_3c8;
        lStack_620 = lStack_3d0;
        uStack_608 = uStack_3b8;
        uStack_610 = uStack_3c0;
        uStack_600 = uStack_3b0;
        uStack_638 = uStack_3e8;
        uStack_640 = uStack_3f0;
        uStack_628 = uStack_3d8;
        uStack_630 = uStack_3e0;
        FUN_1034e9584(&uStack_640,auStack_7e8);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_618 = uStack_3c8;
        lStack_620 = lStack_3d0;
        uStack_608 = uStack_3b8;
        uStack_610 = uStack_3c0;
        uStack_600 = uStack_3b0;
        uStack_638 = uStack_3e8;
        uStack_640 = uStack_3f0;
        uStack_628 = uStack_3d8;
        uStack_630 = uStack_3e0;
        FUN_1034e9584(&uStack_640,auStack_7e8);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_3f0,0x112f74d38,&UNK_10dbd0dd0);
      uStack_968 = uStack_418;
      lStack_970 = lStack_420;
      uStack_958 = uStack_408;
      uStack_960 = uStack_410;
      uStack_950 = uStack_400;
      uStack_988 = uStack_438;
      uStack_990 = uStack_440;
      uStack_978 = uStack_428;
      uStack_980 = uStack_430;
      func_0x0001034e9578(&uStack_990);
      func_0x000107c610b4(auStack_7e8,&uStack_990,0x1a1);
      func_0x0001034e92ac(auStack_7e8);
      func_0x000107c610b4(&uStack_640,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_7e8,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_640;
      goto LAB_1034eda64;
    }
  }
  uVar4 = 0x112f74d38;
  puVar5 = &UNK_10dbd0dd0;
  puVar2 = &uStack_3f0;
LAB_1034eda64:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034edbc8; end: 1034edc5b;  */

void FUN_1034edbc8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x378;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015c9d14();
  (*pcVar2)(param_2 + 0x378,&UNK_11065dc68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034edc5c; end: 1034edcef;  */

void FUN_1034edc5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x388;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x388,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034edcf0; end: 1034ee043;  */

/* WARNING: Removing unreachable block (ram,0x0001034edf7c) */

void FUN_1034edcf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 auStack_818 [424];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_3e0 = 1;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_670,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x14) {
      puVar3 = &uStack_670;
      FUN_1034e95c0();
      uStack_438 = uStack_3d8;
      lStack_440 = lStack_3e0;
      uStack_428 = uStack_3c8;
      uStack_430 = uStack_3d0;
      uStack_418 = uStack_3b8;
      uStack_420 = uStack_3c0;
      uStack_410 = uStack_3b0;
      uStack_458 = uStack_3f8;
      uStack_460 = uStack_400;
      uStack_448 = uStack_3e8;
      uStack_450 = uStack_3f0;
      func_0x000107c610b4(auStack_818,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_818,&uStack_9c0);
      puVar2 = &uStack_460;
      FUN_10350317c(puVar2,0x112f74d40,&UNK_10dbd0dd8);
      uStack_3f8 = puVar3[1];
      uStack_400 = *puVar3;
      uStack_3e8 = puVar3[3];
      uStack_3f0 = puVar3[2];
      uStack_3c8 = puVar3[7];
      uStack_3d0 = puVar3[6];
      uStack_3b8 = puVar3[9];
      uStack_3c0 = puVar3[8];
      uStack_3b0 = puVar3[10];
      uStack_3d8 = puVar3[5];
      lStack_3e0 = puVar3[4];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502ed4();
  (*pcVar6)(&uStack_400,&UNK_110660ea0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_498 = uStack_3d8;
    lStack_4a0 = lStack_3e0;
    uStack_488 = uStack_3c8;
    uStack_490 = uStack_3d0;
    uStack_478 = uStack_3b8;
    uStack_480 = uStack_3c0;
    uStack_470 = uStack_3b0;
    uStack_4b8 = uStack_3f8;
    uStack_4c0 = uStack_400;
    uStack_4a8 = uStack_3e8;
    uStack_4b0 = uStack_3f0;
    uStack_438 = uStack_3d8;
    lStack_440 = lStack_3e0;
    uStack_428 = uStack_3c8;
    uStack_430 = uStack_3d0;
    uStack_418 = uStack_3b8;
    uStack_420 = uStack_3c0;
    uStack_410 = uStack_3b0;
    uStack_458 = uStack_3f8;
    uStack_460 = uStack_400;
    uStack_448 = uStack_3e8;
    uStack_450 = uStack_3f0;
    if (lStack_3e0 != 1) {
      if (iVar1 == 1) {
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e95d0(&uStack_670,auStack_818);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e95d0(&uStack_670,auStack_818);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_400,0x112f74d40,&UNK_10dbd0dd8);
      uStack_998 = uStack_438;
      lStack_9a0 = lStack_440;
      uStack_988 = uStack_428;
      uStack_990 = uStack_430;
      uStack_978 = uStack_418;
      uStack_980 = uStack_420;
      uStack_970 = uStack_410;
      uStack_9b8 = uStack_458;
      uStack_9c0 = uStack_460;
      uStack_9a8 = uStack_448;
      uStack_9b0 = uStack_450;
      FUN_1034e95c0(&uStack_9c0);
      func_0x000107c610b4(auStack_818,&uStack_9c0,0x1a1);
      func_0x0001034e92ac(auStack_818);
      func_0x000107c610b4(&uStack_670,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_818,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_670;
      goto LAB_1034edec8;
    }
  }
  uVar4 = 0x112f74d40;
  puVar5 = &UNK_10dbd0dd8;
  puVar2 = &uStack_400;
LAB_1034edec8:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ee044; end: 1034ee0d7;  */

void FUN_1034ee044(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x3a0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ee0d8; end: 1034ee16b;  */

void FUN_1034ee0d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x3a8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ee16c; end: 1034ee1ff;  */

void FUN_1034ee16c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502e94();
  (*pcVar2)(param_2 + 0x3c0,&UNK_11065f390,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ee200; end: 1034ee3fb;  */

/* WARNING: Removing unreachable block (ram,0x0001034ee354) */

void FUN_1034ee200(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_8b8;
  ulong uStack_8b0;
  undefined1 auStack_710 [424];
  undefined8 auStack_568 [53];
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  undefined1 auStack_3b0 [424];
  undefined1 auStack_208 [424];
  
  uStack_3b8 = 0xf000000000000000;
  uStack_3c0 = 0;
  func_0x000107c610b4(auStack_3b0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_208,param_1 + 0x20,0x1a1);
  puVar5 = auStack_3b0;
  FUN_1034e9250();
  iVar3 = (int)puVar5;
  if (iVar3 != 1) {
    func_0x000107c610b4(auStack_568,auStack_208,0x1a1);
    puVar5 = auStack_208;
    func_0x0001034e9264();
    if ((int)puVar5 == 0x15) {
      puVar4 = auStack_568;
      FUN_1034e960c();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      func_0x000107c610b4(auStack_710,auStack_3b0,0x1a1);
      FUN_1034e9270(auStack_710,&uStack_8b8);
      puVar5 = (undefined1 *)0x0;
      func_0x000103503140(0,0xf000000000000000);
      uStack_3c0 = uVar1;
      uStack_3b8 = uVar2;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502e54();
  (*pcVar6)(&uStack_3c0,&UNK_1106629a0,puVar5,param_3,param_4);
  uVar2 = uStack_3b8;
  uVar1 = uStack_3c0;
  if ((unaff_x21 == 0) && (uStack_3b8 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000103503140(uStack_3c0,uStack_3b8);
    uStack_8b8 = uVar1;
    uStack_8b0 = uVar2;
    FUN_1034e960c(&uStack_8b8);
    func_0x000107c610b4(auStack_710,&uStack_8b8,0x1a1);
    func_0x0001034e92ac(auStack_710);
    func_0x000107c610b4(auStack_568,param_1 + 0x20,0x1a1);
    func_0x000107c610b4(param_1 + 0x20,auStack_710,0x1a1);
    FUN_10350317c(auStack_568,0x112f73c68,&UNK_10dbcfb78);
  }
  else {
    func_0x000103503140(uStack_3c0,uStack_3b8);
  }
  return;
}



/* Entry: 1034ee3fc; end: 1034ee48f;  */

void FUN_1034ee3fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x418;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x418,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


