/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049c3a6c; end: 1049c3a73; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory timeoutInterval] */

undefined8 FUN_1049c3a6c(void)

{
  return 0x3c;
}



/* Entry: 1049c3a74; end: 1049c3a7b;  */

undefined8 FUN_1049c3a74(void)

{
  return 0x3c;
}



/* Entry: 1049c3a7c; end: 1049c3a83; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory maxCachedEvents] */

undefined8 FUN_1049c3a7c(void)

{
  return 1000;
}



/* Entry: 1049c3a84; end: 1049c3a8b;  */

undefined8 FUN_1049c3a84(void)

{
  return 1000;
}



/* Entry: 1049c3a8c; end: 1049c3a93; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory maxProcessedEvents] */

undefined8 FUN_1049c3a8c(void)

{
  return 10;
}



/* Entry: 1049c3a94; end: 1049c3a9b;  */

undefined8 FUN_1049c3a94(void)

{
  return 10;
}



/* Entry: 1049c3a9c; end: 1049c3ae3; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory retryEventsHttpResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3548);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049c3ae4; end: 1049c3af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3ae4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a3548));
  return;
}



/* Entry: 1049c3af4; end: 1049c3b3f;  */

void FUN_1049c3af4(undefined8 param_1)

{
  func_0x0001049c4248();
  _objc_allocWithZone();
  _objc_msgSend();
  uRam00000001130a3538 = param_1;
  return;
}



/* Entry: 1049c3b40; end: 1049c3b7f;  */

void FUN_1049c3b40(void)

{
  if (lRam000000011309ff08 != -1) {
    _swift_once(0x11309ff08,FUN_1049c3af4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a3538);
  return;
}



/* Entry: 1049c3b80; end: 1049c3bbf; +[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory shared] */

void FUN_1049c3b80(void)

{
  if (lRam000000011309ff08 != -1) {
    _swift_once(0x11309ff08,FUN_1049c3af4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130a3538);
  return;
}



/* Entry: 1049c3bc0; end: 1049c3c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3bc0(undefined8 *param_1,long *param_2)

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
  FUN_1049c32e8(uVar5,uVar11,uVar6,uVar12,uVar7,uVar13);
  return;
}



/* Entry: 1049c3c84; end: 1049c3d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3c84(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3550);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar4 = puVar1[1];
  uVar2 = puVar1[2];
  uVar5 = puVar1[3];
  uVar3 = puVar1[4];
  uVar6 = puVar1[5];
  *param_1 = *puVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  func_0x0001049c3ce4();
  return;
}



/* Entry: 1049c3d20; end: 1049c3d93; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory transformedEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3d20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3558;
  _swift_beginAccess(param_1 + _DAT_1130a3558,auStack_38,0,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar4);
  uVar2 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  uVar3 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049c3d94; end: 1049c3dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3d94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3558;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3558,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049c3dd8; end: 1049c3e4b; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory setTransformedEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  lVar1 = _DAT_1130a3558;
  _swift_beginAccess(param_1 + _DAT_1130a3558,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049c3e4c; end: 1049c3f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3e4c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3558;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3558,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1049c3f78; end: 1049c4207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c3f78(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined *puStack_68;
  
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lStack_88 = *(long *)(lVar3 + -8);
  puVar9 = auStack_90 + -(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_80 = lVar3;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  lVar10 = (long)puVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3540);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010f21c860;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3560) = 0x3c;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3568) = 1000;
  *(undefined8 *)(unaff_x20 + _DAT_1130a3570) = 10;
  lVar3 = _DAT_1130a3548;
  uVar5 = 0x1130a3578;
  func_0x0001048db364();
  _swift_initStaticObject();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_1130a3580;
  puVar6 = PTR_PTR_1126add18;
  _swift_retain();
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3550);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_1130a3558) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000295c4(0);
  _swift_retain(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_68 = puVar6;
  uVar5 = 0x112d4ac68;
  func_0x0001049c4c04(0x112d4ac68,puVar2,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  _swift_retain(puVar6);
  uVar7 = 0x11309d9b0;
  func_0x0001048db364(0x11309d9b0);
  uVar8 = 0x112d4ac78;
  FUN_1049c4208(0x112d4ac78,0x11309d9b8,puVar2);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_68,uVar7,uVar8,lVar4,uVar5);
  (**(code **)(lStack_88 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_80);
  uVar5 = 0xd000000000000022;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000022,0x800000010f227730,lVar11,lVar10,puVar9,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130a3588) = uVar5;
  func_0x0001049c4248();
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049c4208; end: 1049c4267;  */

void FUN_1049c4208(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001049c4c44(0xff);
    puVar2 = PTR___sSayxGSTsMc_11034dd08;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1049c4268; end: 1049c4287; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory init] */

void FUN_1049c4268(void)

{
  FUN_1049c3f78();
  return;
}



/* Entry: 1049c4288; end: 1049c434f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c4288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3550);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar6 = puVar1[3];
  uVar4 = puVar1[4];
  uVar7 = puVar1[5];
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  FUN_1049c32e8(uVar2,uVar5,uVar3,uVar6,uVar4,uVar7);
  return;
}



/* Entry: 1049c4350; end: 1049c4bdf; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory configureWithDatasetID:url:accessKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c4350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined1 auStack_78 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar8 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar9 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3550);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar6 = puVar1[3];
  uVar4 = puVar1[4];
  uVar7 = puVar1[5];
  *puVar1 = param_5;
  puVar1[1] = uVar9;
  puVar1[2] = param_4;
  puVar1[3] = uVar8;
  puVar1[4] = param_3;
  puVar1[5] = param_2;
  _objc_retain(param_1);
  FUN_1049c32e8(uVar2,uVar5,uVar3,uVar6,uVar4,uVar7);
  _objc_release(param_1);
  return;
}



/* Entry: 1049c4be0; end: 1049c4beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c4be0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long unaff_x23;
  ulong *unaff_x24;
  ulong *unaff_x25;
  code *pcVar12;
  undefined1 *unaff_x26;
  undefined8 uVar13;
  ulong *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar5 = (ulong *)unaff_x20[2];
    puVar6 = (undefined1 *)unaff_x20[3];
    uVar10 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(ulong *)((long)register0x00000008 + -0xd0) = uVar10;
    *(ulong *)((long)register0x00000008 + -200) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = (ulong *)0x0;
    __s10Foundation10URLRequestVMa();
    unaff_x26 = (undefined1 *)unaff_x21[-1];
    unaff_x22 = (ulong *)((long)register0x00000008 +
                         (-0xf0 - (*(long *)(unaff_x26 + 0x40) + 0xfU & 0xfffffffffffffff0)));
    lVar3 = 0x11309c5e0;
    func_0x0001048db364();
    unaff_x25 = (ulong *)((long)unaff_x22 -
                         (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
    unaff_x19 = 0;
    __s10Foundation3URLVMa();
    unaff_x23 = *(long *)(unaff_x19 + -8);
    uVar10 = *(long *)(unaff_x23 + 0x40) + 0xfU & 0xfffffffffffffff0;
    unaff_x27 = (ulong *)((long)unaff_x25 - uVar10);
    puVar11 = (undefined1 *)((long)unaff_x27 - uVar10);
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar11;
    puVar9 = (ulong *)((long)register0x00000008 + -0x80);
    _swift_beginAccess(puVar5 + 2,puVar9,0,0);
    puVar4 = puVar5 + 2;
    _swift_unknownObjectWeakLoadStrong();
    unaff_x20 = puVar5;
    if (puVar4 != (ulong *)0x0) {
      FUN_1049c51dc();
      unaff_x24 = puVar4;
      if (puVar9 == (ulong *)0x0) {
        _objc_release(puVar4);
        unaff_x20 = puVar4;
      }
      else {
        __s10Foundation3URLV6stringACSgSSh_tcfC(unaff_x25);
        _swift_bridgeObjectRelease(puVar9);
        puVar5 = unaff_x25;
        (**(code **)(unaff_x23 + 0x30))(unaff_x25,1,unaff_x19);
        if ((int)puVar5 == 1) {
          _objc_release(puVar4);
          func_0x0001000293e4(unaff_x25);
          unaff_x20 = puVar9;
        }
        else {
          *(ulong **)((long)register0x00000008 + -0xe0) = unaff_x21;
          *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x26;
          (**(code **)(unaff_x23 + 0x20))
                    (*(undefined8 *)((long)register0x00000008 + -0xc0),unaff_x25,unaff_x19);
          func_0x0001049bd6d0();
          puVar8 = PTR__swift_isaMask_11034f488;
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0xf0))();
          _swift_bridgeObjectRelease();
          pcVar12 = *(code **)((*(ulong *)puVar8 & *puVar4) + 0xb0);
          (*pcVar12)();
          uVar10 = *(ulong *)(puVar6 + 0x10);
          _swift_bridgeObjectRelease();
          if (9 < uVar10) {
            uVar10 = 10;
          }
          (*pcVar12)();
          if (*(ulong *)(puVar6 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1049c4bdc);
            (*pcVar12)();
          }
          puVar7 = puVar6;
          if (*(ulong *)(puVar6 + 0x10) != uVar10) {
            func_0x0001013960dc(puVar6,puVar6 + 0x20,0,uVar10 << 1 | 1);
            _swift_bridgeObjectRelease(puVar6);
          }
          puVar8 = PTR__swift_isaMask_11034f488;
          pcVar12 = (code *)((long)register0x00000008 + -0xb0);
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0xc0))();
          func_0x0001049c5784(0,uVar10);
          (*pcVar12)((undefined1 *)((long)register0x00000008 + -0xb0),0);
          puVar6 = puVar7;
          (**(code **)((*(ulong *)puVar8 & *puVar4) + 0xd8))();
          unaff_x25 = (ulong *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          _swift_getInitializedObjCClass();
          unaff_x26 = puVar6;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          _swift_bridgeObjectRelease(puVar6);
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          puVar5 = unaff_x25;
          unaff_x21 = (ulong *)PTR_s_dataWithJSONObject_options_error_1125b6c80;
          _objc_msgSend(unaff_x25,PTR_s_dataWithJSONObject_options_error_1125b6c80,unaff_x26,0,
                        (undefined1 *)((long)register0x00000008 + -0xb0));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          unaff_x20 = *(ulong **)((long)register0x00000008 + -0xb0);
          _objc_retain();
          puVar6 = puVar7;
          if (puVar5 == (ulong *)0x0) {
            _swift_release(puVar7);
            unaff_x21 = unaff_x20;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
            _objc_release(unaff_x20);
            _swift_willThrow();
            _objc_release(puVar4);
            (**(code **)(unaff_x23 + 8))
                      (*(undefined8 *)((long)register0x00000008 + -0xc0),unaff_x19);
            _swift_errorRelease(unaff_x21);
            unaff_x22 = unaff_x21;
          }
          else {
            puVar9 = puVar5;
            __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
            _objc_release(puVar5);
            (**(code **)(unaff_x23 + 0x10))
                      (unaff_x27,*(undefined8 *)((long)register0x00000008 + -0xc0),unaff_x19);
            __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
                      (unaff_x22,0x404e000000000000,unaff_x27,0);
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                      (&PTR____CFConstantStringClassReference_110dada18);
            __s10Foundation10URLRequestV10httpMethodSSSgvs();
            uVar13 = *(undefined8 *)((long)puVar4 + _DAT_1130a3540);
            uVar1 = ((undefined8 *)((long)puVar4 + _DAT_1130a3540))[1];
            _swift_bridgeObjectRetain(uVar1);
            __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                      (uVar13,uVar1,0x2d746e65746e6f43,0xec00000065707954);
            _swift_bridgeObjectRelease(uVar1);
            __s10Foundation10URLRequestV23httpShouldHandleCookiesSbvs(0);
            *(ulong **)((long)register0x00000008 + -0xf0) = unaff_x21;
            *(ulong **)((long)register0x00000008 + -0xe8) = puVar9;
            func_0x00010006c00c(puVar9,unaff_x21);
            __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(puVar9,unaff_x21);
            __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
                      (*(undefined8 *)((long)register0x00000008 + -0xd0),
                       *(undefined8 *)((long)register0x00000008 + -200),0x6567412d72657355,
                       0xea0000000000746e);
            unaff_x25 = (ulong *)PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
            _swift_getInitializedObjCClass();
            _objc_msgSend();
            _objc_retainAutoreleasedReturnValue();
            unaff_x20 = unaff_x25;
            __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
            puVar8 = &UNK_1107bbb20;
            _swift_allocObject(&UNK_1107bbb20,0x20,7);
            *(ulong **)(puVar8 + 0x10) = puVar4;
            *(undefined1 **)(puVar8 + 0x18) = puVar7;
            *(code **)((long)register0x00000008 + -0x90) = FUN_1049c5d54;
            *(undefined **)((long)register0x00000008 + -0x88) = puVar8;
            *(undefined **)((long)register0x00000008 + -0xb0) = PTR___NSConcreteStackBlock_11034bd00
            ;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x42000000;
            *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_1012d0a0c;
            *(undefined **)((long)register0x00000008 + -0x98) = &UNK_1107bbb38;
            unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xb0);
            __Block_copy();
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x88);
            _objc_retain();
            _swift_release(uVar13);
            unaff_x27 = unaff_x25;
            _objc_msgSend(unaff_x25,PTR_s_dataTaskWithRequest_completionHa_1125b6ba0,unaff_x20,
                          unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            __Block_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x20);
            _objc_msgSend(unaff_x27,PTR_s_resume_11262ce90);
            _objc_release(puVar4);
            _objc_release(unaff_x27);
            func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0xe8),
                                *(undefined8 *)((long)register0x00000008 + -0xf0));
            (**(code **)(*(long *)((long)register0x00000008 + -0xd8) + 8))
                      (unaff_x22,*(undefined8 *)((long)register0x00000008 + -0xe0));
            (**(code **)(unaff_x23 + 8))
                      (*(undefined8 *)((long)register0x00000008 + -0xc0),unaff_x19);
            unaff_x24 = puVar4;
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return;
    }
    unaff_x30 = FUN_1049c4be0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)puVar11;
    unaff_x28 = puVar6;
  } while( true );
}



/* Entry: 1049c4bec; end: 1049c4c8f;  */

void FUN_1049c4bec(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049c4c90; end: 1049c4e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c4c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  lVar9 = (long)&uStack_b0 - (*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = lVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(param_5 + _DAT_1130a3588);
  puVar4 = &UNK_1107bbb70;
  lStack_a8 = lVar3;
  _swift_allocObject(&UNK_1107bbb70,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(long *)(puVar4 + 0x20) = param_5;
  *(undefined8 *)(puVar4 + 0x28) = param_6;
  uStack_70 = 0x1049c5d5c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107bbb88;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  _swift_errorRetain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _swift_bridgeObjectRetain(param_6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  func_0x0001049c4c04(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar4);
  uVar7 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar8 = 0x112d4af98;
  FUN_1049c4208(0x112d4af98,0x11309c6f8,puVar1);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6)
  ;
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar9,ppuVar5);
  __Block_release(ppuVar5);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar11,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 1049c4e94; end: 1049c4f1f;  */

void FUN_1049c4e94(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    lVar2 = param_2;
    _swift_dynamicCastObjCClass(param_2,puVar1);
    if ((lVar2 != 0) && (_objc_msgSend(), 0xffffffffffffff9b < lVar2 - 300U)) {
      return;
    }
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_3) + 0xe8))(param_2,param_4);
  return;
}



/* Entry: 1049c4f20; end: 1049c4fb3; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory callCapiGatewayAPIWith:userAgent:] */

void FUN_1049c4f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_1);
  func_0x0001049c4434(param_3,param_4,puVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 1049c4fb4; end: 1049c513b;  */

undefined * FUN_1049c4fb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x98))(&uStack_80);
  if (lStack_78 == 0) {
    FUN_1049c32e8(uStack_80,0,uStack_70,uStack_68,uStack_60,uStack_58);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100214a84();
    _swift_release(puVar1);
  }
  else {
    _swift_bridgeObjectRetain(lStack_78);
    FUN_1049c32e8(uStack_80,lStack_78,uStack_70,uStack_68,uStack_60,uStack_58);
    puVar1 = (undefined *)0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    *(undefined8 *)(puVar1 + 0x20) = 0x61746164;
    *(undefined8 *)(puVar1 + 0x28) = 0xe400000000000000;
    uVar2 = 0x11309d5b0;
    func_0x0001048db364();
    *(undefined8 *)(puVar1 + 0x30) = param_1;
    *(undefined8 *)(puVar1 + 0x48) = uVar2;
    *(undefined8 *)(puVar1 + 0x50) = 0x654b737365636361;
    *(undefined **)(puVar1 + 0x78) = PTR___sSSN_11034da80;
    *(undefined8 *)(puVar1 + 0x58) = 0xe900000000000079;
    *(undefined8 *)(puVar1 + 0x60) = uStack_80;
    *(long *)(puVar1 + 0x68) = lStack_78;
    _swift_bridgeObjectRetain(param_1);
    puVar3 = puVar1;
    func_0x000100214a84(puVar1);
    _swift_setDeallocating(puVar1);
    uVar2 = 0x11309c418;
    func_0x0001048db364(0x11309c418);
    _swift_arrayDestroy(puVar1 + 0x20,2,uVar2);
  }
  return puVar3;
}



