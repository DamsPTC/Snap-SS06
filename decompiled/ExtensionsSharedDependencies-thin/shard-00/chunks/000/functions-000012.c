/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00052644; end: 0005266f; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey loggedOutEligible] */

void FUN_00052644(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b6280);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052670; end: 000526ab; -[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey init] */

void FUN_00052670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000526ac; end: 000526df;  */

void FUN_000526ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000526e0; end: 000526e3; -[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey .cxx_destruct] */

void FUN_000526e0(void)

{
  return;
}



/* Entry: 000526e4; end: 00052703;  */

void FUN_000526e4(void)

{
  _objc_opt_self(&_OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey);
  return;
}



/* Entry: 00052704; end: 0005270f; -[SCNotificationSenderInfo username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae81b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae81b8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00052710; end: 0005271b; -[SCNotificationSenderInfo userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052710(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae81c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae81c0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0005271c; end: 00052727; -[SCNotificationSenderInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005271c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae81c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae81c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00052728; end: 0005276f;  */

void FUN_00052728(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00052770; end: 00052a6b;  */

undefined8 FUN_00052770(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_98 = 0x755f7265646e6573;
  uStack_90 = 0xef656d616e726573;
  puVar4 = PTR___sSSN_0099b040;
  __ss11AnyHashableVyABxcSHRzlufC(auStack_88,&uStack_98,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050)
  ;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_00052810:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar2 = auStack_88;
    FUN_00032184(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_00052810;
    }
    FUN_000232c8(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x00032e18(auStack_88);
  puVar4 = PTR___sypN_0099b8d8;
  if (lStack_48 == 0) {
    FUN_00027748(&uStack_60);
LAB_00052874:
    uVar7 = 0;
  }
  else {
    puVar3 = &uStack_98;
    _swift_dynamicCast(puVar3,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    uVar1 = uStack_90;
    if (((ulong)puVar3 & 1) == 0) goto LAB_00052874;
    uVar7 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _swift_bridgeObjectRelease(uVar1);
  }
  uStack_98 = 0x755f7265646e6573;
  uStack_90 = 0xed00006469726573;
  puVar5 = PTR___sSSN_0099b040;
  __ss11AnyHashableVyABxcSHRzlufC(auStack_88,&uStack_98,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050)
  ;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_000528e8:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar2 = auStack_88;
    FUN_00032184(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_000528e8;
    }
    FUN_000232c8(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x00032e18(auStack_88);
  if (lStack_48 == 0) {
    FUN_00027748(&uStack_60);
LAB_00052944:
    uVar8 = 0;
  }
  else {
    puVar3 = &uStack_98;
    _swift_dynamicCast(puVar3,&uStack_60,puVar4 + 8,PTR___sSSN_0099b040,6);
    uVar1 = uStack_90;
    if (((ulong)puVar3 & 1) == 0) goto LAB_00052944;
    uVar8 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _swift_bridgeObjectRelease(uVar1);
  }
  uStack_98 = 0x7265646e6573;
  uStack_90 = 0xe600000000000000;
  puVar5 = PTR___sSSN_0099b040;
  __ss11AnyHashableVyABxcSHRzlufC(auStack_88,&uStack_98,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050)
  ;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_000529b8:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar2 = auStack_88;
    FUN_00032184(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_000529b8;
    }
    FUN_000232c8(*(long *)(param_1 + 0x38) + (long)puVar2 * 0x20,&uStack_60);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_1);
  func_0x00032e18(auStack_88);
  if (lStack_48 == 0) {
    FUN_00027748(&uStack_60);
  }
  else {
    puVar3 = &uStack_98;
    _swift_dynamicCast(puVar3,&uStack_60,puVar4 + 8,PTR___sSSN_0099b040,6);
    uVar1 = uStack_90;
    if (((ulong)puVar3 & 1) != 0) {
      uVar6 = uStack_98;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_00052a20;
    }
  }
  uVar6 = 0;
LAB_00052a20:
  func_0x00786740();
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 00052a6c; end: 00052ab3; -[SCNotificationSenderInfo initWithSenderInfo:] */

void FUN_00052a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___ss11AnyHashableVN_0099b3f8,PTR___sypN_0099b8d8 + 8,
             PTR___ss11AnyHashableVSHsWP_0099b400);
  FUN_00052770();
  return;
}



/* Entry: 00052ab4; end: 00052b23;  */

void FUN_00052ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  _objc_allocWithZone();
  FUN_00052b24(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 00052b24; end: 00052c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052b24(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  if (param_2 == 0) {
LAB_00052b78:
    param_1 = 0;
    param_2 = -0x2000000000000000;
  }
  else {
    lVar4 = param_1;
    __sSS5countSivg();
    if (lVar4 < 1) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_00052b78;
    }
  }
  plVar1 = (long *)(unaff_x20 + _DAT_00ae81b8);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = param_3;
  }
  lVar4 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar4 = param_4;
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae81c0);
  *puVar2 = uVar3;
  puVar2[1] = lVar4;
  if (param_6 != 0) {
    lVar4 = param_5;
    __sSS5countSivg(param_5,param_6);
    if (0 < lVar4) {
      plVar1 = (long *)(unaff_x20 + _DAT_00ae81c8);
      *plVar1 = param_5;
      plVar1[1] = param_6;
      goto LAB_00052c00;
    }
    _swift_bridgeObjectRelease(param_6);
  }
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_00ae81b8))[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae81c8);
  *puVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae81b8);
  puVar2[1] = uVar3;
  _swift_bridgeObjectRetain();
LAB_00052c00:
  FUN_00052f1c();
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00052c38; end: 00052cdb; -[SCNotificationSenderInfo initWithSenderUsername:userId:displayName:] */

void FUN_00052c38(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_00052b24(param_3,uVar2,param_4,uVar1,param_5,param_2);
  return;
}



/* Entry: 00052cdc; end: 00052e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00052cdc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  *(undefined8 *)(lVar2 + 0x20) = 0x755f7265646e6573;
  *(undefined8 *)(lVar2 + 0x28) = 0xef656d616e726573;
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_00ae81b8))[1];
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(unaff_x20 + _DAT_00ae81b8);
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  *(undefined8 *)(lVar2 + 0x40) = 0x755f7265646e6573;
  *(undefined8 *)(lVar2 + 0x48) = 0xed00006469726573;
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_00ae81c0))[1];
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(unaff_x20 + _DAT_00ae81c0);
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  *(undefined8 *)(lVar2 + 0x60) = 0x7265646e6573;
  *(undefined8 *)(lVar2 + 0x68) = 0xe600000000000000;
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_00ae81c8))[1];
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(unaff_x20 + _DAT_00ae81c8);
  *(undefined8 *)(lVar2 + 0x78) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  lVar3 = lVar2;
  func_0x00020958(lVar2);
  _swift_setDeallocating(lVar2);
  uVar4 = 0xae64d0;
  func_0x000115a8(0xae64d0,&UNK_007cd4a0);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),3,uVar4);
  return lVar3;
}



/* Entry: 00052e10; end: 00052e6b; -[SCNotificationSenderInfo getJson] */

