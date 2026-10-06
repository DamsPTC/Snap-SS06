/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049314cc; end: 104931707;  */

long FUN_1049314cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126add58;
  _swift_getInitializedObjCClass();
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  auStack_d0[0] = 0;
  puVar7 = PTR_s_JSONStringForObject_error_invali_11254e010;
  _objc_msgSend(puVar1,PTR_s_JSONStringForObject_error_invali_11254e010,param_1,auStack_d0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = auStack_d0[0];
  if (puVar1 == (undefined *)0x0) {
    uVar2 = auStack_d0[0];
    _objc_retain(auStack_d0[0]);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar3);
    _objc_release(uVar2);
    _swift_willThrow();
    _swift_errorRelease(uVar3);
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_retain(uVar3);
    _objc_release(puVar1);
  }
  lVar4 = 0x11309d990;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined8 *)(lVar4 + 0x20) = 0x7369747265766461;
  *(undefined8 *)(lVar4 + 0x28) = 0xee007364695f7265;
  puVar1 = PTR___sSSN_11034da80;
  if (puVar7 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    puVar1 = (undefined *)0x0;
  }
  *(undefined **)(lVar4 + 0x30) = puVar6;
  *(undefined **)(lVar4 + 0x38) = puVar7;
  *(undefined **)(lVar4 + 0x48) = puVar1;
  *(undefined8 *)(lVar4 + 0x50) = 0x65746e6f635f6266;
  *(undefined8 *)(lVar4 + 0x58) = 0xef617461645f746e;
  puVar1 = PTR___sSSN_11034da80;
  lVar5 = param_3;
  if (param_3 == 0) {
    param_2 = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    puVar1 = (undefined *)0x0;
    lVar5 = 0;
  }
  *(undefined8 *)(lVar4 + 0x60) = param_2;
  *(long *)(lVar4 + 0x68) = lVar5;
  *(undefined **)(lVar4 + 0x78) = puVar1;
  _swift_bridgeObjectRetain(param_3);
  lVar5 = lVar4;
  func_0x000102bcb3b0(lVar4);
  _swift_setDeallocating(lVar4);
  uVar3 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),2,uVar3);
  lVar4 = lVar5;
  FUN_10492df18(lVar5);
  _swift_bridgeObjectRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10492d278();
    return lVar5;
  }
  return lVar4;
}



/* Entry: 104931708; end: 10493170b;  */

void FUN_104931708(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10492d278(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10493170c; end: 10493186b;  */

long FUN_10493170c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = 0x11309d990;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x65746e6f635f6266;
  *(undefined8 *)(lVar1 + 0x28) = 0xee007364695f746e;
  puVar4 = PTR___sSSN_11034da80;
  lVar2 = param_4;
  if (param_4 == 0) {
    param_3 = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    puVar4 = (undefined *)0x0;
    lVar2 = 0;
  }
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(long *)(lVar1 + 0x38) = lVar2;
  *(undefined **)(lVar1 + 0x48) = puVar4;
  *(undefined8 *)(lVar1 + 0x50) = 0x5f676f6c61746163;
  *(undefined8 *)(lVar1 + 0x58) = 0xea00000000006469;
  puVar4 = PTR___sSSN_11034da80;
  lVar2 = param_2;
  if (param_2 == 0) {
    param_1 = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    puVar4 = (undefined *)0x0;
    lVar2 = 0;
  }
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(long *)(lVar1 + 0x68) = lVar2;
  *(undefined **)(lVar1 + 0x78) = puVar4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  lVar2 = lVar1;
  func_0x000102bcb3b0(lVar1);
  _swift_setDeallocating(lVar1);
  uVar3 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy((undefined8 *)(lVar1 + 0x20),2,uVar3);
  lVar1 = lVar2;
  FUN_10492df18(lVar2);
  _swift_bridgeObjectRelease(lVar2);
  return lVar1;
}



/* Entry: 10493186c; end: 104931bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10493186c(ulong *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [464];
  
  uVar3 = 0x18;
  _arc4random_uniform();
  puVar9 = PTR__swift_isaMask_11034f488;
  uVar1 = (uint)uVar3 + 0x18;
  uVar10 = (ulong)uVar1;
  if (0xffffffe7 < (uint)uVar3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x104931bc8);
    (*pcVar12)();
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x170))();
  if ((uVar3 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    _swift_beginAccess(0x11381576a,auStack_250,0,0);
    uVar11 = uRam000000011381576a;
  }
  lVar4 = 0x11309d990;
  func_0x0001048db364();
  puVar7 = auStack_230;
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 0x12;
  *(undefined8 *)(lVar4 + 0x10) = 9;
  *(undefined8 *)(lVar4 + 0x20) = 0x6e676961706d6163;
  *(undefined8 *)(lVar4 + 0x28) = 0xeb0000000064695f;
  lVar5 = lVar4;
  (**(code **)((*(ulong *)puVar9 & *param_1) + 0xe0))();
  puVar8 = PTR___sSSN_11034da80;
  *(long *)(lVar4 + 0x30) = lVar5;
  *(undefined1 **)(lVar4 + 0x38) = puVar7;
  *(undefined **)(lVar4 + 0x48) = puVar8;
  *(undefined8 *)(lVar4 + 0x50) = 0x69737265766e6f63;
  *(undefined8 *)(lVar4 + 0x58) = 0xef617461645f6e6f;
  (**(code **)((*(ulong *)puVar9 & *param_1) + 0x200))();
  puVar2 = PTR___sSiN_11034deb0;
  *(long *)(lVar4 + 0x60) = lVar5;
  *(undefined **)(lVar4 + 0x78) = puVar2;
  *(undefined8 *)(lVar4 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(lVar4 + 0x88) = 0x800000010f21d350;
  puVar2 = PTR___ss6UInt32VN_11034f020;
  *(uint *)(lVar4 + 0x90) = uVar1;
  *(undefined **)(lVar4 + 0xa8) = puVar2;
  *(undefined8 *)(lVar4 + 0xb0) = 0x6e656b6f74;
  *(undefined8 *)(lVar4 + 0xb8) = 0xe500000000000000;
  uVar6 = ((undefined8 *)((long)param_1 + _DAT_11309d810))[1];
  *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)((long)param_1 + _DAT_11309d810);
  *(undefined8 *)(lVar4 + 200) = uVar6;
  *(undefined **)(lVar4 + 0xd8) = puVar8;
  *(undefined8 *)(lVar4 + 0xe0) = 0x6c665f79616c6564;
  *(undefined8 *)(lVar4 + 0xe8) = 0xea0000000000776f;
  *(undefined8 *)(lVar4 + 0xf0) = 0x726576726573;
  *(undefined8 *)(lVar4 + 0xf8) = 0xe600000000000000;
  *(undefined **)(lVar4 + 0x108) = puVar8;
  *(undefined8 *)(lVar4 + 0x110) = 0x695f6769666e6f63;
  *(undefined8 *)(lVar4 + 0x118) = 0xe900000000000064;
  pcVar12 = *(code **)((*(ulong *)puVar9 & *param_1) + 0x110);
  _swift_bridgeObjectRetain();
  (*pcVar12)();
  puVar8 = PTR___sSSN_11034da80;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = 0;
    *(undefined8 *)(lVar4 + 0x130) = 0;
    puVar8 = (undefined *)0x0;
  }
  *(undefined8 *)(lVar4 + 0x120) = uVar6;
  *(undefined1 **)(lVar4 + 0x128) = puVar7;
  *(undefined **)(lVar4 + 0x138) = puVar8;
  *(undefined8 *)(lVar4 + 0x140) = 0x63616d68;
  *(undefined8 *)(lVar4 + 0x148) = 0xe400000000000000;
  (**(code **)((*(ulong *)puVar9 & *param_1) + 0x290))();
  puVar8 = PTR___sSSN_11034da80;
  if (puVar7 == (undefined1 *)0x0) {
    uVar10 = 0;
    *(undefined8 *)(lVar4 + 0x160) = 0;
    puVar8 = (undefined *)0x0;
  }
  *(ulong *)(lVar4 + 0x150) = uVar10;
  *(undefined1 **)(lVar4 + 0x158) = puVar7;
  *(undefined **)(lVar4 + 0x168) = puVar8;
  *(undefined8 *)(lVar4 + 0x170) = 0x7369747265766461;
  *(undefined8 *)(lVar4 + 0x178) = 0xed000064695f7265;
  (**(code **)((*(ulong *)puVar9 & *param_1) + 0x128))();
  puVar9 = PTR___sSSN_11034da80;
  if (puVar7 == (undefined1 *)0x0) {
    uVar10 = 0;
    *(undefined8 *)(lVar4 + 400) = 0;
    puVar9 = (undefined *)0x0;
  }
  *(ulong *)(lVar4 + 0x180) = uVar10;
  *(undefined1 **)(lVar4 + 0x188) = puVar7;
  *(undefined **)(lVar4 + 0x198) = puVar9;
  *(undefined8 *)(lVar4 + 0x1a0) = 0xd000000000000017;
  *(undefined8 *)(lVar4 + 0x1a8) = 0x800000010f21d3a0;
  *(undefined **)(lVar4 + 0x1c8) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar4 + 0x1b0) = uVar11;
  lVar5 = lVar4;
  func_0x000102bcb3b0(lVar4);
  _swift_setDeallocating(lVar4);
  uVar6 = 0x11309d670;
  func_0x0001048db364(0x11309d670);
  _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),9,uVar6);
  lVar4 = lVar5;
  FUN_10492df18(lVar5);
  _swift_bridgeObjectRelease(lVar5);
  return lVar4;
}



/* Entry: 104931bc8; end: 104932023;  */

/* WARNING: Possible PIC construction at 0x000104931e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104931f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104931e20) */
/* WARNING: Removing unreachable block (ram,0x000104931f88) */
/* WARNING: Removing unreachable block (ram,0x000104931fbc) */

void FUN_104931bc8(undefined8 param_1,code *param_2,ulong param_3,code *param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  ulong uStack_78;
  
  lVar5 = 0;
  pcStack_d0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_b0 = *(long *)(lVar5 + -8);
  lVar11 = *(long *)(lStack_b0 + 0x40);
  lVar6 = 0;
  puStack_b8 = auStack_f0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  lStack_c0 = *(long *)(lVar6 + -8);
  lVar12 = (long)(auStack_f0 + -(lVar11 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  lStack_c8 = lVar12;
  __s8Dispatch0A4TimeVMa();
  lVar14 = *(long *)(lVar11 + -8);
  uVar13 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uVar13;
  lVar15 = lVar12 - uVar13;
  if (param_4 == (code *)0x0) {
    return;
  }
  uVar13 = param_5;
  lStack_e0 = lVar6;
  lStack_d8 = lVar5;
  _swift_retain();
  uStack_e8 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((uVar13 == 0xd000000000000028) && (param_2 == (code *)0x800000010f21d050)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(param_2);
    if ((uVar13 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        (*param_4)();
      }
      goto code_r0x000100dc2b4c;
    }
  }
  pcVar3 = pcStack_d0;
  pcStack_80 = param_4;
  uStack_78 = param_5;
  if ((param_3 & 1) == 0) {
    __s8Dispatch0A4TimeV3nowACyFZ(lVar12);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar15,pcVar3,lVar12);
    pcStack_d0 = *(code **)(lVar14 + 8);
    (*pcStack_d0)(lVar12,lVar11);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1107b89b0;
    ppuVar7 = &puStack_a0;
    __Block_copy(ppuVar7);
    _swift_retain(param_5);
    lVar5 = lStack_c8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_c8);
    puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar1);
    uVar9 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar10 = 0x112d4af98;
    func_0x000104931470(0x112d4af98,0x11309c6f8,puVar2,PTR___sSayxGSTsMc_11034dd08);
    puVar4 = puStack_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_b8,&puStack_a8,uVar9,uVar10,lStack_d8,uVar8);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar15,lVar5,puVar4,ppuVar7);
    __Block_release(ppuVar7);
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1107b8988;
    ppuVar7 = &puStack_a0;
    __Block_copy(ppuVar7);
    _swift_retain(param_5);
    lVar5 = lStack_c8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_c8);
    puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar1);
    uVar9 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar10 = 0x112d4af98;
    func_0x000104931470(0x112d4af98,0x11309c6f8,puVar2,PTR___sSayxGSTsMc_11034dd08);
    puVar4 = puStack_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_b8,&puStack_a8,uVar9,uVar10,lStack_d8,uVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar5,puVar4,ppuVar7);
    __Block_release(ppuVar7);
  }
