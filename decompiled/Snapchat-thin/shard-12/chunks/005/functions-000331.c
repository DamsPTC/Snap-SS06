/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091a4c88; end: 1091a4c8f; -[SCInLensCreationImaginePageControlsConfiguration forbidGenerationWithEmptyTextInput] */

undefined1 FUN_1091a4c88(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1091a4c90; end: 1091a4c97; -[SCInLensCreationImaginePageControlsConfiguration usesFloatingInputBar] */

undefined1 FUN_1091a4c90(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1091a4c98; end: 1091a4c9f; -[SCInLensCreationImaginePageControlsConfiguration visualTrayUnderPreview] */

undefined1 FUN_1091a4c98(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1091a4ca0; end: 1091a4ca7; -[SCInLensCreationImaginePageControlsConfiguration startWithTrendingListOpen] */

undefined1 FUN_1091a4ca0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1091a4ca8; end: 1091a4caf; -[SCInLensCreationImaginePageControlsConfiguration disableViewportTapToGenerate] */

undefined1 FUN_1091a4ca8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1091a4cb0; end: 1091a4cb7; -[SCInLensCreationImaginePageControlsConfiguration generateOnTapOnVisualPrompt] */

undefined1 FUN_1091a4cb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1091a4cb8; end: 1091a4cc3; -[SCLegacyLensTooltipsServices .cxx_destruct] */

void FUN_1091a4cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4cc4; end: 1091a4ccf; -[SCLensInfoCardVisibilityServices .cxx_destruct] */

void FUN_1091a4cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4cd0; end: 1091a4cdb; -[SCLensExplorerBadgeServices .cxx_destruct] */

void FUN_1091a4cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4cdc; end: 1091a4ce7; -[SCLensMediaDownloaderServices .cxx_destruct] */

void FUN_1091a4cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4ce8; end: 1091a4d6f; -[SCLensMediaContentResult initWithContent:isFromCache:] */

undefined1 *
FUN_1091a4ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700b08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a4d70; end: 1091a4d93; -[SCLensMediaContentResult copyWithZone:] */

undefined8 FUN_1091a4d70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a4d94; end: 1091a4dff; -[SCLensMediaContentResult hash] */

undefined8 * FUN_1091a4d94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1091a4e84;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1091a4e84;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1091a4e84;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1091a4e84:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1091a4e00; end: 1091a4e9f; -[SCLensMediaContentResult isEqual:] */

long FUN_1091a4e00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a4e84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1091a4e84;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1091a4e84;
    }
  }
  lVar3 = 1;
LAB_1091a4e84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a4ea0; end: 1091a4ea7; -[SCLensMediaContentResult content] */

undefined8 FUN_1091a4ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a4ea8; end: 1091a4eaf; -[SCLensMediaContentResult isFromCache] */

undefined1 FUN_1091a4ea8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091a4eb0; end: 1091a4ebb; -[SCLensMediaContentResult .cxx_destruct] */

void FUN_1091a4eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091a4ebc; end: 1091a4ec3; -[SCLensFavoritesLoggingServices lensFavoritesButtonLogger] */

undefined8 FUN_1091a4ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a4ec4; end: 1091a4ecf; -[SCLensFavoritesLoggingServices .cxx_destruct] */

void FUN_1091a4ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a4ed0; end: 1091a5007; -[SCLensFavoritesLoggingLensInfo initWithLensId:rankingRequestId:rankingRequestInfo:adId:adServeItemId:] */

undefined1 *
FUN_1091a4ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112700b18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091a5008; end: 1091a502b; -[SCLensFavoritesLoggingLensInfo copyWithZone:] */

undefined8 FUN_1091a5008(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091a502c; end: 1091a50c3; -[SCLensFavoritesLoggingLensInfo hash] */

undefined8 * FUN_1091a502c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1091a518c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1091a5198;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1091a5198;
              }
              goto LAB_1091a518c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1091a5198:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1091a50c4; end: 1091a51b3; -[SCLensFavoritesLoggingLensInfo isEqual:] */

long FUN_1091a50c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1091a518c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1091a5198;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1091a5198;
              }
              goto LAB_1091a518c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1091a5198:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1091a51b4; end: 1091a51bb; -[SCLensFavoritesLoggingLensInfo lensId] */

undefined8 FUN_1091a51b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a51bc; end: 1091a51c3; -[SCLensFavoritesLoggingLensInfo rankingRequestId] */

