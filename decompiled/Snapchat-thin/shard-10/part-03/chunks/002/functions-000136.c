/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fa5114; end: 107fa5123; -[SCSmartVideoSwipeFilterView isTranscoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fa5114(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772790);
}



/* Entry: 107fa5124; end: 107fa5133; -[SCSmartVideoSwipeFilterView setIsTranscoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa5124(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112772790) = param_3;
  return;
}



/* Entry: 107fa5134; end: 107fa5143; -[SCSmartVideoSwipeFilterView isPlaybackVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fa5134(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277278c);
}



/* Entry: 107fa5144; end: 107fa5153; -[SCSmartVideoSwipeFilterView setIsPlaybackVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa5144(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277278c) = param_3;
  return;
}



/* Entry: 107fa5154; end: 107fa5163; -[SCSmartVideoSwipeFilterView playbackEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa5154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772794);
}



/* Entry: 107fa5164; end: 107fa5173; -[SCSmartVideoSwipeFilterView multiSnapTimeRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa5164(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727bc);
}



/* Entry: 107fa5174; end: 107fa5183; -[SCSmartVideoSwipeFilterView videoTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa5174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727e0);
}



/* Entry: 107fa5184; end: 107fa51a3; -[SCSmartVideoSwipeFilterView lastFrameTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa5184(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112772814);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 107fa51a4; end: 107fa51b3; -[SCSmartVideoSwipeFilterView reversedAudioData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa51a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727c4);
}



/* Entry: 107fa51b4; end: 107fa51c3; -[SCSmartVideoSwipeFilterView audioOverrideAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa51b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127727d0);
}



/* Entry: 107fa51c4; end: 107fa51d3; -[SCSmartVideoSwipeFilterView didRenderFirstFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fa51c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277281c);
}



/* Entry: 107fa51d4; end: 107fa5453; -[SCSmartVideoSwipeFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa51d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127727d0,0);
  _objc_storeStrong(param_1 + _DAT_1127727c4,0);
  _objc_storeStrong(param_1 + _DAT_1127727e0,0);
  _objc_storeStrong(param_1 + _DAT_1127727bc,0);
  _objc_storeStrong(param_1 + _DAT_112772744,0);
  _objc_storeStrong(param_1 + _DAT_112772788,0);
  _objc_destroyWeak(param_1 + _DAT_112772784);
  _objc_destroyWeak(param_1 + _DAT_112772780);
  _objc_storeStrong(param_1 + _DAT_112772778,0);
  _objc_storeStrong(param_1 + _DAT_112772774,0);
  _objc_storeStrong(param_1 + _DAT_112772770,0);
  _objc_storeStrong(param_1 + _DAT_1127727c0,0);
  _objc_storeStrong(param_1 + _DAT_1127727d4,0);
  _objc_storeStrong(param_1 + _DAT_11277276c,0);
  _objc_storeStrong(param_1 + _DAT_112772760,0);
  _objc_storeStrong(param_1 + _DAT_1127727e8,0);
  _objc_destroyWeak(param_1 + _DAT_1127727a8);
  _objc_destroyWeak(param_1 + _DAT_1127727ac);
  _objc_storeStrong(param_1 + _DAT_1127727a4,0);
  _objc_storeStrong(param_1 + _DAT_112772768,0);
  _objc_storeStrong(param_1 + _DAT_112772740,0);
  _objc_storeStrong(param_1 + _DAT_112772754,0);
  _objc_storeStrong(param_1 + _DAT_1127727f4,0);
  _objc_storeStrong(param_1 + _DAT_1127727e4,0);
  _objc_storeStrong(param_1 + _DAT_112772750,0);
  _objc_storeStrong(param_1 + _DAT_112772764,0);
  _objc_storeStrong(param_1 + _DAT_11277275c,0);
  _objc_storeStrong(param_1 + _DAT_11277279c,0);
  _objc_storeStrong(param_1 + _DAT_112772828,0);
  _objc_storeStrong(param_1 + _DAT_1127727a0,0);
  _objc_storeStrong(param_1 + _DAT_112772810,0);
  _objc_storeStrong(param_1 + _DAT_112772824,0);
  _objc_storeStrong(param_1 + _DAT_112772794,0);
  _objc_storeStrong(param_1 + _DAT_11277274c,0);
  _objc_storeStrong(param_1 + _DAT_112772798,0);
  _objc_storeStrong(param_1 + _DAT_112772820,0);
  _objc_storeStrong(param_1 + _DAT_1127727dc,0);
  _objc_storeStrong(param_1 + _DAT_1127727b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772748,0);
  return;
}



/* Entry: 107fa5454; end: 107fa5533; -[SCSnapEditorSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:spectaclesConfig:rectificationConfig:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:isFromGallery:lazyLensIconRepository:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:filterViewLayoutGuide:previewABProvider:lensCTAHandler:locationProvider:userBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107fa5454(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fbed8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame_filterArranger_com_1125e2af8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277282c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
  }
  return puVar1;
}



/* Entry: 107fa5534; end: 107fa556b; -[SCSnapEditorSwipeFilterView setCurrentFilterViewHidden:] */

