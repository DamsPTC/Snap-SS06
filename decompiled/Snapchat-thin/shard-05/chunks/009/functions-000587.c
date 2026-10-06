/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042f8d00; end: 1042f8d47; -[SCInvisibleReason init] */

void FUN_1042f8d00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PinVisibilityEventWrapper.swift",0x3c,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f8d48);
  (*pcVar1)();
}



/* Entry: 1042f8d48; end: 1042f8d8f; -[SCInvisibleReason hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8d48(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11306c7f8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042f8d90; end: 1042f8e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042f8d90(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_1042fa66c(auStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11306c7f8);
      cVar2 = *(char *)(lStack_58 + _DAT_11306c7f8);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1042f8e40; end: 1042f8e4b; -[SCInvisibleReason isEqual:] */

uint FUN_1042f8e40(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042f8d90(&uStack_50);
  _objc_release(param_1);
  FUN_1042fa66c(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042f8e4c; end: 1042f8fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f8e4c(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306c7f8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      uVar2 = 0x5f45505954425553;
      uVar4 = 0xed00005445534e55;
      goto LAB_1042f8f58;
    }
    if (bVar1 != 1) {
      pcVar5 = "SUBTYPE_OCCLUDED";
      goto LAB_1042f8f08;
    }
    pcVar5 = "SUBTYPE_OCCLUDED";
    uVar2 = 0xd000000000000017;
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      pcVar5 = "SUBTYPE_NOT_IN_FEATURE_SET";
      uVar2 = 0xd000000000000014;
    }
    else {
      pcVar5 = "SUBTYPE_COLLIDED";
      uVar2 = 0xd00000000000001a;
    }
  }
  else {
    if (bVar1 == 5) {
      pcVar5 = "SUBTYPE_COLLIDED";
LAB_1042f8f08:
      uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      uVar2 = 0xd000000000000010;
      goto LAB_1042f8f58;
    }
    pcVar5 = "VisibilityEventWrapper.swift";
    uVar2 = 0xd000000000000018;
  }
  uVar4 = (ulong)pcVar5 | 0x8000000000000000;
LAB_1042f8f58:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1042f8fb4; end: 1042f9003; -[SCInvisibleReason encodeWithCoder:] */

void FUN_1042f8fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042f8e4c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042f9004; end: 1042f9033;  */

void FUN_1042f9004(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f9034(param_1);
  return;
}



/* Entry: 1042f9034; end: 1042f94b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042f9034(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
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
  
  puVar5 = auStack_110;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    FUN_1042fa66c(&uStack_70,0x112d387f8,&UNK_10d902650);
    goto LAB_1042f9480;
  }
  plVar3 = &lStack_a0;
  _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1042f9478:
    _objc_release(param_1);
LAB_1042f9480:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar4 = 0x5f45505954425553;
  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x12ffffabbaacb1ab)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f45505954425553,0xed00005445534e55,lStack_a0,lStack_98,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 0;
    goto LAB_1042f9174;
  }
  if ((lStack_a0 != -0x2fffffffffffffe9) || (lStack_98 != -0x7ffffffef0e0bb60)) {
    uVar4 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f1f44a0,lStack_a0,lStack_98,0);
    if ((uVar4 & 1) == 0) {
      if ((lStack_a0 != -0x2ffffffffffffff0) || (lStack_98 != -0x7ffffffef0e0bb80)) {
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000010,0x800000010f1f4480,lStack_a0,lStack_98,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
          if (((lStack_a0 == -0x2fffffffffffffec) && (lStack_98 == -0x7ffffffef0e0bba0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000014,0x800000010f1f4460,lStack_a0,lStack_98,0),
             (uVar4 & 1) != 0)) {
            _swift_bridgeObjectRelease(lStack_98);
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 3;
            puVar5 = auStack_e0;
            goto LAB_1042f9174;
          }
          uVar4 = 0;
          if (((lStack_a0 == -0x2fffffffffffffe6) && (lStack_98 == -0x7ffffffef0e0bbc0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001a,0x800000010f1f4440,lStack_a0,lStack_98,0),
             (uVar4 & 1) != 0)) {
            _swift_bridgeObjectRelease(lStack_98);
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 4;
            puVar5 = auStack_d0;
            goto LAB_1042f9174;
          }
          if ((lStack_a0 != -0x2ffffffffffffff0) || (lStack_98 != -0x7ffffffef0e0bbe0)) {
            uVar4 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000010,0x800000010f1f4420,lStack_a0,lStack_98,0);
            if ((uVar4 & 1) == 0) {
              uVar4 = 0;
              if ((lStack_a0 == -0x2fffffffffffffe8) && (lStack_98 == -0x7ffffffef0e0bc00)) {
                _swift_bridgeObjectRelease(0x800000010f1f4400);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000018,0x800000010f1f4400,lStack_a0,lStack_98,0);
                _swift_bridgeObjectRelease(lStack_98);
                if ((uVar4 & 1) == 0) goto LAB_1042f9478;
              }
              _objc_allocWithZone();
              *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 6;
              puVar5 = auStack_b0;
              goto LAB_1042f9174;
            }
          }
          _swift_bridgeObjectRelease(lStack_98);
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 5;
          puVar5 = auStack_c0;
          goto LAB_1042f9174;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 2;
      puVar5 = auStack_f0;
      goto LAB_1042f9174;
    }
  }
  _swift_bridgeObjectRelease(lStack_98);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c7f8) = 1;
  puVar5 = auStack_100;
LAB_1042f9174:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 1042f94b8; end: 1042f94df; -[SCInvisibleReason initWithCoder:] */

