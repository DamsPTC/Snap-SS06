/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060bf09c; end: 1060bf147;  */

void FUN_1060bf09c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060bf148; end: 1060bf18f;  */

void FUN_1060bf148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59d00();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060bf190; end: 1060bf317; -[SCDualStreamCamModeLogger _logTimelineSegmentCreateWithRecordedVideoFuture:configuration:] */

void FUN_1060bf190(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c06dec0();
  if ((int)lVar1 != 0) {
    uVar2 = param_4;
    func_0x00010c2701a0();
    _objc_release(lVar3);
    if ((uVar2 & 1) != 0) goto LAB_1060bf2d4;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_48,param_1);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    uVar5 = uVar4;
    _objc_retain(uVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
LAB_1060bf2d4:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060bf318; end: 1060bf40f;  */

void FUN_1060bf318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7bd0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf311e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1);
  _objc_release(uVar2);
  func_0x00010c1c5440(puVar1);
  func_0x00010c299d80(param_2);
  _objc_release(param_2);
  func_0x00010c192e60(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a60(puVar1);
  _objc_release(uVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59ce0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060bf410; end: 1060bf4e7; -[SCDualStreamCamModeLogger _logTimelineSegmentCreateWithImageConfiguration:] */

void FUN_1060bf410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06dec0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126c7bd0;
    _objc_opt_new(PTR_PTR_1126c7bd0);
    uVar4 = param_3;
    func_0x00010bf311e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    func_0x00010c1c5440(puVar3,param_2,2);
    uVar4 = param_3;
    func_0x00010bef0520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    func_0x00010be59ce0(param_1,param_2,puVar3,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060bf4e8; end: 1060bf613; -[SCDualStreamCamModeLogger _logTimelineSegmentCreate:multiCamLayoutSelections:multiCamActions:] */

void FUN_1060bf4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c06dec0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    func_0x00010c1b29e0(param_3,param_2,1);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf5f120();
    uVar1 = (int)lVar3 - 1;
    lVar3 = 0;
    if (uVar1 < 5) {
      lVar3 = (ulong)uVar1 + 1;
    }
    func_0x00010c19ca20(param_3,param_2,lVar3);
    _objc_release(lVar2);
    func_0x00010c1c9380(param_3,param_2,param_4);
    func_0x00010c1c93a0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1c94a0(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
    func_0x00010c1c9340(param_3,param_2,param_5);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x00010c137fe0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060bf614; end: 1060bf6c7; -[SCDualStreamCamModeLogger logMultiCamModeActivationWithIsActivatedFromLensCarousel:] */

void FUN_1060bf614(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5f120();
  uVar1 = (int)lVar3 - 1;
  lVar3 = 0;
  if (uVar1 < 5) {
    lVar3 = (ulong)uVar1 + 1;
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c7bd8;
  _objc_opt_new(PTR_PTR_1126c7bd8);
  func_0x00010c206c40();
  func_0x00010c1b9a20(puVar4,param_2,lVar3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1060bf6c8; end: 1060bf6cf; -[SCDualStreamCamModeLogger multiCamLayoutSelections] */

undefined8 FUN_1060bf6c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060bf6d0; end: 1060bf6d7; -[SCDualStreamCamModeLogger multiCamActivationSource] */

undefined8 FUN_1060bf6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060bf6d8; end: 1060bf6df; -[SCDualStreamCamModeLogger setMultiCamActivationSource:] */

void FUN_1060bf6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1060bf6e0; end: 1060bf6e7; -[SCDualStreamCamModeLogger multiCamActions] */

undefined8 FUN_1060bf6e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060bf6e8; end: 1060bf6ef; -[SCDualStreamCamModeLogger toolbarButtonTapCount] */

undefined8 FUN_1060bf6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1060bf6f0; end: 1060bf6f7; -[SCDualStreamCamModeLogger cccButtonTapCount] */

undefined8 FUN_1060bf6f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1060bf6f8; end: 1060bf75b; -[SCDualStreamCamModeLogger .cxx_destruct] */

void FUN_1060bf6f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060bf75c; end: 1060bfa93; -[SCDualStreamCamModeUI initWithContainerView:cameraToolbar:valdiRuntimeProvider:camModeConfig:cameraTooltipsService:isDirectorMode:isModeReadyToEnable:isCutoutLayoutDisabled:toolbarIndexFeature:delegate:] */

undefined8 *
FUN_1060bf75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  puStack_88 = PTR_PTR_1126ef8c8;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_5);
    puVar3 = auStack_80;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 10,puVar3);
    _objc_release(puVar3);
    _objc_storeWeak(puVar1 + 9,param_12);
    *(undefined1 *)(puVar1 + 0xc) = param_8;
    *(undefined1 *)((long)puVar1 + 0x61) = param_9;
    puVar1[0xd] = param_11;
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_98,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1060bfa94;
    puStack_a8 = &UNK_11090d0b0;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x1060bfad4;
    puStack_d0 = &UNK_11090d0e0;
    _objc_copyWeak(auStack_c8,auStack_98);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_f0,auStack_98);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    puVar6 = puVar1 + 10;
    _objc_loadWeakRetained(puVar6);
    func_0x00010be65cc0(puVar1);
    _objc_release(puVar6);
    if (*(char *)((long)puVar1 + 0x61) == '\x01') {
      func_0x00010c0e3da0(puVar1);
    }
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060bfa94; end: 1060bfb53;  */

void FUN_1060bfa94(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060bfb54; end: 1060bfb63; -[SCDualStreamCamModeUI onTapPrimaryButtonOfDualStreamCamMode:] */

void FUN_1060bfb54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setLayoutMenuWidgetVisibility__112586e80,0);
  return;
}



/* Entry: 1060bfb64; end: 1060bfbcf; -[SCDualStreamCamModeUI onTapSecondaryButtonOfDualStreamCamMode:] */

/* WARNING: Possible PIC construction at 0x0001060bfba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060bfbac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1060bfb64(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if ((int)param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010c06f880();
    if ((uVar1 & 1) != 0) {
      param_3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074c20();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setLayoutMenuWidgetVisibility__112586e80,param_3);
  return;
}



/* Entry: 1060bfbd0; end: 1060bfd2f; -[SCDualStreamCamModeUI onLayoutDMToolbarItemViewComplete:] */

/* WARNING: Possible PIC construction at 0x0001060bfc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001060bfd10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060bfc04) */
/* WARNING: Removing unreachable block (ram,0x0001060bfd14) */

void FUN_1060bfbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 1060bfd30; end: 1060bfd37; -[SCDualStreamCamModeUI onStartLoading] */

void FUN_1060bfd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onFeatureStartsLoading_112616aa0);
  return;
}



/* Entry: 1060bfd38; end: 1060bfd77; -[SCDualStreamCamModeUI onCompleteLoadingWithShouldShowWidget:] */

void FUN_1060bfd38(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c0e4200(*(undefined8 *)(param_1 + 8));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea5370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setLayoutMenuWidgetVisibility__112586e80,1);
    return;
  }
  return;
}



/* Entry: 1060bfd78; end: 1060bfdbb; -[SCDualStreamCamModeUI onDualStreamCamModeReadyToEnable] */

void FUN_1060bfd78(long param_1)

{
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010c125260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060bfdbc; end: 1060bfdeb; -[SCDualStreamCamModeUI onDualStreamCamModeDisabled] */

void FUN_1060bfdbc(long param_1,undefined8 param_2)

{
  func_0x00010bea5360(param_1,param_2,0);
  func_0x00010c0e41e0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010be357f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideHintAndBalloonTooltips_11256af98);
  return;
}



/* Entry: 1060bfdec; end: 1060bfdef; -[SCDualStreamCamModeUI onCameraModeLensInCarouselActivated] */

void FUN_1060bfdec(void)

{
  return;
}



/* Entry: 1060bfdf0; end: 1060bfe07; -[SCDualStreamCamModeUI getCameraToolBar] */

void FUN_1060bfdf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060bfe08; end: 1060bff87; -[SCDualStreamCamModeUI onChangeDualStreamCamModeLayout:shouldAnimate:] */

