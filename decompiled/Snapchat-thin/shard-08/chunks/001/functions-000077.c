/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d0bf94; end: 105d0c0ab; +[SCStickerInjectorHelpers emojiStickerStateWithSOJUGallerySticker:itemInstance:timelineSegmentTimeRanges:uniqueId:supportedFlows:editCapabilities:] */

void FUN_105d0bf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000105d0b674(param_3,param_6,0x3f08826);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8e2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d0c0ac; end: 105d0c32b; +[SCStickerInjectorHelpers _stickerStateWithSOJUGallerySticker:stickerType:infoStickerType:emoji:chatSticker:itemInstance:timelineSegmentTimeRanges:uniqueId:supportedFlows:editCapabilities:] */

void FUN_105d0c0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_4);
    func_0x00010c128380(param_4);
    uVar5 = param_1;
    func_0x00010c128100(param_4);
    lVar1 = param_4;
    uVar6 = uVar5;
    func_0x00010c104260(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2beb40();
    lVar2 = param_4;
    uVar7 = uVar6;
    func_0x00010c104260(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bed60();
    uVar8 = uVar7;
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000109173e90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_10);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ba898;
    _objc_alloc();
    func_0x00010c141d40(param_4);
    uVar9 = uVar8;
    func_0x00010c14e4c0(param_4);
    func_0x00010c0816c0();
    func_0x00010c081180();
    lVar1 = param_4;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c0a0();
    func_0x00010c073280();
    lVar3 = param_4;
    func_0x00010bf06320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c055c20(param_1,uVar5,uVar6,uVar7,uVar8,uVar9,puVar4);
    _objc_release(in_stack_00000018);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d0c32c; end: 105d0c343;  */

void FUN_105d0c32c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e28ad8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e28ad8,
                      &PTR____CFConstantStringClassReference_110e28af8,0);
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



/* Entry: 105d0c344; end: 105d0c6cb; -[SCPreviewFeatureVoiceoverImpl initWithVoiceoverScopeExposer:previewScope:previewConfiguration:videoPlayback:thumbnailGenerator:voiceoverServices:dialogCoordinator:previewScopeServices:previewABServices:userInteractionStateLogger:] */

undefined8 *
FUN_105d0c344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ece78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_4;
    func_0x00010bf45e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c297260(uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c112020();
    puVar1[0x16] = uVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 105d0c6cc; end: 105d0c723;  */

void FUN_105d0c6cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0c724; end: 105d0c72b; -[SCPreviewFeatureVoiceoverImpl responderChainPriority] */

undefined8 FUN_105d0c724(void)

{
  return 0x7fffffff;
}



/* Entry: 105d0c72c; end: 105d0c87b; -[SCPreviewFeatureVoiceoverImpl toolbarItemConfiguration] */

void FUN_105d0c72c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b0c40;
  lVar5 = *(long *)(param_1 + 0xb0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar5 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x19c;
  }
  else {
    if (lVar5 != 1) {
      if (lVar5 == 0) {
        func_0x0001092015b0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
      }
      else {
        puVar6 = (undefined *)0x0;
      }
      goto LAB_105d0c7f8;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x199;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar6,param_2,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_105d0c7f8:
  puVar1 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar2 = puVar1;
  func_0x000109201bf8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000109201c58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar1,param_2,0x11,puVar6,puVar6,puVar2,
                      &PTR____CFConstantStringClassReference_110e28b18,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d0c87c; end: 105d0c8a3; -[SCPreviewFeatureVoiceoverImpl muteSnapAudioObservable] */

void FUN_105d0c87c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0c8a4; end: 105d0c8cb; -[SCPreviewFeatureVoiceoverImpl voiceoverAppliedTrackObservable] */

void FUN_105d0c8a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0c8cc; end: 105d0c8f3; -[SCPreviewFeatureVoiceoverImpl voiceoverFeaturePresentationObservable] */

void FUN_105d0c8cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0c8f4; end: 105d0ca6f; -[SCPreviewFeatureVoiceoverImpl enterVoiceoverModeWithAudioMixingInitialValue:musicDisabledMicCapture:mixingProportionValue:] */

void FUN_105d0c8f4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  float fVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_2 + 0xc0) & 1) == 0) {
    lVar1 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0ac0();
    _objc_release(lVar1);
    func_0x00010c293a40(*(undefined8 *)(param_2 + 0x48),param_3,0xb,
                        &PTR____CFConstantStringClassReference_110f53b58);
    *(undefined1 *)(param_2 + 0x90) = param_5;
    func_0x00010bee8b80(&uStack_58,param_2);
    *(undefined8 *)(param_2 + 0xf0) = uStack_50;
    *(undefined8 *)(param_2 + 0xe8) = uStack_58;
    *(undefined8 *)(param_2 + 0xf8) = uStack_48;
    lVar1 = param_2 + 0xd8;
    _objc_loadWeakRetained();
    fVar6 = (float)uStack_58;
    lVar2 = lVar1;
    func_0x00010c29b7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(ulong *)(param_2 + 0x78);
    func_0x00010c071b60(uVar3,param_3,lVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_2 + 0x70) = 0;
      _objc_release(uVar4);
      _objc_retain(lVar2);
      uVar4 = *(undefined8 *)(param_2 + 0x78);
      *(long *)(param_2 + 0x78) = lVar2;
      _objc_release(uVar4);
    }
    if (*(char *)(param_2 + 0xa8) == '\x01') {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      func_0x00010c0cf1e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      param_4 = (ulong)(0.0 < fVar6);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    puVar5 = PTR_PTR_1126c4018;
    func_0x00010bf96ce0(param_1,PTR_PTR_1126c4018,param_3,*(undefined8 *)(param_2 + 0x80),param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_3,puVar5);
    _objc_release(puVar5);
    func_0x00010c292100(*(undefined8 *)(param_2 + 0x48),param_3,0xb);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 105d0ca70; end: 105d0cbbb; -[SCPreviewFeatureVoiceoverImpl isVoiceoverSupported] */

ulong FUN_105d0ca70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 2) {
LAB_105d0cba4:
    uVar5 = 0;
  }
  else {
    if (lVar2 != 1) {
      if (lVar2 != 0) {
        return 1;
      }
      uVar5 = param_1 + 0x18;
      _objc_loadWeakRetained(uVar5);
      uVar3 = uVar5;
      func_0x00010c083340();
      _objc_release(uVar5);
      return uVar3;
    }
    lVar1 = param_1 + 0xd8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0d2100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 == 0) goto LAB_105d0cba4;
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c0d2100();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
    }
    else {
      param_1 = param_1 + 0xd8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c29b7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf529e0();
    }
    uVar5 = (ulong)(lVar4 == 1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return uVar5;
}



