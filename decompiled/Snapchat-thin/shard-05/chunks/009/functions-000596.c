/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043157f4; end: 1043159af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043157f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = param_1;
  func_0x000100370c0c();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar2 = _DAT_11306dbd0;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306dbd0,0);
  lVar3 = _DAT_11306dbe0;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306dbe0,0);
  lVar4 = _DAT_11306dc00;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306dc00,0);
  *(undefined8 *)(lVar6 + _DAT_11306dc08) = 0;
  *(undefined8 *)(lVar6 + _DAT_11306dc10) = 0;
  _swift_beginAccess(lVar6 + lVar4,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_1);
  *(undefined8 *)(lVar6 + _DAT_11306dbf8) = param_2;
  *(undefined8 *)(lVar6 + _DAT_11306dbe8) = param_3;
  *(undefined8 *)(lVar6 + _DAT_11306dbf0) = param_4;
  *(undefined8 *)(lVar6 + _DAT_11306dbd8) = param_5;
  _swift_beginAccess(lVar6 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_6);
  _swift_beginAccess(lVar6 + lVar2,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar2,param_7);
  puVar1 = PTR_s_init_1125d9248;
  lStack_b8 = lVar6;
  lStack_b0 = lVar5;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  plVar7 = &lStack_b8;
  _objc_msgSendSuper2(plVar7,puVar1);
  aplStack_d0[0] = plVar7;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  _swift_release(uStack_c0);
  _swift_unknownObjectRelease(aplStack_d0[0]);
  return plVar7;
}



/* Entry: 1043159b0; end: 104315a93; -[_TtC28SCLegacyLiveLensPreviewScope36SCLegacyLiveLensPreviewScopeServices buildWithPresentingViewController:replyConfiguration:lensDataProvider:context:cameraViewType:captureWorkflowResultDelegate:cameraScopeDismissalDelegate:] */

void FUN_1043159b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043157f4(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104315a94; end: 104315a97;  */

void FUN_104315a94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104315a98; end: 104315acb;  */

void FUN_104315a98(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104315acc; end: 104315aef; -[_TtC28SCLegacyLiveLensPreviewScope36SCLegacyLiveLensPreviewScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306dc20));
  return;
}



/* Entry: 104315af0; end: 104315b3b; -[SpotlightPostingCameraScope originalPostCompositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306dc78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306dc78))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104315b3c; end: 104315b4b; -[SpotlightPostingCameraScope presentingVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306dc80));
  return;
}



/* Entry: 104315b4c; end: 104315b93; -[SpotlightPostingCameraScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315b4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dc88;
  _swift_beginAccess(param_1 + _DAT_11306dc88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104315b94; end: 104315beb; -[SpotlightPostingCameraScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dc88;
  _swift_beginAccess(param_1 + _DAT_11306dc88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104315bec; end: 104315c5b; -[SpotlightPostingCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104315bec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306dc78 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306dc80));
  param_1 = param_1 + _DAT_11306dc88;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104315c5c; end: 104315cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315c5c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100377e3c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306dc98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104315cc4; end: 104315d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315cc4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306dc98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104315d10; end: 104315e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104315d10(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100377ac8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306dc88;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306dc88,0);
  plVar5 = (long *)(lVar4 + _DAT_11306dc78);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306dc80) = param_3;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_bridgeObjectRetain(param_2);
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



/* Entry: 104315e20; end: 104315ebf; -[_TtC27SpotlightPostingCameraScope35SpotlightPostingCameraScopeServices buildWithOriginalPostCompositeStoryId:presentingVC:delegate:] */

void FUN_104315e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  FUN_104315d10(param_3,param_2,param_4,param_5);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104315ec0; end: 104315ec3;  */

void FUN_104315ec0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104315ec4; end: 104315ef7;  */

void FUN_104315ec4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104315ef8; end: 104315f1b; -[_TtC27SpotlightPostingCameraScope35SpotlightPostingCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306dc98));
  return;
}



