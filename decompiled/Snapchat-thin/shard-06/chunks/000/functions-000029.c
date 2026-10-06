/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043f84a8; end: 1043f84cf; -[SCStoriesPostingSpotlightTile initWithCoder:] */

void FUN_1043f84a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043f8184();
  return;
}



/* Entry: 1043f84d0; end: 1043f8563; -[SCStoriesPostingSpotlightTile description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f84d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113076ba8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113076bb0 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076bb8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113076bb8))[1];
  _objc_retain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  func_0x000100de78a0(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar4);
  _objc_release(uVar3);
  func_0x0001000b44c0(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f8564; end: 1043f85df; -[SCStoriesPostingSpotlightTile init] */

void FUN_1043f8564(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingSpotlightTileWrapper.swift",0x3e,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f85ac);
  (*pcVar1)();
}



/* Entry: 1043f85e0; end: 1043f862f; -[SCStoriesPostingSpotlightTile .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f85e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076ba8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076bb0 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_113076bb8);
  uVar1 = ((ulong *)(param_1 + _DAT_113076bb8))[1];
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



/* Entry: 1043f8630; end: 1043f864f;  */

void FUN_1043f8630(void)

{
  _objc_opt_self(&PTR_PTR_1129ae030);
  return;
}



/* Entry: 1043f8650; end: 1043f8c6f;  */

long FUN_1043f8650(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043f8c70; end: 1043f8c8f; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8c70(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113076be8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f8c90; end: 1043f8c9f; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope repostMentionMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076bf0));
  return;
}



/* Entry: 1043f8ca0; end: 1043f8cbf; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope shareableMediaItemsProviding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8ca0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113076bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f8cc0; end: 1043f8cdf; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope contentModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8cc0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113076c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f8ce0; end: 1043f8d6b; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8ce0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113076c08;
  _swift_beginAccess(param_1 + _DAT_113076c08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f8d6c; end: 1043f8f0f; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f8d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113076c08;
  _swift_beginAccess(param_1 + _DAT_113076c08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043f8f10; end: 1043f8f1f; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope shouldApplyLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f8f10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076c10);
}



/* Entry: 1043f8f20; end: 1043f9063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043f8f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113076c08;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113076c08,0);
  *(undefined8 *)(unaff_x20 + _DAT_113076be8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076bf0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076bf8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113076c00) = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  *(undefined1 *)(unaff_x20 + _DAT_113076c10) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  puVar3 = auStack_88;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  return puVar3;
}



/* Entry: 1043f9064; end: 1043f912b; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope initWithUiContainer:repostMentionMetadata:shareableMediaItemsProviding:contentModel:delegate:shouldApplyLens:] */

undefined8
FUN_1043f9064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_3;
  FUN_1043f91f0(param_3,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  return uVar1;
}



/* Entry: 1043f912c; end: 1043f9187; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope init] */

void FUN_1043f912c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesRepostMentionScope.SCStoriesRepostMentionScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f9158);
  (*pcVar1)();
}



/* Entry: 1043f9188; end: 1043f91ef; -[_TtC27SCStoriesRepostMentionScope27SCStoriesRepostMentionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f9188(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113076be8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076bf0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113076bf8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113076c00));
  param_1 = param_1 + _DAT_113076c08;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043f91f0; end: 1043f92eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f91f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_113076c08;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113076c08,0);
  *(undefined8 *)(unaff_x20 + _DAT_113076be8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076bf0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076bf8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113076c00) = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  *(undefined1 *)(unaff_x20 + _DAT_113076c10) = param_6;
  func_0x000100337684();
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&stack0xffffffffffffff88,puVar1);
  return;
}



/* Entry: 1043f92ec; end: 1043f930f;  */

undefined8 FUN_1043f92ec(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043f9310; end: 1043f937b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9310(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100343700();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113076c48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043f937c; end: 1043f9383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f937c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100343700();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076c48) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043f9384; end: 1043f93cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9384(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076c48) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f93d0; end: 1043f953b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043f93d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000100337684();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113076c08;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113076c08,0);
  *(undefined8 *)(lVar4 + _DAT_113076be8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113076bf0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113076bf8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113076c00) = param_4;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_5);
  *(undefined1 *)(lVar4 + _DAT_113076c10) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 1043f953c; end: 1043f9617; -[_TtC27SCStoriesRepostMentionScope35SCStoriesRepostMentionScopeServices buildWithUiContainer:repostMentionMetadata:shareableMediaItemsProviding:contentModel:delegate:shouldApplyLens:] */

