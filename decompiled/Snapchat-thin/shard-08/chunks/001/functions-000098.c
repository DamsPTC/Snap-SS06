/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d86370; end: 105d8643b; -[SCPreviewFeatureMusicEditorViewController initWithViewController:containerViewFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105d86370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed098;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112735c04;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112735c08);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    func_0x00010c1c8b80(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 105d8643c; end: 105d864e3; -[SCPreviewFeatureMusicEditorViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d8643c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed098;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bed54a0(param_1);
  lVar3 = (long)_DAT_112735c04;
  func_0x00010bef7700(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d864e4; end: 105d8652b; -[SCPreviewFeatureMusicEditorViewController viewDidLayoutSubviews] */

void FUN_105d864e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed098;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010bed54a0(param_1);
  return;
}



/* Entry: 105d8652c; end: 105d86597; -[SCPreviewFeatureMusicEditorViewController _updateChildViewControllerFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d8652c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112735c08);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar2 = *(undefined8 *)(param_1 + _DAT_112735c04);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar4,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d86598; end: 105d865a3; -[SCPreviewFeatureMusicEditorViewController defaultProjectNameV2] */

void FUN_105d86598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_music_112612468);
  return;
}



/* Entry: 105d865a4; end: 105d865b7; -[SCPreviewFeatureMusicEditorViewController exit:] */

void FUN_105d865a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d865b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 105d865b8; end: 105d865c3; -[SCPreviewFeatureMusicEditorViewController backgroundExitBehavior] */

void FUN_105d865b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 105d865c4; end: 105d865cb; -[SCPreviewFeatureMusicEditorViewController canExit] */

undefined8 FUN_105d865c4(void)

{
  return 0;
}



/* Entry: 105d865cc; end: 105d865df; -[SCPreviewFeatureMusicEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d865cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112735c04,0);
  return;
}



/* Entry: 105d865e0; end: 105d86cfb; -[SCPreviewFeatureMusicImpl initWithObjcMusicServices:musicServices:previewScopeServices:previewConfiguration:videoPlayback:audioPlayback:timerFeature:stickerContainer:timelineModeConfig:snapProProfilesProvider:musicPickerScopeExposer:musicEditorScopeExposer:musicPickerListScopeExposer:applicationLifecycleEvents:circumstanceEngine:musicSyncServices:smartTemplate:itemViewService:ctRecommendation:templateServices:addSoundPillScopeExposer:carouselController:previewABServices:videoTracking:] */

undefined8 *
FUN_105d865e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126ed0a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeRangeZero_110348668;
    uVar2 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uVar5 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uVar4 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    puVar1[0xf] = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    puVar1[0xe] = uVar2;
    puVar1[0x11] = uVar5;
    puVar1[0x10] = uVar4;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    puVar1[0x13] = *(undefined8 *)(puVar3 + 0x28);
    puVar1[0x12] = uVar2;
    puVar1[0x14] = 0x7fffffffffffffff;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[9];
    puVar1[9] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[10];
    puVar1[10] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_24;
    _objc_release(uVar2);
    uVar2 = param_25;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c112020();
    puVar1[0x3a] = uVar4;
    _objc_release(uVar2);
    uVar2 = param_25;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x3b];
    puVar1[0x3b] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c47b8;
    _objc_alloc();
    uVar2 = puVar1[2];
    func_0x00010bf9c6a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c760();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 105d86cfc; end: 105d86ddb;  */

void FUN_105d86cfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = param_2;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x218);
    *(undefined8 *)(lVar1 + 0x218) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_2;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x60) = uVar4;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x150);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c129080();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d86ddc; end: 105d86e23; -[SCPreviewFeatureMusicImpl dealloc] */

void FUN_105d86ddc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x138));
  puStack_28 = PTR_PTR_1126ed0a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d86e24; end: 105d86e87; -[SCPreviewFeatureMusicImpl shouldBlockGesture:] */

bool FUN_105d86e24(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x118);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x128);
    func_0x00010c150520(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105d86e88; end: 105d86ed7; -[SCPreviewFeatureMusicImpl didProcessFinishLongPressInPreviewContainerView:] */

void FUN_105d86e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (lRam00000001136c22b0 != -1) {
    func_0x00010002a2fc(0x1136c22b0,&PTR___NSConcreteGlobalBlock_1108e80d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d86ed8; end: 105d86f33; -[SCPreviewFeatureMusicImpl snapEditor:didChangeState:oldState:] */

void FUN_105d86ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
    return;
  }
  func_0x00010bf5ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  FUN_105d86f34();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bea1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAddSoundPillHidden__112586068,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 105d86f34; end: 105d87007;  */

undefined1 FUN_105d86f34(undefined8 param_1)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105d91598;
  puStack_60 = &UNK_110847658;
  ppuVar2 = &puStack_78;
  puStack_48 = puStack_58;
  _objc_retainBlock(ppuVar2);
  func_0x00010c0be120(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105d87008; end: 105d8700f; -[SCPreviewFeatureMusicImpl snapEditorWillDiscard:] */

void FUN_105d87008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAutoapplyModifierIfNeeded_112592758,2)
  ;
  return;
}



/* Entry: 105d87010; end: 105d87017; -[SCPreviewFeatureMusicImpl snapEditorWillStartSending:] */

void FUN_105d87010(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAutoapplyModifierIfNeeded_112592758,3)
  ;
  return;
}



/* Entry: 105d87018; end: 105d87027; -[SCPreviewFeatureMusicImpl snapEditor:willInitiateExportWithType:] */

void FUN_105d87018(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAutoapplyModifierIfNeeded_112592758,3)
  ;
  return;
}



