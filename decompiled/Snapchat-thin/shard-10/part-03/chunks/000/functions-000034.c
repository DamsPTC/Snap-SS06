/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d8a3c8; end: 107d8a417; -[SCGalleryActivityItemGenerator _progressWithActivityItemProvider:progress:] */

void FUN_107d8a3c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d8a418; end: 107d8a4ef; -[SCGalleryActivityItemGenerator _completeWithActivityItemProvider:item:error:] */

void FUN_107d8a418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(lVar2 + 0x10))(lVar2,param_4,param_5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8a4f0; end: 107d8a5f3; -[SCGalleryActivityItemGenerator _generateItemForActivityItemProvider:dataObjectContext:progressHandler:resultHandler:] */

void FUN_107d8a4f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_1;
  func_0x00010bee6780();
  puVar3 = PTR_PTR_1126d7ca8;
  if ((int)uVar2 == 0) {
    func_0x00010bec2240(param_1);
    func_0x00010be1b3e0(param_1);
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    func_0x00010bfbf680(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8a5f4; end: 107d8a677; -[SCGalleryActivityItemGenerator _useModularExportForProvider:] */

uint FUN_107d8a5f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c248a80();
  puVar2 = PTR_PTR_1126d7c88;
  if (lVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    lVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    _objc_release(param_3);
    uVar3 = (uint)(param_3 == 0) | (uint)lVar1 ^ 1;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 107d8a678; end: 107d8a97b; -[SCGalleryActivityItemGenerator _generateItemForStoryActivityItemProvider:dataObjectContext:] */

void FUN_107d8a678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = PTR_PTR_1126d7c00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf45620();
  uVar5 = param_3;
  func_0x00010c2484a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bfe71e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c110600();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c29a120();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bfe8e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfe8ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c243b60();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf5afc0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017260(puVar1,param_2,uVar2,0,uVar3,0,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,uVar14,uVar15,param_4,uVar16,uVar17,uVar18,uVar19);
  _objc_release(param_4);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c162de0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c24eb40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d8a97c; end: 107d8aa93; -[SCGalleryActivityItemGenerator _errorWithFunctionName:functionName:] */

void FUN_107d8a97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ebd2f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar1 = param_3;
  func_0x00010bf87dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010bf99260(puVar4,param_2,uVar1,puVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d8aa94; end: 107d8aac3; -[SCGalleryActivityItemGenerator .cxx_destruct] */

void FUN_107d8aa94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8aac4; end: 107d8ab4b; +[SCGalleryEntriesSaver shared] */

void FUN_107d8aac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107d8ab4c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113727af0 != -1) {
    func_0x00010002a2fc(0x113727af0,&puStack_48);
  }
  uVar1 = uRam0000000113727af8;
  _objc_retain(uRam0000000113727af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8ab4c; end: 107d8ab73;  */

void FUN_107d8ab4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113727af8;
  uRam0000000113727af8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d8ab74; end: 107d8ac4b;  */

void FUN_107d8ab74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1348;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c14ae80(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 107d8ac4c; end: 107d8ac67;  */

void FUN_107d8ac4c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d8ac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 107d8ac68; end: 107d8ae3f;  */

void FUN_107d8ac68(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c12e1e0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  if ((param_3 == 0) || (param_4 != 0)) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d1580();
    _objc_retain(0);
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0);
      }
    }
    else {
      puVar2 = PTR_PTR_1126b1348;
      func_0x00010c22b6a0(PTR_PTR_1126b1348);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c241220(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      func_0x00010c14afe0(puVar2);
      _objc_release(uVar6);
      _objc_release(puVar2);
      _objc_release(uVar5);
    }
    _objc_release(0);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d8ae40; end: 107d8ae5b;  */

void FUN_107d8ae40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d8ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 107d8ae5c; end: 107d8b1ab; -[SCGalleryEntriesSaver _saveStoryToCameraRoll:cloudFiles:userSession:dataObjectContext:spectaclesAuxiliaryContentServices:backgroundTaskWrapper:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:snapVideoFilterScopeExposer:cachingMediaManager:memoriesCloudFS:memoriesTranscodingHelper:creativeToolsMemoriesResources:circumstanceEngine:completion:] */

void FUN_107d8ae5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,long param_22)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126af4d0;
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa73a0(puVar1,param_2,param_3,0,0,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126d7c00;
  _objc_alloc(PTR_PTR_1126d7c00);
  func_0x00010c017260();
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c18b5e0(puVar2);
  if (param_22 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c25de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar3;
      _objc_release(uVar5);
      lVar6 = *(long *)(param_1 + 8);
    }
    lVar4 = param_22;
    _objc_retainBlock(param_22);
    func_0x00010c1d0560(lVar6,param_2,lVar4,puVar2);
    _objc_release(lVar4);
  }
  func_0x00010c24eb40(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_22);
  return;
}



/* Entry: 107d8b1ac; end: 107d8b84f; -[SCGalleryEntriesSaver saveEntryToCameraRoll:cloudFiles:userSession:dataObjectContext:spectaclesAuxiliaryContentServices:backgroundTaskWrapper:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:snapVideoFilterScopeExposer:cachingMediaManager:memoriesCloudFS:memoriesTranscodingHelper:creativeToolsMemoriesResources:circumstanceEngine:completion:] */

void FUN_107d8b1ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain();
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  lVar2 = param_3;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  puVar4 = PTR_PTR_1126af4d0;
  if (lVar2 - 1U < 6) {
    func_0x00010be99fc0(param_1);
  }
  else if ((lVar2 == 7) || (lVar2 == 0)) {
    uVar3 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa73a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010b5fa088();
    iVar1 = (int)puVar6;
    func_0x00010b5fa4c8();
    if (iVar1 == 0) {
      puVar6 = puVar5;
      func_0x00010b5fa088();
      if ((puVar6 < (undefined *)0xd) && ((1L << ((ulong)puVar6 & 0x3f) & 0x1566U) != 0)) {
        puVar6 = puVar5;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_5);
        _objc_retain(puVar5);
        _objc_retain(uVar3);
        _objc_retain(param_16);
        _objc_retain(param_22);
        puVar7 = PTR_PTR_1126c4288;
        func_0x00010b68eef4();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          puVar7[0x1b] = 1;
          _objc_retain(puVar7);
        }
        _objc_release(puVar7);
        puVar8 = PTR_PTR_1126cf9c0;
        _objc_alloc();
        func_0x00010b5fa7fc();
        puVar9 = puVar7;
        func_0x00010b68f1bc(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029d60(puVar8);
        _objc_release(puVar9);
        _objc_initWeak(auStack_80,puVar8);
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(param_16);
        _objc_retain(puVar5);
        _objc_retain(param_22);
        func_0x00010c17fb20(puVar8);
        func_0x00010bf9d620(param_16);
        _objc_release(param_22);
        _objc_release(puVar5);
        _objc_release(param_16);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(param_22);
        _objc_release(param_16);
        _objc_release(uVar3);
        _objc_release(puVar5);
        _objc_release(param_5);
        _objc_release(uVar3);
        _objc_release(puVar6);
      }
    }
    else {
      _objc_retain(puVar5);
      _objc_retain(param_22);
      _objc_retain(param_21);
      uVar3 = param_17;
      func_0x00010c269d40(param_17);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108ec16c0(param_21);
      _objc_release(param_21);
      uVar10 = *(undefined8 *)PTR__CGSizeZero_110347620;
      uVar11 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      _objc_retain(param_22);
      _objc_retain(puVar5);
      func_0x00010c134d00(uVar10,uVar11,uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(param_22);
      _objc_release(puVar5);
      _objc_release(param_22);
      _objc_release(puVar5);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8b850; end: 107d8b97b; -[SCGalleryEntriesSaver storyExporter:didFinishExportingToURL:withError:] */

void FUN_107d8b850(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((param_4 == 0) || (param_5 != 0)) goto LAB_107d8b94c;
  }
  else {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
    if ((param_4 == 0) || (param_5 != 0)) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      goto LAB_107d8b94c;
    }
  }
  puVar2 = PTR_PTR_1126b1348;
  func_0x00010c22b6a0(PTR_PTR_1126b1348);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  func_0x00010c14af80(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
LAB_107d8b94c:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8b97c; end: 107d8b997;  */

void FUN_107d8b97c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d8b990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
    return;
  }
  return;
}



/* Entry: 107d8b998; end: 107d8b9a3; -[SCGalleryEntriesSaver .cxx_destruct] */

void FUN_107d8b998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8b9a4; end: 107d8bb1b; -[SCGalleryImageSnapActivityItemGenerator initWithGallerySnap:dataObjectContext:cachingMediaManager:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:] */

undefined1 *
FUN_107d8b9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fafe0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7cb0;
    _objc_alloc();
    func_0x00010c017120();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8bb1c; end: 107d8bb23; -[SCGalleryImageSnapActivityItemGenerator itemId] */

void FUN_107d8bb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107d8bb24; end: 107d8bb5f; -[SCGalleryImageSnapActivityItemGenerator itemDuration] */

long FUN_107d8bb24(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bfed740();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 8));
    lVar2 = (long)param_1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 107d8bb60; end: 107d8bb67; -[SCGalleryImageSnapActivityItemGenerator primarySortDate] */

void FUN_107d8bb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 107d8bb68; end: 107d8bb6f; -[SCGalleryImageSnapActivityItemGenerator secondarySortDate] */

void FUN_107d8bb68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf313b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_captureTimeUtc_1125a9e90);
  return;
}



