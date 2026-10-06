/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042f6500; end: 1042f652f;  */

void FUN_1042f6500(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f6530(param_1);
  return;
}



/* Entry: 1042f6530; end: 1042f67df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042f6530(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_1042f67a8;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1042f67a0:
    _objc_release(param_1);
LAB_1042f67a8:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabbaacb1ab)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005445534e55,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c6b0) = 0;
    goto LAB_1042f6674;
  }
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabadbeabad)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005452415453,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c6b0) = 1;
    puVar5 = auStack_b0;
    goto LAB_1042f6674;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x13ffffffafb0abad)) {
    _swift_bridgeObjectRelease(0xec000000504f5453);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xec000000504f5453,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_1042f67a0;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c6b0) = 2;
  puVar5 = auStack_a0;
LAB_1042f6674:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 1042f67e0; end: 1042f6807; -[SCEffectEventType initWithCoder:] */

void FUN_1042f67e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f6530();
  return;
}



/* Entry: 1042f6808; end: 1042f6817; +[SCEffectEventType unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6808(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c6b0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f6818; end: 1042f6827; +[SCEffectEventType start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6818(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c6b0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f6828; end: 1042f6837; +[SCEffectEventType stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6828(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c6b0) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f6838; end: 1042f6863; -[SCEffectEventType matchUnset:start:stop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6838(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306c6b0) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306c6b0) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001042f6860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1042f6864; end: 1042f6867; -[SCEffectEventType .cxx_destruct] */

void FUN_1042f6864(void)

{
  return;
}



/* Entry: 1042f6868; end: 1042f68eb;  */

void FUN_1042f6868(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f68ec; end: 1042f690b;  */

void FUN_1042f68ec(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1042f690c; end: 1042f6953; -[SCEffectEventName init] */

void FUN_1042f690c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/EffectEventWrapper.swift",0x35,2,0xa6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f6954);
  (*pcVar1)();
}



/* Entry: 1042f6954; end: 1042f6963; +[SCEffectEventName place] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6954(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c6b8) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f6964; end: 1042f6973; +[SCEffectEventName weather] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6964(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c6b8) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f6974; end: 1042f69cb;  */

void FUN_1042f6974(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f69cc; end: 1042f69e7; -[SCEffectEventName matchPlace:weather:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f69cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11306c6b8) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001042f69e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1042f69e8; end: 1042f6a43; -[SCEffectEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f69e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306c6c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306c6c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042f6a44; end: 1042f6a53; -[SCEffectEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c6c8));
  return;
}



/* Entry: 1042f6a54; end: 1042f6a63; -[SCEffectEvent name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c6d0));
  return;
}



/* Entry: 1042f6a64; end: 1042f6ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c6c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c6c8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306c6d0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f6ae8; end: 1042f6b97; -[SCEffectEvent initWithPlaceId:type:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6ae8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306c6c0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306c6c8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306c6d0) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1042f6b98; end: 1042f6bdf;  */

void FUN_1042f6b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1042f6be0(param_1,param_2,param_3);
  return;
}



/* Entry: 1042f6be0; end: 1042f6cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6be0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long alStack_70 [2];
  long alStack_50 [2];
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c6c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = param_3;
  func_0x0001042f74d4();
  *(long *)(unaff_x20 + _DAT_11306c6c8) = lVar3;
  FUN_1042f7544();
  lVar4 = lVar3;
  _objc_allocWithZone();
  bVar2 = ((uint)param_3 & 0xff00) == 0x100;
  plVar5 = alStack_50;
  if (!bVar2) {
    plVar5 = alStack_70;
  }
  *(bool *)(lVar4 + _DAT_11306c6b8) = bVar2;
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  _swift_bridgeObjectRelease(param_2);
  *(long **)(unaff_x20 + _DAT_11306c6d0) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f6cc0; end: 1042f6cf3; -[SCEffectEvent hash] */

undefined8 FUN_1042f6cc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042f6cf4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042f6cf4; end: 1042f6da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6cf4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11306c6c0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c6c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11306c6c8));
  __ss6HasherV8_combineyySuF();
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11306c6d0));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042f6da4; end: 1042f6ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042f6da4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_11306c6c0))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306c6c0))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11306c6c0);
        if (lVar2 == *(long *)(lStack_68 + _DAT_11306c6c0) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar2;
        }
      }
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306c6c8);
      func_0x00010c071ae0(uVar3);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11306c6d0);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_11306c6d0);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar8);
      _objc_release(uVar4);
      _objc_release(lStack_68);
      uVar7 = uVar7 & (uint)uVar3 & (uint)uVar8;
      goto LAB_1042f6ec8;
    }
  }
  uVar7 = 0;
