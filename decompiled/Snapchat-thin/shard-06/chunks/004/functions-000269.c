/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104862bf8; end: 104862c3f;  */

void FUN_104862bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  if (param_6 != 0) {
    func_0x00010485c894();
    func_0x00010006c090(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
    return;
  }
  return;
}



/* Entry: 104862c40; end: 104862c73;  */

void FUN_104862c40(ulong param_1)

{
  if (param_1 == 2) {
    return;
  }
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104862c74; end: 104862dcb;  */

undefined8 FUN_104862c74(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    FUN_1048630cc(0,0x1130932e0,&PTR_PTR_1126af830);
    _objc_retain(param_3);
    _objc_retain();
    uVar1 = param_1;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(param_1);
    _objc_release(param_3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_2 == 2) {
    if (param_4 == 2) {
      return 1;
    }
  }
  else if (param_4 != 2) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        func_0x000104862c50(0);
        return 1;
      }
    }
    else if (param_2 == 1) {
      if (param_4 == 1) {
        func_0x000104862c50(1);
        return 1;
      }
    }
    else if (1 < param_4) {
      FUN_1048630cc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000104862c40(param_4);
      func_0x000104862c40(param_2);
      uVar1 = param_2;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_2,param_4);
      func_0x0001048630bc(param_4);
      func_0x0001048630bc(param_2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104862dcc; end: 104862e5f;  */

void FUN_104862dcc(undefined8 *param_1)

{
  _objc_release(*param_1);
  if ((ulong)param_1[1] < 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104862e60; end: 104862f2f;  */

undefined8 * FUN_104862e60(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar2);
  puVar3 = param_1 + 1;
  uVar4 = *puVar3;
  uVar1 = param_2[1];
  if (uVar4 == 2) {
    if (uVar1 < 2) {
LAB_104862eac:
      *puVar3 = uVar1;
      return param_1;
    }
    if (uVar1 != 2) {
LAB_104862eec:
      *puVar3 = uVar1;
      _objc_retain();
      return param_1;
    }
    uVar1 = 2;
  }
  else {
    if (uVar1 == 2) {
      FUN_104862f30(puVar3);
    }
    else {
      if (uVar4 < 2) {
        if (1 < uVar1) goto LAB_104862eec;
        goto LAB_104862eac;
      }
      if (1 < uVar1) {
        *puVar3 = uVar1;
        _objc_retain();
        _objc_release(uVar4);
        return param_1;
      }
      _objc_release(uVar4);
    }
    uVar1 = param_2[1];
  }
  *puVar3 = uVar1;
  return param_1;
}



/* Entry: 104862f30; end: 104862f63;  */

undefined8 FUN_104862f30(undefined8 param_1)

{
  FUN_10485ced8();
  return param_1;
}



/* Entry: 104862f64; end: 104862fff;  */

undefined8 * FUN_104862f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  puVar2 = param_1 + 1;
  uVar3 = param_2[1];
  if (*puVar2 != 2) {
    if (uVar3 == 2) {
      FUN_104862f30(puVar2);
      *puVar2 = 2;
      return param_1;
    }
    if (1 < *puVar2) {
      if (1 < uVar3) {
        *puVar2 = uVar3;
        _objc_release();
        return param_1;
      }
      _objc_release();
    }
  }
  *puVar2 = uVar3;
  return param_1;
}



/* Entry: 104863000; end: 1048630cb;  */

int FUN_104863000(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1048630cc; end: 10486310b;  */

void FUN_1048630cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10486310c; end: 104863113;  */

undefined8 * FUN_10486310c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  _objc_retain();
  if (uVar1 < 2) {
    param_1[1] = uVar1;
  }
  else if (uVar1 == 2) {
    param_1[1] = 2;
  }
  else {
    param_1[1] = uVar1;
    _objc_retain(uVar1);
  }
  return param_1;
}



/* Entry: 104863114; end: 104863123; -[_TtC35SCResumeRegistrationStorageServices35SCResumeRegistrationStorageServices resumeRegistrationStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130932e8));
  return;
}



/* Entry: 104863124; end: 10486316f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863124(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130932e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104863170; end: 1048631c7; -[_TtC35SCResumeRegistrationStorageServices35SCResumeRegistrationStorageServices initWithResumeRegistrationStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130932e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1048631c8; end: 104863227; -[_TtC35SCResumeRegistrationStorageServices35SCResumeRegistrationStorageServices init] */

void FUN_1048631c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCResumeRegistrationStorageServices.SCResumeRegistrationStorageServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048631f4);
  (*pcVar1)();
}



