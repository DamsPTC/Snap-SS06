/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10440c0c0; end: 10440c10b; -[_TtC32SCContextPlanDynamicStickerScope40SCContextPlanDynamicStickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077770));
  return;
}



/* Entry: 10440c10c; end: 10440c12b; -[SCContextPollsDynamicStickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c10c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130777c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440c12c; end: 10440c13b; -[SCContextPollsDynamicStickerScope pollTappableElement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130777d0));
  return;
}



/* Entry: 10440c13c; end: 10440c14b; -[SCContextPollsDynamicStickerScope pollInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130777d8));
  return;
}



/* Entry: 10440c14c; end: 10440c197; -[SCContextPollsDynamicStickerScope creatorDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c14c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130777e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130777e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440c198; end: 10440c227; -[SCContextPollsDynamicStickerScope pollDidVoteLoggingBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c198(long param_1)

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
  puVar1 = (undefined8 *)(param_1 + _DAT_1130777e8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110769b68;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10440c228; end: 10440c2e3; -[SCContextPollsDynamicStickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c228(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130777c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130777d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130777d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130777e0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130777e8 + 8));
  return;
}



/* Entry: 10440c2e4; end: 10440c40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10440c2e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_88 [2];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x00010033508c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar4 + _DAT_1130777c8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130777d0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_1130777d8) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130777e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130777e8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_7);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_88[0] = plVar5;
  func_0x00010008a7c8(&uStack_78,aplStack_88);
  func_0x000100083b20(aplStack_88);
  _swift_release(uStack_78);
  _swift_unknownObjectRelease(aplStack_88[0]);
  return plVar5;
}



/* Entry: 10440c410; end: 10440c513; -[_TtC33SCContextPollsDynamicStickerScope41SCContextPollsDynamicStickerScopeServices buildWithUiContainer:pollTappableElement:pollInfo:creatorDisplayName:pollDidVoteLoggingBlock:] */

void FUN_10440c410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  puVar1 = &UNK_110769b50;
  _swift_allocObject(&UNK_110769b50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10440c2e4(param_3,param_4,param_5,param_6,param_2,0x10440c56c,puVar1);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10440c514; end: 10440c517;  */

void FUN_10440c514(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440c518; end: 10440c54b;  */

void FUN_10440c518(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440c54c; end: 10440c597; -[_TtC33SCContextPollsDynamicStickerScope41SCContextPollsDynamicStickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130777f8));
  return;
}



/* Entry: 10440c598; end: 10440c5c3; -[SCContextRepliesSubscribeUpsellScope init] */

void FUN_10440c598(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextRepliesSubscribeUpsellScope.SCContextRepliesSubscribeUpsellScope",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440c5c4);
  (*pcVar1)();
}



/* Entry: 10440c5c4; end: 10440c69b; -[SCContextRepliesSubscribeUpsellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c5c4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077850));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077858));
  func_0x00010440c62c(param_1 + _DAT_113077860);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077878));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077880));
  return;
}



/* Entry: 10440c69c; end: 10440c803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10440c69c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                    undefined1 param_5,undefined8 param_6,undefined8 param_7)

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
  
  lVar3 = param_1;
  func_0x000100335158();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113077860;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113077860,0);
  *(long *)(lVar4 + _DAT_113077850) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113077858) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined1 *)(lVar4 + _DAT_113077868) = param_4;
  *(undefined1 *)(lVar4 + _DAT_113077870) = param_5;
  *(undefined8 *)(lVar4 + _DAT_113077878) = param_6;
  *(undefined8 *)(lVar4 + _DAT_113077880) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_7);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10440c804; end: 10440c8e7; -[_TtC36SCContextRepliesSubscribeUpsellScope44SCContextRepliesSubscribeUpsellScopeServices buildWithUiContainer:dataManaging:delegate:isOfficial:isBottomAlignedVariant:contextLogger:loggingSource:] */

void FUN_10440c804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10440c69c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10440c8e8; end: 10440c913; -[_TtC36SCContextRepliesSubscribeUpsellScope44SCContextRepliesSubscribeUpsellScopeServices init] */

void FUN_10440c8e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextRepliesSubscribeUpsellScope.SCContextRepliesSubscribeUpsellScopeServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440c914);
  (*pcVar1)();
}



/* Entry: 10440c914; end: 10440c917;  */

void FUN_10440c914(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440c918; end: 10440c94b;  */

void FUN_10440c918(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440c94c; end: 10440c983; -[_TtC36SCContextRepliesSubscribeUpsellScope44SCContextRepliesSubscribeUpsellScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440c94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077890));
  return;
}



/* Entry: 10440c984; end: 10440ca5b;  */

void FUN_10440c984(void)

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



/* Entry: 10440ca5c; end: 10440ca67;  */