/* Entry: 105d0cbbc; end: 105d0cbc7; -[SCPreviewFeatureVoiceoverImpl removeVoiceoverAudio] */

void FUN_105d0cbbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateAppliedVoiceoverAudio_use_112592668,0,1);
  return;
}



/* Entry: 105d0cbc8; end: 105d0ce1b; -[SCPreviewFeatureVoiceoverImpl handleSegmentSelectionWithCompletion:] */

void FUN_105d0cbc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  if (*(long *)(param_1 + 0xd0) == 0) {
    param_2 = 0;
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    func_0x000109201c10();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000109201898();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = puVar4;
    func_0x000109201c40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000109201c28();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c211b40(puVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237000();
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010bee4200(uVar8);
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0ce1c; end: 105d0ced7;  */

void FUN_105d0ce1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bee4200(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0ced8; end: 105d0cf17; -[SCPreviewFeatureVoiceoverImpl updateVoiceoverForVideoSegmentChanges] */

void FUN_105d0ced8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c083940();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadToolbarItemViewModel_112580540);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee4210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateVoiceoverWithAudio_userUp_112596a28,0,1);
  return;
}



/* Entry: 105d0cf18; end: 105d0cf63; -[SCPreviewFeatureVoiceoverImpl isAppliedVoiceoverMixed] */

bool FUN_105d0cf18(long param_1)

