/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044ba958; end: 1044baa1b; -[SCStoriesSnapPlaybackTimeInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ba958(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  
  lVar2 = 0;
  FUN_1044a8f6c();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar1);
  *puVar4 = *(undefined8 *)(param_1 + _DAT_11307f828);
  (&stack0xffffffffffffffd8)[lVar1] = *(undefined1 *)(param_1 + _DAT_11307f830);
  func_0x0001009f0578(param_1 + _DAT_113813b18,
                      (undefined1 *)((long)puVar4 + (long)*(int *)(lVar3 + 0x18)));
  func_0x0001009f0578(param_1 + _DAT_113813b20,
                      (undefined1 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x1c)));
  FUN_1044ba918(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044baa1c; end: 1044baa97; -[SCStoriesSnapPlaybackTimeInfo init] */

void FUN_1044baa1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackTimeInfoWrapper.swift",0x44,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044baa64);
  (*pcVar1)();
}



/* Entry: 1044baa98; end: 1044baacf; -[SCStoriesSnapPlaybackTimeInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001044baab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044baab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044baa98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113813b18;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1044baad0; end: 1044baad7;  */

void FUN_1044baad0(void)

{
  if (lRam000000011307f860 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e80d064);
  return;
}



/* Entry: 1044baad8; end: 1044bab0f;  */

void FUN_1044baad8(undefined8 param_1)

{
  if (lRam000000011307f860 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80d064);
  return;
}



/* Entry: 1044bab10; end: 1044bab93;  */

void FUN_1044bab10(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dd0a6a0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044bab94; end: 1044baba3; -[SCStoriesSnapPlaybackViewStatus isViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044bab94(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f870);
}



/* Entry: 1044baba4; end: 1044babb7; -[SCStoriesSnapPlaybackViewStatus viewedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044baba4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307f878);
}



/* Entry: 1044babb8; end: 1044bac1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044babb8(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307f870) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f878) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044bac1c; end: 1044bac7f; -[SCStoriesSnapPlaybackViewStatus initWithIsViewed:viewedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bac1c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_11307f870) = param_4;
  *(undefined8 *)(param_2 + _DAT_11307f878) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044bac80; end: 1044bac83; -[SCStoriesSnapPlaybackViewStatus copyWithZone:] */

void FUN_1044bac80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044bac84; end: 1044bac9f; -[SCStoriesSnapPlaybackViewStatus description] */

void FUN_1044bac84(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044baca0; end: 1044bad3b; -[SCStoriesSnapPlaybackViewStatus init] */

void FUN_1044baca0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackViewStatusWrapper.swift",0x46,2,0x26,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044bace8);
  (*pcVar1)();
}



/* Entry: 1044bad3c; end: 1044bad3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bad3c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307f870) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307f878) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044bad40; end: 1044bae13;  */

void FUN_1044bad40(void)

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



/* Entry: 1044bae14; end: 1044bae33;  */

void FUN_1044bae14(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044bae34; end: 1044bae67; -[SCStoriesSnapPlaybackAttributes description] */

void FUN_1044bae34(void)

{
  undefined1 auStack_78 [104];
  
  func_0x0001044bd150(auStack_78);
  FUN_1044a620c(auStack_78);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044bae68; end: 1044baeaf; -[SCStoriesSnapPlaybackAttributes init] */

void FUN_1044bae68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesSnapPlaybackAttributesWrapper.swift",0x46,2,0xde,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044baeb0);
  (*pcVar1)();
}



/* Entry: 1044baeb0; end: 1044baeb3; -[SCStoriesSnapPlaybackAttributes copyWithZone:] */

void FUN_1044baeb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044baeb4; end: 1044baf27; +[SCStoriesSnapPlaybackAttributes userStoryWithUserStoryType:boostMetadata:spotlightEngagementMetadata:] */

void FUN_1044baeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  FUN_1044bd678(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044baf28; end: 1044baf83; +[SCStoriesSnapPlaybackAttributes customStoryWithType:publicationId:] */

void FUN_1044baf28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  func_0x0001044bd8dc(param_3,param_4,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044baf84; end: 1044bb04b; +[SCStoriesSnapPlaybackAttributes ourStoryWithOurStoryId:ourStorySnapId:isSpotlightSnap:spotlightSnapStatus:spotlightEngagementMetadata:] */

void FUN_1044baf84(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar2 = param_7;
  _objc_retain(param_7);
  FUN_1044bdb38(param_3,uVar1,param_4,param_2,param_5,param_6,param_7);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044bb04c; end: 1044bb1e3; +[SCStoriesSnapPlaybackAttributes topicStoryWithSnapId:originalStoryId:sharedStorySubmissionId:topicId:topicStoryId:boostMetadata:spotlightEngagementMetadata:] */

void FUN_1044bb04c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_70 = param_3;
    uStack_68 = param_2;
  }
  if (param_4 == 0) {
    uStack_78 = 0;
    uVar2 = 0;
    param_4 = uStack_78;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar6 = param_2;
  }
  lVar3 = param_6;
  _objc_retain();
  lVar4 = param_7;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar3 == 0) {
    param_6 = 0;
    uVar1 = 0;
    uVar5 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    uVar5 = param_2;
    _objc_release(lVar3);
    uVar1 = param_2;
  }
  if (lVar4 == 0) {
    param_7 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  FUN_1044bddc4(uStack_70,uStack_68,param_4,uVar2,param_5,uVar6,param_6,uVar1,param_7,uVar5,param_8,
                param_9);
  _objc_release(param_8);
  _objc_release(param_9);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_70);
  return;
}



/* Entry: 1044bb1e4; end: 1044bb31b; +[SCStoriesSnapPlaybackAttributes singleSnapStoryWithStoryId:compositeStoryId:sharedStorySubmissionId:boostMetadata:spotlightEngagementMetadata:inChatContextParams:isShared:] */

void FUN_1044bb1e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9)

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
  _objc_retain();
  func_0x0001044be094(param_3,uVar2,param_4,uVar1,param_5,param_2,param_6,param_7,param_8,param_9);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_8);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044bb31c; end: 1044bb407; +[SCStoriesSnapPlaybackAttributes mapStoryWithStoryId:userStoryType:isProviderPhotoSnap:localitySubtitle:boostMetadata:spotlightEngagementMetadata:] */