void FUN_1042f94b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f9034();
  return;
}



/* Entry: 1042f94e0; end: 1042f94e7; +[SCInvisibleReason unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f94e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f94e8; end: 1042f94ef; +[SCInvisibleReason outOfViewport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f94e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f94f0; end: 1042f94f7; +[SCInvisibleReason occluded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f94f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f94f8; end: 1042f94ff; +[SCInvisibleReason hiddenByUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f94f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f9500; end: 1042f9507; +[SCInvisibleReason notInFeatureSet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9500(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f9508; end: 1042f950f; +[SCInvisibleReason collided] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9508(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f9510; end: 1042f9517; +[SCInvisibleReason viewportLimited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9510(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f9518; end: 1042f9567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9518(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c7f8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f9568; end: 1042f95cf; -[SCInvisibleReason matchUnset:outOfViewport:occluded:hiddenByUI:notInFeatureSet:collided:viewportLimited:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9568(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11306c7f8);
  if (bVar1 < 3) {
    if ((bVar1 != 0) && (param_3 = param_4, bVar1 != 1)) {
      param_3 = param_5;
    }
  }
  else if (bVar1 < 5) {
    param_3 = param_6;
    if (bVar1 != 3) {
      param_3 = param_7;
    }
  }
  else {
    param_3 = param_8;
    if (bVar1 != 5) {
      param_3 = param_9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001042f95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1042f95d0; end: 1042f95d3; -[SCInvisibleReason .cxx_destruct] */

void FUN_1042f95d0(void)

{
  return;
}



/* Entry: 1042f95d4; end: 1042f961f; -[SCPinVisibilityEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f95d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c800);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c800))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042f9620; end: 1042f962f; -[SCPinVisibilityEvent visible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042f9620(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306c808);
}



/* Entry: 1042f9630; end: 1042f963f; -[SCPinVisibilityEvent invisibleReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c810));
  return;
}



/* Entry: 1042f9640; end: 1042f9687; -[SCPinVisibilityEvent occlusionLayerGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9640(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c818);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042f9688; end: 1042f9697; -[SCPinVisibilityEvent zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042f9688(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c820);
}



/* Entry: 1042f9698; end: 1042f9743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9698(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306c808) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306c810) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306c818) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306c820) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f9744; end: 1042f981b; -[SCPinVisibilityEvent initWithPlaceId:visible:invisibleReason:occlusionLayerGroups:zoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9744(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_6,PTR___sSSN_11034da80);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c800);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11306c808) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306c810) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306c818) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306c820) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1042f981c; end: 1042f98d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f981c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  ulong uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c800);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined1 *)(unaff_x20 + _DAT_11306c808) = *(undefined1 *)(param_1 + 2);
  uVar2 = (ulong)*(byte *)((long)param_1 + 0x11);
  func_0x000100402194(&uStack_40,auStack_50);
  FUN_1042fa364();
  *(ulong *)(unaff_x20 + _DAT_11306c810) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c818) = param_1[3];
  func_0x000100bcb1dc(&uStack_40);
  *(undefined8 *)(unaff_x20 + _DAT_11306c820) = param_1[4];
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f98d8; end: 1042f990b; -[SCPinVisibilityEvent hash] */

