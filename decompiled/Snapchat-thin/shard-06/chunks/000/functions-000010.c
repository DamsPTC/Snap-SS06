/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104398df4; end: 104398ecb; -[_TtC18PlusSubscribeScope18PlusSubscribeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104398df4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073c58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073c60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073c68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073c70));
  param_1 = param_1 + _DAT_113073c78;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104398ecc; end: 104399057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104398ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = param_1;
  uVar7 = param_2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar2);
  FUN_10439b838(0);
  _objc_allocWithZone();
  FUN_10439b664(lVar3,uVar7);
  lVar4 = lVar3;
  func_0x000100334510();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113073c78;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073c78,0);
  *(long *)(lVar5 + _DAT_113073c58) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113073c60) = param_2;
  *(long *)(lVar5 + _DAT_113073c68) = lVar3;
  *(undefined8 *)(lVar5 + _DAT_113073c70) = param_5;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_3);
  *(undefined8 *)(lVar5 + _DAT_113073c80) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_5);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 104399058; end: 10439911f; -[_TtC18PlusSubscribeScope26PlusSubscribeScopeServices buildWithUIContainer:loggingContext:delegate:presentationType:context:] */

void FUN_104399058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104398ecc(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104399120; end: 1043991fb; -[_TtC18PlusSubscribeScope26PlusSubscribeScopeServices buildWithUIContainer:sourcePageType:delegate:] */

void FUN_104399120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_10439c014(0);
  _objc_allocWithZone();
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  func_0x00010439b9d8(param_4,0,0,0xffffffffffffffff,0,0,0xffffffffffffffff,0);
  uVar1 = param_1;
  func_0x00010bf23e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043991fc; end: 10439925b; -[_TtC18PlusSubscribeScope26PlusSubscribeScopeServices init] */

void FUN_1043991fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlusSubscribeScope.PlusSubscribeScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104399228);
  (*pcVar1)();
}



/* Entry: 10439925c; end: 10439927b; -[_TtC18PlusSubscribeScope26PlusSubscribeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439925c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073c90));
  return;
}



/* Entry: 10439927c; end: 1043996a7;  */

long FUN_10439927c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043996a8; end: 10439977b;  */

void FUN_1043996a8(void)

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



/* Entry: 10439977c; end: 10439979b;  */

void FUN_10439977c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10439979c; end: 1043997cf;  */

undefined8 FUN_10439979c(undefined8 param_1)

{
  (*(code *)(undefined *)0x104399338)();
  return param_1;
}



/* Entry: 1043997d0; end: 104399807; -[SCPlusSubscribeScopeContext description] */

void FUN_1043997d0(void)

{
  undefined1 auStack_58 [72];
  
  _objc_retain();
  FUN_104399e3c(auStack_58);
  FUN_10439979c(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104399808; end: 10439984f; -[SCPlusSubscribeScopeContext init] */

void FUN_104399808(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusSubscribeScope/PlusSubscribeScopeContextWrapper.swift",0x39,2,0x66,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104399850);
  (*pcVar1)();
}



/* Entry: 104399850; end: 104399857; -[SCPlusSubscribeScopeContext copyWithZone:] */

void FUN_104399850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104399858; end: 104399863; +[SCPlusSubscribeScopeContext referralWithReferralId:] */

void FUN_104399858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_10439a0c8();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104399864; end: 10439987b;  */

void FUN_104399864(void)

{
  FUN_10439a3a4(1);
  return;
}



/* Entry: 10439987c; end: 1043998ab; +[SCPlusSubscribeScopeContext adFree] */

void FUN_10439987c(void)

{
  FUN_10439a3a4(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043998ac; end: 1043998c3; +[SCPlusSubscribeScopeContext family] */

void FUN_1043998ac(void)

{
  FUN_10439a3a4(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043998c4; end: 1043998c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043998c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10439a550();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113073ce8) = 3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(char *)(lVar3 + _DAT_113073cf8) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d20) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043998c8; end: 1043998df; +[SCPlusSubscribeScopeContext lensPassWithPresentManagementPage:] */

void FUN_1043998c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10439a1a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043998e0; end: 1043998e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043998e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_10439a550();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113073ce8) = 4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113073cf8) = 2;
  plVar2 = (long *)(lVar5 + _DAT_113073d00);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d10);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_113073d18) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113073d20) = param_8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1043998e4; end: 1043999e7; +[SCPlusSubscribeScopeContext buddyPassWithBuddyPassId:senderId:receiverId:createdTimeMs:expiresTimeMs:] */

