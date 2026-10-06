/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c912ac; end: 105c91323; -[SCGalleryFooterBarActionHandler directorModeScopeDidComplete] */

void FUN_105c912ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105c91324; end: 105c9133b; -[SCGalleryFooterBarActionHandler fromViewController] */

void FUN_105c91324(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c9133c; end: 105c91347; -[SCGalleryFooterBarActionHandler setFromViewController:] */

void FUN_105c9133c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x178,param_3);
  return;
}



/* Entry: 105c91348; end: 105c9158b; -[SCGalleryFooterBarActionHandler .cxx_destruct] */

void FUN_105c91348(long param_1)

{
  _objc_destroyWeak(param_1 + 0x178);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105c9158c; end: 105c91e77; -[SCGallerySelectionController initWithPresentingViewController:delegate:dataSource:mergedDataSource:encryptedContentManager:cachingMediaManager:dataObjectContext:galleryLogger:editDataMutator:favoriteDataMutator:cloudFS:contentDelivery:circumstanceEngine:musicSelectionLoader:musicMediaLoader:grapheneRegistry:actionHandler:userTrackedLogger:boomboxScopeExposer:boomboxScopeServices:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:composerRuntime:memoriesExperimentService:snapDocDownloadingService:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:memoriesSnapDocSaveManager:memoriesSaveManager:snapDocFactory:memoriesMashupSnapDocFactory:snapDocEditorFactory:mlModelProvider:collageManager:crCollageManager:crMashupManager:snapRenderer:docObjectContext:snapInfoFetcher:musicSyncTrackLoader:memoriesQuickCutScopeExposer:deckHierarchyFactory:] */

undefined8 *
FUN_105c9158c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  puStack_70 = PTR_PTR_1126ecb10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_40);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_19;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_3);
    func_0x00010c1a11a0(puVar1[0x28]);
    _objc_storeWeak(puVar1 + 0xb,param_4);
    _objc_storeWeak(puVar1 + 10,param_5);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_28;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2c,param_29);
    _objc_retain(param_30);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_43;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar1[0x29] = 0;
    _objc_retain(param_26);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_45;
    _objc_release(uVar2);
    uVar2 = param_27;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x3c];
    puVar1[0x3c] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_27;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x3d];
    puVar1[0x3d] = uVar2;
    _objc_release(uVar5);
    func_0x00010bea9200(puVar1);
  }
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c91e78; end: 105c91ed7;  */

void FUN_105c91e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2905e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105c91ed8; end: 105c91f3f; -[SCGallerySelectionController enterSelectionModeWithTabType:headerBarType:isFromLongPress:] */

void FUN_105c91ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  if (*(long *)(param_1 + 0xc0) == 1) {
    return;
  }
  uVar1 = 0xb;
  if (param_5 != 0) {
    uVar1 = 0xc;
  }
  *(undefined8 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 200) = uVar1;
  func_0x00010be4d3e0();
  func_0x00010be4d6c0(param_1);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15a580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c91f40; end: 105c92033; -[SCGallerySelectionController exitSelectionMode] */

void FUN_105c91f40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c92034;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xe0),param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105c92040;
  puStack_78 = &UNK_110842e18;
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105c920a4;
  puStack_a0 = &UNK_110841f20;
  lStack_98 = param_1;
  lStack_70 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_90,
                      &puStack_b8);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x88));
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar2);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15a5a0();
  _objc_release(param_1);
  return;
}



/* Entry: 105c92034; end: 105c9203f;  */

void FUN_105c92034(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb8) = 0;
  return;
}



/* Entry: 105c92040; end: 105c920f7;  */

void FUN_105c92040(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98));
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(&uStack_50,0,param_1);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98),param_3,&uStack_80);
  return;
}



/* Entry: 105c920f8; end: 105c921e3; -[SCGallerySelectionController selectionUpdated] */

void FUN_105c920f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c159920();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 + lVar5 == 0) {
    func_0x00010bf9bae0(param_1);
  }
  else if (*(long *)(param_1 + 0xc0) == 1) {
    func_0x00010bed83c0(param_1,param_2,lVar2,lVar3,lVar4);
    func_0x00010bed9180(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105c921e4; end: 105c921f3; -[SCGallerySelectionController isSelectMode] */

bool FUN_105c921e4(long param_1)

{
  return *(long *)(param_1 + 0xc0) == 1;
}



/* Entry: 105c921f4; end: 105c9222b; -[SCGallerySelectionController bottomInset] */

double FUN_105c921f4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (*(long *)(param_4 + 0xc0) == 1) {
    func_0x00010c14d9e0(0,PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar1 = param_3 + 64.0;
  }
  return dVar1;
}



/* Entry: 105c9222c; end: 105c92247; -[SCGallerySelectionController _loadFooterBarIfNeeded] */

void FUN_105c9222c(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateFooterActionItemsWithSele_112593a98,0,0,0);
  return;
}



/* Entry: 105c92248; end: 105c926ff; -[SCGallerySelectionController _loadHeaderBarIfNeeded] */

void FUN_105c92248(undefined *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  puStack_f8 = unaff_x19;
  if (*(long *)(param_1 + 0x88) == 0) {
    unaff_x20 = PTR_PTR_1126af078;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar6 = PTR_PTR_1126af080;
    _objc_alloc_init(PTR_PTR_1126af080);
    func_0x00010c187440(unaff_x20);
    _objc_release(puVar6);
    puVar6 = unaff_x20;
    func_0x00010bf5eee0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1675c0();
    _objc_release(puVar6);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dba798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x20;
    func_0x00010bf5eee0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar6);
    _objc_release(ppuVar1);
    puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar6);
    _objc_release(ppuVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c271420(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar6);
    _objc_release(puVar2);
    func_0x00010befbd60(puVar6);
    puVar2 = unaff_x20;
    func_0x00010bf5eee0(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar6;
    func_0x00010c2194c0();
    _objc_release(puVar2);
    if ((*(long *)(param_1 + 0xd8) == 0) ||
       (puVar6 = (undefined *)0x0, *(long *)(param_1 + 0xd8) == 1)) {
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_90 = puVar6;
    func_0x00010c16e440(unaff_x20,puVar6,puVar6);
    func_0x00010c219b60(unaff_x20);
    puVar6 = param_1 + 0x48;
    _objc_loadWeakRetained(puVar6);
    puVar2 = puVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar6);
    puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = unaff_x20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1 + 0x48;
    puStack_a0 = puVar2;
    _objc_loadWeakRetained();
    puStack_98 = puVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    puStack_b8 = puVar2;
    puStack_80 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1 + 0x48;
    puStack_d0 = puVar3;
    _objc_loadWeakRetained();
    puStack_c0 = unaff_x24;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = unaff_x24;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    puStack_78 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1 + 0x48;
    _objc_loadWeakRetained();
    unaff_x21 = puVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c8);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar4);
    _objc_release(unaff_x21);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(unaff_x24);
    _objc_release(puStack_d8);
    _objc_release(puStack_c0);
    _objc_release(puStack_d0);
    _objc_release(puStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a8);
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = unaff_x20;
    _objc_release(uVar5);
    _objc_release(puStack_90);
    puVar6 = puStack_88;
    _objc_release();
    puStack_f8 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_e8 = FUN_105c92700;
    puStack_120 = unaff_x24;
    puStack_118 = unaff_x23;
    puStack_110 = unaff_x22;
    puStack_108 = unaff_x21;
    puStack_100 = unaff_x20;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_128,puVar6);
    uVar5 = *(undefined8 *)(puVar6 + 0x140);
    puVar6 = puVar6 + 0x50;
    _objc_loadWeakRetained(puVar6);
    puVar2 = puVar6;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010c09fc20(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
    return;
  }
  return;
}



/* Entry: 105c92700; end: 105c9280f; -[SCGallerySelectionController _promptToMakeSelectedItemsPrivate:] */

