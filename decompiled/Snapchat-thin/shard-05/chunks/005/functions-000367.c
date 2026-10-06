/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ee0268; end: 103ee026b;  */

undefined *
FUN_103ee0268(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined4 param_10,
             undefined4 param_11,undefined8 param_12,long param_13,undefined *param_14,long param_15
             ,undefined4 param_16,byte param_17)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uStack_7c = (uint)param_17;
  uStack_80 = param_16;
  lVar2 = 0;
  uStack_a8 = param_3;
  uStack_a0 = param_6;
  uStack_98 = param_8;
  lStack_78 = param_4;
  lStack_70 = param_7;
  __s10Foundation8TimeZoneVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar3 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar4 = PTR_PTR_1126b37c0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puStack_88 = puVar3;
  func_0x000107c553a0();
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puStack_90 = puVar4;
  puStack_68 = puVar3;
  func_0x000107c545cc();
  puVar3 = PTR_PTR_1126e06f0;
  _objc_allocWithZone(PTR_PTR_1126e06f0);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c546ac(puVar3);
  _objc_release(param_1);
  func_0x000107c597e8(puVar3);
  func_0x000107c57230(puVar3);
  puVar4 = puVar3;
  func_0x000107c5a0f8(puVar3);
  lVar9 = param_15;
  if (param_15 == 0) {
    __s10Foundation8TimeZoneV7currentACvgZ(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation8TimeZoneV10identifierSSvg();
    (**(code **)(lVar10 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    lVar9 = param_2;
    param_14 = puVar4;
  }
  _swift_bridgeObjectRetain(param_15);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_14,lVar9);
  _swift_bridgeObjectRelease(lVar9);
  func_0x000107c5a108(puVar3);
  _objc_release(param_14);
  func_0x000107c5553c(puVar3);
  puVar4 = puStack_68;
  if (lStack_78 != 0) {
    uVar5 = uStack_a8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a8);
    func_0x000107c59e18(puVar3);
    _objc_release(uVar5);
  }
  if (lStack_70 != 0) {
    uVar5 = uStack_a0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0);
    func_0x000107c56080(puVar3);
    _objc_release(uVar5);
  }
  if (param_9 != 0) {
    uVar5 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,param_9);
    func_0x000107c53b18(puVar3);
    _objc_release(uVar5);
  }
  if (param_13 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_12,param_13);
    func_0x000107c546a8(puVar3);
    _objc_release(param_12);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3160);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3164);
    (*pcVar1)();
  }
  func_0x000107c57440(puVar8);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar8);
  return puVar6;
}



/* Entry: 103ee026c; end: 103ee041b; +[SCItemInstanceStickerUtils planStickerItemInstanceWithEventId:title:startTimestampMs:locationText:creatorUserId:participantCount:eventEmojiOrGraphicId:tzid:type:isAllDay:] */

void FUN_103ee026c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined4 param_8,long param_9,
                  long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  if (param_4 == 0) {
    uStack_88 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_4;
    uVar2 = uVar3;
  }
  if (param_6 == 0) {
    uStack_90 = 0;
    uVar4 = 0;
    param_6 = uStack_90;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar3;
  }
  if (param_7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    uVar6 = uVar3;
  }
  _objc_retain();
  _objc_retain();
  if (param_9 == 0) {
    uVar1 = 0;
    uVar5 = uVar3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uVar3;
    _objc_release(param_9);
    uVar1 = uVar3;
  }
  if (param_10 == 0) {
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_10);
  }
  func_0x000103ee2e54(param_3,param_2,uStack_88,uVar2,param_5,param_6,uVar4,param_7,uVar6,param_8);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee041c; end: 103ee041f;  */

undefined *
FUN_103ee041c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126ba7e0;
  _objc_allocWithZone(PTR_PTR_1126ba7e0);
  func_0x000107c453e4();
  uVar8 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c535b4(puVar2);
  _objc_release(uVar8);
  func_0x000107c5a0f8(puVar2);
  func_0x000107c55540(puVar2);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c52d40();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  uVar8 = 0;
  if (param_2 >> 0x3c < 0xf) {
    uVar8 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    func_0x0001000b44c0(param_1,param_2);
  }
  func_0x000107c55218(puVar4);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126ba7e8;
  _objc_allocWithZone(PTR_PTR_1126ba7e8);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  func_0x000107c52ae0(puVar5);
  _objc_release(param_3);
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    func_0x000107c54bd4(puVar5);
    _objc_release(param_5);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c52d44();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar7);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3360);
  (*pcVar1)();
}



/* Entry: 103ee0420; end: 103ee04cb; +[SCItemInstanceStickerUtils bitmojiStickerItemInstanceWithComicId:avatarId:friendAvatarId:isAnimated:] */

void FUN_103ee0420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  func_0x000103ee3164(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee04cc; end: 103ee0507; -[SCItemInstanceStickerUtils init] */

void FUN_103ee04cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee0508; end: 103ee053b;  */

void FUN_103ee0508(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee053c; end: 103ee06f7;  */

ulong FUN_103ee053c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee0620);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee0624);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103ee3380(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee06f8);
  (*pcVar2)();
}



/* Entry: 103ee06f8; end: 103ee097f;  */

undefined * FUN_103ee06f8(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126dc2d0;
  _objc_allocWithZone(PTR_PTR_1126dc2d0);
  func_0x000107c453e4();
  func_0x000107c526c8();
  func_0x000107c563e4(puVar5);
  func_0x000107c5a0f8(puVar5);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0848);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c526cc(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee084c);
  (*pcVar1)();
}



/* Entry: 103ee0980; end: 103ee0b4b;  */

undefined * FUN_103ee0980(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  
  lVar2 = 0;
  __s10Foundation8TimeZoneVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar3 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar4 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar5 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar6 = PTR_PTR_1126dc338;
  _objc_allocWithZone(PTR_PTR_1126dc338);
  func_0x000107c453e4();
  func_0x000107c59d58();
  puVar7 = puVar6;
  func_0x000107c5a0f8(puVar6);
  __s10Foundation8TimeZoneV7currentACvgZ
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation8TimeZoneV10identifierSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c59df4(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar8 = puVar7;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0b48);
    (*pcVar1)();
  }
  puVar9 = puVar8;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c53e3c(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar9);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0b4c);
  (*pcVar1)();
}



/* Entry: 103ee0b4c; end: 103ee0c93;  */

undefined * FUN_103ee0b4c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126dc2c8;
  _objc_allocWithZone(PTR_PTR_1126dc2c8);
  func_0x000107c453e4();
  func_0x000107c55620();
  if (param_1 != 0) {
    func_0x000107c575d0(puVar5);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c575d8(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar8);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0c94);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0c90);
  (*pcVar1)();
}



