/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043060a4; end: 1043060c3;  */

void FUN_1043060a4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1043060c4; end: 1043060ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043060c4(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_11306cbe8);
  _objc_release();
  return uVar1;
}



/* Entry: 1043060f0; end: 104306137; -[SCSnapAdAction init] */

void FUN_1043060f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SnapAdEventWrapper.swift",0x35,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104306138);
  (*pcVar1)();
}



/* Entry: 104306138; end: 10430624b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306138(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306cbe8);
  if (bVar1 < 2) {
    uVar2 = 0x5f45505954425553;
    if (bVar1 == 0) {
      uVar4 = 0xed00005445534e55;
    }
    else {
      uVar4 = 0xef44415f4e45504f;
    }
  }
  else if (bVar1 == 2) {
    uVar2 = 0xd00000000000001a;
    uVar4 = 0x800000010f1f4920;
  }
  else {
    if (bVar1 == 3) {
      pcVar5 = "SUBTYPE_OPEN_ATTACHMENT";
    }
    else {
      pcVar5 = "SUBTYPE_OPEN_LONG_PRESS";
    }
    uVar4 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    uVar2 = 0xd000000000000017;
  }
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



/* Entry: 10430624c; end: 10430629b; -[SCSnapAdAction encodeWithCoder:] */

void FUN_10430624c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104306138(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10430629c; end: 1043062cb;  */

void FUN_10430629c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043062cc(param_1);
  return;
}



/* Entry: 1043062cc; end: 104306667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043062cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
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
  
  puVar5 = auStack_e0;
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
    goto LAB_104306630;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_104306628:
    _objc_release(param_1);
LAB_104306630:
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
    *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = 0;
    goto LAB_104306410;
  }
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x10bbbea0b1baafb1)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f45505954425553,0xef44415f4e45504f,lStack_90,lStack_88,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = 1;
    puVar5 = auStack_d0;
    goto LAB_104306410;
  }
  uVar6 = 0;
  if (((lStack_90 == -0x2fffffffffffffe6) && (lStack_88 == -0x7ffffffef0e0b6e0)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000001a,0x800000010f1f4920,lStack_90,lStack_88,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = 2;
    puVar5 = auStack_c0;
    goto LAB_104306410;
  }
  if ((lStack_90 != -0x2fffffffffffffe9) || (lStack_88 != -0x7ffffffef0e0b700)) {
    uVar6 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f1f4900,lStack_90,lStack_88,0);
    if ((uVar6 & 1) == 0) {
      if ((lStack_90 == -0x2fffffffffffffe9) && (lStack_88 == -0x7ffffffef0e0b720)) {
        _swift_bridgeObjectRelease(0x800000010f1f48e0);
      }
      else {
        uVar6 = 0xd000000000000017;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000017,0x800000010f1f48e0,lStack_90,lStack_88,0);
        _swift_bridgeObjectRelease(lStack_88);
        if ((uVar6 & 1) == 0) goto LAB_104306628;
      }
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = 4;
      puVar5 = auStack_a0;
      goto LAB_104306410;
    }
  }
  _swift_bridgeObjectRelease(lStack_88);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = 3;
  puVar5 = auStack_b0;
LAB_104306410:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 104306668; end: 10430668f; -[SCSnapAdAction initWithCoder:] */

void FUN_104306668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043062cc();
  return;
}



/* Entry: 104306690; end: 10430669f; +[SCSnapAdAction unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306690(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043066a0; end: 1043066af; +[SCSnapAdAction openAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043066a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043066b0; end: 1043066bf; +[SCSnapAdAction openBrandProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043066b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043066c0; end: 1043066cf; +[SCSnapAdAction openAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043066c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043066d0; end: 10430671b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043066d0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cbe8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430671c; end: 104306723; +[SCSnapAdAction openLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430671c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104306724; end: 104306773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306724(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cbe8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104306774; end: 1043067bb; -[SCSnapAdAction matchUnset:openAd:openBrandProfile:openAttachment:openLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306774(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11306cbe8);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001043067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1043067bc; end: 1043067bf; -[SCSnapAdAction .cxx_destruct] */

void FUN_1043067bc(void)

{
  return;
}



