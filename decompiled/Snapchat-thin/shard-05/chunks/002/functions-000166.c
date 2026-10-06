/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c04d38; end: 103c04eab; -[_TtC17SCCreatePostScope23MusicPickerLaunchConfig initWithSource:captureSessionId:contextSessionId:lensId:filterId:musicSelectionObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c04d38(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    lStack_88 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
    lStack_88 = param_4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar6 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar6 = param_2;
  }
  lVar5 = param_7;
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar5 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  *(undefined8 *)(param_1 + _DAT_112ff7400) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112ff7408);
  *plVar1 = lStack_88;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112ff7410);
  *plVar1 = param_5;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff7418);
  *plVar1 = param_6;
  plVar1[1] = lVar6;
  plVar1 = (long *)(param_1 + _DAT_112ff7420);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff7428) = param_8;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c04eac; end: 103c04f0b; -[_TtC17SCCreatePostScope23MusicPickerLaunchConfig init] */

void FUN_103c04eac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatePostScope.MusicPickerLaunchConfig",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c04ed8);
  (*pcVar1)();
}



/* Entry: 103c04f0c; end: 103c04f0f;  */

void FUN_103c04f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc64df0;
  func_0x000107c61520(&UNK_10dc64df0,&UNK_1106e8078);
  puRam0000000112ff7430 = puVar1;
  return;
}



/* Entry: 103c04f10; end: 103c04f4f;  */

void FUN_103c04f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc64df0;
  func_0x000107c61520(&UNK_10dc64df0,&UNK_1106e8078);
  puRam0000000112ff7430 = puVar1;
  return;
}



/* Entry: 103c04f50; end: 103c04f5f;  */

undefined1  [16] FUN_103c04f50(void)

{
  return ZEXT816(0x1106e8078);
}



/* Entry: 103c04f60; end: 103c04fd7; -[_TtC17SCCreatePostScope23MusicPickerLaunchConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c04f60(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff7408 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff7410 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff7418 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff7420 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff7428));
  return;
}



/* Entry: 103c04fd8; end: 103c04ff7;  */

void FUN_103c04fd8(void)

{
  func_0x000107c61168(&PTR_PTR_112945888);
  return;
}



/* Entry: 103c04ff8; end: 103c05017; -[_TtC17SCCreatePostScope17SCCreatePostScope container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c04ff8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff7460));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c05018; end: 103c05037; -[_TtC17SCCreatePostScope17SCCreatePostScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05018(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff7468));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c05038; end: 103c05087; -[_TtC17SCCreatePostScope17SCCreatePostScope previewAssets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05038(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff7470);
  func_0x0001012f1700(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c05088; end: 103c05097; -[_TtC17SCCreatePostScope17SCCreatePostScope postConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7478));
  return;
}



/* Entry: 103c05098; end: 103c050a7; -[_TtC17SCCreatePostScope17SCCreatePostScope snapCaptureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7480));
  return;
}



/* Entry: 103c050a8; end: 103c050b7; -[_TtC17SCCreatePostScope17SCCreatePostScope showMemberRoleSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c050a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff7488);
}



/* Entry: 103c050b8; end: 103c050c7; -[_TtC17SCCreatePostScope17SCCreatePostScope showStoriesSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c050b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff7490);
}



/* Entry: 103c050c8; end: 103c050d7; -[_TtC17SCCreatePostScope17SCCreatePostScope musicPickerConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c050c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7498));
  return;
}



/* Entry: 103c050d8; end: 103c050e7; -[_TtC17SCCreatePostScope17SCCreatePostScope loggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c050d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff74a0));
  return;
}



/* Entry: 103c050e8; end: 103c050f7; -[_TtC17SCCreatePostScope17SCCreatePostScope snapDocLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c050e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff74a8));
  return;
}



/* Entry: 103c050f8; end: 103c0513f; -[_TtC17SCCreatePostScope17SCCreatePostScope spotlightTileFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c050f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff74b0;
  func_0x000107c61428(param_1 + _DAT_112ff74b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103c05140; end: 103c051a3; -[_TtC17SCCreatePostScope17SCCreatePostScope setSpotlightTileFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff74b0;
  func_0x000107c61428(param_1 + _DAT_112ff74b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103c051a4; end: 103c053b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c051a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff74b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7468) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7478) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7480) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7488) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7490) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7498) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74a8) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c053b4; end: 103c05497; -[_TtC17SCCreatePostScope17SCCreatePostScope initWithContainer:delegate:previewAssets:postConfiguration:snapCaptureLocation:showMemberRoleSection:showStoriesSection:musicPickerConfig:loggingParams:snapDocLazy:] */