void FUN_105c92700(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c09fc20(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c92810; end: 105c9284b;  */

void FUN_105c92810(long param_1,undefined8 param_2,ulong param_3)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 & 1) == 0) && (param_1 != 0)) {
    func_0x00010bf9bae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c9284c; end: 105c92933; -[SCGallerySelectionController _updateHeaderCount] */

void FUN_105c9284c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = (undefined **)(param_1 + 0x50);
  _objc_loadWeakRetained();
  ppuVar2 = ppuVar1;
  func_0x00010c159920();
  _objc_release(ppuVar1);
  if (0x10 < *(ulong *)(param_1 + 0xd0)) {
    return;
  }
  if ((1L << (*(ulong *)(param_1 + 0xd0) & 0x3f) & 0x1f7efU) == 0) {
    if (ppuVar2 != (undefined **)0x0) {
      func_0x000108dfdf74(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105c928e8;
    }
  }
  else if (ppuVar2 != (undefined **)0x0) {
    func_0x000108dfe018(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105c928e8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dba798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105c928e8:
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf5eee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105c92934; end: 105c92a43; -[SCGallerySelectionController _updateFooterActionItemsWithSelectedGalleryItems:selectedGallerySnaps:totalSelectedItemsCount:] */

void FUN_105c92934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c92a44; end: 105c92b27;  */

void FUN_105c92a44(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_60,param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010be81260(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 105c92b28; end: 105c92bf7;  */

void FUN_105c92b28(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c92bf8;
  puStack_68 = &UNK_1108e3528;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_2;
  uStack_48 = param_3;
  uStack_47 = param_4;
  uStack_46 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105c92bf8; end: 105c92c6f;  */

void FUN_105c92bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = uVar3;
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + 0xb9) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)(lVar1 + 0xba) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)(lVar1 + 0xbb) = *(undefined1 *)(param_1 + 0x3a);
    func_0x00010beae120(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c92c70; end: 105c93ad7; -[SCGallerySelectionController _processFooterActionItemsWithSelectedGalleryItems:selectedGallerySnaps:totalSelectedItemsCount:hasExistingStoriesToShowAddToStoryOption:completion:] */

void FUN_105c92c70(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  long lStack_578;
  undefined *puStack_530;
  uint uStack_524;
  long lStack_4e0;
  long lStack_4c8;
  ulong uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined *puStack_488;
  long lStack_480;
  undefined1 uStack_478;
  undefined1 uStack_477;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  long lStack_308;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_7 != 0) {
    lVar11 = param_3;
    func_0x00010bf529e0();
    lVar19 = param_4;
    func_0x00010bf529e0();
    if (lVar11 + lVar19 == 0) {
      puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_320 = 0xc2000000;
      pcStack_318 = FUN_105c93ad8;
      puStack_310 = &UNK_110842e18;
      lStack_308 = param_1;
      func_0x0001000d76cc("APPSTORE",&puStack_328);
      (**(code **)(param_7 + 0x10))(param_7,0,0,0,0);
    }
    else {
      func_0x00010bf529e0();
      func_0x00010bf529e0();
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      _objc_retain(param_3);
      lVar11 = param_3;
      func_0x00010bf52a60();
      if (lVar11 == 0) {
        lVar13 = 0;
        lVar19 = 0;
        lVar18 = 0;
        bVar2 = true;
        bVar1 = 1;
        fVar23 = 0.0;
      }
      else {
        uStack_524 = 0;
        bVar1 = 0;
        lVar13 = 0;
        lVar19 = 0;
        lStack_578 = 0;
        lVar18 = 0;
        lVar10 = *plStack_360;
        fVar23 = 0.0;
        do {
          lVar16 = 0;
          do {
            if (*plStack_360 != lVar10) {
              _objc_enumerationMutation(param_3);
            }
            uVar14 = *(ulong *)(lStack_368 + lVar16 * 8);
            uVar7 = uVar14;
            func_0x00010bfbd100();
            puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
            puVar8 = PTR_DAT_1126a4ec8;
            uStack_4a8 = uVar14;
            if (uVar7 == 2) {
              _objc_retain(uVar14);
              _objc_opt_class(puVar4);
              uVar7 = uVar14;
              _objc_opt_isKindOfClass(uVar14,puVar4);
              if ((uVar7 & 1) == 0) {
                uStack_4a8 = 0;
              }
              _objc_retain(uStack_4a8);
              _objc_release(uVar14);
              uVar7 = uStack_4a8;
              func_0x00010c0c6c20();
              if (uVar7 == 2) {
                lVar13 = lVar13 + 1;
                func_0x000107f701a8();
                func_0x000107f70018(uStack_4a8,*(undefined8 *)(param_1 + 0x108));
                uVar7 = uStack_4a8;
                func_0x000107f6ff64(uStack_4a8,*(undefined8 *)(param_1 + 0x108));
                lStack_578 = lStack_578 + (uVar7 & 0xffffffff);
              }
LAB_105c9340c:
              _objc_release(uStack_4a8);
            }
            else if (uVar7 == 1) {
              _objc_retain(uVar14);
              uVar7 = uVar14;
              func_0x00010010fab4(uVar14,puVar8);
              if ((int)uVar7 == 0) {
                uStack_4a8 = 0;
              }
              _objc_retain(uStack_4a8);
              _objc_release(uVar14);
              uVar14 = *(ulong *)(param_1 + 8);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar14;
              func_0x00010bfa7340();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar14);
              if (uVar7 == 0) {
LAB_105c92ff8:
                uStack_388 = 0;
                uStack_390 = 0;
                uStack_378 = 0;
                uStack_380 = 0;
                lStack_3a8 = 0;
                uStack_3b0 = 0;
                uStack_398 = 0;
                plStack_3a0 = (long *)0x0;
                _objc_retain(uVar7);
                uVar14 = uVar7;
                func_0x00010bf52a60();
                if (uVar14 != 0) {
                  lVar17 = *plStack_3a0;
                  do {
                    uVar20 = 0;
                    do {
                      if (*plStack_3a0 != lVar17) {
                        _objc_enumerationMutation(uVar7);
                      }
                      lVar5 = *(long *)(lStack_3a8 + uVar20 * 8);
                      func_0x00010b5fa088();
                      if (lVar5 - 1U < 0xc) {
                        lVar5 = *(long *)(&UNK_10ddd0188 + (lVar5 - 1U) * 8);
                      }
                      else {
                        lVar5 = 0;
                      }
                      lVar18 = lVar5 + lVar18;
                      uVar20 = uVar20 + 1;
                    } while (uVar14 != uVar20);
                    uVar14 = uVar7;
                    func_0x00010bf52a60();
                  } while (uVar14 != 0);
                }
                _objc_release(uVar7);
              }
              else {
                uVar14 = uVar7;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar14;
                func_0x00010b5fa088();
                if (10 < uVar20 - 2) {
                  _objc_release(uVar14);
                  goto LAB_105c92ff8;
                }
                uVar20 = uStack_4a8;
                func_0x00010bfbdda0();
                func_0x00010b5fa33c();
                _objc_release(uVar14);
                if (uVar20 != 4) goto LAB_105c92ff8;
                uVar14 = uVar7;
                func_0x00010bf529e0(uVar7);
                lVar18 = uVar14 + lVar18;
              }
              uVar14 = uStack_4a8;
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              if (uVar14 != 4) {
                func_0x00010bfbdda0();
                func_0x00010b5fa33c();
              }
              uVar6 = 0;
              uStack_3c8 = 0;
              uStack_3d0 = 0;
              uStack_3b8 = 0;
              uStack_3c0 = 0;
              lStack_3e8 = 0;
              uStack_3f0 = 0;
              uStack_3d8 = 0;
              plStack_3e0 = (long *)0x0;
              _objc_retain(uVar7);
              uVar14 = uVar7;
              func_0x00010bf52a60();
              fVar22 = (float)uVar6;
              if (uVar14 != 0) {
                lVar17 = *plStack_3e0;
                do {
                  uVar20 = 0;
                  do {
                    if (*plStack_3e0 != lVar17) {
                      _objc_enumerationMutation(uVar7);
                    }
                    uVar15 = *(ulong *)(lStack_3e8 + uVar20 * 8);
                    func_0x00010b5fa528(uVar15);
                    func_0x00010b5fa70c();
                    func_0x00010b5fc6f0(uVar15,*(undefined8 *)(param_1 + 0x108));
                    lVar19 = lVar19 + (uVar15 & 0xffffffff);
                    uVar20 = uVar20 + 1;
                  } while (uVar14 != uVar20);
                  uVar14 = uVar7;
                  func_0x00010bf52a60();
                  fVar22 = (float)uVar6;
                } while (uVar14 != 0);
              }
              _objc_release(uVar7);
              func_0x00010bfbdda0();
              func_0x00010b5face4();
              func_0x00010c07b240();
              if ((uStack_524 & 1) == 0) {
                uVar9 = *(undefined8 *)(param_1 + 8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar9;
                func_0x00010c0742e0();
                uStack_524 = (uint)uVar6;
                _objc_release(uVar9);
              }
              else {
                uStack_524 = 1;
              }
              if (uVar7 != 0) {
                func_0x00010bf529e0();
              }
              uVar6 = *(undefined8 *)(param_1 + 8);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf52dc0();
              _objc_release(uVar6);
              uVar14 = uStack_4a8;
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              uVar20 = uVar7;
              func_0x00010bf529e0();
              if (uVar20 != 0) {
                uVar20 = uVar7;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c23ff80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar20);
              }
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              uVar20 = uStack_4a8;
              func_0x00010b5f6de4();
              if ((int)uVar20 != 0) {
                uVar20 = uVar7;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar20;
                func_0x00010b5fa088();
                iVar3 = (int)uVar15;
                func_0x00010b5fa4c8();
                _objc_release(uVar20);
                if (iVar3 == 0) {
                  uVar20 = uVar7;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = uVar20;
                  func_0x00010b5fa088();
                  if ((uVar15 < 0xd) && ((1L << (uVar15 & 0x3f) & 0x1566U) != 0)) {
                    _objc_release(uVar20);
                    uVar20 = uVar7;
                    func_0x00010bfb1920(uVar7);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf8b160();
                    fVar23 = fVar23 + fVar22;
                  }
                  _objc_release(uVar20);
                }
                else {
                  fVar23 = fVar23 + 5.0;
                }
              }
              bVar1 = uVar14 == 5 | bVar1;
              _objc_release(uVar7);
              goto LAB_105c9340c;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != lVar11);
          lVar11 = param_3;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
        bVar2 = lStack_578 == 0;
        bVar1 = bVar1 ^ 1;
      }
      _objc_release(param_3);
      uVar7 = *(ulong *)(param_1 + 0x108);
      func_0x000108ec0158();
      puStack_530 = PTR_PTR_1126af4c0;
      if ((int)uVar7 == 0) {
        puStack_530 = (undefined *)0x0;
        uVar14 = uVar7;
      }
      else {
        lVar11 = param_4;
        func_0x00010bf00560(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa6e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(lVar11);
        uVar14 = uVar7 & 0xffffffff;
      }
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      _objc_retain(param_4);
      lStack_4e0 = param_4;
      func_0x00010bf52a60();
      if (lStack_4e0 != 0) {
        lVar11 = *plStack_420;
        do {
          lVar10 = 0;
          do {
            if (*plStack_420 != lVar11) {
              _objc_enumerationMutation(param_4);
            }
            puVar21 = *(undefined **)(lStack_428 + lVar10 * 8);
            func_0x00010b5fa528();
            func_0x00010b5fa70c();
            puVar8 = puVar21;
            func_0x00010b5fc6f0(puVar21,*(undefined8 *)(param_1 + 0x108));
            puVar4 = puVar21;
            func_0x00010b5fa088();
            if (puVar4 + -1 < (undefined *)0xc) {
              lStack_4c8 = *(long *)(&UNK_10ddd0188 + (long)(puVar4 + -1) * 8);
              if ((uVar14 & 1) != 0) goto LAB_105c9361c;
LAB_105c935ec:
              puVar21 = *(undefined **)(param_1 + 8);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar21;
              func_0x00010bfa7040();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lStack_4c8 = 0;
              if ((uVar14 & 1) == 0) goto LAB_105c935ec;
LAB_105c9361c:
              func_0x00010c241220(puVar21);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puStack_530;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar21);
            if (puVar4 != (undefined *)0x0) {
              puVar21 = puVar4;
              func_0x00010c0e0160();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar21 != (undefined *)0x0) {
                uVar9 = *(undefined8 *)(param_1 + 8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar9;
                func_0x00010bfa73e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar9);
                func_0x00010bf4b900();
                uVar14 = uVar7 & 0xffffffff;
                _objc_release(uVar6);
              }
            }
            lVar19 = lVar19 + ((ulong)puVar8 & 0xffffffff);
            lVar18 = lStack_4c8 + lVar18;
            _objc_release(puVar4);
            lVar10 = lVar10 + 1;
          } while (lStack_4e0 != lVar10);
          lStack_4e0 = param_4;
          func_0x00010bf52a60();
        } while (lStack_4e0 != 0);
      }
      _objc_release(param_4);
      func_0x00010beef040();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      plStack_460 = (long *)0x0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      _objc_retain(param_3);
      lVar11 = param_3;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        lVar10 = *plStack_460;
        do {
          lVar16 = 0;
          do {
            if (*plStack_460 != lVar10) {
              _objc_enumerationMutation(param_3);
            }
            puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
            uVar20 = *(ulong *)(lStack_468 + lVar16 * 8);
            _objc_retain(uVar20);
            _objc_opt_class(puVar4);
            uVar14 = uVar20;
            _objc_opt_isKindOfClass(uVar20,puVar4);
            uVar7 = uVar20;
            if ((uVar14 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar20);
            func_0x00010befa140(puVar8);
            _objc_release(uVar7);
            lVar16 = lVar16 + 1;
          } while (lVar11 != lVar16);
          lVar11 = param_3;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(param_3);
      func_0x000107fe9e40();
      puVar4 = PTR_PTR_1126c3900;
      func_0x00010bf529e0();
      func_0x00010bf529e0();
      func_0x000108ec1968();
      func_0x00010bfb4280(fVar23,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be55940(param_1);
      lVar11 = param_3;
      func_0x00010bf529e0();
      lVar10 = param_4;
      func_0x00010bf529e0();
      bVar12 = true;
      if (1 < param_5) {
        uVar7 = *(ulong *)(param_1 + 0x108);
        func_0x000108ec1a38();
        bVar12 = uVar7 < param_5;
      }
      if (lVar19 != 0) {
        bVar12 = true;
      }
      if (param_5 != lVar10 + lVar11) {
        bVar12 = true;
      }
      if (*(long *)(param_1 + 0xd0) == 6) {
        bVar12 = true;
      }
      lVar11 = param_1;
      func_0x00010beb5ee0();
      puStack_4a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_498 = 0xc2000000;
      pcStack_490 = FUN_105c93ae4;
      puStack_488 = &UNK_110854380;
      uStack_477 = (undefined1)lVar11;
      lStack_480 = param_1;
      uStack_478 = bVar12;
      func_0x0001000d76cc("APPSTORE",&puStack_4a0);
      (**(code **)(param_7 + 0x10))
                (param_7,puVar4,bVar2,bVar2 & bVar1 & 0x14U < (ulong)(lVar18 + lVar13),lVar19 != 0);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puStack_530);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010beccad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s__toggleCreateVideoButtonVisibili_112590c58,0);
    return;
  }
  return;
}



/* Entry: 105c93ad8; end: 105c93ae3;  */

void FUN_105c93ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beccad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__toggleCreateVideoButtonVisibili_112590c58,0);
  return;
}



/* Entry: 105c93ae4; end: 105c93b1f;  */

void FUN_105c93ae4(long param_1,undefined8 param_2)

{
  func_0x00010beccac0(*(undefined8 *)(param_1 + 0x20),param_2,(*(byte *)(param_1 + 0x28) ^ 0xff) & 1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010c193630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90),PTR_s_setEditButtonVisible__1126427a8
             ,*(undefined1 *)(param_1 + 0x29));
  return;
}



/* Entry: 105c93b20; end: 105c94087; -[SCGallerySelectionController _logMEOUnhideButtonShownIfNeededWithFooterActionItems:selectedGalleryItems:selectedGallerySnaps:numberOfPrivateEntries:numberOfTooLongToImportVideoAssets:containBackupFailedEntries:] */

void FUN_105c93b20(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_448 [48];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  lVar12 = param_6;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  do {
    if (lVar12 == 0) {
      _objc_release(param_6);
      *(undefined1 *)(param_4 + 0xb8) = 0;
LAB_105c94034:
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
        return;
      }
      ___stack_chk_fail();
      lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = *(long *)(param_6 + 0xb0);
      func_0x00010bf529e0();
      puVar2 = (undefined *)0x0;
      if (lVar12 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lVar12 = *(long *)(param_6 + 0xb0);
        func_0x00010bf529e0();
        if (lVar12 != 0) {
          uVar26 = 0;
          do {
            uVar13 = *(undefined8 *)(param_6 + 0xb0);
            func_0x00010c0dfd40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18b5e0();
            uVar24 = uVar13;
            func_0x00010beedec0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar24);
            _objc_release(uVar13);
            uVar26 = uVar26 + 1;
            uVar14 = *(ulong *)(param_6 + 0xb0);
            func_0x00010bf529e0();
          } while (uVar26 < uVar14);
        }
        if (*(long *)(param_6 + 0xa8) == 0) {
          func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
          dVar29 = 64.0;
          param_3 = param_3 + 64.0;
          puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
          _objc_alloc();
          lVar12 = param_6 + 0x48;
          _objc_loadWeakRetained(lVar12);
          lVar23 = lVar12;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          _CGRectGetHeight();
          dVar30 = dVar29 - param_3;
          lVar15 = param_6 + 0x48;
          _objc_loadWeakRetained(lVar15);
          lVar25 = lVar15;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          _CGRectGetWidth();
          func_0x00010c013de0(0,dVar30,dVar29,param_3);
          uVar24 = *(undefined8 *)(param_6 + 0x98);
          *(undefined **)(param_6 + 0x98) = puVar3;
          _objc_release(uVar24);
          _objc_release(lVar25);
          _objc_release(lVar15);
          _objc_release(lVar23);
          _objc_release(lVar12);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(*(undefined8 *)(param_6 + 0x98));
          _objc_release(puVar3);
          func_0x00010c160fc0(*(undefined8 *)(param_6 + 0x98));
          lVar12 = *(long *)(param_6 + 0xd0);
          puVar3 = PTR_PTR_1126c3908;
          _objc_alloc();
          puVar5 = puVar2;
          func_0x00010bf51e00(puVar2);
          if ((lVar12 == 0xd) || (lVar12 == 3)) {
            puVar27 = PTR_PTR_1126c3910;
            _objc_alloc(PTR_PTR_1126c3910);
            func_0x00010c040b80();
            func_0x00010bff0820();
            uVar24 = *(undefined8 *)(param_6 + 0xa8);
            *(undefined **)(param_6 + 0xa8) = puVar3;
            _objc_release(uVar24);
          }
          else {
            func_0x00010bff0800();
            puVar27 = *(undefined **)(param_6 + 0xa8);
            *(undefined **)(param_6 + 0xa8) = puVar3;
          }
          _objc_release(puVar27);
          _objc_release(puVar5);
          func_0x00010c1c8fe0(*(undefined8 *)(param_6 + 0xa8));
          func_0x00010c1c1c20(*(undefined8 *)(param_6 + 0xa8));
          func_0x00010c18b5e0(*(undefined8 *)(param_6 + 0xa8));
          func_0x00010befbb60(*(undefined8 *)(param_6 + 0x98));
          func_0x00010c219b60(*(undefined8 *)(param_6 + 0xa8));
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar16 = *(undefined8 *)(param_6 + 0xa8);
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_6 + 0x98);
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar16;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)(param_6 + 0xa8);
          uStack_418 = uVar24;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = *(undefined8 *)(param_6 + 0x98);
          func_0x00010c08e400(uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar18;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = *(undefined8 *)(param_6 + 0xa8);
          uStack_410 = uVar13;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = *(undefined8 *)(param_6 + 0x98);
          func_0x00010c1408a0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar22 = uVar20;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_408 = uVar22;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar3);
          _objc_release(puVar5);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar13);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar24);
          _objc_release(uVar17);
          _objc_release(uVar16);
          lVar12 = param_6 + 0x48;
          _objc_loadWeakRetained(lVar12);
          lVar15 = lVar12;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(lVar15);
          _objc_release(lVar12);
          _CGAffineTransformMakeTranslation(auStack_448,0,param_3);
          func_0x00010c219960(*(undefined8 *)(param_6 + 0x98));
          func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        else {
          puVar3 = puVar2;
          func_0x00010bf51e00(puVar2);
          func_0x00010c161aa0(*(undefined8 *)(param_6 + 0xa8));
          _objc_release(puVar3);
        }
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010c219960(*(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x98));
      return;
    }
    lVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(param_6);
      }
      lVar1 = *(long *)(lVar25 * 8);
      func_0x00010c27dd80();
      if (lVar1 == 4) {
        _objc_release(param_6);
        if ((*(byte *)(param_4 + 0xb8) & 1) == 0) {
          *(undefined1 *)(param_4 + 0xb8) = 1;
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_7);
          lVar12 = param_7;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          while (lVar12 != 0) {
            lVar25 = 0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(param_7);
              }
              puVar5 = PTR_DAT_1126a4ec8;
              lVar28 = *(long *)(lVar25 * 8);
              _objc_retain(lVar28);
              lVar4 = lVar28;
              func_0x00010010fab4(lVar28,puVar5);
              lVar1 = lVar28;
              if ((int)lVar4 == 0) {
                lVar1 = 0;
              }
              _objc_retain(lVar1);
              _objc_release(lVar28);
              lVar4 = lVar1;
              func_0x00010bf97200(lVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa140(puVar2);
              _objc_release(lVar4);
              if (lVar1 != 0) {
                func_0x00010bfbdda0(lVar28);
                lVar4 = (long)(int)lVar28;
                func_0x00010b5faa7c(lVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar3);
                _objc_release(lVar4);
              }
              _objc_release(lVar1);
              lVar25 = lVar25 + 1;
            } while (lVar12 != lVar25);
            lVar12 = param_7;
            func_0x00010bf52a60();
          }
          _objc_release(param_7);
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_8);
          lVar12 = param_8;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          while (lVar12 != 0) {
            lVar25 = 0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(param_8);
              }
              uVar24 = *(undefined8 *)(lVar25 * 8);
              func_0x00010c241220(uVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa140(puVar5);
              _objc_release(uVar24);
              lVar25 = lVar25 + 1;
            } while (lVar12 != lVar25);
            lVar12 = param_8;
            func_0x00010bf52a60();
          }
          _objc_release(param_8);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(param_7);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(param_8);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar27);
          _objc_release(puVar6);
          func_0x000108e00074(&PTR____CFConstantStringClassReference_110e268f8,
                              &PTR____CFConstantStringClassReference_110e26918,puVar11,
                              *(undefined8 *)(param_4 + 0xe8));
          _objc_release(puVar11);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        goto LAB_105c94034;
      }
      lVar25 = lVar25 + 1;
    } while (lVar12 != lVar25);
    lVar12 = param_6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105c94088; end: 105c94593; -[SCGallerySelectionController _setupActionBar] */

