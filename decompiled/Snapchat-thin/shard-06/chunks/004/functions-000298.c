/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048cc97c; end: 1048cc98b; +[SCAttributedMemoriesUISubtask quickCut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc97c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b768) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc98c; end: 1048cc9e3;  */

void FUN_1048cc98c(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

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



/* Entry: 1048cc9e4; end: 1048cc9ff; -[SCAttributedMemoriesUISubtask matchGeneral:quickCut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc9e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309b768) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048cc9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048cca00; end: 1048ccaab;  */

void FUN_1048cca00(void)

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



/* Entry: 1048ccaac; end: 1048ccacf; -[SCAttributedMemoriesTask description] */

void FUN_1048ccaac(void)

{
  _objc_retain();
  func_0x00010085cfb4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccad0; end: 1048ccb17; -[SCAttributedMemoriesTask init] */

void FUN_1048ccad0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x1c6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ccb18);
  (*pcVar1)();
}



/* Entry: 1048ccb18; end: 1048ccb97; +[SCAttributedMemoriesTask encryption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b770) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b778) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b788) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccb98; end: 1048ccc1b; +[SCAttributedMemoriesTask transcoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b770) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b780) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11309b788) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc1c; end: 1048ccc23; +[SCAttributedMemoriesTask backup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc24; end: 1048ccc2b; +[SCAttributedMemoriesTask miniCarouselMemoriesPresentationDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 5;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc2c; end: 1048ccc33; +[SCAttributedMemoriesTask s2rLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 6;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc34; end: 1048ccc3b; +[SCAttributedMemoriesTask save] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 7;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc3c; end: 1048ccc43; +[SCAttributedMemoriesTask recentThumbnailProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 9;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc44; end: 1048ccc4b; +[SCAttributedMemoriesTask experimentServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 0xc;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc4c; end: 1048ccc53; +[SCAttributedMemoriesTask clientGenPipelineManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 0xd;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc54; end: 1048ccc5b; +[SCAttributedMemoriesTask engagementLoggingProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 0xe;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccc5c; end: 1048cccdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccc5c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309b770) = 0xf;
  *(undefined8 *)(unaff_x20 + _DAT_11309b778) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b780) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309b788) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar1);
  return;
}



/* Entry: 1048cccdc; end: 1048ccd5f; +[SCAttributedMemoriesTask ui:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cccdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b770) = 0xf;
  *(undefined8 *)(lVar2 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b788) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccd60; end: 1048ccd67; +[SCAttributedMemoriesTask memTwo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccd60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 0x10;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ccd68; end: 1048ccf1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ccd68(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                  undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                  code *param_30,undefined4 param_31,undefined4 param_32,code *param_33,
                  undefined4 param_34,undefined4 param_35,code *param_36,undefined4 param_37,
                  undefined4 param_38,code *param_39,undefined4 param_40,undefined4 param_41,
                  code *param_42,undefined4 param_43,undefined4 param_44,code *param_45)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309b770)) {
  case 0:
    param_42 = param_1;
    if (*(long *)(unaff_x20 + _DAT_11309b778) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ccf1c);
      (*pcVar1)();
    }
    goto code_r0x0001048cceb4;
  case 1:
    param_42 = param_3;
    if (*(long *)(unaff_x20 + _DAT_11309b780) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ccf20);
      (*pcVar1)();
    }
    goto code_r0x0001048cceb4;
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
    if (*(long *)(unaff_x20 + _DAT_11309b788) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ccf18);
      (*pcVar1)();
    }
code_r0x0001048cceb4:
    (*param_42)();
    break;
  case 0x10:
    (*param_45)();
  }
  return;
}



/* Entry: 1048ccf20; end: 1048cd0af; -[SCAttributedMemoriesTask matchEncryption:transcoding:backup:logoutUserDataScrubber:widgetDataProvider:miniCarouselMemoriesPresentationDataSource:s2rLogging:save:sideButtonObserveData:recentThumbnailProvider:swipeTransitionCoordinator:highlightDataSourceSetup:experimentServiceProvider:clientGenPipelineManager:engagementLoggingProvider:ui:memTwo:] */

