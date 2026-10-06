/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fad0d0; end: 103fad3ef;  */

long FUN_103fad0d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fad3f0; end: 103fad3ff; -[SCMediaImageImportStrategy retryImportMaxAttempts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fad3f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c040);
}



/* Entry: 103fad400; end: 103fad40f; -[SCMediaImageImportStrategy maxImageEdgeLengthForUpload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fad400(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c048);
}



/* Entry: 103fad410; end: 103fad41f; -[SCMediaImageImportStrategy allowDownloadFromiCloud] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fad410(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11303c050);
}



/* Entry: 103fad420; end: 103fad42f; -[SCMediaImageImportStrategy requestUnmodifiedOriginal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fad420(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11303c058);
}



/* Entry: 103fad430; end: 103fad43f; -[SCMediaImageImportStrategy deliveryMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fad430(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c060);
}



/* Entry: 103fad440; end: 103fad44f; -[SCMediaImageImportStrategy compressionQuality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fad440(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c068);
}



/* Entry: 103fad450; end: 103fad4eb; -[SCMediaImageImportStrategy downloadProgressHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fad450(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_11303c070);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_11303c070))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_103fad4ec;
    puStack_48 = &UNK_11072aed8;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 103fad4ec; end: 103fad59f;  */

void FUN_103fad4ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  _swift_retain(uVar2);
  uVar3 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_1,param_3,param_4,param_5);
  _swift_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 103fad5a0; end: 103fad673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fad5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c040) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11303c048) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11303c050) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11303c058) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11303c060) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11303c068) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c070);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fad674; end: 103fad77f; -[SCMediaImageImportStrategy initWithRetryImportMaxAttempts:maxImageEdgeLengthForUpload:allowDownloadFromiCloud:requestUnmodifiedOriginal:deliveryMode:compressionQuality:downloadProgressHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fad674(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_3;
  _swift_getObjectType();
  __Block_copy();
  if (param_9 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_11072aec0;
    _swift_allocObject(&UNK_11072aec0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_9;
    pcVar4 = FUN_103fade64;
  }
  *(undefined8 *)(param_3 + _DAT_11303c040) = param_5;
  *(undefined8 *)(param_3 + _DAT_11303c048) = param_1;
  *(undefined1 *)(param_3 + _DAT_11303c050) = param_6;
  *(undefined1 *)(param_3 + _DAT_11303c058) = param_7;
  *(undefined8 *)(param_3 + _DAT_11303c060) = param_8;
  *(undefined8 *)(param_3 + _DAT_11303c068) = param_2;
  puVar1 = (undefined8 *)(param_3 + _DAT_11303c070);
  *puVar1 = pcVar4;
  puVar1[1] = puVar3;
  lStack_70 = param_3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fad780; end: 103fad8e3;  */

void FUN_103fad780(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  }
  if (param_4 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(param_5 + 0x10))(param_1,param_5,param_2,param_3,param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103fad8e4; end: 103fada5f; -[SCMediaImageImportStrategy initWithRetryImportMaxAttempts:maxImageEdgeLengthForUpload:allowDownloadFromiCloud:requestUnmodifiedOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fad8e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11303c040) = param_4;
  *(undefined8 *)(param_2 + _DAT_11303c048) = param_1;
  *(undefined1 *)(param_2 + _DAT_11303c050) = param_5;
  *(undefined1 *)(param_2 + _DAT_11303c058) = param_6;
  *(undefined8 *)(param_2 + _DAT_11303c060) = 1;
  *(undefined8 *)(param_2 + _DAT_11303c068) = 0x3fe3333333333333;
  puVar1 = (undefined8 *)(param_2 + _DAT_11303c070);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fada60; end: 103fadb1b; -[SCMediaImageImportStrategy initWithRetryImportMaxAttempts:maxImageEdgeLengthForUpload:allowDownloadFromiCloud:requestUnmodifiedOriginal:compressionQuality:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fada60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_11303c040) = param_5;
  *(undefined8 *)(param_3 + _DAT_11303c048) = param_1;
  *(undefined1 *)(param_3 + _DAT_11303c050) = param_6;
  *(undefined1 *)(param_3 + _DAT_11303c058) = param_7;
  *(undefined8 *)(param_3 + _DAT_11303c068) = param_2;
  *(undefined8 *)(param_3 + _DAT_11303c060) = 1;
  puVar1 = (undefined8 *)(param_3 + _DAT_11303c070);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fadb1c; end: 103fadc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadb1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c040) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c048) = param_1[1];
  *(undefined1 *)(unaff_x20 + _DAT_11303c050) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_11303c058) = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined8 *)(unaff_x20 + _DAT_11303c060) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11303c068) = param_1[4];
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c070);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fadc7c; end: 103fadc7f; -[SCMediaImageImportStrategy copyWithZone:] */