void FUN_1044bb31c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  uVar2 = param_7;
  _objc_retain(param_7);
  uVar3 = param_8;
  _objc_retain(param_8);
  func_0x0001044be358(param_3,uVar1,param_4,param_5,param_6,param_2,param_7,param_8);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044bb408; end: 1044bb4b7; +[SCStoriesSnapPlaybackAttributes savedStoryWithCompositeStoryId:businessId:boostMetadata:] */

void FUN_1044bb408(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  uVar2 = param_5;
  _objc_retain(param_5);
  FUN_1044be5fc(param_3,uVar1,param_4,param_2,param_5);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044bb4b8; end: 1044bb7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bb4b8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined8 param_10,code *param_11,undefined8 param_12,code *param_13,
                  undefined8 param_14)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 in_stack_ffffffffffffffc8;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11307f8a8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307f9a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7cc);
        (*pcVar2)();
      }
      (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11307f9a0),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f9a8),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f9b0));
    }
    else if (bVar1 == 1) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307f990) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7d0);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307f990),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f998),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f998))[1]);
    }
    else {
      if (*(byte *)(unaff_x20 + _DAT_11307f978) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7d8);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307f980) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7e4);
        (*pcVar2)();
      }
      (*param_5)(param_6,*(undefined8 *)(unaff_x20 + _DAT_11307f968),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f968))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f970),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f970))[1],
                 *(byte *)(unaff_x20 + _DAT_11307f978) & 1,
                 *(undefined8 *)(unaff_x20 + _DAT_11307f980),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f988));
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_11307f930),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f930))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f938),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f938))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f940),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f940))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f948),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f948))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f950),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f950))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f958),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f960));
    }
    else {
      if (*(char *)(unaff_x20 + _DAT_11307f928) == '\x02') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7dc);
        (*pcVar2)();
      }
      (*param_9)(param_10,*(undefined8 *)(unaff_x20 + _DAT_11307f8f8),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f8f8))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f900),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f900))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f908),
                 ((undefined8 *)(unaff_x20 + _DAT_11307f908))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_11307f910),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f918),
                 *(undefined8 *)(unaff_x20 + _DAT_11307f920),
                 CONCAT71((int7)((ulong)in_stack_ffffffffffffffc8 >> 8),
                          *(char *)(unaff_x20 + _DAT_11307f928)) & 0xffffffffffffff01);
    }
  }
  else if (bVar1 == 5) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307f8d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7d4);
      (*pcVar2)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11307f8d8) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044bb7e0);
      (*pcVar2)();
    }
    (*param_11)(param_12,*(undefined8 *)(unaff_x20 + _DAT_11307f8c8),
                ((undefined8 *)(unaff_x20 + _DAT_11307f8c8))[1],
                *(undefined8 *)(unaff_x20 + _DAT_11307f8d0),
                *(byte *)(unaff_x20 + _DAT_11307f8d8) & 1,
                *(undefined8 *)(unaff_x20 + _DAT_11307f8e0),
                ((undefined8 *)(unaff_x20 + _DAT_11307f8e0))[1],
                *(undefined8 *)(unaff_x20 + _DAT_11307f8e8),
                *(undefined8 *)(unaff_x20 + _DAT_11307f8f0));
  }
  else {
    (*param_13)(param_14,*(undefined8 *)(unaff_x20 + _DAT_11307f8b0),
                ((undefined8 *)(unaff_x20 + _DAT_11307f8b0))[1],
                *(undefined8 *)(unaff_x20 + _DAT_11307f8b8),
                ((undefined8 *)(unaff_x20 + _DAT_11307f8b8))[1],
                *(undefined8 *)(unaff_x20 + _DAT_11307f8c0));
  }
  return;
}



/* Entry: 1044bb7e4; end: 1044bb897; -[SCStoriesSnapPlaybackAttributes matchUserStory:customStory:ourStory:topicStory:singleSnapStory:mapStory:savedStory:] */

void FUN_1044bb7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
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
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1044bb4b8(FUN_1044bea44,auStack_40,0x1044bea5c,auStack_60,0x1044bea64,auStack_80,FUN_1044bea6c
                ,auStack_a0,0x1044beaa0,auStack_c0,0x1044bead4,auStack_e0,FUN_1044beaf8,auStack_100)
  ;
  _objc_release(param_1);
  return;
}



/* Entry: 1044bb898; end: 1044bb8f3;  */

void FUN_1044bb898(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1044bb8f4; end: 1044bb993;  */

void FUN_1044bb8f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  (**(code **)(param_8 + 0x10))(param_8,param_1,uVar1,param_5 & 1,param_6,param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044bb994; end: 1044bbb8f;  */

void FUN_1044bb994(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10,undefined8 param_11,undefined8 param_12,long param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  uVar3 = 0;
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uVar3 = param_5;
  }
  uVar2 = 0;
  if (param_8 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
    uVar2 = param_7;
  }
  if (param_10 == 0) {
    param_9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_9,param_10);
  }
  (**(code **)(param_13 + 0x10))(param_13,param_1,uVar1,uVar3,uVar2,param_9,param_11,param_12);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 1044bbb90; end: 1044bbc37;  */

void FUN_1044bbb90(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uVar1 = param_5;
  }
  (**(code **)(param_9 + 0x10))(param_9,param_1,param_3,param_4 & 1,uVar1,param_7,param_8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044bbc38; end: 1044bbcbf;  */

void FUN_1044bbc38(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,uVar1,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1044bbcc0; end: 1044bbcf3;  */

void FUN_1044bbcc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044bbcf4; end: 1044bbee7; -[SCStoriesSnapPlaybackAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bbcf4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f9a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f9b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f998 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f968 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f970 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f988));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f930 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f938 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f940 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f948 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f950 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f958));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f960));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f8f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f900 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f908 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f910));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f918));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f920));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f8c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f8e0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f8e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307f8f0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f8b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307f8b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307f8c0));
  return;
}