code_r0x000100dc2b4c:
  if (param_4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 104932024; end: 1049321e3;  */

void FUN_104932024(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar5,param_1);
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790(lVar1,0x1138157b0);
  (**(code **)(lVar7 + 0x10))(puVar6,lVar5,lVar2);
  (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar2);
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  func_0x000100ed9cbc(puVar6,lVar1);
  _swift_endAccess(auStack_68);
  _swift_beginAccess(0x113815760,auStack_68,0,0);
  lVar1 = lRam0000000113815760;
  if (lRam0000000113815760 != 0) {
    lVar3 = lRam0000000113815760;
    _swift_unknownObjectRetain(lRam0000000113815760);
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    uVar4 = 0xd000000000000034;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f21d0c0);
    _objc_msgSend(lVar1,PTR_s_fb_setObject_forKey__1125c5f88,lVar3,uVar4);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  return;
}



/* Entry: 1049321e4; end: 10493242f;  */

ulong * FUN_1049321e4(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  ulong *puVar11;
  undefined auStack_78 [24];
  
  puVar8 = param_2;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
    puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  else {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      puVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  if (puVar4 == (undefined *)0x0) {
    PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
    return (ulong *)0x0;
  }
  puVar11 = (ulong *)(puVar4 + -1);
  PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
  if (!SBORROW8((long)puVar4,1)) {
    bVar10 = false;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104932414);
            (*pcVar9)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104932418);
            (*pcVar9)();
          }
          puVar5 = *(ulong **)(param_1 + (long)puVar11 * 8 + 0x20);
          _objc_retain();
        }
        else {
          puVar5 = puVar11;
          puVar8 = param_1;
          FUN_10491ac20();
        }
        puVar6 = puVar5;
        (**(code **)((*puVar1 & *puVar5) + 0x158))();
        if (((ulong)puVar6 & 1) != 0) {
          puVar8 = auStack_78;
          _swift_beginAccess(0x113815758,puVar8,0,0);
          if (((uRam0000000113815758 != 0) &&
              (uVar7 = uRam0000000113815758, puVar8 = PTR_s_shouldCutoff_1126694f0, _objc_msgSend(),
              uVar2 = uRam0000000113815758, (uVar7 & 1) == 0)) && (uRam0000000113815758 != 0)) {
            _swift_unknownObjectRetain(uRam0000000113815758);
            puVar4 = param_2;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
            uVar7 = uVar2;
            puVar8 = PTR_s_isReportingEvent__112525218;
            _objc_msgSend(uVar2,PTR_s_isReportingEvent__112525218,puVar4);
            _objc_release(puVar4);
            _swift_unknownObjectRelease(uVar2);
            if ((int)uVar7 != 0) {
              _objc_release(puVar5);
              return (ulong *)0x0;
            }
          }
        }
        pcVar9 = *(code **)((*puVar1 & *puVar5) + 0x128);
        (*pcVar9)();
        if (puVar8 != (undefined *)0x0) break;
        if (!bVar10) goto LAB_104932384;
        _objc_release(puVar5);
        if (puVar11 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
LAB_1049323d0:
        bVar10 = true;
        bVar3 = SBORROW8((long)puVar11,1);
        puVar11 = (ulong *)((long)puVar11 + -1);
        if (bVar3) goto LAB_1049323dc;
      }
      _swift_bridgeObjectRelease(puVar8);
LAB_104932384:
      puVar8 = param_2;
      puVar4 = param_3;
      (**(code **)((*puVar1 & *puVar5) + 0x268))
                (param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0);
      if (((ulong)puVar8 & 1) != 0) {
        return puVar5;
      }
      (*pcVar9)();
      puVar8 = puVar4;
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
        if (puVar11 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        goto LAB_1049323d0;
      }
      _swift_bridgeObjectRelease(puVar4);
      if (puVar11 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      bVar3 = SBORROW8((long)puVar11,1);
      puVar11 = (ulong *)((long)puVar11 + -1);
    } while (!bVar3);
  }
LAB_1049323dc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1049323e0);
  (*pcVar9)();
}



/* Entry: 104932430; end: 10493256b;  */

uint FUN_104932430(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(0x11381576a,auStack_58,0,0);
  if (cRam000000011381576a == '\x01') {
    puVar3 = auStack_70;
    _swift_beginAccess(0x11381576b,puVar3,0,0);
    puVar1 = PTR__swift_isaMask_11034f488;
    if (cRam000000011381576b == '\x01') {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x140))();
      if (puVar3 != (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(puVar3);
        if (lRam000000011309d030 != -1) {
          _swift_once(0x11309d030,FUN_104929090);
        }
        _swift_beginAccess(0x113815788,auStack_88,0,0);
        uVar2 = uRam0000000113815788;
        pcVar5 = *(code **)((*(ulong *)puVar1 & *param_1) + 0x278);
        _swift_bridgeObjectRetain(uRam0000000113815788);
        (*pcVar5)(param_2,param_3,uVar2);
        uVar4 = (uint)param_2;
        _swift_bridgeObjectRelease(uVar2);
        goto LAB_104932538;
      }
    }
  }
  uVar4 = 0;
LAB_104932538:
  return uVar4 & 1;
}



/* Entry: 10493256c; end: 104932583;  */

void FUN_10493256c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  puVar13 = *(undefined **)(unaff_x20 + 0x20);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_108 = *(long *)(lVar3 + -8);
  puVar14 = auStack_120 + -(*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_100 = lVar3;
  __s8Dispatch0A3QoSVMa();
  lStack_118 = *(long *)(lVar4 + -8);
  lVar3 = (long)puVar14 - (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar4;
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_80,0,0);
  uVar6 = uRam0000000113815770;
  FUN_104934c24(param_1,&uStack_a0,0x11309c428);
  FUN_104934c24(&uStack_a0,auStack_c0,0x11309c428);
  puVar5 = &UNK_1107b8a88;
  lVar4 = 0x50;
  _swift_allocObject(&UNK_1107b8a88,0x50,7);
  *(long *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uStack_98;
  *(undefined8 *)(puVar5 + 0x20) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x38) = uStack_88;
  *(undefined8 *)(puVar5 + 0x30) = uStack_90;
  *(code **)(puVar5 + 0x40) = pcVar1;
  *(undefined **)(puVar5 + 0x48) = puVar13;
  _swift_errorRetain(param_2);
  _swift_retain(puVar13);
  _swift_errorRetain(param_2);
  _swift_retain(puVar13);
  _objc_retain(uVar6);
  puVar7 = puVar5;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((puVar7 == (undefined *)0xd000000000000028) && (lVar4 == -0x7ffffffef0de2fb0)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar4);
    if (((ulong)puVar7 & 1) == 0) {
      if (param_2 == 0) {
        uVar12 = 0;
        FUN_104933424();
        if ((uVar12 & 1) != 0) {
          (*pcVar1)();
        }
      }
      _objc_release(uVar6);
      _swift_release_n(puVar5,2);
      _swift_errorRelease(param_2);
      FUN_1049349e8(auStack_c0,0x11309c428);
      goto LAB_10492d174;
    }
  }
  pcStack_d0 = FUN_104934a24;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_1107b8aa0;
  ppuVar8 = &puStack_f0;
  puStack_c8 = puVar5;
  __Block_copy(ppuVar8);
  _swift_retain(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0x112d4af88;
  func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar7);
  uVar10 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar11 = 0x112d4af98;
  func_0x000104931470(0x112d4af98,0x11309c6f8,puVar2,PTR___sSayxGSTsMc_11034dd08);
  lVar4 = lStack_100;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar14,&puStack_f8,uVar10,uVar11,lStack_100,uVar9);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,puVar14,ppuVar8);
  __Block_release(ppuVar8);
  _objc_release(uVar6);
  _swift_release_n(puVar5,2);
  _swift_errorRelease(param_2);
  FUN_1049349e8(auStack_c0,0x11309c428);
  _swift_release(puVar13);
  (**(code **)(lStack_108 + 8))(puVar14,lVar4);
  (**(code **)(lStack_118 + 8))(lVar3,lStack_110);
  puVar13 = puStack_c8;
LAB_10492d174:
  _swift_release(puVar13);
  return;
}



/* Entry: 104932584; end: 104932663;  */

