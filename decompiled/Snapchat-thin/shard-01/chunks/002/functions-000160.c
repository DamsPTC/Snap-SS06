/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100dc22f8; end: 100dc22fb;  */

void FUN_100dc22f8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  func_0x000104924710(param_1,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                      0x11309c628);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0x238))
            (&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 100dc22fc; end: 100dc237b;  */

void FUN_100dc22fc(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0x248))();
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 100dc237c; end: 100dc239f;  */

void FUN_100dc237c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc23a0; end: 100dc23c7;  */

void FUN_100dc23a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010492537c();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100dc23c8; end: 100dc242f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc23c8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_2 + _DAT_11309d8e8);
  uVar3 = puVar1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 100dc2430; end: 100dc24fb;  */

void FUN_100dc2430(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576a,auStack_38,1,0);
  uRam000000011381576a = param_3;
  return;
}



/* Entry: 100dc24fc; end: 100dc25af;  */

void FUN_100dc24fc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc25b0; end: 100dc25cb;  */

void FUN_100dc25b0(void)

{
  func_0x0001049282c0();
  return;
}



/* Entry: 100dc25cc; end: 100dc25db;  */

void FUN_100dc25cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815738,auStack_48,0,0);
  uVar1 = uRam0000000113815740;
  *param_1 = uRam0000000113815738;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 100dc25dc; end: 100dc25fb;  */

void FUN_100dc25dc(void)

{
  func_0x000104929024();
  return;
}



/* Entry: 100dc25fc; end: 100dc260b;  */

void FUN_100dc25fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815748,auStack_48,0,0);
  uVar1 = uRam0000000113815750;
  *param_1 = uRam0000000113815748;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 100dc260c; end: 100dc262b;  */

void FUN_100dc260c(void)

{
  func_0x000104929024();
  return;
}



/* Entry: 100dc262c; end: 100dc2637;  */

void FUN_100dc262c(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815758,auStack_38,0,0);
  *param_1 = uRam0000000113815758;
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 100dc2638; end: 100dc2653;  */

void FUN_100dc2638(void)

{
  func_0x0001049282c0();
  return;
}



/* Entry: 100dc2654; end: 100dc265f;  */

void FUN_100dc2654(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815760,auStack_38,0,0);
  *param_1 = uRam0000000113815760;
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 100dc2660; end: 100dc267b;  */

void FUN_100dc2660(void)

{
  func_0x0001049282c0();
  return;
}



/* Entry: 100dc267c; end: 100dc2937;  */

void FUN_100dc267c(undefined1 *param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113815768,auStack_38,0,0);
  *param_1 = uRam0000000113815768;
  return;
}



/* Entry: 100dc2938; end: 100dc293f;  */

void FUN_100dc2938(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,&UNK_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_38,0,0);
  *param_1 = uRam0000000113815770;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100dc2940; end: 100dc294f;  */

void FUN_100dc2940(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815778,auStack_48,0,0);
  uVar1 = uRam0000000113815780;
  *param_1 = uRam0000000113815778;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 100dc2950; end: 100dc2b27;  */

void FUN_100dc2950(void)

{
  func_0x000104929024();
  return;
}



/* Entry: 100dc2b28; end: 100dc2cc3;  */

void FUN_100dc2b28(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2cc4; end: 100dc2d07;  */

void FUN_100dc2cc4(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 100dc2d08; end: 100dc2d2f;  */

void FUN_100dc2d08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100dc2d30; end: 100dc2d77;  */

void FUN_100dc2d30(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2d78; end: 100dc2d8b;  */

void FUN_100dc2d78(void)

{
  func_0x0001049940a0();
  return;
}



/* Entry: 100dc2d8c; end: 100dc2d8f;  */

void FUN_100dc2d8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar3);
  puVar2 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x00010499b368(param_1,puVar2);
  return;
}



/* Entry: 100dc2d90; end: 100dc2e0f;  */

void FUN_100dc2d90(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + uVar4));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2e10; end: 100dc2e33;  */

