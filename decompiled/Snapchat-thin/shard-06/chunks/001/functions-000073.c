/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104477b8c; end: 104477bab;  */

void FUN_104477b8c(void)

{
  _objc_opt_self(&PTR_PTR_1129bc890);
  return;
}



/* Entry: 104477bac; end: 104477baf;  */

undefined1  [16] FUN_104477bac(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (param_1 != 0) {
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c0c46a0();
    lVar3 = (long)(int)lVar2;
    func_0x00010b7f519c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
    uVar5 = 0xe100000000000000;
    __sSS6appendyySSF(0x7e,0xe100000000000000);
    lVar3 = param_1;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      __sSS6appendyySSF(0xd000000000000013,0x800000010f201780);
      _objc_release(param_1);
    }
    else {
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
      __sSS6appendyySSF(lVar4,uVar5);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar5);
    }
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = lVar2;
    return auVar1;
  }
  auVar6._8_8_ = 0x800000010f201760;
  auVar6._0_8_ = 0xd000000000000013;
  return auVar6;
}



/* Entry: 104477bb0; end: 104477c13; +[_TtC20ContentDeliveryUtils19SnapDocManagerUtils snapDocKeyToDebugString:] */

void FUN_104477bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104477c84(param_3);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104477c14; end: 104477c4f; -[_TtC20ContentDeliveryUtils19SnapDocManagerUtils init] */

void FUN_104477c14(undefined8 param_1)

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



/* Entry: 104477c50; end: 104477c83;  */

void FUN_104477c50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104477c84; end: 104477d8f;  */

undefined1  [16] FUN_104477c84(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (param_1 != 0) {
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c0c46a0();
    lVar3 = (long)(int)lVar2;
    func_0x00010b7f519c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
    uVar5 = 0xe100000000000000;
    __sSS6appendyySSF(0x7e,0xe100000000000000);
    lVar3 = param_1;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      __sSS6appendyySSF(0xd000000000000013,0x800000010f201780);
      _objc_release(param_1);
    }
    else {
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
      __sSS6appendyySSF(lVar4,uVar5);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar5);
    }
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = lVar2;
    return auVar1;
  }
  auVar6._8_8_ = 0x800000010f201760;
  auVar6._0_8_ = 0xd000000000000013;
  return auVar6;
}



/* Entry: 104477d90; end: 104477daf;  */

void FUN_104477d90(void)

{
  _objc_opt_self(&PTR_PTR_1129bc940);
  return;
}



/* Entry: 104477db0; end: 104477dc3;  */

bool FUN_104477db0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104477dc4; end: 104477e6f;  */

void FUN_104477dc4(void)

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



/* Entry: 104477e70; end: 104477e73;  */

void FUN_104477e70(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05f50;
  _swift_getWitnessTable(&UNK_10dd05f50,&UNK_110776688);
  puRam000000011307d2c0 = puVar1;
  return;
}



/* Entry: 104477e74; end: 104477eb3;  */

void FUN_104477e74(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05f50;
  _swift_getWitnessTable(&UNK_10dd05f50,&UNK_110776688);
  puRam000000011307d2c0 = puVar1;
  return;
}



/* Entry: 104477eb4; end: 104478027;  */

void FUN_104477eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104478028; end: 104478037; -[_TtC22IntentDonatingServices22IntentDonatingServices sendMessageIntentDonator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d2d0));
  return;
}



/* Entry: 104478038; end: 104478047; -[_TtC22IntentDonatingServices22IntentDonatingServices startCallIntentDonator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d2e0));
  return;
}



/* Entry: 104478048; end: 1044780d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d2c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d2e0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044780d4; end: 104478133; -[_TtC22IntentDonatingServices22IntentDonatingServices init] */

void FUN_1044780d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("IntentDonatingServices.IntentDonatingServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104478100);
  (*pcVar1)();
}



/* Entry: 104478134; end: 10447818b; -[_TtC22IntentDonatingServices22IntentDonatingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478134(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307d2c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d2d0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307d2d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d2e0));
  return;
}



/* Entry: 10447818c; end: 1044781d7;  */

long FUN_10447818c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2[1];
  if (param_1[1] == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else {
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = *param_1;
    if (lVar1 != *param_2 || param_1[1] != lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar1;
    }
  }
  return 1;
}



