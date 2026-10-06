/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043184f0; end: 10431857f; -[CreatorsSpotlightSubmissionMusicConfiguration initWithMusicPickerSelection:contextSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043184f0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11306dea0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306dea8);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104318580; end: 1043185df; -[CreatorsSpotlightSubmissionMusicConfiguration init] */

void FUN_104318580(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsSpotlightSubmissionScopeV2.CreatorsSpotlightSubmissionMusicConfiguration",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043185ac);
  (*pcVar1)();
}



/* Entry: 1043185e0; end: 10431861b; -[CreatorsSpotlightSubmissionMusicConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043185e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306dea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306dea8 + 8))
  ;
  return;
}



/* Entry: 10431861c; end: 10431863b;  */

void FUN_10431861c(void)

{
  _objc_opt_self(&PTR_PTR_11299ab68);
  return;
}



/* Entry: 10431863c; end: 10431865b; -[CreatorsSpotlightSubmissionV2Scope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431863c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306ded8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431865c; end: 1043186b7; -[CreatorsSpotlightSubmissionV2Scope businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431865c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306dee0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306dee0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043186b8; end: 1043186ff; -[CreatorsSpotlightSubmissionV2Scope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043186b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dee8;
  _swift_beginAccess(param_1 + _DAT_11306dee8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104318700; end: 104318757; -[CreatorsSpotlightSubmissionV2Scope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dee8;
  _swift_beginAccess(param_1 + _DAT_11306dee8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104318758; end: 104318767; -[CreatorsSpotlightSubmissionV2Scope pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104318758(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306def0);
}



/* Entry: 104318768; end: 104318777; -[CreatorsSpotlightSubmissionV2Scope selectedMemberProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306def8));
  return;
}



/* Entry: 104318778; end: 104318787; -[CreatorsSpotlightSubmissionV2Scope currentlyPlayingStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306df00));
  return;
}



/* Entry: 104318788; end: 104318797; -[CreatorsSpotlightSubmissionV2Scope triggeringSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104318788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306df08);
}



/* Entry: 104318798; end: 1043187db; -[CreatorsSpotlightSubmissionV2Scope showCameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104318798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306df10;
  _swift_beginAccess(param_1 + _DAT_11306df10,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1043187dc; end: 10431882b; -[CreatorsSpotlightSubmissionV2Scope setShowCameraButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043187dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306df10;
  _swift_beginAccess(param_1 + _DAT_11306df10,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10431882c; end: 104318873; -[CreatorsSpotlightSubmissionV2Scope musicConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431882c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306df18;
  _swift_beginAccess(param_1 + _DAT_11306df18,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104318874; end: 1043188d7; -[CreatorsSpotlightSubmissionV2Scope setMusicConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306df18;
  _swift_beginAccess(param_1 + _DAT_11306df18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043188d8; end: 104318903; -[CreatorsSpotlightSubmissionV2Scope init] */

void FUN_1043188d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsSpotlightSubmissionScopeV2.CreatorsSpotlightSubmissionV2Scope",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104318904);
  (*pcVar1)();
}



/* Entry: 104318904; end: 104318907;  */

void FUN_104318904(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104318908; end: 1043189cf; -[CreatorsSpotlightSubmissionV2Scope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318908(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ded8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306dee0 + 8));
  func_0x0001024815dc(param_1 + _DAT_11306dee8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306def8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306df00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306df18));
  return;
}