void FUN_103fadc7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fadc80; end: 103fadcb3; -[SCMediaImageImportStrategy description] */

void FUN_103fadc80(void)

{
  undefined1 auStack_48 [56];
  
  FUN_103fadd44(auStack_48);
  FUN_103fade00(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fadcb4; end: 103fadd2f; -[SCMediaImageImportStrategy init] */

void FUN_103fadcb4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "MediaImportServices/MediaImageImportStrategyObjc.swift",0x36,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fadcfc);
  (*pcVar1)();
}



/* Entry: 103fadd30; end: 103fadd43; -[SCMediaImageImportStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadd30(long param_1)

{
  if (*(long *)(param_1 + _DAT_11303c070) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11303c070))[1]);
    return;
  }
  return;
}



/* Entry: 103fadd44; end: 103faddff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadd44(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_11303c040);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c048);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11303c050);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11303c058);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11303c060);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11303c068);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303c070);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11303c070))[1];
  func_0x0001027aa2b4(uVar1,uVar2);
  *param_1 = uVar5;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11) = uVar4;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return;
}



/* Entry: 103fade00; end: 103fade33;  */

undefined8 FUN_103fade00(undefined8 param_1)

{
  (*(code *)(undefined *)0x103fad0fc)();
  return param_1;
}



/* Entry: 103fade34; end: 103fade43;  */

void FUN_103fade34(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103fade44; end: 103fade63;  */

void FUN_103fade44(void)

{
  _objc_opt_self(&PTR_PTR_112973fd0);
  return;
}



/* Entry: 103fade64; end: 103fade87;  */

void FUN_103fade64(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  }
  if (param_4 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar1 + 0x10))(param_1,lVar1,param_2,param_3,param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103fade88; end: 103fade93; -[SCTranscodingRetryCrossPostPayload mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fade88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c0a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c0a0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fade94; end: 103fadea3; -[SCTranscodingRetryCrossPostPayload videoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fade94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c0a8));
  return;
}



/* Entry: 103fadea4; end: 103fadeb3; -[SCTranscodingRetryCrossPostPayload overlayData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c0b0));
  return;
}



/* Entry: 103fadeb4; end: 103fadec3; -[SCTranscodingRetryCrossPostPayload mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fadeb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c0b8);
}



/* Entry: 103fadec4; end: 103fadecf; -[SCTranscodingRetryCrossPostPayload encryptionKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c0c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c0c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faded0; end: 103fadedb; -[SCTranscodingRetryCrossPostPayload encryptionIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faded0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c0c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c0c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fadedc; end: 103fadf23;  */

void FUN_103fadedc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fadf24; end: 103fae0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fadf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c0a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303c0a8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11303c0b0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11303c0b8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c0c0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c0c8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fae0cc; end: 103fae1d3; -[SCTranscodingRetryCrossPostPayload initWithMediaId:videoData:overlayData:mediaType:encryptionKey:encryptionIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11303c0a0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11303c0a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11303c0b0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11303c0b8) = param_6;
  puVar1 = (undefined8 *)(param_1 + _DAT_11303c0c0);
  *puVar1 = param_7;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11303c0c8);
  *puVar1 = param_8;
  puVar1[1] = uVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 103fae1d4; end: 103fae233; -[SCTranscodingRetryCrossPostPayload init] */