undefined8 FUN_1042f98d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042f990c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042f990c; end: 1042f9a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f990c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c800);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c800))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306c808));
  lVar3 = *(long *)(unaff_x20 + _DAT_11306c810);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(lVar3 + _DAT_11306c7f8));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306c818);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306c820));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042f9a14; end: 1042f9b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042f9a14(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    FUN_1042fa66c(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11306c800);
      if (lVar5 == *(long *)(lStack_78 + _DAT_11306c800) &&
          ((long *)(unaff_x20 + _DAT_11306c800))[1] == ((long *)(lStack_78 + _DAT_11306c800))[1]) {
        uVar7 = 0;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar7 = (uint)lVar5 ^ 1;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306c808);
      bVar2 = *(byte *)(lStack_78 + _DAT_11306c808);
      uVar6 = *(undefined8 *)(lStack_78 + _DAT_11306c810);
      FUN_1042fa404();
      auStack_70[0] = uVar6;
      lStack_58 = lVar5;
      _objc_retain(uVar6);
      uVar4 = 0;
      FUN_1042f8d90();
      FUN_1042fa66c(auStack_70,0x112d387f8,&UNK_10d902650);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306c818);
      func_0x00010142cfc4(uVar6,*(undefined8 *)(lStack_78 + _DAT_11306c818));
      lVar5 = *(long *)(unaff_x20 + _DAT_11306c820);
      lVar8 = *(long *)(lStack_78 + _DAT_11306c820);
      _objc_release(lStack_78);
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      if (((bVar1 ^ bVar2) & 1) != 0) {
        return 0;
      }
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      return (uint)uVar6 & (uint)(lVar5 == lVar8);
    }
  }
  return 0;
}



/* Entry: 1042f9b9c; end: 1042f9ba7; -[SCPinVisibilityEvent isEqual:] */

uint FUN_1042f9b9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042f9a14(&uStack_50);
  _objc_release(param_1);
  FUN_1042fa66c(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042f9ba8; end: 1042f9c43;  */

uint FUN_1042f9ba8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  FUN_1042fa66c(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042f9c44; end: 1042f9de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f9c44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306c800);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306c800))[1]);
  uVar1 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x454c4249534956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c4249534956,0xe700000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar2);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f44c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306c818);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f44e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x56454c5f4d4f4f5a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x56454c5f4d4f4f5a,0xea00000000004c45);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042f9de8; end: 1042f9e37; -[SCPinVisibilityEvent encodeWithCoder:] */

void FUN_1042f9de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042f9c44(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042f9e38; end: 1042f9e67;  */

void FUN_1042f9e38(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042f9e68(param_1);
  return;
}



/* Entry: 1042f9e68; end: 1042fa207;  */

undefined8 FUN_1042f9e68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&lStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_b0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1042fa1ac;
    }
    uVar2 = 0x454c4249534956;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c4249534956,0xe700000000000000);
    func_0x00010bf66ce0(param_1);
    _objc_release(uVar2);
    lVar5 = -0x2ffffffffffffff0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f44c0);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
      _swift_unknownObjectRelease(lVar6);
      lVar5 = lVar6;
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      FUN_1042fa404();
      _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,lVar5,6);
      lVar6 = lStack_b0;
      if ((uVar7 & 1) != 0) {
        uVar2 = 0xd000000000000016;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f44e0)
        ;
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (lVar5 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
          param_1 = lVar6;
          goto LAB_1042fa188;
        }
        uVar2 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar2,6);
        if ((uVar8 & 1) != 0) {
          uVar2 = 0x56454c5f4d4f4f5a;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x56454c5f4d4f4f5a,0xea00000000004c45);
          func_0x00010bf66f40(param_1);
          _objc_release(uVar2);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,uStack_a8);
          _swift_bridgeObjectRelease(uStack_a8);
          lVar5 = lStack_b0;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_b0,PTR___sSSN_11034da80);
          _swift_bridgeObjectRelease(lStack_b0);
          func_0x00010c036680();
          _objc_release(lVar3);
          _objc_release(lVar5);
          _objc_release(param_1);
          _objc_release(lVar6);
          return unaff_x20;
        }
        _objc_release(param_1);
        param_1 = lVar6;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_a8);
      goto LAB_1042fa1ac;
    }
