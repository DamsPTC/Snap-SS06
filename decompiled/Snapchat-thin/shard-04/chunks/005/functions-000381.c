/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10365dfc4; end: 10365e037;  */

void FUN_10365dfc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f737d8;
  func_0x0001000285a8(0x112f737d8,&UNK_10dbcf128);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10365e038; end: 10365e043;  */

void FUN_10365e038(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10365e044; end: 10365e0ef;  */

void FUN_10365e044(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10365e0f0; end: 10365e103;  */

bool FUN_10365e0f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10365e104; end: 10365e24b;  */

void FUN_10365e104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x10) = param_1;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar5 + 0x20) = param_3;
  func_0x000100d5753c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10365e24c; end: 10365e2bb;  */

undefined8 FUN_10365e24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x40,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x50) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x40);
  }
  func_0x000100d57520();
  return uVar1;
}



/* Entry: 10365e2bc; end: 10365e35f;  */

void FUN_10365e2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x40,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  uVar1 = *(undefined8 *)(lVar5 + 0x48);
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(lVar5 + 0x40) = param_1;
  *(undefined8 *)(lVar5 + 0x48) = param_2;
  *(undefined8 *)(lVar5 + 0x50) = param_3;
  func_0x000100d5753c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10365e360; end: 10365e3eb;  */

bool FUN_10365e360(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x40,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(ulong *)(param_3 + 0x50);
  func_0x000100d57520(uVar1,uVar2,uVar3);
  func_0x000100d5753c(uVar1,uVar2,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100d5753c(0,0,0xf000000000000000);
  }
  return uVar3 >> 0x3c < 0xf;
}



/* Entry: 10365e3ec; end: 10365e48f;  */

void FUN_10365e3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x58,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(lVar5 + 0x58) = param_1;
  *(undefined8 *)(lVar5 + 0x60) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x000100d5753c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10365e490; end: 10365e4ff;  */

undefined4 FUN_10365e490(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x70,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x80) >> 0x3c < 0xf) {
    uVar1 = (undefined4)*(undefined8 *)(param_3 + 0x70);
  }
  func_0x000100d57520();
  return uVar1;
}



/* Entry: 10365e500; end: 10365e5a7;  */

void FUN_10365e500(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x70,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar1 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  *(ulong *)(lVar5 + 0x70) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x78) = param_2;
  *(undefined8 *)(lVar5 + 0x80) = param_3;
  func_0x000100d5753c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10365e5a8; end: 10365e633;  */

bool FUN_10365e5a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x70,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x70);
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  uVar3 = *(ulong *)(param_3 + 0x80);
  func_0x000100d57520(uVar1,uVar2,uVar3);
  func_0x000100d5753c(uVar1,uVar2,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100d5753c(0,0,0xf000000000000000);
  }
  return uVar3 >> 0x3c < 0xf;
}



/* Entry: 10365e634; end: 10365e6db;  */

void FUN_10365e634(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x88,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x88);
  uVar1 = *(undefined8 *)(lVar5 + 0x90);
  uVar4 = *(undefined8 *)(lVar5 + 0x98);
  *(ulong *)(lVar5 + 0x88) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x90) = param_2;
  *(undefined8 *)(lVar5 + 0x98) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10365e6dc; end: 10365e7df;  */

bool FUN_10365e6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x88,auStack_48,0,0);
  uVar1 = *(ulong *)(param_3 + 0x88);
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  func_0x000101541464(uVar1,uVar2,uVar3);
  func_0x000101556278(uVar1,uVar2,uVar3);
  if ((uVar1 & 0xff) != 2) {
    func_0x000101556278(2,0,0);
  }
  return (uVar1 & 0xff) != 2;
}



/* Entry: 10365e7e0; end: 10365eb2b;  */

void FUN_10365e7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0xe8,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0xe8);
  uVar2 = *(undefined8 *)(lVar6 + 0xf0);
  uVar1 = *(undefined8 *)(lVar6 + 0xf8);
  uVar3 = *(undefined8 *)(lVar6 + 0x100);
  *(undefined8 *)(lVar6 + 0xe8) = param_1;
  *(undefined8 *)(lVar6 + 0xf0) = param_2;
  *(undefined8 *)(lVar6 + 0xf8) = param_3;
  *(undefined8 *)(lVar6 + 0x100) = param_4;
  func_0x000101597ae4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 10365eb2c; end: 10365eb9f;  */

