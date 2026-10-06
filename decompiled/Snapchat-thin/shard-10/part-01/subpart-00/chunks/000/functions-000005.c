/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10779996c; end: 10779997f;  */

void FUN_10779996c(void)

{
  func_0x0001077999a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107799c78; end: 107799cb3;  */

void FUN_107799c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = (undefined1 *)&stack0x00000010;
  func_0x0001073ad858();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10779a9e0; end: 10779aaab;  */

void FUN_10779a9e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  func_0x00010779baa8();
  func_0x000107262f3c(lStack_70 + 8,param_2);
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107781b94();
  func_0x0001073ad4c4(auStack_40);
  func_0x0001073e65f8(&uStack_50);
  *puVar1 = &PTR_DAT_1109d9630;
  func_0x0001073e65f8(&uStack_60);
  *unaff_x19 = puVar1;
  func_0x00010779ba64();
  return;
}



/* Entry: 10779b2d8; end: 10779b303;  */

void FUN_10779b2d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x128) != 0) {
    func_0x0001073e63b0(lVar1);
    *(undefined4 *)(lVar1 + 0x128) = 0;
  }
  return;
}



/* Entry: 10779b530; end: 10779b553;  */

void FUN_10779b530(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001073e6484(lVar1);
  *(undefined4 *)(lVar1 + 0x50) = 0;
  return;
}



/* Entry: 10779b628; end: 10779b6df;  */

void FUN_10779b628(void)

{
  long unaff_x20;
  
  func_0x00010779bb7c();
  func_0x0001074e1554();
  *(undefined4 *)(unaff_x20 + 0x50) = 2;
  return;
}



/* Entry: 10779b84c; end: 10779b85b;  */

void FUN_10779b84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010779b854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10779bc40; end: 10779bc53;  */

void FUN_10779bc40(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779caa4; end: 10779cbbb;  */

void FUN_10779caa4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010779bc54(&uStack_40,*(undefined8 *)(param_2 + 8));
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
  func_0x00010779d0e0();
  return;
}



/* Entry: 10779cd10; end: 10779cd1f;  */

void FUN_10779cd10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010779cd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10779ced0; end: 10779cf2b;  */

void FUN_10779ced0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        (*(code *)(&PTR_DAT_1109b4bd8)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_DAT_1109d99e0)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10779d300; end: 10779d313;  */

void FUN_10779d300(void)

{
  func_0x0001073ad750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779d678; end: 10779d6cb;  */

/* WARNING: Possible PIC construction at 0x00010779d6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779d6ac) */

undefined8 FUN_10779d678(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0xfc8) == *(long *)(param_1 + 0xfd0)) {
    lVar4 = param_1 + 0x168;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xfc8) + 0x38;
    unaff_x30 = 0x10779d6ac;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001077a2ee8(lVar4,param_2);
  func_0x00010734936c();
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x0001077a2afc(&DAT_10f429808);
    func_0x00010778f294(unaff_x19,unaff_x20);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    func_0x0001077a2afc(&DAT_10f429a2c);
    func_0x000107798450(unaff_x19,unaff_x20 + 0x38);
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
    func_0x000107798450(unaff_x19,unaff_x20 + 0xf0);
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
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x19;
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
    func_0x0001077a1a28(unaff_x19,unaff_x20 + 0x2c0);
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
    func_0x0001077a1adc(unaff_x19,unaff_x20 + 0x368);
  }
  if (*(int *)(unaff_x20 + 0x478) != 0) {
    func_0x0001077a2afc(&DAT_10f4294f7);
    func_0x00010778bbf8(unaff_x19,unaff_x20 + 0x408);
  }
  if (*(int *)(unaff_x20 + 0x4b8) != 0) {
    func_0x0001077a2afc(&DAT_10f429713);
    func_0x0001077a1bd4(unaff_x19,unaff_x20 + 0x480);
  }
  if (*(int *)(unaff_x20 + 0x530) != 0) {
    func_0x0001077a2afc(&DAT_10f429215);
    func_0x00010778bbf8(unaff_x19,unaff_x20 + 0x4c0);
  }
  if (*(int *)(unaff_x20 + 0x568) != 0) {
    func_0x0001077a2afc(&DAT_10f42972b);
    func_0x0001077a1a28(unaff_x19,unaff_x20 + 0x538);
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
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x19;
    func_0x0001073f7090(unaff_x20 + 0x618);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x648));
    func_0x0001077a2f4c();
    (*extraout_x8_00)();
  }
  if (*(int *)(unaff_x20 + 0x680) != 0) {
    func_0x0001077a2afc(&DAT_10f4294ba);
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x19;
    func_0x0001073f71c0(unaff_x20 + 0x650);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(unaff_x20 + 0x680));
    func_0x0001077a2f4c();
    (*extraout_x8_01)();
  }
  if (*(int *)(unaff_x20 + 0x6b8) != 0) {
    func_0x0001077a2afc(&DAT_10f4296cf);
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x19;
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
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -8);
  unaff_x19[4] = unaff_x19[4] + -0x10;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar3;
  func_0x000107349610(*unaff_x19,0x7d);
  return 1;
}



/* Entry: 10779e0e4; end: 10779e163;  */

void FUN_10779e0e4(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 auStack_40 [2];
  
  plVar1 = (long *)(param_1 + 8);
  func_0x000107798a18(param_2,*plVar1 + 600);
  if ((param_2 & 1) == 0) {
    if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
      func_0x00010779d418(auStack_40,*plVar1);
      func_0x0001077a31e4(auStack_40[0]);
      func_0x0001077a2164(plVar1,auStack_40);
      func_0x0001077a2fe4();
    }
    else {
      func_0x0001077a31e4(*plVar1);
    }
    func_0x0001077a2d3c();
  }
  return;
}



/* Entry: 1077a091c; end: 1077a09ab;  */

void FUN_1077a091c(long param_1)

{
  undefined8 *extraout_x8;
  long unaff_x20;
  undefined1 auStack_38 [8];
  undefined8 auStack_30 [2];
  
  func_0x0001077a312c();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  *(undefined4 *)(extraout_x8 + 3) = 0;
  extraout_x8[2] = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0)) {
    func_0x00010779d418(auStack_30,*(undefined8 *)(unaff_x20 + 8));
    func_0x0001077a28ac(auStack_38,auStack_30[0]);
    func_0x0001077a2164(unaff_x20 + 8,auStack_30);
    func_0x0001077a308c();
  }
  else {
    func_0x0001077a28ac(auStack_38,*(undefined8 *)(unaff_x20 + 8));
  }
  return;
}