void FUN_10440ca5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10440ca68; end: 10440ca73; -[SCContextOperaChromeScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440ca68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130778e8;
  _swift_beginAccess(param_1 + _DAT_1130778e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440ca74; end: 10440ca7f; -[SCContextOperaChromeScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440ca74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130778e8;
  _swift_beginAccess(param_1 + _DAT_1130778e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10440ca80; end: 10440ca8f; -[SCContextOperaChromeScope sessionParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440ca80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130778f0));
  return;
}



/* Entry: 10440ca90; end: 10440ca9f; -[SCContextOperaChromeScope operaPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440ca90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130778f8));
  return;
}



/* Entry: 10440caa0; end: 10440cabf; -[SCContextOperaChromeScope eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440caa0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113077900));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440cac0; end: 10440cacf; -[SCContextOperaChromeScope viewProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077908));
  return;
}



/* Entry: 10440cad0; end: 10440cadf; -[SCContextOperaChromeScope actionBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077910));
  return;
}



/* Entry: 10440cae0; end: 10440caef; -[SCContextOperaChromeScope embeddedComponentContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077918));
  return;
}



/* Entry: 10440caf0; end: 10440caff; -[SCContextOperaChromeScope fullscreenEmbeddedComponentContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440caf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077920));
  return;
}



/* Entry: 10440cb00; end: 10440cb0f; -[SCContextOperaChromeScope verticalActionsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077928));
  return;
}



/* Entry: 10440cb10; end: 10440cb1f; -[SCContextOperaChromeScope headerContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077930));
  return;
}



/* Entry: 10440cb20; end: 10440cb2f; -[SCContextOperaChromeScope topLevelCardsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077938));
  return;
}



/* Entry: 10440cb30; end: 10440cb3f; -[SCContextOperaChromeScope repostedStoryViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077940));
  return;
}



/* Entry: 10440cb40; end: 10440cb4f; -[SCContextOperaChromeScope watchSpotlightButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077948));
  return;
}



/* Entry: 10440cb50; end: 10440cb5f; -[SCContextOperaChromeScope promotedCTAContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077950));
  return;
}



/* Entry: 10440cb60; end: 10440cb6b; -[SCContextOperaChromeScope baseViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cb60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113077958;
  _swift_beginAccess(param_1 + _DAT_113077958,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440cb6c; end: 10440cbaf;  */

void FUN_10440cb6c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10440cbb0; end: 10440cbbb; -[SCContextOperaChromeScope setBaseViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cbb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113077958;
  _swift_beginAccess(param_1 + _DAT_113077958,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10440cbbc; end: 10440cc0f;  */

void FUN_10440cbbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10440cc10; end: 10440cc2f; -[SCContextOperaChromeScope backdropContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cc10(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113077960));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10440cc30; end: 10440cc3f; -[SCContextOperaChromeScope actionBarHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10440cc30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077968);
}



/* Entry: 10440cc40; end: 10440cc4f; -[SCContextOperaChromeScope hasDismissalUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10440cc40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077970);
}



/* Entry: 10440cc50; end: 10440cdb3; -[SCContextOperaChromeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440cc50(long param_1)

{
  func_0x000100db8250(param_1 + _DAT_1130778e8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130778f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130778f8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113077900));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077908));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077910));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077918));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077920));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077928));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077930));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077938));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077940));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077948));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077950));
  func_0x000100db8250(param_1 + _DAT_113077958);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113077960));
  return;
}



/* Entry: 10440cdb4; end: 10440d093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10440cdb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined1 param_18)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = param_2;
  func_0x000100349b08();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_1130778e8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_1130778e8,0);
  lVar3 = _DAT_113077958;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113077958,0);
  _swift_beginAccess(lVar5 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  *(undefined8 *)(lVar5 + _DAT_1130778f0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_1130778f8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113077900) = param_5;
  *(undefined8 *)(lVar5 + _DAT_113077908) = param_6;
  *(undefined8 *)(lVar5 + _DAT_113077910) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113077918) = param_8;
  *(undefined8 *)(lVar5 + _DAT_113077920) = param_9;
  *(undefined8 *)(lVar5 + _DAT_113077928) = param_10;
  *(undefined8 *)(lVar5 + _DAT_113077930) = param_11;
  *(undefined8 *)(lVar5 + _DAT_113077938) = param_12;
  *(undefined8 *)(lVar5 + _DAT_113077940) = param_14;
  *(undefined8 *)(lVar5 + _DAT_113077948) = param_15;
  *(undefined8 *)(lVar5 + _DAT_113077950) = param_13;
  _swift_beginAccess(lVar5 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_16);
  *(undefined8 *)(lVar5 + _DAT_113077960) = param_17;
  *(undefined8 *)(lVar5 + _DAT_113077968) = param_1;
  *(undefined1 *)(lVar5 + _DAT_113077970) = param_18;
  puVar1 = PTR_s_init_1125d9248;
  lStack_b8 = lVar5;
  lStack_b0 = lVar4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_13);
  _swift_unknownObjectRetain(param_17);
  plVar6 = &lStack_b8;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_d0[0] = plVar6;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  _swift_release(uStack_c0);
  _swift_unknownObjectRelease(aplStack_d0[0]);
  return plVar6;
}



/* Entry: 10440d094; end: 10440d303; -[_TtC25SCContextOperaChromeScope33SCContextOperaChromeScopeServices buildWithDelegate:sessionParams:operaPage:eventAnnouncer:viewProperties:actionBarContainer:embeddedComponentContainer:fullscreenEmbeddedComponentContainer:verticalActionsContainer:headerContainer:topLevelCardsContainer:promotedCTAContainer:repostedStoryViewContainer:watchSpotlightButtonContainer:baseViewController:backdropContainer:actionBarHeight:hasDismissalUI:] */

void FUN_10440d094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _swift_unknownObjectRetain(param_4);
  _objc_retain();
  _objc_retain();
  _swift_unknownObjectRetain(param_7);
  _objc_retain();
  uVar1 = param_9;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_12;
  _objc_retain();
  uVar3 = param_13;
  _objc_retain();
  uVar4 = param_14;
  _objc_retain();
  uVar5 = param_15;
  _objc_retain();
  uVar6 = param_16;
  _objc_retain();
  uVar7 = param_17;
  _objc_retain();
  uVar8 = param_18;
  _objc_retain();
  _swift_unknownObjectRetain(param_19);
  _objc_retain(param_2);
  uVar9 = param_4;
  FUN_10440cdb4(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _swift_unknownObjectRelease(param_19);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10440d304; end: 10440d307;  */

void FUN_10440d304(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440d308; end: 10440d33b;  */

void FUN_10440d308(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10440d33c; end: 10440d35f; -[_TtC25SCContextOperaChromeScope33SCContextOperaChromeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440d33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113077980));
  return;
}



/* Entry: 10440d360; end: 10440d39f;  */

void FUN_10440d360(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9d58;
  _swift_getWitnessTable(&UNK_10dcf9d58,&UNK_110769d10);
  puRam0000000113077988 = puVar1;
  return;
}



/* Entry: 10440d3a0; end: 10440d3c3;  */

undefined1  [16] FUN_10440d3a0(void)

{
  return ZEXT816(0x110769d10);
}



/* Entry: 10440d3c4; end: 10440d497;  */

void FUN_10440d3c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      __ss6HasherV8_combineyySuF(1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_10440d664(auStack_78,uVar1,&UNK_101cbec28);
    }
  }
  else if (bVar3 == 2) {
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10440d498; end: 10440d557;  */

void FUN_10440d498(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  bVar2 = *(byte *)(unaff_x20 + 3);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      __ss6HasherV8_combineyySuF(2);
      FUN_10440d664(param_1,uVar3,&UNK_101cbec28);
      return;
    }
    __ss6HasherV8_combineyySuF(1);
  }
  else {
    if (bVar2 != 2) {
      __ss6HasherV8_combineyySuF(0);
      return;
    }
    uVar1 = unaff_x20[1];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
  }
  __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 10440d558; end: 10440d627;  */

void FUN_10440d558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      __ss6HasherV8_combineyySuF(1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_10440d664(auStack_78,uVar1,&UNK_101cbec28);
    }
  }
  else if (bVar3 == 2) {
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10440d628; end: 10440d663;  */

uint FUN_10440d628(ulong *param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  
  uVar5 = *param_1;
  uVar9 = param_1[2];
  uVar8 = *param_2;
  uVar15 = param_2[1];
  uVar10 = param_2[2];
  cVar1 = (char)param_2[3];
  bVar2 = (byte)param_1[3];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
        uVar4 = 0;
        func_0x0001007bbbf8(0);
        uVar9 = uVar5;
        uVar10 = uVar8;
LAB_10440d7f8:
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar9,uVar10,uVar4);
        return (uint)uVar9 & 1;
      }
    }
    else if (cVar1 == '\x01') {
      if (uVar5 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar15 = uVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar8 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar8 & 0xffffffffffffff8;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar9 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar15 == uVar9) {
        if (uVar15 != 0) {
          uVar10 = uVar5 & 0xffffffffffffff8;
          uVar9 = uVar10;
          if ((uVar5 & 0x8000000000000000) != 0) {
            uVar9 = uVar5;
          }
          uVar6 = uVar10 + 0x20;
          if (uVar5 >> 0x3e != 0) {
            uVar6 = uVar9;
          }
          uVar11 = uVar8 & 0xffffffffffffff8;
          uVar9 = uVar11;
          if ((uVar8 & 0x8000000000000000) != 0) {
            uVar9 = uVar8;
          }
          uVar7 = uVar11 + 0x20;
          if (uVar8 >> 0x3e != 0) {
            uVar7 = uVar9;
          }
          if (uVar6 != uVar7) {
            if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10440de98);
              (*pcVar3)();
            }
            FUN_1044108c8(0,0x112e152f0,&PTR_PTR_1126b5b00);
            if (((uVar8 | uVar5) & 0xc000000000000001) == 0) {
              lVar12 = *(long *)(uVar10 + 0x10);
              lVar17 = *(long *)(uVar11 + 0x10);
              puVar13 = (ulong *)(uVar5 + 0x20);
              puVar16 = (undefined8 *)(uVar8 + 0x20);
              do {
                uVar15 = uVar15 - 1;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10440de18);
                  (*pcVar3)();
                }
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10440de1c);
                  (*pcVar3)();
                }
                uVar8 = *puVar13;
                uVar4 = *puVar16;
                _objc_retain();
                _objc_retain(uVar4);
                uVar5 = uVar8;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar4);
                uVar14 = (uint)uVar5;
                _objc_release(uVar8);
                _objc_release(uVar4);
                if ((uVar5 & 1) == 0) break;
                lVar17 = lVar17 + -1;
                lVar12 = lVar12 + -1;
                puVar13 = puVar13 + 1;
                puVar16 = puVar16 + 1;
              } while (uVar15 != 0);
            }
            else {
              lVar12 = 4;
              do {
                uVar15 = uVar15 - 1;
                uVar9 = lVar12 - 4;
                if ((uVar5 & 0xc000000000000001) == 0) {
                  if (*(long *)(uVar10 + 0x10) <= (long)uVar9) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10440de20);
                    (*pcVar3)();
                  }
                  uVar6 = *(ulong *)(uVar5 + lVar12 * 8);
                  _objc_retain();
                  if ((uVar8 & 0xc000000000000001) != 0) goto LAB_10440dd0c;
LAB_10440dd40:
                  if (*(long *)(uVar11 + 0x10) <= (long)uVar9) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10440de24);
                    (*pcVar3)();
                  }
                  uVar9 = *(ulong *)(uVar8 + lVar12 * 8);
                  _objc_retain(uVar9);
                }
                else {
                  uVar6 = uVar9;
                  (*(code *)&UNK_101cbec28)(uVar9,uVar5);
                  if ((uVar8 & 0xc000000000000001) == 0) goto LAB_10440dd40;
LAB_10440dd0c:
                  (*(code *)&UNK_101cbec28)(uVar9,uVar8);
                }
                uVar7 = uVar6;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,uVar9);
                uVar14 = (uint)uVar7;
                _objc_release(uVar6);
                _objc_release(uVar9);
              } while (((uVar7 & 1) != 0) && (lVar12 = lVar12 + 1, uVar15 != 0));
            }
            goto LAB_10440de70;
          }
        }
        uVar14 = 1;
      }
      else {
        uVar14 = 0;
      }