ulong FUN_104932584(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x158))();
  if (((ulong)param_1 & 1) != 0) {
    _swift_beginAccess(0x113815758,auStack_48,0,0);
    if (uRam0000000113815758 == 0) {
      return 0;
    }
    uVar2 = uRam0000000113815758;
    _objc_msgSend(uRam0000000113815758,PTR_s_shouldCutoff_1126694f0);
    uVar1 = uRam0000000113815758;
    if (((uVar2 & 1) == 0) && (uRam0000000113815758 != 0)) {
      _swift_unknownObjectRetain(uRam0000000113815758);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      uVar2 = uVar1;
      _objc_msgSend(uVar1,PTR_s_isReportingEvent__112525218,param_2);
      _objc_release(param_2);
      _swift_unknownObjectRelease(uVar1);
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 104932664; end: 104932ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104932664(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined1 auStack_130 [8];
  long *plStack_128;
  ulong *puStack_120;
  undefined *puStack_118;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = lRam000000011309d030;
  if (param_1 == 0) {
    return;
  }
  _objc_retain();
  if (lVar5 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  plVar1 = (long *)(param_1 + _DAT_11309d720);
  _swift_beginAccess(plVar1,auStack_80,0,0);
  lVar5 = *plVar1;
  uVar16 = plVar1[1];
  plStack_128 = plVar1;
  _swift_beginAccess(0x113815788,auStack_98,0x20,0);
  lVar20 = lRam0000000113815788;
  if (*(long *)(lRam0000000113815788 + 0x10) == 0) {
LAB_104932754:
    _swift_endAccess(auStack_98);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(lVar20);
    uVar8 = uVar16;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(lVar20);
      goto LAB_104932754;
    }
    puVar17 = *(undefined **)(*(long *)(lVar20 + 0x38) + lVar5 * 8);
    _swift_bridgeObjectRetain(puVar17);
    _swift_endAccess(auStack_98);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(lVar20);
  }
  if ((ulong)puVar17 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)puVar17 & 0xfffffffffffff8) + 0x10);
    if (puVar18 == (undefined *)0x0) goto LAB_104932b6c;
LAB_104932780:
    lVar5 = _DAT_11309d710;
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((long)puVar18 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104932dcc);
      (*pcVar3)();
    }
    puVar2 = (ulong *)(param_1 + _DAT_11309d728);
    puStack_120 = puVar2;
    if (((ulong)puVar17 & 0xc000000000000001) != 0) {
      puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      _swift_beginAccess(param_1 + lVar5,auStack_98,0,0);
      _swift_beginAccess(puVar2,auStack_b8,0,0);
      puVar22 = (undefined *)0x0;
      do {
        puVar11 = puVar22;
        FUN_10491aa8c(puVar22,puVar17);
        lVar20 = _DAT_11309d710;
        _swift_beginAccess(puVar11 + _DAT_11309d710,auStack_d0,0,0);
        lVar20 = *(long *)(puVar11 + lVar20);
        puVar2 = (ulong *)(puVar11 + _DAT_11309d728);
        _swift_beginAccess(puVar2,auStack_e8,0,0);
        if (lVar20 == *(long *)(param_1 + lVar5)) {
          uVar16 = puStack_120[1];
          if (puVar2[1] == 0) {
            if (uVar16 != 0) goto LAB_104932914;
          }
          else if ((uVar16 == 0) ||
                  ((uVar8 = *puVar2, uVar8 != *puStack_120 || puVar2[1] != uVar16 &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar8 & 1) == 0)))) goto LAB_104932914;
        }
        else {
LAB_104932914:
          puVar9 = puVar11;
          _objc_retain();
          puVar10 = puStack_118;
          puVar7 = puStack_118;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar7 == 0) || ((long)puVar10 < 0)) ||
             (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar10 & 0xfffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((long)puVar10 < 0) {
                puVar6 = puVar10;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_104915284(0,puVar6 + 1,1,puVar10);
          }
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar16 = *(ulong *)(uVar8 + 0x10);
          puStack_118 = puVar7;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar16) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_104915284(puVar10,uVar16 + 1,1,puVar7);
            uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
            puStack_118 = puVar10;
          }
          *(ulong *)(uVar8 + 0x10) = uVar16 + 1;
          *(undefined **)(uVar8 + uVar16 * 8 + 0x20) = puVar9;
        }
        puVar22 = puVar22 + 1;
        _swift_unknownObjectRelease(puVar11);
      } while (puVar18 != puVar22);
      _swift_bridgeObjectRelease(puVar17);
      puVar22 = puStack_118;
      goto LAB_104932b84;
    }
    _swift_retain();
    _swift_beginAccess(param_1 + lVar5,auStack_98,0,0);
    _swift_beginAccess(puVar2,auStack_b8,0,0);
    lVar20 = 0x20;
    do {
      lVar21 = _DAT_11309d710;
      lVar23 = *(long *)(puVar17 + lVar20);
      _swift_beginAccess(lVar23 + _DAT_11309d710,auStack_d0,0,0);
      lVar21 = *(long *)(lVar23 + lVar21);
      puVar2 = (ulong *)(lVar23 + _DAT_11309d728);
      _swift_beginAccess(puVar2,auStack_e8,0,0);
      if (lVar21 == *(long *)(param_1 + lVar5)) {
        uVar16 = puStack_120[1];
        if (puVar2[1] == 0) {
          if (uVar16 != 0) goto LAB_104932ad8;
        }
        else if ((uVar16 == 0) ||
                ((uVar8 = *puVar2, uVar8 != *puStack_120 || puVar2[1] != uVar16 &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar8 & 1) == 0)))) goto LAB_104932ad8;
      }
      else {
LAB_104932ad8:
        _objc_retain();
        _objc_retain();
        puVar11 = puVar22;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar11 == 0) || ((long)puVar22 < 0)) ||
           (puVar11 = puVar22, ((ulong)puVar22 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar22 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puVar22 & 0xfffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
            if ((long)puVar22 < 0) {
              puVar10 = puVar22;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar10);
          }
          puVar11 = (undefined *)0x0;
          FUN_104915284(0,puVar10 + 1,1,puVar22);
        }
        uVar8 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar16 = *(ulong *)(uVar8 + 0x10);
        puVar22 = puVar11;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar16) {
          puVar22 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_104915284(puVar22,uVar16 + 1,1,puVar11);
          uVar8 = (ulong)puVar22 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar16 + 1;
        *(long *)(uVar8 + uVar16 * 8 + 0x20) = lVar23;
        _objc_release(lVar23);
      }
      lVar20 = lVar20 + 8;
      puVar18 = puVar18 + -1;
    } while (puVar18 != (undefined *)0x0);
  }
  else {
    puVar18 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
    if ((long)puVar17 < 0) {
      puVar18 = puVar17;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (puVar18 != (undefined *)0x0) goto LAB_104932780;
LAB_104932b6c:
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  _swift_bridgeObjectRelease(puVar17);
LAB_104932b84:
  _objc_retain();
  puVar17 = puVar22;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)puVar17 == 0) || ((long)puVar22 < 0)) ||
     (puVar17 = puVar22, ((ulong)puVar22 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar22 >> 0x3e == 0) {
      puVar18 = *(undefined **)(((ulong)puVar22 & 0xfffffffffffff8) + 0x10);
    }
    else {
      puVar18 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
      if ((long)puVar22 < 0) {
        puVar18 = puVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
    }
    puVar17 = (undefined *)0x0;
    FUN_104915284(0,puVar18 + 1,1,puVar22);
  }
  uVar8 = (ulong)puVar17 & 0xffffffffffffff8;
  uVar16 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar16) {
    puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_104915284(puVar17,uVar16 + 1,1);
    uVar8 = (ulong)puVar17 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar16 + 1;
  *(long *)(uVar8 + uVar16 * 8 + 0x20) = param_1;
  iVar4 = 2;
  puStack_a0 = puVar17;
  func_0x000100029b9c(2,0xf,0,0);
  if (iVar4 == 0) {
    FUN_104927d00(&puStack_a0);
  }
  else {
    lVar5 = 0x11309d960;
    func_0x0001048db364();
    lVar20 = *(long *)(lVar5 + -8);
    puVar19 = auStack_130 + -(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_getKeyPath(&UNK_10dd48b48);
    __s10Foundation17KeyPathComparatorV_5orderACyxGs0bC0Cyxqd__G_AA9SortOrderOtcSLRd__lufC(puVar19);
    uVar12 = 0x11309d950;
    func_0x0001048db364(0x11309d950);
    uVar13 = 0x11309d968;
    func_0x000104931470(0x11309d968,0x11309d970,0x10491bee4,PTR___sSayxGSMsMc_11034dcf8);
    uVar14 = 0x11309d978;
    func_0x000104931470(0x11309d978,0x11309d970,0x10491bee4,PTR___sSayxGSksMc_11034dd18);
    uVar15 = uVar14;
    FUN_10493497c();
    __sSM10FoundationSkRzrlE4sort5usingyqd___tAA14SortComparatorRd__8ComparedQyd__7ElementSTRtzlF
              (puVar19,uVar12,lVar5,uVar13,uVar14,uVar15);
    (**(code **)(lVar20 + 8))(puVar19,lVar5);
  }
  puVar17 = puStack_a0;
  lVar5 = *plStack_128;
  lVar20 = plStack_128[1];
  _swift_beginAccess(0x113815788,auStack_100,0x21,0);
  _swift_bridgeObjectRetain(lVar20);
  lVar21 = lRam0000000113815788;
  _swift_isUniquelyReferenced_nonNull_native(lRam0000000113815788);
  lStack_108 = lRam0000000113815788;
  lRam0000000113815788 = 0x8000000000000000;
  FUN_104924348(puVar17,lVar5,lVar20,lVar21);
  _swift_bridgeObjectRelease(lVar20);
  lRam0000000113815788 = lStack_108;
  _swift_endAccess(auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 104932de0; end: 104932f53;  */

void FUN_104932de0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 unaff_x23;
  undefined8 *puVar10;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _swift_getInitializedObjCClass();
    if (lRam000000011309d030 != -1) {
      _swift_once(0x11309d030,FUN_104929090);
    }
    _swift_beginAccess(0x113815788,(undefined1 *)((long)register0x00000008 + -0x50),0,0);
    uVar8 = uRam0000000113815788;
    _swift_bridgeObjectRetain(uRam0000000113815788);
    uVar6 = 0x11309d950;
    func_0x0001048db364(0x11309d950);
    uVar2 = uVar8;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar8,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar8);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    puVar7 = PTR_s_archivedDataWithRootObject_requi_11259ff88;
    _objc_msgSend(puVar1,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar2,0,
                  (undefined1 *)((long)register0x00000008 + -0x58));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = *(undefined **)((long)register0x00000008 + -0x58);
    _objc_retain();
    if (puVar1 == (undefined *)0x0) {
      puVar4 = puVar3;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar3);
      _swift_willThrow();
      puVar5 = puVar4;
      _swift_errorRelease();
      puVar7 = puVar4;
    }
    else {
      puVar4 = puVar1;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar1);
      puVar5 = puVar4;
      func_0x00010006c090(puVar4,puVar7);
      puVar3 = puVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x88) = puVar7;
    *(undefined **)((long)register0x00000008 + -0x80) = puVar4;
    *(undefined **)((long)register0x00000008 + -0x78) = puVar3;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_104932f54;
    lVar9 = *(long *)(puVar5 + 0x10);
    if (lVar9 == 0) {
      return;
    }
    uVar6 = 0;
    func_0x00010491bee4(0);
    puVar10 = (undefined8 *)(puVar5 + 0x20);
    do {
      uVar8 = *puVar10;
      _objc_allocWithZone(uVar6);
      _swift_bridgeObjectRetain(uVar8);
      FUN_104918ebc();
      FUN_104932664();
      _objc_release(uVar8);
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 104932f54; end: 104932fdf;  */

void FUN_104932f54(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined8 uVar4;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 unaff_x23;
  undefined8 *puVar6;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar3 = 0;
    func_0x00010491bee4(0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar4 = *puVar6;
      _objc_allocWithZone(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      FUN_104918ebc();
      FUN_104932664();
      _objc_release(uVar4);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _swift_getInitializedObjCClass();
    if (lRam000000011309d030 != -1) {
      _swift_once(0x11309d030,FUN_104929090);
    }
    _swift_beginAccess(0x113815788,(undefined1 *)((long)register0x00000008 + -0x50),0,0);
    uVar4 = uRam0000000113815788;
    _swift_bridgeObjectRetain(uRam0000000113815788);
    uVar3 = 0x11309d950;
    func_0x0001048db364(0x11309d950);
    uVar2 = uVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar4,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    unaff_x21 = PTR_s_archivedDataWithRootObject_requi_11259ff88;
    _objc_msgSend(puVar1,PTR_s_archivedDataWithRootObject_requi_11259ff88,uVar2,0,
                  (undefined1 *)((long)register0x00000008 + -0x58));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    unaff_x19 = *(undefined **)((long)register0x00000008 + -0x58);
    _objc_retain();
    if (puVar1 == (undefined *)0x0) {
      unaff_x20 = unaff_x19;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(unaff_x19);
      _swift_willThrow();
      param_1 = unaff_x20;
      _swift_errorRelease();
      unaff_x21 = unaff_x20;
    }
    else {
      unaff_x20 = puVar1;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar1);
      param_1 = unaff_x20;
      func_0x00010006c090(unaff_x20,unaff_x21);
      unaff_x19 = puVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_104932f54;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 104932fe0; end: 104933423;  */

void FUN_104932fe0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar10 = 0x11309c628;
  func_0x0001048db364();
  puVar8 = auStack_90 + -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    _swift_errorRetain(param_1);
    if (lRam000000011309d050 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    _swift_beginAccess(0x1138157c8,&uStack_70,1,0);
    puVar6 = puRam00000001138157c8;
    lVar10 = *(long *)(puRam00000001138157c8 + 0x10);
    if (lVar10 != 0) {
      _swift_bridgeObjectRetain(puRam00000001138157c8);
      puVar9 = (undefined8 *)(puVar6 + 0x28);
      do {
        pcVar1 = (code *)puVar9[-1];
        uVar3 = *puVar9;
        _swift_retain(uVar3);
        lVar2 = param_1;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        alStack_88[0] = lVar2;
        (*pcVar1)(alStack_88);
        _objc_release(lVar2);
        _swift_release(uVar3);
        puVar9 = puVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = puRam00000001138157c8;
    }
    puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    _swift_bridgeObjectRelease(puVar6);
    _swift_beginAccess(0x113815769,alStack_88,1,0);
    uRam0000000113815769 = 0;
    _swift_errorRelease(param_1);
    return;
  }
  FUN_104934c24(param_2,&uStack_70,0x11309c428);
  if (lStack_58 == 0) {
    FUN_1049349e8(&uStack_70,0x11309c428);
  }
  else {
    uVar3 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar6 = PTR___sypN_11034f1a8;
    plVar4 = alStack_88;
    _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    lVar2 = alStack_88[0];
    if (((ulong)plVar4 & 1) != 0) {
      if (lRam000000011309d040 != -1) {
        _swift_once(0x11309d040,FUN_104929514);
      }
      func_0x000100028790(lVar10,0x113815798);
      __s10Foundation4DateVACycfC(puVar8);
      lVar5 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar8,0,1,lVar5);
      _swift_beginAccess(lVar10,&uStack_70,0x21,0);
      func_0x000100ed9cbc(puVar8,lVar10);
      _swift_endAccess(&uStack_70);
      if (*(long *)(lVar2 + 0x10) == 0) {
LAB_10493329c:
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar2);
        lVar10 = 0x61746164;
        uVar7 = 0;
        func_0x000100029284(0x61746164);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar2);
          goto LAB_10493329c;
        }
        func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar10 * 0x20,&uStack_70);
        _swift_bridgeObjectRelease(lVar2);
      }
      _swift_bridgeObjectRelease(lVar2);
      if (lStack_58 == 0) {
        FUN_1049349e8(&uStack_70,0x11309c428);
      }
      else {
        uVar3 = 0x11309d5b0;
        func_0x0001048db364(0x11309d5b0);
        plVar4 = alStack_88;
        _swift_dynamicCast(plVar4,&uStack_70,puVar6 + 8,uVar3,6);
        if (((ulong)plVar4 & 1) != 0) {
          FUN_104932f54(alStack_88[0]);
          _swift_bridgeObjectRelease(alStack_88[0]);
        }
      }
      if (lRam000000011309d050 != -1) {
        _swift_once(0x11309d050,FUN_104929c24);
      }
      _swift_beginAccess(0x1138157c8,alStack_88,1,0);
      puVar6 = puRam00000001138157c8;
      lVar10 = *(long *)(puRam00000001138157c8 + 0x10);
      if (lVar10 != 0) {
        _swift_bridgeObjectRetain(puRam00000001138157c8);
        puVar9 = (undefined8 *)(puVar6 + 0x28);
        do {
          pcVar1 = (code *)puVar9[-1];
          uVar3 = *puVar9;
          uStack_70 = 0;
          _swift_retain(uVar3);
          (*pcVar1)(&uStack_70);
          _swift_release(uVar3);
          puVar9 = puVar9 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = puRam00000001138157c8;
      }
      puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      goto LAB_104933398;
    }
  }
  puVar6 = (undefined *)0x11309d598;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = PTR___sSSN_11034da80;
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000022;
  *(undefined8 *)(puVar6 + 0x28) = 0x800000010f21d420;
  __ss5print_9separator10terminatoryypd_S2StF();
LAB_104933398:
  _swift_bridgeObjectRelease(puVar6);
  _swift_beginAccess(0x113815769,&uStack_70,1,0);
  uRam0000000113815769 = 0;
  return;
}