void FUN_105c94088(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_4 + 0xb0);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar1 = *(long *)(param_4 + 0xb0);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar16 = 0;
      do {
        uVar3 = *(undefined8 *)(param_4 + 0xb0);
        func_0x00010c0dfd40(uVar3,param_5,uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        uVar15 = uVar3;
        func_0x00010beedec0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_5,uVar15);
        _objc_release(uVar15);
        _objc_release(uVar3);
        uVar16 = uVar16 + 1;
        uVar4 = *(ulong *)(param_4 + 0xb0);
        func_0x00010bf529e0();
      } while (uVar16 < uVar4);
    }
    if (*(long *)(param_4 + 0xa8) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar18 = 64.0;
      param_3 = param_3 + 64.0;
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      lVar1 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar1);
      lVar6 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetHeight();
      dVar19 = dVar18 - param_3;
      lVar7 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      func_0x00010c013de0(0,dVar19,dVar18,param_3);
      uVar15 = *(undefined8 *)(param_4 + 0x98);
      *(undefined **)(param_4 + 0x98) = puVar5;
      _objc_release(uVar15);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar1);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_4 + 0x98),param_5,puVar5);
      _objc_release(puVar5);
      func_0x00010c160fc0(*(undefined8 *)(param_4 + 0x98),param_5,
                          &PTR____CFConstantStringClassReference_110e26938);
      lVar1 = *(long *)(param_4 + 0xd0);
      puVar5 = PTR_PTR_1126c3908;
      _objc_alloc();
      puVar9 = puVar2;
      func_0x00010bf51e00(puVar2);
      if ((lVar1 == 0xd) || (lVar1 == 3)) {
        puVar17 = PTR_PTR_1126c3910;
        _objc_alloc(PTR_PTR_1126c3910);
        func_0x00010c040b80();
        func_0x00010bff0820(puVar5,param_5,puVar9,puVar17);
        uVar15 = *(undefined8 *)(param_4 + 0xa8);
        *(undefined **)(param_4 + 0xa8) = puVar5;
        _objc_release(uVar15);
      }
      else {
        func_0x00010bff0800(puVar5,param_5,puVar9);
        puVar17 = *(undefined **)(param_4 + 0xa8);
        *(undefined **)(param_4 + 0xa8) = puVar5;
      }
      _objc_release(puVar17);
      _objc_release(puVar9);
      func_0x00010c1c8fe0(*(undefined8 *)(param_4 + 0xa8),param_5,
                          &PTR____CFConstantStringClassReference_110e26958);
      func_0x00010c1c1c20(*(undefined8 *)(param_4 + 0xa8),param_5,0);
      func_0x00010c18b5e0(*(undefined8 *)(param_4 + 0xa8),param_5,param_4);
      func_0x00010befbb60(*(undefined8 *)(param_4 + 0x98),param_5,*(undefined8 *)(param_4 + 0xa8));
      func_0x00010c219b60(*(undefined8 *)(param_4 + 0xa8),param_5,0);
      puStack_140 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar10 = *(undefined8 *)(param_4 + 0xa8);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_4 + 0x98);
      uStack_130 = uVar10;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uVar15;
      func_0x00010bf493a0(uVar10,param_5,uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_4 + 0xa8);
      uStack_98 = uVar10;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010c08e400(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x00010bf493a0(uVar11,param_5,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_4 + 0xa8);
      uStack_90 = uVar15;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010c1408a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010bf493a0(uVar13,param_5,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_98,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_140,param_5,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar15);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uStack_138);
      _objc_release(uStack_130);
      lVar1 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar1);
      lVar7 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar7);
      _objc_release(lVar1);
      _CGAffineTransformMakeTranslation(&uStack_c8,0,param_3);
      uStack_f8 = uStack_c0;
      uStack_100 = uStack_c8;
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      func_0x00010c219960(*(undefined8 *)(param_4 + 0x98),param_5,&uStack_100);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_105c94594;
      puStack_110 = &UNK_110842e18;
      lStack_108 = param_4;
      func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_5,&puStack_128
                         );
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010c161aa0(*(undefined8 *)(param_4 + 0xa8),param_5,puVar5);
      _objc_release(puVar5);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105c94594;
  uStack_178 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_180 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_168 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_170 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_160 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x98),param_5,&uStack_180);
  return;
}