/* Entry: 104315f1c; end: 104315f3b; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315f1c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306dcf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104315f3c; end: 104315f4b; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306dcf8));
  return;
}



/* Entry: 104315f4c; end: 104315f93; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope unifiedPublicProfilesPresenterScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315f4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306dd00;
  _swift_beginAccess(param_1 + _DAT_11306dd00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104315f94; end: 104315feb; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope setUnifiedPublicProfilesPresenterScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104315f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306dd00;
  _swift_beginAccess(param_1 + _DAT_11306dd00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104315fec; end: 104315ffb; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope requiresPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104315fec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306dd08);
}



/* Entry: 104315ffc; end: 1043161db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104315ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11306dd00;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306dd00,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306dcf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306dcf8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  *(undefined1 *)(unaff_x20 + _DAT_11306dd08) = 0;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 1043161dc; end: 10431645b; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope initWithUIContainer:configuration:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043161dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_11306dd00;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11306dd00,0);
  *(undefined8 *)(param_1 + _DAT_11306dcf0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306dcf8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  *(undefined1 *)(param_1 + _DAT_11306dd08) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10431645c; end: 10431651b; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope initWithConfiguration:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431645c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_11306dd00;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11306dd00,0);
  *(undefined8 *)(param_1 + _DAT_11306dcf0) = 0;
  *(undefined8 *)(param_1 + _DAT_11306dcf8) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  *(undefined1 *)(param_1 + _DAT_11306dd08) = 1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10431651c; end: 104316587; -[_TtC37SCUnifiedPublicProfilesPresenterScope37SCUnifiedPublicProfilesPresenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10431651c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306dcf0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306dcf8));
  param_1 = param_1 + _DAT_11306dd00;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104316588; end: 1043165ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316588(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100343844();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306dd18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043165f0; end: 10431663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043165f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306dd18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10431663c; end: 10431674f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10431663c(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x0001003378b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306dd00;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306dd00,0);
  *(long *)(lVar4 + _DAT_11306dcf0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306dcf8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined1 *)(lVar4 + _DAT_11306dd08) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104316750; end: 1043167e7; -[_TtC37SCUnifiedPublicProfilesPresenterScope45SCUnifiedPublicProfilesPresenterScopeServices buildWithUIContainer:configuration:scopeDelegate:] */

void FUN_104316750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10431663c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043167e8; end: 1043168f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043167e8(long param_1,undefined8 param_2)

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
  func_0x0001003378b0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306dd00;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306dd00,0);
  *(undefined8 *)(lVar4 + _DAT_11306dcf0) = 0;
  *(long *)(lVar4 + _DAT_11306dcf8) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined1 *)(lVar4 + _DAT_11306dd08) = 1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 1043168f4; end: 104316967; -[_TtC37SCUnifiedPublicProfilesPresenterScope45SCUnifiedPublicProfilesPresenterScopeServices buildWithConfiguration:scopeDelegate:] */

void FUN_1043168f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043167e8(param_3,param_4);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104316968; end: 10431696b;  */

void FUN_104316968(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431696c; end: 10431699f;  */

void FUN_10431696c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043169a0; end: 1043169c3; -[_TtC37SCUnifiedPublicProfilesPresenterScope45SCUnifiedPublicProfilesPresenterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043169a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306dd18));
  return;
}



/* Entry: 1043169c4; end: 1043169d3; -[SCUnifiedPublicProfileLoggingInfo pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043169c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306dd70);
}



/* Entry: 1043169d4; end: 1043169df; -[SCUnifiedPublicProfileLoggingInfo sourcePageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043169d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306dd78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306dd78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043169e0; end: 1043169ef; -[SCUnifiedPublicProfileLoggingInfo pageEntryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043169e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306dd80);
}



/* Entry: 1043169f0; end: 1043169fb; -[SCUnifiedPublicProfileLoggingInfo itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043169f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306dd88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306dd88);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043169fc; end: 104316a53;  */