LAB_10440de70:
      return uVar14 & 1;
    }
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
      if (((uVar5 != uVar8) || (param_1[1] != uVar15)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar5,param_1[1],uVar8,uVar15,0), (uVar5 & 1) == 0)) {
        return 0;
      }
      uVar4 = 0;
      func_0x0001007bbbf8(0);
      goto LAB_10440d7f8;
    }
  }
  else if ((cVar1 == '\x03') && ((uVar15 == 0 && uVar8 == 0) && uVar10 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10440d664; end: 10440d757;  */

void FUN_10440d664(undefined8 param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 >> 0x3e == 0) {
    __ss6HasherV8_combineyySuF(*(undefined8 *)((param_2 & 0xffffffffffffff8) + 0x10));
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar5);
    __ss6HasherV8_combineyySuF();
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10440d758);
      (*pcVar1)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      puVar4 = (undefined8 *)(param_2 + 0x20);
      do {
        uVar3 = *puVar4;
        _objc_retain(uVar3);
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _objc_release(uVar3);
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar6 = 0;
      do {
        uVar2 = uVar6;
        (*param_3)(uVar6,param_2);
        uVar6 = uVar6 + 1;
        __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
        _swift_unknownObjectRelease(uVar2);
      } while (uVar5 != uVar6);
    }
  }
  return;
}



/* Entry: 10440d758; end: 10440d853;  */

uint FUN_10440d758(ulong param_1,long param_2,ulong param_3,byte param_4,ulong param_5,long param_6,
                  ulong param_7,char param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_4 < 2) {
    if (param_4 == 0) {
      if (param_8 == '\0') {
        uVar2 = 0;
        func_0x0001007bbbf8(0);
        param_3 = param_1;
        param_7 = param_5;
LAB_10440d7f8:
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_3,param_7,uVar2);
        return (uint)param_3 & 1;
      }
    }
    else if (param_8 == '\x01') {
      if (param_1 >> 0x3e == 0) {
        uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = param_1 & 0xffffffffffffff8;
        if ((param_1 & 0x8000000000000000) != 0) {
          uVar11 = param_1;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (param_5 >> 0x3e == 0) {
        uVar3 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = param_5 & 0xffffffffffffff8;
        if ((param_5 & 0x8000000000000000) != 0) {
          uVar3 = param_5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar11 == uVar3) {
        if (uVar11 != 0) {
          uVar6 = param_1 & 0xffffffffffffff8;
          uVar3 = uVar6;
          if ((param_1 & 0x8000000000000000) != 0) {
            uVar3 = param_1;
          }
          uVar4 = uVar6 + 0x20;
          if (param_1 >> 0x3e != 0) {
            uVar4 = uVar3;
          }
          uVar7 = param_5 & 0xffffffffffffff8;
          uVar3 = uVar7;
          if ((param_5 & 0x8000000000000000) != 0) {
            uVar3 = param_5;
          }
          uVar5 = uVar7 + 0x20;
          if (param_5 >> 0x3e != 0) {
            uVar5 = uVar3;
          }
          if (uVar4 != uVar5) {
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de98);
              (*pcVar1)();
            }
            FUN_1044108c8(0,0x112e152f0,&PTR_PTR_1126b5b00);
            if (((param_5 | param_1) & 0xc000000000000001) == 0) {
              lVar8 = *(long *)(uVar6 + 0x10);
              lVar13 = *(long *)(uVar7 + 0x10);
              puVar9 = (ulong *)(param_1 + 0x20);
              puVar12 = (undefined8 *)(param_5 + 0x20);
              do {
                uVar11 = uVar11 - 1;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de18);
                  (*pcVar1)();
                }
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de1c);
                  (*pcVar1)();
                }
                uVar6 = *puVar9;
                uVar2 = *puVar12;
                _objc_retain();
                _objc_retain(uVar2);
                uVar3 = uVar6;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,uVar2);
                uVar10 = (uint)uVar3;
                _objc_release(uVar6);
                _objc_release(uVar2);
                if ((uVar3 & 1) == 0) break;
                lVar13 = lVar13 + -1;
                lVar8 = lVar8 + -1;
                puVar9 = puVar9 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar11 != 0);
            }
            else {
              lVar8 = 4;
              do {
                uVar11 = uVar11 - 1;
                uVar3 = lVar8 - 4;
                if ((param_1 & 0xc000000000000001) == 0) {
                  if (*(long *)(uVar6 + 0x10) <= (long)uVar3) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de20);
                    (*pcVar1)();
                  }
                  uVar4 = *(ulong *)(param_1 + lVar8 * 8);
                  _objc_retain();
                  if ((param_5 & 0xc000000000000001) != 0) goto LAB_10440dd0c;
LAB_10440dd40:
                  if (*(long *)(uVar7 + 0x10) <= (long)uVar3) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de24);
                    (*pcVar1)();
                  }
                  uVar3 = *(ulong *)(param_5 + lVar8 * 8);
                  _objc_retain(uVar3);
                }
                else {
                  uVar4 = uVar3;
                  (*(code *)&UNK_101cbec28)(uVar3,param_1);
                  if ((param_5 & 0xc000000000000001) == 0) goto LAB_10440dd40;
LAB_10440dd0c:
                  (*(code *)&UNK_101cbec28)(uVar3,param_5);
                }
                uVar5 = uVar4;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,uVar3);
                uVar10 = (uint)uVar5;
                _objc_release(uVar4);
                _objc_release(uVar3);
              } while (((uVar5 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
            }
            goto LAB_10440de70;
          }
        }
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
LAB_10440de70:
      return uVar10 & 1;
    }
  }
  else if (param_4 == 2) {
    if (param_8 == '\x02') {
      if (((param_1 != param_5) || (param_2 != param_6)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
        return 0;
      }
      uVar2 = 0;
      func_0x0001007bbbf8(0);
      goto LAB_10440d7f8;
    }
  }
  else if ((param_8 == '\x03') && ((param_6 == 0 && param_5 == 0) && param_7 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 10440d854; end: 10440d857;  */

void FUN_10440d854(void)

{
  undefined *puVar1;
  
  if (puRam00000001130779e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9f10;
  _swift_getWitnessTable(&UNK_10dcf9f10,&UNK_110769ec8);
  puRam00000001130779e0 = puVar1;
  return;
}



/* Entry: 10440d858; end: 10440d897;  */

void FUN_10440d858(void)

{
  undefined *puVar1;
  
  if (puRam00000001130779e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9f10;
  _swift_getWitnessTable(&UNK_10dcf9f10,&UNK_110769ec8);
  puRam00000001130779e0 = puVar1;
  return;
}



/* Entry: 10440d898; end: 10440d8ab;  */

/* WARNING: Possible PIC construction at 0x0001031e1bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1bb0) */

void FUN_10440d898(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  uVar2 = param_1[1];
  if ((cVar1 != '\x02') && (uVar2 = *param_1, cVar1 != '\x01')) {
    if (cVar1 != '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,param_1[1],param_1[2]);
  return;
}



/* Entry: 10440d8ac; end: 10440d973;  */

undefined8 * FUN_10440d8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x00010320d790(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10440d974; end: 10440d9bf;  */

undefined8 * FUN_10440d974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x0001031e1b78(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10440d9c0; end: 10440dab7;  */

int FUN_10440d9c0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10440dab8; end: 10440dc03;  */

undefined8 FUN_10440dab8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_2 + 0x10)) {
    if ((lVar5 != 0) && (param_1 != param_2)) {
      puVar6 = (ulong *)(param_1 + 0x20);
      puVar7 = (ulong *)(param_2 + 0x20);
      do {
        uVar4 = *puVar6;
        uVar3 = *puVar7;
        switch(uVar4) {
        case 0:
          if (uVar3 != 0) goto LAB_10440dbe0;
          break;
        case 1:
          if (uVar3 != 1) goto LAB_10440dbe0;
          break;
        case 2:
          if (uVar3 != 2) goto LAB_10440dbe0;
          break;
        case 3:
          if (uVar3 != 3) goto LAB_10440dbe0;
          break;
        case 4:
          if (uVar3 != 4) goto LAB_10440dbe0;
          break;
        case 5:
          if (uVar3 != 5) goto LAB_10440dbe0;
          break;
        case 6:
          if (uVar3 != 6) goto LAB_10440dbe0;
          break;
        case 7:
          if (uVar3 != 7) goto LAB_10440dbe0;
          break;
        case 8:
          if (uVar3 != 8) goto LAB_10440dbe0;
          break;
        case 9:
          if (uVar3 != 9) goto LAB_10440dbe0;
          break;
        case 10:
          if (uVar3 != 10) goto LAB_10440dbe0;
          break;
        default:
          if (uVar3 < 0xb) goto LAB_10440dbe0;
          func_0x000103202330(uVar3);
          func_0x000103202330(uVar4);
          uVar1 = uVar4;
          FUN_10440dab8(uVar4,uVar3);
          func_0x00010321d6b8(uVar3);
          func_0x00010321d6b8(uVar4);
          if ((uVar1 & 1) == 0) goto LAB_10440dbe0;
        }
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar5 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_10440dbe0:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10440dc04; end: 10440dc1f;  */

uint FUN_10440dc04(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de98);
          (*pcVar1)();
        }
        FUN_1044108c8(0,0x112e152f0,&PTR_PTR_1126b5b00);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de18);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de1c);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de20);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10440dd40;
LAB_10440dd0c:
              (*(code *)&UNK_101cbec28)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*(code *)&UNK_101cbec28)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10440dd0c;
LAB_10440dd40:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de24);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_10440de70;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_10440de70:
  return uVar10 & 1;
}



/* Entry: 10440dc20; end: 10440dfa7;  */

uint FUN_10440dc20(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de98);
          (*pcVar1)();
        }
        FUN_1044108c8(0,param_3,param_4);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de18);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de1c);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de20);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_10440dd40;