/* Entry: 104863228; end: 104863237; -[_TtC35SCResumeRegistrationStorageServices35SCResumeRegistrationStorageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130932e8));
  return;
}



/* Entry: 104863238; end: 104863257;  */

void FUN_104863238(void)

{
  _objc_opt_self(&PTR_PTR_1129dd840);
  return;
}



/* Entry: 104863258; end: 10486332b;  */

void FUN_104863258(void)

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



/* Entry: 10486332c; end: 10486334b;  */

void FUN_10486332c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10486334c; end: 104863367; -[SCResumeRegistrationContext description] */

void FUN_10486334c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104863368; end: 104863393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104863368(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_113093318);
  _objc_release();
  return uVar1;
}



/* Entry: 104863394; end: 1048633db; -[SCResumeRegistrationContext init] */

void FUN_104863394(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCResumeRegistrationContextWrapper.swift",0x4c,2,
             0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048633dc);
  (*pcVar1)();
}



/* Entry: 1048633dc; end: 104863423; -[SCResumeRegistrationContext hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048633dc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113093318));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104863424; end: 1048634c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104863424(undefined8 param_1)

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
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113093318);
      cVar2 = *(char *)(lStack_58 + _DAT_113093318);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048634c4; end: 104863543; -[SCResumeRegistrationContext isEqual:] */

uint FUN_1048634c4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104863424(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104863544; end: 104863547; -[SCResumeRegistrationContext copyWithZone:] */

void FUN_104863544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104863548; end: 10486361f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863548(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x20;
  
  uVar2 = 0xd000000000000019;
  bVar1 = *(byte *)(unaff_x20 + _DAT_113093318);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = 0xd000000000000018;
      pcVar4 = "SUBTYPE_NEW_REGISTRATION";
    }
    else {
      pcVar4 = "SUBTYPE_PRE_REGISTRATION_FLOW";
      uVar2 = 0xd00000000000001d;
    }
  }
  else if (bVar1 == 2) {
    pcVar4 = "SUBTYPE_REGISTRATION_FLOW";
  }
  else {
    pcVar4 = "SUBTYPE_VERIFICATION_FLOW";
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,(ulong)(pcVar4 + -0x20) | 0x8000000000000000);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104863620; end: 10486366f; -[SCResumeRegistrationContext encodeWithCoder:] */