void FUN_103c053b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001012f1700(0);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000103c052ac(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,param_12,
                      param_13);
  return;
}



/* Entry: 103c05498; end: 103c054f7; -[_TtC17SCCreatePostScope17SCCreatePostScope init] */

void FUN_103c05498(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCreatePostScope.SCCreatePostScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c054c4);
  (*pcVar1)();
}



/* Entry: 103c054f8; end: 103c0559f; -[_TtC17SCCreatePostScope17SCCreatePostScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c05544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c05564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c05584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c05568) */
/* WARNING: Removing unreachable block (ram,0x000103c05548) */
/* WARNING: Removing unreachable block (ram,0x000103c05588) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c054f8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff7460));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff7468));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff7470));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff7478));
  return;
}



/* Entry: 103c055a0; end: 103c055bf;  */

void FUN_103c055a0(void)

{
  func_0x000107c61168(&PTR_PTR_112945970);
  return;
}



/* Entry: 103c055c0; end: 103c0560b; -[SCCreatePostConfig descriptionText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c055c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff74e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff74e0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c0560c; end: 103c0566b; -[SCCreatePostConfig topics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0560c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff74e8);
  FUN_103c06480(0,0x112d70b40,&PTR_PTR_1126a69b0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c0566c; end: 103c05687; -[SCCreatePostConfig mentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0566c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff74f0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103c06480(0,0x112d70b48,&PTR_PTR_1126d95f0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103c05688; end: 103c05697; -[SCCreatePostConfig placeTagsMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff74f8));
  return;
}



/* Entry: 103c05698; end: 103c056a7; -[SCCreatePostConfig isAutoApproveCommentsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7500));
  return;
}



/* Entry: 103c056a8; end: 103c056b7; -[SCCreatePostConfig isRemixAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c056a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff7508);
}



/* Entry: 103c056b8; end: 103c056c7; -[SCCreatePostConfig shouldCreateHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c056b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff7510);
}



/* Entry: 103c056c8; end: 103c056d7; -[SCCreatePostConfig paidPartnershipConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c056c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7518));
  return;
}



/* Entry: 103c056d8; end: 103c05733; -[SCCreatePostConfig posterDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c056d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff7520))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff7520);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c05734; end: 103c05743; -[SCCreatePostConfig selectedProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7528));
  return;
}



/* Entry: 103c05744; end: 103c05753; -[SCCreatePostConfig repostToStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7530));
  return;
}



/* Entry: 103c05754; end: 103c0576f; -[SCCreatePostConfig selectedStoryConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05754(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff7538);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103c06480(0,0x112d70b50,&PTR_PTR_1126a69b8);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103c05770; end: 103c057cf;  */

void FUN_103c05770(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103c06480(0,param_4,param_5);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103c057d0; end: 103c057df; -[SCCreatePostConfig soundConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c057d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7540));
  return;
}



/* Entry: 103c057e0; end: 103c057ef; -[SCCreatePostConfig editedFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c057e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff7548));
  return;
}



/* Entry: 103c057f0; end: 103c057ff; -[SCCreatePostConfig isDefaultStoryFriendsOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c057f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff7550);
}



/* Entry: 103c05800; end: 103c05b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff74e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7500) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7508) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7510) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7518) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7520);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7528) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7530) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7538) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7540) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7548) = param_16;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7550) = param_17;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c05b18; end: 103c05ccf; -[SCCreatePostConfig initWithDescriptionText:topics:mentions:placeTagsMetadata:isAutoApproveCommentsSelected:isRemixAllowed:shouldCreateHighlight:paidPartnershipConfig:posterDisplayName:selectedProfile:repostToStory:selectedStoryConfigs:soundConfig:editedFrame:isDefaultStoryFriendsOnly:] */