void FUN_1043f953c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043f93d0(param_3,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f9618; end: 1043f9677; -[_TtC27SCStoriesRepostMentionScope35SCStoriesRepostMentionScopeServices init] */

void FUN_1043f9618(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesRepostMentionScope.SCStoriesRepostMentionScopeServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f9644);
  (*pcVar1)();
}



/* Entry: 1043f9678; end: 1043f96a7; -[_TtC27SCStoriesRepostMentionScope35SCStoriesRepostMentionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113076c48));
  return;
}



/* Entry: 1043f96a8; end: 1043f96b3; -[SCStoriesRepostMentionMetadata mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076c90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076c90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f96b4; end: 1043f96c3; -[SCStoriesRepostMentionMetadata isVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f96b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076c98);
}



/* Entry: 1043f96c4; end: 1043f96cf; -[SCStoriesRepostMentionMetadata repostSourceSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076ca0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076ca0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f96d0; end: 1043f96db; -[SCStoriesRepostMentionMetadata promptRepostChatMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076ca8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076ca8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f96dc; end: 1043f96e7; -[SCStoriesRepostMentionMetadata userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076cb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076cb0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f96e8; end: 1043f96f7; -[SCStoriesRepostMentionMetadata musicTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076cb8));
  return;
}



/* Entry: 1043f96f8; end: 1043f9703; -[SCStoriesRepostMentionMetadata conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f96f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076cc0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076cc0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f9704; end: 1043f9713; -[SCStoriesRepostMentionMetadata isPublicStorySnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f9704(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076cc8);
}



/* Entry: 1043f9714; end: 1043f971f; -[SCStoriesRepostMentionMetadata publicStoryDestinationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9714(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076cd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076cd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f9720; end: 1043f972b; -[SCStoriesRepostMentionMetadata lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076cd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076cd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f972c; end: 1043f9783;  */

void FUN_1043f972c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043f9784; end: 1043f9793; -[SCStoriesRepostMentionMetadata customizationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076ce0));
  return;
}



/* Entry: 1043f9794; end: 1043f9a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9794(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076c90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113076c98) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ca0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ca8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cb0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113076cb8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cc0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113076cc8) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cd0);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cd8);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_113076ce0) = param_19;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043f9a8c; end: 1043f9c5f; -[SCStoriesRepostMentionMetadata initWithMediaId:isVideo:repostSourceSnapId:promptRepostChatMessageId:userId:musicTrack:conversationId:isPublicStorySnap:publicStoryDestinationId:lensId:customizationInfo:] */

void FUN_1043f9a8c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  undefined1 param_10,undefined4 param_11,long param_12,long param_13)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if (param_3 == 0) {
    uStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
    lStack_80 = param_3;
  }
  if (param_5 == 0) {
    uStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_2;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    lStack_a0 = param_6;
  }
  lVar2 = param_7;
  _objc_retain();
  _objc_retain();
  lVar3 = param_9;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    lStack_b8 = 0;
    uVar1 = 0;
    uVar4 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = param_2;
    _objc_release(lVar2);
    uVar1 = param_2;
    lStack_b8 = param_7;
  }
  if (lVar3 == 0) {
    param_9 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  if (param_12 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_12);
  }
  if (param_13 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_13);
  }
  func_0x0001043f9914(lStack_80,uStack_88,param_4,lStack_90,uStack_98,lStack_a0,uStack_a8,lStack_b8,
                      uVar1,param_8,param_9,uVar4,param_10);
  return;
}



/* Entry: 1043f9c60; end: 1043f9c9f;  */

undefined8 FUN_1043f9c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043fa540(param_1);
  FUN_1043fa730(param_1);
  return uVar1;
}



/* Entry: 1043f9ca0; end: 1043f9ca3; -[SCStoriesRepostMentionMetadata copyWithZone:] */