void FUN_1043998e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

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
    param_4 = 0;
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_10439a270(param_3,uVar2,param_4,uVar1,param_5,param_2,param_6,param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043999e8; end: 104399a17; +[SCPlusSubscribeScopeContext renew] */

void FUN_1043999e8(void)

{
  FUN_10439a3a4(5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104399a18; end: 104399a2f; +[SCPlusSubscribeScopeContext storage] */

void FUN_104399a18(void)

{
  FUN_10439a3a4(6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104399a30; end: 104399a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104399a30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10439a550();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113073ce8) = 7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113073cf8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d20) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113073d28);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 104399a34; end: 104399a3f; +[SCPlusSubscribeScopeContext snapPassWithCampaignUuid:] */

void FUN_104399a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_10439a46c();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104399a40; end: 104399bd3;  */

void FUN_104399a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104399bd4; end: 104399c9b; -[SCPlusSubscribeScopeContext matchReferral:adFree:family:lensPass:buddyPass:renew:storage:snapPass:] */

void FUN_104399bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000104399a7c(FUN_10439a718,auStack_40,0x10439a71c,auStack_60,FUN_10439a798,auStack_80,
                      0x10439a728,auStack_a0,FUN_10439a73c,auStack_c0,0x10439a79c,auStack_e0,
                      0x10439a7a0,auStack_100,0x10439a7a4,auStack_120);
  _objc_release(param_1);
  return;
}



/* Entry: 104399c9c; end: 104399d5b;  */

void FUN_104399c9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar2 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar2 = param_3;
  }
  uVar1 = 0;
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uVar1 = param_5;
  }
  (**(code **)(param_9 + 0x10))(param_9,param_1,uVar2,uVar1,param_7,param_8);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104399d5c; end: 104399d8f;  */

void FUN_104399d5c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104399d90; end: 104399e2b; -[SCPlusSubscribeScopeContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104399d90(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073cf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073d00 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073d08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073d10 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073d18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073d20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073d28 + 8))
  ;
  return;
}



/* Entry: 104399e2c; end: 104399e3b;  */

ulong FUN_104399e2c(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 104399e3c; end: 10439a0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104399e3c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  
  bVar2 = *(byte *)(param_2 + _DAT_113073ce8);
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar7 = ((ulong *)(param_2 + _DAT_113073cf0))[1];
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10439a0c0);
          (*pcVar3)();
        }
        unaff_x22 = *(ulong *)(param_2 + _DAT_113073cf0);
        _swift_bridgeObjectRetain(uVar7);
        _objc_release(param_2);
        uVar6 = 0;
        uVar4 = (uint)unaff_x22 & 0xff;
        uVar5 = unaff_x22 & 0xffffffffffffff00;
      }
      else {
        _objc_release();
        uVar7 = 0;
        unaff_x26 = 0;
        unaff_x27 = 0;
        unaff_x22 = 0;
        unaff_x23 = 0;
        unaff_x24 = 0;
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 4;
        param_2 = 0;
      }
    }
    else if (bVar2 == 2) {
      _objc_release();
      uVar7 = 0;
      unaff_x26 = 0;
      unaff_x27 = 0;
      unaff_x22 = 0;
      unaff_x23 = 0;
      unaff_x24 = 0;
      uVar5 = 0;
      uVar4 = 1;
      uVar6 = 4;
      param_2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_2 + _DAT_113073cf8);
      uVar7 = (ulong)bVar2;
      if (bVar2 == 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10439a0c4);
        (*pcVar3)();
      }
      _objc_release();
      uVar5 = 0;
      uVar4 = bVar2 & 1;
      uVar6 = 1;
      param_2 = unaff_x21;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      uVar5 = *(ulong *)(param_2 + _DAT_113073d00);
      uVar7 = ((ulong *)(param_2 + _DAT_113073d00))[1];
      unaff_x26 = *(ulong *)(param_2 + _DAT_113073d08);
      uVar1 = ((ulong *)(param_2 + _DAT_113073d08))[1];
      unaff_x27 = *(ulong *)(param_2 + _DAT_113073d10);
      unaff_x22 = ((ulong *)(param_2 + _DAT_113073d10))[1];
      unaff_x23 = *(ulong *)(param_2 + _DAT_113073d18);
      unaff_x24 = *(ulong *)(param_2 + _DAT_113073d20);
      _objc_retain(unaff_x24);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(unaff_x22);
      _objc_retain(unaff_x23);
      _objc_release(param_2);
      uVar4 = (uint)uVar5 & 0xff;
      uVar5 = uVar5 & 0xffffffffffffff00;
      uVar6 = 2;
      param_2 = uVar1;
    }
    else {
      _objc_release();
      uVar7 = 0;
      unaff_x26 = 0;
      param_2 = 0;
      unaff_x27 = 0;
      unaff_x22 = 0;
      unaff_x23 = 0;
      unaff_x24 = 0;
      uVar5 = 0;
      uVar4 = 2;
      uVar6 = 4;
    }
  }
  else if (bVar2 == 6) {
    _objc_release();
    uVar7 = 0;
    unaff_x26 = 0;
    param_2 = 0;
    unaff_x27 = 0;
    unaff_x22 = 0;
    unaff_x23 = 0;
    unaff_x24 = 0;
    uVar5 = 0;
    uVar4 = 3;
    uVar6 = 4;
  }
  else {
    uVar7 = ((ulong *)(param_2 + _DAT_113073d28))[1];
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10439a0c8);
      (*pcVar3)();
    }
    unaff_x22 = *(ulong *)(param_2 + _DAT_113073d28);
    _swift_bridgeObjectRetain(uVar7);
    _objc_release(param_2);
    uVar4 = (uint)unaff_x22 & 0xff;
    uVar5 = unaff_x22 & 0xffffffffffffff00;
    uVar6 = 3;
  }
  *param_1 = uVar5 | uVar4;
  param_1[1] = uVar7;
  param_1[2] = unaff_x26;
  param_1[3] = param_2;
  param_1[4] = unaff_x27;
  param_1[5] = unaff_x22;
  param_1[6] = unaff_x23;
  param_1[7] = unaff_x24;
  *(undefined1 *)(param_1 + 8) = uVar6;
  return;
}