{
  long lVar1;
  
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0cf1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105d0cf64; end: 105d0d043; -[SCPreviewFeatureVoiceoverImpl activate] */

void FUN_105d0cf64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010c083940();
  if ((int)lVar1 != 0) {
    func_0x00010be8ae80(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc920();
    _objc_release(uVar2);
    func_0x00010be0d540(param_1);
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010be5f460(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105d0d044; end: 105d0d113;  */

void FUN_105d0d044(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105d0d114; end: 105d0d193;  */

void FUN_105d0d114(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar1 = param_2 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0cf1e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      *(bool *)(lVar1 + 0xa8) = 0.0 < param_1;
      _objc_release(uVar2);
      func_0x00010bee4200(lVar1,param_3,*(undefined8 *)(param_2 + 0x20),0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d0d194; end: 105d0d19f; -[SCPreviewFeatureVoiceoverImpl configureWithView:] */

void FUN_105d0d194(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105d0d1a0; end: 105d0d32b; -[SCPreviewFeatureVoiceoverImpl snapEditor:didChangeState:oldState:] */

void FUN_105d0d1a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c070a20();
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1;
    func_0x00010bf08020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (lVar4 == 0) goto LAB_105d0d300;
    uVar2 = param_4;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010bf5ffa0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0(uVar2,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_105d0d300;
    uVar2 = param_4;
    func_0x00010bf5ffa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105d0d32c;
    puStack_60 = &UNK_110842e18;
    ppuVar6 = &puStack_78;
    lStack_58 = param_1;
    _objc_retainBlock(ppuVar6);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105d0d3d0;
    puStack_88 = &UNK_1108484c8;
    lStack_80 = param_1;
    _objc_retainBlock(&puStack_a0);
    func_0x00010c0be120(uVar2,param_2,ppuVar6,ppuVar7);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(uVar2);
LAB_105d0d300:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105d0d32c; end: 105d0d3cf;  */

void FUN_105d0d32c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar5;
  func_0x00010bf08020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0ed20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf08020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0b80(uVar5,param_2,uVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d0d3d0; end: 105d0d3db;  */

void FUN_105d0d3d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateVoiceoverPlaybackForEditi_112596a20,
             param_2);
  return;
}



/* Entry: 105d0d3dc; end: 105d0d5f3; -[SCPreviewFeatureVoiceoverImpl _exposeVoiceoverScope] */

void FUN_105d0d3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_initWeak(auStack_88,param_5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105d0d5f4;
  puStack_98 = &UNK_110849680;
  _objc_copyWeak(auStack_90,auStack_88);
  ppuVar1 = &puStack_b0;
  _objc_retainBlock(ppuVar1);
  puStack_d8 = puVar3;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105d0d63c;
  puStack_c0 = &UNK_11084d688;
  _objc_copyWeak(auStack_b8,auStack_88);
  ppuVar2 = &puStack_d8;
  _objc_retainBlock(ppuVar2);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  lVar4 = param_5 + 0x58;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf4bd00();
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126c4020;
  _objc_alloc(PTR_PTR_1126c4020);
  lVar4 = param_5 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0626e0(param_1,param_2,param_3,param_4,puVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_5 + 0x10));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 105d0d5f4; end: 105d0d68f;  */

void FUN_105d0d5f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d0d690; end: 105d0d837; -[SCPreviewFeatureVoiceoverImpl _presentVoiceoverVC:] */

void FUN_105d0d690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1618a0(lVar1,param_2,1,puVar4);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  lVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  func_0x00010be70fa0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c37a8
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar2,param_2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d0d838; end: 105d0d8bb;  */

void FUN_105d0d838(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c37a8
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar2,param_2,puVar3,1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d0d8bc; end: 105d0d8cb; -[SCPreviewFeatureVoiceoverImpl handleExitButton] */

void FUN_105d0d8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105d0d8cc; end: 105d0da7b; -[SCPreviewFeatureVoiceoverImpl _dismissVoiceoverVC] */

void FUN_105d0d8cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161880();
  _objc_release(lVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  lVar1 = param_1 + 200;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf08020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0a60(lVar1,param_2,param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  func_0x00010be95f60(param_1,param_2,1);
  func_0x00010c292040(*(undefined8 *)(param_1 + 0x48),param_2,0xb);
  return;
}



/* Entry: 105d0da7c; end: 105d0db43; -[SCPreviewFeatureVoiceoverImpl videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_105d0da7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = &uStack_50;
    _CMTimeCompare(puVar1,&uStack_70);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (-1 < (int)puVar1) {
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
      uStack_60 = param_4[2];
      func_0x00010beea420(&uStack_50,param_1);
      func_0x00010c297200(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 105d0db44; end: 105d0db6b; -[SCPreviewFeatureVoiceoverImpl voiceoverPresentationObservable] */

void FUN_105d0db44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0db6c; end: 105d0dba3; -[SCPreviewFeatureVoiceoverImpl voiceoverPlaybackControlsThumbnailFutures] */

void FUN_105d0db6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    func_0x00010bdf1800();
    lVar1 = *(long *)(param_1 + 0x70);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d0dba4; end: 105d0dbab; -[SCPreviewFeatureVoiceoverImpl voiceoverDidSaveWithVoiceoverAudio:] */

void FUN_105d0dba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateVoiceoverWithAudio_userUp_112596a28,param_3,1);
  return;
}



/* Entry: 105d0dbac; end: 105d0dc8b; -[SCPreviewFeatureVoiceoverImpl forceDisableAudioMixing] */

uint FUN_105d0dbac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07e920();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010befb5a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x90);
      }
      _objc_release();
      _objc_release(lVar4);
    }
    else {
      uVar6 = (uint)*(byte *)(param_1 + 0x90);
    }
    _objc_release(lVar2);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bfdc2e0();
    if ((uVar3 & 1) != 0) {
      uVar6 = 0;
      goto LAB_105d0dc78;
    }
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c07e880();
    uVar6 = (uint)lVar2 ^ 1;
  }
  _objc_release(lVar1);
LAB_105d0dc78:
  return uVar6 & 1;
}



/* Entry: 105d0dc8c; end: 105d0dcb3; -[SCPreviewFeatureVoiceoverImpl muteSnapAudioSubject] */

void FUN_105d0dc8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0dcb4; end: 105d0dcdb; -[SCPreviewFeatureVoiceoverImpl currentPlaybackTimeObservable] */

void FUN_105d0dcb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d0dcdc; end: 105d0ddc3; -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackSeekToTime:] */

void FUN_105d0dcdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = uVar4;
  _CMTimeMinimum(auStack_58,&uStack_70,&uStack_90);
  _CMTimeGetSeconds(auStack_58);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf30e80();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    uStack_68 = param_3[1];
    uVar4 = *param_3;
    uStack_60 = param_3[2];
    uStack_70 = uVar4;
    func_0x00010be5ea20(auStack_58,param_1);
    _CMTimeGetSeconds(auStack_58);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256600(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d0ddc4; end: 105d0ddc7; -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackPause] */

void FUN_105d0ddc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pauseVideo_112579d88);
  return;
}