void FUN_00052e10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00052cdc();
  _objc_release(param_1);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00052e6c; end: 00052ec7; -[SCNotificationSenderInfo init] */

void FUN_00052e6c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedNotificationDefines.NotificationSenderInfo",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x52e98);
  (*pcVar1)();
}



/* Entry: 00052ec8; end: 00052f1b; -[SCNotificationSenderInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052ec8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae81b8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae81c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae81c8 + 8));
  return;
}



/* Entry: 00052f1c; end: 00052f3b;  */

void FUN_00052f1c(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCNotificationSenderInfo);
  return;
}



/* Entry: 00052f3c; end: 00052f4f;  */

bool FUN_00052f3c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00052f50; end: 00053027;  */

void FUN_00052f50(void)

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



/* Entry: 00053028; end: 00053037;  */

void FUN_00053028(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00053038; end: 0005306f; +[SCNotificationSuppressionReasonHelper stringFromReason:] */

void FUN_00053038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_000530fc(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 00053070; end: 0005307b; +[SCNotificationSuppressionReasonHelper isSuppressedByNativeDeduplication:] */

bool FUN_00053070(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0xd;
}



/* Entry: 0005307c; end: 000530b7; -[SCNotificationSuppressionReasonHelper init] */

void FUN_0005307c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000530b8; end: 000530eb;  */

void FUN_000530b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000530ec; end: 000530fb;  */

undefined1  [16] FUN_000530ec(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x16) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x15 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 000530fc; end: 00053383;  */

undefined1  [16] FUN_000530fc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe400000000000000;
  uVar2 = 0x656e6f6e;
  switch(param_1) {
  case 1:
    uVar3 = 0xe900000000000072;
    uVar2 = 0x657355676e6f7277;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0x80000000008b64d0;
    auVar8._0_8_ = 0xd000000000000016;
    return auVar8;
  case 3:
    pcVar4 = "notifPayloadError";
    goto code_r0x00053318;
  case 4:
    pcVar4 = "liveLocationNotif";
    goto code_r0x00053318;
  case 5:
    auVar11._8_8_ = 0xee00646e75666552;
    auVar11._0_8_ = 0x706f685374666967;
    return auVar11;
  case 6:
    auVar14._8_8_ = 0xed0000797265766f;
    auVar14._0_8_ = 0x6365526873617263;
    return auVar14;
  case 7:
    pcVar4 = "invalidLoggedOut";
    break;
  case 8:
    pcVar4 = "sdnInvalidPayload";
code_r0x00053318:
    auVar17._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000011;
    return auVar17;
  case 9:
    pcVar4 = "serverSuppressed";
    break;
  case 10:
    auVar16._8_8_ = 0x80000000008b6410;
    auVar16._0_8_ = 0xd000000000000014;
    return auVar16;
  case 0xb:
    auVar7._8_8_ = 0xe700000000000000;
    auVar7._0_8_ = 0x64657269707865;
    return auVar7;
  case 0xc:
    pcVar4 = "filteredByProcessor";
    goto code_r0x00053230;
  case 0xd:
    auVar13._8_8_ = 0x80000000008b63d0;
    auVar13._0_8_ = 0xd00000000000001f;
    return auVar13;
  case 0xe:
    auVar6._8_8_ = 0x80000000008b63a0;
    auVar6._0_8_ = 0xd000000000000021;
    return auVar6;
  case 0xf:
    pcVar4 = "nothingToDisplay";
    break;
  case 0x10:
    pcVar4 = "suppressNewNotif";
    break;
  case 0x11:
    pcVar4 = "filteredByPresenter";
    goto code_r0x00053230;
  case 0x12:
    auVar15._8_8_ = 0xec00000064726163;
    auVar15._0_8_ = 0x7369447070416e69;
    return auVar15;
  case 0x13:
    auVar18._8_8_ = 0x80000000008b6320;
    auVar18._0_8_ = 0xd000000000000015;
    return auVar18;
  case 0x14:
    pcVar4 = "storageInaccessible";
code_r0x00053230:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000013;
    return auVar10;
  case 0x15:
    auVar12._8_8_ = 0x80000000008b62e0;
    auVar12._0_8_ = 0xd000000000000012;
    return auVar12;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_0099f900,&uStack_18,&UNK_0099f900,PTR___sSiN_0099b2c0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x53384);
    (*pcVar1)();
  }
  auVar9._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar9._0_8_ = 0xd000000000000010;
  return auVar9;
}



/* Entry: 00053384; end: 00053387;  */

void FUN_00053384(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae81f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cf8b8;
  _swift_getWitnessTable(&UNK_007cf8b8,&UNK_0099f900);
  puRam0000000000ae81f8 = puVar1;
  return;
}



/* Entry: 00053388; end: 000533c7;  */

void FUN_00053388(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae81f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cf8b8;
  _swift_getWitnessTable(&UNK_007cf8b8,&UNK_0099f900);
  puRam0000000000ae81f8 = puVar1;
  return;
}



/* Entry: 000533c8; end: 000533d7;  */

undefined1  [16] FUN_000533c8(void)

{
  return ZEXT816(0x99f900);
}



/* Entry: 000533d8; end: 000533f7;  */

void __s26UnifiedNotificationDefines0B23SuppressionReasonHelperCMa(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCNotificationSuppressionReasonHelper);
  return;
}



/* Entry: 000533f8; end: 0005359f;  */

