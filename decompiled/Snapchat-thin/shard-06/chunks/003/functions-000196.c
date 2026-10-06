/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10468d44c; end: 10468d55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468d44c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long alStack_1b8 [2];
  long alStack_198 [2];
  undefined1 auStack_188 [168];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x00010468d908(param_1,auStack_188);
  puVar2 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c328) = puVar2;
  cVar1 = *(char *)(param_1 + 0x14);
  lVar3 = 0;
  func_0x00010468dcd0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  plVar5 = alStack_198;
  if (cVar1 != '\x01') {
    plVar5 = alStack_1b8;
  }
  *(bool *)(lVar4 + _DAT_11308c360) = cVar1 == '\x01';
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x00010466e488(param_1);
  *(long **)(unaff_x20 + _DAT_11308c330) = plVar5;
  _objc_msgSendSuper2(&stack0xfffffffffffffe58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468d55c; end: 10468d613; -[SCAdReminderEvent hash] */

undefined8 FUN_10468d55c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010468d590();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468d614; end: 10468d723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468d614(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c328);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c330);
      uVar2 = 0;
      func_0x00010468dcd0();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_10468d964(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_10468d70c;
    }
  }
  uVar5 = 0;
LAB_10468d70c:
  return uVar5 & 1;
}



/* Entry: 10468d724; end: 10468d7a3; -[SCAdReminderEvent isEqual:] */