LAB_1042f6ec8:
  return uVar7 & 1;
}



/* Entry: 1042f6ee4; end: 1042f6f63; -[SCEffectEvent isEqual:] */

uint FUN_1042f6ee4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042f6da4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042f6f64; end: 1042f7057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6f64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306c6c0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c6c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1042f7058; end: 1042f70a7; -[SCEffectEvent encodeWithCoder:] */

void FUN_1042f7058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042f6f64(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042f70a8; end: 1042f70d7;  */

void FUN_1042f70a8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f70d8(param_1);
  return;
}



/* Entry: 1042f70d8; end: 1042f73b3;  */

undefined8 FUN_1042f70d8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  iVar2 = (int)&lStack_a0;
  uVar6 = 0;
  uVar8 = 0;
  uVar3 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar10 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    _swift_dynamicCast(&lStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_98;
    lVar10 = lStack_a0;
    if (iVar2 == 0) {
      lVar10 = 0;
      lVar9 = 0;
    }
  }
  lVar4 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
    lVar4 = lVar5;
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_1042f7304:
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar9);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x0001042f7564();
    _swift_dynamicCast(&lStack_a0,&uStack_70,puVar1 + 8,lVar4,6);
    lVar5 = lStack_a0;
    if ((uVar6 & 1) != 0) {
      lVar7 = 0x454d414e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
      lVar4 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (lVar4 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
        _swift_unknownObjectRelease(lVar4);
        lVar7 = lVar4;
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        _objc_release(param_1);
        param_1 = lVar5;
        goto LAB_1042f7304;
      }
      func_0x0001042f7544();
      _swift_dynamicCast(&lStack_a0,&uStack_70,puVar1 + 8,lVar7,6);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar10 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar10,lVar9);
          _swift_bridgeObjectRelease(lVar9);
        }
        func_0x00010c036660();
        _objc_release(lVar10);
        _objc_release(param_1);
        _objc_release(lStack_a0);
        _objc_release(lVar5);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar5;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar9);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042f73b4; end: 1042f73db; -[SCEffectEvent initWithCoder:] */

void FUN_1042f73b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f70d8();
  return;
}



/* Entry: 1042f73dc; end: 1042f7407; -[SCEffectEvent description] */

void FUN_1042f73dc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1042f7584();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f7408; end: 1042f744f; -[SCEffectEvent init] */

void FUN_1042f7408(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/EffectEventWrapper.swift",0x35,2,0x120,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f7450);
  (*pcVar1)();
}



/* Entry: 1042f7450; end: 1042f7453;  */

void FUN_1042f7450(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042f7454; end: 1042f7487;  */

void FUN_1042f7454(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042f7488; end: 1042f7543; -[SCEffectEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f7488(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c6c0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c6c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c6d0));
  return;
}



/* Entry: 1042f7544; end: 1042f7583;  */

void FUN_1042f7544(void)

{
  _objc_opt_self(&PTR_PTR_112996e60);
  return;
}



/* Entry: 1042f7584; end: 1042f762b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042f7584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306c6c0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c6d0);
  _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_11306c6c0))[1]);
  _objc_retain();
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1042f762c; end: 1042f764b;  */

void FUN_1042f762c(void)

{
  _objc_opt_self(&PTR_PTR_112996f20);
  return;
}



/* Entry: 1042f764c; end: 1042f78f7;  */

int FUN_1042f764c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042f76c8;
        goto LAB_1042f76ac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042f76ac:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1042f76c8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042f78f8; end: 1042f7937;  */

void FUN_1042f78f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7968;
  _swift_getWitnessTable(&UNK_10dce7968,&UNK_110756a18);
  puRam000000011306c750 = puVar1;
  return;
}



/* Entry: 1042f7938; end: 1042f793b;  */

void FUN_1042f7938(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7a08;
  _swift_getWitnessTable(&UNK_10dce7a08,&UNK_110756988);
  puRam000000011306c758 = puVar1;
  return;
}



/* Entry: 1042f793c; end: 1042f797b;  */

void FUN_1042f793c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7a08;
  _swift_getWitnessTable(&UNK_10dce7a08,&UNK_110756988);
  puRam000000011306c758 = puVar1;
  return;
}



/* Entry: 1042f797c; end: 1042f79a3;  */

void FUN_1042f797c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042f79a4; end: 1042f79a7; -[SCEffectEventType description] */

void FUN_1042f79a4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f79a8; end: 1042f79bb; -[SCEffectEventName description] */

