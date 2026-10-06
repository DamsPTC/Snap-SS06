/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002445d4; end: 1002445db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002445d4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar1;
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10024447c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112dafa20) = lVar1;
  *(undefined8 *)(lVar4 + _DAT_112dafa28) = uStack_38;
  puVar2 = PTR_s_init_1125d9248;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c6157c(lVar1);
  plVar5 = &lStack_48;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1002445dc; end: 100244663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002445dc(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  FUN_100083b20(&uStack_38);
  FUN_10024447c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dafa20) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dafa28) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 100244664; end: 10024466b;  */

void FUN_100244664(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112dafa88,&UNK_10d958b80);
  uVar1 = 0;
  FUN_1000a2bc4();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10024466c; end: 1002446db;  */

void FUN_10024466c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112dafa88,&UNK_10d958b80);
  uVar1 = 0;
  FUN_1000a2bc4();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1002446dc; end: 1002507c7;  */

void FUN_1002446dc(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000100246230(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1002507c8; end: 1002507d3;  */

undefined * FUN_1002507c8(void)

{
  return PTR_s_isAdjustingExposure_1125f88b8;
}



/* Entry: 1002507d4; end: 100250857;  */

void FUN_1002507d4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100250858; end: 10025089b;  */

void FUN_100250858(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6f530 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000295c4(0xff);
  puVar2 = PTR___sSo17OS_dispatch_queueC7Combine9Scheduler8DispatchMc_11034f908;
  func_0x000107c61520(PTR___sSo17OS_dispatch_queueC7Combine9Scheduler8DispatchMc_11034f908,uVar1);
  puRam0000000112d6f530 = puVar2;
  return;
}



/* Entry: 10025089c; end: 1002508db;  */

undefined8 FUN_10025089c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1002508dc; end: 100252c53;  */

void FUN_1002508dc(void)

{
  return;
}



/* Entry: 100252c54; end: 100253af7;  */

void FUN_100252c54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xde8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100253af8; end: 100254933;  */

undefined8 FUN_100253af8(void)

{
  return 0x1b;
}



/* Entry: 100254934; end: 1002549af;  */

void FUN_100254934(void)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  FUN_1000823a8(FUN_1002549d0,0);
  return;
}



/* Entry: 1002549b0; end: 1002549cf;  */

void FUN_1002549b0(void)

{
  func_0x000107c61168(&PTR_PTR_11307cc10);
  return;
}



/* Entry: 1002549d0; end: 100254a2b;  */

void FUN_1002549d0(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  FUN_1002549b0();
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c6106c();
  lRam00000001138136d8 = lVar2;
  FUN_1000aa068();
  if (-1 < lVar2) {
    lRam00000001138136e0 = lVar2;
    *param_1 = param_2;
    param_1[1] = (long)&PTR_DAT_1107755d0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100254a2c);
  (*pcVar1)();
}



/* Entry: 100254a2c; end: 100254a4f;  */

undefined ** FUN_100254a2c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 100254a50; end: 100254b1f;  */

void FUN_100254a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104454a0;
  func_0x000107c613fc(&UNK_1104454a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100254b20,puVar1);
  return;
}



/* Entry: 100254b20; end: 100254b27;  */

void FUN_100254b20(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x000100261ae4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_40;
  func_0x000107c3e85c(uStack_40);
  func_0x000107c61170(uStack_38);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1104454c8;
  return;
}



/* Entry: 100254b28; end: 100254bab;  */

void FUN_100254b28(long *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x000100261ae4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_40;
  func_0x000107c3e85c(uStack_40);
  func_0x000107c61170(uStack_38);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1104454c8;
  return;
}