undefined8 FUN_10365eb2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x230,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x240) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x230);
  }
  func_0x000100d57520();
  return uVar1;
}



/* Entry: 10365eba0; end: 10365ec4b;  */

void FUN_10365eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x230,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x230);
  uVar3 = *(undefined8 *)(lVar5 + 0x238);
  uVar4 = *(undefined8 *)(lVar5 + 0x240);
  *(undefined8 *)(lVar5 + 0x230) = param_1;
  *(undefined8 *)(lVar5 + 0x238) = param_2;
  *(undefined8 *)(lVar5 + 0x240) = param_3;
  func_0x000100d5753c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10365ec4c; end: 10365ecdb;  */

bool FUN_10365ec4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x230,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x230);
  uVar3 = *(undefined8 *)(param_3 + 0x238);
  uVar1 = *(ulong *)(param_3 + 0x240);
  func_0x000100d57520(uVar2,uVar3,uVar1);
  func_0x000100d5753c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5753c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 10365ecdc; end: 10365f043;  */

void FUN_10365ecdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x248,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x248);
  uVar3 = *(undefined8 *)(lVar5 + 0x250);
  uVar4 = *(undefined8 *)(lVar5 + 600);
  *(undefined8 *)(lVar5 + 0x248) = param_1;
  *(undefined8 *)(lVar5 + 0x250) = param_2;
  *(undefined8 *)(lVar5 + 600) = param_3;
  func_0x000100d5753c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10365f044; end: 10365f0cf;  */

void FUN_10365f044(undefined8 param_1)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x318,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x318);
  *(undefined8 *)(lVar3 + 0x318) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10365f0d0; end: 10365f38f;  */

void FUN_10365f0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 800,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 800);
  uVar3 = *(undefined8 *)(lVar5 + 0x328);
  uVar4 = *(undefined8 *)(lVar5 + 0x330);
  *(undefined8 *)(lVar5 + 800) = param_1;
  *(undefined8 *)(lVar5 + 0x328) = param_2;
  *(undefined8 *)(lVar5 + 0x330) = param_3;
  func_0x000100d5753c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10365f390; end: 10365f3eb;  */

undefined8 FUN_10365f390(void)

{
  if (lRam0000000112f82698 != -1) {
    func_0x000107c61568(0x112f82698,FUN_10365f51c);
  }
  func_0x000107c6157c(uRam0000000112f826a0);
  return 0;
}



/* Entry: 10365f3ec; end: 10365f433;  */

void FUN_10365f3ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf40a0,0x3b,2);
  uRam000000011380b1c8 = uStack_38;
  uRam000000011380b1c0 = uStack_40;
  uRam000000011380b1d8 = uStack_28;
  uRam000000011380b1d0 = uStack_30;
  uRam000000011380b1e8 = uStack_18;
  uRam000000011380b1e0 = uStack_20;
  return;
}



/* Entry: 10365f434; end: 10365f4d3;  */

/* WARNING: Possible PIC construction at 0x00010365f480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010365f490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010365f484) */
/* WARNING: Removing unreachable block (ram,0x00010365f494) */

void FUN_10365f434(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f826a8 != -1) {
    func_0x000107c61568(0x112f826a8,FUN_10365f3ec);
  }
  uVar5 = uRam000000011380b1e8;
  uVar4 = uRam000000011380b1e0;
  uVar3 = uRam000000011380b1d8;
  uVar2 = uRam000000011380b1d0;
  uVar1 = uRam000000011380b1c8;
  *param_1 = uRam000000011380b1c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10365f4d4; end: 10365f51b;  */

void FUN_10365f4d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf3ca0,0x3f6,2);
  uRam000000011380b1f8 = uStack_38;
  uRam000000011380b1f0 = uStack_40;
  uRam000000011380b208 = uStack_28;
  uRam000000011380b200 = uStack_30;
  uRam000000011380b218 = uStack_18;
  uRam000000011380b210 = uStack_20;
  return;
}



/* Entry: 10365f51c; end: 10365f557;  */

void FUN_10365f51c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103666870();
  func_0x000107c613fc();
  FUN_10365f558();
  uRam0000000112f826a0 = uVar1;
  return;
}



