/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048d59f4; end: 1048d5a3b; -[SCAttributedSpotlightTask matchRecentStoriesDatabase:spotlightUsageDatabase:mixeFeedViewController:notificationProcessor:liveActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d59f4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bd78);
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
                    /* WARNING: Could not recover jumptable at 0x0001048d5a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d5a3c; end: 1048d5a6f;  */

void FUN_1048d5a3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d5a70; end: 1048d5af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5a70(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  FUN_1048d5af8();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_70 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_70 + 8;
  }
  puVar3 = auStack_70 + 4;
  if (uVar1 != 2) {
    puVar3 = puVar2;
  }
  puVar2 = auStack_70;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_70 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309bd78) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d5af8; end: 1048d5b17;  */

void FUN_1048d5af8(void)

{
  _objc_opt_self(&PTR_PTR_1129e3480);
  return;
}



/* Entry: 1048d5b18; end: 1048d5c7f;  */

int FUN_1048d5b18(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d5b94;
        goto LAB_1048d5b78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d5b78:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048d5b94:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d5c80; end: 1048d5cbf;  */

void FUN_1048d5c80(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46170;
  _swift_getWitnessTable(&UNK_10dd46170,&UNK_1107b5380);
  puRam000000011309bda8 = puVar1;
  return;
}



/* Entry: 1048d5cc0; end: 1048d5ce3;  */

ulong FUN_1048d5cc0(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048d5ce4; end: 1048d5db7;  */

void FUN_1048d5ce4(void)

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



/* Entry: 1048d5db8; end: 1048d5dd7;  */

void FUN_1048d5db8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d5dd8; end: 1048d5dff; -[SCAttributedStartupTask description] */

void FUN_1048d5dd8(void)

{
  _objc_retain();
  func_0x0001000ac380();
  func_0x0001000ac758();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d5e00; end: 1048d5e47; -[SCAttributedStartupTask init] */

void FUN_1048d5e00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedStartupTaskWrapper.swift",0x32,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d5e48);
  (*pcVar1)();
}



/* Entry: 1048d5e48; end: 1048d5e4b; -[SCAttributedStartupTask copyWithZone:] */

void FUN_1048d5e48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d5e4c; end: 1048d5ebf; +[SCAttributedStartupTask g2xReporting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ec0; end: 1048d5ec7; +[SCAttributedStartupTask prewarmLegacyUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ec0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ec8; end: 1048d5ecf; +[SCAttributedStartupTask prewarmDeltaSyncUploadService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ec8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ed0; end: 1048d5ed7; +[SCAttributedStartupTask prewarmAppStoreReceiptURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ed0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ed8; end: 1048d5edf; +[SCAttributedStartupTask prewarmENLocalization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ed8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ee0; end: 1048d5ee7; +[SCAttributedStartupTask prewarmImageProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ee0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ee8; end: 1048d5eef; +[SCAttributedStartupTask prewarmDiscoverySessionDevices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ee8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 7;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ef0; end: 1048d5ef7; +[SCAttributedStartupTask prewarmApplicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ef0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 8;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5ef8; end: 1048d5eff; +[SCAttributedStartupTask prewarmLocalizedStringLookup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5ef8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 9;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5f00; end: 1048d5f07; +[SCAttributedStartupTask prewarmStartupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5f00(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 10;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5f08; end: 1048d5f0f; +[SCAttributedStartupTask prewarmSystemPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5f08(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 0xb;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5f10; end: 1048d5f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5f10(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
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



/* Entry: 1048d5f88; end: 1048d60cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5f88(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
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
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309bdb0)) {
  case 0:
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11309bdb8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d60cc);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11309bdb8));
    break;
  case 1:
    if (((undefined8 *)(unaff_x20 + _DAT_11309bdc0))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d60d0);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11309bdc0));
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



/* Entry: 1048d60d0; end: 1048d61ef; -[SCAttributedStartupTask matchG2xReporting:startupCommand:prewarmLegacyUser:prewarmDeltaSyncUploadService:prewarmAppStoreReceiptURL:prewarmENLocalization:prewarmImageProcessing:prewarmDiscoverySessionDevices:prewarmApplicationCircumstanceEngineServices:prewarmLocalizedStringLookup:prewarmStartupServices:prewarmSystemPreferences:] */

void FUN_1048d60d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1048d5f88(0x1048d67f4,auStack_40,FUN_1048d6804,auStack_60,FUN_1048d683c,auStack_80,0x1048d6844
                ,auStack_a0,0x1048d6848,auStack_c0,0x1048d684c,auStack_e0,0x1048d6850,auStack_100,
                0x1048d6854,auStack_120,0x1048d6858,auStack_140,0x1048d685c,auStack_160,0x1048d6860,
                auStack_180,0x1048d6864,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d61f0; end: 1048d6223;  */

void FUN_1048d61f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d6224; end: 1048d663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6224(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_f0 [2];
  long alStack_e0 [22];
  
  plVar5 = alStack_f0;
  lVar3 = param_1;
  if (param_3 == '\0') {
    func_0x0001000ac07c();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11309bdb0) = 0;
    plVar2 = (long *)(lVar4 + _DAT_11309bdb8);
    *plVar2 = param_1;
    *(undefined1 *)(plVar2 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11309bdc0);
    *puVar1 = 0;
    puVar1[1] = 0;
    alStack_f0[0] = lVar4;
  }
  else {
    if (param_3 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048d6318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd46210)[param_1] * 4 + 0x1048d631c))();
      return;
    }
    func_0x0001000ac07c();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11309bdb0) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11309bdb8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    plVar5 = (long *)(lVar4 + _DAT_11309bdc0);
    *plVar5 = param_1;
    plVar5[1] = param_2;
    plVar5 = alStack_e0;
    alStack_e0[0] = lVar4;
  }
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d663c; end: 1048d67a3;  */

int FUN_1048d663c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d66b8;
        goto LAB_1048d669c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d669c:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_1048d66b8:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d67a4; end: 1048d67e3;  */

void FUN_1048d67a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bdf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46260;
  _swift_getWitnessTable(&UNK_10dd46260,&UNK_1107b5468);
  puRam000000011309bdf0 = puVar1;
  return;
}



/* Entry: 1048d67e4; end: 1048d6803;  */

ulong FUN_1048d67e4(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 1048d6804; end: 1048d683b;  */

void FUN_1048d6804(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048d683c; end: 1048d6867;  */

void FUN_1048d683c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1048d6868; end: 1048d693b;  */

void FUN_1048d6868(void)

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



/* Entry: 1048d693c; end: 1048d695b;  */

void FUN_1048d693c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d695c; end: 1048d6977; -[SCAttributedStoriesTask description] */

void FUN_1048d695c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6978; end: 1048d69bf; -[SCAttributedStoriesTask init] */

void FUN_1048d6978(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedStoriesTaskWrapper.swift",0x32,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d69c0);
  (*pcVar1)();
}



/* Entry: 1048d69c0; end: 1048d69c3; -[SCAttributedStoriesTask copyWithZone:] */

void FUN_1048d69c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d69c4; end: 1048d69cb; +[SCAttributedStoriesTask everywhereDFNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d69c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bdf8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d69cc; end: 1048d69db; +[SCAttributedStoriesTask cheetahStoriesRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d69cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bdf8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d69dc; end: 1048d69e3; +[SCAttributedStoriesTask appUserLifecycleObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d69dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bdf8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d69e4; end: 1048d6a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d69e4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309bdf8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d6a30; end: 1048d6a77; -[SCAttributedStoriesTask matchEverywhereDFNotification:cheetahStoriesRefresh:appUserLifecycleObserver:serviceEntryPoint:discoverFeedNotificationProcessors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6a30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bdf8);
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
                    /* WARNING: Could not recover jumptable at 0x0001048d6a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d6a78; end: 1048d6aab;  */

void FUN_1048d6a78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d6aac; end: 1048d6b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6aac(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  FUN_1048d6b34();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_70 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_70 + 8;
  }
  puVar3 = auStack_70 + 4;
  if (uVar1 != 2) {
    puVar3 = puVar2;
  }
  puVar2 = auStack_70;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_70 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309bdf8) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d6b34; end: 1048d6b53;  */

void FUN_1048d6b34(void)

{
  _objc_opt_self(&PTR_PTR_1129e3610);
  return;
}



/* Entry: 1048d6b54; end: 1048d6cbb;  */

int FUN_1048d6b54(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d6bd0;
        goto LAB_1048d6bb4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d6bb4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048d6bd0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d6cbc; end: 1048d6cfb;  */

void FUN_1048d6cbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309be28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46340;
  _swift_getWitnessTable(&UNK_10dd46340,&UNK_1107b5550);
  puRam000000011309be28 = puVar1;
  return;
}



/* Entry: 1048d6cfc; end: 1048d6d0b;  */

ulong FUN_1048d6cfc(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048d6d0c; end: 1048d6ddf;  */

void FUN_1048d6d0c(void)

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



/* Entry: 1048d6de0; end: 1048d6dff;  */

void FUN_1048d6de0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d6e00; end: 1048d6e1b; -[SCAttributedTalkTask description] */

void FUN_1048d6e00(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e1c; end: 1048d6e63; -[SCAttributedTalkTask init] */

void FUN_1048d6e1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedTalkTaskWrapper.swift",0x2f,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d6e64);
  (*pcVar1)();
}



/* Entry: 1048d6e64; end: 1048d6e67; -[SCAttributedTalkTask copyWithZone:] */

void FUN_1048d6e64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d6e68; end: 1048d6e6f; +[SCAttributedTalkTask cameraController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e70; end: 1048d6e77; +[SCAttributedTalkTask soundServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e78; end: 1048d6e7f; +[SCAttributedTalkTask cameraServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e80; end: 1048d6e87; +[SCAttributedTalkTask callKitCallManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e88; end: 1048d6e8f; +[SCAttributedTalkTask callLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e90; end: 1048d6e97; +[SCAttributedTalkTask superResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6e98; end: 1048d6e9f; +[SCAttributedTalkTask activeConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6e98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6ea0; end: 1048d6ea7; +[SCAttributedTalkTask contactsAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6ea0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be30) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d6ea8; end: 1048d6f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d6ea8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11309be30);
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
      if (bVar1 == 4) {
        param_12 = param_9;
      }
    }
    else {
      param_12 = param_15;
      if ((bVar1 != 6) && (param_12 = param_21, bVar1 == 7)) {
        param_12 = param_18;
      }
    }
    (*param_12)();
  }
  return;
}



/* Entry: 1048d6f60; end: 1048d703f; -[SCAttributedTalkTask matchNotificationProcessor:cameraController:soundServiceProvider:cameraServices:callKitCallManager:callLog:superResolution:activeConversations:contactsAlert:] */

void FUN_1048d6f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1048d6ea8(0x1048d7304,auStack_40,0x1048d730c,auStack_60,0x1048d7310,auStack_80,0x1048d7314,
                auStack_a0,0x1048d7318,auStack_c0,0x1048d731c,auStack_e0,0x1048d7320,auStack_100,
                0x1048d7324,auStack_120,0x1048d7328,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d7040; end: 1048d7073;  */

void FUN_1048d7040(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d7074; end: 1048d712b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7074(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_b0 [18];
  
  uVar5 = param_1;
  FUN_1048d712c();
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
  *(char *)(uVar6 + _DAT_11309be30) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d712c; end: 1048d714b;  */

void FUN_1048d712c(void)

{
  _objc_opt_self(&PTR_PTR_1129e36d0);
  return;
}



/* Entry: 1048d714c; end: 1048d72b3;  */

int FUN_1048d714c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d71c8;
        goto LAB_1048d71ac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d71ac:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1048d71c8:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d72b4; end: 1048d72f3;  */

void FUN_1048d72b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309be60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4641c;
  _swift_getWitnessTable(&UNK_10dd4641c,&UNK_1107b5638);
  puRam000000011309be60 = puVar1;
  return;
}



/* Entry: 1048d72f4; end: 1048d732b;  */

ulong FUN_1048d72f4(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 1048d732c; end: 1048d7353;  */

void FUN_1048d732c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048d7bbc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048d7354; end: 1048d736f; -[SCAttributedJobSchedulerSubtask description] */

void FUN_1048d7354(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d7370; end: 1048d73b7; -[SCAttributedJobSchedulerSubtask init] */

void FUN_1048d7370(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedWorkSchedulingTaskWrapper.swift",0x39,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d73b8);
  (*pcVar1)();
}



/* Entry: 1048d73b8; end: 1048d73ff; -[SCAttributedJobSchedulerSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d73b8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309be78));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048d7400; end: 1048d749f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048d7400(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_11309be78);
      cVar2 = *(char *)(lStack_58 + _DAT_11309be78);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048d74a0; end: 1048d751f; -[SCAttributedJobSchedulerSubtask isEqual:] */

uint FUN_1048d74a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048d7400(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048d7520; end: 1048d7527; +[SCAttributedJobSchedulerSubtask registerUnauthenticatedJobProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7520(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d7528; end: 1048d756f; -[SCAttributedJobSchedulerSubtask matchExposeUserJobProviderScope:registerSystemJobProviders:registerUnauthenticatedJobProviders:submitJobs:setupBackgroundWakeup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7528(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309be78);
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
                    /* WARNING: Could not recover jumptable at 0x0001048d756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d7570; end: 1048d75f3;  */

void FUN_1048d7570(void)

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



/* Entry: 1048d75f4; end: 1048d760b;  */

void FUN_1048d75f4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048d760c; end: 1048d764f; -[SCAttributedWorkSchedulingTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d760c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309be68) == '\x01') && (*(long *)(param_1 + _DAT_11309be70) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d7650);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d7650; end: 1048d7697; -[SCAttributedWorkSchedulingTask init] */

void FUN_1048d7650(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedWorkSchedulingTaskWrapper.swift",0x39,2,0xc4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d7698);
  (*pcVar1)();
}



/* Entry: 1048d7698; end: 1048d76eb; -[SCAttributedWorkSchedulingTask matchBackgroundCleanUp:jobScheduler:delayedEntryPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7698(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11309be68) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001048d76d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_11309be68) == '\x01') {
    if (*(long *)(param_1 + _DAT_11309be70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048d76c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x10))(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d76e8);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d76e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 1048d76ec; end: 1048d771f;  */

void FUN_1048d76ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d7720; end: 1048d77a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d7720(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  FUN_1048d784c();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_70 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_70 + 8;
  }
  puVar3 = auStack_70 + 4;
  if (uVar1 != 2) {
    puVar3 = puVar2;
  }
  puVar2 = auStack_70;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_70 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309be78) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d77a8; end: 1048d784b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d77a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long alStack_60 [6];
  
  plVar3 = alStack_60;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 5) {
    uVar5 = 0;
    lVar4 = 0;
  }
  else if (uVar1 == 6) {
    plVar3 = alStack_60 + 4;
    uVar5 = 2;
    lVar4 = 0;
  }
  else {
    FUN_1048d7720();
    plVar3 = alStack_60 + 2;
    uVar5 = 1;
    lVar4 = param_1;
  }
  func_0x0001048d786c();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309be68) = uVar5;
  *(long *)(lVar2 + _DAT_11309be70) = lVar4;
  *plVar3 = lVar2;
  plVar3[1] = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d784c; end: 1048d788b;  */

void FUN_1048d784c(void)

{
  _objc_opt_self(&PTR_PTR_1129e3790);
  return;
}



/* Entry: 1048d788c; end: 1048d7b37;  */

int FUN_1048d788c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d7908;
        goto LAB_1048d78ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d78ec:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048d7908:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d7b38; end: 1048d7b77;  */

void FUN_1048d7b38(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46578;
  _swift_getWitnessTable(&UNK_10dd46578,&UNK_1107b57b0);
  puRam000000011309bed0 = puVar1;
  return;
}



/* Entry: 1048d7b78; end: 1048d7b7b;  */

void FUN_1048d7b78(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46618;
  _swift_getWitnessTable(&UNK_10dd46618,&UNK_1107b5720);
  puRam000000011309bed8 = puVar1;
  return;
}



/* Entry: 1048d7b7c; end: 1048d7bbb;  */

void FUN_1048d7b7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46618;
  _swift_getWitnessTable(&UNK_10dd46618,&UNK_1107b5720);
  puRam000000011309bed8 = puVar1;
  return;
}



/* Entry: 1048d7bbc; end: 1048d7c03;  */

ulong FUN_1048d7bbc(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048d7c04; end: 1048d7c07; -[SCAttributedJobSchedulerSubtask copyWithZone:] */

void FUN_1048d7c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d7c08; end: 1048d7c0f; -[SCAttributedWorkSchedulingTask copyWithZone:] */

void FUN_1048d7c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d7c10; end: 1048d7c53; +[SCFlipperDeprecatedSingleton sharedInstance] */

void FUN_1048d7c10(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815530,auStack_38,0,0);
  _swift_unknownObjectRetain(uRam0000000113815530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d7c54; end: 1048d7cb3; +[SCFlipperDeprecatedSingleton setSharedInstance:] */

void FUN_1048d7c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815530,auStack_48,1,0);
  uVar1 = uRam0000000113815530;
  uRam0000000113815530 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1048d7cb4; end: 1048d7cef; -[SCFlipperDeprecatedSingleton init] */

void FUN_1048d7cb4(undefined8 param_1)

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



/* Entry: 1048d7cf0; end: 1048d7d23;  */

void FUN_1048d7cf0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d7d24; end: 1048d7d27; -[SCFlipperDeprecatedSingleton .cxx_destruct] */

void FUN_1048d7d24(void)

{
  return;
}



/* Entry: 1048d7d28; end: 1048d7d47;  */

void FUN_1048d7d28(void)

{
  _objc_opt_self(&PTR_PTR_1129e3918);
  return;
}