void FUN_1043f9ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f9ca4; end: 1043f9cd7; -[SCStoriesRepostMentionMetadata description] */

void FUN_1043f9ca4(void)

{
  undefined1 auStack_a0 [144];
  
  FUN_1043fa764(auStack_a0);
  FUN_1043fa730(auStack_a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f9cd8; end: 1043f9d1f; -[SCStoriesRepostMentionMetadata init] */

void FUN_1043f9cd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesRepostMentionScope/SCStoriesRepostMentionMetadataWrapper.swift",0x47,2,0x52,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f9d20);
  (*pcVar1)();
}



/* Entry: 1043f9d20; end: 1043f9d3b; +[SCStoriesRepostMentionMetadataBuilder storiesRepostMentionMetadata] */

void FUN_1043f9d20(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f9d3c; end: 1043f9d7b; +[SCStoriesRepostMentionMetadataBuilder storiesRepostMentionMetadataWithExistingStoriesRepostMentionMetadata:] */

void FUN_1043f9d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043fa8bc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043f9d7c; end: 1043f9d87; -[SCStoriesRepostMentionMetadataBuilder withMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9d7c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076ce8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9d88; end: 1043f9d97; -[SCStoriesRepostMentionMetadataBuilder withIsVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9d88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113076cf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f9d98; end: 1043f9da3; -[SCStoriesRepostMentionMetadataBuilder withRepostSourceSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9d98(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076cf8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9da4; end: 1043f9daf; -[SCStoriesRepostMentionMetadataBuilder withPromptRepostChatMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9da4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d00);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9db0; end: 1043f9dbb; -[SCStoriesRepostMentionMetadataBuilder withUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9db0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d08);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9dbc; end: 1043f9e03; -[SCStoriesRepostMentionMetadataBuilder withMusicTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f9dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076d10);
  *(undefined8 *)(param_1 + _DAT_113076d10) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f9e04; end: 1043f9e0f; -[SCStoriesRepostMentionMetadataBuilder withConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9e04(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d18);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9e10; end: 1043f9e1f; -[SCStoriesRepostMentionMetadataBuilder withIsPublicStorySnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9e10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113076d20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f9e20; end: 1043f9e2b; -[SCStoriesRepostMentionMetadataBuilder withPublicStoryDestinationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9e20(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d28);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9e2c; end: 1043f9e37; -[SCStoriesRepostMentionMetadataBuilder withLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9e2c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d30);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9e38; end: 1043f9e9b;  */

void FUN_1043f9e38(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f9e9c; end: 1043f9efb; -[SCStoriesRepostMentionMetadataBuilder withCustomizationInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f9e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076d38);
  *(undefined8 *)(param_1 + _DAT_113076d38) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f9efc; end: 1043fa18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f9efc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  byte bVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  long lStack_70;
  long lStack_68;
  
  bVar16 = *(byte *)(unaff_x20 + _DAT_113076cf0);
  if (bVar16 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113076cf0) = 0;
  }
  lVar21 = *(long *)(unaff_x20 + _DAT_113076d10);
  if (lVar21 == 0) {
    FUN_1043fab18(0x617254636973756d,0xea00000000006b63);
    _swift_willThrow();
  }
  else {
    bVar17 = *(byte *)(unaff_x20 + _DAT_113076d20);
    if (bVar17 == 2) {
      *(undefined1 *)(unaff_x20 + _DAT_113076d20) = 0;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113076ce8);
    uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113076ce8))[1];
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113076cf8);
    uVar10 = ((undefined8 *)(unaff_x20 + _DAT_113076cf8))[1];
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113076d00);
    uVar11 = ((undefined8 *)(unaff_x20 + _DAT_113076d00))[1];
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113076d08);
    uVar12 = ((undefined8 *)(unaff_x20 + _DAT_113076d08))[1];
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113076d18);
    uVar13 = ((undefined8 *)(unaff_x20 + _DAT_113076d18))[1];
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113076d28);
    uVar14 = ((undefined8 *)(unaff_x20 + _DAT_113076d28))[1];
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113076d30);
    uVar15 = ((undefined8 *)(unaff_x20 + _DAT_113076d30))[1];
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_113076d38);
    FUN_1043facc0();
    lVar19 = param_1;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076c90);
    *puVar1 = uVar2;
    puVar1[1] = uVar9;
    *(byte *)(lVar19 + _DAT_113076c98) = bVar16 & 1;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076ca0);
    *puVar1 = uVar3;
    puVar1[1] = uVar10;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076ca8);
    *puVar1 = uVar4;
    puVar1[1] = uVar11;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076cb0);
    *puVar1 = uVar5;
    puVar1[1] = uVar12;
    *(long *)(lVar19 + _DAT_113076cb8) = lVar21;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076cc0);
    *puVar1 = uVar6;
    puVar1[1] = uVar13;
    *(byte *)(lVar19 + _DAT_113076cc8) = bVar17 & 1;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076cd0);
    *puVar1 = uVar7;
    puVar1[1] = uVar14;
    puVar1 = (undefined8 *)(lVar19 + _DAT_113076cd8);
    *puVar1 = uVar8;
    puVar1[1] = uVar15;
    *(undefined8 *)(lVar19 + _DAT_113076ce0) = uVar20;
    puVar18 = PTR_s_init_1125d9248;
    lStack_70 = lVar19;
    lStack_68 = param_1;
    _objc_retain(lVar21);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar15);
    _objc_retain(uVar20);
    _objc_msgSendSuper2(&lStack_70,puVar18);
  }
  return;
}