/* Entry: 1044bbee8; end: 1044bd667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_1044bbee8(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined7 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  uVar3 = *param_1;
  uVar17 = param_1[1];
  uVar22 = param_1[2];
  pbVar2 = (byte *)(param_1 + 3);
  bVar5 = *pbVar2;
  uVar20 = *(undefined8 *)pbVar2;
  uVar13 = *(undefined8 *)pbVar2;
  uVar21 = *(undefined8 *)pbVar2;
  uVar11 = *(undefined8 *)pbVar2;
  bVar6 = *(byte *)(param_1 + 4);
  uVar23 = param_1[5];
  uVar19 = param_1[6];
  bVar7 = *(byte *)(param_1 + 0xc);
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      puVar15 = param_1;
      FUN_1044be87c();
      puVar16 = puVar15;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
      *puVar1 = uVar3;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = uVar17;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = uVar22;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f978) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f988) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f940);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f958) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f960) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f908);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f910) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f918) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f920) = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f928) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)puVar16 + _DAT_11307f8d8) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8e0);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = 0;
      puVar12 = PTR_s_init_1125d9248;
      puStack_d8 = puVar16;
      puStack_d0 = puVar15;
      _objc_retain(uVar17);
      _objc_retain(uVar22);
      _objc_retain(uVar17);
      _objc_retain(uVar22);
      ppuVar18 = &puStack_d8;
      _objc_msgSendSuper2(ppuVar18,puVar12);
      FUN_1044a620c(param_1);
      _objc_release(uVar17);
    }
    else {
      if (bVar7 == 1) {
        FUN_1044be87c();
        puVar15 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar15 + _DAT_11307f8a8) = 1;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f9a0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar15 + _DAT_11307f9a8) = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f9b0) = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f990);
        *puVar1 = uVar3;
        *(undefined1 *)(puVar1 + 1) = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f998);
        *puVar1 = uVar17;
        puVar1[1] = uVar22;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f968);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f970);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)((long)puVar15 + _DAT_11307f978) = 2;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f980);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar15 + _DAT_11307f988) = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f930);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f938);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f940);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f948);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f950);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f958) = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f960) = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8f8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f900);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f908);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f910) = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f918) = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f920) = 0;
        *(undefined1 *)((long)puVar15 + _DAT_11307f928) = 2;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8c8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8d0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)puVar15 + _DAT_11307f8d8) = 2;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8e0);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f8e8) = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f8f0) = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8b0);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar15 + _DAT_11307f8b8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar15 + _DAT_11307f8c0) = 0;
        ppuVar18 = &puStack_c8;
        puStack_c8 = puVar15;
        puStack_c0 = param_1;
        _objc_msgSendSuper2(ppuVar18,PTR_s_init_1125d9248);
        return ppuVar18;
      }
      puVar15 = param_1;
      FUN_1044be87c();
      puVar16 = puVar15;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
      *puVar1 = uVar3;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
      *puVar1 = uVar22;
      puVar1[1] = uVar21;
      *(byte *)((long)puVar16 + _DAT_11307f978) = bVar6 & 1;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
      *puVar1 = uVar23;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f988) = uVar19;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f940);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f958) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f960) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f908);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f910) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f918) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f920) = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f928) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)puVar16 + _DAT_11307f8d8) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8e0);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = 0;
      puVar12 = PTR_s_init_1125d9248;
      puStack_b8 = puVar16;
      puStack_b0 = puVar15;
      _objc_retain(uVar19);
      _objc_retain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar21);
      ppuVar18 = &puStack_b8;
      _objc_msgSendSuper2(ppuVar18,puVar12);
      FUN_1044a620c(param_1);
      uVar22 = uVar19;
    }
  }
  else {
    bVar8 = *(byte *)((long)param_1 + 0x27);
    uVar4 = *(undefined4 *)((long)param_1 + 0x21);
    uVar10 = *(undefined7 *)((long)param_1 + 0x21);
    uVar21 = param_1[7];
    uVar24 = (undefined4)uVar10;
    uVar9 = (undefined2)*(undefined3 *)((long)param_1 + 0x25);
    if (bVar7 < 5) {
      uVar20 = param_1[8];
      bVar5 = *(byte *)(param_1 + 9);
      if (bVar7 == 3) {
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar25 = (ulong)*(uint *)((long)param_1 + 0x49) << 8 |
                 (ulong)*(uint3 *)((long)param_1 + 0x4d) << 0x28 | (ulong)bVar5;
        puVar15 = param_1;
        FUN_1044be87c();
        puVar16 = puVar15;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 3;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)((long)puVar16 + _DAT_11307f978) = 2;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar16 + _DAT_11307f988) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
        *puVar1 = uVar3;
        puVar1[1] = uVar17;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
        *puVar1 = uVar22;
        puVar1[1] = uVar11;
        pbVar2 = (byte *)((long)puVar16 + _DAT_11307f940);
        *pbVar2 = bVar6;
        pbVar2[7] = bVar8;
        *(undefined2 *)(pbVar2 + 5) = uVar9;
        *(undefined4 *)(pbVar2 + 1) = uVar4;
        *(undefined8 *)(pbVar2 + 8) = uVar23;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
        *puVar1 = uVar19;
        puVar1[1] = uVar21;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
        *puVar1 = uVar20;
        puVar1[1] = uVar25;
        *(undefined8 *)((long)puVar16 + _DAT_11307f958) = uVar13;
        *(undefined8 *)((long)puVar16 + _DAT_11307f960) = uVar14;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f908);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f910) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f918) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f920) = 0;
        *(undefined1 *)((long)puVar16 + _DAT_11307f928) = 2;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)puVar16 + _DAT_11307f8d8) = 2;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8e0);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = 0;
        puVar12 = PTR_s_init_1125d9248;
        puStack_a8 = puVar16;
        puStack_a0 = puVar15;
        _objc_retain(uVar13);
        _objc_retain(uVar14);
        _objc_retain(uVar13);
        _objc_retain(uVar14);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar11);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar25);
        ppuVar18 = &puStack_a8;
        _objc_msgSendSuper2(ppuVar18,puVar12);
        FUN_1044a620c(param_1);
        uVar21 = uVar13;
        uVar20 = uVar14;
      }
      else {
        puVar15 = param_1;
        FUN_1044be87c();
        puVar16 = puVar15;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 4;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)((long)puVar16 + _DAT_11307f978) = 2;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined8 *)((long)puVar16 + _DAT_11307f988) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f940);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f958) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f960) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
        *puVar1 = uVar3;
        puVar1[1] = uVar17;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
        *puVar1 = uVar22;
        puVar1[1] = uVar13;
        pbVar2 = (byte *)((long)puVar16 + _DAT_11307f908);
        *pbVar2 = bVar6;
        pbVar2[7] = bVar8;
        *(undefined2 *)(pbVar2 + 5) = uVar9;
        *(undefined4 *)(pbVar2 + 1) = uVar24;
        *(undefined8 *)(pbVar2 + 8) = uVar23;
        *(undefined8 *)((long)puVar16 + _DAT_11307f910) = uVar19;
        *(undefined8 *)((long)puVar16 + _DAT_11307f918) = uVar21;
        *(undefined8 *)((long)puVar16 + _DAT_11307f920) = uVar20;
        *(byte *)((long)puVar16 + _DAT_11307f928) = bVar5 & 1;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        *(undefined1 *)((long)puVar16 + _DAT_11307f8d8) = 2;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8e0);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = 0;
        puVar12 = PTR_s_init_1125d9248;
        puStack_98 = puVar16;
        puStack_90 = puVar15;
        _objc_retain(uVar19);
        _objc_retain(uVar21);
        _objc_retain(uVar20);
        _objc_retain(uVar19);
        _objc_retain(uVar21);
        _objc_retain(uVar20);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar13);
        _swift_bridgeObjectRetain(uVar23);
        ppuVar18 = &puStack_98;
        _objc_msgSendSuper2(ppuVar18,puVar12);
        FUN_1044a620c(param_1);
        _objc_release(uVar19);
      }
      _objc_release(uVar21);
      uVar22 = uVar20;
    }
    else if (bVar7 == 5) {
      puVar15 = param_1;
      FUN_1044be87c();
      puVar16 = puVar15;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 5;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f978) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f988) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f940);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f958) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f960) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f908);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f910) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f918) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f920) = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f928) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
      *puVar1 = uVar3;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
      *puVar1 = uVar22;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(byte *)((long)puVar16 + _DAT_11307f8d8) = bVar5 & 1;
      pbVar2 = (byte *)((long)puVar16 + _DAT_11307f8e0);
      *pbVar2 = bVar6;
      *(undefined4 *)(pbVar2 + 1) = uVar24;
      *(undefined2 *)(pbVar2 + 5) = uVar9;
      pbVar2[7] = bVar8;
      *(undefined8 *)(pbVar2 + 8) = uVar23;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = uVar19;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = uVar21;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = 0;
      puVar12 = PTR_s_init_1125d9248;
      puStack_88 = puVar16;
      puStack_80 = puVar15;
      _objc_retain(uVar19);
      _objc_retain(uVar21);
      _objc_retain(uVar19);
      _objc_retain(uVar21);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar23);
      ppuVar18 = &puStack_88;
      _objc_msgSendSuper2(ppuVar18,puVar12);
      FUN_1044a620c(param_1);
      _objc_release(uVar19);
      uVar22 = uVar21;
    }
    else {
      uVar23 = CONCAT71(uVar10,bVar6);
      puVar15 = param_1;
      FUN_1044be87c();
      puVar16 = puVar15;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar16 + _DAT_11307f8a8) = 6;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f9a0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9a8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f9b0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f990);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f998);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f968);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f970);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f978) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f980);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)((long)puVar16 + _DAT_11307f988) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f930);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f938);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f940);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f948);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f950);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f958) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f960) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f900);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f908);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f910) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f918) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f920) = 0;
      *(undefined1 *)((long)puVar16 + _DAT_11307f928) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8c8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8d0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined1 *)((long)puVar16 + _DAT_11307f8d8) = 2;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8e0);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8e8) = 0;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8f0) = 0;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b0);
      *puVar1 = uVar3;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)((long)puVar16 + _DAT_11307f8b8);
      *puVar1 = uVar22;
      puVar1[1] = uVar20;
      *(undefined8 *)((long)puVar16 + _DAT_11307f8c0) = uVar23;
      puVar12 = PTR_s_init_1125d9248;
      puStack_78 = puVar16;
      puStack_70 = puVar15;
      _objc_retain(uVar23);
      _objc_retain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar20);
      ppuVar18 = &puStack_78;
      _objc_msgSendSuper2(ppuVar18,puVar12);
      FUN_1044a620c(param_1);
      uVar22 = uVar23;
    }
  }
  _objc_release(uVar22);
  return ppuVar18;
}



/* Entry: 1044bd668; end: 1044bd677;  */