/* Entry: 1077a0eb0; end: 1077a0ed7;  */

long FUN_1077a0eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077a0ed8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077a0fd0; end: 1077a1007;  */

undefined8 * FUN_1077a0fd0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001073e6bdc(&uStack_30);
  return param_1;
}



/* Entry: 1077a1254; end: 1077a1287;  */

void FUN_1077a1254(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001077a12f0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1077a1484; end: 1077a148b;  */

void FUN_1077a1484(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xe98;
    func_0x0001074c49a8();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1077a1808; end: 1077a19bf;  */

void FUN_1077a1808(undefined8 *param_1)

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
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x31] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x89) = 1;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x96) = 1;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  param_1[0xaf] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 1;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 199) = 1;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  *(undefined1 *)(param_1 + 0xd4) = 1;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xec) = 1;
  return;
}



/* Entry: 1077a1afc; end: 1077a1b1f;  */

void FUN_1077a1afc(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001077a2ee8();
  func_0x0001073f6b88();
  func_0x0001077a2f64();
  func_0x0001077a2ef8(*(undefined4 *)(param_2 + 0x98));
  func_0x0001077a2f4c();
  (*extraout_x8)();
  return;
}



/* Entry: 1077a1c68; end: 1077a1ca3;  */

undefined8 FUN_1077a1c68(undefined8 *param_1,undefined4 *param_2)

{
  func_0x0001073493cc();
  func_0x0001077a3174(*param_2);
  func_0x0001077a3174(param_2[1]);
  param_1[4] = param_1[4] + -0x10;
  func_0x000107349610(*param_1,0x5d);
  return 1;
}



/* Entry: 1077a1db8; end: 1077a1dfb;  */

undefined8 * FUN_1077a1db8(undefined8 *param_1)

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
  
  func_0x0001077a2bc8();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
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



/* Entry: 1077a1f64; end: 1077a1f6b;  */