void FUN_104863620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104863548(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104863670; end: 10486369f;  */

void FUN_104863670(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048636a0(param_1);
  return;
}



/* Entry: 1048636a0; end: 1048639bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1048636a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
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
  
  puVar4 = auStack_d0;
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
    goto LAB_104863988;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_104863980:
    _objc_release(param_1);
LAB_104863988:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar5 = 0;
  if (((lStack_90 == -0x2fffffffffffffe8) && (lStack_88 == -0x7ffffffef0dedbf0)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000018,0x800000010f212410,lStack_90,lStack_88,0), (uVar5 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113093318) = 0;
    goto LAB_1048637dc;
  }
  uVar5 = 0xd00000000000001d;
  if (((lStack_90 == -0x2fffffffffffffe3) && (lStack_88 == -0x7ffffffef0dedc10)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000001d,0x800000010f2123f0,lStack_90,lStack_88,0), (uVar5 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113093318) = 1;
    puVar4 = auStack_c0;
    goto LAB_1048637dc;
  }
  if ((lStack_90 != -0x2fffffffffffffe7) || (lStack_88 != -0x7ffffffef0dedc30)) {
    uVar5 = 0xd000000000000019;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000019,0x800000010f2123d0,lStack_90,lStack_88,0);
    if ((uVar5 & 1) == 0) {
      if ((lStack_90 == -0x2fffffffffffffe7) && (lStack_88 == -0x7ffffffef0dedc50)) {
        _swift_bridgeObjectRelease(0x800000010f2123b0);
      }
      else {
        uVar5 = 0xd000000000000019;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000019,0x800000010f2123b0,lStack_90,lStack_88,0);
        _swift_bridgeObjectRelease(lStack_88);
        if ((uVar5 & 1) == 0) goto LAB_104863980;
      }
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_113093318) = 3;
      puVar4 = auStack_a0;
      goto LAB_1048637dc;
    }
  }
  _swift_bridgeObjectRelease(lStack_88);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113093318) = 2;
  puVar4 = auStack_b0;
LAB_1048637dc:
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar4;
}



/* Entry: 1048639c0; end: 1048639e7; -[SCResumeRegistrationContext initWithCoder:] */

void FUN_1048639c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048636a0();
  return;
}



/* Entry: 1048639e8; end: 104863a33; +[SCResumeRegistrationContext newRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048639e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093318) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104863a34; end: 104863a3b; +[SCResumeRegistrationContext preRegistrationFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863a34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093318) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104863a3c; end: 104863a43; +[SCResumeRegistrationContext registrationFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863a3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093318) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104863a44; end: 104863a4b; +[SCResumeRegistrationContext verificationFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863a44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093318) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104863a4c; end: 104863a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863a4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093318) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104863a9c; end: 104863ad7; -[SCResumeRegistrationContext matchNewRegistration:preRegistrationFlow:registrationFlow:verificationFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863a9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_113093318);
  if (bVar1 < 2) {
    param_5 = param_3;
    if (bVar1 != 0) {
      param_5 = param_4;
    }
  }
  else if (bVar1 != 2) {
    param_5 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x000104863ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 104863ad8; end: 104863b0b;  */

void FUN_104863ad8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104863b0c; end: 104863b0f; -[SCResumeRegistrationContext .cxx_destruct] */

void FUN_104863b0c(void)

{
  return;
}



/* Entry: 104863b10; end: 104863b2f;  */

void FUN_104863b10(void)

{
  _objc_opt_self(&PTR_PTR_1129dd900);
  return;
}



/* Entry: 104863b30; end: 104863c97;  */

int FUN_104863b30(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104863bac;
        goto LAB_104863b90;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104863b90:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104863bac:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104863c98; end: 104863cd7;  */

void FUN_104863c98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd391c4;
  _swift_getWitnessTable(&UNK_10dd391c4,&UNK_1107a54b0);
  puRam0000000113093348 = puVar1;
  return;
}



/* Entry: 104863cd8; end: 104863ce7;  */

ulong FUN_104863cd8(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 104863ce8; end: 104863cf7; -[SCResumeRegistrationData registrationUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093350));
  return;
}



/* Entry: 104863cf8; end: 104863d07; -[SCResumeRegistrationData registrationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093358));
  return;
}



/* Entry: 104863d08; end: 104863d17; -[SCResumeRegistrationData registrationChallenge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093360));
  return;
}



/* Entry: 104863d18; end: 104863dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093350) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093358) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113093360) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104863e00; end: 104863e8f; -[SCResumeRegistrationData initWithRegistrationUser:registrationState:registrationChallenge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113093350) = param_3;
  *(undefined8 *)(param_1 + _DAT_113093358) = param_4;
  *(undefined8 *)(param_1 + _DAT_113093360) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104863e90; end: 104863ecf;  */