undefined8 FUN_1091a51bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091a51c4; end: 1091a51cb; -[SCLensFavoritesLoggingLensInfo rankingRequestInfo] */

undefined8 FUN_1091a51c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091a51cc; end: 1091a51d3; -[SCLensFavoritesLoggingLensInfo adId] */

undefined8 FUN_1091a51cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091a51d4; end: 1091a51db; -[SCLensFavoritesLoggingLensInfo adServeItemId] */

undefined8 FUN_1091a51d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091a51dc; end: 1091a522f; -[SCLensFavoritesLoggingLensInfo .cxx_destruct] */

void FUN_1091a51dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a5230; end: 1091a5237; -[SCLensPromptLoggingServices promptLogger] */

undefined8 FUN_1091a5230(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a5238; end: 1091a5267; -[SCLensPromptLoggingServices .cxx_destruct] */

void FUN_1091a5238(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a5268; end: 1091a52db; -[SCLensRemoteApiLoggingServices initWithLensRemoteApiLogger:] */

undefined1 * FUN_1091a5268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700b28;
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



/* Entry: 1091a52dc; end: 1091a52e3; -[SCLensRemoteApiLoggingServices lensRemoteApiLogger] */

undefined8 FUN_1091a52dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a52e4; end: 1091a52ef; -[SCLensRemoteApiLoggingServices .cxx_destruct] */

void FUN_1091a52e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a52f0; end: 1091a5363; -[SCLensRemoteMediaServices initWithCoordinator:] */

undefined1 * FUN_1091a52f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700b30;
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



/* Entry: 1091a5364; end: 1091a536b; -[SCLensRemoteMediaServices coordinator] */

undefined8 FUN_1091a5364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091a536c; end: 1091a5377; -[SCLensRemoteMediaServices .cxx_destruct] */

void FUN_1091a536c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a5378; end: 1091a588b; -[SCAlwaysOnMediaPickerCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5378(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  
  lVar35 = (long)_DAT_1127825f0;
  lVar1 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf020c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127825f4;
  lVar2 = lVar1;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar2;
  func_0x00010c150aa0();
  lVar34 = lVar3;
  func_0x00010c06cda0(lVar3,param_2,lVar4);
  _objc_release(lVar2);
  if ((int)lVar34 != 0) {
    lVar2 = param_1 + lVar35;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c2630e0();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar4;
    func_0x00010c070900();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if ((int)lVar34 != 0) {
      lVar2 = param_1 + _DAT_1127825f8;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      puVar6 = PTR_PTR_1126dd950;
      _objc_alloc();
      lVar34 = (long)_DAT_1127825fc;
      lVar2 = param_1 + lVar34;
      _objc_loadWeakRetained();
      lVar7 = lVar2;
      func_0x00010bf29960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + lVar34;
      _objc_loadWeakRetained();
      lVar8 = lVar4;
      func_0x00010bf299a0();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = param_1 + lVar34;
      _objc_loadWeakRetained();
      lVar9 = lVar34;
      func_0x00010bf30c00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1 + _DAT_112782600;
      _objc_loadWeakRetained();
      lVar11 = lVar10;
      func_0x00010c0961c0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1 + _DAT_112782604;
      _objc_loadWeakRetained();
      lVar13 = param_1 + _DAT_112782608;
      _objc_loadWeakRetained();
      lVar14 = param_1 + _DAT_11278260c;
      _objc_loadWeakRetained();
      lVar15 = param_1 + _DAT_112782610;
      _objc_loadWeakRetained();
      lVar16 = param_1 + _DAT_112782614;
      _objc_loadWeakRetained();
      lVar17 = param_1 + _DAT_112782618;
      _objc_loadWeakRetained();
      lVar18 = lVar17;
      func_0x00010c090c20();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c090c40();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_1 + _DAT_11278261c;
      _objc_loadWeakRetained();
      lVar35 = param_1 + lVar35;
      _objc_loadWeakRetained();
      lVar21 = param_1 + _DAT_112782620;
      _objc_loadWeakRetained();
      lVar22 = lVar21;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = param_1 + _DAT_112782624;
      _objc_loadWeakRetained();
      lVar24 = lVar23;
      func_0x00010bfeb680();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_1 + _DAT_112782628;
      _objc_loadWeakRetained();
      lVar26 = lVar25;
      func_0x00010bf29180();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = param_1 + _DAT_11278262c;
      _objc_loadWeakRetained();
      lVar28 = lVar27;
      func_0x00010c091200();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = param_1 + _DAT_112782630;
      _objc_loadWeakRetained();
      lVar30 = lVar29;
      func_0x00010c0975e0();
      _objc_retainAutoreleasedReturnValue();
      lVar31 = param_1 + _DAT_112782634;
      _objc_loadWeakRetained();
      lVar32 = lVar31;
      func_0x00010bf07a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_loadWeakRetained();
      func_0x00010c150aa0();
      func_0x00010bffb380(puVar6,param_2,lVar7,lVar8,lVar9,lVar11,lVar12,lVar13,lVar14,lVar15,lVar16
                          ,lVar19,lVar20,lVar35,lVar22,lVar24,lVar26,lVar28,lVar30,1);
      uVar33 = *(undefined8 *)(param_1 + _DAT_112782638);
      *(undefined **)(param_1 + _DAT_112782638) = puVar6;
      _objc_release(uVar33);
      _objc_release(lVar1);
      _objc_release(lVar32);
      _objc_release(lVar31);
      _objc_release(lVar30);
      _objc_release(lVar29);
      _objc_release(lVar28);
      _objc_release(lVar27);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar35);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar34);
      _objc_release(lVar8);
      _objc_release(lVar4);
      _objc_release(lVar7);
      _objc_release(lVar2);
      param_1 = param_1 + _DAT_11278263c;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0c5de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126480();
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1091a588c; end: 1091a58bb;  */

void FUN_1091a588c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 1091a58bc; end: 1091a5963; -[SCAlwaysOnMediaPickerCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a58bc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar3 = alStack_50;
  if (*(long *)(param_1 + _DAT_112782638) == 0) {
    plVar3 = alStack_40;
  }
  else {
    func_0x00010c137fe0();
    lVar1 = param_1 + _DAT_11278263c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c5de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281fe0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *plVar3 = param_1;
  plVar3[1] = (long)PTR_PTR_112700b38;
  _objc_msgSendSuper2(plVar3,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a5964; end: 1091a5ac3; -[SCAlwaysOnMediaPickerCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5964(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127825f8);
  _objc_destroyWeak(param_1 + _DAT_11278263c);
  _objc_destroyWeak(param_1 + _DAT_1127825fc);
  _objc_destroyWeak(param_1 + _DAT_112782618);
  _objc_destroyWeak(param_1 + _DAT_112782614);
  _objc_destroyWeak(param_1 + _DAT_112782610);
  _objc_destroyWeak(param_1 + _DAT_112782630);
  _objc_destroyWeak(param_1 + _DAT_11278262c);
  _objc_destroyWeak(param_1 + _DAT_112782608);
  _objc_destroyWeak(param_1 + _DAT_11278260c);
  _objc_destroyWeak(param_1 + _DAT_112782600);
  _objc_destroyWeak(param_1 + _DAT_112782628);
  _objc_destroyWeak(param_1 + _DAT_112782620);
  _objc_destroyWeak(param_1 + _DAT_1127825f0);
  _objc_destroyWeak(param_1 + _DAT_11278261c);
  _objc_destroyWeak(param_1 + _DAT_112782624);
  _objc_destroyWeak(param_1 + _DAT_112782644);
  _objc_destroyWeak(param_1 + _DAT_112782634);
  _objc_destroyWeak(param_1 + _DAT_112782640);
  _objc_destroyWeak(param_1 + _DAT_1127825f4);
  _objc_destroyWeak(param_1 + _DAT_112782604);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782638,0);
  return;
}



/* Entry: 1091a5ac4; end: 1091a5b43; -[SCLensCarouselFeatureProviderPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5ac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278265c,0);
  _objc_storeStrong(param_1 + _DAT_112782658,0);
  _objc_destroyWeak(param_1 + _DAT_112782654);
  _objc_destroyWeak(param_1 + _DAT_11278264c);
  _objc_destroyWeak(param_1 + _DAT_112782650);
  _objc_destroyWeak(param_1 + _DAT_112782660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782648,0);
  return;
}



/* Entry: 1091a5b44; end: 1091a5c2b; -[SCLensPhotoPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5b44(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_112782664;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e33e0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1091a5c2c; end: 1091a5c9b;  */

void FUN_1091a5c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0b7ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beaec60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091a5c9c; end: 1091a5d37; -[SCLensPhotoPickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5c9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bfe2980(*(undefined8 *)(param_1 + _DAT_112782668));
  lVar1 = param_1 + _DAT_11278266c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0c5de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281fe0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_112700b40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a5d38; end: 1091a63ef; -[SCLensPhotoPickerEntryPoint _setupPhotoPickerWithManagedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a5d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  lVar40 = (long)_DAT_112782670;
  lVar1 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1091a63f0;
  puStack_88 = &UNK_110adf3e8;
  puVar3 = PTR_PTR_1126ae720;
  lStack_80 = lVar2;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar4 = lVar40;
  func_0x00010c091900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar40);
  uVar38 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar38;
  func_0x00010c0c42e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2880c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf43260();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar38);
  lVar1 = param_1 + _DAT_112782674;
  _objc_loadWeakRetained();
  lVar40 = lVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar40;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar40);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126dd988;
  _objc_alloc();
  lVar40 = (long)_DAT_112782678;
  lVar1 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar15 = lVar40;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11278267c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf53fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112782680;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112782684;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = (long)_DAT_112782688;
  lVar25 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c097e00();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar27 = lVar39;
  func_0x00010c097e60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11278268c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfeb680();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112782690;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c08fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112782694;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0975e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112782698;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c091200();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11278269c;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0112c0();
  lVar41 = (long)_DAT_112782668;
  uVar38 = *(undefined8 *)(param_1 + lVar41);
  *(undefined **)(param_1 + lVar41) = puVar11;
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar39);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar40);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_initWeak(auStack_a8,*(undefined8 *)(param_1 + lVar41));
  lVar1 = param_1 + _DAT_1127826a0;
  _objc_loadWeakRetained();
  lVar40 = lVar1;
  func_0x00010c095520();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1091a6620;
  puStack_b8 = &UNK_110adf458;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c0e33e0(lVar40);
  _objc_release(lVar40);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127826a4;
  _objc_loadWeakRetained();
  lVar40 = lVar1;
  func_0x00010c090680();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c0e33e0(lVar40);
  _objc_release(lVar40);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11278266c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c5de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126480();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1091a63f0; end: 1091a63f7;  */

void FUN_1091a63f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1091a63f8; end: 1091a6567;  */

void FUN_1091a63f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1091a6568;
  uStack_50 = 0x1091a6578;
  uStack_48 = 0;
  func_0x00010c0e7bc0(param_2);
  func_0x00010c0e3ae0(param_2);
  func_0x00010c0e3ac0(param_2);
  func_0x00010c0e3840(param_2);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091a6568; end: 1091a65ef;  */

void FUN_1091a6568(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091a65f0; end: 1091a66b7;  */

void FUN_1091a65f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 1091a66b8; end: 1091a67b3; -[SCLensPhotoPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a66b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112782674);
  _objc_destroyWeak(param_1 + _DAT_11278266c);
  _objc_destroyWeak(param_1 + _DAT_112782698);
  _objc_destroyWeak(param_1 + _DAT_112782694);
  _objc_destroyWeak(param_1 + _DAT_11278268c);
  _objc_destroyWeak(param_1 + _DAT_1127826a4);
  _objc_destroyWeak(param_1 + _DAT_112782688);
  _objc_destroyWeak(param_1 + _DAT_112782684);
  _objc_destroyWeak(param_1 + _DAT_112782678);
  _objc_destroyWeak(param_1 + _DAT_11278267c);
  _objc_destroyWeak(param_1 + _DAT_112782664);
  _objc_destroyWeak(param_1 + _DAT_112782680);
  _objc_destroyWeak(param_1 + _DAT_112782670);
  _objc_destroyWeak(param_1 + _DAT_1127826a0);
  _objc_destroyWeak(param_1 + _DAT_112782690);
  _objc_destroyWeak(param_1 + _DAT_11278269c);
  _objc_destroyWeak(param_1 + _DAT_1127826a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782668,0);
  return;
}



/* Entry: 1091a67b4; end: 1091a67bf; -[SCLensAuthDataProviderServices .cxx_destruct] */

void FUN_1091a67b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091a67c0; end: 1091a6c4f; -[SCLensAuthPrefetchServiceProvider _startPrefetchFromRegistrationScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a67c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127826bc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar11;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127826c0;
    _objc_loadWeakRetained(lVar11);
  }
  lVar2 = lVar11;
  func_0x00010bf24d40(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar3 = PTR_PTR_1126b1bc0;
  lVar11 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46760(puVar3,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar4 = puVar3;
  func_0x00010c095c40(puVar3);
  lVar11 = param_1;
  func_0x00010be5b3e0(param_1,param_2,lVar2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1b88;
  _objc_alloc(PTR_PTR_1126b1b88);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127826d0;
    _objc_loadWeakRetained(lVar13);
  }
  lVar5 = lVar13;
  func_0x00010c09a7e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_1091a6c50();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127826d8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar12;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001e40(puVar4,param_2,puVar3,lVar11,lVar5,lVar6,0,0,lVar7,lVar9,0);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127826cc;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010c092540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  lVar13 = lVar7;
  func_0x00010bf57500();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127826b0);
  *(long *)(param_1 + _DAT_1127826b0) = lVar13;
  _objc_release(uVar10);
  lVar13 = lVar7;
  func_0x00010c269d40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e05a0();
  _objc_release(lVar13);
  lVar13 = param_1 + _DAT_1127826d4;
  _objc_loadWeakRetained();
  lVar5 = lVar13;
  func_0x00010c150160();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091a6c74;
  puStack_70 = &UNK_110adf4a8;
  lStack_68 = lVar1;
  _objc_retain(lVar1);
  lVar6 = lVar5;
  func_0x00010bfb2660(lVar5,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_1127826b4;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = lVar6;
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(lVar13);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
  _objc_release(uVar10);
  lVar13 = param_1;
  FUN_1091a6c50(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c280fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284e60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  func_0x000107c2ab2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09f4a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(param_1);
  lVar13 = lVar7;
  func_0x00010c269d40(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1c20();
  _objc_release(lVar13);
  _objc_release(lStack_68);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(puVar4);
  _objc_release(lVar11);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1091a6c50; end: 1091a6c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a6c50(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127826c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a6c74; end: 1091a6d1b;  */

void FUN_1091a6c74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf17180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010c15f740(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091a6d1c; end: 1091a6d67;  */

void FUN_1091a6d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6868;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02dd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a6d68; end: 1091a6e57; -[SCLensAuthPrefetchServiceProvider _mainSortStrategyWithBundledLensProvider:placement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a6d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127826c4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar1;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091a6e58;
  puStack_48 = &UNK_110966950;
  lStack_40 = lVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091a6e58; end: 1091a6eb3;  */

void FUN_1091a6e58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1b70;
  _objc_alloc(PTR_PTR_1126b1b70);
  func_0x00010c023f00();
  puVar2 = PTR_PTR_1126b1b78;
  _objc_alloc(PTR_PTR_1126b1b78);
  func_0x00010c012240();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091a6eb4; end: 1091a6f6f; -[SCLensAuthPrefetchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a6eb4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127826d8);
  _objc_destroyWeak(param_1 + _DAT_1127826d4);
  _objc_destroyWeak(param_1 + _DAT_1127826d0);
  _objc_destroyWeak(param_1 + _DAT_1127826cc);
  _objc_destroyWeak(param_1 + _DAT_1127826c8);
  _objc_destroyWeak(param_1 + _DAT_1127826c4);
  _objc_destroyWeak(param_1 + _DAT_1127826c0);
  _objc_destroyWeak(param_1 + _DAT_1127826bc);
  _objc_destroyWeak(param_1 + _DAT_1127826b8);
  _objc_storeStrong(param_1 + _DAT_1127826dc,0);
  _objc_storeStrong(param_1 + _DAT_1127826b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127826b0,0);
  return;
}



/* Entry: 1091a6f70; end: 1091a6f7b;  */

void FUN_1091a6f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf461f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_configProviderForNamespace__1125af220,0x95);
  return;
}



/* Entry: 1091a6f7c; end: 1091a6fbf; -[SCLensCarouselStudySettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a6f7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127826e4);
  _objc_destroyWeak(param_1 + _DAT_1127826e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127826e8);
  return;
}



/* Entry: 1091a6fc0; end: 1091a70a3; -[SCLensCreatorBlocklistServiceProvider provide] */

void FUN_1091a6fc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd9a8;
  _objc_alloc(PTR_PTR_1126dd9a8);
  func_0x00010c023600();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091a70a4; end: 1091a70e3;  */

void FUN_1091a70a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a70e4; end: 1091a72ff; -[SCLensCreatorBlocklistServiceProvider _createLensCreatorBlocklistManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a70e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126dd9b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127826ec;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c280fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1dac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127826f0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c281600();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127826f4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127826f8;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127826fc;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112782700;
  _objc_loadWeakRetained(param_1);
  lVar16 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8e80(puVar1,param_2,lVar5,lVar8,lVar11,lVar13,lVar15,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a7300; end: 1091a7367; -[SCLensCreatorBlocklistServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7300(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127826f8);
  _objc_destroyWeak(param_1 + _DAT_1127826f4);
  _objc_destroyWeak(param_1 + _DAT_1127826f0);
  _objc_destroyWeak(param_1 + _DAT_1127826ec);
  _objc_destroyWeak(param_1 + _DAT_1127826fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782700);
  return;
}



/* Entry: 1091a7368; end: 1091a7417; -[SCLensDataProviderCreatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112782714);
  _objc_destroyWeak(param_1 + _DAT_112782710);
  _objc_destroyWeak(param_1 + _DAT_11278270c);
  _objc_destroyWeak(param_1 + _DAT_112782724);
  _objc_destroyWeak(param_1 + _DAT_112782720);
  _objc_destroyWeak(param_1 + _DAT_112782708);
  _objc_destroyWeak(param_1 + _DAT_112782728);
  _objc_destroyWeak(param_1 + _DAT_11278272c);
  _objc_destroyWeak(param_1 + _DAT_112782704);
  _objc_destroyWeak(param_1 + _DAT_11278271c);
  _objc_destroyWeak(param_1 + _DAT_112782718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782730);
  return;
}



/* Entry: 1091a7418; end: 1091a7487; -[SCLensFetchTypeUpdatingEntryPoint begin] */

void FUN_1091a7418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1091a7488();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c093f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010c1bafe0(uVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091a7488; end: 1091a74ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7488(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112782738);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a74ac; end: 1091a7557; -[SCLensFetchTypeUpdatingEntryPoint end] */

void FUN_1091a74ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar4 = &uStack_40;
  uVar1 = param_1;
  FUN_1091a7488();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c093f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1bafe0(uVar3);
  puStack_38 = PTR_PTR_112700b50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091a7558; end: 1091a758f; -[SCLensFetchTypeUpdatingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7558(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112782738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782734);
  return;
}



/* Entry: 1091a7590; end: 1091a7617; -[SCLensInMainCameraScopeEntryPoint end] */

void FUN_1091a7590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x000107c2ab30();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2870e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_112700b58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a7618; end: 1091a769b;  */

void FUN_1091a7618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126dd9e0;
  _objc_alloc(PTR_PTR_1126dd9e0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf02120();
  func_0x00010c011a00(puVar4,param_2,uVar1,uVar3,uVar2,uVar6,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091a769c; end: 1091a76fb;  */

void FUN_1091a769c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1091a76fc; end: 1091a77ab;  */

void FUN_1091a76fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1091a77ac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1091a77ac; end: 1091a77cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a77ac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11278274c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a77d0; end: 1091a787f;  */

void FUN_1091a77d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_1091a77ac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c090b00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1091a7880; end: 1091a7997; -[SCLensInMainCameraScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7880(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782788,0);
  _objc_storeStrong(param_1 + _DAT_112782784,0);
  _objc_destroyWeak(param_1 + _DAT_112782780);
  _objc_destroyWeak(param_1 + _DAT_11278277c);
  _objc_destroyWeak(param_1 + _DAT_112782778);
  _objc_destroyWeak(param_1 + _DAT_112782774);
  _objc_destroyWeak(param_1 + _DAT_112782770);
  _objc_destroyWeak(param_1 + _DAT_11278276c);
  _objc_destroyWeak(param_1 + _DAT_112782768);
  _objc_destroyWeak(param_1 + _DAT_112782740);
  _objc_destroyWeak(param_1 + _DAT_112782764);
  _objc_destroyWeak(param_1 + _DAT_112782760);
  _objc_destroyWeak(param_1 + _DAT_11278275c);
  _objc_destroyWeak(param_1 + _DAT_11278273c);
  _objc_destroyWeak(param_1 + _DAT_112782758);
  _objc_destroyWeak(param_1 + _DAT_112782754);
  _objc_destroyWeak(param_1 + _DAT_112782750);
  _objc_destroyWeak(param_1 + _DAT_11278274c);
  _objc_destroyWeak(param_1 + _DAT_112782748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782744);
  return;
}



/* Entry: 1091a7998; end: 1091a7a67; -[SCLensInMainCameraStartupCompletedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7998(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782790);
  *(undefined8 *)(param_1 + _DAT_112782790) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112782794;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112700b60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a7a68; end: 1091a7ac3; -[SCLensInMainCameraStartupCompletedEntryPoint _exposeStartupCompleteScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7a68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd9f0;
  _objc_alloc(PTR_PTR_1126dd9f0);
  func_0x00010c00a2c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127827cc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091a7ac4; end: 1091a7bc7; -[SCLensInMainCameraStartupCompletedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7ac4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127827cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127827c8);
  _objc_destroyWeak(param_1 + _DAT_1127827c4);
  _objc_destroyWeak(param_1 + _DAT_1127827c0);
  _objc_destroyWeak(param_1 + _DAT_1127827bc);
  _objc_destroyWeak(param_1 + _DAT_1127827b8);
  _objc_destroyWeak(param_1 + _DAT_1127827b4);
  _objc_destroyWeak(param_1 + _DAT_1127827b0);
  _objc_destroyWeak(param_1 + _DAT_1127827ac);
  _objc_destroyWeak(param_1 + _DAT_1127827a8);
  _objc_destroyWeak(param_1 + _DAT_11278279c);
  _objc_destroyWeak(param_1 + _DAT_1127827a4);
  _objc_storeStrong(param_1 + _DAT_112782798,0);
  _objc_storeStrong(param_1 + _DAT_11278278c,0);
  _objc_storeStrong(param_1 + _DAT_112782794,0);
  _objc_storeStrong(param_1 + _DAT_1127827a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782790,0);
  return;
}



/* Entry: 1091a7bc8; end: 1091a7d07; -[SCLensInPreviewScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7bc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1210;
  _objc_alloc(PTR_PTR_1126d1210);
  func_0x00010c022ea0();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112782804);
  }
  _objc_retain(uVar4);
  puVar3 = PTR_PTR_1126dd9f8;
  _objc_alloc(PTR_PTR_1126dd9f8);
  func_0x00010c022e80();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1091a7d08; end: 1091a7d47;  */

void FUN_1091a7d08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a7d48; end: 1091a80b3; -[SCLensInPreviewScopeEntryPoint _lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a7d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  
  puVar1 = PTR_PTR_1126dd9d0;
  _objc_alloc();
  if (param_1 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_1 + _DAT_112782800);
  }
  _objc_retain(uVar22);
  lVar2 = param_1;
  func_0x00010be4ad40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1091a80b4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127827dc;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127827e0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar18;
  func_0x00010c090fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127827f0;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c090d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c090d00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126dd9d8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127827f4;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_1091a80b4();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127827e8;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar21;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022b60(puVar12,param_2,lVar13,lVar15,lVar16,0,0);
  if (param_1 == 0) {
    lVar23 = 0;
    param_1 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127827fc;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_1127827f8;
    _objc_loadWeakRetained();
  }
  func_0x00010c023160(puVar1,param_2,uVar22,lVar2,lVar5,lVar6,lVar9,lVar11,puVar12,lVar23,param_1);
  _objc_release(uVar22);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar21);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a80b4; end: 1091a80d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a80b4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127827e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a80d8; end: 1091a81b7; -[SCLensInPreviewScopeEntryPoint _lensFeatureContainerViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a80d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be4a520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127827d0;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091a81b8;
  puStack_48 = &UNK_110adf6a8;
  puVar4 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091a81b8; end: 1091a81eb;  */

void FUN_1091a81b8(void)

{
  _objc_alloc(PTR_PTR_1126dda00);
  func_0x00010c022d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a81ec; end: 1091a82d7; -[SCLensInPreviewScopeEntryPoint _lensCarouselContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a81ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_1127827d4;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c112480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1091a8290;
  puStack_30 = &UNK_110868d10;
  puVar2 = PTR_PTR_1126ae720;
  lStack_28 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091a82d8; end: 1091a83a7; -[SCLensInPreviewScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a82d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782804,0);
  _objc_storeStrong(param_1 + _DAT_112782800,0);
  _objc_destroyWeak(param_1 + _DAT_1127827fc);
  _objc_destroyWeak(param_1 + _DAT_1127827f8);
  _objc_destroyWeak(param_1 + _DAT_1127827f4);
  _objc_destroyWeak(param_1 + _DAT_1127827f0);
  _objc_destroyWeak(param_1 + _DAT_1127827d0);
  _objc_destroyWeak(param_1 + _DAT_1127827ec);
  _objc_destroyWeak(param_1 + _DAT_1127827e8);
  _objc_destroyWeak(param_1 + _DAT_1127827e4);
  _objc_destroyWeak(param_1 + _DAT_1127827e0);
  _objc_destroyWeak(param_1 + _DAT_1127827dc);
  _objc_destroyWeak(param_1 + _DAT_1127827d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127827d8);
  return;
}



/* Entry: 1091a83a8; end: 1091a860b; -[SCLensInReplyCameraScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a83a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_retain();
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d1210;
  _objc_alloc(PTR_PTR_1126d1210);
  func_0x00010c022ea0();
  lVar4 = param_1;
  FUN_1091a8654(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c0e33e0(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126dda08;
  _objc_alloc(PTR_PTR_1126dda08);
  func_0x00010c022e80();
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112782848);
  }
  _objc_retain(uVar7);
  func_0x00010bf9d660(uVar7);
  _objc_release(uVar7);
  lVar4 = param_1 + _DAT_112782808;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf32980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228e00();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010beaf680(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1091a860c; end: 1091a864b;  */

void FUN_1091a860c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091a864c; end: 1091a8653;  */

void FUN_1091a864c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1091a8654; end: 1091a8677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8654(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112782814);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a8678; end: 1091a8683;  */

void FUN_1091a8678(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLensCarouselManager__11264c610,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1091a8684; end: 1091a8713; -[SCLensInReplyCameraScopeEntryPoint _setupReplyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8684(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11278280c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112782808;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2a540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eafc0();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091a8714; end: 1091a8afb; -[SCLensInReplyCameraScopeEntryPoint _lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8714(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126dd9d0;
  _objc_alloc();
  if (param_1 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + _DAT_112782844);
  }
  _objc_retain(uVar24);
  lVar2 = param_1;
  func_0x00010be4ad40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1091a8afc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112782824;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar18;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112782828;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar19;
  func_0x00010c090fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11278282c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar20;
  func_0x00010c090d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c090d00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126dd9d8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112782830;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar21;
  func_0x00010c090440();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_1091a8afc();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112782820;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar22;
  func_0x00010c093ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112782838;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar23;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    func_0x00010c022b60(puVar12,param_2,lVar13,lVar15,lVar16,lVar17,0);
    lVar26 = 0;
    lVar25 = 0;
    param_1 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11278283c;
    _objc_loadWeakRetained(lVar25);
    func_0x00010c022b60(puVar12,param_2,lVar13,lVar15,lVar16,lVar17,lVar25);
    lVar26 = param_1 + _DAT_112782840;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112782834;
    _objc_loadWeakRetained();
  }
  func_0x00010c023160(puVar1,param_2,uVar24,lVar2,lVar5,lVar6,lVar9,lVar11,puVar12,lVar26,param_1);
  _objc_release(uVar24);
  _objc_release(param_1);
  _objc_release(lVar26);
  _objc_release(puVar12);
  _objc_release(lVar25);
  _objc_release(lVar17);
  _objc_release(lVar23);
  _objc_release(lVar16);
  _objc_release(lVar22);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar20);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091a8afc; end: 1091a8b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8afc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11278281c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091a8b20; end: 1091a8cf7; -[SCLensInReplyCameraScopeEntryPoint _lensFeatureContainerViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091a8b20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  FUN_1091a8afc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be0e880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be4a520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112782810;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1091a8c74;
  puStack_68 = &UNK_110adf738;
  puVar6 = PTR_PTR_1126ae720;
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  lStack_50 = lVar3;
  lStack_48 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091a8cf8; end: 1091a8ddf; -[SCLensInReplyCameraScopeEntryPoint _featureContainerView] */

void FUN_1091a8cf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_1091a8654();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091a8de0; end: 1091a8e3f;  */

void FUN_1091a8de0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1091a8e40; end: 1091a8f27; -[SCLensInReplyCameraScopeEntryPoint _lensCarouselContainerView] */

void FUN_1091a8e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_1091a8654();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


