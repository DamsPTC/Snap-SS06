/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00050b14; end: 00050b53;  */

void FUN_00050b14(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 00050b54; end: 00050b63;  */

void FUN_00050b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00789a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*unaff_x20,PTR_s_notificationReceived_appState__00abd3a8,param_1,param_2);
  return;
}



/* Entry: 00050b64; end: 00050ba7;  */

void FUN_00050b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  func_0x00789a20(uVar1,param_2,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00050ba8; end: 00050bb3;  */

void FUN_00050ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  func_0x00789aa0(uVar1,param_2,param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00050bb4; end: 00050c5b;  */

void FUN_00050bb4(void)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  func_0x007859a0();
  func_0x00789a80(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00050c5c; end: 00050c73;  */

void FUN_00050c5c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x007822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*unaff_x20,PTR_s_dispose_00abb5b0);
  return;
}



/* Entry: 00050c74; end: 00050cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8058);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8060) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00050ce0; end: 00050cf3;  */

bool FUN_00050ce0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00050cf4; end: 00050dcb;  */

void FUN_00050cf4(void)

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



/* Entry: 00050dcc; end: 00050dd7;  */

void FUN_00050dcc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00050dd8; end: 00050e23; -[SCNSENativeProcessedEvent notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050dd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8058);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8058))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00050e24; end: 00050e33; -[SCNSENativeProcessedEvent result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00050e24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8060);
}



/* Entry: 00050e34; end: 00050e97; -[SCNSENativeProcessedEvent initWithNotificationId:nativeProcessResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050e34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8058);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae8060) = param_4;
  FUN_00050f18();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00050e98; end: 00050ef3; -[SCNSENativeProcessedEvent init] */

void FUN_00050e98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSENativeHandler.NSENativeProcessedEvent",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x50ec4);
  (*pcVar1)();
}



/* Entry: 00050ef4; end: 00050f17; -[SCNSENativeProcessedEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8058 + 8));
  return;
}



/* Entry: 00050f18; end: 00050f37;  */

void FUN_00050f18(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCNSENativeProcessedEvent);
  return;
}



/* Entry: 00050f38; end: 00050f3b;  */

void FUN_00050f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cf540;
  _swift_getWitnessTable(&UNK_007cf540,&UNK_0099f7b8);
  puRam0000000000ae8068 = puVar1;
  return;
}



/* Entry: 00050f3c; end: 00050f7b;  */

void FUN_00050f3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cf540;
  _swift_getWitnessTable(&UNK_007cf540,&UNK_0099f7b8);
  puRam0000000000ae8068 = puVar1;
  return;
}



/* Entry: 00050f7c; end: 00050fa3;  */

undefined1  [16] FUN_00050f7c(void)

{
  return ZEXT816(0x99f7b8);
}



/* Entry: 00050fa4; end: 00050fe3;  */

void FUN_00050fa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cf620;
  _swift_getWitnessTable(&UNK_007cf620,&UNK_0099f868);
  puRam0000000000ae8098 = puVar1;
  return;
}



/* Entry: 00050fe4; end: 0005108f;  */

void FUN_00050fe4(void)

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



/* Entry: 00051090; end: 000510c7;  */

void FUN_00051090(ulong *param_1,ulong *param_2)

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



/* Entry: 000510c8; end: 000510eb; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType video] */

void FUN_000510c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f45444956,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000510ec; end: 0005111b; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType silentSnap] */

void FUN_000510ec(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535f544e454c4953,0xeb0000000050414e);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005111c; end: 0005111f; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType .cxx_destruct] */

void FUN_0005111c(void)

{
  return;
}



/* Entry: 00051120; end: 00051153; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName audioSnap] */

void FUN_00051120(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e735f6f69647561,0xef6e6f63695f7061);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00051154; end: 0005117f; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName silentSnap] */

void FUN_00051154(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b60f0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00051180; end: 000511ab; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName chatBubble] */

void FUN_00051180(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b6110);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000511ac; end: 000511d7; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName priorityChatBell] */

void FUN_000511ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b6130);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000511d8; end: 000511db;  */

void FUN_000511d8(undefined8 param_1)

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