/* Entry: 105c94594; end: 105c945d3;  */

void FUN_105c94594(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,&uStack_40);
  return;
}



/* Entry: 105c945d4; end: 105c94a7f; -[SCGallerySelectionController _setupMemoriesActionBarWithSelectedItemCount:footerActionItems:] */

void FUN_105c945d4(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_c8 [48];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar15 = (undefined4)((ulong)param_5 >> 0x20);
  uVar14 = (uint)param_5;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar1 = *(long *)(param_4 + 0xb0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_4 + 0x90);
    if (lVar1 == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar18 = 64.0;
      param_3 = param_3 + 64.0;
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      lVar1 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetHeight();
      dVar19 = dVar18 - param_3;
      lVar4 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      func_0x00010c013de0(0,dVar19,dVar18,param_3);
      uVar16 = *(undefined8 *)(param_4 + 0x98);
      *(undefined **)(param_4 + 0x98) = puVar2;
      _objc_release(uVar16);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_4 + 0x98));
      _objc_release(puVar2);
      func_0x00010c160fc0(*(undefined8 *)(param_4 + 0x98));
      puVar2 = PTR_PTR_1126c3918;
      _objc_alloc();
      uVar16 = *(undefined8 *)(param_4 + 0x1e0);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c014d00(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar17 = *(undefined8 *)(param_4 + 0x90);
      *(undefined **)(param_4 + 0x90) = puVar2;
      _objc_release(uVar17);
      _objc_release(uVar16);
      func_0x00010c18b5e0(*(undefined8 *)(param_4 + 0x90));
      lVar1 = param_4;
      func_0x00010bdf5780();
      *(long *)(param_4 + 0x1f0) = lVar1;
      *(ulong *)(param_4 + 0x1f8) = CONCAT44(uVar15,uVar14);
      if (lVar1 != 0) {
        if ((uVar14 & 1) == 0) {
          lVar1 = 0;
        }
        else {
          func_0x000108dfd50c();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bf08280(*(undefined8 *)(param_4 + 0x90));
        _objc_release(lVar1);
      }
      func_0x00010c219b60(*(undefined8 *)(param_4 + 0x90));
      func_0x00010befbb60(*(undefined8 *)(param_4 + 0x98));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = *(undefined8 *)(param_4 + 0x90);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_4 + 0x90);
      uStack_98 = uVar16;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010c08e400(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_4 + 0x90);
      uStack_90 = uVar17;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_4 + 0x98);
      func_0x00010c1408a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar17);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar16);
      _objc_release(uVar7);
      _objc_release(uVar6);
      lVar1 = param_4 + 0x48;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar4);
      _objc_release(lVar1);
      _CGAffineTransformMakeTranslation(auStack_c8,0,param_3);
      func_0x00010c219960(*(undefined8 *)(param_4 + 0x98));
      func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
      lVar1 = *(long *)(param_4 + 0x90);
    }
    func_0x00010beb5ee0(param_4);
    func_0x00010c193620(lVar1);
    func_0x00010c193600(*(undefined8 *)(param_4 + 0x90));
    func_0x00010c1fc040(*(undefined8 *)(param_4 + 0x90));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_7 + 0x20) + 0x98));
  return;
}



/* Entry: 105c94a80; end: 105c94abf;  */

void FUN_105c94a80(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,&uStack_40);
  return;
}



/* Entry: 105c94ac0; end: 105c94b7f; -[SCGallerySelectionController _shouldShowEditButtonForSelectedItemCount:footerActionItems:] */

bool FUN_105c94ac0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e26978,1,0);
  bVar1 = false;
  if ((param_3 == 1) && ((int)uVar2 != 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c94b80;
    puStack_40 = &UNK_1108e3588;
    lVar3 = param_4;
    lStack_38 = param_1;
    func_0x00010bfb2040(param_4,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105c94b80; end: 105c94be3;  */

byte FUN_105c94b80(long param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c27dd80();
  if (uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010bf926c0();
    if ((uVar1 & 1) == 0) {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x20) + 0xbb);
    }
    else {
      bVar2 = 1;
    }
  }
  else {
    bVar2 = 0;
  }
  _objc_release(param_2);
  return bVar2 & 1;
}



/* Entry: 105c94be4; end: 105c94beb; -[SCGallerySelectionController _toggleCreateVideoButtonVisibility:] */

void FUN_105c94be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c185470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_setCreateVideoButtonState__11263ef38);
  return;
}



/* Entry: 105c94bec; end: 105c94c57; -[SCGallerySelectionController _createVideoTreatmentConfig] */

undefined1  [16] FUN_105c94bec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  uVar5 = lVar2 - 1;
  if (uVar5 < 3) {
    uVar3 = *(undefined8 *)(&UNK_10ddd01e8 + uVar5 * 8);
    uVar4 = *(undefined8 *)(&UNK_10ddd0200 + uVar5 * 8);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 105c94c58; end: 105c94e3f; -[SCGallerySelectionController _didTapCreateVideoButton] */

void FUN_105c94c58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  if ((*(byte *)(param_1 + 0xbb) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c159760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf09f80(lVar3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    lVar2 = param_1;
    func_0x00010be7f9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f60(puVar5,param_2,lVar2,1,0);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b6048;
    _objc_alloc();
    func_0x00010c059680();
    if (puVar6 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x00010c12de60(param_1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x200),param_2,puVar6);
      }
      else {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_105c94e40;
        puStack_68 = &UNK_110841f80;
        lStack_60 = param_1;
        puStack_58 = puVar6;
        func_0x00010c2a4ae0(lVar2,param_2,&puStack_80);
      }
      _objc_release(lVar2);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 105c94e40; end: 105c94e4b;  */

void FUN_105c94e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x200),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c94e4c; end: 105c94e9b; -[SCGallerySelectionController removeQuickCutScopeWithScope:] */

void FUN_105c94e4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x200));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c94e9c; end: 105c94e9f; -[SCGallerySelectionController onDismiss] */

void FUN_105c94e9c(void)

{
  return;
}



/* Entry: 105c94ea0; end: 105c94ea3; -[SCGallerySelectionController didPressSendToWithActionBar:] */

void FUN_105c94ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressSendToWithActionBar_11255d580);
  return;
}



/* Entry: 105c94ea4; end: 105c950a7; -[SCGallerySelectionController _didPressSendToWithActionBar] */

void FUN_105c94ea4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((*(byte *)(param_1 + 0xbb) & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xba) == '\x01') {
    func_0x00010be7f9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108df88c4();
    lVar9 = param_1;
  }
  else if ((*(byte *)(param_1 + 0xb9) & 1) == 0) {
    func_0x000109127d28();
    lVar9 = *(long *)(param_1 + 0x108);
    func_0x000107f6fef4(lVar9);
    func_0x000108dfd674();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = lVar9;
    func_0x000108dfd68c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b0e0(param_1);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  else {
    uVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar3 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar3);
      lVar9 = lVar3;
      func_0x00010c0ecc60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x140);
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c159760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c0f2220();
    func_0x00010c15c000(uVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    func_0x00010be53e40(param_1);
    func_0x00010bf9bae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105c950a8; end: 105c9511b; -[SCGallerySelectionController _presentingViewController] */

void FUN_105c950a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
  }
  else {
    _objc_retain(lVar2);
    param_1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c9511c; end: 105c95287; -[SCGallerySelectionController _presentDisabledAlertForTitle:dialogText:] */

void FUN_105c9511c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0 || param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar4);
    func_0x00010be7f9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105c95288; end: 105c95297;  */

void FUN_105c95288(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105c95298; end: 105c9535b; -[SCGallerySelectionController _presentAlertForMashupVC:dialogText:] */

void FUN_105c95298(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0 || param_4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c9535c;
    puStack_50 = &UNK_110848ba8;
    uStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9535c; end: 105c9542f;  */

void FUN_105c9535c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c95430;
  puStack_40 = &UNK_110848ba8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar4;
  uStack_30 = uVar5;
  _objc_retain(uVar3);
  ppuVar1 = &puStack_58;
  uStack_28 = uVar3;
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a0);
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf84b00(lVar2,param_2,1,ppuVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a0);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a0) = 0;
    _objc_release(uVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 105c95430; end: 105c9558b;  */

void FUN_105c95430(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c10eda0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s_onBackPressed_1126164a0);
  return;
}



/* Entry: 105c9558c; end: 105c95593;  */