/* Entry: 1049c513c; end: 1049c51db; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory capiGatewayRequestDictionaryWith:] */

void FUN_1049c513c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1049c4fb4(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049c51dc; end: 1049c52ef;  */

void FUN_1049c51dc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong *unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x98))(&uStack_90);
  if (lStack_88 != 0) {
    lVar2 = 0x11309c7e0;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
    lVar3 = lVar2;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar2 + 0x20) = uStack_80;
    *(undefined8 *)(lVar2 + 0x28) = uStack_78;
    *(undefined **)(lVar2 + 0x60) = puVar1;
    *(long *)(lVar2 + 0x68) = lVar3;
    *(long *)(lVar2 + 0x40) = lVar3;
    *(undefined8 *)(lVar2 + 0x48) = uStack_70;
    *(undefined8 *)(lVar2 + 0x50) = uStack_68;
    _swift_bridgeObjectRetain(uStack_78);
    _swift_bridgeObjectRetain(uStack_68);
    FUN_1049c32e8(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0xd000000000000011,0x800000010f227910,lVar2);
  }
  return;
}



/* Entry: 1049c52f0; end: 1049c542f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c52f0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  undefined *puVar8;
  code *pcVar9;
  undefined1 auStack_60 [32];
  
  pcVar3 = (code *)auStack_60;
  if (param_1 == 0) {
    lVar7 = 0;
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    lVar7 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar1);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar7 != 0) {
      _objc_retain(param_1);
      lVar2 = lVar7;
      _objc_msgSend(lVar7,PTR_s_statusCode_1126725e0);
      lVar4 = *(long *)(*(long *)((long)unaff_x20 + _DAT_1130a3548) + 0x10);
      plVar5 = (long *)(*(long *)((long)unaff_x20 + _DAT_1130a3548) + 0x20);
      do {
        if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(param_1);
          return;
        }
        lVar6 = *plVar5;
        lVar4 = lVar4 + -1;
        plVar5 = plVar5 + 1;
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      } while (lVar6 != lVar2);
    }
  }
  puVar8 = param_2;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (param_2 == (undefined *)0x0) {
    _swift_retain(puVar1);
    puVar8 = puVar1;
  }
  pcVar9 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xc0);
  _swift_bridgeObjectRetain(param_2);
  (*pcVar9)();
  func_0x0001049c5948(0,0,puVar8);
  _swift_bridgeObjectRelease(puVar8);
  (*pcVar3)(auStack_60,0);
  _objc_release(lVar7);
  return;
}



/* Entry: 1049c5430; end: 1049c54b3; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory handleErrorWithResponse:events:] */

void FUN_1049c5430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049c52f0(param_3,param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1049c54b4; end: 1049c55a3;  */

void FUN_1049c54b4(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_60 [32];
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar2 = (code *)auStack_60;
  puVar3 = auStack_60;
  pcVar4 = (code *)auStack_60;
  puVar6 = param_1;
  if (param_1 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar6 = puVar1;
  }
  puVar1 = PTR__swift_isaMask_11034f488;
  pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0xc0);
  _swift_bridgeObjectRetain(param_1);
  (*pcVar7)();
  FUN_10499f010(puVar6);
  (*pcVar2)(auStack_60,0);
  (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0xb0))();
  uVar5 = *(ulong *)(puVar3 + 0x10);
  _swift_bridgeObjectRelease();
  if (1000 < uVar5) {
    (*pcVar7)();
    func_0x0001049c5784(0,uVar5 - 1000);
    (*pcVar4)(auStack_60,0);
  }
  return;
}



/* Entry: 1049c55a4; end: 1049c5607; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory appendEventsWithEvents:] */

void FUN_1049c55a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  FUN_1049c54b4(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1049c5608; end: 1049c5637;  */

void FUN_1049c5608(void)

{
  func_0x0001049c4248();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049c5638; end: 1049c56bf; -[_TtC12FBSDKCoreKit35FBSDKTransformerGraphRequestFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c5638(long param_1)

{
  undefined8 *puVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3540 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3548));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a3588));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a3580));
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a3550);
  FUN_1049c32e8(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a3558));
  return;
}



/* Entry: 1049c56c0; end: 1049c583f;  */

void FUN_1049c56c0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5774);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 8;
  uVar7 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  _swift_arrayDestroy(lVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5778);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c577c);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 8;
    uVar3 = lVar8 + 0x20 + param_2 * 8;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 8 <= uVar2) {
      _memmove(uVar2,uVar3,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5780);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5784);
  (*pcVar6)();
}



/* Entry: 1049c5840; end: 1049c5a17;  */

void FUN_1049c5840(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5938);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 8;
  uVar7 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  _swift_arrayDestroy(lVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c593c);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5940);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 8;
    uVar3 = lVar8 + 0x20 + param_2 * 8;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 8 <= uVar2) {
      _memmove(uVar2,uVar3,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5944);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
  if (*(long *)(param_4 + 0x10) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_arrayInitWithCopy_11034f238)(lVar1,param_4 + 0x20,param_3,uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1049c5948);
  (*pcVar6)();
}



/* Entry: 1049c5a18; end: 1049c5a23;  */

void FUN_1049c5a18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_lookUpClassMethod_11034f490)(param_1,param_2,&DAT_10e826b5c);
  return;
}



/* Entry: 1049c5a24; end: 1049c5b1f;  */

void FUN_1049c5a24(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049c5a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x98))();
  return;
}



/* Entry: 1049c5b20; end: 1049c5d53;  */

long FUN_1049c5b20(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1049c5d54; end: 1049c5d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c5d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar3 + -8);
  lVar10 = (long)&uStack_b0 - (*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lVar12 = lVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(lVar1 + _DAT_1130a3588);
  puVar5 = &UNK_1107bbb70;
  lStack_a8 = lVar4;
  _swift_allocObject(&UNK_1107bbb70,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(long *)(puVar5 + 0x20) = lVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uStack_70 = 0x1049c5d5c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1107bbb88;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  _swift_errorRetain(param_4);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _swift_bridgeObjectRetain(uVar7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  func_0x0001049c4c04(0x112d4af88,puVar2,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar5);
  uVar8 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar9 = 0x112d4af98;
  FUN_1049c4208(0x112d4af98,0x11309c6f8,puVar2);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_98,uVar8,uVar9,lVar3,uVar7);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,lVar10,ppuVar6);
  __Block_release(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar3);
  (**(code **)(lVar11 + 8))(lVar12,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 1049c5d68; end: 1049c5d77;  */

void FUN_1049c5d68(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049c5d78; end: 1049c5ffb;  */

void FUN_1049c5d78(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    func_0x000100403514(0,lVar9,0);
    uVar1 = param_1 + 0x38;
    uVar6 = ~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
    uVar13 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg();
    lVar14 = 0;
    uVar5 = uVar13;
    do {
      if (((long)uVar5 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049c5fec);
        (*pcVar4)();
      }
      uVar15 = uVar5 >> 6;
      uVar10 = 1L << (uVar5 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar15 * 8) & uVar10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049c5ff0);
        (*pcVar4)();
      }
      uVar2 = *(uint *)(param_1 + 0x24);
      uVar7 = (ulong)uVar2;
      puVar8 = (ulong *)(*(long *)(param_1 + 0x30) + uVar5 * 0x10);
      uVar16 = puVar8[1];
      uVar12 = *puVar8;
      func_0x0001049cda60();
      if (((uint)uVar13 & 0xff) == 0x25) {
        if (uVar16 < 0x25) {
          uVar6 = 0xe000000000000000;
          uVar12 = 0;
        }
        else {
          uVar13 = uVar12;
          func_0x000104994534(uVar12,uVar16);
          uVar6 = uVar16;
        }
      }
      else {
        func_0x0001049cda74();
        uVar12 = uVar13;
      }
      uVar16 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar16) {
        uVar13 = (ulong)(1 < *(ulong *)(puVar3 + 0x18));
        func_0x000100403514(uVar13,uVar16 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar16 + 1;
      *(ulong *)(puVar3 + uVar16 * 0x10 + 0x20) = uVar12;
      *(ulong *)(puVar3 + uVar16 * 0x10 + 0x28) = uVar6;
      uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar12 <= (long)uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049c5ff4);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar15 * 8);
      if ((uVar6 & uVar10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049c5ff8);
        (*pcVar4)();
      }
      if (uVar2 != *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1049c5ffc);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar5 & 0x3f);
      if (uVar6 == 0) {
        lVar11 = uVar15 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar15 * 8);
        do {
          uVar15 = uVar15 + 1;
          if (uVar12 + 0x3f >> 6 <= uVar15) {
            func_0x0001048ee5f8(uVar5,uVar7,0);
            uVar13 = uVar5;
            goto LAB_1049c5e1c;
          }
          uVar13 = *puVar8;
          lVar11 = lVar11 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar13 == 0);
        func_0x0001048ee5f8(uVar5,uVar7,0);
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar11;
        uVar13 = uVar5;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
LAB_1049c5e1c:
      lVar14 = lVar14 + 1;
      uVar6 = uVar7;
      uVar5 = uVar12;
    } while (lVar14 != lVar9);
  }
  return;
}



/* Entry: 1049c5ffc; end: 1049c607f;  */

void FUN_1049c5ffc(long param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar3;
      uStack_38 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      FUN_1049c8648(&uStack_38,param_2);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(uVar1);
        return;
      }
      _swift_bridgeObjectRelease(uVar1);
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 1049c6080; end: 1049c60b3;  */

undefined8 FUN_1049c6080(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1049c8abc();
  return unaff_x20;
}



/* Entry: 1049c60b4; end: 1049c6173;  */

undefined * FUN_1049c60b4(void)

{
  return &UNK_10dd4acd0;
}



/* Entry: 1049c6174; end: 1049c624b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c6174(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a35b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a35b8,auStack_48,0,0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,lVar2);
  return;
}



/* Entry: 1049c624c; end: 1049c62e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049c624c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130a35b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a35b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1049c628c;
  return auVar2;
}



/* Entry: 1049c62e8; end: 1049c635b;  */

undefined8
FUN_1049c62e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType(param_2);
  _swift_getObjectType(param_3);
  _swift_getObjectType(param_4);
  return param_1;
}



/* Entry: 1049c635c; end: 1049c6493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049c635c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c8);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  FUN_1049c8bbc(uVar2,puVar1[1],puVar1[2],puVar1[3]);
  return uVar2;
}



/* Entry: 1049c6494; end: 1049c682b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c6494(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(plVar1,auStack_78,0,0);
  lVar2 = *plVar1;
  uVar5 = plVar1[1];
  lVar3 = plVar1[2];
  lVar4 = plVar1[3];
  uVar8 = uVar5;
  lVar9 = lVar3;
  lVar10 = lVar4;
  if (lVar2 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a35c8);
    _swift_beginAccess(plVar1,auStack_90,0,0);
    if (*plVar1 == 0) {
      return;
    }
    lVar9 = plVar1[2];
    lVar10 = plVar1[3];
    uVar8 = plVar1[1];
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(lVar9);
    _swift_unknownObjectRetain(lVar10);
  }
  FUN_1049c8bbc(lVar2,uVar5,lVar3,lVar4);
  uVar5 = uVar8;
  puVar7 = PTR_s_appID_11259ee40;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar5);
    _swift_bridgeObjectRelease(puVar7);
    uVar5 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      uVar5 = param_1;
      _objc_msgSend(param_1,PTR_s_requests_11262b708);
      _objc_retainAutoreleasedReturnValue();
      _swift_retain();
      uVar6 = uVar5;
      FUN_1049c8d1c();
      _objc_release(uVar5);
      _swift_release();
      if ((uVar6 & 1) != 0) {
        FUN_1049c682c(param_1);
        func_0x0001049c6b70(param_1);
      }
    }
  }
  _swift_unknownObjectRelease(lVar10);
  _swift_unknownObjectRelease(lVar9);
  _swift_unknownObjectRelease(uVar8);
  return;
}



/* Entry: 1049c682c; end: 1049c6ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c682c(double param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar5 = 0;
  uStack_108 = param_2;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_f8 = (long)&lStack_110 - uVar8;
  lVar14 = lStack_f8 - uVar8;
  lStack_100 = lVar14 - uVar8;
  lVar11 = lStack_100 - uVar8;
  plVar1 = (long *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(plVar1,auStack_90,0,0);
  lVar6 = *plVar1;
  lVar3 = plVar1[1];
  lVar2 = plVar1[2];
  lVar4 = plVar1[3];
  lVar10 = lVar3;
  lVar12 = lVar2;
  lVar15 = lVar6;
  lStack_e8 = lVar4;
  if (lVar6 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a35c8);
    _swift_beginAccess(plVar1,auStack_a8,0,0);
    lVar15 = *plVar1;
    if (lVar15 == 0) {
      return;
    }
    lVar12 = plVar1[2];
    lStack_e8 = plVar1[3];
    lVar10 = plVar1[1];
    lStack_110 = lVar5;
    _swift_unknownObjectRetain(lVar10);
    _swift_unknownObjectRetain(lVar12);
    lVar5 = lStack_110;
    _swift_unknownObjectRetain(lStack_e8);
  }
  FUN_1049c8bbc(lVar6,lVar3,lVar2,lVar4);
  __s10Foundation4DateVACycfC(lVar11);
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    _swift_unknownObjectRelease(lStack_e8);
    _swift_unknownObjectRelease(lVar12);
    _swift_unknownObjectRelease(lVar10);
    (**(code **)(lVar7 + 8))(lVar11,lVar5);
  }
  else {
    lVar6 = lVar15;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar14,lVar6);
    _objc_release(lVar6);
    lVar2 = lStack_100;
    (**(code **)(lVar7 + 0x20))(lStack_100,lVar14,lVar5);
    lVar6 = _DAT_1130a35b8;
    _swift_beginAccess(unaff_x20 + _DAT_1130a35b8,auStack_c0,0,0);
    lVar3 = lStack_f8;
    (**(code **)(lVar7 + 0x10))(lStack_f8,unaff_x20 + lVar6,lVar5);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar3);
    pcVar13 = *(code **)(lVar7 + 8);
    (*pcVar13)(lVar3,lVar5);
    dVar9 = 3600.0;
    if ((param_1 <= 3600.0) ||
       (__s10Foundation4DateV17timeIntervalSinceySdACF(lVar2), dVar9 <= 86400.0)) {
      _swift_unknownObjectRelease(lStack_e8);
      _swift_unknownObjectRelease(lVar12);
      _swift_unknownObjectRelease(lVar10);
      (*pcVar13)(lVar2,lVar5);
      (*pcVar13)(lVar11,lVar5);
    }
    else {
      FUN_1049c6f38(uStack_108,0,0);
      __s10Foundation4DateVACycfC(lVar3);
      _swift_unknownObjectRelease(lStack_e8);
      _swift_unknownObjectRelease(lVar12);
      _swift_unknownObjectRelease(lVar10);
      (*pcVar13)(lVar2,lVar5);
      (*pcVar13)(lVar11,lVar5);
      _swift_beginAccess(unaff_x20 + lVar6,auStack_d8,0x21,0);
      (**(code **)(lVar7 + 0x28))(unaff_x20 + lVar6,lVar3,lVar5);
      _swift_endAccess(auStack_d8);
    }
  }
  return;
}



/* Entry: 1049c6ef4; end: 1049c6f37; -[_TtC12FBSDKCoreKit28GraphRequestPiggybackManager addPiggybackRequests:] */