undefined1  [16] FUN_000533f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0xae8228;
  func_0x000115a8(0xae8228,&UNK_007cf9c0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(puVar5,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = 1;
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_000535a0(puVar5);
    lVar6 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
    lVar1 = 0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    uVar4 = 0x30;
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x18) = 0x20;
    *(undefined8 *)(lVar1 + 0x10) = 0x10;
    *(char *)(lVar1 + 0x20) = (char)puVar2;
    *(char *)(lVar1 + 0x21) = (char)((ulong)puVar2 >> 8);
    *(char *)(lVar1 + 0x22) = (char)((ulong)puVar2 >> 0x10);
    *(char *)(lVar1 + 0x23) = (char)((ulong)puVar2 >> 0x18);
    *(char *)(lVar1 + 0x24) = (char)((ulong)puVar2 >> 0x20);
    *(char *)(lVar1 + 0x25) = (char)((ulong)puVar2 >> 0x28);
    *(char *)(lVar1 + 0x26) = (char)((ulong)puVar2 >> 0x30);
    *(char *)(lVar1 + 0x27) = (char)((ulong)puVar2 >> 0x38);
    *(char *)(lVar1 + 0x28) = (char)uVar3;
    *(char *)(lVar1 + 0x29) = (char)((ulong)uVar3 >> 8);
    *(char *)(lVar1 + 0x2a) = (char)((ulong)uVar3 >> 0x10);
    *(char *)(lVar1 + 0x2b) = (char)((ulong)uVar3 >> 0x18);
    *(char *)(lVar1 + 0x2c) = (char)((ulong)uVar3 >> 0x20);
    *(char *)(lVar1 + 0x2d) = (char)((ulong)uVar3 >> 0x28);
    *(char *)(lVar1 + 0x2e) = (char)((ulong)uVar3 >> 0x30);
    *(char *)(lVar1 + 0x2f) = (char)((ulong)uVar3 >> 0x38);
    lVar6 = lVar1;
    func_0x0005374c();
    _swift_release(lVar1);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 000535a0; end: 000536d7;  */

undefined8 FUN_000535a0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae8228;
  func_0x000115a8(0xae8228,&UNK_007cf9c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000536d8; end: 000537df;  */

void FUN_000536d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  __s10Foundation13__DataStorageCMa();
  _swift_allocObject();
  __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,lVar1);
  lVar2 = 0;
  __s10Foundation4DataV14RangeReferenceCMa();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(long *)(lVar2 + 0x18) = lVar1;
  return;
}



/* Entry: 000537e0; end: 0005382f;  */

void FUN_000537e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae8238 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8230;
  FUN_00016c74(0xae8230,&UNK_007d78c0);
  puVar2 = PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_0099c558;
  _swift_getWitnessTable(PTR___sSayxG10Foundation15ContiguousBytesABs5UInt8VRszlMc_0099c558,uVar1);
  puRam0000000000ae8238 = puVar2;
  return;
}



/* Entry: 00053830; end: 00053be3;  */

ulong __s24SCUUIDHelperSwiftSupport12SCUUIDToBitsys6UInt64V04highE0_AD03lowE0tSgSSF
                (long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar15 = 0xae8228;
  func_0x000115a8(0xae8228,&UNK_007cf9c0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_60 - extraout_x8;
  lVar15 = param_1;
  __sSS5countSivg(param_1,param_2);
  if (lVar15 < 1) {
    return 0;
  }
  __sSS10lowercasedSSyF(param_1,param_2);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(lVar12);
  _swift_bridgeObjectRelease(param_2);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar8 = 1;
  lVar15 = lVar12;
  (**(code **)(lVar13 + 0x30))(lVar12,1,lVar3);
  if ((int)lVar15 == 1) {
    FUN_000535a0(lVar12);
    return 0;
  }
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  (**(code **)(lVar13 + 8))(lVar12,lVar3);
  uVar4 = 0xae65a8;
  func_0x000115a8(0xae65a8,&UNK_007cd3b0);
  uVar9 = 0x28;
  uVar5 = uVar4;
  _swift_allocObject();
  uStack_58 = 0x10;
  uStack_60 = 8;
  *(undefined8 *)(uVar5 + 0x18) = 0x10;
  *(undefined8 *)(uVar5 + 0x10) = 8;
  *(char *)(uVar5 + 0x20) = (char)lVar15;
  *(char *)(uVar5 + 0x21) = (char)((ulong)lVar15 >> 8);
  *(char *)(uVar5 + 0x22) = (char)((ulong)lVar15 >> 0x10);
  *(char *)(uVar5 + 0x23) = (char)((ulong)lVar15 >> 0x18);
  *(char *)(uVar5 + 0x24) = (char)((ulong)lVar15 >> 0x20);
  *(char *)(uVar5 + 0x25) = (char)((ulong)lVar15 >> 0x28);
  *(char *)(uVar5 + 0x26) = (char)((ulong)lVar15 >> 0x30);
  *(char *)(uVar5 + 0x27) = (char)((ulong)lVar15 >> 0x38);
  uVar6 = uVar5;
  func_0x0005374c();
  _swift_release(uVar5);
  uVar10 = 0x28;
  _swift_allocObject(uVar4,0x28,7);
  *(undefined8 *)(uVar4 + 0x18) = uStack_58;
  *(undefined8 *)(uVar4 + 0x10) = uStack_60;
  *(char *)(uVar4 + 0x20) = (char)uVar8;
  *(char *)(uVar4 + 0x21) = (char)((ulong)uVar8 >> 8);
  *(char *)(uVar4 + 0x22) = (char)((ulong)uVar8 >> 0x10);
  *(char *)(uVar4 + 0x23) = (char)((ulong)uVar8 >> 0x18);
  *(char *)(uVar4 + 0x24) = (char)((ulong)uVar8 >> 0x20);
  *(char *)(uVar4 + 0x25) = (char)((ulong)uVar8 >> 0x28);
  *(char *)(uVar4 + 0x26) = (char)((ulong)uVar8 >> 0x30);
  *(char *)(uVar4 + 0x27) = (char)((ulong)uVar8 >> 0x38);
  uVar5 = uVar4;
  func_0x0005374c();
  _swift_release();
  uVar1 = (uint)((ulong)uVar9 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar16 = uVar6;
    if (uVar11 != 0) {
      lVar15 = (long)(int)uVar6;
      if ((long)uVar6 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53ba0);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53bd8);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53bb0);
        (*pcVar2)();
      }
      puVar14 = (ulong *)((lVar15 - uVar7) + uVar4);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53a70);
        (*pcVar2)();
      }
LAB_00053aac:
      uVar16 = *puVar14;
      uVar4 = uVar7;
    }
  }
  else {
    if (uVar11 == 2) {
      lVar15 = *(long *)(uVar6 + 0x10);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
LAB_00053bbc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53bc0);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53ba4);
        (*pcVar2)();
      }
      puVar14 = (ulong *)((lVar15 - uVar7) + uVar4);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (puVar14 == (ulong *)0x0) goto LAB_00053bbc;
      goto LAB_00053aac;
    }
    uVar16 = 0;
  }
  uVar1 = (uint)((ulong)uVar10 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 != 0) {
      lVar15 = (long)(int)uVar5;
      if ((long)uVar5 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53ba8);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (uVar4 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53be4);
        (*pcVar2)();
      }
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53bb4);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((lVar15 - uVar7) + uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53b0c);
        (*pcVar2)();
      }
    }
  }
  else if (uVar11 == 2) {
    lVar15 = *(long *)(uVar5 + 0x10);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (uVar4 == 0) {
      __s10Foundation13__DataStorageC7_lengthSivg();
    }
    else {
      uVar7 = uVar4;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar15,uVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53bac);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((lVar15 - uVar7) + uVar4 != 0) goto LAB_00053b54;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x53bcc);
    (*pcVar2)();
  }