void FUN_1077a1f64(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077a20cc; end: 1077a20db;  */

void FUN_1077a20cc(undefined8 *param_1)

{
  func_0x0001077a321c(*(undefined8 *)*param_1);
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a21dc; end: 1077a221b;  */

void FUN_1077a21dc(void)

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



/* Entry: 1077a2410; end: 1077a24af;  */

void FUN_1077a2410(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077a3144();
  if (extraout_w8 != 0) {
    func_0x0001074c4430();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077a26b0; end: 1077a274f;  */

void FUN_1077a26b0(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077a3144();
  if (extraout_w8 != 0) {
    func_0x0001074c45b8();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077a290c; end: 1077a2963;  */

void FUN_1077a290c(long param_1,long param_2)

{
  code *extraout_x8;
  
  if (*(int *)(param_1 + 0x18) != -1 || *(int *)(param_2 + 0x18) != -1) {
    if (*(int *)(param_2 + 0x18) == -1) {
      if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099aeb8)[*(uint *)(param_1 + 0x18)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      return;
    }
    func_0x0001077a2f4c();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1077a38fc; end: 1077a390f;  */

void FUN_1077a38fc(void)

{
  func_0x0001077a3f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077a3e78; end: 1077a3f0f;  */

void FUN_1077a3e78(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xe98) {
    func_0x0001077a3a44(param_4,lVar1);
    param_4 = lStack_38 + 0xe98;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0xe98) {
    func_0x0001074c49a8(param_2);
  }
  func_0x0001077a139c(&uStack_60);
  return;
}



/* Entry: 1077a40e8; end: 1077a42ab;  */

ulong FUN_1077a40e8(long param_1)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  long lVar19;
  
  uVar18 = 0;
  for (lVar19 = *(long *)(param_1 + 0x20); lVar19 != *(long *)(param_1 + 0x28);
      lVar19 = lVar19 + 0x470) {
    bVar17 = *(int *)(lVar19 + 0x30) == 0;
    uVar1 = 2;
    if (bVar17) {
      uVar1 = 3;
    }
    if (*(int *)(lVar19 + 0x68) != 0) {
      uVar1 = (ulong)bVar17;
    }
    uVar2 = uVar1 | 4;
    if (*(int *)(lVar19 + 0xa8) != 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 8;
    if (*(int *)(lVar19 + 0xe8) != 0) {
      uVar1 = uVar2;
    }
    uVar2 = 0x10;
    if (*(int *)(lVar19 + 0x120) != 0) {
      uVar2 = 0;
    }
    uVar3 = 0x20;
    if (*(int *)(lVar19 + 0x160) != 0) {
      uVar3 = 0;
    }
    uVar4 = 0x40;
    if (*(int *)(lVar19 + 0x1a8) != 0) {
      uVar4 = 0;
    }
    uVar5 = 0x80;
    if (*(int *)(lVar19 + 0x1e0) != 0) {
      uVar5 = 0;
    }
    uVar6 = 0x100;
    if (*(int *)(lVar19 + 0x220) != 0) {
      uVar6 = 0;
    }
    uVar7 = 0x200;
    if (*(int *)(lVar19 + 600) != 0) {
      uVar7 = 0;
    }
    uVar8 = 0x400;
    if (*(int *)(lVar19 + 0x290) != 0) {
      uVar8 = 0;
    }
    uVar9 = 0x800;
    if (*(int *)(lVar19 + 0x2d0) != 0) {
      uVar9 = 0;
    }
    uVar10 = 0x1000;
    if (*(int *)(lVar19 + 0x308) != 0) {
      uVar10 = 0;
    }
    uVar11 = 0x2000;
    if (*(int *)(lVar19 + 0x348) != 0) {
      uVar11 = 0;
    }
    uVar12 = 0x4000;
    if (*(int *)(lVar19 + 0x380) != 0) {
      uVar12 = 0;
    }
    uVar13 = 0x8000;
    if (*(int *)(lVar19 + 0x3b8) != 0) {
      uVar13 = 0;
    }
    uVar14 = 0x10000;
    if (*(int *)(lVar19 + 0x3f8) != 0) {
      uVar14 = 0;
    }
    uVar15 = 0x20000;
    if (*(int *)(lVar19 + 0x430) != 0) {
      uVar15 = 0;
    }
    uVar16 = 0x40000;
    if (*(int *)(lVar19 + 0x468) != 0) {
      uVar16 = 0;
    }
    uVar18 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar1 |
             uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar18;
  }
  return uVar18;
}



/* Entry: 1077a441c; end: 1077a4673;  */

long * FUN_1077a441c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
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
  undefined8 uStack_728;
  long lStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long lStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_680 [96];
  undefined1 auStack_620 [112];
  undefined1 auStack_5b0 [96];
  undefined1 auStack_550 [96];
  undefined1 auStack_4f0 [96];
  undefined1 auStack_490 [104];
  undefined1 auStack_428 [96];
  undefined1 auStack_3c8 [96];
  undefined1 auStack_368 [112];
  undefined1 auStack_2f8 [96];
  undefined1 auStack_298 [112];
  undefined1 auStack_228 [96];
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [96];
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [112];
  
  func_0x0001077ac8ec();
  func_0x0001077a43e8(&lStack_720,*(undefined8 *)(param_2 + 8));
  func_0x000107262f3c(lStack_720 + 8,param_3);
  func_0x0001077aa760(&lStack_6f0);
  lVar1 = lStack_720;
  func_0x000107784a14(lStack_720 + 0xf68,&lStack_6f0);
  func_0x000107784a7c(lVar1 + 0xfd8,auStack_680);
  func_0x000107784a14(lVar1 + 0x1038,auStack_620);
  func_0x000107784a7c(lVar1 + 0x10a8,auStack_5b0);
  func_0x000107784a7c(lVar1 + 0x1108,auStack_550);
  func_0x000107784a7c(lVar1 + 0x1168,auStack_4f0);
  func_0x000107784a4c(lVar1 + 0x11c8,auStack_490);
  func_0x00010778adec(lVar1 + 0x1230,auStack_428);
  func_0x000107784a7c(lVar1 + 0x1290,auStack_3c8);
  func_0x000107784a14(lVar1 + 0x12f0,auStack_368);
  func_0x000107784a7c(lVar1 + 0x1360,auStack_2f8);
  func_0x000107784a14(lVar1 + 0x13c0,auStack_298);
  func_0x000107784a7c(lVar1 + 0x1430,auStack_228);
  func_0x000107784a7c(lVar1 + 0x1490,auStack_1c8);
  func_0x000107784a7c(lVar1 + 0x14f0,auStack_168);
  func_0x000107784a4c(lVar1 + 0x1550,auStack_108);
  func_0x00010778adec(lVar1 + 0x15b8,auStack_a0);
  func_0x0001077a90b4(&lStack_6f0);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_6e8 = uStack_718;
  lStack_6f0 = lStack_720;
  lStack_720 = 0;
  uStack_718 = 0;
  uStack_710 = 0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_6f8 = 0;
  plVar4 = &lStack_6f0;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_6f0);
  func_0x0001073e7510(&uStack_700);
  *puVar2 = &PTR_DAT_1109da518;
  func_0x0001073e7510(&uStack_710);
  uStack_728 = 0;
  *param_1 = puVar2;
  func_0x0001072ca840(&uStack_728);
  plVar3 = &lStack_720;
  func_0x0001077a908c();
  func_0x0001077ac720();
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_6f0);
  func_0x0001073e7510(&uStack_700);
  func_0x0001073e7510(&uStack_710);
  __ZdlPv(puVar2);
  plVar3 = &lStack_720;
  func_0x0001077a908c();
  func_0x0001077acae8();
  func_0x00010734936c(plVar4);
  if ((int)plVar3[0x33] != 0) {
    func_0x0001077ac780(&DAT_10f429eff);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x3a] != 0) {
    func_0x0001077ac780(&DAT_10f429f45);
    func_0x0001077aa8dc(plVar4,plVar3 + 0x34);
  }
  if ((int)plVar3[0x41] != 0) {
    func_0x0001077ac780(&DAT_10f42a0e6);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x48] != 0) {
    func_0x0001077ac780(&DAT_10f429bf4);
    func_0x0001077aa99c(plVar4,plVar3 + 0x42);
  }
  if ((int)plVar3[0x5c] != 0) {
    func_0x0001077ac780(&DAT_10f429d2e);
    func_0x0001077a1adc(plVar4,plVar3 + 0x49);
  }
  if ((int)plVar3[99] != 0) {
    func_0x0001077ac780(&DAT_10f42a04b);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x6b] != 0) {
    func_0x0001077ac780(&DAT_10f429f8e);
    func_0x0001077acfa8();
  }
  if ((int)plVar3[0x72] != 0) {
    func_0x0001077ac780(&DAT_10f429d85);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x79] != 0) {
    func_0x0001077ac780(&DAT_10f429e99);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x80] != 0) {
    func_0x0001077ac780(&DAT_10f42a05d);
    func_0x0001077acdb0();
  }
  if ((int)plVar3[0x87] != 0) {
    func_0x0001077ac780(&DAT_10f429c8b);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x8e] != 0) {
    func_0x0001077ac780(&DAT_10f429c64);
    func_0x0001077acdb0();
  }
  if ((int)plVar3[0x95] != 0) {
    func_0x0001077ac780(&DAT_10f42a0cd);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x9c] != 0) {
    func_0x0001077ac780(&DAT_10f429b8a);
    func_0x000107403790(plVar3 + 0x96);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x9c]);
    func_0x0001077acbc0();
    (*extraout_x8)();
  }
  if ((int)plVar3[0xa5] != 0) {
    func_0x0001077ac780(&DAT_10f429d93);
    func_0x000107403898(plVar3 + 0x9d);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0xa5]);
    func_0x0001077acbc0();
    (*extraout_x8_00)();
  }
  if ((int)plVar3[0xae] != 0) {
    func_0x0001077ac780(&DAT_10f429e60);
    func_0x0001077acda8();
  }
  if ((int)plVar3[0xb5] != 0) {
    func_0x0001077ac780(&DAT_10f429b1c);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0xbc] != 0) {
    func_0x0001077ac780(&DAT_10f42a10e);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0xc3] != 0) {
    func_0x0001077ac780(&DAT_10f429db4);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0xcb] != 0) {
    func_0x0001077ac780(&DAT_10f429d39);
    func_0x0001077acfa8();
  }
  if ((int)plVar3[0xd2] != 0) {
    func_0x0001077ac780(&DAT_10f429d0d);
    func_0x000107403a20(plVar3 + 0xcc);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0xd2]);
    func_0x0001077acbc0();
    (*extraout_x8_01)();
  }
  if ((int)plVar3[0xdb] != 0) {
    func_0x0001077ac780(&DAT_10f42a165);
    func_0x0001077acda8();
  }
  if ((int)plVar3[0xe2] != 0) {
    func_0x0001077ac780(&DAT_10f42a148);
    func_0x000107403aec(plVar3 + 0xdc);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0xe2]);
    func_0x0001077acbc0();
    (*extraout_x8_02)();
  }
  if ((int)plVar3[0xe9] != 0) {
    func_0x0001077ac780(&DAT_10f429c48);
    func_0x000107403bb8(plVar3 + 0xe3);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0xe9]);
    func_0x0001077acbc0();
    (*extraout_x8_03)();
  }
  if ((int)plVar3[0xf0] != 0) {
    func_0x0001077ac780(&DAT_10f429c0f);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0xf7] != 0) {
    func_0x0001077ac780(&DAT_10f42a0d7);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0xfe] != 0) {
    func_0x0001077ac780(&DAT_10f429bb0);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x105] != 0) {
    func_0x0001077ac780(&DAT_10f429dd1);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x10c] != 0) {
    func_0x0001077ac780(&DAT_10f429b4b);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x113] != 0) {
    func_0x0001077ac780(&DAT_10f42a01f);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x11a] != 0) {
    func_0x0001077ac780(&DAT_10f42a037);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x121] != 0) {
    func_0x0001077ac780(&DAT_10f429b73);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x12a] != 0) {
    func_0x0001077ac780(&DAT_10f429af5);
    func_0x00010779861c(plVar4,plVar3 + 0x122);
  }
  if ((int)plVar3[0x133] != 0) {
    func_0x0001077ac780(&DAT_10f429edb);
    func_0x0001077acda8();
  }
  if ((int)plVar3[0x13a] != 0) {
    func_0x0001077ac780(&DAT_10f429d5f);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x141] != 0) {
    func_0x0001077ac780(&DAT_10f429fcf);
    func_0x000107403cc8(plVar3 + 0x13b);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x141]);
    func_0x0001077acbc0();
    (*extraout_x8_04)();
  }
  if ((int)plVar3[0x148] != 0) {
    func_0x0001077ac780(&DAT_10f429ce8);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x14f] != 0) {
    func_0x0001077ac780("text-anchor");
    func_0x0001077aa8dc(plVar4,plVar3 + 0x149);
  }
  if ((int)plVar3[0x159] != 0) {
    func_0x0001077ac780(&DAT_10f429da9);
    func_0x000107403d94(plVar3 + 0x150);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x159]);
    func_0x0001077acbc0();
    (*extraout_x8_05)();
  }
  if ((int)plVar3[0x162] != 0) {
    func_0x0001077ac780(&DAT_10f4271b2);
    func_0x0001077acda8();
  }
  if ((int)plVar3[0x169] != 0) {
    func_0x0001077ac780(&DAT_10f42a1b1);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x170] != 0) {
    func_0x0001077ac780(&DAT_10f42a196);
    func_0x0001077aa99c(plVar4,plVar3 + 0x16a);
  }
  if ((int)plVar3[0x177] != 0) {
    func_0x0001077ac780(&DAT_10f429e32);
    func_0x000107404298(plVar3 + 0x171);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x177]);
    func_0x0001077acbc0();
    (*extraout_x8_06)();
  }
  if ((int)plVar3[0x17e] != 0) {
    func_0x0001077ac780(&DAT_10f429bd5);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x185] != 0) {
    func_0x0001077ac780(&DAT_10f42a098);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x18c] != 0) {
    func_0x0001077ac780(&DAT_10f429ad6);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x193] != 0) {
    func_0x0001077ac780(&DAT_10f429fa6);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x19a] != 0) {
    func_0x0001077ac780(&DAT_10f429f1c);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x1a2] != 0) {
    func_0x0001077ac780(&DAT_10f429f9a);
    func_0x0001077acfa8();
  }
  if ((int)plVar3[0x1a9] != 0) {
    func_0x0001077ac780(&DAT_10f429ae7);
    func_0x0001077acbb8();
  }
  if ((int)plVar3[0x1b0] != 0) {
    func_0x0001077ac780(&DAT_10f429b2f);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x1b7] != 0) {
    func_0x0001077ac780(&DAT_10f429aa7);
    func_0x0001077acdb0();
  }
  if ((int)plVar3[0x1be] != 0) {
    func_0x0001077ac780(&DAT_10f429f7b);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x1c5] != 0) {
    func_0x0001077ac780(&DAT_10f429e10);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x1cc] != 0) {
    func_0x0001077ac780(&DAT_10f429ec3);
    func_0x0001077acdb0();
  }
  if ((int)plVar3[0x1d3] != 0) {
    func_0x0001077ac780(&DAT_10f429f12);
    func_0x0001077acaf8();
  }
  if ((int)plVar3[0x1da] != 0) {
    func_0x0001077ac780(&DAT_10f429b3c);
    func_0x000107404448(plVar3 + 0x1d4);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x1da]);
    func_0x0001077acbc0();
    (*extraout_x8_07)();
  }
  if ((int)plVar3[0x1e3] != 0) {
    func_0x0001077ac780(&DAT_10f429cd3);
    func_0x0001074045f8(plVar3 + 0x1db);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x1e3]);
    func_0x0001077acbc0();
    (*extraout_x8_08)();
  }
  if ((int)plVar3[0x1ec] != 0) {
    func_0x0001077ac780(&DAT_10f429cfb);
    func_0x000107404930(plVar3 + 0x1e4);
    func_0x0001077acc1c();
    func_0x0001077acb00((int)plVar3[0x1ec]);
    func_0x0001077acbc0();
    (*extraout_x8_09)();
  }
  plVar4[4] = plVar4[4] + -0x10;
  func_0x000107349610(*plVar4,0x7d);
  return (long *)0x1;
}



