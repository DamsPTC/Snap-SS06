/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071d7c54; end: 1071d7e67; -[SCOperaSubtitlesPlugin _processSubtitlesAvailabilityFromMediaSelectionGroup:canEnableSubtitles:showSubtitlesOnSpotlightContext:] */

void FUN_1071d7c54(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010c106f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_3;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      lVar19 = *(long *)(lVar17 * 8);
      lVar6 = lVar19;
      func_0x00010c09e1e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        func_0x00010c09e1e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar19;
        func_0x00010c087ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar6);
        _objc_release(lVar19);
      }
      lVar17 = lVar17 + 1;
    } while (lVar10 != lVar17);
    lVar10 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010c16d840(param_1);
  uVar18 = (ulong)(puVar3 != (undefined *)0x0);
  puVar7 = puVar3;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010be829a0(param_1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  cVar1 = *(char *)(param_3 + 0x80);
  uVar9 = uVar18;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  if (cVar1 == '\x01') {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    lVar10 = *(long *)(param_3 + 0x18);
    func_0x00010c08fa60();
    if (lVar10 == 0) goto LAB_1071d806c;
    uVar9 = uVar11;
    func_0x00010c087f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 == 0) goto LAB_1071d806c;
    uVar12 = uVar11;
    func_0x00010c087f80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar13;
    func_0x000100504554();
    _objc_release(uVar13);
    _objc_release(uVar12);
    func_0x00010bed3760(param_3);
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    lVar10 = *(long *)(param_3 + 0x18);
    func_0x00010c08fa60();
    if ((lVar10 == 0) || (uVar11 == 0)) goto LAB_1071d806c;
    uVar9 = uVar11;
    func_0x00010bd869d0(uVar11,&PTR___NSConcreteGlobalBlock_1109924c8,0);
    uVar12 = uVar18;
    func_0x00010c118b40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010c0d3c80(uVar9);
    func_0x00010c1d0640();
    uVar15 = uVar14;
    func_0x00010bf51e00(uVar14);
    _objc_release(uVar14);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x98));
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    uVar12 = uVar9;
    func_0x00010bf002e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed3760(param_3);
    _objc_release(uVar12);
  }
  _objc_release(uVar9);
LAB_1071d806c:
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 1071d7e68; end: 1071d8093; -[SCOperaSubtitlesPlugin _processSubtitlesAvailabilityFromOperaPage:canEnableSubtitles:] */

void FUN_1071d7e68(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  cVar1 = *(char *)(param_1 + 0x80);
  lVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (cVar1 == '\x01') {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if (lVar2 == 0) goto LAB_1071d806c;
    lVar2 = lVar3;
    func_0x00010c087f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_1071d806c;
    lVar4 = lVar3;
    func_0x00010c087f80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x000100504554();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bed3760(param_1);
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_1071d806c;
    lVar2 = lVar3;
    func_0x00010bd869d0(lVar3,&PTR___NSConcreteGlobalBlock_1109924c8,0);
    lVar4 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0d3c80(lVar2);
    func_0x00010c1d0640();
    lVar7 = lVar6;
    func_0x00010bf51e00(lVar6);
    _objc_release(lVar6);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98));
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf002e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed3760(param_1);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
LAB_1071d806c:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071d8094; end: 1071d80f3;  */

void FUN_1071d8094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d50e0;
  func_0x00010c067fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c09e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_localeLanguageCodeForLanguageCod_1126052b0,param_2);
  return;
}



/* Entry: 1071d80f4; end: 1071d81b3; -[SCOperaSubtitlesPlugin _updateAvailableLocals:canEnableSubtitles:] */

void FUN_1071d80f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c16d840();
  lVar4 = param_1;
  func_0x00010bf12aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf12aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c23a560(uVar3);
  func_0x00010be829a0(param_1,param_2,lVar1 != 0,param_4,lVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071d81b4; end: 1071d82af; -[SCOperaSubtitlesPlugin _processedSubtitleAvailability:canEnableSubtitles:preferredLanguageCode:showSubtitlesOnSpotlightContext:] */

void FUN_1071d81b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_x4;
  undefined8 uVar4;
  
  _objc_retain(in_x4);
  lVar1 = param_1;
  func_0x00010bf12aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf12aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b0c0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4a954(uVar4,uVar3);
  _objc_release(uVar3);
  func_0x00010bee1540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1071d82b0; end: 1071d83bb; -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesForLanguage:] */

bool FUN_1071d82b0(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    bVar3 = false;
    goto LAB_1071d83a0;
  }
  uVar4 = *(ulong *)(param_2 + 200);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  uVar2 = param_4;
  if (param_4 == uVar4) {
    _objc_release(uVar4);
    _objc_release();
LAB_1071d8334:
    _UIAccessibilityIsClosedCaptioningEnabled();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_2 + 0x48;
      _objc_loadWeakRetained();
      uVar4 = uVar2;
      func_0x00010c07a4e0();
      if ((int)uVar4 == 0) {
        bVar3 = true;
      }
      else {
        param_2 = param_2 + 0x48;
        _objc_loadWeakRetained(param_2);
        func_0x00010c0ef220();
        bVar3 = param_1 <= 0.2;
        _objc_release(param_2);
      }
LAB_1071d8398:
      _objc_release(uVar2);
      goto LAB_1071d83a0;
    }
  }
  else {
    if (uVar4 == 0) {
      bVar3 = true;
      goto LAB_1071d8398;
    }
    uVar1 = param_4;
    func_0x00010c071ae0(param_4,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release();
    if ((int)uVar1 != 0) goto LAB_1071d8334;
  }
  bVar3 = true;
LAB_1071d83a0:
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 1071d83bc; end: 1071d83ff; -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesOnSettingsUpdateForLanguage:] */

uint FUN_1071d83bc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x78) == 2) {
    return 1;
  }
  lVar1 = param_1;
  func_0x00010beb34e0();
  return (uint)(*(long *)(param_1 + 0x78) == 0) & (uint)lVar1;
}



/* Entry: 1071d8400; end: 1071d84bb; -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesOnVolumeUpdateForLanguage:] */

bool FUN_1071d8400(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x78) != 2) {
    uVar1 = param_2;
    func_0x00010beb34e0(param_2,param_3,param_4);
    if ((*(long *)(param_2 + 0x78) != 0) || ((uVar1 & 1) == 0)) {
      if (*(long *)(param_2 + 0x78) == 1) {
        lVar2 = param_2 + 0x48;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c0ef220();
        if (param_1 <= 0.2) {
          bVar3 = 0.2 < *(float *)(param_2 + 0x20);
        }
        else {
          bVar3 = false;
        }
        _objc_release(lVar2);
      }
      else {
        bVar3 = false;
      }
      goto LAB_1071d8448;
    }
  }
  bVar3 = true;
LAB_1071d8448:
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 1071d84bc; end: 1071d8523; -[SCOperaSubtitlesPlugin _automaticUpdateSubtitlesEnabled:subtitlesAvailable:] */