void FUN_103c05b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_98;
  
  func_0x000107c5faec();
  uVar1 = 0;
  FUN_103c06480(0,0x112d70b40,&PTR_PTR_1126a69b0);
  func_0x000107c5fc54();
  if (param_5 == 0) {
    lStack_98 = 0;
  }
  else {
    uVar1 = 0;
    FUN_103c06480(0,0x112d70b48,&PTR_PTR_1126d95f0);
    func_0x000107c5fc54();
    lStack_98 = param_5;
  }
  if (param_12 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  if (param_15 != 0) {
    uVar2 = 0;
    FUN_103c06480(0,0x112d70b50,&PTR_PTR_1126a69b8);
    func_0x000107c5fc54(param_15,uVar2);
  }
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000103c05990(param_3,param_2,param_4,lStack_98,param_6,param_7,param_8,param_9,param_11,
                      param_12,uVar1,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}



/* Entry: 103c05cd0; end: 103c05d0f;  */

undefined8 FUN_103c05cd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103c05ebc(param_1);
  FUN_103c06228(param_1);
  return uVar1;
}



/* Entry: 103c05d10; end: 103c05d13; -[SCCreatePostConfig copyWithZone:] */

void FUN_103c05d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103c05d14; end: 103c05d5f; -[SCCreatePostConfig description] */

void FUN_103c05d14(undefined8 param_1)