/* Entry: 1044781d8; end: 104478247;  */

undefined8 * FUN_1044781d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104478248; end: 10447833f;  */

int FUN_104478248(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 104478340; end: 1044783eb;  */

void FUN_104478340(void)

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



/* Entry: 1044783ec; end: 10447842b;  */

void FUN_1044783ec(undefined1 *param_1,long *param_2)

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



/* Entry: 10447842c; end: 104478473; -[SCIntentDonationImageType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447842c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11307d310) == '\x01') &&
     (*(long *)(param_1 + _DAT_11307d318 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104478474);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104478474; end: 1044784eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104478474(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*(char *)(param_1 + _DAT_11307d310) == '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_11307d318))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044784ec);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307d318);
    _swift_bridgeObjectRetain(lVar2);
  }
  else {
    uVar3 = 0;
    lVar2 = 0;
  }
  _objc_release(param_1);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1044784ec; end: 104478533; -[SCIntentDonationImageType init] */

void FUN_1044784ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "IntentDonatingServices/IntentDonationImageTypeWrapper.swift",0x3b,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104478534);
  (*pcVar1)();
}



/* Entry: 104478534; end: 1044785f3; -[SCIntentDonationImageType hash] */

undefined8 FUN_104478534(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104478568();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044785f4; end: 10447872f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044785f4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
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
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_11307d310) == *(char *)(lStack_58 + _DAT_11307d310)) {
        if (*(char *)(unaff_x20 + _DAT_11307d310) != '\x01') {
LAB_1044786f8:
          _objc_release();
          uVar5 = 1;
          goto LAB_1044786e0;
        }
        lVar2 = ((long *)(unaff_x20 + _DAT_11307d318))[1];
        lVar6 = ((long *)(lStack_58 + _DAT_11307d318))[1];
        if (lVar2 != 0) {
          uVar5 = 0;
          if (lVar6 != 0) {
            lVar4 = *(long *)(unaff_x20 + _DAT_11307d318);
            lVar3 = *(long *)(lStack_58 + _DAT_11307d318);
            if (lVar4 == lVar3 && lVar2 == lVar6) goto LAB_1044786f8;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar4,lVar2,lVar3,lVar6,0);
            uVar5 = (uint)lVar4;
          }
          _objc_release(lStack_58);
          goto LAB_1044786e0;
        }
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_58);
        if (lVar6 == 0) {
          uVar5 = 1;
          goto LAB_1044786e0;
        }
        _swift_bridgeObjectRelease(lVar6);
      }
      else {
        _objc_release();
      }
    }
  }
  uVar5 = 0;
LAB_1044786e0:
  return uVar5 & 1;
}



/* Entry: 104478730; end: 1044787af; -[SCIntentDonationImageType isEqual:] */

uint FUN_104478730(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044785f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044787b0; end: 1044787b3; -[SCIntentDonationImageType copyWithZone:] */

void FUN_1044787b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044787b4; end: 10447880f; +[SCIntentDonationImageType bitmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044787b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307d310) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307d318);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104478810; end: 10447888f; +[SCIntentDonationImageType imageWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11307d310) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11307d318);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104478890; end: 10447892f; -[SCIntentDonationImageType matchBitmoji:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478890(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_11307d310) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000104478928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  lVar2 = ((undefined8 *)(param_1 + _DAT_11307d318))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11307d318);
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    (**(code **)(param_4 + 0x10))(param_4,uVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104478930);
  (*pcVar1)();
}



/* Entry: 104478930; end: 104478963;  */

void FUN_104478930(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104478964; end: 104478977; -[SCIntentDonationImageType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307d318 + 8))
  ;
  return;
}



/* Entry: 104478978; end: 104478997;  */

void FUN_104478978(void)

{
  _objc_opt_self(&PTR_PTR_1129bcac8);
  return;
}



/* Entry: 104478998; end: 104478aff;  */