undefined8 FUN_104863e90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10486451c(param_1);
  FUN_1048646a8(param_1);
  return uVar1;
}



/* Entry: 104863ed0; end: 104863f03; -[SCResumeRegistrationData hash] */

undefined8 FUN_104863ed0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104863f04();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104863f04; end: 104863ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104863f04(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_113093350);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113093358) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010486f35c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113093360) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1048675dc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104863ffc; end: 1048641c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104863ffc(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lStack_68;
  long alStack_60 [4];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_104864a44(param_1,alStack_60,0x112d387f8,&UNK_10d902650);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,alStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_113093350);
      if (lVar3 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_113093350) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar3;
      }
      if (*(long *)(unaff_x20 + _DAT_113093358) == 0) {
        uVar6 = (uint)(*(long *)(lStack_68 + _DAT_113093358) == 0);
      }
      else {
        lVar3 = *(long *)(lStack_68 + _DAT_113093358);
        if (lVar3 == 0) {
          lVar4 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_1048701a4();
        }
        alStack_60[0] = lVar3;
        alStack_60[3] = lVar4;
        _objc_retain(lVar3);
        plVar2 = alStack_60;
        FUN_10486f3a0(plVar2);
        uVar6 = (uint)plVar2;
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_113093360) == 0) {
        lVar4 = *(long *)(lStack_68 + _DAT_113093360);
        lVar3 = lVar4;
        _objc_retain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
          uVar7 = 1;
        }
        else {
          _objc_release(lVar3);
          uVar7 = 0;
        }
      }
      else {
        lVar3 = *(long *)(lStack_68 + _DAT_113093360);
        if (lVar3 == 0) {
          uVar5 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar5 = 0;
          FUN_1048684d4();
        }
        alStack_60[0] = lVar3;
        alStack_60[3] = uVar5;
        _objc_retain(lVar3);
        plVar2 = alStack_60;
        FUN_1048676d4(plVar2);
        uVar7 = (uint)plVar2;
        _objc_release(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if (uVar1 != 0) {
        uVar6 = uVar6 & uVar7;
        goto LAB_1048641ac;
      }
    }
  }
  uVar6 = 0;
LAB_1048641ac:
  return uVar6 & 1;
}



/* Entry: 1048641c8; end: 104864247; -[SCResumeRegistrationData isEqual:] */

uint FUN_1048641c8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104863ffc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104864248; end: 10486424b; -[SCResumeRegistrationData copyWithZone:] */

void FUN_104864248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486424c; end: 10486433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486424c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f212430);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f212450);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f212470);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104864340; end: 10486438f; -[SCResumeRegistrationData encodeWithCoder:] */

void FUN_104864340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10486424c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104864390; end: 1048643cf;  */