/* Entry: 100254bac; end: 100254f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100254bac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  FUN_100083b20(&puStack_98);
  puVar1 = puStack_98;
  func_0x000107c3fa04(puStack_98);
  func_0x000107c61180();
  func_0x000107c61170(puStack_98);
  puVar2 = PTR_PTR_1126a8a00;
  func_0x000107c610f8();
  func_0x000107c45db0();
  func_0x000107c615e8(puVar1);
  puVar3 = PTR_PTR_1126a8a08;
  func_0x000107c610f8(PTR_PTR_1126a8a08);
  func_0x000107c49424();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_78 = FUN_1002621a4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  uStack_88 = 0x100262164;
  puStack_80 = &UNK_1104455f8;
  ppuVar5 = &puStack_98;
  uStack_70 = param_3;
  func_0x000107c60bc4(ppuVar5);
  uVar6 = uStack_70;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  FUN_100083b20(&puStack_98);
  puVar1 = puStack_98;
  uVar6 = *(undefined8 *)(puStack_98 + _DAT_113083868);
  func_0x000107c61174(uVar6);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126a8a10;
  func_0x000107c610f8();
  func_0x000107c4941c();
  func_0x000107c61170(uVar6);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&lStack_a8);
  uVar7 = *(undefined8 *)(lStack_a8 + _DAT_113091ad8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_a8);
  FUN_100083b20(&lStack_b0);
  uVar8 = *(undefined8 *)(lStack_b0 + _DAT_113091ae0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_b0);
  func_0x000107c61174(puVar3);
  FUN_100083b20(&uStack_b8);
  uVar6 = uStack_b8;
  func_0x000107c5c818();
  func_0x000107c61180();
  func_0x000107c61170(uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&lStack_d8);
  lVar9 = _DAT_113091ae8;
  func_0x000107c61428(lStack_d8 + _DAT_113091ae8,&puStack_98,0,0);
  lVar9 = lStack_d8 + lVar9;
  func_0x000107c61618();
  func_0x000107c61170(lStack_d8);
  FUN_100083b20(&uStack_e0);
  uVar10 = uStack_e0;
  func_0x000107c5e144();
  func_0x000107c61180();
  func_0x000107c61170(uStack_e0);
  puVar11 = PTR_PTR_1126a8a18;
  func_0x000107c610f8();
  func_0x000107c48bd0();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  *param_1 = puVar11;
  return;
}



/* Entry: 100254f6c; end: 100254f9f;  */

void FUN_100254f6c(void)