void FUN_107fa5534(undefined8 param_1)

{
  func_0x00010bfadb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa556c; end: 107fa557b; -[SCSnapEditorSwipeFilterView handleTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa556c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tap__112677d20,*(undefined8 *)(param_1 + _DAT_11277282c));
  return;
}



/* Entry: 107fa557c; end: 107fa5583; -[SCSnapEditorSwipeFilterView defaultLensCommand] */

undefined8 FUN_107fa557c(void)

{
  return 0;
}



/* Entry: 107fa5584; end: 107fa558b; -[SCSnapEditorSwipeFilterView imageProcessCommandForIndexPath:] */

undefined8 FUN_107fa5584(void)

{
  return 0;
}



/* Entry: 107fa558c; end: 107fa55db; -[SCSnapEditorSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:] */

void FUN_107fa558c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa55dc; end: 107fa55df; -[SCSnapEditorSwipeFilterView setCropBackgroundAnimating:] */

void FUN_107fa55dc(void)

{
  return;
}



/* Entry: 107fa55e0; end: 107fa55e3; -[SCSnapEditorSwipeFilterView setBackgroundCommandWithColors:] */

void FUN_107fa55e0(void)

{
  return;
}



/* Entry: 107fa55e4; end: 107fa55e7; -[SCSnapEditorSwipeFilterView updateMediaViewScale:] */

void FUN_107fa55e4(void)

{
  return;
}



/* Entry: 107fa55e8; end: 107fa55ef; -[SCSnapEditorSwipeFilterView areResourcesDownloadedForItem:] */

undefined8 FUN_107fa55e8(void)

{
  return 1;
}



/* Entry: 107fa55f0; end: 107fa55f3; -[SCSnapEditorSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:] */

void FUN_107fa55f0(void)

{
  return;
}



/* Entry: 107fa55f4; end: 107fa5607; -[SCSnapEditorSwipeFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa55f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277282c,0);
  return;
}



/* Entry: 107fa5608; end: 107fa57f3;  */