int FUN_104478998(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104478a14;
        goto LAB_1044789f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044789f8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104478a14:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104478b00; end: 104478b3f;  */

void FUN_104478b00(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06130;
  _swift_getWitnessTable(&UNK_10dd06130,&UNK_110776818);
  puRam000000011307d348 = puVar1;
  return;
}



/* Entry: 104478b40; end: 104478bf3; -[SCImageFetchingRequest initWithImageSource:attributedFeature:targetSize:] */

undefined8
FUN_104478b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_10447d22c(0);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  FUN_10447d098();
  func_0x00010c01cf20(0x3ff0000000000000,param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  return param_3;
}



/* Entry: 104478bf4; end: 104478c6f;  */

undefined8
FUN_104478bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  func_0x00010c01cf00(param_1,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  return unaff_x20;
}



/* Entry: 104478c70; end: 104478d2f; -[SCImageFetchingRequest initWithImageSource:attributedFeature:scale:targetSize:] */

undefined8
FUN_104478c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  FUN_10447d22c(0);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_7;
  FUN_10447d098();
  func_0x00010c01cf20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_7);
  return param_4;
}



/* Entry: 104478d30; end: 104478d3f; -[SCImageFetchingResponse image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d350));
  return;
}



/* Entry: 104478d40; end: 104478d4f; -[SCImageFetchingResponse wasInDiskCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104478d40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307d358);
}



/* Entry: 104478d50; end: 104478d5f; -[SCImageFetchingResponse wasInMemoryCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104478d50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307d360);
}



/* Entry: 104478d60; end: 104478d6f; -[SCImageFetchingResponse duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104478d60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307d368);
}



/* Entry: 104478d70; end: 104478e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478d70(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d350) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307d358) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307d360) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307d368) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104478e88; end: 104478f1f; -[SCImageFetchingResponse initWithImage:wasInDiskCache:wasInMemoryCache:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478e88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11307d350) = param_4;
  *(undefined1 *)(param_2 + _DAT_11307d358) = param_5;
  *(undefined1 *)(param_2 + _DAT_11307d360) = param_6;
  *(undefined8 *)(param_2 + _DAT_11307d368) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104478f20; end: 104478f7f; -[SCImageFetchingResponse init] */

void FUN_104478f20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCImageFetchingServices.ImageFetchingResponse",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104478f4c);
  (*pcVar1)();
}



/* Entry: 104478f80; end: 104478f8f; -[SCImageFetchingResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d350));
  return;
}



/* Entry: 104478f90; end: 104478faf;  */

void FUN_104478f90(void)

{
  _objc_opt_self(&PTR_PTR_1129bcb90);
  return;
}



/* Entry: 104478fb0; end: 104478fbf; -[SCImagePrefetchingResponse wasInDiskCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104478fb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307d398);
}



/* Entry: 104478fc0; end: 104478fcf; -[SCImagePrefetchingResponse wasInMemoryCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104478fc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307d3a0);
}



/* Entry: 104478fd0; end: 104478fdf; -[SCImagePrefetchingResponse duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104478fd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307d3a8);
}



/* Entry: 104478fe0; end: 1044790d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104478fe0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307d398) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307d3a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d3a8) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044790d8; end: 104479153; -[SCImagePrefetchingResponse initWithWasInDiskCache:wasInMemoryCache:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044790d8(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_11307d398) = param_4;
  *(undefined1 *)(param_2 + _DAT_11307d3a0) = param_5;
  *(undefined8 *)(param_2 + _DAT_11307d3a8) = param_1;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104479154; end: 1044791d3; -[SCImagePrefetchingResponse init] */

void FUN_104479154(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCImageFetchingServices.ImagePrefetchingResponse",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104479180);
  (*pcVar1)();
}



/* Entry: 1044791d4; end: 1044791f3; -[_TtC23SCImageFetchingServices23SCImageFetchingServices imageFetchingServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044791d4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307d3e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044791f4; end: 104479273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044791f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x000100420238(param_1,unaff_x20 + _DAT_11307d3d8);
  *(undefined8 *)(unaff_x20 + _DAT_11307d3e0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 104479274; end: 1044792d3; -[_TtC23SCImageFetchingServices23SCImageFetchingServices init] */

void FUN_104479274(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCImageFetchingServices.SCImageFetchingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044792a0);
  (*pcVar1)();
}



/* Entry: 1044792d4; end: 10447930b; -[_TtC23SCImageFetchingServices23SCImageFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044792d4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_11307d3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307d3e0));
  return;
}



/* Entry: 10447930c; end: 104479947;  */