/* Entry: 103ee0c94; end: 103ee0eab;  */

undefined *
FUN_103ee0c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c553a0(puVar3);
  func_0x000107c545cc(puVar2);
  puVar5 = PTR_PTR_1126dc308;
  _objc_allocWithZone(PTR_PTR_1126dc308);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uVar9 = param_1;
  func_0x000107c5a42c(puVar5);
  uVar8 = (uint)uVar9;
  _objc_release(param_1);
  FUN_103ee34e0(param_3,param_4);
  if ((uVar8 & 0xff) == 1) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126afad0;
    _objc_allocWithZone(PTR_PTR_1126afad0);
    func_0x000107c453e4();
    func_0x000107c55138();
    func_0x000107c5616c(puVar10);
  }
  func_0x000107c5a344(puVar5);
  _objc_release(puVar10);
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    func_0x000107c54230(puVar5);
    _objc_release(param_5);
  }
  func_0x000107c5a0f8(puVar5);
  puVar10 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar6 = puVar10;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c56610(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar7);
      return puVar10;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0eac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0ea8);
  (*pcVar1)();
}



/* Entry: 103ee0eac; end: 103ee1037;  */

undefined * FUN_103ee0eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c553a0(puVar3);
  func_0x000107c545cc(puVar2);
  puVar5 = PTR_PTR_1126cf228;
  _objc_allocWithZone(PTR_PTR_1126cf228);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c57a94(puVar5);
  _objc_release(param_1);
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x000107c5273c(puVar5);
    _objc_release(param_3);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c57a90(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar8);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1038);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1034);
  (*pcVar1)();
}



/* Entry: 103ee1038; end: 103ee1f13;  */

undefined *
FUN_103ee1038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126bab58;
  _objc_allocWithZone(PTR_PTR_1126bab58);
  func_0x000107c453e4();
  func_0x000107c532b0(param_1);
  func_0x000107c5a0f8(puVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  func_0x000107c56050(puVar5);
  _objc_release(param_2);
  func_0x000107c563e0(puVar5);
  FUN_103edf9cc(param_4,&PTR_PTR_1126bab60,0x11302c918);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = PTR___sypN_11034f1a8;
  uVar7 = param_4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_4,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(param_4);
  func_0x000107c45788(puVar6);
  _objc_release(uVar7);
  func_0x000107c551d8(puVar5);
  _objc_release(puVar6);
  FUN_103edf9cc(param_5,&PTR_PTR_1126bab68,0x11302c920);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar7 = param_5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_5,puVar8 + 8);
  _swift_bridgeObjectRelease(param_5);
  func_0x000107c45788(puVar6);
  _objc_release(uVar7);
  func_0x000107c53de0(puVar5);
  _objc_release(puVar6);
  puVar8 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar6 = puVar8;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee12b0);
    (*pcVar1)();
  }
  puVar9 = puVar6;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c5a668(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar9);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee12b4);
  (*pcVar1)();
}



/* Entry: 103ee1f14; end: 103ee20ab;  */

undefined *
FUN_103ee1f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126ba900;
  _objc_allocWithZone(PTR_PTR_1126ba900);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c52994(puVar5);
  _objc_release(param_1);
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    func_0x000107c59130(puVar5);
    _objc_release(param_5);
  }
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x000107c59e18(puVar5);
    _objc_release(param_3);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c5298c();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar7);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee20ac);
  (*pcVar1)();
}



/* Entry: 103ee20ac; end: 103ee2383;  */

undefined * FUN_103ee20ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126ba9c8;
  _objc_allocWithZone(PTR_PTR_1126ba9c8);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c53f64(puVar5);
  _objc_release(param_1);
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x000107c59e18(puVar5);
    _objc_release(param_3);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c541a4(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar8);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2230);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee222c);
  (*pcVar1)();
}



/* Entry: 103ee2384; end: 103ee271b;  */

undefined *
FUN_103ee2384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar6 = PTR_PTR_1126b37c0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar7 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar8 = PTR_PTR_1126adae8;
  _objc_allocWithZone(PTR_PTR_1126adae8);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c59088(puVar8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  uVar14 = param_3;
  func_0x000107c57988(puVar8);
  _objc_release(param_3);
  uVar18 = *(ulong *)(param_5 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    uVar16 = 0;
    do {
      uVar2 = uVar16;
      if (uVar16 <= uVar18) {
        uVar2 = uVar18;
      }
      puVar17 = (undefined8 *)(param_5 + 0x28 + uVar16 * 0x10);
      uVar16 = uVar16 + 1;
      uVar13 = uVar14;
      while( true ) {
        if (uVar16 - uVar2 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ee2714);
          (*pcVar4)();
        }
        uVar1 = puVar17[-1];
        uVar3 = *puVar17;
        _swift_bridgeObjectRetain(uVar3);
        uVar14 = uVar3;
        FUN_103ee34e0(uVar1);
        if (((uint)uVar13 & 0xff) != 1) break;
        _swift_bridgeObjectRelease(uVar3);
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 2;
        if (uVar16 - uVar18 == 1) goto LAB_103ee25e4;
      }
      puVar9 = PTR_PTR_1126afad0;
      _objc_allocWithZone();
      func_0x000107c453e4();
      func_0x000107c55138();
      func_0x000107c5616c(puVar9);
      _swift_bridgeObjectRelease(uVar3);
      puVar11 = puVar12;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
         (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar12) {
            puVar10 = puVar12;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar10);
        }
        puVar11 = (undefined *)0x0;
        uVar14 = 1;
        func_0x0001016b0d54(0,puVar10 + 1,1,puVar12);
      }
      uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar15 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        uVar14 = 1;
        func_0x0001016b0d54(puVar12,uVar2 + 1,1,puVar11);
        uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar2 + 1;
      *(undefined **)(uVar15 + uVar2 * 8 + 0x20) = puVar9;
    } while (uVar16 != uVar18);
  }
LAB_103ee25e4:
  puVar9 = puVar12;
  FUN_103edf9cc(puVar12,&PTR_PTR_1126afad0,0x112dc0130);
  _swift_bridgeObjectRelease(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar11 = puVar9;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(puVar9);
  func_0x000107c45788(puVar12);
  _objc_release(puVar11);
  func_0x000107c577bc(puVar8);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar9 = puVar12;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103ee2718);
    (*pcVar4)();
  }
  puVar11 = puVar9;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103ee271c);
    (*pcVar4)();
  }
  func_0x000107c5908c(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  return puVar12;
}