void FUN_107fa5608(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_3 < uVar7) {
    uVar7 = param_1;
    func_0x00010bf529e0();
    uVar8 = param_4;
    if (uVar7 - 1 < param_4) {
      uVar8 = param_1;
      func_0x00010bf529e0();
      uVar8 = uVar8 - 1;
    }
    param_4 = param_4 << 1;
    uVar7 = param_1;
    func_0x00010bf529e0();
    if (uVar7 <= param_4) {
      param_4 = param_1;
      func_0x00010bf529e0(param_1);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 != 0) {
      lVar6 = -1;
      uVar7 = 1;
      do {
        uVar2 = param_1;
        func_0x00010be38b80(param_1,param_2,param_3,uVar7,param_5);
        uVar5 = param_1;
        if (uVar2 == 0x7fffffffffffffff) {
          func_0x00010be38b80(param_1,param_2,param_3,lVar6,param_5);
          if (uVar5 == 0x7fffffffffffffff) break;
LAB_107fa5754:
          uVar2 = param_1;
          func_0x00010c0dfd40(param_1,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar2);
          _objc_release(uVar2);
          puVar4 = puVar1;
          func_0x00010bf529e0();
          uVar2 = param_1;
          func_0x00010bf529e0();
          if (puVar4 == (undefined *)(uVar2 - 1)) break;
        }
        else {
          uVar3 = param_1;
          func_0x00010c0dfd40(param_1,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar3);
          _objc_release(uVar3);
          puVar4 = puVar1;
          func_0x00010bf529e0();
          uVar2 = param_1;
          func_0x00010bf529e0();
          if (puVar4 == (undefined *)(uVar2 - 1)) break;
          func_0x00010be38b80(param_1,param_2,param_3,lVar6,param_5);
          if (uVar5 != 0x7fffffffffffffff) goto LAB_107fa5754;
        }
        if (uVar8 == uVar7) break;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    puVar4 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fa57f4; end: 107fa588b;  */

ulong FUN_107fa57f4(ulong param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_4 + param_3;
  if ((long)uVar1 < 0) {
    if (param_5 == 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf529e0(param_1);
      func_0x00010bf529e0();
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = -uVar1 / param_1;
      }
      uVar3 = uVar3 + uVar1 + uVar2 * param_1;
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010bf529e0();
    uVar3 = 0x7fffffffffffffff;
    if (uVar1 <= uVar2 - 1) {
      uVar3 = uVar1;
    }
    if ((param_5 != 0) && (uVar2 - 1 < uVar1)) {
      func_0x00010bf529e0();
      uVar3 = 0;
      if (param_1 != 0) {
        uVar3 = uVar1 / param_1;
      }
      uVar3 = uVar1 - uVar3 * param_1;
    }
  }
  return uVar3;
}



/* Entry: 107fa588c; end: 107fa5a13; -[SCImageProcessRenderSessionFilterViewUCOCommandManager initWithCommandMapper:queue:outputCommands:midOutputCommands:delegate:generationRulesProvider:] */

undefined1 *
FUN_107fa588c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbee0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    lVar3 = param_6;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = param_6;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(long *)((long)puVar1 + 0x20) = lVar3;
      _objc_release(uVar2);
    }
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = 1;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x49) = 1;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa5a14; end: 107fa5a87; -[SCImageProcessRenderSessionFilterViewUCOCommandManager dealloc] */

void FUN_107fa5a14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c280a60();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126fbee0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fa5a88; end: 107fa5acb; -[SCImageProcessRenderSessionFilterViewUCOCommandManager getCommandsForExportMode:] */

void FUN_107fa5a88(void)

{
  func_0x00010bed4860();
  _objc_alloc(PTR_PTR_1126d8a20);
  func_0x00010b73e4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fa5acc; end: 107fa5acf; -[SCImageProcessRenderSessionFilterViewUCOCommandManager getCommandsForExportMode:timestamp:] */

void FUN_107fa5acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getCommandsForExportMode__1125ce900);
  return;
}



/* Entry: 107fa5ad0; end: 107fa5ad3; -[SCImageProcessRenderSessionFilterViewUCOCommandManager warmupCommandsIfNeededForOutputSize:] */

void FUN_107fa5ad0(void)

{
  return;
}



/* Entry: 107fa5ad4; end: 107fa5b37; -[SCImageProcessRenderSessionFilterViewUCOCommandManager setOutputCommands:] */

void FUN_107fa5ad4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071b60(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    lVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa5b38; end: 107fa5c3f; -[SCImageProcessRenderSessionFilterViewUCOCommandManager setMidOutputCommands:] */

void FUN_107fa5b38(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071b60(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    lVar2 = param_3;
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00010bf51e00();
    }
    else {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      uStack_38 = 0x107fa5bf4;
      puStack_30 = &UNK_110a16068;
      lStack_28 = param_1;
      func_0x00010bfaea20(param_3,param_2,&puStack_48);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa5c40; end: 107fa5caf; -[SCImageProcessRenderSessionFilterViewUCOCommandManager updateSwipeFilterOffset:] */

void FUN_107fa5c40(float param_1,long param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)(int)param_1;
  if (0.03 <= ABS((float)(int)param_1 - param_1)) {
    fVar1 = param_1;
  }
  if (*(float *)(param_2 + 0x28) != fVar1) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x00010c230900(fVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_2 + 0x48) = 1;
      *(float *)(param_2 + 0x28) = fVar1;
    }
  }
  return;
}



/* Entry: 107fa5cb0; end: 107fa5cc3; -[SCImageProcessRenderSessionFilterViewUCOCommandManager setContinuousRendering:isExportMode:] */

void FUN_107fa5cb0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x4a) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateCachedCommandsIfNeededFor_112592bc0,param_4);
  return;
}