/* Entry: 105d87028; end: 105d872cf; -[SCPreviewFeatureMusicImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105d87028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  lVar5 = param_1;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar5 == 0) {
      func_0x00010c2b43a0(param_4,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4300(param_4,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4360(param_4,param_2,0xffffffffffffffff);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b4340(param_4,param_2,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_105d8716c;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = lVar5;
  func_0x00010c277e80(lVar5);
  func_0x00010c0df880(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b43a0(param_4,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar2 = lVar5;
  func_0x00010c0b3ae0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0fbb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4300(param_4,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0b3ae0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c247a20();
  func_0x00010c2b4360(param_4,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c2b4340(param_4,param_2,*(undefined8 *)(param_1 + 0x210));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
LAB_105d8716c:
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bfe0aa0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c23fe00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c26afe0(uVar7,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010c2bae20(param_4,param_2,uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar9);
    }
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) {
    func_0x00010c2b35e0(param_4,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c1aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b35e0(param_4,param_2,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d872d0; end: 105d87393; -[SCPreviewFeatureMusicImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105d872d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf5ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  FUN_105d86f34();
  _objc_release(uVar3);
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    *(char *)(param_1 + 0xe0) = (char)param_5;
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAddSoundPillHidden__112586068,param_5);
    return;
  }
  return;
}



/* Entry: 105d87394; end: 105d87557; -[SCPreviewFeatureMusicImpl snapEditor:didTriggerLifecycle:] */

void FUN_105d87394(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bec0380(param_1);
  }
  else if (param_4 == 3) {
    func_0x00010bec3180(param_1);
  }
  else if (param_4 == 8) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c23fe00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x158);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23ef20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 != 0) {
      func_0x00010bf4b640(lVar4,param_2,uVar1);
    }
    *(char *)(param_1 + 0x1a8) = (char)lVar5;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c299be0();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(param_1 + 0x1a9) = lVar5 != 0;
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0d37c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained();
      puVar7 = puVar6;
      func_0x00010c0d37c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x210);
    *(undefined **)(param_1 + 0x210) = puVar7;
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x138));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d87558; end: 105d8756f; -[SCPreviewFeatureMusicImpl hasOnlyPrePreviewEdits] */

void FUN_105d87558(long param_1)

{
  if (*(long *)(param_1 + 0x218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x218),PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}



/* Entry: 105d87570; end: 105d875cf; -[SCPreviewFeatureMusicImpl editCount] */

bool FUN_105d87570(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126bf6f0;
  func_0x00010bfc7ba0(PTR_PTR_1126bf6f0,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c2551e0(puVar2);
    bVar1 = (int)puVar3 == 4;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 105d875d0; end: 105d8760f; -[SCPreviewFeatureMusicImpl configureWithView:] */

void FUN_105d875d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x58,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d87610; end: 105d87d73; -[SCPreviewFeatureMusicImpl activate] */

void FUN_105d87610(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfe0aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c080c60();
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uVar2);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c075080();
  _objc_release(lVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar6 == 0) {
    func_0x00010c187d20(*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c26f5a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105d87d74;
    puStack_88 = &UNK_1108e7b50;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar14;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    _objc_release(uVar13);
    _objc_release(uVar14);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  func_0x00010bed6820(param_1);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x218);
  *(long *)(param_1 + 0x218) = lVar6;
  _objc_release(uVar14);
  _objc_release(lVar5);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(lVar5);
  }
  else {
    uVar7 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    func_0x00010c07b9c0();
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if ((uVar8 & 1) == 0) {
      _objc_initWeak(auStack_78,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      func_0x00010bef0120();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar1;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_105d87da0;
      puStack_b0 = &UNK_1108434e0;
      puVar9 = auStack_a8;
      _objc_copyWeak(puVar9,auStack_78);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar14);
      _objc_release(puVar9);
      _objc_release(uVar14);
      _objc_release(uVar2);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c157120();
      _objc_release(uVar14);
      lVar5 = param_1 + 0x220;
      _objc_loadWeakRetained(lVar5);
      lVar6 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar6);
      lVar10 = lVar6;
      func_0x00010c0d32a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9e4c0(param_1);
      func_0x00010c0d2f20(lVar5);
      _objc_release(lVar10);
      _objc_release(lVar6);
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010be9e4c0();
      if ((int)lVar5 != 0) {
        lVar5 = param_1 + 0x220;
        _objc_loadWeakRetained(lVar5);
        uVar14 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c15a4a0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d2f40(lVar5);
        _objc_release(uVar14);
        _objc_release(lVar5);
      }
      puVar9 = auStack_a8;
      goto LAB_105d87a0c;
    }
  }
  _objc_initWeak(auStack_78,param_1);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105d87e0c;
  puStack_d8 = &UNK_1108e7b80;
  _objc_copyWeak(auStack_d0,auStack_78);
  ppuVar11 = &puStack_f0;
  _objc_retainBlock();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105d87e64;
  puStack_108 = &UNK_1108e7bb0;
  _objc_copyWeak(auStack_f8,auStack_78);
  ppuStack_100 = ppuVar11;
  func_0x00010be5efc0(param_1);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar11);
  puVar9 = auStack_d0;
LAB_105d87a0c:
  _objc_destroyWeak(puVar9);
  _objc_destroyWeak(auStack_78);
  puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar12);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010bf75dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_105d87ef4;
  puStack_130 = &UNK_110846510;
  _objc_copyWeak(auStack_128,auStack_78);
  uVar14 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar14);
  _objc_release(uVar2);
  lVar5 = param_1;
  func_0x00010c078320();
  if ((((((uint)uVar4 | (uint)lVar5 ^ 0xffffffff) & 1) == 0) &&
      ((*(byte *)(param_1 + 0x1a8) & 1) == 0)) && ((*(byte *)(param_1 + 0x1a9) & 1) == 0)) {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c07b9c0();
    *(byte *)(param_1 + 0x1e8) = (byte)lVar6 ^ 1;
    _objc_release(lVar5);
    func_0x00010beaa740(param_1);
  }
  lVar5 = param_1;
  func_0x00010bdf6a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_105d87f20;
  puStack_158 = &UNK_110843540;
  _objc_copyWeak(auStack_150,auStack_78);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c111d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_105d87fb0;
  puStack_180 = &UNK_1108e7c40;
  _objc_copyWeak(auStack_178,auStack_78);
  uVar4 = uVar14;
  func_0x00010c25ff60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010c111e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_78);
  uVar4 = uVar14;
  func_0x00010c25ff60(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105d87d74; end: 105d87d9f;  */

void FUN_105d87d74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed35c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d87da0; end: 105d87e0b;  */

void FUN_105d87da0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedcf80(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d87e0c; end: 105d87e63;  */

void FUN_105d87e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d87e64; end: 105d87ef3;  */

void FUN_105d87e64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2c360(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x178);
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d87ef4; end: 105d87f1f;  */

void FUN_105d87ef4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d87f20; end: 105d87faf;  */

void FUN_105d87f20(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c13e080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_2);
      uVar1 = *(undefined8 *)(param_1 + 0x1c0);
      *(ulong *)(param_1 + 0x1c0) = param_2;
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d87fb0; end: 105d8818b;  */

void FUN_105d87fb0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (param_1 == 0)) goto LAB_105d88160;
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar5);
  lVar6 = param_1;
  func_0x00010bdf6d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ce20(uVar5);
  _objc_release(lVar6);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c083340();
  if ((int)puVar2 == 0) {
LAB_105d88150:
    _objc_release(puVar1);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x60);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c4028;
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c15a4a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf12440(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar6 = *(long *)(param_1 + 0x60);
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010bf0ffa0(&uStack_68,lVar6);
      }
      _objc_release(lVar6);
      puVar2 = PTR_PTR_1126c4028;
      _objc_retain(uVar5);
      _objc_retain(param_2);
      func_0x00010bf8b1c0(puVar2);
      _objc_release(param_2);
      _objc_release(uVar5);
      goto LAB_105d88150;
    }
  }
  _objc_release(uVar5);