void FUN_105c9558c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onBackPressed_1126164a0);
  return;
}



/* Entry: 105c95594; end: 105c956bf; -[SCGallerySelectionController _presentStartMashupGenerationDialog] */

void FUN_105c95594(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x1a0) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar4);
    func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x198));
    uVar5 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined **)(param_1 + 0x1a0) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105c956c0; end: 105c956c3;  */

void FUN_105c956c0(void)

{
  return;
}



/* Entry: 105c956c4; end: 105c95783; -[SCGallerySelectionController _presentDisabledAlertForItem:] */

void FUN_105c956c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf926c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf80d60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010bf80d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) goto LAB_105c95770;
    }
    else {
      _objc_release();
    }
    uVar1 = param_3;
    func_0x00010bf80d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf80d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b0e0(param_1,param_2,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_105c95770:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c95784; end: 105c95923; -[SCGallerySelectionController galleryFooterActionItemDidTap:] */

void FUN_105c95784(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf926c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010be7b0c0(param_1,param_2,param_3);
    goto LAB_105c9581c;
  }
  uVar1 = param_3;
  func_0x00010c27dd80();
  switch(uVar1) {
  case 0:
    func_0x00010be1a260(param_1);
    break;
  case 1:
    func_0x00010be1a220(param_1);
    break;
  case 2:
    func_0x00010be1a1c0(param_1);
    break;
  case 3:
    func_0x00010be1a1a0(param_1);
    break;
  case 4:
    func_0x00010be1a240(param_1);
    break;
  case 5:
    func_0x00010be1a1e0(param_1);
    break;
  case 6:
    func_0x00010be1a040(param_1);
    break;
  case 7:
    func_0x00010be1a280(param_1);
    break;
  case 8:
    func_0x00010be1a060(param_1);
    break;
  case 9:
  case 10:
    uVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_3;
    func_0x00010beef020(param_3);
    func_0x00010beda040(param_1,param_2,uVar1 == 9,
                        (uint)(5 < uVar2) | ((uint)uVar2 ^ 0xffffffff) & 1);
    break;
  case 0xb:
    func_0x00010be1a120(param_1);
    break;
  case 0xc:
    func_0x00010be1a140(param_1);
    break;
  case 0xd:
    func_0x00010be1a0e0(param_1);
    break;
  case 0xe:
    uVar3 = 0;
    goto code_r0x000105c9588c;
  case 0xf:
    uVar3 = 1;
code_r0x000105c9588c:
    func_0x00010be1a200(param_1,param_2,uVar3);
    break;
  case 0x10:
    func_0x00010be1a0c0(param_1);
    break;
  case 0x11:
    func_0x00010be1a080(param_1);
    break;
  case 0x12:
    func_0x00010be1a180(param_1);
    break;
  case 0x13:
    func_0x00010be1a0a0(param_1);
    break;
  case 0x14:
    func_0x00010be1a160(param_1);
    break;
  case 0x15:
    func_0x00010be1a100(param_1);
  }
LAB_105c9581c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c95924; end: 105c95be7; -[SCGallerySelectionController _galleryFooterBarDidPressDebugCRCollage] */

void FUN_105c95924(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        uVar11 = *(ulong *)(lStack_128 + lVar13 * 8);
        _objc_retain(uVar11);
        _objc_opt_class(puVar5);
        uVar6 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar5);
        uVar1 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar11);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(uVar1);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  _objc_initWeak(auStack_138,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfbfac0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_138;
  _objc_copyWeak(auStack_140,puVar10);
  uVar9 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010bf9bae0(param_1);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar10);
  lVar3 = lVar3 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(puVar10);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105c95be8; end: 105c95cab;  */

void FUN_105c95be8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c95cac; end: 105c95caf;  */

void FUN_105c95cac(void)

{
  return;
}



/* Entry: 105c95cb0; end: 105c95f6f; -[SCGallerySelectionController _galleryFooterBarDidPressDebugCRMashup] */

void FUN_105c95cb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        uVar11 = *(ulong *)(lStack_128 + lVar13 * 8);
        _objc_retain(uVar11);
        _objc_opt_class(puVar5);
        uVar6 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar5);
        uVar1 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar11);
        func_0x00010befa120(puVar4);
        _objc_release(uVar1);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  _objc_initWeak(auStack_138,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfbfac0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_138;
  _objc_copyWeak(auStack_140,puVar10);
  uVar9 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010bf9bae0(param_1);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar10);
  lVar3 = lVar3 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(puVar10);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105c95f70; end: 105c96033;  */

void FUN_105c95f70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c96034; end: 105c96037;  */

void FUN_105c96034(void)

{
  return;
}



/* Entry: 105c96038; end: 105c9603f; -[SCGallerySelectionController _galleryFooterBarDidPressDebugCollage] */

void FUN_105c96038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateTestCollageWithCreative_1125649c8,0)
  ;
  return;
}



/* Entry: 105c96040; end: 105c961cf; -[SCGallerySelectionController _galleryFooterBarDidPressDebugSoundSyncedCollage] */

void FUN_105c96040(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010bebe500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x138));
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + 0x138);
    *(undefined **)(param_1 + 0x138) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80(lVar1);
    uVar3 = uVar4;
    func_0x00010bfc7be0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar2);
    lVar5 = lVar1;
    _objc_retain(lVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c961d0; end: 105c964bb;  */

void FUN_105c961d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((((uVar2 & 1) == 0) && (param_2 != 0)) && (param_3 == 0)) {
      puVar3 = PTR_PTR_1126c3920;
      _objc_opt_new();
      puVar4 = PTR_PTR_1126b3098;
      _objc_opt_new(PTR_PTR_1126b3098);
      func_0x00010c277e80(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c218f80(puVar4);
      uVar2 = *(ulong *)(param_1 + 0x28);
      func_0x00010c24fb60(uVar2);
      func_0x00010c209700((double)((uVar2 & 0xffffffff) / 1000),puVar4);
      puVar5 = PTR_PTR_1126b30a0;
      _objc_opt_new(PTR_PTR_1126b30a0);
      lVar6 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(puVar5);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195ce0(puVar5);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195cc0(puVar5);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      func_0x00010c1ea260(puVar4);
      puVar11 = puVar3;
      func_0x00010c0d2940(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9c40();
      _objc_release(puVar11);
      puVar11 = puVar3;
      func_0x00010c0d2940(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9ca0();
      _objc_release(puVar11);
      func_0x00010be1c0a0(lVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c964bc; end: 105c969d3; -[SCGallerySelectionController _soundSyncedMusicMetadata] */

void FUN_105c964bc(undefined **param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined8 uVar14;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar15;
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_288;
  long lStack_280;
  long lStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
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
  long lStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b6fb234();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  lStack_178 = 0;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  ppuVar4 = ppuVar2;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lStack_178;
  _objc_retain(lStack_178);
  puVar13 = (undefined *)0x0;
  if (lVar15 == 0) {
    puVar13 = PTR_PTR_1126c3928;
    _objc_opt_new();
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      func_0x00010c218f80(puVar13);
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      func_0x00010c218f20(puVar13);
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      func_0x00010c2096e0(puVar13);
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      func_0x00010c16fc20(puVar13);
      _objc_release(ppuVar4);
    }
    unaff_x24 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126baf88;
    if (unaff_x24 != (undefined **)0x0) {
      func_0x00010bf529e0(unaff_x24);
      func_0x00010bf0a0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(unaff_x24);
      ppuVar4 = unaff_x24;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        unaff_x28 = *plStack_1b0;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if (*plStack_1b0 != unaff_x28) {
              _objc_enumerationMutation(unaff_x24);
            }
            func_0x00010c282800(*(undefined8 *)(lStack_1b8 + (long)unaff_x27 * 8));
            func_0x00010befc800(puVar5);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar4 != unaff_x27);
          ppuVar4 = unaff_x24;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(unaff_x24);
      func_0x00010c210ca0(puVar13);
      _objc_release(puVar5);
    }
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0e00e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      func_0x00010c19cdc0(puVar13);
      _objc_release(ppuVar4);
    }
    unaff_x25 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126baf88;
    if (unaff_x25 != (undefined **)0x0) {
      ppuStack_208 = param_1;
      func_0x00010bf529e0(unaff_x25);
      func_0x00010bf0a0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      _objc_retain(unaff_x25);
      ppuVar4 = unaff_x25;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        unaff_x28 = *plStack_1f0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_1f0 != unaff_x28) {
              _objc_enumerationMutation(unaff_x25);
            }
            func_0x00010c282800(*(undefined8 *)(lStack_1f8 + (long)ppuVar11 * 8));
            func_0x00010befc800(puVar5);
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar4 != ppuVar11);
          ppuVar4 = unaff_x25;
          func_0x00010bf52a60();
          unaff_x27 = (undefined **)0x0;
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(unaff_x25);
      func_0x00010c191140(puVar13);
      _objc_release(puVar5);
      param_1 = ppuStack_208;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e0a1b8;
    ppuVar11 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x26 = (undefined **)0x0;
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x26 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = unaff_x26;
      func_0x00010bf1f3c0();
      func_0x00010c210de0(puVar13);
      _objc_release(unaff_x26);
    }
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
  }
  _objc_release(ppuVar3);
  _objc_release(lVar15);
  _objc_release(ppuVar2);
  ppuVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  lStack_240 = lVar15;
  pcStack_218 = FUN_105c969d4;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_270 = unaff_x28;
  ppuStack_268 = unaff_x27;
  ppuStack_260 = unaff_x26;
  ppuStack_258 = unaff_x25;
  ppuStack_250 = unaff_x24;
  ppuStack_248 = ppuVar3;
  puStack_238 = puVar13;
  ppuStack_230 = ppuVar2;
  ppuStack_228 = param_1;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  ppuVar2 = ppuVar11 + 10;
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar13 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  _objc_alloc();
  func_0x00010c020a80();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_288 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar12;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  _objc_retain(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar15 = *plStack_340;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_340 != lVar15) {
          _objc_enumerationMutation(ppuVar2);
        }
        puVar8 = PTR_DAT_1126a4ec8;
        uVar14 = *(undefined8 *)(lStack_348 + (long)ppuVar12 * 8);
        _objc_retain(uVar14);
        uVar6 = uVar14;
        func_0x00010010fab4(uVar14,puVar8);
        uVar1 = uVar14;
        if ((int)uVar6 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar14);
        puVar7 = ppuVar11[1];
        func_0x00010c269d40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar9 = puVar8;
        func_0x00010bfb1920(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        func_0x00010befa120(puVar5);
        _objc_release(puVar9);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar3 != ppuVar12);
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_initWeak(auStack_358,ppuVar11);
  puVar7 = ppuVar11[0x37];
  func_0x00010c269d40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfbfa40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_358;
  _objc_copyWeak(auStack_360,puVar10);
  puVar9 = puVar8;
  func_0x00010c25ff60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010bf9bae0(ppuVar11);
  _objc_destroyWeak(auStack_360);
  _objc_destroyWeak(auStack_358);
  _objc_release(puVar5);
  _objc_release(puVar13);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_360);
  _objc_destroyWeak(auStack_358);
  __Unwind_Resume();
  _objc_retain(puVar10);
  ppuVar4 = ppuVar4 + 4;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(puVar10);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 105c969d4; end: 105c96d4f; -[SCGallerySelectionController _generateTestCollageWithCreativeTools:] */

void FUN_105c969d4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  _objc_alloc();
  func_0x00010c020a80();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c246cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        puVar1 = PTR_DAT_1126a4ec8;
        uVar10 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        _objc_retain(uVar10);
        uVar6 = uVar10;
        func_0x00010010fab4(uVar10,puVar1);
        uVar7 = uVar10;
        if ((int)uVar6 == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar10);
        uVar10 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = uVar6;
        func_0x00010bfb1920(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar10);
        func_0x00010befa120(puVar5);
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_148,param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bfbfa40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_148;
  _objc_copyWeak(auStack_150,puVar8);
  uVar6 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar10);
  func_0x00010bf9bae0(param_1);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(puVar8);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c96d50; end: 105c96e13;  */