/* Entry: 103ee271c; end: 103ee286f;  */

undefined * FUN_103ee271c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126cf230;
  _objc_allocWithZone(PTR_PTR_1126cf230);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c57988(puVar5);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee286c);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c59410(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2870);
  (*pcVar1)();
}



/* Entry: 103ee2870; end: 103ee335f;  */

undefined *
FUN_103ee2870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar5 = puVar3;
  func_0x000107c545cc();
  uVar8 = (uint)puVar5;
  puVar5 = PTR_PTR_1126dc320;
  _objc_allocWithZone(PTR_PTR_1126dc320);
  func_0x000107c453e4();
  FUN_103ee34e0(param_1,param_2);
  if ((uVar8 & 0xff) == 1) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126afad0;
    _objc_allocWithZone(PTR_PTR_1126afad0);
    func_0x000107c453e4();
    func_0x000107c55138();
    func_0x000107c5616c(puVar9);
  }
  func_0x000107c5a344(puVar5);
  _objc_release(puVar9);
  func_0x000107c5a7c0(puVar5);
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x000107c5a398(puVar5);
    _objc_release(param_3);
  }
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    func_0x000107c52ae0(puVar5);
    _objc_release(param_5);
  }
  if (param_8 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7);
    func_0x000107c54230(puVar5);
    _objc_release(param_7);
  }
  puVar9 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar6 = puVar9;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c594cc(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar7);
      return puVar9;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2aac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2aa8);
  (*pcVar1)();
}



/* Entry: 103ee3360; end: 103ee337f;  */

void FUN_103ee3360(void)

{
  _objc_opt_self(&PTR_PTR_112962298);
  return;
}



/* Entry: 103ee3380; end: 103ee3413;  */

void FUN_103ee3380(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ee3414; end: 103ee342f;  */

void FUN_103ee3414(long param_1,long param_2)

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



/* Entry: 103ee3430; end: 103ee3497;  */

void FUN_103ee3430(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  func_0x000107c547dc(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ee3498; end: 103ee34df;  */

void FUN_103ee3498(long param_1,long param_2)

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



/* Entry: 103ee34e0; end: 103ee3893;  */

ulong FUN_103ee34e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar15 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_60 - extraout_x8;
  lVar15 = param_1;
  __sSS5countSivg(param_1,param_2);
  if (lVar15 < 1) {
    return 0;
  }
  __sSS10lowercasedSSyF(param_1,param_2);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(lVar12);
  _swift_bridgeObjectRelease(param_2);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar8 = 1;
  lVar15 = lVar12;
  (**(code **)(lVar13 + 0x30))(lVar12,1,lVar3);
  if ((int)lVar15 == 1) {
    func_0x0001018d3afc(lVar12);
    return 0;
  }
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  (**(code **)(lVar13 + 8))(lVar12,lVar3);
  uVar4 = 0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  uVar9 = 0x28;
  uVar5 = uVar4;
  _swift_allocObject();
  uStack_58 = 0x10;
  uStack_60 = 8;
  *(undefined8 *)(uVar5 + 0x18) = 0x10;
  *(undefined8 *)(uVar5 + 0x10) = 8;
  *(char *)(uVar5 + 0x20) = (char)lVar15;
  *(char *)(uVar5 + 0x21) = (char)((ulong)lVar15 >> 8);
  *(char *)(uVar5 + 0x22) = (char)((ulong)lVar15 >> 0x10);
  *(char *)(uVar5 + 0x23) = (char)((ulong)lVar15 >> 0x18);
  *(char *)(uVar5 + 0x24) = (char)((ulong)lVar15 >> 0x20);
  *(char *)(uVar5 + 0x25) = (char)((ulong)lVar15 >> 0x28);
  *(char *)(uVar5 + 0x26) = (char)((ulong)lVar15 >> 0x30);
  *(char *)(uVar5 + 0x27) = (char)((ulong)lVar15 >> 0x38);
  uVar6 = uVar5;
  func_0x0001004496cc();
  _swift_release(uVar5);
  uVar10 = 0x28;
  _swift_allocObject(uVar4,0x28,7);
  *(undefined8 *)(uVar4 + 0x18) = uStack_58;
  *(undefined8 *)(uVar4 + 0x10) = uStack_60;
  *(char *)(uVar4 + 0x20) = (char)uVar8;
  *(char *)(uVar4 + 0x21) = (char)((ulong)uVar8 >> 8);
  *(char *)(uVar4 + 0x22) = (char)((ulong)uVar8 >> 0x10);
  *(char *)(uVar4 + 0x23) = (char)((ulong)uVar8 >> 0x18);
  *(char *)(uVar4 + 0x24) = (char)((ulong)uVar8 >> 0x20);
  *(char *)(uVar4 + 0x25) = (char)((ulong)uVar8 >> 0x28);
  *(char *)(uVar4 + 0x26) = (char)((ulong)uVar8 >> 0x30);
  *(char *)(uVar4 + 0x27) = (char)((ulong)uVar8 >> 0x38);
  uVar5 = uVar4;
  func_0x0001004496cc();
  _swift_release();
  uVar1 = (uint)((ulong)uVar9 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar16 = uVar6;
    if (uVar11 != 0) {
      lVar15 = (long)(int)uVar6;
      if ((long)uVar6 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3850);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3888);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3860);
        (*pcVar2)();
      }
      puVar14 = (ulong *)((lVar15 - uVar7) + uVar4);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3720);
        (*pcVar2)();
      }
LAB_103ee375c:
      uVar16 = *puVar14;
      uVar4 = uVar7;
    }
  }
  else {
    if (uVar11 == 2) {
      lVar15 = *(long *)(uVar6 + 0x10);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
LAB_103ee386c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3870);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3854);
        (*pcVar2)();
      }
      puVar14 = (ulong *)((lVar15 - uVar7) + uVar4);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (puVar14 == (ulong *)0x0) goto LAB_103ee386c;
      goto LAB_103ee375c;
    }
    uVar16 = 0;
  }
  uVar1 = (uint)((ulong)uVar10 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 != 0) {
      lVar15 = (long)(int)uVar5;
      if ((long)uVar5 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3858);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3894);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3864);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((lVar15 - uVar7) + uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee37bc);
        (*pcVar2)();
      }
    }
  }
  else if (uVar11 == 2) {
    lVar15 = *(long *)(uVar5 + 0x10);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (uVar4 == 0) {
      __s10Foundation13__DataStorageC7_lengthSivg();
    }
    else {
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee385c);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((lVar15 - uVar7) + uVar4 != 0) goto LAB_103ee3804;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee387c);
    (*pcVar2)();
  }