LAB_00053b54:
  uVar4 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  FUN_00023358(uVar5,uVar10);
  FUN_00023358(uVar6,uVar9);
  return uVar4 >> 0x20 | uVar4 << 0x20;
}



/* Entry: 00053be4; end: 00053e93;  */

undefined1  [16] FUN_00053be4(ulong param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long *plVar20;
  ulong *puVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  long extraout_x8;
  ulong uVar25;
  long extraout_x8_00;
  long lVar26;
  undefined *puVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong auStack_120 [8];
  byte abStack_e0 [16];
  undefined1 auStack_d0 [8];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulong *puStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = 0;
  __s10Foundation4UUIDVMa();
  lVar26 = *(long *)(uVar13 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar26 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar28 = auStack_d0 + lVar9;
  uVar25 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar25 >> 0x20 | uVar25 << 0x20;
  uVar25 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar25 >> 0x20 | uVar25 << 0x20;
  puVar14 = &uStack_70;
  plVar20 = &lStack_68;
  FUN_000541a4();
  puVar15 = &uStack_78;
  puVar21 = &uStack_70;
  FUN_000541a4();
  func_0x00023304(puVar14,(ulong)plVar20 & 0xffffffffffffff);
  puVar16 = puVar14;
  FUN_00053e94(puVar14,(ulong)plVar20 & 0xffffffffffffff);
  func_0x00023304(puVar15,(ulong)puVar21 & 0xffffffffffffff);
  FUN_00053e94(puVar15,(ulong)puVar21 & 0xffffffffffffff);
  puStack_80 = puVar16;
  FUN_00053fc4();
  uVar25 = puStack_80[2];
  if (uVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e54);
    (*pcVar12)();
  }
  if (uVar25 == 1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e58);
    (*pcVar12)();
  }
  if (uVar25 < 3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e5c);
    (*pcVar12)();
  }
  if (uVar25 == 3) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e60);
    (*pcVar12)();
  }
  if (uVar25 < 5) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e64);
    (*pcVar12)();
  }
  if (uVar25 == 5) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e68);
    (*pcVar12)();
  }
  if (uVar25 < 7) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e6c);
    (*pcVar12)();
  }
  if (uVar25 == 7) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e70);
    (*pcVar12)();
  }
  if (uVar25 < 9) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e74);
    (*pcVar12)();
  }
  if (uVar25 == 9) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e78);
    (*pcVar12)();
  }
  if (uVar25 < 0xb) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e7c);
    (*pcVar12)();
  }
  if (uVar25 == 0xb) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e80);
    (*pcVar12)();
  }
  if (uVar25 < 0xd) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e84);
    (*pcVar12)();
  }
  if (uVar25 == 0xd) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e88);
    (*pcVar12)();
  }
  if (uVar25 < 0xf) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e8c);
    (*pcVar12)();
  }
  if (uVar25 == 0xf) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x53e90);
    (*pcVar12)();
  }
  uStack_b8 = (uint)*(byte *)((long)puStack_80 + 0x21);
  uStack_b4 = (uint)(byte)puStack_80[4];
  uStack_c0 = (uint)*(byte *)((long)puStack_80 + 0x23);
  uStack_bc = (uint)*(byte *)((long)puStack_80 + 0x22);
  uStack_c8 = (uint)*(byte *)((long)puStack_80 + 0x25);
  uStack_c4 = (uint)*(byte *)((long)puStack_80 + 0x24);
  bVar1 = *(byte *)((long)puStack_80 + 0x26);
  bVar2 = *(byte *)((long)puStack_80 + 0x27);
  uVar11 = puStack_80[5];
  bVar3 = *(byte *)((long)puStack_80 + 0x29);
  bVar4 = *(byte *)((long)puStack_80 + 0x2a);
  bVar5 = *(byte *)((long)puStack_80 + 0x2b);
  bVar6 = *(byte *)((long)puStack_80 + 0x2c);
  bVar7 = *(byte *)((long)puStack_80 + 0x2d);
  uVar8 = *(undefined2 *)((long)puStack_80 + 0x2e);
  puStack_b0 = puVar14;
  plStack_a8 = plVar20;
  puStack_a0 = puVar21;
  uStack_98 = uVar13;
  puStack_90 = puVar15;
  lStack_88 = lVar26;
  _swift_bridgeObjectRelease();
  *(undefined2 *)(abStack_e0 + lVar9 + 6) = uVar8;
  abStack_e0[lVar9 + 5] = bVar7;
  abStack_e0[lVar9 + 4] = bVar6;
  abStack_e0[lVar9 + 3] = bVar5;
  abStack_e0[lVar9 + 2] = bVar4;
  abStack_e0[lVar9 + 1] = bVar3;
  abStack_e0[lVar9] = (byte)uVar11;
  uVar25 = (ulong)uStack_b8;
  uVar13 = (ulong)uStack_b4;
  __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
            (puVar28,uVar13,uVar25,uStack_bc,uStack_c0,uStack_c4,uStack_c8,(ulong)bVar1,(ulong)bVar2
            );
  __s10Foundation4UUIDV10uuidStringSSvg();
  FUN_00023358(puStack_b0,(ulong)plStack_a8 & 0xffffffffffffff);
  FUN_00023358(puStack_90,(ulong)puStack_a0 & 0xffffffffffffff);
  puVar17 = puVar28;
  uVar22 = uStack_98;
  (**(code **)(lStack_88 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    auVar30._8_8_ = uVar25;
    auVar30._0_8_ = uVar13;
    return auVar30;
  }
  ___stack_chk_fail();
  *(ulong *)((long)auStack_120 + lVar9) = uVar25;
  *(ulong *)((long)auStack_120 + lVar9 + 8) = (ulong)(byte)uVar11;
  *(ulong *)((long)auStack_120 + lVar9 + 0x10) = (ulong)bVar2;
  *(ulong *)((long)auStack_120 + lVar9 + 0x18) = (ulong)bVar1;
  *(ulong *)((long)auStack_120 + lVar9 + 0x20) = (ulong)bVar4;
  *(ulong *)((long)auStack_120 + lVar9 + 0x28) = (ulong)bVar3;
  *(undefined1 **)((long)auStack_120 + lVar9 + 0x30) = puVar28;
  *(ulong *)((long)auStack_120 + lVar9 + 0x38) = uVar13;
  *(undefined1 **)(abStack_e0 + lVar9) = &stack0xfffffffffffffff0;
  *(code **)(abStack_e0 + lVar9 + 8) = FUN_00053e94;
  uVar25 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar26 = *(long *)(uVar25 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar26 + 0x40));
  puVar27 = (undefined *)
            ((long)auStack_120 + (lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  uVar10 = (uint)(uVar22 >> 0x20);
  uVar23 = uVar10 >> 0x1e;
  if (uVar10 >> 0x1e < 2) {
    if (uVar23 == 0) {
      puVar29 = (undefined *)(uVar22 >> 0x30 & 0xff);
    }
    else {
      iVar24 = (int)((ulong)puVar17 >> 0x20);
      if (SBORROW4(iVar24,(int)puVar17)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x53fc4);
        (*pcVar12)();
      }
      puVar29 = (undefined *)(long)(iVar24 - (int)puVar17);
    }
joined_r0x00053f1c:
    if (puVar29 != (undefined *)0x0) {
      puVar18 = puVar29;
      FUN_00022434(puVar29,0);
      puVar19 = puVar27;
      __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
                (puVar27,puVar18 + 0x20,puVar29,puVar17,uVar22);
      FUN_00023358(puVar17,uVar22);
      (**(code **)(lVar26 + 8))(puVar27,uVar25);
      if (puVar19 != puVar29) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x53f78);
        (*pcVar12)();
      }
      goto LAB_00053fa0;
    }
  }
  else if (uVar23 == 2) {
    puVar29 = (undefined *)(*(long *)(puVar17 + 0x18) - *(long *)(puVar17 + 0x10));
    if (SBORROW8(*(long *)(puVar17 + 0x18),*(long *)(puVar17 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x53fc0);
      (*pcVar12)();
    }
    goto joined_r0x00053f1c;
  }
  FUN_00023358(puVar17,uVar22);
  puVar18 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar25 = uVar22;
LAB_00053fa0:
  auVar31._8_8_ = uVar25;
  auVar31._0_8_ = puVar18;
  return auVar31;
}