/* Entry: 104933424; end: 1049336b3;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_104933424(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long alStack_58 [5];
  
  FUN_104934c24(param_1,alStack_58 + 1,0x11309c428);
  if (alStack_58[4] == 0) {
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
LAB_1049334d8:
    alStack_58[2] = 0;
    alStack_58[1] = 0;
    alStack_58[4] = 0;
    alStack_58[3] = 0;
LAB_1049334e0:
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
LAB_1049334f0:
    alStack_58[2] = 0;
    alStack_58[1] = 0;
    alStack_58[4] = 0;
    alStack_58[3] = 0;
LAB_1049334f8:
    FUN_1049349e8(alStack_58 + 1,0x11309c428);
  }
  else {
    uVar5 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar1 = PTR___sypN_11034f1a8;
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334d8;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
LAB_10493356c:
      alStack_58[2] = 0;
      alStack_58[1] = 0;
      alStack_58[4] = 0;
      alStack_58[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(alStack_58[0]);
      lVar3 = 0x61746164;
      uVar6 = 0;
      func_0x000100029284(0x61746164);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_10493356c;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar3 * 0x20,alStack_58 + 1);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (alStack_58[4] == 0) goto LAB_1049334e0;
    uVar5 = 0x11309d6d0;
    func_0x0001048db364(0x11309d6d0);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334f0;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
      _swift_bridgeObjectRelease(alStack_58[0]);
      goto LAB_1049334f0;
    }
    func_0x0001000bb420(alStack_58[0] + 0x20,alStack_58 + 1);
    _swift_bridgeObjectRelease(lVar4);
    uVar5 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if ((((ulong)plVar2 & 1) == 0) || (alStack_58[0] == 0)) goto LAB_1049334f0;
    if (*(long *)(alStack_58[0] + 0x10) == 0) {
LAB_104933660:
      alStack_58[2] = 0;
      alStack_58[1] = 0;
      alStack_58[4] = 0;
      alStack_58[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(alStack_58[0]);
      uVar6 = 0;
      lVar3 = -0x2fffffffffffffe0;
      func_0x000100029284(0xd000000000000020);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_104933660;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar3 * 0x20,alStack_58 + 1);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (alStack_58[4] == 0) goto LAB_1049334f8;
    uVar5 = 0;
    func_0x000104934c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    plVar2 = alStack_58;
    _swift_dynamicCast(plVar2,alStack_58 + 1,puVar1 + 8,uVar5,6);
    lVar4 = alStack_58[0];
    if (((ulong)plVar2 & 1) != 0) goto LAB_104933530;
  }
  func_0x000104934c68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar4 = 0;
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(0);
LAB_104933530:
  lVar3 = lVar4;
  _objc_msgSend(lVar4,PTR_s_boolValue_1125a5698);
  _objc_release(lVar4);
  return lVar3;
}



/* Entry: 1049336b4; end: 1049339b7;  */

bool FUN_1049336b4(double param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [32];
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = auStack_70 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)puVar6 - uVar5;
  lVar9 = lVar8 - uVar5;
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  func_0x000100028790(lVar2,0x113815798);
  _swift_beginAccess();
  FUN_104934c24(lVar2,puVar6,0x11309c628);
  puVar4 = puVar6;
  (**(code **)(lVar10 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_1049349e8(puVar6,0x11309c628);
    bVar1 = false;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar9,puVar6,lVar3);
    __s10Foundation4DateVACycfC(lVar8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar9);
    pcVar7 = *(code **)(lVar10 + 8);
    (*pcVar7)(lVar8,lVar3);
    (*pcVar7)(lVar9,lVar3);
    bVar1 = param_1 < 86400.0;
  }
  return bVar1;
}



/* Entry: 1049339b8; end: 104933ca3;  */

/* WARNING: Removing unreachable block (ram,0x000104933b0c) */
/* WARNING: Removing unreachable block (ram,0x000104933a30) */

void FUN_1049339b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(0x113815778,auStack_58,0,0);
  lVar2 = lRam0000000113815780;
  lVar1 = lRam0000000113815778;
  if (lRam0000000113815780 != 0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___NSData_1126ae778);
    _swift_bridgeObjectRetain(lVar2);
    FUN_10492f0d0(lVar1,lVar2,1);
    if (lVar1 != 0) {
      func_0x000104934c68(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      lVar2 = 0x11309d6d8;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(lVar2 + 0x18) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      uVar5 = 0x112d38dd0;
      uVar3 = 0;
      func_0x000104934c68(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      uVar3 = 0;
      FUN_1049246d8();
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      lVar4 = lVar1;
      _objc_retain(lVar1);
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(lVar1);
      _objc_release(lVar4);
      __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
                (auStack_80,lVar2,lVar1,uVar5);
      _objc_release(lVar4);
      func_0x00010006c090(lVar1,uVar5);
      _swift_bridgeObjectRelease(lVar2);
      if (lStack_68 == 0) {
        FUN_1049349e8(auStack_80,0x11309c428);
      }
      else {
        uVar5 = 0x11309d958;
        func_0x0001048db364(0x11309d958);
        puVar6 = auStack_88;
        _swift_dynamicCast(puVar6,auStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
        if (((ulong)puVar6 & 1) != 0) {
          return;
        }
      }
    }
  }
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 104933ca4; end: 10493489f;  */

void FUN_104933ca4(void)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_78,1,0);
  if ((ulong)puRam0000000113815790 >> 0x3e == 0) {
    puVar4 = *(ulong **)(((ulong)puRam0000000113815790 & 0xfffffffffffff8) + 0x10);
    puVar3 = puRam0000000113815790;
  }
  else {
    puVar4 = (ulong *)((ulong)puRam0000000113815790 & 0xffffffffffffff8);
    if ((long)puRam0000000113815790 < 0) {
      puVar4 = puRam0000000113815790;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar3 = puRam0000000113815790;
  }
  puRam0000000113815790 = puVar3;
  if (puVar4 != (ulong *)0x0) {
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar4 = *(ulong **)(((ulong)puVar3 & 0xfffffffffffff8) + 0x10);
      puVar9 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar11 = puVar3;
    }
    else {
      puVar4 = (ulong *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((long)puVar3 < 0) {
        puVar4 = puVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar9 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar11 = puRam0000000113815790;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar9;
    if (puVar4 == (ulong *)0x0) {
      puRam0000000113815790 = puVar9;
      _swift_retain();
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      puRam0000000113815790 = puVar11;
      _swift_retain(puVar9);
      _swift_bridgeObjectRetain(puVar3);
      bVar2 = false;
      puVar11 = (ulong *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar3 & 0xc000000000000001) == 0) {
            if (*(ulong **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x104933f48);
              (*pcVar12)();
            }
            puVar5 = (ulong *)puVar3[(long)((long)puVar11 + 4)];
            _objc_retain();
          }
          else {
            puVar5 = puVar11;
            FUN_10491ac20(puVar11,puVar3);
          }
          puVar1 = (ulong *)((long)puVar11 + 1);
          if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x104933f44);
            (*pcVar12)();
          }
          if (lRam000000011309d030 != -1) {
            _swift_once(0x11309d030,FUN_104929090);
          }
          _swift_beginAccess(0x113815788,auStack_90,0,0);
          uVar6 = uRam0000000113815788;
          pcVar12 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x288);
          uVar10 = uRam0000000113815788;
          _swift_bridgeObjectRetain();
          (*pcVar12)();
          _swift_bridgeObjectRelease();
          if (((uVar10 & 1) != 0) &&
             ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x248))(),
             (uVar6 & 1) != 0)) break;
          _objc_retain();
          puVar8 = puVar9;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(ulong **)(((ulong)puVar9 & 0xfffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (ulong *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((long)puVar9 < 0) {
                puVar7 = puVar9;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
            }
            puVar8 = (ulong *)0x0;
            FUN_104915298(0,(undefined *)((long)puVar7 + 1),1,puVar9);
          }
          uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar6 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
            puVar9 = (ulong *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_104915298(puVar9,uVar6 + 1,1,puVar8);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
          *(ulong **)(uVar10 + uVar6 * 8 + 0x20) = puVar5;
          _objc_release(puVar5);
          puVar11 = (ulong *)((long)puVar11 + 1);
          if (puVar1 == puVar4) {
            _swift_bridgeObjectRelease(puVar3);
            puVar4 = puRam0000000113815790;
            puRam0000000113815790 = puVar9;
            _swift_bridgeObjectRelease(puVar4);
            if (!bVar2) {
              return;
            }
            goto LAB_104933f38;
          }
        }
        _objc_release(puVar5);
        bVar2 = true;
        puVar11 = puVar1;
      } while (puVar1 != puVar4);
      _swift_bridgeObjectRelease(puVar3);
      puVar4 = puRam0000000113815790;
      puRam0000000113815790 = puVar9;
      _swift_bridgeObjectRelease(puVar4);
LAB_104933f38:
      FUN_104930c68();
    }
  }
  return;
}



/* Entry: 1049348a0; end: 10493495f;  */

void FUN_1049348a0(undefined8 *param_1)

{
  undefined8 *in_x3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(in_x3,auStack_38,0,0);
  *param_1 = *in_x3;
  _swift_unknownObjectRetain();
  return;
}



/* Entry: 104934960; end: 10493497b;  */

void FUN_104934960(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104934968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10493497c; end: 1049349d7;  */

void FUN_10493497c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011309d980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104934ce8(0xff,0x11309d988,0x10491bee4,
                      PTR___s10Foundation17KeyPathComparatorVMa_110350718);
  puVar2 = PTR___s10Foundation17KeyPathComparatorVyxGAA04SortD0AAMc_110350730;
  _swift_getWitnessTable(PTR___s10Foundation17KeyPathComparatorVyxGAA04SortD0AAMc_110350730,uVar1);
  puRam000000011309d980 = puVar2;
  return;
}



/* Entry: 1049349d8; end: 1049349e7;  */

void FUN_1049349d8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  lVar11 = (long)&lStack_c0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar2 + -8);
  lVar12 = lVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    lStack_c0 = lVar2;
    if (lRam000000011309d028 != -1) {
      _swift_once(0x11309d028,FUN_1049288f4);
    }
    _swift_beginAccess(0x113815770,auStack_78,0,0);
    uVar4 = uRam0000000113815770;
    puVar3 = &UNK_1107b8a38;
    _swift_allocObject(&UNK_1107b8a38,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar8;
    *(undefined8 *)(puVar3 + 0x18) = uVar7;
    lVar2 = 2;
    uStack_b8 = uVar8;
    _swift_retain_n(uVar8);
    _objc_retain(uVar4);
    puVar5 = puVar3;
    _swift_retain();
    __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
    if ((puVar5 == (undefined *)0xd000000000000028) && (lVar2 == -0x7ffffffef0de2fb0)) {
      _swift_bridgeObjectRelease(0x800000010f21d050);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar2);
      uVar7 = uStack_b8;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000104933ba4(uStack_b8);
        _swift_release(uVar7);
        _objc_release(uVar4);
        _swift_release_n(puVar3,2);
        return;
      }
    }
    uStack_88 = 0x1049349e0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1107b8a50;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar3;
    __Block_copy(ppuVar6);
    _swift_retain(puVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4af88;
    func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar5);
    uVar8 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar9 = 0x112d4af98;
    func_0x000104931470(0x112d4af98,0x11309c6f8,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___sSayxGSTsMc_11034dd08);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&puStack_b0,uVar8,uVar9,lVar1,uVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,ppuVar6);
    __Block_release(ppuVar6);
    _swift_release(uStack_b8);
    _objc_release(uVar4);
    _swift_release_n(puVar3,2);
    (**(code **)(lVar10 + 8))(lVar11,lVar1);
    (**(code **)(lVar13 + 8))(lVar12,lStack_c0);
    _swift_release(puStack_80);
  }
  return;
}



/* Entry: 1049349e8; end: 104934a23;  */