LAB_103ee3804:
  uVar4 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  func_0x00010006c090(uVar5,uVar10);
  func_0x00010006c090(uVar6,uVar9);
  return uVar4 >> 0x20 | uVar4 << 0x20;
}



/* Entry: 103ee3894; end: 103ee3b43;  */

undefined1  [16] FUN_103ee3894(ulong param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  code *pcVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong auStack_110 [6];
  undefined8 uStack_e0;
  long alStack_d8 [2];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulong *puStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  __s10Foundation4UUIDVMa();
  lVar21 = plVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar22 = (long *)((long)alStack_d8 + lVar20 + 8);
  uVar17 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar17 >> 0x20 | uVar17 << 0x20;
  uVar17 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar17 >> 0x20 | uVar17 << 0x20;
  puVar12 = &uStack_70;
  plVar15 = &lStack_68;
  func_0x000100e36f4c();
  puVar13 = &uStack_78;
  puVar16 = &uStack_70;
  func_0x000100e36f4c();
  func_0x00010006c00c(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  puVar14 = puVar12;
  func_0x0001018e4e30(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  func_0x00010006c00c(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  func_0x0001018e4e30(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  puStack_80 = puVar14;
  FUN_103ee3b44();
  uVar17 = puStack_80[2];
  if (uVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b04);
    (*pcVar10)();
  }
  if (uVar17 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b08);
    (*pcVar10)();
  }
  if (uVar17 < 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b0c);
    (*pcVar10)();
  }
  if (uVar17 == 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b10);
    (*pcVar10)();
  }
  if (uVar17 < 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b14);
    (*pcVar10)();
  }
  if (uVar17 == 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b18);
    (*pcVar10)();
  }
  if (uVar17 < 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b1c);
    (*pcVar10)();
  }
  if (uVar17 == 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b20);
    (*pcVar10)();
  }
  if (uVar17 < 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b24);
    (*pcVar10)();
  }
  if (uVar17 == 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b28);
    (*pcVar10)();
  }
  if (uVar17 < 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b2c);
    (*pcVar10)();
  }
  if (uVar17 == 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b30);
    (*pcVar10)();
  }
  if (uVar17 < 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b34);
    (*pcVar10)();
  }
  if (uVar17 == 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b38);
    (*pcVar10)();
  }
  if (uVar17 < 0xf) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b3c);
    (*pcVar10)();
  }
  if (uVar17 != 0xf) {
    uStack_b8 = (uint)*(byte *)((long)puStack_80 + 0x21);
    uStack_b4 = (uint)(byte)puStack_80[4];
    uStack_c0 = (uint)*(byte *)((long)puStack_80 + 0x23);
    uStack_bc = (uint)*(byte *)((long)puStack_80 + 0x22);
    uStack_c8 = (uint)*(byte *)((long)puStack_80 + 0x25);
    uStack_c4 = (uint)*(byte *)((long)puStack_80 + 0x24);
    bVar2 = *(byte *)((long)puStack_80 + 0x26);
    bVar3 = *(byte *)((long)puStack_80 + 0x27);
    uVar17 = puStack_80[5];
    bVar4 = *(byte *)((long)puStack_80 + 0x29);
    bVar5 = *(byte *)((long)puStack_80 + 0x2a);
    uVar6 = *(undefined1 *)((long)puStack_80 + 0x2b);
    uVar7 = *(undefined1 *)((long)puStack_80 + 0x2c);
    uVar8 = *(undefined1 *)((long)puStack_80 + 0x2d);
    uVar9 = *(undefined2 *)((long)puStack_80 + 0x2e);
    puStack_b0 = puVar12;
    plStack_a8 = plVar15;
    puStack_a0 = puVar16;
    plStack_98 = plVar11;
    puStack_90 = puVar13;
    lStack_88 = lVar21;
    _swift_bridgeObjectRelease();
    *(undefined2 *)((long)&uStack_e0 + lVar20 + 6) = uVar9;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 5) = uVar8;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 4) = uVar7;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 3) = uVar6;
    *(byte *)((long)&uStack_e0 + lVar20 + 2) = bVar5;
    *(byte *)((long)&uStack_e0 + lVar20 + 1) = bVar4;
    *(char *)((long)&uStack_e0 + lVar20) = (char)uVar17;
    uVar17 = (ulong)uStack_b8;
    uVar18 = (ulong)uStack_b4;
    __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
              (plVar22,uVar18,uVar17,uStack_bc,uStack_c0,uStack_c4,uStack_c8,(ulong)bVar2,
               (ulong)bVar3);
    __s10Foundation4UUIDV10uuidStringSSvg();
    func_0x00010006c090(puStack_b0,(ulong)plStack_a8 & 0xffffffffffffff);
    func_0x00010006c090(puStack_90,(ulong)puStack_a0 & 0xffffffffffffff);
    plVar11 = plVar22;
    plVar15 = plStack_98;
    (**(code **)(lStack_88 + 8))(plVar22,plStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      auVar24._8_8_ = uVar17;
      auVar24._0_8_ = uVar18;
      return auVar24;
    }
    ___stack_chk_fail();
    *(ulong *)((long)auStack_110 + lVar20) = (ulong)bVar3;
    *(ulong *)((long)auStack_110 + lVar20 + 8) = (ulong)bVar2;
    *(ulong *)((long)auStack_110 + lVar20 + 0x10) = (ulong)bVar5;
    *(ulong *)((long)auStack_110 + lVar20 + 0x18) = (ulong)bVar4;
    *(long **)((long)auStack_110 + lVar20 + 0x20) = plVar22;
    *(ulong *)((long)auStack_110 + lVar20 + 0x28) = uVar18;
    *(undefined1 **)((long)&uStack_e0 + lVar20) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_d8 + lVar20) = FUN_103ee3b44;
    uVar17 = plVar11[2];
    lVar20 = *plVar22;
    plVar23 = *(long **)(lVar20 + 0x10);
    plVar1 = (long *)((long)plVar23 + uVar17);
    if (!SCARRY8((long)plVar23,uVar17)) {
      lVar21 = lVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar21 == 0) ||
         (uVar18 = *(ulong *)(lVar20 + 0x18) >> 1, (long)uVar18 < (long)plVar1)) {
        plVar15 = plVar23;
        if ((long)plVar23 <= (long)plVar1) {
          plVar15 = plVar1;
        }
        func_0x0001014d97ac();
        uVar18 = *(ulong *)(lVar21 + 0x18) >> 1;
        lVar19 = plVar11[2];
        lVar20 = lVar21;
      }
      else {
        lVar19 = plVar11[2];
      }
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
          (*pcVar10)();
        }
      }
      else {
        if (uVar18 - *(long *)(lVar20 + 0x10) < uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
          (*pcVar10)();
        }
        plVar15 = plVar11 + 4;
        _memcpy(lVar20 + *(long *)(lVar20 + 0x10) + 0x20,plVar15,uVar17);
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
          if (SCARRY8(*(long *)(lVar20 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
            (*pcVar10)();
          }
          *(ulong *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + uVar17;
        }
      }
      *plVar22 = lVar20;
      auVar25._8_8_ = plVar15;
      auVar25._0_8_ = plVar11;
      return auVar25;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar10)();
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b40);
  (*pcVar10)();
}