LAB_1042fa188:
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_a8);
  }
  FUN_1042fa66c(&uStack_80,0x112d387f8,&UNK_10d902650);
LAB_1042fa1ac:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042fa208; end: 1042fa22f; -[SCPinVisibilityEvent initWithCoder:] */

void FUN_1042fa208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042f9e68();
  return;
}



/* Entry: 1042fa230; end: 1042fa28b; -[SCPinVisibilityEvent description] */

void FUN_1042fa230(void)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_1042fa424(&uStack_50);
  uStack_18 = uStack_48;
  uStack_20 = uStack_50;
  func_0x000100bcb1dc(&uStack_20);
  uStack_28 = uStack_38;
  FUN_1042fa66c(&uStack_28,0x112d38270,&UNK_10d905a20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fa28c; end: 1042fa307; -[SCPinVisibilityEvent init] */

void FUN_1042fa28c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PinVisibilityEventWrapper.swift",0x3c,2,0x14f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fa2d4);
  (*pcVar1)();
}



/* Entry: 1042fa308; end: 1042fa353; -[SCPinVisibilityEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fa308(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c800 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c810));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306c818));
  return;
}



/* Entry: 1042fa354; end: 1042fa363;  */

ulong FUN_1042fa354(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 1042fa364; end: 1042fa403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fa364(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_90 [14];
  
  uVar5 = param_1;
  FUN_1042fa404();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = auStack_90 + 10;
  if (uVar1 != 5) {
    puVar4 = auStack_90 + 0xc;
  }
  puVar2 = auStack_90 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_90 + 8;
  }
  if (uVar1 < 5) {
    puVar4 = puVar2;
  }
  puVar2 = auStack_90 + 2;
  if (uVar1 != 1) {
    puVar2 = auStack_90 + 4;
  }
  puVar3 = auStack_90;
  if ((param_1 & 0xff) != 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 3) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_11306c7f8) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042fa404; end: 1042fa423;  */

void FUN_1042fa404(void)

{
  _objc_opt_self(&PTR_PTR_112997268);
  return;
}



/* Entry: 1042fa424; end: 1042fa4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fa424(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = ((undefined8 *)(param_2 + _DAT_11306c800))[1];
  uVar2 = *(undefined1 *)(param_2 + _DAT_11306c808);
  uVar3 = *(undefined1 *)(*(long *)(param_2 + _DAT_11306c810) + _DAT_11306c7f8);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11306c818);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11306c820);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11306c800);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 0x11) = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar4;
  _swift_bridgeObjectRetain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1042fa4a4; end: 1042fa4c3;  */

void FUN_1042fa4a4(void)

{
  _objc_opt_self(&PTR_PTR_112997330);
  return;
}



/* Entry: 1042fa4c4; end: 1042fa62b;  */

int FUN_1042fa4c4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042fa540;
        goto LAB_1042fa524;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042fa524:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1042fa540:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042fa62c; end: 1042fa66b;  */

void FUN_1042fa62c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7c18;
  _swift_getWitnessTable(&UNK_10dce7c18,&UNK_110756be8);
  puRam000000011306c878 = puVar1;
  return;
}



/* Entry: 1042fa66c; end: 1042fa6ab;  */

undefined8 FUN_1042fa66c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042fa6ac; end: 1042fa6af; -[SCPinVisibilityEvent copyWithZone:] */

void FUN_1042fa6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042fa6b0; end: 1042fa6b7; -[SCInvisibleReason copyWithZone:] */