/* Entry: 000511dc; end: 00051217;  */

void FUN_000511dc(undefined8 param_1)

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



/* Entry: 00051218; end: 0005121b;  */

void FUN_00051218(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0005121c; end: 0005126f;  */

void FUN_0005121c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00051270; end: 00051273; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName .cxx_destruct] */

void FUN_00051270(void)

{
  return;
}



/* Entry: 00051274; end: 00051293;  */

void FUN_00051274(void)

{
  _objc_opt_self(&_OBJC_CLASS____TtC26UnifiedNotificationDefines30MessagingNotificationImageName);
  return;
}



/* Entry: 00051294; end: 00051297; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType init] */

void FUN_00051294(undefined8 param_1)

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



/* Entry: 00051298; end: 0005129f; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName init] */

void FUN_00051298(undefined8 param_1)

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



/* Entry: 000512a0; end: 000512cb; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingCategory] */

void FUN_000512a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b6150);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000512cc; end: 000512f7; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingTextReplyCategory] */

void FUN_000512cc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x80000000008b6170);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000512f8; end: 00051333; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants init] */

void FUN_000512f8(undefined8 param_1)

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



/* Entry: 00051334; end: 00051367;  */

void FUN_00051334(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00051368; end: 0005136b; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants .cxx_destruct] */

void FUN_00051368(void)

{
  return;
}



/* Entry: 0005136c; end: 0005138b;  */

void FUN_0005136c(void)

{
  _objc_opt_self(&
                 _OBJC_CLASS____TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants
                );
  return;
}



/* Entry: 0005138c; end: 000513d7; -[SCNotificationCountPerSenderInfo senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005138c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8118))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000513d8; end: 000513e7; -[SCNotificationCountPerSenderInfo count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000513d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8120);
}



/* Entry: 000513e8; end: 00051453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000513e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8118);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8120) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00051454; end: 00051473;  */

void FUN_00051454(void)

{
  _objc_opt_self(&PTR_PTR_00ac74d8);
  return;
}



/* Entry: 00051474; end: 000514d7; -[SCNotificationCountPerSenderInfo initWithSenderUserId:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00051474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8118);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae8120) = param_4;
  FUN_00051454();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000514d8; end: 00051967;  */