/* Entry: 10439a0c8; end: 10439a1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439a0c8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10439a550();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113073ce8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_113073cf0);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_113073cf8) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113073d00);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113073d08);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113073d10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d20) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113073d28);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 10439a1a8; end: 10439a26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439a1a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10439a550();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113073ce8) = 3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(char *)(lVar3 + _DAT_113073cf8) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d20) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439a270; end: 10439a3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439a270(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_10439a550();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113073ce8) = 4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113073cf8) = 2;
  plVar2 = (long *)(lVar5 + _DAT_113073d00);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d10);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_113073d18) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113073d20) = param_8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 10439a3a4; end: 10439a46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439a3a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10439a550();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(char *)(lVar3 + _DAT_113073ce8) = (char)param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar3 + _DAT_113073cf8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar3 + _DAT_113073d20) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439a46c; end: 10439a54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439a46c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10439a550();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113073ce8) = 7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113073cf8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073d10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d18) = 0;
  *(undefined8 *)(lVar5 + _DAT_113073d20) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113073d28);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 10439a550; end: 10439a56f;  */

void FUN_10439a550(void)

{
  _objc_opt_self(&PTR_PTR_1129a83a0);
  return;
}



/* Entry: 10439a570; end: 10439a6d7;  */

int FUN_10439a570(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10439a5ec;
        goto LAB_10439a5d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10439a5d0:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_10439a5ec:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10439a6d8; end: 10439a717;  */

void FUN_10439a6d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113073d58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf3c54;
  _swift_getWitnessTable(&UNK_10dcf3c54,&UNK_110763598);
  puRam0000000113073d58 = puVar1;
  return;
}



/* Entry: 10439a718; end: 10439a73b;  */

void FUN_10439a718(undefined8 param_1)

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



/* Entry: 10439a73c; end: 10439a75f;  */

void FUN_10439a73c(void)

{
  FUN_104399c9c();
  return;
}



/* Entry: 10439a760; end: 10439a797;  */

void FUN_10439a760(undefined8 param_1)

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



/* Entry: 10439a798; end: 10439a7a7;  */