/* Entry: 00053e94; end: 00053fc3;  */

undefined * FUN_00053e94(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar9 = (undefined1 *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x53fc4);
        (*pcVar2)();
      }
      puVar9 = (undefined1 *)(long)(iVar7 - (int)param_1);
    }
  }
  else {
    if (uVar6 != 2) goto LAB_00053f8c;
    puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x53fc0);
      (*pcVar2)();
    }
  }
  if (puVar9 != (undefined1 *)0x0) {
    puVar4 = puVar9;
    FUN_00022434(puVar9,0);
    puVar5 = puVar8;
    __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
              (puVar8,puVar4 + 0x20,puVar9,param_1,param_2);
    FUN_00023358(param_1,param_2);
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    if (puVar5 == puVar9) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x53f78);
    (*pcVar2)();
  }
LAB_00053f8c:
  FUN_00023358(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_0099b8f0;
}



/* Entry: 00053fc4; end: 000540b3;  */

void FUN_00053fc4(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x540a8);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_000540b4();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x540ac);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x540b0);
      (*pcVar1)();
    }
    _memcpy(lVar4 + *(long *)(lVar4 + 0x10) + 0x20,param_1 + 0x20,uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x540b4);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 000540b4; end: 000541a3;  */

undefined * FUN_000540b4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x541a4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000541a4; end: 00054257;  */

undefined1  [16] FUN_000541a4(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x54250);
    (*pcVar2)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x54254);
    (*pcVar2)();
  }
  uStack_28 = 0;
  uVar3 = uVar1 << 0x30;
  uStack_1a = (undefined1)uVar1;
  uStack_1c = 0;
  uStack_20 = 0;
  if ((param_1 != 0) && (param_2 != param_1)) {
    _memcpy(&uStack_28,param_1);
    uVar3 = (ulong)CONCAT16(uStack_1a,CONCAT24(uStack_1c,uStack_20));
    param_2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_18) {
    ___stack_chk_fail(uStack_28);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  auVar4._8_8_ = uVar3 & 0xffffffffffffff;
  auVar4._0_8_ = uStack_28;
  return auVar4;
}



/* Entry: 00054258; end: 0005425f;  */

undefined8 FUN_00054258(void)

{
  return 1;
}



/* Entry: 00054260; end: 000542ff;  */