void FUN_105c96d50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c96e14; end: 105c96e17;  */

void FUN_105c96e14(void)

{
  return;
}



/* Entry: 105c96e18; end: 105c97093; -[SCGallerySelectionController _galleryFooterBarDidPressInspectingSnapBackupStatus] */

void FUN_105c96e18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ec8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0xe0);
    _objc_retain(uVar5);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentDisabledAlertForTitle_di_11257c5d8,
             &PTR____CFConstantStringClassReference_110e26a58,
             &PTR____CFConstantStringClassReference_110e26a78);
  return;
}



/* Entry: 105c97094; end: 105c970f7;  */

void FUN_105c97094(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3930;
  _objc_alloc(PTR_PTR_1126c3930);
  func_0x00010bff6740();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be7f9a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c970f8; end: 105c9736b; -[SCGallerySelectionController _galleryFooterBarDidPressInspectingTinyClipResult] */

void FUN_105c970f8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    lVar1 = param_5 + 0x50;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ec8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_3 = param_3 * param_1;
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_initWeak(auStack_58,param_5);
    uVar8 = *(undefined8 *)(param_5 + 0xe0);
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(uVar5);
    dStack_68 = param_3;
    dStack_60 = param_4 * param_1;
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
    _objc_release(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,PTR_s__presentDisabledAlertForTitle_di_11257c5d8,
             &PTR____CFConstantStringClassReference_110e26a98,
             &PTR____CFConstantStringClassReference_110e26a78);
  return;
}



/* Entry: 105c9736c; end: 105c97497;  */

void FUN_105c9736c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + 0xe0);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010c134d00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c97498; end: 105c976c7;  */