ulong FUN_1044bd668(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 1044bd678; end: 1044bdb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bd678(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_1044be87c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307f8a8) = 0;
  plVar1 = (long *)(lVar5 + _DAT_11307f9a0);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f9a8) = param_2;
  *(undefined8 *)(lVar5 + _DAT_11307f9b0) = param_3;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f990);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f998);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f968);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f970);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f978) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f980);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f988) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f930);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f938);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f940);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f948);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f950);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f958) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f960) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f900);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f908);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f910) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f918) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f920) = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f928) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8d0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307f8d8) = 2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8e0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8e8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8f0) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_11307f8b8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8c0) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1044bdb38; end: 1044bddc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bdb38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_1044be87c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307f8a8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f9a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f9a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f9b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f990);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f998);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_11307f968);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f970);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(lVar5 + _DAT_11307f978) = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f980);
  *puVar1 = param_6;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f988) = param_7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f938);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f940);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f948);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f950);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f958) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f960) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f900);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f908);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f910) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f918) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f920) = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f928) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307f8d8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8e8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8f0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8c0) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1044bddc4; end: 1044be5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bddc4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  FUN_1044be87c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307f8a8) = 3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f9a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f9a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f9b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f990);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f998);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f968);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f970);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f978) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f980);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f988) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11307f930);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f938);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f940);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f948);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f950);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(lVar5 + _DAT_11307f958) = param_11;
  *(undefined8 *)(lVar5 + _DAT_11307f960) = param_12;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f900);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f908);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f910) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f918) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f920) = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f928) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307f8d8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8e8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8f0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8c0) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1044be5fc; end: 1044be87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044be5fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_1044be87c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_11307f8a8) = 6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f9a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f9a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f9b0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f990);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f998);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f968);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f970);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f978) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f980);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_11307f988) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f930);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f938);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f940);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f948);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f950);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f958) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f960) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f900);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f908);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f910) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f918) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f920) = 0;
  *(undefined1 *)(lVar5 + _DAT_11307f928) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar5 + _DAT_11307f8d8) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8e8) = 0;
  *(undefined8 *)(lVar5 + _DAT_11307f8f0) = 0;
  plVar2 = (long *)(lVar5 + _DAT_11307f8b0);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11307f8b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_11307f8c0) = param_5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1044be87c; end: 1044be89b;  */