void FUN_1049c6ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_1);
  FUN_1049c6494(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1049c6f38; end: 1049c7757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c6f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  long lStack_208;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [80];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(plVar1,auStack_90,0,0);
  lVar4 = *plVar1;
  lVar6 = plVar1[1];
  lVar5 = plVar1[2];
  lVar7 = plVar1[3];
  lVar18 = lVar4;
  lStack_208 = lVar7;
  lStack_1f0 = lVar5;
  lStack_1e8 = lVar6;
  if (lVar4 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a35c8);
    _swift_beginAccess(plVar1,auStack_a8,0,0);
    lVar18 = *plVar1;
    if (lVar18 == 0) {
      return;
    }
    lStack_1f0 = plVar1[2];
    lStack_208 = plVar1[3];
    lStack_1e8 = plVar1[1];
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(lStack_1f0);
    _swift_unknownObjectRetain(lStack_208);
  }
  lVar2 = lVar18;
  _swift_getObjCClassFromMetadata();
  FUN_1049c8bbc(lVar4,lVar6,lVar5,lVar7);
  _objc_msgSend(lVar2,PTR_s_currentAccessToken_1125b5168);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _swift_unknownObjectRelease(lStack_208);
  }
  else {
    puVar3 = &UNK_1107bbc20;
    _swift_allocObject(&UNK_1107bbc20,0x28,7);
    lVar4 = lVar2;
    _objc_msgSend(lVar2,PTR_s_permissions_11261c190);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x000104994570();
    _swift_bridgeObjectRelease(lVar5);
    lVar5 = lVar4;
    FUN_1048ee3f4();
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = lVar2;
    _objc_msgSend(lVar2,PTR_s_declinedPermissions_1125b7498);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010499455c();
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar4;
    FUN_1048ee3f4();
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = lVar2;
    _objc_msgSend(lVar2,PTR_s_expiredPermissions_1125c4c28);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
    _objc_release(lVar4);
    lVar4 = lVar7;
    func_0x000104994584();
    _swift_bridgeObjectRelease(lVar7);
    lVar7 = lVar4;
    FUN_1048ee3f4();
    _swift_bridgeObjectRelease(lVar4);
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = lVar6;
    *(long *)(puVar3 + 0x20) = lVar7;
    puVar8 = &UNK_1107bbc48;
    _swift_allocObject(&UNK_1107bbc48,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0;
    puVar10 = &UNK_1107bbc70;
    puVar9 = puVar10;
    _swift_allocObject(&UNK_1107bbc70,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = 0;
    _swift_allocObject(&UNK_1107bbc70,0x18,7);
    *(undefined8 *)(puVar10 + 0x10) = 0;
    puVar11 = &UNK_1107bbc98;
    _swift_allocObject(&UNK_1107bbc98,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = 2;
    puVar12 = &UNK_1107bbcc0;
    _swift_allocObject(&UNK_1107bbcc0,0x60,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(long *)(puVar12 + 0x18) = lVar18;
    *(long *)(puVar12 + 0x20) = lStack_1e8;
    *(long *)(puVar12 + 0x28) = lStack_1f0;
    *(long *)(puVar12 + 0x30) = lStack_208;
    *(undefined **)(puVar12 + 0x38) = puVar9;
    *(undefined **)(puVar12 + 0x40) = puVar10;
    *(undefined **)(puVar12 + 0x48) = puVar3;
    *(undefined **)(puVar12 + 0x50) = puVar8;
    *(long *)(puVar12 + 0x58) = lVar2;
    _swift_retain(puVar11);
    _swift_unknownObjectRetain(lStack_1e8);
    _swift_unknownObjectRetain(lStack_1f0);
    _swift_unknownObjectRetain(lStack_208);
    _swift_retain(puVar9);
    _swift_retain(puVar10);
    _swift_retain(puVar3);
    _swift_retain(puVar8);
    _objc_retain();
    uVar13 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f21bf90);
    lVar4 = 0x11309c610;
    func_0x0001048db364();
    lVar5 = lVar4;
    _swift_initStackObject();
    *(undefined8 *)(lVar5 + 0x18) = 6;
    *(undefined8 *)(lVar5 + 0x10) = 3;
    *(undefined8 *)(lVar5 + 0x20) = 0x79745f746e617267;
    *(undefined8 *)(lVar5 + 0x28) = 0xea00000000006570;
    *(undefined8 *)(lVar5 + 0x30) = 0xd000000000000013;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010f227930;
    puVar14 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar5 + 0x50) = 0x73646c656966;
    *(undefined8 *)(lVar5 + 0x58) = 0xe600000000000000;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0xe000000000000000;
    *(undefined **)(lVar5 + 0x78) = puVar14;
    *(undefined8 *)(lVar5 + 0x80) = 0x695f746e65696c63;
    *(undefined8 *)(lVar5 + 0x88) = 0xe900000000000064;
    lVar6 = lVar2;
    puVar17 = PTR_s_appID_11259ee40;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar6);
    *(undefined **)(lVar5 + 0xa8) = puVar14;
    *(long *)(lVar5 + 0x90) = lVar7;
    *(undefined **)(lVar5 + 0x98) = puVar17;
    lVar6 = lVar5;
    func_0x000100214a84(lVar5);
    _swift_setDeallocating(lVar5);
    uVar16 = 0x11309c418;
    func_0x0001048db364(0x11309c418);
    _swift_arrayDestroy((undefined8 *)(lVar5 + 0x20),3,uVar16);
    lVar5 = lVar6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar6,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lStack_208;
    _objc_msgSend(lStack_208,PTR_s_createGraphRequestWithGraphPath__112525138,uVar13,lVar5,8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(lVar5);
    puVar14 = &UNK_1107bbce8;
    _swift_allocObject(&UNK_1107bbce8,0x38,7);
    *(code **)(puVar14 + 0x10) = FUN_1049c90ac;
    *(undefined **)(puVar14 + 0x18) = puVar12;
    *(undefined **)(puVar14 + 0x20) = puVar8;
    *(undefined **)(puVar14 + 0x28) = puVar9;
    *(undefined **)(puVar14 + 0x30) = puVar10;
    pcStack_170 = FUN_1049c90e0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0x42000000;
    pcStack_180 = FUN_1049c81d0;
    puStack_178 = &UNK_1107bbd00;
    ppuVar15 = &puStack_190;
    puStack_168 = puVar14;
    __Block_copy(ppuVar15);
    puVar14 = puStack_168;
    _swift_retain(puVar9);
    _swift_retain(puVar10);
    _swift_retain(puVar8);
    _swift_retain(puVar12);
    _swift_release(puVar14);
    _objc_msgSend(param_1,PTR_s_addRequest_completion__11259c598,lVar6,ppuVar15);
    __Block_release(ppuVar15);
    uVar16 = 0x696d7265702f656d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x696d7265702f656d,0xee00736e6f697373);
    _swift_initStackObject(lVar4,auStack_1e0);
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = 0x73646c656966;
    puVar14 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar4 + 0x28) = 0xe600000000000000;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0xe000000000000000;
    lVar5 = lVar4;
    func_0x000100214a84();
    _swift_setDeallocating(lVar4);
    FUN_1049c9438((undefined8 *)(lVar4 + 0x20),0x11309c418);
    lVar4 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,puVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar5);
    lVar5 = lStack_208;
    _objc_msgSend(lStack_208,PTR_s_createGraphRequestWithGraphPath__112525138,uVar16,lVar4,8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(lVar4);
    puVar14 = &UNK_1107bbd38;
    _swift_allocObject(&UNK_1107bbd38,0x40,7);
    *(code **)(puVar14 + 0x10) = FUN_1049c90ac;
    *(undefined **)(puVar14 + 0x18) = puVar12;
    *(undefined8 *)(puVar14 + 0x20) = param_2;
    *(undefined8 *)(puVar14 + 0x28) = param_3;
    *(long *)(puVar14 + 0x30) = unaff_x20;
    *(undefined **)(puVar14 + 0x38) = puVar3;
    pcStack_170 = (code *)0x1049c90f0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0x42000000;
    pcStack_180 = FUN_1049c81d0;
    puStack_178 = &UNK_1107bbd50;
    ppuVar15 = &puStack_190;
    puStack_168 = puVar14;
    __Block_copy();
    puVar14 = puStack_168;
    _swift_retain(puVar3);
    _swift_retain(puVar12);
    FUN_1049c912c(param_2,param_3);
    _swift_retain(unaff_x20);
    _swift_release(puVar14);
    _objc_msgSend(param_1,PTR_s_addRequest_completion__11259c598,lVar5,ppuVar15);
    __Block_release(ppuVar15);
    _swift_unknownObjectRelease(lStack_208);
    _swift_unknownObjectRelease(lStack_1f0);
    _swift_unknownObjectRelease(lStack_1e8);
    _objc_release(lVar2);
    _swift_release(puVar3);
    _swift_release(puVar8);
    _swift_release(puVar9);
    _swift_release(puVar10);
    _swift_release(puVar11);
    _swift_release(puVar12);
    lStack_1f0 = lVar6;
    lStack_1e8 = lVar5;
  }
  _swift_unknownObjectRelease(lStack_1f0);
  _swift_unknownObjectRelease(lStack_1e8);
  return;
}



/* Entry: 1049c7758; end: 1049c81cf;  */

void FUN_1049c7758(double param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long in_x5;
  long in_x6;
  long in_x7;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long in_stack_00000000;
  ulong in_stack_00000008;
  long alStack_190 [4];
  undefined1 auStack_170 [8];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = 0x11309c628;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_130 = auStack_170 + -uVar10;
  lStack_138 = (long)puStack_130 - uVar10;
  lVar12 = lStack_138 - uVar10;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar2 + -8);
  uVar10 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar12 - uVar10;
  lStack_120 = lVar14 - uVar10;
  lVar19 = lStack_120 - uVar10;
  lVar11 = lVar19 - uVar10;
  lStack_128 = lVar11;
  _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
  lVar3 = *(long *)(param_2 + 0x10) + -1;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = lVar3;
    if (lVar3 == 0) {
      _swift_getObjCClassFromMetadata();
      lVar3 = param_3;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lStack_168 = param_3;
        lStack_140 = lVar3;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lStack_128);
        _objc_release(lVar3);
        _swift_beginAccess(in_x5 + 0x10,auStack_98,0,0);
        lVar3 = *(long *)(in_x5 + 0x10);
        if (lVar3 != 0) {
          _objc_retain();
          _objc_msgSend();
          if (param_1 <= 0.0) {
            __s10Foundation4DateV13distantFutureACvgZ(lVar19);
          }
          else {
            _objc_msgSend(lVar3,PTR_s_doubleValue_1125bfb10);
            __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar19);
          }
          _objc_release(lVar3);
          lVar3 = lStack_128;
          (**(code **)(lVar20 + 8))(lStack_128,lVar2);
          (**(code **)(lVar20 + 0x20))(lVar3,lVar19,lVar2);
        }
        lVar3 = lStack_140;
        _objc_msgSend(lStack_140,PTR_s_dataAccessExpirationDate_1125b6740);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lStack_120);
        _objc_release(lVar3);
        _swift_beginAccess(in_x6 + 0x10,auStack_b0,0,0);
        lVar3 = *(long *)(in_x6 + 0x10);
        if (lVar3 != 0) {
          _objc_retain();
          _objc_msgSend();
          if (param_1 <= 0.0) {
            __s10Foundation4DateV13distantFutureACvgZ(lVar14);
          }
          else {
            _objc_msgSend(lVar3,PTR_s_doubleValue_1125bfb10);
            __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar14);
          }
          _objc_release(lVar3);
          lVar3 = lStack_120;
          (**(code **)(lVar20 + 8))(lStack_120,lVar2);
          (**(code **)(lVar20 + 0x20))(lVar3,lVar14,lVar2);
        }
        _swift_beginAccess(in_x7 + 0x10,auStack_c8,0,0);
        uVar16 = *(undefined8 *)(in_x7 + 0x10);
        uVar4 = uVar16;
        _swift_bridgeObjectRetain(uVar16);
        FUN_1049c5d78();
        _swift_bridgeObjectRelease(uVar16);
        _swift_beginAccess(in_x7 + 0x10,auStack_e8,0,0);
        uVar17 = *(undefined8 *)(in_x7 + 0x18);
        uVar16 = uVar17;
        _swift_bridgeObjectRetain();
        FUN_1049c5d78();
        uStack_148 = uVar16;
        _swift_bridgeObjectRelease(uVar17);
        _swift_beginAccess(in_x7 + 0x10,auStack_100,0,0);
        uVar17 = *(undefined8 *)(in_x7 + 0x20);
        uVar16 = uVar17;
        _swift_bridgeObjectRetain();
        FUN_1049c5d78();
        puStack_150 = (undefined *)uVar16;
        _swift_bridgeObjectRelease(uVar17);
        _swift_beginAccess(in_stack_00000000 + 0x10,auStack_118,0,0);
        lVar3 = lStack_140;
        puVar5 = *(undefined **)(in_stack_00000000 + 0x18);
        if (puVar5 == (undefined *)0x0) {
          lVar14 = lStack_140;
          puVar9 = PTR_s_tokenString_11267a6c8;
          _objc_msgSend(lStack_140,PTR_s_tokenString_11267a6c8);
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar14;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(lVar14);
          puVar5 = (undefined *)0x0;
        }
        else {
          lVar19 = *(long *)(in_stack_00000000 + 0x10);
          puVar9 = puVar5;
        }
        puVar1 = puStack_130;
        lVar14 = lStack_138;
        _swift_bridgeObjectRetain(puVar5);
        lVar6 = lVar3;
        puVar5 = PTR_s_appID_11259ee40;
        _objc_msgSend(lVar3,PTR_s_appID_11259ee40);
        _objc_retainAutoreleasedReturnValue();
        puStack_130 = (undefined1 *)lVar6;
        if (lVar6 == 0) {
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          puStack_130 = (undefined1 *)lVar6;
          _swift_bridgeObjectRelease(puVar5);
        }
        puVar5 = PTR_s_userID_112682300;
        _objc_msgSend(lVar3,PTR_s_userID_112682300);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(puVar5);
        }
        pcVar15 = *(code **)(lVar20 + 0x10);
        lStack_138 = lVar3;
        (*pcVar15)(lVar12,lStack_128,lVar2);
        pcVar18 = *(code **)(lVar20 + 0x38);
        (*pcVar18)(lVar12,0,1,lVar2);
        __s10Foundation4DateVACycfC(lVar14);
        (*pcVar18)(lVar14,0,1,lVar2);
        (*pcVar15)(puVar1,lStack_120,lVar2);
        (*pcVar18)(puVar1,0,1,lVar2);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar19,puVar9);
        lStack_158 = lVar19;
        _swift_bridgeObjectRelease(puVar9);
        puVar5 = PTR___sSSN_11034da80;
        uVar16 = uVar4;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,PTR___sSSN_11034da80);
        _swift_bridgeObjectRelease(uVar4);
        uVar10 = uStack_148;
        uVar7 = uStack_148;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_148,puVar5);
        _swift_bridgeObjectRelease(uVar10);
        puVar9 = puStack_150;
        puVar8 = puStack_150;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_150,puVar5);
        _swift_bridgeObjectRelease(puVar9);
        pcVar15 = *(code **)(lVar20 + 0x30);
        lVar3 = lVar12;
        (*pcVar15)(lVar12,1,lVar2);
        if ((int)lVar3 == 1) {
          lVar3 = 0;
        }
        else {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar20 + 8))(lVar12,lVar2);
        }
        uStack_148 = in_stack_00000008;
        lVar12 = lVar14;
        (*pcVar15)(lVar14,1,lVar2);
        if ((int)lVar12 == 1) {
          lVar12 = 0;
        }
        else {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar20 + 8))(lVar14,lVar2);
        }
        puVar13 = puVar1;
        (*pcVar15)(puVar1,1,lVar2);
        lStack_160 = lVar20;
        if ((int)puVar13 == 1) {
          puVar13 = (undefined1 *)0x0;
        }
        else {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar20 + 8))(puVar1,lVar2);
        }
        puVar5 = PTR_PTR_1126add30;
        _objc_allocWithZone();
        *(long *)(lVar11 + -0x18) = lVar12;
        *(undefined1 **)(lVar11 + -0x10) = puVar13;
        *(long *)(lVar11 + -0x20) = lVar3;
        puVar1 = puStack_130;
        lVar14 = lStack_138;
        lVar11 = lStack_158;
        _objc_msgSend();
        puStack_150 = puVar5;
        _objc_release(lVar11);
        _objc_release(uVar16);
        _objc_release(uVar7);
        _objc_release(puVar8);
        _objc_release(puVar1);
        _objc_release(lVar14);
        _objc_release(lVar3);
        _objc_release(lVar12);
        _objc_release(puVar13);
        FUN_1049c9580(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        lVar3 = lStack_140;
        uVar10 = uStack_148;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uStack_148,lStack_140);
        puVar5 = puStack_150;
        if ((uVar10 & 1) != 0) {
          _objc_msgSend(lStack_168,PTR_s_setCurrentAccessToken__11263f5e0,puStack_150);
        }
        _objc_release(puVar5);
        _objc_release(lVar3);
        pcVar15 = *(code **)(lStack_160 + 8);
        (*pcVar15)(lStack_120,lVar2);
        (*pcVar15)(lStack_128,lVar2);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1049c7ed8);
  (*pcVar15)();
}



/* Entry: 1049c81d0; end: 1049c8297;  */

void FUN_1049c81d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_80 [3];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    lVar3 = param_3;
    _swift_getObjectType();
    alStack_80[0] = param_3;
    lStack_68 = lVar3;
    func_0x000100102924(alStack_80,&uStack_60);
  }
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,&uStack_60,param_4);
  _swift_unknownObjectRelease(param_2);
  _swift_release(uVar2);
  _objc_release(uVar4);
  FUN_1049c9438(&uStack_60,0x11309c428);
  return;
}