undefined8 FUN_000514d8(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte **ppbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  ulong uVar17;
  uint uVar18;
  byte *pbStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar17 = 0;
  uVar12 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar9 = 0x755f7265646e6573;
    uVar11 = 0xed00006469726573;
    FUN_000202c0(0x755f7265646e6573);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_000232c8(*(long *)(param_1 + 0x38) + lVar9 * 0x20,&pbStack_60);
      _swift_bridgeObjectRelease(param_1);
      puVar7 = PTR___sypN_0099b8d8;
      _swift_dynamicCast(&pbStack_70,&pbStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
      uVar11 = uStack_68;
      pbVar10 = pbStack_70;
      if ((uVar17 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
LAB_00051608:
          uStack_58 = 0;
          pbStack_60 = (byte *)0x0;
          lStack_48 = 0;
          uStack_50 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          lVar9 = 0x746e756f63;
          uVar17 = 0;
          FUN_000202c0(0x746e756f63);
          if ((uVar17 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            goto LAB_00051608;
          }
          FUN_000232c8(*(long *)(param_1 + 0x38) + lVar9 * 0x20,&pbStack_60);
          _swift_bridgeObjectRelease(param_1);
        }
        _swift_bridgeObjectRelease(param_1);
        if (lStack_48 == 0) {
          _swift_bridgeObjectRelease(uVar11);
          FUN_00027748(&pbStack_60);
          goto LAB_000515c8;
        }
        _swift_dynamicCast(&pbStack_70,&pbStack_60,puVar7 + 8,PTR___sSSN_0099b040,6);
        param_1 = uVar11;
        if ((uVar12 & 1) != 0) {
          uVar12 = (ulong)pbStack_70 & 0xffffffffffff;
          uVar14 = uStack_68 >> 0x38 & 0xf;
          uVar17 = uVar12;
          if ((uStack_68 & 0x2000000000000000) != 0) {
            uVar17 = uVar14;
          }
          if (uVar17 == 0) {
            _swift_bridgeObjectRelease();
          }
          else {
            if ((uStack_68 >> 0x3c & 1) == 0) {
              if ((uStack_68 >> 0x3d & 1) == 0) {
                if (((ulong)pbStack_70 >> 0x3c & 1) == 0) {
                  uVar12 = uStack_68;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                }
                else {
                  pbStack_70 = (byte *)((uStack_68 & 0xfffffffffffffff) + 0x20);
                }
                if (*pbStack_70 == 0x2b) {
                  if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x51964);
                    (*pcVar8)();
                  }
                  lVar9 = uVar12 - 1;
                  if (lVar9 == 0) goto LAB_000518a8;
                  uVar17 = 0;
                  do {
                    pbStack_70 = pbStack_70 + 1;
                    if (((9 < *pbStack_70 - 0x30) ||
                        (auVar3._8_8_ = 0, auVar3._0_8_ = uVar17,
                        SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbStack_70 - 0x30),
                       uVar17 = uVar14 + uVar12, CARRY8(uVar14,uVar12))) goto LAB_000518a8;
                    uVar18 = 0;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
                else if (*pbStack_70 == 0x2d) {
                  if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x5195c);
                    (*pcVar8)();
                  }
                  lVar9 = uVar12 - 1;
                  if (lVar9 == 0) {
LAB_000518a8:
                    uVar18 = 1;
                  }
                  else {
                    uVar17 = 0;
                    do {
                      pbStack_70 = pbStack_70 + 1;
                      if (((9 < *pbStack_70 - 0x30) ||
                          (auVar1._8_8_ = 0, auVar1._0_8_ = uVar17,
                          SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
                         (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbStack_70 - 0x30),
                         uVar17 = uVar14 - uVar12, uVar14 < uVar12)) goto LAB_000518a8;
                      uVar18 = 0;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  }
                }
                else {
                  if (uVar12 == 0) goto LAB_000518a8;
                  uVar17 = 0;
                  if (pbStack_70 == (byte *)0x0) {
                    uVar18 = 0;
                  }
                  else {
                    do {
                      if (((9 < *pbStack_70 - 0x30) ||
                          (auVar5._8_8_ = 0, auVar5._0_8_ = uVar17,
                          SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
                         (uVar16 = uVar17 * 10, uVar14 = (ulong)(byte)(*pbStack_70 - 0x30),
                         uVar17 = uVar16 + uVar14, CARRY8(uVar16,uVar14))) goto LAB_000518a8;
                      uVar18 = 0;
                      uVar12 = uVar12 - 1;
                      pbStack_70 = pbStack_70 + 1;
                    } while (uVar12 != 0);
                  }
                }
              }
              else {
                pbStack_60 = pbStack_70;
                uStack_58 = uStack_68 & 0xffffffffffffff;
                uVar18 = (uint)pbStack_70 & 0xff;
                if (uVar18 == 0x2b) {
                  if (uVar14 == 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x51968);
                    (*pcVar8)();
                  }
                  lVar9 = uVar14 - 1;
                  if (lVar9 == 0) goto LAB_000518a8;
                  uVar17 = 0;
                  pbVar15 = (byte *)((ulong)&pbStack_60 | 1);
                  do {
                    if (((9 < *pbVar15 - 0x30) ||
                        (auVar4._8_8_ = 0, auVar4._0_8_ = uVar17,
                        SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbVar15 - 0x30),
                       uVar17 = uVar14 + uVar12, CARRY8(uVar14,uVar12))) goto LAB_000518a8;
                    uVar18 = 0;
                    lVar9 = lVar9 + -1;
                    pbVar15 = pbVar15 + 1;
                  } while (lVar9 != 0);
                }
                else if (uVar18 == 0x2d) {
                  if (uVar14 == 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x51960);
                    (*pcVar8)();
                  }
                  lVar9 = uVar14 - 1;
                  if (lVar9 == 0) goto LAB_000518a8;
                  uVar17 = 0;
                  pbVar15 = (byte *)((ulong)&pbStack_60 | 1);
                  do {
                    if (((9 < *pbVar15 - 0x30) ||
                        (auVar2._8_8_ = 0, auVar2._0_8_ = uVar17,
                        SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
                       (uVar14 = uVar17 * 10, uVar12 = (ulong)(byte)(*pbVar15 - 0x30),
                       uVar17 = uVar14 - uVar12, uVar14 < uVar12)) goto LAB_000518a8;
                    uVar18 = 0;
                    lVar9 = lVar9 + -1;
                    pbVar15 = pbVar15 + 1;
                  } while (lVar9 != 0);
                }
                else {
                  if (uVar14 == 0) goto LAB_000518a8;
                  uVar17 = 0;
                  ppbVar13 = &pbStack_60;
                  do {
                    if (((9 < *(byte *)ppbVar13 - 0x30) ||
                        (auVar6._8_8_ = 0, auVar6._0_8_ = uVar17,
                        SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                       (uVar16 = uVar17 * 10, uVar12 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30),
                       uVar17 = uVar16 + uVar12, CARRY8(uVar16,uVar12))) goto LAB_000518a8;
                    uVar18 = 0;
                    uVar14 = uVar14 - 1;
                    ppbVar13 = (byte **)((long)ppbVar13 + 1);
                  } while (uVar14 != 0);
                }
              }
            }
            else {
              uVar17 = uStack_68;
              FUN_00051ba8(pbStack_70,uStack_68,10);
              uVar18 = (uint)uVar17;
            }
            _swift_bridgeObjectRelease(uStack_68);
            if ((uVar18 & 0xff) != 1) {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pbVar10,uVar11);
              _swift_bridgeObjectRelease(uVar11);
              func_0x00786720();
              _objc_release(pbVar10);
              return unaff_x20;
            }
          }
        }
      }
    }
  }
  _swift_bridgeObjectRelease(param_1);
LAB_000515c8:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 00051968; end: 000519af; -[SCNotificationCountPerSenderInfo initWithDict:] */

void FUN_00051968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_0099b040,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
  FUN_000514d8();
  return;
}



/* Entry: 000519b0; end: 00051ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000519b0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = 0xae8128;
  func_0x000115a8(0xae8128,&UNK_007cf778);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x755f7265646e6573;
  *(undefined8 *)(lVar2 + 0x28) = 0xed00006469726573;
  puVar1 = PTR___sSSN_0099b040;
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_00ae8118))[1];
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(unaff_x20 + _DAT_00ae8118);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x50) = 0x746e756f63;
  *(undefined8 *)(lVar2 + 0x58) = 0xe500000000000000;
  _swift_bridgeObjectRetain();
  puVar3 = PTR___sSuN_0099b360;
  puVar6 = PTR___sSus23CustomStringConvertiblesWP_0099b368;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *(undefined **)(lVar2 + 0x60) = puVar3;
  *(undefined **)(lVar2 + 0x68) = puVar6;
  lVar4 = lVar2;
  FUN_00051f24(lVar2);
  _swift_setDeallocating(lVar2);
  uVar5 = 0xae8130;
  func_0x000115a8(0xae8130,&UNK_007cf780);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),2,uVar5);
  return lVar4;
}



/* Entry: 00051ad4; end: 00051b37; -[SCNotificationCountPerSenderInfo getDict] */

void FUN_00051ad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000519b0();
  _objc_release(param_1);
  uVar2 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_0099b040,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00051b38; end: 00051b93; -[SCNotificationCountPerSenderInfo init] */

void FUN_00051b38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedNotificationDefines.NotificationCountPerSenderInfo",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x51b64);
  (*pcVar1)();
}



/* Entry: 00051b94; end: 00051ba7; -[SCNotificationCountPerSenderInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00051b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8118 + 8));
  return;
}



/* Entry: 00051ba8; end: 00051ca7;  */

/* WARNING: Removing unreachable block (ram,0x00051c9c) */

undefined1  [16] FUN_00051ba8(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_0099b040;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_0099b040,PTR___sSSs25LosslessStringConvertiblesWP_0099b068,
             PTR___sSSSTsWP_0099b058);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_00022254();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_00051ca8(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_00051ca8(pppuVar2,puVar4,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 00051ca8; end: 00051f23;  */

undefined1  [16] FUN_00051ca8(byte *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  code *pcVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  iVar13 = (int)param_3;
  uVar16 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x51f24);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) goto LAB_00051f14;
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_00051f14;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      if ((SUB168(auVar5 * auVar8,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
         CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) goto LAB_00051ef8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar13 + 0x30;
        uVar2 = 0x61;
        if (10 < (long)param_3) {
          uVar2 = iVar13 + 0x57;
        }
        uVar11 = 0x41;
        if (10 < (long)param_3) {
          uVar1 = 0x3a;
          uVar11 = iVar13 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar15 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar17 = (uint)bVar3;
            if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
              uVar16 = 1;
              if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_00051f14;
              cVar18 = -0x57;
            }
            else {
              cVar18 = -0x37;
            }
          }
          else {
            cVar18 = -0x30;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = param_3;
          if ((SUB168(auVar6 * auVar9,8) != 0) ||
             (uVar16 = uVar15 * param_3, uVar15 = uVar16 + (byte)(bVar3 + cVar18),
             CARRY8(uVar16,(ulong)(byte)(bVar3 + cVar18)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar15;
            return auVar20;
          }
        } while( true );
      }
LAB_00051ef8:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x51f20);
      (*pcVar12)();
    }
    lVar14 = param_2 - 1;
    if (lVar14 == 0) {
LAB_00051f14:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar16;
      return auVar10 << 0x40;
    }
    uVar15 = 0;
    uVar1 = iVar13 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar13 + 0x57;
    }
    uVar11 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar11 = iVar13 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar17 = (uint)bVar3;
        if ((uVar17 < 0x41) || ((uVar11 & 0xff) <= uVar17)) {
          uVar16 = 1;
          if ((uVar17 < 0x61) || ((uVar2 & 0xff) <= uVar17)) goto LAB_00051f14;
          cVar18 = -0x57;
        }
        else {
          cVar18 = -0x37;
        }
      }
      else {
        cVar18 = -0x30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_3;
      if ((SUB168(auVar4 * auVar7,8) != 0) ||
         (uVar16 = uVar15 * param_3, uVar15 = uVar16 - (byte)(bVar3 + cVar18),
         uVar16 < (byte)(bVar3 + cVar18))) goto LAB_00051ef8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar15;
  return auVar19;
}