void FUN_103fae1d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapUploader.TranscodingRetryCrossPostPayload",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fae200);
  (*pcVar1)();
}



/* Entry: 103fae234; end: 103fae2a7; -[SCTranscodingRetryCrossPostPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae234(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c0a0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c0a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c0b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c0c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11303c0c8 + 8))
  ;
  return;
}



/* Entry: 103fae2a8; end: 103fae2c7;  */

void FUN_103fae2a8(void)

{
  _objc_opt_self(&PTR_PTR_1129740d8);
  return;
}



/* Entry: 103fae2c8; end: 103fae2d7; -[_TtC14SCSnapUploader31SnapUploaderCoordinatorServices coordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c0f8));
  return;
}



/* Entry: 103fae2d8; end: 103fae323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae2d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c0f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fae324; end: 103fae37b; -[_TtC14SCSnapUploader31SnapUploaderCoordinatorServices initWithCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11303c0f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103fae37c; end: 103fae3db; -[_TtC14SCSnapUploader31SnapUploaderCoordinatorServices init] */

void FUN_103fae37c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapUploader.SnapUploaderCoordinatorServices",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fae3a8);
  (*pcVar1)();
}



/* Entry: 103fae3dc; end: 103fae3eb; -[_TtC14SCSnapUploader31SnapUploaderCoordinatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c0f8));
  return;
}



/* Entry: 103fae3ec; end: 103fae40b; -[SnapUploaderServices uploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae3ec(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11303c128));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fae40c; end: 103fae477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c128) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c130);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fae478; end: 103fae4d7; -[SnapUploaderServices init] */

void FUN_103fae478(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapUploader.SnapUploaderServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fae4a4);
  (*pcVar1)();
}



/* Entry: 103fae4d8; end: 103fae50f; -[SnapUploaderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae4d8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11303c130));
  return;
}



/* Entry: 103fae510; end: 103fae7e3;  */

void FUN_103fae510(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1[2]);
  return;
}



/* Entry: 103fae7e4; end: 103fae7f3; -[_TtC21SCSnapImageTranscoder27SnapImageTranscoderServices transcoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c160));
  return;
}



/* Entry: 103fae7f4; end: 103fae83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae7f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c160) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fae840; end: 103fae89f; -[_TtC21SCSnapImageTranscoder27SnapImageTranscoderServices init] */

void FUN_103fae840(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapImageTranscoder.SnapImageTranscoderServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fae86c);
  (*pcVar1)();
}



/* Entry: 103fae8a0; end: 103fae8af; -[_TtC21SCSnapImageTranscoder27SnapImageTranscoderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c160));
  return;
}



/* Entry: 103fae8b0; end: 103fae8bf; -[_TtC24SCSnapMemoriesTranscoder30SnapMemoriesTranscoderServices transcoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c198));
  return;
}



/* Entry: 103fae8c0; end: 103fae943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fae8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c190) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303c198) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103fae944; end: 103fae9a3; -[_TtC24SCSnapMemoriesTranscoder30SnapMemoriesTranscoderServices init] */

void FUN_103fae944(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapMemoriesTranscoder.SnapMemoriesTranscoderServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fae970);
  (*pcVar1)();
}



/* Entry: 103fae9a4; end: 103fae9db; -[_TtC24SCSnapMemoriesTranscoder30SnapMemoriesTranscoderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fae9a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303c190));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c198));
  return;
}



/* Entry: 103fae9dc; end: 103faea03;  */

void FUN_103fae9dc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11072b388;
  if (lRam000000011303c1c8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011303c1c8 = param_1;
  }
  return;
}