LAB_10440dd0c:
              (*param_5)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*param_5)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_10440dd0c;
LAB_10440dd40:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10440de24);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_10440de70;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_10440de70:
  return uVar10 & 1;
}



/* Entry: 10440dfa8; end: 10440dfb3;  */

void FUN_10440dfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e8047dc);
  return;
}



/* Entry: 10440dfb4; end: 10440dfdf;  */

undefined1  [16] FUN_10440dfb4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10440dfe0; end: 10440e00b;  */

void FUN_10440dfe0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010440dff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x24));
  return;
}



/* Entry: 10440e00c; end: 10440e063;  */

undefined8 FUN_10440e00c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x2c));
  uVar2 = *puVar1;
  func_0x00010320d790(uVar2,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  return uVar2;
}



/* Entry: 10440e064; end: 10440e06f;  */

undefined1 FUN_10440e064(long param_1)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x30));
}



/* Entry: 10440e070; end: 10440e0a7;  */

undefined1  [16] FUN_10440e070(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x34));
  auVar2 = *pauVar1;
  func_0x0001032098fc(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10440e0a8; end: 10440e2e3;  */

void FUN_10440e0a8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = unaff_x20[1];
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar4);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(uVar5);
  __sSH4hash4intoys6HasherVz_tFTj
            ((long)*(int *)(param_2 + 0x24),param_1,uVar5,
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  FUN_104410e68(param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(param_2 + 0x2c));
  uVar5 = *puVar1;
  bVar3 = *(byte *)(puVar1 + 3);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      __ss6HasherV8_combineyySuF(1);
      __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      func_0x00010440d658(param_1,uVar5);
    }
  }
  else if (bVar3 == 2) {
    uVar2 = puVar1[1];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
  }
  else {
    __ss6HasherV8_combineyySuF(0);
  }
  __ss6HasherV8_combineyySuF(*(undefined1 *)((long)unaff_x20 + (long)*(int *)(param_2 + 0x30)));
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(param_2 + 0x34));
  lVar4 = puVar1[1];
  if (lVar4 == 3) {
    uVar5 = 2;
  }
  else if (lVar4 == 2) {
    uVar5 = 1;
  }
  else {
    if (lVar4 != 1) {
      uVar5 = *puVar1;
      __ss6HasherV8_combineyySuF(3);
      if (lVar4 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        return;
      }
      __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar5,lVar4);
      return;
    }
    uVar5 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar5);
  return;
}



/* Entry: 10440e2e4; end: 10440e327;  */