void FUN_1060bfe08(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c125260();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192240();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192240();
    _objc_release(uVar5);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3fb00();
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf5e7a0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (param_3 == (int)uVar3) {
    return;
  }
  puVar4 = PTR_PTR_1126c7be0;
  _objc_alloc(PTR_PTR_1126c7be0);
  func_0x00010c007080();
  lVar1 = param_1;
  func_0x00010bf56ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar4,param_2,lVar1);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1060bff88; end: 1060bffdf; -[SCDualStreamCamModeUI isPresentingLayoutWidget] */

uint FUN_1060bff88(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06f880();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 1060bffe0; end: 1060c0063; -[SCDualStreamCamModeUI hideLayoutSelectionToolbarItem:] */

void FUN_1060bffe0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c3c0();
  _objc_release(uVar1);
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060c0064; end: 1060c008b; -[SCDualStreamCamModeUI dismissWidgetAndTooltips] */

void FUN_1060c0064(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea5360(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be357f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideHintAndBalloonTooltips_11256af98);
  return;
}



/* Entry: 1060c008c; end: 1060c0093; -[SCDualStreamCamModeUI toolbarItem] */

void FUN_1060c008c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1060c0094; end: 1060c009b; -[SCDualStreamCamModeUI createDualStreamCamModeToolbarItem] */

undefined8 FUN_1060c0094(void)

{
  return 0;
}



/* Entry: 1060c009c; end: 1060c02c3; -[SCDualStreamCamModeUI _createPrimaryToolbarItem] */

void FUN_1060c009c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bf55f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c3c0(lVar4);
    _objc_release(uVar1);
    lVar2 = lVar4;
    func_0x00010bf7ca60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1060c02c4;
    puStack_78 = &UNK_11090ba70;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bf735a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bf2d680(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bdc8c60(param_1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    lVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1060c02c4; end: 1060c02ef;  */

void FUN_1060c02c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becd140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c02f0; end: 1060c0367;  */

void FUN_1060c02f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c273a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c07d660(uVar1);
  func_0x00010be2fc60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0368; end: 1060c03bb;  */

void FUN_1060c0368(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c273a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d660();
  func_0x00010c201100(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c03bc; end: 1060c04ff; -[SCDualStreamCamModeUI _createLayoutSelectionToolbarItem] */

void FUN_1060c03bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    puVar4 = PTR_PTR_1126c7be8;
    _objc_alloc(PTR_PTR_1126c7be8);
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf5f120();
    func_0x00010c037c00(puVar4);
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    puVar2 = puVar4;
    func_0x00010bf7ca60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar3 = puVar2;
    func_0x00010c25ff60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060c0500; end: 1060c056f;  */

void FUN_1060c0500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c273a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be496c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0570; end: 1060c0577; -[SCDualStreamCamModeUI createLayouts] */

undefined8 FUN_1060c0570(void)

{
  return 0;
}



/* Entry: 1060c0578; end: 1060c0583; -[SCDualStreamCamModeUI createLayoutTitle] */

undefined ** FUN_1060c0578(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1060c0584; end: 1060c0c17; -[SCDualStreamCamModeUI _createLayoutSelectionWidget] */

void FUN_1060c0584(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_b0;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = (undefined *)(param_1 + 0x50);
      _objc_loadWeakRetained();
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      param_3 = puVar3;
      func_0x00010c29cfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      _objc_release();
      if (puVar1 != (undefined *)0x0) goto LAB_1060c062c;
    }
    puStack_b0 = (undefined *)0x0;
  }
  else {
LAB_1060c062c:
    puVar2 = PTR_PTR_1126c7bf0;
    _objc_alloc();
    func_0x00010bff0120();
    lVar4 = param_1;
    func_0x00010bf56d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d720(puVar2);
    _objc_release(lVar4);
    puVar1 = PTR_PTR_1126c7be0;
    _objc_alloc();
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf5f120();
    func_0x00010c007080();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf56ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(lVar4);
    puStack_b0 = PTR_PTR_1126c7bf8;
    _objc_alloc();
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c219b60(puStack_b0);
    func_0x00010c1a7f60(puStack_b0);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar26 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar26);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar3);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x10));
    uVar26 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(uVar26);
    uVar26 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar26);
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      lVar4 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar4);
      uVar26 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c29cfe0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar26);
      _objc_release(lVar4);
      puVar3 = puStack_b0;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c274200(lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar7;
      _objc_release(uVar26);
      puVar7 = puStack_b0;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08e400(lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493c0(0xc034000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar8;
      _objc_release(uVar26);
      _objc_release(lVar6);
      _objc_release(puVar7);
      _objc_release(lVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar7);
      _objc_release(lVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puStack_b0;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49420(0x4064a00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar24;
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar26);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_b0);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_initWeak(auStack_178,puVar2);
  puVar1 = puVar2 + 0x50;
  _objc_loadWeakRetained(puVar1);
  puVar3 = puVar1;
  func_0x00010bf2b420();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1060c0ddc;
  puStack_188 = &UNK_110842a38;
  _objc_copyWeak(auStack_180,auStack_178);
  puVar7 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar2 = puVar2 + 0x50;
  _objc_loadWeakRetained(puVar2);
  puVar1 = puVar2;
  func_0x00010bf2b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a8,auStack_178);
  puVar3 = puVar1;
  func_0x00010c25ff60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c0c18; end: 1060c0ddb; -[SCDualStreamCamModeUI _observeCameraToolbar:] */

void FUN_1060c0c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2b420();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060c0ddc;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c0ddc; end: 1060c0e0b;  */

void FUN_1060c0ddc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0e0c; end: 1060c0e7b;  */

void FUN_1060c0e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c273a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be26d40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0e7c; end: 1060c0f07; -[SCDualStreamCamModeUI _addToolbarItemToToolbar:] */

void FUN_1060c0e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010befc4a0();
    _objc_release(lVar1);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c23a840();
    _objc_release(param_1);
    func_0x00010c1cbd00(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c0f08; end: 1060c0f3b; -[SCDualStreamCamModeUI _toolbarButtonTapped] */

void FUN_1060c0f08(long param_1)

{
  func_0x00010be357e0();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0f3c; end: 1060c0fa3; -[SCDualStreamCamModeUI _handleSelectedChangeEvent:] */

void FUN_1060c0f3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fade0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf735e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c0fa4; end: 1060c102f; -[SCDualStreamCamModeUI _layoutSelectionToolbarItemTapped:] */

void FUN_1060c0fa4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be357e0();
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bea5360(param_1,param_2,1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    func_0x00010bea5360(param_1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1060c1030; end: 1060c1263; -[SCDualStreamCamModeUI _setLayoutMenuWidgetVisibility:] */

void FUN_1060c1030(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06f880();
  if (param_3 != 0) {
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c074c20();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        return;
      }
    }
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfe12e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfe12e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    puVar4 = PTR_PTR_1126c7c00;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ada0(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar3);
    func_0x00010c178280(*(undefined8 *)(param_1 + 0x18),param_2,0);
    func_0x00010bef9040(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
LAB_1060c1204:
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x10),param_2,param_3 ^ 1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b45c0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b45c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  if (iVar1 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c074c20();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        func_0x00010c12e920(*(long *)(param_1 + 0x18),param_2,param_1,
                            PTR_s__tapToDismissWidget__11252ec28);
        func_0x00010c12c9c0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        _objc_release(uVar3);
      }
      puVar4 = PTR_PTR_1126c7c00;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe2da0(puVar4,param_2,uVar3);
      _objc_release(uVar3);
      goto LAB_1060c1204;
    }
  }
  return;
}



/* Entry: 1060c1264; end: 1060c136b; -[SCDualStreamCamModeUI _tapToDismissWidget:] */

void FUN_1060c1264(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      uVar2 = *(ulong *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      _objc_release(uVar2);
      lVar4 = param_3;
      func_0x00010c252440();
      if ((lVar4 == 3) && ((uVar3 & 1) == 0)) {
        func_0x00010bea5360(param_1,param_2,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c136c; end: 1060c13fb; -[SCDualStreamCamModeUI _handleCameraToolbarItemTapped:] */

void FUN_1060c136c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == lVar1) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (param_3 != lVar2) {
      func_0x00010bea5360(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c13fc; end: 1060c147b; -[SCDualStreamCamModeUI _hideHintAndBalloonTooltips] */

void FUN_1060c13fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf25540(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bfe2040(lVar3);
  func_0x00010bfe1a20(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1060c147c; end: 1060c1523; -[SCDualStreamCamModeUI onDualCameraModeSelectionDidChangeWithDualCameraMode:] */

void FUN_1060c147c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1060c1524;
  puStack_48 = &UNK_110868698;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_1);
  func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
  _objc_release(lVar1);
  _objc_release(lStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 1060c1524; end: 1060c1533;  */

void FUN_1060c1524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectDualStreamCamLayoutFrom_1125bc400,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1060c1534; end: 1060c153b; -[SCDualStreamCamModeUI shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1060c1534(void)

{
  return 0;
}



/* Entry: 1060c153c; end: 1060c1547; -[SCDualStreamCamModeUI pushToValdiMarshaller:] */

undefined8 FUN_1060c153c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8790;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x0001061a2444();
  return param_3;
}



/* Entry: 1060c1548; end: 1060c15e3; -[SCDualStreamCamModeUI .cxx_destruct] */

void FUN_1060c1548(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1060c15e4; end: 1060c165b;  */

void FUN_1060c15e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3d6d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3d6d8,
                      &PTR____CFConstantStringClassReference_110e3d6f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060c165c; end: 1060c173f; -[SCFeatureMediaQualityLogger initWithBlurryScoreConfig:blizzardLogger:cameraHardwareResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c165c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef8d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11273ed4c) = 0;
    lVar3 = (long)_DAT_11273ed50;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ed54;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010bed4240(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c1740; end: 1060c1833; -[SCFeatureMediaQualityLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c1740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ed58);
  *(undefined8 *)(param_1 + _DAT_11273ed58) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c1834; end: 1060c18df;  */

void FUN_1060c1834(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c18e0; end: 1060c197f;  */

void FUN_1060c18e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68c00();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c1980; end: 1060c1b7b; -[SCFeatureMediaQualityLogger _onDidCaptureImageWithStillImageData:discardRelatedData:configuration:currentCaptureState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c1980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ed54);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb6c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf311e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe0500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37fa0(uVar2,param_2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c07e220();
  _objc_release(puVar6);
  if ((int)puVar7 != 0) {
    uVar2 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010bf311e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_6;
    func_0x00010c0982a0(param_6);
    lVar9 = param_6;
    func_0x00010bf70d80(param_6);
    lVar10 = param_6;
    func_0x00010c0b5980(param_6);
    uVar4 = param_5;
    func_0x00010c0773c0(param_5);
    uVar5 = param_3;
    func_0x00010bfe0500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55b80(param_1,param_2,uVar2,uVar3,lVar8,lVar9 == 0,lVar10,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c1b7c; end: 1060c1c37; -[SCFeatureMediaQualityLogger _updateBlurryScoreSampleRateWithConfig:] */

void FUN_1060c1b7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bfa9e80(param_3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060c1c38; end: 1060c1c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c1c38(float param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (0.0 < param_1 && param_2 != 0) {
    *(float *)(param_2 + _DAT_11273ed4c) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1060c1c74; end: 1060c1e17; -[SCFeatureMediaQualityLogger _logMediaQualityInfoWithImage:captureSessionId:hasLens:isFrontFacing:lowLightCondition:isMainCamera:metadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c1c74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  if ((param_3 != 0) &&
     (lVar4 = param_1, func_0x00010beb57c0(*(undefined4 *)(param_1 + _DAT_11273ed4c)),
     (int)lVar4 != 0)) {
    lVar5 = (long)_DAT_11273ed5c;
    lVar4 = *(long *)(param_1 + lVar5);
    if (lVar4 == 0) {
      puVar1 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3655f1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520(puVar1,param_2,puVar2,9,0,2);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar3);
      _objc_release(puVar2);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1060c1e18;
    puStack_90 = &UNK_11090d180;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    uStack_68 = param_5;
    uStack_67 = param_6;
    uStack_66 = param_7;
    uStack_65 = param_8;
    _objc_retain(param_9);
    uStack_78 = param_9;
    lStack_70 = param_1;
    func_0x00010c0f7fc0(lVar4,param_2,&puStack_a8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c1e18; end: 1060c1fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c1e18(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  double dVar6;
  long lStack_58;
  
  _CACurrentMediaTime();
  dVar6 = param_1;
  func_0x00010bf27820(PTR_PTR_1126c7c08,param_3,*(undefined8 *)(param_2 + 0x20));
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126c7c10;
  _objc_alloc_init(PTR_PTR_1126c7c10);
  func_0x00010c172ba0();
  func_0x00010c172bc0(puVar1,param_3,(long)((dVar6 - param_1) * 1000.0));
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuVar3 = ppuVar5;
  if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x28);
  }
  func_0x00010c179280(puVar1,param_3,ppuVar3);
  func_0x00010c1a6220(puVar1,param_3,*(undefined1 *)(param_2 + 0x40));
  func_0x00010c1b15e0(puVar1,param_3,*(undefined1 *)(param_2 + 0x41));
  uVar4 = 1;
  if (*(char *)(param_2 + 0x42) != '\0') {
    uVar4 = 2;
  }
  func_0x00010c1c1040(puVar1,param_3,uVar4);
  uVar4 = 0x29;
  if (*(char *)(param_2 + 0x43) != '\0') {
    uVar4 = 1;
  }
  func_0x00010c207200(puVar1,param_3,uVar4);
  if (*(long *)(param_2 + 0x30) != 0) {
    lStack_58 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,
                        *(long *)(param_2 + 0x30),0,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_58 == 0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar5 = ppuVar3;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar3);
    }
    _objc_release(puVar2);
  }
  func_0x00010c1c73c0(puVar1,param_3,ppuVar5);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + (long)_DAT_11273ed50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(ppuVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 1060c1fcc; end: 1060c2017; -[SCFeatureMediaQualityLogger _shouldSampleWithRate:] */

bool FUN_1060c1fcc(float param_1)

{
  uint uVar1;
  
  if (0.0 < param_1) {
    uVar1 = 10000;
    _arc4random_uniform(10000);
    return uVar1 < (uint)(int)(param_1 * 10000.0);
  }
  return false;
}



/* Entry: 1060c2018; end: 1060c2077; -[SCFeatureMediaQualityLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c2018(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ed54,0);
  _objc_storeStrong(param_1 + _DAT_11273ed50,0);
  _objc_storeStrong(param_1 + _DAT_11273ed5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ed58,0);
  return;
}



/* Entry: 1060c2078; end: 1060c22c3; +[SCMediaQualityProfiler calculateBlurryScoreForImage:] */

undefined8 FUN_1060c2078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [48];
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [2];
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar6 = param_3;
  func_0x00010bfe8380(param_3);
  func_0x00010c23d0a0(param_3);
  func_0x00010b690f98(auStack_e0,uVar6);
  func_0x00010c271ac0(&uStack_b0,puVar5);
  uStack_140 = CONCAT44(iStack_ac,uStack_b0);
  uStack_100 = (ulong)&uStack_140 | 8;
  uStack_138 = uStack_a8;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  lStack_108 = lStack_78;
  uStack_110 = uStack_80;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_f8 = &uStack_f0;
  if (iStack_ac < 3) {
    uStack_f0 = *puStack_68;
    uStack_e8 = puStack_68[1];
    uVar6 = uStack_80;
  }
  else {
    uStack_140 = (ulong)uStack_b0;
    func_0x000109a84868(&uStack_140,&uStack_b0);
    uVar6 = uStack_80;
  }
  func_0x00010bdd84a0(param_1);
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < iStack_ac) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_70 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_ac);
  }
  if (puStack_68 != auStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1060c22c4; end: 1060c34c7; +[SCMediaQualityProfiler calculateBlurryScoreForSampleBuffer:] */

ulong FUN_1060c22c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  ulong uStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  int iStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  long lStack_4c8;
  ulong uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 auStack_4a0 [2];
  undefined8 *puStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  undefined4 uStack_470;
  undefined8 uStack_46c;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long lStack_438;
  long lStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  long lStack_3d8;
  long lStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  int iStack_3a8;
  int iStack_3a4;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long lStack_378;
  int *piStack_370;
  long *plStack_368;
  long alStack_360 [2];
  undefined8 uStack_350;
  uint uStack_348;
  int iStack_344;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  ulong uStack_310;
  long *plStack_308;
  long alStack_300 [3];
  long *plStack_2e8;
  uint *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long alStack_180 [2];
  long *aplStack_170 [2];
  long alStack_160 [2];
  uint uStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_108;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CMSampleBufferGetImageBuffer();
  if (param_3 == 0) {
    uStack_530 = 0;
    uStack_500 = 0x42ff0000;
    uStack_4c0 = (ulong)&uStack_500 | 8;
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_4d4 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0;
    puStack_4b8 = &uStack_4b0;
    uStack_558 = 0;
    uVar17 = 0x42ff0000;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    iStack_4fc = 0;
    uStack_4f8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4ec = 0;
    uStack_4e8 = 0;
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
  }
  else {
    _CVPixelBufferRetain();
    _CVPixelBufferLockBaseAddress(param_3,1);
    lVar10 = param_3;
    _CVPixelBufferGetPixelFormatType();
    lVar7 = param_3;
    _CVPixelBufferGetWidth();
    lVar6 = param_3;
    _CVPixelBufferGetHeight();
    uVar13 = (uint)lVar6;
    iVar15 = (int)lVar7;
    if ((uint)lVar10 == 0x52474241) {
      lVar10 = param_3;
      _CVPixelBufferGetBaseAddress();
      lVar6 = param_3;
      _CVPixelBufferGetBytesPerRow();
      auStack_1b0 = (undefined1  [8])0x242ff0018;
      aplStack_170[0] = (long *)auStack_1a8;
      auStack_1a8 = (undefined1  [8])CONCAT44(iVar15,uVar13);
      auStack_188 = (undefined1  [8])0x0;
      auStack_190 = (undefined1  [8])0x0;
      alStack_180[1] = 0;
      alStack_180[0] = 0;
      alStack_160[1] = 0;
      alStack_160[0] = 0;
      auStack_1a0 = (undefined1  [8])lVar10;
      auStack_198 = (undefined1  [8])lVar10;
      aplStack_170[1] = alStack_160;
      if (((long)(int)uVar13 * (long)iVar15 != 0) && (lVar10 == 0)) {
        puVar8 = (undefined4 *)0x24;
        func_0x0001000437c8();
        *puVar8 = 1;
        uStack_2d0 = (long *)(puVar8 + 1);
        uStack_2c8._0_4_ = 0x1c;
        uStack_2c8._4_4_ = 0;
        *(undefined1 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
        func_0x000109ac3188(0xffffff29,&uStack_2d0,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
        goto LAB_1060c31f0;
      }
      lVar9 = (lVar7 << 0x20) >> 0x1e;
      lVar7 = lVar9;
      if (uVar13 != 1) {
        lVar7 = (long)(int)lVar6;
      }
      alStack_160[0] = lVar9;
      if (lVar6 << 0x20 != 0) {
        alStack_160[0] = lVar7;
      }
      auStack_1b0._0_4_ = 0x42ff4018;
      if (lVar7 != lVar9 && lVar6 << 0x20 != 0) {
        auStack_1b0._0_4_ = 0x42ff0018;
      }
      auStack_1b0._4_4_ = 2;
      alStack_160[1] = 4;
      auStack_188 = (undefined1  [8])(lVar10 + alStack_160[0] * (int)uVar13);
      auStack_190 = (undefined1  [8])(((long)auStack_188 - alStack_160[0]) + lVar9);
      uStack_500 = 0x42ff0000;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      iStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      uStack_4d4 = 0;
      uStack_4dc = 0;
      uStack_4d8 = 0;
      lStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      uStack_2c8 = &uStack_500;
      uStack_4c0 = (ulong)uStack_2c8 | 8;
      puStack_4b8 = &uStack_4b0;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_2d0._0_4_ = 0x2010000;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      func_0x000109a479a0(auStack_1b0,&uStack_2d0);
      if (alStack_180[1] != 0) {
        piVar1 = (int *)(alStack_180[1] + 0x14);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          func_0x000109a848d4(auStack_1b0);
        }
      }
      alStack_180[1] = 0;
      auStack_198 = (undefined1  [8])0x0;
      auStack_1a0 = (undefined1  [8])0x0;
      auStack_188 = (undefined1  [8])0x0;
      auStack_190 = (undefined1  [8])0x0;
      if (0 < (int)auStack_1b0._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)((long)aplStack_170[0] + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)auStack_1b0._4_4_);
      }
      bVar5 = aplStack_170[1] == alStack_160;
      plVar12 = aplStack_170[1];
LAB_1060c2ec8:
      if (!bVar5 && plVar12 != (long *)0x0) {
        _free(plVar12[-1]);
      }
    }
    else {
      if (((uint)lVar10 & 0xffffffef) == 0x34323066) {
        lVar10 = param_3;
        _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
        lVar7 = param_3;
        _CVPixelBufferGetBytesPerRowOfPlane(param_3,0);
        uStack_350 = 0x242ff0000;
        uStack_310 = (ulong)&uStack_350 | 8;
        lStack_328 = 0;
        lStack_330 = 0;
        lStack_318 = 0;
        uStack_320 = 0;
        alStack_300[1] = 0;
        alStack_300[0] = 0;
        uStack_348 = uVar13;
        iStack_344 = iVar15;
        lStack_340 = lVar10;
        lStack_338 = lVar10;
        plStack_308 = alStack_300;
        if (((long)(int)uVar13 * (long)iVar15 != 0) && (lVar10 == 0)) {
          puVar8 = (undefined4 *)0x24;
          func_0x0001000437c8();
          *puVar8 = 1;
          auStack_1b0 = (undefined1  [8])(puVar8 + 1);
          auStack_1a8 = (undefined1  [8])0x1c;
          *(undefined1 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,auStack_1b0,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
          goto LAB_1060c31f0;
        }
        lStack_330 = (long)iVar15;
        uVar2 = 0x42ff4000;
        lVar6 = lStack_330;
        if (uVar13 != 1) {
          lVar6 = (long)(int)lVar7;
        }
        alStack_300[0] = lStack_330;
        if (lVar7 << 0x20 != 0) {
          alStack_300[0] = lVar6;
        }
        if (lVar6 != lStack_330 && lVar7 << 0x20 != 0) {
          uVar2 = 0x42ff0000;
        }
        uStack_350 = CONCAT44(2,uVar2);
        alStack_300[1] = 1;
        lStack_328 = lVar10 + alStack_300[0] * (int)uVar13;
        lStack_330 = (lStack_328 - alStack_300[0]) + lStack_330;
        lVar10 = param_3;
        _CVPixelBufferGetBaseAddressOfPlane(param_3,1);
        lVar7 = param_3;
        _CVPixelBufferGetBytesPerRowOfPlane(param_3,1);
        iStack_3a8 = (int)uVar13 / 2;
        uStack_3b0 = 0x242ff0008;
        iStack_3a4 = iVar15 / 2;
        piStack_370 = &iStack_3a8;
        lStack_388 = 0;
        lStack_390 = 0;
        lStack_378 = 0;
        uStack_380 = 0;
        alStack_360[1] = 0;
        alStack_360[0] = 0;
        lStack_3a0 = lVar10;
        lStack_398 = lVar10;
        plStack_368 = alStack_360;
        if (((long)iStack_3a8 * (long)iStack_3a4 != 0) && (lVar10 == 0)) {
          puVar8 = (undefined4 *)0x24;
          func_0x0001000437c8();
          *puVar8 = 1;
          auStack_1b0 = (undefined1  [8])(puVar8 + 1);
          auStack_1a8 = (undefined1  [8])0x1c;
          *(undefined1 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
          *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
          *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
          *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
          func_0x000109ac3188(0xffffff29,auStack_1b0,&UNK_10f2e8162,&UNK_10f2e8166,0x19a);
          goto LAB_1060c31f0;
        }
        lVar9 = (long)((ulong)(uint)(iVar15 - (iVar15 >> 0x1f)) << 0x20) >> 0x21;
        lVar6 = lVar9 << 1;
        if ((uVar13 & 0xfffffffe) != 2) {
          lVar6 = lVar7;
        }
        alStack_360[0] = lVar9 << 1;
        if (lVar7 != 0) {
          alStack_360[0] = lVar6;
        }
        uVar2 = 0x42ff4008;
        if (lVar6 != lVar9 * 2 && lVar7 != 0) {
          uVar2 = 0x42ff0008;
        }
        uStack_3b0 = CONCAT44(2,uVar2);
        alStack_360[1] = 2;
        lStack_388 = lVar10 + alStack_360[0] *
                              ((long)((ulong)(uVar13 - ((int)uVar13 >> 0x1f)) << 0x20) >> 0x21);
        lStack_390 = (lStack_388 - alStack_360[0]) + lVar9 * 2;
        uStack_410 = 0x42ff0000;
        uStack_404 = 0;
        uStack_400 = 0;
        uStack_40c = 0;
        uStack_3f4 = 0;
        uStack_3f0 = 0;
        uStack_3fc = 0;
        uStack_3f8 = 0;
        uStack_3e4 = 0;
        uStack_3ec = 0;
        uStack_3e8 = 0;
        lStack_3d8 = 0;
        uStack_3e0 = 0;
        uStack_3dc = 0;
        lStack_3d0 = (long)&uStack_40c + 4;
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        auStack_1b0 = (undefined1  [8])CONCAT44(iVar15,uVar13);
        puStack_3c8 = &uStack_3c0;
        func_0x000109a83fd0(&uStack_410,2,auStack_1b0,0x10);
        lVar10 = 0;
        do {
          *(undefined4 *)(auStack_1b0 + lVar10) = 0x42ff0000;
          *(undefined8 *)(auStack_1a8 + lVar10 + 4) = 0;
          *(undefined8 *)(auStack_1b0 + lVar10 + 4) = 0;
          *(undefined8 *)(auStack_198 + lVar10 + 4) = 0;
          *(undefined8 *)(auStack_1a0 + lVar10 + 4) = 0;
          *(undefined8 *)(auStack_188 + lVar10 + 4) = 0;
          *(undefined8 *)(auStack_190 + lVar10 + 4) = 0;
          *(undefined8 *)((long)alStack_160 + lVar10) = 0;
          *(undefined8 *)((long)alStack_180 + lVar10 + 8) = 0;
          *(undefined8 *)((long)alStack_180 + lVar10) = 0;
          *(undefined1 **)((long)aplStack_170 + lVar10) = auStack_1a8 + lVar10;
          *(undefined8 **)((long)aplStack_170 + lVar10 + 8) =
               (undefined8 *)((long)alStack_160 + lVar10);
          lVar7 = lVar10 + 0x60;
          *(undefined8 *)((long)alStack_160 + lVar10 + 8) = 0;
          lVar10 = lVar7;
        } while (lVar7 != 0x120);
        uStack_470 = 0x42ff0000;
        uStack_464 = 0;
        uStack_460 = 0;
        uStack_46c = 0;
        lStack_430 = (long)&uStack_46c + 4;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_45c = 0;
        uStack_458 = 0;
        uStack_444 = 0;
        uStack_44c = 0;
        uStack_448 = 0;
        lStack_438 = 0;
        uStack_440 = 0;
        uStack_43c = 0;
        uStack_420 = 0;
        uStack_418 = 0;
        puStack_428 = &uStack_420;
        func_0x000109a3d9cc(&uStack_3b0,auStack_1b0);
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2d0._0_4_ = 0x1010000;
        plStack_2e8._0_4_ = 0x2010000;
        uStack_2d8 = 0;
        lStack_488 = CONCAT44(uVar13,iVar15);
        puStack_2e0 = (uint *)auStack_1b0;
        uStack_2c8 = (uint *)auStack_1b0;
        func_0x000109b0f718(0,0,&uStack_2d0,&plStack_2e8,&lStack_488,1);
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2d0._0_4_ = 0x1010000;
        plStack_2e8 = (long *)CONCAT44(plStack_2e8._4_4_,0x2010000);
        uStack_2d8 = 0;
        lStack_488 = CONCAT44(uVar13,iVar15);
        puStack_2e0 = &uStack_150;
        uStack_2c8 = &uStack_150;
        func_0x000109b0f718(0,0,&uStack_2d0,&plStack_2e8,&lStack_488,1);
        puStack_290 = (undefined8 *)((ulong)&uStack_2d0 | 8);
        uStack_2c8._0_4_ = uStack_348;
        uStack_2c8._4_4_ = iStack_344;
        uStack_2d0._0_4_ = (undefined4)uStack_350;
        uStack_2b8 = (undefined4)lStack_338;
        uStack_2b4 = (undefined4)((ulong)lStack_338 >> 0x20);
        uStack_2c0 = (undefined4)lStack_340;
        uStack_2bc = (undefined4)((ulong)lStack_340 >> 0x20);
        uStack_2a8 = (undefined4)lStack_328;
        uStack_2a4 = (undefined4)((ulong)lStack_328 >> 0x20);
        uStack_2b0 = (undefined4)lStack_330;
        uStack_2ac = (undefined4)((ulong)lStack_330 >> 0x20);
        lStack_298 = lStack_318;
        uStack_2a0 = (undefined4)uStack_320;
        uStack_29c = (undefined4)((ulong)uStack_320 >> 0x20);
        plStack_288 = &lStack_280;
        lStack_278 = 0;
        lStack_280 = 0;
        if (lStack_318 != 0) {
          piVar1 = (int *)(lStack_318 + 0x14);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (uStack_350._4_4_ < 3) {
          lStack_280 = *plStack_308;
          lStack_278 = plStack_308[1];
          uStack_2d0._4_4_ = uStack_350._4_4_;
        }
        else {
          uStack_2d0._4_4_ = 0;
          func_0x000109a84868(&uStack_2d0,&uStack_350);
        }
        puStack_230 = &uStack_268;
        uStack_268 = auStack_1a8;
        puStack_270 = (undefined4 *)auStack_1b0;
        lStack_258 = (long)auStack_198;
        lStack_260 = (long)auStack_1a0;
        uStack_248 = auStack_188;
        uStack_250 = auStack_190;
        lStack_238 = alStack_180[1];
        lStack_240 = alStack_180[0];
        plStack_228 = &lStack_220;
        lStack_218 = 0;
        lStack_220 = 0;
        if (alStack_180[1] != 0) {
          piVar1 = (int *)(alStack_180[1] + 0x14);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if ((int)auStack_1b0._4_4_ < 3) {
          lStack_220 = *aplStack_170[1];
          lStack_218 = aplStack_170[1][1];
        }
        else {
          puStack_270 = (undefined4 *)((ulong)auStack_1b0 & 0xffffffff);
          func_0x000109a84868(&puStack_270,auStack_1b0);
        }
        uStack_210 = CONCAT44(iStack_14c,uStack_150);
        puStack_1d0 = &uStack_208;
        uStack_208 = uStack_148;
        uStack_1f8 = uStack_138;
        uStack_200 = uStack_140;
        uStack_1e8 = uStack_128;
        uStack_1f0 = uStack_130;
        lStack_1d8 = lStack_118;
        uStack_1e0 = uStack_120;
        puStack_1c8 = &uStack_1c0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        if (lStack_118 != 0) {
          piVar1 = (int *)(lStack_118 + 0x14);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iStack_14c < 3) {
          uStack_1c0 = *puStack_108;
          uStack_1b8 = puStack_108[1];
        }
        else {
          uStack_210 = (ulong)uStack_150;
          func_0x000109a84868(&uStack_210,&uStack_150);
        }
        lStack_488 = 0;
        lStack_480 = 0;
        lStack_478 = 0;
        plStack_2e8 = &lStack_488;
        puStack_2e0 = (uint *)((ulong)puStack_2e0 & 0xffffffffffffff00);
        lVar7 = 0x120;
        __Znwm();
        lVar10 = 0;
        lStack_478 = lVar7 + 0x120;
        lStack_488 = lVar7;
        lStack_480 = lVar7;
        do {
          func_0x0001060c3960(lVar7 + lVar10,(long)&uStack_2d0 + lVar10);
          lVar10 = lVar10 + 0x60;
        } while (lVar10 != 0x120);
        lStack_480 = lVar7 + 0x120;
        puVar14 = (undefined8 *)auStack_1b0;
        do {
          puVar16 = puVar14 + -0xc;
          if (puVar14[-5] != 0) {
            piVar1 = (int *)(puVar14[-5] + 0x14);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              func_0x000109a848d4(puVar16);
            }
          }
          puVar14[-5] = 0;
          puVar14[-9] = 0;
          puVar14[-10] = 0;
          puVar14[-7] = 0;
          puVar14[-8] = 0;
          if (0 < *(int *)((long)puVar14 + -0x5c)) {
            lVar10 = 0;
            lVar7 = puVar14[-4];
            do {
              *(undefined4 *)(lVar7 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)((long)puVar14 + -0x5c));
          }
          puVar11 = (undefined8 *)puVar14[-3];
          if (puVar11 != puVar14 + -2 && puVar11 != (undefined8 *)0x0) {
            _free(puVar11[-1]);
          }
          puVar14 = puVar16;
        } while (puVar16 != &uStack_2d0);
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2d0._0_4_ = 0x1050000;
        uStack_2c8 = (uint *)&lStack_488;
        plStack_2e8._0_4_ = 0x2010000;
        uStack_2d8 = 0;
        puStack_2e0 = &uStack_470;
        func_0x000109a3ecac(&uStack_2d0,&plStack_2e8);
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2d0._0_4_ = 0x1010000;
        plStack_2e8._0_4_ = 0x2010000;
        uStack_2d8 = 0;
        puStack_2e0 = &uStack_410;
        uStack_2c8 = &uStack_470;
        func_0x000109ac9fc8(&uStack_2d0,&plStack_2e8,0x55,0);
        uStack_2d0._0_4_ = 0x42ff0000;
        puStack_290 = &uStack_2c8;
        uStack_2c8._4_4_ = 0;
        uStack_2c0 = 0;
        uStack_2d0._4_4_ = 0;
        uStack_2c8._0_4_ = 0;
        uStack_2b4 = 0;
        uStack_2b0 = 0;
        uStack_2bc = 0;
        uStack_2b8 = 0;
        uStack_2a4 = 0;
        uStack_2ac = 0;
        uStack_2a8 = 0;
        lStack_298 = 0;
        uStack_2a0 = 0;
        uStack_29c = 0;
        lStack_278 = 0;
        lStack_280 = 0;
        uStack_2d8 = 0;
        plStack_2e8._0_4_ = 0x1010000;
        auStack_4a0[0] = 0x2010000;
        uStack_490 = 0;
        puStack_498 = &uStack_2d0;
        puStack_2e0 = &uStack_410;
        plStack_288 = &lStack_280;
        func_0x000109ac9fc8(&plStack_2e8,auStack_4a0,0,0);
        uStack_500 = 0x42ff0000;
        puStack_2e0 = &uStack_500;
        uStack_4c0 = (ulong)puStack_2e0 | 8;
        uStack_4f4 = 0;
        uStack_4f0 = 0;
        iStack_4fc = 0;
        uStack_4f8 = 0;
        uStack_4e4 = 0;
        uStack_4e0 = 0;
        uStack_4ec = 0;
        uStack_4e8 = 0;
        uStack_4d4 = 0;
        uStack_4dc = 0;
        uStack_4d8 = 0;
        lStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4cc = 0;
        puStack_4b8 = &uStack_4b0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        plStack_2e8 = (long *)CONCAT44(plStack_2e8._4_4_,0x2010000);
        uStack_2d8 = 0;
        func_0x000109a479a0(&uStack_2d0,&plStack_2e8);
        if (lStack_298 != 0) {
          piVar1 = (int *)(lStack_298 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_2d0);
          }
        }
        lStack_298 = 0;
        uStack_2b8 = 0;
        uStack_2b4 = 0;
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        if (0 < uStack_2d0._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)((long)puStack_290 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_2d0._4_4_);
        }
        if (plStack_288 != &lStack_280 && plStack_288 != (long *)0x0) {
          _free(plStack_288[-1]);
        }
        uStack_2d0 = &lStack_488;
        FUN_1060c3a9c(&uStack_2d0);
        plVar12 = uStack_2d0;
        if (lStack_438 != 0) {
          piVar1 = (int *)(lStack_438 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_470);
            plVar12 = uStack_2d0;
          }
        }
        lStack_438 = 0;
        uStack_458 = 0;
        uStack_454 = 0;
        uStack_460 = 0;
        uStack_45c = 0;
        uStack_448 = 0;
        uStack_444 = 0;
        uStack_450 = 0;
        uStack_44c = 0;
        if (0 < (int)uStack_46c) {
          lVar10 = 0;
          do {
            *(undefined4 *)(lStack_430 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)uStack_46c);
        }
        uStack_2d0 = plVar12;
        if (puStack_428 != &uStack_420 && puStack_428 != (undefined8 *)0x0) {
          _free(puStack_428[-1]);
        }
        puVar14 = &uStack_90;
        do {
          puVar16 = puVar14 + -0xc;
          if (puVar14[-5] != 0) {
            piVar1 = (int *)(puVar14[-5] + 0x14);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              func_0x000109a848d4(puVar16);
            }
          }
          puVar14[-5] = 0;
          puVar14[-9] = 0;
          puVar14[-10] = 0;
          puVar14[-7] = 0;
          puVar14[-8] = 0;
          if (0 < *(int *)((long)puVar14 + -0x5c)) {
            lVar10 = 0;
            lVar7 = puVar14[-4];
            do {
              *(undefined4 *)(lVar7 + lVar10 * 4) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)((long)puVar14 + -0x5c));
          }
          puVar11 = (undefined8 *)puVar14[-3];
          if (puVar11 != puVar14 + -2 && puVar11 != (undefined8 *)0x0) {
            _free(puVar11[-1]);
          }
          puVar14 = puVar16;
        } while (puVar16 != (undefined8 *)auStack_1b0);
        if (lStack_3d8 != 0) {
          piVar1 = (int *)(lStack_3d8 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_410);
          }
        }
        lStack_3d8 = 0;
        uStack_3f8 = 0;
        uStack_3f4 = 0;
        uStack_400 = 0;
        uStack_3fc = 0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0;
        if (0 < (int)uStack_40c) {
          lVar10 = 0;
          do {
            *(undefined4 *)(lStack_3d0 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)uStack_40c);
        }
        if (puStack_3c8 != &uStack_3c0 && puStack_3c8 != (undefined8 *)0x0) {
          _free(puStack_3c8[-1]);
        }
        if (lStack_378 != 0) {
          piVar1 = (int *)(lStack_378 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_3b0);
          }
        }
        lStack_378 = 0;
        lStack_398 = 0;
        lStack_3a0 = 0;
        lStack_388 = 0;
        lStack_390 = 0;
        if (0 < uStack_3b0._4_4_) {
          lVar10 = 0;
          do {
            piStack_370[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_3b0._4_4_);
        }
        if (plStack_368 != alStack_360 && plStack_368 != (long *)0x0) {
          _free(plStack_368[-1]);
        }
        if (lStack_318 != 0) {
          piVar1 = (int *)(lStack_318 + 0x14);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            func_0x000109a848d4(&uStack_350);
          }
        }
        lStack_318 = 0;
        lStack_338 = 0;
        lStack_340 = 0;
        lStack_328 = 0;
        lStack_330 = 0;
        if (0 < uStack_350._4_4_) {
          lVar10 = 0;
          do {
            *(undefined4 *)(uStack_310 + lVar10 * 4) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < uStack_350._4_4_);
        }
        bVar5 = plStack_308 == alStack_300;
        plVar12 = plStack_308;
        goto LAB_1060c2ec8;
      }
      uStack_500 = 0x42ff0000;
      uStack_4d4 = 0;
      uStack_4dc = 0;
      uStack_4d8 = 0;
      uStack_4c0 = (ulong)&uStack_500 | 8;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      iStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      lStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      puStack_4b8 = &uStack_4b0;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
    }
    _CVPixelBufferUnlockBaseAddress(param_3,1);
    _CVPixelBufferRelease(param_3);
    uStack_558 = CONCAT44(uStack_4f4,uStack_4f8);
    uVar17 = CONCAT44(iStack_4fc,uStack_500);
    uStack_548 = CONCAT44(uStack_4e4,uStack_4e8);
    uStack_550 = CONCAT44(uStack_4ec,uStack_4f0);
    uStack_538 = CONCAT44(uStack_4d4,uStack_4d8);
    uStack_540 = CONCAT44(uStack_4dc,uStack_4e0);
    uStack_530 = CONCAT44(uStack_4cc,uStack_4d0);
  }
  uStack_520 = (ulong)&uStack_560 | 8;
  uStack_510 = 0;
  uStack_508 = 0;
  if (lStack_4c8 == 0) {
    iVar15 = (int)(uVar17 >> 0x20);
  }
  else {
    piVar1 = (int *)(lStack_4c8 + 0x14);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      iVar15 = iStack_4fc;
    } while (cVar3 != '\0');
  }
  lStack_528 = lStack_4c8;
  puStack_518 = &uStack_510;
  if (iVar15 < 3) {
    uStack_510 = *puStack_4b8;
    uStack_508 = puStack_4b8[1];
    uStack_560 = uVar17;
  }
  else {
    uStack_560 = uVar17 & 0xffffffff;
    func_0x000109a84868(&uStack_560,&uStack_500);
  }
  func_0x00010bdd84a0(param_1);
  if (lStack_528 != 0) {
    piVar1 = (int *)(lStack_528 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_560);
    }
  }
  lStack_528 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  if (0 < uStack_560._4_4_) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_520 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_560._4_4_);
  }
  if (puStack_518 != &uStack_510 && puStack_518 != (undefined8 *)0x0) {
    _free(puStack_518[-1]);
  }
  if (lStack_4c8 != 0) {
    piVar1 = (int *)(lStack_4c8 + 0x14);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      func_0x000109a848d4(&uStack_500);
    }
  }
  lStack_4c8 = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  uStack_4d8 = 0;
  uStack_4d4 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  if (0 < iStack_4fc) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_4c0 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iStack_4fc);
  }
  if (puStack_4b8 != &uStack_4b0 && puStack_4b8 != (undefined8 *)0x0) {
    _free(puStack_4b8[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar17;
  }
  ___stack_chk_fail();
  _objc_exception_rethrow();
LAB_1060c31f0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1060c31f4);
  (*pcVar4)();
}



/* Entry: 1060c34c8; end: 1060c3907; +[SCMediaQualityProfiler _calculateBlurryScoreForMat:] */

/* WARNING: Removing unreachable block (ram,0x0001060c38c0) */

float FUN_1060c34c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  float fVar10;
  undefined4 auStack_1a8 [2];
  double *pdStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [2];
  undefined8 *puStack_188;
  undefined8 uStack_180;
  int iStack_178;
  int iStack_174;
  undefined4 *puStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_c0 = 0x42ff0000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  lStack_80 = (long)&uStack_bc + 4;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_120 = 0x42ff0000;
  lStack_e0 = (long)&uStack_11c + 4;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f4 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  fVar10 = 0.0;
  iVar2 = *(int *)(param_3 + 8);
  puStack_d8 = &uStack_d0;
  puStack_78 = &uStack_70;
  if ((iVar2 != 0) && (iVar3 = *(int *)(param_3 + 0xc), iVar3 != 0)) {
    if (0x24b80 < iVar3 * iVar2) {
      dVar9 = SQRT(((double)iVar3 / (double)iVar2) * 150000.0);
      uStack_130 = 0;
      uStack_140 = CONCAT44(uStack_140._4_4_,0x1010000);
      dStack_160 = (double)CONCAT44(dStack_160._4_4_,0x2010000);
      uStack_150 = 0;
      iStack_178 = (int)dVar9;
      iStack_174 = (int)(dVar9 / ((double)iVar3 / (double)iVar2));
      puStack_158 = (undefined4 *)param_3;
      puStack_138 = (undefined4 *)param_3;
      func_0x000109b0f718(0,0,&uStack_140,&dStack_160,&iStack_178,1);
    }
    uStack_130 = 0;
    uStack_140._0_4_ = 0x1010000;
    dStack_160._0_4_ = 0x2010000;
    uStack_150 = 0;
    puStack_158 = &uStack_c0;
    puStack_138 = (undefined4 *)param_3;
    func_0x000109ac9fc8(&uStack_140,&dStack_160,0xb,0);
    uStack_130 = 0;
    uStack_140 = CONCAT44(uStack_140._4_4_,0x1010000);
    dStack_160 = (double)CONCAT44(dStack_160._4_4_,0x2010000);
    uStack_150 = 0;
    puVar6 = &uStack_140;
    puStack_158 = &uStack_120;
    puStack_138 = &uStack_c0;
    func_0x000109aec990(0x3ff0000000000000,0,puVar6,&dStack_160,0,3,4);
    puStack_138 = (undefined4 *)0x0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    puStack_158 = (undefined4 *)0x0;
    dStack_160 = 0.0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    iStack_178 = 0x1010000;
    auStack_190[0] = 0xc2020006;
    uStack_180 = 0x400000001;
    auStack_1a8[0] = 0xc2020006;
    uStack_198 = 0x400000001;
    pdStack_1a0 = &dStack_160;
    puStack_188 = &uStack_140;
    puStack_170 = &uStack_120;
    func_0x000109a91d90();
    func_0x000109ab8374(&iStack_178,auStack_190,auStack_1a8,puVar6);
    fVar10 = (float)(dStack_160 * dStack_160);
  }
  if (*(long *)(param_3 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_3);
    }
  }
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (0 < *(int *)(param_3 + 4)) {
    lVar7 = 0;
    lVar8 = *(long *)(param_3 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_3 + 4));
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_bc);
  }
  if (lStack_e8 != 0) {
    piVar1 = (int *)(lStack_e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_120);
    }
  }
  if (0 < (int)uStack_11c) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_e0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_11c);
    if (0 < (int)uStack_11c) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lStack_e0 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_11c);
    }
  }
  lStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
    _free(puStack_d8[-1]);
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return fVar10;
}