void FUN_1043169fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104316a54; end: 104316af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306dd70) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306dd78);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306dd80) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306dd88);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104316af8; end: 104316bcb; -[SCUnifiedPublicProfileLoggingInfo initWithPageType:sourcePageSessionId:pageEntryType:itemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316af8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
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
  *(undefined8 *)(param_1 + _DAT_11306dd70) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306dd78);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  *(undefined8 *)(param_1 + _DAT_11306dd80) = param_5;
  plVar1 = (long *)(param_1 + _DAT_11306dd88);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104316bcc; end: 104316c5f;  */

undefined8 FUN_104316bcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  func_0x00010c033460();
  _objc_release(param_2);
  return unaff_x20;
}



/* Entry: 104316c60; end: 104316ce3; -[SCUnifiedPublicProfileLoggingInfo initWithPageType:sourcePageSessionId:pageEntryType:] */

undefined8 FUN_104316c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  func_0x00010c033460(param_1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 104316ce4; end: 104316d43; -[SCUnifiedPublicProfileLoggingInfo init] */

void FUN_104316ce4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnifiedPublicProfileScope.UnifiedPublicProfileLoggingInfo",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104316d10);
  (*pcVar1)();
}



/* Entry: 104316d44; end: 104316d83; -[SCUnifiedPublicProfileLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316d44(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306dd78 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306dd88 + 8))
  ;
  return;
}



/* Entry: 104316d84; end: 104316da3;  */

void FUN_104316d84(void)

{
  _objc_opt_self(&PTR_PTR_11299a898);
  return;
}



/* Entry: 104316da4; end: 104316db7;  */

bool FUN_104316da4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104316db8; end: 104316e8f;  */

void FUN_104316db8(void)

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



/* Entry: 104316e90; end: 104316ecb;  */

void FUN_104316e90(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104316ecc; end: 104316f0b;  */

void FUN_104316ecc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ddb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce9e20;
  _swift_getWitnessTable(&UNK_10dce9e20,&UNK_110758d28);
  puRam000000011306ddb8 = puVar1;
  return;
}



/* Entry: 104316f0c; end: 104316f1b;  */

undefined1  [16] FUN_104316f0c(void)

{
  return ZEXT816(0x110758d28);
}



/* Entry: 104316f1c; end: 104316f3b; -[SCUnifiedPublicProfileScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316f1c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306ddc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104316f3c; end: 104316f4b; -[SCUnifiedPublicProfileScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ddc8));
  return;
}



/* Entry: 104316f4c; end: 104316f93; -[SCUnifiedPublicProfileScope unifiedPublicProfileScopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316f4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306ddd0;
  _swift_beginAccess(param_1 + _DAT_11306ddd0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104316f94; end: 104316feb; -[SCUnifiedPublicProfileScope setUnifiedPublicProfileScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104316f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306ddd0;
  _swift_beginAccess(param_1 + _DAT_11306ddd0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104316fec; end: 104317113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104316fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11306ddd0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ddd0,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306ddc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ddc8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  uStack_70 = param_3;
  _objc_retain();
  _swift_unknownObjectRetain(param_3);
  uVar4 = 0x11306ddd8;
  func_0x0001000285a8(0x11306ddd8,&UNK_10dce9ef0);
  __sSS10describingSSx_tclufC(&uStack_70,uVar4);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_1);
  _objc_release(puVar3);
  _swift_bridgeObjectRelease(uVar4);
  return puVar3;
}



/* Entry: 104317114; end: 104317163;  */

undefined8 FUN_104317114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1043172dc();
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 104317164; end: 1043171eb; -[SCUnifiedPublicProfileScope initWithUiContainer:configuration:unifiedPublicProfileScopeDelegate:] */

undefined8
FUN_104317164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_3;
  FUN_1043172dc(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  return uVar1;
}



/* Entry: 1043171ec; end: 10431721f;  */

void FUN_1043171ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104317220; end: 104317267; -[SCUnifiedPublicProfileScope dealloc] */

void FUN_104317220(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_30,puVar1);
  return;
}



/* Entry: 104317268; end: 1043172af; -[SCUnifiedPublicProfileScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104317268(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ddc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ddc8));
  param_1 = param_1 + _DAT_11306ddd0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043172b0; end: 1043172db; -[SCUnifiedPublicProfileScope init] */

