/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048bdbc8; end: 1048bdbcf; +[SCAttributedCOFConfigManagerSubTask initOnLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdbc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae30) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bdbd0; end: 1048bdbd7; +[SCAttributedCOFConfigManagerSubTask initOnForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdbd0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae30) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bdbd8; end: 1048bdc03; -[SCAttributedCOFConfigManagerSubTask matchInitOnResume:initOnLogin:initOnForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdbd8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309ae30) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309ae30) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048bdc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048bdc04; end: 1048bdcaf;  */

void FUN_1048bdc04(void)

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



/* Entry: 1048bdcb0; end: 1048bdcf3; -[SCAttributedCOFTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdcb0(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309ae20) == '\x02') && (*(long *)(param_1 + _DAT_11309ae28) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048bdcf4);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bdcf4; end: 1048bdd3b; -[SCAttributedCOFTask init] */

void FUN_1048bdcf4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCOFTaskWrapper.swift",0x2e,2,0xae,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048bdd3c);
  (*pcVar1)();
}



/* Entry: 1048bdd3c; end: 1048bdd43; +[SCAttributedCOFTask configRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdd3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae20) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309ae28) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bdd44; end: 1048bdd4b; +[SCAttributedCOFTask sharedContainerRead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdd44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae20) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309ae28) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bdd4c; end: 1048bddc7; -[SCAttributedCOFTask matchAppStartExperimentLogger:canaryStudy:configManager:configRecovery:sharedContainerRead:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bdd4c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309ae20);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048bdd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001048bddbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048bdd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_6 + 0x10))(param_6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001048bddb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_7 + 0x10))(param_7);
    return;
  }
  if (*(long *)(param_1 + _DAT_11309ae28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048bdda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1048bddc4);
  (*pcVar2)();
}



/* Entry: 1048bddc8; end: 1048bddfb;  */

void FUN_1048bddc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048bddfc; end: 1048bde6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bddfc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  FUN_1048bdf48();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11309ae30) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048bde6c; end: 1048bdf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bde6c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long alStack_80 [2];
  long alStack_70 [2];
  long alStack_60 [2];
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar3 = alStack_80;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 5) {
    if (uVar1 == 3) {
      uVar5 = 0;
      lVar4 = 0;
      goto LAB_1048bdefc;
    }
    if (uVar1 == 4) {
      plVar3 = alStack_70;
      uVar5 = 1;
      lVar4 = 0;
      goto LAB_1048bdefc;
    }
  }
  else {
    if (uVar1 == 5) {
      lVar4 = 0;
      plVar3 = alStack_50;
      uVar5 = 3;
      goto LAB_1048bdefc;
    }
    if (uVar1 == 6) {
      lVar4 = 0;
      plVar3 = alStack_40;
      uVar5 = 4;
      goto LAB_1048bdefc;
    }
  }
  FUN_1048bddfc();
  plVar3 = alStack_60;
  uVar5 = 2;
  lVar4 = param_1;
LAB_1048bdefc:
  func_0x0001000faf74();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309ae20) = uVar5;
  *(long *)(lVar2 + _DAT_11309ae28) = lVar4;
  *plVar3 = lVar2;
  plVar3[1] = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048bdf48; end: 1048bdf67;  */

void FUN_1048bdf48(void)

{
  _objc_opt_self(&PTR_PTR_1129e0328);
  return;
}



/* Entry: 1048bdf68; end: 1048be213;  */