/* Entry: 1043067c0; end: 10430680b; -[SCSnapAdEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043067c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cbd8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cbd8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430680c; end: 10430681b; -[SCSnapAdEvent action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430680c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306cbe0));
  return;
}



/* Entry: 10430681c; end: 104306887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430681c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cbd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306cbe0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104306888; end: 1043069b7; -[SCSnapAdEvent initWithPlaceId:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306cbd8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306cbe0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1043069b8; end: 104306a07; -[SCSnapAdEvent encodeWithCoder:] */

void FUN_1043069b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104306908(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104306a08; end: 104306a37;  */

void FUN_104306a08(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104306a38(param_1);
  return;
}



/* Entry: 104306a38; end: 104306c4f;  */

undefined8 FUN_104306a38(long param_1)

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
      goto LAB_104306c00;
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
      FUN_104306dbc();
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
      goto LAB_104306c00;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_104306c00:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104306c50; end: 104306c77; -[SCSnapAdEvent initWithCoder:] */

void FUN_104306c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104306a38();
  return;
}



/* Entry: 104306c78; end: 104306cbf; -[SCSnapAdEvent init] */

void FUN_104306c78(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SnapAdEventWrapper.swift",0x35,2,0xdb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104306cc0);
  (*pcVar1)();
}



/* Entry: 104306cc0; end: 104306cc3;  */

void FUN_104306cc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104306cc4; end: 104306cf7;  */

void FUN_104306cc4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104306cf8; end: 104306dbb; -[SCSnapAdEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306cf8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cbd8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306cbe0));
  return;
}



/* Entry: 104306dbc; end: 104306dfb;  */

void FUN_104306dbc(void)

{
  _objc_opt_self(&PTR_PTR_112997e88);
  return;
}



/* Entry: 104306dfc; end: 104306f63;  */

int FUN_104306dfc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104306e78;
        goto LAB_104306e5c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104306e5c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_104306e78:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104306f64; end: 104306fa3;  */

void FUN_104306f64(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8234;
  _swift_getWitnessTable(&UNK_10dce8234,&UNK_110757100);
  puRam000000011306cc40 = puVar1;
  return;
}



/* Entry: 104306fa4; end: 104306fb3;  */

ulong FUN_104306fa4(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 104306fb4; end: 104306fb7; -[SCSnapAdAction description] */

void FUN_104306fb4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104306fb8; end: 104306fbb; -[SCSnapAdEvent description] */

void FUN_104306fb8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104306fbc; end: 104306fbf; -[SCSnapAdAction copyWithZone:] */

void FUN_104306fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104306fc0; end: 104306fc7; -[SCSnapAdEvent copyWithZone:] */

void FUN_104306fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104306fc8; end: 104307047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104306fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cc48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000104307dbc();
  *(undefined8 *)(unaff_x20 + _DAT_11306cc50) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104307048; end: 104307143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104307048(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_11306cc48);
      if (lVar1 == *(long *)(lStack_58 + _DAT_11306cc48) &&
          ((long *)(unaff_x20 + _DAT_11306cc48))[1] == ((long *)(lStack_58 + _DAT_11306cc48))[1]) {
        uVar4 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar4 = (uint)lVar1;
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306cc50);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_11306cc50);
      _objc_retain(uVar3);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar3);
      _objc_release(lStack_58);
      uVar4 = uVar4 & (uint)uVar5;
      goto LAB_10430712c;
    }
  }
  uVar4 = 0;
LAB_10430712c:
  return uVar4 & 1;
}



/* Entry: 104307144; end: 1043071ef;  */

void FUN_104307144(void)

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



/* Entry: 1043071f0; end: 104307227;  */

void FUN_1043071f0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104307228; end: 10430726f; -[SCThreeDEventType init] */

void FUN_104307228(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/ThreeDEventWrapper.swift",0x35,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104307270);
  (*pcVar1)();
}



/* Entry: 104307270; end: 104307333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306cc58) == '\0') {
    uVar3 = 0x45534e55;
  }
  else {
    if (*(char *)(unaff_x20 + _DAT_11306cc58) != '\x01') {
      uVar3 = 0xec000000504f5453;
      goto LAB_1043072c8;
    }
    uVar3 = 0x52415453;
  }
  uVar3 = uVar3 | 0xed00005400000000;
LAB_1043072c8:
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar3);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104307334; end: 104307383; -[SCThreeDEventType encodeWithCoder:] */