void FUN_1043172b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnifiedPublicProfileScope.SCUnifiedPublicProfileScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043172dc);
  (*pcVar1)();
}



/* Entry: 1043172dc; end: 1043173e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043172dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_11306ddd0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306ddd0,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306ddc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ddc8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar3 = &stack0xffffffffffffff98;
  _objc_msgSendSuper2(puVar3,puVar1);
  uStack_70 = param_3;
  _objc_retain();
  _swift_unknownObjectRetain(param_3);
  uVar4 = 0x11306ddd8;
  func_0x0001000285a8(0x11306ddd8,&UNK_10dce9ef0);
  __sSS10describingSSx_tclufC(&uStack_70,uVar4);
  _objc_release(puVar3);
  _swift_bridgeObjectRelease(uVar4);
  return puVar3;
}



/* Entry: 1043173e4; end: 104317407;  */

undefined8 FUN_1043173e4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104317408; end: 104317427;  */

void FUN_104317408(void)

{
  _objc_opt_self(&PTR_PTR_11299a970);
  return;
}



/* Entry: 104317428; end: 104317483; -[SCUnifiedPublicProfileScopeConfiguration businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104317428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306de08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306de08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104317484; end: 104317493; -[SCUnifiedPublicProfileScopeConfiguration loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104317484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306de10));
  return;
}



/* Entry: 104317494; end: 1043174a3; -[SCUnifiedPublicProfileScopeConfiguration previewMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104317494(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306de18);
}



/* Entry: 1043174a4; end: 1043174b3; -[SCUnifiedPublicProfileScopeConfiguration showHighlightCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043174a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306de20);
}



/* Entry: 1043174b4; end: 1043174c3; -[SCUnifiedPublicProfileScopeConfiguration isNavigationStyleVertical] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043174b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306de28);
}



/* Entry: 1043174c4; end: 1043174d3; -[SCUnifiedPublicProfileScopeConfiguration modalPresentationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043174c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306de30);
}



/* Entry: 1043174d4; end: 10431756f; -[SCUnifiedPublicProfileScopeConfiguration onCreateHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043174d4(long param_1)

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
  lVar1 = *(long *)(param_1 + _DAT_11306de38);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_11306de38))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110758e30;
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



/* Entry: 104317570; end: 10431757f; -[SCUnifiedPublicProfileScopeConfiguration isPublisherProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104317570(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306de40);
}



/* Entry: 104317580; end: 10431758f; -[SCUnifiedPublicProfileScopeConfiguration isFeatureApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104317580(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306de48);
}



/* Entry: 104317590; end: 1043175d3; -[SCUnifiedPublicProfileScopeConfiguration nonFriendAddPlacementTypeOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104317590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306de50;
  _swift_beginAccess(param_1 + _DAT_11306de50,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1043175d4; end: 104317623; -[SCUnifiedPublicProfileScopeConfiguration setNonFriendAddPlacementTypeOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043175d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306de50;
  _swift_beginAccess(param_1 + _DAT_11306de50,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104317624; end: 104317667; -[SCUnifiedPublicProfileScopeConfiguration nonFriendAddSourceTypeOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104317624(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306de58;
  _swift_beginAccess(param_1 + _DAT_11306de58,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 104317668; end: 1043176b7; -[SCUnifiedPublicProfileScopeConfiguration setNonFriendAddSourceTypeOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104317668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306de58;
  _swift_beginAccess(param_1 + _DAT_11306de58,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1043176b8; end: 1043176c3; -[SCUnifiedPublicProfileScopeConfiguration userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043176b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306de60);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043176c4; end: 1043176cf; -[SCUnifiedPublicProfileScopeConfiguration setUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043176c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306de60);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1043176d0; end: 104317717; -[SCUnifiedPublicProfileScopeConfiguration isLaunchingPublicProfileV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043176d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306de68;
  _swift_beginAccess(param_1 + _DAT_11306de68,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104317718; end: 10431777b; -[SCUnifiedPublicProfileScopeConfiguration setIsLaunchingPublicProfileV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104317718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306de68;
  _swift_beginAccess(param_1 + _DAT_11306de68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10431777c; end: 104317787; -[SCUnifiedPublicProfileScopeConfiguration launchSourceAdId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10431777c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306de70);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104317788; end: 1043177fb;  */