int FUN_1048bdf68(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048bdfe4;
        goto LAB_1048bdfc8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048bdfc8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048bdfe4:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048be214; end: 1048be253;  */

void FUN_1048be214(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ae88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4253c;
  _swift_getWitnessTable(&UNK_10dd4253c,&UNK_1107b2568);
  puRam000000011309ae88 = puVar1;
  return;
}



/* Entry: 1048be254; end: 1048be257;  */

void FUN_1048be254(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ae90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd425dc;
  _swift_getWitnessTable(&UNK_10dd425dc,&UNK_1107b24d8);
  puRam000000011309ae90 = puVar1;
  return;
}



/* Entry: 1048be258; end: 1048be297;  */

void FUN_1048be258(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ae90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd425dc;
  _swift_getWitnessTable(&UNK_10dd425dc,&UNK_1107b24d8);
  puRam000000011309ae90 = puVar1;
  return;
}



/* Entry: 1048be298; end: 1048be2df;  */

ulong FUN_1048be298(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048be2e0; end: 1048be2e3; -[SCAttributedCOFConfigManagerSubTask copyWithZone:] */

void FUN_1048be2e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048be2e4; end: 1048be2eb; -[SCAttributedCOFTask copyWithZone:] */

void FUN_1048be2e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048be2ec; end: 1048be333; -[SCAttributedCameraLockedScreenCaptureSubTask init] */

void FUN_1048be2ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048be334);
  (*pcVar1)();
}



/* Entry: 1048be334; end: 1048be33f; -[SCAttributedCameraLockedScreenCaptureSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be334(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309ae98));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048be340; end: 1048be34b; -[SCAttributedCameraLockedScreenCaptureSubTask isEqual:] */

uint FUN_1048be340(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048be578(&uStack_50,&DAT_11309ae98);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048be34c; end: 1048be35b; +[SCAttributedCameraLockedScreenCaptureSubTask deepLinkProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be34c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae98) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048be35c; end: 1048be36b; +[SCAttributedCameraLockedScreenCaptureSubTask invalidateSessionContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be35c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae98) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048be36c; end: 1048be387; -[SCAttributedCameraLockedScreenCaptureSubTask matchDeepLinkProcessing:invalidateSessionContents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be36c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309ae98) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048be384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048be388; end: 1048be3cf; -[SCAttributedMicNotificationSubTask init] */

void FUN_1048be388(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x8d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048be3d0);
  (*pcVar1)();
}



/* Entry: 1048be3d0; end: 1048be3db; -[SCAttributedMicNotificationSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be3d0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309aea0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048be3dc; end: 1048be3e7; -[SCAttributedMicNotificationSubTask isEqual:] */

uint FUN_1048be3dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048be578(&uStack_50,&DAT_11309aea0);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048be3e8; end: 1048be477;  */