void FUN_104307334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104307270(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104307384; end: 1043073b3;  */

void FUN_104307384(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043073b4(param_1);
  return;
}



/* Entry: 1043073b4; end: 104307663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043073b4(long param_1)

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
    goto LAB_10430762c;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_104307624:
    _objc_release(param_1);
LAB_10430762c:
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
    *(undefined1 *)(unaff_x20 + _DAT_11306cc58) = 0;
    goto LAB_1043074f8;
  }
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabadbeabad)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005452415453,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cc58) = 1;
    puVar5 = auStack_b0;
    goto LAB_1043074f8;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x13ffffffafb0abad)) {
    _swift_bridgeObjectRelease(0xec000000504f5453);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xec000000504f5453,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_104307624;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cc58) = 2;
  puVar5 = auStack_a0;
LAB_1043074f8:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 104307664; end: 10430768b; -[SCThreeDEventType initWithCoder:] */

void FUN_104307664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043073b4();
  return;
}



/* Entry: 10430768c; end: 104307693; +[SCThreeDEventType unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430768c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cc58) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104307694; end: 10430769b; +[SCThreeDEventType start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307694(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cc58) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430769c; end: 1043076a3; +[SCThreeDEventType stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430769c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cc58) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043076a4; end: 1043076f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043076a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cc58) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043076f4; end: 10430771f; -[SCThreeDEventType matchUnset:start:stop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043076f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306cc58) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306cc58) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010430771c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104307720; end: 104307723; -[SCThreeDEventType .cxx_destruct] */

void FUN_104307720(void)

{
  return;
}



/* Entry: 104307724; end: 10430776f; -[SCThreeDEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307724(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cc48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cc48))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104307770; end: 10430777f; -[SCThreeDEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306cc50));
  return;
}



/* Entry: 104307780; end: 1043077eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cc48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306cc50) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043077ec; end: 10430786b; -[SCThreeDEvent initWithPlaceId:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043077ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306cc48);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306cc50) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10430786c; end: 104307917; -[SCThreeDEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430786c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cc48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cc48))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cc50);
  func_0x00010bfde980(uVar2);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104307918; end: 104307997; -[SCThreeDEvent isEqual:] */

uint FUN_104307918(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104307048(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104307998; end: 104307a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306cc48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306cc48))[1]);
  uVar1 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104307a44; end: 104307a93; -[SCThreeDEvent encodeWithCoder:] */

void FUN_104307a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104307998(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104307a94; end: 104307ac3;  */

void FUN_104307a94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104307ac4(param_1);
  return;
}



/* Entry: 104307ac4; end: 104307cd7;  */

undefined8 FUN_104307ac4(long param_1)

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
      goto LAB_104307c88;
    }
    lVar5 = 0x45505954;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
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
      FUN_104307e2c();
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,lVar5,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c036640();
        _objc_release(uVar2);
        _objc_release(param_1);
        _objc_release(uStack_a0);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_104307c88;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_104307c88:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104307cd8; end: 104307cff; -[SCThreeDEvent initWithCoder:] */

void FUN_104307cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104307ac4();
  return;
}



/* Entry: 104307d00; end: 104307d47; -[SCThreeDEvent init] */

void FUN_104307d00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/ThreeDEventWrapper.swift",0x35,2,199,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104307d48);
  (*pcVar1)();
}



/* Entry: 104307d48; end: 104307d4b;  */

void FUN_104307d48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104307d4c; end: 104307d7f;  */

void FUN_104307d4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104307d80; end: 104307e2b; -[SCThreeDEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104307d80(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cc48 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306cc50));
  return;
}



/* Entry: 104307e2c; end: 104307e6b;  */

void FUN_104307e2c(void)

{
  _objc_opt_self(&PTR_PTR_112998028);
  return;
}



/* Entry: 104307e6c; end: 104307fd3;  */

int FUN_104307e6c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104307ee8;
        goto LAB_104307ecc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104307ecc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104307ee8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104307fd4; end: 104308013;  */

void FUN_104307fd4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ccb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8328;
  _swift_getWitnessTable(&UNK_10dce8328,&UNK_1107571e8);
  puRam000000011306ccb0 = puVar1;
  return;
}



/* Entry: 104308014; end: 104308017; -[SCThreeDEventType description] */