/* Entry: 103faea04; end: 103faea47;  */

void FUN_103faea04(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103faea48; end: 103faea57; -[_TtC21SCSnapVideoTranscoder27SnapVideoTranscoderServices transcoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faea48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c1d8));
  return;
}



/* Entry: 103faea58; end: 103faeaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faea58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c1d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103faeaa4; end: 103faeb03; -[_TtC21SCSnapVideoTranscoder27SnapVideoTranscoderServices init] */

void FUN_103faeaa4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapVideoTranscoder.SnapVideoTranscoderServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103faead0);
  (*pcVar1)();
}



/* Entry: 103faeb04; end: 103faeb13; -[_TtC21SCSnapVideoTranscoder27SnapVideoTranscoderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faeb04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c1d8));
  return;
}



/* Entry: 103faeb14; end: 103faed53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faeb14(undefined8 param_1,undefined8 param_2)

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
  undefined1 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_70 [16];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_11303c208);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11303c210);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_11303c218);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11303c220);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_11303c220))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11303c228);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_11303c228))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11303c230);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_11303c230))[1];
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_11303c240);
  uVar10 = *(undefined1 *)(unaff_x20 + _DAT_11303c248);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11303c238);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_11303c238))[1];
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_11303c258);
  _objc_allocWithZone();
  *(undefined8 *)(lVar12 + _DAT_11303c208) = uVar15;
  *(undefined8 *)(lVar12 + _DAT_11303c210) = uVar13;
  *(undefined8 *)(lVar12 + _DAT_11303c218) = uVar14;
  puVar1 = (undefined8 *)(lVar12 + _DAT_11303c220);
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar12 + _DAT_11303c228);
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar12 + _DAT_11303c230);
  *puVar1 = uVar4;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar12 + _DAT_11303c238);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  *(undefined8 *)(lVar12 + _DAT_11303c240) = uVar17;
  *(undefined1 *)(lVar12 + _DAT_11303c248) = uVar10;
  puVar1 = (undefined8 *)(lVar12 + _DAT_11303c250);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar12 + _DAT_11303c258) = uVar16;
  puVar11 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar15);
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(uVar16);
  _objc_msgSendSuper2(auStack_70,puVar11);
  return;
}



/* Entry: 103faed54; end: 103faedcb; -[SCSnapVideoTranscoderConfig withMetadataWithEmbeddedMetadata:] */

void FUN_103faed54(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_103faeb14(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103faedcc; end: 103faee47;  */

long FUN_103faedcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103faee48; end: 103faef03;  */

undefined8 * FUN_103faee48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  uVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar6;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  uVar5 = param_2[0xf];
  param_1[0xf] = uVar5;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar5);
  return param_1;
}



/* Entry: 103faef04; end: 103faf01f;  */

undefined8 * FUN_103faef04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103faf020; end: 103faf0cb;  */

undefined8 * FUN_103faf020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRelease(param_1[0xe]);
  uVar1 = param_1[0xf];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103faf0cc; end: 103faf183;  */

int FUN_103faf0cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103faf184; end: 103faf2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c210) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303c218) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c220);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c228);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c230);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c238);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11303c240) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11303c248) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c250);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11303c258) = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103faf2dc; end: 103faf2eb; -[SCSnapVideoTranscoderConfig destinationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c208));
  return;
}



/* Entry: 103faf2ec; end: 103faf2fb; -[SCSnapVideoTranscoderConfig source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103faf2ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c210);
}



/* Entry: 103faf2fc; end: 103faf30b; -[SCSnapVideoTranscoderConfig qualityLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103faf2fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c218);
}



/* Entry: 103faf30c; end: 103faf317; -[SCSnapVideoTranscoderConfig captureSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf30c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c220);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c220))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf318; end: 103faf323; -[SCSnapVideoTranscoderConfig snapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf318(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c228);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c228))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf324; end: 103faf32f; -[SCSnapVideoTranscoderConfig clientMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf324(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303c230);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303c230))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf330; end: 103faf377;  */