{
  long unaff_x20;
  
  FUN_100254bac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100254fa0; end: 100255013; -[SCUserSessionDefaultConfig initWithCircumstanceEngine:] */

undefined1 * FUN_100254fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9d38;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100255014; end: 100255087; -[SCUserSessionWorkflowTweakableConfig initWithUserWorkflowConfig:] */

undefined1 * FUN_100255014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9d40;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100255088; end: 1002550af;  */

void FUN_100255088(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1002550b0; end: 100255103;  */

void FUN_1002550b0(undefined8 *param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = 0;
  (*param_2)(0);
  func_0x000107c610f8();
  (*param_3)(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 100255104; end: 10025514f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100255104(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113083868) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100255150; end: 1002551f3; -[SCUserSessionLogger initWithUserTrackedLogger:performer:] */

undefined1 *
FUN_100255150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9d48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002551f4; end: 1002551fb;  */

void FUN_1002551f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1002551fc; end: 10025524f;  */

void FUN_1002551fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100255250; end: 100255863;  */

void FUN_100255250(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100210f58();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  puVar1 = PTR_PTR_1126a7bc0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  puVar13 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x60) = puVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 100255864; end: 100255897;  */

void FUN_100255864(void)

{
  long unaff_x20;
  
  FUN_100255250(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100255898; end: 10025589f;  */

void FUN_100255898(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 0;
  func_0x0001000aad1c(0);
  FUN_1000aad3c();
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar2 = 0;
  FUN_1000ad274(0);
  FUN_100255a08();
  uVar3 = uVar2;
  FUN_1000ad2e8();
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_1103db988;
  func_0x000107c613fc(&UNK_1103db988,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  uVar2 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  uVar5 = uVar3;
  FUN_1000ab368(uVar3,uVar1,0,0,&UNK_10152ddc0,puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar5);
  func_0x0001000ad7c4();
  uVar6 = uVar5;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126d4e00;
  func_0x000107c610f8();
  func_0x000107c4669c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = puVar4;
  return;
}



/* Entry: 1002558a0; end: 100255a07;  */

void FUN_1002558a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = 0;
  func_0x0001000aad1c(0);
  FUN_1000aad3c();
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar2 = 0;
  FUN_1000ad274(0);
  FUN_100255a08();
  uVar3 = uVar2;
  FUN_1000ad2e8();
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_1103db988;
  func_0x000107c613fc(&UNK_1103db988,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  uVar2 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar5 = uVar3;
  FUN_1000ab368(uVar3,uVar1,0,0,&UNK_10152ddc0,puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar5);
  func_0x0001000ad7c4();
  uVar3 = uVar5;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126d4e00;
  func_0x000107c610f8();
  func_0x000107c4669c();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 100255a08; end: 100255a13;  */

void FUN_100255a08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255a14; end: 100255ab7; -[SCUserStorageServices initWithDocObjectContext:preferences:] */

undefined1 *
FUN_100255a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b950;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100255ab8; end: 100255abb;  */

void FUN_100255ab8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255abc; end: 100255ae7;  */

void FUN_100255abc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255ae8; end: 100255aef;  */

void FUN_100255ae8(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126d4fe8;
  func_0x000107c610f8();
  func_0x000107c46868();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100255b4c);
  (*pcVar1)();
}



/* Entry: 100255af0; end: 100255b4b;  */

void FUN_100255af0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126d4fe8;
  func_0x000107c610f8();
  func_0x000107c46868();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100255b4c);
  (*pcVar1)();
}



/* Entry: 100255b4c; end: 100255bbf; -[SCFeatureSettingsServices initWithFeatureSettingsService:] */

undefined1 * FUN_100255b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705eb0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100255bc0; end: 100255bc7;  */

void FUN_100255bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126b8290;
  func_0x000107c610f8();
  func_0x000107c46ab4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100255bc8; end: 100255c37;  */

void FUN_100255bc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126b8290;
  func_0x000107c610f8();
  func_0x000107c46ab4();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100255c38; end: 100255cdb; -[SCUserUnifiedGRPCServices initWithGRPCClientFactory:authDelegate:] */

undefined1 *
FUN_100255c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702c30;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100255cdc; end: 100255ce3;  */

void FUN_100255cdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255ce4; end: 100255d0f;  */

void FUN_100255ce4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255d10; end: 100255d8f;  */

void FUN_100255d10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = 0;
  FUN_1000971dc(0);
  func_0x000107c610f8();
  FUN_100255d90(param_2,uVar1,uVar2,uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 100255d90; end: 100255e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100255d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113093a90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113093a98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093aa0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100255e04; end: 100255e37;  */

void FUN_100255e04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100255e38; end: 100255e3f;  */

void FUN_100255e38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100255e40; end: 100255e93;  */

void FUN_100255e40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100255e94; end: 1002568c3;  */

void FUN_100255e94(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_10020902c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7bd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar18 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  uVar19 = uVar21;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar20 = 0xd000000000000013;
  uVar19 = uVar20;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar22 = 0xd000000000000011;
  uVar19 = uVar22;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efbb490);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef8ccc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef12d70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef8ccf0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  lVar23 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efbb4d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar19);
  func_0x000107c3e740(uVar20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar23 != 0) {
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    *(long *)(param_2 + 0x98) = lVar23;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002568c4);
  (*pcVar1)();
}



/* Entry: 1002568c4; end: 100256907;  */

void FUN_1002568c4(void)

{
  long unaff_x20;
  
  FUN_100255e94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 100256908; end: 10025690f;  */

void FUN_100256908(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_1001f87b8(0);
  func_0x000107c610f8();
  func_0x000100256970(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100256910; end: 1002569d3;  */

void FUN_100256910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  FUN_1001f87b8(0);
  func_0x000107c610f8();
  func_0x000100256970(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1002569d4; end: 1002569ff;  */

void FUN_1002569d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100256a00; end: 100256a07;  */

void FUN_100256a00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126b8260;
  func_0x000107c610f8();
  func_0x000107c46c50();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100256a08; end: 100256a8b;  */

void FUN_100256a08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126b8260;
  func_0x000107c610f8();
  func_0x000107c46c50();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100256a8c; end: 100256b57; -[SCUserNetworkServices initWithHTTPMetadataService:nativeNeworkAPI:httpRequestModifier:] */

undefined1 *
FUN_100256a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127064e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100256b58; end: 100256b83;  */

void FUN_100256b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100256b84; end: 100256b8b;  */

void FUN_100256b84(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a6e80;
  func_0x000107c610f8();
  func_0x000107c46544();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100256be8);
  (*pcVar1)();
}



/* Entry: 100256b8c; end: 100256be7;  */

void FUN_100256b8c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a6e80;
  func_0x000107c610f8();
  func_0x000107c46544();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100256be8);
  (*pcVar1)();
}



/* Entry: 100256be8; end: 100256c5b; -[SCActivationDeviceIdHoldoutServices initWithDeviceIdHoldoutStateProvider:] */

undefined1 * FUN_100256be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702ad0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100256c5c; end: 100256dcf;  */

void FUN_100256c5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)&UNK_10152d48c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_10152d4c0;
  puStack_78 = &UNK_1103dade0;
  uStack_68 = uVar1;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc(puVar4,param_3,ppuVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_70 = FUN_100764b10;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1007642c8;
  puStack_78 = &UNK_1103dae08;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar6,param_3,ppuVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126a7740;
  func_0x000107c610f8();
  func_0x000107c464fc();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  *param_1 = puVar8;
  return;
}



/* Entry: 100256dd0; end: 100256deb;  */

void FUN_100256dd0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100256dec; end: 100256e8f; -[SCDeltaSyncServices initWithDeltaSyncService:uploadService:] */

undefined1 *
FUN_100256dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702338;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100256e90; end: 100256e97;  */

void FUN_100256e90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100256e98; end: 100256ec3;  */

void FUN_100256e98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100256ec4; end: 100256ecb;  */

void FUN_100256ec4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100099a10(0);
  func_0x000107c610f8();
  func_0x000100256f14(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100256ecc; end: 100256f5f;  */

void FUN_100256ecc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100099a10(0);
  func_0x000107c610f8();
  func_0x000100256f14(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 100256f60; end: 100256fcf;  */

void FUN_100256f60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a7130;
  func_0x000107c610f8();
  func_0x000107c46da4();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 100256fd0; end: 100257073; -[SCDeviceInfoServices initWithIdentifierProvider:samplingProvider:] */

undefined1 *
FUN_100256fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270b188;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100257074; end: 10025709f;  */

void FUN_100257074(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002570a0; end: 10025717f;  */

void FUN_1002570a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_50 = &UNK_1014496cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101449710;
  puStack_58 = &UNK_1103b9ff8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a6ea0;
  func_0x000107c610f8();
  func_0x000107c48650();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 100257180; end: 100257193;  */

void FUN_100257180(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100257194; end: 1002571eb; -[SCSettingsEventLoggerServices initWithSettingsEventLogger:] */

long FUN_100257194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1002571ec; end: 1002571f3;  */

void FUN_1002571ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_10009ae40(0);
  func_0x000107c610f8();
  func_0x00010025723c(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1002571f4; end: 10025805b;  */

void FUN_1002571f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_10009ae40(0);
  func_0x000107c610f8();
  func_0x00010025723c(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10025805c; end: 100259327; -[SCUserInfoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10025805c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  long lVar38;
  undefined1 auStack_5d0 [8];
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined1 auStack_5a0 [8];
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined1 auStack_578 [8];
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined1 auStack_548 [8];
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined1 auStack_518 [8];
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined1 auStack_4e0 [8];
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined1 auStack_4b0 [8];
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined1 auStack_488 [8];
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined1 auStack_458 [8];
  undefined *puStack_450;
  undefined8 uStack_448;
  code *pcStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined1 auStack_428 [8];
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b88c8;
  func_0x000107c610f4();
  lVar38 = (long)_DAT_112722eb4;
  lVar2 = param_1 + lVar38;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c492d4();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722eb8);
  *(undefined **)(param_1 + _DAT_112722eb8) = puVar1;
  func_0x000107c61170(uVar37);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar1 = PTR_PTR_1126b88d0;
  func_0x000107c610f4();
  lVar38 = param_1 + lVar38;
  func_0x000107c61148(lVar38);
  lVar2 = lVar38;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c4660c();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  *(undefined **)(param_1 + _DAT_112722ebc) = puVar1;
  func_0x000107c61170(uVar37);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar38);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ec0);
  *(undefined **)(param_1 + _DAT_112722ec0) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ec4);
  *(undefined **)(param_1 + _DAT_112722ec4) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ec8);
  *(undefined **)(param_1 + _DAT_112722ec8) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ecc);
  *(undefined **)(param_1 + _DAT_112722ecc) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ed0);
  *(undefined **)(param_1 + _DAT_112722ed0) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ed4);
  *(undefined **)(param_1 + _DAT_112722ed4) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ed8);
  *(undefined **)(param_1 + _DAT_112722ed8) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722edc);
  *(undefined **)(param_1 + _DAT_112722edc) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ee0);
  *(undefined **)(param_1 + _DAT_112722ee0) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ee4);
  *(undefined **)(param_1 + _DAT_112722ee4) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ee8);
  *(undefined **)(param_1 + _DAT_112722ee8) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722eec);
  *(undefined **)(param_1 + _DAT_112722eec) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ef0);
  *(undefined **)(param_1 + _DAT_112722ef0) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ef4);
  *(undefined **)(param_1 + _DAT_112722ef4) = puVar1;
  func_0x000107c61170(uVar37);
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112722ef8);
  *(undefined **)(param_1 + _DAT_112722ef8) = puVar1;
  func_0x000107c61170(uVar37);
  puVar4 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_100c55954;
  puStack_90 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10049a9d4;
  puStack_b8 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10081117c;
  puStack_e0 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1053f21e0;
  puStack_108 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_100,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1005b0778;
  puStack_130 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1008156c8;
  puStack_158 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_1053f2220;
  puStack_180 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_178,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  puStack_1b0 = &UNK_1053f2260;
  puStack_1a8 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_1a0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  puStack_1d8 = &UNK_1053f22a0;
  puStack_1d0 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_1c8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  puStack_200 = &UNK_1053f22e0;
  puStack_1f8 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_1f0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_238 = puVar1;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_100286d78;
  puStack_220 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_218,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  puStack_260 = puVar1;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1007f9460;
  puStack_248 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_240,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  puStack_288 = puVar1;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_100ba897c;
  puStack_270 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_268,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  puStack_2b0 = puVar1;
  uStack_2a8 = 0xc2000000;
  uStack_2a0 = 0x100bb0e3c;
  puStack_298 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_290,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126ae720;
  puStack_2d8 = puVar1;
  uStack_2d0 = 0xc2000000;
  puStack_2c8 = &UNK_1053f2320;
  puStack_2c0 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_2b8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126ae720;
  puStack_300 = puVar1;
  uStack_2f8 = 0xc2000000;
  pcStack_2f0 = FUN_1004254d8;
  puStack_2e8 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_2e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126ae720;
  puStack_328 = puVar1;
  uStack_320 = 0xc2000000;
  puStack_318 = &UNK_1053f2360;
  puStack_310 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_308,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar21 = PTR_PTR_1126ae720;
  puStack_350 = puVar1;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_100527568;
  puStack_338 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_330,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar22 = PTR_PTR_1126ae720;
  puStack_378 = puVar1;
  uStack_370 = 0xc2000000;
  puStack_368 = &UNK_1053f23a0;
  puStack_360 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_358,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar23 = PTR_PTR_1126ae720;
  puStack_3a0 = puVar1;
  uStack_398 = 0xc2000000;
  puStack_390 = &UNK_1053f23e0;
  puStack_388 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_380,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar24 = PTR_PTR_1126ae720;
  puStack_3c8 = puVar1;
  uStack_3c0 = 0xc2000000;
  puStack_3b8 = &UNK_1053f2420;
  puStack_3b0 = &UNK_1108851d8;
  func_0x000107c6111c(auStack_3a8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar25 = PTR_PTR_1126ae720;
  puStack_3f0 = puVar1;
  uStack_3e8 = 0xc2000000;
  puStack_3e0 = &UNK_1053f2460;
  puStack_3d8 = &UNK_110885208;
  func_0x000107c6111c(auStack_3d0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar26 = PTR_PTR_1126ae720;
  puStack_420 = puVar1;
  uStack_418 = 0xc2000000;
  pcStack_410 = FUN_10049ada0;
  puStack_408 = &UNK_110885238;
  func_0x000107c6111c(auStack_3f8,auStack_80);
  puStack_400 = puVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar27 = PTR_PTR_1126ae720;
  puStack_450 = puVar1;
  uStack_448 = 0xc2000000;
  pcStack_440 = FUN_1008112f0;
  puStack_438 = &UNK_110885268;
  func_0x000107c6111c(auStack_428,auStack_80);
  puStack_430 = puVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar28 = PTR_PTR_1126ae720;
  puStack_480 = puVar1;
  uStack_478 = 0xc2000000;
  puStack_470 = &UNK_1053f24a0;
  puStack_468 = &UNK_110885298;
  func_0x000107c6111c(auStack_458,auStack_80);
  puStack_460 = puVar7;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar29 = PTR_PTR_1126ae720;
  puStack_4a8 = puVar1;
  uStack_4a0 = 0xc2000000;
  puStack_498 = &UNK_1053f24e8;
  puStack_490 = &UNK_1108852c8;
  func_0x000107c6111c(auStack_488,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar30 = PTR_PTR_1126ae720;
  puStack_4d8 = puVar1;
  uStack_4d0 = 0xc2000000;
  puStack_4c8 = &UNK_1053f2528;
  puStack_4c0 = &UNK_1108852f8;
  func_0x000107c6111c(auStack_4b0,auStack_80);
  puStack_4b8 = puVar9;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar31 = PTR_PTR_1126ae720;
  puStack_510 = puVar1;
  uStack_508 = 0xc2000000;
  puStack_500 = &UNK_1053f2570;
  puStack_4f8 = &UNK_110885328;
  func_0x000107c6111c(auStack_4e0,auStack_80);
  puStack_4f0 = puVar10;
  puStack_4e8 = puVar11;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar32 = PTR_PTR_1126ae720;
  puStack_540 = puVar1;
  uStack_538 = 0xc2000000;
  puStack_530 = &UNK_1053f25b8;
  puStack_528 = &UNK_110885358;
  func_0x000107c6111c(auStack_518,auStack_80);
  puStack_520 = puVar12;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar33 = PTR_PTR_1126ae720;
  puStack_570 = puVar1;
  uStack_568 = 0xc2000000;
  puStack_560 = &UNK_1053f2600;
  puStack_558 = &UNK_110885388;
  func_0x000107c6111c(auStack_548,auStack_80);
  puStack_550 = puVar17;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar34 = PTR_PTR_1126ae720;
  puStack_598 = puVar1;
  uStack_590 = 0xc2000000;
  puStack_588 = &UNK_1053f2648;
  puStack_580 = &UNK_1108853b8;
  func_0x000107c6111c(auStack_578,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar35 = PTR_PTR_1126ae720;
  puStack_5c8 = puVar1;
  uStack_5c0 = 0xc2000000;
  puStack_5b8 = &UNK_1053f2688;
  puStack_5b0 = &UNK_1108853e8;
  func_0x000107c6111c(auStack_5a0,auStack_80);
  puStack_5a8 = puVar20;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_5d0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar36 = PTR_PTR_1126b88d8;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112722efc;
  func_0x000107c61148(lVar2);
  lVar38 = lVar2;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = lVar38;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c491d8();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar2);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112722f00));
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_5d0);
  func_0x000107c61170(puVar35);
  func_0x000107c61120(auStack_5a0);
  func_0x000107c61170(puVar34);
  func_0x000107c61120(auStack_578);
  func_0x000107c61170(puVar33);
  func_0x000107c61120(auStack_548);
  func_0x000107c61170(puVar32);
  func_0x000107c61120(auStack_518);
  func_0x000107c61170(puVar31);
  func_0x000107c61120(auStack_4e0);
  func_0x000107c61170(puVar30);
  func_0x000107c61120(auStack_4b0);
  func_0x000107c61170(puVar29);
  func_0x000107c61120(auStack_488);
  func_0x000107c61170(puVar28);
  func_0x000107c61120(auStack_458);
  func_0x000107c61170(puVar27);
  func_0x000107c61120(auStack_428);
  func_0x000107c61170(puVar26);
  func_0x000107c61120(auStack_3f8);
  func_0x000107c61170(puVar25);
  func_0x000107c61120(auStack_3d0);
  func_0x000107c61170(puVar24);
  func_0x000107c61120(auStack_3a8);
  func_0x000107c61170(puVar23);
  func_0x000107c61120(auStack_380);
  func_0x000107c61170(puVar22);
  func_0x000107c61120(auStack_358);
  func_0x000107c61170(puVar21);
  func_0x000107c61120(auStack_330);
  func_0x000107c61170(puVar20);
  func_0x000107c61120(auStack_308);
  func_0x000107c61170(puVar19);
  func_0x000107c61120(auStack_2e0);
  func_0x000107c61170(puVar18);
  func_0x000107c61120(auStack_2b8);
  func_0x000107c61170(puVar17);
  func_0x000107c61120(auStack_290);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_268);
  func_0x000107c61170(puVar15);
  func_0x000107c61120(auStack_240);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_218);
  func_0x000107c61170(puVar13);
  func_0x000107c61120(auStack_1f0);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_1c8);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_1a0);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_178);
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_150);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100259328; end: 10025932f; -[SCUserStorageServices preferences] */