LAB_105d88160:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d8818c; end: 105d88263;  */

void FUN_105d8818c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d88264; end: 105d88303;  */

void FUN_105d88264(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  _CMTimeSubtract(&uStack_38,&uStack_80,&uStack_50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_98 = uStack_30;
  uStack_a0 = uStack_38;
  uStack_90 = uStack_28;
  _CMTimeRangeMake(&uStack_80,&uStack_50,&uStack_a0);
  func_0x00010c285520(uVar1);
  return;
}



/* Entry: 105d88304; end: 105d8839b;  */

void FUN_105d88304(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126bab40;
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c253880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfee100();
    _objc_release(uVar1);
    if ((puVar2 == (undefined *)0xb) && (*(long *)(param_1 + 0x60) != 0)) {
      func_0x00010be7c9e0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d8839c; end: 105d883a3; -[SCPreviewFeatureMusicImpl responderChainPriority] */

undefined8 FUN_105d8839c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d883a4; end: 105d883cb; -[SCPreviewFeatureMusicImpl toolbarItemViewModelObservable] */

void FUN_105d883a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d883cc; end: 105d8841b; -[SCPreviewFeatureMusicImpl hasUnavailableMusic] */

void FUN_105d883cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb30a0();
  if ((int)lVar1 == 0) {
    func_0x00010bfbc3e0(*(undefined8 *)(param_1 + 0xf0));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d8841c; end: 105d88437; -[SCPreviewFeatureMusicImpl shouldBlockBrandAccountMusicSnapWithBusinessProfileIds:] */

undefined1 *
FUN_105d8841c(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x22;
  undefined8 *puVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar15;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined1 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return (undefined1 *)0x0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x110);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_3;
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar10;
  func_0x00010bf529e0();
  if (puVar3 != (undefined8 *)0x0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    _objc_retain(puVar10);
    puVar15 = &uStack_1b0;
    param_4 = auStack_f0;
    param_5 = 0x10;
    puVar3 = puVar10;
    func_0x00010bf52a60();
    if (puVar3 == (undefined8 *)0x0) {
      _objc_release(puVar10);
    }
    else {
      bVar1 = false;
      bVar2 = 0;
      puVar11 = (undefined8 *)*puStack_1a0;
      puStack_210 = puVar11;
      puStack_208 = puVar10;
      do {
        unaff_x22 = (undefined8 *)0x0;
        puStack_200 = puVar3;
        do {
          if ((undefined8 *)*puStack_1a0 != puVar11) {
            _objc_enumerationMutation(puVar10);
          }
          puVar14 = *(undefined8 **)(lStack_1a8 + (long)unaff_x22 * 8);
          unaff_x23 = puVar14;
          puStack_1f8 = unaff_x22;
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x23;
          func_0x00010bf33240();
          if (puVar4 == (undefined8 *)0x2) {
            unaff_x24 = puVar14;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = unaff_x24;
            func_0x00010c26e7a0();
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            if (puVar4 == (undefined8 *)0x3) {
              puVar4 = puVar14;
              func_0x00010c074e40();
              if ((int)puVar4 != 0) {
                _objc_release(puVar10);
                puVar13 = (undefined1 *)0x1;
                unaff_x22 = puVar14;
                goto code_r0x000107e32d58;
              }
              if (!bVar1) {
                uStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1b8 = 0;
                uStack_1c0 = 0;
                lStack_1e8 = 0;
                uStack_1f0 = 0;
                uStack_1d8 = 0;
                plStack_1e0 = (long *)0x0;
                _objc_retain(param_3);
                puVar15 = &uStack_1f0;
                param_4 = auStack_170;
                param_5 = 0x10;
                puVar4 = param_3;
                func_0x00010bf52a60();
                unaff_x23 = param_3;
                if (puVar4 == (undefined8 *)0x0) {
                  bVar1 = false;
                  bVar2 = 1;
                }
                else {
                  lVar12 = *plStack_1e0;
                  do {
                    puVar10 = (undefined8 *)0x0;
                    do {
                      if (*plStack_1e0 != lVar12) {
                        _objc_enumerationMutation(param_3);
                      }
                      puVar15 = *(undefined8 **)(lStack_1e8 + (long)puVar10 * 8);
                      unaff_x24 = puVar14;
                      func_0x00010c1164a0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar3 = unaff_x24;
                      func_0x00010c116a20();
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = puVar3;
                      func_0x00010c0720c0();
                      if ((int)puVar11 == 0) {
code_r0x000107e32c78:
                        _objc_release(puVar3);
                        _objc_release(unaff_x24);
                      }
                      else {
                        puVar11 = puVar14;
                        func_0x00010c1164a0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar5 = puVar11;
                        func_0x00010bf33240();
                        if (puVar5 != (undefined8 *)0x2) {
                          _objc_release(puVar11);
                          goto code_r0x000107e32c78;
                        }
                        puVar5 = puVar14;
                        func_0x00010c1164a0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar6 = puVar5;
                        func_0x00010c26e7a0();
                        _objc_release(puVar5);
                        _objc_release(puVar11);
                        _objc_release(puVar3);
                        _objc_release(unaff_x24);
                        if (puVar6 == (undefined8 *)0x3) {
                          bVar1 = true;
                          goto code_r0x000107e32ccc;
                        }
                      }
                      puVar10 = (undefined8 *)((long)puVar10 + 1);
                    } while (puVar4 != puVar10);
                    puVar15 = &uStack_1f0;
                    param_4 = auStack_170;
                    param_5 = 0x10;
                    puVar4 = param_3;
                    func_0x00010bf52a60();
                  } while (puVar4 != (undefined8 *)0x0);
                  bVar1 = false;
code_r0x000107e32ccc:
                  bVar2 = 1;
                  puVar10 = puStack_208;
                  puVar11 = puStack_210;
                  puVar3 = puStack_200;
                }
                goto code_r0x000107e32ce4;
              }
              bVar1 = true;
              bVar2 = 1;
            }
          }
          else {
code_r0x000107e32ce4:
            _objc_release(unaff_x23);
          }
          unaff_x22 = (undefined8 *)((long)puStack_1f8 + 1);
        } while (unaff_x22 != puVar3);
        puVar15 = &uStack_1b0;
        param_4 = auStack_f0;
        param_5 = 0x10;
        puVar3 = puVar10;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
      _objc_release(puVar10);
      if ((bool)(bVar2 & bVar1)) {
        puVar13 = (undefined1 *)0x1;
        puVar11 = puVar10;
        goto code_r0x000107e32d58;
      }
    }
  }
  puVar13 = (undefined1 *)0x0;
  puVar11 = puVar10;
code_r0x000107e32d58:
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_260;
    puStack_218 = &UNK_107e32da8;
    puStack_250 = unaff_x24;
    puStack_248 = unaff_x23;
    puStack_240 = unaff_x22;
    puStack_238 = puVar13;
    puStack_230 = puVar11;
    puStack_228 = puVar10;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar15);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puStack_258 = PTR_PTR_1126fb4f8;
    puStack_260 = param_3;
    _objc_msgSendSuper2(&puStack_260,PTR_s_init_1125d9248);
    if (ppuVar7 != (undefined8 **)0x0) {
      puVar10 = puVar15;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
      *(undefined8 **)((long)ppuVar7 + 8) = puVar10;
      _objc_release(uVar8);
      puVar13 = param_4;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)((long)ppuVar7 + 0x10);
      *(undefined1 **)((long)ppuVar7 + 0x10) = puVar13;
      _objc_release(uVar8);
      uVar8 = param_5;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)ppuVar7 + 0x18);
      *(undefined8 *)((long)ppuVar7 + 0x18) = uVar8;
      _objc_release(uVar9);
      _objc_retain(param_6);
      uVar8 = *(undefined8 *)((long)ppuVar7 + 0x20);
      *(undefined8 *)((long)ppuVar7 + 0x20) = param_6;
      _objc_release(uVar8);
    }
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar15);
    return (undefined1 *)ppuVar7;
  }
  return puVar13;
}



