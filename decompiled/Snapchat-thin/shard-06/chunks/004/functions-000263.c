/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10484ec68; end: 10484ec6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484ec68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091f18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484ec6c; end: 10484ed17;  */

void FUN_10484ec6c(void)

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



/* Entry: 10484ed18; end: 10484ed57;  */

void FUN_10484ed18(undefined1 *param_1,long *param_2)

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



/* Entry: 10484ed58; end: 10484eda7; -[SCNotificationAPNSTokenEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484ed58(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113091f48) != '\x01') &&
     (0xe < *(ulong *)(param_1 + _DAT_113091f50 + 8) >> 0x3c)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10484eda8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484eda8; end: 10484edef; -[SCNotificationAPNSTokenEvent init] */

void FUN_10484eda8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationAPNSTokenEventWrapper.swift",0x38,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484edf0);
  (*pcVar1)();
}



/* Entry: 10484edf0; end: 10484edf3; -[SCNotificationAPNSTokenEvent copyWithZone:] */

void FUN_10484edf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484edf4; end: 10484ee83; +[SCNotificationAPNSTokenEvent successWithToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484edf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113091f48) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113091f50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484ee84; end: 10484ef53; +[SCNotificationAPNSTokenEvent failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484ee84(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113091f48) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113091f50);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484ef54; end: 10484effb; -[SCNotificationAPNSTokenEvent matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484ef54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_113091f48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010484ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_113091f50))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113091f50);
    _objc_retain();
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484effc);
  (*pcVar1)();
}



/* Entry: 10484effc; end: 10484f02f;  */

void FUN_10484effc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484f030; end: 10484f043; -[SCNotificationAPNSTokenEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f030(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_113091f50);
  uVar1 = ((ulong *)(param_1 + _DAT_113091f50))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10484f044; end: 10484f063;  */

void FUN_10484f044(void)

{
  _objc_opt_self(&PTR_PTR_1129dc4a8);
  return;
}



/* Entry: 10484f064; end: 10484f1cb;  */

int FUN_10484f064(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10484f0e0;
        goto LAB_10484f0c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10484f0c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10484f0e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10484f1cc; end: 10484f20b;  */

void FUN_10484f1cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37874;
  _swift_getWitnessTable(&UNK_10dd37874,&UNK_1107a2ed0);
  puRam0000000113091f80 = puVar1;
  return;
}



/* Entry: 10484f20c; end: 10484f21f; -[SCNotificationBackgroundJobContext targetScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484f20c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091f88);
}



/* Entry: 10484f220; end: 10484f2b7; -[SCNotificationBackgroundJobContext initWithTargetScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113091f88) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484f2b8; end: 10484f2bb; -[SCNotificationBackgroundJobContext copyWithZone:] */

void FUN_10484f2b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484f2bc; end: 10484f2d7; -[SCNotificationBackgroundJobContext description] */

void FUN_10484f2bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484f2d8; end: 10484f373; -[SCNotificationBackgroundJobContext init] */

void FUN_10484f2d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationBackgroundJobContextWrapper.swift",0x3e,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484f320);
  (*pcVar1)();
}



/* Entry: 10484f374; end: 10484f377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f374(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091f88) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484f378; end: 10484f44b;  */

void FUN_10484f378(void)

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



/* Entry: 10484f44c; end: 10484f46b;  */

void FUN_10484f44c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10484f46c; end: 10484f48b; -[SCNotificationLifecycleEvent description] */

void FUN_10484f46c(void)

{
  func_0x00010484f7b4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484f48c; end: 10484f4d3; -[SCNotificationLifecycleEvent init] */

void FUN_10484f48c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationLifecycleEventWrapper.swift",0x38,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484f4d4);
  (*pcVar1)();
}



/* Entry: 10484f4d4; end: 10484f4d7; -[SCNotificationLifecycleEvent copyWithZone:] */

void FUN_10484f4d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484f4d8; end: 10484f527; +[SCNotificationLifecycleEvent tappedNotificationWithIsInAppNotification:notification:] */