void FUN_104317788(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043177fc; end: 104317807; -[SCUnifiedPublicProfileScopeConfiguration setLaunchSourceAdId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043177fc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306de70);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104317808; end: 10431787f;  */

void FUN_104317808(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104317880; end: 104317b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104317880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306de60);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306de68) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306de70);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306de08);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306de10) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306de18) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11306de20) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306de28) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306de30) = param_7;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11306de38);
  *puVar2 = param_8;
  puVar2[1] = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306de40) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_11306de48) = param_10._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11306de50) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_11306de58) = 0;
  _swift_beginAccess(puVar1,auStack_78,1,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104317b6c; end: 10431801b; -[SCUnifiedPublicProfileScopeConfiguration initWithBusinessProfileId:loggingInfo:previewMode:showHighlightCta:isNavigationStyleVertical:modalPresentationStyle:onCreateHighlight:isPublisherProfile:isFeatureApp:] */

void FUN_104317b6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_110758e18;
    _swift_allocObject(&UNK_110758e18,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar1 = 0x104318280;
  }
  _objc_retain(param_4);
  func_0x0001043179f8(param_3,param_2,param_4,param_5,param_6,param_7,param_8,uVar1,puVar2,param_10)
  ;
  return;
}



/* Entry: 10431801c; end: 104318037;  */

void FUN_10431801c(long param_1,long param_2)

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



/* Entry: 104318038; end: 10431815b; -[SCUnifiedPublicProfileScopeConfiguration initWithBusinessProfileId:loggingInfo:previewMode:showHighlightCta:isNavigationStyleVertical:modalPresentationStyle:onCreateHighlight:isPublisherProfile:isFeatureApp:launchSourceAdId:] */

void FUN_104318038(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10,undefined4 param_11,long param_12)

{
  code *pcVar1;
  undefined *puVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110758df0;
    _swift_allocObject(&UNK_110758df0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    pcVar1 = FUN_104318264;
  }
  if (param_12 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_4);
  func_0x000104317e4c(param_3,param_2,param_4,param_5,param_6,param_7,param_8,pcVar1,puVar2,param_10
                     );
  return;
}



/* Entry: 10431815c; end: 1043181bb; -[SCUnifiedPublicProfileScopeConfiguration init] */

void FUN_10431815c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnifiedPublicProfileScope.UnifiedPublicProfileScopeConfiguration",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104318188);
  (*pcVar1)();
}



/* Entry: 1043181bc; end: 104318243; -[SCUnifiedPublicProfileScopeConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043181bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306de08 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306de10));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_11306de38),
                      ((undefined8 *)(param_1 + _DAT_11306de38))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306de60 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306de68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306de70 + 8))
  ;
  return;
}



/* Entry: 104318244; end: 104318263;  */

void FUN_104318244(void)

{
  _objc_opt_self(&PTR_PTR_11299aa40);
  return;
}



/* Entry: 104318264; end: 104318283;  */

void FUN_104318264(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010431826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 104318284; end: 104318293; -[CreatorsSpotlightSubmissionMusicConfiguration musicPickerSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306dea0));
  return;
}



/* Entry: 104318294; end: 1043182ef; -[CreatorsSpotlightSubmissionMusicConfiguration contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104318294(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306dea8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306dea8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043182f0; end: 104318403; -[CreatorsSpotlightSubmissionMusicConfiguration musicTrackPageSource] */

void FUN_1043182f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104318358();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104318404; end: 10431842b; -[CreatorsSpotlightSubmissionMusicConfiguration galleryContextMenuSource] */

void FUN_104318404(void)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0x17;
  func_0x00010bafa2a4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10431842c);
  (*pcVar1)();
}



/* Entry: 10431842c; end: 1043184ef;  */

undefined1  [16] FUN_10431842c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = 0x17;
  func_0x00010bafa2a4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar3;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104318484);
  (*pcVar1)();
}