/* Entry: 105d0ddc8; end: 105d0ddcb; -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackResumeWithAudio:] */

void FUN_105d0ddc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeVideoWithAudio__112583178);
  return;
}



/* Entry: 105d0ddcc; end: 105d0dfff; -[SCPreviewFeatureVoiceoverImpl voiceoverMediaPlaybackSetAudio:audioMixingProportion:] */

void FUN_105d0ddcc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf30e80();
  _objc_release(uVar2);
  puVar6 = param_3;
  if (uVar3 < 2) {
    if (param_3 != (undefined *)0x0) {
      lVar4 = *(long *)(param_1 + 0x78);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_70,lVar4);
      }
      _objc_release(lVar4);
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uStack_80 = uStack_60;
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      uStack_a0 = uStack_60;
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar5 = &uStack_b0;
      _CMTimeCompare(puVar5,&uStack_d0);
      if (0 < (int)puVar5) {
        uStack_a8 = uStack_88;
        uStack_b0 = uStack_90;
        uStack_a0 = uStack_80;
        FUN_105d0e000(param_3,&uStack_b0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
      }
      goto LAB_105d0deec;
    }
  }
  else {
LAB_105d0deec:
    if (puVar6 != (undefined *)0x0) {
      _objc_initWeak(&uStack_70,param_1);
      puVar1 = PTR_PTR_1126c4028;
      _objc_retain(puVar6);
      _objc_retain(param_4);
      _objc_copyWeak(auStack_d8,&uStack_70);
      func_0x00010bf8b1c0(puVar1);
      _objc_destroyWeak(auStack_d8);
      _objc_release(param_4);
      _objc_release(puVar6);
      _objc_destroyWeak(&uStack_70);
      goto LAB_105d0dfb4;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  puVar6 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
LAB_105d0dfb4:
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d0e000; end: 105d0e1a3;  */

void FUN_105d0e000(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  _objc_retain();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600(PTR__OBJC_CLASS___AVMutableComposition_1126beaa8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010bf8b160(&uStack_b0,param_1);
      uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_100 = uVar7;
      uStack_f8 = uVar8;
      uStack_f0 = uVar6;
      _CMTimeRangeMake(&uStack_80,&uStack_100,&uStack_b0);
      uStack_c8 = param_2[1];
      uStack_d0 = *param_2;
      uStack_c0 = param_2[2];
      uStack_100 = uVar7;
      uStack_f8 = uVar8;
      uStack_f0 = uVar6;
      _CMTimeRangeMake(&uStack_b0,&uStack_100,&uStack_d0);
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_d0 = uVar7;
      uStack_c8 = uVar8;
      uStack_c0 = uVar6;
      func_0x00010c067160(puVar2);
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      func_0x00010c066740(puVar2);
      _objc_retain(puVar1);
      puVar5 = puVar1;
    }
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d0e1a4; end: 105d0e307;  */

void FUN_105d0e1a4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf680;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80(*(undefined8 *)(param_1 + 0x28));
  uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010b744494(puVar1,uVar3,&uStack_60,puVar2);
  _objc_release(puVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x30);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d0e308; end: 105d0e373;  */

void FUN_105d0e308(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d0e374; end: 105d0e3b7; -[SCPreviewFeatureVoiceoverImpl voiceoverWillExitByCancelling:] */

void FUN_105d0e374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = PTR_PTR_1126c4018;
  func_0x00010bf9bb40(PTR_PTR_1126c4018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d0e3b8; end: 105d0e413; -[SCPreviewFeatureVoiceoverImpl _pauseVideo] */

void FUN_105d0e3b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d0e414; end: 105d0e47b; -[SCPreviewFeatureVoiceoverImpl _resumeVideoWithAudio:] */

void FUN_105d0e414(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0((double)param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d0e47c; end: 105d0e733; -[SCPreviewFeatureVoiceoverImpl _createPlaybackControlsThumbnails] */

void FUN_105d0e47c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf30e80();
  _objc_release(uVar1);
  if (uVar2 - 3 < 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf605c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf605a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_105d0e734;
    uStack_50 = 0x105d0e744;
    uStack_48 = 0;
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105d0e734;
    uStack_80 = 0x105d0e744;
    uStack_78 = 0;
    lVar7 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fb2258();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x00010bdf1820(param_1);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  else if (uVar2 < 2) {
    lVar7 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0d9500();
    _objc_release(lVar8);
    _objc_release(lVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf1820(param_1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return;
  }
  return;
}



/* Entry: 105d0e734; end: 105d0e74b;  */

void FUN_105d0e734(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d0e74c; end: 105d0e7bf;  */

void FUN_105d0e74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0e7c0; end: 105d0e953; -[SCPreviewFeatureVoiceoverImpl _createPlaybackControlsThumbnailsForVideoAsset:videoComposition:withTimeRange:thumbnailOverrides:thumbnailOverrideTimeRanges:] */

void FUN_105d0e7c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(0x4056800000000000,0x4063800000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c4030;
    _objc_alloc(PTR_PTR_1126c4030);
    func_0x00010aefb180();
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010bfc05a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105d0e954; end: 105d0eb57; -[SCPreviewFeatureVoiceoverImpl _voiceoverSeekTimeForVideoPlaybackTime:] */

void FUN_105d0e954(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(ulong *)(param_2 + 0x78);
  _objc_retain(uVar3);
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uVar4 = uVar3;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar5;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,uVar1);
      }
      _objc_release(uVar1);
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      _CMTimeRangeGetEnd(&uStack_d0,&uStack_100);
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_f0 = param_4[2];
      puVar2 = &uStack_100;
      _CMTimeCompare(puVar2,&uStack_d0);
      if ((int)puVar2 < 1) {
        uStack_c8 = param_4[1];
        uStack_d0 = *param_4;
        uStack_c0 = param_4[2];
        uStack_118 = uStack_a8;
        uStack_120 = uStack_b0;
        uStack_110 = uStack_a0;
        _CMTimeSubtract(&uStack_100,&uStack_d0,&uStack_120);
        uStack_c8 = uStack_78;
        uStack_d0 = uStack_80;
        uStack_c0 = uStack_70;
        uStack_118 = uStack_f8;
        uStack_120 = uStack_100;
        uStack_110 = uStack_f0;
        _CMTimeAdd(&uStack_80,&uStack_d0,&uStack_120);
        break;
      }
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_f0 = uStack_70;
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_c0 = uStack_88;
      _CMTimeAdd(&uStack_80,&uStack_100,&uStack_d0);
      uVar4 = uVar4 + 1;
      uVar1 = uVar3;
      func_0x00010bf529e0();
    } while (uVar4 < uVar1);
  }
  uStack_c8 = *(undefined8 *)(param_2 + 0xf0);
  uStack_d0 = *(undefined8 *)(param_2 + 0xe8);
  uStack_c0 = *(undefined8 *)(param_2 + 0xf8);
  uStack_100 = uVar6;
  uStack_f8 = uVar7;
  uStack_f0 = uVar5;
  _CMTimeRangeMake(&uStack_b0,&uStack_100,&uStack_d0);
  uStack_f8 = uStack_78;
  uStack_100 = uStack_80;
  uStack_f0 = uStack_70;
  _CMTimeClampToRange(param_1,&uStack_100,&uStack_b0);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d0eb58; end: 105d0eceb; -[SCPreviewFeatureVoiceoverImpl _mediaPlaybackTimeForVoiceoverSeekTime:] */

void FUN_105d0eb58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar3 = *(ulong *)(param_2 + 0x78);
  _objc_retain(uVar3);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_90,uVar1);
      }
      _objc_release(uVar1);
      uStack_a8 = uStack_58;
      uStack_b0 = uStack_60;
      uStack_a0 = uStack_50;
      uStack_c8 = uStack_70;
      uStack_d0 = uStack_78;
      uStack_c0 = uStack_68;
      puVar2 = &uStack_b0;
      _CMTimeCompare(puVar2,&uStack_d0);
      if ((int)puVar2 < 1) goto LAB_105d0ec9c;
      uStack_a8 = uStack_58;
      uStack_b0 = uStack_60;
      uStack_a0 = uStack_50;
      uStack_c8 = uStack_70;
      uStack_d0 = uStack_78;
      uStack_c0 = uStack_68;
      _CMTimeSubtract(&uStack_60,&uStack_b0,&uStack_d0);
      uVar4 = uVar4 + 1;
      uVar1 = uVar3;
      func_0x00010bf529e0();
    } while (uVar4 < uVar1);
  }
  uVar4 = uVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,uVar4);
  }
  _objc_release(uVar4);
LAB_105d0ec9c:
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  uStack_a0 = uStack_80;
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  uStack_c0 = uStack_50;
  _CMTimeAdd(param_1,&uStack_b0,&uStack_d0);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d0ecec; end: 105d0ee83; -[SCPreviewFeatureVoiceoverImpl _memoriesVoiceoverAudioWithCompletion:] */

void FUN_105d0ecec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar2 = lVar3;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
        func_0x00010bf926c0();
        if (iVar1 == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c0c57a0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c23f220(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c135260(uVar6);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        else {
          func_0x00010be96d20(param_1);
        }
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d0ee84; end: 105d0eed3; -[SCPreviewFeatureVoiceoverImpl _updateSnapDocWithVoiceoverAudio:] */

void FUN_105d0ee84(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010bf926c0();
  if ((iVar1 != 0) && (func_0x00010be8d400(param_1), param_3 != 0)) {
    func_0x00010bdc8400(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d0eed4; end: 105d0f033; -[SCPreviewFeatureVoiceoverImpl _addSnapDocPlaybackLayerWithVoiceoverAudio:] */

void FUN_105d0eed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar3 = &puStack_80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfc0ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfc0cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d0f034;
  puStack_68 = &UNK_11087d518;
  _objc_retain(param_3);
  uStack_60 = param_3;
  lStack_58 = param_1;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_80);
  puVar4 = (undefined1 *)ppuVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105d0f034; end: 105d0f0b7;  */

void FUN_105d0f034(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdd11c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc83e0();
    _objc_release(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0f0b8; end: 105d0f23f; -[SCPreviewFeatureVoiceoverImpl _addSnapDocPlaybackLayerWithGenericAssetData:audioMixingRenderEffect:] */

void FUN_105d0f0b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b25c8;
  _objc_alloc_init();
  func_0x00010c16a960();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = PTR_PTR_1126b3080;
  func_0x00010bf64b00(PTR_PTR_1126b3080);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010c297260(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d0f240; end: 105d0f32f;  */

void FUN_105d0f240(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x28));
    puVar2 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = uVar5;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c1ea660(*(undefined8 *)(lVar1 + 0x40));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0f330; end: 105d0f36f; -[SCPreviewFeatureVoiceoverImpl _removeSnapDocPlaybackLayer] */

void FUN_105d0f330(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bf6c5a0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d0f370; end: 105d0f5a7; -[SCPreviewFeatureVoiceoverImpl _retrieveVoiceoverFromSnapDocWithCompletion:] */

void FUN_105d0f370(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(puVar1);
    if (*(long *)(param_1 + 0x88) == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x40);
      func_0x00010c0ff640();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        lVar3 = lVar2;
        func_0x00010c0c3fe0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c7240(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_initWeak(auStack_48,param_1);
        _objc_copyWeak(auStack_50,auStack_48);
        lVar3 = param_3;
        _objc_retain(param_3);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar7);
        _objc_release(lVar3);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        _objc_release(uVar7);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d0f5a8; end: 105d0f5eb;  */

bool FUN_105d0f5a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 0xe;
}



/* Entry: 105d0f5ec; end: 105d0f66f;  */

void FUN_105d0f5ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_3 != 0)) || (lVar2 = param_2, func_0x00010c08fa60(), lVar2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    func_0x00010be60aa0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0f670; end: 105d0f7ef; -[SCPreviewFeatureVoiceoverImpl _mixedSnapDocVoiceoverAudioWithDecryptedData:completion:] */

void FUN_105d0f670(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_58,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105d0f7f0;
    puStack_78 = &UNK_1108e59f8;
    uStack_70 = uVar4;
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retainBlock(&puStack_90);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0c57a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c136fa0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d0f7f0; end: 105d0f997;  */

void FUN_105d0f7f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x40);
      func_0x00010bfc98a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
      }
      else {
        puVar3 = PTR_PTR_1126b0d70;
        _objc_alloc(PTR_PTR_1126b0d70);
        uVar4 = param_2;
        func_0x00010c1585e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar5 = lVar2;
        func_0x00010bf101a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0dc0();
        func_0x00010c0df720(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_2;
        func_0x00010bf0ed20(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_2;
        func_0x00010bf0ef80(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043aa0(puVar3);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(puVar6);
        _objc_release(lVar5);
        _objc_release(uVar4);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d0f998; end: 105d0fa03; -[SCPreviewFeatureVoiceoverImpl _updateVoiceoverWithAudio:userUpdated:] */

void FUN_105d0f998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bed3300(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be95f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeVideoWithAudio__112583178,1);
  return;
}



/* Entry: 105d0fa04; end: 105d0fb27; -[SCPreviewFeatureVoiceoverImpl _updateAppliedVoiceoverAudio:userUpdated:] */

void FUN_105d0fa04(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a0a80();
  _objc_release(lVar1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf0ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = param_3;
  func_0x00010c0cf1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0b80(param_1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be8ae80(param_1);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a0a20();
  _objc_release(lVar1);
  if (param_4 != 0) {
    func_0x00010bee0220(param_1,param_2,param_3);
    param_1 = param_1 + 0xd8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a0a40();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d0fb28; end: 105d0fc1f; -[SCPreviewFeatureVoiceoverImpl _videoDuration] */

void FUN_105d0fb28(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  param_2 = param_2 + 0xd8;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c29b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _objc_retain();
  func_0x00010c297200(puVar2,param_3,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c124d20(lVar1,param_3,&PTR___NSConcreteGlobalBlock_1108e5a48,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar2);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bdc1140(param_1,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d0fc20; end: 105d0fcf7; -[SCPreviewFeatureVoiceoverImpl _audioMixingRenderEffectForVoiceoverAudio:] */

void FUN_105d0fc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0cf1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bcd70;
    _objc_opt_new(PTR_PTR_1126bcd70);
    puVar3 = PTR_PTR_1126c4038;
    _objc_opt_new(PTR_PTR_1126c4038);
    func_0x00010c16c540(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    lVar1 = param_4;
    func_0x00010c0cf1e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar3 = puVar2;
    func_0x00010bf101a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2241a0(param_1);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d0fcf8; end: 105d0fff7; -[SCPreviewFeatureVoiceoverImpl _updateVoiceoverPlaybackForEditingSegmentIndex:] */

void FUN_105d0fcf8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar1 = uVar8;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1581e0();
  _objc_release(uVar1);
  _objc_release(uVar8);
  if (param_3 < uVar2) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    if (param_3 != 0) {
      uVar8 = 0;
      do {
        lVar3 = lVar5;
        func_0x00010c14da60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010bf4d840(&uStack_d0,lVar3);
          func_0x00010c27c900(&uStack_100,lVar3);
          uStack_118 = uStack_b0;
          uStack_120 = uStack_b8;
          uStack_110 = uStack_a8;
          uStack_138 = uStack_e0;
          uStack_140 = uStack_e8;
          uStack_130 = uStack_d8;
          _CMTimeSubtract(&uStack_98,&uStack_120,&uStack_140);
          uStack_c8 = uStack_78;
          uStack_d0 = uStack_80;
          uStack_c0 = uStack_70;
          uStack_f8 = uStack_90;
          uStack_100 = uStack_98;
          uStack_f0 = uStack_88;
          _CMTimeAdd(&uStack_80,&uStack_d0,&uStack_100);
        }
        _objc_release(lVar3);
        uVar8 = uVar8 + 1;
      } while (param_3 != uVar8);
    }
    lVar3 = lVar5;
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_d0,lVar3);
      func_0x00010bf4d840(&uStack_100,lVar3);
    }
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_110 = uStack_c0;
    uStack_138 = uStack_f8;
    uStack_140 = uStack_100;
    uStack_130 = uStack_f0;
    _CMTimeSubtract(&uStack_98,&uStack_120,&uStack_140);
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_f0 = uStack_70;
    uStack_118 = uStack_90;
    uStack_120 = uStack_98;
    uStack_110 = uStack_88;
    _CMTimeAdd(&uStack_d0,&uStack_100,&uStack_120);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    lVar4 = param_1;
    func_0x00010bf08020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf0ed20();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    lVar7 = lVar6;
    FUN_105d0e000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf08020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0cf1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0b80(param_1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 105d0fff8; end: 105d10097; -[SCPreviewFeatureVoiceoverImpl setToolbarItemViewModel:] */

void FUN_105d0fff8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xe0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d10098; end: 105d1013b; -[SCPreviewFeatureVoiceoverImpl _reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d1010c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d10110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d10098(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x50) == 0) || (uVar1 = param_1, func_0x00010c083940(), (uVar1 & 1) == 0)
     ) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c083940(param_1);
    puVar2 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c039d00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105d1013c; end: 105d10163; -[SCPreviewFeatureVoiceoverImpl toolbarItemViewModelObservable] */

void FUN_105d1013c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d10164; end: 105d1017b; -[SCPreviewFeatureVoiceoverImpl parentViewControllerDelegate] */

void FUN_105d10164(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d1017c; end: 105d10187; -[SCPreviewFeatureVoiceoverImpl setParentViewControllerDelegate:] */

void FUN_105d1017c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105d10188; end: 105d1018f; -[SCPreviewFeatureVoiceoverImpl isCurrentlyOpened] */

undefined1 FUN_105d10188(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 105d10190; end: 105d10197; -[SCPreviewFeatureVoiceoverImpl appliedVoiceoverAudio] */

undefined8 FUN_105d10190(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105d10198; end: 105d101af; -[SCPreviewFeatureVoiceoverImpl delegate] */

void FUN_105d10198(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d101b0; end: 105d101bb; -[SCPreviewFeatureVoiceoverImpl setDelegate:] */

void FUN_105d101b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105d101bc; end: 105d101cf; -[SCPreviewFeatureVoiceoverImpl mediaDuration] */

void FUN_105d101bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xf0);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xf8);
  return;
}



/* Entry: 105d101d0; end: 105d101d7; -[SCPreviewFeatureVoiceoverImpl toolbarItemViewModel] */

undefined8 FUN_105d101d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 105d101d8; end: 105d102fb; -[SCPreviewFeatureVoiceoverImpl .cxx_destruct] */

void FUN_105d101d8(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d102fc; end: 105d103ef;  */

void FUN_105d102fc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_50,param_2);
  }
  if (param_3 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,param_3);
  }
  uStack_b8 = uStack_48;
  uStack_c0 = uStack_50;
  uStack_b0 = uStack_40;
  uStack_d8 = uStack_60;
  uStack_e0 = uStack_68;
  uStack_d0 = uStack_58;
  _CMTimeAdd(&uStack_a0,&uStack_c0,&uStack_e0);
  uStack_40 = uStack_90;
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d103f0; end: 105d106cf; -[SCPreviewFeatureVoiceoverServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d103f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127348c0);
  _objc_retain(uVar15);
  uVar2 = param_1 + _DAT_1127348c4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar6 = param_1 + _DAT_1127348c8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_1127348cc;
  _objc_loadWeakRetained();
  lVar8 = lVar6;
  func_0x00010c29b6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_1127348d0;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_1127348d4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf71d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_1127348d8;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_1127348dc;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = param_1 + _DAT_1127348e0;
  _objc_loadWeakRetained();
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c4048;
  _objc_alloc(PTR_PTR_1126c4048);
  func_0x00010c0626a0();
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127348e4);
  _objc_retain(uVar14);
  func_0x00010bf9d660(uVar14);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar15);
  return;
}



/* Entry: 105d106d0; end: 105d10747;  */

void FUN_105d106d0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c4040;
    _objc_alloc(PTR_PTR_1126c4040);
    func_0x00010c062700();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d10748; end: 105d107e7; -[SCPreviewFeatureVoiceoverServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10748(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127348c0,0);
  _objc_storeStrong(param_1 + _DAT_1127348e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127348d0);
  _objc_destroyWeak(param_1 + _DAT_1127348cc);
  _objc_destroyWeak(param_1 + _DAT_1127348d4);
  _objc_destroyWeak(param_1 + _DAT_1127348c8);
  _objc_destroyWeak(param_1 + _DAT_1127348d8);
  _objc_destroyWeak(param_1 + _DAT_1127348dc);
  _objc_destroyWeak(param_1 + _DAT_1127348e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127348c4);
  return;
}



/* Entry: 105d107e8; end: 105d10893; -[SCPreviewFeatureVoiceoverServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d107e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127348e8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127348f0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2a0940(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d10894; end: 105d108d7; -[SCPreviewFeatureVoiceoverServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10894(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127348f0);
  _objc_destroyWeak(param_1 + _DAT_1127348ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127348e8);
  return;
}



/* Entry: 105d108d8; end: 105d10983; -[SCPreviewFeatureVoiceoverToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d108d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127348f4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127348fc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2a0940(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d10984; end: 105d109c7; -[SCPreviewFeatureVoiceoverToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10984(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127348fc);
  _objc_destroyWeak(param_1 + _DAT_1127348f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127348f4);
  return;
}



/* Entry: 105d109c8; end: 105d10b4b; -[SCLensCarouselPreviewDependencyServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d109c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4050;
  _objc_alloc(PTR_PTR_1126c4050);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273490c;
    _objc_loadWeakRetained(param_1);
  }
  lVar3 = param_1;
  func_0x00010c264a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04fba0(puVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126c4058;
  _objc_alloc(PTR_PTR_1126c4058);
  func_0x00010c04fb60();
  puVar5 = PTR_PTR_1126c4060;
  _objc_alloc(PTR_PTR_1126c4060);
  func_0x00010c039e40();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d10b4c; end: 105d10b8b;  */

void FUN_105d10b4c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d10b8c; end: 105d10da3; -[SCLensCarouselPreviewDependencyServiceProvider _createViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1;
  FUN_105d10da4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c070a20();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  if ((int)lVar5 == 0) {
    puVar6 = PTR_PTR_1126c4070;
    _objc_alloc(PTR_PTR_1126c4070);
    FUN_105d10da4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x000105d10dc8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c090b20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08d020();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + _DAT_112734910;
      _objc_loadWeakRetained(param_1);
    }
    lVar7 = param_1;
    func_0x00010c090800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0224e0(puVar6,param_2,lVar2,lVar5,lVar7);
    _objc_release(lVar7);
    _objc_release(param_1);
  }
  else {
    puVar6 = PTR_PTR_1126c4068;
    _objc_alloc(PTR_PTR_1126c4068);
    FUN_105d10da4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    func_0x000105d10dc8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c090b20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08d020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0224c0(puVar6,param_2,lVar2,lVar5);
    lVar3 = param_1;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d10da4; end: 105d10deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10da4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112734904);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d10dec; end: 105d10e47; -[SCLensCarouselPreviewDependencyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d10dec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734910);
  _objc_destroyWeak(param_1 + _DAT_11273490c);
  _objc_destroyWeak(param_1 + _DAT_112734908);
  _objc_destroyWeak(param_1 + _DAT_112734904);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734900);
  return;
}



/* Entry: 105d10e48; end: 105d10eeb; -[SCLensCarouselDMPreviewViewProviderImpl initWithLegacySnapEditor:layoutProvider:] */

undefined1 *
FUN_105d10e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ece80;
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



/* Entry: 105d10eec; end: 105d10f5f; -[SCLensCarouselDMPreviewViewProviderImpl containerView] */

void FUN_105d10eec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010be7ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x18);
    }
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d10f60; end: 105d11027; -[SCLensCarouselDMPreviewViewProviderImpl carouselViewContainer] */

void FUN_105d10f60(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d11028; end: 105d1106f;  */

void FUN_105d11028(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd02c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d11070; end: 105d1107b;  */

void FUN_105d11070(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105d11078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}