/* Entry: 00051f24; end: 0005202f;  */

undefined * FUN_00051f24(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar8 != (undefined *)0x0) {
    func_0x000115a8(0xae8160,&UNK_007d6500);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_00052030(param_1,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      FUN_000202c0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x5202c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_000252c8(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x52030);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 00052030; end: 0005207f;  */

undefined8 FUN_00052030(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8130;
  func_0x000115a8(0xae8130,&UNK_007cf780);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00052080; end: 000520b3; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey groupedSenders] */

void FUN_00052080(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53646570756f7267,0xee00737265646e65);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000520b4; end: 000520e7; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey perSenderInfo] */

void FUN_000520b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65646e6553726570,0xed00006f666e4972);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000520e8; end: 0005210b; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey perSenderInfoCountKey] */

void FUN_000520e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746e756f63,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005210c; end: 0005213f; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey redriveAttempt] */

void FUN_0005210c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4165766972646572,0xee0074706d657474);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052140; end: 0005214b;  */

undefined * __s26UnifiedNotificationDefines0B16ClientPayloadKeyC16textReplyContentSSvau(void)

{
  return &UNK_0099f8d0;
}



/* Entry: 0005214c; end: 00052177; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey textReplyContent] */

void FUN_0005214c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b61e0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052178; end: 000521a3; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey clientDecryptedMessageText] */