undefined8 FUN_1049349e8(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104934a24; end: 104934a5b;  */

void FUN_104934a24(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    pcVar1 = *(code **)(unaff_x20 + 0x40);
    uVar2 = unaff_x20 + 0x20;
    FUN_104933424();
    if ((uVar2 & 1) != 0) {
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 104934a5c; end: 104934a97;  */

void FUN_104934a5c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104934a98; end: 104934ac7;  */

void FUN_104934a98(void)

{
  long unaff_x20;
  
  func_0x00010492b378(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 104934ac8; end: 104934afb;  */

void FUN_104934ac8(void)

{
  long unaff_x20;
  
  func_0x00010492d954(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 104934afc; end: 104934aff;  */

void FUN_104934afc(void)

{
  long unaff_x20;
  
  FUN_10492b9a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 104934b00; end: 104934b43;  */

void FUN_104934b00(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104934b44; end: 104934b77;  */

void FUN_104934b44(void)

{
  long unaff_x20;
  
  FUN_10492b9a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 104934b78; end: 104934bb3;  */

void FUN_104934b78(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104934bb4; end: 104934be3;  */

void FUN_104934bb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10492d278(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 104934be4; end: 104934beb;  */

void FUN_104934be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar2 + -8);
  lVar11 = (long)&lStack_110 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_108 = *(long *)(lVar3 + -8);
  lVar12 = lVar11 - (*(long *)(lStack_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar3;
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_80,0,0);
  uVar5 = uRam0000000113815770;
  FUN_104934c24(param_1,&uStack_a0,0x11309c428);
  FUN_104934c24(&uStack_a0,auStack_c0,0x11309c428);
  puVar4 = &UNK_1107b8c40;
  lVar3 = 0x40;
  _swift_allocObject(&UNK_1107b8c40,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uStack_98;
  *(undefined8 *)(puVar4 + 0x20) = uStack_a0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_88;
  *(undefined8 *)(puVar4 + 0x30) = uStack_90;
  _swift_errorRetain(param_2);
  _swift_errorRetain(param_2);
  _objc_retain(uVar5);
  puVar6 = puVar4;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE5labelSSvg();
  if ((puVar6 == (undefined *)0xd000000000000028) && (lVar3 == -0x7ffffffef0de2fb0)) {
    _swift_bridgeObjectRelease(0x800000010f21d050);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(lVar3);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_104932fe0(param_2,auStack_c0);
      _objc_release(uVar5);
      _swift_release_n(puVar4,2);
      _swift_errorRelease(param_2);
      FUN_1049349e8(auStack_c0,0x11309c428);
      return;
    }
  }
  pcStack_d0 = FUN_104934c10;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_1000b0c7c;
  puStack_d8 = &UNK_1107b8c58;
  ppuVar7 = &puStack_f0;
  puStack_c8 = puVar4;
  __Block_copy(ppuVar7);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = 0x112d4af88;
  lStack_110 = lVar13;
  func_0x000104934ca8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar6);
  uVar8 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar9 = 0x112d4af98;
  func_0x000104931470(0x112d4af98,0x11309c6f8,puVar1,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&puStack_f8,uVar8,uVar9,lVar2,uVar10);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,lVar11,ppuVar7);
  __Block_release(ppuVar7);
  _objc_release(uVar5);
  _swift_release_n(puVar4,2);
  _swift_errorRelease(param_2);
  FUN_1049349e8(auStack_c0,0x11309c428);
  (**(code **)(lStack_110 + 8))(lVar11,lVar2);
  (**(code **)(lStack_108 + 8))(lVar12,lStack_100);
  _swift_release(puStack_c8);
  return;
}



/* Entry: 104934bec; end: 104934c0f;  */

void FUN_104934bec(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 104934c10; end: 104934c23;  */

void FUN_104934c10(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar10 = 0x11309c628;
  func_0x0001048db364();
  puVar8 = auStack_90 + -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (lVar6 != 0) {
    _swift_errorRetain(lVar6);
    if (lRam000000011309d050 != -1) {
      _swift_once(0x11309d050,FUN_104929c24);
    }
    _swift_beginAccess(0x1138157c8,&uStack_70,1,0);
    puVar5 = puRam00000001138157c8;
    lVar10 = *(long *)(puRam00000001138157c8 + 0x10);
    if (lVar10 != 0) {
      _swift_bridgeObjectRetain(puRam00000001138157c8);
      puVar9 = (undefined8 *)(puVar5 + 0x28);
      do {
        pcVar1 = (code *)puVar9[-1];
        uVar2 = *puVar9;
        _swift_retain(uVar2);
        lVar4 = lVar6;
        __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
        alStack_88[0] = lVar4;
        (*pcVar1)(alStack_88);
        _objc_release(lVar4);
        _swift_release(uVar2);
        puVar9 = puVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      _swift_bridgeObjectRelease(puVar5);
      puVar5 = puRam00000001138157c8;
    }
    puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    _swift_bridgeObjectRelease(puVar5);
    _swift_beginAccess(0x113815769,alStack_88,1,0);
    uRam0000000113815769 = 0;
    _swift_errorRelease(lVar6);
    return;
  }
  FUN_104934c24(unaff_x20 + 0x20,&uStack_70,0x11309c428);
  if (lStack_58 == 0) {
    FUN_1049349e8(&uStack_70,0x11309c428);
  }
  else {
    uVar2 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar5 = PTR___sypN_11034f1a8;
    plVar3 = alStack_88;
    _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar6 = alStack_88[0];
    if (((ulong)plVar3 & 1) != 0) {
      if (lRam000000011309d040 != -1) {
        _swift_once(0x11309d040,FUN_104929514);
      }
      func_0x000100028790(lVar10,0x113815798);
      __s10Foundation4DateVACycfC(puVar8);
      lVar4 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar8,0,1,lVar4);
      _swift_beginAccess(lVar10,&uStack_70,0x21,0);
      func_0x000100ed9cbc(puVar8,lVar10);
      _swift_endAccess(&uStack_70);
      if (*(long *)(lVar6 + 0x10) == 0) {
LAB_10493329c:
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar6);
        lVar10 = 0x61746164;
        uVar7 = 0;
        func_0x000100029284(0x61746164);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_10493329c;
        }
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar10 * 0x20,&uStack_70);
        _swift_bridgeObjectRelease(lVar6);
      }
      _swift_bridgeObjectRelease(lVar6);
      if (lStack_58 == 0) {
        FUN_1049349e8(&uStack_70,0x11309c428);
      }
      else {
        uVar2 = 0x11309d5b0;
        func_0x0001048db364(0x11309d5b0);
        plVar3 = alStack_88;
        _swift_dynamicCast(plVar3,&uStack_70,puVar5 + 8,uVar2,6);
        if (((ulong)plVar3 & 1) != 0) {
          FUN_104932f54(alStack_88[0]);
          _swift_bridgeObjectRelease(alStack_88[0]);
        }
      }
      if (lRam000000011309d050 != -1) {
        _swift_once(0x11309d050,FUN_104929c24);
      }
      _swift_beginAccess(0x1138157c8,alStack_88,1,0);
      puVar5 = puRam00000001138157c8;
      lVar10 = *(long *)(puRam00000001138157c8 + 0x10);
      if (lVar10 != 0) {
        _swift_bridgeObjectRetain(puRam00000001138157c8);
        puVar9 = (undefined8 *)(puVar5 + 0x28);
        do {
          pcVar1 = (code *)puVar9[-1];
          uVar2 = *puVar9;
          uStack_70 = 0;
          _swift_retain(uVar2);
          (*pcVar1)(&uStack_70);
          _swift_release(uVar2);
          puVar9 = puVar9 + 2;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        _swift_bridgeObjectRelease(puVar5);
        puVar5 = puRam00000001138157c8;
      }
      puRam00000001138157c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      goto LAB_104933398;
    }
  }
  puVar5 = (undefined *)0x11309d598;
  func_0x0001048db364();
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined **)(puVar5 + 0x38) = PTR___sSSN_11034da80;
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000022;
  *(undefined8 *)(puVar5 + 0x28) = 0x800000010f21d420;
  __ss5print_9separator10terminatoryypd_S2StF();
LAB_104933398:
  _swift_bridgeObjectRelease(puVar5);
  _swift_beginAccess(0x113815769,&uStack_70,1,0);
  uRam0000000113815769 = 0;
  return;
}



/* Entry: 104934c24; end: 104934d6f;  */

undefined8 FUN_104934c24(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104934d70; end: 104934d73;  */

void FUN_104934d70(void)

{
  long unaff_x20;
  
  FUN_10492b9a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 104934d74; end: 104934d77; +[FBAEMReporter setConversionFilteringEnabled:] */

void FUN_104934d74(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576a,auStack_38,1,0);
  uRam000000011381576a = param_3;
  return;
}



/* Entry: 104934d78; end: 104934d7b; +[FBAEMReporter setIsConversionFilteringEnabled:] */

void FUN_104934d78(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576a,auStack_38,1,0);
  uRam000000011381576a = param_3;
  return;
}



/* Entry: 104934d7c; end: 104934d7f; +[FBAEMReporter setCatalogMatchingEnabled:] */

void FUN_104934d7c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576b,auStack_38,1,0);
  uRam000000011381576b = param_3;
  return;
}



/* Entry: 104934d80; end: 104934d83; +[FBAEMReporter setIsCatalogMatchingEnabled:] */

void FUN_104934d80(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576b,auStack_38,1,0);
  uRam000000011381576b = param_3;
  return;
}



/* Entry: 104934d84; end: 104934d87; +[FBAEMReporter setAdvertiserRuleMatchInServerEnabled:] */

void FUN_104934d84(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576c,auStack_38,1,0);
  uRam000000011381576c = param_3;
  return;
}



/* Entry: 104934d88; end: 104934d8b; +[FBAEMReporter setIsAdvertiserRuleMatchInServerEnabled:] */

void FUN_104934d88(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11381576c,auStack_38,1,0);
  uRam000000011381576c = param_3;
  return;
}



/* Entry: 104934d8c; end: 104934dfb;  */

void FUN_104934d8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104934dfc; end: 104934dff;  */

void FUN_104934dfc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10492d278(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 104934e00; end: 104934e57;  */

void FUN_104934e00(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576a,auStack_38,1,0);
  uRam000000011381576a = param_1;
  return;
}



/* Entry: 104934e58; end: 1049350a7;  */

undefined1  [16] FUN_104934e58(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  func_0x000104934f60();
  uVar4 = (uint)(param_2 >> 0x20);
  uVar9 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar7 = param_2;
      func_0x00010006c090();
      uVar3 = param_2 & 0xff000000000000;
      param_2 = uVar7;
      if (uVar3 != 0) {
LAB_104934ec4:
        puVar5 = PTR_PTR_1126add58;
        _swift_getInitializedObjCClass();
        puVar8 = puVar5;
        func_0x000104934f60();
        puVar6 = puVar8;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
        func_0x00010006c090(puVar8,param_2);
        puVar8 = PTR_s_gzip__1125d18e0;
        _objc_msgSend(puVar5,PTR_s_gzip__1125d18e0,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (puVar5 != (undefined *)0x0) {
          puVar6 = puVar5;
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar5);
          _objc_release(puVar5);
          goto LAB_104934f50;
        }
      }
    }
    else {
      func_0x00010006c090();
      if ((long)(int)param_1 != param_1 >> 0x20) goto LAB_104934ec4;
    }
  }
  else if (uVar9 == 2) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010006c090();
    if (lVar1 != lVar2) goto LAB_104934ec4;
  }
  else {
    func_0x00010006c090();
  }
  puVar6 = (undefined *)0x0;
  puVar8 = (undefined *)0xf000000000000000;
LAB_104934f50:
  auVar10._8_8_ = puVar8;
  auVar10._0_8_ = puVar6;
  return auVar10;
}



/* Entry: 1049350a8; end: 10493557b;  */

void FUN_1049350a8(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  ulong uStack_80;
  long lStack_78;
  undefined *puStack_68;
  
  _swift_weakInit(auStack_98);
  _swift_bridgeObjectRetain(param_4);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar5 = 0;
  func_0x0001000d182c(0,1,1,puVar3);
  uVar10 = *(ulong *)(uVar5 + 0x10);
  uVar8 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar8,uVar10 + 1,1,uVar5);
  }
  *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
  lVar1 = uVar8 + uVar10 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = 0xd00000000000001e;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f21c980;
  uVar10 = uVar8;
  if (param_2 != 0) {
    uStack_80 = 0x223d656d616e;
    lStack_78 = 0xe600000000000000;
    __sSS6appendyySSF(param_1,param_2);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    lVar1 = lStack_78;
    uVar4 = uStack_80;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      func_0x0001000d182c(uVar10,uVar5 + 1,1,uVar8);
    }
    *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
    lVar2 = uVar10 + uVar5 * 0x10;
    *(ulong *)(lVar2 + 0x20) = uVar4;
    *(long *)(lVar2 + 0x28) = lVar1;
  }
  uVar6 = 0x11309c618;
  uStack_80 = uVar10;
  func_0x0001048db364(0x11309c618);
  uVar7 = uVar6;
  func_0x00010011d734();
  uVar8 = 0x203b;
  uVar11 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x203b,0xe200000000000000,uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar10);
  uStack_80 = uVar8;
  lStack_78 = uVar11;
  __sSS6appendyySSF(0xa0d,0xe200000000000000);
  lVar1 = lStack_78;
  func_0x000104935330(uStack_80,lStack_78);
  _swift_bridgeObjectRelease(lVar1);
  func_0x000104935330(0xa0d,0xe200000000000000);
  if (param_4 != 0) {
    _swift_beginAccess(auStack_98,auStack_b0,0,0);
    puVar9 = auStack_98;
    _swift_weakLoadStrong();
    if (puVar9 != (undefined1 *)0x0) {
      func_0x000104935330(param_3,param_4);
      _swift_release(puVar9);
    }
  }
  func_0x000104935330(0xa0d,0xe200000000000000);
  _swift_bridgeObjectRelease(param_4);
  _swift_weakDestroy(auStack_98);
  if ((param_2 != 0) && (param_4 != 0)) {
    puStack_68 = PTR___sSSN_11034da80;
    uStack_80 = param_3;
    lStack_78 = param_4;
    _swift_beginAccess(unaff_x20 + 0x20,auStack_98,0x21,0);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_2);
    func_0x000100102934(&uStack_80,param_1,param_2);
    _swift_endAccess(auStack_98);
  }
  return;
}