/* Entry: 1049c8298; end: 1049c849f;  */

void FUN_1049c8298(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_98 [3];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000100672b50(param_2,auStack_80);
  if (lStack_68 == 0) {
    FUN_1049c9438(auStack_80,0x11309c428);
  }
  else {
    uVar3 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar4 = auStack_98;
    _swift_dynamicCast(puVar4,auStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      _swift_beginAccess(param_9 + 0x10,auStack_80,0,0);
      uVar3 = *(undefined8 *)(param_9 + 0x10);
      uVar1 = *(undefined8 *)(param_9 + 0x18);
      uVar7 = *(undefined8 *)(param_9 + 0x20);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      uVar8 = auStack_98[0];
      uVar5 = uVar3;
      uVar6 = uVar1;
      FUN_1049c9474();
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(auStack_98[0]);
      _swift_beginAccess(param_9 + 0x10,auStack_98,1,0);
      uVar3 = *(undefined8 *)(param_9 + 0x10);
      uVar1 = *(undefined8 *)(param_9 + 0x18);
      uVar7 = *(undefined8 *)(param_9 + 0x20);
      *(undefined8 *)(param_9 + 0x10) = uVar8;
      *(undefined8 *)(param_9 + 0x18) = uVar5;
      *(undefined8 *)(param_9 + 0x20) = uVar6;
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar3);
      (*param_4)();
      goto joined_r0x0001049c8498;
    }
  }
  if (param_3 == 0) {
    _swift_beginAccess(param_9 + 0x10,auStack_80,1,0);
    puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
    uVar3 = *(undefined8 *)(param_9 + 0x10);
    uVar1 = *(undefined8 *)(param_9 + 0x18);
    uVar8 = *(undefined8 *)(param_9 + 0x20);
    *(undefined **)(param_9 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined **)(param_9 + 0x18) = puVar2;
    *(undefined **)(param_9 + 0x20) = puVar2;
    _swift_retain_n(puVar2,3);
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar3);
    (*param_4)();
    param_3 = 0;
  }
  else {
    (*param_4)();
  }
joined_r0x0001049c8498:
  if (param_6 != (code *)0x0) {
    (*param_6)(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 1049c84a0; end: 1049c853b; -[_TtC12FBSDKCoreKit28GraphRequestPiggybackManager addRefreshPiggyback:permissionHandler:] */

void FUN_1049c84a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1107bbe48;
    _swift_allocObject(&UNK_1107bbe48,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1049c9430;
  }
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_1);
  FUN_1049c6f38(param_3,pcVar2,puVar1);
  func_0x0001049c9420(pcVar2,puVar1);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1049c853c; end: 1049c8647;  */

void FUN_1049c853c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000100672b50(param_2,auStack_70);
  if (lStack_58 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = auStack_70;
    func_0x0001006732c8(puVar1,lStack_58);
    lVar3 = *(long *)(lStack_58 + -8);
    puVar2 = auStack_70 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2,puVar1,lStack_58);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,lStack_58);
    (**(code **)(lVar3 + 8))(puVar2,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  if (param_3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,puVar1,param_3);
  _swift_unknownObjectRelease(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1049c8648; end: 1049c88e3;  */

void FUN_1049c8648(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar5 = 0;
  uVar4 = 0;
  lVar8 = *param_1;
  if (*(long *)(lVar8 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(lVar8);
  lVar2 = 0x697373696d726570;
  uVar6 = 0xea00000000006e6f;
  func_0x000100029284(0x697373696d726570);
  if ((uVar6 & 1) == 0) {
LAB_1049c87f0:
    _swift_bridgeObjectRelease(lVar8);
    return;
  }
  func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar2 * 0x20,&lStack_60);
  _swift_bridgeObjectRelease(lVar8);
  puVar1 = PTR___sypN_11034f1a8;
  _swift_dynamicCast(&lStack_70,&lStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar7 = lStack_68;
  lVar2 = lStack_70;
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1049c87dc:
    _swift_bridgeObjectRelease(lVar7);
    return;
  }
  _swift_bridgeObjectRetain(lVar8);
  lVar3 = 0x737574617473;
  uVar5 = 0;
  func_0x000100029284(0x737574617473);
  if ((uVar5 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar7);
    goto LAB_1049c87f0;
  }
  func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar3 * 0x20,&lStack_60);
  _swift_bridgeObjectRelease(lVar8);
  _swift_dynamicCast(&lStack_70,&lStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
  if ((uVar4 & 1) == 0) goto LAB_1049c87dc;
  _swift_bridgeObjectRetain(lVar7);
  lVar8 = lVar2;
  func_0x0001049ce198(lVar2,lVar7);
  if (((uint)lVar8 & 0xff) != 0x25) {
    _swift_bridgeObjectRelease(lVar7);
    FUN_1049cd7fc(&lStack_60,lVar8);
    lVar7 = lStack_58;
    lVar2 = lStack_60;
  }
  uVar5 = 0x6465746e617267;
  if (((lStack_70 == 0x6465746e617267) && (lStack_68 == -0x1900000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6465746e617267,0xe700000000000000,lStack_70,lStack_68,0), (uVar5 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_68);
  }
  else {
    uVar5 = 0;
    if (((lStack_70 == 0x64656e696c636564) && (lStack_68 == -0x1800000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x64656e696c636564,0xe800000000000000,lStack_70,lStack_68,0), (uVar5 & 1) != 0))
    {
      _swift_bridgeObjectRelease(lStack_68);
    }
    else {
      uVar5 = 0x64657269707865;
      if ((lStack_70 == 0x64657269707865) && (lStack_68 == -0x1900000000000000)) {
        _swift_bridgeObjectRelease(0xe700000000000000);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x64657269707865,0xe700000000000000,lStack_70,lStack_68,0);
        _swift_bridgeObjectRelease(lStack_68);
        if ((uVar5 & 1) == 0) goto LAB_1049c8870;
      }
    }
  }
  FUN_1049df230(&lStack_60,lVar2,lVar7);
  lVar2 = lStack_60;
  lVar7 = lStack_58;
LAB_1049c8870:
  func_0x000104994548(lVar2,lVar7);
  return;
}



/* Entry: 1049c88e4; end: 1049c89cf;  */

void FUN_1049c88e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x000100672b50(param_2,auStack_80);
  if (lStack_68 == 0) {
    FUN_1049c9438(auStack_80,0x11309c428);
  }
  else {
    func_0x000100102924(auStack_80,auStack_60);
    puVar1 = auStack_60;
    func_0x0001006732c8(puVar1,uStack_48);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    if (param_3 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8,param_9);
    _objc_msgSend(param_6,PTR_s_processLoadRequestResponse_error_112622dc0,puVar1,param_3,param_8);
    _swift_unknownObjectRelease(puVar1);
    _objc_release(param_3);
    _objc_release(param_8);
    func_0x000100183ab8(auStack_60);
  }
  return;
}



/* Entry: 1049c89d0; end: 1049c8abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c89d0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_1130a35b8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar2,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c0);
  func_0x0001049b18f4(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c8);
  func_0x0001049b18f4(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return;
}



/* Entry: 1049c8abc; end: 1049c8bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c8abc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  __s10Foundation4DateV11distantPastACvgZ(unaff_x20 + _DAT_1130a35b8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_1130a35c8;
  uVar3 = 0;
  FUN_1049c9580(0,0x11309cb98,&PTR_PTR_1126add30);
  if (lRam000000011309ff80 != -1) {
    _swift_once(0x11309ff80,FUN_1049e4894);
  }
  uVar5 = uRam00000001130a3c58;
  puVar1 = (undefined8 *)(unaff_x20 + lVar2);
  puVar4 = PTR_PTR_1126ade20;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_msgSend(puVar4,PTR_s_shared_1126687d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1[2] = puVar4;
  puVar1[3] = puVar6;
  return;
}



/* Entry: 1049c8bbc; end: 1049c8c13;  */

void FUN_1049c8bbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_4);
    return;
  }
  return;
}



/* Entry: 1049c8c14; end: 1049c8c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c8c14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  FUN_1049c8bbc();
  return;
}



/* Entry: 1049c8c20; end: 1049c8cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c8c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c0);
  _swift_beginAccess(puVar1,auStack_38,1,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  uVar8 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  func_0x0001049b18f4(uVar2,uVar4,uVar3,uVar5);
  return;
}



/* Entry: 1049c8cb8; end: 1049c8cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c8cb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a35c8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  FUN_1049c8bbc();
  return;
}



/* Entry: 1049c8cc4; end: 1049c8d17;  */

void FUN_1049c8cc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_4);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  FUN_1049c8bbc();
  return;
}



/* Entry: 1049c8d18; end: 1049c8d1b;  */

void FUN_1049c8d18(void)

{
  return;
}



/* Entry: 1049c8d1c; end: 1049c9087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049c8d1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_130;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  ulong uStack_58;
  
  lVar6 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lStack_130 = *(long *)(lVar6 + -8);
  lVar17 = (long)&lStack_130 - (*(long *)(lStack_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(lVar17);
  plVar1 = (long *)(param_2 + _DAT_1130a35c0);
  plVar2 = (long *)(param_2 + _DAT_1130a35c8);
  _swift_beginAccess(plVar1,auStack_a0,0,0);
  plVar7 = plVar2;
  _swift_beginAccess(plVar2,auStack_b8,0,0);
  func_0x000100e15a08();
  do {
    __sSt4next7ElementQzSgyFTj(auStack_88,lVar6,plVar7);
    if (lStack_70 == 0) {
      (**(code **)(lStack_130 + 8))(lVar17,lVar6);
      return 1;
    }
    func_0x000100102924(auStack_88,auStack_d8);
    func_0x0001000bb420(auStack_d8,auStack_f8);
    uVar8 = 0;
    FUN_1049c9580(0,0x1130a36c8,&PTR_PTR_1126adee0);
    puVar9 = &uStack_58;
    _swift_dynamicCast(puVar9,auStack_f8,PTR___sypN_11034f1a8 + 8,uVar8,6);
    uVar11 = uStack_58;
    if ((int)puVar9 == 0) {
LAB_1049c9040:
      func_0x000100183ab8(auStack_d8);
      break;
    }
    uVar10 = uStack_58;
    _objc_msgSend(uStack_58,PTR_s_request_11262abc0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    if (uVar10 == 0) goto LAB_1049c9040;
    lVar3 = *plVar1;
    uVar11 = plVar1[1];
    lVar4 = plVar1[2];
    lVar5 = plVar1[3];
    uVar16 = uVar11;
    lVar18 = lVar5;
    lVar19 = lVar4;
    if (lVar3 == 0) {
      if (*plVar2 != 0) {
        lVar19 = plVar2[2];
        lVar18 = plVar2[3];
        uVar16 = plVar2[1];
        _swift_unknownObjectRetain(uVar16);
        _swift_unknownObjectRetain(lVar19);
        _swift_unknownObjectRetain(lVar18);
        goto LAB_1049c8ef0;
      }
LAB_1049c903c:
      _swift_unknownObjectRelease(uVar10);
      goto LAB_1049c9040;
    }
LAB_1049c8ef0:
    FUN_1049c8bbc(lVar3,uVar11,lVar4,lVar5);
    uVar11 = uVar10;
    puVar14 = PTR_s_version_112683d20;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar11);
    uVar11 = uVar16;
    puVar15 = PTR_s_graphAPIVersion_1125d10e0;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar11);
    if ((uVar12 == uVar13) && (puVar14 == puVar15)) {
      _swift_bridgeObjectRelease(puVar14);
      _swift_bridgeObjectRelease(puVar15);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar12,puVar14,uVar13,puVar15,0);
      _swift_bridgeObjectRelease(puVar14);
      _swift_bridgeObjectRelease(puVar15);
      if ((uVar12 & 1) == 0) {
        _swift_unknownObjectRelease(uVar10);
        _swift_unknownObjectRelease(lVar18);
        _swift_unknownObjectRelease(lVar19);
        uVar10 = uVar16;
        goto LAB_1049c903c;
      }
    }
    uVar11 = uVar10;
    _objc_msgSend(uVar10,PTR_s_hasAttachments_1125d2ab0);
    _swift_unknownObjectRelease(uVar10);
    _swift_unknownObjectRelease(lVar18);
    _swift_unknownObjectRelease(lVar19);
    _swift_unknownObjectRelease(uVar16);
    func_0x000100183ab8(auStack_d8);
  } while ((uVar11 & 1) == 0);
  (**(code **)(lStack_130 + 8))(lVar17,lVar6);
  return 0;
}



/* Entry: 1049c9088; end: 1049c9093;  */

void FUN_1049c9088(void)

{
  FUN_1049c88e4();
  return;
}



/* Entry: 1049c9094; end: 1049c90ab;  */