void FUN_00052178(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b6200);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000521a4; end: 000521df; -[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey init] */

void FUN_000521a4(undefined8 param_1)

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



/* Entry: 000521e0; end: 00052213;  */

void FUN_000521e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00052214; end: 00052217; -[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey .cxx_destruct] */

void FUN_00052214(void)

{
  return;
}



/* Entry: 00052218; end: 00052237;  */

void FUN_00052218(void)

{
  _objc_opt_self(&PTR_PTR_00ac75a8);
  return;
}



/* Entry: 00052238; end: 00052243;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC4typeSSvau(void)

{
  return &UNK_007cf7d0;
}



/* Entry: 00052244; end: 00052263; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey type] */

void FUN_00052244(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65707974,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052264; end: 0005226f;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC2idSSvau(void)

{
  return &UNK_007cf7e0;
}



/* Entry: 00052270; end: 0005228f; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey id] */

void FUN_00052270(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64695f6e,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052290; end: 000522b3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey key] */

void FUN_00052290(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79656b5f6e,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000522b4; end: 000522e7; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey snapMediaType] */

void FUN_000522b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64656d5f70616e73,0xef657079745f6169);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000522e8; end: 00052317; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey bitmojiImageUrl] */

void FUN_000522e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f696a6f6d746962,0xeb00000000676d69);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052318; end: 00052347; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey reactionImageUrl] */