/* Entry: 10493557c; end: 104935627;  */

void FUN_10493557c(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104935628; end: 10493562f;  */

void FUN_104935628(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010493562c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 104935630; end: 10493565f;  */

void FUN_104935630(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104935bfc(param_1);
  return;
}



/* Entry: 104935660; end: 104935797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104935660(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_78 [24];
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_11309da68);
  uVar8 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if ((long)uVar6 < 0) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = 0;
  do {
    uVar5 = uVar3;
    if (uVar7 == uVar5) break;
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104935784);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar5;
      func_0x00010491aa6c(uVar5,uVar6);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104935780);
      (*pcVar2)();
    }
    puVar1 = (ulong *)(uVar3 + _DAT_11309d7a8);
    _swift_beginAccess(puVar1,auStack_78,0,0);
    uVar4 = *puVar1;
    if (uVar4 == param_1 && puVar1[1] == param_2) {
      _objc_release(uVar3);
      break;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar4,puVar1[1],param_1,param_2,0);
    _objc_release(uVar3);
    uVar3 = uVar5 + 1;
  } while ((uVar4 & 1) == 0);
  return uVar7 != uVar5;
}



/* Entry: 104935798; end: 104935bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104935798(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [32];
  
  uVar10 = 0;
  if (param_1 != 0) {
    uVar19 = *(ulong *)(unaff_x20 + _DAT_11309da68);
    if (uVar19 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar19 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar19 & 0xffffffffffffff8;
      if ((long)uVar19 < 0) {
        uVar14 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar14 == 0) {
      uVar10 = 1;
    }
    else {
      uVar18 = 0;
      do {
        if ((uVar19 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104935b8c);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(uVar19 + 0x20 + uVar18 * 8);
          _objc_retain();
        }
        else {
          uVar7 = uVar18;
          func_0x00010491aa6c(uVar18,uVar19);
        }
        bVar6 = SCARRY8(uVar18,1);
        uVar18 = uVar18 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104935b88);
          (*pcVar5)();
        }
        puVar1 = (ulong *)(uVar7 + _DAT_11309d7a8);
        _swift_beginAccess(puVar1,auStack_90,0,0);
        if (*(long *)(param_1 + 0x10) == 0) {
          _objc_release(uVar7);
          return 0;
        }
        uVar21 = *puVar1;
        uVar13 = puVar1[1];
        __ss6HasherV5_seedABSi_tcfC(auStack_d8,*(undefined8 *)(param_1 + 0x28));
        _swift_bridgeObjectRetain(uVar13);
        puVar8 = auStack_d8;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar21,uVar13);
        __ss6HasherV9_finalizeSiyF();
        uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar15 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar15 >> 3 & 0xfffffffffffff8)) >> (uVar15 & 0x3f) & 1)
            == 0) {
LAB_104935b38:
          _swift_bridgeObjectRelease(uVar13);
          _objc_release(uVar7);
          return 0;
        }
        while( true ) {
          puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar15 * 0x10);
          uVar9 = *puVar2;
          uVar4 = puVar2[1];
          if ((uVar9 == uVar21 && uVar4 == uVar13) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar9,uVar4,uVar21,uVar13,0), (uVar9 & 1) != 0)) break;
          uVar15 = uVar15 + 1 & ~uVar12;
          if ((*(ulong *)(param_1 + 0x38 + (uVar15 >> 3 & 0xfffffffffffff8)) >> (uVar15 & 0x3f) & 1)
              == 0) goto LAB_104935b38;
        }
        _swift_bridgeObjectRelease(uVar13);
        lVar16 = _DAT_11309d7b0;
        _swift_beginAccess(uVar7 + _DAT_11309d7b0,auStack_f0,0,0);
        lVar16 = *(long *)(uVar7 + lVar16);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) {
          _objc_release(uVar7);
        }
        else {
          if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
            _swift_bridgeObjectRetain(lVar16);
            lVar17 = 0;
          }
          else {
            uVar21 = *puVar1;
            uVar13 = puVar1[1];
            _swift_bridgeObjectRetain(lVar16);
            _swift_bridgeObjectRetain(uVar13);
            _swift_bridgeObjectRetain(param_2);
            uVar12 = uVar13;
            func_0x000100029284();
            if ((uVar12 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar13);
              _swift_bridgeObjectRelease(param_2);
              lVar17 = 0;
            }
            else {
              lVar20 = *(long *)(*(long *)(param_2 + 0x38) + uVar21 * 8);
              _swift_bridgeObjectRetain(lVar20);
              _swift_bridgeObjectRelease(uVar13);
              _swift_bridgeObjectRelease(param_2);
              lVar17 = lVar20;
              func_0x00010206dcac();
              _swift_bridgeObjectRelease(lVar20);
            }
          }
          uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
          uVar21 = 0xffffffffffffffff;
          if ((long)uVar13 < 0x40) {
            uVar21 = ~(-1L << (uVar13 & 0x3f));
          }
          uVar21 = uVar21 & *(ulong *)(lVar16 + 0x40);
          _swift_bridgeObjectRetain(lVar16);
          lVar20 = 0;
          do {
            while( true ) {
              while (uVar21 == 0) {
                bVar6 = SCARRY8(lVar20,1);
                lVar20 = lVar20 + 1;
                if (bVar6) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x104935b84);
                  (*pcVar5)();
                }
                if ((long)(uVar13 + 0x3f >> 6) <= lVar20) {
                  _objc_release(uVar7);
                  _swift_bridgeObjectRelease(lVar17);
                  _swift_release(lVar16);
                  _swift_bridgeObjectRelease(lVar16);
                  return 0;
                }
                uVar21 = ((ulong *)(lVar16 + 0x40))[lVar20];
              }
              uVar12 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar21 = uVar21 - 1 & uVar21;
              uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar20 << 6;
              dVar22 = *(double *)(*(long *)(lVar16 + 0x38) + uVar12 * 8);
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) break;
LAB_104935a4c:
              if (dVar22 <= 0.0) goto LAB_104935b00;
            }
            plVar3 = (long *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x10);
            lVar11 = *plVar3;
            uVar12 = plVar3[1];
            _swift_bridgeObjectRetain(uVar12);
            _swift_bridgeObjectRetain(lVar17);
            uVar15 = uVar12;
            func_0x000100029284();
            _swift_bridgeObjectRelease(uVar12);
            if ((uVar15 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar17);
              goto LAB_104935a4c;
            }
            dVar23 = *(double *)(*(long *)(lVar17 + 0x38) + lVar11 * 8);
            _swift_bridgeObjectRelease(lVar17);
          } while (dVar23 < dVar22);
LAB_104935b00:
          _swift_release(lVar16);
          _swift_bridgeObjectRelease(lVar16);
          _objc_release(uVar7);
          _swift_bridgeObjectRelease(lVar17);
        }
        uVar10 = 1;
      } while (uVar18 != uVar14);
    }
  }
  return uVar10;
}



/* Entry: 104935bcc; end: 104935bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104935bcc(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_11309da70);
}



/* Entry: 104935bfc; end: 104935f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104935bfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _swift_getObjectType();
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar8 = (undefined *)0x0;
LAB_104935d68:
    puVar9 = (undefined *)0x0;
LAB_104935d6c:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar7 = 0;
    lVar1 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      puVar8 = (undefined *)0x0;
      lVar1 = *(long *)(param_1 + 0x10);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&uStack_60);
      _swift_bridgeObjectRelease(param_1);
      uVar2 = 0;
      FUN_104936764(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar3 = &puStack_78;
      _swift_dynamicCast(ppuVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
      puVar8 = puStack_78;
      if ((int)ppuVar3 == 0) {
        puVar8 = (undefined *)0x0;
      }
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 == 0) goto LAB_104935d68;
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x797469726f697270;
    uVar7 = 0;
    func_0x000100029284(0x797469726f697270);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      puVar9 = (undefined *)0x0;
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_104935ec4;
      goto LAB_104935d6c;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_1);
    uVar2 = 0;
    FUN_104936764(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppuVar3 = &puStack_78;
    _swift_dynamicCast(ppuVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    puVar9 = puStack_78;
    if ((int)ppuVar3 == 0) {
      puVar9 = (undefined *)0x0;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_104935d6c;
LAB_104935ec4:
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x73746e657665;
    uVar7 = 0;
    func_0x000100029284(0x73746e657665);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104935d6c;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_1);
  if (lStack_48 == 0) {
    func_0x0001049367a4(&uStack_60,0x11309c428);
  }
  else {
    uVar2 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    ppuVar3 = &puStack_78;
    _swift_dynamicCast(ppuVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    puVar5 = puStack_78;
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_104935ddc;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_104935ddc:
  puVar4 = puVar5;
  FUN_1049363ec();
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar4 = puVar5;
  }
  if (puVar8 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar4);
    _objc_release(puVar9);
  }
  else {
    if (puVar9 != (undefined *)0x0) {
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar4 & 0xfffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((long)puVar4 < 0) {
          puVar5 = puVar4;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (puVar5 != (undefined *)0x0) {
        puVar5 = puVar8;
        _objc_msgSend(puVar8,PTR_s_integerValue_1125f7a00);
        *(undefined **)(unaff_x20 + _DAT_11309da70) = puVar5;
        puVar5 = puVar9;
        _objc_msgSend(puVar9,PTR_s_integerValue_1125f7a00);
        *(undefined **)(unaff_x20 + _DAT_11309da78) = puVar5;
        *(undefined **)(unaff_x20 + _DAT_11309da68) = puVar4;
        puVar6 = &stack0xffffffffffffff90;
        _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
        _objc_release(puVar9);
        _objc_release(puVar8);
        return puVar6;
      }
      _objc_release(puVar8);
      puVar8 = puVar9;
    }
    _objc_release(puVar8);
    _swift_bridgeObjectRelease(puVar4);
  }
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 104935f68; end: 104935f6f; +[_TtC8FBAEMKit7AEMRule supportsSecureCoding] */

undefined8 FUN_104935f68(void)

{
  return 1;
}



/* Entry: 104935f70; end: 104935f77;  */

undefined8 FUN_104935f70(void)

{
  return 1;
}



/* Entry: 104935f78; end: 104935fe7;  */

undefined8 FUN_104935f78(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  func_0x000104936538(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104935fe8; end: 104936023; -[_TtC8FBAEMKit7AEMRule initWithCoder:] */

undefined8 FUN_104935fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104936538();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104936024; end: 10493613f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104936024(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11309da70);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21c630);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11309da78);
  uVar1 = 0x797469726f697270;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x797469726f697270,0xe800000000000000);
  _objc_msgSend(param_1,PTR_s_encodeInteger_forKey__1125c2598,uVar2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11309da68);
  uVar1 = 0;
  func_0x00010491d944(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x73746e657665;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73746e657665,0xe600000000000000);
  _objc_msgSend(param_1,PTR_s_encodeObject_forKey__1125c25b0,uVar2,uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104936140; end: 1049362a7; -[_TtC8FBAEMKit7AEMRule encodeWithCoder:] */

void FUN_104936140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104936024(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049362a8; end: 10493632f; -[_TtC8FBAEMKit7AEMRule isEqual:] */

uint FUN_1049362a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x000104936190(&uStack_40);
  _objc_release(param_1);
  func_0x0001049367a4(&uStack_40,0x11309c428);
  return uVar1 & 1;
}



/* Entry: 104936330; end: 10493637b;  */

void FUN_104936330(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10493637c; end: 1049363db; -[_TtC8FBAEMKit7AEMRule init] */

void FUN_10493637c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBAEMKit.AEMRule",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049363a8);
  (*pcVar1)();
}



/* Entry: 1049363dc; end: 1049363eb; -[_TtC8FBAEMKit7AEMRule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049363dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309da68));
  return;
}



/* Entry: 1049363ec; end: 104936727;  */

undefined * FUN_1049363ec(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = *(ulong *)(param_1 + 0x10);
  if (uVar8 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar9 = 0;
    while (uVar8 != uVar9) {
      if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104936534);
        (*pcVar2)();
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104936538);
        (*pcVar2)();
      }
      lVar7 = *(long *)(param_1 + 0x20 + uVar9 * 8);
      func_0x00010491d944(0);
      _objc_allocWithZone();
      _swift_bridgeObjectRetain();
      FUN_10491c798();
      uVar9 = uVar9 + 1;
      if (lVar7 != 0) {
        puVar3 = puVar6;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar3 == 0) || ((long)puVar6 < 0)) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar6 & 0xfffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((long)puVar6 < 0) {
              puVar3 = puVar6;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_104915014(0,puVar3 + 1,1,puVar6);
          puVar6 = puVar4;
        }
        uVar5 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar5 + 0x10);
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar9) {
          puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_104915014(puVar3,uVar9 + 1,1,puVar6);
          uVar5 = (ulong)puVar3 & 0xffffffffffffff8;
          puVar6 = puVar3;
        }
        *(ulong *)(uVar5 + 0x10) = uVar9 + 1;
        *(long *)(uVar5 + uVar9 * 8 + 0x20) = lVar7;
        uVar9 = uVar1;
      }
    }
  }
  return puVar6;
}