void FUN_104308014(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104308018; end: 10430801b; -[SCThreeDEvent description] */

void FUN_104308018(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430801c; end: 10430801f; -[SCThreeDEventType copyWithZone:] */

void FUN_10430801c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104308020; end: 104308027; -[SCThreeDEvent copyWithZone:] */

void FUN_104308020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104308028; end: 1043080c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104308028(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
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
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11306ccb8);
      lVar3 = *(long *)(lStack_58 + _DAT_11306ccb8);
      _objc_release();
      return lVar2 == lVar3;
    }
  }
  return false;
}



/* Entry: 1043080c8; end: 1043080db; -[SCZoomEvent zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043080c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ccb8);
}



/* Entry: 1043080dc; end: 104308127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043080dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ccb8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104308128; end: 104308173; -[SCZoomEvent initWithZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308128(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ccb8) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104308174; end: 1043081bb; -[SCZoomEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308174(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306ccb8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043081bc; end: 10430823b; -[SCZoomEvent isEqual:] */

uint FUN_1043081bc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104308028(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10430823c; end: 10430823f; -[SCZoomEvent copyWithZone:] */

void FUN_10430823c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104308240; end: 10430834f; -[SCZoomEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0x56454c5f4d4f4f5a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x56454c5f4d4f4f5a,0xea00000000004c45);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104308350; end: 1043083d3; -[SCZoomEvent initWithCoder:] */

undefined8 FUN_104308350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0x56454c5f4d4f4f5a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x56454c5f4d4f4f5a,0xea00000000004c45);
  func_0x00010bf66f40(param_3);
  _objc_release(uVar1);
  func_0x00010c0637e0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1043083d4; end: 1043083ef; -[SCZoomEvent description] */

void FUN_1043083d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043083f0; end: 10430846b; -[SCZoomEvent init] */

void FUN_1043083f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/ZoomEventWrapper.swift",0x33,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104308438);
  (*pcVar1)();
}



/* Entry: 10430846c; end: 10430846f; -[SCZoomEvent .cxx_destruct] */

void FUN_10430846c(void)

{
  return;
}



/* Entry: 104308470; end: 10430848f;  */

void FUN_104308470(void)

{
  _objc_opt_self(&PTR_PTR_1129981c8);
  return;
}



/* Entry: 104308490; end: 104308493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104308490(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ccb8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104308494; end: 104308557;  */

void FUN_104308494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11306cce8;
  func_0x0001000285a8(0x11306cce8,&UNK_10dce83e0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104308558; end: 10430855b;  */

void FUN_104308558(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ccf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce83f0;
  _swift_getWitnessTable(&UNK_10dce83f0,&UNK_110757378);
  puRam000000011306ccf8 = puVar1;
  return;
}



/* Entry: 10430855c; end: 1043085c7;  */

void FUN_10430855c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ccf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce83f0;
  _swift_getWitnessTable(&UNK_10dce83f0,&UNK_110757378);
  puRam000000011306ccf8 = puVar1;
  return;
}



/* Entry: 1043085c8; end: 1043085cb;  */

void FUN_1043085c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8498;
  _swift_getWitnessTable(&UNK_10dce8498,&UNK_110757408);
  puRam000000011306cd10 = puVar1;
  return;
}



/* Entry: 1043085cc; end: 104308637;  */

void FUN_1043085cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8498;
  _swift_getWitnessTable(&UNK_10dce8498,&UNK_110757408);
  puRam000000011306cd10 = puVar1;
  return;
}



/* Entry: 104308638; end: 1043086bb;  */

void FUN_104308638(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1043086bc; end: 1043086bf;  */

void FUN_1043086bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8508;
  _swift_getWitnessTable(&UNK_10dce8508,&UNK_110757408);
  puRam000000011306cd28 = puVar1;
  return;
}



/* Entry: 1043086c0; end: 1043086ff;  */

void FUN_1043086c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8508;
  _swift_getWitnessTable(&UNK_10dce8508,&UNK_110757408);
  puRam000000011306cd28 = puVar1;
  return;
}



/* Entry: 104308700; end: 104308703;  */

void FUN_104308700(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce84c0;
  _swift_getWitnessTable(&UNK_10dce84c0,&UNK_110757408);
  puRam000000011306cd30 = puVar1;
  return;
}



/* Entry: 104308704; end: 104308743;  */

void FUN_104308704(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce84c0;
  _swift_getWitnessTable(&UNK_10dce84c0,&UNK_110757408);
  puRam000000011306cd30 = puVar1;
  return;
}



/* Entry: 104308744; end: 1043088eb;  */

void FUN_104308744(void)

{
  return;
}