void FUN_10447930c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_3 != '\x02')) {
    if (param_3 != '\x01') {
      return;
    }
    _objc_retain();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 104479948; end: 104479957; -[SCImageFetchingRequest imageSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d410));
  return;
}



/* Entry: 104479958; end: 104479967; -[SCImageFetchingRequest attributedFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d418));
  return;
}



/* Entry: 104479968; end: 104479977; -[SCImageFetchingRequest scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104479968(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307d420);
}



/* Entry: 104479978; end: 10447998b; -[SCImageFetchingRequest targetSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104479978(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11307d428);
}



/* Entry: 10447998c; end: 10447999b; -[SCImageFetchingRequest dataEncryptionStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447998c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d430));
  return;
}



/* Entry: 10447999c; end: 104479a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447999c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d410) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307d418) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307d420) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d428);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d430) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104479a48; end: 104479b0f; -[SCImageFetchingRequest initWithImageSource:attributedFeature:scale:targetSize:dataEncryptionStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_4;
  _swift_getObjectType();
  *(undefined8 *)(param_4 + _DAT_11307d410) = param_6;
  *(undefined8 *)(param_4 + _DAT_11307d418) = param_7;
  *(undefined8 *)(param_4 + _DAT_11307d420) = param_1;
  puVar1 = (undefined8 *)(param_4 + _DAT_11307d428);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(param_4 + _DAT_11307d430) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_4;
  lStack_58 = lVar3;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 104479b10; end: 104479c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104479b10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  _objc_allocWithZone();
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  FUN_10447930c(uVar6,uVar1,uVar2);
  FUN_10447a324(uVar6,uVar1,uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_11307d410) = uVar6;
  uVar6 = param_1[3];
  uVar1 = param_1[4];
  uVar5 = param_1[5];
  func_0x0001048b0ec8(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar1);
  FUN_1048b0ee8(uVar6,uVar1,uVar5);
  *(undefined8 *)(unaff_x20 + _DAT_11307d418) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_11307d420) = param_1[6];
  uVar6 = param_1[7];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_11307d428);
  puVar3[1] = param_1[8];
  *puVar3 = uVar6;
  FUN_10447d22c(0);
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uStack_68 = param_1[0xc];
  uStack_70 = param_1[0xb];
  uStack_60 = *(undefined4 *)(param_1 + 0xd);
  func_0x000101769c64(&uStack_80,auStack_a8);
  puVar3 = &uStack_80;
  FUN_10447cd98();
  *(undefined8 **)(unaff_x20 + _DAT_11307d430) = puVar3;
  puVar4 = auStack_b8;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x000101769bb8(param_1);
  return puVar4;
}



/* Entry: 104479c54; end: 104479c57; -[SCImageFetchingRequest copyWithZone:] */

void FUN_104479c54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104479c58; end: 104479cfb; -[SCImageFetchingRequest description] */

void FUN_104479c58(undefined8 param_1)