/* Entry: 103ee3b44; end: 103ee3c33;  */

void FUN_103ee3b44(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    func_0x0001014d97ac();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
      (*pcVar1)();
    }
    _memcpy(lVar4 + *(long *)(lVar4 + 0x10) + 0x20,param_1 + 0x20,uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103ee3c34; end: 103ee3ce7;  */

undefined8 FUN_103ee3c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  uVar1 = param_2;
  uVar2 = param_3;
  FUN_103ee34e0();
  _swift_bridgeObjectRelease(param_2);
  if (((uint)uVar2 & 0xff) == 1) {
    unaff_x20 = 0;
  }
  else {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    func_0x000107c453e4();
    (**(code **)(param_4 + 0x20))(param_1,param_3,param_4);
    (**(code **)(param_4 + 0x38))(uVar1,param_3,param_4);
  }
  return unaff_x20;
}



/* Entry: 103ee3ce8; end: 103ee3d33;  */

undefined1  [16] FUN_103ee3ce8(ulong param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  code *pcVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong auStack_110 [6];
  undefined8 uStack_e0;
  long alStack_d8 [2];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulong *puStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  uVar17 = param_1;
  (**(code **)(param_2 + 0x18))();
  (**(code **)(param_2 + 0x30))(param_1,param_2);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  __s10Foundation4UUIDVMa();
  lVar21 = plVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar22 = (long *)((long)alStack_d8 + lVar20 + 8);
  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar17 >> 0x20 | uVar17 << 0x20;
  uVar17 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar17 >> 0x20 | uVar17 << 0x20;
  puVar12 = &uStack_70;
  plVar15 = &lStack_68;
  func_0x000100e36f4c();
  puVar13 = &uStack_78;
  puVar16 = &uStack_70;
  func_0x000100e36f4c();
  func_0x00010006c00c(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  puVar14 = puVar12;
  func_0x0001018e4e30(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  func_0x00010006c00c(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  func_0x0001018e4e30(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  puStack_80 = puVar14;
  FUN_103ee3b44();
  uVar17 = puStack_80[2];
  if (uVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b04);
    (*pcVar10)();
  }
  if (uVar17 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b08);
    (*pcVar10)();
  }
  if (uVar17 < 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b0c);
    (*pcVar10)();
  }
  if (uVar17 == 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b10);
    (*pcVar10)();
  }
  if (uVar17 < 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b14);
    (*pcVar10)();
  }
  if (uVar17 == 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b18);
    (*pcVar10)();
  }
  if (uVar17 < 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b1c);
    (*pcVar10)();
  }
  if (uVar17 == 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b20);
    (*pcVar10)();
  }
  if (uVar17 < 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b24);
    (*pcVar10)();
  }
  if (uVar17 == 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b28);
    (*pcVar10)();
  }
  if (uVar17 < 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b2c);
    (*pcVar10)();
  }
  if (uVar17 == 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b30);
    (*pcVar10)();
  }
  if (uVar17 < 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b34);
    (*pcVar10)();
  }
  if (uVar17 == 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b38);
    (*pcVar10)();
  }
  if (uVar17 < 0xf) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b3c);
    (*pcVar10)();
  }
  if (uVar17 != 0xf) {
    uStack_b8 = (uint)*(byte *)((long)puStack_80 + 0x21);
    uStack_b4 = (uint)(byte)puStack_80[4];
    uStack_c0 = (uint)*(byte *)((long)puStack_80 + 0x23);
    uStack_bc = (uint)*(byte *)((long)puStack_80 + 0x22);
    uStack_c8 = (uint)*(byte *)((long)puStack_80 + 0x25);
    uStack_c4 = (uint)*(byte *)((long)puStack_80 + 0x24);
    bVar2 = *(byte *)((long)puStack_80 + 0x26);
    bVar3 = *(byte *)((long)puStack_80 + 0x27);
    uVar17 = puStack_80[5];
    bVar4 = *(byte *)((long)puStack_80 + 0x29);
    bVar5 = *(byte *)((long)puStack_80 + 0x2a);
    uVar6 = *(undefined1 *)((long)puStack_80 + 0x2b);
    uVar7 = *(undefined1 *)((long)puStack_80 + 0x2c);
    uVar8 = *(undefined1 *)((long)puStack_80 + 0x2d);
    uVar9 = *(undefined2 *)((long)puStack_80 + 0x2e);
    puStack_b0 = puVar12;
    plStack_a8 = plVar15;
    puStack_a0 = puVar16;
    plStack_98 = plVar11;
    puStack_90 = puVar13;
    lStack_88 = lVar21;
    _swift_bridgeObjectRelease();
    *(undefined2 *)((long)&uStack_e0 + lVar20 + 6) = uVar9;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 5) = uVar8;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 4) = uVar7;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 3) = uVar6;
    *(byte *)((long)&uStack_e0 + lVar20 + 2) = bVar5;
    *(byte *)((long)&uStack_e0 + lVar20 + 1) = bVar4;
    *(char *)((long)&uStack_e0 + lVar20) = (char)uVar17;
    uVar17 = (ulong)uStack_b8;
    uVar18 = (ulong)uStack_b4;
    __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
              (plVar22,uVar18,uVar17,uStack_bc,uStack_c0,uStack_c4,uStack_c8,(ulong)bVar2,
               (ulong)bVar3);
    __s10Foundation4UUIDV10uuidStringSSvg();
    func_0x00010006c090(puStack_b0,(ulong)plStack_a8 & 0xffffffffffffff);
    func_0x00010006c090(puStack_90,(ulong)puStack_a0 & 0xffffffffffffff);
    plVar11 = plVar22;
    plVar15 = plStack_98;
    (**(code **)(lStack_88 + 8))(plVar22,plStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      auVar24._8_8_ = uVar17;
      auVar24._0_8_ = uVar18;
      return auVar24;
    }
    ___stack_chk_fail();
    *(ulong *)((long)auStack_110 + lVar20) = (ulong)bVar3;
    *(ulong *)((long)auStack_110 + lVar20 + 8) = (ulong)bVar2;
    *(ulong *)((long)auStack_110 + lVar20 + 0x10) = (ulong)bVar5;
    *(ulong *)((long)auStack_110 + lVar20 + 0x18) = (ulong)bVar4;
    *(long **)((long)auStack_110 + lVar20 + 0x20) = plVar22;
    *(ulong *)((long)auStack_110 + lVar20 + 0x28) = uVar18;
    *(undefined1 **)((long)&uStack_e0 + lVar20) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_d8 + lVar20) = FUN_103ee3b44;
    uVar17 = plVar11[2];
    lVar20 = *plVar22;
    plVar23 = *(long **)(lVar20 + 0x10);
    plVar1 = (long *)((long)plVar23 + uVar17);
    if (!SCARRY8((long)plVar23,uVar17)) {
      lVar21 = lVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar21 == 0) ||
         (uVar18 = *(ulong *)(lVar20 + 0x18) >> 1, (long)uVar18 < (long)plVar1)) {
        plVar15 = plVar23;
        if ((long)plVar23 <= (long)plVar1) {
          plVar15 = plVar1;
        }
        func_0x0001014d97ac();
        uVar18 = *(ulong *)(lVar21 + 0x18) >> 1;
        lVar19 = plVar11[2];
        lVar20 = lVar21;
      }
      else {
        lVar19 = plVar11[2];
      }
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
          (*pcVar10)();
        }
      }
      else {
        if (uVar18 - *(long *)(lVar20 + 0x10) < uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
          (*pcVar10)();
        }
        plVar15 = plVar11 + 4;
        _memcpy(lVar20 + *(long *)(lVar20 + 0x10) + 0x20,plVar15,uVar17);
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
          if (SCARRY8(*(long *)(lVar20 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
            (*pcVar10)();
          }
          *(ulong *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + uVar17;
        }
      }
      *plVar22 = lVar20;
      auVar25._8_8_ = plVar15;
      auVar25._0_8_ = plVar11;
      return auVar25;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar10)();
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b40);
  (*pcVar10)();
}



