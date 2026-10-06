/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00219bd4; end: 00219bf7;  */

ulong FUN_00219bd4(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 00219bf8; end: 00219ccb;  */

void FUN_00219bf8(void)

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



/* Entry: 00219ccc; end: 00219ceb;  */

void FUN_00219ccc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00219cec; end: 00219d13; -[SCAttributedStartupTask description] */

void FUN_00219cec(void)

{
  _objc_retain();
  FUN_0021a210();
  func_0x00089d04();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219d14; end: 00219d5b; -[SCAttributedStartupTask init] */

void FUN_00219d14(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedStartupTaskWrapper.swift",0x32,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x219d5c);
  (*pcVar1)();
}



/* Entry: 00219d5c; end: 00219d5f; -[SCAttributedStartupTask copyWithZone:] */

void FUN_00219d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00219d60; end: 00219dd3; +[SCAttributedStartupTask g2xReporting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219dd4; end: 00219e67; +[SCAttributedStartupTask startupCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e68; end: 00219e6f; +[SCAttributedStartupTask prewarmLegacyUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e68(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e70; end: 00219e77; +[SCAttributedStartupTask prewarmDeltaSyncUploadService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e78; end: 00219e7f; +[SCAttributedStartupTask prewarmAppStoreReceiptURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e80; end: 00219e87; +[SCAttributedStartupTask prewarmENLocalization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e88; end: 00219e8f; +[SCAttributedStartupTask prewarmImageProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e88(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e90; end: 00219e97; +[SCAttributedStartupTask prewarmDiscoverySessionDevices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e90(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 7;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219e98; end: 00219e9f; +[SCAttributedStartupTask prewarmApplicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219e98(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219ea0; end: 00219ea7; +[SCAttributedStartupTask prewarmLocalizedStringLookup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219ea0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 9;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219ea8; end: 00219eaf; +[SCAttributedStartupTask prewarmStartupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219ea8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 10;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219eb0; end: 00219eb7; +[SCAttributedStartupTask prewarmSystemPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219eb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = 0xb;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219eb8; end: 00219f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219eb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af8028) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af8038);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219f30; end: 0021a077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219f30(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                 undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                 undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                 code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                 undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                 undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                 code *param_30,undefined8 param_31)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_00af8028)) {
  case 0:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00af8030) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21a074);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_00af8030));
    break;
  case 1:
    if (((undefined8 *)(unaff_x20 + _DAT_00af8038))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21a078);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_00af8038));
    break;
  case 2:
    (*param_5)();
    break;
  case 3:
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
    (*param_24)();
    break;
  case 10:
    (*param_27)();
    break;
  case 0xb:
    (*param_30)(param_31);
  }
  return;
}



/* Entry: 0021a078; end: 0021a0a7;  */

void FUN_0021a078(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x21a078);
  (*pcVar1)();
}



/* Entry: 0021a0a8; end: 0021a1c7; -[SCAttributedStartupTask matchG2xReporting:startupCommand:prewarmLegacyUser:prewarmDeltaSyncUploadService:prewarmAppStoreReceiptURL:prewarmENLocalization:prewarmImageProcessing:prewarmDiscoverySessionDevices:prewarmApplicationCircumstanceEngineServices:prewarmLocalizedStringLookup:prewarmStartupServices:prewarmSystemPreferences:] */

void FUN_0021a0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
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
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_00219f30(0x21a560,auStack_40,FUN_0021a570,auStack_60,FUN_0021a5a8,auStack_80,0x21a5b0,
               auStack_a0,0x21a5b4,auStack_c0,0x21a5b8,auStack_e0,0x21a5bc,auStack_100,0x21a5c0,
               auStack_120,0x21a5c4,auStack_140,0x21a5c8,auStack_160,0x21a5cc,auStack_180,0x21a5d0,
               auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 0021a1c8; end: 0021a1fb;  */

void FUN_0021a1c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021a1fc; end: 0021a20f; -[SCAttributedStartupTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00af8038 + 8));
  return;
}



/* Entry: 0021a210; end: 0021a357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0021a210(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_00af8028)) {
  case 0:
    if (*(char *)((undefined8 *)(param_1 + _DAT_00af8030) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21a358);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_00af8030);
    break;
  case 1:
    lVar2 = ((undefined8 *)(param_1 + _DAT_00af8038))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21a354);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_00af8038);
    _swift_bridgeObjectRetain(lVar2);
    break;
  case 3:
    uVar3 = 1;
    break;
  case 4:
    uVar3 = 2;
    break;
  case 5:
    uVar3 = 3;
    break;
  case 6:
    uVar3 = 4;
    break;
  case 7:
    uVar3 = 5;
    break;
  case 8:
    uVar3 = 6;
    break;
  case 9:
    uVar3 = 7;
    break;
  case 10:
    uVar3 = 8;
    break;
  case 0xb:
    uVar3 = 9;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 0021a358; end: 0021a387;  */

void FUN_0021a358(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x14,0x21a358);
  (*pcVar1)();
}



/* Entry: 0021a388; end: 0021a3a7;  */

void FUN_0021a388(void)

{
  _objc_opt_self(&PTR_PTR_00acefc8);
  return;
}



/* Entry: 0021a3a8; end: 0021a50f;  */

int FUN_0021a3a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021a424;
        goto LAB_0021a408;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0021a408:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_0021a424:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021a510; end: 0021a54f;  */

void FUN_0021a510(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed2d0;
  _swift_getWitnessTable(&UNK_007ed2d0,&UNK_009bfbc8);
  puRam0000000000af8068 = puVar1;
  return;
}



/* Entry: 0021a550; end: 0021a56f;  */

ulong FUN_0021a550(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 0021a570; end: 0021a5a7;  */

void FUN_0021a570(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0021a5a8; end: 0021a5d3;  */

void FUN_0021a5a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00059b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0021a5d4; end: 0021a6a7;  */

void FUN_0021a5d4(void)

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



/* Entry: 0021a6a8; end: 0021a6c7;  */

void FUN_0021a6a8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 0021a6c8; end: 0021a6e3; -[SCAttributedStoriesTask description] */

void FUN_0021a6c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a6e4; end: 0021a72b; -[SCAttributedStoriesTask init] */

void FUN_0021a6e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedStoriesTaskWrapper.swift",0x32,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21a72c);
  (*pcVar1)();
}



/* Entry: 0021a72c; end: 0021a72f; -[SCAttributedStoriesTask copyWithZone:] */

void FUN_0021a72c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0021a730; end: 0021a737; +[SCAttributedStoriesTask everywhereDFNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a730(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a738; end: 0021a73f; +[SCAttributedStoriesTask cheetahStoriesRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a738(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a740; end: 0021a747; +[SCAttributedStoriesTask appUserLifecycleObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a740(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a748; end: 0021a74f; +[SCAttributedStoriesTask serviceEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a748(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a750; end: 0021a757; +[SCAttributedStoriesTask discoverFeedNotificationProcessors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a750(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a758; end: 0021a7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a758(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af8070) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021a7a8; end: 0021a7ef; -[SCAttributedStoriesTask matchEverywhereDFNotification:cheetahStoriesRefresh:appUserLifecycleObserver:serviceEntryPoint:discoverFeedNotificationProcessors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021a7a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af8070);
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
                    /* WARNING: Could not recover jumptable at 0x0021a7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0021a7f0; end: 0021a843;  */

void FUN_0021a7f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021a844; end: 0021a9ab;  */

int FUN_0021a844(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021a8c0;
        goto LAB_0021a8a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0021a8a4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_0021a8c0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021a9ac; end: 0021a9eb;  */

void FUN_0021a9ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af80a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed3b0;
  _swift_getWitnessTable(&UNK_007ed3b0,&UNK_009bfcb0);
  puRam0000000000af80a0 = puVar1;
  return;
}



/* Entry: 0021a9ec; end: 0021a9fb;  */

ulong FUN_0021a9ec(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 0021a9fc; end: 0021aacf;  */

void FUN_0021a9fc(void)

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



/* Entry: 0021aad0; end: 0021aaef;  */

void FUN_0021aad0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 0021aaf0; end: 0021ab0b; -[SCAttributedTalkTask description] */

void FUN_0021aaf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab0c; end: 0021ab53; -[SCAttributedTalkTask init] */

void FUN_0021ab0c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedTalkTaskWrapper.swift",0x2f,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21ab54);
  (*pcVar1)();
}



/* Entry: 0021ab54; end: 0021ab57; -[SCAttributedTalkTask copyWithZone:] */

void FUN_0021ab54(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0021ab58; end: 0021ab5f; +[SCAttributedTalkTask notificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab60; end: 0021ab67; +[SCAttributedTalkTask cameraController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab68; end: 0021ab6f; +[SCAttributedTalkTask soundServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab70; end: 0021ab77; +[SCAttributedTalkTask cameraServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab78; end: 0021ab7f; +[SCAttributedTalkTask callKitCallManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab80; end: 0021ab87; +[SCAttributedTalkTask callLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab88; end: 0021ab8f; +[SCAttributedTalkTask superResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab90; end: 0021ab97; +[SCAttributedTalkTask activeConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021ab98; end: 0021ab9f; +[SCAttributedTalkTask contactsAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ab98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021aba0; end: 0021aca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021aba0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80a8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021aca8; end: 0021ad87; -[SCAttributedTalkTask matchNotificationProcessor:cameraController:soundServiceProvider:cameraServices:callKitCallManager:callLog:superResolution:activeConversations:contactsAlert:] */

void FUN_0021aca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x0021abf0(0x21af94,auStack_40,0x21af9c,auStack_60,0x21afa0,auStack_80,0x21afa4,auStack_a0,
                  0x21afa8,auStack_c0,0x21afac,auStack_e0,0x21afb0,auStack_100,0x21afb4,auStack_120,
                  0x21afb8,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 0021ad88; end: 0021addb;  */

void FUN_0021ad88(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021addc; end: 0021af43;  */

int FUN_0021addc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021ae58;
        goto LAB_0021ae3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0021ae3c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_0021ae58:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021af44; end: 0021af83;  */

void FUN_0021af44(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af80d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed48c;
  _swift_getWitnessTable(&UNK_007ed48c,&UNK_009bfd98);
  puRam0000000000af80d8 = puVar1;
  return;
}



/* Entry: 0021af84; end: 0021afbb;  */

ulong FUN_0021af84(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 0021afbc; end: 0021afe3;  */

void FUN_0021afbc(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_0021b8dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 0021afe4; end: 0021afff; -[SCAttributedJobSchedulerSubtask description] */

void FUN_0021afe4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b000; end: 0021b047; -[SCAttributedJobSchedulerSubtask init] */

void FUN_0021b000(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedWorkSchedulingTaskWrapper.swift",0x39,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21b048);
  (*pcVar1)();
}



/* Entry: 0021b048; end: 0021b08f; -[SCAttributedJobSchedulerSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b048(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af80f0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0021b090; end: 0021b12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0021b090(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_00af80f0);
      cVar2 = *(char *)(lStack_58 + _DAT_00af80f0);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0021b130; end: 0021b1af; -[SCAttributedJobSchedulerSubtask isEqual:] */

uint FUN_0021b130(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0021b090(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0021b1b0; end: 0021b1b7; +[SCAttributedJobSchedulerSubtask exposeUserJobProviderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b1b8; end: 0021b1bf; +[SCAttributedJobSchedulerSubtask registerSystemJobProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b1c0; end: 0021b1c7; +[SCAttributedJobSchedulerSubtask registerUnauthenticatedJobProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b1c8; end: 0021b1cf; +[SCAttributedJobSchedulerSubtask submitJobs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b1d0; end: 0021b1d7; +[SCAttributedJobSchedulerSubtask setupBackgroundWakeup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b1d8; end: 0021b227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b1d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80f0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b228; end: 0021b273; -[SCAttributedJobSchedulerSubtask matchExposeUserJobProviderScope:registerSystemJobProviders:registerUnauthenticatedJobProviders:submitJobs:setupBackgroundWakeup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b228(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af80f0);
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
                    /* WARNING: Could not recover jumptable at 0x0021b26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0021b274; end: 0021b2df;  */

void FUN_0021b274(void)

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



/* Entry: 0021b2e0; end: 0021b2e3;  */

void FUN_0021b2e0(void)

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



/* Entry: 0021b2e4; end: 0021b323;  */

void FUN_0021b2e4(void)

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



/* Entry: 0021b324; end: 0021b35b;  */

void FUN_0021b324(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 0021b35c; end: 0021b39f; -[SCAttributedWorkSchedulingTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b35c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_00af80e0) == '\x01') && (*(long *)(param_1 + _DAT_00af80e8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x21b3a0);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b3a0; end: 0021b3e7; -[SCAttributedWorkSchedulingTask init] */

void FUN_0021b3a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedWorkSchedulingTaskWrapper.swift",0x39,2,0xc4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21b3e8);
  (*pcVar1)();
}



/* Entry: 0021b3e8; end: 0021b3eb;  */

void FUN_0021b3e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0021b3ec; end: 0021b3f3; +[SCAttributedWorkSchedulingTask backgroundCleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b3ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00af80e8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b3f4; end: 0021b45f; +[SCAttributedWorkSchedulingTask jobScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af80e0) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af80e8) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b460; end: 0021b467; +[SCAttributedWorkSchedulingTask delayedEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b460(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80e0) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af80e8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b468; end: 0021b4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b468(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af80e0) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af80e8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021b4c4; end: 0021b517; -[SCAttributedWorkSchedulingTask matchBackgroundCleanUp:jobScheduler:delayedEntryPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b4c4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00af80e0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0021b500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_00af80e0) == '\x01') {
    if (*(long *)(param_1 + _DAT_00af80e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0021b4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x10))(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x21b514);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0021b50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 0021b518; end: 0021b54b;  */

void FUN_0021b518(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021b54c; end: 0021b55b; -[SCAttributedWorkSchedulingTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021b54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af80e8));
  return;
}



/* Entry: 0021b55c; end: 0021b59b;  */

void FUN_0021b55c(void)

{
  _objc_opt_self(&PTR_PTR_00acf218);
  return;
}



/* Entry: 0021b59c; end: 0021b857;  */

int FUN_0021b59c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0021b618;
        goto LAB_0021b5fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0021b5fc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_0021b618:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021b858; end: 0021b897;  */

void FUN_0021b858(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed5e8;
  _swift_getWitnessTable(&UNK_007ed5e8,&UNK_009bff10);
  puRam0000000000af8148 = puVar1;
  return;
}



/* Entry: 0021b898; end: 0021b89b;  */

void FUN_0021b898(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed688;
  _swift_getWitnessTable(&UNK_007ed688,&UNK_009bfe80);
  puRam0000000000af8150 = puVar1;
  return;
}



/* Entry: 0021b89c; end: 0021b8db;  */

void FUN_0021b89c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed688;
  _swift_getWitnessTable(&UNK_007ed688,&UNK_009bfe80);
  puRam0000000000af8150 = puVar1;
  return;
}