{
  undefined1 auStack_98 [120];
  
  func_0x000107c61174();
  FUN_103c0625c(auStack_98);
  func_0x000107c61170(param_1);
  FUN_103c06228(auStack_98);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c05d60; end: 103c05ddb; -[SCCreatePostConfig init] */

void FUN_103c05d60(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCreatePostScope/SCCreatePostConfigWrapper.swift",0x31,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c05da8);
  (*pcVar1)();
}



/* Entry: 103c05ddc; end: 103c05ebb; -[SCCreatePostConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c05e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c05e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c05e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c05ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c05e74) */
/* WARNING: Removing unreachable block (ram,0x000103c05e50) */
/* WARNING: Removing unreachable block (ram,0x000103c05e30) */
/* WARNING: Removing unreachable block (ram,0x000103c05ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05ddc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff74e0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff74e8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff74f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff74f8));
  return;
}



/* Entry: 103c05ebc; end: 103c06227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c05ebc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined8 auStack_a8 [2];
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
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff74e0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[2];
  uStack_60 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112ff74e8) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_112ff74f0) = uStack_60;
  uStack_68 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff74f8) = uStack_68;
  if (*(char *)(param_1 + 5) == '\x02') {
    func_0x000100402194(&uStack_50,&uStack_80);
    func_0x000103c064c0(&uStack_58,&uStack_80,0x112ff7580,&UNK_10dc64f08);
    func_0x000103c064c0(&uStack_60,&uStack_80,0x112ff7588,&UNK_10dc64f10);
    func_0x000103c064c0(&uStack_68,&uStack_80,0x112ff7590,&UNK_10dc64f18);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000100402194(&uStack_50,&uStack_80);
    func_0x000103c064c0(&uStack_58,&uStack_80,0x112ff7580,&UNK_10dc64f08);
    func_0x000103c064c0(&uStack_60,&uStack_80,0x112ff7588,&UNK_10dc64f10);
    func_0x000103c064c0(&uStack_68,&uStack_80,0x112ff7590,&UNK_10dc64f18);
    func_0x000107c45a48();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff7500) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7508) = *(undefined1 *)((long)param_1 + 0x29);
  *(undefined1 *)(unaff_x20 + _DAT_112ff7510) = *(undefined1 *)((long)param_1 + 0x2a);
  uStack_70 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_112ff7518) = uStack_70;
  uStack_78 = param_1[8];
  uStack_80 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7520);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_112ff7528) = uStack_88;
  if (*(char *)(param_1 + 10) == '\x02') {
    func_0x000103c064c0(&uStack_70,auStack_a8,0x112ff7598,&UNK_10dc64f20);
    func_0x000103c064c0(&uStack_80,auStack_a8,0x112d35ff8,&UNK_10d900cd0);
    func_0x000103c064c0(&uStack_88,auStack_a8,0x112ff75a0,&UNK_10dc64f30);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000103c064c0(&uStack_70,auStack_a8,0x112ff7598,&UNK_10dc64f20);
    func_0x000103c064c0(&uStack_80,auStack_a8,0x112d35ff8,&UNK_10d900cd0);
    func_0x000103c064c0(&uStack_88,auStack_a8,0x112ff75a0,&UNK_10dc64f30);
    func_0x000107c45a48();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff7530) = puVar2;
  auStack_a8[0] = param_1[0xb];
  uStack_90 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_112ff7538) = auStack_a8[0];
  *(undefined8 *)(unaff_x20 + _DAT_112ff7540) = uStack_90;
  uStack_98 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_112ff7548) = uStack_98;
  *(undefined1 *)(unaff_x20 + _DAT_112ff7550) = *(undefined1 *)(param_1 + 0xe);
  func_0x000103c064c0(auStack_a8,auStack_b0,0x112ff75a8,&UNK_10dc64f38);
  func_0x000103c064c0(&uStack_90,auStack_b0,0x112ff75b0,&UNK_10dc64f40);
  func_0x000103c064c0(&uStack_98,auStack_b0,0x112ff75b8,&UNK_10dc64f48);
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c06228; end: 103c0625b;  */

undefined8 FUN_103c06228(undefined8 param_1)

{
  (*(code *)(undefined *)0x103c045bc)();
  return param_1;
}



/* Entry: 103c0625c; end: 103c0645f;  */

/* WARNING: Possible PIC construction at 0x000103c062d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c06380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c06438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c063b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c062fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c063b4) */
/* WARNING: Removing unreachable block (ram,0x000103c0643c) */
/* WARNING: Removing unreachable block (ram,0x000103c06384) */
/* WARNING: Removing unreachable block (ram,0x000103c063c0) */
/* WARNING: Removing unreachable block (ram,0x000103c062d4) */
/* WARNING: Removing unreachable block (ram,0x000103c06300) */
/* WARNING: Removing unreachable block (ram,0x000103c06320) */
/* WARNING: Removing unreachable block (ram,0x000103c063a0) */
/* WARNING: Removing unreachable block (ram,0x000103c06378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0625c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103c06460; end: 103c0647f;  */

void FUN_103c06460(void)

{
  func_0x000107c61168(&PTR_PTR_112945a80);
  return;
}



/* Entry: 103c06480; end: 103c06507;  */

void FUN_103c06480(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103c06508; end: 103c0654b; -[SCNGSMEPlaybackLogger playbackContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c06508(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff75c0;
  func_0x000107c61428(param_1 + _DAT_112ff75c0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103c0654c; end: 103c0659b; -[SCNGSMEPlaybackLogger setPlaybackContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0654c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff75c0;
  func_0x000107c61428(param_1 + _DAT_112ff75c0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103c0659c; end: 103c06613; -[SCNGSMEPlaybackLogger snapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0659c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff75c8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c06614; end: 103c0668b; -[SCNGSMEPlaybackLogger setSnapSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c06614(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff75c8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103c0668c; end: 103c0695f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c0668c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff75c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff75d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff75d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff75e0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff75e8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff75f0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff75f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7600) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff7608);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7610) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff75c0) = param_2;
  func_0x000107c61428(puVar1,auStack_68,1,0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar3);
  func_0x000107c61180();
  FUN_103c06960(param_5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  return puVar4;
}



/* Entry: 103c06960; end: 103c06cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c06960(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010b743d50();
  func_0x000107c61180();
  uVar14 = uVar3;
  func_0x00010b742348();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  FUN_103c07c24(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar3 = uVar14;
  func_0x000107c5fc54(uVar14,uVar4);
  func_0x000107c61170(uVar14);
  if (uVar3 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar14 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar14 == 0) {
    lStack_98 = 0;
    lVar10 = 0;
    lVar12 = 0;
  }
  else {
    lVar10 = 0;
    lVar12 = 0;
    lVar13 = 0;
    uVar11 = 0;
    lStack_98 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c78);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar3 + 0x20 + uVar11 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar11;
        FUN_103c079f8(uVar11,uVar3,&PTR_PTR_1126bf6a8,0x112deb088);
      }
      bVar2 = SCARRY8(uVar11,1);
      uVar11 = uVar11 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c74);
        (*pcVar1)();
      }
      uVar15 = uVar5;
      func_0x00010b74258c();
      if (uVar15 == 1) {
        uVar15 = uVar5;
        func_0x00010b7425a4();
        func_0x000107c61180();
        uVar4 = 0;
        FUN_103c07c24(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
        uVar8 = uVar15;
        func_0x000107c5fc54(uVar15,uVar4);
        func_0x000107c61170(uVar15);
        if (uVar8 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar15 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar15 != 0) {
          if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c7c);
            (*pcVar1)();
          }
          uVar9 = 0;
          do {
            if ((uVar8 & 0xc000000000000001) == 0) {
              uVar6 = *(ulong *)(uVar8 + uVar9 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar9;
              FUN_103c079f8(uVar9,uVar8,&PTR_PTR_1126bf6a0,0x112deb0b0);
            }
            uVar7 = uVar6;
            func_0x00010b742a08();
            func_0x000107c61170(uVar6);
            if (uVar7 == 2) {
              bVar2 = SCARRY8(lVar10,1);
              lVar10 = lVar10 + 1;
              if (bVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c6c);
                (*pcVar1)();
              }
            }
            else {
              bVar2 = SCARRY8(lVar13,1);
              lVar12 = lVar13 + 1;
              lVar13 = lVar12;
              if (bVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c70);
                (*pcVar1)();
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar8);
      }
      else {
        uVar15 = uVar5;
        func_0x00010b74258c();
        if (uVar15 == 2) {
          uVar15 = uVar5;
          func_0x00010b7425a4();
          func_0x000107c61180();
          uVar4 = 0;
          FUN_103c07c24(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
          uVar8 = uVar15;
          func_0x000107c5fc54(uVar15,uVar4);
          func_0x000107c61170(uVar15);
          if (uVar8 >> 0x3e == 0) {
            uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar15 = uVar8 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar8) {
              uVar15 = uVar8;
            }
            func_0x000107c60480();
          }
          func_0x000107c6142c(uVar8);
          func_0x000107c61170(uVar5);
          bVar2 = SCARRY8(lVar10,uVar15);
          lVar10 = lVar10 + uVar15;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c80);
            (*pcVar1)();
          }
        }
        else {
          uVar15 = uVar5;
          func_0x00010b74258c();
          func_0x000107c61170(uVar5);
          if ((uVar15 == 0) && (bVar2 = SCARRY8(lStack_98,1), lStack_98 = lStack_98 + 1, bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c06c84);
            (*pcVar1)();
          }
        }
      }
    } while (uVar11 != uVar14);
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar3);
  *(long *)(unaff_x20 + _DAT_112ff75d0) = lVar12;
  *(long *)(unaff_x20 + _DAT_112ff75d8) = lVar10;
  *(long *)(unaff_x20 + _DAT_112ff75e0) = lStack_98;
  return;
}



/* Entry: 103c06d00; end: 103c06d83; -[SCNGSMEPlaybackLogger initWithUserBlizzardLogger:playbackContext:snapSessionId:snap:] */

void FUN_103c06d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000103c067f4(param_3,param_4,param_5,param_2,param_6);
  return;
}



/* Entry: 103c06d84; end: 103c06e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c06d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff75e8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000107c6071c();
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar2 = PTR_PTR_1126dd240;
    func_0x000107c610f8(PTR_PTR_1126dd240);
    func_0x000107c453e4();
    FUN_103c06e30();
    func_0x000107c55828(puVar2,param_3,0);
    func_0x000107c54674(puVar2,param_3,0);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ff7610);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 103c06e30; end: 103c06fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c06e30(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112ff75c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff75c0,auStack_48,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      uVar3 = 0xe700000000000000;
      uVar1 = 0x77656976657270;
      goto LAB_103c06f64;
    }
    if (lVar2 == 1) {
      uVar3 = 0xe500000000000000;
      uVar1 = 0x617265706f;
      goto LAB_103c06f64;
    }
    if (lVar2 == 2) {
      uVar3 = 0xe700000000000000;
      uVar1 = 0x6f742d646e6573;
      goto LAB_103c06f64;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      uVar3 = 0xef65746972776572;
      uVar1 = 0x2d77656976657270;
      goto LAB_103c06f64;
    }
    if (lVar2 == 4) {
      uVar3 = 0xe800000000000000;
      uVar1 = 0x7475636b63697571;
      goto LAB_103c06f64;
    }
  }
  else {
    if (lVar2 == 5) {
      uVar3 = 0xe600000000000000;
      uVar1 = 0x74726f706d69;
      goto LAB_103c06f64;
    }
    if (lVar2 == 6) {
      uVar3 = 0x800000010f1aebd0;
      uVar1 = 0xd000000000000013;
      goto LAB_103c06f64;
    }
  }
  uVar1 = 0;
  uVar3 = 0xe000000000000000;
LAB_103c06f64:
  func_0x000107c5fadc(uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c52f80(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c5a53c(param_1);
  func_0x000107c552a4(param_1);
  func_0x000107c52a14(param_1);
  return;
}



/* Entry: 103c06fdc; end: 103c07003; -[SCNGSMEPlaybackLogger logPlaybackSetup] */

void FUN_103c06fdc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c06d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c07004; end: 103c07197;  */

/* WARNING: Possible PIC construction at 0x000103c07170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c07174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c07004(double param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ff75f0);
  if (((char)plVar1[1] != '\x01') ||
     (*(char *)((double *)(unaff_x20 + _DAT_112ff75e8) + 1) == '\x01')) {
    return;
  }
  dVar7 = *(double *)(unaff_x20 + _DAT_112ff75e8);
  func_0x000107c6071c();
  dVar7 = (param_1 - dVar7) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07190);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar7) {
    if (dVar7 < 9.223372036854776e+18) {
      *plVar1 = (long)dVar7;
      *(undefined1 *)(plVar1 + 1) = 0;
      puVar3 = PTR_PTR_1126dd240;
      func_0x000107c610f8(PTR_PTR_1126dd240);
      func_0x000107c453e4();
      FUN_103c06e30();
      func_0x000107c55828(puVar3,param_3,1);
      func_0x000107c59020(puVar3,param_3,(long)dVar7);
      lVar6 = *(long *)(unaff_x20 + _DAT_112ff7610);
      lVar4 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar4);
      }
      puVar5 = PTR_PTR_1126dd248;
      func_0x000107c610f8(PTR_PTR_1126dd248);
      func_0x000107c453e4();
      FUN_103c06e30();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar6);
        puVar3 = puVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07198);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07194);
  (*pcVar2)();
}



/* Entry: 103c07198; end: 103c071bf; -[SCNGSMEPlaybackLogger logPlaybackFirstFrame] */

void FUN_103c07198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c07004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c071c0; end: 103c073cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c071c0(double param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112ff75e8) + 1) != '\x01') {
    dVar7 = *(double *)(unaff_x20 + _DAT_112ff75e8);
    puVar3 = PTR_PTR_1126dd250;
    func_0x000107c610f8(PTR_PTR_1126dd250);
    func_0x000107c453e4();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff75c8);
    func_0x000107c61428(puVar1,auStack_68,0,0);
    lVar5 = puVar1[1];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar1;
      func_0x000107c61434(lVar5);
      func_0x000107c5fadc(uVar6,lVar5);
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c53200(puVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c6071c();
    dVar7 = (param_1 - dVar7) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c073c4);
      (*pcVar2)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c073c8);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c073cc);
      (*pcVar2)();
    }
    func_0x000107c57c84(puVar3);
    lVar5 = *(long *)(unaff_x20 + _DAT_112ff7600);
    if (lVar5 != 0) {
      func_0x000107c614cc(lVar5,auStack_70,auStack_88);
      func_0x000107c614b0(lVar5);
      uVar4 = uStack_78;
      func_0x000107c60640(uStack_80,uStack_78);
      uVar6 = uStack_80;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
      func_0x000107c54664(puVar3);
      func_0x000107c61170(uVar6);
      if (*(char *)(unaff_x20 + _DAT_112ff7608 + 8) != '\x01') {
        func_0x000107c54670(puVar3);
      }
      func_0x000107c614ac(lVar5);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112ff7610);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 103c073cc; end: 103c073f3; -[SCNGSMEPlaybackLogger logPlaybackEnd] */