/* Entry: 10365f558; end: 10365f6a3;  */

void FUN_10365f558(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 2;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x168) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x198) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x228) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 600) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x288) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 2;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x318) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x348) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  return;
}



/* Entry: 10365f6a4; end: 103660733;  */

void FUN_10365f6a4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar14 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  puVar9 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *puVar4 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 2;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xf000000000000000;
  puVar6 = (undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0xf000000000000000;
  puVar7 = (undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *puVar7 = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 2;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x310) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x318) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x348) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 2;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar14,auStack_98,1,0);
  uVar17 = *puVar14;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar14 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x28,auStack_b0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar9,auStack_c8,1,0);
  uVar17 = *puVar9;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar9 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x40,auStack_e0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar2,auStack_f8,1,0);
  uVar17 = *puVar2;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar2 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x58,auStack_110,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar3,auStack_128,1,0);
  uVar17 = *puVar3;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar3 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x70,auStack_140,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar4,auStack_158,1,0);
  uVar17 = *puVar4;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  *puVar4 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x88,auStack_170,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x90);
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(unaff_x20 + 0x88,auStack_188,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar12;
  func_0x000101541464(uVar10,uVar13,uVar12);
  func_0x000101556278(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xa0,auStack_1a0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar5,auStack_1b8,1,0);
  uVar17 = *puVar5;
  uVar11 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
  *puVar5 = uVar10;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0xb8,auStack_1d0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  uVar13 = *(undefined8 *)(param_1 + 0xc0);
  uVar12 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar6,auStack_1e8,1,0);
  uVar17 = *puVar6;
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  *puVar6 = uVar10;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar13;
  *(undefined8 *)(unaff_x20 + 200) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0xd0,auStack_200,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xd0);
  uVar13 = *(undefined8 *)(param_1 + 0xd8);
  uVar12 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar7,auStack_218,1,0);
  uVar17 = *puVar7;
  uVar11 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar7 = uVar10;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar17,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0xe8,auStack_230,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar15 = *(undefined8 *)(param_1 + 0xf0);
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  uVar12 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(puVar8,auStack_248,1,0);
  uVar16 = *puVar8;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x100);
  *puVar8 = uVar10;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar12;
  func_0x000101597350(uVar10,uVar15,uVar11,uVar12);
  func_0x000101597ae4(uVar16,uVar13,uVar17,uVar18);
  func_0x000107c61428(param_1 + 0x108,auStack_260,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  uVar12 = *(undefined8 *)(param_1 + 0x110);
  uVar11 = *(undefined8 *)(param_1 + 0x118);
  uVar17 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c61428(unaff_x20 + 0x108,auStack_278,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar17;
  func_0x000101597350(uVar10,uVar12,uVar11,uVar17);
  func_0x000101597ae4(uVar13,uVar16,uVar15,uVar18);
  func_0x000107c61428(param_1 + 0x128,auStack_290,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x128);
  uVar13 = *(undefined8 *)(param_1 + 0x130);
  uVar12 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x128,auStack_2a8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x128) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x140,auStack_2c0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x140);
  uVar13 = *(undefined8 *)(param_1 + 0x148);
  uVar12 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_2d8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x158,auStack_2f0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x158);
  uVar13 = *(undefined8 *)(param_1 + 0x160);
  uVar12 = *(undefined8 *)(param_1 + 0x168);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x158),auStack_308,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x158) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x168) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x170,auStack_320,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x170);
  uVar13 = *(undefined8 *)(param_1 + 0x178);
  uVar12 = *(undefined8 *)(param_1 + 0x180);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_338,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x188,auStack_350,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x188);
  uVar13 = *(undefined8 *)(param_1 + 400);
  uVar12 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x188),auStack_368,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar15 = *(undefined8 *)(unaff_x20 + 400);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 0x188) = uVar10;
  *(undefined8 *)(unaff_x20 + 400) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x1a0,auStack_380,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x1a0);
  uVar13 = *(undefined8 *)(param_1 + 0x1a8);
  uVar12 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x000107c61428(unaff_x20 + 0x1a0,auStack_398,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x1b8,auStack_3b0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x1b8);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1b8),auStack_3c8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x1d0,auStack_3e0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x1d0);
  uVar13 = *(undefined8 *)(param_1 + 0x1d8);
  uVar12 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_3f8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x1e8,auStack_410,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x1e8);
  uVar13 = *(undefined8 *)(param_1 + 0x1f0);
  uVar12 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1e8),auStack_428,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uVar12;
  func_0x000100d57520(uVar10,uVar13,uVar12);
  func_0x000100d5753c(uVar11,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x200,auStack_440,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x200);
  uVar11 = *(undefined8 *)(param_1 + 0x208);
  uVar13 = *(undefined8 *)(param_1 + 0x210);
  func_0x000107c61428(unaff_x20 + 0x200,auStack_458,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x208);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x20 + 0x200) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x210) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x218,auStack_470,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x218);
  uVar11 = *(undefined8 *)(param_1 + 0x220);
  uVar13 = *(undefined8 *)(param_1 + 0x228);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x218),auStack_488,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x228);
  *(undefined8 *)(unaff_x20 + 0x218) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x220) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x228) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x230,auStack_4a0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x230);
  uVar11 = *(undefined8 *)(param_1 + 0x238);
  uVar13 = *(undefined8 *)(param_1 + 0x240);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_4b8,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x240);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x248,auStack_4d0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x248);
  uVar11 = *(undefined8 *)(param_1 + 0x250);
  uVar13 = *(undefined8 *)(param_1 + 600);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x248),auStack_4e8,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x250);
  uVar17 = *(undefined8 *)(unaff_x20 + 600);
  *(undefined8 *)(unaff_x20 + 0x248) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar11;
  *(undefined8 *)(unaff_x20 + 600) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x260,auStack_500,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x260);
  uVar11 = *(undefined8 *)(param_1 + 0x268);
  uVar13 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_518,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x278,auStack_530,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x278);
  uVar11 = *(undefined8 *)(param_1 + 0x280);
  uVar13 = *(undefined8 *)(param_1 + 0x288);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x278),auStack_548,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x20 + 0x278) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x288) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x290,auStack_560,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x290);
  uVar11 = *(undefined8 *)(param_1 + 0x298);
  uVar13 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x000107c61428(unaff_x20 + 0x290,auStack_578,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x290) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x2a8,auStack_590,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x2a8);
  uVar11 = *(undefined8 *)(param_1 + 0x2b0);
  uVar13 = *(undefined8 *)(param_1 + 0x2b8);
  uVar15 = *(undefined8 *)(param_1 + 0x2c0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2a8),auStack_5a8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar15;
  func_0x000101597350(uVar10,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar12,uVar17,uVar16,uVar18);
  func_0x000107c61428(param_1 + 0x2c8,auStack_5c0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x2c8);
  uVar11 = *(undefined8 *)(param_1 + 0x2d0);
  uVar13 = *(undefined8 *)(param_1 + 0x2d8);
  func_0x000107c61428(unaff_x20 + 0x2c8,auStack_5d8,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2d8);
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar13;
  func_0x000101541464(uVar10,uVar11,uVar13);
  func_0x000101556278(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x2e0,auStack_5f0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x2e0);
  uVar11 = *(undefined8 *)(param_1 + 0x2e8);
  uVar13 = *(undefined8 *)(param_1 + 0x2f0);
  uVar15 = *(undefined8 *)(param_1 + 0x2f8);
  func_0x000107c61428(unaff_x20 + 0x2e0,auStack_608,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2f8);
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar15;
  func_0x000101597350(uVar10,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar12,uVar17,uVar16,uVar18);
  func_0x000107c61428(param_1 + 0x300,auStack_620,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x300);
  uVar11 = *(undefined8 *)(param_1 + 0x308);
  uVar13 = *(undefined8 *)(param_1 + 0x310);
  func_0x000107c61428(unaff_x20 + 0x300,auStack_638,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x300);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x310);
  *(undefined8 *)(unaff_x20 + 0x300) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x308) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x310) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x318,auStack_650,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x318);
  func_0x000107c61428(unaff_x20 + 0x318,auStack_668,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x318);
  *(undefined8 *)(unaff_x20 + 0x318) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar11);
  func_0x000107c61428(param_1 + 800,auStack_680,0,0);
  uVar10 = *(undefined8 *)(param_1 + 800);
  uVar11 = *(undefined8 *)(param_1 + 0x328);
  uVar13 = *(undefined8 *)(param_1 + 0x330);
  func_0x000107c61428(unaff_x20 + 800,auStack_698,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 800);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x328);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x330);
  *(undefined8 *)(unaff_x20 + 800) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x330) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x338,auStack_6b0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x338);
  uVar11 = *(undefined8 *)(param_1 + 0x340);
  uVar13 = *(undefined8 *)(param_1 + 0x348);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x338),auStack_6c8,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x348);
  *(undefined8 *)(unaff_x20 + 0x338) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x340) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x348) = uVar13;
  func_0x000100d57520(uVar10,uVar11,uVar13);
  func_0x000100d5753c(uVar15,uVar12,uVar17);
  func_0x000107c61428(param_1 + 0x350,auStack_6e0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x350);
  uVar11 = *(undefined8 *)(param_1 + 0x358);
  uVar13 = *(undefined8 *)(param_1 + 0x360);
  uVar15 = *(undefined8 *)(param_1 + 0x368);
  func_0x000107c61428(unaff_x20 + 0x350,auStack_6f8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x350);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x360);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x368);
  *(undefined8 *)(unaff_x20 + 0x350) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x358) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x360) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x368) = uVar15;
  func_0x000101597350(uVar10,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar12,uVar17,uVar16,uVar18);
  func_0x000107c61428(param_1 + 0x370,auStack_710,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x370);
  uVar12 = *(undefined8 *)(param_1 + 0x378);
  uVar17 = *(undefined8 *)(param_1 + 0x380);
  func_0x000101541464(uVar15,uVar12,uVar17);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x370,auStack_728,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x370);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x380);
  *(undefined8 *)(unaff_x20 + 0x370) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x378) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x380) = uVar17;
  func_0x000101556278(uVar10,uVar11,uVar13);
  return;
}