/* Entry: 107fa5cc4; end: 107fa5cdf; -[SCImageProcessRenderSessionFilterViewUCOCommandManager setStackedCommandPosition:] */

void FUN_107fa5cc4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x30) != param_3) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(long *)(param_1 + 0x30) = param_3;
  }
  return;
}



/* Entry: 107fa5ce0; end: 107fa5ce7; -[SCImageProcessRenderSessionFilterViewUCOCommandManager unloadCommands] */

void FUN_107fa5ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__addUnloadRequestForCommands__11254fd28,*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 107fa5ce8; end: 107fa5cf3; -[SCImageProcessRenderSessionFilterViewUCOCommandManager pendingUnloadCommandCleanup] */

void FUN_107fa5ce8(long param_1)

{
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}



/* Entry: 107fa5cf4; end: 107fa5d1f; -[SCImageProcessRenderSessionFilterViewUCOCommandManager releaseUnloadCommandCleanup] */

void FUN_107fa5cf4(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x69) = 0;
  func_0x00010bdc8e20(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107fa5d20; end: 107fa5ecf; -[SCImageProcessRenderSessionFilterViewUCOCommandManager holdExistingCacheResultOutputCommandsExcept:] */

void FUN_107fa5d20(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    _objc_retain(lVar9);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar9;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined1 *)(param_1 + 0x48) = 1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    _objc_release(uVar3);
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 != 0) {
      _objc_retain(lVar9);
      lVar4 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar9);
          }
          puVar5 = PTR_PTR_1126c40e0;
          uVar10 = *(ulong *)(lVar11 * 8);
          _objc_retain(uVar10);
          _objc_opt_class(puVar5);
          uVar6 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar5);
          uVar1 = uVar10;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar10);
          if (uVar1 != 0) {
            func_0x00010bf3b260(uVar10);
          }
          _objc_release(uVar1);
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x60) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    func_0x00010befa160();
    func_0x00010befa160(puVar5);
    puVar7 = puVar5;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x50);
    *(undefined **)(param_3 + 0x50) = puVar7;
    _objc_release(uVar3);
    *(undefined1 *)(param_3 + 0x68) = 0;
    *(undefined1 *)(param_3 + 0x48) = 1;
    uVar3 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 107fa5ed0; end: 107fa5f57; -[SCImageProcessRenderSessionFilterViewUCOCommandManager restorePreviousCacheResultOutputCommands] */

void FUN_107fa5ed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    func_0x00010befa160();
    func_0x00010befa160(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
    puVar2 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107fa5f58; end: 107fa60eb; -[SCImageProcessRenderSessionFilterViewUCOCommandManager removeAllowlistedCommand] */

void FUN_107fa5f58(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x50);
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar8);
        }
        puVar4 = PTR_PTR_1126c40e0;
        uVar9 = *(ulong *)(lVar10 * 8);
        _objc_retain(uVar9);
        _objc_opt_class(puVar4);
        uVar5 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar4);
        uVar1 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar9);
        if (uVar1 != 0) {
          uVar5 = uVar9;
          func_0x00010c094660();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4b900();
          _objc_release(uVar5);
          if ((int)uVar6 != 0) {
            func_0x00010bf3b260(uVar9);
          }
        }
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
  }
  lVar8 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar8 + 0x48) == '\x01') {
    func_0x00010bed4840();
    *(undefined1 *)(lVar8 + 0x48) = 0;
  }
  return;
}



/* Entry: 107fa60ec; end: 107fa611b; -[SCImageProcessRenderSessionFilterViewUCOCommandManager _updateCachedCommandsIfNeededForExportMode:] */