/* Entry: 105d88438; end: 105d8843f; -[SCPreviewFeatureMusicImpl selection] */

void FUN_105d88438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_selection_112634348);
  return;
}



/* Entry: 105d88440; end: 105d88447; -[SCPreviewFeatureMusicImpl selectionInfo] */

void FUN_105d88440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_trackInfo_11267ba00);
  return;
}



/* Entry: 105d88448; end: 105d8887f; -[SCPreviewFeatureMusicImpl presentPickerWithSourcePageType:] */

void FUN_105d88448(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c07b9c0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
  if (param_1[0x1a8] == '\x01') {
    param_1[0xc0] = 1;
    lVar3 = *(long *)(param_1 + 0x128);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x128));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar1 = param_1;
    func_0x00010c0d3720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar9 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    puVar1 = param_1 + 0x228;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c0f3d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f60(puVar9,param_2,puVar2,0,5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR_PTR_1126c47c0;
    _objc_alloc(PTR_PTR_1126c47c0);
    func_0x00010c056920();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x128),param_2,puVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(uVar4);
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0xb0));
    param_1[0xc0] = 1;
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b3008;
    _objc_alloc(PTR_PTR_1126b3008);
    puVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    puVar6 = puVar1;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(puVar2);
    puVar7 = puVar2;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ab00(puVar5,param_2,param_3,puVar6,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar1);
    func_0x00010be8c980(param_1);
    puVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010c09a7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c07f200();
    if (((ulong)puVar6 & 1) == 0) {
      puVar6 = param_1 + 0x20;
      _objc_loadWeakRetained();
      puVar7 = puVar6;
      func_0x00010c09a7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c134360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c0720c0(puVar9,param_2,uVar4);
    _objc_release(uVar4);
    if ((int)puVar1 != 0) {
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
    }
    puVar2 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    puVar1 = param_1 + 0x228;
    _objc_loadWeakRetained(puVar1);
    puVar6 = puVar1;
    func_0x00010c0f3d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f60(puVar2,param_2,puVar6,1,5);
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c47c8;
    _objc_alloc(PTR_PTR_1126c47c8);
    func_0x00010c04a7c0();
    puVar6 = PTR_PTR_1126c47d0;
    _objc_alloc(PTR_PTR_1126c47d0);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c15a4a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056960(puVar6,param_2,puVar2,param_1,uVar4,puVar5,2,puVar1);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x118),param_2,puVar6);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d2ea0();
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105d88880; end: 105d88903;  */