void FUN_103c073cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c071c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c073f4; end: 103c0748f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c073f4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ff75f8;
  if ((*(byte *)(unaff_x20 + _DAT_112ff75f8) & 1) == 0) {
    puVar2 = PTR_PTR_1126dd240;
    func_0x000107c610f8(PTR_PTR_1126dd240);
    func_0x000107c453e4();
    FUN_103c07490();
    func_0x000107c55828(puVar2);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ff7610);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(puVar2);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
  }
  return;
}



/* Entry: 103c07490; end: 103c0774b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c07490(double param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112ff75e8) + 1) != '\x01') {
    dVar6 = *(double *)(unaff_x20 + _DAT_112ff75e8);
    func_0x000107c6071c();
    dVar6 = (param_1 - dVar6) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07744);
      (*pcVar2)();
    }
    if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07748);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c0774c);
      (*pcVar2)();
    }
    plVar1 = (long *)(unaff_x20 + _DAT_112ff7608);
    *plVar1 = (long)dVar6;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff7600);
  *(undefined8 *)(unaff_x20 + _DAT_112ff7600) = param_3;
  func_0x000107c614ac(uVar3);
  func_0x000107c614cc(param_3,auStack_58,auStack_70);
  func_0x000107c614b0(param_3);
  uVar5 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  uVar3 = uStack_68;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c54674(param_2);
  func_0x000107c61170(uVar3);
  lVar4 = _DAT_112ff75c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff75c0,auStack_88,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      uVar5 = 0xe700000000000000;
      uVar3 = 0x77656976657270;
      goto LAB_103c076c0;
    }
    if (lVar4 == 1) {
      uVar5 = 0xe500000000000000;
      uVar3 = 0x617265706f;
      goto LAB_103c076c0;
    }
    if (lVar4 == 2) {
      uVar5 = 0xe700000000000000;
      uVar3 = 0x6f742d646e6573;
      goto LAB_103c076c0;
    }
  }
  else if (lVar4 < 5) {
    if (lVar4 == 3) {
      uVar5 = 0xef65746972776572;
      uVar3 = 0x2d77656976657270;
      goto LAB_103c076c0;
    }
    if (lVar4 == 4) {
      uVar5 = 0xe800000000000000;
      uVar3 = 0x7475636b63697571;
      goto LAB_103c076c0;
    }
  }
  else {
    if (lVar4 == 5) {
      uVar5 = 0xe600000000000000;
      uVar3 = 0x74726f706d69;
      goto LAB_103c076c0;
    }
    if (lVar4 == 6) {
      uVar5 = 0x800000010f1aebd0;
      uVar3 = 0xd000000000000013;
      goto LAB_103c076c0;
    }
  }
  uVar3 = 0;
  uVar5 = 0xe000000000000000;
LAB_103c076c0:
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c52f80(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c5a53c(param_2);
  func_0x000107c552a4(param_2);
  func_0x000107c52a14(param_2);
  return;
}



/* Entry: 103c0774c; end: 103c0779b; -[SCNGSMEPlaybackLogger logPlaybackSetupError:] */