void FUN_10440e2e4(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10440e0a8(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10440e328; end: 10440e32f;  */

void FUN_10440e328(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10440e0a8(auStack_68,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10440e330; end: 10440e36f;  */

void FUN_10440e330(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10440e0a8(auStack_68,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10440e370; end: 10440e60f;  */

undefined8 FUN_10440e370(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar9 = 0;
  uVar12 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar12 != 0) {
      return 0;
    }
  }
  else {
    if (uVar12 == 0) {
      return 0;
    }
    uVar7 = *param_1;
    if ((uVar7 != *param_2 || param_1[1] != uVar12) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar8 = 0;
  FUN_10440dfa8(0,param_3,param_4);
  uVar12 = (long)param_1 + (long)*(int *)(lVar8 + 0x24);
  __sSQ2eeoiySbx_xtFZTj
            (uVar12,(long)param_2 + (long)*(int *)(lVar8 + 0x24),param_3,
             *(undefined8 *)(*(long *)(param_4 + 8) + 8));
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
  uStack_168 = puVar1[0x15];
  uStack_170 = puVar1[0x14];
  uStack_158 = puVar1[0x17];
  uStack_160 = puVar1[0x16];
  uStack_148 = puVar1[0x19];
  uStack_150 = puVar1[0x18];
  uStack_140 = puVar1[0x1a];
  uStack_1a8 = puVar1[0xd];
  uStack_1b0 = puVar1[0xc];
  uStack_198 = puVar1[0xf];
  uStack_1a0 = puVar1[0xe];
  uStack_188 = puVar1[0x11];
  uStack_190 = puVar1[0x10];
  uStack_178 = puVar1[0x13];
  uStack_180 = puVar1[0x12];
  uStack_1e8 = puVar1[5];
  uStack_1f0 = puVar1[4];
  uStack_1d8 = puVar1[7];
  uStack_1e0 = puVar1[6];
  uStack_1c8 = puVar1[9];
  uStack_1d0 = puVar1[8];
  uStack_1b8 = puVar1[0xb];
  uStack_1c0 = puVar1[10];
  uStack_208 = puVar1[1];
  uStack_210 = *puVar1;
  uStack_1f8 = puVar1[3];
  uStack_200 = puVar1[2];
  uStack_88 = puVar2[0x15];
  uStack_90 = puVar2[0x14];
  uStack_78 = puVar2[0x17];
  uStack_80 = puVar2[0x16];
  uStack_68 = puVar2[0x19];
  uStack_70 = puVar2[0x18];
  uStack_60 = puVar2[0x1a];
  uStack_c8 = puVar2[0xd];
  uStack_d0 = puVar2[0xc];
  uStack_b8 = puVar2[0xf];
  uStack_c0 = puVar2[0xe];
  uStack_a8 = puVar2[0x11];
  uStack_b0 = puVar2[0x10];
  uStack_98 = puVar2[0x13];
  uStack_a0 = puVar2[0x12];
  uStack_108 = puVar2[5];
  uStack_110 = puVar2[4];
  uStack_f8 = puVar2[7];
  uStack_100 = puVar2[6];
  uStack_e8 = puVar2[9];
  uStack_f0 = puVar2[8];
  uStack_d8 = puVar2[0xb];
  uStack_e0 = puVar2[10];
  uStack_128 = puVar2[1];
  uStack_130 = *puVar2;
  uStack_118 = puVar2[3];
  uStack_120 = puVar2[2];
  FUN_104411144(&uStack_210,&uStack_130);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  puVar3 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
  puVar4 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
  uVar9 = *puVar3;
  bVar5 = (byte)puVar3[3];
  uVar12 = *puVar4;
  cVar6 = (char)puVar4[3];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar6 != '\0') {
        return 0;
      }
      FUN_1044108c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar10 = uVar9;
      uVar11 = uVar12;
      goto LAB_10440e55c;
    }
    if (cVar6 != '\x01') {
      return 0;
    }
    FUN_10440dc20(uVar9,uVar12,0x112e152f0,&PTR_PTR_1126b5b00,&UNK_101cbec28);
    uVar10 = uVar9;
  }
  else {
    uVar7 = puVar4[1];
    uVar11 = puVar4[2];
    if (bVar5 != 2) {
      if (cVar6 != '\x03') {
        return 0;
      }
      if ((uVar7 != 0 || uVar12 != 0) || uVar11 != 0) {
        return 0;
      }
      goto LAB_10440e5ac;
    }
    if (cVar6 != '\x02') {
      return 0;
    }
    uVar10 = puVar3[2];
    if (((uVar9 != uVar12) || (puVar3[1] != uVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,puVar3[1],uVar12,uVar7,0), (uVar9 & 1) == 0)) {
      return 0;
    }
    FUN_1044108c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
LAB_10440e55c:
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,uVar11);
  }
  if ((uVar10 & 1) == 0) {
    return 0;
  }
LAB_10440e5ac:
  if (*(char *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) !=
      *(char *)((long)param_2 + (long)*(int *)(lVar8 + 0x30))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x34));
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
  uVar9 = *param_1;
  uVar12 = param_1[1];
  uVar7 = param_2[1];
  if (uVar12 == 3) {
    if (uVar7 == 3) {
      return 1;
    }
  }
  else if (uVar12 == 2) {
    if (uVar7 == 2) {
      return 1;
    }
  }
  else if (uVar12 == 1) {
    if (uVar7 == 1) {
      return 1;
    }
  }
  else if (2 < uVar7 - 1) {
    if (uVar12 == 0) {
      if (uVar7 == 0) {
        return 1;
      }
    }
    else if (uVar7 != 0) {
      if ((uVar9 == *param_2) && (uVar12 == uVar7)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((uVar9 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10440e610; end: 10440e61b;  */

undefined8 FUN_10440e610(ulong *param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  uVar11 = 0;
  uVar14 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar14 != 0) {
      return 0;
    }
  }
  else {
    if (uVar14 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if ((uVar9 != *param_2 || param_1[1] != uVar14) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar10 = 0;
  FUN_10440dfa8(0,uVar5,lVar6);
  uVar14 = (long)param_1 + (long)*(int *)(lVar10 + 0x24);
  __sSQ2eeoiySbx_xtFZTj
            (uVar14,(long)param_2 + (long)*(int *)(lVar10 + 0x24),uVar5,
             *(undefined8 *)(*(long *)(lVar6 + 8) + 8));
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
  uStack_168 = puVar1[0x15];
  uStack_170 = puVar1[0x14];
  uStack_158 = puVar1[0x17];
  uStack_160 = puVar1[0x16];
  uStack_148 = puVar1[0x19];
  uStack_150 = puVar1[0x18];
  uStack_140 = puVar1[0x1a];
  uStack_1a8 = puVar1[0xd];
  uStack_1b0 = puVar1[0xc];
  uStack_198 = puVar1[0xf];
  uStack_1a0 = puVar1[0xe];
  uStack_188 = puVar1[0x11];
  uStack_190 = puVar1[0x10];
  uStack_178 = puVar1[0x13];
  uStack_180 = puVar1[0x12];
  uStack_1e8 = puVar1[5];
  uStack_1f0 = puVar1[4];
  uStack_1d8 = puVar1[7];
  uStack_1e0 = puVar1[6];
  uStack_1c8 = puVar1[9];
  uStack_1d0 = puVar1[8];
  uStack_1b8 = puVar1[0xb];
  uStack_1c0 = puVar1[10];
  uStack_208 = puVar1[1];
  uStack_210 = *puVar1;
  uStack_1f8 = puVar1[3];
  uStack_200 = puVar1[2];
  uStack_88 = puVar2[0x15];
  uStack_90 = puVar2[0x14];
  uStack_78 = puVar2[0x17];
  uStack_80 = puVar2[0x16];
  uStack_68 = puVar2[0x19];
  uStack_70 = puVar2[0x18];
  uStack_60 = puVar2[0x1a];
  uStack_c8 = puVar2[0xd];
  uStack_d0 = puVar2[0xc];
  uStack_b8 = puVar2[0xf];
  uStack_c0 = puVar2[0xe];
  uStack_a8 = puVar2[0x11];
  uStack_b0 = puVar2[0x10];
  uStack_98 = puVar2[0x13];
  uStack_a0 = puVar2[0x12];
  uStack_108 = puVar2[5];
  uStack_110 = puVar2[4];
  uStack_f8 = puVar2[7];
  uStack_100 = puVar2[6];
  uStack_e8 = puVar2[9];
  uStack_f0 = puVar2[8];
  uStack_d8 = puVar2[0xb];
  uStack_e0 = puVar2[10];
  uStack_128 = puVar2[1];
  uStack_130 = *puVar2;
  uStack_118 = puVar2[3];
  uStack_120 = puVar2[2];
  FUN_104411144(&uStack_210,&uStack_130);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  puVar3 = (ulong *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
  puVar4 = (ulong *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
  uVar11 = *puVar3;
  bVar7 = (byte)puVar3[3];
  uVar14 = *puVar4;
  cVar8 = (char)puVar4[3];
  if (bVar7 < 2) {
    if (bVar7 == 0) {
      if (cVar8 != '\0') {
        return 0;
      }
      FUN_1044108c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar12 = uVar11;
      uVar13 = uVar14;
      goto LAB_10440e55c;
    }
    if (cVar8 != '\x01') {
      return 0;
    }
    FUN_10440dc20(uVar11,uVar14,0x112e152f0,&PTR_PTR_1126b5b00,&UNK_101cbec28);
    uVar12 = uVar11;
  }
  else {
    uVar9 = puVar4[1];
    uVar13 = puVar4[2];
    if (bVar7 != 2) {
      if (cVar8 != '\x03') {
        return 0;
      }
      if ((uVar9 != 0 || uVar14 != 0) || uVar13 != 0) {
        return 0;
      }
      goto LAB_10440e5ac;
    }
    if (cVar8 != '\x02') {
      return 0;
    }
    uVar12 = puVar3[2];
    if (((uVar11 != uVar14) || (puVar3[1] != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,puVar3[1],uVar14,uVar9,0), (uVar11 & 1) == 0)) {
      return 0;
    }
    FUN_1044108c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
LAB_10440e55c:
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar12,uVar13);
  }
  if ((uVar12 & 1) == 0) {
    return 0;
  }
LAB_10440e5ac:
  if (*(char *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) !=
      *(char *)((long)param_2 + (long)*(int *)(lVar10 + 0x30))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
  uVar11 = *param_1;
  uVar14 = param_1[1];
  uVar9 = param_2[1];
  if (uVar14 == 3) {
    if (uVar9 == 3) {
      return 1;
    }
  }
  else if (uVar14 == 2) {
    if (uVar9 == 2) {
      return 1;
    }
  }
  else if (uVar14 == 1) {
    if (uVar9 == 1) {
      return 1;
    }
  }
  else if (2 < uVar9 - 1) {
    if (uVar14 == 0) {
      if (uVar9 == 0) {
        return 1;
      }
    }
    else if (uVar9 != 0) {
      if ((uVar11 == *param_2) && (uVar14 == uVar9)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((uVar11 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10440e61c; end: 10440e92f;  */

uint FUN_10440e61c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  uStack_90 = param_1;
  __sSqMa(0,param_3);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_88 + (-8 - extraout_x8);
  lVar8 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x112f4b310;
  FUN_10440f1e8(param_2,auStack_88,0x112f4b310,&UNK_10db9fef0);
  func_0x0001000285a8(0x112f4b310,&UNK_10db9fef0);
  puVar3 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar2,param_3,6);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_3);
    (**(code **)(lVar5 + 8))(puVar6,lVar1);
    uVar4 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_3);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_3);
    uVar2 = uStack_90;
    __sSQ2eeoiySbx_xtFZTj(uStack_90,lVar7,param_3,*(undefined8 *)(*(long *)(param_4 + 8) + 8));
    uVar4 = (uint)uVar2;
    (**(code **)(lVar8 + 8))(lVar7,param_3);
  }
  return uVar4 & 1;
}



/* Entry: 10440e930; end: 10440e993;  */

undefined8 FUN_10440e930(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10440f164(param_1,param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return uVar1;
}



/* Entry: 10440e994; end: 10440ea3b; -[SCContextActionItem title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440e994(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uStack_118;
  undefined8 uStack_110;
  
  lVar1 = param_1 + _DAT_1130779e8;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  pcVar4 = *(code **)(lVar2 + 0x30);
  _objc_retain(param_1);
  (*pcVar4)(&uStack_118,uVar3,lVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRetain(uStack_110);
  func_0x00010322ed34(&uStack_118);
  uVar3 = uStack_118;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_118,uStack_110);
  _swift_bridgeObjectRelease(uStack_110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10440ea3c; end: 10440eaaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10440ea3c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long unaff_x20;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar1 = unaff_x20 + _DAT_1130779e8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x30))(&uStack_108,uVar2,lVar3);
  auVar4._8_8_ = uStack_100;
  auVar4._0_8_ = uStack_108;
  _swift_bridgeObjectRetain(uStack_100);
  func_0x00010322ed34(&uStack_108);
  return auVar4;
}



/* Entry: 10440eab0; end: 10440eae3; -[SCContextActionItem image] */

void FUN_10440eab0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10440eae4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10440eae4; end: 10440ef5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10440eae4(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  undefined1 auStack_358 [24];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_29f;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1df;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_12f;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  
  lVar1 = unaff_x20 + _DAT_1130779e8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar5,uVar2,&UNK_10e804840,&UNK_10e804858);
  lStack_360 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_360 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)&lStack_370 - extraout_x8;
  (**(code **)(lVar5 + 0x28))(uVar10,uVar2,lVar5);
  _swift_getAssociatedConformanceWitness(lVar5,uVar2,lVar4,&UNK_10e804840,&UNK_10e804850);
  lVar6 = lVar5;
  func_0x00010322afe0();
  uVar7 = uVar10;
  func_0x00010322b46c(uVar10,lVar4,&UNK_11076ad50,lVar5,lVar6);
  if ((uVar7 & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    lVar8 = 0;
    _swift_getAssociatedTypeWitness(0,lVar5,uVar2,&UNK_10e804840,&UNK_10e804858);
    lStack_370 = *(long *)(lVar8 + -8);
    uStack_368 = uVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_370 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar11 = uVar10 - extraout_x8_00;
    (**(code **)(lVar5 + 0x28))(uVar11,uVar2,lVar5);
    _swift_getAssociatedConformanceWitness(lVar5,uVar2,lVar8,&UNK_10e804840,&UNK_10e804850);
    lVar6 = lVar5;
    func_0x00010322b060();
    uVar7 = uVar11;
    func_0x00010322b46c(uVar11,lVar8,&UNK_11076af50,lVar5,lVar6);
    (**(code **)(lStack_370 + 8))(uVar11,lVar8);
    (**(code **)(lStack_360 + 8))(uVar10,lVar4);
    if ((uVar7 & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar2);
      (**(code **)(lVar5 + 0x30))(auStack_358,uVar2,lVar5);
      uStack_98 = uStack_2b8;
      uStack_a0 = uStack_2c0;
      uStack_90 = uStack_2b0;
      uStack_7f = uStack_29f;
      uStack_d8 = uStack_2f8;
      uStack_e0 = uStack_300;
      uStack_c8 = uStack_2e8;
      uStack_d0 = uStack_2f0;
      uStack_b8 = uStack_2d8;
      uStack_c0 = uStack_2e0;
      uStack_a8 = uStack_2c8;
      uStack_b0 = uStack_2d0;
      uStack_118 = uStack_338;
      uStack_120 = uStack_340;
      uStack_108 = uStack_328;
      uStack_110 = uStack_330;
      uStack_f8 = uStack_318;
      uStack_100 = uStack_320;
      uStack_e8 = uStack_308;
      uStack_f0 = uStack_310;
      puVar9 = &uStack_120;
      func_0x000103233944();
      if ((int)puVar9 == 1) {
        func_0x00010322ed34(auStack_358);
        return (undefined8 *)0x0;
      }
      uStack_148 = uStack_98;
      uStack_150 = uStack_a0;
      uStack_140 = uStack_90;
      uStack_12f = uStack_7f;
      uStack_188 = uStack_d8;
      uStack_190 = uStack_e0;
      uStack_178 = uStack_c8;
      uStack_180 = uStack_d0;
      uStack_168 = uStack_b8;
      uStack_170 = uStack_c0;
      uStack_158 = uStack_a8;
      uStack_160 = uStack_b0;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      func_0x000104411f90();
      func_0x00010322ed34(auStack_358);
      return puVar9;
    }
  }
  else {
    (**(code **)(lStack_360 + 8))(uVar10,lVar4);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar5 + 0x30))(auStack_358,uVar2,lVar5);
  uStack_1f8 = uStack_2b8;
  uStack_200 = uStack_2c0;
  uStack_1f0 = uStack_2b0;
  uStack_1df = uStack_29f;
  uStack_238 = uStack_2f8;
  uStack_240 = uStack_300;
  uStack_228 = uStack_2e8;
  uStack_230 = uStack_2f0;
  uStack_218 = uStack_2d8;
  uStack_220 = uStack_2e0;
  uStack_208 = uStack_2c8;
  uStack_210 = uStack_2d0;
  uStack_278 = uStack_338;
  uStack_280 = uStack_340;
  uStack_268 = uStack_328;
  uStack_270 = uStack_330;
  uStack_258 = uStack_318;
  uStack_260 = uStack_320;
  uStack_248 = uStack_308;
  uStack_250 = uStack_310;
  FUN_10440f1e8(&uStack_280,&uStack_120,0x112f4d5c8,&UNK_10db9f700);
  func_0x00010322ed34(auStack_358);
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_140 = uStack_1f0;
  uStack_12f = uStack_1df;
  uStack_188 = uStack_238;
  uStack_190 = uStack_240;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  iVar3 = (int)&uStack_1d0;
  func_0x000103233944();
  if (iVar3 != 1) {
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_90 = uStack_140;
    uStack_7f = uStack_12f;
    uStack_d8 = uStack_188;
    uStack_e0 = uStack_190;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_f8 = uStack_1a8;
    uStack_100 = uStack_1b0;
    uStack_e8 = uStack_198;
    uStack_f0 = uStack_1a0;
    iVar3 = (int)&uStack_120;
    func_0x000103238538();
    puVar9 = &uStack_120;
    func_0x000100db82a0();
    if (((2 < iVar3) && (iVar3 < 5)) && (iVar3 != 3)) {
      puVar9 = (undefined8 *)puVar9[1];
      _objc_retain(puVar9);
      func_0x000104410158(&uStack_280,0x112f4d5c8,&UNK_10db9f700);
      return puVar9;
    }
    func_0x000104410158(&uStack_280,0x112f4d5c8,&UNK_10db9f700);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10440ef5c; end: 10440f0f3; -[SCContextActionItem matchActionWithContext:contextArray:opera:none:] */

/* WARNING: Possible PIC construction at 0x0001031e1bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031e1bb0) */
/* WARNING: Removing unreachable block (ram,0x0001031e1bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440ef5c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar4 = param_1 + _DAT_1130779e8;
  lVar2 = *(long *)(lVar4 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x20);
  lVar6 = param_3;
  lVar8 = param_4;
  func_0x0001000a8868(lVar4,lVar2);
  uVar7 = (uint)lVar8;
  pcVar9 = *(code **)(lVar5 + 0x38);
  _objc_retain(param_1);
  (*pcVar9)(lVar2,lVar5);
  uVar7 = uVar7 & 0xff;
  if (uVar7 < 2) {
    bVar1 = uVar7 != 0;
    if (bVar1) {
      uVar3 = 0;
      FUN_1044108c8(0,0x112e152f0,&PTR_PTR_1126b5b00);
      lVar4 = lVar2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar3);
      (**(code **)(param_4 + 0x10))(param_4,lVar4);
      _objc_release(param_1);
      _objc_release(lVar4);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,lVar2);
      _objc_release(param_1);
    }
    lVar4 = lVar5;
    if ((bVar1 == true) || (lVar4 = lVar2, bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4,lVar5,lVar6);
      return;
    }
  }
  else if (uVar7 == 2) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    (**(code **)(param_5 + 0x10))(param_5,lVar2,lVar6);
    _objc_release(lVar6);
    _swift_bridgeObjectRelease(lVar5);
    _objc_release(param_1);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10440f0f4; end: 10440f153; -[SCContextActionItem init] */

void FUN_10440f0f4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContextActionItemPlugInScope._ActionItemObjC",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10440f120);
  (*pcVar1)();
}



/* Entry: 10440f154; end: 10440f163; -[SCContextActionItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440f154(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_1130779e8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130779e8));
  return;
}



/* Entry: 10440f164; end: 10440f1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440f164(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = unaff_x20 + _DAT_1130779e8;
  *(long *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  func_0x0001000c5db4();
  (**(code **)(*(long *)(param_2 + -8) + 0x10))();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440f1e8; end: 10440f22f;  */

undefined8 FUN_10440f1e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10440f230; end: 10440f237;  */

undefined8 FUN_10440f230(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x18);
}



/* Entry: 10440f238; end: 10440f263;  */

void FUN_10440f238(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcf9fa4;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10440f264; end: 10440f27b;  */

void FUN_10440f264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcf9fe4,param_1);
  return;
}



/* Entry: 10440f27c; end: 10440f31b;  */

void FUN_10440f27c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10dcfa020;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dcfa038;
    puStack_38 = &UNK_10dcfa050;
    puStack_30 = &UNK_10dcfa068;
    puStack_28 = &UNK_10dcfa080;
    _swift_initStructMetadata(param_1,0,6,&puStack_50,param_1 + 0x20);
  }
  return;
}



/* Entry: 10440f31c; end: 10440f63f;  */

long * FUN_10440f31c(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  byte bVar15;
  undefined1 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar20 = *(long *)(param_3 + 0x10);
  lVar18 = *(long *)(lVar20 + -8);
  uVar19 = (ulong)*(uint *)(lVar18 + 0x50) & 0xff;
  lVar17 = *(long *)(lVar18 + 0x40) + 7;
  if (((uint)uVar19 < 8 && (*(uint *)(lVar18 + 0x50) & 0x100000) == 0) &&
      (lVar17 + (uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x108 < 0x19
     ) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    uVar22 = (long)param_1 + uVar19 + 0x10 & ~uVar19;
    uVar19 = (long)param_2 + uVar19 + 0x10 & ~uVar19;
    pcVar25 = *(code **)(lVar18 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar25)(uVar22,uVar19,lVar20);
    puVar27 = (undefined8 *)(lVar17 + uVar22 & 0xfffffffffffffff8);
    puVar23 = (undefined8 *)(lVar17 + uVar19 & 0xfffffffffffffff8);
    *puVar27 = *puVar23;
    puVar27[1] = puVar23[1];
    uVar21 = puVar23[2];
    puVar27[2] = uVar21;
    bVar15 = *(byte *)(puVar23 + 0x18);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    if (bVar15 < 0xfe) {
      uVar21 = puVar23[3];
      uVar5 = puVar23[4];
      uVar28 = puVar23[5];
      uVar6 = puVar23[6];
      uVar24 = puVar23[7];
      uVar7 = puVar23[8];
      uVar29 = puVar23[9];
      uVar8 = puVar23[10];
      uVar30 = puVar23[0xb];
      uVar9 = puVar23[0xc];
      uVar31 = puVar23[0xd];
      uVar10 = puVar23[0xe];
      uVar32 = puVar23[0xf];
      uVar11 = puVar23[0x10];
      uVar1 = puVar23[0x11];
      uVar12 = puVar23[0x12];
      uVar2 = puVar23[0x13];
      uVar13 = puVar23[0x14];
      uVar3 = puVar23[0x15];
      uVar14 = puVar23[0x16];
      uVar26 = puVar23[0x17];
      FUN_10440f640();
      puVar27[3] = uVar21;
      puVar27[4] = uVar5;
      puVar27[5] = uVar28;
      puVar27[6] = uVar6;
      puVar27[7] = uVar24;
      puVar27[8] = uVar7;
      puVar27[9] = uVar29;
      puVar27[10] = uVar8;
      puVar27[0xb] = uVar30;
      puVar27[0xc] = uVar9;
      puVar27[0xd] = uVar31;
      puVar27[0xe] = uVar10;
      puVar27[0xf] = uVar32;
      puVar27[0x10] = uVar11;
      puVar27[0x11] = uVar1;
      puVar27[0x12] = uVar12;
      puVar27[0x13] = uVar2;
      puVar27[0x14] = uVar13;
      puVar27[0x15] = uVar3;
      puVar27[0x16] = uVar14;
      puVar27[0x17] = uVar26;
      *(byte *)(puVar27 + 0x18) = bVar15;
    }
    else {
      uVar28 = puVar23[4];
      uVar21 = puVar23[3];
      uVar29 = puVar23[6];
      uVar24 = puVar23[5];
      uVar30 = puVar23[7];
      puVar27[8] = puVar23[8];
      puVar27[7] = uVar30;
      puVar27[6] = uVar29;
      puVar27[5] = uVar24;
      puVar27[4] = uVar28;
      puVar27[3] = uVar21;
      uVar28 = puVar23[10];
      uVar21 = puVar23[9];
      uVar29 = puVar23[0xc];
      uVar24 = puVar23[0xb];
      uVar31 = puVar23[0xe];
      uVar30 = puVar23[0xd];
      uVar32 = puVar23[0xf];
      puVar27[0x10] = puVar23[0x10];
      puVar27[0xf] = uVar32;
      puVar27[0xe] = uVar31;
      puVar27[0xd] = uVar30;
      puVar27[0xc] = uVar29;
      puVar27[0xb] = uVar24;
      puVar27[10] = uVar28;
      puVar27[9] = uVar21;
      uVar28 = puVar23[0x12];
      uVar21 = puVar23[0x11];
      uVar29 = puVar23[0x14];
      uVar24 = puVar23[0x13];
      uVar31 = puVar23[0x16];
      uVar30 = puVar23[0x15];
      uVar32 = *(undefined8 *)((long)puVar23 + 0xb1);
      *(undefined8 *)((long)puVar27 + 0xb9) = *(undefined8 *)((long)puVar23 + 0xb9);
      *(undefined8 *)((long)puVar27 + 0xb1) = uVar32;
      puVar27[0x16] = uVar31;
      puVar27[0x15] = uVar30;
      puVar27[0x14] = uVar29;
      puVar27[0x13] = uVar24;
      puVar27[0x12] = uVar28;
      puVar27[0x11] = uVar21;
    }
    puVar27[0x19] = puVar23[0x19];
    uVar19 = puVar23[0x1a];
    _objc_retain();
    if (10 < uVar19) {
      _swift_bridgeObjectRetain(uVar19);
    }
    puVar27[0x1a] = uVar19;
    uVar21 = puVar23[0x1b];
    uVar28 = puVar23[0x1c];
    uVar24 = puVar23[0x1d];
    uVar16 = *(undefined1 *)(puVar23 + 0x1e);
    func_0x00010320d790(uVar21,uVar28,uVar24,uVar16);
    puVar27[0x1b] = uVar21;
    puVar27[0x1c] = uVar28;
    puVar27[0x1d] = uVar24;
    *(undefined1 *)(puVar27 + 0x1e) = uVar16;
    *(undefined1 *)((long)puVar27 + 0xf1) = *(undefined1 *)((long)puVar23 + 0xf1);
    uVar19 = puVar23[0x20];
    if (0xfffffffe < uVar19) {
      uVar19 = 0xffffffff;
    }
    if ((int)uVar19 + -1 < 0) {
      puVar27[0x1f] = puVar23[0x1f];
      puVar27[0x20] = puVar23[0x20];
      _swift_bridgeObjectRetain();
    }
    else {
      uVar21 = puVar23[0x1f];
      puVar27[0x20] = puVar23[0x20];
      puVar27[0x1f] = uVar21;
    }
  }
  else {
    lVar17 = *param_2;
    *param_1 = lVar17;
    param_1 = (long *)(lVar17 + ((ulong)((uint)uVar19 & 0xf8 ^ 0x1f8) & uVar19 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10440f640; end: 10440f913;  */

/* WARNING: Possible PIC construction at 0x00010440f6ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010440f6f0) */

void FUN_10440f640(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte in_stack_00000068;
  
  in_stack_00000068 = in_stack_00000068 >> 5;
  if (in_stack_00000068 < 4) {
    uVar2 = param_1;
    uVar1 = param_2;
    if (in_stack_00000068 < 2) {
      if (in_stack_00000068 == 0) goto LAB_10440f6a0;
    }
    else if (in_stack_00000068 == 2) goto LAB_10440f6bc;
  }
  else {
    if (5 < in_stack_00000068) {
      param_1 = param_2;
      if (in_stack_00000068 != 6) {
        return;
      }
LAB_10440f6bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_1);
      return;
    }
    uVar2 = param_2;
    uVar1 = param_1;
    if (in_stack_00000068 != 4) {
      _swift_bridgeObjectRetain(param_2);
      uVar3 = (uint)(param_4 >> 0x3e);
      if (uVar3 != 1) {
        if (uVar3 != 2) {
          return;
        }
        func_0x000107c6157c(param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
      return;
    }
  }
  param_1 = uVar1;
  _objc_retain(uVar2);
LAB_10440f6a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10440f914; end: 104410123;  */

undefined8 * FUN_10440f914(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
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
  byte bVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  uVar20 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar20;
  lVar19 = *(long *)(param_3 + 0x10);
  lVar17 = *(long *)(lVar19 + -8);
  uVar16 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar21 = uVar16 + 0x10 + (long)param_1 & (uVar16 ^ 0xffffffffffffffff);
  uVar16 = uVar16 + 0x10 + (long)param_2 & (uVar16 ^ 0xffffffffffffffff);
  pcVar23 = *(code **)(lVar17 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar23)(uVar21,uVar16,lVar19);
  lVar17 = *(long *)(lVar17 + 0x40) + 7;
  puVar25 = (undefined8 *)(lVar17 + uVar21 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)(lVar17 + uVar16 & 0xfffffffffffffff8);
  *puVar25 = *puVar18;
  puVar25[1] = puVar18[1];
  uVar20 = puVar18[2];
  puVar25[2] = uVar20;
  bVar14 = *(byte *)(puVar18 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar20);
  if (bVar14 < 0xfe) {
    uVar20 = puVar18[3];
    uVar4 = puVar18[4];
    uVar26 = puVar18[5];
    uVar5 = puVar18[6];
    uVar22 = puVar18[7];
    uVar6 = puVar18[8];
    uVar27 = puVar18[9];
    uVar7 = puVar18[10];
    uVar28 = puVar18[0xb];
    uVar8 = puVar18[0xc];
    uVar29 = puVar18[0xd];
    uVar9 = puVar18[0xe];
    uVar30 = puVar18[0xf];
    uVar10 = puVar18[0x10];
    uVar1 = puVar18[0x11];
    uVar11 = puVar18[0x12];
    uVar2 = puVar18[0x13];
    uVar12 = puVar18[0x14];
    uVar3 = puVar18[0x15];
    uVar13 = puVar18[0x16];
    uVar24 = puVar18[0x17];
    FUN_10440f640();
    puVar25[3] = uVar20;
    puVar25[4] = uVar4;
    puVar25[5] = uVar26;
    puVar25[6] = uVar5;
    puVar25[7] = uVar22;
    puVar25[8] = uVar6;
    puVar25[9] = uVar27;
    puVar25[10] = uVar7;
    puVar25[0xb] = uVar28;
    puVar25[0xc] = uVar8;
    puVar25[0xd] = uVar29;
    puVar25[0xe] = uVar9;
    puVar25[0xf] = uVar30;
    puVar25[0x10] = uVar10;
    puVar25[0x11] = uVar1;
    puVar25[0x12] = uVar11;
    puVar25[0x13] = uVar2;
    puVar25[0x14] = uVar12;
    puVar25[0x15] = uVar3;
    puVar25[0x16] = uVar13;
    puVar25[0x17] = uVar24;
    *(byte *)(puVar25 + 0x18) = bVar14;
  }
  else {
    uVar26 = puVar18[4];
    uVar20 = puVar18[3];
    uVar27 = puVar18[6];
    uVar22 = puVar18[5];
    uVar28 = puVar18[7];
    puVar25[8] = puVar18[8];
    puVar25[7] = uVar28;
    puVar25[6] = uVar27;
    puVar25[5] = uVar22;
    puVar25[4] = uVar26;
    puVar25[3] = uVar20;
    uVar26 = puVar18[10];
    uVar20 = puVar18[9];
    uVar27 = puVar18[0xc];
    uVar22 = puVar18[0xb];
    uVar29 = puVar18[0xe];
    uVar28 = puVar18[0xd];
    uVar30 = puVar18[0xf];
    puVar25[0x10] = puVar18[0x10];
    puVar25[0xf] = uVar30;
    puVar25[0xe] = uVar29;
    puVar25[0xd] = uVar28;
    puVar25[0xc] = uVar27;
    puVar25[0xb] = uVar22;
    puVar25[10] = uVar26;
    puVar25[9] = uVar20;
    uVar26 = puVar18[0x12];
    uVar20 = puVar18[0x11];
    uVar27 = puVar18[0x14];
    uVar22 = puVar18[0x13];
    uVar29 = puVar18[0x16];
    uVar28 = puVar18[0x15];
    uVar30 = *(undefined8 *)((long)puVar18 + 0xb1);
    *(undefined8 *)((long)puVar25 + 0xb9) = *(undefined8 *)((long)puVar18 + 0xb9);
    *(undefined8 *)((long)puVar25 + 0xb1) = uVar30;
    puVar25[0x16] = uVar29;
    puVar25[0x15] = uVar28;
    puVar25[0x14] = uVar27;
    puVar25[0x13] = uVar22;
    puVar25[0x12] = uVar26;
    puVar25[0x11] = uVar20;
  }
  puVar25[0x19] = puVar18[0x19];
  uVar16 = puVar18[0x1a];
  _objc_retain();
  if (10 < uVar16) {
    _swift_bridgeObjectRetain(uVar16);
  }
  puVar25[0x1a] = uVar16;
  uVar20 = puVar18[0x1b];
  uVar26 = puVar18[0x1c];
  uVar22 = puVar18[0x1d];
  uVar15 = *(undefined1 *)(puVar18 + 0x1e);
  func_0x00010320d790(uVar20,uVar26,uVar22,uVar15);
  puVar25[0x1b] = uVar20;
  puVar25[0x1c] = uVar26;
  puVar25[0x1d] = uVar22;
  *(undefined1 *)(puVar25 + 0x1e) = uVar15;
  *(undefined1 *)((long)puVar25 + 0xf1) = *(undefined1 *)((long)puVar18 + 0xf1);
  uVar16 = puVar18[0x20];
  if (0xfffffffe < uVar16) {
    uVar16 = 0xffffffff;
  }
  if ((int)uVar16 + -1 < 0) {
    puVar25[0x1f] = puVar18[0x1f];
    puVar25[0x20] = puVar18[0x20];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar20 = puVar18[0x1f];
    puVar25[0x20] = puVar18[0x20];
    puVar25[0x1f] = uVar20;
  }
  return param_1;
}



/* Entry: 104410124; end: 104410197;  */

undefined8 FUN_104410124(undefined8 param_1)

{
  (*(code *)(undefined *)0x104413fd8)();
  return param_1;
}



/* Entry: 104410198; end: 1044105bb;  */

undefined8 * FUN_104410198(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar1 + 0x10 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar1 + 0x10 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x20))(uVar4,uVar1);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + uVar1 & 0xfffffffffffffff8);
  uVar8 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  uVar6 = puVar2[8];
  uVar8 = puVar2[0xb];
  uVar7 = puVar2[10];
  uVar12 = puVar2[5];
  uVar11 = puVar2[4];
  uVar10 = puVar2[7];
  uVar9 = puVar2[6];
  puVar3[9] = puVar2[9];
  puVar3[8] = uVar6;
  puVar3[0xb] = uVar8;
  puVar3[10] = uVar7;
  puVar3[5] = uVar12;
  puVar3[4] = uVar11;
  puVar3[7] = uVar10;
  puVar3[6] = uVar9;
  uVar6 = puVar2[0x10];
  uVar8 = puVar2[0x13];
  uVar7 = puVar2[0x12];
  uVar12 = puVar2[0xd];
  uVar11 = puVar2[0xc];
  uVar10 = puVar2[0xf];
  uVar9 = puVar2[0xe];
  puVar3[0x11] = puVar2[0x11];
  puVar3[0x10] = uVar6;
  puVar3[0x13] = uVar8;
  puVar3[0x12] = uVar7;
  puVar3[0xd] = uVar12;
  puVar3[0xc] = uVar11;
  puVar3[0xf] = uVar10;
  puVar3[0xe] = uVar9;
  uVar9 = puVar2[0x17];
  uVar8 = puVar2[0x16];
  uVar7 = puVar2[0x19];
  uVar6 = puVar2[0x18];
  uVar11 = puVar2[0x15];
  uVar10 = puVar2[0x14];
  puVar3[0x1a] = puVar2[0x1a];
  puVar3[0x17] = uVar9;
  puVar3[0x16] = uVar8;
  puVar3[0x19] = uVar7;
  puVar3[0x18] = uVar6;
  puVar3[0x15] = uVar11;
  puVar3[0x14] = uVar10;
  uVar7 = puVar2[0x1c];
  uVar6 = puVar2[0x1b];
  uVar8 = *(undefined8 *)((long)puVar2 + 0xe1);
  *(undefined8 *)((long)puVar3 + 0xe9) = *(undefined8 *)((long)puVar2 + 0xe9);
  *(undefined8 *)((long)puVar3 + 0xe1) = uVar8;
  puVar3[0x1c] = uVar7;
  puVar3[0x1b] = uVar6;
  *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar2 + 0xf1);
  puVar3 = (undefined8 *)((long)puVar3 + 0xf9U & 0xffffffffffffff8);
  puVar2 = (undefined8 *)((long)puVar2 + 0xf9U & 0xffffffffffffff8);
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  return param_1;
}



/* Entry: 1044105bc; end: 1044106db;  */

ulong FUN_1044105bc(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar9 + 0x54);
  uVar4 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    uVar2 = (lVar1 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x108;
    uVar3 = uVar2 & 0xfffffff8;
    uVar8 = (uint)uVar3;
    uVar11 = 2;
    uVar6 = uVar11;
    if (uVar3 == 0) {
      uVar6 = (param_2 - uVar4) + 1;
    }
    if (0xffff < uVar6) {
      uVar11 = 4;
    }
    if (uVar6 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar6) {
      uVar5 = uVar11;
    }
    if (uVar5 < 2) {
      if ((uVar5 != 0) &&
         (uVar11 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_10441066c;
    }
    else if (uVar5 == 2) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_10441066c:
        uVar11 = uVar11 - 1;
        if (uVar3 != 0) {
          uVar11 = 0;
          uVar8 = *param_1;
        }
        return (ulong)(uVar4 + (uVar8 | uVar11) + 1);
      }
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar2);
      if (uVar11 != 0) goto LAB_10441066c;
    }
  }
  uVar10 = (long)param_1 + uVar10 + 0x10 & ~uVar10;
  if (0x7ffffffe < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001044106b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return uVar10;
  }
  uVar10 = *(ulong *)((lVar1 + uVar10 & 0xffffffffffffff8) + 8);
  if (0xfffffffe < uVar10) {
    uVar10 = 0xffffffff;
  }
  return (ulong)((int)uVar10 + 1);
}