bool FUN_105d88880(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 105d88904; end: 105d88a03; -[SCPreviewFeatureMusicImpl clearSelectionUserInitiated:] */

void FUN_105d88904(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  func_0x00010bdd9a00(param_2,param_3,0);
  if ((int)lVar1 != 0) {
    if (param_4 != 0) {
      func_0x00010bdd4f40(param_2);
    }
    lVar1 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c075080();
    func_0x00010bedf7e0(param_2,param_3,0,(uint)lVar2 ^ 1);
    _objc_release(lVar1);
    func_0x00010bee6a60(param_2,param_3,0);
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010bdd8900(param_2);
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf30e80();
    func_0x00010be42140(param_2);
    func_0x00010c10d220(param_1,uVar4,param_3,0,0,lVar1,lVar3,param_2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d88a04; end: 105d88a27; -[SCPreviewFeatureMusicImpl dismissPickerAndEditor] */

void FUN_105d88a04(undefined8 param_1)

{
  func_0x00010be030c0();
                    /* WARNING: Could not recover jumptable at 0x00010be02a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEditorIfNeeded_11255e420);
  return;
}



/* Entry: 105d88a28; end: 105d88ba3; -[SCPreviewFeatureMusicImpl updateSelection:multiSnapTimeRange:multiSnapIndex:] */

void FUN_105d88a28(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar7 = param_4[3];
  uVar6 = param_4[2];
  uVar5 = param_4[5];
  uVar4 = param_4[4];
  uVar8 = *param_4;
  *(undefined8 *)(param_1 + 0x78) = param_4[1];
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = param_5;
  puVar1 = *(undefined **)(param_1 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar1);
      func_0x00010bedf7e0(param_1,param_2,0,1);
      goto LAB_105d88b8c;
    }
    puVar2 = puVar1;
    func_0x00010c071ae0(puVar1,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126b3038;
    if (((ulong)puVar2 & 1) != 0) goto LAB_105d88b8c;
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c054e00();
    puVar1 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    func_0x00010c043d40();
    _objc_release(param_3);
    _objc_release(puVar3);
    func_0x00010bedf7e0(param_1,param_2,puVar1,1);
  }
  _objc_release(puVar1);
LAB_105d88b8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d88ba4; end: 105d88c5f; -[SCPreviewFeatureMusicImpl updateSelectionAndStickerViewWithPickerSelection:] */

void FUN_105d88ba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010bedf7e0(param_2,param_3,param_4,1);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010bdd8900(param_2);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf30e80();
  func_0x00010be42140(param_2);
  func_0x00010c10d220(param_1,uVar4,param_3,param_4,0,lVar1,lVar3,param_2);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d88c60; end: 105d88ddf; -[SCPreviewFeatureMusicImpl toolbarItemConfiguration] */

void FUN_105d88c60(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b0c40;
  lVar5 = *(long *)(param_1 + 0x1d0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar5 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x1a6;
  }
  else {
    if (lVar5 != 1) {
      if (lVar5 == 0) {
        func_0x0001062d4b94();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x0001062d4b18();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = (undefined *)0x0;
        param_1 = (undefined *)0x0;
      }
      goto LAB_105d88d50;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x1a5;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar6,param_2,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(puVar6);
  param_1 = puVar6;
LAB_105d88d50:
  puVar1 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar2 = puVar1;
  func_0x000108edf128();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108edf128();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar1,param_2,10,param_1,puVar6,puVar2,
                      &PTR____CFConstantStringClassReference_110e29f58,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d88de0; end: 105d88de7; -[SCPreviewFeatureMusicImpl pauseAudioPlayback] */

void FUN_105d88de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 105d88de8; end: 105d88def; -[SCPreviewFeatureMusicImpl resumeAudioPlayback] */

void FUN_105d88de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105d88df0; end: 105d88e17; -[SCPreviewFeatureMusicImpl timelineMusicSelectionObservable] */

void FUN_105d88df0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d88e18; end: 105d88e3f; -[SCPreviewFeatureMusicImpl muteSnapAudioObservable] */

void FUN_105d88e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d88e40; end: 105d88e4f; -[SCPreviewFeatureMusicImpl musicSelectionObservable] */

void FUN_105d88e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x150),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_1108e7cd0);
  return;
}



/* Entry: 105d88e50; end: 105d88f0f;  */

void FUN_105d88e50(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d88f10; end: 105d88f37; -[SCPreviewFeatureMusicImpl pickerSelectionObservable] */

void FUN_105d88f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d88f38; end: 105d88f5f; -[SCPreviewFeatureMusicImpl memoriesAssetObservable] */

void FUN_105d88f38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d88f60; end: 105d88f87; -[SCPreviewFeatureMusicImpl musicEditorPresentationObservable] */

void FUN_105d88f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d88f88; end: 105d89023; -[SCPreviewFeatureMusicImpl isMusicSupported] */

uint FUN_105d88f88(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = param_1;
  func_0x00010beb30a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0811c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1 + 0x20;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c06d080();
      if ((uVar3 & 1) == 0) {
        lVar4 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010c230ba0();
        uVar6 = (uint)lVar5 ^ 1;
        _objc_release(lVar4);
      }
      else {
        uVar6 = 0;
      }
      _objc_release(uVar2);
    }
    else {
      uVar6 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 105d89024; end: 105d8907b; -[SCPreviewFeatureMusicImpl setAddSoundPillHiddenForPreviewOverlay:] */

void FUN_105d89024(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0xd0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xd0) = (char)param_3;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d8907c; end: 105d89167; -[SCPreviewFeatureMusicImpl musicPickerDidUpdateSelection:] */

void FUN_105d8907c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  func_0x00010be8c980(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
  _objc_release(uVar1);
  func_0x00010c0fe360(*(undefined8 *)(param_1 + 0xb0));
  lVar2 = param_3;
  func_0x00010c15a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdd9a00(param_1,param_2,lVar2);
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd9e20(param_1,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      if (param_3 == 0) {
        func_0x00010bedcf80(param_1,param_2,0);
      }
      else {
        func_0x00010be2c7c0(param_1,param_2,param_3,0,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d89168; end: 105d891c3; -[SCPreviewFeatureMusicImpl musicPickerDidDismiss] */

void FUN_105d89168(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xc0) = 0;
  func_0x00010be8c980();
  func_0x00010bea1b00(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
  _objc_release(uVar1);
  func_0x00010c0fe360(*(undefined8 *)(param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdce4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyMiniPickerSelectionIfChang_1125512c8);
  return;
}



/* Entry: 105d891c4; end: 105d891c7; -[SCPreviewFeatureMusicImpl musicPickerDidPreviewTrack:] */

void FUN_105d891c4(void)

{
  return;
}



/* Entry: 105d891c8; end: 105d89397; -[SCPreviewFeatureMusicImpl musicPickerDidDownloadTrack:] */

void FUN_105d891c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    puVar2 = PTR_PTR_1126c47d8;
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    lVar3 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010841fae8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x1b8);
      puVar2 = PTR_PTR_1126c47d8;
      func_0x00010bf8eb20(PTR_PTR_1126c47d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2468a0(puVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar4 = *(undefined **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      puVar4 = PTR_PTR_1126c47e0;
      _objc_alloc(PTR_PTR_1126c47e0);
      func_0x00010c04ab40();
      puVar2 = PTR_PTR_1126c47d8;
      func_0x00010c0fb980(PTR_PTR_1126c47d8,param_2,lVar3,puVar4,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x1b8);
      puVar1 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5,param_2,puVar1);
      _objc_release(puVar1);
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = param_3;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d89398; end: 105d893db; -[SCPreviewFeatureMusicImpl musicPickerDidDismissAndPresentEditor] */

void FUN_105d89398(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  func_0x00010be8c980();
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__handleMusicSelection_shouldSkip_112568b90,*(long *)(param_1 + 0x68),0,
               1);
    return;
  }
  return;
}



/* Entry: 105d893dc; end: 105d8944b; -[SCPreviewFeatureMusicImpl musicPickerRequestsPausePlayback:] */

void FUN_105d893dc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c0f6160();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_pause_11261b0e8);
    return;
  }
  func_0x00010c13dae0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 105d8944c; end: 105d8944f; -[SCPreviewFeatureMusicImpl musicPickerListDidSelectTrackId:] */

void FUN_105d8944c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadMusicSyncSelectionWithTrack_1125711d0);
  return;
}



/* Entry: 105d89450; end: 105d894af; -[SCPreviewFeatureMusicImpl musicPickerListDidDismiss] */

void FUN_105d89450(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xc0) = 0;
  lVar1 = *(long *)(param_1 + 0x128);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x128));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x160));
  func_0x00010be02c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb9ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showMusicSyncTooltipIfNeeded_11258c160);
  return;
}



/* Entry: 105d894b0; end: 105d89553; -[SCPreviewFeatureMusicImpl musicEditorDidConfirmSelection:selectedMusicStickerData:] */

void FUN_105d894b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c0fbb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6160(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  puVar1 = PTR_PTR_1126c47e8;
  func_0x00010bf9bb40(PTR_PTR_1126c47e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEditorIfNeeded_11255e420);
  return;
}



/* Entry: 105d89554; end: 105d89593; -[SCPreviewFeatureMusicImpl musicEditorWillUpdateStartOffset] */

void FUN_105d89554(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d89594; end: 105d895d7; -[SCPreviewFeatureMusicImpl musicEditorDidChangeMuteSnapAudioToggle:] */

void FUN_105d89594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d895d8; end: 105d89787; -[SCPreviewFeatureMusicImpl musicEditorDidUpdateStartOffset:] */

void FUN_105d895d8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(param_2 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c15a4a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CMTimeMakeWithSeconds(auStack_88,param_1,600);
    uVar3 = uVar2;
    func_0x0001084532b0(uVar2,auStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c277f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010beff2a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf5cba0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c260ce0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c0c1aa0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010bf0a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043d40(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010be953a0(param_2);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105d89788; end: 105d8979f; -[SCPreviewFeatureMusicImpl musicEditorDidTapChangeMusicButton] */

void FUN_105d89788(long param_1)

{
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xc2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be02a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissEditorIfNeeded_11255e420);
  return;
}



/* Entry: 105d897a0; end: 105d897c7; -[SCPreviewFeatureMusicImpl musicEditorCurrentTimeObservable] */

void FUN_105d897a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d897c8; end: 105d8981f; -[SCPreviewFeatureMusicImpl addSoundPillScopeDidSelectRemoveTrack:] */

void FUN_105d897c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c07b9c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearMusicSelection_112555c00);
  return;
}



/* Entry: 105d89820; end: 105d899af; -[SCPreviewFeatureMusicImpl addSoundPillScope:didSelectAppliedTrack:] */

void FUN_105d89820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c07b9c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2471e0();
    if ((uVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0xc1);
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((bVar1 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x60);
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c15a4a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf0ef80();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c15a4a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0b3ae0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c247a20();
          uVar11 = param_4;
          FUN_105d899b0(param_4,uVar7,uVar10,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          func_0x00010be2c7c0(param_1);
          _objc_release(uVar11);
        }
        goto LAB_105d898cc;
      }
    }
    else {
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    func_0x00010c10d880(param_1);
  }
LAB_105d898cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d899b0; end: 105d89f73;  */

void FUN_105d899b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 auStack_78 [24];
  
  _objc_retain();
  if (param_2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_3);
    lVar1 = param_2;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c079d80();
    if ((int)lVar2 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar2 = param_2;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010bf0f2e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar15);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126b3028;
    _objc_alloc();
    func_0x00010c04ab80();
    puVar11 = PTR_PTR_1126b3030;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c277e80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010bf6a4e0(param_2);
    _CMTimeMakeWithSeconds(auStack_78,param_1 / 1000.0,600);
    lVar2 = param_2;
    func_0x00010bf93480(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0();
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c07b240();
    puVar12 = PTR_PTR_1126b3038;
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf0a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240(param_2);
    lVar3 = param_2;
    func_0x00010c072480(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    lVar4 = param_2;
    func_0x00010c081860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c054e00();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010beff2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = PTR_PTR_1126b3020;
      _objc_alloc(PTR_PTR_1126b3020);
      puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar3 = param_2;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010beff2c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_2;
      func_0x00010beff2c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar9;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0(puVar17);
      _objc_release(lVar13);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar15);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    lVar1 = param_2;
    func_0x00010c260ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_2;
    func_0x00010c128040(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010c0df880(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043d40(puVar15);
    _objc_release(param_5);
    _objc_release(puVar14);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar17);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar16);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105d89f74; end: 105d89faf; -[SCPreviewFeatureMusicImpl addSoundPillScopeDidSelectAddSound:] */

void FUN_105d89f74(long param_1,undefined8 param_2)

{
  func_0x00010c10d880(param_1,param_2,5);
  param_1 = param_1 + 0x220;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d2e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d89fb0; end: 105d8a03f; -[SCPreviewFeatureMusicImpl addSoundPillScope:didSelectRecommendedTrack:] */

void FUN_105d89fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  FUN_105d8a040(param_4,&uStack_50,0xa9,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_retain();
  _objc_release(uVar1);
  func_0x00010be2c7c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d8a040; end: 105d8a7fb;  */

void FUN_105d8a040(long param_1)

{
  long lVar1;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_a8;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c079d80();
    if ((int)lVar3 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar3 = param_1;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010c277900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0();
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar19);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar14 = PTR_PTR_1126b3028;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c0b3ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0fbb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ab80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar15 = PTR_PTR_1126b3030;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    lVar3 = param_1;
    func_0x00010bf0ef80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240();
    _objc_release(lVar1);
    puVar16 = PTR_PTR_1126b3038;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240();
    lVar6 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c072480();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c081860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c054e00();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beff2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puStack_a8 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar4 = param_1;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c277900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c277900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010beff2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar13;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0();
      _objc_release(lVar17);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar19);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar19 = PTR_PTR_1126b2f20;
    _objc_alloc(PTR_PTR_1126b2f20);
    lVar1 = param_1;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c260ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_1;
    func_0x00010c277900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010c0df880(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043d40(puVar19);
    _objc_release(puVar18);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puStack_a8);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar20);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 105d8a7fc; end: 105d8a88f; -[SCPreviewFeatureMusicImpl videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_105d8a7fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  _CMTimeSubtract(&uStack_38,&uStack_50,&uStack_70);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xf8));
  _objc_release(puVar1);
  return;
}



/* Entry: 105d8a890; end: 105d8a913; -[SCPreviewFeatureMusicImpl secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_105d8a890(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105d8a914; end: 105d8a927;  */

void FUN_105d8a914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setMuteSwitchIsEnabled__112587098,
             *(long *)(param_1 + 0x28) == 1);
  return;
}