void FUN_100dc2e10(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010499bd88();
  *param_1 = param_2;
  return;
}



/* Entry: 100dc2e34; end: 100dc2e37;  */

void FUN_100dc2e34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  _swift_unknownObjectRetain(uVar1);
  func_0x00010499bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100dc2e38; end: 100dc2e7f;  */

void FUN_100dc2e38(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2e80; end: 100dc2e83;  */

void FUN_100dc2e80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  _swift_unknownObjectRetain(uVar1);
  func_0x00010499bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100dc2e84; end: 100dc2e8f;  */

void FUN_100dc2e84(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2e90; end: 100dc2e97;  */

void FUN_100dc2e90(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010499bd88();
  *param_1 = param_2;
  return;
}



/* Entry: 100dc2e98; end: 100dc2f27;  */

void FUN_100dc2e98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2f28; end: 100dc2f2b;  */

void FUN_100dc2f28(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2f2c; end: 100dc2f2f;  */

void FUN_100dc2f2c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2f30; end: 100dc2f33;  */

void FUN_100dc2f30(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc2f34; end: 100dc2f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc2f34(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2c18;
  lVar2 = *param_2;
  func_0x000107c61428(lVar2 + _DAT_1130a2c18,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  return;
}



/* Entry: 100dc2f88; end: 100dc2ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc2f88(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a2c18;
  uVar2 = *param_1;
  lVar3 = *param_2;
  func_0x000107c61428(lVar3 + _DAT_1130a2c18,auStack_48,1,0);
  *(undefined8 *)(lVar3 + lVar1) = uVar2;
  func_0x000107c61150(*(undefined8 *)(*(long *)(lVar3 + _DAT_1130a2c00) + 0x40),
                      PTR_s_setApplicationState__112638080,uVar2);
  return;
}



/* Entry: 100dc2ff8; end: 100dc2fff;  */

void FUN_100dc2ff8(undefined8 *param_1)

{
  if (lRam000000011309fe28 != -1) {
    _swift_once(0x11309fe28,&UNK_1049a1ec8);
  }
  *param_1 = uRam00000001130a2b68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100dc3000; end: 100dc302b;  */

void FUN_100dc3000(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc302c; end: 100dc302f;  */

void FUN_100dc302c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc3030; end: 100dc3177;  */

void FUN_100dc3030(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc3178; end: 100dc317b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc3178(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a33b8;
  lVar3 = *param_1;
  lVar4 = *param_2;
  _swift_beginAccess(lVar4 + _DAT_1130a33b8,auStack_48,1,0);
  lVar2 = *(long *)(lVar4 + lVar1);
  *(long *)(lVar4 + lVar1) = lVar3;
  if (lVar3 != lVar2) {
    func_0x0001049b4be8();
  }
  return;
}



/* Entry: 100dc317c; end: 100dc3197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc317c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ((undefined8 *)(*param_2 + _DAT_1130a33c0))[1];
  *param_1 = *(undefined8 *)(*param_2 + _DAT_1130a33c0);
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 100dc3198; end: 100dc319b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc3198(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  lVar7 = *param_2;
  puVar1 = (ulong *)(lVar7 + _DAT_1130a33c0);
  uVar4 = puVar1[1];
  if ((uVar2 != *puVar1 || uVar3 != uVar4) &&
     (uVar6 = uVar2,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (uVar2,uVar3,*puVar1,uVar4,0), (uVar6 & 1) == 0)) {
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    lVar5 = _DAT_1130a33c8;
    _swift_beginAccess(lVar7 + _DAT_1130a33c8,auStack_58,1,0);
    *(undefined1 *)(lVar7 + lVar5) = 0;
    func_0x0001049b4be8();
  }
  return;
}



/* Entry: 100dc319c; end: 100dc319f;  */

void FUN_100dc319c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc31a0; end: 100dc31a3;  */

void FUN_100dc31a0(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar11 = param_1;
    lVar7 = lVar1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar11 = uVar11 + 1 & uVar8;
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      lVar10 = *(long *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
      lVar5 = lVar10;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar10);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar13);
      _objc_retain(lVar10);
      puVar6 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar6,lVar5,lVar7);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(lVar7);
      _objc_release(lVar10);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar11) {
        if (uVar9 < uVar11) {
code_r0x0001049be8a4:
          if ((long)param_1 < (long)uVar9) goto code_r0x0001049be80c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 0x20);
        if ((param_1 != uVar12) || (puVar3 + 4 <= puVar2)) {
          uVar13 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar13;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          param_1 = uVar12;
        }
      }
      else if (uVar11 <= uVar9) goto code_r0x0001049be8a4;
code_r0x0001049be80c:
      uVar12 = uVar12 + 1 & uVar8;
      lVar7 = lVar5;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1049be958);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Entry: 100dc31a4; end: 100dc3337;  */

int FUN_100dc31a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto code_r0x0001049bff20;
        goto code_r0x0001049bff04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
code_r0x0001049bff04:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
code_r0x0001049bff20:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100dc3338; end: 100dc338f;  */

void FUN_100dc3338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0x98))(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 100dc3390; end: 100dc3393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc3390(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
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
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  uVar2 = *param_1;
  uVar8 = param_1[1];
  uVar3 = param_1[2];
  uVar9 = param_1[3];
  uVar4 = param_1[4];
  uVar10 = param_1[5];
  puVar1 = (undefined8 *)(*param_2 + _DAT_1130a3550);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar5 = *puVar1;
  uVar11 = puVar1[1];
  uVar6 = puVar1[2];
  uVar12 = puVar1[3];
  uVar7 = puVar1[4];
  uVar13 = puVar1[5];
  *puVar1 = uVar2;
  puVar1[1] = uVar8;
  puVar1[2] = uVar3;
  puVar1[3] = uVar9;
  puVar1[4] = uVar4;
  puVar1[5] = uVar10;
  func_0x0001049c3ce4(uVar2,uVar8,uVar3,uVar9,uVar4,uVar10);
  func_0x0001049c32e8(uVar5,uVar11,uVar6,uVar12,uVar7,uVar13);
  return;
}



/* Entry: 100dc3394; end: 100dc3413;  */

void FUN_100dc3394(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *(ulong *)*param_2) + 0xb0))();
  *param_1 = param_2;
  return;
}



/* Entry: 100dc3414; end: 100dc364f;  */

void FUN_100dc3414(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc3650; end: 100dc3653;  */

void FUN_100dc3650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  uVar1 = uVar3;
  func_0x0001049ce198(uVar3,uVar2);
  if (((uint)uVar1 & 0xff) != 0x25) {
    _swift_bridgeObjectRelease(uVar2);
    func_0x0001049cd7fc(&uStack_40,uVar1);
    uVar2 = uStack_38;
    uVar3 = uStack_40;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 100dc3654; end: 100dc36fb;  */

undefined8 * FUN_100dc3654(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 100dc36fc; end: 100dc372b;  */

void FUN_100dc36fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001049d4da4(uVar1);
  return;
}



/* Entry: 100dc372c; end: 100dc372f;  */

void FUN_100dc372c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_getObjCClassMetadata();
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_3;
  func_0x0001049d8860();
  return;
}



/* Entry: 100dc3730; end: 100dc3777;  */

void FUN_100dc3730(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x1138158c0,auStack_38,0,0);
  *param_1 = uRam00000001138158c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100dc3778; end: 100dc377b;  */

void FUN_100dc3778(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  _swift_beginAccess(0x1138158c0,auStack_48,1,0);
  uVar1 = uRam00000001138158c0;
  uRam00000001138158c0 = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 100dc377c; end: 100dc37c3;  */

void FUN_100dc377c(undefined1 *param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x1130a3938,auStack_38,0,0);
  *param_1 = uRam00000001130a3938;
  return;
}



/* Entry: 100dc37c4; end: 100dc3817;  */

void FUN_100dc37c4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = uVar1;
  func_0x0001049d8860();
  return;
}



/* Entry: 100dc3818; end: 100dc38bf;  */

void FUN_100dc3818(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc38c0; end: 100dc38f3;  */

uint FUN_100dc38c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001049e1654();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100dc38f4; end: 100dc3967;  */

void FUN_100dc38f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = lRam000000011309ff68;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x11309ff68,&UNK_1049e33d0);
  }
  func_0x0001049e3a00(uRam0000000113815980,uRam0000000113815988,uRam0000000113815990,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dc3968; end: 100dc3a3f;  */

void FUN_100dc3968(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  if (lRam000000011309ff68 != -1) {
    func_0x000107c61568(0x11309ff68,&UNK_1049e33d0,param_3,uVar1);
  }
  func_0x0001049e3a00(uRam0000000113815980,uRam0000000113815988,uRam0000000113815990,uVar1);
  return;
}



/* Entry: 100dc3a40; end: 100dc3ab3;  */

void FUN_100dc3a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = lRam000000011309ff78;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x11309ff78,&UNK_1049e35a8);
  }
  func_0x0001049e3a00(uRam00000001138159b0,uRam00000001138159b8,uRam00000001138159c0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dc3ab4; end: 100dc3bf3;  */

void FUN_100dc3ab4(byte *param_1)

{
  byte bVar1;
  
  if (lRam000000011309ff78 != -1) {
    func_0x000107c61568(0x11309ff78,&UNK_1049e35a8);
  }
  bVar1 = bRam00000001138159b0;
  func_0x0001049e368c(bRam00000001138159b0,uRam00000001138159b8,uRam00000001138159c0);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 100dc3bf4; end: 100dc3c67;  */

void FUN_100dc3bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = lRam000000011309ff70;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x11309ff70,&UNK_1049e34c0);
  }
  func_0x0001049e3a00(uRam0000000113815998,uRam00000001138159a0,uRam00000001138159a8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100dc3c68; end: 100dc3edb;  */

void FUN_100dc3c68(byte *param_1)

{
  byte bVar1;
  
  if (lRam000000011309ff70 != -1) {
    func_0x000107c61568(0x11309ff70,&UNK_1049e34c0);
  }
  bVar1 = bRam0000000113815998;
  func_0x0001049e368c(bRam0000000113815998,uRam00000001138159a0,uRam00000001138159a8);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 100dc3edc; end: 100dc3ef3;  */

void FUN_100dc3edc(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  if (lRam000000011309ff68 != -1) {
    func_0x000107c61568(0x11309ff68,&UNK_1049e33d0,param_3,uVar1);
  }
  func_0x0001049e3a00(uRam0000000113815980,uRam0000000113815988,uRam0000000113815990,uVar1);
  return;
}



/* Entry: 100dc3ef4; end: 100dc400b;  */

void FUN_100dc3ef4(byte *param_1,byte param_2)

{
  func_0x0001049e5838();
  *param_1 = param_2 & 1;
  return;
}



/* Entry: 100dc400c; end: 100dc400f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc400c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(*param_2 + _DAT_1130a3cb0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  func_0x0001007742d4(uVar2,uVar4);
  func_0x0001049e2748();
  return;
}



/* Entry: 100dc4010; end: 100dc418f;  */

void FUN_100dc4010(void)

{
  func_0x0001049e7278();
  return;
}



/* Entry: 100dc4190; end: 100dc41f3;  */

void FUN_100dc4190(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001049e7580();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100dc41f4; end: 100dc42bb;  */

void FUN_100dc41f4(undefined8 param_1,long param_2)

{
  func_0x0001049e7a20();
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 100dc42bc; end: 100dc42f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc42bc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + _DAT_1130a3cf0);
  *(undefined8 *)(*param_2 + _DAT_1130a3cf0) = *param_1;
  func_0x000107c61434();
  if (lVar1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100dc42f4; end: 100dc431b;  */

void FUN_100dc42f4(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001049e8d8c();
  *param_1 = param_2;
  return;
}



/* Entry: 100dc431c; end: 100dc431f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc431c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + _DAT_1130a3cf8);
  *(undefined8 *)(*param_2 + _DAT_1130a3cf8) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  func_0x0001049e8df0();
  return;
}



/* Entry: 100dc4320; end: 100dc436f;  */

void FUN_100dc4320(byte *param_1,byte param_2)

{
  func_0x0001049e95e8();
  *param_1 = param_2 & 1;
  return;
}



/* Entry: 100dc4370; end: 100dc439b;  */

void FUN_100dc4370(byte *param_1)

{
  byte bVar1;
  
  if (lRam000000011309ff78 != -1) {
    func_0x000107c61568(0x11309ff78,&UNK_1049e35a8);
  }
  bVar1 = bRam00000001138159b0;
  func_0x0001049e368c(bRam00000001138159b0,uRam00000001138159b8,uRam00000001138159c0);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 100dc439c; end: 100dc439f;  */

undefined8 * FUN_100dc439c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(uVar1);
  return param_1;
}



/* Entry: 100dc43a0; end: 100dc444f;  */

void FUN_100dc43a0(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001049ee8e0();
  *param_1 = param_2;
  return;
}



/* Entry: 100dc4450; end: 100dc449f;  */

undefined8 * FUN_100dc4450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRetain(uVar2);
  return param_1;
}



/* Entry: 100dc44a0; end: 100dc4553;  */

void FUN_100dc44a0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  if (*(long *)(unaff_x20 + uVar4 + 0x28) != 0) {
    func_0x0001049f6144();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4554; end: 100dc45d7;  */

void FUN_100dc4554(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc45d8; end: 100dc45eb;  */

void FUN_100dc45d8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc45ec; end: 100dc465f;  */

void FUN_100dc45ec(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4660; end: 100dc4663;  */

void FUN_100dc4660(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4664; end: 100dc4667;  */

void FUN_100dc4664(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4668; end: 100dc466b;  */

void FUN_100dc4668(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc466c; end: 100dc4677;  */

void FUN_100dc466c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4678; end: 100dc467b;  */

void FUN_100dc4678(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc467c; end: 100dc473f;  */

void FUN_100dc467c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4740; end: 100dc4747;  */

void FUN_100dc4740(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309ffc0 != -1) {
    _swift_once(0x11309ffc0,&UNK_104a03bf4);
  }
  _swift_beginAccess(0x113815ae0,auStack_38,0,0);
  *param_1 = uRam0000000113815ae0;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 100dc4748; end: 100dc487b;  */

void FUN_100dc4748(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc487c; end: 100dc4883;  */

void FUN_100dc487c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 100dc4884; end: 100dc48af;  */

void FUN_100dc4884(void)

{
  func_0x000104a200a0(0x1130a4d50,&UNK_104a1fec0,&UNK_10dd4c914);
  return;
}



/* Entry: 100dc48b0; end: 100dc48ff;  */

void FUN_100dc48b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x244,0x100dc48b0);
  (*pcVar1)();
}



/* Entry: 100dc4900; end: 100dc494f;  */

void FUN_100dc4900(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100dc4950; end: 100dc4957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dc4950(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130a4f68;
  lVar3 = *param_2;
  lRam000000011340b1e8 = lRam000000011340b1e8 + 1;
  _objc_msgSend(*(undefined8 *)(lVar3 + _DAT_1130a4f68),PTR_s_lock_1126058b8);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_1130a4f70);
  uVar4 = *(undefined8 *)(lVar3 + lVar1);
  _objc_retain(uVar2);
  _objc_msgSend(uVar4,PTR_s_unlock_11267dcf8);
  *param_1 = uVar2;
  return;
}