/* Entry: 1060c3908; end: 1060c391b;  */

undefined1  [16] FUN_1060c3908(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    lVar5 = (long)param_2 * 0x60;
    __Znwm(lVar5);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar5;
    return auVar11;
  }
  func_0x000104bd35f4();
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  puVar4[1] = param_2[1];
  *puVar4 = uVar8;
  puVar4[3] = uVar10;
  puVar4[2] = uVar9;
  uVar8 = param_2[4];
  puVar4[5] = param_2[5];
  puVar4[4] = uVar8;
  lVar5 = param_2[7];
  uVar8 = param_2[6];
  puVar4[7] = param_2[7];
  puVar4[6] = uVar8;
  puVar4[10] = 0;
  puVar4[8] = puVar4 + 1;
  puVar4[9] = puVar4 + 10;
  puVar4[0xb] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar6 = (undefined8 *)param_2[9];
    puVar7 = (undefined8 *)puVar4[9];
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)puVar4 + 4) = 0;
    func_0x000109a84868(puVar4);
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 1060c391c; end: 1060c39fb;  */

undefined1  [16] FUN_1060c391c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
    lVar4 = (long)param_2 * 0x60;
    __Znwm(lVar4);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar4;
    return auVar10;
  }
  func_0x000104bd35f4();
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 1060c39fc; end: 1060c3a9b;  */