void FUN_1044be87c(void)

{
  _objc_opt_self(&PTR_PTR_1129c0da0);
  return;
}



/* Entry: 1044be89c; end: 1044bea03;  */

int FUN_1044be89c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044be918;
        goto LAB_1044be8fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044be8fc:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1044be918:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044bea04; end: 1044bea43;  */

void FUN_1044bea04(void)

{
  undefined *puVar1;
  
  if (puRam000000011307f9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0a748;
  _swift_getWitnessTable(&UNK_10dd0a748,&UNK_11077b020);
  puRam000000011307f9e0 = puVar1;
  return;
}



/* Entry: 1044bea44; end: 1044bea6b;  */

void FUN_1044bea44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001044bea58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1,param_2,param_3);
  return;
}



/* Entry: 1044bea6c; end: 1044beaf7;  */

void FUN_1044bea6c(void)

{
  FUN_1044bb994();
  return;
}



/* Entry: 1044beaf8; end: 1044beaff;  */

void FUN_1044beaf8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
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
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,uVar2,param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1044beb00; end: 1044beb0f; -[SCStoriesPlaybackSnapViewerInfo screenshotted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044beb00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f9e8);
}



/* Entry: 1044beb10; end: 1044beb1f; -[SCStoriesPlaybackSnapViewerInfo saved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044beb10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307f9f0);
}



/* Entry: 1044beb20; end: 1044bebe7; -[SCStoriesPlaybackSnapViewerInfo timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044beb20(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113813b28,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1044bebe8; end: 1044bebf7; -[SCStoriesPlaybackSnapViewerInfo snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bebe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113813b30));
  return;
}



/* Entry: 1044bebf8; end: 1044bec9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044bebf8(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307f9e8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307f9f0) = param_2;
  func_0x0001009f0578(param_3,unaff_x20 + _DAT_113813b28);
  *(undefined8 *)(unaff_x20 + _DAT_113813b30) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_3);
  return puVar1;
}



/* Entry: 1044beca0; end: 1044beddf; -[SCStoriesPlaybackSnapViewerInfo initWithScreenshotted:saved:timestamp:snapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1044beca0(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                    long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_60 - extraout_x8;
  if (param_5 == 0) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_5);
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_5 == 0,1);
  *(undefined1 *)(param_1 + _DAT_11307f9e8) = param_3;
  *(undefined1 *)(param_1 + _DAT_11307f9f0) = param_4;
  func_0x0001009f0578(lVar3,param_1 + _DAT_113813b28);
  *(undefined8 *)(param_1 + _DAT_113813b30) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_6);
  plVar5 = &lStack_60;
  _objc_msgSendSuper2(plVar5,puVar1);
  func_0x0001000d1dcc(lVar3);
  return plVar5;
}



/* Entry: 1044bede0; end: 1044bee9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044bede0(undefined1 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307f9e8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307f9f0) = param_1[1];
  lVar2 = 0;
  FUN_10449e7c4();
  func_0x0001009f0578(param_1 + *(int *)(lVar2 + 0x18),unaff_x20 + _DAT_113813b28);
  *(undefined8 *)(unaff_x20 + _DAT_113813b30) = *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x1c));
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  FUN_1044bee9c(param_1);
  return puVar3;
}



/* Entry: 1044bee9c; end: 1044beed7;  */

undefined8 FUN_1044bee9c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10449e7c4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1044beed8; end: 1044beedb; -[SCStoriesPlaybackSnapViewerInfo copyWithZone:] */