void FUN_1071d84bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bef0a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c23a560(uVar2);
  func_0x00010bee1540(param_1,param_2,param_3,uVar1,param_4,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071d8524; end: 1071d86b7; -[SCOperaSubtitlesPlugin _updateSubtitlesEnabled:withLanguage:subtitlesAvailable:userTriggered:showSubtitlesOnSpotlightContext:] */

void FUN_1071d8524(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar5 = *(ulong *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  uVar1 = uVar5;
  func_0x00010bf125a0();
  if ((param_5 == (int)uVar1) && (uVar1 = uVar5, func_0x00010bf926c0(), param_3 == (uint)uVar1)) {
    uVar1 = uVar5;
    func_0x00010bf926c0();
    if ((param_3 == 0) || ((uVar1 & 1) == 0)) {
      _objc_release(param_4);
      _objc_release(uVar5);
      goto LAB_1071d8634;
    }
    uVar1 = uVar5;
    func_0x00010bef0a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(uVar5);
    if ((uVar3 & 1) != 0) goto LAB_1071d8634;
  }
  else {
    _objc_release(param_4);
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126c9448;
  _objc_alloc();
  func_0x00010c00f960();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar4);
  if ((int)param_6 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  func_0x00010bdcc600(param_1,param_2,param_6);
LAB_1071d8634:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071d86b8; end: 1071d894f; -[SCOperaSubtitlesPlugin _announceSubtitlesUpdate:] */

undefined * FUN_1071d86b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010bf125a0();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c2612c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126b2348;
    puStack_78 = puVar1;
    func_0x00010c293fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar2;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + 0xa8);
    if ((lVar6 == 0) || (func_0x00010c08fa60(), lVar6 == 0)) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar9 = *(undefined ***)(param_1 + 0xa8);
    }
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf30940(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,ppuVar9,puVar1);
    _objc_release(puVar1);
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar6);
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c2612e0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c0eb7c0(lVar6,param_2,puVar1,lVar7,puVar5);
    _objc_release(lVar7);
    _objc_release(puVar1);
    _objc_release(lVar6);
    if ((int)param_3 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf926c0();
      puVar1 = PTR_PTR_1126b2d30;
      if ((uVar8 & 1) == 0) {
        func_0x00010bf80940(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf91f40();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar6 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar6);
      lVar7 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c0eb7c0(lVar6,param_2,puVar1,lVar7,0);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar1);
    }
    _objc_release();
    puVar1 = puVar5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c072720();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = (undefined *)(param_1 + 0x40);
      _objc_loadWeakRetained();
      func_0x00010c101400();
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 0xc0);
}



/* Entry: 1071d8950; end: 1071d8957; -[SCOperaSubtitlesPlugin availableSubtitlesLocales] */