void FUN_10484f4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_10484f83c(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484f528; end: 10484f567; +[SCNotificationLifecycleEvent tappedCustomActionWithNotification:] */

void FUN_10484f528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_10484f8e0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484f568; end: 10484f5a7; +[SCNotificationLifecycleEvent openSettingsForNotificationWithNotification:] */

void FUN_10484f568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010484f980(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484f5a8; end: 10484f5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f5a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x0001005f3d18();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113091fb8) = 3;
  *(undefined1 *)(lVar3 + _DAT_113091fc0) = 2;
  *(undefined8 *)(lVar3 + _DAT_113091fc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113091fd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_113091fd8) = 0;
  *(long *)(lVar3 + _DAT_113091fe0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10484f5ac; end: 10484f6a3; +[SCNotificationLifecycleEvent openAppFromNotificationWithNotification:] */

void FUN_10484f5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010484fa1c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484f6a4; end: 10484f717; -[SCNotificationLifecycleEvent matchTappedNotification:tappedCustomAction:openSettingsForNotification:openAppFromNotification:] */

void FUN_10484f6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010484f5ec(FUN_10484fc64,auStack_40,0x10484fc8c,auStack_60,0x10484fc7c,auStack_80,
                      0x10484fc90,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 10484f718; end: 10484f74b;  */

void FUN_10484f718(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484f74c; end: 10484f7a3; -[SCNotificationLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f74c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091fc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091fd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091fd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091fe0));
  return;
}



/* Entry: 10484f7a4; end: 10484f83b;  */

ulong FUN_10484f7a4(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 10484f83c; end: 10484f8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x0001005f3d18();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113091fb8) = 0;
  *(char *)(lVar3 + _DAT_113091fc0) = (char)param_1;
  *(undefined8 *)(lVar3 + _DAT_113091fc8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113091fd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_113091fd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113091fe0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10484f8e0; end: 10484fabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484f8e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x0001005f3d18();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113091fb8) = 1;
  *(undefined1 *)(lVar3 + _DAT_113091fc0) = 2;
  *(undefined8 *)(lVar3 + _DAT_113091fc8) = 0;
  *(long *)(lVar3 + _DAT_113091fd0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_113091fd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113091fe0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10484fabc; end: 10484fc23;  */

int FUN_10484fabc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10484fb38;
        goto LAB_10484fb1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10484fb1c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10484fb38:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10484fc24; end: 10484fc63;  */

void FUN_10484fc24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113092010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37994;
  _swift_getWitnessTable(&UNK_10dd37994,&UNK_1107a2fb8);
  puRam0000000113092010 = puVar1;
  return;
}



/* Entry: 10484fc64; end: 10484fc93;  */

void FUN_10484fc64(uint param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010484fc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2)
  ;
  return;
}



/* Entry: 10484fc94; end: 10484fd67;  */

void FUN_10484fc94(void)

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



/* Entry: 10484fd68; end: 10484fd87;  */

void FUN_10484fd68(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10484fd88; end: 10484fdbb;  */

undefined8 FUN_10484fd88(undefined8 param_1)

{
  (*(code *)(undefined *)0x10484c74c)();
  return param_1;
}



/* Entry: 10484fdbc; end: 10484fdef; -[SCNotificationProcessingStepEvent description] */

void FUN_10484fdbc(void)

{
  undefined1 auStack_38 [40];
  
  FUN_104850388(auStack_38);
  FUN_10484fd88(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484fdf0; end: 10484fe37; -[SCNotificationProcessingStepEvent init] */

void FUN_10484fdf0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationProcessingStepEventWrapper.swift",0x3d,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484fe38);
  (*pcVar1)();
}



/* Entry: 10484fe38; end: 10484fe3f; -[SCNotificationProcessingStepEvent copyWithZone:] */

void FUN_10484fe38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484fe40; end: 10484feef; +[SCNotificationProcessingStepEvent notificationArrivedWithNotification:fromNotificationCenter:clientReceiveTimestampMs:completionHandler:] */

void FUN_10484fe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1107a30e8;
    _swift_allocObject(&UNK_1107a30e8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x104850cd8;
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104850560(param_3,param_4,param_5,uVar3,puVar2);
  func_0x000101eb882c(uVar3,puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10484fef0; end: 10484ff3f; +[SCNotificationProcessingStepEvent notificationIsSuppressedWithNotification:isAppForegrounded:suppressionReason:] */

void FUN_10484fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104850690();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484ff40; end: 10484ff77; +[SCNotificationProcessingStepEvent notificationIsSuppressedDueToOSPermissionWithNotification:] */

void FUN_10484ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10485079c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484ff78; end: 10484ffb7; +[SCNotificationProcessingStepEvent notificationWillDisplayWithNotification:isAppForegrounded:] */

void FUN_10484ff78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104850898();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484ffb8; end: 104850173; +[SCNotificationProcessingStepEvent notificationIsClaimedWithNotification:] */

void FUN_10484ffb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048509a4();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104850174; end: 1048501fb; -[SCNotificationProcessingStepEvent matchNotificationArrived:notificationIsSuppressed:notificationIsSuppressedDueToOSPermission:notificationWillDisplay:notificationIsClaimed:] */

void FUN_104850174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
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
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010484fff0(FUN_104850c6c,auStack_40,0x104850c74,auStack_60,0x104850c90,auStack_80,
                      0x104850ca0,auStack_a0,0x104850cd4,auStack_c0);
  _objc_release(param_1);
  return;
}



/* Entry: 1048501fc; end: 1048502c7;  */

void FUN_1048501fc(undefined8 param_1,uint param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  if (param_4 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101228174;
    puStack_68 = &UNK_1107a30b0;
    lStack_60 = param_4;
    uStack_58 = param_5;
    __Block_copy(&puStack_80);
    uVar1 = uStack_58;
    _swift_retain(param_5);
    _swift_release(uVar1);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_2 & 1,param_3,ppuVar2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 1048502c8; end: 1048502fb;  */

void FUN_1048502c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048502fc; end: 104850377; -[SCNotificationProcessingStepEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048502fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113092020));
  func_0x000101eb882c(*(undefined8 *)(param_1 + _DAT_113092038),
                      ((undefined8 *)(param_1 + _DAT_113092038))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113092040));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113092058));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113092060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113092070));
  return;
}