void FUN_107fa60ec(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010bed4840();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 107fa611c; end: 107fa652b; -[SCImageProcessRenderSessionFilterViewUCOCommandManager _updateCachedCommandsForExportMode:] */

void FUN_107fa611c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  fVar19 = *(float *)(param_1 + 0x28);
  dVar18 = (double)(float)(int)fVar19;
  _fmod(dVar18,(double)lVar2);
  lVar14 = 0;
  if (lVar2 != 0) {
    lVar14 = (lVar2 + (long)dVar18) / lVar2;
  }
  lVar14 = (lVar2 + (long)dVar18) - lVar14 * lVar2;
  dVar18 = (double)(fVar19 - (float)lVar14);
  func_0x00010be640c0(dVar18,param_1);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_107fa61d0;
    uVar17 = 0;
    if (-1 < lVar2) goto LAB_107fa61ec;
LAB_107fa61c8:
    uVar15 = 0;
  }
  else {
LAB_107fa61d0:
    uVar17 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dfd40(uVar17,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 < 0) goto LAB_107fa61c8;
LAB_107fa61ec:
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = (lVar14 + 1) / lVar2;
    }
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dfd40(uVar15,param_2,(lVar14 + 1) - lVar3 * lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126c40d0;
  _objc_alloc();
  func_0x00010c04b7a0(dVar18);
  uVar5 = *(ulong *)(param_1 + 0x58);
  func_0x00010bf41ba0(uVar5,param_2,puVar4);
  puVar6 = PTR_PTR_1126c40d8;
  _objc_alloc();
  func_0x00010c05a600();
  uVar7 = *(ulong *)(param_1 + 8);
  func_0x00010c0badc0(uVar7,param_2,puVar4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = (undefined1)*(undefined8 *)(param_1 + 0x50);
  uVar8 = uVar7;
  func_0x00010c071b60();
  if ((uVar8 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lVar2 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar2);
    lVar14 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_1c0,auStack_100,0x10);
    if (lVar14 != 0) {
      lVar3 = *plStack_1b0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_1b0 != lVar3) {
            _objc_enumerationMutation(lVar2);
          }
          uVar12 = *(undefined8 *)(lStack_1b8 + lVar16 * 8);
          func_0x00010c0654e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar9,param_2,uVar12);
          _objc_release(uVar12);
          lVar16 = lVar16 + 1;
        } while (lVar14 != lVar16);
        lVar14 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_1c0,auStack_100,0x10);
      } while (lVar14 != 0);
    }
    _objc_release(lVar2);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(uVar7);
    uVar8 = uVar7;
    func_0x00010bf52a60(uVar7,param_2,&uStack_200,auStack_180,0x10);
    if (uVar8 != 0) {
      lVar14 = *plStack_1f0;
      do {
        uVar5 = 0;
        do {
          if (*plStack_1f0 != lVar14) {
            _objc_enumerationMutation(uVar7);
          }
          uVar12 = *(undefined8 *)(lStack_1f8 + uVar5 * 8);
          func_0x00010c0654e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar10,param_2,uVar12);
          _objc_release(uVar12);
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
        uVar8 = uVar7;
        func_0x00010bf52a60(uVar7,param_2,&uStack_200,auStack_180,0x10);
      } while (uVar8 != 0);
    }
    _objc_release(uVar7);
    func_0x00010c0ce860(puVar9,param_2,puVar10);
    puVar11 = puVar9;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar9;
      func_0x00010bf00560(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8e20(param_1,param_2,puVar11);
      _objc_release(puVar11);
    }
    _objc_retain(uVar7);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar7;
    _objc_release(uVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  else if ((uVar5 & 1) != 0) goto LAB_107fa64bc;
  _objc_retain(puVar4);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar4;
  _objc_release(uVar12);
  lVar14 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar14);
  func_0x00010bf41ca0();
  uVar13 = (undefined1)param_1;
  _objc_release(lVar14);
LAB_107fa64bc:
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(uVar17);
  _objc_autoreleasePoolPop();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    *(undefined1 *)(lVar1 + 0x48) = 1;
    *(undefined1 *)(lVar1 + 0x49) = uVar13;
    return;
  }
  return;
}



/* Entry: 107fa652c; end: 107fa653b; -[SCImageProcessRenderSessionFilterViewUCOCommandManager setUseOutputTexture:] */

void FUN_107fa652c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 107fa653c; end: 107fa65c7; -[SCImageProcessRenderSessionFilterViewUCOCommandManager _addUnloadRequestForCommands:] */