/* Entry: 1043189d0; end: 104318bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043189d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100371ce0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306dee8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306dee8,0);
  *(undefined1 *)(lVar5 + _DAT_11306df10) = 1;
  *(undefined8 *)(lVar5 + _DAT_11306df18) = 0;
  *(long *)(lVar5 + _DAT_11306ded8) = param_1;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_2);
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306dee0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_11306def0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_11306def8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_11306df00) = param_7;
  *(undefined8 *)(lVar5 + _DAT_11306df08) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  lVar3 = _DAT_11306df10;
  _swift_beginAccess((long)plVar6 + _DAT_11306df10,auStack_a0,1,0);
  lVar4 = _DAT_11306df18;
  *(undefined1 *)((long)plVar6 + lVar3) = param_9;
  _swift_beginAccess((long)plVar6 + _DAT_11306df18,auStack_b8,1,0);
  uVar7 = *(undefined8 *)((long)plVar6 + lVar4);
  *(undefined8 *)((long)plVar6 + lVar4) = param_11;
  _objc_retain();
  _objc_release(uVar7);
  aplStack_d0[0] = plVar6;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  _swift_release(uStack_c0);
  _swift_unknownObjectRelease(aplStack_d0[0]);
  return plVar6;
}



/* Entry: 104318bc8; end: 104318cff; -[_TtC34CreatorsSpotlightSubmissionScopeV242CreatorsSpotlightSubmissionV2ScopeServices buildWithUiContainer:delegate:businessProfileId:pageType:selectedMemberProfile:currentlyPlayingStoryId:triggeringSection:showCameraButton:musicConfiguration:] */

void FUN_104318bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  
  if (param_5 == 0) {
    uStack_80 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_5;
  }
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  uVar1 = param_7;
  _objc_retain(param_7);
  uVar2 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_1043189d0(param_3,param_4,uStack_80,param_2,param_6,param_7,param_8,param_9,param_10);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_12);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104318d00; end: 104318d5f; -[_TtC34CreatorsSpotlightSubmissionScopeV242CreatorsSpotlightSubmissionV2ScopeServices init] */

void FUN_104318d00(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorsSpotlightSubmissionScopeV2.CreatorsSpotlightSubmissionV2ScopeServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104318d2c);
  (*pcVar1)();
}



/* Entry: 104318d60; end: 104318d83; -[_TtC34CreatorsSpotlightSubmissionScopeV242CreatorsSpotlightSubmissionV2ScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306df28));
  return;
}



/* Entry: 104318d84; end: 104318da3; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318d84(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306df80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104318da4; end: 104318deb; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306df88;
  _swift_beginAccess(param_1 + _DAT_11306df88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104318dec; end: 104318e43; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306df88;
  _swift_beginAccess(param_1 + _DAT_11306df88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104318e44; end: 104318e53; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope currentlyPlayingStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306df90));
  return;
}



/* Entry: 104318e54; end: 104318e63; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104318e54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306df98);
}



/* Entry: 104318e64; end: 104318f1b; -[_TtC34SCCreatorsSpotlightSubmissionScope34SCCreatorsSpotlightSubmissionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318e64(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306df80));
  func_0x000104318eac(param_1 + _DAT_11306df88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306df90));
  return;
}



/* Entry: 104318f1c; end: 104318f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318f1c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104319204();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306dfa8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104318f84; end: 104318fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318f84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306dfa8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104318fd0; end: 1043190e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104318fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_10431918c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306df88;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306df88,0);
  *(long *)(lVar4 + _DAT_11306df80) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined8 *)(lVar4 + _DAT_11306df90) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306df98) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_3);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 1043190e8; end: 10431918b; -[_TtC34SCCreatorsSpotlightSubmissionScope42SCCreatorsSpotlightSubmissionScopeServices buildWithUiContainer:delegate:currentlyPlayingStoryId:pageType:] */

void FUN_1043190e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104318fd0(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431918c; end: 1043191ab;  */

void FUN_10431918c(void)

{
  _objc_opt_self(&PTR_PTR_11299adf0);
  return;
}



/* Entry: 1043191ac; end: 1043191af;  */

void FUN_1043191ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043191b0; end: 1043191e3;  */

void FUN_1043191b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043191e4; end: 104319203; -[_TtC34SCCreatorsSpotlightSubmissionScope42SCCreatorsSpotlightSubmissionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043191e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306dfa8));
  return;
}



/* Entry: 104319204; end: 104319223;  */