/* Entry: 1043fa18c; end: 1043fa1f7; -[SCStoriesRepostMentionMetadataBuilder build] */

/* WARNING: Removing unreachable block (ram,0x0001043fa1d8) */

void FUN_1043fa18c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f9efc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fa1f8; end: 1043fa287; -[SCStoriesRepostMentionMetadataBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x0001043fa234) */
/* WARNING: Removing unreachable block (ram,0x0001043fa268) */
/* WARNING: Removing unreachable block (ram,0x0001043fa238) */

void FUN_1043fa1f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f9efc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fa288; end: 1043fa35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fa288(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ce8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113076cf0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cf8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d00);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076d10) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113076d20) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113076d38) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fa360; end: 1043fa37f; -[SCStoriesRepostMentionMetadataBuilder init] */

void FUN_1043fa360(void)

{
  FUN_1043fa288();
  return;
}



/* Entry: 1043fa380; end: 1043fa383;  */

void FUN_1043fa380(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043fa384; end: 1043fa447; -[SCStoriesRepostMentionMetadataBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fa384(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076ce8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076cf8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d00 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d08 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076d10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076d38));
  return;
}



/* Entry: 1043fa448; end: 1043fa47b;  */

void FUN_1043fa448(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043fa47c; end: 1043fa53f; -[SCStoriesRepostMentionMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fa47c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076c90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076ca0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076ca8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076cb0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076cb8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076cc0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076cd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076cd8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076ce0));
  return;
}



/* Entry: 1043fa540; end: 1043fa72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fa540(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [16];
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076c90);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_113076c98) = *(undefined1 *)(param_1 + 2);
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ca0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  uVar2 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076ca8);
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  uStack_78 = param_1[8];
  uStack_80 = param_1[7];
  uVar2 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cb0);
  puVar1[1] = param_1[8];
  *puVar1 = uVar2;
  uVar2 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_113076cb8) = uVar2;
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uVar3 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cc0);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113076cc8) = *(undefined1 *)(param_1 + 0xc);
  uStack_98 = param_1[0xe];
  uStack_a0 = param_1[0xd];
  uVar3 = param_1[0xd];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cd0);
  puVar1[1] = param_1[0xe];
  *puVar1 = uVar3;
  uStack_a8 = param_1[0x10];
  uStack_b0 = param_1[0xf];
  uVar3 = param_1[0xf];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076cd8);
  puVar1[1] = param_1[0x10];
  *puVar1 = uVar3;
  uStack_b8 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + _DAT_113076ce0) = uStack_b8;
  FUN_1043fad00(&uStack_50,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_60,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_70,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_80,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  _objc_retain(uVar2);
  FUN_1043fad00(&uStack_90,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_a0,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_b0,auStack_c8,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043fad00(&uStack_b8,auStack_c8,0x113076d90,&UNK_10dcf83a0);
  _objc_msgSendSuper2(&stack0xffffffffffffff28,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fa730; end: 1043fa763;  */