/* Entry: 103ee3d34; end: 103ee3d43; -[SCUserTaggingCarouselServices userTaggingCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee3d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c928));
  return;
}



/* Entry: 103ee3d44; end: 103ee3ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee3d44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c928) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee3ddc; end: 103ee3e3b; -[SCUserTaggingCarouselServices init] */

void FUN_103ee3ddc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUserTaggingCarouselServices.SCUserTaggingCarouselServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee3e08);
  (*pcVar1)();
}



/* Entry: 103ee3e3c; end: 103ee3e4b; -[SCUserTaggingCarouselServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee3e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c928));
  return;
}



/* Entry: 103ee3e4c; end: 103ee3e6b;  */

void FUN_103ee3e4c(void)

{
  _objc_opt_self(&PTR_PTR_112962348);
  return;
}



/* Entry: 103ee3e6c; end: 103ee4063;  */

long FUN_103ee3e6c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ee4064; end: 103ee4077;  */

bool FUN_103ee4064(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ee4078; end: 103ee414f;  */

void FUN_103ee4078(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ee4150; end: 103ee415f;  */

void FUN_103ee4150(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ee4160; end: 103ee419f;  */

void FUN_103ee4160(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7ea0;
  _swift_getWitnessTable(&UNK_10dca7ea0,&UNK_11071f3f8);
  puRam000000011302c958 = puVar1;
  return;
}



/* Entry: 103ee41a0; end: 103ee41af;  */

undefined1  [16] FUN_103ee41a0(void)

{
  return ZEXT816(0x11071f3f8);
}



/* Entry: 103ee41b0; end: 103ee41fb; -[SCPreviewFilterCarouselItem filterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee41b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302c960);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302c960))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee41fc; end: 103ee420b; -[SCPreviewFilterCarouselItem filterType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee41fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302c968);
}



/* Entry: 103ee420c; end: 103ee4267; -[SCPreviewFilterCarouselItem displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee420c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302c970))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302c970);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee4268; end: 103ee437f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee4268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c960);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302c968) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c970);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee4380; end: 103ee442f; -[SCPreviewFilterCarouselItem initWithFilterId:filterType:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee4380(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c960);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11302c968) = param_4;
  plVar2 = (long *)(param_1 + _DAT_11302c970);
  *plVar2 = param_5;
  plVar2[1] = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee4430; end: 103ee449f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee4430(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c960);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302c968) = param_1[2];
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c970);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee44a0; end: 103ee44a3; -[SCPreviewFilterCarouselItem copyWithZone:] */

void FUN_103ee44a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee44a4; end: 103ee44bf; -[SCPreviewFilterCarouselItem description] */

void FUN_103ee44a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee44c0; end: 103ee453b; -[SCPreviewFilterCarouselItem init] */

void FUN_103ee44c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPreviewFilterDefines/PreviewFilterCarouselItemWrapper.swift",0x3d,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee4508);
  (*pcVar1)();
}



/* Entry: 103ee453c; end: 103ee457b; -[SCPreviewFilterCarouselItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee453c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c960 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302c970 + 8))
  ;
  return;
}



/* Entry: 103ee457c; end: 103ee459b;  */

void FUN_103ee457c(void)

{
  _objc_opt_self(&PTR_PTR_112962408);
  return;
}



/* Entry: 103ee459c; end: 103ee45af;  */

bool FUN_103ee459c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ee45b0; end: 103ee48ab;  */

void FUN_103ee45b0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ee48ac; end: 103ee499f;  */

void FUN_103ee48ac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ee49a0; end: 103ee4a8b;  */

void FUN_103ee49a0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar3 = 0x800000010f1ccad0;
  uVar4 = 0xd00000000000001d;
  if (bVar5 != 4) {
    uVar3 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  if (bVar5 == 3) {
    uVar4 = 0xd000000000000014;
    uVar3 = 0x800000010f1ccaf0;
  }
  pcVar6 = "Move Save Icon Left Expanded";
  uVar7 = 0xd000000000000013;
  if (bVar5 != 1) {
    pcVar6 = "Move Save Icon Right";
    uVar7 = 0xd00000000000001c;
  }
  uVar1 = 0x6c6f72746e6f43;
  if (bVar5 != 0) {
    uVar1 = uVar7;
  }
  uVar2 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar2 = (ulong)pcVar6 | 0x8000000000000000;
  }
  if (bVar5 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 103ee4a8c; end: 103ee4a93;  */

void FUN_103ee4a8c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar3 = 0x800000010f1ccad0;
  uVar4 = 0xd00000000000001d;
  if (bVar5 != 4) {
    uVar3 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  if (bVar5 == 3) {
    uVar4 = 0xd000000000000014;
    uVar3 = 0x800000010f1ccaf0;
  }
  pcVar6 = "Move Save Icon Left Expanded";
  uVar7 = 0xd000000000000013;
  if (bVar5 != 1) {
    pcVar6 = "Move Save Icon Right";
    uVar7 = 0xd00000000000001c;
  }
  uVar1 = 0x6c6f72746e6f43;
  if (bVar5 != 0) {
    uVar1 = uVar7;
  }
  uVar2 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar2 = (ulong)pcVar6 | 0x8000000000000000;
  }
  if (bVar5 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ee4a94; end: 103ee4abf;  */

void FUN_103ee4a94(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103ee4ca4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103ee4ac0; end: 103ee4b8f;  */

void FUN_103ee4ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar3 = 0x800000010f1ccad0;
  uVar4 = 0xd00000000000001d;
  if (bVar5 != 4) {
    uVar3 = 0xeb00000000422f41;
    uVar4 = 0x2074636570736552;
  }
  if (bVar5 == 3) {
    uVar4 = 0xd000000000000014;
    uVar3 = 0x800000010f1ccaf0;
  }
  pcVar6 = "Move Save Icon Left Expanded";
  uVar7 = 0xd000000000000013;
  if (bVar5 != 1) {
    pcVar6 = "Move Save Icon Right";
    uVar7 = 0xd00000000000001c;
  }
  uVar1 = 0x6c6f72746e6f43;
  if (bVar5 != 0) {
    uVar1 = uVar7;
  }
  uVar2 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar2 = (ulong)pcVar6 | 0x8000000000000000;
  }
  if (bVar5 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103ee4b90; end: 103ee4ba7;  */

void FUN_103ee4b90(void)

{
  undefined1 *unaff_x20;
  
  func_0x000103ee48b8(*unaff_x20);
  return;
}



/* Entry: 103ee4ba8; end: 103ee4be7;  */

void FUN_103ee4ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11302c9d0;
  func_0x0001000285a8(0x11302c9d0,&UNK_10dca7f80);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ee4be8; end: 103ee4c23; +[SCCameraReplyCameraSaveExperienceExperiment saveExperienceModeWithCircumstanceEngine:] */

undefined8 FUN_103ee4be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  FUN_103ee4d08(param_3);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 103ee4c24; end: 103ee4c5f; -[SCCameraReplyCameraSaveExperienceExperiment init] */

void FUN_103ee4c24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103ee4e04();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee4c60; end: 103ee4c8f;  */

void FUN_103ee4c60(void)

{
  FUN_103ee4e04();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee4c90; end: 103ee4ca3; -[SCCameraReplyCameraSaveExperienceExperiment .cxx_destruct] */

void FUN_103ee4c90(void)

{
  return;
}



/* Entry: 103ee4ca4; end: 103ee4d07;  */

ulong FUN_103ee4ca4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 103ee4d08; end: 103ee4e03;  */

ulong FUN_103ee4d08(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x11302c9d8,auStack_48,0,0);
  if (bRam000000011302c9d8 < 3) {
    uVar2 = 1;
    if (bRam000000011302c9d8 != 1) {
      uVar2 = 2;
    }
    uVar3 = (ulong)bRam000000011302c9d8;
    if (bRam000000011302c9d8 != 0) {
      uVar3 = uVar2;
    }
  }
  else if (bRam000000011302c9d8 == 3) {
    uVar3 = 3;
  }
  else if (bRam000000011302c9d8 == 4) {
    uVar3 = 4;
  }
  else if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_1);
    uVar1 = 0xd000000000000027;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1ccb50);
    uVar2 = param_1;
    func_0x000107c4980c();
    _objc_release(uVar1);
    _swift_unknownObjectRelease(param_1);
    uVar3 = uVar2 & 0xffffffff;
    if (3 < (int)uVar2 - 1U) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 103ee4e04; end: 103ee4e23;  */

void FUN_103ee4e04(void)

{
  _objc_opt_self(&PTR_PTR_1129624e0);
  return;
}



/* Entry: 103ee4e24; end: 103ee4e27;  */

void FUN_103ee4e24(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7f90;
  _swift_getWitnessTable(&UNK_10dca7f90,&UNK_11071f510);
  puRam000000011302ca18 = puVar1;
  return;
}



/* Entry: 103ee4e28; end: 103ee4e67;  */

void FUN_103ee4e28(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7f90;
  _swift_getWitnessTable(&UNK_10dca7f90,&UNK_11071f510);
  puRam000000011302ca18 = puVar1;
  return;
}



/* Entry: 103ee4e68; end: 103ee4e6b;  */

void FUN_103ee4e68(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ca20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8030;
  _swift_getWitnessTable(&UNK_10dca8030,&UNK_11071f5c0);
  puRam000000011302ca20 = puVar1;
  return;
}



/* Entry: 103ee4e6c; end: 103ee4eab;  */

void FUN_103ee4e6c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ca20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8030;
  _swift_getWitnessTable(&UNK_10dca8030,&UNK_11071f5c0);
  puRam000000011302ca20 = puVar1;
  return;
}



/* Entry: 103ee4eac; end: 103ee4ed7;  */

void FUN_103ee4eac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103ee4ed8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103ee4f18();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103ee4ed8; end: 103ee4f57;  */

void FUN_103ee4ed8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ca28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca80f8;
  _swift_getWitnessTable(&UNK_10dca80f8,&UNK_11071f5c0);
  puRam000000011302ca28 = puVar1;
  return;
}



/* Entry: 103ee4f58; end: 103ee4f5b;  */

void FUN_103ee4f58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011302ca38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302ca40;
  func_0x00010002969c(0x11302ca40,&UNK_10dca80f0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011302ca38 = puVar2;
  return;
}



/* Entry: 103ee4f5c; end: 103ee4fab;  */

void FUN_103ee4f5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011302ca38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302ca40;
  func_0x00010002969c(0x11302ca40,&UNK_10dca80f0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011302ca38 = puVar2;
  return;
}



/* Entry: 103ee4fac; end: 103ee512f;  */

undefined1  [16] FUN_103ee4fac(void)

{
  return ZEXT816(0x11071f510);
}



/* Entry: 103ee5130; end: 103ee513f; -[_TtC23SCPublicStoriesServices23SCPublicStoriesServices publicStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302cb28));
  return;
}



/* Entry: 103ee5140; end: 103ee518b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5140(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cb28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee518c; end: 103ee51e3; -[_TtC23SCPublicStoriesServices23SCPublicStoriesServices initWithPublicStoriesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee518c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302cb28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103ee51e4; end: 103ee5243; -[_TtC23SCPublicStoriesServices23SCPublicStoriesServices init] */

void FUN_103ee51e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPublicStoriesServices.SCPublicStoriesServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee5210);
  (*pcVar1)();
}



