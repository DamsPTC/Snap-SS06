/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d8b81c; end: 105d8b8e3;  */

void FUN_105d8b81c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d8b8e4; end: 105d8b94b; -[SCPreviewFeatureMusicImpl _canDeleteCurrentSelectionWithUpdatedSelection:] */

uint FUN_105d8b8e4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15a4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2f800();
  uVar1 = (uint)uVar4 ^ 1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_3 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105d8b94c; end: 105d8b9b3; -[SCPreviewFeatureMusicImpl _canReplaceCurrentSelectionWithUpdatedSelection:] */

uint FUN_105d8b94c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15a4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2f860();
  uVar1 = (uint)uVar4 ^ 1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_3 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105d8b9b4; end: 105d8ba8b; -[SCPreviewFeatureMusicImpl _restartPlaybackAndUpdateSelection:shouldUpdateMotionFilters:] */

void FUN_105d8b9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0x7fffffffffffffff) {
    func_0x00010c157120(uVar1);
  }
  else {
    func_0x00010c157240(uVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  }
  _objc_release(uVar1);
  func_0x00010bedf7e0(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d8ba8c; end: 105d8bc5b; -[SCPreviewFeatureMusicImpl _updateAudioPlayback] */

void FUN_105d8ba8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c075080();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe75c0();
      _CMTimeMakeWithSeconds(&uStack_58,600);
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126c47f0;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf0fb00();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105d8bc5c;
      puStack_80 = &UNK_1108e7d40;
      uStack_68 = uStack_50;
      uStack_70 = uStack_58;
      uStack_60 = uStack_48;
      uStack_78 = uVar3;
      _objc_retain(uVar3);
      func_0x00010bff54a0(puVar5,param_2,uVar4,&puStack_98,1,0,0);
      uVar7 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined **)(param_1 + 0xb0) = puVar5;
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      uVar6 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0f9980(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187d20(uVar4,param_2,uVar6);
      _objc_release(uVar6);
      func_0x00010c0fe360(*(undefined8 *)(param_1 + 0xb0));
      func_0x00010bed6820(param_1);
      _objc_release(uStack_78);
      _objc_release(uVar3);
    }
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105d8bc5c; end: 105d8bd17;  */

void FUN_105d8bc5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126c4028;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ef80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf12440(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_48);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = puVar2;
  func_0x000107fb6940(puVar2,&uStack_48,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d8bd18; end: 105d8bda3; -[SCPreviewFeatureMusicImpl _handleMusicSelection:shouldSkipScrubber:shouldUpdateMotionFilters:] */

void FUN_105d8bd18(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_4 == 0) {
      func_0x00010be7c9e0(param_1,param_2,param_3);
    }
    else {
      func_0x00010bde6160();
    }
    func_0x00010be953a0(param_1,param_2,param_3,param_5);
    param_1 = param_1 + 0x220;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d2f20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d8bda4; end: 105d8c137; -[SCPreviewFeatureMusicImpl _presentMusicEditorForSelection:] */

void FUN_105d8bda4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  double dVar17;
  undefined *puStack_80;
  
  if (param_4 == 0) {
    return;
  }
  _objc_retain(param_4);
  func_0x00010be02a00(param_2);
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar15);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x108) = uVar15;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  puVar16 = PTR_PTR_1126c47e8;
  func_0x00010bf96920(PTR_PTR_1126c47e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar16);
  _objc_release(puVar16);
  uVar3 = param_2 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c083340();
  if ((uVar4 & 1) == 0) {
LAB_105d8bf80:
    _objc_release(uVar3);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c06c920();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar5);
      goto LAB_105d8bf80;
    }
    lVar6 = param_2 + 0x20;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0d32a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar7 == 0) {
      uVar15 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar15;
      func_0x00010c2a0fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      func_0x00010c0df760(puVar16,param_3,SUB84(param_1,0) == 0.0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar15);
      lVar6 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMaxY();
      dVar17 = param_1;
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfb68e0();
      _CGRectGetMaxY();
      _objc_release(lVar6);
      if (param_1 == dVar17) {
        puStack_80 = (undefined *)0x0;
      }
      else {
        puStack_80 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar17 - param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      bVar1 = true;
      goto LAB_105d8bf94;
    }
  }
  bVar1 = false;
  puStack_80 = (undefined *)0x0;
  puVar16 = (undefined *)0x0;
LAB_105d8bf94:
  func_0x00010c108940(*(undefined8 *)(param_2 + 0xa8),param_3,param_4);
  lVar8 = param_2;
  func_0x00010be3bd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010be070e0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar10 = PTR_PTR_1126b3008;
  _objc_alloc(PTR_PTR_1126b3008);
  lVar6 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar6);
  lVar11 = lVar6;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar7);
  lVar12 = lVar7;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab00(puVar10,param_3,0x78,lVar11,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  puVar14 = PTR_PTR_1126c47f8;
  _objc_alloc(PTR_PTR_1126c47f8);
  func_0x00010c056940();
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x120),param_3,puVar14);
  func_0x00010bea1b00(param_2,param_3,1);
  if (bVar1) {
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x170),param_3,puVar16);
  }
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 105d8c138; end: 105d8c1c7; -[SCPreviewFeatureMusicImpl _dismissPickerIfNeeded] */

void FUN_105d8c138(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x00010be8c980(param_1);
    lVar1 = *(long *)(param_1 + 0x128);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x128));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bea1b00(param_1,param_2,0);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    func_0x00010c12c960();
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x148));
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d8c1c8; end: 105d8c22f; -[SCPreviewFeatureMusicImpl _dismissEditorIfNeeded] */