void FUN_00054260(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00054300; end: 0005431f;  */

void FUN_00054300(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 00054320; end: 00054363;  */

void FUN_00054320(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_000552a8();
  uVar2 = uVar1;
  FUN_00010570();
                    /* WARNING: Could not recover jumptable at 0x00779058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_0099b718)
            (param_1,param_2,uVar1,uVar2);
  return;
}



/* Entry: 00054364; end: 0005436b;  */

void FUN_00054364(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077904c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_0099b710)();
  return;
}



/* Entry: 0005436c; end: 000543f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005436c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8240) = 0xa4cb800;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8248) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8258) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000543f4; end: 00054413;  */

void FUN_000543f4(void)

{
  _objc_opt_self(&PTR_PTR_00ac7890);
  return;
}



/* Entry: 00054414; end: 00054523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00054414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8240) = 0xa4cb800;
  puVar1 = &UNK_0099fa30;
  _swift_allocObject(&UNK_0099fa30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000115a8(0xae8260,&UNK_007cfa20);
  _swift_allocObject();
  _objc_retain(param_1);
  pcVar2 = FUN_00054548;
  FUN_000875cc(FUN_00054548,puVar1);
  *(code **)(unaff_x20 + _DAT_00ae8248) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8258) = param_3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_00abbf70);
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 00054524; end: 00054547;  */

void FUN_00054524(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00054548; end: 00054577;  */

void FUN_00054548(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 00054578; end: 000546af; -[SCProcessedNotificationStorage initWithTransactor:messagingRecoveryPushTypes:growthRecoveryPushTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00054578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___sSSSHsWP_0099b050;
  puVar2 = PTR___sSSN_0099b040;
  plVar4 = &lStack_50;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_4,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_5,puVar2,puVar1)
  ;
  *(undefined8 *)(param_1 + _DAT_00ae8240) = 0xa4cb800;
  puVar2 = &UNK_0099fae8;
  _swift_allocObject(&UNK_0099fae8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000115a8(0xae8260,&UNK_007cfa20);
  _swift_allocObject();
  _objc_retain(param_3);
  _objc_retain();
  uVar3 = 0x554e8;
  FUN_000875cc(0x554e8,puVar2);
  *(undefined8 *)(param_1 + _DAT_00ae8248) = uVar3;
  *(undefined8 *)(param_1 + _DAT_00ae8250) = param_4;
  *(undefined8 *)(param_1 + _DAT_00ae8258) = param_5;
  FUN_000543f4();
  lStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  _objc_release(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 000546b0; end: 000546df;  */

void FUN_000546b0(void)

{
  FUN_000543f4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000546e0; end: 00054727; -[SCProcessedNotificationStorage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000546e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae8248));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8250));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8258));
  return;
}



/* Entry: 00054728; end: 00054947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00054728(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long alStack_80 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_000873f0(alStack_80);
  if (alStack_80[0] == 0) {
    FUN_00054948();
    _swift_allocError(&UNK_0099fac8,lVar3,0,0);
    _swift_willThrow();
  }
  else {
    __s10Foundation4DateVACycfC(lVar6);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x5493c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x54940);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x54944);
      (*pcVar1)();
    }
    lStack_70 = (long)param_1 + -0xa4cb800;
    if (SCARRY8((long)param_1,-0xa4cb800)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x54948);
      (*pcVar1)();
    }
    uVar4 = 0;
    FUN_000554a4(0,0xae8270,&PTR_PTR_00ac2b48);
    FUN_00057ae0(0,0,FUN_00054988,alStack_80,alStack_80[0],uVar4,PTR___sytN_0099b8e0 + 8);
    if (unaff_x21 == 0) {
      uVar5 = 0xae6938;
      lStack_70 = param_2;
      uStack_68 = param_3;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      FUN_00057288(auStack_58,0,0,FUN_000549b0,alStack_80,alStack_80[0],uVar4,uVar5);
      _objc_release(alStack_80[0]);
    }
    else {
      _objc_release(alStack_80[0]);
    }
  }
  return;
}



/* Entry: 00054948; end: 00054987;  */

void FUN_00054948(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfad0;
  _swift_getWitnessTable(&UNK_007cfad0,&UNK_0099fac8);
  puRam0000000000ae8268 = puVar1;
  return;
}



/* Entry: 00054988; end: 000549af;  */

void FUN_00054988(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_00423660(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 000549b0; end: 00054b97;  */

void FUN_000549b0(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  FUN_00423318(param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  FUN_000554a4(0,0xae82b8,&PTR_PTR_00ac2bf0);
  uVar3 = param_2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar2);
  _objc_release(param_2);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  PTR___swiftEmptyArrayStorage_0099b8f0 = puVar9;
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    FUN_0003bcc8(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x54b98);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      uVar7 = uVar3;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar8;
        FUN_000552e8(uVar8,uVar3,&PTR_PTR_00ac2bf0,0xae82b8);
      }
      _objc_retain();
      uVar5 = uVar4;
      FUN_00423a58();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar4);
      uVar4 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
        FUN_0003bcc8(1 < *(ulong *)(puVar9 + 0x18),uVar4 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar9 + uVar4 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar9 + uVar4 * 0x10 + 0x28) = uVar7;
    } while (uVar10 != uVar8);
    _swift_bridgeObjectRelease(uVar3);
  }
  *param_1 = (long)puVar9;
  return;
}



/* Entry: 00054b98; end: 00054c53; -[SCProcessedNotificationStorage getProcessedNotificationIdsForCategory:limit:error:] */

/* WARNING: Removing unreachable block (ram,0x00054be4) */
/* WARNING: Removing unreachable block (ram,0x00054c34) */
/* WARNING: Removing unreachable block (ram,0x00054be8) */

void FUN_00054b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_00054728(param_3,param_4);
  _objc_release(param_1);
  uVar1 = param_3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,PTR___sSSN_0099b040);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00054c54; end: 00054d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00054c54(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_50 [2];
  undefined8 uStack_40;
  
  uVar1 = param_1;
  FUN_000873f0(alStack_50);
  if (alStack_50[0] == 0) {
    FUN_00054948();
    _swift_allocError(&UNK_0099fac8,uVar1,0,0);
    _swift_willThrow();
  }
  else {
    uVar1 = 0;
    uStack_40 = param_1;
    FUN_000554a4(0,0xae8270,&PTR_PTR_00ac2b48);
    FUN_00057ae0(0,0,FUN_00054d2c,alStack_50,alStack_50[0],uVar1,PTR___sytN_0099b8e0 + 8);
    _objc_release(alStack_50[0]);
  }
  return;
}



/* Entry: 00054d2c; end: 00054f03;  */

void FUN_00054d2c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (uVar2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar10 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x54ec8);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(uVar2 + uVar11 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar6 = uVar11;
        param_2 = uVar2;
        FUN_000552e8(uVar11,uVar2,&PTR__OBJC_CLASS___SCProcessedNotification_00ac28c8,0xae82a8);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x54ec4);
        (*pcVar4)();
      }
      uVar7 = uVar6;
      func_0x00789ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_2;
      if (uVar7 == 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar9 = param_2;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(param_2);
      }
      uVar8 = uVar3;
      func_0x007800a0(uVar3);
      _objc_release(uVar7);
      uVar7 = uVar6;
      func_0x00789a40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      if (uVar7 == 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        uVar5 = uVar9;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar9);
      }
      uVar9 = uVar6;
      func_0x00789ac0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar9 == 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(uVar5);
      }
      uVar5 = uVar6;
      func_0x00792a40(uVar6);
      param_2 = uVar7;
      FUN_004234c8(param_1,uVar7,uVar9,uVar5,uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar10);
  }
  return;
}



/* Entry: 00054f04; end: 00054f07;  */

void FUN_00054f04(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfa30;
  _swift_getWitnessTable(&UNK_007cfa30,&UNK_0099fac8);
  puRam0000000000ae8278 = puVar1;
  return;
}



/* Entry: 00054f08; end: 00054f47;  */

void FUN_00054f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfa30;
  _swift_getWitnessTable(&UNK_007cfa30,&UNK_0099fac8);
  puRam0000000000ae8278 = puVar1;
  return;
}



/* Entry: 00054f48; end: 00055037;  */

void FUN_00054f48(void)

{
  return;
}



/* Entry: 00055038; end: 0005510f; -[SCProcessedNotificationStorage storeProcessedNotifications:error:] */

/* WARNING: Removing unreachable block (ram,0x000550ac) */
/* WARNING: Removing unreachable block (ram,0x000550f8) */
/* WARNING: Removing unreachable block (ram,0x000550b0) */