void FUN_105c97498(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(lVar1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000107ff10a0(lVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = lVar5;
    func_0x00010c086780();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar3);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          func_0x00010bf306a0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar2);
          _objc_release(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar6 = lVar3;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar3);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_105c976c8;
    puStack_150 = &UNK_110848ba8;
    _objc_retain(param_2);
    lStack_148 = param_2;
    puStack_140 = puVar2;
    lStack_138 = lVar1;
    _objc_retain(puVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_168);
    _objc_release(puStack_140);
    _objc_release(lStack_148);
    _objc_release(puVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c3938;
  _objc_alloc(PTR_PTR_1126c3938);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf51e00(uVar4);
  func_0x00010c01bfc0(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010be7f9a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c976c8; end: 105c97757;  */

void FUN_105c976c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3938;
  _objc_alloc(PTR_PTR_1126c3938);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010c01bfc0(puVar1,param_2,uVar3,uVar2,0xffffffffffffffff);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be7f9a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c97758; end: 105c979d3; -[SCGallerySelectionController _galleryFooterBarDidPressTinyClipDemoWithShouldEnforceBaseMedia:] */

void FUN_105c97758(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  double dStack_70;
  double dStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    lVar1 = param_5 + 0x50;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ec8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_3 = param_3 * param_1;
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_initWeak(auStack_58,param_5);
    uVar8 = *(undefined8 *)(param_5 + 0xe0);
    _objc_copyWeak(auStack_78,auStack_58);
    uStack_60 = param_7;
    _objc_retain(uVar5);
    dStack_70 = param_3;
    dStack_68 = param_4 * param_1;
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
    _objc_release(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,PTR_s__presentDisabledAlertForTitle_di_11257c5d8,
             &PTR____CFConstantStringClassReference_110e26a98,
             &PTR____CFConstantStringClassReference_110e26a78);
  return;
}



/* Entry: 105c979d4; end: 105c97ccb;  */

void FUN_105c979d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar8 = *(undefined8 *)(lVar1 + 0x1a8);
  uVar2 = *(undefined8 *)(lVar1 + 0x108);
  func_0x000108ec1d74(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bfe70c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(lVar1 + 0x1b0) = uVar3;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bc7b8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105c97ccc;
    uStack_50 = 0x105c97cdc;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = puVar5;
    _objc_release(uVar4);
    if (puStack_68[5] == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x1d8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      uVar6 = *(undefined8 *)(lVar1 + 0xe0);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa340(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    else {
      func_0x00010be90960(lVar1);
    }
    __Block_object_dispose(&uStack_70,8);
    puVar5 = puStack_48;
  }
  else {
    puVar5 = *(undefined **)(lVar1 + 0x18);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0xe0);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c134d00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c97ccc; end: 105c97ce3;  */

void FUN_105c97ccc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c97ce4; end: 105c97d8b;  */

void FUN_105c97ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bc7b8;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160(puVar1,param_2,param_3,0,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010be90960(*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c97d8c; end: 105c97d9b;  */

void FUN_105c97d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__displayTinyClipDemoViewControll_11255ed80,
             param_2,param_3);
  return;
}



/* Entry: 105c97d9c; end: 105c97ec7; -[SCGallerySelectionController _requestBaseMediaForGallerySnap:snapDetail:] */

void FUN_105c97d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfbc8;
  func_0x00010bf586e0(PTR_PTR_1126bfbc8,param_2,0,1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c97ec8;
  puStack_50 = &UNK_1108e3718;
  lStack_48 = param_1;
  func_0x00010c134cc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1,param_2,param_3,param_4,0
                      ,0,puVar2,uVar3,0,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c97ec8; end: 105c97ee3;  */

void FUN_105c97ec8(long param_1,undefined8 param_2,long param_3)

{
  if (0 < param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be04f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__displayTinyClipDemoViewControll_11255ed80,
               param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105c97ee4; end: 105c9802b; -[SCGallerySelectionController _displayTinyClipDemoViewControllerWithImage:sourceLevel:] */

void FUN_105c97ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x1b0);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b30e0;
  _objc_alloc(PTR_PTR_1126b30e0);
  func_0x00010bff3e00(0);
  func_0x00010c1427e0(uVar3,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c98030;
  puStack_70 = &UNK_1108623c8;
  uStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_3);
  func_0x00010c0bf0a0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108e3748,&puStack_88);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105c9802c; end: 105c9802f;  */

void FUN_105c9802c(void)

{
  return;
}



/* Entry: 105c98030; end: 105c980fb;  */

void FUN_105c98030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c150d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105c980fc;
  puStack_58 = &UNK_11084d788;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c980fc; end: 105c98163;  */

void FUN_105c980fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3938;
  _objc_alloc(PTR_PTR_1126c3938);
  func_0x00010c01bfc0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be7f9a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c98164; end: 105c9851f; -[SCGallerySelectionController _galleryFooterBarDidPressDebugMashup] */

/* WARNING: Possible PIC construction at 0x000105c982a8: Changing call to branch */

void FUN_105c98164(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a4ec8);
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    lVar2 = lVar1;
    func_0x00010bf977c0();
    if ((int)lVar2 == 0x28) {
      lVar2 = lVar1;
      func_0x00010c0f7a20();
      if ((int)lVar2 == 0) {
        puVar4 = PTR_PTR_1126aff58;
        _objc_alloc();
        lVar2 = param_1;
        func_0x00010be7f9a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c038f60();
        _objc_release(lVar2);
        _objc_initWeak(auStack_78,param_1);
        puVar5 = PTR_PTR_1126aeaf8;
        _objc_alloc(PTR_PTR_1126aeaf8);
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_105c98520;
        puStack_98 = &UNK_1108e3768;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(puVar4);
        puStack_90 = puVar4;
        lStack_88 = param_1;
        _objc_copyWeak(auStack_b8,auStack_78);
        _objc_retain(puVar4);
        func_0x00010c0311a0(puVar5);
        puVar6 = PTR_PTR_1126aff70;
        _objc_alloc(PTR_PTR_1126aff70);
        func_0x00010c053560();
        uVar9 = *(undefined8 *)(param_1 + 0x168);
        puVar7 = PTR_PTR_1126aff78;
        func_0x00010bf61160(PTR_PTR_1126aff78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf24140(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        param_1 = param_1 + 0x160;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf9d620();
        _objc_release(param_1);
        _objc_release(uVar9);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_destroyWeak(auStack_b8);
        _objc_release(puStack_90);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        _objc_release(puVar4);
        _objc_release(lVar1);
        return;
      }
      ppuVar8 = &PTR____CFConstantStringClassReference_110e26b18;
    }
    else {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e26af8;
    }
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26ad8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentDisabledAlertForTitle_di_11257c5d8,
             &PTR____CFConstantStringClassReference_110e26ab8,ppuVar8);
  return;
}



/* Entry: 105c98520; end: 105c985f7;  */

void FUN_105c98520(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x198);
    *(undefined8 *)(lVar3 + 0x198) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c985f8; end: 105c98767; -[SCGallerySelectionController _galleryFooterBarRenameStory] */

void FUN_105c985f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_DAT_1126a4ec8;
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010010fab4(lVar5,puVar1);
  lVar2 = lVar5;
  if ((int)lVar3 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar5);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105c98768;
    puStack_60 = &UNK_11085d4b0;
    _objc_retain(lVar5);
    lStack_58 = lVar2;
    _objc_copyWeak(auStack_50,auStack_48);
    FUN_105ca8308(lVar5,&puStack_78);
    func_0x00010bf9bae0(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(lVar5);
  return;
}



/* Entry: 105c98768; end: 105c988cb;  */

void FUN_105c98768(long param_1,int param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (param_3 != (undefined **)0x0) {
      ppuVar1 = param_3;
    }
    _objc_retain(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if (((ulong)ppuVar3 & 1) == 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      if (param_1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2220;
        _objc_alloc(PTR_PTR_1126b2220);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560(puVar4);
        func_0x00010c285960(uVar2);
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(uVar2);
        _objc_release(param_1);
      }
    }
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c988cc; end: 105c98b73; -[SCGallerySelectionController _galleryFooterBarEditItem] */

void FUN_105c988cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  if ((*(byte *)(param_1 + 0xbb) & 1) != 0) goto LAB_105c98b40;
  func_0x00010be53e40(param_1,param_2,2,0,*(undefined8 *)(param_1 + 200));
  uVar10 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar1 = uVar10;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar10);
  uVar10 = uVar3;
  if ((uVar3 == 0) ||
     (uVar1 = uVar3, func_0x00010bfbd100(), puVar11 = PTR__OBJC_CLASS___PHAsset_1126bd898,
     uVar1 != 2)) {
    puVar11 = PTR_DAT_1126a4ec8;
    _objc_retain(uVar3);
    uVar1 = uVar3;
    func_0x00010010fab4(uVar3,puVar11);
    _objc_release(uVar3);
    if (((int)uVar1 == 0) || (uVar3 == 0)) {
      uVar10 = param_1 + 0x50;
      _objc_loadWeakRetained();
      uVar1 = uVar10;
      func_0x00010c15a020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar10);
      if (uVar4 == 0) {
        uVar10 = 0;
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar10 = uVar4;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
      func_0x00010be78400(param_1);
      _objc_release(uVar4);
      _objc_release(puVar11);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0xe0);
      _objc_retain(uVar3);
      func_0x00010c0f7fc0(uVar8);
    }
LAB_105c98b34:
    _objc_release(uVar10);
  }
  else {
    _objc_retain(uVar3);
    _objc_opt_class(puVar11);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar11);
    uVar1 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf8c1a0(*(undefined8 *)(param_1 + 0x140));
      func_0x00010bf9bae0(param_1);
      goto LAB_105c98b34;
    }
  }
  _objc_release();
LAB_105c98b40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR_DAT_1126a4ec8;
  lVar9 = *(long *)(uVar3 + 0x20);
  _objc_retain(lVar9);
  lVar5 = lVar9;
  func_0x00010010fab4(lVar9,puVar11);
  lVar7 = lVar9;
  if ((int)lVar5 == 0) {
    lVar7 = 0;
  }
  _objc_retain(lVar7);
  _objc_release(lVar9);
  lVar9 = *(long *)(*(long *)(uVar3 + 0x28) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar5;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar9 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010b5fa088();
    if (10 < lVar6 - 2U) {
      lVar6 = lVar7;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (lVar6 != 4) {
        func_0x00010bfbdda0(lVar7);
      }
    }
    _objc_release(lVar9);
  }
  func_0x00010be78400(*(undefined8 *)(uVar3 + 0x28));
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 105c98b74; end: 105c98c73;  */

void FUN_105c98b74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_1126a4ec8;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010010fab4(lVar5,puVar2);
  lVar1 = lVar5;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar5 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010b5fa088();
    if (10 < lVar4 - 2U) {
      lVar4 = lVar1;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (lVar4 != 4) {
        func_0x00010bfbdda0(lVar1);
      }
    }
    _objc_release(lVar5);
  }
  func_0x00010be78400(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c98c74; end: 105c98d2b; -[SCGallerySelectionController _prepareFooterBarEditItemForPreview:snapsToEdit:] */

void FUN_105c98c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c98d2c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c98d2c; end: 105c98d6f;  */

void FUN_105c98d2c(long param_1,undefined8 param_2)

{
  func_0x00010be78240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),0,0,0,1,0);
  return;
}



/* Entry: 105c98d70; end: 105c99037; -[SCGallerySelectionController _prepareEntryForPreview:snapsToEdit:shouldUseRegularPreview:musicSelection:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:shouldExitSelectionMode:] */

undefined **
FUN_105c98d70(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined *param_5,undefined **param_6,undefined8 param_7,undefined **param_8,
             undefined4 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  double dStack_240;
  undefined1 uStack_238;
  undefined4 uStack_237;
  undefined *puStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *apuStack_1e8 [16];
  long lStack_168;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_4;
  puVar12 = param_5;
  ppuVar13 = param_6;
  uVar14 = param_7;
  ppuVar15 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  ppuVar1 = param_3;
  func_0x000107da0750(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar11 = (undefined **)0x1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_70 = ppuVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar23 = puVar4;
  func_0x00010bf529e0();
  if (puVar23 == (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    ppuVar11 = (undefined **)0x1;
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_78 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar19;
    func_0x000107da0820(puVar19,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar19);
  }
  ppuVar3 = &puStack_80;
  _objc_initWeak(ppuVar3,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  dVar25 = 1.60807493534087e-314;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105c99038;
  puStack_c0 = &UNK_1108e3818;
  ppuVar7 = &puStack_80;
  _objc_copyWeak(auStack_90);
  ppuVar22 = (undefined **)(ulong)param_9._2_1_;
  _objc_retain(param_4);
  ppuStack_b8 = param_4;
  _objc_retain(param_3);
  ppuStack_b0 = param_3;
  _objc_retain(puVar23);
  puStack_a8 = puVar23;
  _objc_retain(puVar4);
  uStack_88 = SUB81(param_5,0);
  puStack_a0 = puVar4;
  _objc_retain(param_6);
  uStack_87 = (undefined1)param_7;
  uStack_86 = SUB81(param_8,0);
  uStack_85 = (undefined1)param_9;
  ppuVar10 = &puStack_d8;
  ppuStack_98 = param_6;
  func_0x00010c0f7fc0(ppuVar3);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_98);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(ppuStack_b0);
  _objc_release(ppuStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(&puStack_80);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar23);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(&puStack_80);
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3 + 9;
  _objc_loadWeakRetained();
  if (ppuVar1 != (undefined **)0x0) {
    puVar4 = param_3[4];
    func_0x00010bf529e0();
    if ((puVar4 == (undefined *)0x0) || (param_3[5] == (undefined *)0x0)) {
      ppuVar3 = ppuVar1;
      func_0x00010be7f9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df7438();
      _objc_release(ppuVar3);
    }
    else {
      dVar25 = 0.0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      lStack_228 = 0;
      puStack_230 = (undefined *)0x0;
      uStack_218 = 0;
      plStack_220 = (long *)0x0;
      ppuVar17 = (undefined **)param_3[4];
      _objc_retain(ppuVar17);
      ppuVar10 = &puStack_230;
      ppuVar11 = apuStack_1e8;
      puVar12 = (undefined *)0x10;
      ppuVar3 = ppuVar17;
      func_0x00010bf52a60();
      if (ppuVar3 != (undefined **)0x0) {
        lVar18 = *plStack_220;
        do {
          ppuVar22 = (undefined **)0x0;
          do {
            if (*plStack_220 != lVar18) {
              _objc_enumerationMutation(ppuVar17);
            }
            lVar5 = *(long *)(lStack_228 + (long)ppuVar22 * 8);
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 == 0) {
              ppuVar3 = ppuVar1;
              func_0x00010be7f9a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x000108df9400();
              _objc_release(ppuVar3);
              _objc_release(ppuVar17);
              goto LAB_105c99324;
            }
            ppuVar22 = (undefined **)((long)ppuVar22 + 1);
          } while (ppuVar3 != ppuVar22);
          ppuVar10 = &puStack_230;
          ppuVar11 = apuStack_1e8;
          puVar12 = (undefined *)0x10;
          ppuVar3 = ppuVar17;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
      }
      _objc_release(ppuVar17);
      puVar12 = param_3[4];
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      func_0x00010b5fa088();
      func_0x000106e1d104();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar23 = PTR_PTR_1126b24c8;
      _objc_alloc();
      puVar12 = param_3[7];
      ppuVar11 = ppuVar1;
      func_0x00010be7f9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = 1;
      ppuVar15 = (undefined **)0x0;
      ppuVar13 = ppuVar11;
      func_0x00010c0172a0();
      _objc_release(ppuVar11);
      _CACurrentMediaTime();
      puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
      dVar26 = 1.60807493534087e-314;
      uStack_278 = 0xc2000000;
      pcStack_270 = FUN_105c9938c;
      puStack_268 = &UNK_1108e37e8;
      ppuVar22 = &puStack_280;
      ppuVar7 = param_3 + 9;
      _objc_copyWeak(auStack_248);
      puVar19 = param_3[4];
      dStack_240 = dVar25;
      _objc_retain(puVar19);
      puVar20 = param_3[5];
      puStack_260 = puVar19;
      _objc_retain(puVar20);
      uStack_238 = *(undefined1 *)(param_3 + 10);
      puVar19 = param_3[8];
      puStack_258 = puVar20;
      _objc_retain(puVar19);
      uStack_237 = *(undefined4 *)((long)param_3 + 0x51);
      ppuVar11 = &puStack_280;
      ppuVar10 = (undefined **)0x0;
      puStack_250 = puVar19;
      func_0x00010c142c20(puVar23);
      dVar25 = dVar26;
      if (*(char *)((long)param_3 + 0x55) == '\x01') {
        func_0x00010bf9bae0(ppuVar1);
        dVar25 = dVar26;
      }
      _objc_release(puStack_250);
      _objc_release(puStack_258);
      _objc_release(puStack_260);
      _objc_destroyWeak(auStack_248);
      _objc_release(puVar23);
      _objc_release(puVar4);
    }
  }
LAB_105c99324:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar22 + 7);
  __Unwind_Resume();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar22 = ppuVar7;
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar11);
  _objc_retain(puVar12);
  _objc_retain(ppuVar13);
  _objc_retain(uVar14);
  _objc_retain(ppuVar15);
  ppuVar3 = ppuVar1 + 7;
  _objc_loadWeakRetained();
  if (ppuVar3 != (undefined **)0x0) {
    _CACurrentMediaTime();
    puVar4 = ppuVar1[8];
    ppuVar6 = (undefined **)ppuVar3[5];
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar6;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar17;
    func_0x000107d9fdf0((dVar25 - (double)puVar4) * 1000.0,2,ppuVar17,ppuVar3[0x1d]);
    _objc_release(ppuVar17);
    _objc_release(ppuVar6);
    if (((ulong)ppuVar7 & 1) == 0) {
      if ((ppuVar15 == (undefined **)0x0) ||
         (ppuVar7 = ppuVar15, func_0x00010bf3ec40(), ppuVar7 == (undefined **)0xda)) {
        puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = ppuVar1[4];
        _objc_retain(puVar20);
        puVar4 = puVar20;
        func_0x00010bf52a60();
        lVar5 = lRam0000000000000000;
        while (puVar4 != (undefined *)0x0) {
          puVar24 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(puVar20);
            }
            uVar21 = *(undefined8 *)((long)puVar24 * 8);
            uVar2 = uVar21;
            func_0x00010c241220(uVar21);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            if (ppuVar7 != (undefined **)0x0) {
              uVar2 = uVar21;
              func_0x00010c241220(uVar21);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar10;
              func_0x00010c0e00e0(ppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar23);
              _objc_release(ppuVar7);
              _objc_release(uVar2);
            }
            uVar2 = uVar21;
            func_0x00010c241220(uVar21);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar11;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar2);
            if (ppuVar7 != (undefined **)0x0) {
              uVar2 = uVar21;
              func_0x00010c241220(uVar21);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar11;
              func_0x00010c0e00e0(ppuVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar19);
              _objc_release(uVar21);
              _objc_release(ppuVar7);
              _objc_release(uVar2);
            }
            puVar24 = puVar24 + 1;
          } while (puVar4 != puVar24);
          puVar4 = puVar20;
          func_0x00010bf52a60();
        }
        _objc_release(puVar20);
        puVar8 = ppuVar1[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = ppuVar1[4];
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = (undefined **)ppuVar1[5];
        puVar4 = puVar20;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar16 = ppuVar3[0x28];
        puVar20 = puVar23;
        func_0x00010bf51e00();
        puVar24 = puVar19;
        func_0x00010bf51e00(puVar19);
        puVar9 = puVar12;
        func_0x00010bf51e00(puVar12);
        func_0x00010bf8c3e0(puVar16);
        _objc_release(puVar9);
        _objc_release(puVar24);
        _objc_release(puVar20);
        _objc_release(puVar4);
        _objc_release(puVar8);
        _objc_release(puVar19);
        _objc_release(puVar23);
      }
      else {
        ppuVar1 = ppuVar3;
        func_0x00010be7f9a0(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar15;
        func_0x000107dffcbc();
        _objc_release(ppuVar1);
      }
    }
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar15);
  _objc_release(uVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined **)(ulong)(ppuVar22 == (undefined **)0x0);
}



/* Entry: 105c99038; end: 105c9938b;  */

undefined8 *
FUN_105c99038(double param_1,long param_2,ulong param_3,undefined8 *param_4,undefined **param_5,
             undefined8 param_6,undefined8 *param_7,undefined8 param_8,ulong param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **unaff_x24;
  long lVar21;
  double dVar22;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  double dStack_150;
  undefined1 uStack_148;
  undefined4 uStack_147;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)(param_2 + 0x48);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    if ((lVar3 == 0) || (*(long *)(param_2 + 0x28) == 0)) {
      puVar9 = puVar2;
      func_0x00010be7f9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df7438();
      _objc_release(puVar9);
    }
    else {
      param_1 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      ppuVar18 = *(undefined ***)(param_2 + 0x20);
      _objc_retain(ppuVar18);
      param_4 = &uStack_140;
      param_5 = apuStack_f8;
      param_6 = 0x10;
      ppuVar4 = ppuVar18;
      func_0x00010bf52a60();
      if (ppuVar4 != (undefined **)0x0) {
        lVar3 = *plStack_130;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if (*plStack_130 != lVar3) {
              _objc_enumerationMutation(ppuVar18);
            }
            lVar5 = *(long *)(lStack_138 + (long)unaff_x24 * 8);
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 == 0) {
              puVar9 = puVar2;
              func_0x00010be7f9a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x000108df9400();
              _objc_release(puVar9);
              _objc_release(ppuVar18);
              goto LAB_105c99324;
            }
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar4 != unaff_x24);
          param_4 = &uStack_140;
          param_5 = apuStack_f8;
          param_6 = 0x10;
          ppuVar4 = ppuVar18;
          func_0x00010bf52a60();
        } while (ppuVar4 != (undefined **)0x0);
      }
      _objc_release(ppuVar18);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010b5fa088();
      func_0x000106e1d104();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar8 = PTR_PTR_1126b24c8;
      _objc_alloc();
      param_6 = *(undefined8 *)(param_2 + 0x38);
      puVar9 = puVar2;
      func_0x00010be7f9a0();
      _objc_retainAutoreleasedReturnValue();
      param_8 = 1;
      param_9 = 0;
      param_7 = puVar9;
      func_0x00010c0172a0();
      _objc_release(puVar9);
      _CACurrentMediaTime();
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      dVar22 = 1.60807493534087e-314;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_105c9938c;
      puStack_178 = &UNK_1108e37e8;
      unaff_x24 = &puStack_190;
      param_3 = param_2 + 0x48;
      _objc_copyWeak(auStack_158);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      dStack_150 = param_1;
      _objc_retain(uVar6);
      uVar20 = *(undefined8 *)(param_2 + 0x28);
      uStack_170 = uVar6;
      _objc_retain(uVar20);
      uStack_148 = *(undefined1 *)(param_2 + 0x50);
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      uStack_168 = uVar20;
      _objc_retain(uVar6);
      uStack_147 = *(undefined4 *)(param_2 + 0x51);
      param_5 = &puStack_190;
      param_4 = (undefined8 *)0x0;
      uStack_160 = uVar6;
      func_0x00010c142c20(puVar8);
      param_1 = dVar22;
      if (*(char *)(param_2 + 0x55) == '\x01') {
        func_0x00010bf9bae0(puVar2);
        param_1 = dVar22;
      }
      _objc_release(uStack_160);
      _objc_release(uStack_168);
      _objc_release(uStack_170);
      _objc_destroyWeak(auStack_158);
      _objc_release(puVar8);
      _objc_release(uVar7);
    }
  }