void FUN_1042f79a8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f79bc; end: 1042f79bf; -[SCEffectEventType copyWithZone:] */

void FUN_1042f79bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f79c0; end: 1042f79c3; -[SCEffectEventName copyWithZone:] */

void FUN_1042f79c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f79c4; end: 1042f79cf; -[SCEffectEvent copyWithZone:] */

void FUN_1042f79c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f79d0; end: 1042f79e3; -[SCFlushEvent isFlush] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042f79d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306c760);
}



/* Entry: 1042f79e4; end: 1042f7a7b; -[SCFlushEvent initWithIsFlush:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f79e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306c760) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f7a7c; end: 1042f7ac3; -[SCFlushEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f7a7c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11306c760));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042f7ac4; end: 1042f7b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1042f7ac4(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar4 = *(byte *)(unaff_x20 + _DAT_11306c760);
      bVar1 = *(byte *)(lStack_58 + _DAT_11306c760);
      _objc_release();
      bVar4 = bVar4 ^ bVar1 ^ 1;
      goto LAB_1042f7b50;
    }
  }
  bVar4 = 0;
LAB_1042f7b50:
  return bVar4 & 1;
}



/* Entry: 1042f7b68; end: 1042f7be7; -[SCFlushEvent isEqual:] */

uint FUN_1042f7b68(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042f7ac4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042f7be8; end: 1042f7beb; -[SCFlushEvent copyWithZone:] */

void FUN_1042f7be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f7bec; end: 1042f7cf3; -[SCFlushEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f7bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x4853554c465f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4853554c465f5349,0xe800000000000000);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042f7cf4; end: 1042f7d73; -[SCFlushEvent initWithCoder:] */

undefined8 FUN_1042f7cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x4853554c465f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4853554c465f5349,0xe800000000000000);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c01efe0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1042f7d74; end: 1042f7d8f; -[SCFlushEvent description] */

void FUN_1042f7d74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f7d90; end: 1042f7e0b; -[SCFlushEvent init] */

void FUN_1042f7d90(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/FlushEventWrapper.swift",0x34,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f7dd8);
  (*pcVar1)();
}



/* Entry: 1042f7e0c; end: 1042f7e0f; -[SCFlushEvent .cxx_destruct] */

void FUN_1042f7e0c(void)

{
  return;
}



/* Entry: 1042f7e10; end: 1042f7e2f;  */

void FUN_1042f7e10(void)

{
  _objc_opt_self(&PTR_PTR_112997000);
  return;
}



/* Entry: 1042f7e30; end: 1042f7e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f7e30(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c760) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f7e34; end: 1042f7edf;  */

void FUN_1042f7e34(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f7ee0; end: 1042f7f17;  */

void FUN_1042f7ee0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1042f7f18; end: 1042f7f5f; -[SCExitEventTrigger init] */

void FUN_1042f7f18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/MapSessionExitEventWrapper.swift",0x3d,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f7f60);
  (*pcVar1)();
}



/* Entry: 1042f7f60; end: 1042f8043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f7f60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306c790) == '\0') {
    uVar1 = 0x5f45505954425553;
    uVar2 = 0xed00005445534e55;
  }
  else if (*(char *)(unaff_x20 + _DAT_11306c790) == '\x01') {
    uVar1 = 0xd000000000000018;
    uVar2 = 0x800000010f1f43a0;
  }
  else {
    uVar2 = 0x800000010f1f4380;
    uVar1 = 0xd000000000000012;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042f8044; end: 1042f8093; -[SCExitEventTrigger encodeWithCoder:] */

void FUN_1042f8044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042f7f60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042f8094; end: 1042f80c3;  */

void FUN_1042f8094(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f80c4(param_1);
  return;
}



/* Entry: 1042f80c4; end: 1042f837f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042f80c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_1042f8348;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1042f8340:
    _objc_release(param_1);
LAB_1042f8348:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar4 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabbaacb1ab)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f45505954425553,0xed00005445534e55,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c790) = 0;
    goto LAB_1042f8204;
  }
  uVar4 = 0;
  if (((lStack_90 == -0x2fffffffffffffe8) && (lStack_88 == -0x7ffffffef0e0bc60)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000018,0x800000010f1f43a0,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c790) = 1;
    puVar5 = auStack_b0;
    goto LAB_1042f8204;
  }
  if ((lStack_90 == -0x2fffffffffffffee) && (lStack_88 == -0x7ffffffef0e0bc80)) {
    _swift_bridgeObjectRelease(0x800000010f1f4380);
  }
  else {
    uVar4 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f1f4380,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar4 & 1) == 0) goto LAB_1042f8340;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c790) = 2;
  puVar5 = auStack_a0;
LAB_1042f8204:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 1042f8380; end: 1042f83a7; -[SCExitEventTrigger initWithCoder:] */