void FUN_1048ccf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
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
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_1b0 = param_15;
  uStack_1d0 = param_16;
  uStack_1f0 = param_17;
  uStack_210 = param_18;
  uStack_230 = param_19;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048ccd68(0x1048cdde8,auStack_40,0x1048cdde4,auStack_60,0x1048cdd40,auStack_80,0x1048cdd78,
                auStack_a0,0x1048cdd7c,auStack_c0,0x1048cdd80,auStack_e0,0x1048cdd84,auStack_100,
                0x1048cdd88,auStack_120,0x1048cdd8c,auStack_140,0x1048cdd90,auStack_160,0x1048cdd94,
                auStack_180,0x1048cdd98,auStack_1a0,0x1048cdd9c,auStack_1c0,0x1048cdda0,auStack_1e0,
                0x1048cdda4,auStack_200,0x1048cdd48,auStack_220,0x1048cdda8,auStack_240);
  _objc_release(param_1);
  return;
}



/* Entry: 1048cd0b0; end: 1048cd0b3;  */

void FUN_1048cd0b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048cd0b4; end: 1048cd0e7;  */

void FUN_1048cd0b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048cd0e8; end: 1048cd78f;  */

void FUN_1048cd0e8(ulong param_1,code *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_60 [6];
  
  uVar1 = param_1;
  (*param_2)();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_60 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_60 + 4;
    }
  }
  *(char *)(uVar2 + *param_3) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048cd790; end: 1048cd80f;  */

void FUN_1048cd790(void)

{
  _objc_opt_self(&PTR_PTR_1129e2090);
  return;
}



/* Entry: 1048cd810; end: 1048cdc23;  */

int FUN_1048cd810(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xef < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x10) {
      iVar2 = 4;
    }
    if (param_2 + 0x10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048cd88c;
        goto LAB_1048cd870;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048cd870:
      return ((uint)*param_1 | uVar1 << 8) - 0x10;
    }
  }
LAB_1048cd88c:
  iVar2 = *param_1 - 0x11;
  if (*param_1 < 0x11) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048cdc24; end: 1048cdc63;  */

void FUN_1048cdc24(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd449bc;
  _swift_getWitnessTable(&UNK_10dd449bc,&UNK_1107b41c0);
  puRam000000011309b830 = puVar1;
  return;
}



/* Entry: 1048cdc64; end: 1048cdc67;  */

void FUN_1048cdc64(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44a5c;
  _swift_getWitnessTable(&UNK_10dd44a5c,&UNK_1107b4130);
  puRam000000011309b838 = puVar1;
  return;
}



/* Entry: 1048cdc68; end: 1048cdca7;  */

void FUN_1048cdc68(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44a5c;
  _swift_getWitnessTable(&UNK_10dd44a5c,&UNK_1107b4130);
  puRam000000011309b838 = puVar1;
  return;
}



/* Entry: 1048cdca8; end: 1048cdcab;  */

void FUN_1048cdca8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44afc;
  _swift_getWitnessTable(&UNK_10dd44afc,&UNK_1107b40a0);
  puRam000000011309b840 = puVar1;
  return;
}



/* Entry: 1048cdcac; end: 1048cdceb;  */

void FUN_1048cdcac(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44afc;
  _swift_getWitnessTable(&UNK_10dd44afc,&UNK_1107b40a0);
  puRam000000011309b840 = puVar1;
  return;
}



/* Entry: 1048cdcec; end: 1048cdcef;  */

void FUN_1048cdcec(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44b9c;
  _swift_getWitnessTable(&UNK_10dd44b9c,&UNK_1107b4010);
  puRam000000011309b848 = puVar1;
  return;
}