void FUN_1060c39fc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 1060c3a9c; end: 1060c3b0b;  */

void FUN_1060c3a9c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar4 != lVar2) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_1060c39fc(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1060c3b0c; end: 1060c3b1b; -[SCFeatureToggleCameraVideoStabilizationButton enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060c3b0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273ed60);
}



/* Entry: 1060c3b1c; end: 1060c3b1f; -[SCFeatureToggleCameraVideoStabilizationButton resetMetrics] */

void FUN_1060c3b1c(void)

{
  return;
}



/* Entry: 1060c3b20; end: 1060c3b27; -[SCFeatureToggleCameraVideoStabilizationButton usageMetrics] */

undefined8 FUN_1060c3b20(void)

{
  return 0;
}



/* Entry: 1060c3b28; end: 1060c3b2f; -[SCFeatureToggleCameraVideoStabilizationButton cameraModeType] */

undefined8 FUN_1060c3b28(void)

{
  return 0x13;
}



/* Entry: 1060c3b30; end: 1060c3b3f; -[SCFeatureToggleCameraVideoStabilizationButton isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060c3b30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273ed60);
}



/* Entry: 1060c3b40; end: 1060c3c6b; -[SCFeatureToggleCameraVideoStabilizationButton _setStabilizationModeOn:userInitiated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c3b40(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + _DAT_11273ed9c);
  if (((lVar2 == 0) || (lVar5 = (long)_DAT_11273eda0, *(long *)(param_1 + lVar5) == 0)) ||
     (func_0x00010bf1f3c0(), (int)param_3 != (int)lVar2)) {
    *(char *)(param_1 + _DAT_11273ed60) = (char)param_3;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_11273ed60) = (char)param_3;
    if ((int)param_3 == iVar1) goto LAB_1060c3bd0;
  }
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273ed78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236340();
    _objc_release(uVar3);
  }
  func_0x00010bea4460(param_1,param_2,param_3);
LAB_1060c3bd0:
  if (param_4 == 0) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273ed90);
  *(undefined **)(param_1 + _DAT_11273ed90) = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273eda4);
  *(undefined **)(param_1 + _DAT_11273eda4) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1060c3c6c; end: 1060c3c83; -[SCFeatureToggleCameraVideoStabilizationButton _isSelectedStateChangedWhenGoingFromStabilizationOn:toStabilizationOn:] */