uint FUN_10468d724(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468d614(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468d7a4; end: 10468d7a7; -[SCAdReminderEvent copyWithZone:] */

void FUN_10468d7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468d7a8; end: 10468d7ef; -[SCAdReminderEvent description] */

void FUN_10468d7a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_10468d7f0();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10468d7f0; end: 10468d853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10468d7f0(void)

{
  long unaff_x20;
  undefined1 auStack_b8 [160];
  undefined1 uStack_18;
  
  _objc_retain(*(undefined8 *)(unaff_x20 + _DAT_11308c328));
  FUN_10469d68c(auStack_b8);
  uStack_18 = *(char *)(*(long *)(unaff_x20 + _DAT_11308c330) + _DAT_11308c360) == '\x01';
  func_0x00010466e488(auStack_b8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10468d854; end: 10468d8cf; -[SCAdReminderEvent init] */

void FUN_10468d854(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReminderEventWrapper.swift",0x35,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468d89c);
  (*pcVar1)();
}



/* Entry: 10468d8d0; end: 10468d943; -[SCAdReminderEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468d8d0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c328));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c330));
  return;
}



/* Entry: 10468d944; end: 10468d963;  */

void FUN_10468d944(void)

{
  _objc_opt_self(&PTR_PTR_1129d0628);
  return;
}



/* Entry: 10468d964; end: 10468da03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10468d964(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_11308c360);
      cVar2 = *(char *)(lStack_58 + _DAT_11308c360);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10468da04; end: 10468daaf;  */

void FUN_10468da04(void)

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



/* Entry: 10468dab0; end: 10468daef;  */

void FUN_10468dab0(undefined1 *param_1,long *param_2)

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



/* Entry: 10468daf0; end: 10468db0b; -[SCAdReminderEventType description] */

void FUN_10468daf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468db0c; end: 10468db53; -[SCAdReminderEventType init] */

void FUN_10468db0c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReminderEventTypeWrapper.swift",0x39,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468db54);
  (*pcVar1)();
}



/* Entry: 10468db54; end: 10468db9b; -[SCAdReminderEventType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468db54(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11308c360));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10468db9c; end: 10468dc1b; -[SCAdReminderEventType isEqual:] */

uint FUN_10468db9c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468d964(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468dc1c; end: 10468dc1f; -[SCAdReminderEventType copyWithZone:] */

void FUN_10468dc1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468dc20; end: 10468dc27; +[SCAdReminderEventType reminderSet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468dc20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c360) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468dc28; end: 10468dc2f; +[SCAdReminderEventType countdownStickerTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468dc28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c360) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468dc30; end: 10468dc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468dc30(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c360) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468dc80; end: 10468dc9b; -[SCAdReminderEventType matchReminderSet:countdownStickerTriggered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468dc80(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11308c360) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010468dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10468dc9c; end: 10468dcef;  */

void FUN_10468dc9c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10468dcf0; end: 10468de57;  */

int FUN_10468dcf0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10468dd6c;
        goto LAB_10468dd50;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10468dd50:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10468dd6c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10468de58; end: 10468de97;  */

void FUN_10468de58(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd25ccc;
  _swift_getWitnessTable(&UNK_10dd25ccc,&UNK_1107961b8);
  puRam000000011308c390 = puVar1;
  return;
}



/* Entry: 10468de98; end: 10468dea7; -[SCAdReminderEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468de98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c398));
  return;
}



/* Entry: 10468dea8; end: 10468deb7; -[SCAdReminderEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468dea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c3a0));
  return;
}



/* Entry: 10468deb8; end: 10468decb; -[SCAdReminderEventV2 touchPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468deb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c3a8));
  return;
}



/* Entry: 10468decc; end: 10468dfcf; -[SCAdReminderEventV2 initWithCommon:event:touchPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468decc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c398) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c3a0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308c3a8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10468dfd0; end: 10468e0a3; -[SCAdReminderEventV2 hash] */

undefined8 FUN_10468dfd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010468e004();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468e0a4; end: 10468e1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468e0a4(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return 0;
  }
  plVar2 = &lStack_68;
  _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
  if (((ulong)plVar2 & 1) == 0) {
    return 0;
  }
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_11308c398);
  func_0x00010c071ae0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c3a0);
  func_0x00010c071ae0(uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_11308c3a8);
  if (lVar4 == 0) {
    lVar6 = *(long *)(lStack_68 + _DAT_11308c3a8);
    lVar4 = lVar6;
    _objc_retain(lVar6);
    _objc_release(lStack_68);
    if (lVar6 == 0) {
      uVar5 = 1;
      goto joined_r0x00010468e1a0;
    }
    uVar5 = 0;
  }
  else {
    func_0x00010c071ae0();
    uVar5 = (uint)lVar4;
    lVar4 = lStack_68;
  }
  _objc_release(lVar4);
joined_r0x00010468e1a0:
  if (iVar1 == 0) {
    return 0;
  }
  return (uint)uVar3 & uVar5;
}



/* Entry: 10468e1c0; end: 10468e23f; -[SCAdReminderEventV2 isEqual:] */

uint FUN_10468e1c0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468e0a4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468e240; end: 10468e243; -[SCAdReminderEventV2 copyWithZone:] */

void FUN_10468e240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468e244; end: 10468e25f; -[SCAdReminderEventV2 description] */

void FUN_10468e244(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468e260; end: 10468e2db; -[SCAdReminderEventV2 init] */

void FUN_10468e260(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReminderEventV2Wrapper.swift",0x37,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468e2a8);
  (*pcVar1)();
}



/* Entry: 10468e2dc; end: 10468e323; -[SCAdReminderEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e2dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c398));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c3a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c3a8));
  return;
}



/* Entry: 10468e324; end: 10468e343;  */

void FUN_10468e324(void)

{
  _objc_opt_self(&PTR_PTR_1129d07b8);
  return;
}



/* Entry: 10468e344; end: 10468e347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c398) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c3a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308c3a8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468e348; end: 10468e357; -[SCAdReportEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c3d8));
  return;
}



/* Entry: 10468e358; end: 10468e367; -[SCAdReportEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c3e0));
  return;
}



/* Entry: 10468e368; end: 10468e3cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e368(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c3d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c3e0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468e3cc; end: 10468e443; -[SCAdReportEvent initWithCommon:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e3cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c3d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c3e0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10468e444; end: 10468e517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e444(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_198 [8];
  undefined1 auStack_188 [168];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  FUN_10469d938(0);
  _objc_allocWithZone();
  func_0x00010468e85c(param_1,auStack_188);
  puVar1 = &uStack_e0;
  FUN_10469d28c();
  *(undefined8 **)(unaff_x20 + _DAT_11308c3d8) = puVar1;
  uVar2 = (ulong)*(byte *)(param_1 + 0x14);
  FUN_10468ef84();
  func_0x00010466e4bc(param_1);
  *(ulong *)(unaff_x20 + _DAT_11308c3e0) = uVar2;
  _objc_msgSendSuper2(auStack_198,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468e518; end: 10468e597; -[SCAdReportEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10468e518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10469c63c();
  __ss6HasherV8_combineyySuF();
  FUN_10468e8cc();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468e598; end: 10468e6a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468e598(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c3d8);
      uVar2 = 0;
      FUN_10469d938();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_50;
      FUN_10469c8c4(puVar3);
      func_0x00010006e7f4(auStack_50);
      uVar6 = *(undefined8 *)(lStack_58 + _DAT_11308c3e0);
      uVar2 = 0;
      FUN_10468f1ac();
      auStack_50[0] = uVar6;
      lStack_38 = uVar2;
      _objc_retain(uVar6);
      puVar4 = auStack_50;
      FUN_10468e948(puVar4);
      _objc_release(lStack_58);
      func_0x00010006e7f4(auStack_50);
      uVar5 = (uint)puVar3 & (uint)puVar4;
      goto LAB_10468e690;
    }
  }
  uVar5 = 0;
LAB_10468e690:
  return uVar5 & 1;
}



/* Entry: 10468e6a8; end: 10468e727; -[SCAdReportEvent isEqual:] */

uint FUN_10468e6a8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468e598(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468e728; end: 10468e72b; -[SCAdReportEvent copyWithZone:] */

void FUN_10468e728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468e72c; end: 10468e7a7; -[SCAdReportEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e72c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [160];
  undefined1 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308c3d8);
  _objc_retain();
  _objc_retain(uVar2);
  FUN_10469d68c(auStack_c8);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_11308c3e0);
  _objc_retain();
  FUN_10468f0cc();
  _objc_release(param_1);
  uStack_28 = uVar1;
  func_0x00010466e4bc(auStack_c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468e7a8; end: 10468e823; -[SCAdReportEvent init] */

void FUN_10468e7a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReportEventWrapper.swift",0x33,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468e7f0);
  (*pcVar1)();
}



/* Entry: 10468e824; end: 10468e897; -[SCAdReportEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e824(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c3d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c3e0));
  return;
}



/* Entry: 10468e898; end: 10468e8b7;  */

void FUN_10468e898(void)

{
  _objc_opt_self(&PTR_PTR_1129d0890);
  return;
}



/* Entry: 10468e8b8; end: 10468e8cb;  */

void FUN_10468e8b8(uint param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010468e8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1 & 1);
  return;
}



/* Entry: 10468e8cc; end: 10468e947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468e8cc(void)

{
  byte bVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308c410));
  bVar1 = *(byte *)(unaff_x20 + _DAT_11308c418);
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



/* Entry: 10468e948; end: 10468ea6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10468e948(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
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
      bVar5 = *(byte *)(unaff_x20 + _DAT_11308c410);
      if (bVar5 == *(byte *)(lStack_58 + _DAT_11308c410)) {
        if ((((bVar5 < 4) || (bVar5 < 6)) || (bVar5 == 6)) || (bVar5 != 7)) {
          _objc_release();
          bVar5 = 1;
        }
        else {
          bVar1 = *(byte *)(unaff_x20 + _DAT_11308c418);
          bVar2 = *(byte *)(lStack_58 + _DAT_11308c418);
          _objc_release();
          bVar5 = bVar2 == 2 && bVar1 == 2;
          if ((bVar1 != 2) && (bVar2 != 2)) {
            bVar5 = bVar1 ^ bVar2 ^ 1;
          }
        }
        goto LAB_10468ea38;
      }
      _objc_release();
    }
  }
  bVar5 = 0;
LAB_10468ea38:
  return bVar5 & 1;
}



/* Entry: 10468ea70; end: 10468eb43;  */

void FUN_10468ea70(void)

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



/* Entry: 10468eb44; end: 10468eb63;  */

void FUN_10468eb44(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10468eb64; end: 10468ebab; -[SCAdReportEventType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468eb64(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11308c410) == '\a') &&
     (*(char *)(param_1 + _DAT_11308c418) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10468ebac);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ebac; end: 10468ebf3; -[SCAdReportEventType init] */

void FUN_10468ebac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReportEventTypeWrapper.swift",0x37,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468ebf4);
  (*pcVar1)();
}



/* Entry: 10468ebf4; end: 10468ec13; -[SCAdReportEventType hash] */

void FUN_10468ebf4(void)

{
  FUN_10468e8cc();
  return;
}



/* Entry: 10468ec14; end: 10468ec93; -[SCAdReportEventType isEqual:] */

uint FUN_10468ec14(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468e948(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468ec94; end: 10468ec97; -[SCAdReportEventType copyWithZone:] */

void FUN_10468ec94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468ec98; end: 10468ec9f; +[SCAdReportEventType reportAdTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ec98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 0;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468eca0; end: 10468eca7; +[SCAdReportEventType hideAdTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468eca0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 1;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468eca8; end: 10468ecaf; +[SCAdReportEventType showAdInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468eca8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 2;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ecb0; end: 10468ecb7; +[SCAdReportEventType reportAdPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ecb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 3;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ecb8; end: 10468ecbf; +[SCAdReportEventType hideAdPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ecb8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 4;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ecc0; end: 10468ecc7; +[SCAdReportEventType adInfoPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ecc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 5;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ecc8; end: 10468eccf; +[SCAdReportEventType reportAdDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ecc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 6;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ecd0; end: 10468ed2f; +[SCAdReportEventType hideAdDismissedWithAdHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ecd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 7;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ed30; end: 10468ed37; +[SCAdReportEventType adInfoDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ed30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = 8;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ed38; end: 10468ee6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ed38(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11308c410) = param_3;
  *(undefined1 *)(lVar1 + _DAT_11308c418) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468ee70; end: 10468ef4f; -[SCAdReportEventType matchReportAdTriggered:hideAdTriggered:showAdInfo:reportAdPresented:hideAdPresented:adInfoPresented:reportAdDismissed:hideAdDismissed:adInfoDismissed:] */

void FUN_10468ee70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010468ed98(0x10468f384,auStack_40,0x10468f3a0,auStack_60,0x10468f3a4,auStack_80,
                      0x10468f3a8,auStack_a0,0x10468f3ac,auStack_c0,0x10468f3b0,auStack_e0,
                      0x10468f3b4,auStack_100,0x10468f38c,auStack_120,0x10468f3b8,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 10468ef50; end: 10468ef83;  */

void FUN_10468ef50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10468ef84; end: 10468f0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468ef84(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong auStack_c0 [2];
  ulong auStack_b0 [2];
  ulong auStack_a0 [2];
  ulong auStack_90 [2];
  ulong auStack_80 [2];
  ulong auStack_70 [2];
  ulong auStack_60 [2];
  ulong auStack_50 [2];
  ulong auStack_40 [2];
  
  puVar4 = auStack_c0;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 2) {
        uVar5 = 0;
        uVar3 = param_1;
        goto LAB_10468f080;
      }
      if (uVar1 == 3) {
        puVar4 = auStack_b0;
        uVar5 = 1;
        uVar3 = 2;
        goto LAB_10468f080;
      }
    }
    else {
      if (uVar1 == 4) {
        puVar4 = auStack_a0;
        uVar5 = 2;
        uVar3 = 2;
        goto LAB_10468f080;
      }
      if (uVar1 == 5) {
        puVar4 = auStack_90;
        uVar3 = 2;
        uVar5 = 3;
        goto LAB_10468f080;
      }
    }
  }
  else if (uVar1 < 8) {
    if (uVar1 == 6) {
      puVar4 = auStack_80;
      uVar3 = 2;
      uVar5 = 4;
      goto LAB_10468f080;
    }
    if (uVar1 == 7) {
      puVar4 = auStack_70;
      uVar3 = 2;
      uVar5 = 5;
      goto LAB_10468f080;
    }
  }
  else {
    if (uVar1 == 8) {
      puVar4 = auStack_60;
      uVar3 = 2;
      uVar5 = 6;
      goto LAB_10468f080;
    }
    if (uVar1 == 9) {
      puVar4 = auStack_40;
      uVar3 = 2;
      uVar5 = 8;
      goto LAB_10468f080;
    }
  }
  puVar4 = auStack_50;
  uVar5 = 7;
  uVar3 = (ulong)((uint)param_1 & 1);
LAB_10468f080:
  FUN_10468f1ac();
  uVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(uVar2 + _DAT_11308c410) = uVar5;
  *(char *)(uVar2 + _DAT_11308c418) = (char)uVar3;
  *puVar4 = uVar2;
  puVar4[1] = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468f0cc; end: 10468f1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10468f0cc(long param_1)

{
  code *pcVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + _DAT_11308c410);
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        _objc_release();
        bVar2 = 2;
      }
      else {
        _objc_release();
        bVar2 = 3;
      }
    }
    else if (bVar2 == 2) {
      _objc_release();
      bVar2 = 4;
    }
    else {
      _objc_release();
      bVar2 = 5;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      _objc_release();
      bVar2 = 6;
    }
    else {
      _objc_release();
      bVar2 = 7;
    }
  }
  else if (bVar2 == 6) {
    _objc_release();
    bVar2 = 8;
  }
  else if (bVar2 == 7) {
    bVar2 = *(byte *)(param_1 + _DAT_11308c418);
    if (bVar2 == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10468f1ac);
      (*pcVar1)();
    }
    _objc_release();
    bVar2 = bVar2 & 1;
  }
  else {
    _objc_release();
    bVar2 = 9;
  }
  return bVar2;
}



/* Entry: 10468f1ac; end: 10468f1cb;  */

void FUN_10468f1ac(void)

{
  _objc_opt_self(&PTR_PTR_1129d0960);
  return;
}



/* Entry: 10468f1cc; end: 10468f333;  */

int FUN_10468f1cc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10468f248;
        goto LAB_10468f22c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10468f22c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10468f248:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10468f334; end: 10468f373;  */

void FUN_10468f334(void)

{
  undefined *puVar1;
  
  if (puRam000000011308c448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd25dec;
  _swift_getWitnessTable(&UNK_10dd25dec,&UNK_1107962a0);
  puRam000000011308c448 = puVar1;
  return;
}



/* Entry: 10468f374; end: 10468f3bb;  */

ulong FUN_10468f374(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 10468f3bc; end: 10468f3cb; -[SCAdReportEventV2 common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c450));
  return;
}



/* Entry: 10468f3cc; end: 10468f3e3; -[SCAdReportEventV2 event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c458));
  return;
}



/* Entry: 10468f3e4; end: 10468f523; -[SCAdReportEventV2 initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c450) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c458) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10468f524; end: 10468f5a7; -[SCAdReportEventV2 hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10468f524(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c450);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c458);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468f5a8; end: 10468f67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468f5a8(undefined8 param_1)

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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c450);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c458);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308c458);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10468f680; end: 10468f6ff; -[SCAdReportEventV2 isEqual:] */

uint FUN_10468f680(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468f5a8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468f700; end: 10468f703; -[SCAdReportEventV2 copyWithZone:] */

void FUN_10468f700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468f704; end: 10468f71f; -[SCAdReportEventV2 description] */

void FUN_10468f704(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10468f720; end: 10468f79b; -[SCAdReportEventV2 init] */

void FUN_10468f720(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdTrackEventDataServices/AdReportEventV2Wrapper.swift",0x35,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10468f768);
  (*pcVar1)();
}



/* Entry: 10468f79c; end: 10468f7d3; -[SCAdReportEventV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f79c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308c450));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308c458));
  return;
}



/* Entry: 10468f7d4; end: 10468f7f3;  */

void FUN_10468f7d4(void)

{
  _objc_opt_self(&PTR_PTR_1129d0a28);
  return;
}



/* Entry: 10468f7f4; end: 10468f7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f7f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308c450) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308c458) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10468f7f8; end: 10468f807; -[SCAdSKOverlayEvent common] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c488));
  return;
}



/* Entry: 10468f808; end: 10468f81b; -[SCAdSKOverlayEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308c490));
  return;
}



/* Entry: 10468f81c; end: 10468f8f7; -[SCAdSKOverlayEvent initWithCommon:event:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468f81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308c488) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308c490) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10468f8f8; end: 10468f97b; -[SCAdSKOverlayEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10468f8f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c488);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11308c490);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10468f97c; end: 10468fa53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10468f97c(undefined8 param_1)

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
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308c488);
      func_0x00010c071ae0(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308c490);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_11308c490);
      _objc_retain(uVar4);
      func_0x00010c071ae0(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 10468fa54; end: 10468fad3; -[SCAdSKOverlayEvent isEqual:] */

uint FUN_10468fa54(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10468f97c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10468fad4; end: 10468fad7; -[SCAdSKOverlayEvent copyWithZone:] */

void FUN_10468fad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10468fad8; end: 10468fb97; -[SCAdSKOverlayEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10468fad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10468fb98; end: 10468fbc7;  */

void FUN_10468fb98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10468fbc8(param_1);
  return;
}