void FUN_1042fa6b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042fa6b8; end: 1042fa78b;  */

void FUN_1042fa6b8(void)

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



/* Entry: 1042fa78c; end: 1042fa7af;  */

void FUN_1042fa78c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042fa7b0; end: 1042fa7cb; -[SCPlaceAction description] */

void FUN_1042fa7b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fa7cc; end: 1042fa7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042fa7cc(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_11306c880);
  _objc_release();
  return uVar1;
}



/* Entry: 1042fa7f8; end: 1042fa83f; -[SCPlaceAction init] */

void FUN_1042fa7f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceActionEventWrapper.swift",0x3a,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fa840);
  (*pcVar1)();
}



/* Entry: 1042fa840; end: 1042fa9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fa840(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306c880);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      uVar2 = 0x5f45505954425553;
      if (bVar1 != 0) {
        uVar4 = 0xec0000004e45504f;
        goto LAB_1042fa98c;
      }
      uVar4 = 0x45534e55;
LAB_1042fa910:
      uVar2 = 0x5f45505954425553;
      uVar4 = uVar4 | 0xed00005400000000;
      goto LAB_1042fa98c;
    }
    if (bVar1 == 2) {
      uVar2 = 0x5f45505954425553;
      uVar4 = 0xed000045534f4c43;
      goto LAB_1042fa98c;
    }
    pcVar5 = "SUBTYPE_CALL_BUSINESS";
    uVar2 = 0xd000000000000017;
LAB_1042fa96c:
    uVar4 = (ulong)pcVar5 | 0x8000000000000000;
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        uVar4 = 0x52414548;
        goto LAB_1042fa910;
      }
      pcVar5 = "SUBTYPE_CALL_BUSINESS";
    }
    else {
      if (bVar1 != 6) {
        if (bVar1 == 7) {
          pcVar5 = "SUBTYPE_VIEW_PROFILE_CONTENT";
          uVar2 = 0xd00000000000001b;
        }
        else {
          pcVar5 = "ceActionEventWrapper.swift";
          uVar2 = 0xd00000000000001c;
        }
        goto LAB_1042fa96c;
      }
      pcVar5 = "SUBTYPE_VISIT_WEBSITE";
    }
    uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar2 = 0xd000000000000015;
  }
LAB_1042fa98c:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1042fa9e8; end: 1042faa37; -[SCPlaceAction encodeWithCoder:] */