/* Entry: 1048cdcf0; end: 1048cdd2f;  */

void FUN_1048cdcf0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44b9c;
  _swift_getWitnessTable(&UNK_10dd44b9c,&UNK_1107b4010);
  puRam000000011309b848 = puVar1;
  return;
}



/* Entry: 1048cdd30; end: 1048cddeb;  */

ulong FUN_1048cdd30(ulong param_1)

{
  if (0x10 < param_1) {
    param_1 = 0x11;
  }
  return param_1;
}



/* Entry: 1048cddec; end: 1048cddef; -[SCAttributedMemoriesTranscodingSubtask description] */

void FUN_1048cddec(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cddf0; end: 1048cddf3; -[SCAttributedMemoriesEncryptionSubtask description] */

void FUN_1048cddf0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cddf4; end: 1048cde17; -[SCAttributedMemoriesUISubtask description] */

void FUN_1048cddf4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cde18; end: 1048cde1b; -[SCAttributedMemoriesTranscodingSubtask copyWithZone:] */

void FUN_1048cde18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cde1c; end: 1048cde23; -[SCAttributedMemoriesEncryptionSubtask copyWithZone:] */

void FUN_1048cde1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cde24; end: 1048cde2b; -[SCAttributedMemoriesUISubtask copyWithZone:] */

void FUN_1048cde24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cde2c; end: 1048cde43; -[SCAttributedMemoriesTask copyWithZone:] */

void FUN_1048cde2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cde44; end: 1048cdf17;  */

void FUN_1048cde44(void)

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



/* Entry: 1048cdf18; end: 1048cdf37;  */

void FUN_1048cdf18(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048cdf38; end: 1048cdf53; -[SCAttributedMobileCodeHealthTask description] */

void FUN_1048cdf38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdf54; end: 1048cdf9b; -[SCAttributedMobileCodeHealthTask init] */

void FUN_1048cdf54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMobileCodeHealthTaskWrapper.swift",0x3b,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cdf9c);
  (*pcVar1)();
}



/* Entry: 1048cdf9c; end: 1048cdf9f; -[SCAttributedMobileCodeHealthTask copyWithZone:] */

void FUN_1048cdf9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cdfa0; end: 1048cdfa7; +[SCAttributedMobileCodeHealthTask prewarmApplicationStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfa0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfa8; end: 1048cdfaf; +[SCAttributedMobileCodeHealthTask prewarmUserStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfa8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfb0; end: 1048cdfbf; +[SCAttributedMobileCodeHealthTask prewarmUserSessionRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfc0; end: 1048cdfc7; +[SCAttributedMobileCodeHealthTask cleanUpUserStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfc8; end: 1048cdfcf; +[SCAttributedMobileCodeHealthTask prewarmNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfd0; end: 1048cdfd7; +[SCAttributedMobileCodeHealthTask saberStartupReporting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfd0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cdfd8; end: 1048ce07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cdfd8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11309b850);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        (*param_1)();
      }
      else {
        (*param_3)();
      }
    }
    else if (bVar1 == 2) {
      (*param_5)();
    }
    else {
      (*param_7)();
    }
  }
  else {
    if (bVar1 < 6) {
      param_18 = param_12;
      if (bVar1 == 4) {
        param_18 = param_9;
      }
    }
    else if (bVar1 == 6) {
      param_18 = param_15;
    }
    (*param_18)();
  }
  return;
}



/* Entry: 1048ce080; end: 1048ce147; -[SCAttributedMobileCodeHealthTask matchScopeGraphPerformanceMetricsReporter:prewarmApplicationStorageServices:prewarmUserStorageServices:prewarmUserSessionRepository:cleanUpUserStorageServices:prewarmNavigationServices:saberStartupReporting:tweakUsageReporter:] */

void FUN_1048ce080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
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
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048cdfd8(0x1048ce3e0,auStack_40,0x1048ce3e8,auStack_60,0x1048ce3ec,auStack_80,0x1048ce3f0,
                auStack_a0,0x1048ce3f4,auStack_c0,0x1048ce3f8,auStack_e0,0x1048ce3fc,auStack_100,
                0x1048ce400,auStack_120);
  _objc_release(param_1);
  return;
}



/* Entry: 1048ce148; end: 1048ce17b;  */

void FUN_1048ce148(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048ce17c; end: 1048ce227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce17c(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_a0 [16];
  
  uVar5 = param_1;
  func_0x0001000ad274();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = auStack_a0 + 0xc;
  if (uVar1 != 6) {
    puVar4 = auStack_a0 + 0xe;
  }
  puVar3 = auStack_a0 + 8;
  if (uVar1 != 4) {
    puVar3 = auStack_a0 + 10;
  }
  if (uVar1 < 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_a0 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_a0 + 6;
  }
  puVar2 = auStack_a0;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_a0 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 4) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_11309b850) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048ce228; end: 1048ce38f;  */

int FUN_1048ce228(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ce2a4;
        goto LAB_1048ce288;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ce288:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1048ce2a4:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048ce390; end: 1048ce3cf;  */

void FUN_1048ce390(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44c98;
  _swift_getWitnessTable(&UNK_10dd44c98,&UNK_1107b42a8);
  puRam000000011309b880 = puVar1;
  return;
}



/* Entry: 1048ce3d0; end: 1048ce40b;  */

ulong FUN_1048ce3d0(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 1048ce40c; end: 1048ce453; -[SCAttributedMusicAudioSubtask init] */

void FUN_1048ce40c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce454);
  (*pcVar1)();
}



/* Entry: 1048ce454; end: 1048ce45b;  */

undefined8 FUN_1048ce454(void)

{
  return 1;
}



/* Entry: 1048ce45c; end: 1048ce4a3; -[SCAttributedMusicComposerDependencySubtask init] */

void FUN_1048ce45c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x78,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce4a4);
  (*pcVar1)();
}