void FUN_103faf330(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf378; end: 103faf383; -[SCSnapVideoTranscoderConfig mediaOrchestrationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf378(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11303c238))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11303c238);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf384; end: 103faf393; -[SCSnapVideoTranscoderConfig attributedTaskPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103faf384(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11303c240);
}



/* Entry: 103faf394; end: 103faf3a3; -[SCSnapVideoTranscoderConfig canSkipTranscoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103faf394(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11303c248);
}



/* Entry: 103faf3a4; end: 103faf3af; -[SCSnapVideoTranscoderConfig embeddedMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf3a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11303c250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11303c250);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf3b0; end: 103faf407;  */

void FUN_103faf3b0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103faf408; end: 103faf417; -[SCSnapVideoTranscoderConfig analyticsInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c258));
  return;
}



/* Entry: 103faf418; end: 103faf56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11303c208) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c210) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303c218) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c220);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c228);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c230);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c238);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11303c240) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11303c248) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c250);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11303c258) = param_17;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103faf570; end: 103faf67b; -[SCSnapVideoTranscoderConfig initWithDestinationInfo:source:qualityLevel:captureSessionId:snapSessionId:clientMessageId:mediaOrchestrationId:attributedTaskPage:canSkipTranscoding:embeddedMetadata:analyticsInfo:] */

void FUN_103faf570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  long param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  if (param_9 == 0) {
    param_9 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_13 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_3);
  _objc_retain(param_14);
  FUN_103faf418(param_3,param_4,param_5,param_6,param_2,param_7,uVar1,param_8,uVar2,param_9,uVar3,
                param_10,param_11);
  return;
}



/* Entry: 103faf67c; end: 103faf6bb;  */

undefined8 FUN_103faf67c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103faf80c(param_1);
  FUN_103faf9a4(param_1);
  return uVar1;
}



/* Entry: 103faf6bc; end: 103faf6bf; -[SCSnapVideoTranscoderConfig copyWithZone:] */

void FUN_103faf6bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103faf6c0; end: 103faf6f3; -[SCSnapVideoTranscoderConfig description] */

void FUN_103faf6c0(void)

{
  undefined1 auStack_90 [128];
  
  FUN_103faf9d8(auStack_90);
  FUN_103faf9a4(auStack_90);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103faf6f4; end: 103faf76f; -[SCSnapVideoTranscoderConfig init] */

void FUN_103faf6f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapVideoTranscoder/SnapVideoTranscoderConfigWrapper.swift",0x3c,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103faf73c);
  (*pcVar1)();
}



/* Entry: 103faf770; end: 103faf80b; -[SCSnapVideoTranscoderConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf770(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c208));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c220 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c228 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c230 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c238 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303c250 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c258));
  return;
}



/* Entry: 103faf80c; end: 103faf9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf80c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11303c208) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c210) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11303c218) = param_1[2];
  uStack_38 = param_1[4];
  uStack_40 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c220);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[6];
  uStack_50 = param_1[5];
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c228);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  uStack_58 = param_1[8];
  uStack_60 = param_1[7];
  uVar2 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c230);
  puVar1[1] = param_1[8];
  *puVar1 = uVar2;
  uVar2 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c238);
  puVar1[1] = param_1[10];
  *puVar1 = uVar2;
  uStack_68 = param_1[10];
  uStack_70 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11303c240) = param_1[0xb];
  *(undefined1 *)(unaff_x20 + _DAT_11303c248) = *(undefined1 *)(param_1 + 0xc);
  uStack_78 = param_1[0xe];
  uStack_80 = param_1[0xd];
  uVar2 = param_1[0xd];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c250);
  puVar1[1] = param_1[0xe];
  *puVar1 = uVar2;
  uStack_88 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_11303c258) = uStack_88;
  _objc_retain();
  func_0x000100402194(&uStack_40,auStack_98);
  func_0x000100402194(&uStack_50,auStack_98);
  func_0x000100402194(&uStack_60,auStack_98);
  FUN_103fafb1c(&uStack_70,auStack_98,0x112d35ff8,&UNK_10d900cd0);
  FUN_103fafb1c(&uStack_80,auStack_98,0x112d35ff8,&UNK_10d900cd0);
  FUN_103fafb1c(&uStack_88,auStack_98,0x11303c288,&UNK_10dcb5dd8);
  _objc_msgSendSuper2(&stack0xffffffffffffff58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103faf9a4; end: 103faf9d7;  */