void FUN_1042fa9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042fa840(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042faa38; end: 1042faa67;  */

void FUN_1042faa38(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042faa68(param_1);
  return;
}



/* Entry: 1042faa68; end: 1042fafbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042faa68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
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
  
  puVar5 = auStack_130;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
    goto LAB_1042faf80;
  }
  plVar3 = &lStack_a0;
  _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1042faf78:
    _objc_release(param_1);
LAB_1042faf80:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x12ffffabbaacb1ab)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005445534e55,lStack_a0,lStack_98,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 0;
    goto LAB_1042fabb0;
  }
  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x13ffffffb1baafb1)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xec0000004e45504f,lStack_a0,lStack_98,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 1;
    puVar5 = auStack_120;
    goto LAB_1042fabb0;
  }
  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x12ffffbaacb0b3bd)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed000045534f4c43,lStack_a0,lStack_98,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 2;
    puVar5 = auStack_110;
    goto LAB_1042fabb0;
  }
  if ((lStack_a0 != -0x2fffffffffffffe9) || (lStack_98 != -0x7ffffffef0e0ba40)) {
    uVar4 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f1f45c0,lStack_a0,lStack_98,0);
    if ((uVar4 & 1) == 0) {
      if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x12ffffabadbebab8)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x5f45505954425553,0xed00005452414548,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)
         ) {
        _swift_bridgeObjectRelease(lStack_98);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 4;
        puVar5 = auStack_f0;
        goto LAB_1042fabb0;
      }
      if ((lStack_a0 != -0x2fffffffffffffeb) || (lStack_98 != -0x7ffffffef0e0ba60)) {
        uVar6 = 0xd000000000000015;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000015,0x800000010f1f45a0,lStack_a0,lStack_98,0);
        if ((uVar6 & 1) == 0) {
          if ((lStack_a0 != -0x2fffffffffffffeb) || (lStack_98 != -0x7ffffffef0e0ba80)) {
            uVar6 = 0xd000000000000015;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000015,0x800000010f1f4580,lStack_a0,lStack_98,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = 0xd00000000000001b;
              if (((lStack_a0 == -0x2fffffffffffffe5) && (lStack_98 == -0x7ffffffef0e0baa0)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd00000000000001b,0x800000010f1f4560,lStack_a0,lStack_98,0),
                 (uVar6 & 1) != 0)) {
                _swift_bridgeObjectRelease(lStack_98);
                _objc_allocWithZone();
                *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 7;
                puVar5 = auStack_c0;
                goto LAB_1042fabb0;
              }
              uVar6 = 0;
              if ((lStack_a0 == -0x2fffffffffffffe4) && (lStack_98 == -0x7ffffffef0e0bac0)) {
                _swift_bridgeObjectRelease(0x800000010f1f4540);
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd00000000000001c,0x800000010f1f4540,lStack_a0,lStack_98,0);
                _swift_bridgeObjectRelease(lStack_98);
                if ((uVar6 & 1) == 0) goto LAB_1042faf78;
              }
              _objc_allocWithZone();
              *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 8;
              puVar5 = auStack_b0;
              goto LAB_1042fabb0;
            }
          }
          _swift_bridgeObjectRelease(lStack_98);
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 6;
          puVar5 = auStack_d0;
          goto LAB_1042fabb0;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 5;
      puVar5 = auStack_e0;
      goto LAB_1042fabb0;
    }
  }
  _swift_bridgeObjectRelease(lStack_98);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c880) = 3;
  puVar5 = auStack_100;
LAB_1042fabb0:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 1042fafbc; end: 1042fafe3; -[SCPlaceAction initWithCoder:] */

void FUN_1042fafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042faa68();
  return;
}



/* Entry: 1042fafe4; end: 1042fafeb; +[SCPlaceAction unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fafe4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fafec; end: 1042faff3; +[SCPlaceAction open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fafec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042faff4; end: 1042faffb; +[SCPlaceAction close] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042faff4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042faffc; end: 1042fb003; +[SCPlaceAction viewDirections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042faffc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb004; end: 1042fb00b; +[SCPlaceAction heart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb004(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb00c; end: 1042fb013; +[SCPlaceAction callBusiness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb00c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb014; end: 1042fb01b; +[SCPlaceAction visitWebsite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb014(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb01c; end: 1042fb023; +[SCPlaceAction visitBrandProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb01c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb024; end: 1042fb02b; +[SCPlaceAction viewProfileContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb024(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb02c; end: 1042fb133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb02c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c880) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb134; end: 1042fb213; -[SCPlaceAction matchUnset:open:close:viewDirections:heart:callBusiness:visitWebsite:visitBrandProfile:viewProfileContent:] */

void FUN_1042fb134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001042fb07c(FUN_1042fbd8c,auStack_40,0x1042fbd94,auStack_60,0x1042fbd98,auStack_80,
                      0x1042fbd9c,auStack_a0,0x1042fbda0,auStack_c0,0x1042fbda4,auStack_e0,
                      0x1042fbda8,auStack_100,0x1042fbdac,auStack_120,0x1042fbdb0,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 1042fb214; end: 1042fb217;  */

void FUN_1042fb214(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042fb218; end: 1042fb21b; -[SCPlaceAction .cxx_destruct] */

void FUN_1042fb218(void)

{
  return;
}



/* Entry: 1042fb21c; end: 1042fb267; -[SCPlaceActionEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb21c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c888);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c888))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042fb268; end: 1042fb277; -[SCPlaceActionEvent action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c890));
  return;
}



/* Entry: 1042fb278; end: 1042fb2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c888);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c890) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042fb2e4; end: 1042fb363; -[SCPlaceActionEvent initWithPlaceId:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb2e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c888);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306c890) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1042fb364; end: 1042fb3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c888);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1042fba70();
  *(undefined8 *)(unaff_x20 + _DAT_11306c890) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042fb3e4; end: 1042fb58b; -[SCPlaceActionEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042fb3e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c888);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c888))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c890);
  func_0x00010bfde980(uVar2);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1042fb58c; end: 1042fb60b; -[SCPlaceActionEvent isEqual:] */

uint FUN_1042fb58c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001042fb490(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042fb60c; end: 1042fb6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fb60c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306c888);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306c888))[1]);
  uVar1 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4e4f49544341;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f49544341,0xe600000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042fb6bc; end: 1042fb70b; -[SCPlaceActionEvent encodeWithCoder:] */