/* Entry: 103660734; end: 103660957;  */

void FUN_103660734(void)

{
  long unaff_x20;
  
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                      *(undefined8 *)(unaff_x20 + 0x210));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238),
                      *(undefined8 *)(unaff_x20 + 0x240));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x248),*(undefined8 *)(unaff_x20 + 0x250),
                      *(undefined8 *)(unaff_x20 + 600));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                      *(undefined8 *)(unaff_x20 + 0x270));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x278),*(undefined8 *)(unaff_x20 + 0x280),
                      *(undefined8 *)(unaff_x20 + 0x288));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x290),*(undefined8 *)(unaff_x20 + 0x298),
                      *(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x2a8),*(undefined8 *)(unaff_x20 + 0x2b0),
                      *(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0),
                      *(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x2e0),*(undefined8 *)(unaff_x20 + 0x2e8),
                      *(undefined8 *)(unaff_x20 + 0x2f0),*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x300),*(undefined8 *)(unaff_x20 + 0x308),
                      *(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 800),*(undefined8 *)(unaff_x20 + 0x328),
                      *(undefined8 *)(unaff_x20 + 0x330));
  func_0x000100d5753c(*(undefined8 *)(unaff_x20 + 0x338),*(undefined8 *)(unaff_x20 + 0x340),
                      *(undefined8 *)(unaff_x20 + 0x348));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x350),*(undefined8 *)(unaff_x20 + 0x358),
                      *(undefined8 *)(unaff_x20 + 0x360),*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x370),*(undefined8 *)(unaff_x20 + 0x378),
                      *(undefined8 *)(unaff_x20 + 0x380));
  return;
}