void FUN_00055038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_000554a4(0,0xae82a8,&PTR__OBJC_CLASS___SCProcessedNotification_00ac28c8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _objc_retain(param_1);
  FUN_00054c54(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  if (param_4 != (undefined8 *)0x0) {
    _objc_autorelease(0);
    *param_4 = 0;
  }
  return;
}



/* Entry: 00055110; end: 000551f7;  */

undefined8 FUN_00055110(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(param_3 + 0x28));
  puVar3 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        return 1;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 000551f8; end: 000552a7; -[SCProcessedNotificationStorage categoryFromPushTypeWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000551f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8250);
  _objc_retain();
  uVar1 = param_3;
  FUN_00055110(param_3,param_2,uVar2);
  if ((uVar1 & 1) == 0) {
    FUN_00055110(param_3,param_2,*(undefined8 *)(param_1 + _DAT_00ae8258));
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 2;
    if ((param_3 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 000552a8; end: 000552e7;  */

void FUN_000552a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae82b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cfa98;
  _swift_getWitnessTable(&UNK_007cfa98,&UNK_0099fac8);
  puRam0000000000ae82b0 = puVar1;
  return;
}



/* Entry: 000552e8; end: 000554a3;  */

ulong FUN_000552e8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x553cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x553d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_000554a4(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x554a4);
  (*pcVar2)();
}



/* Entry: 000554a4; end: 000554e3;  */

void FUN_000554a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 000554e4; end: 000554eb;  */

void FUN_000554e4(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000554ec; end: 00055517; +[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore databaseFilename] */

void FUN_000554ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b6540);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00055518; end: 0005563f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00055518(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_00ae82c0;
  puVar3 = PTR__OBJC_CLASS___NSLock_00ac28d0;
  _objc_allocWithZone();
  func_0x007849a0();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae82c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00055640; end: 00055663;  */

void FUN_00055640(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00055664; end: 00055683;  */

void FUN_00055664(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 00055684; end: 0005574b; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore initWithTransactorFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00055684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __Block_copy();
  puVar4 = &UNK_0099fe18;
  _swift_allocObject(&UNK_0099fe18,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  lVar2 = _DAT_00ae82c0;
  puVar5 = PTR__OBJC_CLASS___NSLock_00ac28d0;
  _objc_allocWithZone();
  func_0x007849a0();
  *(undefined **)(param_1 + lVar2) = puVar5;
  puVar5 = &UNK_0099fe40;
  _swift_allocObject(&UNK_0099fe40,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x56840;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae82c8);
  *puVar1 = 0x568f4;
  puVar1[1] = puVar5;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0005574c; end: 00055807; +[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore makeTransactorWithDatabasesDirectoryPath:] */

void FUN_0005574c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = 0x80000000008b6540;
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b6540);
  uVar2 = param_3;
  func_0x00791e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar2);
  _objc_release(uVar2);
  uVar2 = 0;
  FUN_00056860(0,0xae82d0,&PTR_PTR_00ac28d8);
  FUN_000571e8(uVar1,uVar3,0,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00055808; end: 00055a4f;  */

/* WARNING: Removing unreachable block (ram,0x000558cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00055808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_00ae82c0);
  lVar1 = lVar5;
  func_0x00788640();
  (**(code **)(unaff_x20 + _DAT_00ae82c8))();
  if (lVar1 == 0) {
    func_0x00793000(lVar5);
  }
  else {
    uVar2 = 0;
    uStack_80 = param_1;
    puStack_78 = (undefined *)param_2;
    uStack_70 = param_3;
    puStack_68 = (undefined *)param_4;
    uStack_60 = param_5;
    FUN_00056860(0,0xae82d0,&PTR_PTR_00ac28d8);
    FUN_00057ae0(0,0,FUN_00055a50,&puStack_90,lVar1,uVar2,PTR___sytN_0099b8e0 + 8);
    uVar2 = 0;
    _dispatch_semaphore_create();
    puVar3 = &UNK_0099fc88;
    _swift_allocObject(&UNK_0099fc88,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    uStack_70 = 0x568cc;
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0x42000000;
    uStack_80 = 0x563e4;
    puStack_78 = &UNK_0099fca0;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    __Block_copy(ppuVar4);
    puVar3 = puStack_68;
    _objc_retain(uVar2);
    _swift_release(puVar3);
    func_0x0077c620(lVar1);
    __Block_release(ppuVar4);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
    _objc_release(lVar1);
    _objc_release(uVar2);
    func_0x00793000(lVar5);
  }
  return lVar1 != 0;
}



/* Entry: 00055a50; end: 00055acb;  */

void FUN_00055a50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
  FUN_004240c8(param_1,uVar2,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 00055acc; end: 00055b67; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore storeWithContentId:conversationId:serverMessageId:] */

uint FUN_00055acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain(param_1);
  FUN_00055808(param_3,param_2,param_4,uVar1,param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 00055b68; end: 00055ffb;  */

/* WARNING: Removing unreachable block (ram,0x00055c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00055b68(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_68;
  
  ppuVar6 = &puStack_a0;
  lVar17 = *(long *)(unaff_x20 + _DAT_00ae82c0);
  lVar2 = lVar17;
  func_0x00788640();
  (**(code **)(unaff_x20 + _DAT_00ae82c8))();
  if (lVar2 == 0) {
    func_0x00793000(lVar17);
    puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  else {
    uVar3 = 0;
    FUN_00056860(0,0xae82d0,&PTR_PTR_00ac28d8);
    uVar4 = 0xae82d8;
    func_0x000115a8(0xae82d8,&UNK_007cfb70);
    FUN_00057288(&uStack_68,0,0,FUN_00055ffc,0,lVar2,uVar3,uVar4);
    uVar4 = 0;
    _dispatch_semaphore_create();
    puVar5 = &UNK_0099fd28;
    _swift_allocObject(&UNK_0099fd28,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar4;
    uStack_80 = 0x568dc;
    puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_98 = 0x42000000;
    uStack_90 = 0x563e4;
    puStack_88 = &UNK_0099fd40;
    puStack_78 = puVar5;
    __Block_copy(&puStack_a0);
    puVar5 = puStack_78;
    _objc_retain(uVar4);
    _swift_release(puVar5);
    func_0x0077c620(lVar2);
    __Block_release(ppuVar6);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
    _objc_release(lVar2);
    _objc_release(uVar4);
    func_0x00793000(lVar17);
    puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (uStack_68 != 0) {
      if (uStack_68 >> 0x3e == 0) {
        uVar18 = *(ulong *)((uStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar18 = uStack_68;
        if (-1 < (long)uStack_68) {
          uVar18 = uStack_68 & 0xffffffffffffff8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar18 != 0) {
        puStack_a0 = puVar5;
        uVar14 = uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU);
        func_0x00056488(0,uVar14,0);
        if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x55ffc);
          (*pcVar1)();
        }
        if ((uStack_68 & 0xc000000000000001) == 0) {
          puVar19 = (undefined8 *)(uStack_68 + 0x20);
          do {
            puVar5 = puStack_a0;
            uVar11 = *puVar19;
            _objc_retain();
            uVar4 = uVar11;
            FUN_0042472c();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            uVar7 = uVar14;
            _objc_release(uVar4);
            uVar4 = uVar11;
            func_0x00424738(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar4;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(uVar4);
            uVar4 = uVar11;
            func_0x00424744(uVar11);
            uVar13 = 0;
            FUN_00056bc0(0);
            _objc_allocWithZone();
            func_0x000569f4(uVar3,uVar14,uVar12,uVar7,uVar4,uVar13);
            _objc_release(uVar11);
            uVar8 = *(ulong *)(puVar5 + 0x10);
            uVar7 = uVar8 + 1;
            puStack_a0 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
              uVar14 = uVar7;
              func_0x00056488(1 < *(ulong *)(puVar5 + 0x18),uVar7,1);
            }
            *(ulong *)(puStack_a0 + 0x10) = uVar7;
            *(undefined8 *)(puStack_a0 + uVar8 * 8 + 0x20) = uVar3;
            uVar18 = uVar18 - 1;
            puVar5 = puStack_a0;
            puVar19 = puVar19 + 1;
          } while (uVar18 != 0);
        }
        else {
          uVar14 = 0;
          do {
            puVar5 = puStack_a0;
            uVar7 = uVar14;
            uVar15 = uStack_68;
            FUN_000565c8(uVar14,uStack_68);
            uVar8 = uVar7;
            FUN_0042472c();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            uVar16 = uVar15;
            _objc_release(uVar8);
            uVar8 = uVar7;
            func_0x00424738(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar8;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(uVar8);
            uVar8 = uVar7;
            func_0x00424744(uVar7);
            uVar4 = 0;
            FUN_00056bc0(0);
            _objc_allocWithZone();
            func_0x000569f4(uVar9,uVar15,uVar10,uVar16,uVar8,uVar4);
            _swift_unknownObjectRelease(uVar7);
            uVar7 = *(ulong *)(puVar5 + 0x10);
            puStack_a0 = puVar5;
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
              func_0x00056488(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
            }
            uVar14 = uVar14 + 1;
            *(ulong *)(puStack_a0 + 0x10) = uVar7 + 1;
            *(ulong *)(puStack_a0 + uVar7 * 8 + 0x20) = uVar9;
            puVar5 = puStack_a0;
          } while (uVar18 != uVar14);
        }
      }
      _swift_bridgeObjectRelease(uStack_68);
    }
  }
  return puVar5;
}



/* Entry: 00055ffc; end: 0005606b;  */

void FUN_00055ffc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00423efc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  FUN_00056860(0,0xae8308,&PTR_PTR_00ac2bf8);
  uVar2 = param_2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar1);
  _objc_release(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 0005606c; end: 000560bf; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore allItems] */

void FUN_0005606c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00055b68();
  _objc_release(param_1);
  uVar2 = 0;
  FUN_00056bc0(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 000560c0; end: 000562eb;  */

/* WARNING: Removing unreachable block (ram,0x0005616c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000560c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar5 = *(long *)(unaff_x20 + _DAT_00ae82c0);
  lVar1 = lVar5;
  func_0x00788640();
  (**(code **)(unaff_x20 + _DAT_00ae82c8))();
  if (lVar1 == 0) {
    func_0x00793000(lVar5);
  }
  else {
    uVar2 = 0;
    uStack_70 = param_1;
    puStack_68 = (undefined *)param_2;
    FUN_00056860(0,0xae82d0,&PTR_PTR_00ac28d8);
    FUN_00057ae0(0,0,FUN_000567b0,&puStack_80,lVar1,uVar2,PTR___sytN_0099b8e0 + 8);
    uVar2 = 0;
    _dispatch_semaphore_create();
    puVar3 = &UNK_0099fdc8;
    _swift_allocObject(&UNK_0099fdc8,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    uStack_60 = 0x568ec;
    puStack_80 = PTR___NSConcreteStackBlock_00999f30;
    uStack_78 = 0x42000000;
    uStack_70 = 0x563e4;
    puStack_68 = &UNK_0099fde0;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    puVar3 = puStack_58;
    _objc_retain(uVar2);
    _swift_release(puVar3);
    func_0x0077c620(lVar1);
    __Block_release(ppuVar4);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
    _objc_release(lVar1);
    _objc_release(uVar2);
    func_0x00793000(lVar5);
  }
  return lVar1 != 0;
}



/* Entry: 000562ec; end: 00056353; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore deleteWithContentId:] */

uint FUN_000562ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_000560c0(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 00056354; end: 00056387;  */

void FUN_00056354(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00056388; end: 0005640f; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056388(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae82c8 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae82c0));
  return;
}



/* Entry: 00056410; end: 0005642b;  */

void FUN_00056410(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 0005642c; end: 000564a3;  */

void FUN_0005642c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_00056bc0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0xae61a0;
      plVar5 = (long *)&UNK_007cfbd0;
      goto SUB_000115a8;
    }
  }
  puVar2 = (ulong *)0xae8310;
  plVar5 = (long *)&UNK_007cfbc8;
SUB_000115a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 000564a4; end: 000565c7;  */

undefined * FUN_000564a4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x565c8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_0005642c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_00056bc0(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 000565c8; end: 0005678b;  */

ulong FUN_000565c8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x566ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x566b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_00ac2bf8;
    _objc_opt_self(PTR_PTR_00ac2bf8);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_00ac2bf8;
    _objc_opt_self(PTR_PTR_00ac2bf8);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_00056860(0,0xae8308,&PTR_PTR_00ac2bf8);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x5678c);
  (*pcVar2)();
}



/* Entry: 0005678c; end: 000567af;  */

void FUN_0005678c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000567b0; end: 000567fb;  */

void FUN_000567b0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_00424240(param_1,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 000567fc; end: 0005685f;  */

void FUN_000567fc(void)

{
  _objc_opt_self(&PTR_PTR_00ac7978);
  return;
}



/* Entry: 00056860; end: 0005689f;  */

void FUN_00056860(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 000568a0; end: 000568f7;  */

void FUN_000568a0(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000568f8; end: 00056903; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000568f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8318);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8318))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00056904; end: 0005690f; -[_TtC28SCNSEPrefetchedMediaServices22NSEPrefetchedMediaItem conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8320);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8320))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00056910; end: 00056957;  */

void FUN_00056910(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}