undefined8 FUN_104864390(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1048646dc(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048643d0; end: 10486440b; -[SCResumeRegistrationData initWithCoder:] */

undefined8 FUN_1048643d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048646dc();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10486440c; end: 104864457; -[SCResumeRegistrationData description] */

void FUN_10486440c(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  _objc_retain();
  FUN_104864964(auStack_68);
  _objc_release(param_1);
  FUN_1048646a8(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104864458; end: 1048644d3; -[SCResumeRegistrationData init] */

void FUN_104864458(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCResumeRegistrationDataWrapper.swift",0x49,2,0x54
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048644a0);
  (*pcVar1)();
}



/* Entry: 1048644d4; end: 10486451b; -[SCResumeRegistrationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048644d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093350));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093358));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093360));
  return;
}



/* Entry: 10486451c; end: 1048646a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486451c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  byte bStack_68;
  
  _swift_getObjectType();
  uStack_a0 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093350) = uStack_a0;
  uVar6 = (ulong)*(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 1) == 0xc) {
    FUN_104864a44(&uStack_a0,&uStack_98,0x113093390,&UNK_10dd39290);
    uVar6 = 0;
  }
  else {
    FUN_1048701a4(0);
    FUN_104864a44(&uStack_a0,&uStack_98,0x113093390,&UNK_10dd39290);
    func_0x00010486f280();
  }
  *(ulong *)(unaff_x20 + _DAT_113093358) = uVar6;
  lVar8 = param_1[7];
  if (lVar8 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_1[5];
    uVar3 = param_1[6];
    uVar2 = param_1[3];
    uVar4 = param_1[4];
    uVar9 = param_1[2];
    uStack_90 = (undefined1)uVar2;
    bVar5 = *(byte *)(param_1 + 8);
    bStack_68 = bVar5 & 1;
    uStack_98 = uVar9;
    uStack_88 = uVar4;
    uStack_80 = uVar1;
    uStack_78 = uVar3;
    lStack_70 = lVar8;
    FUN_1048684d4(0);
    _objc_allocWithZone();
    func_0x00010485c34c(uVar9,uVar2);
    func_0x00010006c00c(uVar4,uVar1);
    _swift_bridgeObjectRetain(lVar8);
    puVar7 = &uStack_98;
    FUN_1048682a0();
    FUN_104862bf8(uVar9,uVar2,uVar4,uVar1,uVar3,lVar8,bVar5);
  }
  *(undefined8 **)(unaff_x20 + _DAT_113093360) = puVar7;
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048646a8; end: 1048646db;  */

undefined8 FUN_1048646a8(undefined8 param_1)

{
  (*(code *)(undefined *)0x104862700)();
  return param_1;
}



/* Entry: 1048646dc; end: 104864963;  */

undefined8 FUN_1048646dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f212430);
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
    func_0x00010006e7f4(&uStack_70);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_104861108(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f212450);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
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
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1048701a4(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f212470);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_1048684d4(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  func_0x00010c03dc20();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 104864964; end: 104864a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864964(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113093350);
  lVar3 = *(long *)(param_2 + _DAT_113093358);
  if (lVar3 == 0) {
    _objc_retain(uVar1);
    uVar2 = 0xc;
  }
  else {
    _objc_retain(uVar1);
    _objc_retain();
    uVar2 = (undefined1)lVar3;
    FUN_10486f2a0();
  }
  if (*(long *)(param_2 + _DAT_113093360) == 0) {
    uStack_40 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    FUN_1048683e0(&uStack_70);
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  *(undefined1 *)(param_1 + 8) = uStack_40;
  return;
}



/* Entry: 104864a24; end: 104864a43;  */

void FUN_104864a24(void)

{
  _objc_opt_self(&PTR_PTR_1129dd9c8);
  return;
}



/* Entry: 104864a44; end: 104864a8b;  */

undefined8 FUN_104864a44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104864a8c; end: 104864a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093398);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130933a0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104864a90; end: 104864aeb; -[SCRegistrationEmail email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864a90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093398))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093398);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104864aec; end: 104864aff; -[SCRegistrationEmail state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104864aec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130933a0);
}



/* Entry: 104864b00; end: 104864c5b; -[SCRegistrationEmail initWithEmail:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864b00(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113093398);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130933a0) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104864c5c; end: 104864c8f; -[SCRegistrationEmail hash] */

undefined8 FUN_104864c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104864c90();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104864c90; end: 104864e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864c90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113093398))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093398);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130933a0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104864e2c; end: 104864eab; -[SCRegistrationEmail isEqual:] */

uint FUN_104864e2c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104864d24(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104864eac; end: 104864eaf; -[SCRegistrationEmail copyWithZone:] */

void FUN_104864eac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104864eb0; end: 104864f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104864eb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113093398))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093398);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104864f6c; end: 104864fbb; -[SCRegistrationEmail encodeWithCoder:] */

void FUN_104864f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104864eb0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104864fbc; end: 104864feb;  */