undefined8 FUN_1043fa730(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043f8868)();
  return param_1;
}



/* Entry: 1043fa764; end: 1043fa8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fa764(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar8 = *(undefined1 *)(param_2 + _DAT_113076c98);
  puVar1 = (undefined8 *)(param_2 + _DAT_113076c90);
  puVar2 = (undefined8 *)(param_2 + _DAT_113076ca0);
  puVar3 = (undefined8 *)(param_2 + _DAT_113076ca8);
  puVar4 = (undefined8 *)(param_2 + _DAT_113076cb0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113076cb8);
  uVar9 = *(undefined1 *)(param_2 + _DAT_113076cc8);
  puVar5 = (undefined8 *)(param_2 + _DAT_113076cc0);
  puVar6 = (undefined8 *)(param_2 + _DAT_113076cd0);
  puVar7 = (undefined8 *)(param_2 + _DAT_113076cd8);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113076ce0);
  uVar10 = puVar1[1];
  uVar13 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar13;
  *(undefined1 *)(param_1 + 2) = uVar8;
  uVar13 = puVar2[1];
  uVar14 = *puVar2;
  param_1[4] = puVar2[1];
  param_1[3] = uVar14;
  uVar14 = puVar3[1];
  uVar15 = *puVar3;
  param_1[6] = puVar3[1];
  param_1[5] = uVar15;
  uVar15 = puVar4[1];
  uVar16 = *puVar4;
  param_1[8] = puVar4[1];
  param_1[7] = uVar16;
  param_1[9] = uVar11;
  uVar16 = puVar5[1];
  uVar17 = *puVar5;
  param_1[0xb] = puVar5[1];
  param_1[10] = uVar17;
  *(undefined1 *)(param_1 + 0xc) = uVar9;
  uVar17 = puVar6[1];
  uVar18 = *puVar6;
  param_1[0xe] = puVar6[1];
  param_1[0xd] = uVar18;
  uVar18 = puVar7[1];
  uVar19 = *puVar7;
  param_1[0x10] = puVar7[1];
  param_1[0xf] = uVar19;
  param_1[0x11] = uVar12;
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain(uVar11);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar12);
  return;
}



/* Entry: 1043fa8bc; end: 1043fab17;  */

/* WARNING: Possible PIC construction at 0x0001043fa8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043fa8f4) */

void FUN_1043fa8bc(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043face0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043face0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043fab18; end: 1043facbf;  */

undefined * FUN_1043fab18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 1043facc0; end: 1043facff;  */

void FUN_1043facc0(void)

{
  _objc_opt_self(&PTR_PTR_1129ae2d0);
  return;
}



/* Entry: 1043fad00; end: 1043fad47;  */

undefined8 FUN_1043fad00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043fad48; end: 1043fad4b;  */

void FUN_1043fad48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043fad4c; end: 1043fada7; -[SCStoriesMentionRepostConfiguration repostSourceSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fad4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076d98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076d98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fada8; end: 1043fadb7; -[SCStoriesMentionRepostConfiguration musicTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fada8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076da0));
  return;
}



/* Entry: 1043fadb8; end: 1043fadcb; -[SCStoriesMentionRepostConfiguration shouldApplyLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fadb8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076da8);
}



/* Entry: 1043fadcc; end: 1043faef7; -[SCStoriesMentionRepostConfiguration initWithRepostSourceSnapId:musicTrack:shouldApplyLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fadcc(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076d98);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113076da0) = param_4;
  *(undefined1 *)(param_1 + _DAT_113076da8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1043faef8; end: 1043faefb; -[SCStoriesMentionRepostConfiguration copyWithZone:] */

void FUN_1043faef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043faefc; end: 1043faf17; -[SCStoriesMentionRepostConfiguration description] */

void FUN_1043faefc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043faf18; end: 1043faf5f; -[SCStoriesMentionRepostConfiguration init] */

void FUN_1043faf18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesRepostMentionScope/SCStoriesMentionRepostConfigurationWrapper.swift",0x4c,2,
             0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043faf60);
  (*pcVar1)();
}



