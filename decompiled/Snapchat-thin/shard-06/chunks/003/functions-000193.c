/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10468080c; end: 104680b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468080c(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308be48));
  if (((undefined8 *)(unaff_x20 + _DAT_11308be50))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308be50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11308be58))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308be58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308be60);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308be68);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104680b2c; end: 104680bff;  */

void FUN_104680b2c(void)

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



/* Entry: 104680c00; end: 104680c1f;  */

void FUN_104680c00(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104680c20; end: 104680c47; -[SCAdDeeplinkEventType description] */

void FUN_104680c20(void)

{
  _objc_retain();
  func_0x000104681510();
  FUN_104663748();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680c48; end: 104680c8f; -[SCAdDeeplinkEventType init] */

void FUN_104680c48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdDeeplinkEventTypeWrapper.swift",0x39,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104680c90);
  (*pcVar1)();
}



/* Entry: 104680c90; end: 104680cc3; -[SCAdDeeplinkEventType hash] */

undefined8 FUN_104680c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10468080c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104680cc4; end: 104680d43; -[SCAdDeeplinkEventType isEqual:] */

uint FUN_104680cc4(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010468094c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104680d44; end: 104680d47; -[SCAdDeeplinkEventType copyWithZone:] */

void FUN_104680d44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104680d48; end: 104680def; +[SCAdDeeplinkEventType attachmentTriggeredWithDeeplinkUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680df0; end: 104680e9b; +[SCAdDeeplinkEventType deeplinkAttemptWithDeeplinkUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680e9c; end: 104680f27; +[SCAdDeeplinkEventType deeplinkOpenedWithIsInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680e9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = param_3;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680f28; end: 104680f2f; +[SCAdDeeplinkEventType fellbackToWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680f28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680f30; end: 104680fbf; +[SCAdDeeplinkEventType fellbackToAppInstallWithCustomProductPageEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680f30(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680fc0; end: 104680fc7; +[SCAdDeeplinkEventType fellbackToDefaultBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680fc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104680fc8; end: 104681157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104680fc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308be48) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308be58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11308be60) = 2;
  *(undefined1 *)(lVar2 + _DAT_11308be68) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104681158; end: 1046811f3; -[SCAdDeeplinkEventType matchAttachmentTriggered:deeplinkAttempt:deeplinkOpened:fellbackToWebview:fellbackToAppInstall:fellbackToDefaultBrowser:] */

void FUN_104681158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000104681054(0x104681834,auStack_40,0x10468184c,auStack_60,0x10468183c,auStack_80,
                      0x104681844,auStack_a0,0x104681854,auStack_c0,0x104681850,auStack_e0);
  _objc_release(param_1);
  return;
}



/* Entry: 1046811f4; end: 104681227;  */

void FUN_1046811f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104681228; end: 104681267; -[SCAdDeeplinkEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681228(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308be50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308be58 + 8))
  ;
  return;
}



/* Entry: 104681268; end: 10468165b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681268(long param_1,long param_2,byte param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long alStack_90 [2];
  long alStack_80 [2];
  long alStack_70 [2];
  long alStack_60 [2];
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar6 = alStack_90;
  lVar4 = param_1;
  if (param_3 < 2) {
    if (param_3 == 0) {
      FUN_10468165c();
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined1 *)(lVar5 + _DAT_11308be48) = 0;
      plVar2 = (long *)(lVar5 + _DAT_11308be50);
      *plVar2 = param_1;
      plVar2[1] = param_2;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be58);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar5 + _DAT_11308be60) = 2;
      *(undefined1 *)(lVar5 + _DAT_11308be68) = 2;
      alStack_90[0] = lVar5;
    }
    else {
      FUN_10468165c();
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined1 *)(lVar5 + _DAT_11308be48) = 1;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be50);
      *puVar1 = 0;
      puVar1[1] = 0;
      plVar6 = (long *)(lVar5 + _DAT_11308be58);
      *plVar6 = param_1;
      plVar6[1] = param_2;
      *(undefined1 *)(lVar5 + _DAT_11308be60) = 2;
      *(undefined1 *)(lVar5 + _DAT_11308be68) = 2;
      plVar6 = alStack_80;
      alStack_80[0] = lVar5;
    }
  }
  else {
    bVar3 = (byte)param_1;
    if (param_3 == 2) {
      FUN_10468165c();
      lVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)(lVar5 + _DAT_11308be48) = 2;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be58);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(byte *)(lVar5 + _DAT_11308be60) = bVar3 & 1;
      *(undefined1 *)(lVar5 + _DAT_11308be68) = 2;
      plVar6 = alStack_70;
      lVar4 = param_1;
      alStack_70[0] = lVar5;
    }
    else if (param_3 == 3) {
      FUN_10468165c();
      lVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)(lVar5 + _DAT_11308be48) = 4;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + _DAT_11308be58);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar5 + _DAT_11308be60) = 2;
      *(byte *)(lVar5 + _DAT_11308be68) = bVar3 & 1;
      plVar6 = alStack_50;
      lVar4 = param_1;
      alStack_50[0] = lVar5;
    }
    else {
      FUN_10468165c();
      lVar5 = lVar4;
      _objc_allocWithZone();
      if (param_2 == 0 && param_1 == 0) {
        *(undefined1 *)(lVar5 + _DAT_11308be48) = 3;
        puVar1 = (undefined8 *)(lVar5 + _DAT_11308be50);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + _DAT_11308be58);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(lVar5 + _DAT_11308be60) = 2;
        *(undefined1 *)(lVar5 + _DAT_11308be68) = 2;
        plVar6 = alStack_60;
        alStack_60[0] = lVar5;
      }
      else {
        *(undefined1 *)(lVar5 + _DAT_11308be48) = 5;
        puVar1 = (undefined8 *)(lVar5 + _DAT_11308be50);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + _DAT_11308be58);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(lVar5 + _DAT_11308be60) = 2;
        *(undefined1 *)(lVar5 + _DAT_11308be68) = 2;
        plVar6 = alStack_40;
        alStack_40[0] = lVar5;
      }
    }
  }
  plVar6[1] = lVar4;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468165c; end: 10468167b;  */

void FUN_10468165c(void)

{
  _objc_opt_self(&PTR_PTR_1129cf7f8);
  return;
}



/* Entry: 10468167c; end: 1046817e3;  */

int FUN_10468167c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1046816f8;
        goto LAB_1046816dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046816dc:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1046816f8:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1046817e4; end: 104681823;  */

void FUN_1046817e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308be98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2580c;
  _swift_getWitnessTable(&UNK_10dd2580c,&UNK_110795f00);
  puRam000000011308be98 = puVar1;
  return;
}



/* Entry: 104681824; end: 104681857;  */

ulong FUN_104681824(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 104681858; end: 104681867; -[SCAdDeeplinkEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bea0));
  return;
}



/* Entry: 104681868; end: 10468187f; -[SCAdDeeplinkEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bea8));
  return;
}



/* Entry: 104681880; end: 1046819bf; -[SCAdDeeplinkEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bea0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bea8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1046819c0; end: 104681a43; -[SCAdDeeplinkEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1046819c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bea0);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bea8);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104681a44; end: 104681b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104681a44(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bea0);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bea8);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bea8);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 104681b1c; end: 104681b9b; -[SCAdDeeplinkEventV2 isEqual:] */

uint FUN_104681b1c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104681a44(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104681b9c; end: 104681b9f; -[SCAdDeeplinkEventV2 copyWithZone:] */

void FUN_104681b9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104681ba0; end: 104681bbb; -[SCAdDeeplinkEventV2 description] */

void FUN_104681ba0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104681bbc; end: 104681c37; -[SCAdDeeplinkEventV2 init] */

void FUN_104681bbc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdDeeplinkEventV2Wrapper.swift",0x37,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104681c04);
  (*pcVar1)();
}



/* Entry: 104681c38; end: 104681c6f; -[SCAdDeeplinkEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681c38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bea8));
  return;
}



/* Entry: 104681c70; end: 104681c8f;  */

void FUN_104681c70(void)

{
  _objc_opt_self(&PTR_PTR_1129cf8d8);
  return;
}



/* Entry: 104681c90; end: 104681c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681c90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bea0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bea8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104681c94; end: 104681d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681c94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = *(undefined1 *)((long)param_1 + 0x11);
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = *(undefined1 *)(param_1 + 5);
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = param_1[6];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104681d40; end: 104681e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104681d40(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bed8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bee0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308bee8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308bef0));
  if (((undefined8 *)(unaff_x20 + _DAT_11308bef8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308bef8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308bf00));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308bf08));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104681e38; end: 104681fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104681e38(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_11308bed8);
      lVar10 = *(long *)(lStack_88 + _DAT_11308bed8);
      lVar13 = *(long *)(unaff_x20 + _DAT_11308bee0);
      lVar17 = *(long *)(lStack_88 + _DAT_11308bee0);
      bVar1 = *(byte *)(unaff_x20 + _DAT_11308bee8);
      bVar2 = *(byte *)(lStack_88 + _DAT_11308bee8);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11308bef0);
      bVar4 = *(byte *)(lStack_88 + _DAT_11308bef0);
      lVar8 = ((long *)(unaff_x20 + _DAT_11308bef8))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_11308bef8))[1];
      uVar14 = (uint)(lVar8 == 0 && lVar9 == 0);
      if (lVar8 != 0 && lVar9 != 0) {
        lVar11 = *(long *)(unaff_x20 + _DAT_11308bef8);
        if (lVar11 == *(long *)(lStack_88 + _DAT_11308bef8) && lVar8 == lVar9) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar11);
          uVar14 = (uint)lVar11;
        }
      }
      bVar5 = *(byte *)(unaff_x20 + _DAT_11308bf00);
      bVar6 = *(byte *)(lStack_88 + _DAT_11308bf00);
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11308bf08);
      uVar16 = *(undefined8 *)(lStack_88 + _DAT_11308bf08);
      _objc_release();
      return uVar14 & ((byte)((lVar12 != lVar10 || lVar13 != lVar17) | bVar1 ^ bVar2 | bVar3 ^ bVar4
                             ) ^ 0xffffffff) & ((bVar5 ^ bVar6) ^ 0xffffffff) &
             (uint)((int)uVar15 == (int)uVar16);
    }
  }
  return 0;
}



/* Entry: 104681fe0; end: 104681fef; -[SCAdDeeplinkParseResult deepLinkToAppCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104681fe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bed8);
}



/* Entry: 104681ff0; end: 104681fff; -[SCAdDeeplinkParseResult deepLinkToAppInstallCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104681ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bee0);
}



/* Entry: 104682000; end: 10468200f; -[SCAdDeeplinkParseResult deepLinkFallbackToWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104682000(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bee8);
}



/* Entry: 104682010; end: 10468201f; -[SCAdDeeplinkParseResult deepLinkFallbackToDefaultBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104682010(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bef0);
}



/* Entry: 104682020; end: 10468207b; -[SCAdDeeplinkParseResult deepLinkUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308bef8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308bef8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10468207c; end: 10468208b; -[SCAdDeeplinkParseResult customProductPageEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10468207c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308bf00);
}



/* Entry: 10468208c; end: 10468209b; -[SCAdDeeplinkParseResult appInstallStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10468208c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bf08);
}



/* Entry: 10468209c; end: 10468216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468209c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bed8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bee0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11308bee8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11308bef0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308bef8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11308bf00) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf08) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104682170; end: 10468225b; -[SCAdDeeplinkParseResult initWithDeepLinkToAppCount:deepLinkToAppInstallCount:deepLinkFallbackToWebview:deepLinkFallbackToDefaultBrowser:deepLinkUrl:customProductPageEnabled:appInstallStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682170(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,long param_7,undefined1 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11308bed8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bee0) = param_4;
  *(undefined1 *)(param_1 + _DAT_11308bee8) = param_5;
  *(undefined1 *)(param_1 + _DAT_11308bef0) = param_6;
  plVar1 = (long *)(param_1 + _DAT_11308bef8);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11308bf00) = param_8;
  *(undefined8 *)(param_1 + _DAT_11308bf08) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468225c; end: 10468228f; -[SCAdDeeplinkParseResult hash] */

undefined8 FUN_10468225c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104681d40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104682290; end: 10468230f; -[SCAdDeeplinkParseResult isEqual:] */

uint FUN_104682290(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104681e38(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104682310; end: 104682313; -[SCAdDeeplinkParseResult copyWithZone:] */

void FUN_104682310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104682314; end: 10468234b; -[SCAdDeeplinkParseResult description] */

void FUN_104682314(void)

{
  undefined1 auStack_48 [56];
  
  _objc_retain();
  FUN_1046823dc(auStack_48);
  FUN_104662df8(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468234c; end: 1046823c7; -[SCAdDeeplinkParseResult init] */

void FUN_10468234c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdDeeplinkParseResultWrapper.swift",0x3b,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104682394);
  (*pcVar1)();
}



/* Entry: 1046823c8; end: 1046823db; -[SCAdDeeplinkParseResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046823c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308bef8 + 8))
  ;
  return;
}



/* Entry: 1046823dc; end: 1046824eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046823dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [56];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_11308bed8);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11308bee0);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11308bee8);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11308bef0);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11308bef8);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11308bef8))[1];
  uVar5 = *(undefined1 *)(param_2 + _DAT_11308bf00);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11308bf08);
  _swift_bridgeObjectRetain(uVar2);
  _objc_release(param_2);
  uStack_d8 = uVar6;
  uStack_d0 = uVar7;
  uStack_c8 = uVar3;
  uStack_c7 = uVar4;
  uStack_c0 = uVar1;
  uStack_b8 = uVar2;
  uStack_b0 = uVar5;
  uStack_a8 = uVar8;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  uStack_8f = uVar4;
  uStack_88 = uVar1;
  uStack_80 = uVar2;
  uStack_78 = uVar5;
  uStack_70 = uVar8;
  FUN_104663fa0(&uStack_d8,auStack_110);
  FUN_104662df8(&uStack_a0);
  param_1[1] = uStack_d0;
  *param_1 = uStack_d8;
  param_1[3] = uStack_c0;
  param_1[2] = CONCAT62(uStack_c6,CONCAT11(uStack_c7,uStack_c8));
  param_1[5] = CONCAT71(uStack_af,uStack_b0);
  param_1[4] = uStack_b8;
  param_1[6] = uStack_a8;
  return;
}



/* Entry: 1046824ec; end: 10468250b;  */

void FUN_1046824ec(void)

{
  _objc_opt_self(&PTR_PTR_1129cf9a8);
  return;
}



/* Entry: 10468250c; end: 10468251b; -[SCAdEndCardEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468250c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bf38));
  return;
}



/* Entry: 10468251c; end: 104682533; -[SCAdEndCardEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468251c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bf40));
  return;
}



/* Entry: 104682534; end: 104682673; -[SCAdEndCardEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bf38) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bf40) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104682674; end: 1046826f7; -[SCAdEndCardEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104682674(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bf38);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bf40);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046826f8; end: 1046827cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046826f8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bf38);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bf40);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bf40);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046827d0; end: 10468284f; -[SCAdEndCardEvent isEqual:] */

uint FUN_1046827d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046826f8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104682850; end: 104682853; -[SCAdEndCardEvent copyWithZone:] */

void FUN_104682850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104682854; end: 104682913; -[SCAdEndCardEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104682914; end: 104682943;  */

void FUN_104682914(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104682944(param_1);
  return;
}



/* Entry: 104682944; end: 104682b57;  */

undefined8 FUN_104682944(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e4f4d4d4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e4f4d4d4f43,0xe600000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_104682b00:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_104682b58(0,0x11308bd50,&PTR_PTR_1126b9150);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544e455645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_104682b00;
      }
      uVar2 = 0;
      FUN_104682b58(0,0x11308bf48,&PTR_PTR_1126b90b8);
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c000060();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104682b58; end: 104682b97;  */

void FUN_104682b58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104682b98; end: 104682bbf; -[SCAdEndCardEvent initWithCoder:] */

void FUN_104682b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104682944();
  return;
}



/* Entry: 104682bc0; end: 104682bdb; -[SCAdEndCardEvent description] */

void FUN_104682bc0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104682bdc; end: 104682c57; -[SCAdEndCardEvent init] */

void FUN_104682bdc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdEndCardEventWrapper.swift",0x34,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104682c24);
  (*pcVar1)();
}



/* Entry: 104682c58; end: 104682c8f; -[SCAdEndCardEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682c58(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bf38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bf40));
  return;
}



/* Entry: 104682c90; end: 104682caf;  */

void FUN_104682c90(void)

{
  _objc_opt_self(&PTR_PTR_1129cfaa0);
  return;
}



/* Entry: 104682cb0; end: 104682cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682cb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bf38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf40) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104682cb4; end: 104682cc3; -[SCAdInstantPageEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bf78));
  return;
}



/* Entry: 104682cc4; end: 104682d13; -[SCAdInstantPageEvent events] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308bf80);
  func_0x0001018892d8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104682d14; end: 104682d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682d14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bf78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf80) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104682d1c; end: 104682e6b; -[SCAdInstantPageEvent initWithCommon:events:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104682d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = 0;
  func_0x0001018892d8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  *(undefined8 *)(param_1 + _DAT_11308bf78) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bf80) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104682e6c; end: 104682ff7; -[SCAdInstantPageEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104682e6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bf78);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308bf80);
  uVar1 = 0;
  func_0x0001018892d8(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104682ff8; end: 104683077; -[SCAdInstantPageEvent isEqual:] */

uint FUN_104682ff8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104682f20(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104683078; end: 10468307b; -[SCAdInstantPageEvent copyWithZone:] */

void FUN_104683078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468307c; end: 104683097; -[SCAdInstantPageEvent description] */

void FUN_10468307c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104683098; end: 104683113; -[SCAdInstantPageEvent init] */

void FUN_104683098(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdInstantPageEventWrapper.swift",0x38,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046830e0);
  (*pcVar1)();
}



/* Entry: 104683114; end: 10468314b; -[SCAdInstantPageEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683114(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bf78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308bf80));
  return;
}



/* Entry: 10468314c; end: 10468316b;  */

void FUN_10468314c(void)

{
  _objc_opt_self(&PTR_PTR_1129cfb78);
  return;
}



/* Entry: 10468316c; end: 10468316f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468316c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bf78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bf80) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104683170; end: 10468317f; -[SCAdInstantPageOperationalEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bfb0));
  return;
}



/* Entry: 104683180; end: 104683193; -[SCAdInstantPageOperationalEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bfb8));
  return;
}



/* Entry: 104683194; end: 10468326f; -[SCAdInstantPageOperationalEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308bfb0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308bfb8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104683270; end: 1046832f3; -[SCAdInstantPageOperationalEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683270(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bfb0);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308bfb8);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1046832f4; end: 1046833cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1046832f4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308bfb0);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308bfb8);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308bfb8);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 1046833cc; end: 10468344b; -[SCAdInstantPageOperationalEvent isEqual:] */

uint FUN_1046833cc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1046832f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468344c; end: 10468344f; -[SCAdInstantPageOperationalEvent copyWithZone:] */

void FUN_10468344c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104683450; end: 10468346b; -[SCAdInstantPageOperationalEvent description] */

void FUN_104683450(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468346c; end: 1046834e7; -[SCAdInstantPageOperationalEvent init] */

void FUN_10468346c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdInstantPageOperationalEventWrapper.swift",0x43,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046834b4);
  (*pcVar1)();
}



/* Entry: 1046834e8; end: 10468351f; -[SCAdInstantPageOperationalEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1046834e8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308bfb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308bfb8));
  return;
}



/* Entry: 104683520; end: 10468353f;  */

void FUN_104683520(void)

{
  _objc_opt_self(&PTR_PTR_1129cfc48);
  return;
}



/* Entry: 104683540; end: 104683543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683540(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308bfb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308bfb8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104683544; end: 104683553; -[SCAdInteractionEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104683544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308bfe8));
  return;
}



/* Entry: 104683554; end: 104683563; -[SCAdInteractionEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bff0);
}



/* Entry: 104683564; end: 104683573; -[SCAdInteractionEvent intentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104683564(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308bff8);
}



/* Entry: 104683574; end: 104683587; -[SCAdInteractionEvent location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104683574(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308c000);
}