/* Entry: 103ee5244; end: 103ee5253; -[_TtC23SCPublicStoriesServices23SCPublicStoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302cb28));
  return;
}



/* Entry: 103ee5254; end: 103ee5287; -[SendToStoryRankingConfigurationServices configurationService] */

void FUN_103ee5254(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ee5288();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ee5288; end: 103ee5337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103ee5288(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302cb60;
  pcVar2 = *(code **)(unaff_x20 + _DAT_11302cb60);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    uVar4 = 0x11302cb68;
    func_0x0001000285a8(0x11302cb68,&UNK_10dca8250);
    pcVar2 = FUN_103ee536c;
    func_0x0001000cb480(FUN_103ee536c,0,uVar4);
    pcVar3 = pcVar2;
    func_0x0001003a5b88();
    _swift_release(pcVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    _objc_retain(pcVar3);
    _objc_release(uVar4);
    pcVar2 = (code *)0x0;
  }
  _objc_retain(pcVar2);
  return pcVar3;
}



/* Entry: 103ee5338; end: 103ee536b; -[SendToStoryRankingConfigurationServices setConfigurationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302cb60);
  *(undefined8 *)(param_1 + _DAT_11302cb60) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103ee536c; end: 103ee5377;  */

void FUN_103ee536c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103ee5378; end: 103ee5427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5378(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cb60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302cb58) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee5428; end: 103ee5487; -[SendToStoryRankingConfigurationServices init] */

void FUN_103ee5428(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SendToStoryRankingConfigurationServices.SendToStoryRankingConfigurationServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee5454);
  (*pcVar1)();
}