uint FUN_1048be3e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_1048be578(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048be478; end: 1048be487; +[SCAttributedMicNotificationSubTask callObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be478(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea0) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048be488; end: 1048be497; +[SCAttributedMicNotificationSubTask callStatusUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be488(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aea0) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048be498; end: 1048be4b3; -[SCAttributedMicNotificationSubTask matchCallObserver:callStatusUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be498(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309aea0) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048be4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048be4b4; end: 1048be4db;  */

void FUN_1048be4b4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048bff6c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048be4dc; end: 1048be523; -[SCAttributedCameraMainCameraStartupSubTask init] */

void FUN_1048be4dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x100,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048be524);
  (*pcVar1)();
}



/* Entry: 1048be524; end: 1048be52f; -[SCAttributedCameraMainCameraStartupSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be524(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309aea8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048be530; end: 1048be577;  */

void FUN_1048be530(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048be578; end: 1048be617;  */

bool FUN_1048be578(undefined8 param_1,long *param_2)

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



/* Entry: 1048be618; end: 1048be623; -[SCAttributedCameraMainCameraStartupSubTask isEqual:] */

uint FUN_1048be618(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048be578(&uStack_50,&DAT_11309aea8);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048be624; end: 1048be66f; -[SCAttributedCameraMainCameraStartupSubTask matchGeoFilterInit:tooltipPriorityResolver:onboardingTooltip:viewDidAppear:uploadPrefetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048be624(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309aea8);
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
                    /* WARNING: Could not recover jumptable at 0x0001048be668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048be670; end: 1048be70f;  */

void FUN_1048be670(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048be710; end: 1048be733;  */

void FUN_1048be710(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1048be734; end: 1048be77b; -[SCAttributedCameraHardwareSubTask init] */

void FUN_1048be734(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x180,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048be77c);
  (*pcVar1)();
}



/* Entry: 1048be77c; end: 1048be7b7; -[SCAttributedCameraHardwareSubTask hash] */

void FUN_1048be77c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048be7b8; end: 1048be843;  */

undefined8 FUN_1048be7b8(undefined8 param_1)

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



/* Entry: 1048be844; end: 1048be8c3; -[SCAttributedCameraHardwareSubTask isEqual:] */

uint FUN_1048be844(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048be7b8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048be8c4; end: 1048be903; +[SCAttributedCameraHardwareSubTask frameHealthChecker] */

void FUN_1048be8c4(undefined8 param_1)

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



/* Entry: 1048be904; end: 1048be90f; -[SCAttributedCameraHardwareSubTask matchFrameHealthChecker:] */

void FUN_1048be904(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001048be90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048be910; end: 1048be9bb;  */

void FUN_1048be910(void)

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



/* Entry: 1048be9bc; end: 1048be9df; -[SCAttributedCameraTask description] */

void FUN_1048be9bc(void)

{
  _objc_retain();
  func_0x0001000b8600();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048be9e0; end: 1048bea27; -[SCAttributedCameraTask init] */

void FUN_1048be9e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedCameraTaskWrapper.swift",0x31,2,0x277,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048bea28);
  (*pcVar1)();
}



/* Entry: 1048bea28; end: 1048bea2f; +[SCAttributedCameraTask lockScreenExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bea28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bea30; end: 1048bea67; +[SCAttributedCameraTask lockedCameraCapture:] */

void FUN_1048bea30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1048bff8c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048bea68; end: 1048bea6f; +[SCAttributedCameraTask warmupPreviewNavigationPageRouter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bea68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 6;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bea70; end: 1048bea77; +[SCAttributedCameraTask warmupPreviewStartupWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bea70(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 8;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bea78; end: 1048bea7f; +[SCAttributedCameraTask activateLensFromPushNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bea78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 10;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bea80; end: 1048beab7; +[SCAttributedCameraTask micNotification:] */

void FUN_1048bea80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001048c001c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048beab8; end: 1048beabf; +[SCAttributedCameraTask miniCarouselFetchThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beab8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0xd;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beac0; end: 1048beac7; +[SCAttributedCameraTask portraitMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beac0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x11;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beac8; end: 1048beacf; +[SCAttributedCameraTask gridMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beac8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x14;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bead0; end: 1048bead7; +[SCAttributedCameraTask swipeToToggle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bead0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x15;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048bead8; end: 1048beadf; +[SCAttributedCameraTask faceDetection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bead8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x17;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beae0; end: 1048beae7; +[SCAttributedCameraTask bipaDisclaimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beae0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x18;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beae8; end: 1048beb1f; +[SCAttributedCameraTask hardware:] */

void FUN_1048beae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001048c00ac();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048beb20; end: 1048beb27; +[SCAttributedCameraTask lockedCameraCaptureExtensionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x1b;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beb28; end: 1048beb2f; +[SCAttributedCameraTask warmupPreviewReplyCameraWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x1c;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beb30; end: 1048beb37; +[SCAttributedCameraTask superResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x1d;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beb38; end: 1048beb3f; +[SCAttributedCameraTask warmupCameraHardwareResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x1e;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beb40; end: 1048beb47; +[SCAttributedCameraTask warmupCameraRequestHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x1f;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048beb48; end: 1048beebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048beb48(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined8 param_13,
                  code *param_14,undefined8 param_15,code *param_16,undefined8 param_17,
                  code *param_18,undefined8 param_19,code *param_20,undefined8 param_21,
                  code *param_22,undefined8 param_23,code *param_24,undefined8 param_25,
                  code *param_26,undefined4 param_27,undefined4 param_28,code *param_29,
                  undefined4 param_30,undefined4 param_31,code *param_32,undefined4 param_33,
                  undefined4 param_34,code *param_35,undefined4 param_36,undefined4 param_37,
                  code *param_38,undefined4 param_39,undefined4 param_40,code *param_41,
                  undefined4 param_42,undefined4 param_43,code *param_44,undefined4 param_45,
                  undefined4 param_46,code *param_47,undefined4 param_48,undefined4 param_49,
                  code *param_50,undefined4 param_51,undefined4 param_52,code *param_53,
                  undefined4 param_54,undefined4 param_55,code *param_56,undefined4 param_57,
                  undefined4 param_58,code *param_59,undefined4 param_60,undefined4 param_61,
                  code *param_62,undefined4 param_63,undefined4 param_64,code *param_65,
                  undefined4 param_66,undefined4 param_67,code *param_68,undefined4 param_69,
                  undefined4 param_70,code *param_71,undefined4 param_72,undefined4 param_73,
                  code *param_74,undefined4 param_75,undefined4 param_76,code *param_77,
                  undefined4 param_78,undefined4 param_79,code *param_80,undefined4 param_81,
                  undefined4 param_82,code *param_83)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11309aeb0)) {
  case 0:
    (*param_1)();
    break;
  case 1:
    (*param_3)();
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
    if (*(long *)(unaff_x20 + _DAT_11309aeb8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048beeb8);
      (*pcVar1)();
    }
    (*param_12)();
    break;
  case 6:
    (*param_14)();
    break;
  case 7:
    (*param_16)();
    break;
  case 8:
    (*param_18)();
    break;
  case 9:
    (*param_20)();
    break;
  case 10:
    (*param_22)();
    break;
  case 0xb:
    (*param_24)();
    break;
  case 0xc:
    param_68 = param_26;
    if (*(long *)(unaff_x20 + _DAT_11309aec0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048beeb0);
      (*pcVar1)();
    }
    goto code_r0x0001048bee88;
  case 0xd:
    (*param_29)();
    break;
  case 0xe:
    (*param_32)();
    break;
  case 0xf:
    (*param_35)();
    break;
  case 0x10:
    (*param_38)();
    break;
  case 0x11:
    (*param_41)();
    break;
  case 0x12:
    (*param_44)();
    break;
  case 0x13:
    (*param_47)();
    break;
  case 0x14:
    (*param_50)();
    break;
  case 0x15:
    (*param_53)();
    break;
  case 0x16:
    (*param_56)();
    break;
  case 0x17:
    (*param_59)();
    break;
  case 0x18:
    (*param_62)();
    break;
  case 0x19:
    param_68 = param_65;
    if (*(long *)(unaff_x20 + _DAT_11309aec8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048beeb4);
      (*pcVar1)();
    }
    goto code_r0x0001048bee88;
  case 0x1a:
    if (*(long *)(unaff_x20 + _DAT_11309aed0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048beebc);
      (*pcVar1)();
    }
code_r0x0001048bee88:
    (*param_68)();
    break;
  case 0x1b:
    (*param_71)();
    break;
  case 0x1c:
    (*param_74)();
    break;
  case 0x1d:
    (*param_77)();
    break;
  case 0x1e:
    (*param_80)();
    break;
  case 0x1f:
    (*param_83)(param_15,param_14,param_19,param_17,param_21,param_13,param_25,param_23);
  }
  return;
}



/* Entry: 1048beebc; end: 1048bf1c3; -[SCAttributedCameraTask matchLogging:viewDidLoad:nonCriticalfeatureActivation:lockScreenExtension:lockScreenWidget:lockedCameraCapture:warmupPreviewNavigationPageRouter:warmupPreviewStartupWorkflowOnIdle:warmupPreviewStartupWorkflow:handleVolumeButtonEvents:activateLensFromPushNotification:activateAudioSession:micNotification:miniCarouselFetchThumbnail:memoriesSideButtonObserveSpectacles:selfieSettingsToolbarLoadingAnimation:reportCameraDeviceConfiguration:portraitMode:timerMode:handsFreeMode:gridMode:swipeToToggle:viewWillAppear:faceDetection:bipaDisclaimer:mainStartup:hardware:lockedCameraCaptureExtensionManager:warmupPreviewReplyCameraWorkflow:superResolution:warmupCameraHardwareResource:warmupCameraRequestHandler:] */

void FUN_1048beebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3d0;
  undefined1 auStack_3c0 [16];
  undefined8 uStack_3b0;
  undefined1 auStack_3a0 [16];
  undefined8 uStack_390;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
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
  uStack_250 = param_20;
  uStack_270 = param_21;
  uStack_290 = param_22;
  uStack_2b0 = param_23;
  uStack_2d0 = param_24;
  uStack_2f0 = param_25;
  uStack_310 = param_26;
  uStack_330 = param_27;
  uStack_350 = param_28;
  uStack_370 = param_29;
  uStack_390 = param_30;
  uStack_3b0 = param_31;
  uStack_3d0 = param_32;
  uStack_3f0 = param_33;
  uStack_410 = param_34;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048beb48(FUN_1048c080c,auStack_40,0x1048c0844,auStack_60,0x1048c0848,auStack_80,0x1048c084c,
                auStack_a0,0x1048c0850,auStack_c0,0x1048c08f0,auStack_e0,0x1048c0854,auStack_100,
                0x1048c0858,auStack_120,0x1048c085c,auStack_140,0x1048c0860,auStack_160,0x1048c0864,
                auStack_180,0x1048c0868,auStack_1a0,0x1048c08f4,auStack_1c0,0x1048c086c,auStack_1e0,
                0x1048c0870,auStack_200,0x1048c0874,auStack_220,0x1048c0878,auStack_240,0x1048c087c,
                auStack_260,0x1048c0880,auStack_280,0x1048c0884,auStack_2a0,0x1048c0888,auStack_2c0,
                0x1048c088c,auStack_2e0,0x1048c0890,auStack_300,0x1048c0894,auStack_320,0x1048c0898,
                auStack_340,0x1048c0814,auStack_360,0x1048c08f8,auStack_380,0x1048c089c,auStack_3a0,
                0x1048c08a0,auStack_3c0,0x1048c08a4,auStack_3e0,0x1048c08a8,auStack_400,0x1048c08ac,
                auStack_420);
  _objc_release(param_1);
  return;
}



/* Entry: 1048bf1c4; end: 1048bf1f7;  */

void FUN_1048bf1c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048bf1f8; end: 1048bf27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bf1f8(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  func_0x0001048c017c();
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
  *(char *)(uVar5 + _DAT_11309aea8) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048bf280; end: 1048bff6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bf280(undefined8 ***param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **appuStack_280 [2];
  undefined8 **appuStack_270 [2];
  undefined8 **appuStack_260 [2];
  undefined8 **appuStack_250 [2];
  undefined8 **appuStack_240 [2];
  undefined8 *apuStack_230 [2];
  undefined8 **appuStack_220 [2];
  undefined8 *apuStack_210 [2];
  undefined8 **appuStack_200 [2];
  undefined8 **appuStack_1f0 [2];
  undefined8 **appuStack_1e0 [2];
  undefined8 **appuStack_1d0 [2];
  undefined8 **appuStack_1c0 [2];
  undefined8 **appuStack_1b0 [2];
  undefined8 *apuStack_1a0 [2];
  undefined8 **appuStack_190 [2];
  undefined8 *apuStack_180 [2];
  undefined8 **appuStack_170 [2];
  undefined8 **appuStack_160 [2];
  undefined8 **appuStack_150 [2];
  undefined8 **appuStack_140 [2];
  undefined8 **appuStack_130 [2];
  undefined8 **appuStack_120 [2];
  undefined8 **appuStack_110 [2];
  undefined8 **appuStack_100 [2];
  undefined8 **appuStack_f0 [2];
  undefined8 **appuStack_e0 [2];
  undefined8 **appuStack_d0 [2];
  undefined8 **appuStack_c0 [2];
  undefined8 **appuStack_b0 [2];
  undefined8 **appuStack_a0 [2];
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **appuStack_80 [2];
  undefined8 **appuStack_70 [2];
  undefined8 **appuStack_60 [2];
  undefined8 **appuStack_50 [2];
  undefined8 **appuStack_40 [2];
  
  pppuVar5 = appuStack_280;
  uVar3 = (uint)param_1;
  uVar1 = uVar3 >> 5 & 7;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      func_0x0001048c013c();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      bVar2 = (uVar3 & 0xff) == 1;
      pppuVar5 = (undefined8 ***)apuStack_210;
      if (!bVar2) {
        pppuVar5 = (undefined8 ***)apuStack_230;
      }
      *(bool *)((long)pppuVar4 + _DAT_11309ae98) = bVar2;
      *pppuVar5 = pppuVar4;
      pppuVar5[1] = param_1;
      _objc_msgSendSuper2(pppuVar5,PTR_s_init_1125d9248);
      param_1 = pppuVar5;
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 5;
      *(undefined8 ****)((long)pppuVar4 + _DAT_11309aeb8) = pppuVar5;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_220;
      appuStack_220[0] = pppuVar4;
    }
    else if (uVar1 == 1) {
      func_0x0001048c015c();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      bVar2 = (uVar3 & 0x1f) == 1;
      pppuVar5 = (undefined8 ***)apuStack_180;
      if (!bVar2) {
        pppuVar5 = (undefined8 ***)apuStack_1a0;
      }
      *(bool *)((long)pppuVar4 + _DAT_11309aea0) = bVar2;
      *pppuVar5 = pppuVar4;
      pppuVar5[1] = param_1;
      _objc_msgSendSuper2(pppuVar5,PTR_s_init_1125d9248);
      param_1 = pppuVar5;
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0xc;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 ****)((long)pppuVar4 + _DAT_11309aec0) = pppuVar5;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_190;
      appuStack_190[0] = pppuVar4;
    }
    else {
      pppuVar5 = (undefined8 ***)(ulong)(uVar3 & 0x1f);
      FUN_1048bf1f8();
      param_1 = pppuVar5;
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x19;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 ****)((long)pppuVar4 + _DAT_11309aec8) = pppuVar5;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_b0;
      appuStack_b0[0] = pppuVar4;
    }
  }
  else if (uVar1 < 5) {
    if (uVar1 == 3) {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 100) {
        if (uVar3 < 0x62) {
          if (uVar3 == 0x60) {
            func_0x0001000b7fd8();
            pppuVar4 = param_1;
            _objc_allocWithZone();
            *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
            appuStack_280[0] = pppuVar4;
          }
          else {
            func_0x0001000b7fd8();
            pppuVar4 = param_1;
            _objc_allocWithZone();
            *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 1;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
            pppuVar5 = appuStack_270;
            appuStack_270[0] = pppuVar4;
          }
        }
        else if (uVar3 == 0x62) {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 2;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_260;
          appuStack_260[0] = pppuVar4;
        }
        else {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 3;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_250;
          appuStack_250[0] = pppuVar4;
        }
      }
      else if (uVar3 < 0x66) {
        if (uVar3 == 100) {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 4;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_240;
          appuStack_240[0] = pppuVar4;
        }
        else {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 6;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_200;
          appuStack_200[0] = pppuVar4;
        }
      }
      else if (uVar3 == 0x66) {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 7;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_1f0;
        appuStack_1f0[0] = pppuVar4;
      }
      else {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 8;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_1e0;
        appuStack_1e0[0] = pppuVar4;
      }
    }
    else {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x84) {
        if (uVar3 < 0x82) {
          if (uVar3 == 0x80) {
            func_0x0001000b7fd8();
            pppuVar4 = param_1;
            _objc_allocWithZone();
            *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 9;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
            pppuVar5 = appuStack_1d0;
            appuStack_1d0[0] = pppuVar4;
          }
          else {
            func_0x0001000b7fd8();
            pppuVar4 = param_1;
            _objc_allocWithZone();
            *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 10;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
            *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
            pppuVar5 = appuStack_1c0;
            appuStack_1c0[0] = pppuVar4;
          }
        }
        else if (uVar3 == 0x82) {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0xb;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_1b0;
          appuStack_1b0[0] = pppuVar4;
        }
        else {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0xd;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_170;
          appuStack_170[0] = pppuVar4;
        }
      }
      else if (uVar3 < 0x86) {
        if (uVar3 == 0x84) {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0xe;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_160;
          appuStack_160[0] = pppuVar4;
        }
        else {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0xf;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_150;
          appuStack_150[0] = pppuVar4;
        }
      }
      else if (uVar3 == 0x86) {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x10;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_140;
        appuStack_140[0] = pppuVar4;
      }
      else {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x11;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_130;
        appuStack_130[0] = pppuVar4;
      }
    }
  }
  else if (uVar1 == 5) {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 0xa4) {
      if (uVar3 < 0xa2) {
        if (uVar3 == 0xa0) {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x12;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_120;
          appuStack_120[0] = pppuVar4;
        }
        else {
          func_0x0001000b7fd8();
          pppuVar4 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x13;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
          *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
          pppuVar5 = appuStack_110;
          appuStack_110[0] = pppuVar4;
        }
      }
      else if (uVar3 == 0xa2) {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x14;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_100;
        appuStack_100[0] = pppuVar4;
      }
      else {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x15;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_f0;
        appuStack_f0[0] = pppuVar4;
      }
    }
    else if (uVar3 < 0xa6) {
      if (uVar3 == 0xa4) {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x16;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_e0;
        appuStack_e0[0] = pppuVar4;
      }
      else {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x17;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_d0;
        appuStack_d0[0] = pppuVar4;
      }
    }
    else if (uVar3 == 0xa6) {
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x18;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_c0;
      appuStack_c0[0] = pppuVar4;
    }
    else {
      func_0x0001048c019c();
      pppuVar5 = param_1;
      _objc_allocWithZone();
      pppuVar6 = &ppuStack_90;
      ppuStack_90 = pppuVar5;
      ppuStack_88 = param_1;
      _objc_msgSendSuper2(pppuVar6,PTR_s_init_1125d9248);
      param_1 = pppuVar6;
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1a;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 ****)((long)pppuVar4 + _DAT_11309aed0) = pppuVar6;
      pppuVar5 = appuStack_a0;
      appuStack_a0[0] = pppuVar4;
    }
  }
  else {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 0xc2) {
      if (uVar3 == 0xc0) {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1b;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_80;
        appuStack_80[0] = pppuVar4;
      }
      else {
        func_0x0001000b7fd8();
        pppuVar4 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1c;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
        *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
        pppuVar5 = appuStack_70;
        appuStack_70[0] = pppuVar4;
      }
    }
    else if (uVar3 == 0xc2) {
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1d;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_60;
      appuStack_60[0] = pppuVar4;
    }
    else if (uVar3 == 0xc3) {
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1e;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_50;
      appuStack_50[0] = pppuVar4;
    }
    else {
      func_0x0001000b7fd8();
      pppuVar4 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar4 + _DAT_11309aeb0) = 0x1f;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aeb8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec0) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aec8) = 0;
      *(undefined8 *)((long)pppuVar4 + _DAT_11309aed0) = 0;
      pppuVar5 = appuStack_40;
      appuStack_40[0] = pppuVar4;
    }
  }
  pppuVar5[1] = param_1;
  _objc_msgSendSuper2(pppuVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048bff6c; end: 1048bff8b;  */

ulong FUN_1048bff6c(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048bff8c; end: 1048c013b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048bff8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x0001000b7fd8();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11309aeb0) = 5;
  *(long *)(lVar3 + _DAT_11309aeb8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aed0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1048c013c; end: 1048c01bb;  */

void FUN_1048c013c(void)

{
  _objc_opt_self(&PTR_PTR_1129e04b0);
  return;
}



/* Entry: 1048c01bc; end: 1048c06bb;  */

int FUN_1048c01bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe0 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1f) {
      iVar2 = 4;
    }
    if (param_2 + 0x1f >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048c0238;
        goto LAB_1048c021c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048c021c:
      return ((uint)*param_1 | uVar1 << 8) - 0x1f;
    }
  }
LAB_1048c0238:
  iVar2 = *param_1 - 0x20;
  if (*param_1 < 0x20) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048c06bc; end: 1048c06fb;  */

void FUN_1048c06bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42844;
  _swift_getWitnessTable(&UNK_10dd42844,&UNK_1107b2890);
  puRam000000011309afa8 = puVar1;
  return;
}



/* Entry: 1048c06fc; end: 1048c06ff;  */

void FUN_1048c06fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd428e4;
  _swift_getWitnessTable(&UNK_10dd428e4,&UNK_1107b2800);
  puRam000000011309afb0 = puVar1;
  return;
}



/* Entry: 1048c0700; end: 1048c073f;  */

void FUN_1048c0700(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd428e4;
  _swift_getWitnessTable(&UNK_10dd428e4,&UNK_1107b2800);
  puRam000000011309afb0 = puVar1;
  return;
}



/* Entry: 1048c0740; end: 1048c0743;  */

void FUN_1048c0740(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42984;
  _swift_getWitnessTable(&UNK_10dd42984,&UNK_1107b2770);
  puRam000000011309afb8 = puVar1;
  return;
}



/* Entry: 1048c0744; end: 1048c0783;  */

void FUN_1048c0744(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42984;
  _swift_getWitnessTable(&UNK_10dd42984,&UNK_1107b2770);
  puRam000000011309afb8 = puVar1;
  return;
}



/* Entry: 1048c0784; end: 1048c0787;  */

void FUN_1048c0784(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42a24;
  _swift_getWitnessTable(&UNK_10dd42a24,&UNK_1107b26e0);
  puRam000000011309afc0 = puVar1;
  return;
}



/* Entry: 1048c0788; end: 1048c07c7;  */

void FUN_1048c0788(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42a24;
  _swift_getWitnessTable(&UNK_10dd42a24,&UNK_1107b26e0);
  puRam000000011309afc0 = puVar1;
  return;
}



/* Entry: 1048c07c8; end: 1048c07cb;  */

void FUN_1048c07c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42ac4;
  _swift_getWitnessTable(&UNK_10dd42ac4,&UNK_1107b2650);
  puRam000000011309afc8 = puVar1;
  return;
}



/* Entry: 1048c07cc; end: 1048c080b;  */

void FUN_1048c07cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309afc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd42ac4;
  _swift_getWitnessTable(&UNK_10dd42ac4,&UNK_1107b2650);
  puRam000000011309afc8 = puVar1;
  return;
}



/* Entry: 1048c080c; end: 1048c08fb;  */

void FUN_1048c080c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1048c08fc; end: 1048c08ff; -[SCAttributedCameraLockedScreenCaptureSubTask description] */

void FUN_1048c08fc(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0900; end: 1048c0903; -[SCAttributedMicNotificationSubTask description] */

void FUN_1048c0900(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0904; end: 1048c0907; -[SCAttributedCameraMainCameraStartupSubTask description] */

void FUN_1048c0904(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0908; end: 1048c0923; -[SCAttributedCameraHardwareSubTask description] */

void FUN_1048c0908(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048c0924; end: 1048c0927; -[SCAttributedCameraLockedScreenCaptureSubTask copyWithZone:] */

void FUN_1048c0924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c0928; end: 1048c092f; -[SCAttributedMicNotificationSubTask copyWithZone:] */

void FUN_1048c0928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c0930; end: 1048c0933; -[SCAttributedCameraMainCameraStartupSubTask copyWithZone:] */

void FUN_1048c0930(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c0934; end: 1048c093b; -[SCAttributedCameraHardwareSubTask copyWithZone:] */

void FUN_1048c0934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c093c; end: 1048c0957; -[SCAttributedCameraTask copyWithZone:] */

void FUN_1048c093c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048c0958; end: 1048c097f;  */

void FUN_1048c0958(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048c18ec();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048c0980; end: 1048c09c7; -[SCAttributedBatterySubtask init] */

void FUN_1048c0980(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedClientResourcesTaskWrapper.swift",0x3a,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048c09c8);
  (*pcVar1)();
}



/* Entry: 1048c09c8; end: 1048c0a0f; -[SCAttributedBatterySubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c09c8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309afd0));
  __ss6HasherV8finalizeSiyF();
  return;
}