void FUN_10439a798(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010439a724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10439a7a8; end: 10439b2a7;  */

int FUN_10439a7a8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10439b2a8; end: 10439b2bb;  */

bool FUN_10439b2a8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10439b2bc; end: 10439b393;  */

void FUN_10439b2bc(void)

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



/* Entry: 10439b394; end: 10439b3b3;  */

void FUN_10439b394(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10439b3b4; end: 10439b3f3;  */

void FUN_10439b3b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113073d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf3db0;
  _swift_getWitnessTable(&UNK_10dcf3db0,&UNK_1107638b8);
  puRam0000000113073d68 = puVar1;
  return;
}



/* Entry: 10439b3f4; end: 10439b403;  */

undefined1  [16] FUN_10439b3f4(void)

{
  return ZEXT816(0x1107638b8);
}



/* Entry: 10439b404; end: 10439b413; -[SCCreatorSubscriptionLoggingContext sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439b404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073d70);
}



/* Entry: 10439b414; end: 10439b42b; -[SCCreatorSubscriptionLoggingContext sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439b414(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073d78);
}



/* Entry: 10439b42c; end: 10439b557; -[SCCreatorSubscriptionLoggingContext initWithSourcePageType:sourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113073d70) = param_3;
  *(undefined8 *)(param_1 + _DAT_113073d78) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439b558; end: 10439b55b; -[SCCreatorSubscriptionLoggingContext copyWithZone:] */

void FUN_10439b558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439b55c; end: 10439b577; -[SCCreatorSubscriptionLoggingContext description] */

void FUN_10439b55c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439b578; end: 10439b613; -[SCCreatorSubscriptionLoggingContext init] */

void FUN_10439b578(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusScopeModels/CreatorSubscriptionLoggingContextWrapper.swift",0x3e,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439b5c0);
  (*pcVar1)();
}



/* Entry: 10439b614; end: 10439b617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b614(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073d78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439b618; end: 10439b663; -[SCPlusFunnelLoggingContext funnelSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b618(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113073da8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113073da8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439b664; end: 10439b66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b664(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073da8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439b66c; end: 10439b787; -[SCPlusFunnelLoggingContext initWithFunnelSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113073da8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439b788; end: 10439b78b; -[SCPlusFunnelLoggingContext copyWithZone:] */

void FUN_10439b788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439b78c; end: 10439b7a7; -[SCPlusFunnelLoggingContext description] */

void FUN_10439b78c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439b7a8; end: 10439b823; -[SCPlusFunnelLoggingContext init] */

void FUN_10439b7a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusScopeModels/SCPlusFunnelLoggingContextWrapper.swift",0x37,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439b7f0);
  (*pcVar1)();
}



/* Entry: 10439b824; end: 10439b837; -[SCPlusFunnelLoggingContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073da8 + 8))
  ;
  return;
}



/* Entry: 10439b838; end: 10439b857;  */

void FUN_10439b838(void)

{
  _objc_opt_self(&PTR_PTR_1129a8570);
  return;
}



/* Entry: 10439b858; end: 10439b85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b858(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073da8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439b85c; end: 10439b86b; -[SCPlusLoggingContext sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439b85c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073dd8);
}



/* Entry: 10439b86c; end: 10439b877; -[SCPlusLoggingContext sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b86c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073de0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073de0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439b878; end: 10439b887; -[SCPlusLoggingContext sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439b878(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073de8);
}



/* Entry: 10439b888; end: 10439b893; -[SCPlusLoggingContext sourceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b888(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073df0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073df0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439b894; end: 10439b8eb;  */

void FUN_10439b894(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10439b8ec; end: 10439b8fb; -[SCPlusLoggingContext sourceFeatureType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439b8ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073df8);
}



/* Entry: 10439b8fc; end: 10439b90b; -[SCPlusLoggingContext lensContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073e00));
  return;
}



/* Entry: 10439b90c; end: 10439baa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439b90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073dd8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073de0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073de8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073df0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113073df8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113073e00) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439baa4; end: 10439bbab; -[SCPlusLoggingContext initWithSourcePageType:sourcePageSessionId:sourceType:sourceId:sourceFeatureType:lensContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439baa4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113073dd8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113073de0);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_113073de8) = param_5;
  plVar1 = (long *)(param_1 + _DAT_113073df0);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113073df8) = param_7;
  *(undefined8 *)(param_1 + _DAT_113073e00) = param_8;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 10439bbac; end: 10439bc1b;  */

undefined8 FUN_10439bbac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10439bd20(param_1);
  FUN_10439bee8(param_1);
  return uVar1;
}