void FUN_105d8c1c8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x120);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x120));
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bea1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAddSoundPillHidden__112586068,0);
      return;
    }
  }
  return;
}



/* Entry: 105d8c230; end: 105d8c33f; -[SCPreviewFeatureMusicImpl _didAttachEditorViewController:] */

void FUN_105d8c230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_5 + 0xc1) = 1;
  _objc_retain(param_7);
  func_0x00010beddca0(param_5,param_6,1);
  lVar1 = param_5 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c4800;
  _objc_alloc(PTR_PTR_1126c4800);
  func_0x00010c061780(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
  lVar1 = param_5 + 0x228;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2d80();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d8c340; end: 105d8c3fb; -[SCPreviewFeatureMusicImpl _didDetachEditorViewController] */

void FUN_105d8c340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xc1) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  func_0x00010c108940(*(undefined8 *)(param_1 + 0xa8),param_2,0);
  func_0x00010beddca0(param_1,param_2,0);
  param_1 = param_1 + 0x228;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 105d8c3fc; end: 105d8c457;  */

void FUN_105d8c3fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0xc2) == '\x01') {
    *(undefined1 *)(lVar1 + 0xc2) = 0;
    func_0x00010c10d880(*(undefined8 *)(param_1 + 0x20),param_2,0x78);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bf6b020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d8c458; end: 105d8c5a7; -[SCPreviewFeatureMusicImpl _updateCurrentTimeObserving] */

void FUN_105d8c458(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x100));
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c075080();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c0f9980();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d8c5a8; end: 105d8c5fb;  */

void FUN_105d8c5a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
    func_0x00010c0d9840();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d8c5fc; end: 105d8c663; -[SCPreviewFeatureMusicImpl _updatePreviewUIHidden:] */

void FUN_105d8c5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161880();
  _objc_release(lVar1);
  func_0x00010c20bd00(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a98e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8c664; end: 105d8c667; -[SCPreviewFeatureMusicImpl _didReceiveMediaServicesWereResetNotification:] */

void FUN_105d8c664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAudioPlayback_112592718);
  return;
}



/* Entry: 105d8c668; end: 105d8c7ff; -[SCPreviewFeatureMusicImpl _showMusicSyncTooltipIfNeeded] */

void FUN_105d8c668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfa2b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3980();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (0 < lVar3) {
    return;
  }
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c273c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x000107e483b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e880(0x4008000000000000,lVar3,param_2,lVar1,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa2b00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010bfa2b00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3980();
  func_0x00010c1ca360(uVar5,param_2,lVar3 + 1);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d8c800; end: 105d8c977; -[SCPreviewFeatureMusicImpl _loadMusicSyncSelectionWithTrackId:] */

void FUN_105d8c800(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x160));
  puVar1 = PTR_PTR_1126b2798;
  _objc_opt_new();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  *(undefined **)(param_1 + 0x160) = puVar1;
  _objc_release(uVar2);
  func_0x00010be7c3e0(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2781c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfc7be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  puVar5 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d8c978; end: 105d8cabf;  */

void FUN_105d8c978(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      if ((param_2 == 0) || (param_3 != 0)) {
        func_0x00010be02c80(lVar1);
      }
      else {
        lVar3 = lVar1 + 0x220;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c256e40();
        _objc_release(lVar3);
        uVar4 = *(undefined8 *)(lVar1 + 0x158);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2;
        func_0x00010bf17960(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        _objc_retain(param_2);
        func_0x00010bf08180(uVar4);
        _objc_release(lVar3);
        _objc_release(uVar4);
        _objc_release(param_2);
        _objc_release(uVar5);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d8cac0; end: 105d8cc87;  */

void FUN_105d8cac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar2);
      func_0x00010c0f7fc0(uVar1);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d8cc88; end: 105d8ce87; -[SCPreviewFeatureMusicImpl _presentLoadingIfNeeded] */

void FUN_105d8cc88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  if (*(long *)(param_1 + 0x148) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(uVar1);
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    *(undefined **)(param_1 + 0x148) = puVar4;
    _objc_release(uVar1);
    func_0x00010befbb60(lVar3,param_2,*(undefined8 *)(param_1 + 0x148));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x148),param_2,0);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + 0x148);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf34860(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x148);
    uStack_78 = uVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf348e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(lVar2);
    _objc_release(uVar5);
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + 0x148));
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar3 + 0x148) != 0) {
    func_0x00010c12c960();
    func_0x00010c2558c0(*(undefined8 *)(lVar3 + 0x148));
    uVar1 = *(undefined8 *)(lVar3 + 0x148);
    *(undefined8 *)(lVar3 + 0x148) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d8ce88; end: 105d8ceeb; -[SCPreviewFeatureMusicImpl _dismissLoadingIfNeeded] */

void FUN_105d8ce88(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x148) != 0) {
    func_0x00010c12c960();
    func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x148));
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d8ceec; end: 105d8d1ff; -[SCPreviewFeatureMusicImpl _downloadAndSelectMusicTrack:ctContext:sourcePageType:] */