undefined8 FUN_1071d8950(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1071d8958; end: 1071d895f; -[SCOperaSubtitlesPlugin setAvailableSubtitlesLocales:] */

void FUN_1071d8958(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1071d8960; end: 1071d8967; -[SCOperaSubtitlesPlugin defaultLanguage] */

undefined8 FUN_1071d8960(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1071d8968; end: 1071d896f; -[SCOperaSubtitlesPlugin setDefaultLanguage:] */

void FUN_1071d8968(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1071d8970; end: 1071d8a63; -[SCOperaSubtitlesPlugin .cxx_destruct] */

void FUN_1071d8970(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071d8a64; end: 1071d8b2f; -[SCLegacySpotlightServices initWithSpotlightQueryCoordinator:spotlightPlaybackManager:playbackManagerFactory:] */

undefined1 *
FUN_1071d8a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8be0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071d8b30; end: 1071d8b37; -[SCLegacySpotlightServices spotlightQueryCoordinator] */

undefined8 FUN_1071d8b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1071d8b38; end: 1071d8b3f; -[SCLegacySpotlightServices spotlightPlaybackManager] */

undefined8 FUN_1071d8b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071d8b40; end: 1071d8b47; -[SCLegacySpotlightServices playbackManagerFactory] */

undefined8 FUN_1071d8b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071d8b48; end: 1071d8b83; -[SCLegacySpotlightServices .cxx_destruct] */

void FUN_1071d8b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071d8b84; end: 1071d8d8f;  */

void FUN_1071d8b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d50e8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c2177e0();
  _objc_release(param_2);
  func_0x00010c217980(puVar1);
  func_0x00010c20fca0(puVar1);
  puVar2 = PTR_PTR_1126c0e20;
  _objc_opt_new(PTR_PTR_1126c0e20);
  func_0x00010c21e620();
  _objc_release(param_1);
  func_0x00010c184960(puVar2);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111181628;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111181628);
  func_0x00010c1b7520(puVar2);
  _objc_release(ppuVar3);
  func_0x00010c1bf3e0(puVar2);
  func_0x00010c175f00(puVar2);
  puVar4 = PTR_PTR_1126c0f90;
  _objc_opt_new(PTR_PTR_1126c0f90);
  if (param_4 != 0) {
    func_0x00010c1b8a60(puVar4);
  }
  func_0x00010c21a2a0(puVar4);
  puVar5 = puVar4;
  func_0x00010c19b200(puVar4);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar4);
  _objc_release(puVar5);
  func_0x00010c217840(puVar4);
  func_0x00010c1ec040(puVar4);
  func_0x00010c17cd40(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1071d8d90; end: 1071d900f;  */

void FUN_1071d8d90(double param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uStack_80;
  ulong uStack_78;
  
  _objc_retain();
  uVar3 = param_2;
  func_0x00010bfd6b20();
  if ((int)uVar3 == 0) {
    puVar16 = (undefined *)0x0;
    goto LAB_1071d8fe0;
  }
  uVar3 = param_2;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar16);
  uVar14 = param_2;
  func_0x00010bfdda40();
  if ((int)uVar14 == 0) {
    uVar14 = 0;
LAB_1071d8eac:
    uStack_78 = 0;
    bVar1 = false;
    uStack_80 = 0;
  }
  else {
    uVar14 = param_2;
    func_0x00010c27ba80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar14 == 0) goto LAB_1071d8eac;
    uStack_78 = uVar14;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c275720();
    iVar2 = (int)uVar4;
    uVar5 = 0;
    if (iVar2 == 2) {
      uVar5 = 2;
    }
    uVar6 = 3;
    if (iVar2 != 3) {
      uVar6 = uVar5;
    }
    bVar1 = true;
    uStack_80 = uVar4 & 0xffffffff;
    if (iVar2 != 1) {
      uStack_80 = uVar6;
    }
  }
  uVar5 = uVar14;
  func_0x000108f50a90();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar15 = (undefined *)0x0;
  if ((bVar1) && (uVar5 != 0)) {
    uVar4 = uVar14;
    func_0x00010c275220(uVar14);
    func_0x00010c0df820(puVar16,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar16;
  }
  puVar16 = PTR_PTR_1126ca6f8;
  _objc_alloc();
  uVar4 = uVar3;
  func_0x00010bf1f680();
  uVar6 = uVar3;
  func_0x00010c22a980();
  uVar7 = uVar3;
  func_0x00010c29c5c0(uVar3);
  uVar8 = uVar3;
  func_0x00010c25e440(uVar3);
  uVar9 = uVar3;
  func_0x00010c129760(uVar3);
  uVar10 = uVar3;
  func_0x00010c24b7a0();
  uVar11 = uVar3;
  func_0x00010c24b580();
  uVar12 = uVar3;
  func_0x00010c24ba40();
  uVar13 = uVar3;
  func_0x00010c123100();
  func_0x00010c052aa0(param_1 * 1000.0,puVar16,param_3,uVar4,uVar6,uVar7,uVar8,uVar9,uStack_78,
                      uStack_80,uVar5,puVar15,uVar10,uVar11,uVar12,uVar13);
  _objc_release(puVar15);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(uVar14);
  _objc_release(uVar3);
LAB_1071d8fe0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1071d9010; end: 1071d9187; +[SCSOJUIdentityDeepLinkVerifier verifyDeeplinkRequest:requestManager:snapTokenProvider:completion:] */

void FUN_1071d9010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1071d9188;
  puStack_80 = &UNK_11086c960;
  uStack_78 = param_3;
  uStack_70 = param_4;
  _objc_retain(param_6);
  uStack_68 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar2 = &puStack_98;
  _objc_retainBlock(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1071d93f0;
  puStack_a8 = &UNK_110859a38;
  uStack_a0 = param_6;
  _objc_retain(param_6);
  _objc_retainBlock(&puStack_c0);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010bfa48e0(param_5,param_2,6,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,ppuVar2,ppuVar3);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071d9188; end: 1071d936f;  */

void FUN_1071d9188(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271c60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f700(uVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1071d9370; end: 1071d93db;  */

void FUN_1071d9370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d50f0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0206e0();
  _objc_release(param_4);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071d93dc; end: 1071d9403;  */

void FUN_1071d93dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071d93ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1071d9404; end: 1071d956b; +[SCSOJUIdentityDeepLinkVerifier verifyDeeplinkRequestWithUserName:action:requestManager:snapTokenProvider:completion:] */

void FUN_1071d9404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b3fb0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar2);
  if (param_4 - 1U < 3) {
    uVar4 = *(undefined8 *)(&UNK_10de20008 + (param_4 - 1U) * 8);
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c18a760(puVar2,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a0440(puVar2,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b3f90;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071d956c;
  puStack_60 = &UNK_1109924e8;
  uStack_58 = param_7;
  _objc_retain(param_7);
  func_0x00010c298800(puVar1,param_2,puVar3,param_5,param_6,&puStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_58);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1071d956c; end: 1071d9617;  */

void FUN_1071d956c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb8060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb91c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071d9618; end: 1071d994b; -[SCExportMyStoriesManager initWithUserSession:delegate:blizzardLogger:customStoriesDataFetcher:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:featureSettingsService:memoriesStoryMutator:galleryStorySaver:circumstanceEngine:userBlizzardLogger:grapheneRegistry:genAIDreamsService:] */

undefined8 *
FUN_1071d9618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f8be8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 1071d994c; end: 1071d9957; -[SCExportMyStoriesManager saveEntireStorySequence:isMultiSnapBundle:onError:] */

void FUN_1071d994c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_saveEntireStorySequence_isMultiS_112630350,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1071d9958; end: 1071d9c6f; -[SCExportMyStoriesManager saveEntireStorySequence:isMultiSnapBundle:isStoryManagedByCurrentUser:onError:] */

void FUN_1071d9958(long param_1,undefined8 param_2,undefined *param_3,undefined1 param_4,int param_5
                  ,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    puVar2 = PTR_PTR_1126b1338;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720(param_3);
    puVar4 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1071d9c70;
    puStack_70 = &UNK_1108537c0;
    _objc_retain(uVar1);
    puVar5 = puVar4;
    uStack_68 = uVar1;
    func_0x0001006372a4(puVar4,&puStack_88);
    func_0x00010c04dbe0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uStack_68);
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  puVar3 = puVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c25b720();
    if (puVar3 == (undefined *)0x2) {
      _objc_initWeak(auStack_90,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c259cc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_a0,auStack_90);
      _objc_retain(puVar2);
      uStack_98 = param_4;
      _objc_retain(param_6);
      func_0x00010bf62500(uVar6);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar3);
      _objc_release(uVar6);
      _objc_release(param_6);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_90);
    }
    else {
      func_0x00010be98f60(param_1);
    }
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1071d9c70; end: 1071d9cb7;  */

undefined8 FUN_1071d9c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf5bbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1071d9cb8; end: 1071d9d0f;  */

void FUN_1071d9cb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071d9d10; end: 1071da027; -[SCExportMyStoriesManager _saveEntireStorySequence:customStory:isMultiSnapBundle:onError:] */

void FUN_1071d9d10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108e00cf8();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000108e00d3c();
  _objc_release(uVar3);
  lVar7 = *(long *)(param_1 + 0x38);
  lVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar7 == 0) {
    lVar4 = param_3;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar4 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      lVar6 = param_3;
      func_0x00010c25b720(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010795da60(lVar5,uVar1,uVar2,lVar6 == 2,uVar3,*(undefined8 *)(param_1 + 0x80));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      lVar4 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(lVar4);
      _dispatch_group_create();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      lVar6 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(lVar6);
      if ((int)uVar2 != 0) {
        _dispatch_group_enter(lVar4);
        func_0x00010be0c820(param_1);
      }
      if ((int)uVar1 != 0) {
        _dispatch_group_enter(lVar4);
        func_0x00010be99720(param_1);
      }
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1071da028;
      puStack_88 = &UNK_110858b70;
      _objc_retain(param_3);
      lStack_80 = param_3;
      _objc_retain(param_4);
      uStack_78 = param_4;
      lStack_70 = param_1;
      uStack_68 = param_5;
      func_0x000100bc0718(lVar4,PTR___dispatch_main_q_11034be20,&puStack_a0);
      _objc_release(uStack_78);
      _objc_release(lStack_80);
      _objc_release(lVar4);
      _objc_release(lVar5);
    }
  }
  _objc_release(lVar7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071da028; end: 1071da18b;  */

void FUN_1071da028(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c25b720();
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf85d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x30) + 0x10;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2560(lVar1,param_2,uVar3,uVar2,lVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,0,uVar3);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,0,uVar3);
  _objc_release(uVar3);
  if (lVar4 == 0) {
    func_0x00010be58120(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined1 *)(param_1 + 0x38));
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071da18c; end: 1071da32b; -[SCExportMyStoriesManager _exportMyStorySequence:] */

void FUN_1071da18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar3 == (undefined *)0x0) {
    uVar1 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa60);
    func_0x00010c246ba0(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a4fa60);
    _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa60);
    puVar3 = PTR_PTR_1126d50f8;
    _objc_alloc(PTR_PTR_1126d50f8);
    func_0x00010c04ce60();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,puVar3,uVar1);
    _objc_release(uVar1);
    func_0x00010c18b5e0(puVar3,param_2,param_1);
    uVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198fe0(puVar3,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  func_0x00010c24eb40(puVar3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2a20(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071da32c; end: 1071da34b;  */

void FUN_1071da32c(void)

{
  _objc_alloc(PTR_PTR_1126b1350);
  func_0x00010bfeee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071da34c; end: 1071da4ff; -[SCExportMyStoriesManager _saveMyStorySequenceToMemories:customStory:saveGroup:onError:] */

void FUN_1071da34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077960();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = auStack_58;
    _objc_initWeak(puVar3,param_1);
    func_0x0001071dc128();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be99700(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071da500; end: 1071da9b7;  */

void FUN_1071da500(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar17 = *plStack_130;
    do {
      lVar10 = 0;
      lVar4 = lVar7;
      do {
        if (*plStack_130 != lVar17) {
          lVar4 = lVar3;
          _objc_enumerationMutation();
        }
        uVar16 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        _dispatch_group_create();
        _dispatch_group_enter();
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c259cc0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_178 = 0xc2000000;
        pcStack_170 = FUN_1071da9b8;
        puStack_168 = &UNK_110992588;
        _objc_retain(puVar1);
        puStack_160 = puVar1;
        _objc_retain(puVar2);
        puStack_158 = puVar2;
        uStack_150 = uVar16;
        lStack_148 = lVar4;
        _objc_retain(lVar4);
        func_0x00010bfc0380(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _dispatch_group_wait(lVar4,0xffffffffffffffff);
        _objc_release(lStack_148);
        _objc_release(puStack_158);
        _objc_release(puStack_160);
        _objc_release();
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release();
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c25b720();
  if (lVar7 == 2) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x30);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c27dd80();
  }
  else {
    uVar5 = 0;
    lVar7 = lVar3;
  }
  plVar11 = (long *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(*plVar11 + 0x68);
  _objc_retain(uVar15);
  uVar6 = *(undefined8 *)(*plVar11 + 0x60);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(*plVar11 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbd540();
  puVar8 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  lVar3 = param_1 + 0x48;
  _objc_copyWeak(auStack_188);
  _objc_retain(puVar1);
  _objc_retain(uVar15);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar14);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar12);
  func_0x00010c14b360(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_188);
  _objc_release(uVar15);
  _objc_release(lVar7);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_188);
    __Unwind_Resume();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(puVar1 + 0x20);
      _objc_retain(lVar3);
      func_0x00010befa120(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(puVar1 + 0x28);
      lVar7 = lVar3;
      func_0x00010c25b200(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010c1d0640(uVar5);
      _objc_release(lVar7);
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(puVar1 + 0x38));
    return;
  }
  return;
}



/* Entry: 1071da9b8; end: 1071daa67;  */

void FUN_1071da9b8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010befa120(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c25b200(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1071daa68; end: 1071dac53;  */

void FUN_1071daa68(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 unaff_x23;
  long lVar6;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar7;
  long lVar8;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_4;
  lVar6 = param_5;
  _objc_retain(param_5);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((int)param_4 == 0) || (param_5 != 0)) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_5);
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar6 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar6);
      lVar2 = lVar6;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar8 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar6);
            }
            unaff_x25 = *(undefined8 *)(lStack_128 + lVar8 * 8);
            unaff_x26 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf3a5c0();
            _objc_release(unaff_x26);
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
          lVar2 = lVar6;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar6);
    }
    unaff_x23 = *(undefined8 *)(lVar1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    unaff_x24 = *(long *)(lVar1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(lVar1 + 0x80);
    param_3 = param_5;
    lVar2 = unaff_x24;
    func_0x00010795dd20(unaff_x23,param_4);
    _objc_release(unaff_x24);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
    _objc_release(unaff_x23);
  }
  _objc_release(lVar1);
  lVar7 = param_5;
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1071dac54;
  uStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = param_4;
  lStack_158 = param_1;
  lStack_150 = lVar1;
  lStack_148 = param_5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(lVar2);
  lVar8 = lVar6;
  _objc_retain();
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c25b720();
  lVar1 = lVar8;
  if (lVar4 == 2) {
    lVar4 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    _objc_retain(lVar1);
    _objc_release(lVar8);
    _objc_release(lVar4);
  }
  puVar5 = auStack_188;
  _objc_initWeak(puVar5,lVar7);
  func_0x0001071dc128();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(param_3);
  _objc_retain(lVar6);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(puVar5);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1071dac54; end: 1071dadff; -[SCExportMyStoriesManager _saveMyStorySequenceToMemTwo:customStory:saveGroup:] */

void FUN_1071dac54(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25b720();
  lVar4 = lVar1;
  if (lVar2 == 2) {
    lVar2 = param_4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    _objc_retain(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  puVar3 = auStack_58;
  _objc_initWeak(puVar3,param_1);
  func_0x0001071dc128();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(lVar4);
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071dae00; end: 1071db11b;  */

void FUN_1071dae00(long param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **unaff_x25;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar12 = *plStack_130;
      do {
        lVar9 = 0;
        lVar5 = lVar4;
        do {
          if (*plStack_130 != lVar12) {
            lVar5 = lVar3;
            _objc_enumerationMutation();
          }
          uVar11 = *(undefined8 *)(lStack_138 + lVar9 * 8);
          _dispatch_group_create();
          _dispatch_group_enter();
          unaff_x25 = *(undefined ***)(lVar1 + 0x68);
          func_0x00010c269d40(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c259cc0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_1071db11c;
          puStack_160 = &UNK_1109925e8;
          _objc_retain(puVar2);
          puStack_158 = puVar2;
          uStack_150 = uVar11;
          lStack_148 = lVar5;
          _objc_retain(lVar5);
          func_0x00010c14b240(unaff_x25);
          _objc_release(uVar6);
          _objc_release(unaff_x25);
          _dispatch_group_wait(lVar5,0xffffffffffffffff);
          _objc_release(lStack_148);
          _objc_release(puStack_158);
          _objc_release();
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    puVar7 = puVar2;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      param_2 = &PTR____CFConstantStringClassReference_110ea1c38;
      uVar6 = 0x2afb;
      FUN_1071db168(0x2afb);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be17000(lVar1);
      _objc_release(uVar6);
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x68);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_1071db244;
      puStack_198 = &UNK_110950030;
      unaff_x25 = &puStack_1b0;
      param_2 = (undefined **)(param_1 + 0x38);
      _objc_copyWeak(auStack_180);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uStack_190 = uVar10;
      _objc_retain(uVar11);
      uStack_188 = uVar11;
      func_0x00010c14b2c0(uVar6);
      _objc_release(uVar6);
      _objc_release(uStack_188);
      _objc_release(uStack_190);
      _objc_destroyWeak(auStack_180);
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 6);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar8 = param_2;
  func_0x00010c08fa60();
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010befa120(*(undefined8 *)(lVar1 + 0x20));
  }
  _dispatch_group_leave(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071db11c; end: 1071db167;  */

void FUN_1071db11c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071db168; end: 1071db243;  */

void FUN_1071db168(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea1bf8;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  _objc_retain(ppuVar5);
  puVar1 = puVar1 + 0x30;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = lVar4;
    func_0x00010c08fa60();
    if (ppuVar5 == (undefined **)0x0 && lVar6 != 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else if (ppuVar5 == (undefined **)0x0) {
      ppuVar3 = (undefined **)0x2afc;
      FUN_1071db168(0x2afc,&PTR____CFConstantStringClassReference_110ea1c58);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar5);
      ppuVar3 = ppuVar5;
    }
    func_0x00010be17000(puVar1);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071db244; end: 1071db317;  */

void FUN_1071db244(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (param_3 == 0 && lVar1 != 0) {
      lVar1 = 0;
    }
    else if (param_3 == 0) {
      lVar1 = 0x2afc;
      FUN_1071db168(0x2afc,&PTR____CFConstantStringClassReference_110ea1c58);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      lVar1 = param_3;
    }
    func_0x00010be17000(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071db318; end: 1071db4f3; -[SCExportMyStoriesManager _finishMemTwoStorySave:success:error:saveGroup:] */

void FUN_1071db318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1071db404;
  puStack_70 = &UNK_110878f70;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071db4f4; end: 1071dba23; -[SCExportMyStoriesManager _logSaveEntireStorySequence:isMultiSnapBundle:] */

void FUN_1071db4f4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108e00d3c();
  _objc_release(uVar2);
  lVar9 = param_3;
  func_0x00010c25b720();
  if (lVar9 == 2) {
    lVar9 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x0001085332dc();
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar9);
    lVar9 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d5100;
  }
  else {
    lVar9 = 0;
    lVar12 = -1;
    puVar5 = PTR_PTR_1126d5100;
  }
  PTR_PTR_1126d5100 = puVar5;
  if ((param_4 & 1) == 0) {
    _objc_opt_new(puVar5);
    lVar4 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf529e0();
    func_0x00010c2ba660(puVar5,param_2,lVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c2b7800(puVar5,param_2,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c25b720();
    if (lVar4 == 2) {
      func_0x00010c2ba720(puVar5,param_2,lVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b6440(puVar5,param_2,lVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1200(uVar2,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar12 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        lVar13 = *(long *)(lStack_128 + lVar10 * 8);
        puVar5 = PTR_PTR_1126b1360;
        _objc_opt_new(PTR_PTR_1126b1360);
        lVar7 = lVar13;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          lVar8 = lVar13;
          func_0x00010bf3cf60(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ba680(puVar5,param_2,lVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar8);
        }
        else {
          func_0x00010c2ba680(puVar5,param_2,lVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(lVar7);
        lVar7 = lVar13;
        func_0x00010bf5bbc0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b5900(puVar5,param_2,lVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar7);
        func_0x00010c2b7800(puVar5,param_2,uVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar7 = lVar13;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c27dd80();
        func_0x0001084f2c4c();
        uVar1 = lVar8 + 1;
        if (uVar1 < 0x1c) {
          if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
            if (uVar1 == 8) {
              uVar2 = 5;
            }
            else {
              if (uVar1 != 10) goto LAB_1071db9a4;
              uVar2 = 0xe;
            }
          }
          else if (lVar8 + 1U < 0x1c && (1L << (lVar8 + 1U & 0x3f) & 0xb4b5dbbU) != 0) {
            if (lVar8 < 0x1a) {
              uVar2 = *(undefined8 *)(&UNK_10de20028 + lVar8 * 8);
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
LAB_1071db9a4:
          uVar2 = 2;
        }
        func_0x00010c2b3b00(puVar5,param_2,uVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar13;
        func_0x00010bf0e700(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x000108532db8();
        func_0x00010c2ba700(puVar5,param_2,lVar8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = param_3;
        func_0x00010c25b720();
        if (lVar7 == 2) {
          lVar7 = param_3;
          func_0x00010c259cc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b6440(puVar5,param_2,lVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar7);
          func_0x00010bf0e700(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar13;
          func_0x0001085332dc();
          func_0x00010c2ba720(puVar5,param_2,lVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar13);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        puVar6 = puVar5;
        func_0x00010bf21f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b1180(uVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1071dba24; end: 1071dba27; -[SCExportMyStoriesManager storyExporter:didProceedToProgress:] */

void FUN_1071dba24(void)

{
  return;
}



/* Entry: 1071dba28; end: 1071dbe1b; -[SCExportMyStoriesManager storyExporter:didFinishExportingToURL:withError:] */

void FUN_1071dba28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010bf1f440();
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    uVar7 = param_3;
    func_0x00010bf9d460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar7);
    if (lVar6 == 0) goto LAB_1071dbdc0;
  }
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1071dbe1c;
  puStack_88 = &UNK_110992618;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = param_3;
  func_0x00010bf9d460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8);
  _objc_release(uVar7);
  if (param_5 == 0) {
    puVar3 = PTR_PTR_1126b1348;
    func_0x00010c22b6a0(PTR_PTR_1126b1348);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    func_0x00010c14af80(puVar3);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    uVar7 = param_3;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = param_3;
    func_0x00010bf9d460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8);
    _objc_release(uVar7);
    lVar6 = param_5;
    func_0x00010bf3ec40();
    puVar3 = PTR_PTR_1126afca8;
    if (lVar6 == 0x280) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea1cb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea1cb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar3);
    }
    else {
      lVar6 = param_5;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c0720c0();
      if ((int)lVar4 == 0) {
        _objc_release(lVar6);
      }
      else {
        lVar4 = param_5;
        func_0x00010bf3ec40();
        _objc_release(lVar6);
        puVar3 = PTR_PTR_1126afca8;
        if (lVar4 == -0x2f44) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110ea1cd8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea1cd8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c237520(puVar3);
          goto LAB_1071dbd00;
        }
      }
      puVar3 = PTR_PTR_1126afca8;
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea1c98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea1c98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar3);
    }
LAB_1071dbd00:
    _objc_release(ppuVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar8 = param_3;
    func_0x00010bf9d460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _dispatch_group_leave(uVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = param_3;
    func_0x00010bf9d460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,0,param_5,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(uVar7);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
LAB_1071dbdc0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071dbe1c; end: 1071dc00f;  */

void FUN_1071dbe1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e04c(param_4,param_2,param_3,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071dc010; end: 1071dc047; -[SCExportMyStoriesManager isSavingMyStoriesForStoryId:] */

bool FUN_1071dc010(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1071dc048; end: 1071dc17b; -[SCExportMyStoriesManager .cxx_destruct] */

void FUN_1071dc048(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071dc17c; end: 1071dc1bf;  */

void FUN_1071dc17c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam00000001136ca080;
  puRam00000001136ca080 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071dc1c0; end: 1071dc363;  */

void FUN_1071dc1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_1071ea420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010845c614(param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071dc364;
  puStack_60 = &UNK_1108539d0;
  uStack_58 = uVar2;
  _objc_retain(uVar2);
  ppuVar3 = &puStack_78;
  _objc_retainBlock(ppuVar3);
  ppuVar4 = ppuVar3;
  FUN_10723ff2c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3cfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar8 = uVar6;
  func_0x00010b26c050(uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d620(ppuVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1071dc364; end: 1071dc40b;  */

void FUN_1071dc364(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27f2a0(param_3);
  _objc_release(param_3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,param_2 == 2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071dc40c; end: 1071dc563;  */

void FUN_1071dc40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_1071ea420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10723ff2c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c259cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf3cfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar4;
  func_0x00010b26c050(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c11d620(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1071dc564; end: 1071dc7c7;  */

void FUN_1071dc564(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27f2a0(param_3);
  _objc_release(param_3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,param_2 == 2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071dc7c8; end: 1071dcbf3;  */

void FUN_1071dc7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    lVar10 = *(long *)(param_5 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_5 + 0x20);
    func_0x00010c07f0e0();
    puVar5 = puVar2;
    if ((int)puVar3 != 0) {
      uVar4 = *(ulong *)(param_5 + 0x20);
      func_0x00010c27dd80();
      bVar1 = false;
      if ((uVar4 < 0x1b) && ((1L << (uVar4 & 0x3f) & 0x7e7fc60U) != 0)) {
        func_0x000108544644();
        bVar1 = (uint)uVar4 < 9;
      }
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107d9f9cc(puVar2,puVar3,bVar1,*(undefined8 *)(param_5 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar5;
      func_0x00010c23d0a0();
      param_3 = param_1;
      param_4 = param_2;
    }
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    puVar2 = puVar3;
    func_0x00010beecc40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    puVar6 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      lVar10 = *(long *)(param_5 + 0x30);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))(lVar10,0,puVar8);
      _objc_release(puVar8);
    }
    else {
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      dVar11 = 1.02270250269256e-312;
      uStack_90 = 0x3032000000;
      uStack_88 = 0x1071dcc04;
      uStack_80 = 0x1071dcc14;
      puVar8 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar8;
      puStack_70 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f000(*(undefined8 *)(param_5 + 0x20));
      if (dVar11 <= 0.0) {
        dVar11 = 1.0;
      }
      puVar8 = puVar3;
      func_0x00010bf23240(param_3,param_4,dVar11,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar2;
      func_0x00010bfe63a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(puVar7);
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_a0,8);
      _objc_release(puStack_78);
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = 8;
  __Block_object_dispose(&uStack_a0,8);
  __Unwind_Resume(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bfe8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_imageToVideoWriterScopeLauncher_1125d7d68);
  return;
}



/* Entry: 1071dcbf4; end: 1071dcc2f;  */

void FUN_1071dcbf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageToVideoWriterScopeLauncher_1125d7d68);
  return;
}



/* Entry: 1071dcc30; end: 1071dceb3;  */

void FUN_1071dcc30(double param_1,double param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar10 = *(long *)(param_3 + 0x38);
    pcVar11 = *(code **)(lVar10 + 0x10);
    uVar12 = 0;
LAB_1071dccd0:
    (*pcVar11)(lVar10,uVar12,param_6);
  }
  else {
    func_0x00010c29b240(PTR_PTR_1126b0010);
    if ((param_1 == 0.0) || (param_2 == 0.0)) {
      lVar10 = *(long *)(param_3 + 0x38);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))(lVar10,0,puVar4);
    }
    else {
      uVar3 = *(ulong *)(param_3 + 0x28);
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0efce0();
      if ((uVar5 & 1) == 0) {
        uVar5 = *(ulong *)(param_3 + 0x28);
        func_0x00010c07f180();
        _objc_release(uVar3);
        if ((uVar5 & 1) == 0) {
          lVar10 = *(long *)(param_3 + 0x38);
          uVar12 = *(undefined8 *)(param_3 + 0x20);
          pcVar11 = *(code **)(lVar10 + 0x10);
          param_6 = 0;
          goto LAB_1071dccd0;
        }
      }
      else {
        _objc_release(uVar3);
      }
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = (int)*(undefined8 *)(param_3 + 0x28);
      func_0x00010c07f180();
      uVar12 = 5;
      if (iVar2 == 0) {
        uVar12 = 0;
      }
      uVar5 = *(ulong *)(param_3 + 0x28);
      func_0x00010c27dd80();
      bVar1 = false;
      if ((uVar5 < 0x1b) && ((1L << (uVar5 & 0x3f) & 0x7e7fc60U) != 0)) {
        func_0x000108544644();
        bVar1 = (uint)uVar5 < 9;
      }
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c083400(uVar6);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c07f180(uVar7);
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      puVar8 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      func_0x000107d9fbe4(param_1,param_2,uVar9,puVar4,uVar12,uVar6,uVar7,bVar1,uVar13,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar12 = *(undefined8 *)(param_3 + 0x38);
      _objc_retain(uVar12);
      func_0x00010bfae700(uVar9);
      _objc_release(uVar12);
      _objc_release(uVar9);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1071dceb4; end: 1071dcf2f;  */

void FUN_1071dceb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1071dcf30; end: 1071dcf7f; -[SCStoriesSnapPlaybackInfo isSpectaclesMedia] */

uint FUN_1071dcf30(long param_1)

{
  long lVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  return (uint)(10 < lVar1 + 1U) | 0x2c0U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1;
}



/* Entry: 1071dcf80; end: 1071dcfd3; -[SCStoriesSnapPlaybackInfo isSpectaclesImage] */

uint FUN_1071dcf80(long param_1)

{
  long lVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  return (uint)(0x19 < lVar1 + 1U) | 0x921a00U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1;
}



/* Entry: 1071dcfd4; end: 1071dd027; -[SCStoriesSnapPlaybackInfo isCircularMedia] */

uint FUN_1071dcfd4(long param_1)

{
  long lVar1;
  
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_release(param_1);
  return (uint)(0x19 < lVar1 + 1U) | 0xffac0U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1;
}



/* Entry: 1071dd028; end: 1071dd02f; -[SCStoriesSnapPlaybackInfo isSpectacles60fps] */

undefined8 FUN_1071dd028(void)

{
  return 0;
}



/* Entry: 1071dd030; end: 1071dd0bf; -[SCStoriesSnapPlaybackInfo spectaclesExportSize] */

undefined1  [16] FUN_1071dd030(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1;
  func_0x00010c06e920();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c27dd80();
    if (uVar1 + 1 < 0x1a && (1L << (uVar1 + 1 & 0x3f) & 0x36de5fdU) != 0) {
      _objc_release(param_1);
      uVar2 = 0x4092000000000000;
      uVar3 = uVar2;
    }
    else {
      _objc_release(param_1);
      uVar2 = 0x409b000000000000;
      uVar3 = uVar2;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1071dd0c0; end: 1071dd103; -[SCStoriesSnapPlaybackInfo time] */

undefined8 FUN_1071dd0c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1071dd104; end: 1071dd23f; -[SCStoriesSnapPlaybackInfo isGenAISnap] */

undefined1 *
FUN_1071dd104(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_178 [8];
  byte bStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar5 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_c8;
    param_5 = 0x10;
    lVar1 = param_1;
    func_0x00010bf52a60();
    puVar4 = (undefined1 *)0x0;
    if (lVar1 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(param_1);
          }
          lVar2 = *(long *)(lStack_108 + lVar6 * 8);
          func_0x00010c067fc0();
          if (0xfffffffffffffffc < lVar2 - 8U) {
            puVar4 = (undefined1 *)0x1;
            goto LAB_1071dd1f8;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        param_4 = auStack_c8;
        param_5 = 0x10;
        lVar1 = param_1;
        puVar3 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      puVar4 = (undefined1 *)0x0;
    }
LAB_1071dd1f8:
    _objc_release();
    lVar1 = param_1;
    param_3 = (undefined1 *)puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar5 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27dd80();
  _objc_release(lVar5);
  _objc_initWeak(auStack_168,lVar1);
  bStack_170 = 0x19 < lVar6 + 1U | (byte)(0x921a02 >> (ulong)((uint)(lVar6 + 1U) & 0x1f)) & 1;
  _objc_copyWeak(auStack_178,auStack_168);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010be853e0(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_168);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 1071dd240; end: 1071dd3df; -[SCStoriesSnapPlaybackInfo exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:] */

void FUN_1071dd240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  byte bStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  bStack_60 = 0x19 < lVar2 + 1U | (byte)(0x921a02 >> (ulong)((uint)(lVar2 + 1U) & 0x1f)) & 1;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010be853e0(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071dd3e0; end: 1071dd4a7;  */

void FUN_1071dd3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (cVar1 == '\x01') {
    func_0x00010be0c7c0(param_1);
  }
  else {
    func_0x00010beebd80(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071dd4a8; end: 1071dd917; -[SCStoriesSnapPlaybackInfo _exportImageToVideoURLWithSnapData:overlayData:spectaclesExportSettings:completion:] */

void FUN_1071dd4a8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,0,puVar1);
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27dd80();
    puVar6 = puVar1;
    if ((puVar3 + 1 < (undefined *)0x1a) && ((1L << ((ulong)(puVar3 + 1) & 0x3f) & 0x36de5ffU) != 0)
       ) {
      _objc_release();
      param_2 = 0x4094000000000000;
      param_1 = 0x4086800000000000;
    }
    else {
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c06e920(param_3);
      func_0x000107d9f9cc(puVar1,puVar2,puVar3,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar2 = puVar6;
      func_0x00010c23d0a0();
    }
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    puVar1 = puVar2;
    func_0x00010beecc40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    puVar3 = puVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_8 + 0x10))(param_8,0,puVar5);
      _objc_release(puVar5);
    }
    else {
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      dVar8 = 1.02270250269256e-312;
      uStack_b0 = 0x3032000000;
      uStack_a8 = 0x1071dd928;
      uStack_a0 = 0x1071dd938;
      puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar5;
      puStack_90 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      _objc_release(param_3);
      if (dVar8 <= 0.0) {
        dVar8 = 1.0;
      }
      puVar5 = puVar2;
      func_0x00010bf23240(param_1,param_2,dVar8,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar1;
      func_0x00010bfe63a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(puVar4);
      _objc_release(puVar5);
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(puStack_98);
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_c0,8);
  __Unwind_Resume(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bfe8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_imageToVideoWriterScopeLauncher_1125d7d68);
  return;
}



/* Entry: 1071dd918; end: 1071dd953;  */

void FUN_1071dd918(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageToVideoWriterScopeLauncher_1125d7d68);
  return;
}



/* Entry: 1071dd954; end: 1071ddb23; -[SCStoriesSnapPlaybackInfo _writeVideoToUrlWithSnapData:overlayData:success:unarchivingFailed:spectaclesExportSettings:snapVideoFilterAdaptor:completion:] */

void FUN_1071dd954(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_3 == (undefined *)0x0) || (param_5 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,0,puVar2);
  }
  else {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1071ddb24;
    puStack_88 = &UNK_110866740;
    uStack_80 = param_1;
    _objc_retain(param_3);
    puStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_7);
    uStack_68 = param_7;
    _objc_retain(param_8);
    uStack_60 = param_8;
    _objc_retain(param_9);
    lStack_58 = param_9;
    func_0x00010007380c(uVar1,&puStack_a0);
    _objc_release(uVar1);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    puVar2 = puStack_78;
  }
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071ddb24; end: 1071ddbef;  */

void FUN_1071ddb24(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107d9f928();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c14e080();
  _objc_retain(0);
  if (iVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0);
  }
  else {
    func_0x00010befb520(uVar3);
    func_0x00010be6c5c0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(0);
  _objc_release(uVar3);
  return;
}



/* Entry: 1071ddbf0; end: 1071ddf5f; -[SCStoriesSnapPlaybackInfo _onVideoWrittenToUrl:overlayData:spectaclesExportSettings:snapVideoFilterAdaptor:completion:] */

void FUN_1071ddbf0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uStack_a8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c29b240(PTR_PTR_1126b0010);
  if ((param_1 == 0.0) || (param_2 == 0.0)) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,0,puVar4);
  }
  else {
    lVar2 = param_6;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      (**(code **)(param_9 + 0x10))(param_9,param_5,0);
      goto LAB_1071ddf14;
    }
    lVar2 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    uVar1 = lVar3 + 1;
    if (uVar1 < 0x1a) {
      if ((1L << (uVar1 & 0x3f) & 0x2db59bbU) == 0) {
        if ((1L << (uVar1 & 0x3f) & 0x404U) == 0) goto LAB_1071ddd78;
      }
      else {
        uVar1 = lVar3 + 1;
        if ((0x18 < uVar1) || ((0x1b6bd77U >> (ulong)((uint)uVar1 & 0x1f) & 1) == 0)) {
          if (10 < uVar1) goto LAB_1071ddd78;
          uStack_a8 = *(undefined8 *)(&UNK_10de200f8 + uVar1 * 8);
          goto LAB_1071ddd80;
        }
      }
      uStack_a8 = 0;
    }
    else {
LAB_1071ddd78:
      uStack_a8 = 5;
    }
LAB_1071ddd80:
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    lVar5 = param_3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27dd80();
    uVar8 = 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x1a) {
      if ((1L << (uVar1 & 0x3f) & 0x2db59bbU) == 0) {
        uVar8 = (uint)((1L << (uVar1 & 0x3f) & 0x404U) == 0);
      }
      else {
        uVar1 = lVar6 + 1;
        if ((uVar1 < 0x19) && ((0x1b6bd77U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0x2c0 >> (ulong)((uint)uVar1 & 0x1f);
          if (10 < uVar1) {
            uVar8 = 1;
          }
        }
      }
    }
    func_0x00010c06e920(param_3);
    uVar7 = param_5;
    func_0x000107d9fbe4(param_1,param_2,param_5,puVar4,uStack_a8,
                        (uint)(0x19 < lVar3 + 1U) |
                        0x124a644U >> (ulong)((uint)(lVar3 + 1U) & 0x1f) & 1,uVar8 & 1,param_3,
                        param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_retain(param_9);
    func_0x00010bfae700(uVar7);
    _objc_release(param_9);
    _objc_release(uVar7);
  }
  _objc_release(puVar4);
LAB_1071ddf14:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1071ddf60; end: 1071ddfdb;  */

void FUN_1071ddf60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1071ddfdc; end: 1071de1ff; -[SCStoriesSnapPlaybackInfo _queryMediaCoordinatorWithCompletion:] */

void FUN_1071ddfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126cf130);
  uVar2 = uVar1;
  func_0x00010beecc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d42d0);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x000107d22a6c(param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084d1fa0(param_1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf267e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010b26c050(param_1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c11d620(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1071de200; end: 1071de20f;  */

void FUN_1071de200(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2587f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storiesMediaCoordinator_112673c20);
  return;
}



/* Entry: 1071de210; end: 1071de2b7;  */

void FUN_1071de210(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c27f2a0(param_3);
  _objc_release(param_3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,param_2 == 2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071de2b8; end: 1071de3db; -[FriendStories isCameoStory] */

undefined1 * FUN_1071de2b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  puVar5 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_118 + lVar7 * 8);
        func_0x00010bf28b20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfbec40();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          puVar5 = (undefined1 *)0x1;
          goto LAB_1071de398;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar5 = (undefined1 *)0x0;
  }
LAB_1071de398:
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_150;
  pcStack_128 = FUN_1071de3dc;
  puStack_148 = PTR_PTR_1126f8bf0;
  lStack_150 = lVar1;
  puStack_140 = puVar5;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_150,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    func_0x00010bf6e9a0(plVar4);
    func_0x00010befba40(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 1071de3dc; end: 1071de433; -[FriendStories init] */

undefined1 * FUN_1071de3dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf6e9a0(puVar1);
    func_0x00010befba40(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1071de434; end: 1071de4b7; -[FriendStories initWithStoriesArray:] */

undefined1 * FUN_1071de434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf6e9a0(puVar1);
    func_0x00010c20c480(puVar1);
    func_0x00010c139040(puVar1);
    func_0x00010befba40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071de4b8; end: 1071de52b; -[FriendStories designatedInitializer] */

void FUN_1071de4b8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c480(param_1);
  _objc_release(puVar1);
  func_0x00010c1be620(param_1);
  func_0x00010c21c100(param_1);
  func_0x00010c1cf420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c211e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTapToLoadCount__1126621c8,1);
  return;
}



/* Entry: 1071de52c; end: 1071de537; -[FriendStories cache] */

void FUN_1071de52c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ced20,PTR_s_liveStoriesIconCache_1126044f8);
  return;
}



/* Entry: 1071de538; end: 1071de53b; -[FriendStories setStoryId:] */

void FUN_1071de538(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAtomicUsername__1126385d0);
  return;
}



/* Entry: 1071de53c; end: 1071de53f; -[FriendStories storyId] */

void FUN_1071de53c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_atomicUsername_1125a0ae0);
  return;
}



/* Entry: 1071de540; end: 1071de57b; -[FriendStories friendUsername] */

void FUN_1071de540(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c078d40();
  if ((int)uVar1 != 0) {
    func_0x00010bf0c4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071de57c; end: 1071de607; -[FriendStories isNormalFriendStories] */

uint FUN_1071de57c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  func_0x000109175acc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf0c4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x00010c07dc00(), (uVar3 & 1) == 0)) {
    func_0x00010c077600(param_1);
    uVar4 = (uint)param_1 ^ 1;
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1071de608; end: 1071de60f; -[FriendStories isSaveable] */

undefined8 FUN_1071de608(void)

{
  return 0;
}



/* Entry: 1071de610; end: 1071de657; -[FriendStories isShareable] */

uint FUN_1071de610(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb91a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1071de658; end: 1071de6cb; -[FriendStories isMapStories] */

bool FUN_1071de658(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c0baac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0baac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0ba060();
    bVar1 = lVar3 != -1;
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1071de6cc; end: 1071de6ef; -[FriendStories copyWithZone:] */

undefined8 FUN_1071de6cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1071de6f0; end: 1071de947; -[FriendStories initWithCoder:] */

undefined1 * FUN_1071de6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c90e0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16aec0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c480(puVar1);
    _objc_release(uVar2);
    func_0x00010bf66f40(param_3);
    func_0x00010c1cf420(puVar1);
    func_0x00010bf66f40(param_3);
    func_0x00010c211e80(puVar1);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0b80(puVar1);
    _objc_release(uVar2);
    func_0x00010bf66ce0(param_3);
    func_0x00010c1fefa0(puVar1);
    func_0x00010bf66ce0(param_3);
    func_0x00010c1befc0(puVar1);
    func_0x00010c1be620(puVar1);
    func_0x00010c21c100(puVar1);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c300(puVar1);
    _objc_release(uVar2);
    func_0x00010bf66ce0(param_3);
    func_0x00010c1afb00(puVar1);
    func_0x00010bf66ce0(param_3);
    func_0x00010c1b1b00(puVar1);
    func_0x00010befba40(puVar1);
    func_0x00010bf745c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071de948; end: 1071deb43; -[FriendStories encodeWithCoder:] */

void FUN_1071de948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0d1120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1dd8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf0c4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110daccd8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dd9678);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c258040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e17458);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0de6e0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1df8);
  uVar1 = param_1;
  func_0x00010c269540(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1e18);
  uVar1 = param_1;
  func_0x00010c0e1b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1e38);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c07dc00(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1e58);
  uVar1 = param_1;
  func_0x00010c076da0(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dea798);
  uVar1 = param_1;
  func_0x00010bf38d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1e78);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c06d980(param_1);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea1e98);
  func_0x00010c074d80(param_1);
  func_0x00010bf92da0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110ea1eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071deb44; end: 1071decbf; -[FriendStories initWithFriendStories:] */

undefined1 * FUN_1071deb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0d1120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16aec0(puVar1);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c0de6e0();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar3;
    uVar3 = param_3;
    func_0x00010c269540();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar3;
    uVar3 = param_3;
    func_0x00010c0e1b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c07dc00();
    *(char *)((long)puVar1 + 10) = (char)uVar3;
    uVar3 = param_3;
    func_0x00010c076da0();
    *(char *)((long)puVar1 + 9) = (char)uVar3;
    func_0x00010befba40(puVar1);
    func_0x00010bf745c0(puVar1);
    uVar3 = param_3;
    func_0x00010c258040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c480(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071decc0; end: 1071ded2f; -[FriendStories dealloc] */

void FUN_1071decc0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010c12d5a0(param_1,param_2,param_1,&PTR____CFConstantStringClassReference_110e17458,0);
  }
  puStack_28 = PTR_PTR_1126f8bf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1071ded30; end: 1071dedbf; -[FriendStories didDecodeObject] */

void FUN_1071ded30(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c0de6e0();
  if (lVar1 == 0) {
    func_0x00010c1cf420(param_1);
  }
  lVar1 = param_1;
  func_0x00010c269540();
  if (lVar1 == 0) {
    func_0x00010c211e80(param_1);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1071dedc0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 1071dedc0; end: 1071dedcb;  */

void FUN_1071dedc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetFriendsStoryStateUseLatestC_11262bd20,0);
  return;
}