/* WARNING: Possible PIC construction at 0x000103c07784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c07788) */

void FUN_103c0774c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c073f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c0779c; end: 103c07857; -[SCNGSMEPlaybackLogger logPlaybackRunError:] */

/* WARNING: Possible PIC construction at 0x000103c0781c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c07838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c07820) */
/* WARNING: Removing unreachable block (ram,0x000103c0783c) */
/* WARNING: Removing unreachable block (ram,0x000103c07844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0779c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dd248;
  func_0x000107c610f8(PTR_PTR_1126dd248);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c453e4(puVar1);
  FUN_103c07490();
  lVar2 = *(long *)(param_1 + _DAT_112ff7610);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c07858; end: 103c0785b; -[SCNGSMEPlaybackLogger logPlaybackWarning:] */

void FUN_103c07858(void)

{
  return;
}



/* Entry: 103c0785c; end: 103c07977; -[SCNGSMEPlaybackLogger logSnap:] */

void FUN_103c0785c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x00010b743d50();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x00010b742348();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar3 = 0;
  FUN_103c07c24(0,0x112deb088,&PTR_PTR_1126bf6a8);
  uVar2 = uVar4;
  func_0x000107c5fc54(uVar4,uVar3);
  func_0x000107c61170(uVar4);
  if (uVar2 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar4 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c07978);
      (*pcVar1)();
    }
    lVar5 = 0;
    while( true ) {
      if ((uVar2 & 0xc000000000000001) != 0) {
        FUN_103c079f8(lVar5,uVar2,&PTR_PTR_1126bf6a8,0x112deb088);
        func_0x000107c615e8();
      }
      if (uVar4 - 1 == lVar5) break;
      lVar5 = lVar5 + 1;
    }
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103c07978; end: 103c079ab;  */