void FUN_1049c9094(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049c90ac; end: 1049c90df;  */

void FUN_1049c90ac(void)

{
  long unaff_x20;
  
  FUN_1049c7758(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1049c90e0; end: 1049c90fb;  */

void FUN_1049c90e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  func_0x000100672b50(param_2,&uStack_80,param_3,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if (lStack_68 == 0) {
    FUN_1049c9438(&uStack_80,0x11309c428);
    goto LAB_1049c81a8;
  }
  uVar7 = 0x11309c420;
  func_0x0001048db364(0x11309c420);
  puVar3 = PTR___sypN_11034f1a8;
  plVar5 = &lStack_98;
  _swift_dynamicCast(plVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar7,6);
  lVar4 = lStack_98;
  if (((ulong)plVar5 & 1) == 0) goto LAB_1049c81a8;
  if (*(long *)(lStack_98 + 0x10) == 0) {
LAB_1049c7fec:
    lStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lStack_98);
    lVar6 = 0x745f737365636361;
    uVar11 = 0xec0000006e656b6f;
    func_0x000100029284(0x745f737365636361);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1049c7fec;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar6 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(lVar4);
    plVar5 = &lStack_98;
    _swift_dynamicCast(plVar5,&uStack_80,puVar3 + 8,PTR___sSSN_11034da80,6);
    if ((int)plVar5 == 0) {
      lStack_98 = 0;
      uStack_90 = 0;
    }
  }
  _swift_beginAccess(lVar8 + 0x10,&lStack_98,1,0);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  *(long *)(lVar8 + 0x10) = lStack_98;
  *(undefined8 *)(lVar8 + 0x18) = uStack_90;
  _swift_bridgeObjectRelease(uVar7);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1049c80a4:
    auStack_b0[0] = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    lVar8 = 0x5f73657269707865;
    uVar11 = 0xea00000000007461;
    func_0x000100029284(0x5f73657269707865);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1049c80a4;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar8 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(lVar4);
    uVar7 = 0;
    FUN_1049c9580(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = auStack_b0;
    _swift_dynamicCast(puVar9,&uStack_80,puVar3 + 8,uVar7,6);
    if ((int)puVar9 == 0) {
      auStack_b0[0] = 0;
    }
  }
  _swift_beginAccess(lVar2 + 0x10,auStack_b0,1,0);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = auStack_b0[0];
  _objc_release(uVar7);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1049c811c:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    uVar11 = 0;
    lVar8 = -0x2fffffffffffffe5;
    func_0x000100029284(0xd00000000000001b);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1049c811c;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar8 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_bridgeObjectRelease(lVar4);
  if (lStack_68 == 0) {
    FUN_1049c9438(&uStack_80,0x11309c428);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1049c9580(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = &uStack_b8;
    _swift_dynamicCast(puVar9,&uStack_80,puVar3 + 8,uVar7,6);
    uVar7 = uStack_b8;
    if ((int)puVar9 == 0) {
      uVar7 = 0;
    }
  }
  _swift_beginAccess(lVar12 + 0x10,&uStack_80,1,0);
  uVar10 = *(undefined8 *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x10) = uVar7;
  _objc_release(uVar10);
LAB_1049c81a8:
  (*pcVar1)();
  return;
}



/* Entry: 1049c90fc; end: 1049c912b;  */

void FUN_1049c90fc(void)

{
  code *in_x3;
  
  (*in_x3)();
  return;
}



/* Entry: 1049c912c; end: 1049c913b;  */

void FUN_1049c912c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1049c913c; end: 1049c9143;  */

void FUN_1049c913c(void)

{
  if (lRam00000001130a3630 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e826c0c);
  return;
}



/* Entry: 1049c9144; end: 1049c91ff;  */

void FUN_1049c9144(undefined8 param_1)

{
  if (lRam00000001130a3630 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e826c0c);
  return;
}



/* Entry: 1049c9200; end: 1049c9207;  */

void FUN_1049c9200(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049c9204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 1049c9208; end: 1049c942f;  */

undefined1  [16] FUN_1049c9208(void)

{
  return ZEXT816(0x1107bbda0);
}



/* Entry: 1049c9430; end: 1049c9437;  */

void FUN_1049c9430(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100672b50(param_2,auStack_70);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = auStack_70;
    func_0x0001006732c8(puVar2,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    puVar3 = auStack_70 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3,puVar2,lStack_58);
    puVar2 = puVar3;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  if (param_3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2,param_3);
  _swift_unknownObjectRelease(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1049c9438; end: 1049c9473;  */

undefined8 FUN_1049c9438(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1049c9474; end: 1049c957f;  */

undefined * FUN_1049c9474(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    lVar1 = 0x61746164;
    uVar4 = 0;
    func_0x000100029284(0x61746164);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_50);
      _swift_bridgeObjectRelease(param_1);
      uVar2 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      puVar3 = &uStack_58;
      _swift_dynamicCast(puVar3,&puStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        puStack_50 = PTR___swiftEmptySetSingleton_11034f1d8;
        puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
        puStack_40 = PTR___swiftEmptySetSingleton_11034f1d8;
        _swift_retain_n(PTR___swiftEmptySetSingleton_11034f1d8,3);
        FUN_1049c5ffc(uStack_58,&puStack_50);
        _swift_bridgeObjectRelease(uStack_58);
        return puStack_50;
      }
    }
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  return param_2;
}



/* Entry: 1049c9580; end: 1049c95f3;  */

void FUN_1049c9580(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1049c95f4; end: 1049c966f;  */

undefined * FUN_1049c95f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar2 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar2 = param_3;
  }
  puVar1 = PTR_PTR_1126ae0b8;
  _objc_allocWithZone(PTR_PTR_1126ae0b8);
  _objc_msgSend();
  _objc_release(param_1);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 1049c9670; end: 1049c9713; -[_TtC12FBSDKCoreKit20KeychainStoreFactory createKeychainStoreWithService:accessGroup:] */

void FUN_1049c9670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 == 0) {
    _objc_retain(param_3);
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    _objc_retain(param_3);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_2);
  }
  puVar1 = PTR_PTR_1126ae0b8;
  _objc_allocWithZone(PTR_PTR_1126ae0b8);
  _objc_msgSend();
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049c9714; end: 1049c9757;  */

void FUN_1049c9714(void)

{
  return;
}



/* Entry: 1049c9758; end: 1049c975f;  */

void FUN_1049c9758(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049c975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 1049c9760; end: 1049c977f;  */

void FUN_1049c9760(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049c9780; end: 1049c9847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049c9780(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3768);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  func_0x0001049c978c(uVar2,puVar1[1],puVar1[2]);
  return uVar2;
}



/* Entry: 1049c9848; end: 1049c98af;  */

undefined8 FUN_1049c9848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjectType();
  _swift_getObjectType(param_2);
  _swift_getObjectType(param_3);
  return param_1;
}



/* Entry: 1049c98b0; end: 1049c99d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049c98b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3770);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  func_0x0001049c978c(uVar2,puVar1[1],puVar1[2]);
  return uVar2;
}



/* Entry: 1049c99d8; end: 1049c9c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049c99d8(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_1130a3778;
  if ((*(byte *)(unaff_x20 + _DAT_1130a3778) & 1) == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_1130a3768);
    _swift_beginAccess(plVar1,auStack_68,0,0);
    lVar4 = *plVar1;
    lVar5 = plVar1[1];
    lVar9 = plVar1[2];
    lVar10 = lVar5;
    lVar11 = lVar9;
    lVar12 = lVar4;
    if (lVar4 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_1130a3770);
      _swift_beginAccess(plVar1,auStack_80,0,0);
      lVar12 = *plVar1;
      if (lVar12 == 0) {
        return;
      }
      lVar10 = plVar1[1];
      lVar11 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_unknownObjectRetain(lVar10);
      _swift_unknownObjectRetain(lVar11);
    }
    func_0x0001049c978c(lVar4,lVar5,lVar9);
    lVar4 = lVar12;
    _objc_msgSend(lVar12,PTR_s_cachedServerConfiguration_1125a76d0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar2 = PTR___sypN_11034f1a8;
    if (lVar5 == 0) {
      _swift_unknownObjectRelease(lVar11);
      _swift_unknownObjectRelease(lVar10);
      _swift_unknownObjectRelease(lVar12);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      lVar4 = lVar5;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      _objc_release(lVar5);
      if (*(long *)(lVar4 + 0x10) == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
        _swift_unknownObjectRelease(lVar12);
      }
      else {
        _swift_bridgeObjectRetain(lVar4);
        lVar5 = 0x6c75725f6163616d;
        uVar8 = 0xea00000000007365;
        func_0x000100029284(0x6c75725f6163616d);
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
          _swift_unknownObjectRelease(lVar12);
        }
        else {
          func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar5 * 0x20,&uStack_a0);
          _swift_unknownObjectRelease(lVar12);
          _swift_bridgeObjectRelease(lVar4);
        }
      }
      _swift_bridgeObjectRelease(lVar4);
      _swift_unknownObjectRelease(lVar11);
      _swift_unknownObjectRelease(lVar10);
      if (lStack_88 != 0) {
        uVar7 = 0x11309c618;
        func_0x0001048db364(0x11309c618);
        puVar6 = &uStack_a8;
        _swift_dynamicCast(puVar6,&uStack_a0,puVar2 + 8,uVar7,6);
        if (((ulong)puVar6 & 1) == 0) {
          return;
        }
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1130a3780);
        *(undefined8 *)(unaff_x20 + _DAT_1130a3780) = uStack_a8;
        _swift_bridgeObjectRelease(uVar7);
        *(undefined1 *)(unaff_x20 + lVar3) = 1;
        return;
      }
    }
    func_0x0001049cd4dc(&uStack_a0,0x11309c428);
  }
  return;
}



/* Entry: 1049c9c58; end: 1049c9c7f; -[FBSDKMACARuleMatchingManager enable] */

void FUN_1049c9c58(undefined8 param_1)

{
  _objc_retain();
  FUN_1049c99d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049c9c80; end: 1049c9d17;  */

undefined1  [16] FUN_1049c9c80(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  bVar1 = *(byte *)(param_1 + 0x20);
  lVar2 = param_1;
  _swift_bridgeObjectRetain();
  lVar2 = lVar2 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(lVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar3 = (ulong)*(uint *)(param_1 + 0x24);
  bVar1 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (lVar2 == 1L << ((ulong)bVar1 & 0x3f)) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    FUN_1049156f8(lVar2,uVar3,0,param_1);
    _swift_bridgeObjectRetain(uVar3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 1049c9d18; end: 1049c9d1f;  */

uint FUN_1049c9d18(long param_1,ulong param_2,long param_3,ulong param_4)

{
  byte bVar1;
  double dVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 auStack_130 [16];
  long alStack_120 [2];
  undefined8 ****appppuStack_110 [2];
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [40];
  
  lVar6 = 0x1130a37f0;
  func_0x0001048db364();
  lVar6 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)appppuStack_110 + lVar6;
  bVar1 = *(byte *)(param_3 + 0x20);
  _swift_bridgeObjectRetain(param_3);
  uVar7 = param_3 + 0x40;
  __ss10_HashTableV11startBucketAB0D0Vvg(uVar7,~(-1L << ((ulong)bVar1 & 0x3f)));
  uVar20 = (ulong)*(uint *)(param_3 + 0x24);
  bVar1 = *(byte *)(param_3 + 0x20);
  _swift_bridgeObjectRelease(param_3);
  if ((uVar7 != 1L << ((ulong)bVar1 & 0x3f)) &&
     (FUN_1049156f8(uVar7,uVar20,0,param_3), *(long *)(param_3 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(uVar20);
    uVar22 = uVar7;
    uVar17 = uVar20;
    func_0x000100029284(uVar7);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar20);
      _swift_bridgeObjectRelease(param_3);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + uVar22 * 0x20,auStack_b8);
      _swift_bridgeObjectRelease(param_3);
      func_0x000100102924(auStack_b8,auStack_98);
      if (((uVar7 == 0x737473697865) && (uVar20 == 0xe600000000000000)) ||
         (uVar22 = uVar7,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar7,uVar20,0x737473697865,0xe600000000000000,0), (uVar22 & 1) != 0)) {
        _swift_bridgeObjectRelease(uVar20);
        func_0x0001000bb420(auStack_98,auStack_b8);
        pppppuVar15 = &ppppuStack_e0;
        _swift_dynamicCast(pppppuVar15,auStack_b8,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if ((int)pppppuVar15 != 0) {
          if (*(long *)(param_4 + 0x10) == 0) {
            uVar16 = 0;
          }
          else {
            func_0x000100029284(param_1,param_2);
            uVar16 = (uint)param_2;
          }
          func_0x000100183ab8(auStack_98);
          uVar16 = (byte)ppppuStack_e0 ^ uVar16 ^ 1;
          goto LAB_1049cce98;
        }
      }
      else {
        lVar8 = param_1;
        uVar22 = param_2;
        __sSS10lowercasedSSyF(param_1);
        if (*(long *)(param_4 + 0x10) == 0) {
LAB_1049cbd3c:
          in_b0 = 0;
          in_register_00005001 = 0;
          in_register_00005002 = 0;
          in_register_00005003 = 0;
          in_register_00005004 = 0;
          in_register_00005005 = 0;
          in_register_00005006 = 0;
          in_register_00005007 = 0;
          ppppuStack_f8 = (undefined8 *****)0x0;
          ppppuStack_100 = (undefined8 *****)0x0;
          lStack_e8 = 0;
          uStack_f0 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_4);
          uVar17 = uVar22;
          func_0x000100029284(lVar8);
          if ((uVar17 & 1) == 0) {
            _swift_bridgeObjectRelease(param_4);
            goto LAB_1049cbd3c;
          }
          func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar8 * 0x20,&ppppuStack_100);
          _swift_bridgeObjectRelease(uVar22);
          uVar22 = param_4;
        }
        _swift_bridgeObjectRelease(uVar22);
        if (lStack_e8 == 0) {
          if (*(long *)(param_4 + 0x10) == 0) {
LAB_1049cbdac:
            in_b0 = 0;
            in_register_00005001 = 0;
            in_register_00005002 = 0;
            in_register_00005003 = 0;
            in_register_00005004 = 0;
            in_register_00005005 = 0;
            in_register_00005006 = 0;
            in_register_00005007 = 0;
            ppppuStack_d8 = (undefined8 *****)0x0;
            ppppuStack_e0 = (undefined8 *****)0x0;
            lStack_c8 = 0;
            uStack_d0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_4);
            func_0x000100029284(param_1);
            if ((param_2 & 1) == 0) {
              _swift_bridgeObjectRelease(param_4);
              goto LAB_1049cbdac;
            }
            func_0x0001000bb420(*(long *)(param_4 + 0x38) + param_1 * 0x20,&ppppuStack_e0);
            _swift_bridgeObjectRelease(param_4);
          }
          if (lStack_e8 != 0) {
            func_0x0001049cd4dc(&ppppuStack_100,0x11309c428);
          }
        }
        else {
          func_0x000100102924(&ppppuStack_100,&ppppuStack_e0);
        }
        if (lStack_c8 == 0) {
          func_0x000100183ab8(auStack_98);
          _swift_bridgeObjectRelease(uVar20);
          func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
          goto LAB_1049cce94;
        }
        uVar22 = 0x736e6961746e6f63;
        func_0x000100102924(&ppppuStack_e0,auStack_b8);
        func_0x0001000bb420(auStack_98,&ppppuStack_e0);
        puVar3 = PTR___sypN_11034f1a8;
        pppppuVar9 = &ppppuStack_100;
        _swift_dynamicCast(pppppuVar9,&ppppuStack_e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                          );
        pppppuVar13 = (undefined8 *****)ppppuStack_f8;
        pppppuVar15 = (undefined8 *****)ppppuStack_100;
        if ((int)pppppuVar9 == 0) {
          pppppuVar15 = (undefined8 *****)0x0;
          pppppuVar13 = (undefined8 *****)0x0;
        }
        func_0x0001000bb420(auStack_98,&ppppuStack_e0);
        uVar10 = 0x11309c618;
        func_0x0001048db364(0x11309c618);
        pppppuVar11 = &ppppuStack_100;
        _swift_dynamicCast(pppppuVar11,&ppppuStack_e0,puVar3 + 8,uVar10,6);
        pppppuVar9 = (undefined8 *****)ppppuStack_100;
        if ((int)pppppuVar11 == 0) {
          pppppuVar9 = (undefined8 *****)0x0;
        }
        pppppuVar11 = pppppuVar13;
        if (((uVar7 == 0x736e6961746e6f63) && (uVar20 == 0xe800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x736e6961746e6f63,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          pppppuVar12 = &ppppuStack_e0;
          func_0x0001049cd4dc(pppppuVar12,0x11309c428);
          if ((pppppuVar18 == (undefined8 *****)0x0) ||
             (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0)) goto LAB_1049cce80;
          ppppuStack_100 = pppppuVar15;
          ppppuStack_f8 = pppppuVar13;
          ppppuStack_e0 = pppppuVar9;
          ppppuStack_d8 = pppppuVar18;
          func_0x000100e8b654();
          pppppuVar15 = &ppppuStack_100;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar12,pppppuVar12);
          uVar16 = (uint)pppppuVar15;
          func_0x000100183ab8(auStack_b8);
          func_0x000100183ab8(auStack_98);
          _swift_bridgeObjectRelease(pppppuVar18);
LAB_1049cbf28:
          _swift_bridgeObjectRelease(pppppuVar13);
          goto LAB_1049cce98;
        }
        uVar22 = 0x6961746e6f635f69;
        pppppuVar12 = pppppuVar13;
        if (((uVar7 == 0x6961746e6f635f69) && (uVar20 == 0xea0000000000736e)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6961746e6f635f69,0xea0000000000736e,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
          if ((pppppuVar18 == (undefined8 *****)0x0) ||
             (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0)) goto LAB_1049cce80;
          __sSS10lowercasedSSyF();
          _swift_bridgeObjectRelease(pppppuVar18);
          ppppuStack_e0 = pppppuVar9;
          ppppuStack_d8 = pppppuVar11;
          __sSS10lowercasedSSyF();
          _swift_bridgeObjectRelease(pppppuVar13);
          ppppuStack_100 = pppppuVar15;
          ppppuStack_f8 = pppppuVar12;
          func_0x000100e8b654();
          pppppuVar15 = &ppppuStack_100;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar13,pppppuVar13);
          uVar16 = (uint)pppppuVar15;
          pppppuVar13 = pppppuVar11;
LAB_1049cc04c:
          _swift_bridgeObjectRelease(pppppuVar13);
LAB_1049cc054:
          _swift_bridgeObjectRelease(pppppuVar12);
LAB_1049cc058:
          func_0x000100183ab8(auStack_b8);
          func_0x000100183ab8(auStack_98);
          goto LAB_1049cce98;
        }
        uVar22 = 0;
        if (((uVar7 == 0x746e6f635f746f6e) && (uVar20 == 0xec000000736e6961)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x746e6f635f746f6e,0xec000000736e6961,uVar7,uVar20,0), (uVar22 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(pppppuVar9);
          pppppuVar18 = &ppppuStack_e0;
          func_0x0001000bb420(auStack_b8);
          pppppuVar9 = &ppppuStack_e0;
          FUN_1049cb8d8();
          pppppuVar12 = &ppppuStack_e0;
          func_0x0001049cd4dc(pppppuVar12,0x11309c428);
          if ((pppppuVar18 != (undefined8 *****)0x0) &&
             (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
            ppppuStack_100 = pppppuVar15;
            ppppuStack_f8 = pppppuVar13;
            ppppuStack_e0 = pppppuVar9;
            ppppuStack_d8 = pppppuVar18;
            func_0x000100e8b654();
            pppppuVar15 = &ppppuStack_100;
            __sSy10FoundationE8containsySbqd__SyRd__lF
                      (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar12,pppppuVar12
                      );
            uVar16 = (uint)pppppuVar15;
LAB_1049cc120:
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            _swift_bridgeObjectRelease(pppppuVar18);
LAB_1049cc138:
            _swift_bridgeObjectRelease(pppppuVar13);
            uVar16 = uVar16 ^ 1;
            goto LAB_1049cce98;
          }
LAB_1049cce80:
          _swift_bridgeObjectRelease(pppppuVar11);
        }
        else {
          uVar22 = 0x6f635f746f6e5f69;
          if (((uVar7 == 0x6f635f746f6e5f69) && (uVar20 == 0xee00736e6961746e)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6f635f746f6e5f69,0xee00736e6961746e,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar12);
              pppppuVar12 = pppppuVar13;
              ppppuStack_e0 = pppppuVar9;
              ppppuStack_d8 = pppppuVar11;
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar13);
              ppppuStack_100 = pppppuVar15;
              ppppuStack_f8 = pppppuVar12;
              func_0x000100e8b654();
              pppppuVar15 = &ppppuStack_100;
              __sSy10FoundationE8containsySbqd__SyRd__lF
                        (pppppuVar15,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar13,
                         pppppuVar13);
              _swift_bridgeObjectRelease(pppppuVar11);
              _swift_bridgeObjectRelease(pppppuVar12);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              uVar16 = (uint)pppppuVar15 ^ 1;
              goto LAB_1049cce98;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x775f737472617473;
          if (((uVar7 == 0x775f737472617473) && (uVar20 == 0xeb00000000687469)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x775f737472617473,0xeb00000000687469,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8(pppppuVar9);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              FUN_1049c9d20(pppppuVar15,pppppuVar13,pppppuVar9,pppppuVar12);
              uVar16 = (uint)pppppuVar15;
              goto LAB_1049cc04c;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x7374726174735f69;
          if (((uVar7 == 0x7374726174735f69) && (uVar20 == 0xed0000687469775f)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x7374726174735f69,0xed0000687469775f,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8(pppppuVar9);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar18 == (undefined8 *****)0x0) ||
               (pppppuVar11 = pppppuVar18, pppppuVar13 == (undefined8 *****)0x0))
            goto LAB_1049cce80;
            __sSS10lowercasedSSyF(pppppuVar9,pppppuVar18);
            _swift_bridgeObjectRelease(pppppuVar18);
            __sSS10lowercasedSSyF(pppppuVar15,pppppuVar13);
            _swift_bridgeObjectRelease(pppppuVar13);
            FUN_1049c9d20(pppppuVar15,pppppuVar12,pppppuVar9,pppppuVar11);
            uVar16 = (uint)pppppuVar15;
            _swift_bridgeObjectRelease(pppppuVar11);
            goto LAB_1049cc054;
          }
          uVar22 = 0x71655f7274735f69;
          if (((uVar7 == 0x71655f7274735f69) && (uVar20 == 0xe800000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x71655f7274735f69,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar18 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar18);
              __sSS10lowercasedSSyF();
              _swift_bridgeObjectRelease(pppppuVar13);
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar11 == pppppuVar12)) {
                uVar16 = 1;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pppppuVar9,pppppuVar11,pppppuVar15,pppppuVar12,0);
                uVar16 = (uint)pppppuVar9;
              }
              _swift_bridgeObjectRelease(pppppuVar11);
              goto LAB_1049cc054;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x656e5f7274735f69;
          if (((uVar7 == 0x656e5f7274735f69) && (uVar20 == 0xe900000000000071)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x656e5f7274735f69,0xe900000000000071,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar9);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar12 == (undefined8 *****)0x0) ||
               (pppppuVar11 = pppppuVar12, pppppuVar13 == (undefined8 *****)0x0))
            goto LAB_1049cce80;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(pppppuVar12);
            pppppuVar12 = pppppuVar13;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(pppppuVar13);
            if ((pppppuVar9 == pppppuVar15) && (pppppuVar11 == pppppuVar12)) {
              _swift_bridgeObjectRelease(pppppuVar11);
              pppppuVar13 = pppppuVar12;
LAB_1049cc598:
              _swift_bridgeObjectRelease(pppppuVar13);
              uVar16 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (pppppuVar9,pppppuVar11,pppppuVar15,pppppuVar12,0);
              _swift_bridgeObjectRelease(pppppuVar11);
              _swift_bridgeObjectRelease(pppppuVar12);
              uVar16 = (uint)pppppuVar9 ^ 1;
            }
            goto LAB_1049cc058;
          }
          pppppuVar11 = pppppuVar9;
          if ((uVar7 == 0x6e69) && (uVar20 == 0xe200000000000000)) {
LAB_1049cc644:
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar13 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar13 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar13, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuStack_e0 = pppppuVar15;
              ppppuStack_d8 = pppppuVar13;
              *(undefined8 ******)((long)alStack_120 + lVar6) = &ppppuStack_e0;
              uVar16 = 0;
              FUN_1048ee2c4(FUN_1049cd594,auStack_130 + lVar6,pppppuVar9);
              _swift_bridgeObjectRelease(pppppuVar9);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              goto LAB_1049cbf28;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x6e69;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6e69,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) ||
             (((uVar22 = 0x796e615f7369, uVar7 == 0x796e615f7369 && (uVar20 == 0xe600000000000000))
              || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x796e615f7369,0xe600000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)))
             ) goto LAB_1049cc644;
          uVar22 = 0x6e695f7274735f69;
          if (((uVar7 == 0x6e695f7274735f69) && (uVar20 == 0xe800000000000000)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6e695f7274735f69,0xe800000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0
              || (((uVar22 = 0x796e615f73695f69, uVar7 == 0x796e615f73695f69 &&
                   (uVar20 == 0xe800000000000000)) ||
                  (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x796e615f73695f69,0xe800000000000000,uVar7,uVar20,0),
                  (uVar22 & 1) != 0)))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            appppuStack_110[0] = pppppuVar15;
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            puVar3 = PTR___sSSN_11034da80;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuVar19 = pppppuVar9[2];
              ppppuVar23 = (undefined8 ****)0xffffffffffffffff;
              pppppuVar15 = pppppuVar9 + 5;
              do {
                bVar5 = (long)ppppuVar23 - (long)ppppuVar19 == -1;
                uVar16 = (uint)!bVar5;
                if (bVar5) break;
                ppppuVar23 = (undefined8 ****)((long)ppppuVar23 + 1);
                if (pppppuVar9[2] <= ppppuVar23) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1049ccb60);
                  (*pcVar4)();
                }
                ppppuStack_e0 = pppppuVar15[-1];
                pppppuVar13 = (undefined8 *****)*pppppuVar15;
                ppppuStack_100 = appppuStack_110[0];
                lVar14 = 0;
                ppppuStack_f8 = pppppuVar12;
                ppppuStack_d8 = pppppuVar13;
                __s10Foundation6LocaleVMa();
                lVar8 = lVar21;
                (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
                func_0x000100e8b654();
                _swift_bridgeObjectRetain(pppppuVar13);
                *(long *)((long)alStack_120 + lVar6) = lVar8;
                *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
                pppppuVar11 = &ppppuStack_100;
                __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                          (pppppuVar11,1,0,0,1,lVar21,puVar3,puVar3);
                func_0x0001049cd4dc(lVar21,0x1130a37f0);
                _swift_bridgeObjectRelease(pppppuVar13);
                pppppuVar15 = pppppuVar15 + 2;
              } while (pppppuVar11 != (undefined8 *****)0x0);
LAB_1049cc8a0:
              _swift_bridgeObjectRelease(pppppuVar9);
              goto LAB_1049cc054;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          if (((uVar7 == 0x6e695f746f6e) && (uVar20 == 0xe600000000000000)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6e695f746f6e,0xe600000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0 ||
              (((uVar22 = 0x615f746f6e5f7369, uVar7 == 0x615f746f6e5f7369 &&
                (uVar20 == 0xea0000000000796e)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x615f746f6e5f7369,0xea0000000000796e,uVar7,uVar20,0), (uVar22 & 1) != 0)
               ))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar13 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            if ((pppppuVar13 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar13, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuStack_e0 = pppppuVar15;
              ppppuStack_d8 = pppppuVar13;
              *(undefined8 ******)((long)alStack_120 + lVar6) = &ppppuStack_e0;
              uVar16 = 0;
              FUN_1048ee2c4(FUN_1049cd518,auStack_130 + lVar6,pppppuVar9);
              _swift_bridgeObjectRelease(pppppuVar9);
              func_0x000100183ab8(auStack_b8);
              func_0x000100183ab8(auStack_98);
              goto LAB_1049cc138;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x6f6e5f7274735f69;
          if (((uVar7 == 0x6f6e5f7274735f69) && (uVar20 == 0xec0000006e695f74)) ||
             ((__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x6f6e5f7274735f69,0xec0000006e695f74,uVar7,uVar20,0), (uVar22 & 1) != 0
              || (((uVar22 = 0x746f6e5f73695f69, uVar7 == 0x746f6e5f73695f69 &&
                   (uVar20 == 0xec000000796e615f)) ||
                  (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x746f6e5f73695f69,0xec000000796e615f,uVar7,uVar20,0),
                  (uVar22 & 1) != 0)))))) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(pppppuVar13);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar15 = &ppppuStack_e0;
            FUN_1049cb8d8();
            appppuStack_110[0] = pppppuVar15;
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            puVar3 = PTR___sSSN_11034da80;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar9 != (undefined8 *****)0x0)) {
              ppppuVar19 = pppppuVar9[2];
              ppppuVar23 = (undefined8 ****)0xffffffffffffffff;
              pppppuVar15 = pppppuVar9 + 5;
              do {
                bVar5 = (long)ppppuVar23 - (long)ppppuVar19 == -1;
                uVar16 = (uint)bVar5;
                if (bVar5) break;
                ppppuVar23 = (undefined8 ****)((long)ppppuVar23 + 1);
                if (pppppuVar9[2] <= ppppuVar23) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1049ccd7c);
                  (*pcVar4)();
                }
                ppppuStack_e0 = pppppuVar15[-1];
                pppppuVar13 = (undefined8 *****)*pppppuVar15;
                ppppuStack_100 = appppuStack_110[0];
                lVar14 = 0;
                ppppuStack_f8 = pppppuVar12;
                ppppuStack_d8 = pppppuVar13;
                __s10Foundation6LocaleVMa();
                lVar8 = lVar21;
                (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
                func_0x000100e8b654();
                _swift_bridgeObjectRetain(pppppuVar13);
                *(long *)((long)alStack_120 + lVar6) = lVar8;
                *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
                pppppuVar11 = &ppppuStack_100;
                __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                          (pppppuVar11,1,0,0,1,lVar21,puVar3,puVar3);
                func_0x0001049cd4dc(lVar21,0x1130a37f0);
                _swift_bridgeObjectRelease(pppppuVar13);
                pppppuVar15 = pppppuVar15 + 2;
              } while (pppppuVar11 != (undefined8 *****)0x0);
              goto LAB_1049cc8a0;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          _swift_bridgeObjectRelease(pppppuVar9);
          if (((uVar7 == 0x616d5f7865676572) && (uVar20 == 0xeb00000000686374)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x616d5f7865676572,0xeb00000000686374,uVar7,uVar20,0), (uVar22 & 1) != 0))
          {
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar18 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar18 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar18, pppppuVar13 != (undefined8 *****)0x0)) {
              lVar14 = 0;
              ppppuStack_100 = pppppuVar15;
              ppppuStack_f8 = pppppuVar13;
              ppppuStack_e0 = pppppuVar9;
              ppppuStack_d8 = pppppuVar18;
              __s10Foundation6LocaleVMa();
              lVar8 = lVar21;
              (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar21,1,1,lVar14);
              func_0x000100e8b654();
              *(long *)((long)alStack_120 + lVar6) = lVar8;
              *(long *)((long)alStack_120 + lVar6 + 8) = lVar8;
              uVar16 = 0;
              __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
                        (&ppppuStack_100,0x400,0,0,1,lVar21,PTR___sSSN_11034da80,
                         PTR___sSSN_11034da80);
              func_0x0001049cd4dc(lVar21,0x1130a37f0);
              goto LAB_1049cc120;
            }
            goto LAB_1049cce80;
          }
          if ((uVar7 == 0x7165) && (uVar20 == 0xe200000000000000)) {
LAB_1049ccd00:
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar12 == pppppuVar13)) {
                uVar16 = 1;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (pppppuVar9,pppppuVar12,pppppuVar15,pppppuVar13,0);
                uVar16 = (uint)pppppuVar9;
              }
              goto LAB_1049cc04c;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0x7165;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7165,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d && (uVar20 == 0xe100000000000000))))
          goto LAB_1049ccd00;
          uVar22 = 0x3d;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d,0xe100000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3d && (uVar20 == 0xe200000000000000))))
          goto LAB_1049ccd00;
          uVar22 = 0x3d3d;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3d,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049ccd00;
          if ((uVar7 == 0x71656e) && (uVar20 == 0xe300000000000000)) {
LAB_1049cce20:
            _swift_bridgeObjectRelease(uVar20);
            pppppuVar12 = &ppppuStack_e0;
            func_0x0001000bb420(auStack_b8);
            pppppuVar9 = &ppppuStack_e0;
            FUN_1049cb8d8();
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            pppppuVar11 = pppppuVar13;
            if ((pppppuVar12 != (undefined8 *****)0x0) &&
               (pppppuVar11 = pppppuVar12, pppppuVar13 != (undefined8 *****)0x0)) {
              if ((pppppuVar9 == pppppuVar15) && (pppppuVar12 == pppppuVar13)) {
                _swift_bridgeObjectRelease(pppppuVar12);
                goto LAB_1049cc598;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (pppppuVar9,pppppuVar12,pppppuVar15,pppppuVar13,0);
              _swift_bridgeObjectRelease(pppppuVar12);
              _swift_bridgeObjectRelease(pppppuVar13);
              uVar16 = (uint)pppppuVar9 ^ 1;
              goto LAB_1049cc058;
            }
            goto LAB_1049cce80;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x71656e,0xe300000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x656e && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cce20;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656e,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d21 && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cce20;
          uVar22 = 0x3d21;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d21,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cce20;
          _swift_bridgeObjectRelease(pppppuVar13);
          if ((uVar7 == 0x746c) && (uVar20 == 0xe200000000000000)) {
LAB_1049ccf68:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)(dVar2 < (double)CONCAT17(in_register_00005007,
                                                     CONCAT16(in_register_00005006,
                                                              CONCAT15(in_register_00005005,
                                                                       CONCAT14(in_register_00005004
                                                                                ,CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                  ));
            goto LAB_1049cce98;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x746c,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3c && (uVar20 == 0xe100000000000000))))
          goto LAB_1049ccf68;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3c,0xe100000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049ccf68;
          uVar22 = 0;
          if ((((uVar7 == 0x65746c) && (uVar20 == 0xe300000000000000)) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x65746c,0xe300000000000000,uVar7,uVar20,0), (uVar22 & 1) != 0)) ||
             ((uVar7 == 0x656c && (uVar20 == 0xe200000000000000)))) {
LAB_1049cd07c:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)(dVar2 <= (double)CONCAT17(in_register_00005007,
                                                      CONCAT16(in_register_00005006,
                                                               CONCAT15(in_register_00005005,
                                                                        CONCAT14(
                                                  in_register_00005004,
                                                  CONCAT13(in_register_00005003,
                                                           CONCAT12(in_register_00005002,
                                                                    CONCAT11(in_register_00005001,
                                                                             in_b0))))))));
            goto LAB_1049cce98;
          }
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656c,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3c && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd07c;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3c,0xe200000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cd07c;
          if ((uVar7 == 0x7467) && (uVar20 == 0xe200000000000000)) {
LAB_1049cd154:
            _swift_bridgeObjectRelease(uVar20);
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)((double)CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ) < dVar2);
            goto LAB_1049cce98;
          }
          uVar22 = 0x7467;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7467,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3e && (uVar20 == 0xe100000000000000))))
          goto LAB_1049cd154;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3e,0xe100000000000000,uVar7,uVar20,0);
          if ((uVar22 & 1) != 0) goto LAB_1049cd154;
          if ((uVar7 == 0x657467) && (uVar20 == 0xe300000000000000)) {
LAB_1049cd248:
            _swift_bridgeObjectRelease(uVar20);
LAB_1049cd27c:
            func_0x0001000bb420(auStack_b8,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            dVar2 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x0001000bb420(auStack_98,&ppppuStack_e0);
            FUN_1049cb9ec(&ppppuStack_e0);
            func_0x0001049cd4dc(&ppppuStack_e0,0x11309c428);
            func_0x000100183ab8(auStack_b8);
            func_0x000100183ab8(auStack_98);
            uVar16 = (uint)((double)CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ) <= dVar2);
            goto LAB_1049cce98;
          }
          uVar22 = 0x657467;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x657467,0xe300000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x6567 && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd248;
          uVar22 = 0x6567;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6567,0xe200000000000000,uVar7,uVar20,0);
          if (((uVar22 & 1) != 0) || ((uVar7 == 0x3d3e && (uVar20 == 0xe200000000000000))))
          goto LAB_1049cd248;
          uVar22 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x3d3e,0xe200000000000000,uVar7,uVar20,0);
          _swift_bridgeObjectRelease(uVar20);
          if ((uVar22 & 1) != 0) goto LAB_1049cd27c;
        }
        func_0x000100183ab8(auStack_b8);
      }
      func_0x000100183ab8(auStack_98);
    }
  }
