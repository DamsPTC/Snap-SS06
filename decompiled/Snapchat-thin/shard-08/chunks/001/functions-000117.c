/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105df41f4; end: 105df431b; -[SCPreviewTooltipsProviderImpl shouldDisplayFirstCaptionHelpTooltip] */

uint FUN_105df41f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15e2e0();
  if (lVar3 == 0) {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar5 == 0) {
      return 0;
    }
  }
  uVar6 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c157560();
  _objc_release(uVar6);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000105df6098();
  if ((uVar7 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000105df608c();
    uVar8 = (uint)uVar5 ^ 1;
    _objc_release(uVar4);
  }
  else {
    uVar8 = 0;
  }
  _objc_release(uVar6);
  return uVar8;
}



/* Entry: 105df431c; end: 105df4383; -[SCPreviewTooltipsProviderImpl shouldDisplayLapsedCaptionHelpTooltip] */

ulong FUN_105df431c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c22f6e0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    if ((int)uVar3 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be33ce0(param_1);
    }
    _objc_release(uVar2);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105df4384; end: 105df43bb; -[SCPreviewTooltipsProviderImpl setDisplayedCaptionHelp] */

void FUN_105df4384(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df43bc; end: 105df4407; -[SCPreviewTooltipsProviderImpl setCaptionTooltipShown] */

void FUN_105df43bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c191020(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2afb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4408; end: 105df4453; -[SCPreviewTooltipsProviderImpl setCaptionUsedTimestamp] */

void FUN_105df4408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c191020(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2af98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4454; end: 105df449b; -[SCPreviewTooltipsProviderImpl shouldDisplayTrackingCaptionTooltip] */

uint FUN_105df4454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df449c; end: 105df44db; -[SCPreviewTooltipsProviderImpl setDisplayedTrackingCaptionTooltip] */

void FUN_105df449c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df44dc; end: 105df451b; -[SCPreviewTooltipsProviderImpl shouldDisplayVenueStickerTooltip] */

uint FUN_105df44dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c158120();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df451c; end: 105df4553; -[SCPreviewTooltipsProviderImpl setDisplayedVenueStickerTooltip] */

void FUN_105df451c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4554; end: 105df4593; -[SCPreviewTooltipsProviderImpl shouldDisplayVenueStickerStyleTooltip] */

uint FUN_105df4554(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c158100();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4594; end: 105df45cb; -[SCPreviewTooltipsProviderImpl setDisplayedVenueStickerStyleTooltip] */

void FUN_105df4594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df45cc; end: 105df460b; -[SCPreviewTooltipsProviderImpl shouldDisplayVenueFilterTooltip] */

uint FUN_105df45cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1580e0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df460c; end: 105df4643; -[SCPreviewTooltipsProviderImpl setDisplayedVenueFilterTooltip] */

void FUN_105df460c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4644; end: 105df4683; -[SCPreviewTooltipsProviderImpl shouldDisplayAudioFiltersTooltip] */

uint FUN_105df4644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157480();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4684; end: 105df46bb; -[SCPreviewTooltipsProviderImpl setDisplayedAudioFiltersTooltip] */

void FUN_105df4684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df46bc; end: 105df47ab; -[SCPreviewTooltipsProviderImpl shouldDisplaySwipeHelp] */

uint FUN_105df46bc(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1;
  func_0x00010be019e0();
  if ((int)uVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa840();
    _objc_release(uVar2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c23ec20();
  if ((uVar5 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a04e0();
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c158020();
  _objc_release(uVar4);
  uVar1 = 0;
  if (((uVar5 & 1) == 0) && ((uVar3 & 1) == 0)) {
    uVar5 = param_1;
    func_0x00010c22f720();
    if ((uVar5 & 1) == 0) {
      func_0x00010c22f400(param_1);
      uVar1 = (uint)param_1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 105df47ac; end: 105df47eb; -[SCPreviewTooltipsProviderImpl setDisplayedSwipeHelp] */

void FUN_105df47ac(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bea3700();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df47ec; end: 105df482b; -[SCPreviewTooltipsProviderImpl shouldDisplaySnapReplyStickerAnimation] */

uint FUN_105df47ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157e00();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df482c; end: 105df4863; -[SCPreviewTooltipsProviderImpl setDisplayedSnapReplyStickerAnimation] */

void FUN_105df482c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4864; end: 105df487b; -[SCPreviewTooltipsProviderImpl shouldDisplaySnapAndDriveWarning] */

uint FUN_105df4864(uint param_1)

{
  func_0x00010be019c0();
  return param_1 ^ 1;
}



/* Entry: 105df487c; end: 105df48bb; -[SCPreviewTooltipsProviderImpl setDisplayedSnapAndDriveWarning] */

void FUN_105df487c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df48bc; end: 105df4963; -[SCPreviewTooltipsProviderImpl shouldDisplayTrackingStickerTooltip] */

bool FUN_105df48bc(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010be46ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf64e40(0x4143c68000000000);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf8bde0(lVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 == lVar2;
    _objc_release();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105df4964; end: 105df49c7; -[SCPreviewTooltipsProviderImpl setDisplayedTrackingStickerTooltip] */

void FUN_105df4964(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e2add8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df49c8; end: 105df4a13; -[SCPreviewTooltipsProviderImpl shouldDisplayStickerMenuHint] */

bool FUN_105df49c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df4a14; end: 105df4a1f; -[SCPreviewTooltipsProviderImpl setDisplayedStickerMenuHint] */

void FUN_105df4a14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2aed8);
  return;
}



/* Entry: 105df4a20; end: 105df4a8b; -[SCPreviewTooltipsProviderImpl shouldDisplayHintForKey:] */

bool FUN_105df4a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c067f80();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1 < 3;
}



/* Entry: 105df4a8c; end: 105df4a8f; -[SCPreviewTooltipsProviderImpl setDisplayedHintForKey:] */

void FUN_105df4a8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38);
  return;
}



/* Entry: 105df4a90; end: 105df4adb; -[SCPreviewTooltipsProviderImpl shouldDisplayCustomStickerDeleteHintTooltip] */

bool FUN_105df4a90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df4adc; end: 105df4b6f; -[SCPreviewTooltipsProviderImpl setDisplayedCustomStickerDeleteHintTooltip] */

void FUN_105df4adc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x00010be38660(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ae58);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  if (2 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105df4b70; end: 105df4bbb; -[SCPreviewTooltipsProviderImpl shouldDisplayCustomStickerDeleteDragTooltip] */

bool FUN_105df4b70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df4bbc; end: 105df4c4f; -[SCPreviewTooltipsProviderImpl setDisplayedCustomStickerDeleteDragTooltip] */

void FUN_105df4bbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x00010be38660(param_1,param_2,&PTR____CFConstantStringClassReference_110e2ae78);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  if (2 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105df4c50; end: 105df4c8f; -[SCPreviewTooltipsProviderImpl shouldDisplayCustomStickerOnboardingVideo] */

uint FUN_105df4c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157640();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4c90; end: 105df4cc7; -[SCPreviewTooltipsProviderImpl setDisplayedCustomStickerOnboardingVideo] */

void FUN_105df4c90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4cc8; end: 105df4d13; -[SCPreviewTooltipsProviderImpl shouldDisplayCustomStickerCutoutSavedTooltip] */

bool FUN_105df4cc8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df4d14; end: 105df4d1f; -[SCPreviewTooltipsProviderImpl setDisplayedCustomStickerCutoutSavedTooltip] */

void FUN_105df4d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2af78);
  return;
}



/* Entry: 105df4d20; end: 105df4d6b; -[SCPreviewTooltipsProviderImpl shouldDisplayCustomStickerSavedTooltip] */

bool FUN_105df4d20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df4d6c; end: 105df4d77; -[SCPreviewTooltipsProviderImpl setDisplayedCustomStickerSavedTooltip] */

void FUN_105df4d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2af58);
  return;
}



/* Entry: 105df4d78; end: 105df4db7; -[SCPreviewTooltipsProviderImpl shouldDisplayBitmojiFriendmojiHint] */

uint FUN_105df4d78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1574e0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4db8; end: 105df4def; -[SCPreviewTooltipsProviderImpl setDisplayedBitmojiFriendmojiHint] */

void FUN_105df4db8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4df0; end: 105df4e37; -[SCPreviewTooltipsProviderImpl shouldDisplayStoriesIntro] */

uint FUN_105df4df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4e38; end: 105df4e83; -[SCPreviewTooltipsProviderImpl setDisplayedStoriesIntro] */

void FUN_105df4e38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c190790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayedStoriesIntroSend_112641c00);
  return;
}



/* Entry: 105df4e84; end: 105df4f0f; -[SCPreviewTooltipsProviderImpl shouldDisplayStoriesIntroSend] */

uint FUN_105df4e84(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157f60();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bdfd640();
  if (((int)lVar3 != 0) && ((uVar2 & 1) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa7e0();
    _objc_release(uVar4);
  }
  func_0x00010c22fc80(param_1);
  return (uint)param_1 & ((uint)uVar2 ^ 1);
}



/* Entry: 105df4f10; end: 105df4f77; -[SCPreviewTooltipsProviderImpl setDisplayedStoriesIntroSend] */

void FUN_105df4f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4f78; end: 105df4fb7; -[SCPreviewTooltipsProviderImpl shouldDisplayPinchResizeTeachingTooltip] */

uint FUN_105df4f78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157b00();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df4fb8; end: 105df4fef; -[SCPreviewTooltipsProviderImpl setDisplayedPinchResizeTeachingTooltip] */

void FUN_105df4fb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df4ff0; end: 105df5033; -[SCPreviewTooltipsProviderImpl shouldDisplayMultiSnapTeachingTooltip] */

bool FUN_105df4ff0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157960();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df5034; end: 105df5093; -[SCPreviewTooltipsProviderImpl setDisplayedMultiSnapTeachingTooltip] */

void FUN_105df5034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c157960();
  func_0x00010c1fa060(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5094; end: 105df50cb; -[SCPreviewTooltipsProviderImpl setFinishDisplayingMultiSnapTeachingTooltip] */

void FUN_105df5094(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df50cc; end: 105df511f; -[SCPreviewTooltipsProviderImpl shouldDisplayCropTeachingTooltip] */

uint FUN_105df50cc(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  func_0x00010bdfd600();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1575e0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 105df5120; end: 105df515f; -[SCPreviewTooltipsProviderImpl setDisplayedCropTeachingTooltip] */

void FUN_105df5120(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bea3680();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5160; end: 105df51a7; -[SCPreviewTooltipsProviderImpl shouldShowMultiSnapV2DeletionPrompt] */

uint FUN_105df5160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df51a8; end: 105df51e7; -[SCPreviewTooltipsProviderImpl setDoNotShowMultiSnapV2DeletionPrompt] */

void FUN_105df51a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df51e8; end: 105df5227; -[SCPreviewTooltipsProviderImpl shouldDisplayUserTaggingOnboardingTooltip] */

uint FUN_105df51e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1580c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df5228; end: 105df525f; -[SCPreviewTooltipsProviderImpl setDisplayedUserTaggingOnboardTooltip] */

void FUN_105df5228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5260; end: 105df5367; -[SCPreviewTooltipsProviderImpl shouldDisplayHintLabels] */

bool FUN_105df5260(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15e2e0();
  if (uVar3 < 0xb) {
    bVar9 = true;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15e2e0();
    if (uVar5 < 500) {
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010befe7e0();
      bVar9 = 0x27 < lVar8;
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      bVar9 = false;
    }
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar9;
}



/* Entry: 105df5368; end: 105df53a7; -[SCPreviewTooltipsProviderImpl shouldDisplayMusicPreviewTooltip] */

uint FUN_105df5368(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1579e0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df53a8; end: 105df53df; -[SCPreviewTooltipsProviderImpl setDisplayedMusicPreviewTooltip] */

void FUN_105df53a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df53e0; end: 105df53fb; -[SCPreviewTooltipsProviderImpl shouldDisplayPreviewFilterStackingUITooltip] */

bool FUN_105df53e0(ulong param_1)

{
  func_0x00010be9d480();
  return param_1 < 3;
}



/* Entry: 105df53fc; end: 105df545b; -[SCPreviewTooltipsProviderImpl setDisplayedPreviewFilterStackingUITooltip] */

void FUN_105df53fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c157bc0();
  func_0x00010c1fa320(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df545c; end: 105df54ab; -[SCPreviewTooltipsProviderImpl setUsedPreviewFilterStackingUI] */

void FUN_105df545c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be9d480();
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa320();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c190630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayedPreviewFilterStackin_112641ba8);
  return;
}



/* Entry: 105df54ac; end: 105df54eb; -[SCPreviewTooltipsProviderImpl shouldDisplayPreviewFilterStackingUISecondaryTooltip] */

uint FUN_105df54ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157ba0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df54ec; end: 105df5523; -[SCPreviewTooltipsProviderImpl setDisplayedPreviewFilterStackingUISecondaryTooltip] */

void FUN_105df54ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5524; end: 105df556f; -[SCPreviewTooltipsProviderImpl shouldDisplayCaptionsMenuHint] */

bool FUN_105df5524(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df5570; end: 105df557b; -[SCPreviewTooltipsProviderImpl setDisplayedCaptionsMenuHint] */

void FUN_105df5570(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2ae98);
  return;
}



/* Entry: 105df557c; end: 105df55c7; -[SCPreviewTooltipsProviderImpl shouldDisplayCutoutShimmer] */

bool FUN_105df557c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067f80();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 105df55c8; end: 105df55d3; -[SCPreviewTooltipsProviderImpl setDisplayedCutoutShimmer] */

void FUN_105df55c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2aeb8);
  return;
}



/* Entry: 105df55d4; end: 105df564f; -[SCPreviewTooltipsProviderImpl shouldDisplayTimelineModeRecordMoreTooltip] */

uint FUN_105df55d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbc80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1580a0();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  return uVar3;
}



/* Entry: 105df5650; end: 105df56cb; -[SCPreviewTooltipsProviderImpl shouldDisplayTimelineModeAddMoreSnapsTooltip] */

uint FUN_105df5650(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbc60();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c158080();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  return uVar3;
}



/* Entry: 105df56cc; end: 105df5713; -[SCPreviewTooltipsProviderImpl shouldDisplayTimelineDraftEditFromMemoriesTooltip] */

uint FUN_105df56cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df5714; end: 105df574b; -[SCPreviewTooltipsProviderImpl setDisplayedTimelineModeAddMoreSnapsTooltip] */

void FUN_105df5714(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df574c; end: 105df5783; -[SCPreviewTooltipsProviderImpl setDisplayedTimelineModeRecordMoreTooltip] */

void FUN_105df574c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5784; end: 105df57c3; -[SCPreviewTooltipsProviderImpl setDisplayedTimelineDraftEditFromMemoriesTooltip] */

void FUN_105df5784(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df57c4; end: 105df5803; -[SCPreviewTooltipsProviderImpl shouldDisplayDirectorModeClipLevelEditTooptip] */

uint FUN_105df57c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157680();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df5804; end: 105df583b; -[SCPreviewTooltipsProviderImpl setDisplayedDirectorModeClipLevelEditTooptip] */

void FUN_105df5804(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df583c; end: 105df587b; -[SCPreviewTooltipsProviderImpl shouldDisplayDirectorModeClipLevelEditFTUEModal] */

uint FUN_105df583c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157660();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df587c; end: 105df58b3; -[SCPreviewTooltipsProviderImpl setDisplayedDirectorModeClipLevelEditFTUEModal] */

void FUN_105df587c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df58b4; end: 105df58f3; -[SCPreviewTooltipsProviderImpl shouldDisplayDirectorModeClipReorderTooltip] */

uint FUN_105df58b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1576a0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105df58f4; end: 105df592b; -[SCPreviewTooltipsProviderImpl setDisplayedDirectorModeClipReorderTooltip] */

void FUN_105df58f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df592c; end: 105df5977; -[SCPreviewTooltipsProviderImpl shouldDisplayTimelineModeSuperCutTooltip] */

bool FUN_105df592c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067f80();
  _objc_release(lVar1);
  return lVar2 < 3;
}



/* Entry: 105df5978; end: 105df5983; -[SCPreviewTooltipsProviderImpl setDisplayedTimelineModeSuperCutTooltip] */

void FUN_105df5978(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be38670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__incrementPreferencesCountWithKe_11256bb38,
             &PTR____CFConstantStringClassReference_110e2af38);
  return;
}



/* Entry: 105df5984; end: 105df5a0f; -[SCPreviewTooltipsProviderImpl shouldDisplayFirstSaveTooltip] */

uint FUN_105df5984(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1820();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1840();
    _objc_release(lVar3);
    _objc_release(uVar1);
    if (lVar4 == 0) {
      func_0x00010c22f400(param_1);
      return (uint)param_1 ^ 1;
    }
  }
  return 0;
}



/* Entry: 105df5a10; end: 105df5a6f; -[SCPreviewTooltipsProviderImpl setDisplayFirstSaveTooltip] */

void FUN_105df5a10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1840();
  func_0x00010c19d300(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5a70; end: 105df5ab3; -[SCPreviewTooltipsProviderImpl shouldDisplayOneTapQuickPostTooltip] */

bool FUN_105df5a70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8940();
  _objc_release(uVar1);
  return uVar2 < 3;
}



/* Entry: 105df5ab4; end: 105df5b13; -[SCPreviewTooltipsProviderImpl setSeenOneTapQuickPostTooltip] */

void FUN_105df5ab4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e8940();
  func_0x00010c1fa220(uVar1,param_2,lVar3 + 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5b14; end: 105df5b2b; -[SCPreviewTooltipsProviderImpl shouldDisplayAutoCreativeFilterTooltip] */

uint FUN_105df5b14(uint param_1)

{
  func_0x00010c22f7e0();
  return param_1 ^ 1;
}



/* Entry: 105df5b2c; end: 105df5b63; -[SCPreviewTooltipsProviderImpl shouldDisplayHelpLabel] */

ulong FUN_105df5b2c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c22f400();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c22fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldDisplaySwipeHelp_112669970);
  return param_1;
}



/* Entry: 105df5b64; end: 105df5bab; -[SCPreviewTooltipsProviderImpl _didViewSwipeHelpLabel] */

undefined8 FUN_105df5b64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df5bac; end: 105df5beb; -[SCPreviewTooltipsProviderImpl _setDidViewSwipeHelpLabel] */

void FUN_105df5bac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5bec; end: 105df5c33; -[SCPreviewTooltipsProviderImpl _didViewSnapAndDriveWarning] */

undefined8 FUN_105df5bec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df5c34; end: 105df5cb3; -[SCPreviewTooltipsProviderImpl _lastDisplayedTrackingStickersTooltipTimestamp] */

void FUN_105df5c34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105df5cb4; end: 105df5cfb; -[SCPreviewTooltipsProviderImpl _didDisplayStoriesIntroSend] */

undefined8 FUN_105df5cb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df5cfc; end: 105df5d43; -[SCPreviewTooltipsProviderImpl _didDisplayCropTeachingTooltip] */

undefined8 FUN_105df5cfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df5d44; end: 105df5d83; -[SCPreviewTooltipsProviderImpl _setDidDisplayCropTeachingTooltip] */

void FUN_105df5d44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5d84; end: 105df5dc3; -[SCPreviewTooltipsProviderImpl _seenPreviewFilterStackingUITooltipCount] */

undefined8 FUN_105df5d84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157bc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105df5dc4; end: 105df5e4b; -[SCPreviewTooltipsProviderImpl _incrementPreferencesCountWithKey:] */

void FUN_105df5dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105df5e4c; end: 105df6013; -[SCPreviewTooltipsProviderImpl _hasCaptionUsageLapsed] */

bool FUN_105df5e4c(double param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88360();
  dVar6 = param_1;
  _objc_release(uVar2);
  dVar7 = dVar6;
  if (param_1 < 1.0) {
    func_0x00010c178b60(param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88360();
    dVar7 = dVar6;
    _objc_release(uVar2);
    param_1 = dVar6;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88360();
  dVar6 = dVar7;
  _objc_release(uVar2);
  if (dVar7 < 1.0) {
    func_0x00010c178be0(param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88360();
    _objc_release(uVar2);
    dVar7 = dVar6;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65620(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65620(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  dVar6 = dVar7;
  _objc_release(puVar5);
  func_0x00010bf307e0(*(undefined8 *)(param_2 + 0x38));
  if (dVar6 <= param_1) {
    func_0x00010bf30840(*(undefined8 *)(param_2 + 0x38));
    bVar1 = dVar6 <= dVar7;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 105df6014; end: 105df608b; -[SCPreviewTooltipsProviderImpl .cxx_destruct] */

void FUN_105df6014(long param_1)

{
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



/* Entry: 105df608c; end: 105df60a3;  */

void FUN_105df608c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolForKey__1125a5670,&PTR____CFConstantStringClassReference_110e2afd8);
  return;
}



/* Entry: 105df60a4; end: 105df60ef; -[SCPreviewUCOServiceProvider provide] */

void FUN_105df60a4(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bdf5240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4d58;
  _objc_alloc(PTR_PTR_1126c4d58);
  func_0x00010c056480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105df60f0; end: 105df627f; -[SCPreviewUCOServiceProvider _createUcoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105df60f0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1 + _DAT_112736f00;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar6;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar6 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar1);
  uVar1 = uVar6;
  func_0x00010c07e920();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0x10;
    if ((int)uVar1 == 0) {
      lVar7 = 0xc;
    }
    lVar7 = param_1 + *(int *)(&DAT_112736f00 + lVar7);
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010c27e5e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126c4d60;
  _objc_alloc(PTR_PTR_1126c4d60);
  if (param_1 == 0) {
    lVar7 = 0;
    param_1 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112736f08;
    _objc_loadWeakRetained(lVar7);
    param_1 = param_1 + _DAT_112736f04;
    _objc_loadWeakRetained(param_1);
  }
  lVar5 = param_1;
  func_0x00010c293740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0396c0(puVar2);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