void FUN_103c07978(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c079ac; end: 103c079f7; -[SCNGSMEPlaybackLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c079ac(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff75c8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff7610));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + _DAT_112ff7600));
  return;
}



/* Entry: 103c079f8; end: 103c07bb3;  */

ulong FUN_103c079f8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07adc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07ae0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103c07c24(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c07bb4);
  (*pcVar2)();
}



/* Entry: 103c07bb4; end: 103c07c23;  */

void FUN_103c07bb4(void)

{
  func_0x000107c61168(&PTR_PTR_112945bb8);
  return;
}



/* Entry: 103c07c24; end: 103c07c63;  */

void FUN_103c07c24(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103c07c64; end: 103c07c7b; -[SCNGSMEPlaybackLogger logPlaybackEvent] */

void FUN_103c07c64(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c071c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c07c7c; end: 103c07d53;  */

void FUN_103c07c7c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c07d54; end: 103c07d5f;  */

void FUN_103c07d54(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103c07d60; end: 103c07da3; +[SCCameraAudioBitrateExperiment fetchAudioBitrateWithCircumstanceEngine:snapSource:] */

undefined8
FUN_103c07d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103c07e54(param_3,param_4);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103c07da4; end: 103c07ddf; -[SCCameraAudioBitrateExperiment init] */

void FUN_103c07da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103c07f1c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c07de0; end: 103c07e0f;  */

void FUN_103c07de0(void)

{
  FUN_103c07f1c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c07e10; end: 103c07e53;  */

undefined1  [16] FUN_103c07e10(ulong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 < 0x22) && ((1L << (param_1 & 0x3f) & 0x20000642bU) != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  bVar1 = param_1 != 0xfbadbeef;
  if (bVar1) {
    param_1 = 0;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = param_1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 103c07e54; end: 103c07f1b;  */

long FUN_103c07e54(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((int)param_2 != 0) {
    puVar2 = PTR_PTR_1126ae780;
    func_0x000107c610f8(PTR_PTR_1126ae780);
    func_0x000107c453e4();
    if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c07f18);
      (*pcVar1)();
    }
    if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c07f1c);
      (*pcVar1)();
    }
    func_0x000107c5947c();
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f1aebf0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    if (0 < (int)param_1) {
      return (param_1 & 0xffffffff) * 1000;
    }
  }
  return 64000;
}



/* Entry: 103c07f1c; end: 103c07f3b;  */

void FUN_103c07f1c(void)

{
  func_0x000107c61168(&PTR_PTR_112945cc8);
  return;
}



/* Entry: 103c07f3c; end: 103c07f3f;  */

void FUN_103c07f3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc64fa0;
  func_0x000107c61520(&UNK_10dc64fa0,&UNK_1106e8258);
  puRam0000000112ff7648 = puVar1;
  return;
}



/* Entry: 103c07f40; end: 103c07f7f;  */

void FUN_103c07f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc64fa0;
  func_0x000107c61520(&UNK_10dc64fa0,&UNK_1106e8258);
  puRam0000000112ff7648 = puVar1;
  return;
}