void FUN_1042f8380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f80c4();
  return;
}



/* Entry: 1042f83a8; end: 1042f83af; +[SCExitEventTrigger unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f83a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c790) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f83b0; end: 1042f83b7; +[SCExitEventTrigger appBackgrounded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f83b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c790) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f83b8; end: 1042f83bf; +[SCExitEventTrigger tabClosed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f83b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c790) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f83c0; end: 1042f840f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f83c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c790) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f8410; end: 1042f843f; -[SCExitEventTrigger matchUnset:appBackgrounded:tabClosed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8410(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306c790) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306c790) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001042f8438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1042f8440; end: 1042f8443; -[SCExitEventTrigger .cxx_destruct] */

void FUN_1042f8440(void)

{
  return;
}



/* Entry: 1042f8444; end: 1042f8453; -[SCMapSessionExitEvent trigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c798));
  return;
}



/* Entry: 1042f8454; end: 1042f849f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8454(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c798) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f84a0; end: 1042f84f7; -[SCMapSessionExitEvent initWithTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f84a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306c798) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1042f84f8; end: 1042f8557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f84f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  FUN_1042f8984();
  *(undefined8 *)(unaff_x20 + _DAT_11306c798) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f8558; end: 1042f85c3; -[SCMapSessionExitEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042f8558(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306c798);
  _objc_retain(param_1);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042f85c4; end: 1042f866b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042f85c4(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    puVar2 = &uStack_58;
    _swift_dynamicCast(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306c798);
      func_0x00010c071ae0(uVar3);
      _objc_release(uStack_58);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 1042f866c; end: 1042f86eb; -[SCMapSessionExitEvent isEqual:] */

uint FUN_1042f866c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042f85c4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042f86ec; end: 1042f8773; -[SCMapSessionExitEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f86ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x52454747495254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454747495254,0xe700000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1042f8774; end: 1042f87a3;  */

void FUN_1042f8774(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f87a4(param_1);
  return;
}



/* Entry: 1042f87a4; end: 1042f88cf;  */

undefined8 FUN_1042f87a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = 0x52454747495254;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52454747495254,0xe700000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
    lVar1 = lVar2;
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    FUN_1042f89f4();
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c055700();
      _objc_release(param_1);
      _objc_release(uStack_78);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042f88d0; end: 1042f88f7; -[SCMapSessionExitEvent initWithCoder:] */

void FUN_1042f88d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f87a4();
  return;
}



/* Entry: 1042f88f8; end: 1042f8973; -[SCMapSessionExitEvent init] */

void FUN_1042f88f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/MapSessionExitEventWrapper.swift",0x3d,2,0xba,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f8940);
  (*pcVar1)();
}



/* Entry: 1042f8974; end: 1042f8983; -[SCMapSessionExitEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c798));
  return;
}



/* Entry: 1042f8984; end: 1042f89f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8984(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  FUN_1042f89f4();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11306c790) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f89f4; end: 1042f8a33;  */

void FUN_1042f89f4(void)

{
  _objc_opt_self(&PTR_PTR_1129970d0);
  return;
}



/* Entry: 1042f8a34; end: 1042f8b9b;  */

int FUN_1042f8a34(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042f8ab0;
        goto LAB_1042f8a94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042f8a94:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1042f8ab0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042f8b9c; end: 1042f8bdb;  */

void FUN_1042f8b9c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7b18;
  _swift_getWitnessTable(&UNK_10dce7b18,&UNK_110756b00);
  puRam000000011306c7f0 = puVar1;
  return;
}



/* Entry: 1042f8bdc; end: 1042f8bdf; -[SCMapSessionExitEvent description] */

void FUN_1042f8bdc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f8be0; end: 1042f8be3; -[SCExitEventTrigger description] */

void FUN_1042f8be0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f8be4; end: 1042f8be7; -[SCMapSessionExitEvent copyWithZone:] */

void FUN_1042f8be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f8be8; end: 1042f8bef; -[SCExitEventTrigger copyWithZone:] */

void FUN_1042f8be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f8bf0; end: 1042f8cc3;  */

void FUN_1042f8bf0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f8cc4; end: 1042f8ce3;  */

void FUN_1042f8cc4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042f8ce4; end: 1042f8cff; -[SCInvisibleReason description] */

void FUN_1042f8ce4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