uint FUN_1060c3c6c(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 ^ 1;
  if (param_4 == 0) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_4 != param_3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1060c3c84; end: 1060c3d57; -[SCFeatureToggleCameraVideoStabilizationButton _updateToolbarIconsForStabilizationOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c3c84(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11273eda8;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar4 = (long)_DAT_11273edac;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar1 = (uint)*(undefined8 *)(param_1 + lVar3);
      func_0x00010c07d660();
      _objc_release(lVar2);
      if (param_3 != uVar1) {
        lVar4 = param_1 + lVar4;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c216f40();
        _objc_release(lVar4);
        goto LAB_1060c3d34;
      }
    }
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010c1b4280(*(undefined8 *)(param_1 + lVar3));
      func_0x00010c1cbd60(*(undefined8 *)(param_1 + lVar3));
    }
  }
LAB_1060c3d34:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273edb0),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 1060c3d58; end: 1060c3e5b; -[SCFeatureToggleCameraVideoStabilizationButton _setHardwareStabilizationModeOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c3d58(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x0001000cb554();
  }
  bVar1 = *(byte *)(param_1 + _DAT_11273edb4);
  lVar5 = (long)_DAT_11273ed6c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b00d0;
  func_0x00010c209000(PTR_PTR_1126b00d0,param_2,bVar1 ^ 1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b00d0;
  func_0x00010c209000(PTR_PTR_1126b00d0,param_2,bVar1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060c3e5c; end: 1060c3eab; -[SCFeatureToggleCameraVideoStabilizationButton _toolbarItemTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c3e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273ed60;
  func_0x00010be5a3c0(param_1,param_2,0x23,(*(byte *)(param_1 + lVar1) ^ 0xff) & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setStabilizationModeOn_userInit_112587930,
             (*(byte *)(param_1 + lVar1) ^ 0xff) & 1,1);
  return;
}



/* Entry: 1060c3eac; end: 1060c4097; -[SCFeatureToggleCameraVideoStabilizationButton _createToolbarItemIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c3eac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_11273eda8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aece4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aecfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c200900(*(undefined8 *)(param_1 + lVar5));
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf7ca60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1060c4098; end: 1060c40c3;  */

void FUN_1060c4098(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becd1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c40c4; end: 1060c414b; -[SCFeatureToggleCameraVideoStabilizationButton _hideButtonFromExperimentIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c40c4(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273ed98);
  func_0x00010c0cfd40();
  if (uVar1 < 7 && (1L << (uVar1 & 0x3f) & 0x54U) != 0) {
    if (*(char *)(param_1 + _DAT_11273edb4) == '\x01') {
      bVar2 = *(byte *)(param_1 + _DAT_11273ed94);
    }
    else {
      bVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bea2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setButtonHidden_animated__112586328,bVar2 & 1,0);
    return;
  }
  return;
}



/* Entry: 1060c414c; end: 1060c4157; -[SCFeatureToggleCameraVideoStabilizationButton reset] */

void FUN_1060c414c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setStabilizationModeOn_userInit_112587930,0,0);
  return;
}



/* Entry: 1060c4158; end: 1060c4203; -[SCFeatureToggleCameraVideoStabilizationButton configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4158(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273edac;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    if (*(char *)(param_1 + _DAT_11273ed8c) == '\x01') {
      lVar1 = param_1;
      func_0x00010bdf4dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar2;
      _objc_loadWeakRetained(param_1);
      func_0x00010befc4a0();
      _objc_release(param_1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c4204; end: 1060c4517; -[SCFeatureToggleCameraVideoStabilizationButton activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4204(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(byte *)(param_1 + _DAT_11273edbc) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11273edbc) = 1;
    lVar1 = *(long *)(param_1 + _DAT_11273ed64);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf5e320();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010c24d060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar1);
    lVar9 = lVar2;
    func_0x00010bf60220();
    *(bool *)(param_1 + _DAT_11273ed60) = lVar9 != 0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c121e40(lVar2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11273eda0;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfbb220(lVar2);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11273ed9c);
    *(undefined **)(param_1 + _DAT_11273ed9c) = puVar3;
    _objc_release(uVar8);
    uVar4 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf1f3c0();
    if ((uVar4 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11273ed90);
      *(undefined **)(param_1 + _DAT_11273ed90) = PTR____kCFBooleanFalse_11034ab60;
      _objc_release(uVar8);
    }
    lVar9 = (long)_DAT_11273ed68;
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f880(param_1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    lVar1 = (long)_DAT_11273edac;
    lVar9 = param_1 + lVar1;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar9 != 0) {
      if (*(char *)(param_1 + _DAT_11273ed8c) == '\x01') {
        lVar9 = param_1;
        func_0x00010bdf4dc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1 + lVar1;
        _objc_loadWeakRetained(lVar1);
        func_0x00010befc4a0();
        _objc_release(lVar1);
        _objc_release(lVar9);
      }
      func_0x00010bee2560(param_1);
    }
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + _DAT_11273ed80;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    lVar9 = param_1;
    func_0x00010c25ff60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1060c4518; end: 1060c461b;  */

void FUN_1060c4518(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060c4620;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c461c; end: 1060c461f;  */

void FUN_1060c461c(void)

{
  return;
}



/* Entry: 1060c4620; end: 1060c4647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4620(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11273edc0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1060c4648; end: 1060c464b;  */

void FUN_1060c4648(void)

{
  return;
}



/* Entry: 1060c464c; end: 1060c4677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c464c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11273edc0) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1060c4678; end: 1060c467b;  */

void FUN_1060c4678(void)

{
  return;
}



/* Entry: 1060c467c; end: 1060c497b; -[SCFeatureToggleCameraVideoStabilizationButton startObservingCapturerStateUpdate:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c467c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_11273edc4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060c497c;
    puStack_88 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060c4b1c;
    puStack_b0 = &UNK_11090d210;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c497c; end: 1060c4a77;  */

void FUN_1060c497c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060c4a78;
  puStack_50 = &UNK_110872b00;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e39c0(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c4a78; end: 1060c4ae7;  */

void FUN_1060c4a78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c24d060(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed3f60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