undefined8 FUN_100259328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100259330; end: 1002593a3; -[SCUserInfoPreferencesBasedProviderFactory initWithUserPreferences:] */

undefined1 * FUN_100259330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e82f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1002593a4; end: 1002593ab; -[SCUserStorageServices docObjectContext] */

undefined8 FUN_1002593a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1002593ac; end: 100259433; -[SCUserInfoDeltaSyncProviderFactory initWithDocObjectContext:] */

undefined1 * FUN_1002593ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8308;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100259434; end: 100259443; -[_TtC18SCUserSessionScope18SCUserSessionScope userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100259434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091ad8));
  return;
}



/* Entry: 100259444; end: 100259acf; -[SCUserInfoServices initWithUserId:birthdayProvider:bitmojiAvatarIdProvider:bitmojiSelfieIdProvider:bitmojiFlatlandInfoProvider:displayNameProvider:emailInfoProvider:phoneNumberProvider:tentativePhoneNumberProvider:quickAddPrivacyProvider:registrationInfoProvider:scoreInfoProvider:snapPrivacyProvider:snapContactsPrivacyProvider:storyPrivacyProvider:usernameProvider:snapshotSnapsProvider:plusSubscriptionInfoProvider:hasConcurrentMobileSessionsProvider:latestAcceptedTOSVersionProvider:saturnUserIdProvider:saturnPrivacyProvider:birthdayMutator:bitmojiAvatarIdMutator:bitmojiSelfieIdMutator:bitmojiFlatlandInfoMutator:displayNameMutator:emailMutator:phoneMutator:quickAddPrivacyMutator:snapContactsPrivacyMutator:usernameMutator:snapshotSnapsMutator:saturnPrivacyMutator:] */