LAB_105c99324:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 7);
  __Unwind_Resume();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar9 = puVar2 + 7;
  _objc_loadWeakRetained();
  if (puVar9 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    dVar22 = (double)puVar2[8];
    uVar10 = puVar9[5];
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x000107d9fdf0((param_1 - dVar22) * 1000.0,2,uVar11,puVar9[0x1d]);
    _objc_release(uVar11);
    _objc_release(uVar10);
    if ((param_3 & 1) == 0) {
      if ((param_9 == 0) || (uVar16 = param_9, func_0x00010bf3ec40(), uVar16 == 0xda)) {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = puVar2[4];
        _objc_retain(lVar19);
        lVar5 = lVar19;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar21 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar19);
            }
            uVar6 = *(undefined8 *)(lVar21 * 8);
            uVar7 = uVar6;
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar7);
            if (puVar13 != (undefined8 *)0x0) {
              uVar7 = uVar6;
              func_0x00010c241220(uVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(puVar13);
              _objc_release(uVar7);
            }
            uVar7 = uVar6;
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar7);
            if (ppuVar4 != (undefined **)0x0) {
              uVar7 = uVar6;
              func_0x00010c241220(uVar6);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar12);
              _objc_release(uVar6);
              _objc_release(ppuVar4);
              _objc_release(uVar7);
            }
            lVar21 = lVar21 + 1;
          } while (lVar5 != lVar21);
          lVar5 = lVar19;
          func_0x00010bf52a60();
        }
        _objc_release(lVar19);
        uVar20 = puVar2[4];
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = puVar2[4];
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = puVar2[5];
        uVar7 = uVar6;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar17 = puVar9[0x28];
        puVar14 = puVar8;
        func_0x00010bf51e00();
        puVar15 = puVar12;
        func_0x00010bf51e00(puVar12);
        uVar6 = param_6;
        func_0x00010bf51e00(param_6);
        func_0x00010bf8c3e0(uVar17);
        _objc_release(uVar6);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(uVar7);
        _objc_release(uVar20);
        _objc_release(puVar12);
        _objc_release(puVar8);
      }
      else {
        puVar2 = puVar9;
        func_0x00010be7f9a0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = param_9;
        func_0x000107dffcbc();
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(puVar9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (undefined8 *)(ulong)(uVar16 == 0);
}



/* Entry: 105c9938c; end: 105c99843;  */

ulong FUN_105c9938c(double param_1,long param_2,ulong param_3,ulong param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  double dVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _CACurrentMediaTime();
    dVar19 = *(double *)(param_2 + 0x40);
    uVar3 = *(ulong *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x000107d9fdf0((param_1 - dVar19) * 1000.0,2,uVar4,*(undefined8 *)(lVar2 + 0xe8));
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((param_3 & 1) == 0) {
      if ((param_9 == 0) || (uVar13 = param_9, func_0x00010bf3ec40(), uVar13 == 0xda)) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = *(long *)(param_2 + 0x20);
        _objc_retain(lVar16);
        lVar12 = lVar16;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar16);
            }
            uVar17 = *(undefined8 *)(lVar18 * 8);
            uVar7 = uVar17;
            func_0x00010c241220(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar7);
            if (uVar13 != 0) {
              uVar7 = uVar17;
              func_0x00010c241220(uVar17);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              _objc_release(uVar13);
              _objc_release(uVar7);
            }
            uVar7 = uVar17;
            func_0x00010c241220(uVar17);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar7);
            if (lVar8 != 0) {
              uVar7 = uVar17;
              func_0x00010c241220(uVar17);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = param_5;
              func_0x00010c0e00e0(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(uVar17);
              _objc_release(lVar8);
              _objc_release(uVar7);
            }
            lVar18 = lVar18 + 1;
          } while (lVar12 != lVar18);
          lVar12 = lVar16;
          func_0x00010bf52a60();
        }
        _objc_release(lVar16);
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(ulong *)(param_2 + 0x28);
        uVar7 = uVar17;
        func_0x00010b5f9bfc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        uVar15 = *(undefined8 *)(lVar2 + 0x140);
        puVar10 = puVar5;
        func_0x00010bf51e00();
        puVar11 = puVar6;
        func_0x00010bf51e00(puVar6);
        uVar17 = param_6;
        func_0x00010bf51e00(param_6);
        func_0x00010bf8c3e0(uVar15);
        _objc_release(uVar17);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(uVar7);
        _objc_release(uVar9);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      else {
        lVar12 = lVar2;
        func_0x00010be7f9a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = param_9;
        func_0x000107dffcbc();
        _objc_release(lVar12);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00010c23ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(uVar13 == 0);
}



/* Entry: 105c99844; end: 105c9987b;  */

bool FUN_105c99844(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 105c9987c; end: 105c999af; -[SCGallerySelectionController _galleryFooterBarAddToStory] */

void FUN_105c9987c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_PTR_1126c3940;
  _objc_alloc(PTR_PTR_1126c3940);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fc40(puVar3,param_2,uVar2,uVar8,uVar1,uVar9,lVar5,lVar7,
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x60));
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c18b5e0(puVar3,param_2,param_1);
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c10eda0();
  _objc_release(lVar4);
  func_0x00010be53e40(param_1,param_2,7,0,*(undefined8 *)(param_1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105c999b0; end: 105c99aff; -[SCGallerySelectionController _galleryFooterBarDidPressStoryButton] */

void FUN_105c999b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf59380(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 105c99b00; end: 105c99b7f;  */

void FUN_105c99b00(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((((param_2 & 1) == 0) && (param_3 != 0)) && (param_1 != 0)) {
    func_0x00010bf9bae0(param_1);
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c15a540();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c99b80; end: 105c99cd7; -[SCGallerySelectionController _galleryFooterBarDidPressShareButton] */

void FUN_105c99b80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c159920();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c22ab80(uVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105c99cd8; end: 105c99d3b;  */

void FUN_105c99cd8(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar1 = param_1;
      func_0x00010be7f9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df7438();
      _objc_release(lVar1);
    }
    else {
      func_0x00010bf9bae0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c99d3c; end: 105c99ebb; -[SCGallerySelectionController _galleryFooterBarDidPressTrashButton] */

void FUN_105c99d3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x140);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15a020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf6c0e0(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be53e40(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105c99ebc; end: 105c99ef7;  */

void FUN_105c99ebc(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bf9bae0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