void FUN_104319204(void)

{
  _objc_opt_self(&PTR_PTR_11299aec8);
  return;
}



/* Entry: 104319224; end: 104319227;  */

void FUN_104319224(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104319228; end: 1043192ab;  */

void FUN_104319228(void)

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



/* Entry: 1043192ac; end: 1043192bb; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope scopeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043192ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e000);
}



/* Entry: 1043192bc; end: 1043192cb; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope attributionSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043192bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306e008);
}



/* Entry: 1043192cc; end: 104319327; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043192cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306e010))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306e010);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104319328; end: 104319347; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104319328(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306e018));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104319348; end: 1043193d7; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope completion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104319348(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306e020);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_110759498;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1043193d8; end: 1043193eb; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope cancelCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043193d8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_11306e028);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_11306e028))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110759470;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1043193ec; end: 1043193ff; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope fallbackCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043193ec(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_11306e030);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_11306e030))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110759448;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104319400; end: 10431948f;  */

void FUN_104319400(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + *param_3))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    uStack_48 = param_4;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104319490; end: 10431949f; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope isFriendsOnlyProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104319490(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306e038);
}



/* Entry: 1043194a0; end: 104319517; -[_TtC36SCSendToPublicProfileOnboardingScope36SCSendToPublicProfileOnboardingScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001043194f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043194fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043194a0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e010 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306e018));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306e020 + 8));
  if (*(long *)(param_1 + _DAT_11306e028) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11306e028))[1]);
    return;
  }
  return;
}



/* Entry: 104319518; end: 10431957f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104319518(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342e44();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306e048) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104319580; end: 1043195cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104319580(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306e048) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043195cc; end: 10431976b; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices buildWithScopeType:profileId:uiContainer:attributionSourceType:isFriendsOnlyProfile:completion:cancelCompletion:fallbackCompletion:] */

void FUN_1043195cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  long param_9,long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  puVar2 = &UNK_1107593e0;
  _swift_allocObject(&UNK_1107593e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar5 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar5 = &UNK_110759430;
    _swift_allocObject(&UNK_110759430,0x18,7);
    *(long *)(puVar5 + 0x10) = param_9;
    uVar1 = 0x10431a7cc;
  }
  if (param_10 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_110759408;
    _swift_allocObject(&UNK_110759408,0x18,7);
    *(long *)(puVar3 + 0x10) = param_10;
    uVar4 = 0x10431a7c8;
  }
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  FUN_10431a4e0(param_3,param_4,param_2,param_5,param_6,param_7,0x10431a7ac,puVar2,uVar1,puVar5,
                uVar4,puVar3);
  func_0x00010058d43c(uVar4,puVar3);
  func_0x00010058d43c(uVar1,puVar5);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10431976c; end: 1043197f7; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices startOnboardingFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431976c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  auStack_48[0] = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010008a7c8(&uStack_38,auStack_48);
  func_0x000100083b20(auStack_48);
  _swift_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_unknownObjectRelease(auStack_48[0]);
  return;
}



/* Entry: 1043197f8; end: 104319937;  */

undefined8
FUN_1043197f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f3aa0;
  puStack_88 = &UNK_110759098;
  ppuVar3 = &puStack_a0;
  uStack_80 = param_4;
  uStack_78 = param_5;
  __Block_copy(ppuVar3);
  uVar2 = uStack_78;
  _swift_retain(param_5);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1107590c0;
  ppuVar4 = &puStack_a0;
  uStack_80 = param_6;
  uStack_78 = param_7;
  __Block_copy();
  uVar2 = uStack_78;
  _swift_retain(param_7);
  _swift_release(uVar2);
  func_0x00010bf238c0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104319938; end: 104319a43; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices buildPublicStoryOnboardingScopeWithProfileId:uiContainer:onComplete:onCancel:] */