void FUN_104864fbc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104864fec(param_1);
  return;
}



/* Entry: 104864fec; end: 10486518b;  */

undefined8 FUN_104864fec(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar1 = (int)&uStack_90;
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    lVar5 = 0;
    uVar2 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_88;
    uVar2 = uStack_90;
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar5 = 0;
    }
  }
  uVar4 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  uVar3 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar4);
  if (uVar3 < 3) {
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    func_0x00010c00f420();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 10486518c; end: 1048651b3; -[SCRegistrationEmail initWithCoder:] */

void FUN_10486518c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104864fec();
  return;
}



/* Entry: 1048651b4; end: 1048651cf; -[SCRegistrationEmail description] */

void FUN_1048651b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048651d0; end: 10486524b; -[SCRegistrationEmail init] */

void FUN_1048651d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationEmailWrapper.swift",0x44,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104865218);
  (*pcVar1)();
}



/* Entry: 10486524c; end: 10486525f; -[SCRegistrationEmail .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486524c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113093398 + 8))
  ;
  return;
}



/* Entry: 104865260; end: 10486527f;  */

void FUN_104865260(void)

{
  _objc_opt_self(&PTR_PTR_1129ddaa8);
  return;
}



/* Entry: 104865280; end: 104865283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093398);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130933a0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104865284; end: 104865293; -[SCResumeUserVerificationData unverifiedBootstrapData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130933d0));
  return;
}



/* Entry: 104865294; end: 1048652a3; -[SCResumeUserVerificationData registrationMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130933d8));
  return;
}



/* Entry: 1048652a4; end: 104865307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048652a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130933d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130933d8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104865308; end: 10486542b; -[SCResumeUserVerificationData initWithUnverifiedBootstrapData:registrationMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130933d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130933d8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10486542c; end: 10486545f; -[SCResumeUserVerificationData hash] */

undefined8 FUN_10486542c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104865460();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104865460; end: 1048656b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865460(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_1130933d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130933d8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar2 = (ulong)*(byte *)(lVar1 + _DAT_113093520);
    __ss6HasherV8_combineyySuF(uVar2);
    if (*(long *)(lVar1 + _DAT_113093528) == 0) {
      uVar2 = 0;
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      FUN_10486bf04();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar2);
    }
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048656b8; end: 104865737; -[SCResumeUserVerificationData isEqual:] */

uint FUN_1048656b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104865578(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104865738; end: 10486573b; -[SCResumeUserVerificationData copyWithZone:] */

void FUN_104865738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486573c; end: 10486580f; -[SCResumeUserVerificationData encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486573c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f212530);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f212550);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104865810; end: 10486584f;  */

undefined8 FUN_104865810(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104865994(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104865850; end: 10486588b; -[SCResumeUserVerificationData initWithCoder:] */

undefined8 FUN_104865850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104865994();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10486588c; end: 1048658df; -[SCResumeUserVerificationData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486588c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1130933d8);
  if (((lVar2 != 0) && (1 < *(byte *)(lVar2 + _DAT_113093520))) &&
     (*(long *)(lVar2 + _DAT_113093528) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048658e0);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048658e0; end: 10486595b; -[SCResumeUserVerificationData init] */

void FUN_1048658e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCResumeUserVerificationDataWrapper.swift",0x4d,2,
             0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104865928);
  (*pcVar1)();
}



/* Entry: 10486595c; end: 104865993; -[SCResumeUserVerificationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486595c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130933d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130933d8));
  return;
}



/* Entry: 104865994; end: 104865b5b;  */

undefined8 FUN_104865994(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f212530);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000104865b7c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f212550);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_104869ef8(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
    uVar5 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  func_0x00010c0596c0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 104865b5c; end: 104865bbf;  */

void FUN_104865b5c(void)

{
  _objc_opt_self(&PTR_PTR_1129ddb80);
  return;
}