void FUN_107fa653c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x69) == '\x01') {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puVar2 = PTR_PTR_1126d13a0;
      _objc_alloc(PTR_PTR_1126d13a0);
      func_0x00010bfffdc0();
      func_0x00010befafa0(uVar3,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa65c8; end: 107fa65e7; -[SCImageProcessRenderSessionFilterViewUCOCommandManager _normalizedDualSwipingCommandOffsetFromOffset:] */

float FUN_107fa65c8(double param_1)

{
  return (float)(((double)(int)param_1 - param_1) + 1.0);
}



/* Entry: 107fa65e8; end: 107fa667f; -[SCImageProcessRenderSessionFilterViewUCOCommandManager .cxx_destruct] */

void FUN_107fa65e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa6680; end: 107fa66f3; -[SCImageProcessRenderSessionFilterViewUCOCommandManagerGenerationRulesProviderImpl initWithUcoFeaturesAvailabilityProvider:] */

undefined1 * FUN_107fa6680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbee8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa66f4; end: 107fa68e7; -[SCImageProcessRenderSessionFilterViewUCOCommandManagerGenerationRulesProviderImpl shouldGenerateCommandsForSwipingOffset:] */

ulong FUN_107fa66f4(long param_1,ulong param_2)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  fVar1 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c24a020();
  _objc_retainAutoreleasedReturnValue();
  if (0.0 <= fVar1) {
    _objc_retain(lVar2);
    lVar5 = lVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar5 != 0) {
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(ulong *)(lVar8 * 8);
          func_0x00010c11f4c0();
          if (uVar7 <= (ulong)(long)fVar1 && (long)fVar1 - uVar7 < param_2) {
            uVar7 = (ulong)((float)(int)fVar1 == fVar1);
            goto LAB_107fa689c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar2;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
  }
  else {
    func_0x00010c0c21e0(*(undefined8 *)(param_1 + 8));
    uVar7 = param_2;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(lVar8 * 8);
        func_0x00010c11f4c0();
        if (lVar4 + uVar7 == param_2) {
          uVar7 = 0;
          goto LAB_107fa689c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
  }
  uVar7 = 1;
LAB_107fa689c:
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar7 = lVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(uVar7,0);
    return uVar7;
  }
  return uVar7;
}



/* Entry: 107fa68e8; end: 107fa68f3; -[SCImageProcessRenderSessionFilterViewUCOCommandManagerGenerationRulesProviderImpl .cxx_destruct] */

void FUN_107fa68e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa68f4; end: 107fa69ef; -[SCSmartVideoSwipeFilterViewCommandProvider initWithImageProcessCommandProvider:filterArranger:rectificationConfig:isSpectacles:] */

undefined1 *
FUN_107fa68f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fbef0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be5c600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa69f0; end: 107fa6a17; -[SCSmartVideoSwipeFilterViewCommandProvider makeUnfilteredCommand] */

void FUN_107fa69f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fa6a18; end: 107fa6a57; -[SCSmartVideoSwipeFilterViewCommandProvider makeDefaultLensCommand] */

void FUN_107fa6a18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb73e0();
  if ((int)lVar1 != 0) {
    func_0x00010c249640(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fa6a58; end: 107fa6b67; -[SCSmartVideoSwipeFilterViewCommandProvider makeMediaCommandsForCommandConfigurations:lensCommandMetadataProvider:] */

void FUN_107fa6a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fa6b68;
  puStack_50 = &UNK_110a15db8;
  lStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b26e0;
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  uVar3 = param_4;
  func_0x00010c0918c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c29b060(puVar2,param_2,param_3,uVar1,0,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29f920(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107fa6b68; end: 107fa6c2f;  */

void FUN_107fa6b68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
  }
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010bf45e80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b26d8;
    func_0x00010bf97920(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar2 = PTR_PTR_1126b26d8;
    func_0x00010bf97940(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fa6c30; end: 107fa6c33; -[SCSmartVideoSwipeFilterViewCommandProvider _shouldUseRectificationAsUnfilteredCommand] */

void FUN_107fa6c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be40e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isHermosa_11256dd40);
  return;
}



/* Entry: 107fa6c34; end: 107fa6c6b; -[SCSmartVideoSwipeFilterViewCommandProvider _shouldUseRectificationAsMidOutputCommand] */

bool FUN_107fa6c34(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010beb7400();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x18) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107fa6c6c; end: 107fa6d1b; -[SCSmartVideoSwipeFilterViewCommandProvider _isHermosa] */

undefined1 FUN_107fa6c6c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fa6d1c;
  puStack_50 = &UNK_110898578;
  puStack_38 = puStack_48;
  func_0x00010c0bf800(*(undefined8 *)(param_1 + 0x18),param_2,0,0,&puStack_68,0);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107fa6d1c; end: 107fa6d2f;  */

void FUN_107fa6d1c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107fa6d30; end: 107fa6e6b; -[SCSmartVideoSwipeFilterViewCommandProvider _makeUnfilteredCommand] */

void FUN_107fa6d30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010beb7400();
  if ((int)lVar1 == 0) {
    puVar3 = PTR_PTR_1126b26d8;
    func_0x00010bf978e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b26e0;
    func_0x00010c29b060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010c29f920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c249640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 107fa6e6c; end: 107fa6eb3; -[SCSmartVideoSwipeFilterViewCommandProvider .cxx_destruct] */

void FUN_107fa6e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa6eb4; end: 107fa6f77; -[SCUcoFeaturesAvailabilityProvider initWithFilterCarouselOrderProvider:ucoCarouselConfigProvider:] */

undefined1 *
FUN_107fa6eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa6f78; end: 107fa71bb; -[SCUcoFeaturesAvailabilityProvider splitScreenRenderingDisabledIndexRanges] */

void FUN_107fa6f78(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar13 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar13);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf5eb60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (uVar3 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010bf32760();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010bfcef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar4);
        lVar1 = 1;
        do {
          lVar12 = lVar1;
          uVar4 = uVar3 + lVar12;
          uVar9 = uVar2;
          func_0x00010bf529e0();
          if (uVar9 <= uVar4) break;
          uVar9 = uVar2;
          func_0x00010c0dfd40(uVar2,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          func_0x00010bf32760();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfcef60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar9);
          lVar1 = lVar12 + 1;
        } while ((uVar8 & 1) != 0);
        uVar9 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010bfae5a0();
        _objc_release(uVar9);
        uVar9 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c06ec00();
        _objc_release(uVar9);
        if ((uVar6 == 7) || ((int)uVar7 != 0)) {
          uVar9 = *(ulong *)(param_1 + 0x10);
          func_0x00010c24a000(uVar9,param_2,uVar5);
          if ((uVar9 & 1) == 0) {
            uVar9 = uVar4;
            if (uVar3 != 0) {
              uVar9 = lVar12 + 1;
            }
            lVar1 = 0;
            if (uVar3 != 0) {
              lVar1 = uVar3 - 1;
            }
            puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,lVar1,uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar13,param_2,puVar10);
            _objc_release(puVar10);
          }
        }
        _objc_release(uVar5);
        uVar9 = uVar2;
        func_0x00010bf529e0();
        uVar3 = uVar4;
      } while (uVar4 < uVar9);
    }
    _objc_retain(puVar13);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar13;
    _objc_release(uVar11);
    *(undefined1 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107fa71bc; end: 107fa71ff; -[SCUcoFeaturesAvailabilityProvider maxFiltersRange] */

undefined1  [16] FUN_107fa71bc(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf5eb60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



/* Entry: 107fa7200; end: 107fa720b; -[SCUcoFeaturesAvailabilityProvider filterCarouselOrderProvider:didInsertFilterItem:AtIndex:] */

void FUN_107fa7200(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107fa720c; end: 107fa7217; -[SCUcoFeaturesAvailabilityProvider filterCarouselOrderProvider:didRemoveFilterItem:AtIndex:] */

void FUN_107fa720c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107fa7218; end: 107fa7223; -[SCUcoFeaturesAvailabilityProvider filterCarouselOrderProvider:didReplaceFilterItem:withItem:atIndex:] */

void FUN_107fa7218(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107fa7224; end: 107fa725f; -[SCUcoFeaturesAvailabilityProvider .cxx_destruct] */

void FUN_107fa7224(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa7260; end: 107fa73db; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer description] */

void FUN_107fa7260(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_107fa73dc(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fa73dc; end: 107fa743b;  */

void FUN_107fa73dc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107fa743c; end: 107fa76e7; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer addListener:] */

undefined8 FUN_107fa743c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a160a8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107fa76e8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107fa7828(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107fa75f0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107fa7610;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107fa76e8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107fa76e8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107fa7828(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107fa75f0;
    }
  }
  uVar9 = 1;
LAB_107fa7610:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 107fa76e8; end: 107fa7827;  */

void FUN_107fa76e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_107fa7f74();
LAB_107fa7824:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_107fa7824;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 107fa7828; end: 107fa786f;  */

void FUN_107fa7828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 107fa7870; end: 107fa7a9f; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer removeListener:] */

void FUN_107fa7870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_107fa7a24;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107fa78d8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107fa7828(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107fa7a24;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_107fa78d8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a160a8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_107fa76e8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_107fa7828(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_107fa7a24;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_107fa7a24:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa7aa0; end: 107fa7bc7; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer filterCarouselOrderProviderDidUpdateStacking:currentlyStackedFilters:] */

void FUN_107fa7aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107fa73dc(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bfadb00(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa7bc8; end: 107fa7cdb; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer filterCarouselOrderProvider:didInsertFilterItem:AtIndex:] */

void FUN_107fa7bc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107fa73dc(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfadaa0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa7cdc; end: 107fa7def; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer filterCarouselOrderProvider:didRemoveFilterItem:AtIndex:] */

void FUN_107fa7cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107fa73dc(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfadac0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa7df0; end: 107fa7f2b; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer filterCarouselOrderProvider:didReplaceFilterItem:withItem:atIndex:] */

void FUN_107fa7df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_107fa73dc(&plStack_60,param_1 + 0x48);
  if (plStack_60 != (long *)0x0) {
    lVar2 = plStack_60[1];
    for (lVar6 = *plStack_60; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfadae0();
      _objc_release(lVar5);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fa7f2c; end: 107fa7f53; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer .cxx_destruct] */

void FUN_107fa7f2c(long param_1)

{
  FUN_107fa7f88(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107fa7f54; end: 107fa7f73; -[SCPreviewFilterCarouselOrderUpdateListenerAnnouncer .cxx_construct] */

void FUN_107fa7f54(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 107fa7f74; end: 107fa7f87;  */

undefined * FUN_107fa7f74(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 107fa7f88; end: 107fa7fdf;  */

long FUN_107fa7f88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 107fa7fe0; end: 107fa7fef;  */

void FUN_107fa7fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a160a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107fa7ff0; end: 107fa800f;  */

void FUN_107fa7ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a160a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107fa8010; end: 107fa8077;  */

void FUN_107fa8010(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107fa8078; end: 107fa807b;  */

void FUN_107fa8078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107fa807c; end: 107fa80df; +[SCPreviewFilterRawValue lensWithLens:] */

void FUN_107fa807c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8950;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fa80e0; end: 107fa8103; -[SCPreviewFilterRawValue copyWithZone:] */

undefined8 FUN_107fa80e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107fa8104; end: 107fa8163; -[SCPreviewFilterRawValue hash] */

void FUN_107fa8104(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126fbf00;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fa8164; end: 107fa81a7; -[SCPreviewFilterRawValue internalInit] */

void FUN_107fa8164(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbf00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fa81a8; end: 107fa8247; -[SCPreviewFilterRawValue isEqual:] */

long FUN_107fa81a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107fa822c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107fa822c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107fa822c;
    }
  }
  lVar3 = 1;
LAB_107fa822c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107fa8248; end: 107fa8267; -[SCPreviewFilterRawValue matchLens:] */

void FUN_107fa8248(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000107fa8260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 107fa8268; end: 107fa8273; -[SCPreviewFilterRawValue .cxx_destruct] */

void FUN_107fa8268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107fa8274; end: 107fa8317; -[SCPreviewFeatureSwipeFiltersInternalServices initWithSmartCarouselFilterArranger:swipeFiltersProvider:] */

undefined1 *
FUN_107fa8274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbf08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa8318; end: 107fa831f; -[SCPreviewFeatureSwipeFiltersInternalServices smartCarouselFilterArranger] */

undefined8 FUN_107fa8318(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107fa8320; end: 107fa8327; -[SCPreviewFeatureSwipeFiltersInternalServices swipeFiltersProvider] */

undefined8 FUN_107fa8320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107fa8328; end: 107fa8357; -[SCPreviewFeatureSwipeFiltersInternalServices .cxx_destruct] */

void FUN_107fa8328(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa8358; end: 107fa83fb; -[SCSnapEditorSwipeFiltersServices initWithSwipeFilterView:smartCarouselFilterArranger:] */

undefined1 *
FUN_107fa8358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbf10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa83fc; end: 107fa8403; -[SCSnapEditorSwipeFiltersServices swipeFilterView] */

undefined8 FUN_107fa83fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