void FUN_104319938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  __Block_copy();
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar1 = &UNK_110759390;
  _swift_allocObject(&UNK_110759390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1107593b8;
  _swift_allocObject(&UNK_1107593b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  FUN_1043197f8(param_3,param_2,param_4,0x10431a7a8,puVar1,0x10431a7c4,puVar2);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(puVar1);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104319a44; end: 104319b73;  */

undefined8
FUN_104319a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f3aa0;
  puStack_88 = &UNK_1107590e8;
  ppuVar3 = &puStack_a0;
  uStack_80 = param_3;
  uStack_78 = param_4;
  __Block_copy(ppuVar3);
  uVar2 = uStack_78;
  _swift_retain(param_4);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110759110;
  ppuVar4 = &puStack_a0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  __Block_copy();
  uVar2 = uStack_78;
  _swift_retain(param_6);
  _swift_release(uVar2);
  func_0x00010bf238c0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  return unaff_x20;
}



/* Entry: 104319b74; end: 104319c5f; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices buildPublicAttributionOnboardingScopeWithUiContainer:source:onComplete:onDisplayFallback:] */

void FUN_104319b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  __Block_copy();
  puVar1 = &UNK_110759340;
  _swift_allocObject(&UNK_110759340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_110759368;
  _swift_allocObject(&UNK_110759368,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_104319a44(param_3,param_4,0x10431a7a4,puVar1,0x10431a7c0,puVar2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104319c60; end: 104319d83;  */

undefined8
FUN_104319c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f3aa0;
  puStack_78 = &UNK_110759138;
  ppuVar3 = &puStack_90;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __Block_copy(ppuVar3);
  uVar2 = uStack_68;
  _swift_retain(param_3);
  _swift_release(uVar2);
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110759160;
  ppuVar4 = &puStack_90;
  uStack_70 = param_4;
  uStack_68 = param_5;
  __Block_copy();
  uVar2 = uStack_68;
  _swift_retain(param_5);
  _swift_release(uVar2);
  func_0x00010bf238c0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  return unaff_x20;
}



/* Entry: 104319d84; end: 104319e63; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices buildSpotlightOnboardingScopeWithUiContainer:onComplete:onDisplayFallback:] */

void FUN_104319d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  __Block_copy();
  puVar1 = &UNK_1107592f0;
  _swift_allocObject(&UNK_1107592f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110759318;
  _swift_allocObject(&UNK_110759318,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_104319c60(param_3,0x10431a7a0,puVar1,0x10431a7bc,puVar2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104319e64; end: 104319fdf;  */

undefined8
FUN_104319e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f3aa0;
  puStack_88 = &UNK_110759188;
  ppuVar3 = &puStack_a0;
  uStack_80 = param_3;
  uStack_78 = param_4;
  __Block_copy(ppuVar3);
  uVar2 = uStack_78;
  _swift_retain(param_4);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1107591b0;
  ppuVar4 = &puStack_a0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  __Block_copy();
  uVar2 = uStack_78;
  _swift_retain(param_6);
  _swift_release(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1107591d8;
  ppuVar5 = &puStack_a0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  __Block_copy();
  uVar2 = uStack_78;
  _swift_retain(param_8);
  _swift_release(uVar2);
  func_0x00010bf238c0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar5);
  __Block_release(ppuVar4);
  __Block_release(ppuVar3);
  return unaff_x20;
}



/* Entry: 104319fe0; end: 10431a113; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices buildSpotlightOnboardingScopeWithUiContainer:isFriendsOnlyProfile:onComplete:onCancel:onDisplayFallback:] */

void FUN_104319fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __Block_copy();
  __Block_copy();
  __Block_copy();
  puVar1 = &UNK_110759278;
  _swift_allocObject(&UNK_110759278,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1107592a0;
  _swift_allocObject(&UNK_1107592a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  puVar3 = &UNK_1107592c8;
  _swift_allocObject(&UNK_1107592c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar4 = param_3;
  FUN_104319e64(param_3,param_4,FUN_10431a718,puVar1,0x10431a72c,puVar2,0x10431a7b8,puVar3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  _swift_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10431a114; end: 10431a123; -[_TtC36SCSendToPublicProfileOnboardingScope44SCSendToPublicProfileOnboardingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306e048));
  return;
}



/* Entry: 10431a124; end: 10431a203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a124(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306e050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306e058) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306e060) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431a204; end: 10431a287; -[SCSendToPublicProfileOnboardingLauncher initWithServices:exposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11306e050) = 0;
  *(undefined8 *)(param_1 + _DAT_11306e058) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306e060) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10431a288; end: 10431a2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a288(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010c24fbe0(*(undefined8 *)(unaff_x20 + _DAT_11306e058),param_2,param_1);
  if ((*(byte *)(unaff_x20 + _DAT_11306e050) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_11306e060),PTR_s_exposeScope__1125c4f30,param_1);
  return;
}



/* Entry: 10431a2e4; end: 10431a373; -[SCSendToPublicProfileOnboardingLauncher startOnboardingFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a2e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306e058);
  _objc_retain(param_3);
  _objc_retain();
  func_0x00010c24fbe0(uVar2,param_2,param_3);
  lVar1 = param_3;
  if ((*(byte *)(param_1 + _DAT_11306e050) & 1) == 0) {
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11306e060),param_2,param_3);
    lVar1 = param_1;
    param_1 = param_3;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10431a374; end: 10431a3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a374(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_11306e060);
  lVar1 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
    func_0x00010c12e1c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_11306e050) = 1;
  return;
}



/* Entry: 10431a3dc; end: 10431a46f; -[SCSendToPublicProfileOnboardingLauncher finishOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a3dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _DAT_11306e060;
  lVar4 = *(long *)(param_1 + _DAT_11306e060);
  lVar2 = param_1;
  _objc_retain();
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    _objc_release();
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c12e1c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  *(undefined1 *)(lVar2 + _DAT_11306e050) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10431a470; end: 10431a473;  */

void FUN_10431a470(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431a474; end: 10431a4a7;  */

void FUN_10431a474(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431a4a8; end: 10431a4df; -[SCSendToPublicProfileOnboardingLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a4a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306e058));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306e060));
  return;
}



/* Entry: 10431a4e0; end: 10431a623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000100336860();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11306e000) = param_1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306e010);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar3 + _DAT_11306e018) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11306e008) = param_5;
  *(undefined1 *)(lVar3 + _DAT_11306e038) = param_6;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306e020);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306e028);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11306e030);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _swift_unknownObjectRetain(param_4);
  _swift_retain(param_8);
  _swift_bridgeObjectRetain(param_3);
  func_0x000100b64c10(param_9,param_10);
  func_0x000100b64c10(param_11,param_12);
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431a624; end: 10431a643;  */

void FUN_10431a624(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10431a644; end: 10431a683;  */

void FUN_10431a644(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea138;
  _swift_getWitnessTable(&UNK_10dcea138,&UNK_110759218);
  puRam000000011306e068 = puVar1;
  return;
}



/* Entry: 10431a684; end: 10431a687;  */

void FUN_10431a684(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea1d8;
  _swift_getWitnessTable(&UNK_10dcea1d8,&UNK_110759238);
  puRam000000011306e070 = puVar1;
  return;
}



/* Entry: 10431a688; end: 10431a6c7;  */

void FUN_10431a688(void)

{
  undefined *puVar1;
  
  if (puRam000000011306e070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcea1d8;
  _swift_getWitnessTable(&UNK_10dcea1d8,&UNK_110759238);
  puRam000000011306e070 = puVar1;
  return;
}



/* Entry: 10431a6c8; end: 10431a6f7;  */

undefined1  [16] FUN_10431a6c8(void)

{
  return ZEXT816(0x110759218);
}



/* Entry: 10431a6f8; end: 10431a717;  */

void FUN_10431a6f8(void)

{
  _objc_opt_self(&PTR_PTR_11299b140);
  return;
}



/* Entry: 10431a718; end: 10431a7ef;  */

void FUN_10431a718(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010431a728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10431a7f0; end: 10431a7fb; -[_TtC32SCDiscoverFeedThumbnailRingScope32SCDiscoverFeedThumbnailRingScope tabBarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a7f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e0f0;
  _swift_beginAccess(param_1 + _DAT_11306e0f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431a7fc; end: 10431a807; -[_TtC32SCDiscoverFeedThumbnailRingScope32SCDiscoverFeedThumbnailRingScope setTabBarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e0f0;
  _swift_beginAccess(param_1 + _DAT_11306e0f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431a808; end: 10431a813; -[_TtC32SCDiscoverFeedThumbnailRingScope32SCDiscoverFeedThumbnailRingScope spotlightTabStoriesBadgeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a808(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e0f8;
  _swift_beginAccess(param_1 + _DAT_11306e0f8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431a814; end: 10431a857;  */

void FUN_10431a814(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431a858; end: 10431a863; -[_TtC32SCDiscoverFeedThumbnailRingScope32SCDiscoverFeedThumbnailRingScope setSpotlightTabStoriesBadgeObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e0f8;
  _swift_beginAccess(param_1 + _DAT_11306e0f8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431a864; end: 10431a8b7;  */

void FUN_10431a864(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431a8b8; end: 10431a95f; -[_TtC32SCDiscoverFeedThumbnailRingScope32SCDiscoverFeedThumbnailRingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431a8b8(long param_1)

{
  func_0x00010431a8f0(param_1 + _DAT_11306e0f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_11306e0f8);
  return;
}



/* Entry: 10431a960; end: 10431aa6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10431a960(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a8 [2];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x00010037f0fc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar1 = _DAT_11306e0f0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306e0f0,0);
  lVar2 = _DAT_11306e0f8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306e0f8,0);
  _swift_beginAccess(lVar4 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar1,param_1);
  _swift_beginAccess(lVar4 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  plVar5 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  aplStack_a8[0] = plVar5;
  func_0x00010008a7c8(&uStack_98,aplStack_a8);
  func_0x000100083b20(aplStack_a8);
  _swift_release(uStack_98);
  _swift_unknownObjectRelease(aplStack_a8[0]);
  return plVar5;
}



/* Entry: 10431aa6c; end: 10431aae3; -[_TtC32SCDiscoverFeedThumbnailRingScope40SCDiscoverFeedThumbnailRingScopeServices buildWithTabBarItem:spotlightTabStoriesBadgeObservable:] */

void FUN_10431aa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10431a960(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10431aae4; end: 10431aae7;  */

void FUN_10431aae4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431aae8; end: 10431ab1b;  */

void FUN_10431aae8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431ab1c; end: 10431ab3f; -[_TtC32SCDiscoverFeedThumbnailRingScope40SCDiscoverFeedThumbnailRingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ab1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306e108));
  return;
}



/* Entry: 10431ab40; end: 10431ab5f; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ab40(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306e160));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431ab60; end: 10431ab6b; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ab60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e168;
  _swift_beginAccess(param_1 + _DAT_11306e168,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431ab6c; end: 10431ab77; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ab6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e168;
  _swift_beginAccess(param_1 + _DAT_11306e168,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431ab78; end: 10431ab83; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope discoverPageDeckContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ab78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306e170;
  _swift_beginAccess(param_1 + _DAT_11306e170,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431ab84; end: 10431abc7;  */

void FUN_10431ab84(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10431abc8; end: 10431abd3; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope setDiscoverPageDeckContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431abc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306e170;
  _swift_beginAccess(param_1 + _DAT_11306e170,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431abd4; end: 10431ac27;  */

void FUN_10431abd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10431ac28; end: 10431ac37; -[_TtC19SCDiscoverFeedScope19SCDiscoverFeedScope footerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431ac28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306e178));
  return;
}