/* Entry: 104936728; end: 104936753;  */

void FUN_104936728(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e5690);
  return;
}



/* Entry: 104936754; end: 104936763;  */

void FUN_104936754(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104936758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 104936764; end: 1049367df;  */

void FUN_104936764(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1049367e0; end: 10493696b;  */

undefined1  [16] FUN_1049367e0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)&uStack_a0;
  _swift_beginAccess(0x1138157d0,auStack_68,0,0);
  lVar4 = lRam00000001138157d0;
  lVar2 = lRam00000001138157d0;
  if (lRam00000001138157d0 == 0) {
    if (lRam000000011309d058 != -1) {
      _swift_once(0x11309d058,FUN_104936a94);
    }
    _swift_beginAccess(0x1138157d8,auStack_80,0,0);
    if (lRam00000001138157d8 != 0) {
      lVar2 = lRam00000001138157d8;
      _objc_retain();
      lVar4 = 0;
      goto LAB_104936860;
    }
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
LAB_104936860:
    _objc_retain(lVar4);
    uVar3 = 0x6b6f6f6265636146;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6f6f6265636146,0xed00004449707041);
    lVar4 = lVar2;
    _objc_msgSend(lVar2,PTR_s_objectForInfoDictionaryKey__1126159c8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar3);
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    lStack_38 = lStack_88;
    uStack_40 = uStack_90;
    if (lStack_88 != 0) {
      _swift_dynamicCast(&uStack_a0,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (iVar1 == 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
      }
      goto LAB_104936940;
    }
  }
  func_0x00010006e7f4(&uStack_50);
  uStack_a0 = 0;
  uStack_98 = 0;
LAB_104936940:
  auVar5._8_8_ = uStack_98;
  auVar5._0_8_ = uStack_a0;
  return auVar5;
}



/* Entry: 10493696c; end: 104936a93;  */

void FUN_10493696c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104936a94; end: 104936acb;  */

void FUN_104936a94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puRam00000001138157d8 = puVar1;
  return;
}



/* Entry: 104936acc; end: 104936c63;  */

undefined8 FUN_104936acc(void)

{
  if (lRam000000011309d058 != -1) {
    _swift_once(0x11309d058,FUN_104936a94);
  }
  return 0x1138157d8;
}



/* Entry: 104936c64; end: 104936da7;  */

void FUN_104936c64(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138157d0,auStack_38,0,0);
  *param_1 = uRam00000001138157d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104936da8; end: 104936e0f;  */

undefined1  [16] FUN_104936da8(void)

{
  return ZEXT816(0x1107b8d28);
}



/* Entry: 104936e10; end: 104936e1b;  */

void FUN_104936e10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x65746e6f635f6266;
    uVar3 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(param_1);
      uVar4 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      puVar2 = &uStack_68;
      _swift_dynamicCast(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if (((ulong)puVar2 & 1) != 0) {
        uVar4 = 0;
        uStack_80 = param_2;
        FUN_10492426c(0,FUN_104937f80,auStack_90,uStack_68);
        _swift_bridgeObjectRelease(uStack_68);
        _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_msgSend(uVar4);
        return;
      }
    }
  }
  func_0x0001002ed07c(0);
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(0);
  return;
}



/* Entry: 104936e1c; end: 104936edb;  */

undefined1  [16] FUN_104936e1c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  if (param_1 == 0) {
    return ZEXT816(0);
  }
  iVar1 = (int)&uStack_50;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x65746e6f635f6266;
    uVar3 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar3 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_40);
      _swift_bridgeObjectRelease(param_1);
      _swift_dynamicCast(&uStack_50,auStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (iVar1 == 0) {
        uStack_50 = 0;
        uStack_48 = 0;
      }
      goto LAB_104936ecc;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  uStack_50 = 0;
  uStack_48 = 0;
LAB_104936ecc:
  auVar4._8_8_ = uStack_48;
  auVar4._0_8_ = uStack_50;
  return auVar4;
}



/* Entry: 104936edc; end: 104936edf;  */

ulong * FUN_104936edc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (param_3 == (ulong *)0x0) {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar6 = *(ulong **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    else {
      puVar6 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
      if ((long)param_1 < 0) {
        puVar6 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    PTR__swift_isaMask_11034f488 = (undefined *)puVar7;
    if (puVar6 != (ulong *)0x0) {
      do {
        puVar1 = (ulong *)((long)puVar6 - 1);
        if (SBORROW8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec0);
          (*pcVar2)();
        }
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec4);
            (*pcVar2)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec8);
            (*pcVar2)();
          }
          puVar6 = (ulong *)param_1[(long)puVar6 + 3];
          _objc_retain();
        }
        else {
          puVar6 = puVar1;
          param_2 = param_1;
          FUN_10491ac20();
        }
        (**(code **)((*puVar7 & *puVar6) + 0x128))();
        if (param_2 == (ulong *)0x0) {
          return puVar6;
        }
        puVar5 = param_2;
        _objc_release(puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_2 = puVar5;
        puVar6 = puVar1;
      } while (puVar1 != (ulong *)0x0);
    }
  }
  else {
    puVar6 = param_2;
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar7 = *(ulong **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    else {
      puVar7 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
      if ((long)param_1 < 0) {
        puVar7 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
    if (puVar7 != (ulong *)0x0) {
      do {
        puVar5 = (ulong *)((long)puVar7 - 1);
        if (SBORROW8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ebc);
          (*pcVar2)();
        }
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ecc);
            (*pcVar2)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ed0);
            (*pcVar2)();
          }
          puVar7 = (ulong *)param_1[(long)puVar7 + 3];
          _objc_retain();
        }
        else {
          puVar7 = puVar5;
          puVar6 = param_1;
          FUN_10491ac20();
        }
        puVar3 = puVar7;
        (**(code **)((*puVar1 & *puVar7) + 0x128))();
        puVar4 = puVar6;
        if (puVar6 != (ulong *)0x0) {
          if (puVar3 == param_2 && puVar6 == param_3) {
            _swift_bridgeObjectRelease(puVar6);
            return puVar7;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(puVar6);
          if (((ulong)puVar3 & 1) != 0) {
            return puVar7;
          }
        }
        _objc_release(puVar7);
        puVar6 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != (ulong *)0x0);
    }
  }
  return (ulong *)0x0;
}



/* Entry: 104936ee0; end: 104936f07;  */

void FUN_104936ee0(undefined8 param_1)

{
  FUN_104937f0c();
  _swift_initStaticObject();
  uRam00000001138157e0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 104936f08; end: 104936f57;  */

void FUN_104936f08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 104936f58; end: 10493727b;  */

void FUN_104936f58(double *param_1,double *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 auStack_120 [11];
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  
  dVar10 = *param_2;
  lVar7 = *param_3;
  FUN_104937f98(param_4,auStack_c8);
  if (lStack_b0 == 0) {
    func_0x000104937fe0(auStack_c8,0x11309d5a8);
LAB_104937144:
    *param_1 = dVar10;
    return;
  }
  func_0x000100dc2cac(auStack_c8,auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar6 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(uVar6 + 0x18) = 2;
  *(undefined8 *)(uVar6 + 0x10) = 1;
  *(undefined8 *)(uVar6 + 0x20) = 0x65746e6f635f6266;
  *(undefined8 *)(uVar6 + 0x28) = 0xea0000000000746e;
  lVar2 = 0x11309d660;
  func_0x0001048db364();
  _swift_allocObject();
  dVar8 = 4.94065645841247e-324;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(long *)(lVar2 + 0x20) = lVar7;
  uVar3 = 0x11309d5b0;
  func_0x0001048db364();
  *(undefined8 *)(uVar6 + 0x48) = uVar3;
  *(long *)(uVar6 + 0x30) = lVar2;
  _swift_bridgeObjectRetain(lVar7);
  uVar1 = uVar6;
  func_0x000100214a84();
  _swift_setDeallocating(uVar6);
  func_0x000104937fe0((undefined8 *)(uVar6 + 0x20),0x11309c418);
  uVar6 = uVar1;
  (**(code **)(lStack_80 + 8))(uVar1,uStack_88,lStack_80);
  _swift_bridgeObjectRelease(uVar1);
  if ((uVar6 & 1) == 0) {
    func_0x0001000834e4(auStack_a0);
    goto LAB_104937144;
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_104937154:
    func_0x0001002ed07c(0);
    uVar3 = 0;
    __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(0);
    lVar2 = *(long *)(lVar7 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    lVar2 = 0x6972705f6d657469;
    uVar6 = 0xea00000000006563;
    func_0x000100029284(0x6972705f6d657469);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_104937154;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,auStack_c8);
    _swift_bridgeObjectRelease(lVar7);
    uVar3 = 0;
    func_0x0001002ed07c(0);
    puVar4 = auStack_120;
    _swift_dynamicCast(puVar4,auStack_c8,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_104937154;
    lVar2 = *(long *)(lVar7 + 0x10);
    uVar3 = auStack_120[0];
  }
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar2 = 0x797469746e617571;
    uVar6 = 0;
    func_0x000100029284(0x797469746e617571);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,auStack_c8);
      _swift_bridgeObjectRelease(lVar7);
      uVar5 = 0;
      func_0x0001002ed07c(0);
      puVar4 = auStack_120;
      _swift_dynamicCast(puVar4,auStack_c8,PTR___sypN_11034f1a8 + 8,uVar5,6);
      uVar5 = auStack_120[0];
      if (((ulong)puVar4 & 1) != 0) goto LAB_104937208;
    }
  }
  func_0x0001002ed07c(0);
  uVar5 = 1;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(1);
LAB_104937208:
  _objc_msgSend(uVar3,PTR_s_doubleValue_1125bfb10);
  dVar9 = dVar8;
  _objc_msgSend(uVar5,PTR_s_doubleValue_1125bfb10);
  _objc_release(uVar3);
  _objc_release(uVar5);
  *param_1 = dVar10 + dVar8 * dVar9;
  func_0x0001000834e4(auStack_a0);
  return;
}



/* Entry: 10493727c; end: 1049374cf;  */

void FUN_10493727c(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  lVar8 = *param_2;
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    lVar1 = 0x6469;
    uVar5 = 0;
    func_0x000100029284(0x6469);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(lVar8);
      uVar2 = 0;
      func_0x0001002ed07c(0);
      puVar3 = &uStack_70;
      _swift_dynamicCast(puVar3,auStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        uVar2 = uStack_70;
        puVar7 = PTR_s_stringValue_112674fe8;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar2);
        uVar9 = *param_1;
        uVar5 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
          func_0x0001000d182c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        }
        uVar5 = *(ulong *)(uVar6 + 0x10);
        uVar9 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x0001000d182c(uVar9,uVar5 + 1,1,uVar6);
        }
        *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
        lVar8 = uVar9 + uVar5 * 0x10;
        *(undefined8 *)(lVar8 + 0x20) = uVar4;
        *(undefined **)(lVar8 + 0x28) = puVar7;
        _objc_release(uStack_70);
        *param_1 = uVar9;
        return;
      }
    }
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    lVar1 = 0x6469;
    uVar5 = 0;
    func_0x000100029284(0x6469);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar8);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(lVar8);
      puVar3 = &uStack_70;
      _swift_dynamicCast(puVar3,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar3 & 1) != 0) {
        uVar9 = *param_1;
        uVar5 = uVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
          func_0x0001000d182c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        }
        uVar5 = *(ulong *)(uVar6 + 0x10);
        uVar9 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x0001000d182c(uVar9,uVar5 + 1,1,uVar6);
        }
        *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
        lVar8 = uVar9 + uVar5 * 0x10;
        *(undefined8 *)(lVar8 + 0x20) = uStack_70;
        *(undefined8 *)(lVar8 + 0x28) = uStack_68;
        *param_1 = uVar9;
      }
    }
  }
  return;
}



/* Entry: 1049374d0; end: 1049374d7;  */

undefined8 FUN_1049374d0(void)

{
  return 1;
}



/* Entry: 1049374d8; end: 104937577;  */

void FUN_1049374d8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104937578; end: 104937587;  */