/* Entry: 105d8a928; end: 105d8a94f; -[SCPreviewFeatureMusicImpl _clearMusicSelection] */

void FUN_105d8a928(undefined8 param_1)

{
  func_0x00010bdd4f40();
                    /* WARNING: Could not recover jumptable at 0x00010c289b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSelectionAndStickerViewWit_1126800f0,0)
  ;
  return;
}



/* Entry: 105d8a950; end: 105d8aaaf; -[SCPreviewFeatureMusicImpl _confirmMusicSelection:selectedMusicStickerData:] */

void FUN_105d8a950(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(ulong *)(param_2 + 0x60);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  if (uVar5 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar5);
joined_r0x000105d8a9e4:
    if (param_4 == 0) goto LAB_105d8aa88;
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar5);
      uVar5 = *(ulong *)(param_2 + 0x108);
LAB_105d8a9f8:
      func_0x00010bedf7e0(param_2,param_3,uVar5,1);
      goto joined_r0x000105d8a9e4;
    }
    uVar1 = uVar5;
    func_0x00010c071ae0(uVar5,param_3,param_4);
    _objc_release(param_4);
    _objc_release(uVar5);
    uVar5 = param_4;
    if ((uVar1 & 1) == 0) goto LAB_105d8a9f8;
  }
  func_0x00010bedcfa0(param_2,param_3,param_4);
  func_0x00010bee6a60(param_2,param_3,param_4);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010bdd8900(param_2);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf30e80();
  func_0x00010be42140(param_2);
  func_0x00010c10d220(param_1,uVar6,param_3,param_4,param_5,lVar2,lVar4,param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_105d8aa88:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d8aab0; end: 105d8aaf7; -[SCPreviewFeatureMusicImpl _startListeningToMuteSwitchUpdates] */

void FUN_105d8aab0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6df8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined **)(param_1 + 0x1f8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1f8),PTR_s_start_112671080);
  return;
}