void FUN_105d8ceec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x160));
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar4 = param_3;
  func_0x00010bf0f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0x160);
    *(undefined **)(param_1 + 0x160) = puVar3;
    _objc_release(uVar4);
    func_0x00010be7c3e0(param_1);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c277b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf0f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010c09ae60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(puVar3);
    _objc_retain(param_3);
    uVar12 = param_4;
    uStack_70 = param_5;
    _objc_retain(param_4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(param_1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d8d200; end: 105d8d2eb;  */

void FUN_105d8d200(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      if (*(long *)(lVar1 + 0x148) != 0) {
        func_0x00010c12c960();
        func_0x00010c2558c0(*(undefined8 *)(lVar1 + 0x148));
        uVar3 = *(undefined8 *)(lVar1 + 0x148);
        *(undefined8 *)(lVar1 + 0x148) = 0;
        _objc_release(uVar3);
      }
      if ((param_2 == 0) || (param_3 != 0)) {
        uVar3 = *(undefined8 *)(lVar1 + 0x160);
        *(undefined8 *)(lVar1 + 0x160) = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        FUN_105d899b0(uVar3,param_2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30))
        ;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedcf80(lVar1);
        lVar4 = lVar1 + 0x220;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c0d2f20();
        _objc_release(lVar4);
        uVar5 = *(undefined8 *)(lVar1 + 0x160);
        *(undefined8 *)(lVar1 + 0x160) = 0;
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d8d2ec; end: 105d8d3ef; -[SCPreviewFeatureMusicImpl _editorSelectionForPickerSelection:] */

void FUN_105d8d2ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010bdd8900(param_2);
  puVar1 = PTR_PTR_1126bf6f0;
  func_0x00010bfc7ba0(PTR_PTR_1126bf6f0,param_3,*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c277e80();
  lVar4 = param_4;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c277e80();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if ((puVar1 != (undefined *)0x0) && (lVar3 == lVar5)) {
    func_0x00010c2551e0(puVar1);
  }
  puVar6 = PTR_PTR_1126b2f28;
  _objc_alloc(PTR_PTR_1126b2f28);
  func_0x00010c035f20(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d8d3f0; end: 105d8d4ff; -[SCPreviewFeatureMusicImpl _initializeUIContainer] */

void FUN_105d8d3f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d8d500;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d8d500; end: 105d8d59b;  */

void FUN_105d8d500(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8d59c; end: 105d8d67f; -[SCPreviewFeatureMusicImpl _calculateSegmentDuration] */

undefined8 FUN_105d8d59c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c075080();
  if ((uVar2 & 1) == 0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x78);
    uStack_60 = *(undefined8 *)(param_2 + 0x70);
    uStack_48 = *(undefined8 *)(param_2 + 0x88);
    uStack_50 = *(undefined8 *)(param_2 + 0x80);
    uStack_38 = *(undefined8 *)(param_2 + 0x98);
    uStack_40 = *(undefined8 *)(param_2 + 0x90);
    uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    param_1 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    puVar4 = &uStack_60;
    uStack_70 = param_1;
    _CMTimeRangeEqual(puVar4,&uStack_90);
    if ((int)puVar4 == 0) {
      uStack_58 = *(undefined8 *)(param_2 + 0x90);
      param_1 = *(undefined8 *)(param_2 + 0x88);
      uStack_50 = *(undefined8 *)(param_2 + 0x98);
      uStack_60 = param_1;
      _CMTimeGetSeconds(&uStack_60);
      goto LAB_105d8d640;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276200();
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe75c0();
  }
  _objc_release(uVar3);
LAB_105d8d640:
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105d8d680; end: 105d8d72b; -[SCPreviewFeatureMusicImpl _shouldDisableMusicFeature] */

byte FUN_105d8d680(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13c9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe23e0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c078580();
    if ((uVar5 & 1) == 0) {
      bVar6 = *(byte *)(param_1 + 0x1a9);
    }
    else {
      bVar6 = 1;
    }
    _objc_release(uVar4);
  }
  else {
    bVar6 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar6 & 1;
}



/* Entry: 105d8d72c; end: 105d8d9b7; -[SCPreviewFeatureMusicImpl _setupAddSoundPillScope] */

void FUN_105d8d72c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x1b0);
  func_0x00010c071800();
  if ((int)puVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be5c320();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar2;
    _objc_release(uVar8);
    unaff_x20 = PTR_PTR_1126c4808;
    _objc_alloc();
    uVar8 = *(undefined8 *)(param_1 + 0xd8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2519e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00b380();
    _objc_release(uVar8);
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x1b0);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x1b0));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x1b0));
    lVar2 = param_1;
    func_0x00010be61780();
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf4be40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c108620();
      _objc_release(uVar8);
      _objc_release(uVar3);
    }
    unaff_x21 = param_1;
    func_0x00010bdc8560();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010bdc8580();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR_PTR_1126ae6b8;
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = unaff_x21;
    lStack_70 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x23;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x26;
    func_0x00010c25fd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar1);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    puVar1 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_100;
  pcStack_88 = FUN_105d8d9b8;
  puStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  lStack_b0 = unaff_x22;
  lStack_a8 = unaff_x21;
  puStack_a0 = unaff_x20;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_d8,puVar1);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105d8db6c;
  puStack_e8 = &UNK_1108e7e10;
  _objc_copyWeak(auStack_e0,auStack_d8);
  _objc_retainBlock(&puStack_100);
  puVar6 = puVar1;
  if (puVar1[0x1e8] == '\x01') {
    func_0x00010bdd1620(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar1;
    func_0x00010be61780();
    if ((int)puVar5 == 0) {
      func_0x00010bdf9680(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bde7aa0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar8 = *(undefined8 *)(puVar1 + 0xe8);
  func_0x00010c2519e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010bf41860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d8d9b8; end: 105d8db5b; -[SCPreviewFeatureMusicImpl _addSoundPillRecommendedStateObservable] */

void FUN_105d8d9b8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d8db6c;
  puStack_68 = &UNK_1108e7e10;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  lVar3 = param_1;
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    func_0x00010bdd1620(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010be61780();
    if ((int)lVar2 == 0) {
      func_0x00010bdf9680(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bde7aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c2519e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf41860(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105d8db5c; end: 105d8db6b;  */

void FUN_105d8db5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2468b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae750,PTR_s_someWithValue__11266f450,param_2);
  return;
}



/* Entry: 105d8db6c; end: 105d8dbff;  */

bool FUN_105d8db6c(long param_1,long param_2)

{
  bool bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 != 0 && *(long *)(param_1 + 0x60) == 0;
  }
  _objc_release();
  return bVar1;
}



/* Entry: 105d8dc00; end: 105d8dc6f; -[SCPreviewFeatureMusicImpl _defaultRecsObservable] */

void FUN_105d8dc00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d8dc70; end: 105d8dd67;  */

void FUN_105d8dc70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c47d8;
  if (lVar4 == 0) {
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123300(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d8dd68; end: 105d8df2f; -[SCPreviewFeatureMusicImpl _contentBasedRecsObservable] */

void FUN_105d8dd68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07f200();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bfdd0;
  puVar6 = PTR_PTR_1126ae960;
  if ((int)lVar3 == 0) {
    puVar4 = PTR_PTR_1126c4810;
    func_0x00010c2781c0(PTR_PTR_1126c4810);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c110d00(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d2960(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf4be40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde7a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfa9b40(uVar8,param_2,0,param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126ae6b8;
    uVar8 = uVar9;
    func_0x00010c13ca20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbc400(puVar5,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(puVar6);
  }
  else {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d8df30; end: 105d8e037;  */

void FUN_105d8df30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105d8e038;
  uStack_30 = 0x105d8e048;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126c47d8;
  if (puStack_48[5] == 0) {
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c123300();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d8e038; end: 105d8e04f;  */

void FUN_105d8e038(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d8e050; end: 105d8e087;  */

void FUN_105d8e050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d8e088; end: 105d8e08b;  */

void FUN_105d8e088(void)

{
  return;
}



/* Entry: 105d8e08c; end: 105d8e15f; -[SCPreviewFeatureMusicImpl _contentBasedRecommendationImage] */

void FUN_105d8e08c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29a1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    else {
      _objc_retain(lVar4);
      lVar5 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar5 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105d8e160; end: 105d8e1bf; -[SCPreviewFeatureMusicImpl _musicContentBasedRecommendationEnabled] */

undefined8 FUN_105d8e160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9c6a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2b20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105d8e1c0; end: 105d8e343; -[SCPreviewFeatureMusicImpl _autoApplyRecsObservable] */

void FUN_105d8e1c0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d8e344;
  puStack_78 = &UNK_1108a6c78;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar2 = &puStack_90;
  _objc_retainBlock(ppuVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105d8e610;
  puStack_a0 = &UNK_1108e7e10;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5e2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105d8e344; end: 105d8e58f;  */

void FUN_105d8e344(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c47d8;
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105d8e4d4;
  }
  puVar6 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be2df20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bf11340();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(puVar7);
LAB_105d8e468:
    puVar7 = puVar1;
    func_0x00010be61780();
    if ((int)puVar7 == 0) goto LAB_105d8e4ac;
    puVar7 = puVar1 + 0x20;
    _objc_loadWeakRetained();
    puVar3 = puVar7;
    func_0x00010c09a7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c07f200();
    _objc_release(puVar3);
    _objc_release(puVar7);
    if ((int)puVar4 != 0) goto LAB_105d8e4ac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105d8e590;
    puStack_60 = &UNK_1108e7f50;
    _objc_retain(puVar2);
    ppuVar8 = &puStack_78;
    puStack_58 = puVar2;
    _objc_retainBlock(ppuVar8);
    puVar3 = puVar1;
    func_0x00010bde7aa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar8);
    _objc_release(puStack_58);
  }
  else {
    puVar3 = puVar6;
    func_0x00010c123180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) goto LAB_105d8e468;
LAB_105d8e4ac:
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
LAB_105d8e4d4:
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d8e590; end: 105d8e60f;  */

void FUN_105d8e590(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c47d8;
  _objc_retain(param_2);
  func_0x00010bf8eb20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  uVar3 = param_2;
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d8e610; end: 105d8e66b;  */

bool FUN_105d8e610(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) ||
     ((*(long *)(param_1 + 0x60) != 0 && (lVar2 = param_1, func_0x00010bdf70c0(), (int)lVar2 == 0)))
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 != 0;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105d8e66c; end: 105d8e977; -[SCPreviewFeatureMusicImpl _handlePillStateForAutoApply:] */

void FUN_105d8e66c(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdf70c0();
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    _objc_release(uVar3);
    func_0x00010bf3c060(param_1,param_2,0);
  }
  if (param_3 == 0) {
    puVar11 = PTR_PTR_1126c47d8;
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105d8e8cc;
  }
  uVar4 = param_3;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (uVar6 == 0) {
    puVar11 = PTR_PTR_1126c47d8;
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = uVar6;
    func_0x0001084203fc();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x60) == 0) {
      uVar5 = param_3;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf11340();
      if ((uVar7 & 1) == 0) {
        _objc_release(uVar5);
        goto LAB_105d8e8a0;
      }
      bVar1 = *(byte *)(param_1 + 0x200);
      _objc_release(uVar5);
      if ((bVar1 & 1) != 0) goto LAB_105d8e8a0;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105d8e978;
      puStack_80 = &UNK_110848ba8;
      lStack_78 = param_1;
      _objc_retain(uVar4);
      uStack_70 = uVar4;
      _objc_retain(param_3);
      uStack_68 = param_3;
      func_0x00010c0f7fc0(uVar5,param_2,&puStack_98);
      _objc_release(uVar5);
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x1f0);
      *(ulong *)(param_1 + 0x1f0) = param_3;
      _objc_release(uVar3);
      uVar5 = param_3;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010bfd71a0();
      if ((int)uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        uVar8 = param_3;
        func_0x00010c123180(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf4e080();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bfadba0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar10;
        func_0x00010bfadea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar5);
      puVar12 = PTR_PTR_1126c47e0;
      _objc_alloc(PTR_PTR_1126c47e0);
      func_0x00010c04ab40();
      puVar11 = PTR_PTR_1126c47d8;
      func_0x00010c0fb980(PTR_PTR_1126c47d8,param_2,uVar4,puVar12,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(uVar13);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
    }
    else {
LAB_105d8e8a0:
      puVar11 = PTR_PTR_1126c47d8;
      func_0x00010c123300(PTR_PTR_1126c47d8,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar6);
LAB_105d8e8cc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105d8e978; end: 105d8ea2b;  */

void FUN_105d8e978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c123180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be05c80(uVar1,param_2,uVar2,uVar4,0xa9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x000107e480e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237c00(lVar5,param_2,1,lVar6);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105d8ea2c; end: 105d8eac7; -[SCPreviewFeatureMusicImpl _currentSelectionWasAutoApplied] */

long FUN_105d8ea2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x1f0) == 0)) {
    lVar4 = 0;
  }
  else {
    func_0x00010bf5cba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x1f0);
    func_0x00010c123180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010c071ae0(lVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  return lVar4;
}



/* Entry: 105d8eac8; end: 105d8ec0f; -[SCPreviewFeatureMusicImpl _addSoundPillMusicSelectionStateObservable] */

void FUN_105d8eac8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d8ec10;
  puStack_58 = &UNK_110845b50;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bf43280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c2519e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d8ec10; end: 105d8ed07;  */

void FUN_105d8ec10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010841fae8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126ae750;
      if (lVar2 == 0) {
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2468a0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d8ed08; end: 105d8ee37;  */

void FUN_105d8ed08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126ae750;
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126c47d8;
    func_0x00010bf8eb20(PTR_PTR_1126c47d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126c47e0;
    _objc_alloc(PTR_PTR_1126c47e0);
    func_0x00010c04ab40();
    puVar2 = PTR_PTR_1126c47d8;
    puVar4 = PTR_PTR_1126ae750;
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fb980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d8ee38; end: 105d8ee83;  */

void FUN_105d8ee38(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010bf1f3c0();
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d8ee84; end: 105d8ef93; -[SCPreviewFeatureMusicImpl _makeSoundPillViewContainer] */

void FUN_105d8ee84(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d8ef94;
  puStack_58 = &UNK_110849710;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d8ef94; end: 105d8efdb;  */

void FUN_105d8ef94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8efdc; end: 105d8f0ab;  */

void FUN_105d8efdc(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105d8f0ac; end: 105d8f0d7;  */

void FUN_105d8f0ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8f0d8; end: 105d8f18b; -[SCPreviewFeatureMusicImpl _attachSoundPillView:] */

void FUN_105d8f0d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 400),param_2,0);
  lVar3 = *(long *)(param_1 + 200);
  if (lVar3 != 0) {
    func_0x00010bf1f3c0();
    func_0x00010bea1b00(param_1,param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar2);
  }
  func_0x00010bde6580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d8f18c; end: 105d8f1bf; -[SCPreviewFeatureMusicImpl _detachSoundPillView] */

void FUN_105d8f18c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 400));
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



/* Entry: 105d8f1c0; end: 105d8f4e3; -[SCPreviewFeatureMusicImpl _constrainSoundPillView] */

void FUN_105d8f1c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  double dVar21;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 400);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1e3380(0x443b8000,lVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(param_1 + 400);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 400);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf49480(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 400);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 400);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar16 = param_1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.5;
  uVar18 = uVar15;
  func_0x00010bf49540();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar6 + 400) != 0) {
    lVar3 = lVar6 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((0.0 < dVar21) && (dVar21 != *(double *)(lVar6 + 0x1a0))) {
      *(double *)(lVar6 + 0x1a0) = dVar21;
      func_0x00010c069fa0(*(undefined8 *)(lVar6 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar6 + 400),PTR_s_setNeedsLayout_1126509b0);
      return;
    }
  }
  return;
}



/* Entry: 105d8f4e4; end: 105d8f587; -[SCPreviewFeatureMusicImpl previewViewDidLayoutSubviews] */

void FUN_105d8f4e4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 400) != 0) {
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfe5d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((0.0 < param_1) && (param_1 != *(double *)(param_2 + 0x1a0))) {
      *(double *)(param_2 + 0x1a0) = param_1;
      func_0x00010c069fa0(*(undefined8 *)(param_2 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 400),PTR_s_setNeedsLayout_1126509b0);
      return;
    }
  }
  return;
}



/* Entry: 105d8f588; end: 105d8f6bf; -[SCPreviewFeatureMusicImpl _setAddSoundPillHidden:] */

void FUN_105d8f588(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (lRam00000001136c22b0 != -1) {
    func_0x00010002a2fc(0x1136c22b0,&PTR___NSConcreteGlobalBlock_1108e80d0);
  }
  if ((bRam00000001136c22a8 & 1) != 0) {
    param_3 = param_3 | *(byte *)(param_1 + 0xc3);
  }
  lVar1 = *(long *)(param_1 + 400);
  if (lVar1 != 0) {
    func_0x00010c074c20();
    if ((param_3 & 1) != (uint)lVar1) {
      if ((param_3 & 1) == 0) {
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + 400));
      }
      func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d8f6c0; end: 105d8f6e7;  */

void FUN_105d8f6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*(byte *)(param_1 + 0x28) ^ 1),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 400),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d8f6e8; end: 105d8f737; -[SCPreviewFeatureMusicImpl _isMusicStickerRemovable] */

uint FUN_105d8f6e8(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0x1a8) & 1) == 0) && ((*(byte *)(param_1 + 0x1a9) & 1) == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c07b9c0();
    uVar2 = (uint)lVar1 ^ 1;
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 105d8f738; end: 105d8f7b7; -[SCPreviewFeatureMusicImpl _updateAutoapplyModifierIfNeededWithAction:] */

void FUN_105d8f738(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (lVar1 = param_1, func_0x00010be9e4c0(), (int)lVar1 != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c106880(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287de0();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d8f7b8; end: 105d8fb6f; -[SCPreviewFeatureMusicImpl _handleMemoriesAsset:completion:] */

void FUN_105d8f7b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0xf0));
    uVar1 = *(undefined8 *)(param_1 + 0x178);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar3);
    func_0x00010be8c9a0(param_1);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x158);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf80160();
      _objc_release(uVar1);
      _objc_initWeak(auStack_58,param_1);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105d8fb70;
      puStack_78 = &UNK_1108e7fc0;
      _objc_retain(param_3);
      lStack_70 = param_3;
      _objc_retain(param_4);
      lStack_68 = param_4;
      _objc_copyWeak(auStack_60,auStack_58);
      ppuVar4 = &puStack_90;
      _objc_retainBlock(ppuVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c2781c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80(param_3);
      uVar8 = uVar1;
      func_0x00010bfc7be0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_60);
      _objc_release(lStack_68);
      _objc_release(lStack_70);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_105d8fbf0;
      puStack_b0 = &UNK_1108e7ff0;
      _objc_copyWeak(auStack_98,auStack_58);
      _objc_retain(param_3);
      lStack_a8 = param_3;
      _objc_retain(param_4);
      ppuVar4 = &puStack_c8;
      lStack_a0 = param_4;
      _objc_retainBlock(ppuVar4);
      puVar6 = PTR_PTR_1126bfdd0;
      puVar3 = PTR_PTR_1126ae960;
      puVar5 = PTR_PTR_1126c4810;
      func_0x00010c2781c0(PTR_PTR_1126c4810);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c110d00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d2960(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c2781e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80(param_3);
      uVar8 = uVar1;
      func_0x00010bfcb620(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar7);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(puVar3);
      _objc_release(ppuVar4);
      _objc_release(lStack_a0);
      _objc_release(lStack_a8);
      _objc_destroyWeak(auStack_98);
    }
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d8fb70; end: 105d8fbef;  */

void FUN_105d8fb70(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beae2e0();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d8fbf0; end: 105d8fd5b;  */

void FUN_105d8fbf0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010bf43d60(*(undefined8 *)(lVar1 + 0xf0));
      uVar6 = *(undefined8 *)(lVar1 + 0xa8);
      lVar3 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf30e80();
      func_0x00010c10d220(0,uVar6);
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,0);
      }
    }
    else {
      puVar2 = PTR_PTR_1126bf6f0;
      func_0x00010bfc7ba0(PTR_PTR_1126bf6f0);
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)(param_1 + 0x20) == 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
      }
      else {
        func_0x00010bf0ffa0(&uStack_58);
      }
      puVar4 = puVar2;
      func_0x00010c081860(puVar2);
      lVar3 = param_2;
      FUN_105d8a040(param_2,&uStack_58,0x53,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea7420(lVar1);
      func_0x00010bdde4c0(lVar1);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5,lVar3);
      }
      _objc_release(lVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d8fd5c; end: 105d8fe83; -[SCPreviewFeatureMusicImpl _removeMusicStickerIfNecessary] */

void FUN_105d8fd5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126bf6f0;
  func_0x00010bfc7ba0(PTR_PTR_1126bf6f0,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef0120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105d8fe84; end: 105d8fefb;  */

void FUN_105d8fe84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf30e80();
    func_0x00010c10d220(0,uVar3,param_2,0,0,0,lVar2,1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d8fefc; end: 105d9005f; -[SCPreviewFeatureMusicImpl _setupMusicSyncWithTrack:] */

void FUN_105d8fefc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126bf6f0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bfc7ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010c081860(puVar1);
    uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lVar3 = lVar5;
    FUN_105d8a040(lVar5,&uStack_60,0x53,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar3;
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 0xa8);
    func_0x00010bfc7b80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c289b20(param_1);
    }
    else {
      func_0x00010c1b3d80(lVar5);
      func_0x00010bedf7e0(param_1);
    }
    lVar6 = param_1 + 0x220;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0d2f20();
    _objc_release(lVar6);
    func_0x00010bdde4c0(param_1);
    _objc_release(lVar5);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105d90060; end: 105d90223; -[SCPreviewFeatureMusicImpl _memoriesAssetWithCompletion:] */

void FUN_105d90060(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010bf926c0();
    if (iVar1 == 0) {
      uVar2 = param_1 + 0x20;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf0afe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = uVar5;
      func_0x00010c06cde0();
      if ((uVar2 & 1) == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0,0);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0c57a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar8);
        lVar9 = lVar8;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c135240(uVar7);
        _objc_release(param_1);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      _objc_release(uVar5);
    }
    else {
      func_0x00010be61860(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d90224; end: 105d904f3; -[SCPreviewFeatureMusicImpl _musicSelectionFromSnapDocWithCompletion:] */

void FUN_105d90224(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bed1220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be617e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (lVar2 == 0) {
        (**(code **)(param_3 + 0x10))(param_3,0,0);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        lVar5 = lVar2;
        func_0x00010c0c3fe0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c7240(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_initWeak(auStack_88,param_1);
        _objc_copyWeak(auStack_90,auStack_88);
        lVar5 = param_3;
        _objc_retain(param_3);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar7);
        _objc_release(lVar5);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_release(uVar7);
      }
    }
    else {
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0c57a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf5cc00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105d904f4;
      puStack_68 = &UNK_1108e8020;
      _objc_retain(param_3);
      lStack_58 = param_3;
      _objc_retain(lVar1);
      lStack_60 = lVar1;
      func_0x00010c135ec0(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(lStack_60);
      lVar2 = lStack_58;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d904f4; end: 105d90683;  */

void FUN_105d904f4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_2);
  lVar8 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    (**(code **)(lVar8 + 0x10))(lVar8,0,param_3);
  }
  else {
    puVar1 = PTR_PTR_1126b3030;
    _objc_alloc(PTR_PTR_1126b3030);
    func_0x00010c277e80(param_2);
    lVar2 = param_2;
    func_0x00010bf0ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ffa0(auStack_78,param_2);
    lVar3 = param_2;
    func_0x00010bf93480(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c0f9ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bf9e560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8c1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0(puVar1);
    (**(code **)(lVar8 + 0x10))(lVar8,puVar1,0);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105d90684; end: 105d907db;  */

void FUN_105d90684(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_3 == 0) && (lVar2 = param_2, func_0x00010c08fa60(), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c0c57a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(*(undefined8 *)(param_1 + 0x28));
      lVar2 = lVar1;
      _objc_opt_class(lVar1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135ea0(uVar4);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d907dc; end: 105d9097f;  */

void FUN_105d907dc(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b3030;
    _objc_alloc(PTR_PTR_1126b3030);
    func_0x00010c277e80(param_2);
    lVar2 = param_2;
    func_0x00010bf0ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ffa0(auStack_78,param_2);
    lVar3 = param_2;
    func_0x00010bf93480(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c0f9ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c0b3ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bf9e560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8c1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0(puVar1);
    _objc_release(param_2);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
    _objc_release(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105d9097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  return;
}



/* Entry: 105d90980; end: 105d90a3b; -[SCPreviewFeatureMusicImpl _musicPlaybackLayerFromSnapDocEditor:] */

void FUN_105d90980(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1108e8050);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d90a3c; end: 105d90a7f;  */

bool FUN_105d90a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 2;
}



/* Entry: 105d90a80; end: 105d90b3b; -[SCPreviewFeatureMusicImpl _unifiedMusicPlaybackLayerFromSnapDocEditor:] */

void FUN_105d90a80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1108e8070);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d90b3c; end: 105d90b4b;  */

void FUN_105d90b3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf6f0,PTR_s_isMusicTrackPlaybackLayer__1125fbae8,param_2);
  return;
}



/* Entry: 105d90b4c; end: 105d90beb; -[SCPreviewFeatureMusicImpl _isMusicPlaybackLayerEditable] */

uint FUN_105d90b4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1;
  func_0x00010bed1220(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be617e0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    if (param_1 != 0) goto LAB_105d90b98;
  }
  else {
LAB_105d90b98:
    lVar2 = lVar1;
    func_0x00010bfd6860();
    param_1 = lVar1;
    if ((int)lVar2 != 0) {
      func_0x00010bf8c1c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf2f860();
      uVar3 = (uint)lVar2 ^ 1;
      _objc_release(lVar1);
      goto LAB_105d90bd0;
    }
  }
  uVar3 = 1;
LAB_105d90bd0:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 105d90bec; end: 105d90c5b; -[SCPreviewFeatureMusicImpl _currentFilterIdObservable] */

void FUN_105d90bec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1599a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d90c5c; end: 105d90cc7;  */

void FUN_105d90c5c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfae5a0();
  if ((lVar1 == 4) || (lVar1 = param_2, func_0x00010bfae5a0(), lVar1 == 3)) {
    lVar1 = param_2;
    func_0x00010bfadea0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d90cc8; end: 105d90d33; -[SCPreviewFeatureMusicImpl _currentMusicPlaybackTimeObservable] */

void FUN_105d90cc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c075080();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    _objc_retain(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c0f9980(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d90d34; end: 105d90da3; -[SCPreviewFeatureMusicImpl _blocklistCTContextIfNeeded] */

void FUN_105d90d34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bdf70c0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf5cba0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1da60(uVar2,param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d90da4; end: 105d90e67; -[SCPreviewFeatureMusicImpl _selectionWasFromAutoPlayInCamera:] */

bool FUN_105d90da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c247a20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0xc9) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c247a20();
    bVar1 = lVar4 == 200;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105d90e68; end: 105d90f6b; -[SCPreviewFeatureMusicImpl _applyMiniPickerSelectionIfChanged] */

void FUN_105d90e68(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x60);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00010bedcf80(param_1);
    }
    else {
      func_0x00010be2c7c0(param_1,param_2,*(long *)(param_1 + 0x68),1,1);
    }
    uVar1 = *(ulong *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d90f6c; end: 105d90fd7; -[SCPreviewFeatureMusicImpl _removeMusicPickerScopeIfNeeded] */

void FUN_105d90f6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x118);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x118));
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_1 = param_1 + 0x220;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d2e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105d90fd8; end: 105d91077; -[SCPreviewFeatureMusicImpl setToolbarItemViewModel:] */

void FUN_105d90fd8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x230);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x230);
    *(long *)(param_1 + 0x230) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x208);
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



/* Entry: 105d91078; end: 105d9124b; -[SCPreviewFeatureMusicImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d911d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d91230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d911dc) */
/* WARNING: Removing unreachable block (ram,0x000105d91234) */
/* WARNING: Removing unreachable block (ram,0x000105d91238) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d91078(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  if (*(long *)(param_1 + 0x208) != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c13c9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe23e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((((int)lVar4 == 0) && (uVar5 = param_1, func_0x00010be42120(), (uVar5 & 1) != 0)) &&
        (uVar5 = param_1, func_0x00010c078320(), (uVar5 & 1) != 0)) &&
       (*(char *)(param_1 + 0x1a9) != '\x01')) {
      func_0x00010c15a4a0(*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar5 = param_1;
      func_0x00010c273aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar6 = PTR_PTR_1126c4388;
      if (uVar5 == 0) {
        puVar6 = PTR_PTR_1126c3cc0;
        _objc_alloc(PTR_PTR_1126c3cc0);
        func_0x00010c039d00();
      }
      else {
        func_0x00010c273aa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c112060(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b0b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar6 = (undefined *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar6);
    return;
  }
  return;
}



/* Entry: 105d9124c; end: 105d91263; -[SCPreviewFeatureMusicImpl delegate] */

void FUN_105d9124c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d91264; end: 105d9126f; -[SCPreviewFeatureMusicImpl setDelegate:] */

void FUN_105d91264(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x220,param_3);
  return;
}



/* Entry: 105d91270; end: 105d91287; -[SCPreviewFeatureMusicImpl parentViewControllerDelegate] */

void FUN_105d91270(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d91288; end: 105d91293; -[SCPreviewFeatureMusicImpl setParentViewControllerDelegate:] */

void FUN_105d91288(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x228,param_3);
  return;
}



/* Entry: 105d91294; end: 105d9129b; -[SCPreviewFeatureMusicImpl toolbarItemViewModel] */

undefined8 FUN_105d91294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 105d9129c; end: 105d91597; -[SCPreviewFeatureMusicImpl .cxx_destruct] */

void FUN_105d9129c(long param_1)

{
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_destroyWeak(param_1 + 0x228);
  _objc_destroyWeak(param_1 + 0x220);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d91598; end: 105d915ab;  */

void FUN_105d91598(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105d915ac; end: 105d916c3; -[SCPreviewFeatureMusicServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d915ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4820;
  _objc_alloc(PTR_PTR_1126c4820);
  func_0x00010c02cc80();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112735d80);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d916c4; end: 105d91ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d916c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112735d44;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar23 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar23);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c0811c0();
    if (((uVar2 & 1) == 0) &&
       ((uVar2 = uVar1, func_0x00010c06d080(), (uVar2 & 1) != 0 ||
        (uVar2 = uVar1, func_0x00010c230ba0(), (uVar2 & 1) != 0)))) {
      puVar23 = (undefined *)0x0;
    }
    else {
      lVar4 = param_1 + _DAT_112735d48;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d4c;
      _objc_loadWeakRetained();
      lVar6 = lVar4;
      func_0x00010bf0f6a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d50;
      _objc_loadWeakRetained();
      lVar7 = lVar4;
      func_0x00010c2705e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d54;
      _objc_loadWeakRetained();
      lVar8 = lVar4;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d58;
      _objc_loadWeakRetained();
      lVar9 = lVar4;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c270180();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d5c;
      _objc_loadWeakRetained();
      lVar12 = lVar4;
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d60;
      _objc_loadWeakRetained();
      lVar13 = lVar4;
      func_0x00010bf07a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d64;
      _objc_loadWeakRetained();
      lVar14 = lVar4;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d68;
      _objc_loadWeakRetained();
      lVar15 = lVar4;
      func_0x00010c23eec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d6c;
      _objc_loadWeakRetained();
      lVar16 = lVar4;
      func_0x00010c084e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d70;
      _objc_loadWeakRetained();
      lVar17 = lVar4;
      func_0x00010bf5cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d74;
      _objc_loadWeakRetained();
      lVar18 = lVar4;
      func_0x00010bf324a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_112735d78;
      _objc_loadWeakRetained();
      lVar9 = param_1 + _DAT_112735d7c;
      _objc_loadWeakRetained();
      lVar19 = lVar9;
      func_0x00010c29b9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      puVar23 = PTR_PTR_1126c4818;
      _objc_alloc();
      lVar9 = param_1 + _DAT_112735d20;
      _objc_loadWeakRetained();
      lVar10 = param_1 + _DAT_112735d24;
      _objc_loadWeakRetained();
      lVar20 = param_1 + _DAT_112735d28;
      _objc_loadWeakRetained(lVar20);
      lVar21 = param_1 + _DAT_112735d38;
      _objc_loadWeakRetained();
      lVar22 = param_1 + _DAT_112735d3c;
      _objc_loadWeakRetained();
      func_0x00010c030740(puVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar19);
      _objc_release(lVar4);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}