/* Entry: 103660958; end: 1036609e7;  */

void FUN_103660958(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_103666870(0);
    func_0x000107c613fc();
    FUN_10365f6a4(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1036609e8();
  return;
}



/* Entry: 1036609e8; end: 103660e63;  */

/* WARNING: Removing unreachable block (ram,0x000103660aa8) */
/* WARNING: Removing unreachable block (ram,0x000103660bf8) */
/* WARNING: Removing unreachable block (ram,0x000103660b6c) */
/* WARNING: Removing unreachable block (ram,0x000103660d2c) */
/* WARNING: Removing unreachable block (ram,0x000103660d80) */
/* WARNING: Removing unreachable block (ram,0x000103660d64) */
/* WARNING: Removing unreachable block (ram,0x000103660b88) */
/* WARNING: Removing unreachable block (ram,0x000103660b18) */
/* WARNING: Removing unreachable block (ram,0x000103660afc) */
/* WARNING: Removing unreachable block (ram,0x000103660d48) */
/* WARNING: Removing unreachable block (ram,0x000103660cbc) */
/* WARNING: Removing unreachable block (ram,0x000103660dd4) */
/* WARNING: Removing unreachable block (ram,0x000103660bdc) */
/* WARNING: Removing unreachable block (ram,0x000103660e60) */
/* WARNING: Removing unreachable block (ram,0x000103660e28) */
/* WARNING: Removing unreachable block (ram,0x000103660d9c) */
/* WARNING: Removing unreachable block (ram,0x000103660db8) */
/* WARNING: Removing unreachable block (ram,0x000103660b34) */
/* WARNING: Removing unreachable block (ram,0x000103660c84) */
/* WARNING: Removing unreachable block (ram,0x000103660e44) */
/* WARNING: Removing unreachable block (ram,0x000103660ac4) */
/* WARNING: Removing unreachable block (ram,0x000103660bc0) */
/* WARNING: Removing unreachable block (ram,0x000103660e0c) */
/* WARNING: Removing unreachable block (ram,0x000103660cf4) */
/* WARNING: Removing unreachable block (ram,0x000103660df0) */
/* WARNING: Removing unreachable block (ram,0x000103660ca0) */
/* WARNING: Removing unreachable block (ram,0x000103660c14) */
/* WARNING: Removing unreachable block (ram,0x000103660d10) */
/* WARNING: Removing unreachable block (ram,0x000103660b50) */
/* WARNING: Removing unreachable block (ram,0x000103660ba4) */
/* WARNING: Removing unreachable block (ram,0x000103660c4c) */
/* WARNING: Removing unreachable block (ram,0x000103660cd8) */
/* WARNING: Removing unreachable block (ram,0x000103660c30) */
/* WARNING: Removing unreachable block (ram,0x000103660c68) */
/* WARNING: Removing unreachable block (ram,0x000103660ae0) */

void FUN_1036609e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        FUN_103660e64(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_103660ef8(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_103660f8c(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_103661020(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1036610b4(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103661148(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1036611dc(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103661270(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103661304(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103661398(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_10366142c(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1036614c0(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103661554(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_1036615e8(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_10366167c(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_103661710(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_1036617a4(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_103661838(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1036618cc(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_103661960(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1036619f4(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_103661a88(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_103661b1c(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_103661bb0(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_103661c44(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_103661cd8(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_103661d6c(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_103661e00(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_103661e94(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        FUN_103661f28(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_103661fbc(param_2,param_1,param_3,param_4);
        break;
      case 0x20:
        FUN_103662050(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        FUN_1036620e4(param_2,param_1,param_3,param_4);
        break;
      case 0x22:
        FUN_103662178(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        FUN_10366220c(param_2,param_1,param_3,param_4);
        break;
      case 0x24:
        FUN_1036622a0(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103660e64; end: 103660ef7;  */

void FUN_103660e64(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x10,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103660ef8; end: 103660f8b;  */

void FUN_103660ef8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x28,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103660f8c; end: 10366101f;  */

void FUN_103660f8c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x40,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661020; end: 1036610b3;  */

void FUN_103661020(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x58,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036610b4; end: 103661147;  */

void FUN_1036610b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x70,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661148; end: 1036611db;  */

void FUN_103661148(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x88,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036611dc; end: 10366126f;  */

void FUN_1036611dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0xa0,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661270; end: 103661303;  */

void FUN_103661270(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0xb8,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661304; end: 103661397;  */

void FUN_103661304(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xd0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661398; end: 10366142b;  */

void FUN_103661398(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0xe8,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10366142c; end: 1036614bf;  */

void FUN_10366142c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x108,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036614c0; end: 103661553;  */

void FUN_1036614c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x128;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x128,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661554; end: 1036615e7;  */

void FUN_103661554(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x140,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036615e8; end: 10366167b;  */

void FUN_1036615e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x158,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10366167c; end: 10366170f;  */

void FUN_10366167c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x170;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x170,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661710; end: 1036617a3;  */

void FUN_103661710(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x188;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x188,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036617a4; end: 103661837;  */

void FUN_1036617a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x1a0,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661838; end: 1036618cb;  */

void FUN_103661838(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x1b8,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036618cc; end: 10366195f;  */

void FUN_1036618cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x1d0,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661960; end: 1036619f3;  */

void FUN_103661960(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x1e8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036619f4; end: 103661a87;  */

void FUN_1036619f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x200,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661a88; end: 103661b1b;  */

void FUN_103661a88(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x218;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x218,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661b1c; end: 103661baf;  */

void FUN_103661b1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x230,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661bb0; end: 103661c43;  */

void FUN_103661bb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x248;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x248,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661c44; end: 103661cd7;  */

void FUN_103661c44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x260,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661cd8; end: 103661d6b;  */

void FUN_103661cd8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x278;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x278,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661d6c; end: 103661dff;  */

void FUN_103661d6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x290,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661e00; end: 103661e93;  */

void FUN_103661e00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x2a8,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661e94; end: 103661f27;  */

void FUN_103661e94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x2c8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661f28; end: 103661fbb;  */

void FUN_103661f28(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x2e0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103661fbc; end: 10366204f;  */

void FUN_103661fbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x300;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x300,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103662050; end: 1036620e3;  */

void FUN_103662050(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x318;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 400);
  func_0x000103666d80();
  (*pcVar2)(param_2 + 0x318,&UNK_110675e78,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036620e4; end: 103662177;  */

void FUN_1036620e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 800;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 800,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103662178; end: 10366220b;  */

void FUN_103662178(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x338;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x338,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10366220c; end: 10366229f;  */

void FUN_10366220c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x350;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x350,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036622a0; end: 103662333;  */

void FUN_1036622a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x370;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x370,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103662334; end: 10366239f;  */

void FUN_103662334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1036623a0(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1036623a0; end: 10366278f;  */

/* WARNING: Removing unreachable block (ram,0x0001036626a4) */

void FUN_1036623a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  FUN_103662790();
  if (unaff_x21 == 0) {
    FUN_103662838(param_1,param_2,param_3,param_4);
    FUN_1036628e0(param_1,param_2,param_3,param_4);
    FUN_103662988(param_1,param_2,param_3,param_4);
    FUN_103662a30(param_1,param_2,param_3,param_4);
    FUN_103662ad8(param_1,param_2,param_3,param_4);
    FUN_103662b80(param_1,param_2,param_3,param_4);
    FUN_103662c28(param_1,param_2,param_3,param_4);
    FUN_103662cd0(param_1,param_2,param_3,param_4);
    FUN_103662d78(param_1,param_2,param_3,param_4);
    FUN_103662e1c(param_1,param_2,param_3,param_4);
    FUN_103662ec4(param_1,param_2,param_3,param_4);
    FUN_103662f6c(param_1,param_2,param_3,param_4);
    FUN_103663014(param_1,param_2,param_3,param_4);
    FUN_1036630bc(param_1,param_2,param_3,param_4);
    FUN_103663164(param_1,param_2,param_3,param_4);
    FUN_10366320c(param_1,param_2,param_3,param_4);
    FUN_1036632b4(param_1,param_2,param_3,param_4);
    FUN_10366335c(param_1,param_2,param_3,param_4);
    FUN_103663404(param_1,param_2,param_3,param_4);
    FUN_1036634b0(param_1,param_2,param_3,param_4);
    FUN_103663558(param_1,param_2,param_3,param_4);
    FUN_103663604(param_1,param_2,param_3,param_4);
    FUN_1036636ac(param_1,param_2,param_3,param_4);
    FUN_103663758(param_1,param_2,param_3,param_4);
    FUN_103663800(param_1,param_2,param_3,param_4);
    FUN_1036638ac(param_1,param_2,param_3,param_4);
    FUN_103663954(param_1,param_2,param_3,param_4);
    FUN_1036639fc(param_1,param_2,param_3,param_4);
    FUN_103663aa4(param_1,param_2,param_3,param_4);
    FUN_103663b48(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x318,auStack_58,0,0);
    lVar1 = *(long *)(param_1 + 0x318);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 400);
      func_0x000103666d80();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
    }
    FUN_103663bf0(param_1,param_2,param_3,param_4);
    FUN_103663c98(param_1,param_2,param_3,param_4);
    FUN_103663d44(param_1,param_2,param_3,param_4);
    FUN_103663de8(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 103662790; end: 103662837;  */

void FUN_103662790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x20);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,1,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662838; end: 1036628df;  */

void FUN_103662838(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x38);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,2,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036628e0; end: 103662987;  */

void FUN_1036628e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x50);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,3,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662988; end: 103662a2f;  */

void FUN_103662988(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,4,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662a30; end: 103662ad7;  */

void FUN_103662a30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x80);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x70);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,5,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662ad8; end: 103662b7f;  */

void FUN_103662ad8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x88) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x88) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,6,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662b80; end: 103662c27;  */

void FUN_103662b80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xb0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xa8);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0xa0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,7,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662c28; end: 103662ccf;  */

void FUN_103662c28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 200);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0xb8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,8,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662cd0; end: 103662d77;  */

void FUN_103662cd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xe0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xd8);
    uStack_70 = *(undefined8 *)(param_1 + 0xd0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,9,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662d78; end: 103662e1b;  */

void FUN_103662d78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xf0);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0x100);
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,10,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662e1c; end: 103662ec3;  */

void FUN_103662e1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x110);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x108);
    uStack_60 = *(undefined8 *)(param_1 + 0x120);
    uStack_68 = *(undefined8 *)(param_1 + 0x118);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0xb,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662ec4; end: 103662f6b;  */

void FUN_103662ec4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x128;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x138);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x130);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x128);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0xc,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103662f6c; end: 103663013;  */

void FUN_103662f6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x150);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x148);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x140);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0xd,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663014; end: 1036630bb;  */

void FUN_103663014(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x168);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x160);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x158);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0xe,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036630bc; end: 103663163;  */

void FUN_1036630bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x170;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x180);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x178);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x170);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0xf,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663164; end: 10366320b;  */

void FUN_103663164(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x188;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x198);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 400);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x188);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x10,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10366320c; end: 1036632b3;  */

void FUN_10366320c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1b0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1a8);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x1a0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x11,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036632b4; end: 10366335b;  */

void FUN_1036632b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1b8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1c8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1c0);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x1b8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x12,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10366335c; end: 103663403;  */

void FUN_10366335c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1e0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1d8);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x1d0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x13,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663404; end: 1036634af;  */

void FUN_103663404(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1e8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x1f8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x14,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1036634b0; end: 103663557;  */

void FUN_1036634b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x200;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x210);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x208);
    uStack_70 = *(undefined8 *)(param_1 + 0x200);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x15,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663558; end: 103663603;  */

void FUN_103663558(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x218);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x228);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x220);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x16,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103663604; end: 1036636ab;  */

void FUN_103663604(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x240);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x238);
    uStack_70 = *(undefined8 *)(param_1 + 0x230);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x17,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036636ac; end: 103663757;  */

void FUN_1036636ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x248);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 600);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x250);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x18,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103663758; end: 1036637ff;  */

void FUN_103663758(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x270);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x268);
    uStack_70 = *(undefined8 *)(param_1 + 0x260);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x19,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663800; end: 1036638ab;  */

void FUN_103663800(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x278);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x288);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x280);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x1a,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1036638ac; end: 103663953;  */

void FUN_1036638ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x2a0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x298);
    uStack_70 = *(undefined8 *)(param_1 + 0x290);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x1b,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663954; end: 1036639fb;  */

void FUN_103663954(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x2b0);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x2a8);
    uStack_60 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_68 = *(undefined8 *)(param_1 + 0x2b8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x1c,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036639fc; end: 103663aa3;  */

void FUN_1036639fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2c8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x2c8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x2c8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_68 = *(undefined8 *)(param_1 + 0x2d0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x1d,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663aa4; end: 103663b47;  */

void FUN_103663aa4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2e0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x2e8);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_60 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_68 = *(undefined8 *)(param_1 + 0x2f0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x1e,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663b48; end: 103663bef;  */

void FUN_103663b48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x300;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x310);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x308);
    uStack_70 = *(undefined8 *)(param_1 + 0x300);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x1f,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}