void FUN_1044beed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044beedc; end: 1044bef9f; -[SCStoriesPlaybackSnapViewerInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044beedc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar2 = 0;
  FUN_10449e7c4();
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + lVar1;
  *puVar4 = *(undefined1 *)(param_1 + _DAT_11307f9e8);
  (&stack0xffffffffffffffd1)[lVar1] = *(undefined1 *)(param_1 + _DAT_11307f9f0);
  func_0x0001009f0578(param_1 + _DAT_113813b28,puVar4 + *(int *)(lVar3 + 0x18));
  *(undefined8 *)(puVar4 + *(int *)(lVar2 + 0x1c)) = *(undefined8 *)(param_1 + _DAT_113813b30);
  _objc_retain();
  FUN_1044bee9c(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044befa0; end: 1044bf01b; -[SCStoriesPlaybackSnapViewerInfo init] */

void FUN_1044befa0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackSnapViewerInfoWrapper.swift",0x46,2,0x30,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044befe8);
  (*pcVar1)();
}



/* Entry: 1044bf01c; end: 1044bf053; -[SCStoriesPlaybackSnapViewerInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf01c(long param_1)

{
  func_0x0001000d1dcc(param_1 + _DAT_113813b28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113813b30));
  return;
}



/* Entry: 1044bf054; end: 1044bf05b;  */

void FUN_1044bf054(void)

{
  if (lRam000000011307fa20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e80d158);
  return;
}



/* Entry: 1044bf05c; end: 1044bf093;  */

void FUN_1044bf05c(undefined8 param_1)

{
  if (lRam000000011307fa20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80d158);
  return;
}



/* Entry: 1044bf094; end: 1044bf113;  */

void FUN_1044bf094(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dd0a818;
  puStack_38 = &UNK_10dd0a818;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd0a830;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044bf114; end: 1044bf11f; -[SCStoriesPlaybackSnapViewerInfoSummary friendViewers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf114(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307fa30);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044bf05c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044bf120; end: 1044bf12f; -[SCStoriesPlaybackSnapViewerInfoSummary friendViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa38);
}



/* Entry: 1044bf130; end: 1044bf13f; -[SCStoriesPlaybackSnapViewerInfoSummary friendScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa40);
}



/* Entry: 1044bf140; end: 1044bf14f; -[SCStoriesPlaybackSnapViewerInfoSummary boostCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa48);
}



/* Entry: 1044bf150; end: 1044bf15f; -[SCStoriesPlaybackSnapViewerInfoSummary shareCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa50);
}



/* Entry: 1044bf160; end: 1044bf16b; -[SCStoriesPlaybackSnapViewerInfoSummary otherViewers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf160(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11307fa58);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044bf05c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044bf16c; end: 1044bf1c3;  */

void FUN_1044bf16c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1044bf05c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044bf1c4; end: 1044bf1d3; -[SCStoriesPlaybackSnapViewerInfoSummary otherViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf1c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa60);
}



/* Entry: 1044bf1d4; end: 1044bf1e3; -[SCStoriesPlaybackSnapViewerInfoSummary otherScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf1d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa68);
}



/* Entry: 1044bf1e4; end: 1044bf1f3; -[SCStoriesPlaybackSnapViewerInfoSummary rewatchCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044bf1e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fa70);
}



/* Entry: 1044bf1f4; end: 1044bf203; -[SCStoriesPlaybackSnapViewerInfoSummary shouldShowRewatchCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044bf1f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307fa78);
}



/* Entry: 1044bf204; end: 1044bf403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307fa30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa58) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa60) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa68) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11307fa70) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11307fa78) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044bf404; end: 1044bf4d3; -[SCStoriesPlaybackSnapViewerInfoSummary initWithFriendViewers:friendViewCount:friendScreenshotCount:boostCount:shareCount:otherViewers:otherViewCount:otherScreenshotCount:rewatchCount:shouldShowRewatchCount:] */

void FUN_1044bf404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1044bf05c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1044bf05c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar1);
  }
  func_0x0001044bf304(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 1044bf4d4; end: 1044bf503;  */

void FUN_1044bf4d4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044bf504(param_1);
  return;
}



/* Entry: 1044bf504; end: 1044bf8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf504(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_10449e7c4();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined1 *)((long)&uStack_c0 + lVar2);
  lVar7 = *param_1;
  if (lVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar7 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar11 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      plStack_b0 = param_1;
      func_0x0001044adee4(0,lVar11,0);
      lVar7 = lVar7 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar12 + 0x48);
      lStack_b8 = lVar12;
      do {
        puVar3 = puStack_78;
        func_0x0001044bfa18(lVar7,puVar10);
        lVar5 = 0;
        FUN_1044bf05c();
        lVar12 = lVar5;
        _objc_allocWithZone();
        *(undefined1 *)(lVar12 + _DAT_11307f9e8) = *puVar10;
        *(undefined1 *)(lVar12 + _DAT_11307f9f0) = *(undefined1 *)((long)&uStack_c0 + lVar2 + 1);
        func_0x0001009f0578(puVar10 + *(int *)(lVar4 + 0x18),lVar12 + _DAT_113813b28);
        *(undefined8 *)(lVar12 + _DAT_113813b30) = *(undefined8 *)(puVar10 + *(int *)(lVar4 + 0x1c))
        ;
        puVar9 = PTR_s_init_1125d9248;
        lStack_98 = lVar12;
        lStack_90 = lVar5;
        _objc_retain();
        plVar6 = &lStack_98;
        _objc_msgSendSuper2(plVar6,puVar9);
        FUN_1044bee9c(puVar10);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puStack_78 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          func_0x0001044adee4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar6;
        lVar7 = lVar7 + lVar8;
        lVar11 = lVar11 + -1;
        puVar9 = puStack_78;
        param_1 = plStack_b0;
        lVar12 = lStack_b8;
      } while (lVar11 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307fa30) = puVar9;
  lVar7 = param_1[2];
  *(long *)(unaff_x20 + _DAT_11307fa38) = param_1[1];
  *(long *)(unaff_x20 + _DAT_11307fa40) = lVar7;
  lVar7 = param_1[4];
  *(long *)(unaff_x20 + _DAT_11307fa48) = param_1[3];
  *(long *)(unaff_x20 + _DAT_11307fa50) = lVar7;
  lVar7 = param_1[5];
  if (lVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar7 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar11 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      plStack_b0 = param_1;
      func_0x0001044adee4(0,lVar11,0);
      lVar7 = lVar7 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
      lVar12 = *(long *)(lVar12 + 0x48);
      do {
        puVar3 = puStack_78;
        func_0x0001044bfa18(lVar7,puVar10);
        lVar5 = 0;
        FUN_1044bf05c();
        lVar8 = lVar5;
        _objc_allocWithZone();
        *(undefined1 *)(lVar8 + _DAT_11307f9e8) = *puVar10;
        *(undefined1 *)(lVar8 + _DAT_11307f9f0) = *(undefined1 *)((long)&uStack_c0 + lVar2 + 1);
        func_0x0001009f0578(puVar10 + *(int *)(lVar4 + 0x18),lVar8 + _DAT_113813b28);
        *(undefined8 *)(lVar8 + _DAT_113813b30) = *(undefined8 *)(puVar10 + *(int *)(lVar4 + 0x1c));
        puVar9 = PTR_s_init_1125d9248;
        lStack_88 = lVar8;
        lStack_80 = lVar5;
        _objc_retain();
        plVar6 = &lStack_88;
        _objc_msgSendSuper2(plVar6,puVar9);
        FUN_1044bee9c(puVar10);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puStack_78 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          func_0x0001044adee4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar6;
        lVar7 = lVar7 + lVar12;
        lVar11 = lVar11 + -1;
        puVar9 = puStack_78;
        param_1 = plStack_b0;
      } while (lVar11 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11307fa58) = puVar9;
  lVar7 = param_1[7];
  *(long *)(unaff_x20 + _DAT_11307fa60) = param_1[6];
  *(long *)(unaff_x20 + _DAT_11307fa68) = lVar7;
  *(long *)(unaff_x20 + _DAT_11307fa70) = param_1[8];
  FUN_1044bf8e0(param_1);
  *(char *)(unaff_x20 + _DAT_11307fa78) = (char)param_1[9];
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044bf8e0; end: 1044bf913;  */