/* Entry: 1043faf60; end: 1043faf7b; +[SCStoriesMentionRepostConfigurationBuilder storiesMentionRepostConfiguration] */

void FUN_1043faf60(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043faf7c; end: 1043fafbb; +[SCStoriesMentionRepostConfigurationBuilder storiesMentionRepostConfigurationWithExistingStoriesMentionRepostConfiguration:] */

void FUN_1043faf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043fb388(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043fafbc; end: 1043fb01f; -[SCStoriesMentionRepostConfigurationBuilder withRepostSourceSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fafbc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113076db0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043fb020; end: 1043fb067; -[SCStoriesMentionRepostConfigurationBuilder withMusicTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043fb020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076db8);
  *(undefined8 *)(param_1 + _DAT_113076db8) = param_3;
  _objc_retain(param_3);
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043fb068; end: 1043fb077; -[SCStoriesMentionRepostConfigurationBuilder withShouldApplyLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb068(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113076dc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043fb078; end: 1043fb173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb078(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_113076db8);
  if (lVar7 == 0) {
    FUN_1043fb46c(0x617254636973756d,0xea00000000006b63);
    _swift_willThrow();
  }
  else {
    bVar4 = *(byte *)(unaff_x20 + _DAT_113076dc0);
    if (bVar4 == 2) {
      *(undefined1 *)(unaff_x20 + _DAT_113076dc0) = 0;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113076db0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113076db0))[1];
    FUN_1043fb614();
    lVar6 = param_1;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar6 + _DAT_113076d98);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(long *)(lVar6 + _DAT_113076da0) = lVar7;
    *(byte *)(lVar6 + _DAT_113076da8) = bVar4 & 1;
    puVar5 = PTR_s_init_1125d9248;
    lStack_50 = lVar6;
    lStack_48 = param_1;
    _objc_retain(lVar7);
    _swift_bridgeObjectRetain(uVar3);
    _objc_msgSendSuper2(&lStack_50,puVar5);
  }
  return;
}



/* Entry: 1043fb174; end: 1043fb1df; -[SCStoriesMentionRepostConfigurationBuilder build] */

/* WARNING: Removing unreachable block (ram,0x0001043fb1c0) */

void FUN_1043fb174(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043fb078();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fb1e0; end: 1043fb26f; -[SCStoriesMentionRepostConfigurationBuilder safeBuildAndReturnError:] */

/* WARNING: Removing unreachable block (ram,0x0001043fb21c) */
/* WARNING: Removing unreachable block (ram,0x0001043fb250) */
/* WARNING: Removing unreachable block (ram,0x0001043fb220) */

void FUN_1043fb1e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043fb078();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fb270; end: 1043fb2d7; -[SCStoriesMentionRepostConfigurationBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb270(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_113076db0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_113076db8) = 0;
  *(undefined1 *)(param_1 + _DAT_113076dc0) = 2;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fb2d8; end: 1043fb2db;  */

void FUN_1043fb2d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043fb2dc; end: 1043fb317; -[SCStoriesMentionRepostConfigurationBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb2dc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076db0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076db8));
  return;
}



/* Entry: 1043fb318; end: 1043fb34b;  */

void FUN_1043fb318(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043fb34c; end: 1043fb387; -[SCStoriesMentionRepostConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb34c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076d98 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113076da0));
  return;
}



/* Entry: 1043fb388; end: 1043fb46b;  */

/* WARNING: Possible PIC construction at 0x0001043fb3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043fb3c0) */

void FUN_1043fb388(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043fb634();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043fb634();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043fb46c; end: 1043fb613;  */

undefined * FUN_1043fb46c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_90;
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0xd000000000000027,0x800000010f11f8b0);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x736e752073692027,0xea00000000007465);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f11f880);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar4);
  func_0x00010c00e2e0(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 1043fb614; end: 1043fb653;  */

void FUN_1043fb614(void)

{
  _objc_opt_self(&PTR_PTR_1129ae4f0);
  return;
}



/* Entry: 1043fb654; end: 1043fb65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076d98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076da0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113076da8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fb65c; end: 1043fb6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb65c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113076e18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076e20) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}