LAB_1049cce94:
  uVar16 = 0;
LAB_1049cce98:
  return uVar16 & 1;
}



/* Entry: 1049c9d20; end: 1049c9e77;  */

undefined8 FUN_1049c9d20(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar1 = param_4;
  _swift_bridgeObjectRetain();
  __sSS8IteratorV4nextSJSgyF();
  do {
    if (uVar5 == 0) {
      uVar1 = 0;
      _swift_bridgeObjectRelease(param_4);
      __sSS8IteratorV4nextSJSgyF();
      _swift_bridgeObjectRelease(param_2);
      if (uVar1 == 0) {
LAB_1049c9e48:
        uVar4 = 1;
      }
      else {
LAB_1049c9e5c:
        _swift_bridgeObjectRelease(uVar1);
        uVar4 = 0;
      }
      return uVar4;
    }
    uVar3 = uVar1;
    uVar2 = uVar5;
    __sSS8IteratorV4nextSJSgyF();
    if (uVar2 == 0) {
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_1049c9e48;
    }
    if ((uVar1 == uVar3) && (uVar5 == uVar2)) {
      uVar6 = uVar2;
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease();
    }
    else {
      uVar6 = uVar5;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,uVar5,uVar3,uVar2,0);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease();
      if ((uVar1 & 1) == 0) {
        _swift_bridgeObjectRelease(param_4);
        uVar1 = param_2;
        goto LAB_1049c9e5c;
      }
    }
    __sSS8IteratorV4nextSJSgyF();
    uVar1 = uVar2;
    uVar5 = uVar6;
  } while( true );
}