undefined8 *
FUN_100259444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  puStack_70 = PTR_PTR_11270e090;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_37;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100259ad0; end: 100259b6b;  */

void FUN_100259ad0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100259b6c; end: 100259d4f; -[SCTermsOfUseServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100259b6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100262fa8;
  puStack_68 = &UNK_1109682f0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275abac);
  *(undefined **)(param_1 + _DAT_11275abac) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_106c00740;
  puStack_90 = &UNK_110861828;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275abb0);
  *(undefined **)(param_1 + _DAT_11275abb0) = puVar2;
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126d1518;
  func_0x000107c610f4(PTR_PTR_1126d1518);
  func_0x000107c48c80();
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100259d50; end: 100259dc3; -[SCTermsOfUseServices initWithTermsOfUseService:] */

undefined1 * FUN_100259d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd668;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100259dc4; end: 100259e2f;  */

void FUN_100259dc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100259e30; end: 100259e37; -[SCTermsOfUseServices termsOfUseService] */

undefined8 FUN_100259e30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100259e38; end: 100259ebf;  */

void FUN_100259e38(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  puVar2 = PTR_PTR_1126a7458;
  func_0x000107c610f8();
  func_0x000107c45f84();
  func_0x000107c615e8(uStack_40);
  func_0x000107c615e8(uStack_38);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100259ec0);
  (*pcVar1)();
}