/* Entry: 107d8bb70; end: 107d8bb7b; -[SCGalleryImageSnapActivityItemGenerator estimatedMediaSize] */

long FUN_107d8bb70(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain();
  _objc_retain(uVar2);
  uVar4 = uVar1;
  func_0x00010b5fa088();
  iVar3 = (int)uVar4;
  func_0x00010b5fa4c8();
  if (iVar3 == 0) {
    uVar4 = uVar1;
    func_0x00010b5fa088();
    lVar8 = 0;
    if ((uVar4 < 0xd) && ((1L << (uVar4 & 0x3f) & 0x1566U) != 0)) {
      uVar4 = uVar1;
      func_0x00010c2a5040(uVar1);
      lVar8 = (long)(int)uVar4;
      uVar4 = uVar1;
      func_0x00010bfe0640(uVar1);
      func_0x00010bf8b160(uVar1);
      FUN_107f72b24(lVar8,(long)(int)uVar4,(long)param_1);
    }
    goto LAB_107f72afc;
  }
  puVar5 = PTR_PTR_1126bc7b8;
  func_0x00010bfa7160(PTR_PTR_1126bc7b8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bfb98;
  puVar6 = puVar5;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b580();
  if (((ulong)puVar7 & 1) == 0) {
    uVar4 = uVar1;
    func_0x00010b697ae8(uVar1,2);
    _objc_release(puVar6);
    if ((uVar4 & 1) != 0) goto LAB_107f72a9c;
    uVar4 = uVar1;
    func_0x00010c2a5040(uVar1);
    lVar8 = (long)(int)uVar4;
    uVar4 = uVar1;
    func_0x00010bfe0640(uVar1);
    func_0x000107f72bcc(lVar8,(long)(int)uVar4);
  }
  else {
    _objc_release(puVar6);
LAB_107f72a9c:
    uVar4 = uVar1;
    func_0x00010c2a5040(uVar1);
    lVar8 = (long)(int)uVar4;
    uVar4 = uVar1;
    func_0x00010bfe0640(uVar1);
    func_0x00010bf8b160(uVar1);
    FUN_107f72b24(lVar8,(long)(int)uVar4,(long)param_1);
  }
  _objc_release(puVar5);
LAB_107f72afc:
  _objc_release(uVar2);
  _objc_release(uVar1);
  return lVar8;
}



/* Entry: 107d8bb7c; end: 107d8bcab; -[SCGalleryImageSnapActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8bb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d8bcac;
  puStack_60 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  FUN_107f723ec(uVar2,param_1,uVar1,&PTR____CFConstantStringClassReference_110ec9698,&puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8bcac; end: 107d8bcf7;  */

void FUN_107d8bcac(long param_1,int param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be1b400(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8bcf8; end: 107d8beb3; -[SCGalleryImageSnapActivityItemGenerator _generateItemWithCloudFile:] */

void FUN_107d8bcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c06cde0();
  if ((int)uVar4 != 0) {
    puVar1 = PTR_PTR_1126bc7b8;
    func_0x00010bfa7160(PTR_PTR_1126bc7b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfb98;
    puVar2 = puVar1;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c230420();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      func_0x00010be1aa20(param_1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d8beb4; end: 107d8bfd7;  */

void FUN_107d8beb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
    if (param_2 == 0) {
      puVar2 = PTR_PTR_1126d7cb8;
      func_0x00010bf99380(PTR_PTR_1126d7cb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar3);
      _objc_release(puVar4);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar2);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d8bfd8; end: 107d8c14f; -[SCGalleryImageSnapActivityItemGenerator _generateAnimatedImage:snapDetail:] */

void FUN_107d8bfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0ef4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfb70;
  func_0x00010bfe8400(PTR_PTR_1126bfb70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfe8be0(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8c150; end: 107d8c26f;  */

void FUN_107d8c150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107d8c270;
  puStack_60 = &UNK_11097e310;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1e4740(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_80,param_1 + 0x28);
    func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107d8c270; end: 107d8c2bb;  */

void FUN_107d8c270(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d8c2bc; end: 107d8c3bb;  */

void FUN_107d8c2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 107d8c3bc; end: 107d8c4df;  */

void FUN_107d8c3bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar4 = puVar1;
    if (*(long *)(param_1 + 0x20) == 0 || *(long *)(param_1 + 0x28) != 0) {
      puVar2 = PTR_PTR_1126d7cb8;
      func_0x00010bf99380(PTR_PTR_1126d7cb8,param_2,&PTR____CFConstantStringClassReference_110ec9698
                          ,&PTR____CFConstantStringClassReference_110ec9798,
                          *(long *)(param_1 + 0x28),0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef16e0(puVar3,param_2,puVar1,puVar2,puVar4);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c28f340(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0844e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(puVar2,param_2,puVar1,puVar3,puVar4);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d8c4e0; end: 107d8c4ef; -[SCGalleryImageSnapActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8c4e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_requestThumbnailForExporting__11262b4d0);
    return;
  }
  return;
}



/* Entry: 107d8c4f0; end: 107d8c4f3; -[SCGalleryImageSnapActivityItemGenerator cancel] */

void FUN_107d8c4f0(void)

{
  return;
}



/* Entry: 107d8c4f4; end: 107d8c50b; -[SCGalleryImageSnapActivityItemGenerator delegate] */

void FUN_107d8c4f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8c50c; end: 107d8c517; -[SCGalleryImageSnapActivityItemGenerator setDelegate:] */

void FUN_107d8c50c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107d8c518; end: 107d8c57f; -[SCGalleryImageSnapActivityItemGenerator .cxx_destruct] */

void FUN_107d8c518(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8c580; end: 107d8c623; -[SCGalleryMultiExportActivityController initWithDataObjectContext:fetchLimit:] */

undefined1 *
FUN_107d8c580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fafe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8c624; end: 107d8c8cb; -[SCGalleryMultiExportActivityController saveWithActivityItemProvider:completion:] */

void FUN_107d8c624(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126b24c0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0fa0();
    puVar5 = (undefined8 *)(param_1 + 0x18);
    uVar4 = *puVar5;
    *puVar5 = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_initWeak(auStack_88,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107d8c8cc;
    puStack_98 = &UNK_1108434b0;
    unaff_x25 = &puStack_b0;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c178040(*puVar5);
    func_0x00010c239680(*(undefined8 *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d7ca0;
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_107d8c914;
    puStack_c8 = &UNK_11085aaa8;
    unaff_x26 = &puStack_e0;
    _objc_copyWeak(auStack_b8,auStack_88);
    _objc_retain(param_3);
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_107d8c964;
    puStack_110 = &UNK_110a0c018;
    unaff_x27 = &puStack_128;
    lStack_c0 = param_3;
    _objc_copyWeak(auStack_f8,auStack_88);
    _objc_retain(param_4);
    lStack_100 = param_4;
    uStack_f0 = param_2;
    _objc_retain(param_3);
    lStack_108 = param_3;
    uStack_e8 = uVar4;
    func_0x00010bfbf640(puVar2);
    _objc_release(lStack_108);
    _objc_release(lStack_100);
    _objc_destroyWeak(auStack_f8);
    _objc_release(lStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(unaff_x26 + 5);
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x20) = 1;
    func_0x00010bf2dba0(PTR_PTR_1126d7ca0);
    func_0x00010bddefe0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8c8cc; end: 107d8c913;  */

void FUN_107d8c8cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    func_0x00010bf2dba0(PTR_PTR_1126d7ca0);
    func_0x00010bddefe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8c914; end: 107d8c963;  */

void FUN_107d8c914(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e46c0(param_1,*(undefined8 *)(lVar1 + 0x18),param_3,1,
                        *(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d8c964; end: 107d8cbb7;  */

void FUN_107d8c964(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **unaff_x28;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  lVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    if (((param_2 == 0) || (param_3 != 0)) || ((*(byte *)(lVar1 + 0x20) & 1) != 0)) {
      lVar2 = *(long *)(param_1 + 0x28);
      _objc_opt_class();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = 0;
      lVar5 = param_3;
      (**(code **)(lVar2 + 0x10))(lVar2,0,param_3,puVar3,*(undefined1 *)(lVar1 + 0x20));
      _objc_release(puVar3);
      _objc_release(uVar6);
    }
    else {
      func_0x00010c0bb340(*(undefined8 *)(lVar1 + 0x18));
      _objc_initWeak(auStack_78,lVar1);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = param_2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c242100();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      FUN_107d8cd44();
      lVar5 = *(long *)(param_1 + 0x40);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107d8cbb8;
      puStack_98 = &UNK_110884c78;
      unaff_x28 = &puStack_b0;
      _objc_copyWeak(auStack_88,auStack_78);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      uStack_80 = *(undefined8 *)(param_1 + 0x38);
      uStack_90 = uVar6;
      FUN_107fe8cd4(puVar3,lVar4,lVar5,&puStack_b0);
      _objc_release(lVar2);
      _objc_release(puVar3);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(lVar5);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    _objc_opt_class();
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar4,lVar5,puVar3,*(undefined1 *)(lVar1 + 0x20));
    _objc_release(puVar3);
    _objc_release(uVar6);
    func_0x00010bddefc0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107d8cbb8; end: 107d8cc9f;  */

void FUN_107d8cbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_opt_class();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,param_2,param_3,puVar3,*(undefined1 *)(lVar1 + 0x20));
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010bddefc0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8cca0; end: 107d8ccd7; -[SCGalleryMultiExportActivityController _cleanUpActivityProgressController] */

void FUN_107d8cca0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c178040(*(undefined8 *)(param_1 + 0x18),param_2,0);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d8ccd8; end: 107d8ccfb; -[SCGalleryMultiExportActivityController _cleanUp] */

void FUN_107d8ccd8(long param_1)

{
  func_0x00010bddefe0();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107d8ccfc; end: 107d8cd43; -[SCGalleryMultiExportActivityController .cxx_destruct] */

void FUN_107d8ccfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8cd44; end: 107d8cebf;  */

undefined1 * FUN_107d8cd44(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x21;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = auStack_e8;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x21 = *(long *)(lStack_128 + lVar11 * 8);
        lVar2 = unaff_x21;
        func_0x00010c067fc0();
        if (lVar2 - 0xbU < 2) {
          uVar7 = 1;
        }
        else {
          lVar2 = unaff_x21;
          func_0x00010c067fc0();
          uVar8 = lVar2 - 2U < 0xb | uVar8;
          uVar9 = 10 < lVar2 - 2U | uVar9;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar5 = auStack_e8;
      lVar1 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar6 = (undefined1 *)((ulong)~((uint)uVar7 | uVar8 ^ 0xffffffff | uVar9) & 1);
  if ((uVar8 == 0 && (((uint)uVar7 ^ 0xffffffff) & 1) == 0) && uVar9 == 0) {
    puVar6 = (undefined1 *)0x2;
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    plVar3 = &lStack_170;
    pcStack_138 = FUN_107d8cec0;
    uStack_160 = uVar7;
    lStack_158 = unaff_x21;
    puStack_150 = puVar6;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    puStack_168 = PTR_PTR_1126faff0;
    lStack_170 = lVar1;
    _objc_msgSendSuper2(&lStack_170,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      _objc_retain(puVar4);
      uVar7 = *(undefined8 *)((long)plVar3 + 8);
      *(undefined8 **)((long)plVar3 + 8) = puVar4;
      _objc_release(uVar7);
      _objc_retain(puVar5);
      uVar7 = *(undefined8 *)((long)plVar3 + 0x28);
      *(undefined1 **)((long)plVar3 + 0x28) = puVar5;
      _objc_release(uVar7);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    return (undefined1 *)plVar3;
  }
  return puVar6;
}



/* Entry: 107d8cec0; end: 107d8cf63; -[SCGallerySaveToCameraRollActivityController initWithDataObjectContext:fetchLimit:] */

undefined1 *
FUN_107d8cec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126faff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8cf64; end: 107d8d0cb; -[SCGallerySaveToCameraRollActivityController saveWithActivityItemProviders:completion:] */

void FUN_107d8cf64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((((*(byte *)(param_1 + 0x40) & 1) == 0) && ((*(byte *)(param_1 + 0x41) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x42) & 1) == 0)) && ((*(byte *)(param_1 + 0x43) & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b24c0;
    _objc_alloc();
    func_0x00010bff0fa0();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c178040(*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x40) = 1;
    func_0x00010c239680(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be98b00(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8d0cc; end: 107d8d10f;  */

void FUN_107d8d0cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      *(undefined1 *)(param_1 + 0x42) = 1;
      func_0x00010bde2800(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8d110; end: 107d8d32f; -[SCGallerySaveToCameraRollActivityController _saveAtIndex:] */

void FUN_107d8d110(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (param_3 == lVar2) {
      *(undefined1 *)(param_1 + 0x41) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    puVar4 = PTR_PTR_1126d7ca0;
    func_0x00010c263a20();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)puVar4 == 0) {
      func_0x00010c250ac0(*(undefined8 *)(param_1 + 0x20));
      ppuVar8 = (undefined **)0x0;
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107d8d330;
      puStack_80 = &UNK_11085aaa8;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(uVar3);
      ppuVar8 = &puStack_98;
      uStack_78 = uVar3;
      _objc_retainBlock(ppuVar8);
      _objc_release(uStack_78);
      _objc_destroyWeak(auStack_70);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2827c0();
    _objc_release(uVar5);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107d8d38c;
    puStack_c0 = &UNK_110a0c078;
    _objc_copyWeak(auStack_b0,auStack_68);
    _objc_retain(uVar3);
    ppuVar7 = &puStack_d8;
    uStack_b8 = uVar3;
    uStack_a8 = uVar6;
    lStack_a0 = param_3;
    _objc_retainBlock(ppuVar7);
    func_0x00010bfbf640(PTR_PTR_1126d7ca0);
    _objc_release(ppuVar7);
    _objc_release(uStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(ppuVar8);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 107d8d330; end: 107d8d38b;  */

void FUN_107d8d330(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == '\x01')) {
    func_0x00010c1e46c0(param_1,*(undefined8 *)(lVar1 + 0x20),param_3,1,
                        *(undefined8 *)(param_2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d8d38c; end: 107d8d687;  */

void FUN_107d8d38c(long param_1,undefined *param_2,undefined **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  ppuVar8 = param_3;
  _objc_retain(param_2);
  iVar7 = (int)puVar4;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == (undefined **)0x0) || (lVar1 == 0)) {
    if (lVar1 != 0) goto LAB_107d8d464;
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined ***)(lVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf3ec40();
    ppuVar3 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110ebd378;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined **)(lVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    _objc_release(ppuVar3);
LAB_107d8d464:
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      if (param_2 == (undefined *)0x0) {
        func_0x00010bf3ec40();
        ppuVar3 = param_3;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_110ebd3b8;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(lVar1 + 0x38);
        *(undefined **)(lVar1 + 0x38) = puVar4;
        _objc_release(uVar2);
        _objc_release(ppuVar3);
        func_0x00010bde2800(lVar1);
      }
      else {
        _objc_initWeak(auStack_78,lVar1);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar5 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar4);
        puVar4 = param_2;
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_70 = param_2;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c242100();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        FUN_107d8cd44();
        ppuVar8 = *(undefined ***)(param_1 + 0x30);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_107d8d688;
        puStack_a0 = &UNK_110a0c048;
        _objc_retain(param_2);
        puStack_98 = param_2;
        _objc_copyWeak(auStack_88,auStack_78);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar9);
        uStack_80 = *(undefined8 *)(param_1 + 0x38);
        uStack_90 = uVar9;
        FUN_107fe8cd4(puVar4,uVar2,ppuVar8,&puStack_b8);
        iVar7 = (int)uVar2;
        _objc_release(uVar6);
        if (((ulong)puVar5 & 1) == 0) {
          _objc_release(puVar4);
        }
        _objc_release(uStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_release(puStack_98);
        _objc_destroyWeak(auStack_78);
      }
      goto LAB_107d8d604;
    }
  }
  FUN_107d8d79c(param_2);
LAB_107d8d604:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  FUN_107d8d79c(*(undefined8 *)(param_2 + 0x20));
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != (undefined *)0x0) && (param_2[0x40] == '\x01')) {
    if (iVar7 == 0) {
      if (ppuVar8 != (undefined **)0x0) {
        _objc_retain(ppuVar8);
        uVar2 = *(undefined8 *)(param_2 + 0x30);
        *(undefined ***)(param_2 + 0x30) = ppuVar8;
        _objc_release(uVar2);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf3ec40();
      ppuVar3 = ppuVar8;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar4;
      _objc_release(uVar2);
      _objc_release(ppuVar3);
      func_0x00010bde2800(param_2);
    }
    else {
      func_0x00010c0bb340(*(undefined8 *)(param_2 + 0x20));
      func_0x00010be98b00(param_2);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 107d8d688; end: 107d8d79b;  */

void FUN_107d8d688(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  FUN_107d8d79c(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
    if (param_2 == 0) {
      if (param_3 != 0) {
        _objc_retain(param_3);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = param_3;
        _objc_release(uVar1);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf3ec40();
      lVar2 = param_3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar3;
      _objc_release(uVar1);
      _objc_release(lVar2);
      func_0x00010bde2800(param_1);
    }
    else {
      func_0x00010c0bb340(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be98b00(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8d79c; end: 107d8d80b;  */

void FUN_107d8d79c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8d80c; end: 107d8d957; -[SCGallerySaveToCameraRollActivityController _complete] */

void FUN_107d8d80c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x18);
    _objc_retainBlock();
    bVar1 = *(byte *)(param_1 + 0x41);
    bVar2 = *(byte *)(param_1 + 0x42);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    puVar7 = *(undefined **)(param_1 + 0x38);
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar4);
    func_0x00010c178040(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar4);
    *(undefined4 *)(param_1 + 0x40) = 0x1000000;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar3 != 0) {
      if (((bVar2 | bVar1) & 1) == 0) {
        if (puVar7 == (undefined *)0x0) {
          _objc_opt_class();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
        }
      }
      else {
        _objc_release(puVar7);
        puVar7 = (undefined *)0x0;
      }
      (**(code **)(lVar3 + 0x10))(lVar3,bVar1,uVar6,puVar7,bVar2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release();
    }
    _objc_release(puVar7);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107d8d958; end: 107d8d9c3; -[SCGallerySaveToCameraRollActivityController .cxx_destruct] */

void FUN_107d8d958(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8d9c4; end: 107d8da37; -[SCMemoriesPHAssetImageActivityItemGenerator initWithImageAsset:] */

undefined1 * FUN_107d8d9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faff8;
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



/* Entry: 107d8da38; end: 107d8da3f; -[SCMemoriesPHAssetImageActivityItemGenerator estimatedMediaSize] */

long FUN_107d8da38(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  lVar3 = lVar1;
  if (lVar2 == 1) {
    func_0x00010c0fce40(lVar1);
    lVar2 = lVar1;
    func_0x00010c0fcaa0(lVar1);
    func_0x000107f72bcc(lVar3,lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0c6c20();
    if (lVar2 == 2) {
      func_0x00010c0fce40(lVar1);
      lVar2 = lVar1;
      func_0x00010c0fcaa0(lVar1);
      func_0x00010bf8b160(lVar1);
      func_0x000107f72b24(lVar3,lVar2,(long)param_1);
    }
    else {
      lVar3 = 0;
    }
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107d8da40; end: 107d8da5b; -[SCMemoriesPHAssetImageActivityItemGenerator itemDuration] */

long FUN_107d8da40(double param_1,long param_2)

{
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 8));
  return (long)param_1;
}



/* Entry: 107d8da5c; end: 107d8da63; -[SCMemoriesPHAssetImageActivityItemGenerator itemId] */

void FUN_107d8da5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 107d8da64; end: 107d8da6b; -[SCMemoriesPHAssetImageActivityItemGenerator primarySortDate] */

void FUN_107d8da64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_creationDate_1125b4368);
  return;
}



/* Entry: 107d8da6c; end: 107d8da73; -[SCMemoriesPHAssetImageActivityItemGenerator secondarySortDate] */

void FUN_107d8da6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_modificationDate_112611ae0);
  return;
}



/* Entry: 107d8da74; end: 107d8dc1b; -[SCMemoriesPHAssetImageActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8da74(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0fce40();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0fcaa0();
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  dVar5 = 1.0;
  if (0x9c4 < uVar1) {
    dVar5 = 2500.0 / (double)uVar1;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0fce40(uVar1);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0fcaa0(uVar2);
  puVar3 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  func_0x00010c18ba80(puVar3);
  func_0x00010c1cc000(puVar3);
  _objc_initWeak(auStack_58,param_1);
  puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1357a0(dVar5 * (double)uVar1,dVar5 * (double)uVar2,puVar4);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8dc1c; end: 107d8dc63;  */

void FUN_107d8dc1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be376e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8dc64; end: 107d8dd6f; -[SCMemoriesPHAssetImageActivityItemGenerator _imageRequestCompleted:] */

void FUN_107d8dc64(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126d7cb8;
    func_0x00010bf99380(PTR_PTR_1126d7cb8,param_2,&PTR____CFConstantStringClassReference_110ec96d8,
                        &PTR____CFConstantStringClassReference_110ec9778,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef16e0(puVar2,param_2,param_1,puVar1,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1700(puVar1,param_2,param_1,param_3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8dd70; end: 107d8dd73; -[SCMemoriesPHAssetImageActivityItemGenerator cancel] */

void FUN_107d8dd70(void)

{
  return;
}



/* Entry: 107d8dd74; end: 107d8dd87; -[SCMemoriesPHAssetImageActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8dd74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain();
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1ec960();
    func_0x00010c18ba80(puVar2);
    func_0x00010c1cc000(puVar2);
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c1357a0(0x4062c00000000000,0x4062c00000000000,puVar3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 107d8dd88; end: 107d8dd9f; -[SCMemoriesPHAssetImageActivityItemGenerator delegate] */

void FUN_107d8dd88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8dda0; end: 107d8ddab; -[SCMemoriesPHAssetImageActivityItemGenerator setDelegate:] */

void FUN_107d8dda0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107d8ddac; end: 107d8ddd7; -[SCMemoriesPHAssetImageActivityItemGenerator .cxx_destruct] */

void FUN_107d8ddac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8ddd8; end: 107d8de7b; -[SCMemoriesPHAssetVideoActivityItemGenerator initWithVideoAsset:outputUrl:] */

undefined1 *
FUN_107d8ddd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb000;
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



/* Entry: 107d8de7c; end: 107d8de83; -[SCMemoriesPHAssetVideoActivityItemGenerator estimatedMediaSize] */

long FUN_107d8de7c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  lVar3 = lVar1;
  if (lVar2 == 1) {
    func_0x00010c0fce40(lVar1);
    lVar2 = lVar1;
    func_0x00010c0fcaa0(lVar1);
    func_0x000107f72bcc(lVar3,lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0c6c20();
    if (lVar2 == 2) {
      func_0x00010c0fce40(lVar1);
      lVar2 = lVar1;
      func_0x00010c0fcaa0(lVar1);
      func_0x00010bf8b160(lVar1);
      func_0x000107f72b24(lVar3,lVar2,(long)param_1);
    }
    else {
      lVar3 = 0;
    }
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 107d8de84; end: 107d8de8b; -[SCMemoriesPHAssetVideoActivityItemGenerator itemId] */

void FUN_107d8de84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 107d8de8c; end: 107d8dea7; -[SCMemoriesPHAssetVideoActivityItemGenerator itemDuration] */

long FUN_107d8de8c(double param_1,long param_2)

{
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 8));
  return (long)param_1;
}



/* Entry: 107d8dea8; end: 107d8deaf; -[SCMemoriesPHAssetVideoActivityItemGenerator primarySortDate] */

void FUN_107d8dea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_creationDate_1125b4368);
  return;
}



/* Entry: 107d8deb0; end: 107d8deb7; -[SCMemoriesPHAssetVideoActivityItemGenerator secondarySortDate] */

void FUN_107d8deb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_modificationDate_112611ae0);
  return;
}



/* Entry: 107d8deb8; end: 107d8dff3; -[SCMemoriesPHAssetVideoActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8deb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
  _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
  func_0x00010c18ba80();
  func_0x00010c1cc000(puVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1353c0(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107d8dff4; end: 107d8e0ff;  */

void FUN_107d8dff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(uVar1);
  func_0x00010c1d7200(param_2);
  func_0x00010c1d6fc0(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf9cee0(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107d8e100; end: 107d8e1bf;  */

void FUN_107d8e100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107d8e1c0; end: 107d8e1f3;  */

void FUN_107d8e1c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8e1f4; end: 107d8e343; -[SCMemoriesPHAssetVideoActivityItemGenerator _exportSessionCompleted:] */

void FUN_107d8e1f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  puVar2 = PTR_PTR_1126d7cb8;
  if (lVar1 != 3) {
    lVar1 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99380(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec96d8,
                        &PTR____CFConstantStringClassReference_110ec9778,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef16e0(lVar1,param_2,param_1,puVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1700(lVar1,param_2,param_1,uVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d8e344; end: 107d8e347; -[SCMemoriesPHAssetVideoActivityItemGenerator cancel] */

void FUN_107d8e344(void)

{
  return;
}



/* Entry: 107d8e348; end: 107d8e35b; -[SCMemoriesPHAssetVideoActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8e348(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain();
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1ec960();
    func_0x00010c18ba80(puVar2);
    func_0x00010c1cc000(puVar2);
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c1357a0(0x4062c00000000000,0x4062c00000000000,puVar3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 107d8e35c; end: 107d8e373; -[SCMemoriesPHAssetVideoActivityItemGenerator delegate] */

void FUN_107d8e35c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8e374; end: 107d8e37f; -[SCMemoriesPHAssetVideoActivityItemGenerator setDelegate:] */

void FUN_107d8e374(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107d8e380; end: 107d8e3b7; -[SCMemoriesPHAssetVideoActivityItemGenerator .cxx_destruct] */

void FUN_107d8e380(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d8e3b8; end: 107d8e53f; -[SCMemoriesPreviewImageActivityItemGenerator initWithPreviewImage:previewConfiguration:] */

undefined1 *
FUN_107d8e3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fb008;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf59960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf313a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d8e540; end: 107d8e567; -[SCMemoriesPreviewImageActivityItemGenerator itemId] */

void FUN_107d8e540(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8e568; end: 107d8e59f; -[SCMemoriesPreviewImageActivityItemGenerator estimatedMediaSize] */

long FUN_107d8e568(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 8));
  uVar2 = (ulong)param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + 8));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c14e120(puVar1);
  func_0x00010b690ad8(param_3,param_4,param_1);
  if ((double)(ulong)(long)param_2 < (double)uVar2) {
    func_0x00010b690bf4();
  }
  func_0x00010b690934();
  func_0x00010b690acc();
  _objc_release(puVar1);
  return (long)(param_4 * param_3 * 0.14);
}



/* Entry: 107d8e5a0; end: 107d8e5a7; -[SCMemoriesPreviewImageActivityItemGenerator itemDuration] */

undefined8 FUN_107d8e5a0(void)

{
  return 0;
}



/* Entry: 107d8e5a8; end: 107d8e613; -[SCMemoriesPreviewImageActivityItemGenerator generateItemForActivityType:] */

void FUN_107d8e5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1700(lVar1,param_2,param_1,uVar3,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d8e614; end: 107d8e62f; -[SCMemoriesPreviewImageActivityItemGenerator generateThumbnailForExport:] */

void FUN_107d8e614(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d8e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}



/* Entry: 107d8e630; end: 107d8e633; -[SCMemoriesPreviewImageActivityItemGenerator cancel] */

void FUN_107d8e630(void)

{
  return;
}



/* Entry: 107d8e634; end: 107d8e65b; -[SCMemoriesPreviewImageActivityItemGenerator primarySortDate] */

void FUN_107d8e634(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8e65c; end: 107d8e683; -[SCMemoriesPreviewImageActivityItemGenerator secondarySortDate] */

void FUN_107d8e65c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8e684; end: 107d8e69b; -[SCMemoriesPreviewImageActivityItemGenerator delegate] */

void FUN_107d8e684(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d8e69c; end: 107d8e6a7; -[SCMemoriesPreviewImageActivityItemGenerator setDelegate:] */

void FUN_107d8e69c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107d8e6a8; end: 107d8e6f7; -[SCMemoriesPreviewImageActivityItemGenerator .cxx_destruct] */

void FUN_107d8e6a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