/* Entry: 1077a8f68; end: 1077a8f9f;  */

void FUN_1077a8f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x00010755ae78(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 1077a953c; end: 1077a95b7;  */

long FUN_1077a953c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lStack_40;
  
  func_0x0001077ac8ec();
  func_0x0001077acf40();
  lVar1 = lStack_40;
  func_0x0001077a9610(lStack_40,param_3,param_4);
  *param_1 = lStack_40 + 0x18;
  param_1[1] = lStack_40;
  func_0x0001077acd90();
  func_0x0001077ac76c(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001077acd90();
  func_0x0001077acae8();
  *(undefined8 *)(lVar1 + 8) = param_3;
  lVar2 = lVar1;
  func_0x0001077a95e0();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1077a96a0; end: 1077a96bf;  */

void FUN_1077a96a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dae58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077aa30c; end: 1077aa367;  */

void FUN_1077aa30c(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077acbe0();
  func_0x00010755f398();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001077aca94((&PTR_DAT_1109daeb0)[uVar1],&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1077aa430; end: 1077aa437;  */

void FUN_1077aa430(void)

{
  return;
}



/* Entry: 1077aa4c0; end: 1077aa4ff;  */

void FUN_1077aa4c0(void)

{
  return;
}



/* Entry: 1077aa918; end: 1077aa92b;  */

undefined8 FUN_1077aa918(undefined8 *param_1)

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



/* Entry: 1077aaa9c; end: 1077aaabf;  */

void FUN_1077aaa9c(void)

{
  func_0x0001077acab8();
  func_0x0001077f2c38();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aac18; end: 1077aac1b;  */

undefined8 FUN_1077aac18(undefined8 *param_1)

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



/* Entry: 1077aad34; end: 1077aad7b;  */

undefined8 * FUN_1077aad34(undefined8 *param_1)

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



/* Entry: 1077aae6c; end: 1077aaeb3;  */

undefined8 * FUN_1077aae6c(undefined8 *param_1)

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



/* Entry: 1077aafc0; end: 1077ab02f;  */

undefined8 FUN_1077aafc0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077acce4();
  lVar1 = *(long *)*unaff_x20;
  lVar2 = ((long *)*unaff_x20)[1];
  while (lVar1 != lVar2) {
    func_0x0001077acdd8();
    func_0x00010778f25c();
  }
  unaff_x19[4] = unaff_x19[4] + -0x10;
  func_0x000107349610(*unaff_x19,0x5d);
  return 1;
}



/* Entry: 1077ab1dc; end: 1077ab1f7;  */

void FUN_1077ab1dc(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab29c; end: 1077ab2b7;  */

void FUN_1077ab29c(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab334; end: 1077ab34f;  */

void FUN_1077ab334(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab4ec; end: 1077ab4f7;  */

undefined8 FUN_1077ab4ec(void)

{
  return 1;
}



/* Entry: 1077ab73c; end: 1077ab77b;  */

void FUN_1077ab73c(void)

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



/* Entry: 1077ab99c; end: 1077ab9db;  */

void FUN_1077ab99c(void)

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



/* Entry: 1077abbfc; end: 1077abc3b;  */

void FUN_1077abbfc(void)

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



/* Entry: 1077abdf8; end: 1077abe8b;  */

void FUN_1077abdf8(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf88();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077ac0bc; end: 1077ac14f;  */

void FUN_1077ac0bc(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf90();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077ac334; end: 1077ac35f;  */

bool FUN_1077ac334(char *param_1,char *param_2,char *param_3)

{
  for (; (param_1 != param_2 && (*param_1 == *param_3)); param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1 == param_2;
}



/* Entry: 1077ac58c; end: 1077ac63f;  */

void FUN_1077ac58c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x40) != 0) {
    func_0x0001077acf80();
    *(undefined4 *)(lVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1077ada80; end: 1077adafb;  */

long * FUN_1077ada80(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = (long *)(param_1 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107405ae0(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000107405ae0(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_1077adaec;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_1077adaec;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_1077adaec:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1077ade68; end: 1077adee7;  */

/* WARNING: Possible PIC construction at 0x00010778d038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778d03c) */
/* WARNING: Removing unreachable block (ram,0x00010778d04c) */
/* WARNING: Removing unreachable block (ram,0x00010778d040) */

ulong FUN_1077ade68(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x20 + param_1;
  func_0x00010778d284(uVar1,unaff_x19 + param_1);
  func_0x00010778d1ec();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    return (ulong)((*(byte *)(unaff_x20 + 0x10) & 2) == 0 && *(int *)(unaff_x20 + 0x30) != 1);
  }
  return 0;
}



/* Entry: 1077ae18c; end: 1077ae1cb;  */

void FUN_1077ae18c(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001074e7644(uStack_30);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae394; end: 1077ae3d3;  */

void FUN_1077ae394(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x208);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae594; end: 1077ae5d3;  */

void FUN_1077ae594(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x268);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae7ac; end: 1077ae7ef;  */

void FUN_1077ae7ac(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x968) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x960) = param_2;
  *(undefined8 *)(extraout_x8 + 0x978) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x970) = param_1;
  *(undefined1 *)(extraout_x8 + 0x980) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae9c8; end: 1077aea07;  */

void FUN_1077ae9c8(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x248) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x240) = param_2;
  *(undefined8 *)(extraout_x8 + 600) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x250) = param_1;
  *(undefined1 *)(extraout_x8 + 0x260) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aebdc; end: 1077aec1f;  */

void FUN_1077aebdc(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x618) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x610) = param_2;
  *(undefined8 *)(extraout_x8 + 0x628) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x620) = param_1;
  *(undefined1 *)(extraout_x8 + 0x630) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aedbc; end: 1077aeddf;  */

void FUN_1077aedbc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077aede0(&uStack_11,param_1);
  return;
}



/* Entry: 1077af588; end: 1077af7b7;  */

/* WARNING: Possible PIC construction at 0x0001077af714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af6c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077af808) */
/* WARNING: Removing unreachable block (ram,0x0001077af81c) */
/* WARNING: Removing unreachable block (ram,0x0001077af80c) */
/* WARNING: Removing unreachable block (ram,0x0001077af718) */
/* WARNING: Removing unreachable block (ram,0x0001077af734) */
/* WARNING: Removing unreachable block (ram,0x0001077af784) */
/* WARNING: Removing unreachable block (ram,0x0001077af7ac) */
/* WARNING: Removing unreachable block (ram,0x0001077af71c) */
/* WARNING: Removing unreachable block (ram,0x0001077af6c4) */
/* WARNING: Removing unreachable block (ram,0x0001077af6d8) */
/* WARNING: Removing unreachable block (ram,0x0001077af6e8) */
/* WARNING: Removing unreachable block (ram,0x0001077af6fc) */

void FUN_1077af588(long *param_1,uint *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_90 [80];
  
  plVar2 = param_1;
  func_0x0001077af874();
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107269c1c();
  uVar1 = *(long *)(param_2 + 2) + 0x18;
  lVar5 = (ulong)*param_2 * 0x30;
  lVar4 = (ulong)*param_2 * 3;
  do {
    if (lVar4 == 0) {
      return;
    }
    if ((*(ushort *)(uVar1 - 2) >> 0xc & 1) == 0) {
      lStack_98 = *(long *)(uVar1 - 0x10);
    }
    else {
      lStack_98 = uVar1 - 0x18;
    }
    if (*(short *)(uVar1 + 0x16) == 3) {
      func_0x00010002b838(auStack_90);
      uVar3 = uVar1;
      FUN_1077af588(auStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      func_0x0001077af8c8();
      lVar4 = *param_1;
      func_0x0001077af868();
      if ((uVar3 & 1) != 0) {
        func_0x0001077af8a4();
        func_0x0001077af8d0();
        func_0x000107268400(auStack_90,auStack_b0);
        *(undefined4 *)(lVar4 + 0x38) = 1;
        func_0x0001077af8d8();
        func_0x000104c335c0();
      }
      func_0x000104c335c0(auStack_b0);
    }
    else {
      if (*(short *)(uVar1 + 0x16) != 4) {
        func_0x00010002b838(auStack_b0);
        uStack_b8 = 0x1077af6c4;
        uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e8 = &PTR_DAT_1131ad2e8;
        uStack_e0 = uVar1;
        uStack_d0 = uVar1;
        plStack_c8 = param_1;
        puStack_c0 = &stack0xfffffffffffffff0;
        (*(code *)PTR_DAT_1131ad358)(auStack_90,&uStack_e0);
        func_0x0001072f5f6c(&ppuStack_e8);
        return;
      }
      func_0x00010002b838(auStack_90);
      uVar3 = uVar1;
      func_0x0001077af4a8(auStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      func_0x0001077af8c8();
      lVar4 = *param_1;
      func_0x0001077af868();
      if ((uVar3 & 1) != 0) {
        func_0x0001077af8a4();
        func_0x0001077af8d0();
        func_0x000107268464(auStack_90,auStack_b0);
        *(undefined4 *)(lVar4 + 0x38) = 0;
        func_0x0001077af8d8();
        func_0x000104c33108();
      }
      func_0x000104c33108(auStack_b0);
    }
    uVar1 = uVar1 + 0x30;
    lVar5 = lVar5 + -0x30;
    lVar4 = lVar5;
  } while( true );
}



/* Entry: 1077afd0c; end: 1077afd33;  */

long FUN_1077afd0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077afd34();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077afe10; end: 1077afe27;  */

void FUN_1077afe10(void)

{
  func_0x0001077afe28();
  return;
}



/* Entry: 1077b008c; end: 1077b0147;  */

void FUN_1077b008c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001077afedc(&uStack_30,*param_1);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b00b4();
  return;
}



/* Entry: 1077b0c3c; end: 1077b0daf;  */

undefined1 * FUN_1077b0c3c(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [64];
  undefined1 uStack_90;
  undefined4 auStack_88 [2];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  func_0x0001077b0e08();
  uStack_48 = extraout_x8;
  if (*(int *)(param_3 + 10) != 0) {
    in_ZR = *(int *)(param_3 + 10) == 1;
    if ((bool)in_ZR) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x0001072ac134(&uStack_e8,9);
      for (lVar1 = 0; in_ZR = lVar1 == 0x24, !(bool)in_ZR; lVar1 = lVar1 + 4) {
        dStack_80 = (double)*(float *)((long)param_3 + lVar1);
        auStack_88[0] = 3;
        func_0x0001072aad1c(&uStack_e8,auStack_88);
        func_0x0001077b0f18();
      }
      func_0x000107327958(&dStack_100,&uStack_e8);
      auStack_88[0] = 0;
      uStack_78 = uStack_f8;
      dStack_80 = dStack_100;
      dStack_100 = 0.0;
      uStack_f8 = 0;
      func_0x000104c33108(&dStack_100);
      func_0x000107269124(&uStack_e8);
      func_0x0001077b0f40();
      uStack_90 = 1;
    }
    else {
      (**(code **)(*(long *)*param_3 + 0x28))(auStack_88);
      func_0x0001077b0f40();
      uStack_90 = 2;
    }
    func_0x0001077b0f18();
    func_0x000100060964(auStack_88,param_2);
    func_0x0001077b0f2c();
    param_2 = auStack_d0;
    func_0x0001072d80fc();
    func_0x0001077b0eb4();
    param_1 = auStack_d0;
    func_0x000104c3323c();
  }
  func_0x0001077b0de4(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077b0e28();
  func_0x0001074e13c8(param_1 + 8,param_2 + 8);
  param_1[0x138] = 1;
  return param_1;
}



/* Entry: 1077b11a8; end: 1077b1243;  */

void FUN_1077b11a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  func_0x0001077b1090(auStack_48);
  func_0x0001073ebc60(param_1,auStack_48);
  func_0x0001077b1720();
  func_0x0001077b1128(auStack_48,param_2,param_3);
  func_0x0001073ebc60(param_1 + 0x18,auStack_48);
  func_0x0001077b1720();
  func_0x0001077b1188(auStack_48,param_2,param_3);
  func_0x0001073ebc60(param_1 + 0x30,auStack_48);
  func_0x0001077b1720();
  return;
}



/* Entry: 1077b1414; end: 1077b143b;  */

long FUN_1077b1414(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077b143c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077b1570; end: 1077b15a7;  */

void FUN_1077b1570(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001073ebf60();
  func_0x0001073ebf60(lVar1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1077b189c; end: 1077b18ab;  */

void FUN_1077b189c(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x0001077b3e80();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1077b2e30; end: 1077b2f77;  */

bool FUN_1077b2e30(long param_1,long param_2,long param_3)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = (int)param_1 + 0x30;
    func_0x0001077b1aa0();
    func_0x0001077f1c70();
    if (iVar1 != 0) {
      lVar3 = **(long **)(param_2 + 0xd8);
      lVar4 = (*(long **)(param_2 + 0xd8))[1];
      if (lVar4 - lVar3 == (*(long **)(param_3 + 0xd8))[1] - **(long **)(param_3 + 0xd8)) {
        lVar5 = 0;
        for (uVar6 = 0; uVar6 < (ulong)(lVar4 - lVar3 >> 3); uVar6 = uVar6 + 1) {
          pfVar2 = (float *)(lVar3 + lVar5);
          if ((*(char *)(pfVar2 + 1) == '\x01') &&
             (*(char *)(**(long **)(param_3 + 0xd8) + lVar5 + 4) == '\x01')) {
            func_0x00010726a954();
            fVar7 = *pfVar2;
            func_0x0001077b3d34(*(undefined8 *)(param_3 + 0xd8));
            if (fVar7 < *pfVar2) {
              return true;
            }
            func_0x0001077b3d34(*(undefined8 *)(param_3 + 0xd8));
            fVar7 = *pfVar2;
            func_0x0001077b3d34(*(undefined8 *)(param_2 + 0xd8));
            if (fVar7 < *pfVar2) {
              return false;
            }
            lVar3 = **(long **)(param_2 + 0xd8);
            lVar4 = (*(long **)(param_2 + 0xd8))[1];
          }
          lVar5 = lVar5 + 8;
        }
      }
      goto LAB_1077b2f4c;
    }
  }
  if (*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x20)) {
    return true;
  }
  if (*(uint *)(param_3 + 0x20) < *(uint *)(param_2 + 0x20)) {
    return false;
  }
LAB_1077b2f4c:
  return *(ulong *)(param_3 + 0xd0) < *(ulong *)(param_2 + 0xd0);
}



/* Entry: 1077b3120; end: 1077b3123;  */

void FUN_1077b3120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1077b33c4; end: 1077b33f3;  */

void FUN_1077b33c4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xe8) {
    func_0x0001077b3230(param_4,uVar1);
    param_4 = lStack_48 + 0xe8;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0xe8) {
    func_0x0001077b356c(param_2);
  }
  func_0x0001077b348c(&uStack_70);
  return;
}



/* Entry: 1077b3714; end: 1077b3737;  */

undefined8 FUN_1077b3714(undefined8 param_1)

{
  func_0x0001077b3738();
  return param_1;
}



/* Entry: 1077b38f8; end: 1077b393f;  */

void FUN_1077b38f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0xe8;
  for (; param_1 != lVar1; param_1 = param_1 + 0xe8) {
    func_0x0001077b3658(param_3,param_1);
    param_3 = param_3 + 0xe8;
  }
  return;
}



/* Entry: 1077b3b10; end: 1077b3b23;  */

void FUN_1077b3b10(void)

{
  func_0x0001077b3b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b3fc8; end: 1077b3ffb;  */

undefined8 * FUN_1077b3fc8(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x0001077b4a14(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1077b485c; end: 1077b4893;  */

void FUN_1077b485c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001077b48fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1077b4a24; end: 1077b4b2b;  */

void FUN_1077b4a24(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2) / 0x38) < param_4) {
    if (lVar2 != 0) {
      func_0x0001072669ec(param_1);
      __ZdlPv(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    plVar1 = param_1;
    func_0x0001077b4b2c(param_1,param_4);
    func_0x0001077b480c(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - lVar2;
    if (param_4 <= (ulong)(lVar2 / 0x38)) {
      func_0x0001077b4b8c(param_2,param_3);
      func_0x0001072747d8(param_1,param_2);
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x38;
        func_0x000107266a30(lVar2);
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x0001077b4b8c(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  func_0x0001077b48fc(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1077b4de0; end: 1077b4e5f;  */

void FUN_1077b4de0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b50b0(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b5448();
  return;
}



/* Entry: 1077b51a8; end: 1077b51ab;  */

void FUN_1077b51a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db6e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b52cc; end: 1077b5333;  */

/* WARNING: Possible PIC construction at 0x0001077b52f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b52f4) */
/* WARNING: Removing unreachable block (ram,0x0001077b5318) */
/* WARNING: Removing unreachable block (ram,0x0001077b532c) */
/* WARNING: Removing unreachable block (ram,0x0001077b5310) */
/* WARNING: Removing unreachable block (ram,0x0001077b54bc) */

void FUN_1077b52cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  func_0x0001077b5480();
  func_0x0001077b54c8();
  func_0x0001077b5468(uStack_30,param_2);
  func_0x0001077b5368();
  return;
}



/* Entry: 1077b5568; end: 1077b55e3;  */

void FUN_1077b5568(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lStack_40;
  
  uVar3 = (uint)((ulong)param_2 >> 8);
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x48);
  uVar2 = uVar1 >> 8;
  if (((uint)uVar2 == (uVar3 & 0xff)) && ((uVar2 & 1) != 0)) {
    if ((uVar1 & 0xff) == ((uint)param_2 & 0xff)) {
      return;
    }
  }
  else if ((uint)uVar2 == (uVar3 & 0xff)) {
    return;
  }
  func_0x0001077b5860();
  *(short *)(lStack_40 + 0x48) = (short)param_2;
  func_0x0001077b5874();
  func_0x0001077b5834();
  func_0x0001077b5858();
  func_0x0001077b5844();
  return;
}



/* Entry: 1077b5814; end: 1077b587f;  */

void FUN_1077b5814(void)

{
  return;
}



/* Entry: 1077b5ac0; end: 1077b5e93;  */

undefined8 * FUN_1077b5ac0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1a0;
  undefined1 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_68;
  
  puVar4 = param_1;
  func_0x0001077b72a8();
  uStack_68 = extraout_x8;
  func_0x0001077b7278();
  puVar6 = puVar4;
  func_0x0001077b7298();
  *puVar6 = extraout_x8_00;
  func_0x0001077b7354(puVar6 + 3,param_2,param_3);
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x0001077b66dc(&uStack_110);
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  puStack_220 = puVar6 + 3;
  puStack_218 = puVar4;
  func_0x000107500030();
  *param_1 = &PTR_DAT_1109db730;
  param_1[2] = puStack_218;
  param_1[1] = puStack_220;
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  param_1[3] = &PTR_PTR_1131ada40;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_107783258;
  func_0x0001074f7454(&puStack_220);
  func_0x0001077b66dc(&uStack_1c0);
  param_1[7] = 0;
  *param_1 = &PTR_DAT_1109db7f8;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = 0;
  func_0x00010726ed14(param_1 + 0xc);
  param_1[0xe] = param_1;
  uVar3 = *(char *)(param_3 + 0x65) == '\x01';
  if ((bool)uVar3) {
    func_0x0001077b730c(&uStack_210);
    puVar5 = param_1;
    func_0x0001077b5514(&uStack_110,param_1);
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar6 = (undefined8 *)0x170;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_1109db8b0;
    puVar4 = puVar6 + 3;
    uStack_1b8 = uStack_208;
    uStack_1c0 = uStack_210;
    uStack_210 = 0;
    uStack_208 = 0;
    puVar8 = &uStack_1c0;
    func_0x000107565140(puVar4,puVar8,&uStack_110,param_3,param_3 + 0x20,puVar5 + 1);
    iVar7 = (int)puVar8;
    func_0x00010724b8b8(&uStack_1c0);
    uVar3 = *(int *)(param_1 + 0xb) == 1;
    if ((bool)uVar3) {
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1b8 = param_1[10];
      uStack_1c0 = param_1[9];
      param_1[9] = puVar4;
      param_1[10] = puVar6;
      func_0x00010750b98c(&uStack_1c0);
    }
    else {
      func_0x0001077b72f8();
      param_1[9] = puVar4;
      param_1[10] = puVar6;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      *(undefined4 *)(param_1 + 0xb) = 1;
    }
    func_0x00010750b98c(&uStack_1f8);
    puVar4 = &uStack_110;
    func_0x000104c2f714(puVar4);
    func_0x0001077b7270();
  }
  else {
    func_0x0001077b6764(&uStack_1c0,&UNK_10f42a2ac);
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    func_0x0001077b730c(&uStack_240);
    puVar4 = param_1;
    func_0x0001077b5514(&uStack_1f8,param_1);
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar6 = (undefined8 *)0x180;
    __Znwm();
    func_0x000107273e00(&uStack_110,&uStack_1c0);
    uVar2 = uStack_238;
    uVar1 = uStack_240;
    uStack_240 = 0;
    uStack_238 = 0;
    puVar6[1] = uVar2;
    *puVar6 = uVar1;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x0001077b6964(puVar6 + 2);
    iVar7 = (int)*puVar6;
    puVar6[0x2f] = puVar6 + 2;
    func_0x0001075652cc(puVar6 + 4,&uStack_1f8,param_3,param_3 + 0x20,puVar4 + 1);
    func_0x0001073ada24(*(undefined8 *)puVar6[0x2f]);
    func_0x0001077b7270();
    func_0x000107273f24(&uStack_110);
    if (*(int *)(param_1 + 0xb) == 0) {
      puVar4 = puVar6;
      func_0x0001077b6780(param_1 + 9);
      iVar7 = (int)puVar4;
    }
    else {
      func_0x0001077b72f8();
      param_1[9] = puVar6;
      *(undefined4 *)(param_1 + 0xb) = 0;
    }
    uStack_228 = 0;
    func_0x0001077b68bc(&uStack_228);
    func_0x000104c2f714(&uStack_1f8);
    func_0x00010724b8b8(&uStack_240);
    puVar4 = &uStack_1c0;
    func_0x000107273f24(puVar4);
  }
  func_0x0001077b7218(uStack_68);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) goto LAB_1077b5e70;
  func_0x000104bd46a0(puVar4);
  func_0x00010724b8b8(&uStack_1c0);
  __ZNSt3__119__shared_weak_countD2Ev(puVar6);
  __ZdlPv();
  func_0x000104c2f714(&uStack_110);
  func_0x0001077b7270();
  func_0x0001077b68e0(param_1 + 0xc);
  do {
    func_0x0001077b72f8();
    func_0x000107313354(param_1 + 7);
    func_0x0001077b54d4(param_1);
LAB_1077b5e70:
    __Unwind_Resume(puVar4);
  } while( true );
}



/* Entry: 1077b619c; end: 1077b6247;  */

void FUN_1077b619c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_68 [8];
  long lStack_60;
  
  func_0x0001077b71e8();
  if (lStack_60 != 0) {
    lVar1 = *param_1;
    func_0x0001077b6ab8(auStack_68,lVar1,param_2,param_3,param_4,param_5,param_6);
    func_0x0001077b71dc();
    func_0x0001077b71f4();
    if (lVar1 != 0) {
      func_0x0001077b716c();
    }
  }
  func_0x0001077b7200();
  return;
}



/* Entry: 1077b66d4; end: 1077b66db;  */

void FUN_1077b66d4(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0x60);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077b6884; end: 1077b6887;  */

void FUN_1077b6884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b6988; end: 1077b6a07;  */

/* WARNING: Possible PIC construction at 0x0001077b69bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b69c0) */
/* WARNING: Removing unreachable block (ram,0x0001077b69ec) */
/* WARNING: Removing unreachable block (ram,0x0001077b6a04) */
/* WARNING: Removing unreachable block (ram,0x0001077b69e4) */
/* WARNING: Removing unreachable block (ram,0x0001077b72dc) */

undefined8 * FUN_1077b6988(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0001077b72a8();
  func_0x00010724b48c(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110995268;
  puStack_30[1] = 0;
  func_0x0001077b6a4c(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 1077b6c20; end: 1077b6c77;  */

undefined8 * FUN_1077b6c20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109db900;
  func_0x0001077b6c4c(param_1 + 6);
  return param_1;
}



/* Entry: 1077b6e38; end: 1077b6eab;  */

void FUN_1077b6e38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00010731e330(auStack_70,param_5);
  uStack_48 = param_6[1];
  uStack_50 = *param_6;
  func_0x0001077b6eac(&uStack_78,param_2,&uStack_40,auStack_70);
  *param_1 = uStack_78;
  func_0x00010731e248(auStack_70);
  return;
}



/* Entry: 1077b6fb4; end: 1077b6fdf;  */

undefined8 * FUN_1077b6fb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109db980;
  func_0x00010731e248(param_1 + 4);
  return param_1;
}



/* Entry: 1077b7150; end: 1077b716b;  */

void FUN_1077b7150(long param_1)

{
  func_0x00010750bbd4();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077b7534; end: 1077b754f;  */

void FUN_1077b7534(long param_1)

{
  func_0x0001077b7550();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077b76e4; end: 1077b770f;  */

void FUN_1077b76e4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109dba40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b79fc; end: 1077b79ff;  */

undefined8 * FUN_1077b79fc(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 0x12);
  func_0x00010724b8b8(param_1 + 0x10);
  func_0x0001072aca78(param_1 + 0xf);
  func_0x00010724b3d8(param_1 + 7);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}