undefined8 FUN_103faf9a4(undefined8 param_1)

{
  (*(code *)(undefined *)0x103faedf8)();
  return param_1;
}



/* Entry: 103faf9d8; end: 103fafafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103faf9d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *(undefined8 *)(param_2 + _DAT_11303c208);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11303c210);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11303c218);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11303c220);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11303c220))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_11303c228);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11303c228))[1];
  uVar14 = *(undefined8 *)(param_2 + _DAT_11303c230);
  uVar5 = ((undefined8 *)(param_2 + _DAT_11303c230))[1];
  uVar10 = *(undefined8 *)(param_2 + _DAT_11303c240);
  puVar1 = (undefined8 *)(param_2 + _DAT_11303c238);
  uVar6 = *(undefined1 *)(param_2 + _DAT_11303c248);
  puVar2 = (undefined8 *)(param_2 + _DAT_11303c250);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11303c258);
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar12;
  param_1[4] = uVar3;
  param_1[5] = uVar13;
  param_1[6] = uVar4;
  param_1[7] = uVar14;
  param_1[8] = uVar5;
  uVar12 = puVar1[1];
  uVar13 = *puVar1;
  param_1[10] = puVar1[1];
  param_1[9] = uVar13;
  param_1[0xb] = uVar10;
  *(undefined1 *)(param_1 + 0xc) = uVar6;
  uVar13 = puVar2[1];
  uVar14 = *puVar2;
  param_1[0xe] = puVar2[1];
  param_1[0xd] = uVar14;
  param_1[0xf] = uVar11;
  _objc_retain(uVar7);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar11);
  return;
}



/* Entry: 103fafafc; end: 103fafb1b;  */

void FUN_103fafafc(void)

{
  _objc_opt_self(&PTR_PTR_112974590);
  return;
}



/* Entry: 103fafb1c; end: 103fafb63;  */

undefined8 FUN_103fafb1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103fafb64; end: 103fafb73; -[SnapRenderNGSMESnapDocConverterServices converterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fafb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c298));
  return;
}



/* Entry: 103fafb74; end: 103fafb83; -[SnapRenderNGSMESnapDocConverterServices lensTranscodingCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fafb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c2a0));
  return;
}



/* Entry: 103fafb84; end: 103fafbf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fafb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c290) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c298) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303c2a0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fafbf8; end: 103fafc53; -[SnapRenderNGSMESnapDocConverterServices init] */

void FUN_103fafbf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapRenderNGSMESnapDocConverterServices.SnapRenderNGSMESnapDocConverterServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fafc24);
  (*pcVar1)();
}



/* Entry: 103fafc54; end: 103fafc9b; -[SnapRenderNGSMESnapDocConverterServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fafc54(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303c290));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c2a0));
  return;
}



/* Entry: 103fafc9c; end: 103fafca7;  */

undefined8 FUN_103fafc9c(void)

{
  return 1;
}



/* Entry: 103fafca8; end: 103fafce7;  */

void FUN_103fafca8(void)

{
  undefined *puVar1;
  
  if (puRam000000011303c2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb5e70;
  _swift_getWitnessTable(&UNK_10dcb5e70,&UNK_11072b580);
  puRam000000011303c2d0 = puVar1;
  return;
}