/* Entry: 100259ec0; end: 100259fab;  */

void FUN_100259ec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long alStack_70 [6];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000002c;
  FUN_1000a9a18(0xd00000000000002c,0x800000010ef861d0);
  func_0x000107c61170(uVar1);
  FUN_100083b20(alStack_70);
  uVar1 = *(undefined8 *)(alStack_70[0] + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(alStack_70[0]);
  FUN_100083b20(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c61428(param_2,alStack_70,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100259fac; end: 100259fb7;  */

void FUN_100259fac(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000b3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100259fb8; end: 10025a05b; -[SCConfigManagerServices initWithConfigManager:grapheneContextManager:] */

undefined1 *
FUN_100259fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702c48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10025a05c; end: 10025a05f;  */

void FUN_10025a05c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000b3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10025a060; end: 10025a4cb;  */

void FUN_10025a060(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  uVar2 = auStack_70[0];
  FUN_1000b9aa4();
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126af890;
  func_0x000107c610f8();
  func_0x000107c495d8();
  func_0x000107c61170(param_2);
  FUN_100083b20(auStack_70);
  uVar3 = auStack_70[0];
  uVar2 = 0x112e01620;
  FUN_1000285a8(0x112e01620,&UNK_10d9d2740);
  func_0x000107c610f8();
  FUN_10017da58(uVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  FUN_100083b20(auStack_70);
  uVar5 = auStack_70[0];
  FUN_1000285a8(0x112e01628,&UNK_10d9d2748);
  func_0x000107c610f8();
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  FUN_100083b20(auStack_70);
  uVar7 = auStack_70[0];
  FUN_1000285a8(0x112e01630,&UNK_10d9d2750);
  func_0x000107c610f8();
  FUN_10017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  FUN_100083b20(auStack_70);
  uVar9 = auStack_70[0];
  uVar2 = 0x112e01638;
  FUN_1000285a8(0x112e01638,&UNK_10d9d2758);
  func_0x000107c610f8();
  FUN_10025a71c(uVar9,uVar2);
  puVar10 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  FUN_100083b20(auStack_70);
  uVar11 = auStack_70[0];
  uVar2 = 0x112e01640;
  FUN_1000285a8(0x112e01640,&UNK_10d9d2760);
  func_0x000107c610f8();
  FUN_10025a71c(uVar11,uVar2);
  puVar12 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar6);
  FUN_100083b20(&uStack_88);
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_100083b20(&uStack_90);
  func_0x000107c61174();
  FUN_100083b20(&uStack_98);
  func_0x000107c61174();
  FUN_100083b20(&uStack_a0);
  uVar2 = uStack_a0;
  func_0x000107c5e144();
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  puVar13 = PTR_PTR_1126a89f8;
  func_0x000107c610f8();
  func_0x000107c48bd4();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(auStack_70[0]);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar13;
  return;
}



/* Entry: 10025a4cc; end: 10025a507;  */

void FUN_10025a4cc(void)

{
  long unaff_x20;
  
  FUN_10025a060(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10025a508; end: 10025a57b; -[SCWindowUIContainer initWithWindow:] */

undefined1 * FUN_10025a508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e290;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10025a57c; end: 10025a57f;  */

void FUN_10025a57c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10025a580; end: 10025a5b3;  */

void FUN_10025a580(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10025a5b4; end: 10025a5cb;  */

void FUN_10025a5b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}