void FUN_104937578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104937588; end: 1049375a7;  */

void FUN_104937588(void)

{
  return;
}



/* Entry: 1049375a8; end: 1049376d7;  */

void FUN_1049375a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_1);
    lVar1 = 0x65746e6f635f6266;
    uVar3 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(param_1);
      uVar4 = 0x11309d5b0;
      func_0x0001048db364(0x11309d5b0);
      puVar2 = &uStack_68;
      _swift_dynamicCast(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if (((ulong)puVar2 & 1) != 0) {
        uVar4 = 0;
        uStack_80 = param_2;
        FUN_10492426c(0,FUN_104937f80,auStack_90,uStack_68);
        _swift_bridgeObjectRelease(uStack_68);
        _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_msgSend(uVar4);
        return;
      }
    }
  }
  func_0x0001002ed07c(0);
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC(0);
  return;
}



/* Entry: 1049376d8; end: 10493786b;  */

undefined * FUN_1049376d8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(ulong **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      puVar10 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar10 == (ulong *)0x0) {
    _swift_retain(puVar9);
  }
  else {
    _swift_retain(puVar9);
    do {
      puVar4 = (ulong *)((long)puVar10 - 1);
      if (SBORROW8((long)puVar10,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104937818);
        (*pcVar5)();
      }
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10493781c);
          (*pcVar5)();
        }
        if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104937820);
          (*pcVar5)();
        }
        puVar10 = (ulong *)param_1[(long)puVar10 + 3];
        _objc_retain();
      }
      else {
        puVar10 = puVar4;
        param_2 = param_1;
        FUN_10491ac20();
      }
      puVar6 = puVar10;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar10) + 0x128))();
      puVar2 = (ulong *)0x0;
      if (param_2 != (ulong *)0x0) {
        puVar2 = puVar6;
      }
      puVar6 = (ulong *)0xe000000000000000;
      if (param_2 != (ulong *)0x0) {
        puVar6 = param_2;
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = (ulong *)(*(long *)(puVar9 + 0x10) + 1);
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1,puVar9);
      }
      uVar3 = *(ulong *)(puVar8 + 0x10);
      puVar1 = (ulong *)(uVar3 + 1);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        param_2 = puVar1;
        func_0x0001000d182c(puVar9,puVar1,1,puVar8);
      }
      *(ulong **)(puVar9 + 0x10) = puVar1;
      *(ulong **)(puVar9 + uVar3 * 0x10 + 0x20) = puVar2;
      *(ulong **)(puVar9 + uVar3 * 0x10 + 0x28) = puVar6;
      _objc_release(puVar10);
      puVar10 = puVar4;
    } while (puVar4 != (ulong *)0x0);
  }
  return puVar9;
}



/* Entry: 10493786c; end: 104937b2b;  */

undefined1  [16] FUN_10493786c(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x21;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined *puStack_70;
  undefined *apuStack_68 [4];
  long lStack_48;
  
  ppuVar4 = &puStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126add78;
  _swift_getInitializedObjCClass();
  _swift_bridgeObjectRetain(param_2);
  func_0x000100e35e30(param_1,param_2);
  uVar3 = param_1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00010006c090(param_1,param_2);
  apuStack_68[0] = (undefined *)0x0;
  _objc_msgSend(puVar2,PTR_s_JSONObjectWithData_options_error_11254dfe0,uVar3,1,apuStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = apuStack_68[0];
  if (puVar2 == (undefined *)0x0) {
    puVar2 = apuStack_68[0];
    _objc_retain();
LAB_104937ab4:
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar6);
    _objc_release(puVar2);
    unaff_x21 = puVar6;
    puVar7 = param_2;
  }
  else {
    _objc_retain();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(apuStack_68,puVar2);
    _swift_unknownObjectRelease(puVar2);
    uVar3 = 0x11309d5b0;
    func_0x0001048db364(0x11309d5b0);
    _swift_dynamicCast(&puStack_70,apuStack_68,PTR___sypN_11034f1a8 + 8,uVar3,6);
    puVar5 = puStack_70;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((int)ppuVar4 != 0) {
      apuStack_68[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar8 = *(ulong *)(puStack_70 + 0x10);
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      param_2 = puVar6;
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          if (*(ulong *)(puVar5 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104937b0c);
            (*pcVar1)();
          }
          puVar7 = *(undefined **)(puVar5 + uVar9 * 8 + 0x20);
          puStack_70 = puVar7;
          _swift_bridgeObjectRetain(puVar7);
          FUN_10493727c(apuStack_68,&puStack_70);
          if (unaff_x21 != (undefined *)0x0) goto LAB_104937b10;
          _swift_bridgeObjectRelease(puVar7);
          uVar9 = uVar9 + 1;
          param_2 = apuStack_68[0];
        } while (uVar8 != uVar9);
      }
      _swift_bridgeObjectRelease(puVar5);
      puVar5 = PTR_PTR_1126add58;
      _swift_getInitializedObjCClass();
      puVar6 = param_2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(param_2);
      apuStack_68[0] = (undefined *)0x0;
      puVar7 = PTR_s_JSONStringForObject_error_invali_11254e010;
      _objc_msgSend(puVar5,PTR_s_JSONStringForObject_error_invali_11254e010,puVar6,apuStack_68,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = apuStack_68[0];
      if (puVar5 != (undefined *)0x0) {
        puVar2 = puVar5;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar5);
        _objc_retain(puVar6);
        _objc_release(puVar5);
        goto LAB_104937acc;
      }
      puVar2 = apuStack_68[0];
      _objc_retain(apuStack_68[0]);
      goto LAB_104937ab4;
    }
    FUN_104937f40();
    unaff_x21 = &UNK_1107b8de8;
    _swift_allocError(&UNK_1107b8de8,ppuVar4,0,0);
    puVar7 = param_2;
  }
  _swift_willThrow();
LAB_104937acc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar10._8_8_ = puVar7;
    auVar10._0_8_ = puVar2;
    return auVar10;
  }
  ___stack_chk_fail();
LAB_104937b10:
  _swift_errorRelease(unaff_x21);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(apuStack_68[0]);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104937b2c);
  (*pcVar1)();
}



/* Entry: 104937b2c; end: 104937d03;  */

/* WARNING: Removing unreachable block (ram,0x000104937bdc) */

undefined1  [16] FUN_104937b2c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  if (param_1 == 0) {
    return ZEXT816(0);
  }
  lVar5 = 0x65746e6f635f6266;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    uVar4 = 0;
    lVar1 = lVar5;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(param_1);
      puVar2 = &uStack_70;
      _swift_dynamicCast(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if ((((ulong)puVar2 & 1) != 0) && (lStack_68 != 0)) {
        uVar3 = uStack_70;
        lVar5 = lStack_68;
        FUN_10493786c(uStack_70,lStack_68);
        _swift_bridgeObjectRelease(lStack_68);
        goto LAB_104937cd0;
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    uVar4 = 0;
    func_0x000100029284(0x65746e6f635f6266);
    if ((uVar4 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(param_1);
      puVar2 = &uStack_70;
      _swift_dynamicCast(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar2 & 1) == 0) {
        uStack_70 = 0;
        lStack_68 = 0;
      }
      _swift_bridgeObjectRelease(0);
      uVar3 = uStack_70;
      lVar5 = lStack_68;
      goto LAB_104937cd0;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(0);
  lVar5 = 0;
  uVar3 = 0;
LAB_104937cd0:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 104937d04; end: 104937f0b;  */

ulong * FUN_104937d04(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (param_3 == (ulong *)0x0) {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar6 = *(ulong **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    else {
      puVar6 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
      if ((long)param_1 < 0) {
        puVar6 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar7 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    PTR__swift_isaMask_11034f488 = (undefined *)puVar7;
    if (puVar6 != (ulong *)0x0) {
      do {
        puVar1 = (ulong *)((long)puVar6 - 1);
        if (SBORROW8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec0);
          (*pcVar2)();
        }
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec4);
            (*pcVar2)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ec8);
            (*pcVar2)();
          }
          puVar6 = (ulong *)param_1[(long)puVar6 + 3];
          _objc_retain();
        }
        else {
          puVar6 = puVar1;
          param_2 = param_1;
          FUN_10491ac20();
        }
        (**(code **)((*puVar7 & *puVar6) + 0x128))();
        if (param_2 == (ulong *)0x0) {
          return puVar6;
        }
        puVar5 = param_2;
        _objc_release(puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_2 = puVar5;
        puVar6 = puVar1;
      } while (puVar1 != (ulong *)0x0);
    }
  }
  else {
    puVar6 = param_2;
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar7 = *(ulong **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    else {
      puVar7 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
      if ((long)param_1 < 0) {
        puVar7 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
    }
    PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
    if (puVar7 != (ulong *)0x0) {
      do {
        puVar5 = (ulong *)((long)puVar7 - 1);
        if (SBORROW8((long)puVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ebc);
          (*pcVar2)();
        }
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ecc);
            (*pcVar2)();
          }
          if (*(ulong **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104937ed0);
            (*pcVar2)();
          }
          puVar7 = (ulong *)param_1[(long)puVar7 + 3];
          _objc_retain();
        }
        else {
          puVar7 = puVar5;
          puVar6 = param_1;
          FUN_10491ac20();
        }
        puVar3 = puVar7;
        (**(code **)((*puVar1 & *puVar7) + 0x128))();
        puVar4 = puVar6;
        if (puVar6 != (ulong *)0x0) {
          if (puVar3 == param_2 && puVar6 == param_3) {
            _swift_bridgeObjectRelease(puVar6);
            return puVar7;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(puVar6);
          if (((ulong)puVar3 & 1) != 0) {
            return puVar7;
          }
        }
        _objc_release(puVar7);
        puVar6 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != (ulong *)0x0);
    }
  }
  return (ulong *)0x0;
}



/* Entry: 104937f0c; end: 104937f37;  */

void FUN_104937f0c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_11309db28);
  return;
}



/* Entry: 104937f38; end: 104937f3f;  */

void FUN_104937f38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104937f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 104937f40; end: 104937f7f;  */

void FUN_104937f40(void)

{
  undefined *puVar1;
  
  if (puRam000000011309db80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd48c98;
  _swift_getWitnessTable(&UNK_10dd48c98,&UNK_1107b8de8);
  puRam000000011309db80 = puVar1;
  return;
}



/* Entry: 104937f80; end: 104937f97;  */

void FUN_104937f80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104936f58(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104937f98; end: 10493814b;  */

undefined8 FUN_104937f98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11309d5a8;
  func_0x0001048db364();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10493814c; end: 10493822f;  */

/* WARNING: Removing unreachable block (ram,0x0001049381bc) */

void FUN_10493814c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR___ss7KeyPathCMo_11034f0c8;
  lVar4 = *param_2;
  lVar2 = *(long *)(lVar4 + *(long *)PTR___ss7KeyPathCMo_11034f0c8);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10493835c(puVar3,param_3,param_4);
  _swift_getAtKeyPath(param_1,puVar3,param_2);
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar4 + *(long *)puVar1 + 8) + -8) + 0x38))(param_1,0,1);
  return;
}



/* Entry: 104938230; end: 10493828f;  */

void FUN_104938230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  _swift_beginAccess(0x1138157d0,auStack_48,1,0);
  uVar1 = uRam00000001138157d0;
  uRam00000001138157d0 = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104938290; end: 10493835b;  */

void FUN_104938290(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e82615c,&UNK_10e826164);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  puVar3 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(puVar3,param_1,lVar1);
  (**(code **)(lVar2 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(param_3 + 0x18))(puVar3,param_2,param_3);
  return;
}



/* Entry: 10493835c; end: 104938537;  */

void FUN_10493835c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  lVar1 = 0xff;
  uStack_70 = param_1;
  _swift_getAssociatedTypeWitness(0xff,param_3,param_2,&UNK_10e82615c,&UNK_10e826164);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&uStack_70 - uVar7;
  lVar11 = lVar12 - uVar7;
  (**(code **)(param_3 + 0x10))(lVar12,param_2,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar12;
  (*pcVar10)(lVar12,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(param_3 + 0x28))(lVar11,param_2,param_3);
    lVar3 = lVar12;
    (*pcVar10)(lVar12,1,lVar1);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar11,lVar12,lVar1);
    (**(code **)(lVar8 + 0x38))(lVar11,0,1,lVar1);
  }
  lVar3 = lVar11;
  (*pcVar10)(lVar11,1,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar11,lVar2);
    uVar4 = param_2;
    FUN_104938560(param_2,param_2);
    uVar5 = 0;
    func_0x0001049386b8(0,param_2);
    puVar6 = (undefined8 *)&UNK_10dd48d20;
    _swift_getWitnessTable(&UNK_10dd48d20,uVar5);
    _swift_allocError(uVar5,puVar6,0,0);
    *puVar6 = uVar4;
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(uStack_70,lVar11,lVar1);
  }
  return;
}