{
  undefined1 auStack_90 [112];
  
  _objc_retain();
  FUN_104479dc0(auStack_90);
  _objc_release(param_1);
  func_0x000101769bb8(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104479cfc; end: 104479d77; -[SCImageFetchingRequest init] */

void FUN_104479cfc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCImageFetchingServices/ImageFetchingRequestWrapper.swift",0x39,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104479d44);
  (*pcVar1)();
}



/* Entry: 104479d78; end: 104479dbf; -[SCImageFetchingRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479d78(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d410));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d418));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d430));
  return;
}



/* Entry: 104479dc0; end: 104479ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479dc0(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 param_4)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_11307d410);
  FUN_10447a528();
  puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_11307d418) + _DAT_11309aa88);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar6 = *(undefined8 *)(*(long *)(param_2 + _DAT_11307d418) + _DAT_11309aa90);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11307d420);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307d428);
  uVar9 = ((undefined8 *)(param_2 + _DAT_11307d428))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_11307d430);
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar5);
  FUN_10447cf78(&uStack_98);
  *param_1 = uVar4;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[10] = uStack_90;
  param_1[9] = uStack_98;
  param_1[0xc] = uStack_80;
  param_1[0xb] = uStack_88;
  *(undefined4 *)(param_1 + 0xd) = uStack_78;
  return;
}



/* Entry: 104479ecc; end: 104479eeb;  */

void FUN_104479ecc(void)

{
  _objc_opt_self(&PTR_PTR_1129bce00);
  return;
}



/* Entry: 104479eec; end: 104479eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104479eec(long param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_70;
  if (param_3 == '\0') {
    lVar5 = param_1;
    FUN_10447a810();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar6 + _DAT_11307d460) = 0;
    *(long *)(lVar6 + _DAT_11307d488) = param_1;
    *(undefined8 *)(lVar6 + _DAT_11307d478) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d480) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d468) = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
  }
  else {
    if (param_3 == '\x01') {
      lVar5 = param_1;
      FUN_10447a810();
      lVar6 = lVar5;
      _objc_allocWithZone();
      *(undefined1 *)(lVar6 + _DAT_11307d460) = 1;
      *(undefined8 *)(lVar6 + _DAT_11307d488) = 0;
      *(long *)(lVar6 + _DAT_11307d478) = param_1;
      *(undefined8 *)(lVar6 + _DAT_11307d480) = param_2;
      *(undefined8 *)(lVar6 + _DAT_11307d468) = 0;
      puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar2 = PTR_s_init_1125d9248;
      lVar3 = param_1;
      lStack_60 = lVar6;
      lStack_58 = lVar5;
      _objc_retain(param_1);
      uVar4 = param_2;
      _objc_retain(param_2);
      _objc_retain(lVar3);
      _objc_retain(uVar4);
      _objc_msgSendSuper2(&lStack_60,puVar2);
      func_0x000101769d44(param_1,param_2,1);
      _objc_release(lVar3);
      _objc_release(uVar4);
      return;
    }
    lVar5 = param_1;
    FUN_10447a810();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar6 + _DAT_11307d460) = 2;
    *(undefined8 *)(lVar6 + _DAT_11307d488) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d478) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d480) = 0;
    *(long *)(lVar6 + _DAT_11307d468) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    plVar7 = &lStack_50;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
  }
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104479ef0; end: 104479f37;  */

undefined8 FUN_104479ef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10447a528();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104479f38; end: 104479fe3;  */

void FUN_104479f38(void)

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



/* Entry: 104479fe4; end: 10447a01b;  */

void FUN_104479fe4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10447a01c; end: 10447a03f; -[SCImageSource description] */

void FUN_10447a01c(void)

{
  FUN_10447a528();
  func_0x000101769d44();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10447a040; end: 10447a087; -[SCImageSource init] */

void FUN_10447a040(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCImageFetchingServices/ImageSourceWrapper.swift",0x30,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a088);
  (*pcVar1)();
}



/* Entry: 10447a088; end: 10447a08f; -[SCImageSource copyWithZone:] */

void FUN_10447a088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10447a090; end: 10447a0c7; +[SCImageSource simpleWithConfig:] */

void FUN_10447a090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10447a604();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447a0c8; end: 10447a127; +[SCImageSource dynamicImageWithConfig:contentKey:] */

void FUN_10447a0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10447a6a8(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447a128; end: 10447a16f; +[SCImageSource onDemandWithResource:scale:] */

void FUN_10447a128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  FUN_10447a760(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447a170; end: 10447a233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a170(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307d460) == '\0') {
    if (*(long *)(unaff_x20 + _DAT_11307d488) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a228);
      (*pcVar1)();
    }
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_11307d460) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11307d478) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a224);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_11307d480) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a230);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11307d468) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a22c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307d470) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a234);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307d470));
  }
  return;
}



/* Entry: 10447a234; end: 10447a297; -[SCImageSource matchSimple:dynamicImage:onDemand:] */

void FUN_10447a234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10447a170(FUN_10447a9d8,auStack_40,0x10447a9e8,auStack_60,0x10447a9fc,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10447a298; end: 10447a2cb;  */

void FUN_10447a298(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447a2cc; end: 10447a323; -[SCImageSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a2cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d488));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d478));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d480));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d468));
  return;
}