void FUN_00052318(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f697463616572,0xec000000676d695f);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052348; end: 0005237b; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailUrl] */

void FUN_00052348(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69616e626d756874,0xed00006c72755f6c);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005237c; end: 000523a7; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailMediaKey] */

void FUN_0005237c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b6220);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000523a8; end: 000523d3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey thumbnailMediaIv] */

void FUN_000523a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b6240);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000523d4; end: 00052407; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey senderUsername] */

void FUN_000523d4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x755f7265646e6573,0xef656d616e726573);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052408; end: 0005243b; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey senderUserId] */

void FUN_00052408(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x755f7265646e6573,0xed00006469726573);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005243c; end: 0005245f; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey senderDisplayName] */

void FUN_0005243c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7265646e6573,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052460; end: 0005246b;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC05titleF0SSvau(void)

{
  return &UNK_007cf7f0;
}



/* Entry: 0005246c; end: 0005248f; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey titleKey] */

void FUN_0005246c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052490; end: 0005249b;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC08subtitleF0SSvau(void)

{
  return &UNK_007cf800;
}



/* Entry: 0005249c; end: 000524c3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey subtitleKey] */

void FUN_0005249c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974627573,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000524c4; end: 000524cf;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC05alertF0SSvau(void)

{
  return &UNK_007cf810;
}



/* Entry: 000524d0; end: 000524f3; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey alertKey] */

void FUN_000524d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7472656c61,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000524f4; end: 000524ff;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC012localMessageF0SSvau(void)

{
  return &UNK_007cf820;
}



/* Entry: 00052500; end: 00052533; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey localMessageKey] */

void FUN_00052500(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d5f6c61636f6c,0xed00006567617373);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052534; end: 0005253f;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC010localTitleF0SSvau(void)

{
  return &UNK_007cf830;
}



/* Entry: 00052540; end: 0005256f; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey localTitleKey] */

void FUN_00052540(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69745f6c61636f6c,0xeb00000000656c74);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052570; end: 0005257b;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC03abcb6HeaderF0SSvau(void)

{
  return &UNK_0099f8e0;
}



/* Entry: 0005257c; end: 000525a7; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey abcNotificationHeaderKey] */

void FUN_0005257c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b6260);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000525a8; end: 000525b3;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC03abcb4BodyF0SSvau(void)

{
  return &UNK_007cf840;
}



/* Entry: 000525b4; end: 000525e7; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey abcNotificationBodyKey] */

void FUN_000525b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69746f6e635f6261,0xee0079646f625f66);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000525e8; end: 000525f3;  */

undefined * __s26UnifiedNotificationDefines0B16ServerPayloadKeyC04bodyF0SSvau(void)

{
  return &UNK_007cf850;
}



/* Entry: 000525f4; end: 00052613; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey bodyKey] */

void FUN_000525f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79646f62,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00052614; end: 00052643; +[_TtC26UnifiedNotificationDefines28NotificationServerPayloadKey revokeType] */

void FUN_00052614(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x745f656b6f766572,0xeb00000000657079);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}