/* Entry: 10439bc1c; end: 10439bc1f; -[SCPlusLoggingContext copyWithZone:] */

void FUN_10439bc1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439bc20; end: 10439bc53; -[SCPlusLoggingContext description] */

void FUN_10439bc20(void)

{
  undefined1 auStack_a8 [152];
  
  FUN_10439bf1c(auStack_a8);
  FUN_10439bee8(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439bc54; end: 10439bccf; -[SCPlusLoggingContext init] */

void FUN_10439bc54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusScopeModels/SCPlusLoggingContextWrapper.swift",0x31,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439bc9c);
  (*pcVar1)();
}



/* Entry: 10439bcd0; end: 10439bd1f; -[SCPlusLoggingContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439bcd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073de0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073df0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073e00));
  return;
}



/* Entry: 10439bd20; end: 10439bee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439bd20(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  undefined1 auStack_190 [96];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
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
  *(undefined8 *)(unaff_x20 + _DAT_113073dd8) = *param_1;
  uStack_108 = param_1[2];
  uStack_110 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073de0);
  puVar1[1] = uStack_108;
  *puVar1 = uStack_110;
  *(undefined8 *)(unaff_x20 + _DAT_113073de8) = param_1[3];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073df0);
  puVar1[1] = uStack_118;
  *puVar1 = uStack_120;
  *(undefined8 *)(unaff_x20 + _DAT_113073df8) = param_1[6];
  lStack_98 = param_1[8];
  uStack_a0 = param_1[7];
  uStack_88 = param_1[10];
  uStack_90 = param_1[9];
  uStack_78 = param_1[0xc];
  uStack_80 = param_1[0xb];
  uStack_68 = param_1[0xe];
  uStack_70 = param_1[0xd];
  uStack_58 = param_1[0x10];
  uStack_60 = param_1[0xf];
  uStack_48 = param_1[0x12];
  uStack_50 = param_1[0x11];
  if (lStack_98 == 1) {
    FUN_10439c034(&uStack_110,&uStack_100,0x112d35ff8,&UNK_10d900cd0);
    FUN_10439c034(&uStack_120,&uStack_100,0x112d35ff8,&UNK_10d900cd0);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_d8 = param_1[0xc];
    uStack_e0 = param_1[0xb];
    uStack_c8 = param_1[0xe];
    uStack_d0 = param_1[0xd];
    uStack_b8 = param_1[0x10];
    uStack_c0 = param_1[0xf];
    uStack_a8 = param_1[0x12];
    uStack_b0 = param_1[0x11];
    uStack_f8 = param_1[8];
    uStack_100 = param_1[7];
    uStack_e8 = param_1[10];
    uStack_f0 = param_1[9];
    FUN_10439c8f8(0);
    _objc_allocWithZone();
    FUN_10439c034(&uStack_110,auStack_190,0x112d35ff8,&UNK_10d900cd0);
    FUN_10439c034(&uStack_120,auStack_190,0x112d35ff8,&UNK_10d900cd0);
    FUN_10439c034(&uStack_a0,auStack_190,0x113073d60,&UNK_10dcf3d60);
    puVar1 = &uStack_100;
    FUN_10439c6bc();
    func_0x00010439c07c(&uStack_a0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_113073e00) = puVar1;
  _objc_msgSendSuper2(&stack0xfffffffffffffed0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439bee8; end: 10439bf1b;  */

undefined8 FUN_10439bee8(undefined8 param_1)

{
  (*(code *)(undefined *)0x10439a940)();
  return param_1;
}



/* Entry: 10439bf1c; end: 10439c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439bf1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_113073dd8);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113073de0);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113073de0))[1];
  uVar6 = *(undefined8 *)(param_2 + _DAT_113073de8);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113073df0);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113073df0))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_113073df8);
  if (*(long *)(param_2 + _DAT_113073e00) == 0) {
    uStack_a8 = 1;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    FUN_10439c818(&uStack_b0);
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar6;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = uVar7;
  param_1[8] = uStack_a8;
  param_1[7] = uStack_b0;
  param_1[10] = uStack_98;
  param_1[9] = uStack_a0;
  param_1[0xc] = uStack_88;
  param_1[0xb] = uStack_90;
  param_1[0xe] = uStack_78;
  param_1[0xd] = uStack_80;
  param_1[0x10] = uStack_68;
  param_1[0xf] = uStack_70;
  param_1[0x12] = uStack_58;
  param_1[0x11] = uStack_60;
  _swift_bridgeObjectRetain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar4);
  return;
}



/* Entry: 10439c014; end: 10439c033;  */

void FUN_10439c014(void)

{
  _objc_opt_self(&PTR_PTR_1129a8638);
  return;
}



/* Entry: 10439c034; end: 10439c103;  */

undefined8 FUN_10439c034(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10439c104; end: 10439c10f; -[SCPlusLoggingLensContext categoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c104(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073e30))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073e30);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439c110; end: 10439c11b; -[SCPlusLoggingLensContext rankingRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c110(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073e38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073e38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439c11c; end: 10439c12b; -[SCPlusLoggingLensContext itemPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c11c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073e40));
  return;
}



/* Entry: 10439c12c; end: 10439c13b; -[SCPlusLoggingLensContext isFreemium] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10439c12c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073e48);
}



/* Entry: 10439c13c; end: 10439c147; -[SCPlusLoggingLensContext freemiumGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c13c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073e50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073e50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439c148; end: 10439c153; -[SCPlusLoggingLensContext source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c148(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073e58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073e58);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439c154; end: 10439c15f; -[SCPlusLoggingLensContext lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c154(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113073e60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113073e60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439c160; end: 10439c1b7;  */

void FUN_10439c160(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10439c1b8; end: 10439c3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e30);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113073e40) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113073e48) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e50);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e58);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e60);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439c3b8; end: 10439c57b; -[SCPlusLoggingLensContext initWithCategoryId:rankingRequestId:itemPosition:isFreemium:freemiumGroup:source:lensSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c3b8(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined1 param_6,long param_7,long param_8,long param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lStack_90 = 0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_90 = param_2;
    lStack_88 = param_3;
  }
  if (param_4 == 0) {
    lStack_98 = 0;
    lVar6 = 0;
    param_4 = lStack_98;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = param_2;
  }
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  lVar4 = param_9;
  _objc_retain();
  if (lVar3 == 0) {
    param_8 = 0;
    lVar3 = 0;
    lVar5 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (lVar4 == 0) {
    param_9 = 0;
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_113073e30);
  *plVar1 = lStack_88;
  plVar1[1] = lStack_90;
  plVar1 = (long *)(param_1 + _DAT_113073e38);
  *plVar1 = param_4;
  plVar1[1] = lVar6;
  *(undefined8 *)(param_1 + _DAT_113073e40) = param_5;
  *(undefined1 *)(param_1 + _DAT_113073e48) = param_6;
  plVar1 = (long *)(param_1 + _DAT_113073e50);
  *plVar1 = param_7;
  plVar1[1] = lVar7;
  plVar1 = (long *)(param_1 + _DAT_113073e58);
  *plVar1 = param_8;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113073e60);
  *plVar1 = param_9;
  plVar1[1] = lVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439c57c; end: 10439c57f; -[SCPlusLoggingLensContext copyWithZone:] */

void FUN_10439c57c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439c580; end: 10439c5b3; -[SCPlusLoggingLensContext description] */

void FUN_10439c580(void)

{
  undefined1 auStack_70 [96];
  
  FUN_10439c818(auStack_70);
  func_0x00010439ad24(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439c5b4; end: 10439c62f; -[SCPlusLoggingLensContext init] */

void FUN_10439c5b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PlusScopeModels/SCPlusLoggingLensContextWrapper.swift",0x35,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439c5fc);
  (*pcVar1)();
}



/* Entry: 10439c630; end: 10439c6bb; -[SCPlusLoggingLensContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c630(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073e30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073e38 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073e40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073e50 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073e58 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073e60 + 8))
  ;
  return;
}



/* Entry: 10439c6bc; end: 10439c817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c6bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e30);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e38);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113073e40) = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_113073e48) = *(undefined1 *)(param_1 + 5);
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uVar4 = param_1[6];
  uVar3 = param_1[9];
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e50);
  puVar1[1] = param_1[7];
  *puVar1 = uVar4;
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e58);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073e60);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  FUN_10439c918(&uStack_40,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10439c918(&uStack_50,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10439c918(&uStack_58,auStack_a0,0x112dc3de0,&UNK_10d9813c0);
  FUN_10439c918(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10439c918(&uStack_80,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10439c918(&uStack_90,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}