/* Entry: 103ee5488; end: 103ee54bf; -[SendToStoryRankingConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee5488(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302cb58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302cb60));
  return;
}



/* Entry: 103ee54c0; end: 103ee56c3;  */

void FUN_103ee54c0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 103ee56c4; end: 103ee575b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee56c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cb98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee575c; end: 103ee57bb; -[SCSendToStoryRankingServices init] */

void FUN_103ee575c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SendToDynamicStoryRankingServices.SendToStoryRankingServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee5788);
  (*pcVar1)();
}



/* Entry: 103ee57bc; end: 103ee57cb; -[SCSendToStoryRankingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee57bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302cb98));
  return;
}



/* Entry: 103ee57cc; end: 103ee57d7; +[SCDiscoverFeedStorySnapMediaOriginHelpers mediaOriginsFromStorySnap:] */

void FUN_103ee57cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103ee5bc8();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSiN_11034deb0);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee57d8; end: 103ee582f; +[SCDiscoverFeedStorySnapMediaOriginHelpers isCapturedFromSnapchatCameraFromMediaOrigins:] */

uint FUN_103ee57d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103ee6480(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar1 = param_3;
  func_0x000103ee5e10();
  _swift_bridgeObjectRelease(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103ee5830; end: 103ee583b; +[SCDiscoverFeedStorySnapMediaOriginHelpers mediaOriginsFromSnapDoc:] */

void FUN_103ee5830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  (*(code *)0x103ee603c)();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSiN_11034deb0);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee583c; end: 103ee5893;  */

void FUN_103ee583c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  (*param_4)();
  _objc_release(param_3);
  uVar2 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSiN_11034deb0);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee5894; end: 103ee58cf; -[SCDiscoverFeedStorySnapMediaOriginHelpers init] */

void FUN_103ee5894(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103ee6460();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee58d0; end: 103ee58ff;  */

void FUN_103ee58d0(void)

{
  FUN_103ee6460();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee5900; end: 103ee5a0b;  */

undefined *
FUN_103ee5900(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee5a0c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d36020;
    func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 103ee5a0c; end: 103ee5bc7;  */

ulong FUN_103ee5a0c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee5af0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee5af4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103ee6480(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee5bc8);
  (*pcVar2)();
}



/* Entry: 103ee5bc8; end: 103ee645f;  */

undefined * FUN_103ee5bc8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = param_1;
  func_0x000107c4c9f4();
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    func_0x000107c4c9f0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103ee5e10);
      (*pcVar4)();
    }
    __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(lVar13);
    _objc_release(param_1);
    __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_80);
    puVar2 = PTR___sypN_11034f1a8;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar14 = PTR__swift_bridgeObjectRelease_11034f258;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x0001000bb420(auStack_a0,auStack_c0);
      uVar7 = 0;
      FUN_103ee6480(0,0x112d530c8,&PTR_PTR_1126affc8);
      puVar8 = &uStack_c8;
      _swift_dynamicCast(puVar8,auStack_c0,puVar2 + 8,uVar7,6);
      uVar3 = uStack_c8;
      if ((int)puVar8 == 0) {
        func_0x000100183ab8(auStack_a0);
      }
      else {
        uVar9 = uStack_c8;
        func_0x000107c4e088();
        if ((int)uVar9 - 1U < 7) {
          puVar10 = puVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar11 = puVar12;
          if (((ulong)puVar10 & 1) == 0) {
            puVar11 = (undefined *)0x0;
            FUN_103ee5900(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12,puVar14);
          }
          uVar1 = *(ulong *)(puVar11 + 0x10);
          lVar6 = uVar1 + 1;
          puVar12 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            lStack_d0 = lVar6;
            FUN_103ee5900(puVar12,lVar6,1,puVar11,PTR__swift_bridgeObjectRelease_11034f258);
            lVar6 = lStack_d0;
          }
          *(long *)(puVar12 + 0x10) = lVar6;
          *(ulong *)(puVar12 + uVar1 * 8 + 0x20) = uVar9 & 0xffffffff;
          _objc_release(uVar3);
          func_0x000100183ab8(auStack_a0);
          puVar14 = PTR__swift_bridgeObjectRelease_11034f258;
        }
        else {
          func_0x000100183ab8(auStack_a0);
          _objc_release(uVar3);
        }
      }
      __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_80);
    }
    (**(code **)(lVar15 + 8))(lVar13,lVar5);
  }
  return puVar12;
}