undefined8 FUN_1044bf8e0(undefined8 param_1)

{
  (*(code *)(undefined *)0x10449ee34)();
  return param_1;
}



/* Entry: 1044bf914; end: 1044bf917; -[SCStoriesPlaybackSnapViewerInfoSummary copyWithZone:] */

void FUN_1044bf914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044bf918; end: 1044bf963; -[SCStoriesPlaybackSnapViewerInfoSummary description] */

void FUN_1044bf918(undefined8 param_1)

{
  undefined1 auStack_70 [80];
  
  _objc_retain();
  FUN_1044bfd94(auStack_70);
  _objc_release(param_1);
  FUN_1044bf8e0(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044bf964; end: 1044bf9df; -[SCStoriesPlaybackSnapViewerInfoSummary init] */

void FUN_1044bf964(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackSnapViewerInfoSummaryWrapper.swift",0x4d,2,
             0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044bf9ac);
  (*pcVar1)();
}



/* Entry: 1044bf9e0; end: 1044bfd93; -[SCStoriesPlaybackSnapViewerInfoSummary .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bf9e0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307fa30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307fa58));
  return;
}



/* Entry: 1044bfd94; end: 1044c036f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044bfd94(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  FUN_10449e7c4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar13 = (undefined1 *)((long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_88 = puVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = puVar13 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = puVar13 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = puVar11 + -extraout_x12_01;
  uStack_70 = *(ulong *)(param_2 + _DAT_11307fa30);
  if (uStack_70 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    if (uStack_70 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uStack_70 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uStack_70;
      if (-1 < (long)uStack_70) {
        uVar12 = uStack_70 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001044adf18(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044c036c);
        (*pcVar2)();
      }
      puVar17 = puStack_68;
      lStack_80 = param_2;
      puStack_78 = param_1;
      if ((uStack_70 & 0xc000000000000001) == 0) {
        plVar7 = (long *)(uStack_70 + 0x20);
        do {
          lVar9 = *plVar7;
          *puVar13 = *(undefined1 *)(lVar9 + _DAT_11307f9e8);
          puVar13[1] = *(undefined1 *)(lVar9 + _DAT_11307f9f0);
          func_0x0001009f0578(lVar9 + _DAT_113813b28,puVar13 + *(int *)(lVar3 + 0x18));
          *(undefined8 *)(puVar13 + *(int *)(lVar3 + 0x1c)) =
               *(undefined8 *)(lVar9 + _DAT_113813b30);
          uVar14 = *(ulong *)(puVar17 + 0x10);
          uVar4 = *(ulong *)(puVar17 + 0x18);
          puStack_68 = puVar17;
          _objc_retain();
          if (uVar4 >> 1 <= uVar14) {
            func_0x0001044adf18(1 < uVar4,uVar14 + 1,1);
            puVar17 = puStack_68;
          }
          *(ulong *)(puVar17 + 0x10) = uVar14 + 1;
          FUN_1044c0390(puVar13,puVar17 + *(long *)(lVar10 + 0x48) * uVar14 +
                                          ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
          uVar12 = uVar12 - 1;
          plVar7 = plVar7 + 1;
          param_1 = puStack_78;
          param_2 = lStack_80;
        } while (uVar12 != 0);
      }
      else {
        uVar14 = 0;
        do {
          uVar4 = uVar14;
          func_0x0001044bfbf8(uVar14,uStack_70);
          *puVar15 = *(undefined1 *)(uVar4 + _DAT_11307f9e8);
          puVar15[1] = *(undefined1 *)(uVar4 + _DAT_11307f9f0);
          func_0x0001009f0578(uVar4 + _DAT_113813b28,puVar15 + *(int *)(lVar3 + 0x18));
          uVar8 = *(undefined8 *)(uVar4 + _DAT_113813b30);
          _objc_retain(uVar8);
          _swift_unknownObjectRelease(uVar4);
          *(undefined8 *)(puVar15 + *(int *)(lVar3 + 0x1c)) = uVar8;
          uVar4 = *(ulong *)(puVar17 + 0x10);
          puStack_68 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar4) {
            func_0x0001044adf18(1 < *(ulong *)(puVar17 + 0x18),uVar4 + 1,1);
          }
          puVar17 = puStack_68;
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
          FUN_1044c0390(puVar15,puStack_68 +
                                *(long *)(lVar10 + 0x48) * uVar4 +
                                ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
          param_1 = puStack_78;
          param_2 = lStack_80;
        } while (uVar12 != uVar14);
      }
    }
  }
  uStack_a8 = *(undefined8 *)(param_2 + _DAT_11307fa38);
  uStack_90 = *(undefined8 *)(param_2 + _DAT_11307fa40);
  uStack_98 = *(undefined8 *)(param_2 + _DAT_11307fa48);
  uStack_a0 = *(undefined8 *)(param_2 + _DAT_11307fa50);
  uStack_70 = *(ulong *)(param_2 + _DAT_11307fa58);
  if (uStack_70 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    if (uStack_70 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uStack_70 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uStack_70;
      if (-1 < (long)uStack_70) {
        uVar12 = uStack_70 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001044adf18(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      puVar13 = puStack_88;
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044c0370);
        (*pcVar2)();
      }
      puVar16 = puStack_68;
      lStack_80 = param_2;
      puStack_78 = param_1;
      if ((uStack_70 & 0xc000000000000001) == 0) {
        plVar7 = (long *)(uStack_70 + 0x20);
        do {
          lVar9 = *plVar7;
          *puVar13 = *(undefined1 *)(lVar9 + _DAT_11307f9e8);
          puVar13[1] = *(undefined1 *)(lVar9 + _DAT_11307f9f0);
          func_0x0001009f0578(lVar9 + _DAT_113813b28,puVar13 + *(int *)(lVar3 + 0x18));
          *(undefined8 *)(puVar13 + *(int *)(lVar3 + 0x1c)) =
               *(undefined8 *)(lVar9 + _DAT_113813b30);
          uVar14 = *(ulong *)(puVar16 + 0x10);
          uVar4 = *(ulong *)(puVar16 + 0x18);
          puStack_68 = puVar16;
          _objc_retain();
          if (uVar4 >> 1 <= uVar14) {
            func_0x0001044adf18(1 < uVar4,uVar14 + 1,1);
            puVar16 = puStack_68;
          }
          *(ulong *)(puVar16 + 0x10) = uVar14 + 1;
          FUN_1044c0390(puVar13,puVar16 + *(long *)(lVar10 + 0x48) * uVar14 +
                                          ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
          uVar12 = uVar12 - 1;
          plVar7 = plVar7 + 1;
          param_1 = puStack_78;
          param_2 = lStack_80;
        } while (uVar12 != 0);
      }
      else {
        uVar14 = 0;
        do {
          uVar4 = uVar14;
          func_0x0001044bfbf8(uVar14,uStack_70);
          *puVar11 = *(undefined1 *)(uVar4 + _DAT_11307f9e8);
          puVar11[1] = *(undefined1 *)(uVar4 + _DAT_11307f9f0);
          func_0x0001009f0578(uVar4 + _DAT_113813b28,puVar11 + *(int *)(lVar3 + 0x18));
          uVar8 = *(undefined8 *)(uVar4 + _DAT_113813b30);
          _objc_retain(uVar8);
          _swift_unknownObjectRelease(uVar4);
          *(undefined8 *)(puVar11 + *(int *)(lVar3 + 0x1c)) = uVar8;
          uVar4 = *(ulong *)(puVar16 + 0x10);
          puStack_68 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar4) {
            func_0x0001044adf18(1 < *(ulong *)(puVar16 + 0x18),uVar4 + 1,1);
          }
          puVar16 = puStack_68;
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
          FUN_1044c0390(puVar11,puStack_68 +
                                *(long *)(lVar10 + 0x48) * uVar4 +
                                ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
          param_1 = puStack_78;
          param_2 = lStack_80;
        } while (uVar12 != uVar14);
      }
    }
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_11307fa60);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11307fa68);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11307fa70);
  uVar1 = *(undefined1 *)(param_2 + _DAT_11307fa78);
  *param_1 = puVar17;
  param_1[1] = uStack_a8;
  param_1[2] = uStack_90;
  param_1[3] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[5] = puVar16;
  param_1[6] = uVar8;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  *(undefined1 *)(param_1 + 9) = uVar1;
  return;
}



/* Entry: 1044c0370; end: 1044c038f;  */

void FUN_1044c0370(void)

{
  _objc_opt_self(&PTR_PTR_1129c1050);
  return;
}



/* Entry: 1044c0390; end: 1044c03d3;  */

undefined8 FUN_1044c0390(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10449e7c4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1044c03d4; end: 1044c03e3; -[SCStoriesPlaybackConfig storyPlayMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c03d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307faa8);
}



/* Entry: 1044c03e4; end: 1044c03f3; -[SCStoriesPlaybackConfig viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c03e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fab0);
}



/* Entry: 1044c03f4; end: 1044c0403; -[SCStoriesPlaybackConfig viewingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c03f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fab8);
}



/* Entry: 1044c0404; end: 1044c0413; -[SCStoriesPlaybackConfig viewingActionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c0404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fac0);
}



/* Entry: 1044c0414; end: 1044c0423; -[SCStoriesPlaybackConfig playSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c0414(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fac8);
}



/* Entry: 1044c0424; end: 1044c0433; -[SCStoriesPlaybackConfig startingEntryEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c0424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fad0);
}



/* Entry: 1044c0434; end: 1044c059b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c0434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307faa8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307fab0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307fab8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307fac0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307fac8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307fad0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c059c; end: 1044c064f; -[SCStoriesPlaybackConfig initWithStoryPlayMode:viewLocation:viewingType:viewingActionContext:playSource:startingEntryEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c059c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307faa8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307fab0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307fab8) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307fac0) = param_6;
  *(undefined8 *)(param_1 + _DAT_11307fac8) = param_7;
  *(undefined8 *)(param_1 + _DAT_11307fad0) = param_8;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c0650; end: 1044c06e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c0650(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11307faa8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307fab0) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307fab8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11307fac0) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11307fac8) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11307fad0) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c06e4; end: 1044c06e7; -[SCStoriesPlaybackConfig copyWithZone:] */

void FUN_1044c06e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044c06e8; end: 1044c0703; -[SCStoriesPlaybackConfig description] */

void FUN_1044c06e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044c0704; end: 1044c079f; -[SCStoriesPlaybackConfig init] */

void FUN_1044c0704(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackConfigWrapper.swift",0x3e,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044c074c);
  (*pcVar1)();
}



/* Entry: 1044c07a0; end: 1044c07b3; -[SCStoriesSnapDiscoverMetadata lastUpdatedAt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044c07a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307fb00);
}



/* Entry: 1044c07b4; end: 1044c07ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c07b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307fb00) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044c0800; end: 1044c0853; -[SCStoriesSnapDiscoverMetadata initWithLastUpdatedAt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044c0800(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11307fb00) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}