void FUN_1042fb6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042fb60c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042fb70c; end: 1042fb73b;  */

void FUN_1042fb70c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042fb73c(param_1);
  return;
}



/* Entry: 1042fb73c; end: 1042fb953;  */

undefined8 FUN_1042fb73c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1042fb904;
    }
    lVar5 = 0x4e4f49544341;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f49544341,0xe600000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
      lVar5 = lVar3;
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      FUN_1042fbb28();
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,lVar5,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c036380();
        _objc_release(uVar2);
        _objc_release(param_1);
        _objc_release(uStack_a0);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_1042fb904;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1042fb904:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042fb954; end: 1042fb97b; -[SCPlaceActionEvent initWithCoder:] */

void FUN_1042fb954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042fb73c();
  return;
}



/* Entry: 1042fb97c; end: 1042fb9a7; -[SCPlaceActionEvent description] */

void FUN_1042fb97c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1042fbb48();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fb9a8; end: 1042fba23; -[SCPlaceActionEvent init] */

void FUN_1042fb9a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceActionEventWrapper.swift",0x3a,2,0x134,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fb9f0);
  (*pcVar1)();
}



/* Entry: 1042fba24; end: 1042fba5f; -[SCPlaceActionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fba24(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c888 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c890));
  return;
}



/* Entry: 1042fba60; end: 1042fba6f;  */

ulong FUN_1042fba60(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 1042fba70; end: 1042fbb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fba70(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_b0 [18];
  
  uVar5 = param_1;
  FUN_1042fbb28();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_b0 + 0xe;
  if (uVar1 != 7) {
    puVar3 = auStack_b0 + 0x10;
  }
  puVar4 = auStack_b0 + 0xc;
  if (uVar1 != 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_b0 + 8;
  if (uVar1 != 4) {
    puVar3 = auStack_b0 + 10;
  }
  if (uVar1 < 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_b0 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_b0 + 6;
  }
  puVar2 = auStack_b0;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_b0 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 4) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_11306c880) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042fbb28; end: 1042fbb47;  */

void FUN_1042fbb28(void)

{
  _objc_opt_self(&PTR_PTR_112997420);
  return;
}



/* Entry: 1042fbb48; end: 1042fbbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042fbb48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306c888);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c890);
  _swift_bridgeObjectRetain(((undefined8 *)(param_1 + _DAT_11306c888))[1]);
  _objc_retain();
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1042fbbc4; end: 1042fbbe3;  */

void FUN_1042fbbc4(void)

{
  _objc_opt_self(&PTR_PTR_1129974e8);
  return;
}



/* Entry: 1042fbbe4; end: 1042fbd4b;  */

int FUN_1042fbbe4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042fbc60;
        goto LAB_1042fbc44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042fbc44:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1042fbc60:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042fbd4c; end: 1042fbd8b;  */

void FUN_1042fbd4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7d04;
  _swift_getWitnessTable(&UNK_10dce7d04,&UNK_110756cd0);
  puRam000000011306c8e8 = puVar1;
  return;
}



/* Entry: 1042fbd8c; end: 1042fbdb3;  */

void FUN_1042fbd8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1042fbdb4; end: 1042fbdb7; -[SCPlaceActionEvent copyWithZone:] */

void FUN_1042fbdb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042fbdb8; end: 1042fbdbf; -[SCPlaceAction copyWithZone:] */

void FUN_1042fbdb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042fbdc0; end: 1042fbe93;  */

void FUN_1042fbdc0(void)

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



/* Entry: 1042fbe94; end: 1042fbeb3;  */

void FUN_1042fbe94(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}