/* Entry: 1049c9e78; end: 1049c9e7b;  */

undefined8 FUN_1049c9e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100672b50(param_2,auStack_60);
  puVar1 = PTR___sypN_11034f1a8;
  if (lStack_48 == 0) {
    func_0x0001049cd4dc(auStack_60,0x11309c428);
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_70;
    _swift_dynamicCast(puVar3,auStack_60,puVar1 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_msgSend(uStack_70,PTR_s_doubleValue_1125bfb10);
      _objc_release(uStack_70);
      return param_1;
    }
  }
  func_0x000100672b50(param_2,auStack_60);
  if (lStack_48 == 0) {
    func_0x0001049cd4dc(auStack_60,0x11309c428);
  }
  else {
    puVar3 = &uStack_70;
    _swift_dynamicCast(puVar3,auStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) != 0) {
      auStack_60[0] = 0;
      uVar4 = uStack_70;
      FUN_1048e60ac(uStack_70,uStack_68,auStack_60);
      _swift_bridgeObjectRelease(uStack_68);
      if ((uVar4 & 1) != 0) {
        return auStack_60[0];
      }
    }
  }
  return 0;
}



/* Entry: 1049c9e7c; end: 1049cb323;  */

/* WARNING: Possible PIC construction at 0x0001049cac14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049cac18) */
/* WARNING: Removing unreachable block (ram,0x0001049cac70) */
/* WARNING: Removing unreachable block (ram,0x0001049caca0) */
/* WARNING: Removing unreachable block (ram,0x0001049cac80) */
/* WARNING: Removing unreachable block (ram,0x0001049cace0) */
/* WARNING: Removing unreachable block (ram,0x0001049cad28) */
/* WARNING: Removing unreachable block (ram,0x0001049cacf4) */
/* WARNING: Removing unreachable block (ram,0x0001049cac88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049c9e7c(undefined8 *****param_1,undefined8 *****param_2,char *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****unaff_x20;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****unaff_x22;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****unaff_x25;
  undefined8 *****pppppuVar18;
  undefined8 ***pppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****unaff_x28;
  undefined8 ****ppppuVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 ****appppuStack_e0 [4];
  undefined8 ****appppuStack_c0 [2];
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  pppppuVar15 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = (undefined8 *****)0x0;
  pppppuVar10 = param_2;
  pppppuVar11 = (undefined8 *****)param_3;
  __sSS10FoundationE8EncodingVMa();
  pppppuVar20 = (undefined8 *****)pppppuVar4[-1];
  pppppuVar3 = (undefined8 *****)
               ((long)appppuStack_e0 - ((long)pppppuVar20[8] + 0xfU & 0xfffffffffffffff0));
  pppppuVar17 = pppppuVar4;
  pppppuVar18 = pppppuVar3;
  if (param_2 != (undefined8 *****)0x0) {
    pppppuVar10 = param_2;
    ppppuStack_88 = param_1;
    ppppuStack_80 = param_2;
    _swift_bridgeObjectRetain(param_2);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pppppuVar3);
    func_0x000100e8b654();
    param_1 = (undefined8 *****)0x0;
    unaff_x22 = pppppuVar3;
    pppppuVar11 = (undefined8 *****)PTR___sSSN_11034da80;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (pppppuVar3,0,PTR___sSSN_11034da80,pppppuVar10);
    pppppuVar10 = pppppuVar4;
    (*(code *)pppppuVar20[1])(pppppuVar3);
    pppppuVar17 = param_2;
    _swift_bridgeObjectRelease();
    unaff_x25 = pppppuVar4;
    if ((ulong)param_1 >> 0x3c < 0xf) {
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      _swift_getInitializedObjCClass();
      pppppuVar10 = unaff_x22;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(unaff_x22,param_1);
      ppppuStack_88 = (undefined8 *****)0x0;
      pppppuVar11 = pppppuVar10;
      _objc_msgSend(puVar5,PTR_s_JSONObjectWithData_options_error_11254dfe0,pppppuVar10,1,
                    &ppppuStack_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppuVar10);
      param_2 = (undefined8 *****)ppppuStack_88;
      pppppuVar10 = param_1;
      if (puVar5 == (undefined *)0x0) {
        pppppuVar4 = (undefined8 *****)ppppuStack_88;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(pppppuVar4);
        _swift_willThrow();
        func_0x0001000b44c0(unaff_x22);
        pppppuVar17 = param_2;
        _swift_errorRelease();
      }
      else {
        _objc_retain();
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&ppppuStack_88,puVar5);
        _swift_unknownObjectRelease(puVar5);
        param_2 = (undefined8 *****)0x11309c420;
        func_0x0001048db364();
        pppppuVar20 = (undefined8 *****)PTR___sypN_11034f1a8;
        pppppuVar17 = &ppppuStack_b0;
        pppppuVar11 = (undefined8 *****)(PTR___sypN_11034f1a8 + 8);
        _swift_dynamicCast(pppppuVar17,&ppppuStack_88,pppppuVar11,param_2,6);
        ppppuVar21 = ppppuStack_b0;
        if (((ulong)pppppuVar17 & 1) != 0) {
          bVar1 = *(byte *)(ppppuStack_b0 + 4);
          _swift_bridgeObjectRetain(ppppuStack_b0);
          pppppuVar18 = (undefined8 *****)(ppppuVar21 + 8);
          __ss10_HashTableV11startBucketAB0D0Vvg(pppppuVar18,~(-1L << ((ulong)bVar1 & 0x3f)));
          pppppuVar4 = (undefined8 *****)(ulong)*(uint *)((long)ppppuVar21 + 0x24);
          unaff_x28 = (undefined8 ****)(ulong)*(byte *)(ppppuVar21 + 4);
          _swift_bridgeObjectRelease(ppppuVar21);
          if (pppppuVar18 != (undefined8 *****)(1L << ((ulong)unaff_x28 & 0x3f))) {
            pppppuVar11 = (undefined8 *****)0x0;
            FUN_1049156f8(pppppuVar18,pppppuVar4,0,ppppuVar21);
            if ((undefined8 ****)ppppuVar21[2] == (undefined8 ****)0x0) {
              uStack_a8 = 0;
              ppppuStack_b0 = (undefined8 *****)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
              _swift_bridgeObjectRetain(pppppuVar4);
            }
            else {
              _swift_bridgeObjectRetain(ppppuVar21);
              _swift_bridgeObjectRetain(pppppuVar4);
              pppppuVar17 = pppppuVar18;
              pppppuVar16 = pppppuVar4;
              func_0x000100029284(pppppuVar18);
              if (((ulong)pppppuVar16 & 1) == 0) {
                _swift_bridgeObjectRelease(ppppuVar21);
                uStack_a8 = 0;
                ppppuStack_b0 = (undefined8 *****)0x0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                func_0x0001000bb420(ppppuVar21[7] + (long)pppppuVar17 * 4,&ppppuStack_b0);
                _swift_bridgeObjectRelease(ppppuVar21);
              }
            }
            _swift_bridgeObjectRelease(ppppuVar21);
            unaff_x25 = pppppuVar4;
            if (lStack_98 == 0) {
              func_0x0001000b44c0(unaff_x22,param_1);
              _swift_bridgeObjectRelease(pppppuVar4);
              pppppuVar10 = (undefined8 *****)0x11309c428;
              pppppuVar17 = &ppppuStack_b0;
              func_0x0001049cd4dc();
              goto LAB_1049ca08c;
            }
            func_0x000100102924(&ppppuStack_b0,&ppppuStack_88);
            if (((pppppuVar18 == (undefined8 *****)0x646e61) &&
                (pppppuVar4 == (undefined8 *****)0xe300000000000000)) ||
               (pppppuVar11 = pppppuVar18,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (pppppuVar18,pppppuVar4,0x646e61,0xe300000000000000,0),
               ((ulong)pppppuVar11 & 1) != 0)) {
              _swift_bridgeObjectRelease(pppppuVar4);
              func_0x0001000bb420(&ppppuStack_88,&ppppuStack_b0);
              uVar6 = 0x11309d6d0;
              func_0x0001048db364(0x11309d6d0);
              pppppuVar17 = appppuStack_c0;
              pppppuVar11 = (undefined8 *****)((long)pppppuVar20 + 8);
              _swift_dynamicCast(pppppuVar17,&ppppuStack_b0,pppppuVar11,uVar6,6);
              if ((int)pppppuVar17 != 0) {
                appppuStack_e0[3] = appppuStack_c0[0];
                appppuStack_e0[2] = (undefined8 ****)appppuStack_c0[0][2];
                if ((undefined8 *****)appppuStack_e0[2] != (undefined8 *****)0x0) {
                  ppppuVar21 = (undefined8 ****)PTR_PTR_1126add58;
                  _swift_getInitializedObjCClass();
                  appppuStack_e0[0] = (undefined8 ****)0x0;
                  pppppuVar4 = (undefined8 *****)0x0;
                  pppppuVar20 = (undefined8 *****)(appppuStack_e0[3] + 4);
                  appppuStack_e0[1] = ppppuVar21;
                  do {
                    if (appppuStack_e0[3][2] <= pppppuVar4) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ca738);
                      (*pcVar2)();
                    }
                    func_0x0001000bb420(pppppuVar20,&ppppuStack_b0);
                    pppppuVar18 = &ppppuStack_b0;
                    func_0x0001006732c8(pppppuVar18,lStack_98);
                    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
                    func_0x000100183ab8(&ppppuStack_b0);
                    appppuStack_c0[0] = (undefined8 *****)0x0;
                    unaff_x28 = appppuStack_e0[1];
                    param_2 = (undefined8 *****)PTR_s_JSONStringForObject_error_invali_11254e010;
                    _objc_msgSend(appppuStack_e0[1],PTR_s_JSONStringForObject_error_invali_11254e010
                                  ,pppppuVar18,appppuStack_c0,0);
                    _objc_retainAutoreleasedReturnValue();
                    _swift_unknownObjectRelease(pppppuVar18);
                    pppppuVar18 = (undefined8 *****)appppuStack_c0[0];
                    if (unaff_x28 == (undefined8 ****)0x0) {
                      pppppuVar11 = (undefined8 *****)appppuStack_c0[0];
                      _objc_retain(appppuStack_c0[0]);
                      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                      _objc_release(pppppuVar11);
                      _swift_willThrow();
                      _swift_errorRelease(pppppuVar18);
                      ppppuVar21 = (undefined8 ****)0x0;
                      param_2 = (undefined8 *****)0x0;
                      appppuStack_e0[0] = (undefined8 ****)0x0;
                    }
                    else {
                      ppppuVar21 = unaff_x28;
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                      _objc_retain(pppppuVar18);
                      _objc_release(unaff_x28);
                    }
                    pppppuVar11 = (undefined8 *****)param_3;
                    FUN_1049c9e7c(ppppuVar21,param_2,param_3);
                    _swift_bridgeObjectRelease(param_2);
                    if (((ulong)ppppuVar21 & 1) == 0) {
                      _swift_bridgeObjectRelease(appppuStack_e0[3]);
                      goto LAB_1049ca548;
                    }
                    pppppuVar4 = (undefined8 *****)((long)pppppuVar4 + 1);
                    pppppuVar20 = pppppuVar20 + 4;
                  } while ((undefined8 *****)appppuStack_e0[2] != pppppuVar4);
                }
                func_0x0001000b44c0(unaff_x22);
                _swift_bridgeObjectRelease(appppuStack_e0[3]);
                unaff_x25 = pppppuVar4;
LAB_1049ca33c:
                pppppuVar17 = &ppppuStack_88;
                func_0x000100183ab8();
                pppppuVar13 = (undefined8 *****)0x1;
                pppppuVar16 = param_2;
                pppppuVar4 = unaff_x25;
                goto LAB_1049ca090;
              }
LAB_1049ca548:
              func_0x0001000b44c0(unaff_x22);
              unaff_x25 = pppppuVar4;
            }
            else {
              if (((pppppuVar18 != (undefined8 *****)0x726f) ||
                  (pppppuVar4 != (undefined8 *****)0xe200000000000000)) &&
                 (pppppuVar11 = pppppuVar18,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (pppppuVar18,pppppuVar4,0x726f,0xe200000000000000,0),
                 ((ulong)pppppuVar11 & 1) == 0)) {
                if (((pppppuVar18 == (undefined8 *****)0x746f6e) &&
                    (pppppuVar4 == (undefined8 *****)0xe300000000000000)) ||
                   (pppppuVar11 = pppppuVar18,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (pppppuVar18,pppppuVar4,0x746f6e,0xe300000000000000,0),
                   ((ulong)pppppuVar11 & 1) != 0)) {
                  _swift_bridgeObjectRelease(pppppuVar4);
                  pppppuVar11 = (undefined8 *****)PTR_PTR_1126add58;
                  _swift_getInitializedObjCClass();
                  pppppuVar18 = &ppppuStack_88;
                  func_0x0001006732c8(pppppuVar18,uStack_70);
                  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
                  ppppuStack_b0 = (undefined8 *****)0x0;
                  pppppuVar16 = (undefined8 *****)PTR_s_JSONStringForObject_error_invali_11254e010;
                  _objc_msgSend(pppppuVar11,PTR_s_JSONStringForObject_error_invali_11254e010,
                                pppppuVar18,&ppppuStack_b0,0);
                  _objc_retainAutoreleasedReturnValue();
                  _swift_unknownObjectRelease(pppppuVar18);
                  pppppuVar4 = (undefined8 *****)ppppuStack_b0;
                  if (pppppuVar11 == (undefined8 *****)0x0) {
                    pppppuVar18 = (undefined8 *****)ppppuStack_b0;
                    _objc_retain(ppppuStack_b0);
                    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                    _objc_release(pppppuVar18);
                    _swift_willThrow();
                    _swift_errorRelease(pppppuVar4);
                    pppppuVar18 = (undefined8 *****)0x0;
                    pppppuVar16 = (undefined8 *****)0x0;
                  }
                  else {
                    pppppuVar18 = pppppuVar11;
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                    _objc_retain(pppppuVar4);
                    _objc_release(pppppuVar11);
                  }
                  pppppuVar17 = pppppuVar18;
                  pppppuVar11 = (undefined8 *****)param_3;
                  FUN_1049c9e7c(pppppuVar18,pppppuVar16,param_3);
                  func_0x0001000b44c0(unaff_x22);
                  _swift_bridgeObjectRelease(pppppuVar16);
                  pppppuVar13 = (undefined8 *****)(ulong)((uint)pppppuVar17 ^ 1);
                }
                else {
                  func_0x0001000bb420(&ppppuStack_88,&ppppuStack_b0);
                  pppppuVar17 = appppuStack_c0;
                  pppppuVar11 = (undefined8 *****)((long)pppppuVar20 + 8);
                  _swift_dynamicCast(pppppuVar17,&ppppuStack_b0,pppppuVar11,param_2,6);
                  pppppuVar16 = (undefined8 *****)appppuStack_c0[0];
                  if ((int)pppppuVar17 == 0) {
                    func_0x0001000b44c0(unaff_x22);
                    goto LAB_1049ca538;
                  }
                  pppppuVar13 = pppppuVar18;
                  pppppuVar11 = (undefined8 *****)appppuStack_c0[0];
                  FUN_1049cbb0c(pppppuVar18,pppppuVar4,appppuStack_c0[0],param_3);
                  func_0x0001000b44c0(unaff_x22);
                  _swift_bridgeObjectRelease(pppppuVar16);
                  _swift_bridgeObjectRelease(pppppuVar4);
                }
                pppppuVar17 = &ppppuStack_88;
                func_0x000100183ab8();
                goto LAB_1049ca090;
              }
              _swift_bridgeObjectRelease(pppppuVar4);
              func_0x0001000bb420(&ppppuStack_88,&ppppuStack_b0);
              uVar6 = 0x11309d6d0;
              func_0x0001048db364(0x11309d6d0);
              pppppuVar17 = appppuStack_c0;
              pppppuVar11 = (undefined8 *****)((long)pppppuVar20 + 8);
              _swift_dynamicCast(pppppuVar17,&ppppuStack_b0,pppppuVar11,uVar6,6);
              if ((int)pppppuVar17 == 0) goto LAB_1049ca548;
              appppuStack_e0[3] = appppuStack_c0[0];
              appppuStack_e0[2] = (undefined8 ****)appppuStack_c0[0][2];
              if ((undefined8 *****)appppuStack_e0[2] != (undefined8 *****)0x0) {
                ppppuVar21 = (undefined8 ****)PTR_PTR_1126add58;
                _swift_getInitializedObjCClass();
                appppuStack_e0[0] = (undefined8 ****)0x0;
                unaff_x25 = (undefined8 *****)0x0;
                pppppuVar20 = (undefined8 *****)(appppuStack_e0[3] + 4);
                appppuStack_e0[1] = ppppuVar21;
                do {
                  if (appppuStack_e0[3][2] <= unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1049ca73c);
                    (*pcVar2)();
                  }
                  func_0x0001000bb420(pppppuVar20,&ppppuStack_b0);
                  pppppuVar18 = &ppppuStack_b0;
                  func_0x0001006732c8(pppppuVar18,lStack_98);
                  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
                  func_0x000100183ab8(&ppppuStack_b0);
                  appppuStack_c0[0] = (undefined8 *****)0x0;
                  unaff_x28 = appppuStack_e0[1];
                  param_2 = (undefined8 *****)PTR_s_JSONStringForObject_error_invali_11254e010;
                  _objc_msgSend(appppuStack_e0[1],PTR_s_JSONStringForObject_error_invali_11254e010,
                                pppppuVar18,appppuStack_c0,0);
                  _objc_retainAutoreleasedReturnValue();
                  _swift_unknownObjectRelease(pppppuVar18);
                  pppppuVar18 = (undefined8 *****)appppuStack_c0[0];
                  if (unaff_x28 == (undefined8 ****)0x0) {
                    pppppuVar11 = (undefined8 *****)appppuStack_c0[0];
                    _objc_retain(appppuStack_c0[0]);
                    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                    _objc_release(pppppuVar11);
                    _swift_willThrow();
                    _swift_errorRelease(pppppuVar18);
                    ppppuVar21 = (undefined8 ****)0x0;
                    param_2 = (undefined8 *****)0x0;
                    appppuStack_e0[0] = (undefined8 ****)0x0;
                  }
                  else {
                    ppppuVar21 = unaff_x28;
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                    _objc_retain(pppppuVar18);
                    _objc_release(unaff_x28);
                  }
                  pppppuVar11 = (undefined8 *****)param_3;
                  FUN_1049c9e7c(ppppuVar21,param_2,param_3);
                  _swift_bridgeObjectRelease(param_2);
                  if (((ulong)ppppuVar21 & 1) != 0) {
                    _swift_bridgeObjectRelease(appppuStack_e0[3]);
                    func_0x0001000b44c0(unaff_x22);
                    goto LAB_1049ca33c;
                  }
                  unaff_x25 = (undefined8 *****)((long)unaff_x25 + 1);
                  pppppuVar20 = pppppuVar20 + 4;
                } while ((undefined8 *****)appppuStack_e0[2] != unaff_x25);
              }
              func_0x0001000b44c0(unaff_x22);
              pppppuVar4 = (undefined8 *****)appppuStack_e0[3];
LAB_1049ca538:
              _swift_bridgeObjectRelease(pppppuVar4);
            }
            pppppuVar17 = &ppppuStack_88;
            func_0x000100183ab8();
            goto LAB_1049ca08c;
          }
          _swift_bridgeObjectRelease(ppppuVar21);
        }
        pppppuVar17 = unaff_x22;
        func_0x0001000b44c0();
        unaff_x25 = pppppuVar4;
      }
    }
  }
LAB_1049ca08c:
  pppppuVar13 = (undefined8 *****)0x0;
  pppppuVar16 = param_2;
  pppppuVar4 = unaff_x25;
LAB_1049ca090:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar22._4_4_ = 0;
    auVar22._0_4_ = (uint)pppppuVar13 & 1;
    auVar22._8_8_ = pppppuVar10;
    return auVar22;
  }
  ppppuVar21 = (undefined8 ****)0x1049ca740;
  ___stack_chk_fail();
  do {
    ppppuVar12 = _DAT_1130a3780;
    pppppuVar3[-0xc] = unaff_x28;
    pppppuVar3[-0xb] = pppppuVar20;
    pppppuVar3[-10] = pppppuVar18;
    pppppuVar3[-9] = pppppuVar4;
    pppppuVar3[-8] = unaff_x20;
    pppppuVar3[-7] = (undefined8 ****)param_3;
    pppppuVar3[-6] = unaff_x22;
    pppppuVar3[-5] = pppppuVar16;
    pppppuVar3[-4] = pppppuVar13;
    pppppuVar3[-3] = param_1;
    pppppuVar3[-2] = pppppuVar15;
    pppppuVar3[-1] = ppppuVar21;
    pppppuVar3[-0xd] = *(undefined8 *****)PTR____stack_chk_guard_11034bdc0;
    if (*(long *)(*(long *)((long)pppppuVar13 + (long)_DAT_1130a3780) + 0x10) == 0) {
      pppppuVar15 = (undefined8 *****)0x5d5b;
      pppppuVar9 = pppppuVar10;
      ppppuVar21 = _DAT_1130a3780;
      pppppuVar10 = (undefined8 *****)0xe200000000000000;
      pppppuVar16 = pppppuVar13;
    }
    else {
      unaff_x20 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_allocWithZone();
      _objc_msgSend();
      ppppuVar12 = *(undefined8 *****)((long)pppppuVar13 + (long)ppppuVar12);
      pppuVar19 = ppppuVar12[2];
      ppppuVar21 = ppppuVar12;
      if (pppuVar19 != (undefined8 ***)0x0) {
        pppppuVar3[-0x17] = pppppuVar17;
        pppppuVar3[-0x15] = unaff_x20;
        pppppuVar4 = (undefined8 *****)PTR_PTR_1126add58;
        _swift_getInitializedObjCClass();
        _swift_bridgeObjectRetain(ppppuVar12);
        ppppuVar21 = (undefined8 ****)PTR___sypN_11034f1a8;
        pppppuVar3[-0x16] = ppppuVar12;
        param_3 = (char *)(ppppuVar12 + 5);
        unaff_x28 = (undefined8 ****)0x11309c420;
        do {
          pppppuVar20 = *(undefined8 ******)((long)param_3 + -8);
          ppppuVar12 = *(undefined8 *****)param_3;
          _swift_bridgeObjectRetain(ppppuVar12);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pppppuVar20,ppppuVar12);
          _swift_bridgeObjectRelease(ppppuVar12);
          pppppuVar3[-0x11] = (undefined8 ****)0x0;
          pppppuVar15 = pppppuVar4;
          _objc_msgSend(pppppuVar4,PTR_s_objectForJSONString_error__1126159d8,pppppuVar20,
                        pppppuVar3 + -0x11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppppuVar20);
          ppppuVar12 = pppppuVar3[-0x11];
          if (pppppuVar15 == (undefined8 *****)0x0) {
            ppppuVar14 = ppppuVar12;
            _objc_retain();
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(ppppuVar12);
            _objc_release(ppppuVar14);
            _swift_willThrow();
            _swift_errorRelease(ppppuVar12);
          }
          else {
            _objc_retain();
            __ss018_bridgeAnyObjectToB0yypyXlSgF(pppppuVar3 + -0x11,pppppuVar15);
            _swift_unknownObjectRelease(pppppuVar15);
            ppppuVar12 = unaff_x28;
            func_0x0001048db364(0x11309c420);
            pppppuVar15 = pppppuVar3 + -0x14;
            _swift_dynamicCast(pppppuVar15,pppppuVar3 + -0x11,(undefined *)((long)ppppuVar21 + 8),
                               ppppuVar12,6);
            if (((ulong)pppppuVar15 & 1) != 0) {
              ppppuVar12 = pppppuVar3[-0x14];
              if (ppppuVar12[2] != (undefined8 ***)0x0) {
                _swift_bridgeObjectRetain(ppppuVar12);
                lVar7 = 0x6469;
                uVar8 = 0;
                func_0x000100029284(0x6469);
                if ((uVar8 & 1) == 0) {
                  _swift_bridgeObjectRelease(ppppuVar12);
                }
                else {
                  func_0x0001000bb420(ppppuVar12[7] + lVar7 * 4,pppppuVar3 + -0x11);
                  _swift_bridgeObjectRelease(ppppuVar12);
                  pppppuVar15 = pppppuVar3 + -0x14;
                  _swift_dynamicCast(pppppuVar15,pppppuVar3 + -0x11,
                                     (undefined *)((long)ppppuVar21 + 8),PTR___ss5Int64VN_11034ee50,
                                     6);
                  if ((((ulong)pppppuVar15 & 1) != 0) && (ppppuVar12[2] != (undefined8 ***)0x0)) {
                    ppppuVar14 = pppppuVar3[-0x14];
                    lVar7 = 0x656c7572;
                    uVar8 = 0;
                    func_0x000100029284(0x656c7572);
                    if ((uVar8 & 1) != 0) {
                      func_0x0001000bb420(ppppuVar12[7] + lVar7 * 4,pppppuVar3 + -0x11);
                      _swift_bridgeObjectRelease(ppppuVar12);
                      pppppuVar15 = pppppuVar3 + -0x14;
                      _swift_dynamicCast(pppppuVar15,pppppuVar3 + -0x11,
                                         (undefined *)((long)ppppuVar21 + 8),PTR___sSSN_11034da80,6)
                      ;
                      if (((ulong)pppppuVar15 & 1) != 0) {
                        ppppuVar12 = pppppuVar3[-0x14];
                        pppppuVar20 = (undefined8 *****)pppppuVar3[-0x13];
                        FUN_1049c9e7c(ppppuVar12,pppppuVar20,pppppuVar3[-0x17]);
                        _swift_bridgeObjectRelease(pppppuVar20);
                        if (((ulong)ppppuVar12 & 1) != 0) {
                          __ss5Int64V10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(ppppuVar14);
                          _objc_msgSend(pppppuVar3[-0x15],PTR_s_addObject__11259c1f0,ppppuVar14);
                          _objc_release(ppppuVar14);
                        }
                      }
                      goto LAB_1049ca824;
                    }
                  }
                }
              }
              _swift_bridgeObjectRelease(ppppuVar12);
            }
          }
LAB_1049ca824:
          param_3 = (char *)((long)param_3 + 0x10);
          pppuVar19 = (undefined8 ***)((long)pppuVar19 + -1);
        } while (pppuVar19 != (undefined8 ***)0x0);
        _swift_bridgeObjectRelease(pppppuVar3[-0x16]);
        unaff_x20 = (undefined8 *****)pppppuVar3[-0x15];
      }
      pppppuVar18 = (undefined8 *****)0x0;
      pppppuVar17 = (undefined8 *****)PTR_PTR_1126add58;
      _swift_getInitializedObjCClass();
      pppppuVar3[-0x11] = (undefined8 ****)0x0;
      pppppuVar13 = (undefined8 *****)PTR_s_JSONStringForObject_error_invali_11254e010;
      pppppuVar11 = unaff_x20;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar16 = (undefined8 *****)pppppuVar3[-0x11];
      if (pppppuVar17 == (undefined8 *****)0x0) {
        pppppuVar15 = pppppuVar16;
        _objc_retain(pppppuVar16);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(pppppuVar15);
        _swift_willThrow();
        _swift_errorRelease(pppppuVar16);
        pppppuVar10 = (undefined8 *****)0xe200000000000000;
        pppppuVar15 = (undefined8 *****)0x5d5b;
        pppppuVar9 = pppppuVar13;
      }
      else {
        pppppuVar15 = pppppuVar17;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        pppppuVar9 = pppppuVar13;
        _objc_retain(pppppuVar16);
        _objc_release(unaff_x20);
        pppppuVar10 = pppppuVar13;
        param_3 = (char *)pppppuVar17;
        unaff_x20 = pppppuVar17;
      }
      pppppuVar17 = unaff_x20;
      _objc_release();
    }
    pppppuVar13 = pppppuVar10;
    if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == pppppuVar3[-0xd]) {
      auVar23._8_8_ = pppppuVar13;
      auVar23._0_8_ = pppppuVar15;
      return auVar23;
    }
    ___stack_chk_fail();
    lVar7 = _DAT_1130a3778;
    pppppuVar3[-0x24] = unaff_x28;
    pppppuVar3[-0x23] = pppppuVar20;
    pppppuVar3[-0x22] = pppppuVar18;
    pppppuVar3[-0x21] = pppppuVar4;
    pppppuVar3[-0x20] = unaff_x20;
    pppppuVar3[-0x1f] = (undefined8 ****)param_3;
    pppppuVar3[-0x1e] = pppppuVar16;
    pppppuVar3[-0x1d] = pppppuVar15;
    pppppuVar3[-0x1c] = pppppuVar13;
    pppppuVar3[-0x1b] = ppppuVar21;
    pppppuVar3[-0x1a] = pppppuVar3 + -2;
    pppppuVar3[-0x19] = (undefined8 ****)0x1049caad8;
    pppppuVar15 = pppppuVar3 + -0x1a;
    pppppuVar10 = pppppuVar9;
    if (*(char *)((long)pppppuVar13 + _DAT_1130a3778) != '\x01' ||
        pppppuVar17 == (undefined8 *****)0x0) {
LAB_1049cad40:
      _objc_retain(pppppuVar17);
      goto LAB_1049cad7c;
    }
    param_1 = pppppuVar17;
    _objc_retain();
    pppppuVar18 = param_1;
    _objc_msgSend();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(pppppuVar3 + -0x2a);
    _swift_unknownObjectRelease(pppppuVar18);
    uVar6 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    pppppuVar4 = (undefined8 *****)PTR___sypN_11034f1a8;
    pppppuVar16 = pppppuVar3 + -0x2e;
    pppppuVar10 = pppppuVar3 + -0x2a;
    _swift_dynamicCast(pppppuVar16,pppppuVar10,PTR___sypN_11034f1a8 + 8,uVar6,6);
    pppppuVar18 = (undefined8 *****)PTR___sSSN_11034da80;
    if (((ulong)pppppuVar16 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1049cad40;
    }
    pppppuVar16 = (undefined8 *****)pppppuVar3[-0x2e];
    pppppuVar3[-0x25] = pppppuVar16;
    if (*(char *)((long)pppppuVar13 + lVar7) != '\x01') {
      pppppuVar17 = pppppuVar16;
      pppppuVar10 = (undefined8 *****)PTR___sSSN_11034da80;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (pppppuVar16,PTR___sSSN_11034da80,(undefined *)((long)pppppuVar4 + 8),
                 PTR___sSSSHsWP_11034da90);
      _swift_bridgeObjectRelease(pppppuVar16);
      _objc_release(param_1);
LAB_1049cad7c:
      auVar24._8_8_ = pppppuVar10;
      auVar24._0_8_ = pppppuVar17;
      return auVar24;
    }
    func_0x0001049cada0(pppppuVar3 + -0x25,pppppuVar9,pppppuVar11);
    pppppuVar3[-0x27] = (undefined8 ****)PTR___sSbN_11034dd40;
    *(undefined1 *)(pppppuVar3 + -0x2a) = 1;
    func_0x000100102924(pppppuVar3 + -0x2a,pppppuVar3 + -0x2e);
    ppppuVar12 = pppppuVar3[-0x25];
    ppppuVar21 = ppppuVar12;
    _swift_isUniquelyReferenced_nonNull_native(ppppuVar12);
    pppppuVar3[-0x2f] = ppppuVar12;
    pppppuVar10 = (undefined8 *****)0x6163616d5f7363;
    pppppuVar11 = (undefined8 *****)0xe700000000000000;
    func_0x0001001029e8(pppppuVar3 + -0x2e,0x6163616d5f7363,0xe700000000000000,ppppuVar21);
    pppppuVar17 = (undefined8 *****)pppppuVar3[-0x2f];
    param_3 = "fb_post_attachment";
    ppppuVar21 = (undefined8 ****)0x1049cac18;
    pppppuVar3 = pppppuVar3 + -0x30;
    pppppuVar16 = pppppuVar13;
    unaff_x22 = pppppuVar17;
    unaff_x20 = pppppuVar9;
  } while( true );
}