/* Entry: 1048ce4a4; end: 1048ce523;  */

uint FUN_1048ce4a4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048ce7c8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048ce524; end: 1048ce56b; -[SCAttributedMusicContentRestrictionSubtask init] */

void FUN_1048ce524(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0xe0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce56c);
  (*pcVar1)();
}



/* Entry: 1048ce56c; end: 1048ce577; -[SCAttributedMusicContentRestrictionSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce56c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b888));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048ce578; end: 1048ce583; -[SCAttributedMusicContentRestrictionSubtask isEqual:] */

uint FUN_1048ce578(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048ce930(&uStack_50,&DAT_11309b888);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048ce584; end: 1048ce613;  */

uint FUN_1048ce584(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_1048ce930(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048ce614; end: 1048ce623; +[SCAttributedMusicContentRestrictionSubtask friendsFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce614(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b888) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce624; end: 1048ce633; +[SCAttributedMusicContentRestrictionSubtask map] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce624(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b888) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce634; end: 1048ce643; +[SCAttributedMusicContentRestrictionSubtask story] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce634(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b888) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce644; end: 1048ce653; +[SCAttributedMusicContentRestrictionSubtask spotlightFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce644(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b888) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce654; end: 1048ce663; +[SCAttributedMusicContentRestrictionSubtask unknown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce654(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b888) = 4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce664; end: 1048ce677; -[SCAttributedMusicContentRestrictionSubtask matchFriendsFeed:map:story:spotlightFeed:unknown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce664(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309b888);
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
                    /* WARNING: Could not recover jumptable at 0x0001048cead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048ce678; end: 1048ce6bf; -[SCAttributedMusicTopicViewerSubtask init] */

void FUN_1048ce678(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x160,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce6c0);
  (*pcVar1)();
}



/* Entry: 1048ce6c0; end: 1048ce73b;  */

void FUN_1048ce6c0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ce73c; end: 1048ce743;  */

undefined8 FUN_1048ce73c(void)

{
  return 1;
}



/* Entry: 1048ce744; end: 1048ce78b; -[SCAttributedMusicPreviewFeatureSubtask init] */

void FUN_1048ce744(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x1b4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce78c);
  (*pcVar1)();
}



/* Entry: 1048ce78c; end: 1048ce7c7;  */

void FUN_1048ce78c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048ce7c8; end: 1048ce853;  */

undefined8 FUN_1048ce7c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    puVar1 = &uStack_58;
    _swift_dynamicCast(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      _objc_release(uStack_58);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1048ce854; end: 1048ce893;  */

void FUN_1048ce854(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce894; end: 1048ce8db; -[SCAttributedMusicUserDataLoaderSubtask init] */

void FUN_1048ce894(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x21c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048ce8dc);
  (*pcVar1)();
}



/* Entry: 1048ce8dc; end: 1048ce8e7; -[SCAttributedMusicUserDataLoaderSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce8dc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b890));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048ce8e8; end: 1048ce92f;  */

void FUN_1048ce8e8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048ce930; end: 1048ce9cf;  */

bool FUN_1048ce930(undefined8 param_1,long *param_2)

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
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048ce9d0; end: 1048ce9db; -[SCAttributedMusicUserDataLoaderSubtask isEqual:] */

uint FUN_1048ce9d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048ce930(&uStack_50,&DAT_11309b890);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048ce9dc; end: 1048ce9eb; +[SCAttributedMusicUserDataLoaderSubtask addToFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce9dc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b890) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce9ec; end: 1048ce9fb; +[SCAttributedMusicUserDataLoaderSubtask removeFromFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce9ec(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b890) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ce9fc; end: 1048cea0b; +[SCAttributedMusicUserDataLoaderSubtask isInFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ce9fc(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b890) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cea0c; end: 1048cea1b; +[SCAttributedMusicUserDataLoaderSubtask fetchItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cea0c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b890) = 3;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cea1c; end: 1048cea2b; +[SCAttributedMusicUserDataLoaderSubtask paginatedFetchItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cea1c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b890) = 4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cea2c; end: 1048cea83;  */

void FUN_1048cea2c(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

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



/* Entry: 1048cea84; end: 1048cead3; -[SCAttributedMusicUserDataLoaderSubtask matchAddToFeed:removeFromFeed:isInFeed:fetchItems:paginatedFetchItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cea84(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309b890);
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
                    /* WARNING: Could not recover jumptable at 0x0001048cead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048cead4; end: 1048ceb7f;  */

void FUN_1048cead4(void)

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



/* Entry: 1048ceb80; end: 1048ceba3; -[SCAttributedMusicTask description] */

void FUN_1048ceb80(void)

{
  _objc_retain();
  func_0x0001048cf29c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048ceba4; end: 1048cebeb; -[SCAttributedMusicTask init] */

void FUN_1048ceba4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMusicTaskWrapper.swift",0x30,2,0x2fa,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cebec);
  (*pcVar1)();
}



/* Entry: 1048cebec; end: 1048cec23; +[SCAttributedMusicTask audio:] */

void FUN_1048cebec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048cff48();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048cec24; end: 1048cec3b; +[SCAttributedMusicTask trackLoader] */

void FUN_1048cec24(void)

{
  func_0x0001048d0474(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cec3c; end: 1048cec53; +[SCAttributedMusicTask topicPageStoryFetch] */

void FUN_1048cec3c(void)

{
  func_0x0001048d0474(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cec54; end: 1048cec8b; +[SCAttributedMusicTask composerDependency:] */

void FUN_1048cec54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001048d0004();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048cec8c; end: 1048ceca3; +[SCAttributedMusicTask pickerStartupLoader:] */

void FUN_1048cec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001048d00c4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