/* Entry: 105d8aaf8; end: 105d8ab3f; -[SCPreviewFeatureMusicImpl _stopListeningToMuteSwitchUpdates] */

void FUN_105d8aaf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    func_0x00010c255780();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x1f8),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d8ab40; end: 105d8ab47; -[SCPreviewFeatureMusicImpl _setMuteSwitchIsEnabled:] */

void FUN_105d8ab40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x200) = param_3;
  return;
}



/* Entry: 105d8ab48; end: 105d8ab4b; -[SCPreviewFeatureMusicImpl _handleAppBackground] */

void FUN_105d8ab48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be030d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPickerIfNeeded_11255e5d0);
  return;
}



/* Entry: 105d8ab4c; end: 105d8acc3; -[SCPreviewFeatureMusicImpl _checkUnavailableMusicIfNeeded] */

void FUN_105d8ab4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15a860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c15a4a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa51c0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanFalse_11034ab60);
  return;
}



/* Entry: 105d8acc4; end: 105d8ad2f;  */

void FUN_105d8acc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8ad30; end: 105d8addb; -[SCPreviewFeatureMusicImpl _userConfirmedSelection:] */

void FUN_105d8ad30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bedcfa0(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar1;
  _objc_release(uVar3);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0xf0),param_2,PTR____kCFBooleanFalse_11034ab60);
  lVar2 = param_1 + 0x220;
  _objc_loadWeakRetained(lVar2);
  uVar3 = param_3;
  func_0x00010c15a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d2d60(lVar2,param_2,param_1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d8addc; end: 105d8ae8f; -[SCPreviewFeatureMusicImpl _updatePickerSelectionForPreviewFeature:] */

void FUN_105d8addc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c06ba20();
    if ((int)lVar4 != 0) {
      _objc_release(lVar3);
      goto LAB_105d8ae30;
    }
    uVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar5 = uVar2;
    func_0x00010c070a20();
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) goto LAB_105d8ae44;
  }
  else {
LAB_105d8ae30:
    _objc_release(uVar1);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x168),param_2,param_3);
