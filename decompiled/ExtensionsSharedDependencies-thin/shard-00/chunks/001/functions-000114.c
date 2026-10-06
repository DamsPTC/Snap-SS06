/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0020cc9c; end: 0020ccd7;  */

void FUN_0020cc9c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020ccd8; end: 0020ccf3;  */

void FUN_0020ccd8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020ccf4; end: 0020cd3b; -[SCAttributedARBarSubtask init] */

void FUN_0020ccf4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0xb2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20cd3c);
  (*pcVar1)();
}



/* Entry: 0020cd3c; end: 0020cd47; -[SCAttributedARBarSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cd3c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af76d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020cd48; end: 0020cd53; -[SCAttributedARBarSubtask isEqual:] */

uint FUN_0020cd48(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020cf00(&uStack_50,&DAT_00af76d8);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020cd54; end: 0020cde3;  */

uint FUN_0020cd54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_0020cf00(&uStack_50,param_4);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020cde4; end: 0020cde7;  */

void FUN_0020cde4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020cde8; end: 0020cdf7; +[SCAttributedARBarSubtask activationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cde8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d8) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cdf8; end: 0020ce07; +[SCAttributedARBarSubtask replyActivationWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cdf8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d8) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020ce08; end: 0020ce17; +[SCAttributedARBarSubtask miniCameraLensIconWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020ce08(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76d8) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020ce18; end: 0020ce63; -[SCAttributedARBarSubtask matchActivationWorkflow:replyActivationWorkflow:miniCameraLensIconWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020ce18(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af76d8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af76d8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0020ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020ce64; end: 0020ceab; -[SCAttributedLensCarouselPreviewSubtask init] */

void FUN_0020ce64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x121,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20ceac);
  (*pcVar1)();
}



/* Entry: 0020ceac; end: 0020ceb7; -[SCAttributedLensCarouselPreviewSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020ceac(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af76e0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020ceb8; end: 0020ceff;  */

void FUN_0020ceb8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020cf00; end: 0020cf9f;  */

bool FUN_0020cf00(undefined8 param_1,long *param_2)

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
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0020cfa0; end: 0020cfab; -[SCAttributedLensCarouselPreviewSubtask isEqual:] */

uint FUN_0020cfa0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020cf00(&uStack_50,&DAT_00af76e0);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020cfac; end: 0020cfbb; +[SCAttributedLensCarouselPreviewSubtask iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cfac(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76e0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cfbc; end: 0020cfcb; +[SCAttributedLensCarouselPreviewSubtask closeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020cfbc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af76e0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020cfcc; end: 0020d023;  */

void FUN_0020cfcc(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

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
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d024; end: 0020d03f; -[SCAttributedLensCarouselPreviewSubtask matchIconProvider:closeButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d024(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00af76e0) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0020d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 0020d040; end: 0020d0eb;  */

void FUN_0020d040(void)

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



/* Entry: 0020d0ec; end: 0020d10f; -[SCAttributedLensTask description] */

void FUN_0020d0ec(void)

{
  _objc_retain();
  func_0x0020d8a0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d110; end: 0020d157; -[SCAttributedLensTask init] */

void FUN_0020d110(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedLensTaskWrapper.swift",0x2f,2,0x1ec,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20d158);
  (*pcVar1)();
}



/* Entry: 0020d158; end: 0020d15f; +[SCAttributedLensTask lensCarouselOnCameraWorkflowActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d158(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d160; end: 0020d167; +[SCAttributedLensTask lensInMainCameraStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d160(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d168; end: 0020d16f; +[SCAttributedLensTask realTimeScanInMainCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d168(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 2;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d170; end: 0020d1a7; +[SCAttributedLensTask lensBuilder:] */

void FUN_0020d170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_0020db20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0020d1a8; end: 0020d1af; +[SCAttributedLensTask dataProviderRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d1a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 4;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d1b0; end: 0020d1b7; +[SCAttributedLensTask dataFetchingMediator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d1b0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 5;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d1b8; end: 0020d1bf; +[SCAttributedLensTask carouselBadgingWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d1b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 6;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d1c0; end: 0020d1c7; +[SCAttributedLensTask lensDataProviderUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d1c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 7;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d1c8; end: 0020d1cf; +[SCAttributedLensTask lensDataProviderPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d1c8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 8;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d1d0; end: 0020d207; +[SCAttributedLensTask arBar:] */

void FUN_0020d1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0020dbbc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0020d208; end: 0020d293; +[SCAttributedLensTask lensCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 10;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d294; end: 0020d2cb; +[SCAttributedLensTask lensCarouselPreview:] */

void FUN_0020d294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0020dc58();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0020d2cc; end: 0020d2d3; +[SCAttributedLensTask lensExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0xc;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2d4; end: 0020d2db; +[SCAttributedLensTask turnBasedAssociatedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0xd;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2dc; end: 0020d2e3; +[SCAttributedLensTask imagineLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2dc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0xe;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2e4; end: 0020d2eb; +[SCAttributedLensTask dailyGames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2e4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0xf;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2ec; end: 0020d2f3; +[SCAttributedLensTask playGamesOverlayCompose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0x10;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2f4; end: 0020d2fb; +[SCAttributedLensTask gamesFriendsFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2f4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0x11;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d2fc; end: 0020d303; +[SCAttributedLensTask leaderboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d2fc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0x12;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d304; end: 0020d30b; +[SCAttributedLensTask snapcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d304(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0x13;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d30c; end: 0020d313; +[SCAttributedLensTask lensPlusExclusiveLensesPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d30c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = 0x14;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d314; end: 0020d39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d314(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af76e8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00af76f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7708) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020d3a0; end: 0020d5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d3a0(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                 undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                 undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                 code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                 undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                 undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                 code *param_30,undefined4 param_31,undefined4 param_32,code *param_33,
                 undefined4 param_34,undefined4 param_35,code *param_36,undefined4 param_37,
                 undefined4 param_38,code *param_39,undefined4 param_40,undefined4 param_41,
                 code *param_42,undefined4 param_43,undefined4 param_44,code *param_45,
                 undefined4 param_46,undefined4 param_47,code *param_48,undefined4 param_49,
                 undefined4 param_50,code *param_51,undefined4 param_52,undefined4 param_53,
                 code *param_54,undefined4 param_55,undefined4 param_56,code *param_57)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_00af76e8)) {
  case 0:
    param_57 = param_1;
    goto code_r0x0020d5a0;
  case 1:
    param_57 = param_3;
    goto code_r0x0020d5a0;
  case 2:
    param_57 = param_5;
    goto code_r0x0020d5a0;
  case 3:
    if (*(long *)(unaff_x20 + _DAT_00af76f0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20d5d0);
      (*pcVar1)();
    }
    (*param_7)();
    break;
  case 4:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
    break;
  case 7:
    (*param_18)();
    break;
  case 8:
    (*param_21)();
    break;
  case 9:
    if (*(long *)(unaff_x20 + _DAT_00af76f8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20d5cc);
      (*pcVar1)();
    }
    (*param_24)();
    break;
  case 10:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00af7700) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20d5d4);
      (*pcVar1)();
    }
    (*param_27)(*(undefined8 *)(unaff_x20 + _DAT_00af7700));
    break;
  case 0xb:
    if (*(long *)(unaff_x20 + _DAT_00af7708) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x20d5c8);
      (*pcVar1)();
    }
    (*param_30)();
    break;
  case 0xc:
    (*param_33)();
    break;
  case 0xd:
    (*param_36)();
    break;
  case 0xe:
    (*param_39)();
    break;
  case 0xf:
    (*param_42)();
    break;
  case 0x10:
    param_57 = param_45;
    goto code_r0x0020d5a0;
  case 0x11:
    param_57 = param_48;
    goto code_r0x0020d5a0;
  case 0x12:
    param_57 = param_51;
    goto code_r0x0020d5a0;
  case 0x13:
    param_57 = param_54;
    goto code_r0x0020d5a0;
  case 0x14:
code_r0x0020d5a0:
    (*param_57)();
  }
  return;
}



/* Entry: 0020d5d4; end: 0020d627;  */

void FUN_0020d5d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x20d5d4);
  (*pcVar1)();
}



/* Entry: 0020d628; end: 0020d81f; -[SCAttributedLensTask matchLensCarouselOnCameraWorkflowActivation:lensInMainCameraStartupComplete:realTimeScanInMainCamera:lensBuilder:dataProviderRegistry:dataFetchingMediator:carouselBadgingWorkflow:lensDataProviderUpdater:lensDataProviderPrefetch:arBar:lensCarousel:lensCarouselPreview:lensExplorer:turnBasedAssociatedData:imagineLens:dailyGames:playGamesOverlayCompose:gamesFriendsFeed:leaderboard:snapcode:lensPlusExclusiveLensesPrefetch:] */

void FUN_0020d628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
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
  
  uStack_110 = param_9;
  uStack_130 = param_10;
  uStack_150 = param_11;
  uStack_170 = param_12;
  uStack_190 = param_13;
  uStack_1b0 = param_14;
  uStack_1d0 = param_15;
  uStack_1f0 = param_16;
  uStack_210 = param_17;
  uStack_230 = param_18;
  uStack_250 = param_19;
  uStack_270 = param_20;
  uStack_290 = param_21;
  uStack_2b0 = param_22;
  uStack_2d0 = param_23;
  uStack_f0 = param_8;
  uStack_d0 = param_7;
  uStack_b0 = param_6;
  uStack_90 = param_5;
  uStack_70 = param_4;
  uStack_50 = param_3;
  _objc_retain();
  FUN_0020d3a0(FUN_0020e3e4,auStack_60,0x20e424,auStack_80,0x20e428,auStack_a0,0x20e494,auStack_c0,
               0x20e42c,auStack_e0,0x20e430,auStack_100,0x20e434,auStack_120,0x20e438,auStack_140,
               0x20e43c,auStack_160,0x20e3ec,auStack_180,0x20e3fc,auStack_1a0,0x20e498,auStack_1c0,
               0x20e440,auStack_1e0,0x20e444,auStack_200,0x20e448,auStack_220,0x20e44c,auStack_240,
               0x20e450,auStack_260,0x20e454,auStack_280,0x20e458,auStack_2a0,0x20e45c,auStack_2c0,
               0x20e460,auStack_2e0);
  _objc_release(param_1);
  return;
}



/* Entry: 0020d820; end: 0020d823;  */

void FUN_0020d820(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020d824; end: 0020d857;  */

void FUN_0020d824(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0020d858; end: 0020daab; -[SCAttributedLensTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020d858(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00af76f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00af76f8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7708));
  return;
}



/* Entry: 0020daac; end: 0020daff;  */

void FUN_0020daac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x20daac);
  (*pcVar1)();
}



/* Entry: 0020db00; end: 0020db1f;  */

ulong FUN_0020db00(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 0020db20; end: 0020dcf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020db20(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x0020dd54();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_00af76e8) = 3;
  *(long *)(lVar4 + _DAT_00af76f0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_00af76f8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00af7700);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_00af7708) = 0;
  puVar2 = PTR_s_init_00abbf70;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 0020dcf4; end: 0020dd73;  */

void FUN_0020dcf4(void)

{
  _objc_opt_self(&PTR_PTR_00acd1b8);
  return;
}



/* Entry: 0020dd74; end: 0020e2d7;  */

int FUN_0020dd74(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xeb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x14) {
      iVar2 = 4;
    }
    if (param_2 + 0x14 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0020ddf0;
        goto LAB_0020ddd4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0020ddd4:
      return ((uint)*param_1 | uVar1 << 8) - 0x14;
    }
  }
LAB_0020ddf0:
  iVar2 = *param_1 - 0x15;
  if (*param_1 < 0x15) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0020e2d8; end: 0020e317;  */

void FUN_0020e2d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eaf74;
  _swift_getWitnessTable(&UNK_007eaf74,&UNK_009be100);
  puRam0000000000af77b0 = puVar1;
  return;
}



/* Entry: 0020e318; end: 0020e31b;  */

void FUN_0020e318(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb014;
  _swift_getWitnessTable(&UNK_007eb014,&UNK_009be070);
  puRam0000000000af77b8 = puVar1;
  return;
}



/* Entry: 0020e31c; end: 0020e35b;  */

void FUN_0020e31c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb014;
  _swift_getWitnessTable(&UNK_007eb014,&UNK_009be070);
  puRam0000000000af77b8 = puVar1;
  return;
}



/* Entry: 0020e35c; end: 0020e35f;  */

void FUN_0020e35c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb0b4;
  _swift_getWitnessTable(&UNK_007eb0b4,&UNK_009bdfe0);
  puRam0000000000af77c0 = puVar1;
  return;
}



/* Entry: 0020e360; end: 0020e39f;  */

void FUN_0020e360(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb0b4;
  _swift_getWitnessTable(&UNK_007eb0b4,&UNK_009bdfe0);
  puRam0000000000af77c0 = puVar1;
  return;
}



/* Entry: 0020e3a0; end: 0020e3a3;  */

void FUN_0020e3a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb154;
  _swift_getWitnessTable(&UNK_007eb154,&UNK_009bdf50);
  puRam0000000000af77c8 = puVar1;
  return;
}



/* Entry: 0020e3a4; end: 0020e3e3;  */

void FUN_0020e3a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af77c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eb154;
  _swift_getWitnessTable(&UNK_007eb154,&UNK_009bdf50);
  puRam0000000000af77c8 = puVar1;
  return;
}



/* Entry: 0020e3e4; end: 0020e49b;  */

void FUN_0020e3e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00059b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0020e49c; end: 0020e49f; -[SCAttributedLensBuilderSubtask description] */

void FUN_0020e49c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e4a0; end: 0020e4a3; -[SCAttributedARBarSubtask description] */

void FUN_0020e4a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e4a4; end: 0020e4bf; -[SCAttributedLensCarouselPreviewSubtask description] */

void FUN_0020e4a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e4c0; end: 0020e4c3; -[SCAttributedLensBuilderSubtask copyWithZone:] */

void FUN_0020e4c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020e4c4; end: 0020e4cb; -[SCAttributedARBarSubtask copyWithZone:] */

void FUN_0020e4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020e4cc; end: 0020e4d3; -[SCAttributedLensCarouselPreviewSubtask copyWithZone:] */

void FUN_0020e4cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020e4d4; end: 0020e4e3; -[SCAttributedLensTask copyWithZone:] */

void FUN_0020e4d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020e4e4; end: 0020e583;  */

void FUN_0020e4e4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020e584; end: 0020e5a7;  */

void FUN_0020e584(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 0020e5a8; end: 0020e5ef; -[SCAttributedMapSettingsSubtask init] */

void FUN_0020e5a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMapTaskWrapper.swift",0x2e,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20e5f0);
  (*pcVar1)();
}



/* Entry: 0020e5f0; end: 0020e62b; -[SCAttributedMapSettingsSubtask hash] */

void FUN_0020e5f0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020e62c; end: 0020e6b7;  */

undefined8 FUN_0020e62c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    puVar1 = &uStack_58;
    _swift_dynamicCast(puVar1,auStack_50,PTR___sypN_0099b8d8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_release(uStack_58);
      return 1;
    }
  }
  return 0;
}



/* Entry: 0020e6b8; end: 0020e737; -[SCAttributedMapSettingsSubtask isEqual:] */

uint FUN_0020e6b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020e62c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0020e738; end: 0020e777; +[SCAttributedMapSettingsSubtask locationSharing] */

void FUN_0020e738(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e778; end: 0020e787; -[SCAttributedMapSettingsSubtask matchLocationSharing:] */

void FUN_0020e778(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0020e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020e788; end: 0020e7af;  */

void FUN_0020e788(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 0020e7b0; end: 0020e7eb;  */

void FUN_0020e7b0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0020e7ec; end: 0020e807;  */

void FUN_0020e7ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e808; end: 0020e84f; -[SCAttributedMapUISubtask init] */

void FUN_0020e808(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMapTaskWrapper.swift",0x2e,2,0x82,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20e850);
  (*pcVar1)();
}



/* Entry: 0020e850; end: 0020e85b; -[SCAttributedMapUISubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e850(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af77d0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020e85c; end: 0020e867; -[SCAttributedMapUISubtask isEqual:] */

uint FUN_0020e85c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020ea14(&uStack_50,&DAT_00af77d0);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020e868; end: 0020e8f7;  */

uint FUN_0020e868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_0020ea14(&uStack_50,param_4);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020e8f8; end: 0020e8fb;  */

void FUN_0020e8f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0020e8fc; end: 0020e90b; +[SCAttributedMapUISubtask general] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e8fc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af77d0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e90c; end: 0020e91b; +[SCAttributedMapUISubtask mapChromeV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e90c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af77d0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e91c; end: 0020e92b; +[SCAttributedMapUISubtask friendFocusCards] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e91c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af77d0) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020e92c; end: 0020e977; -[SCAttributedMapUISubtask matchGeneral:mapChromeV2:friendFocusCards:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e92c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af77d0) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af77d0) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0020e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0020e978; end: 0020e9bf; -[SCAttributedMapMessageSubtask init] */

void FUN_0020e978(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMapTaskWrapper.swift",0x2e,2,0xf1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x20e9c0);
  (*pcVar1)();
}



/* Entry: 0020e9c0; end: 0020e9cb; -[SCAttributedMapMessageSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020e9c0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af77d8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020e9cc; end: 0020ea13;  */

void FUN_0020e9cc(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0020ea14; end: 0020eab3;  */

bool FUN_0020ea14(undefined8 param_1,long *param_2)

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
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0020eab4; end: 0020eabf; -[SCAttributedMapMessageSubtask isEqual:] */

uint FUN_0020eab4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0020ea14(&uStack_50,&DAT_00af77d8);
  _objc_release(param_1);
  FUN_00027748(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0020eac0; end: 0020eacf; +[SCAttributedMapMessageSubtask externalPlaceUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020eac0(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af77d8) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020ead0; end: 0020eadf; +[SCAttributedMapMessageSubtask visitedBy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020ead0(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af77d8) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020eae0; end: 0020eb37;  */

void FUN_0020eae0(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

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
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0020eb38; end: 0020eb53; -[SCAttributedMapMessageSubtask matchExternalPlaceUrl:visitedBy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020eb38(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00af77d8) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0020eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}