/* Entry: 10447a324; end: 10447a527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a324(long param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_70;
  if (param_3 == '\0') {
    lVar5 = param_1;
    FUN_10447a810();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar6 + _DAT_11307d460) = 0;
    *(long *)(lVar6 + _DAT_11307d488) = param_1;
    *(undefined8 *)(lVar6 + _DAT_11307d478) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d480) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d468) = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
  }
  else {
    if (param_3 == '\x01') {
      lVar5 = param_1;
      FUN_10447a810();
      lVar6 = lVar5;
      _objc_allocWithZone();
      *(undefined1 *)(lVar6 + _DAT_11307d460) = 1;
      *(undefined8 *)(lVar6 + _DAT_11307d488) = 0;
      *(long *)(lVar6 + _DAT_11307d478) = param_1;
      *(undefined8 *)(lVar6 + _DAT_11307d480) = param_2;
      *(undefined8 *)(lVar6 + _DAT_11307d468) = 0;
      puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar2 = PTR_s_init_1125d9248;
      lVar3 = param_1;
      lStack_60 = lVar6;
      lStack_58 = lVar5;
      _objc_retain(param_1);
      uVar4 = param_2;
      _objc_retain(param_2);
      _objc_retain(lVar3);
      _objc_retain(uVar4);
      _objc_msgSendSuper2(&lStack_60,puVar2);
      func_0x000101769d44(param_1,param_2,1);
      _objc_release(lVar3);
      _objc_release(uVar4);
      return;
    }
    lVar5 = param_1;
    FUN_10447a810();
    lVar6 = lVar5;
    _objc_allocWithZone();
    *(undefined1 *)(lVar6 + _DAT_11307d460) = 2;
    *(undefined8 *)(lVar6 + _DAT_11307d488) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d478) = 0;
    *(undefined8 *)(lVar6 + _DAT_11307d480) = 0;
    *(long *)(lVar6 + _DAT_11307d468) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _DAT_11307d470);
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    plVar7 = &lStack_50;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
  }
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447a528; end: 10447a603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10447a528(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11307d460) == '\0') {
    lVar2 = *(long *)(param_1 + _DAT_11307d488);
    lVar3 = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a5f8);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_11307d460) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_11307d478);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a5f4);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_1 + _DAT_11307d480);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a600);
      (*pcVar1)();
    }
    _objc_retain(lVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11307d468);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a5fc);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    if (*(char *)(param_1 + _DAT_11307d470 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10447a604);
      (*pcVar1)();
    }
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 10447a604; end: 10447a6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a604(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10447a810();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d460) = 0;
  *(long *)(lVar4 + _DAT_11307d488) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307d478) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d480) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d468) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 10447a6a8; end: 10447a75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a6a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10447a810();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d460) = 1;
  *(undefined8 *)(lVar4 + _DAT_11307d488) = 0;
  *(long *)(lVar4 + _DAT_11307d478) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307d480) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11307d468) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d470);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10447a760; end: 10447a80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447a760(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_2;
  FUN_10447a810();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307d460) = 2;
  *(undefined8 *)(lVar4 + _DAT_11307d488) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d478) = 0;
  *(undefined8 *)(lVar4 + _DAT_11307d480) = 0;
  *(long *)(lVar4 + _DAT_11307d468) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307d470);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10447a810; end: 10447a82f;  */

void FUN_10447a810(void)

{
  _objc_opt_self(&PTR_PTR_1129bcee8);
  return;
}



/* Entry: 10447a830; end: 10447a997;  */

int FUN_10447a830(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10447a8ac;
        goto LAB_10447a890;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10447a890:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10447a8ac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10447a998; end: 10447a9d7;  */

void FUN_10447a998(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd062f4;
  _swift_getWitnessTable(&UNK_10dd062f4,&UNK_110776aa0);
  puRam000000011307d4b8 = puVar1;
  return;
}



/* Entry: 10447a9d8; end: 10447aa0b;  */

void FUN_10447a9d8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010447a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10447aa0c; end: 10447aa4b;  */

void FUN_10447aa0c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') && (param_3 != '\x02')) {
    if (param_3 != '\x01') {
      return;
    }
    _objc_retain();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10447aa4c; end: 10447aa5f;  */

void FUN_10447aa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e80af44);
  return;
}



/* Entry: 10447aa60; end: 10447ab03;  */

void FUN_10447aa60(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dd063d8;
    lVar1 = 0x13f;
    __s10Foundation4DateVMa();
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &UNK_10dd063f0;
      puStack_28 = &UNK_10dd06408;
      _swift_initStructMetadata(param_1,0,5,&lStack_48,param_1 + 0x20);
    }
  }
  return;
}