LAB_105d8ae44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d8ae90; end: 105d8afc3; -[SCPreviewFeatureMusicImpl _updatePickerSelection:] */

void FUN_105d8ae90(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if ((param_4 != 0) || ((*(byte *)(param_2 + 0x1a8) & 1) == 0)) {
    lVar1 = param_4;
    func_0x00010c15a4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bdd9a00(param_2,param_3,lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_4;
      func_0x00010c15a4a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bdd9e20(param_2,param_3,lVar1);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bedf7e0(param_2,param_3,param_4,1);
        func_0x00010bee6a60(param_2,param_3,param_4);
        uVar4 = *(undefined8 *)(param_2 + 0xa8);
        func_0x00010bdd8900(param_2);
        lVar1 = param_2 + 0x58;
        _objc_loadWeakRetained(lVar1);
        lVar2 = param_2 + 0x20;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010bf30e80();
        func_0x00010be42140(param_2);
        func_0x00010c10d220(param_1,uVar4,param_3,param_4,0,lVar1,lVar3,param_2);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d8afc4; end: 105d8b07f; -[SCPreviewFeatureMusicImpl _updateSelection:shouldUpdateMotionFilters:] */

void FUN_105d8afc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) || ((*(byte *)(param_1 + 0x1a8) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdd9a00(param_1,param_2,lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdd9e20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bea7420(param_1,param_2,param_3,param_4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d8b080; end: 105d8b263; -[SCPreviewFeatureMusicImpl _setSelection:shouldUpdateMotionFilters:] */

void FUN_105d8b080(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((param_3 != 0) || ((*(byte *)(param_1 + 0x1a8) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdd9a00(param_1,param_2,lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      if (param_3 == 0) {
        func_0x00010bed36c0(param_1,param_2,0);
      }
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x60) = param_3;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x150);
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      lVar5 = *(long *)(param_1 + 0x60);
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar1 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c084f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar3 = 0;
      if (lVar5 != 0) {
        uVar3 = 2;
      }
      func_0x00010c1fbac0(lVar6,param_2,uVar3);
      func_0x00010c129080(param_1);
      func_0x00010bed35c0(param_1);
      lVar1 = param_1 + 0x220;
      _objc_loadWeakRetained(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c15a4a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      if ((param_4 & 1) == 0) {
        func_0x00010c0d2d20(lVar1,param_2,param_1,uVar3,0);
      }
      else {
        lVar2 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar2);
        lVar5 = lVar2;
        func_0x00010c075080();
        func_0x00010c0d2d20(lVar1,param_2,param_1,uVar3,(uint)lVar5 ^ 1);
        _objc_release(lVar2);
      }
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010bee0180(param_1,param_2,param_3);
      _objc_release(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d8b264; end: 105d8b43f; -[SCPreviewFeatureMusicImpl _updateSnapDocWithPickerSelection:] */

void FUN_105d8b264(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf926c0();
  puVar3 = PTR_PTR_1126bf6f0;
  if (iVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c2401a0();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c5c0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105d8b4bc;
      puStack_60 = &UNK_110853ea0;
      _objc_retain(param_3);
      lStack_58 = param_3;
      func_0x00010c2849a0(uVar5);
      if (param_3 != 0) {
        _objc_initWeak(auStack_80,param_1);
        puStack_a8 = puVar3;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_105d8b6b8;
        puStack_90 = &UNK_11087b798;
        _objc_copyWeak(auStack_88,auStack_80);
        ppuVar4 = &puStack_a8;
        _objc_retainBlock(ppuVar4);
        puVar3 = PTR_PTR_1126b2518;
        lVar2 = param_3;
        func_0x00010c15a4a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc01c0(puVar3);
        _objc_release(lVar2);
        _objc_release(ppuVar4);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
      }
      _objc_release(lStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d8b440; end: 105d8b4bb;  */

undefined * FUN_105d8b440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar2 == 2) {
    puVar3 = (undefined *)0x1;
  }
  else {
    puVar3 = PTR_PTR_1126bf6f0;
    func_0x00010c078360(PTR_PTR_1126bf6f0);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 105d8b4bc; end: 105d8b6b7;  */

void FUN_105d8b4bc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar7 == 0) {
    func_0x00010c1ca400();
  }
  else {
    puVar1 = param_2;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126bfac0;
      _objc_opt_new(PTR_PTR_1126bfac0);
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15a4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c218f80(puVar2);
    _objc_release(uVar3);
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_58,lVar7);
    }
    _CMTimeGetSeconds(&uStack_58);
    func_0x00010c209700(puVar2);
    _objc_release(lVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15a4a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b25f8;
    _objc_alloc(PTR_PTR_1126b25f8);
    func_0x00010c008360();
    func_0x00010c182620(puVar2);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0f9ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c277f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b240();
    func_0x00010c21acc0(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010c1ca400(param_2);
    _objc_release(param_2);
    _objc_release(uVar3);
    param_2 = puVar2;
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105d8b6b8; end: 105d8b81b;  */

void FUN_105d8b6b8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b25c8;
    _objc_alloc_init();
    func_0x00010c16a960();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    puVar3 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9c20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    puVar3 = puVar2;
    _objc_retain(puVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}