/* Entry: 104850378; end: 104850387;  */

ulong FUN_104850378(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 104850388; end: 10485055f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850388(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  bVar1 = *(byte *)(param_2 + _DAT_113092018);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(byte *)(param_2 + _DAT_113092028) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104850548);
        (*pcVar2)();
      }
      if ((char)((long *)(param_2 + _DAT_113092030))[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104850558);
        (*pcVar2)();
      }
      lVar3 = *(long *)(param_2 + _DAT_113092020);
      lVar6 = *(long *)(param_2 + _DAT_113092030);
      lVar4 = *(long *)(param_2 + _DAT_113092038);
      lVar5 = ((long *)(param_2 + _DAT_113092038))[1];
      uVar7 = (ulong)*(byte *)(param_2 + _DAT_113092028) & 1;
      _objc_retain(lVar3);
      func_0x000101eb8fc4(lVar4,lVar5);
      goto LAB_10485051c;
    }
    lVar3 = *(long *)(param_2 + _DAT_113092040);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104850550);
      (*pcVar2)();
    }
    if (*(byte *)(param_2 + _DAT_113092048) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485055c);
      (*pcVar2)();
    }
    if ((char)((long *)(param_2 + _DAT_113092050))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104850560);
      (*pcVar2)();
    }
    lVar6 = *(long *)(param_2 + _DAT_113092050);
    uVar7 = (ulong)*(byte *)(param_2 + _DAT_113092048) & 1 | 0x2000000000000000;
    _objc_retain(lVar3);
  }
  else {
    if (bVar1 == 2) {
      lVar3 = *(long *)(param_2 + _DAT_113092058);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104850540);
        (*pcVar2)();
      }
      _objc_retain(lVar3);
      lVar6 = 0;
      lVar4 = 0;
      lVar5 = 0;
      uVar7 = 0x4000000000000000;
      goto LAB_10485051c;
    }
    if (bVar1 != 3) {
      lVar3 = *(long *)(param_2 + _DAT_113092070);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485054c);
        (*pcVar2)();
      }
      _objc_retain(lVar3);
      lVar6 = 0;
      lVar4 = 0;
      lVar5 = 0;
      uVar7 = 0x8000000000000000;
      goto LAB_10485051c;
    }
    lVar3 = *(long *)(param_2 + _DAT_113092060);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104850544);
      (*pcVar2)();
    }
    if (*(byte *)(param_2 + _DAT_113092068) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104850554);
      (*pcVar2)();
    }
    uVar7 = (ulong)*(byte *)(param_2 + _DAT_113092068) & 1 | 0x6000000000000000;
    _objc_retain(lVar3);
    lVar6 = 0;
  }
  lVar4 = 0;
  lVar5 = 0;