/* Entry: 103c07f80; end: 103c07f8f;  */

undefined1  [16] FUN_103c07f80(void)

{
  return ZEXT816(0x1106e8258);
}



/* Entry: 103c07f90; end: 103c07f9f; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c07f90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff7678);
}



/* Entry: 103c07fa0; end: 103c07fbf; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c07fa0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff7680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c07fc0; end: 103c0804b; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c07fc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff7688;
  func_0x000107c61428(param_1 + _DAT_112ff7688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c0804c; end: 103c081ef; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0804c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff7688;
  func_0x000107c61428(param_1 + _DAT_112ff7688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c081f0; end: 103c0837f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c081f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff7688;
  func_0x000107c61614(unaff_x20 + _DAT_112ff7688,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ff7678) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff7680) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 103c08380; end: 103c0842f; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope initWithSource:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c08380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ff7688;
  func_0x000107c61614(param_1 + _DAT_112ff7688,0);
  *(undefined8 *)(param_1 + _DAT_112ff7678) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff7680) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_5);
  func_0x000100513914();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 103c08430; end: 103c0845f;  */

void FUN_103c08430(void)

{
  func_0x000100513914();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c08460; end: 103c084bb; -[_TtC24SCBitmojiCreateFlowScope24SCBitmojiCreateFlowScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c08460(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff7680));
  param_1 = param_1 + _DAT_112ff7688;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103c084bc; end: 103c084cb; -[_TtC23SCSnapDocSendServiceAPI21SCSnapDocSendServices service] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c084bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff76b8));
  return;
}



/* Entry: 103c084cc; end: 103c08563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c084cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff76b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c08564; end: 103c085c3; -[_TtC23SCSnapDocSendServiceAPI21SCSnapDocSendServices init] */

void FUN_103c08564(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocSendServiceAPI.SCSnapDocSendServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c08590);
  (*pcVar1)();
}