LAB_10485051c:
  *param_1 = lVar3;
  param_1[1] = uVar7;
  param_1[2] = lVar6;
  param_1[3] = lVar4;
  param_1[4] = lVar5;
  return;
}



/* Entry: 104850560; end: 10485068f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850560(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_104850aa4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113092018) = 0;
  *(long *)(lVar3 + _DAT_113092020) = param_1;
  *(undefined1 *)(lVar3 + _DAT_113092028) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113092030);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113092038);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(lVar3 + _DAT_113092040) = 0;
  *(undefined1 *)(lVar3 + _DAT_113092048) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113092050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_113092058) = 0;
  *(undefined8 *)(lVar3 + _DAT_113092060) = 0;
  *(undefined1 *)(lVar3 + _DAT_113092068) = 2;
  *(undefined8 *)(lVar3 + _DAT_113092070) = 0;
  _objc_retain(param_1);
  func_0x000101eb8fc4(param_4,param_5);
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104850690; end: 10485079b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850690(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104850aa4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113092018) = 1;
  *(undefined8 *)(lVar4 + _DAT_113092020) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092028) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092038);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_113092040) = param_1;
  *(undefined1 *)(lVar4 + _DAT_113092048) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092050);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113092058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113092060) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092068) = 2;
  *(undefined8 *)(lVar4 + _DAT_113092070) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10485079c; end: 104850897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485079c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104850aa4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113092018) = 2;
  *(undefined8 *)(lVar4 + _DAT_113092020) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092028) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092038);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113092040) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092048) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113092058) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113092060) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092068) = 2;
  *(undefined8 *)(lVar4 + _DAT_113092070) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104850898; end: 1048509a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850898(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_104850aa4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113092018) = 3;
  *(undefined8 *)(lVar4 + _DAT_113092020) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092028) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092038);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113092040) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092048) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113092058) = 0;
  *(long *)(lVar4 + _DAT_113092060) = param_1;
  *(undefined1 *)(lVar4 + _DAT_113092068) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113092070) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1048509a4; end: 104850aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048509a4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104850aa4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113092018) = 4;
  *(undefined8 *)(lVar4 + _DAT_113092020) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092028) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092030);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092038);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113092040) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092048) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113092050);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113092058) = 0;
  *(undefined8 *)(lVar4 + _DAT_113092060) = 0;
  *(undefined1 *)(lVar4 + _DAT_113092068) = 2;
  *(long *)(lVar4 + _DAT_113092070) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104850aa4; end: 104850ac3;  */

void FUN_104850aa4(void)

{
  _objc_opt_self(&PTR_PTR_1129dc720);
  return;
}



/* Entry: 104850ac4; end: 104850c2b;  */

int FUN_104850ac4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104850b40;
        goto LAB_104850b24;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104850b24:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_104850b40:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104850c2c; end: 104850c6b;  */

void FUN_104850c2c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130920a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37a98;
  _swift_getWitnessTable(&UNK_10dd37a98,&UNK_1107a30a0);
  puRam00000001130920a0 = puVar1;
  return;
}



/* Entry: 104850c6c; end: 104850ce3;  */

void FUN_104850c6c(undefined8 param_1,uint param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_80;
  if (param_4 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101228174;
    puStack_68 = &UNK_1107a30b0;
    lStack_60 = param_4;
    uStack_58 = param_5;
    __Block_copy(&puStack_80);
    uVar1 = uStack_58;
    _swift_retain(param_5);
    _swift_release(uVar1);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2 & 1,param_3,ppuVar3);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 104850ce4; end: 104850d3f; -[SCNotificationRegisterLPSETokenEvent token] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850ce4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130920a8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130920a8))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104850d40; end: 104850d53; -[SCNotificationRegisterLPSETokenEvent forceUpdateToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104850d40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130920b0);
}



/* Entry: 104850d54; end: 104850deb; -[SCNotificationRegisterLPSETokenEvent initWithToken:forceUpdateToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850d54(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130920a8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_1130920b0) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104850dec; end: 104850e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850dec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130920a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130920b0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104850e58; end: 104850e5b; -[SCNotificationRegisterLPSETokenEvent copyWithZone:] */

void FUN_104850e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104850e5c; end: 104850ea7; -[SCNotificationRegisterLPSETokenEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850e5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130920a8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130920a8))[1];
  func_0x00010006c00c(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104850ea8; end: 104850f23; -[SCNotificationRegisterLPSETokenEvent init] */

void FUN_104850ea8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationRegisterLPSETokenEventWrapper.swift",0x40,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104850ef0);
  (*pcVar1)();
}



/* Entry: 104850f24; end: 104850f37; -[SCNotificationRegisterLPSETokenEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850f24(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1130920a8);
  uVar1 = ((ulong *)(param_1 + _DAT_1130920a8))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104850f38; end: 104850f57;  */

void FUN_104850f38(void)

{
  _objc_opt_self(&PTR_PTR_1129dc838);
  return;
}



/* Entry: 104850f58; end: 104850f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104850f58(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130920a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130920b0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104850f5c; end: 104851007;  */

void FUN_104850f5c(void)

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



/* Entry: 104851008; end: 104851047;  */

void FUN_104851008(undefined1 *param_1,long *param_2)

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



/* Entry: 104851048; end: 104851097; -[SCNotificationVOIPTokenEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104851048(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_1130920e0) != '\x01') &&
     (0xe < *(ulong *)(param_1 + _DAT_1130920e8 + 8) >> 0x3c)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104851098);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104851098; end: 1048510df; -[SCNotificationVOIPTokenEvent init] */

void FUN_104851098(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCNotificationVOIPTokenEventWrapper.swift",0x38,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048510e0);
  (*pcVar1)();
}



/* Entry: 1048510e0; end: 1048510e3; -[SCNotificationVOIPTokenEvent copyWithZone:] */

void FUN_1048510e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048510e4; end: 10485115b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048510e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130920e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130920e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010006c00c(param_1,param_2);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10485115c; end: 1048511eb; +[SCNotificationVOIPTokenEvent successWithToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485115c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130920e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130920e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048511ec; end: 104851243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048511ec(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130920e0) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130920e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  _objc_msgSendSuper2(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104851244; end: 104851313; +[SCNotificationVOIPTokenEvent invalidated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104851244(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130920e0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130920e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104851314; end: 1048513bb; -[SCNotificationVOIPTokenEvent matchSuccess:invalidated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104851314(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_1130920e0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010485134c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130920e8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130920e8);
    _objc_retain();
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048513bc);
  (*pcVar1)();
}



/* Entry: 1048513bc; end: 1048513ef;  */

void FUN_1048513bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048513f0; end: 104851403; -[SCNotificationVOIPTokenEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048513f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1130920e8);
  uVar1 = ((ulong *)(param_1 + _DAT_1130920e8))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104851404; end: 104851423;  */

void FUN_104851404(void)

{
  _objc_opt_self(&PTR_PTR_1129dc908);
  return;
}



/* Entry: 104851424; end: 10485158b;  */

int FUN_104851424(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048514a0;
        goto LAB_104851484;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104851484:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048514a0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10485158c; end: 1048515cb;  */

void FUN_10485158c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113092118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37bb4;
  _swift_getWitnessTable(&UNK_10dd37bb4,&UNK_1107a31d8);
  puRam0000000113092118 = puVar1;
  return;
}



/* Entry: 1048515cc; end: 1048515e3;  */

bool FUN_1048515cc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048515e4; end: 104851623;  */

void FUN_1048515e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113092120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd37c60;
  _swift_getWitnessTable(&UNK_10dd37c60,&UNK_1107a3288);
  puRam0000000113092120 = puVar1;
  return;
}



/* Entry: 104851624; end: 1048516cf;  */

void FUN_104851624(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048516d0; end: 104851713;  */

void FUN_1048516d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104851714; end: 104851737; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType video] */

void FUN_104851714(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f45444956,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104851738; end: 104851743;  */

undefined * FUN_104851738(void)

{
  return &UNK_10dd37d60;
}



/* Entry: 104851744; end: 104851773; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType silentSnap] */

void FUN_104851744(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f544e454c4953,0xeb0000000050414e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104851774; end: 104851783; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType .cxx_destruct] */

void FUN_104851774(void)

{
  return;
}



/* Entry: 104851784; end: 1048517b7; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName audioSnap] */

void FUN_104851784(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e735f6f69647561,0xef6e6f63695f7061);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048517b8; end: 1048517c3;  */

undefined * FUN_1048517b8(void)

{
  return &UNK_1107a32f0;
}


