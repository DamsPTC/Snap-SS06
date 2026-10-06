/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c8e460; end: 106c8e483; -[SCMatchaSendToLogger setOpsFabShown] */

void FUN_106c8e460(long param_1,undefined8 param_2)

{
  func_0x00010c2b4f40(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e484; end: 106c8e4a7; -[SCMatchaSendToLogger setOpsFabTapped] */

void FUN_106c8e484(long param_1,undefined8 param_2)

{
  func_0x00010c2b4f60(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8e4a8; end: 106c8e4af; -[SCMatchaSendToLogger didTapExternalShareDestination:hadOnPlatformSelections:isSelected:isQueued:] */

void FUN_106c8e4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logExternalShareDestinationTapWi_1126071a0);
  return;
}



/* Entry: 106c8e4b0; end: 106c8e587; -[SCMatchaSendToLogger setRecipientRankingFeaturesMap:] */

void FUN_106c8e4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e588; end: 106c8e5bb;  */

void FUN_106c8e588(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be578a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e5bc; end: 106c8e693; -[SCMatchaSendToLogger setBackendSyncSessionId:] */

void FUN_106c8e5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e694; end: 106c8e6c7;  */

void FUN_106c8e694(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c16e300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e6c8; end: 106c8e79f; -[SCMatchaSendToLogger setContextualServerSessionId:] */

void FUN_106c8e6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e7a0; end: 106c8e7d3;  */

void FUN_106c8e7a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1836c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e7d4; end: 106c8e8ab; -[SCMatchaSendToLogger setRankingResultsId:] */

void FUN_106c8e7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8e8ac; end: 106c8e8df;  */

void FUN_106c8e8ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e7520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8e8e0; end: 106c8e937; -[SCMatchaSendToLogger _updateWithItemToSelectionStateMap:] */

void FUN_106c8e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c8e938;
  puStack_20 = &UNK_11096deb0;
  uStack_18 = param_1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 106c8e938; end: 106c8ea83;  */

void FUN_106c8e938(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        func_0x00010bf1f3c0(param_3);
        func_0x00010c0af2a0(uVar5);
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bf1f3c0(param_3);
    func_0x00010c0af2c0(uVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8ea84; end: 106c8eb83; -[SCMatchaSendToLogger setListHeaderDidRenderWithDataReadyTimestampMapping:renderTimestampMapping:] */

void FUN_106c8ea84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c8eb84; end: 106c8ebb7;  */

void FUN_106c8eb84(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c8ebb8; end: 106c8f07b; -[SCMatchaSendToLogger sectionsDidRenderWithViewModelsMapping:dataReadyTimestampMapping:renderTimestampMapping:visibleCellsNumberMapping:] */

void FUN_106c8ebb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c1567e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7ea0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08a060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(ulong *)(lVar19 * 8);
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        uVar11 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar10);
        uVar1 = uVar9;
        if ((uVar11 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar9);
        uVar11 = uVar1;
        func_0x00010bfecc60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar11;
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        func_0x00010c0f4aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar11);
        uVar11 = uVar12;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (uVar11 != 0) {
          uVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(uVar12);
            }
            uVar13 = *(undefined8 *)(uVar9 * 8);
            func_0x00010bfe5ec0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar13;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar15;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar16;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            _objc_release(uVar15);
            _objc_release(uVar13);
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar14 = puVar8;
            func_0x00010c0e00e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            func_0x00010c0df780(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar10);
            _objc_release(puVar14);
            _objc_release(uVar17);
            uVar9 = uVar9 + 1;
          } while (uVar11 != uVar9);
          uVar11 = uVar12;
          func_0x00010bf52a60();
        }
        _objc_release(uVar12);
        _objc_release(uVar1);
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar7);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    func_0x00010c2b2260(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c156700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7e80(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be55160(param_1);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c156840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7f60(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = param_3;
  func_0x00010c156880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7f80(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  lVar6 = param_3;
  func_0x00010bde2080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7ec0(*(undefined8 *)(param_3 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bde2080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c2b7ee0(*(undefined8 *)(param_3 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106c8f07c; end: 106c8f127; -[SCMatchaSendToLogger _logLatencyMetricsWithDataReadyTimestampMapping:renderTimestampMapping:] */

void FUN_106c8f07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde2080(param_1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7ec0(*(undefined8 *)(param_1 + 0x88),param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde2080(param_1,param_2,*(undefined8 *)(param_1 + 0xa8),param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2b7ee0(*(undefined8 *)(param_1 + 0x88),param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8f128; end: 106c8f2af; -[SCMatchaSendToLogger _combineMappingWithExistingMapping:additionalMapping:] */

void FUN_106c8f128(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        lVar3 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          lVar3 = param_4;
          func_0x00010c0e00e0(param_4,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3,param_2,lVar3,uVar4);
          _objc_release(lVar3);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c2b8620(*(undefined8 *)(param_3 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8f2b0; end: 106c8f2d3; -[SCMatchaSendToLogger _setShareSheetAvailable] */

void FUN_106c8f2b0(long param_1,undefined8 param_2)

{
  func_0x00010c2b8620(*(undefined8 *)(param_1 + 0x88),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106c8f2d4; end: 106c8f3c7; -[SCMatchaSendToLogger _setListsAvailableWithListDataModels:] */

void FUN_106c8f2d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x88) == 0) {
    lVar3 = param_3;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar3;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_106c8f3b0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2921e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc320(*(undefined8 *)(param_1 + 0x88),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    lVar3 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc300(uVar4,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2bc2e0(*(undefined8 *)(param_1 + 0x88),param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
LAB_106c8f3b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8f3c8; end: 106c8f493; -[SCMatchaSendToLogger _setContextualListsAvailableWithListDataModels:] */

void FUN_106c8f3c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x88) == 0) {
    lVar3 = param_3;
    func_0x00010bf51e00();
    lVar1 = *(long *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = lVar3;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_106c8f480;
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf4f900(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf4f8a0(uVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab120(*(undefined8 *)(param_1 + 0x88),param_2,lVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2ab100(*(undefined8 *)(param_1 + 0x88),param_2,uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
LAB_106c8f480:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8f494; end: 106c8f4ef; -[SCMatchaSendToLogger _logRecipientRankingFeaturesMap:] */

void FUN_106c8f494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x88) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_3;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c2b6940(*(long *)(param_1 + 0x88),param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8f4f0; end: 106c8f58b; -[SCMatchaSendToLogger _trackTimestamp:event:overwrite:] */

void FUN_106c8f4f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x90);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_106c8f574;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x90),param_3,puVar2,param_4);
  _objc_release(puVar2);
LAB_106c8f574:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c8f58c; end: 106c8f763; -[SCMatchaSendToLogger _tapToStartWithAttribution:tapToStartTimestamp:] */

void FUN_106c8f58c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c243400(param_4);
  lVar5 = param_2;
  func_0x00010be18d80(param_2,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60(puVar1,param_3,lVar5);
  func_0x00010c0df7c0(puVar3,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined **)(param_2 + 0xf0) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(puVar1);
  func_0x00010be92140(param_2);
  func_0x00010bece260(param_1,param_2,param_3,PTR_PTR_113183c40,0);
  func_0x00010c2a8ae0(*(undefined8 *)(param_2 + 0x88),param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = param_4;
  func_0x00010c15d5c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1fc880(uVar6,param_3,uVar4);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_2 + 0xb0);
  if (lVar5 != 0) {
    *(undefined8 *)(param_2 + 0xb0) = 0;
    _objc_retain(lVar5);
    _objc_release(lVar5);
    func_0x00010bea54a0(param_2,param_3,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = *(long *)(param_2 + 0xb8);
  if (lVar5 != 0) {
    *(undefined8 *)(param_2 + 0xb8) = 0;
    _objc_retain(lVar5);
    _objc_release(lVar5);
    func_0x00010bea3040(param_2,param_3,lVar5);
    _objc_release(lVar5);
  }
  lVar5 = *(long *)(param_2 + 0xc0);
  if (lVar5 != 0) {
    *(undefined8 *)(param_2 + 0xc0) = 0;
    _objc_retain(lVar5);
    _objc_release(lVar5);
    func_0x00010be578a0(param_2,param_3,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 106c8f764; end: 106c8f7ff; -[SCMatchaSendToLogger _didPressSend:withSelectionItems:] */

void FUN_106c8f764(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_113183c68;
  _objc_retain(param_4);
  func_0x00010bece260(param_1,param_2,param_3,puVar1,0);
  func_0x00010bece260(param_1,param_2,param_3,PTR_PTR_113183c70,0);
  func_0x00010c2b8200(*(undefined8 *)(param_2 + 0x88),param_3,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be17980(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c8f800; end: 106c8f8c7; -[SCMatchaSendToLogger _onUserFirstInteraction] */

void FUN_106c8f800(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106c8f8c8; end: 106c8f90b;  */

void FUN_106c8f8c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece260(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c8f90c; end: 106c8ff1b; -[SCMatchaSendToLogger _fireLoggingEventsIfNecessaryWithSelectionItems:] */

void FUN_106c8f90c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_4;
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x99) & 1) == 0) {
    func_0x00010c2ad5c0(*(undefined8 *)(param_2 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar14 = *(long *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c1567a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar14 != 0) {
      func_0x00010c2b7f20(*(undefined8 *)(param_2 + 0x88));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar16 = *(long *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c1567a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1566e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar16 != 0) {
      func_0x00010c2b7f00(*(undefined8 *)(param_2 + 0x88));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar17 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c1567c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7f40(uVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar17 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c1567a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7fa0(uVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c2b80a0(*(undefined8 *)(param_2 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2af000(*(undefined8 *)(param_2 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
    cVar1 = *(char *)(param_2 + 0x9a);
    lVar3 = *(long *)(param_2 + 0x48);
    func_0x00010c0ecd00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if (cVar1 == '\x01') {
      lVar4 = param_2;
      func_0x00010be6e480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    func_0x00010c2b8100(*(undefined8 *)(param_2 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(char *)(param_2 + 0x9a) == '\x01') {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c0ecd00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010be6e460(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c2b80e0(*(undefined8 *)(param_2 + 0x88));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x88);
      lVar5 = *(long *)(param_2 + 0x50);
      func_0x00010c269d40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010c0ecd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b80e0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar5);
    lVar6 = *(long *)(param_2 + 0x88);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0560(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0a5840(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0a93a0(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0af1a0(*(undefined8 *)(param_2 + 0x30));
    lVar7 = *(long *)(param_2 + 0x28);
    func_0x00010c156760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a3ae0();
        _objc_release(uVar2);
        lVar15 = lVar15 + 1;
      } while (lVar3 != lVar15);
      lVar3 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    param_1 = 0;
    _objc_retain(param_4);
    lVar3 = param_4;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar18 = *(ulong *)(lVar7 * 8);
        uVar8 = uVar18;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0720c0();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        if ((int)uVar11 != 0) {
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar18;
          func_0x00010befcf80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar18);
          puVar12 = PTR_PTR_1126c24d0;
          _objc_opt_class(PTR_PTR_1126c24d0);
          uVar10 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar12);
          uVar8 = uVar9;
          if ((uVar10 & 1) == 0) {
            uVar8 = 0;
          }
          _objc_retain(uVar8);
          _objc_release(uVar9);
          uVar9 = uVar8;
          func_0x00010bfded40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar9 != 0) {
            uVar2 = *(undefined8 *)(param_2 + 0x40);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010bfded40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a8ee0(uVar2);
            _objc_release(uVar9);
            _objc_release(uVar2);
          }
          _objc_release(uVar8);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3ac0();
    _objc_release(uVar2);
    uVar17 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c0ecd00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3380(uVar17);
    _objc_release(uVar2);
    lVar3 = lVar6;
    func_0x00010c15fd60(*(undefined8 *)(param_2 + 0x38));
    *(undefined1 *)(param_2 + 0x99) = 1;
    *(undefined1 *)(param_2 + 0x79) = 0;
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar16);
    _objc_release(lVar14);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  func_0x00010bece260(param_1,param_4);
  func_0x00010be17980(param_4);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c8ff1c; end: 106c8ff8f; -[SCMatchaSendToLogger _sessionDidEndTimestamp:completion:] */

void FUN_106c8ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bece260(param_1,param_2,param_3,PTR_PTR_113183c70,0);
  func_0x00010be17980(param_2,param_3,PTR____NSArray0__struct_11034ab48);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c8ff90; end: 106c901fb; -[SCMatchaSendToLogger _reset] */

void FUN_106c8ff90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d1e48;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar2);
  func_0x00010c2b7ea0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7e80(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7ec0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7ee0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7f60(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7f80(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7f20(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7f00(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7f40(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7fa0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8100(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b80e0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab120(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6940(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b80a0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af000(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad5c0(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2260(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4f40(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4f60(*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar2);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c15fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_sessionDidStart_112635980);
  return;
}



/* Entry: 106c901fc; end: 106c9021b; -[SCMatchaSendToLogger _orderedSelectionItemContactsWithSelectionItems:] */

void FUN_106c901fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11096df00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c9021c; end: 106c902bf;  */

undefined8 FUN_106c9021c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106c902c0; end: 106c902df; -[SCMatchaSendToLogger _orderedSelectionItemsWithContactsRemoved:] */

void FUN_106c902c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11096df20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c902e0; end: 106c90383;  */

uint FUN_106c902e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar4 ^ 1;
}



/* Entry: 106c90384; end: 106c903eb; -[SCMatchaSendToLogger _formattedTraceNameForSourcePage:] */

void FUN_106c90384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_106c97fd0();
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e814d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c903ec; end: 106c903f3; -[SCMatchaSendToLogger performer] */

undefined8 FUN_106c903ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106c903f4; end: 106c90523; -[SCMatchaSendToLogger .cxx_destruct] */

void FUN_106c903f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c90524; end: 106c905c7; -[SCMatchaSendToLoggerSource initWithPreferences:currentUserId:] */

undefined1 *
FUN_106c90524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f60f0;
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



/* Entry: 106c905c8; end: 106c905f7; -[SCMatchaSendToLoggerSource firstSnapSectionIdentifier] */

void FUN_106c905c8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f129f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f129f8);
  return;
}



/* Entry: 106c905f8; end: 106c90627; -[SCMatchaSendToLoggerSource userGeneratedListSectionIdentifier] */

void FUN_106c905f8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12d98);
  return;
}



/* Entry: 106c90628; end: 106c90657; -[SCMatchaSendToLoggerSource contextualListSectionIdentifier] */

void FUN_106c90628(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12db8);
  return;
}



/* Entry: 106c90658; end: 106c90687; -[SCMatchaSendToLoggerSource recentSectionIdentifier] */

void FUN_106c90658(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12a58);
  return;
}



/* Entry: 106c90688; end: 106c906b7; -[SCMatchaSendToLoggerSource recentWithContactsSectionIdentifier] */

void FUN_106c90688(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12a78);
  return;
}



/* Entry: 106c906b8; end: 106c906e7; -[SCMatchaSendToLoggerSource lastSnapSectionIdentifier] */

void FUN_106c906b8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12c18);
  return;
}



/* Entry: 106c906e8; end: 106c90763; -[SCMatchaSendToLoggerSource storiesSectionIdentifiers] */

void FUN_106c906e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12a18;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f12dd8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12cf8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_106c90764;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f12a18;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f129f8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f12cf8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f12c58;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f12a38;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f12c78;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f12c18;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f12a58;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f12a78;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_90,9);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      _objc_retain(&PTR____CFConstantStringClassReference_110f12d58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c90764; end: 106c907f7; -[SCMatchaSendToLoggerSource sectionIdentifierAboveFold] */

void FUN_106c90764(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f12a18;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f129f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f12cf8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f12c58;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f12a38;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f12c78;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f12c18;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f12a58;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12a78;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_60,9);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(&PTR____CFConstantStringClassReference_110f12d58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c907f8; end: 106c90827; -[SCMatchaSendToLoggerSource findFriendsSectionIdentifier] */

void FUN_106c907f8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f12d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f12d58);
  return;
}



/* Entry: 106c90828; end: 106c908af; -[SCMatchaSendToLoggerSource sectionIdentifierForSeenEvent:] */

void FUN_106c90828(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a838);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c908b0; end: 106c908f3; -[SCMatchaSendToLoggerSource recipientIdForViewModel:] */

void FUN_106c908b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9e280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c908f4; end: 106c90a1b; -[SCMatchaSendToLoggerSource contactImpressionForViewModel:index:] */

void FUN_106c908f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x00010bfecc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befcf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126c24d0;
  _objc_opt_class(PTR_PTR_1126c24d0);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c2c98;
  _objc_alloc(PTR_PTR_1126c2c98);
  func_0x00010c150c20(uVar1);
  func_0x00010c01d7c0((double)param_5,param_1,puVar4);
  uVar2 = uVar1;
  func_0x00010bfded40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a7500(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c90a1c; end: 106c90a23; -[SCMatchaSendToLoggerSource blizzardSectionTypeForSectionIdentifier:] */

void FUN_106c90a1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f129f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a18);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12dd8),
       (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a58);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = param_3,
           func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a78),
           (uVar1 & 1) == 0)) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a98);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12e58);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f12ab8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12ad8
                                   );
                if ((((((uVar1 & 1) == 0) &&
                      (uVar1 = param_3,
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f12af8),
                      (uVar1 & 1) == 0)) &&
                     (uVar1 = param_3,
                     func_0x00010c0720c0(param_3,param_2,
                                         &PTR____CFConstantStringClassReference_110f12b18),
                     (uVar1 & 1) == 0)) &&
                    ((uVar1 = param_3,
                     func_0x00010c0720c0(param_3,param_2,
                                         &PTR____CFConstantStringClassReference_110f12b38),
                     (uVar1 & 1) == 0 &&
                     (uVar1 = param_3,
                     func_0x00010c0720c0(param_3,param_2,
                                         &PTR____CFConstantStringClassReference_110f12b78),
                     (uVar1 & 1) == 0)))) &&
                   ((uVar1 = param_3,
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f12b98),
                    (uVar1 & 1) == 0 &&
                    ((uVar1 = param_3,
                     func_0x00010c0720c0(param_3,param_2,
                                         &PTR____CFConstantStringClassReference_110f12bb8),
                     (uVar1 & 1) == 0 &&
                     (uVar1 = param_3,
                     func_0x00010c0720c0(param_3,param_2,
                                         &PTR____CFConstantStringClassReference_110f12bd8),
                     (uVar1 & 1) == 0)))))) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f12c18);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f12c38);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f12c58);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f12c78);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110f12c98);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f12cb8);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110f12cf8);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110f12cd8
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_3;
                                  func_0x00010c0720c0(param_3,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110f12d38);
                                  if (((uVar1 & 1) == 0) &&
                                     (uVar1 = param_3,
                                     func_0x00010c0720c0(param_3,param_2,
                                                         &
                                                  PTR____CFConstantStringClassReference_110f12bf8),
                                     (uVar1 & 1) == 0)) {
                                    uVar1 = param_3;
                                    func_0x00010c0720c0(param_3,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110f12df8);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110f12d78);
                                      if (((uVar1 & 1) != 0) ||
                                         (uVar1 = param_3,
                                         func_0x00010c0720c0(param_3,param_2,
                                                             &
                                                  PTR____CFConstantStringClassReference_110f12d58),
                                         (uVar1 & 1) != 0)) {
LAB_106c97af0:
                                        ppuVar2 = (undefined **)0x0;
                                        goto LAB_106c978a8;
                                      }
                                      uVar1 = param_3;
                                      func_0x00010c0720c0(param_3,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110f12d98);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_3;
                                        func_0x00010c0720c0(param_3,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110f12e98);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110f12d18);
                                          if ((uVar1 & 1) != 0) {
                                            ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_110e819d8;
                                            goto LAB_106c978a8;
                                          }
                                          uVar1 = param_3;
                                          func_0x00010c0720c0(param_3,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110f12e18);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_3;
                                            FUN_106c97b80();
                                            if (((uVar1 & 1) == 0) &&
                                               (uVar1 = param_3,
                                               func_0x00010bfda7c0(param_3,param_2,
                                                                   &
                                                  PTR____CFConstantStringClassReference_110f12db8),
                                               (int)uVar1 == 0)) goto LAB_106c97af0;
                                            ppuVar2 = (undefined **)0x1d;
                                          }
                                          else {
                                            ppuVar2 = (undefined **)0x1f;
                                          }
                                        }
                                        else {
                                          ppuVar2 = (undefined **)0xf;
                                        }
                                      }
                                      else {
                                        ppuVar2 = (undefined **)0x15;
                                      }
                                    }
                                    else {
                                      ppuVar2 = (undefined **)0x1b;
                                    }
                                  }
                                  else {
                                    ppuVar2 = (undefined **)0x18;
                                  }
                                }
                                else {
                                  ppuVar2 = (undefined **)0x22;
                                }
                              }
                              else {
                                ppuVar2 = (undefined **)0x17;
                              }
                            }
                            else {
                              ppuVar2 = (undefined **)0x7;
                            }
                          }
                          else {
                            ppuVar2 = (undefined **)0xe;
                          }
                        }
                        else {
                          ppuVar2 = (undefined **)0x11;
                        }
                      }
                      else {
                        ppuVar2 = (undefined **)0x13;
                      }
                    }
                    else {
                      ppuVar2 = (undefined **)0x14;
                    }
                  }
                  else {
                    ppuVar2 = (undefined **)0x10;
                  }
                }
                else {
                  ppuVar2 = (undefined **)0xa;
                }
              }
              else {
                ppuVar2 = (undefined **)0x1;
              }
            }
            else {
              ppuVar2 = (undefined **)0x20;
            }
          }
          else {
            ppuVar2 = (undefined **)0x2;
          }
        }
        else {
          ppuVar2 = (undefined **)0x8;
        }
      }
      else {
        ppuVar2 = (undefined **)0x0;
      }
    }
    else {
      ppuVar2 = (undefined **)0x9;
    }
  }
  else {
    ppuVar2 = (undefined **)0xffffffffffffffff;
  }
  func_0x00010bb0e8a8(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_106c978a8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c90a24; end: 106c90a2b; -[SCMatchaSendToLoggerSource blizzardPreselectionTypeForSelectionItemType:] */

undefined ** FUN_106c90a24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52c78);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52c98);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52df8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d58);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
          if ((((uVar1 & 1) == 0) &&
              (uVar1 = param_3,
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d18),
              (uVar1 & 1) == 0)) &&
             (uVar1 = param_3,
             func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cf8),
             (uVar1 & 1) == 0)) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d98);
            if (((((uVar1 & 1) == 0) &&
                 (uVar1 = param_3,
                 func_0x00010c0720c0(param_3,param_2,
                                     &PTR____CFConstantStringClassReference_110f52db8),
                 (uVar1 & 1) == 0)) &&
                ((uVar1 = param_3,
                 func_0x00010c0720c0(param_3,param_2,
                                     &PTR____CFConstantStringClassReference_110f52d78),
                 (uVar1 & 1) == 0 &&
                 ((uVar1 = param_3,
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f52ed8),
                  (uVar1 & 1) == 0 &&
                  (uVar1 = param_3,
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f52dd8),
                  (uVar1 & 1) == 0)))))) &&
               (uVar1 = param_3,
               func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52f38)
               , (uVar1 & 1) == 0)) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52e98);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d38
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f52ef8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f52cb8);
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e819b8;
                    if ((int)uVar1 == 0) {
                      ppuVar2 = (undefined **)0x0;
                    }
                  }
                  else {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e81998;
                  }
                }
                else {
                  ppuVar2 = &PTR____CFConstantStringClassReference_110e495f8;
                }
              }
              else {
                ppuVar2 = &PTR____CFConstantStringClassReference_110e81978;
              }
            }
            else {
              ppuVar2 = &PTR____CFConstantStringClassReference_110e81958;
            }
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_110e81938;
          }
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110e81918;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110df78d8;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dbbaf8;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbb6f8;
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 106c90a2c; end: 106c90a33; -[SCMatchaSendToLoggerSource blizzardStoryTypeForSelectionItemType:] */

void FUN_106c90a2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d18);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cf8);
      if ((uVar1 & 1) != 0) goto LAB_106c97cb0;
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d38);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d58);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52df8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d78);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52ed8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d98
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f52db8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f52dd8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f52f38);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f52ef8);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110f52f18);
                          ppuVar2 = &PTR____CFConstantStringClassReference_110e819d8;
                          if ((int)uVar1 == 0) {
                            ppuVar2 = (undefined **)0x0;
                          }
                          goto LAB_106c97cdc;
                        }
                        ppuVar2 = (undefined **)0x2e;
                      }
                      else {
                        ppuVar2 = (undefined **)0x2f;
                      }
                    }
                    else {
                      ppuVar2 = (undefined **)0x28;
                    }
                  }
                  else {
                    ppuVar2 = (undefined **)0x21;
                  }
                }
                else {
                  ppuVar2 = (undefined **)0xd;
                }
              }
              else {
                ppuVar2 = (undefined **)0x2d;
              }
            }
            else {
              ppuVar2 = (undefined **)0x10;
            }
          }
          else {
            ppuVar2 = (undefined **)0x1d;
          }
        }
        else {
          ppuVar2 = (undefined **)0x6;
        }
      }
      else {
        ppuVar2 = (undefined **)0x3;
      }
    }
    else {
      ppuVar2 = (undefined **)0x12;
    }
  }
  else {
LAB_106c97cb0:
    ppuVar2 = (undefined **)0x4;
  }
  func_0x00010bb1577c(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_106c97cdc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c90a34; end: 106c90aab; -[SCMatchaSendToLoggerSource blizzardStoryTypeForViewModel:] */

void FUN_106c90a34(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be9e280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_106c97c84(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106c90aac; end: 106c90b0b; -[SCMatchaSendToLoggerSource availableLastSnapRecipientsCount] */

undefined8 FUN_106c90aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106c90b0c; end: 106c91107; -[SCMatchaSendToLoggerSource sectionToViewModelsBreakdownForViewModelsMapping:] */

undefined * FUN_106c90b0c(ulong param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar1);
      }
      uVar14 = *(ulong *)(lVar11 * 8);
      uVar3 = param_1;
      func_0x00010be43980();
      if (((uVar3 & 1) == 0) && (func_0x00010c0720c0(), (uVar14 & 1) == 0)) {
        lVar12 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(lVar12);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    param_2 = &PTR___NSConcreteGlobalBlock_11096df60;
    lVar4 = lVar2;
    func_0x0001006372a4();
    lVar1 = lVar4;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      func_0x00010c1d0640(puVar13);
    }
    _objc_release(lVar4);
  }
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f12a58;
  if (lVar1 != 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110f12a78;
  }
  _objc_retain(ppuVar7);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar4);
        }
        uVar16 = *(ulong *)(lVar12 * 8);
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = (undefined **)PTR_PTR_1126b52c0;
        _objc_opt_class();
        uVar14 = uVar16;
        _objc_opt_isKindOfClass();
        uVar3 = uVar16;
        if ((uVar14 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar16);
        uVar14 = uVar3;
        FUN_106c911a0();
        if ((uVar14 & 1) == 0) {
          uVar14 = uVar3;
          FUN_106c9129c();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar14;
          func_0x00010c08fa60();
          if (uVar16 != 0) {
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar6 == (undefined *)0x0) {
              puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x00010c1d0640(puVar5);
              _objc_release(puVar6);
            }
            puVar6 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar6);
            puVar6 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar13);
            _objc_release(puVar6);
          }
          _objc_release(uVar14);
        }
        _objc_release(uVar3);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    _objc_release(puVar5);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010bf529e0();
  if (lVar11 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(lVar1);
    lVar11 = lVar1;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        uVar16 = *(ulong *)(lVar15 * 8);
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = (undefined **)PTR_PTR_1126b52c0;
        _objc_opt_class();
        uVar14 = uVar16;
        _objc_opt_isKindOfClass();
        uVar3 = uVar16;
        if ((uVar14 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar16);
        uVar14 = uVar3;
        FUN_106c911a0();
        _objc_release(uVar3);
        if ((uVar14 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar1;
      func_0x00010bf52a60();
    }
    _objc_release(lVar1);
    puVar6 = puVar5;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar13);
    }
    _objc_release(puVar5);
  }
  lVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    param_2 = &PTR___NSConcreteGlobalBlock_11096df80;
    lVar12 = lVar11;
    func_0x0001006372a4();
    lVar15 = lVar12;
    func_0x00010bf529e0();
    if (lVar15 != 0) {
      func_0x00010c1d0640(puVar13);
    }
    _objc_release(lVar12);
  }
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(ppuVar7);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar7 = param_2;
  func_0x00010bf34020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0720c0();
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar8 = param_2;
    func_0x00010bf34020(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c0720c0();
    puVar13 = (undefined *)(ulong)((uint)ppuVar9 ^ 1);
    _objc_release(ppuVar8);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(ppuVar7);
  _objc_release(param_2);
  return puVar13;
}



/* Entry: 106c91108; end: 106c9119f;  */

uint FUN_106c91108(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf34020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bf34020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106c911a0; end: 106c9129b;  */

long FUN_106c911a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfecc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = 0;
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfecc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c15a7a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0720c0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
  return lVar6;
}



/* Entry: 106c9129c; end: 106c9136f;  */

void FUN_106c9129c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010c15a7c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106c91370; end: 106c913cb;  */

uint FUN_106c91370(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010bf4ddc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  lVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)lVar2 & (uint)(param_2 != 0);
}



/* Entry: 106c913cc; end: 106c91867; -[SCMatchaSendToLoggerSource sectionToViewModelsOrderedSetBreakdownForViewModelsMapping:] */

void FUN_106c913cc(ulong param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int iVar14;
  undefined **unaff_x25;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **unaff_x26;
  ulong uVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_810;
  long lStack_808;
  long *plStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  long *plStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined *apuStack_790 [16];
  undefined *apuStack_710 [16];
  long lStack_690;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined *puStack_640;
  undefined **ppuStack_638;
  undefined1 ***pppuStack_630;
  code *pcStack_628;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_480;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined *puStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_330;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *apuStack_1f0 [16];
  undefined *apuStack_170 [16];
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  ppuVar8 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = apuStack_f0;
  ppuVar6 = ppuVar8;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x28 = (undefined **)*puStack_220;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_220 != unaff_x28) {
          _objc_enumerationMutation(ppuVar8);
        }
        unaff_x25 = *(undefined ***)(lStack_228 + (long)unaff_x27 * 8);
        uVar17 = param_1;
        func_0x00010be43980();
        if (((uVar17 & 1) == 0) &&
           (ppuVar15 = unaff_x25, func_0x00010c0720c0(), ((ulong)ppuVar15 & 1) == 0)) {
          unaff_x26 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(unaff_x26);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar6 != unaff_x27);
      ppuVar15 = apuStack_f0;
      ppuVar6 = ppuVar8;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  ppuVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010bf529e0();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f12a58;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110f12a78;
  }
  _objc_retain(ppuVar8);
  _objc_release(ppuVar6);
  ppuVar6 = param_3;
  ppuStack_2b8 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010bf529e0();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(ppuVar6);
    ppuVar15 = apuStack_170;
    ppuVar9 = ppuVar6;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar8 = (undefined **)*plStack_260;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_260 != ppuVar8) {
            _objc_enumerationMutation(ppuVar6);
          }
          unaff_x26 = *(undefined ***)(lStack_268 + (long)unaff_x28 * 8);
          ppuVar15 = unaff_x26;
          FUN_106c911a0();
          if (((ulong)ppuVar15 & 1) == 0) {
            unaff_x25 = unaff_x26;
            FUN_106c9129c();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = unaff_x25;
            func_0x00010c08fa60();
            if (ppuVar15 != (undefined **)0x0) {
              ppuVar15 = ppuVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar15 == (undefined **)0x0) {
                puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
                func_0x00010c1d0640(ppuVar5);
                _objc_release(puVar2);
              }
              unaff_x27 = ppuVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(unaff_x27);
              unaff_x26 = ppuVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1);
              _objc_release(unaff_x26);
            }
            _objc_release(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar9 != unaff_x28);
        ppuVar15 = apuStack_170;
        ppuVar9 = ppuVar6;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f12b18;
  ppuVar9 = param_3;
  ppuVar5 = ppuVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar9;
  func_0x00010bf529e0();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc_init();
    lStack_2a8 = 0;
    puStack_2b0 = (undefined *)0x0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    _objc_retain(ppuVar9);
    ppuVar5 = &puStack_2b0;
    ppuVar15 = apuStack_1f0;
    ppuVar16 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar8 = (undefined **)*plStack_2a0;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_2a0 != ppuVar8) {
            _objc_enumerationMutation(ppuVar9);
          }
          unaff_x27 = *(undefined ***)(lStack_2a8 + (long)unaff_x28 * 8);
          ppuVar15 = unaff_x27;
          FUN_106c911a0();
          if (((ulong)ppuVar15 & 1) == 0) {
            func_0x00010befa120(unaff_x25);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar16 != unaff_x28);
        ppuVar5 = &puStack_2b0;
        ppuVar15 = apuStack_1f0;
        ppuVar16 = ppuVar9;
        func_0x00010bf52a60();
        unaff_x26 = (undefined **)0x0;
      } while (ppuVar16 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    ppuVar16 = unaff_x25;
    func_0x00010bf529e0();
    if (ppuVar16 != (undefined **)0x0) {
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
      _objc_alloc();
      func_0x00010c032300();
      ppuVar5 = unaff_x26;
      func_0x00010c1d0640(puVar1);
      _objc_release(unaff_x26);
      ppuVar15 = ppuVar12;
    }
    _objc_release(unaff_x25);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  _objc_release(ppuStack_2b8);
  ppuVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuStack_300 = &PTR____CFConstantStringClassReference_110f12b18;
    pcStack_2c8 = FUN_106c91868;
    lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_320 = unaff_x28;
    ppuStack_318 = unaff_x27;
    ppuStack_310 = unaff_x26;
    ppuStack_308 = unaff_x25;
    ppuStack_2f8 = ppuVar9;
    ppuStack_2f0 = ppuVar6;
    ppuStack_2e8 = ppuVar8;
    puStack_2e0 = puVar1;
    ppuStack_2d8 = param_3;
    puStack_2d0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar5);
    ppuStack_3f8 = ppuVar15;
    _objc_retain(ppuVar15);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    puStack_3e0 = (undefined8 *)0x0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    ppuVar15 = ppuVar5;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar15;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      unaff_x28 = (undefined **)*puStack_3e0;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_3e0 != unaff_x28) {
            _objc_enumerationMutation(ppuVar15);
          }
          uVar17 = *(ulong *)(lStack_3e8 + (long)ppuVar6 * 8);
          ppuVar9 = ppuVar16;
          func_0x00010be43980();
          if ((((ulong)ppuVar9 & 1) == 0) && (func_0x00010c0720c0(), (uVar17 & 1) == 0)) {
            ppuVar9 = ppuVar5;
            func_0x00010c0e00e0(ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(ppuVar9);
          }
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar8 != ppuVar6);
        ppuVar8 = ppuVar15;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(ppuVar15);
    ppuVar8 = ppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR____CFConstantStringClassReference_110f12a58;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar15 = &PTR____CFConstantStringClassReference_110f12a78;
    }
    _objc_retain(ppuVar15);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar8;
    func_0x00010c282760();
    _objc_release(ppuVar8);
    ppuVar8 = ppuStack_3f8;
    ppuVar9 = ppuStack_3f8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (((int)ppuVar6 != 0) &&
       (ppuVar16 = ppuVar9, func_0x00010bf529e0(), ppuVar16 != (undefined **)0x0)) {
      ppuVar6 = (undefined **)((ulong)ppuVar6 & 0xffffffff);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      ppuStack_408 = ppuVar15;
      _objc_opt_new();
      ppuVar15 = (undefined **)0x0;
      ppuStack_400 = ppuVar6;
      do {
        ppuVar8 = ppuVar9;
        func_0x00010bf529e0();
        if (ppuVar8 <= ppuVar15) break;
        ppuVar16 = ppuVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppuVar16;
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        ppuVar12 = unaff_x28;
        _objc_opt_isKindOfClass(unaff_x28,puVar3);
        ppuVar8 = unaff_x28;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(unaff_x28);
        ppuVar12 = ppuVar8;
        FUN_106c911a0();
        if (((ulong)ppuVar12 & 1) == 0) {
          unaff_x28 = ppuVar8;
          FUN_106c9129c();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = unaff_x28;
          func_0x00010c08fa60();
          if (ppuVar12 != (undefined **)0x0) {
            puVar3 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 == (undefined *)0x0) {
              func_0x00010c1d0640(puVar2);
            }
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar4 = puVar2;
            func_0x00010c0e00e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c0df760(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar3);
            _objc_release(puVar4);
            puVar3 = puVar2;
            func_0x00010c0e00e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar3);
            ppuVar6 = ppuStack_400;
          }
          _objc_release(unaff_x28);
        }
        _objc_release(ppuVar8);
        _objc_release(ppuVar16);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar6 != ppuVar15);
      _objc_release(puVar2);
      ppuVar8 = ppuStack_3f8;
      ppuVar15 = ppuStack_408;
    }
    ppuVar13 = &PTR____CFConstantStringClassReference_110f12b18;
    ppuVar12 = ppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar12;
    func_0x00010c282760();
    _objc_release(ppuVar12);
    ppuVar16 = ppuVar8;
    ppuVar11 = ppuVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (((int)ppuVar6 != 0) &&
       (ppuVar10 = ppuVar16, func_0x00010bf529e0(), ppuVar10 != (undefined **)0x0)) {
      ppuStack_400 = &PTR____CFConstantStringClassReference_110f12b18;
      unaff_x28 = (undefined **)0x0;
      ppuVar8 = (undefined **)0x0;
      ppuVar13 = (undefined **)((ulong)ppuVar6 & 0xffffffff);
      ppuStack_408 = ppuVar15;
      do {
        ppuVar15 = ppuVar16;
        func_0x00010bf529e0();
        if (ppuVar15 <= ppuVar8) break;
        ppuVar15 = ppuVar16;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar15;
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        ppuVar11 = ppuVar12;
        _objc_opt_isKindOfClass(ppuVar12,puVar2);
        ppuVar6 = ppuVar12;
        if (((ulong)ppuVar11 & 1) == 0) {
          ppuVar6 = (undefined **)0x0;
        }
        _objc_retain(ppuVar6);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar6;
        FUN_106c911a0();
        _objc_release(ppuVar6);
        unaff_x28 = (undefined **)((long)unaff_x28 + ((ulong)ppuVar12 & 0xffffffff));
        _objc_release(ppuVar15);
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar13 != ppuVar8);
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar12;
      func_0x00010c1d0640(puVar1);
      _objc_release(ppuVar12);
      ppuVar8 = ppuStack_3f8;
      ppuVar15 = ppuStack_408;
    }
    _objc_release(ppuVar16);
    _objc_release(ppuVar9);
    _objc_release(ppuVar15);
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_330) {
      ___stack_chk_fail();
      pcStack_418 = FUN_106c91d94;
      lStack_480 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_470 = unaff_x28;
      ppuStack_468 = ppuVar6;
      ppuStack_460 = ppuVar15;
      ppuStack_458 = ppuVar16;
      ppuStack_450 = ppuVar13;
      ppuStack_448 = ppuVar9;
      ppuStack_440 = ppuVar8;
      puStack_438 = puVar1;
      ppuStack_430 = ppuVar12;
      ppuStack_428 = ppuVar5;
      ppuStack_420 = &puStack_2d0;
      _objc_retain(ppuVar11);
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      ppuVar8 = ppuVar11;
      func_0x00010c0e00e0(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010bf529e0();
      puStack_608 = puVar1;
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_610 = &PTR____CFConstantStringClassReference_110f12a78;
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        lStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        puStack_5b0 = (undefined8 *)0x0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        _objc_retain(ppuVar8);
        ppuVar5 = ppuVar8;
        func_0x00010bf52a60();
        if (ppuVar5 != (undefined **)0x0) {
          unaff_x28 = (undefined **)*puStack_5b0;
          do {
            ppuVar9 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_5b0 != unaff_x28) {
                _objc_enumerationMutation(ppuVar8);
              }
              ppuVar16 = *(undefined ***)(lStack_5b8 + (long)ppuVar9 * 8);
              ppuVar15 = ppuVar16;
              func_0x00010bf4ddc0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126b52c0;
              _objc_opt_class(PTR_PTR_1126b52c0);
              ppuVar12 = ppuVar15;
              _objc_opt_isKindOfClass(ppuVar15,puVar1);
              ppuVar6 = ppuVar15;
              if (((ulong)ppuVar12 & 1) == 0) {
                ppuVar6 = (undefined **)0x0;
              }
              _objc_retain(ppuVar6);
              _objc_release(ppuVar15);
              ppuVar15 = ppuVar6;
              FUN_106c911a0();
              _objc_release(ppuVar6);
              if ((int)ppuVar15 != 0) {
                func_0x00010befa120(puVar2);
              }
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            } while (ppuVar5 != ppuVar9);
            ppuVar5 = ppuVar8;
            func_0x00010bf52a60();
          } while (ppuVar5 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        puVar3 = puVar2;
        func_0x00010bf529e0();
        puVar1 = puStack_608;
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c1d0640(puStack_608);
        }
        _objc_release(puVar2);
      }
      ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      ppuVar10 = &PTR____CFConstantStringClassReference_110f12b18;
      ppuVar9 = ppuVar11;
      ppuVar5 = ppuVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010bf529e0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuStack_618 = &PTR____CFConstantStringClassReference_110f12b18;
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        ppuStack_610 = ppuVar11;
        _objc_alloc_init();
        lStack_5f8 = 0;
        puStack_600 = (undefined *)0x0;
        uStack_5e8 = 0;
        plStack_5f0 = (long *)0x0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5c8 = 0;
        uStack_5d0 = 0;
        _objc_retain(ppuVar9);
        ppuVar5 = &puStack_600;
        ppuVar12 = ppuVar9;
        func_0x00010bf52a60();
        if (ppuVar12 != (undefined **)0x0) {
          lVar7 = *plStack_5f0;
          ppuVar10 = &PTR_PTR_1126b5000;
          do {
            ppuVar5 = (undefined **)0x0;
            do {
              if (*plStack_5f0 != lVar7) {
                _objc_enumerationMutation(ppuVar9);
              }
              ppuVar15 = *(undefined ***)(lStack_5f8 + (long)ppuVar5 * 8);
              ppuVar6 = ppuVar15;
              func_0x00010bf4ddc0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126b52c0;
              _objc_opt_class(PTR_PTR_1126b52c0);
              ppuVar16 = ppuVar6;
              _objc_opt_isKindOfClass(ppuVar6,puVar1);
              unaff_x28 = ppuVar6;
              if (((ulong)ppuVar16 & 1) == 0) {
                unaff_x28 = (undefined **)0x0;
              }
              _objc_retain(unaff_x28);
              _objc_release(ppuVar6);
              ppuVar6 = unaff_x28;
              FUN_106c911a0();
              _objc_release(unaff_x28);
              if ((int)ppuVar6 != 0) {
                func_0x00010befa120(ppuVar13);
              }
              ppuVar5 = (undefined **)((long)ppuVar5 + 1);
            } while (ppuVar12 != ppuVar5);
            ppuVar5 = &puStack_600;
            ppuVar12 = ppuVar9;
            func_0x00010bf52a60();
            ppuVar16 = (undefined **)0x0;
          } while (ppuVar12 != (undefined **)0x0);
        }
        _objc_release(ppuVar9);
        ppuVar12 = ppuVar13;
        func_0x00010bf529e0();
        puVar1 = puStack_608;
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar5 = ppuVar13;
          func_0x00010c1d0640(puStack_608);
        }
        _objc_release(ppuVar13);
        ppuVar11 = ppuStack_610;
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_480) {
        ___stack_chk_fail();
        ppuVar12 = &puStack_810;
        pcStack_628 = FUN_106c9212c;
        lStack_690 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_680 = unaff_x28;
        ppuStack_678 = ppuVar6;
        ppuStack_670 = ppuVar15;
        ppuStack_668 = ppuVar16;
        ppuStack_660 = ppuVar13;
        ppuStack_658 = ppuVar10;
        ppuStack_650 = ppuVar9;
        ppuStack_648 = ppuVar8;
        puStack_640 = puVar1;
        ppuStack_638 = ppuVar11;
        pppuStack_630 = &ppuStack_420;
        _objc_retain(ppuVar5);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar15 = &PTR____CFConstantStringClassReference_110f12df8;
        ppuVar8 = ppuVar5;
        func_0x00010c0e00e0(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(ppuVar8);
        ppuVar9 = &PTR____CFConstantStringClassReference_110f12a78;
        ppuVar8 = ppuVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar8;
        func_0x00010bf529e0();
        if (ppuVar6 != (undefined **)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
          _objc_alloc_init();
          lStack_7c8 = 0;
          uStack_7d0 = 0;
          uStack_7b8 = 0;
          plStack_7c0 = (long *)0x0;
          uStack_7a8 = 0;
          uStack_7b0 = 0;
          uStack_798 = 0;
          uStack_7a0 = 0;
          _objc_retain(ppuVar8);
          ppuVar15 = apuStack_710;
          ppuVar6 = ppuVar8;
          func_0x00010bf52a60();
          if (ppuVar6 != (undefined **)0x0) {
            lVar7 = *plStack_7c0;
            do {
              ppuVar15 = (undefined **)0x0;
              do {
                if (*plStack_7c0 != lVar7) {
                  _objc_enumerationMutation(ppuVar8);
                }
                iVar14 = (int)*(undefined8 *)(lStack_7c8 + (long)ppuVar15 * 8);
                FUN_106c911a0();
                if (iVar14 != 0) {
                  func_0x00010befa120(puVar2);
                }
                ppuVar15 = (undefined **)((long)ppuVar15 + 1);
              } while (ppuVar6 != ppuVar15);
              ppuVar15 = apuStack_710;
              ppuVar6 = ppuVar8;
              func_0x00010bf52a60();
            } while (ppuVar6 != (undefined **)0x0);
          }
          _objc_release(ppuVar8);
          puVar3 = puVar2;
          func_0x00010bf529e0();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
            ppuVar15 = ppuVar9;
          }
          _objc_release(puVar2);
        }
        ppuVar11 = &PTR____CFConstantStringClassReference_110f12b18;
        ppuVar6 = ppuVar5;
        ppuVar16 = ppuVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar6;
        func_0x00010bf529e0();
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
          _objc_alloc_init();
          lStack_808 = 0;
          puStack_810 = (undefined *)0x0;
          uStack_7f8 = 0;
          plStack_800 = (long *)0x0;
          uStack_7e8 = 0;
          uStack_7f0 = 0;
          uStack_7d8 = 0;
          uStack_7e0 = 0;
          _objc_retain(ppuVar6);
          ppuVar15 = apuStack_790;
          ppuVar16 = ppuVar6;
          func_0x00010bf52a60();
          if (ppuVar16 != (undefined **)0x0) {
            lVar7 = *plStack_800;
            do {
              ppuVar15 = (undefined **)0x0;
              do {
                if (*plStack_800 != lVar7) {
                  _objc_enumerationMutation(ppuVar6);
                }
                iVar14 = (int)*(undefined8 *)(lStack_808 + (long)ppuVar15 * 8);
                FUN_106c911a0();
                if (iVar14 != 0) {
                  func_0x00010befa120(ppuVar9);
                }
                ppuVar15 = (undefined **)((long)ppuVar15 + 1);
              } while (ppuVar16 != ppuVar15);
              ppuVar15 = apuStack_790;
              ppuVar16 = ppuVar6;
              ppuVar12 = &puStack_810;
              func_0x00010bf52a60();
            } while (ppuVar16 != (undefined **)0x0);
          }
          _objc_release(ppuVar6);
          ppuVar13 = ppuVar9;
          func_0x00010bf529e0();
          ppuVar16 = ppuVar12;
          if (ppuVar13 != (undefined **)0x0) {
            ppuVar16 = ppuVar9;
            func_0x00010c1d0640(puVar1);
            ppuVar15 = ppuVar11;
          }
          _objc_release(ppuVar9);
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar8);
        _objc_release(ppuVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_690) {
          ___stack_chk_fail();
          _objc_retain(ppuVar16);
          _objc_retain(ppuVar15);
          puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
          ppuVar8 = ppuVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010c282760();
          _objc_release(ppuVar8);
          if ((int)ppuVar6 != 0) {
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar2);
          }
          ppuVar8 = ppuVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar8;
          func_0x00010c282760();
          _objc_release(ppuVar8);
          ppuVar8 = ppuVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (((int)ppuVar6 != 0) &&
             (ppuVar5 = ppuVar8, func_0x00010bf529e0(), ppuVar5 != (undefined **)0x0)) {
            lVar7 = 0;
            ppuVar5 = (undefined **)0x0;
            do {
              ppuVar9 = ppuVar8;
              func_0x00010bf529e0();
              if (ppuVar9 <= ppuVar5) break;
              ppuVar12 = ppuVar8;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x00010bf4ddc0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126b52c0;
              _objc_opt_class(PTR_PTR_1126b52c0);
              ppuVar13 = ppuVar11;
              _objc_opt_isKindOfClass(ppuVar11,puVar2);
              ppuVar9 = ppuVar11;
              if (((ulong)ppuVar13 & 1) == 0) {
                ppuVar9 = (undefined **)0x0;
              }
              _objc_retain(ppuVar9);
              _objc_release(ppuVar11);
              ppuVar11 = ppuVar9;
              FUN_106c911a0();
              _objc_release(ppuVar9);
              lVar7 = lVar7 + ((ulong)ppuVar11 & 0xffffffff);
              _objc_release(ppuVar12);
              ppuVar5 = (undefined **)((long)ppuVar5 + 1);
            } while ((undefined **)((ulong)ppuVar6 & 0xffffffff) != ppuVar5);
            if (lVar7 != 0) {
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1);
              _objc_release(puVar2);
            }
          }
          ppuVar6 = ppuVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar6;
          func_0x00010c282760();
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (((int)ppuVar5 != 0) &&
             (ppuVar9 = ppuVar6, func_0x00010bf529e0(), ppuVar9 != (undefined **)0x0)) {
            lVar7 = 0;
            ppuVar9 = (undefined **)0x0;
            do {
              ppuVar12 = ppuVar6;
              func_0x00010bf529e0();
              if (ppuVar12 <= ppuVar9) break;
              ppuVar11 = ppuVar6;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar11;
              func_0x00010bf4ddc0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126b52c0;
              _objc_opt_class(PTR_PTR_1126b52c0);
              ppuVar10 = ppuVar13;
              _objc_opt_isKindOfClass(ppuVar13,puVar2);
              ppuVar12 = ppuVar13;
              if (((ulong)ppuVar10 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              _objc_release(ppuVar13);
              ppuVar13 = ppuVar12;
              FUN_106c911a0();
              _objc_release(ppuVar12);
              lVar7 = lVar7 + ((ulong)ppuVar13 & 0xffffffff);
              _objc_release(ppuVar11);
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            } while ((undefined **)((ulong)ppuVar5 & 0xffffffff) != ppuVar9);
            if (lVar7 != 0) {
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar1);
              _objc_release(puVar2);
            }
          }
          _objc_release(ppuVar6);
          _objc_release(ppuVar8);
          _objc_release(ppuVar15);
          _objc_release(ppuVar16);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c91868; end: 106c91d93; -[SCMatchaSendToLoggerSource sectionToVisibleCellsNumberMappingBreakdown:sectionToAvailableViewModelsMapping:] */

void FUN_106c91868(ulong param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined **unaff_x28;
  undefined *puStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined *apuStack_4d0 [16];
  undefined *apuStack_450 [16];
  long lStack_3d0;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuStack_138 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar15 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar15;
  func_0x00010bf52a60();
  if (ppuVar18 != (undefined **)0x0) {
    unaff_x28 = (undefined **)*puStack_120;
    do {
      ppuVar8 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x28) {
          _objc_enumerationMutation(ppuVar15);
        }
        uVar17 = *(ulong *)(lStack_128 + (long)ppuVar8 * 8);
        uVar2 = param_1;
        func_0x00010be43980();
        if (((uVar2 & 1) == 0) && (func_0x00010c0720c0(), (uVar17 & 1) == 0)) {
          ppuVar7 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(ppuVar7);
        }
        ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      } while (ppuVar18 != ppuVar8);
      ppuVar18 = ppuVar15;
      func_0x00010bf52a60();
    } while (ppuVar18 != (undefined **)0x0);
  }
  _objc_release(ppuVar15);
  ppuVar18 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR____CFConstantStringClassReference_110f12a58;
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar15 = &PTR____CFConstantStringClassReference_110f12a78;
  }
  _objc_retain(ppuVar15);
  _objc_release(ppuVar18);
  ppuVar18 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar18;
  func_0x00010c282760();
  _objc_release(ppuVar18);
  ppuVar18 = ppuStack_138;
  ppuVar7 = ppuStack_138;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((int)ppuVar8 != 0) &&
     (ppuVar16 = ppuVar7, func_0x00010bf529e0(), ppuVar16 != (undefined **)0x0)) {
    ppuVar8 = (undefined **)((ulong)ppuVar8 & 0xffffffff);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    ppuStack_148 = ppuVar15;
    _objc_opt_new();
    ppuVar15 = (undefined **)0x0;
    ppuStack_140 = ppuVar8;
    do {
      ppuVar18 = ppuVar7;
      func_0x00010bf529e0();
      if (ppuVar18 <= ppuVar15) break;
      ppuVar16 = ppuVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = ppuVar16;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      ppuVar10 = unaff_x28;
      _objc_opt_isKindOfClass(unaff_x28,puVar4);
      ppuVar18 = unaff_x28;
      if (((ulong)ppuVar10 & 1) == 0) {
        ppuVar18 = (undefined **)0x0;
      }
      _objc_retain(ppuVar18);
      _objc_release(unaff_x28);
      ppuVar10 = ppuVar18;
      FUN_106c911a0();
      if (((ulong)ppuVar10 & 1) == 0) {
        unaff_x28 = ppuVar18;
        FUN_106c9129c();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = unaff_x28;
        func_0x00010c08fa60();
        if (ppuVar10 != (undefined **)0x0) {
          puVar4 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar3);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar5 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010c0df760(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar4);
          _objc_release(puVar5);
          puVar4 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar4);
          ppuVar8 = ppuStack_140;
        }
        _objc_release(unaff_x28);
      }
      _objc_release(ppuVar18);
      _objc_release(ppuVar16);
      ppuVar15 = (undefined **)((long)ppuVar15 + 1);
    } while (ppuVar8 != ppuVar15);
    _objc_release(puVar3);
    ppuVar18 = ppuStack_138;
    ppuVar15 = ppuStack_148;
  }
  ppuVar13 = &PTR____CFConstantStringClassReference_110f12b18;
  ppuVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar10;
  func_0x00010c282760();
  _objc_release(ppuVar10);
  ppuVar16 = ppuVar18;
  ppuVar12 = ppuVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((int)ppuVar8 != 0) &&
     (ppuVar6 = ppuVar16, func_0x00010bf529e0(), ppuVar6 != (undefined **)0x0)) {
    ppuStack_140 = &PTR____CFConstantStringClassReference_110f12b18;
    unaff_x28 = (undefined **)0x0;
    ppuVar18 = (undefined **)0x0;
    ppuVar13 = (undefined **)((ulong)ppuVar8 & 0xffffffff);
    ppuStack_148 = ppuVar15;
    do {
      ppuVar15 = ppuVar16;
      func_0x00010bf529e0();
      if (ppuVar15 <= ppuVar18) break;
      ppuVar15 = ppuVar16;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar15;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      ppuVar12 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar3);
      ppuVar8 = ppuVar10;
      if (((ulong)ppuVar12 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar10);
      ppuVar10 = ppuVar8;
      FUN_106c911a0();
      _objc_release(ppuVar8);
      unaff_x28 = (undefined **)((long)unaff_x28 + ((ulong)ppuVar10 & 0xffffffff));
      _objc_release(ppuVar15);
      ppuVar18 = (undefined **)((long)ppuVar18 + 1);
    } while (ppuVar13 != ppuVar18);
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar10;
    func_0x00010c1d0640(puVar1);
    _objc_release(ppuVar10);
    ppuVar18 = ppuStack_138;
    ppuVar15 = ppuStack_148;
  }
  _objc_release(ppuVar16);
  _objc_release(ppuVar7);
  _objc_release(ppuVar15);
  _objc_release(ppuVar18);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_106c91d94;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1b0 = unaff_x28;
    ppuStack_1a8 = ppuVar8;
    ppuStack_1a0 = ppuVar15;
    ppuStack_198 = ppuVar16;
    ppuStack_190 = ppuVar13;
    ppuStack_188 = ppuVar7;
    ppuStack_180 = ppuVar18;
    puStack_178 = puVar1;
    ppuStack_170 = ppuVar10;
    ppuStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuVar18 = ppuVar12;
    func_0x00010c0e00e0(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar18;
    func_0x00010bf529e0();
    puStack_348 = puVar1;
    if (ppuVar7 != (undefined **)0x0) {
      ppuStack_350 = &PTR____CFConstantStringClassReference_110f12a78;
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      lStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      puStack_2f0 = (undefined8 *)0x0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      _objc_retain(ppuVar18);
      ppuVar7 = ppuVar18;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x28 = (undefined **)*puStack_2f0;
        do {
          ppuVar10 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_2f0 != unaff_x28) {
              _objc_enumerationMutation(ppuVar18);
            }
            ppuVar16 = *(undefined ***)(lStack_2f8 + (long)ppuVar10 * 8);
            ppuVar15 = ppuVar16;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126b52c0;
            _objc_opt_class(PTR_PTR_1126b52c0);
            ppuVar13 = ppuVar15;
            _objc_opt_isKindOfClass(ppuVar15,puVar1);
            ppuVar8 = ppuVar15;
            if (((ulong)ppuVar13 & 1) == 0) {
              ppuVar8 = (undefined **)0x0;
            }
            _objc_retain(ppuVar8);
            _objc_release(ppuVar15);
            ppuVar15 = ppuVar8;
            FUN_106c911a0();
            _objc_release(ppuVar8);
            if ((int)ppuVar15 != 0) {
              func_0x00010befa120(puVar3);
            }
            ppuVar10 = (undefined **)((long)ppuVar10 + 1);
          } while (ppuVar7 != ppuVar10);
          ppuVar7 = ppuVar18;
          func_0x00010bf52a60();
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(ppuVar18);
      puVar4 = puVar3;
      func_0x00010bf529e0();
      puVar1 = puStack_348;
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d0640(puStack_348);
      }
      _objc_release(puVar3);
    }
    ppuVar6 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar11 = &PTR____CFConstantStringClassReference_110f12b18;
    ppuVar10 = ppuVar12;
    ppuVar7 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010bf529e0();
    if (ppuVar13 != (undefined **)0x0) {
      ppuStack_358 = &PTR____CFConstantStringClassReference_110f12b18;
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuStack_350 = ppuVar12;
      _objc_alloc_init();
      lStack_338 = 0;
      puStack_340 = (undefined *)0x0;
      uStack_328 = 0;
      plStack_330 = (long *)0x0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      _objc_retain(ppuVar10);
      ppuVar7 = &puStack_340;
      ppuVar12 = ppuVar10;
      func_0x00010bf52a60();
      if (ppuVar12 != (undefined **)0x0) {
        lVar9 = *plStack_330;
        ppuVar11 = &PTR_PTR_1126b5000;
        do {
          ppuVar7 = (undefined **)0x0;
          do {
            if (*plStack_330 != lVar9) {
              _objc_enumerationMutation(ppuVar10);
            }
            ppuVar15 = *(undefined ***)(lStack_338 + (long)ppuVar7 * 8);
            ppuVar8 = ppuVar15;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126b52c0;
            _objc_opt_class(PTR_PTR_1126b52c0);
            ppuVar16 = ppuVar8;
            _objc_opt_isKindOfClass(ppuVar8,puVar1);
            unaff_x28 = ppuVar8;
            if (((ulong)ppuVar16 & 1) == 0) {
              unaff_x28 = (undefined **)0x0;
            }
            _objc_retain(unaff_x28);
            _objc_release(ppuVar8);
            ppuVar8 = unaff_x28;
            FUN_106c911a0();
            _objc_release(unaff_x28);
            if ((int)ppuVar8 != 0) {
              func_0x00010befa120(ppuVar6);
            }
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
          } while (ppuVar12 != ppuVar7);
          ppuVar7 = &puStack_340;
          ppuVar12 = ppuVar10;
          func_0x00010bf52a60();
          ppuVar16 = (undefined **)0x0;
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar10);
      ppuVar12 = ppuVar6;
      func_0x00010bf529e0();
      puVar1 = puStack_348;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar7 = ppuVar6;
        func_0x00010c1d0640(puStack_348);
      }
      _objc_release(ppuVar6);
      ppuVar12 = ppuStack_350;
    }
    _objc_release(ppuVar10);
    _objc_release(ppuVar18);
    _objc_release(ppuVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      ppuVar13 = &puStack_550;
      pcStack_368 = FUN_106c9212c;
      lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_3c0 = unaff_x28;
      ppuStack_3b8 = ppuVar8;
      ppuStack_3b0 = ppuVar15;
      ppuStack_3a8 = ppuVar16;
      ppuStack_3a0 = ppuVar6;
      ppuStack_398 = ppuVar11;
      ppuStack_390 = ppuVar10;
      ppuStack_388 = ppuVar18;
      puStack_380 = puVar1;
      ppuStack_378 = ppuVar12;
      ppuStack_370 = &puStack_160;
      _objc_retain(ppuVar7);
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      ppuVar15 = &PTR____CFConstantStringClassReference_110f12df8;
      ppuVar18 = ppuVar7;
      func_0x00010c0e00e0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(ppuVar18);
      ppuVar16 = &PTR____CFConstantStringClassReference_110f12a78;
      ppuVar18 = ppuVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar18;
      func_0x00010bf529e0();
      if (ppuVar8 != (undefined **)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        _objc_alloc_init();
        lStack_508 = 0;
        uStack_510 = 0;
        uStack_4f8 = 0;
        plStack_500 = (long *)0x0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        _objc_retain(ppuVar18);
        ppuVar15 = apuStack_450;
        ppuVar8 = ppuVar18;
        func_0x00010bf52a60();
        if (ppuVar8 != (undefined **)0x0) {
          lVar9 = *plStack_500;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_500 != lVar9) {
                _objc_enumerationMutation(ppuVar18);
              }
              iVar14 = (int)*(undefined8 *)(lStack_508 + (long)ppuVar15 * 8);
              FUN_106c911a0();
              if (iVar14 != 0) {
                func_0x00010befa120(puVar3);
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar8 != ppuVar15);
            ppuVar15 = apuStack_450;
            ppuVar8 = ppuVar18;
            func_0x00010bf52a60();
          } while (ppuVar8 != (undefined **)0x0);
        }
        _objc_release(ppuVar18);
        puVar4 = puVar3;
        func_0x00010bf529e0();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar1);
          ppuVar15 = ppuVar16;
        }
        _objc_release(puVar3);
      }
      ppuVar12 = &PTR____CFConstantStringClassReference_110f12b18;
      ppuVar8 = ppuVar7;
      ppuVar10 = ppuVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar8;
      func_0x00010bf529e0();
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        _objc_alloc_init();
        lStack_548 = 0;
        puStack_550 = (undefined *)0x0;
        uStack_538 = 0;
        plStack_540 = (long *)0x0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        _objc_retain(ppuVar8);
        ppuVar15 = apuStack_4d0;
        ppuVar10 = ppuVar8;
        func_0x00010bf52a60();
        if (ppuVar10 != (undefined **)0x0) {
          lVar9 = *plStack_540;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_540 != lVar9) {
                _objc_enumerationMutation(ppuVar8);
              }
              iVar14 = (int)*(undefined8 *)(lStack_548 + (long)ppuVar15 * 8);
              FUN_106c911a0();
              if (iVar14 != 0) {
                func_0x00010befa120(ppuVar16);
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar10 != ppuVar15);
            ppuVar15 = apuStack_4d0;
            ppuVar10 = ppuVar8;
            ppuVar13 = &puStack_550;
            func_0x00010bf52a60();
          } while (ppuVar10 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        ppuVar6 = ppuVar16;
        func_0x00010bf529e0();
        ppuVar10 = ppuVar13;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar10 = ppuVar16;
          func_0x00010c1d0640(puVar1);
          ppuVar15 = ppuVar12;
        }
        _objc_release(ppuVar16);
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar18);
      _objc_release(ppuVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d0) {
        ___stack_chk_fail();
        _objc_retain(ppuVar10);
        _objc_retain(ppuVar15);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        ppuVar18 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar18;
        func_0x00010c282760();
        _objc_release(ppuVar18);
        if ((int)ppuVar8 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar3);
        }
        ppuVar18 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar18;
        func_0x00010c282760();
        _objc_release(ppuVar18);
        ppuVar18 = ppuVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (((int)ppuVar8 != 0) &&
           (ppuVar7 = ppuVar18, func_0x00010bf529e0(), ppuVar7 != (undefined **)0x0)) {
          lVar9 = 0;
          ppuVar7 = (undefined **)0x0;
          do {
            ppuVar16 = ppuVar18;
            func_0x00010bf529e0();
            if (ppuVar16 <= ppuVar7) break;
            ppuVar12 = ppuVar18;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar12;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126b52c0;
            _objc_opt_class(PTR_PTR_1126b52c0);
            ppuVar6 = ppuVar13;
            _objc_opt_isKindOfClass(ppuVar13,puVar3);
            ppuVar16 = ppuVar13;
            if (((ulong)ppuVar6 & 1) == 0) {
              ppuVar16 = (undefined **)0x0;
            }
            _objc_retain(ppuVar16);
            _objc_release(ppuVar13);
            ppuVar13 = ppuVar16;
            FUN_106c911a0();
            _objc_release(ppuVar16);
            lVar9 = lVar9 + ((ulong)ppuVar13 & 0xffffffff);
            _objc_release(ppuVar12);
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
          } while ((undefined **)((ulong)ppuVar8 & 0xffffffff) != ppuVar7);
          if (lVar9 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar3);
          }
        }
        ppuVar8 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar8;
        func_0x00010c282760();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (((int)ppuVar7 != 0) &&
           (ppuVar16 = ppuVar8, func_0x00010bf529e0(), ppuVar16 != (undefined **)0x0)) {
          lVar9 = 0;
          ppuVar16 = (undefined **)0x0;
          do {
            ppuVar12 = ppuVar8;
            func_0x00010bf529e0();
            if (ppuVar12 <= ppuVar16) break;
            ppuVar13 = ppuVar8;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar13;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126b52c0;
            _objc_opt_class(PTR_PTR_1126b52c0);
            ppuVar11 = ppuVar6;
            _objc_opt_isKindOfClass(ppuVar6,puVar3);
            ppuVar12 = ppuVar6;
            if (((ulong)ppuVar11 & 1) == 0) {
              ppuVar12 = (undefined **)0x0;
            }
            _objc_retain(ppuVar12);
            _objc_release(ppuVar6);
            ppuVar6 = ppuVar12;
            FUN_106c911a0();
            _objc_release(ppuVar12);
            lVar9 = lVar9 + ((ulong)ppuVar6 & 0xffffffff);
            _objc_release(ppuVar13);
            ppuVar16 = (undefined **)((long)ppuVar16 + 1);
          } while ((undefined **)((ulong)ppuVar7 & 0xffffffff) != ppuVar16);
          if (lVar9 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(puVar3);
          }
        }
        _objc_release(ppuVar8);
        _objc_release(ppuVar18);
        _objc_release(ppuVar15);
        _objc_release(ppuVar10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c91d94; end: 106c9212b; -[SCMatchaSendToLoggerSource sectionToContactsViewModelsBreakdownForViewModelsMapping:] */

void FUN_106c91d94(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  int iVar16;
  ulong unaff_x25;
  undefined **ppuVar17;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined *puStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *apuStack_380 [16];
  undefined *apuStack_300 [16];
  long lStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuVar11 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(ppuVar11);
  ppuVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar11;
  func_0x00010bf529e0();
  puStack_1f8 = puVar1;
  if (ppuVar9 != (undefined **)0x0) {
    ppuStack_200 = &PTR____CFConstantStringClassReference_110f12a78;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (ulong *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(ppuVar11);
    ppuVar9 = ppuVar11;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      unaff_x28 = *puStack_1a0;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*puStack_1a0 != unaff_x28) {
            _objc_enumerationMutation(ppuVar11);
          }
          unaff_x25 = *(ulong *)(lStack_1a8 + (long)ppuVar12 * 8);
          uVar3 = unaff_x25;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b52c0;
          _objc_opt_class(PTR_PTR_1126b52c0);
          uVar4 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar1);
          unaff_x27 = uVar3;
          if ((uVar4 & 1) == 0) {
            unaff_x27 = 0;
          }
          _objc_retain(unaff_x27);
          _objc_release(uVar3);
          unaff_x26 = unaff_x27;
          FUN_106c911a0();
          _objc_release(unaff_x27);
          if ((int)unaff_x26 != 0) {
            func_0x00010befa120(puVar2);
          }
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar9 != ppuVar12);
        ppuVar9 = ppuVar11;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar11);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    puVar1 = puStack_1f8;
    if (puVar5 != (undefined *)0x0) {
      func_0x00010c1d0640(puStack_1f8);
    }
    _objc_release(puVar2);
  }
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuVar14 = &PTR____CFConstantStringClassReference_110f12b18;
  ppuVar12 = param_3;
  ppuVar9 = ppuVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar12;
  func_0x00010bf529e0();
  if (ppuVar17 != (undefined **)0x0) {
    ppuStack_208 = &PTR____CFConstantStringClassReference_110f12b18;
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_200 = param_3;
    _objc_alloc_init();
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(ppuVar12);
    ppuVar9 = &puStack_1f0;
    ppuVar17 = ppuVar12;
    func_0x00010bf52a60();
    if (ppuVar17 != (undefined **)0x0) {
      lVar10 = *plStack_1e0;
      ppuVar14 = &PTR_PTR_1126b5000;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_1e0 != lVar10) {
            _objc_enumerationMutation(ppuVar12);
          }
          unaff_x26 = *(ulong *)(lStack_1e8 + (long)ppuVar9 * 8);
          uVar3 = unaff_x26;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b52c0;
          _objc_opt_class(PTR_PTR_1126b52c0);
          uVar4 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar1);
          unaff_x28 = uVar3;
          if ((uVar4 & 1) == 0) {
            unaff_x28 = 0;
          }
          _objc_retain(unaff_x28);
          _objc_release(uVar3);
          unaff_x27 = unaff_x28;
          FUN_106c911a0();
          _objc_release(unaff_x28);
          if ((int)unaff_x27 != 0) {
            func_0x00010befa120(ppuVar13);
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar17 != ppuVar9);
        ppuVar9 = &puStack_1f0;
        ppuVar17 = ppuVar12;
        func_0x00010bf52a60();
        unaff_x25 = 0;
      } while (ppuVar17 != (undefined **)0x0);
    }
    _objc_release(ppuVar12);
    ppuVar17 = ppuVar13;
    func_0x00010bf529e0();
    puVar1 = puStack_1f8;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar9 = ppuVar13;
      func_0x00010c1d0640(puStack_1f8);
    }
    _objc_release(ppuVar13);
    param_3 = ppuStack_200;
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar7 = &puStack_400;
    pcStack_218 = FUN_106c9212c;
    lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_270 = unaff_x28;
    uStack_268 = unaff_x27;
    uStack_260 = unaff_x26;
    uStack_258 = unaff_x25;
    ppuStack_250 = ppuVar13;
    ppuStack_248 = ppuVar14;
    ppuStack_240 = ppuVar12;
    ppuStack_238 = ppuVar11;
    puStack_230 = puVar1;
    ppuStack_228 = param_3;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuVar11 = &PTR____CFConstantStringClassReference_110f12df8;
    ppuVar12 = ppuVar9;
    func_0x00010c0e00e0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(ppuVar12);
    ppuVar13 = &PTR____CFConstantStringClassReference_110f12a78;
    ppuVar12 = ppuVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar12;
    func_0x00010bf529e0();
    if (ppuVar17 != (undefined **)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_alloc_init();
      lStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      _objc_retain(ppuVar12);
      ppuVar11 = apuStack_300;
      ppuVar17 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar17 != (undefined **)0x0) {
        lVar10 = *plStack_3b0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_3b0 != lVar10) {
              _objc_enumerationMutation(ppuVar12);
            }
            iVar16 = (int)*(undefined8 *)(lStack_3b8 + (long)ppuVar11 * 8);
            FUN_106c911a0();
            if (iVar16 != 0) {
              func_0x00010befa120(puVar2);
            }
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar17 != ppuVar11);
          ppuVar11 = apuStack_300;
          ppuVar17 = ppuVar12;
          func_0x00010bf52a60();
        } while (ppuVar17 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      puVar5 = puVar2;
      func_0x00010bf529e0();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar1);
        ppuVar11 = ppuVar13;
      }
      _objc_release(puVar2);
    }
    ppuVar15 = &PTR____CFConstantStringClassReference_110f12b18;
    ppuVar17 = ppuVar9;
    ppuVar14 = ppuVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar17;
    func_0x00010bf529e0();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_alloc_init();
      lStack_3f8 = 0;
      puStack_400 = (undefined *)0x0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      _objc_retain(ppuVar17);
      ppuVar11 = apuStack_380;
      ppuVar14 = ppuVar17;
      func_0x00010bf52a60();
      if (ppuVar14 != (undefined **)0x0) {
        lVar10 = *plStack_3f0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_3f0 != lVar10) {
              _objc_enumerationMutation(ppuVar17);
            }
            iVar16 = (int)*(undefined8 *)(lStack_3f8 + (long)ppuVar11 * 8);
            FUN_106c911a0();
            if (iVar16 != 0) {
              func_0x00010befa120(ppuVar13);
            }
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar14 != ppuVar11);
          ppuVar11 = apuStack_380;
          ppuVar14 = ppuVar17;
          ppuVar7 = &puStack_400;
          func_0x00010bf52a60();
        } while (ppuVar14 != (undefined **)0x0);
      }
      _objc_release(ppuVar17);
      ppuVar6 = ppuVar13;
      func_0x00010bf529e0();
      ppuVar14 = ppuVar7;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar14 = ppuVar13;
        func_0x00010c1d0640(puVar1);
        ppuVar11 = ppuVar15;
      }
      _objc_release(ppuVar13);
    }
    _objc_release(ppuVar17);
    _objc_release(ppuVar12);
    _objc_release(ppuVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
      ___stack_chk_fail();
      _objc_retain(ppuVar14);
      _objc_retain(ppuVar11);
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      ppuVar9 = ppuVar14;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010c282760();
      _objc_release(ppuVar9);
      if ((int)ppuVar12 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar2);
      }
      ppuVar9 = ppuVar14;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010c282760();
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (((int)ppuVar12 != 0) &&
         (ppuVar17 = ppuVar9, func_0x00010bf529e0(), ppuVar17 != (undefined **)0x0)) {
        lVar10 = 0;
        ppuVar17 = (undefined **)0x0;
        do {
          ppuVar13 = ppuVar9;
          func_0x00010bf529e0();
          if (ppuVar13 <= ppuVar17) break;
          ppuVar7 = ppuVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar7;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b52c0;
          _objc_opt_class(PTR_PTR_1126b52c0);
          ppuVar6 = ppuVar15;
          _objc_opt_isKindOfClass(ppuVar15,puVar2);
          ppuVar13 = ppuVar15;
          if (((ulong)ppuVar6 & 1) == 0) {
            ppuVar13 = (undefined **)0x0;
          }
          _objc_retain(ppuVar13);
          _objc_release(ppuVar15);
          ppuVar15 = ppuVar13;
          FUN_106c911a0();
          _objc_release(ppuVar13);
          lVar10 = lVar10 + ((ulong)ppuVar15 & 0xffffffff);
          _objc_release(ppuVar7);
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while ((undefined **)((ulong)ppuVar12 & 0xffffffff) != ppuVar17);
        if (lVar10 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar2);
        }
      }
      ppuVar12 = ppuVar14;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar12;
      func_0x00010c282760();
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (((int)ppuVar17 != 0) &&
         (ppuVar13 = ppuVar12, func_0x00010bf529e0(), ppuVar13 != (undefined **)0x0)) {
        lVar10 = 0;
        ppuVar13 = (undefined **)0x0;
        do {
          ppuVar7 = ppuVar12;
          func_0x00010bf529e0();
          if (ppuVar7 <= ppuVar13) break;
          ppuVar15 = ppuVar12;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar15;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b52c0;
          _objc_opt_class(PTR_PTR_1126b52c0);
          ppuVar8 = ppuVar6;
          _objc_opt_isKindOfClass(ppuVar6,puVar2);
          ppuVar7 = ppuVar6;
          if (((ulong)ppuVar8 & 1) == 0) {
            ppuVar7 = (undefined **)0x0;
          }
          _objc_retain(ppuVar7);
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar7;
          FUN_106c911a0();
          _objc_release(ppuVar7);
          lVar10 = lVar10 + ((ulong)ppuVar6 & 0xffffffff);
          _objc_release(ppuVar15);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while ((undefined **)((ulong)ppuVar17 & 0xffffffff) != ppuVar13);
        if (lVar10 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar2);
        }
      }
      _objc_release(ppuVar12);
      _objc_release(ppuVar9);
      _objc_release(ppuVar11);
      _objc_release(ppuVar14);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c9212c; end: 106c92403; -[SCMatchaSendToLoggerSource sectionToContactViewModelsOrderedSetBreakdownForViewModelsMapping:] */

void FUN_106c9212c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *apuStack_170 [16];
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  ppuVar5 = &puStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuVar10 = &PTR____CFConstantStringClassReference_110f12df8;
  lVar13 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(lVar13);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f12a78;
  lVar13 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc_init();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(lVar13);
    ppuVar10 = apuStack_f0;
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar18 = *plStack_1a0;
      do {
        lVar17 = 0;
        do {
          if (*plStack_1a0 != lVar18) {
            _objc_enumerationMutation(lVar13);
          }
          iVar14 = (int)*(undefined8 *)(lStack_1a8 + lVar17 * 8);
          FUN_106c911a0();
          if (iVar14 != 0) {
            func_0x00010befa120(puVar3);
          }
          lVar17 = lVar17 + 1;
        } while (lVar2 != lVar17);
        ppuVar10 = apuStack_f0;
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c1d0640(puVar1);
      ppuVar10 = ppuVar11;
    }
    _objc_release(puVar3);
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110f12b18;
  lVar2 = param_3;
  ppuVar11 = ppuVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf529e0();
  if (lVar18 != 0) {
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_alloc_init();
    lStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(lVar2);
    ppuVar10 = apuStack_170;
    lVar18 = lVar2;
    func_0x00010bf52a60();
    if (lVar18 != 0) {
      lVar17 = *plStack_1e0;
      do {
        lVar19 = 0;
        do {
          if (*plStack_1e0 != lVar17) {
            _objc_enumerationMutation(lVar2);
          }
          iVar14 = (int)*(undefined8 *)(lStack_1e8 + lVar19 * 8);
          FUN_106c911a0();
          if (iVar14 != 0) {
            func_0x00010befa120(ppuVar15);
          }
          lVar19 = lVar19 + 1;
        } while (lVar18 != lVar19);
        ppuVar10 = apuStack_170;
        lVar18 = lVar2;
        ppuVar5 = &puStack_1f0;
        func_0x00010bf52a60();
      } while (lVar18 != 0);
    }
    _objc_release(lVar2);
    ppuVar16 = ppuVar15;
    func_0x00010bf529e0();
    ppuVar11 = ppuVar5;
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar11 = ppuVar15;
      func_0x00010c1d0640(puVar1);
      ppuVar10 = ppuVar12;
    }
    _objc_release(ppuVar15);
  }
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar10);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuVar5 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010c282760();
    _objc_release(ppuVar5);
    if ((int)ppuVar12 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar3);
    }
    ppuVar5 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010c282760();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (((int)ppuVar12 != 0) &&
       (ppuVar15 = ppuVar5, func_0x00010bf529e0(), ppuVar15 != (undefined **)0x0)) {
      lVar13 = 0;
      ppuVar15 = (undefined **)0x0;
      do {
        ppuVar16 = ppuVar5;
        func_0x00010bf529e0();
        if (ppuVar16 <= ppuVar15) break;
        ppuVar6 = ppuVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        ppuVar8 = ppuVar7;
        _objc_opt_isKindOfClass(ppuVar7,puVar3);
        ppuVar16 = ppuVar7;
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar16 = (undefined **)0x0;
        }
        _objc_retain(ppuVar16);
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar16;
        FUN_106c911a0();
        _objc_release(ppuVar16);
        lVar13 = lVar13 + ((ulong)ppuVar7 & 0xffffffff);
        _objc_release(ppuVar6);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while ((undefined **)((ulong)ppuVar12 & 0xffffffff) != ppuVar15);
      if (lVar13 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar3);
      }
    }
    ppuVar12 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar12;
    func_0x00010c282760();
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (((int)ppuVar15 != 0) &&
       (ppuVar16 = ppuVar12, func_0x00010bf529e0(), ppuVar16 != (undefined **)0x0)) {
      lVar13 = 0;
      ppuVar16 = (undefined **)0x0;
      do {
        ppuVar6 = ppuVar12;
        func_0x00010bf529e0();
        if (ppuVar6 <= ppuVar16) break;
        ppuVar7 = ppuVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        ppuVar9 = ppuVar8;
        _objc_opt_isKindOfClass(ppuVar8,puVar3);
        ppuVar6 = ppuVar8;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar6 = (undefined **)0x0;
        }
        _objc_retain(ppuVar6);
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar6;
        FUN_106c911a0();
        _objc_release(ppuVar6);
        lVar13 = lVar13 + ((ulong)ppuVar8 & 0xffffffff);
        _objc_release(ppuVar7);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while ((undefined **)((ulong)ppuVar15 & 0xffffffff) != ppuVar16);
      if (lVar13 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar3);
      }
    }
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar10);
    _objc_release(ppuVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c92404; end: 106c92773; -[SCMatchaSendToLoggerSource sectionToVisibleContactCellsNumberMappingBreakdown:sectionToAvailableViewModelsMapping:] */

void FUN_106c92404(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar4);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((int)uVar3 != 0) && (uVar10 = uVar2, func_0x00010bf529e0(), uVar10 != 0)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar11 = uVar2;
      func_0x00010bf529e0();
      if (uVar11 <= uVar10) break;
      uVar5 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar4);
      uVar11 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar6);
      uVar6 = uVar11;
      FUN_106c911a0();
      _objc_release(uVar11);
      lVar9 = lVar9 + (uVar6 & 0xffffffff);
      _objc_release(uVar5);
      uVar10 = uVar10 + 1;
    } while ((uVar3 & 0xffffffff) != uVar10);
    if (lVar9 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
    }
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c282760();
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((int)uVar10 != 0) && (uVar11 = uVar3, func_0x00010bf529e0(), uVar11 != 0)) {
    lVar9 = 0;
    uVar11 = 0;
    do {
      uVar5 = uVar3;
      func_0x00010bf529e0();
      if (uVar5 <= uVar11) break;
      uVar6 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      uVar5 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar7);
      uVar7 = uVar5;
      FUN_106c911a0();
      _objc_release(uVar5);
      lVar9 = lVar9 + (uVar7 & 0xffffffff);
      _objc_release(uVar6);
      uVar11 = uVar11 + 1;
    } while ((uVar10 & 0xffffffff) != uVar11);
    if (lVar9 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c92774; end: 106c9297f; -[SCMatchaSendToLoggerSource recentSectionIndexMappingForViewModelsMapping:] */

void FUN_106c92774(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf529e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f12a58;
  if (uVar11 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f12a78;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b52c0;
      _objc_opt_class(PTR_PTR_1126b52c0);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar10 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar5);
      if (uVar10 != 0) {
        func_0x00010bfecc60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        if (uVar9 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(uVar9);
      }
      _objc_release(uVar10);
      _objc_release(uVar4);
      uVar11 = uVar11 + 1;
      uVar10 = uVar2;
      func_0x00010bf529e0();
    } while (uVar11 < uVar10);
  }
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c92980; end: 106c92ae7; -[SCMatchaSendToLoggerSource userGeneratedListRecipientsAvailableCountFromLists:] */

void FUN_106c92980(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar3 = lVar7;
        func_0x00010c244720(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        func_0x00010bfceb60(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010bf529e0();
        lVar6 = lVar4 + lVar6 + lVar3;
        _objc_release(lVar7);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010050471c(lVar6,&PTR___NSConcreteGlobalBlock_11096dfc0,
                        &PTR___NSConcreteGlobalBlock_11096e000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c92ae8; end: 106c92b0f; -[SCMatchaSendToLoggerSource contextualListsSectionToAvailableCellsNumberMappingFromLists:] */

void FUN_106c92ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11096dfc0,
                      &PTR___NSConcreteGlobalBlock_11096e000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c92b10; end: 106c92b9f;  */

void FUN_106c92b10(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c09a080(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_106c98030();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106c92ba0; end: 106c92c53;  */

void FUN_106c92ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c244720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar2 = param_2;
  func_0x00010bfceb60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf49ca0(param_2);
  _objc_release(param_2);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c92c54; end: 106c92db7; -[SCMatchaSendToLoggerSource contextualListRecipientsAvailableCountFromContextualListsSectionMapping:] */

void FUN_106c92c54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(lStack_118 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c0720c0(uVar7,param_2,&PTR____CFConstantStringClassReference_110dbb718);
        if ((uVar2 & 1) == 0) {
          lVar3 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c2827c0();
          lVar6 = lVar4 + lVar6;
          _objc_release(lVar3);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = *(undefined **)(param_3 + 0x10);
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c92db8; end: 106c92ddf; -[SCMatchaSendToLoggerSource currentUserId] */

void FUN_106c92db8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c92de0; end: 106c92f13; -[SCMatchaSendToLoggerSource _selectionIdentifierForViewModel:] */

void FUN_106c92de0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126c51a0;
  uVar3 = param_3;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar6 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_3);
    if (uVar6 == 0) {
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar6 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bfecc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106c92f14; end: 106c92f83; -[SCMatchaSendToLoggerSource _isSectionIncludingContactsWithSectionIdentifier:] */

ulong FUN_106c92f14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a78);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b18),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12df8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c92f84; end: 106c92fb3; -[SCMatchaSendToLoggerSource .cxx_destruct] */

void FUN_106c92f84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c92fb4; end: 106c930c3; -[SCSendToBlizzardLoggerImpl initWithLoggerSource:userTrackedLogger:] */

undefined8 *
FUN_106c92fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f60f8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106c930c4;
    puStack_50 = &UNK_110894890;
    _objc_retain(param_3);
    ppuVar3 = &puStack_68;
    uStack_48 = param_3;
    _objc_retainBlock();
    uVar2 = puVar1[9];
    puVar1[9] = ppuVar3;
    _objc_release(uVar2);
    _objc_retain(0);
    uVar2 = puVar1[10];
    puVar1[10] = 0;
    _objc_release(uVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106c930c4; end: 106c930cf;  */

void FUN_106c930c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_blizzardSectionTypeForSectionIde_1125a4dc8,
             param_2);
  return;
}



/* Entry: 106c930d0; end: 106c9350f; -[SCSendToBlizzardLoggerImpl setLoggerDataModel:] */

undefined8 * FUN_106c930d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lStack_1f8;
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
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar20 = param_3;
  func_0x00010c1598e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010bf52a60();
  if (puVar6 == (undefined8 *)0x0) {
    lVar15 = 0;
    lStack_1f8 = 0;
  }
  else {
    lVar15 = 0;
    lStack_1f8 = 0;
    lVar18 = *plStack_1a0;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar18) {
          _objc_enumerationMutation(puVar20);
        }
        lVar21 = *(long *)(lStack_1a8 + (long)puVar16 * 8);
        lVar22 = lVar21;
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        if (lVar22 != 0) {
          lVar3 = lVar22;
          func_0x00010c0720c0();
          if ((int)lVar3 == 0) {
            if (lStack_1f8 == 0) {
              _objc_retain(lVar21);
              lStack_1f8 = lVar21;
            }
            _objc_retain(lVar21);
            _objc_release(lVar15);
            puVar4 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar4 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar4);
            }
            puVar4 = puVar2;
            func_0x00010c0e00e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar4);
            lVar15 = lVar21;
          }
          else {
            func_0x00010befa120(puVar1);
          }
        }
        _objc_release(lVar22);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar6 != puVar16);
      puVar6 = puVar20;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar20);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar6 = param_3;
  func_0x00010c1594e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = &uStack_1f0;
  puVar16 = puVar6;
  func_0x00010bf52a60();
  if (puVar16 != (undefined8 *)0x0) {
    lVar18 = *plStack_1e0;
    do {
      puVar20 = (undefined8 *)0x0;
      do {
        if (*plStack_1e0 != lVar18) {
          _objc_enumerationMutation(puVar6);
        }
        lVar22 = *(long *)(lStack_1e8 + (long)puVar20 * 8);
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        if (lVar22 != 0) {
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar5);
          }
          puVar5 = puVar4;
          func_0x00010c0e00e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar5);
        }
        _objc_release(lVar22);
        puVar20 = (undefined8 *)((long)puVar20 + 1);
      } while (puVar16 != puVar20);
      puVar20 = &uStack_1f0;
      puVar16 = puVar6;
      func_0x00010bf52a60();
    } while (puVar16 != (undefined8 *)0x0);
  }
  _objc_release(puVar6);
  puVar6 = param_3;
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar6;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lStack_1f8;
  _objc_retain(lStack_1f8);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar15;
  _objc_retain(lVar15);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar4;
  _objc_release(uVar14);
  _objc_release(puVar2);
  _objc_release(lVar15);
  _objc_release(lStack_1f8);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar20);
  lVar15 = param_3[1];
  func_0x00010c1568a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined8 *)param_3[1];
  func_0x00010c1567c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  puVar16 = puVar6;
  FUN_106c98574(lVar15,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar15);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(puVar20);
  puVar6 = puVar20;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar20);
      }
      lVar19 = *(long *)((long)puVar17 * 8);
      lVar21 = lVar19;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar21;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar3);
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar3 = lVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar9 = lVar7;
          func_0x00010c13cbc0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126d1e50;
          _objc_opt_new(PTR_PTR_1126d1e50);
          func_0x00010c161620();
          lVar10 = lVar7;
          func_0x00010c13cde0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc7a0(puVar2);
          _objc_release(lVar10);
          func_0x00010c1fc6e0(puVar2);
          lVar10 = lVar7;
          func_0x00010c13cce0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc720(puVar2);
          _objc_release(lVar10);
          lVar10 = lVar7;
          func_0x00010c13cd20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc740(puVar2);
          _objc_release(lVar10);
          func_0x00010c13cd40(lVar7);
          func_0x00010c1fc760(puVar2);
          func_0x00010befa120(puVar1);
          _objc_release(puVar2);
          _objc_release(lVar9);
        }
        _objc_release(lVar7);
        _objc_release(lVar3);
      }
      _objc_release(lVar19);
      _objc_release(lVar8);
      _objc_release(lVar21);
      puVar17 = (undefined8 *)((long)puVar17 + 1);
    } while (puVar6 != puVar17);
    puVar6 = puVar20;
    func_0x00010bf52a60();
  }
  _objc_release(puVar20);
  uVar11 = param_3[2];
  func_0x00010c122560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3[1];
  func_0x00010c122d60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010bf97ce0(lVar18);
  puVar4 = PTR_PTR_1126d1e60;
  _objc_opt_new(PTR_PTR_1126d1e60);
  uVar13 = param_3[1];
  func_0x00010bf0e960(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc880(puVar4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  func_0x00010c162140(puVar4);
  func_0x00010c1ed5a0(puVar4);
  func_0x00010c1e87e0(puVar4);
  func_0x00010c1836c0(puVar4);
  func_0x00010c1e7520(puVar4);
  uVar14 = param_3[3];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar14);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar1);
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return puVar20;
  }
  ___stack_chk_fail();
  func_0x00010c13cd20(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar16;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  return puVar20;
}



/* Entry: 106c93510; end: 106c939db; -[SCSendToBlizzardLoggerImpl logVisibilityMetricsWithSelectionItems:] */

long FUN_106c93510(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1568a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c1567c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  lVar17 = lVar2;
  FUN_106c98574(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lVar20 = *(long *)(lVar19 * 8);
      lVar5 = lVar20;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar6 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar9 = lVar7;
          func_0x00010c13cbc0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126d1e50;
          _objc_opt_new(PTR_PTR_1126d1e50);
          func_0x00010c161620();
          lVar11 = lVar7;
          func_0x00010c13cde0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc7a0(puVar10);
          _objc_release(lVar11);
          func_0x00010c1fc6e0(puVar10);
          lVar11 = lVar7;
          func_0x00010c13cce0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc720(puVar10);
          _objc_release(lVar11);
          lVar11 = lVar7;
          func_0x00010c13cd20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fc740(puVar10);
          _objc_release(lVar11);
          func_0x00010c13cd40(lVar7);
          func_0x00010c1fc760(puVar10);
          func_0x00010befa120(puVar4);
          _objc_release(puVar10);
          _objc_release(lVar9);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
      _objc_release(lVar20);
      _objc_release(lVar8);
      _objc_release(lVar5);
      lVar19 = lVar19 + 1;
    } while (lVar1 != lVar19);
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c122560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c122d60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010bf97ce0(lVar3);
  puVar14 = PTR_PTR_1126d1e60;
  _objc_opt_new(PTR_PTR_1126d1e60);
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc880(puVar14);
  _objc_release(uVar16);
  _objc_release(uVar15);
  func_0x00010c162140(puVar14);
  func_0x00010c1ed5a0(puVar14);
  func_0x00010c1e87e0(puVar14);
  func_0x00010c1836c0(puVar14);
  func_0x00010c1e7520(puVar14);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar16);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c13cd20(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar17;
  func_0x00010c0720c0();
  _objc_release(lVar17);
  return lVar1;
}



/* Entry: 106c939dc; end: 106c93a23;  */

undefined8 FUN_106c939dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c13cd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c93a24; end: 106c93c6b;  */

void FUN_106c93a24(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined **ppuVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined *puStack_480;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  long lStack_338;
  long lStack_1b0;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar32 = 0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(param_3);
      }
      uVar35 = *(undefined8 *)(lVar32 * 8);
      puVar3 = PTR_PTR_1126d1e58;
      _objc_opt_new();
      uVar9 = uVar35;
      func_0x00010c13cbc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar35;
      func_0x00010c13cd20();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010bfda7c0();
      _objc_release(uVar4);
      if ((int)uVar11 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fc700(puVar3);
        _objc_release(uVar4);
      }
      uVar4 = uVar35;
      func_0x00010c13cde0(uVar35);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc7a0(puVar3);
      _objc_release(uVar4);
      func_0x00010c1fc6e0(puVar3);
      uVar4 = uVar35;
      func_0x00010c13cce0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc720(puVar3);
      _objc_release(uVar4);
      func_0x00010c13cd40(uVar35);
      func_0x00010c1fc760(puVar3);
      func_0x00010c13cd60(uVar35);
      func_0x00010c1fc780(puVar3);
      func_0x00010c13cd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc740(puVar3);
      _objc_release(uVar35);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar9);
      _objc_release(puVar3);
      lVar32 = lVar32 + 1;
    } while (lVar2 != lVar32);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar34 = *(long *)(param_3 + 0x10);
  _objc_retain(lVar34);
  lVar2 = lVar34;
  func_0x00010c258be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_350 = 0xc2000000;
  pcStack_348 = FUN_106c94c28;
  puStack_340 = &UNK_11096e050;
  _objc_retain(lVar34);
  ppuVar5 = &puStack_358;
  lStack_338 = lVar34;
  _objc_retainBlock();
  puStack_380 = puVar3;
  uStack_378 = 0xc2000000;
  pcStack_370 = FUN_106c94c34;
  puStack_368 = &UNK_11096e080;
  _objc_retain(lVar34);
  ppuVar6 = &puStack_380;
  lStack_360 = lVar34;
  _objc_retainBlock();
  puStack_3a8 = puVar3;
  uStack_3a0 = 0xc2000000;
  uStack_398 = 0x106c94ce0;
  puStack_390 = &UNK_11096e080;
  _objc_retain(lVar34);
  ppuVar7 = &puStack_3a8;
  lStack_388 = lVar34;
  _objc_retainBlock();
  puVar8 = *(undefined **)(param_3 + 8);
  func_0x00010c1566c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar31 = *(long *)(param_3 + 0x48);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c292200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar31 + 0x10))(lVar31,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar32 = *(long *)(param_3 + 8);
  func_0x00010c2921c0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar32;
  func_0x00010c067fc0();
  _objc_release(lVar32);
  if ((lVar20 < 1) || (lVar31 == 0)) {
    _objc_retain(puVar3);
    puStack_480 = puVar3;
  }
  else {
    puStack_480 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    uVar9 = *(undefined8 *)(param_3 + 8);
    func_0x00010c2921c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puStack_480);
    _objc_release(uVar9);
  }
  lVar32 = *(long *)(param_3 + 0x48);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010bf4f8c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar32 + 0x10))(lVar32,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  lVar10 = *(long *)(param_3 + 8);
  func_0x00010bf4f880();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar10;
  func_0x00010c067fc0();
  _objc_release(lVar10);
  if ((0 < lVar20) && (lVar32 != 0)) {
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    uVar9 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf4f880(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar8);
    _objc_release(uVar9);
    _objc_release(puStack_480);
    puStack_480 = puVar8;
  }
  uVar4 = *(undefined8 *)(param_3 + 8);
  func_0x00010c1566a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar20 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar20 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar11 = *(undefined8 *)(param_3 + 8);
      func_0x00010c1566c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      FUN_106c95028();
      _objc_release(uVar11);
      if ((int)uVar4 != 0) {
        uVar35 = *(undefined8 *)(param_3 + 8);
        func_0x00010c1566c0(uVar35);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar35;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar4;
        func_0x000100504554();
        _objc_release(uVar4);
        _objc_release(uVar35);
        func_0x00010befa160(puVar8);
        _objc_release(uVar11);
      }
      lVar33 = lVar33 + 1;
    } while (lVar20 != lVar33);
    lVar20 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar12 = puVar8;
  FUN_106c9517c(puVar8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 8);
  func_0x00010c1567a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar35 = *(undefined8 *)(param_3 + 8);
  func_0x00010c156780();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar35;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar35);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar20 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar20 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar14 = *(undefined8 *)(param_3 + 8);
      func_0x00010c1567a0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar35 = uVar14;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar14 = uVar35;
      func_0x00010bf09f00(uVar35);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar13);
      _objc_release(uVar14);
      _objc_release(uVar35);
      lVar33 = lVar33 + 1;
    } while (lVar20 != lVar33);
    lVar20 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar15 = puVar13;
  FUN_106c9517c(puVar13,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + 0x38);
  FUN_106c94d8c(uVar14,*(undefined8 *)(param_3 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_3 + 0x40);
  FUN_106c94d8c(uVar35,*(undefined8 *)(param_3 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  FUN_106c9517c(uVar16,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar36 = 0.0;
  _objc_retain(lVar2);
  lVar20 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar20 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar18 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c0e00e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar17);
      _objc_release(uVar18);
      lVar33 = lVar33 + 1;
    } while (lVar20 != lVar33);
    lVar20 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar19 = puVar17;
  ppuVar30 = ppuVar7;
  FUN_106c9517c(puVar17,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = *(long *)(param_3 + 0x28);
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar20 != 0) {
    lVar20 = *(long *)(param_3 + 0x48);
    ppuVar21 = *(undefined ***)(param_3 + 0x28);
    func_0x00010c247520(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    ppuVar30 = ppuVar21;
    (**(code **)(lVar20 + 0x10))(lVar20,ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
    func_0x00010bb0e8c8();
    _objc_release(lVar20);
  }
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  iVar1 = (int)*(undefined8 *)(param_3 + 8);
  func_0x00010bfdbb60();
  if (iVar1 != 0) {
    uVar18 = 1;
    func_0x00010bb04cc8(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar22);
    _objc_release(uVar18);
  }
  uVar23 = *(ulong *)(param_3 + 8);
  func_0x00010bfdbb40();
  if ((uVar23 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 8);
    func_0x00010bfdbb20();
    if (iVar1 != 0) {
      uVar18 = 0;
      goto LAB_106c94404;
    }
  }
  else {
    uVar18 = 2;
LAB_106c94404:
    func_0x00010bb04cc8(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar22);
    _objc_release(uVar18);
  }
  iVar1 = (int)*(undefined8 *)(param_3 + 8);
  func_0x00010bfdbc00();
  if (iVar1 != 0) {
    uVar18 = 2;
    func_0x00010bb04cc8(2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar22);
    _objc_release(uVar18);
  }
  puVar24 = PTR_PTR_1126d1e68;
  _objc_opt_new(PTR_PTR_1126d1e68);
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243400();
  FUN_106c97fd0();
  func_0x00010c206c40(puVar24);
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cba00();
  func_0x000106c97ff0();
  func_0x00010c1c7160(puVar24);
  _objc_release(uVar18);
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x000106c98010();
  func_0x00010c1c5440(puVar24);
  _objc_release(uVar18);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcc00(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  func_0x00010c1e7520(puVar24);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf0e960(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  func_0x00010bf42660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f340(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  func_0x00010c15cca0(*(undefined8 *)(param_3 + 8));
  func_0x00010c20a2c0(puVar24);
  func_0x00010c15cca0();
  func_0x00010c198620(puVar24);
  puVar26 = puStack_480;
  FUN_106c9537c(puStack_480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f97c0(puVar24);
  _objc_release(puVar26);
  uVar18 = uVar4;
  FUN_106c9537c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f98c0(puVar24);
  _objc_release(uVar18);
  uVar18 = uVar14;
  FUN_106c9537c(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f98e0(puVar24);
  _objc_release(uVar18);
  uVar18 = uVar9;
  FUN_106c9537c(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9820(puVar24);
  _objc_release(uVar18);
  uVar18 = uVar11;
  FUN_106c9537c(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9840(puVar24);
  _objc_release(uVar18);
  uVar18 = uVar35;
  FUN_106c9537c(uVar35);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9860(puVar24);
  _objc_release(uVar18);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf4f8e0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183660(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  uVar18 = uVar16;
  FUN_106c9537c(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8b00(puVar24);
  _objc_release(uVar18);
  puVar26 = puVar12;
  FUN_106c9537c(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20de80(puVar24);
  _objc_release(puVar26);
  lVar20 = param_3;
  func_0x00010be230e0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126d1e70;
  _objc_opt_new();
  func_0x00010c1fc920();
  func_0x00010c20c4a0(puVar24);
  puVar27 = puVar15;
  FUN_106c9537c(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dec0(puVar24);
  _objc_release(puVar27);
  puVar27 = puVar19;
  FUN_106c9537c(puVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dee0(puVar24);
  _objc_release(puVar27);
  func_0x00010c292240(*(undefined8 *)(param_3 + 8));
  func_0x00010c1be340(puVar24);
  uVar18 = *(undefined8 *)(param_3 + 8);
  func_0x00010c292220(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1be2e0(puVar24);
  _objc_release(uVar18);
  func_0x00010c22ae80(*(undefined8 *)(param_3 + 8));
  func_0x00010c1fee00(puVar24);
  uVar28 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf9a3a0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar28;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar29 = *(undefined8 *)(param_3 + 8);
  dVar37 = dVar36;
  func_0x00010bf9a3a0(uVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar29;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar25);
  _objc_release(uVar29);
  _objc_release(uVar18);
  _objc_release(uVar28);
  func_0x00010c1fcc40(puVar24);
  puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(-(dVar36 - dVar37),PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar24);
  _objc_release(puVar27);
  func_0x00010c1fcbe0(puVar24);
  puVar27 = puVar22;
  func_0x000106c95418(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ccc00(puVar24);
  _objc_release(puVar27);
  func_0x00010c09a6a0(*(undefined8 *)(param_3 + 8));
  func_0x00010c1be320(puVar24);
  func_0x00010bf19760(*(undefined8 *)(param_3 + 8));
  func_0x00010c16fec0(puVar24);
  func_0x00010bf19700(*(undefined8 *)(param_3 + 8));
  func_0x00010c16fe80(puVar24);
  lVar10 = *(long *)(param_3 + 8);
  func_0x00010bf19760();
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_3 + 8);
    func_0x00010bf19700();
    if (lVar10 == 0) goto LAB_106c94a14;
  }
  func_0x00010bf19780(*(undefined8 *)(param_3 + 8));
  func_0x00010c16fee0(puVar24);
LAB_106c94a14:
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010c1587c0(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fac00(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  uVar25 = *(undefined8 *)(param_3 + 8);
  func_0x00010bfcf860(uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar25;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ccac0(puVar24);
  _objc_release(uVar18);
  _objc_release(uVar25);
  func_0x00010bef68a0(*(undefined8 *)(param_3 + 8));
  func_0x00010c165060(puVar24);
  func_0x00010bef68c0(*(undefined8 *)(param_3 + 8));
  func_0x00010c21dcc0(puVar24);
  func_0x00010c0ebd20(*(undefined8 *)(param_3 + 8));
  func_0x00010c1d5bc0(puVar24);
  func_0x00010c0ebd40(*(undefined8 *)(param_3 + 8));
  func_0x00010c1d5c00(puVar24);
  uVar18 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar18);
  _objc_release(puVar26);
  _objc_release(lVar20);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar35);
  _objc_release(uVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(puStack_480);
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  _objc_release(lStack_388);
  _objc_release(ppuVar6);
  _objc_release(lStack_360);
  _objc_release(ppuVar5);
  _objc_release(lStack_338);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar34 + 0x20),PTR_s_blizzardStoryTypeForViewModel__1125a4de8,ppuVar30)
  ;
  return;
}



/* Entry: 106c93c6c; end: 106c94c27; -[SCSendToBlizzardLoggerImpl logEngagementMetrics] */

void FUN_106c93c6c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined **ppuVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  double dVar36;
  double dVar37;
  undefined *puStack_350;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar35 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar35);
  lVar2 = lVar35;
  func_0x00010c258be0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_106c94c28;
  puStack_210 = &UNK_11096e050;
  _objc_retain(lVar35);
  ppuVar3 = &puStack_228;
  lStack_208 = lVar35;
  _objc_retainBlock();
  puStack_250 = puVar7;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_106c94c34;
  puStack_238 = &UNK_11096e080;
  _objc_retain(lVar35);
  ppuVar4 = &puStack_250;
  lStack_230 = lVar35;
  _objc_retainBlock();
  puStack_278 = puVar7;
  uStack_270 = 0xc2000000;
  uStack_268 = 0x106c94ce0;
  puStack_260 = &UNK_11096e080;
  _objc_retain(lVar35);
  ppuVar5 = &puStack_278;
  lStack_258 = lVar35;
  _objc_retainBlock();
  puVar6 = *(undefined **)(param_1 + 8);
  func_0x00010c1566c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar34 = *(long *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c292200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar34 + 0x10))(lVar34,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar9 = *(long *)(param_1 + 8);
  func_0x00010c2921c0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar9;
  func_0x00010c067fc0();
  _objc_release(lVar9);
  if ((lVar22 < 1) || (lVar34 == 0)) {
    _objc_retain(puVar7);
    puStack_350 = puVar7;
  }
  else {
    puStack_350 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2921c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puStack_350);
    _objc_release(uVar8);
  }
  lVar9 = *(long *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4f8c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(lVar9,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar10 = *(long *)(param_1 + 8);
  func_0x00010bf4f880();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar10;
  func_0x00010c067fc0();
  _objc_release(lVar10);
  if ((0 < lVar22) && (lVar9 != 0)) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf4f880(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar6);
    _objc_release(uVar8);
    _objc_release(puStack_350);
    puStack_350 = puVar6;
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1566a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar22 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar22 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar12 = *(undefined8 *)(param_1 + 8);
      func_0x00010c1566c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      FUN_106c95028();
      _objc_release(uVar12);
      if ((int)uVar11 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 8);
        func_0x00010c1566c0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x000100504554();
        _objc_release(uVar11);
        _objc_release(uVar13);
        func_0x00010befa160(puVar6);
        _objc_release(uVar12);
      }
      lVar33 = lVar33 + 1;
    } while (lVar22 != lVar33);
    lVar22 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar14 = puVar6;
  FUN_106c9517c(puVar6,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1567a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c156780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  FUN_106c94d8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar2);
  lVar22 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar22 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar16 = *(undefined8 *)(param_1 + 8);
      func_0x00010c1567a0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      uVar16 = uVar13;
      func_0x00010bf09f00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar15);
      _objc_release(uVar16);
      _objc_release(uVar13);
      lVar33 = lVar33 + 1;
    } while (lVar22 != lVar33);
    lVar22 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar17 = puVar15;
  FUN_106c9517c(puVar15,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  FUN_106c94d8c(uVar16,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  FUN_106c94d8c(uVar13,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  FUN_106c9517c(uVar18,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar36 = 0.0;
  _objc_retain(lVar2);
  lVar22 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar22 != 0) {
    lVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      uVar20 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0e00e0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar19);
      _objc_release(uVar20);
      lVar33 = lVar33 + 1;
    } while (lVar22 != lVar33);
    lVar22 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar21 = puVar19;
  ppuVar32 = ppuVar5;
  FUN_106c9517c(puVar19,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = *(long *)(param_1 + 0x28);
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar22 != 0) {
    lVar22 = *(long *)(param_1 + 0x48);
    ppuVar23 = *(undefined ***)(param_1 + 0x28);
    func_0x00010c247520(ppuVar23);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar23;
    (**(code **)(lVar22 + 0x10))(lVar22,ppuVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar23);
    func_0x00010bb0e8c8();
    _objc_release(lVar22);
  }
  puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdbb60();
  if (iVar1 != 0) {
    uVar20 = 1;
    func_0x00010bb04cc8(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar24);
    _objc_release(uVar20);
  }
  uVar25 = *(ulong *)(param_1 + 8);
  func_0x00010bfdbb40();
  if ((uVar25 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bfdbb20();
    if (iVar1 != 0) {
      uVar20 = 0;
      goto LAB_106c94404;
    }
  }
  else {
    uVar20 = 2;
LAB_106c94404:
    func_0x00010bb04cc8(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar24);
    _objc_release(uVar20);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfdbc00();
  if (iVar1 != 0) {
    uVar20 = 2;
    func_0x00010bb04cc8(2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar24);
    _objc_release(uVar20);
  }
  puVar26 = PTR_PTR_1126d1e68;
  _objc_opt_new(PTR_PTR_1126d1e68);
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243400();
  FUN_106c97fd0();
  func_0x00010c206c40(puVar26);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cba00();
  func_0x000106c97ff0();
  func_0x00010c1c7160(puVar26);
  _objc_release(uVar20);
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x000106c98010();
  func_0x00010c1c5440(puVar26);
  _objc_release(uVar20);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcc00(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  func_0x00010c1e7520(puVar26);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  func_0x00010bf42660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f340(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  func_0x00010c15cca0(*(undefined8 *)(param_1 + 8));
  func_0x00010c20a2c0(puVar26);
  func_0x00010c15cca0();
  func_0x00010c198620(puVar26);
  puVar28 = puStack_350;
  FUN_106c9537c(puStack_350);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f97c0(puVar26);
  _objc_release(puVar28);
  uVar20 = uVar11;
  FUN_106c9537c(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f98c0(puVar26);
  _objc_release(uVar20);
  uVar20 = uVar16;
  FUN_106c9537c(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f98e0(puVar26);
  _objc_release(uVar20);
  uVar20 = uVar8;
  FUN_106c9537c(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9820(puVar26);
  _objc_release(uVar20);
  uVar20 = uVar12;
  FUN_106c9537c(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9840(puVar26);
  _objc_release(uVar20);
  uVar20 = uVar13;
  FUN_106c9537c(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9860(puVar26);
  _objc_release(uVar20);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4f8e0(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183660(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  uVar20 = uVar18;
  FUN_106c9537c(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8b00(puVar26);
  _objc_release(uVar20);
  puVar28 = puVar14;
  FUN_106c9537c(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20de80(puVar26);
  _objc_release(puVar28);
  lVar22 = param_1;
  func_0x00010be230e0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126d1e70;
  _objc_opt_new();
  func_0x00010c1fc920();
  func_0x00010c20c4a0(puVar26);
  puVar29 = puVar17;
  FUN_106c9537c(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dec0(puVar26);
  _objc_release(puVar29);
  puVar29 = puVar21;
  FUN_106c9537c(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dee0(puVar26);
  _objc_release(puVar29);
  func_0x00010c292240(*(undefined8 *)(param_1 + 8));
  func_0x00010c1be340(puVar26);
  uVar20 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292220(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1be2e0(puVar26);
  _objc_release(uVar20);
  func_0x00010c22ae80(*(undefined8 *)(param_1 + 8));
  func_0x00010c1fee00(puVar26);
  uVar30 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a3a0(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar30;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar31 = *(undefined8 *)(param_1 + 8);
  dVar37 = dVar36;
  func_0x00010bf9a3a0(uVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar31;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar27);
  _objc_release(uVar31);
  _objc_release(uVar20);
  _objc_release(uVar30);
  func_0x00010c1fcc40(puVar26);
  puVar29 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(-(dVar36 - dVar37),PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar26);
  _objc_release(puVar29);
  func_0x00010c1fcbe0(puVar26);
  puVar29 = puVar24;
  func_0x000106c95418(puVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ccc00(puVar26);
  _objc_release(puVar29);
  func_0x00010c09a6a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1be320(puVar26);
  func_0x00010bf19760(*(undefined8 *)(param_1 + 8));
  func_0x00010c16fec0(puVar26);
  func_0x00010bf19700(*(undefined8 *)(param_1 + 8));
  func_0x00010c16fe80(puVar26);
  lVar10 = *(long *)(param_1 + 8);
  func_0x00010bf19760();
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 8);
    func_0x00010bf19700();
    if (lVar10 == 0) goto LAB_106c94a14;
  }
  func_0x00010bf19780(*(undefined8 *)(param_1 + 8));
  func_0x00010c16fee0(puVar26);
LAB_106c94a14:
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1587c0(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fac00(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  uVar27 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcf860(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar27;
  FUN_106c9537c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ccac0(puVar26);
  _objc_release(uVar20);
  _objc_release(uVar27);
  func_0x00010bef68a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c165060(puVar26);
  func_0x00010bef68c0(*(undefined8 *)(param_1 + 8));
  func_0x00010c21dcc0(puVar26);
  func_0x00010c0ebd20(*(undefined8 *)(param_1 + 8));
  func_0x00010c1d5bc0(puVar26);
  func_0x00010c0ebd40(*(undefined8 *)(param_1 + 8));
  func_0x00010c1d5c00(puVar26);
  uVar20 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar20);
  _objc_release(puVar28);
  _objc_release(lVar22);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(lVar9);
  _objc_release(lVar34);
  _objc_release(puStack_350);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(lStack_258);
  _objc_release(ppuVar4);
  _objc_release(lStack_230);
  _objc_release(ppuVar3);
  _objc_release(lStack_208);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf1d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar35 + 0x20),PTR_s_blizzardStoryTypeForViewModel__1125a4de8,ppuVar32)
  ;
  return;
}



/* Entry: 106c94c28; end: 106c94c33;  */

void FUN_106c94c28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_blizzardStoryTypeForViewModel__1125a4de8,param_2)
  ;
  return;
}



/* Entry: 106c94c34; end: 106c94d8b;  */

void FUN_106c94c34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1cfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c94d8c; end: 106c95027;  */

undefined * FUN_106c94d8c(ulong param_1,undefined *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar12 = *(undefined **)(uVar10 * 8);
      uVar3 = param_1;
      puVar4 = puVar12;
      FUN_106c95028();
      if ((int)uVar3 != 0) {
        puVar4 = param_2;
        (**(code **)(param_2 + 0x10))();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c08fa60();
        if (puVar5 != (undefined *)0x0) {
          puVar12 = puVar11;
          func_0x00010c0e00e0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          _objc_release(puVar12);
          uVar6 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class();
          uVar7 = uVar6;
          _objc_opt_isKindOfClass();
          uVar3 = uVar6;
          if ((uVar7 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar6);
          if (uVar3 == 0) {
            uVar7 = param_1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
            _objc_opt_class();
            uVar8 = uVar7;
            _objc_opt_isKindOfClass();
            uVar6 = uVar7;
            if ((uVar8 & 1) == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar7);
            func_0x00010bf529e0();
            _objc_release(uVar6);
          }
          else {
            func_0x00010bf529e0();
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar5);
          _objc_release(uVar3);
        }
        _objc_release(puVar4);
        puVar4 = puVar12;
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
    uVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(param_1);
  uVar10 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar11);
  uVar2 = uVar10;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar10);
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar11);
  uVar10 = uVar3;
  if ((uVar6 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar3);
  puVar11 = puVar4;
  func_0x00010c0720c0();
  if ((((int)puVar11 == 0) || (uVar3 = uVar10, func_0x00010bf529e0(), uVar3 == 0)) &&
     ((puVar11 = puVar4, func_0x00010c0720c0(), (int)puVar11 == 0 ||
      (uVar3 = uVar2, func_0x00010bf529e0(), uVar3 == 0)))) {
    puVar11 = (undefined *)0x1;
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(puVar4);
  return puVar11;
}



/* Entry: 106c95028; end: 106c95173;  */

undefined8 FUN_106c95028(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar6 = param_2;
  func_0x00010c0720c0();
  if ((((int)uVar6 == 0) || (uVar4 = uVar2, func_0x00010bf529e0(), uVar4 == 0)) &&
     ((uVar6 = param_2, func_0x00010c0720c0(), (int)uVar6 == 0 ||
      (uVar4 = uVar1, func_0x00010bf529e0(), uVar4 == 0)))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 106c95174; end: 106c9517b;  */

void FUN_106c95174(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentViewModel_1125b1118);
  return;
}



/* Entry: 106c9517c; end: 106c9537b;  */

void FUN_106c9517c(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar4 = param_2;
      (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(lVar9 * 8));
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        ppuVar6 = ppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar6 == (undefined **)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar2);
          _objc_release(puVar7);
        }
        ppuVar6 = ppuVar2;
        func_0x00010c0e00e0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(ppuVar6);
      }
      _objc_release(lVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  ppuVar6 = ppuVar2;
  func_0x00010bd869d0(ppuVar2,&PTR___NSConcreteGlobalBlock_11096e130,
                      &PTR___NSConcreteGlobalBlock_11096e170);
  _objc_release(ppuVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
      }
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106c9537c; end: 106c954b3;  */

void FUN_106c9537c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  if (param_1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_28
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0 || lStack_28 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106c954b4; end: 106c95eef; -[SCSendToBlizzardLoggerImpl logLatencyMetrics] */

void FUN_106c954b4(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9a3a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf9a3a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar7);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c156720();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar19 = *(undefined8 *)(lVar21 * 8);
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010c1566c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      FUN_106c95028();
      _objc_release(uVar2);
      if ((int)uVar7 != 0) {
        lVar5 = *(long *)(param_2 + 0x48);
        (**(code **)(lVar5 + 0x10))(lVar5,uVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar5;
        func_0x00010c08fa60();
        if (lVar15 != 0) {
          uVar2 = *(undefined8 *)(param_2 + 8);
          func_0x00010c156720(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(uVar7);
          _objc_release(uVar2);
          dVar22 = dVar22 * 1000.0;
          if ((ulong)(long)dVar22 < (ulong)(long)(param_1 * 1000.0)) {
            func_0x00010c1d0640(puVar3);
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar6);
          }
        }
        _objc_release(lVar5);
      }
      lVar21 = lVar21 + 1;
    } while (lVar13 != lVar21);
    lVar13 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = 0.0;
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c156740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar13 == 0) {
      _objc_release(lVar4);
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *(long *)(param_2 + 8);
      func_0x00010c156820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      lVar13 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar21 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          lVar5 = *(long *)(param_2 + 0x48);
          (**(code **)(lVar5 + 0x10))(lVar5,*(undefined8 *)(lVar21 * 8));
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar5;
          func_0x00010c08fa60();
          if (lVar15 != 0) {
            puVar14 = puVar6;
            func_0x00010c0e00e0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            _objc_release(puVar14);
          }
          _objc_release(lVar5);
          lVar21 = lVar21 + 1;
        } while (lVar13 != lVar21);
        lVar13 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      lVar13 = *(long *)(param_2 + 8);
      func_0x00010c156740();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      lVar13 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar21 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          uVar19 = *(undefined8 *)(lVar21 * 8);
          uVar2 = *(undefined8 *)(param_2 + 0x10);
          func_0x00010c292200(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar19;
          func_0x00010bfda7c0();
          _objc_release(uVar2);
          if ((int)uVar7 != 0) {
            lVar15 = *(long *)(param_2 + 0x48);
            (**(code **)(lVar15 + 0x10))(lVar15,uVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar14 != (undefined *)0x0) {
              puVar14 = puVar6;
              func_0x00010c0e00e0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar12);
              _objc_release(puVar14);
            }
            _objc_release(lVar15);
          }
          lVar21 = lVar21 + 1;
        } while (lVar13 != lVar21);
        lVar13 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf9a3a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = &PTR___NSConcreteGlobalBlock_11096e0f0;
      uVar7 = uVar2;
      func_0x00010bd869d0();
      _objc_release(uVar2);
      puVar14 = PTR_PTR_1126d1e78;
      _objc_opt_new(PTR_PTR_1126d1e78);
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf0e960(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c243400();
      FUN_106c97fd0();
      func_0x00010c2056c0(puVar14);
      _objc_release(uVar2);
      uVar19 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf0e960(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar19;
      func_0x00010bf31200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179280(puVar14);
      _objc_release(uVar2);
      _objc_release(uVar19);
      uVar19 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf0e960(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar19;
      func_0x00010c15d5c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fc880(puVar14);
      _objc_release(uVar2);
      _objc_release(uVar19);
      func_0x00010c21e440(puVar14);
      puVar16 = puVar3;
      FUN_106c9537c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189720(puVar14);
      _objc_release(puVar16);
      puVar16 = puVar12;
      FUN_106c9537c(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eaa80(puVar14);
      _objc_release(puVar16);
      puVar16 = puVar6;
      FUN_106c9537c(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222960(puVar14);
      _objc_release(puVar16);
      uVar2 = uVar7;
      FUN_106c9537c(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c207ee0(puVar14);
      _objc_release(uVar2);
      if (*(long *)(param_2 + 0x28) != 0) {
        func_0x00010c15a220();
        func_0x00010c21e480(puVar14);
      }
      if (*(long *)(param_2 + 0x30) != 0) {
        func_0x00010c15a220();
        func_0x00010c21ea20(puVar14);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar2);
      func_0x00010c0b0360(*(undefined8 *)(param_2 + 0x50));
      _objc_release(puVar14);
      _objc_release(uVar7);
      _objc_release(puVar12);
      _objc_release(puVar6);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(ppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
      return;
    }
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar20 = *(ulong *)(lVar21 * 8);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c292200(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar20;
      func_0x00010bfda7c0();
      _objc_release(uVar7);
      if ((uVar8 & 1) == 0) {
        lVar9 = *(long *)(param_2 + 8);
        func_0x00010c1566c0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar15;
        func_0x00010bf529e0();
        if (lVar5 != 0) {
          _objc_release(lVar15);
          _objc_release(lVar9);
          goto LAB_106c95888;
        }
        lVar10 = *(long *)(param_2 + 8);
        func_0x00010c1566a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar5;
        func_0x00010bf529e0();
        _objc_release(lVar5);
        _objc_release(lVar10);
        _objc_release(lVar15);
        _objc_release(lVar9);
        if (lVar11 != 0) goto LAB_106c95888;
      }
      else {
LAB_106c95888:
        uVar2 = *(undefined8 *)(param_2 + 8);
        func_0x00010c1566c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        FUN_106c95028();
        _objc_release(uVar2);
        if ((int)uVar7 != 0) {
          lVar5 = *(long *)(param_2 + 0x48);
          (**(code **)(lVar5 + 0x10))(lVar5,uVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar5;
          func_0x00010c08fa60();
          if (lVar15 != 0) {
            uVar2 = *(undefined8 *)(param_2 + 8);
            func_0x00010c156740(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            _objc_release(uVar7);
            _objc_release(uVar2);
            dVar22 = dVar22 * 1000.0;
            if ((ulong)(long)dVar22 < (ulong)(long)(param_1 * 1000.0)) {
              func_0x00010c1d0640(puVar6);
            }
            else {
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(puVar12);
            }
          }
          _objc_release(lVar5);
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar13 != lVar21);
    lVar13 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106c95ef0; end: 106c95f5f;  */

void FUN_106c95ef0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c95f60; end: 106c960fb; -[SCSendToBlizzardLoggerImpl _getStoryTypeAppStoryMetadataMapJsonFormatStringFromAvailableStories:] */

void FUN_106c95f60(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  ulong uVar11;
  long unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  long lVar12;
  long unaff_x28;
  long lVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  uVar10 = (uint)&uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x23 = &PTR____CFConstantStringClassReference_110e2dc78;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(long *)(param_1 + 0x10);
        func_0x00010bf1d100(unaff_x24,param_2,*(undefined8 *)(lStack_128 + unaff_x28 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar4 = unaff_x24;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          unaff_x25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
          func_0x00010c1d0640();
          func_0x00010befa120(puVar1,param_2,unaff_x25);
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      lVar2 = param_3;
      uVar10 = (uint)&uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x000106c95418();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106c960fc;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar2 + 8);
  lStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  ppuStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = puVar1;
  puStack_150 = puVar3;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c15cca0();
  if ((int)lVar4 != 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    lVar4 = *(long *)(lVar2 + 8);
    func_0x00010c1598e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    uVar10 = (uint)&uStack_260;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar12 = *plStack_250;
      do {
        lVar13 = 0;
        do {
          if (*plStack_250 != lVar12) {
            _objc_enumerationMutation(lVar4);
          }
          uVar11 = *(ulong *)(lStack_258 + lVar13 * 8);
          uVar6 = uVar11;
          func_0x00010c247520();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(lVar2 + 0x10);
          func_0x00010bfb1c40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c0720c0(uVar6,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar6);
          if ((int)uVar8 != 0) {
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar6;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            _objc_release(uVar6);
            _objc_release(uVar11);
            uVar6 = uVar9;
            func_0x00010c0720c0(uVar9,param_2,&PTR____CFConstantStringClassReference_110e12b38);
            uVar7 = *(undefined8 *)(lVar2 + 0x10);
            func_0x00010bf60940(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar9;
            func_0x00010c0720c0(uVar9,param_2,uVar7);
            _objc_release(uVar7);
            if (((uVar6 & 1) != 0) || ((int)uVar8 != 0)) {
              puVar1 = PTR_PTR_1126d1e80;
              _objc_opt_new(PTR_PTR_1126d1e80);
              func_0x00010c1b4400();
              uVar7 = *(undefined8 *)(lVar2 + 0x10);
              func_0x00010bfb1c40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f9160(puVar1,param_2,uVar7);
              _objc_release(uVar7);
              uVar7 = *(undefined8 *)(lVar2 + 0x18);
              func_0x00010c269d40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b2e60();
              _objc_release(uVar7);
              _objc_release(puVar1);
            }
            _objc_release(uVar9);
          }
          lVar13 = lVar13 + 1;
        } while (lVar5 != lVar13);
        lVar5 = lVar4;
        uVar10 = (uint)&uStack_260;
        func_0x00010bf52a60(lVar4,param_2,&uStack_260,auStack_220,0x10);
      } while (lVar5 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c17a3e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e815f8);
  func_0x00010c1fbb00(puVar1,param_2,uVar10 ^ 1);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c960fc; end: 106c96377; -[SCSendToBlizzardLoggerImpl logSendFirstSnapIfNeeded] */

void FUN_106c960fc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c15cca0();
  if ((int)lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c1598e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    param_3 = (uint)&uStack_130;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
          uVar3 = uVar8;
          func_0x00010c247520();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010bfb1c40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0720c0(uVar3,param_2,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar3);
          if ((int)uVar5 != 0) {
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(uVar3);
            _objc_release(uVar8);
            uVar3 = uVar6;
            func_0x00010c0720c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110e12b38);
            uVar4 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010bf60940(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010c0720c0(uVar6,param_2,uVar4);
            _objc_release(uVar4);
            if (((uVar3 & 1) != 0) || ((int)uVar5 != 0)) {
              puVar7 = PTR_PTR_1126d1e80;
              _objc_opt_new(PTR_PTR_1126d1e80);
              func_0x00010c1b4400();
              uVar4 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010bfb1c40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1f9160(puVar7,param_2,uVar4);
              _objc_release(uVar4);
              uVar4 = *(undefined8 *)(param_1 + 0x18);
              func_0x00010c269d40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0b2e60();
              _objc_release(uVar4);
              _objc_release(puVar7);
            }
            _objc_release(uVar6);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar1;
        param_3 = (uint)&uStack_130;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c17a3e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e815f8);
  func_0x00010c1fbb00(puVar7,param_2,param_3 ^ 1);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106c96378; end: 106c963fb; -[SCSendToBlizzardLoggerImpl logSendToSpotlightSelection:] */

void FUN_106c96378(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c17a3e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e815f8);
  func_0x00010c1fbb00(puVar1,param_2,param_3 ^ 1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c963fc; end: 106c9647f; -[SCSendToBlizzardLoggerImpl logSendToSnapMapSelection:] */

void FUN_106c963fc(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c17a3e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e81618);
  func_0x00010c1fbb00(puVar1,param_2,param_3 ^ 1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c96480; end: 106c964ff; -[SCSendToBlizzardLoggerImpl logOpenMemberRolesListWithRolesCount:] */

void FUN_106c96480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c1c5a20(puVar1,param_2,0);
  func_0x00010c1cfd60(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c96500; end: 106c96567; -[SCSendToBlizzardLoggerImpl logSelectMemberRole] */

void FUN_106c96500(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1e88;
  _objc_alloc_init(PTR_PTR_1126d1e88);
  func_0x00010c1fc880();
  func_0x00010c1c5a20(puVar1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c96568; end: 106c96657; -[SCSendToBlizzardLoggerImpl logExternalShareDestinationTapWithDestination:hadOnPlatformSelections:isSelected:isQueued:] */

void FUN_106c96568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1e90;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1fc880();
  func_0x00010c18c2a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0e960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c243400();
  FUN_106c97fd0();
  func_0x00010c206c40(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c1a5060(puVar1,param_2,param_4);
  func_0x00010c1b4280(puVar1,param_2,param_5);
  func_0x00010c1b3ac0(puVar1,param_2,param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c96658; end: 106c96687; -[SCSendToBlizzardLoggerImpl setSendToSessionId:] */

void FUN_106c96658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c96688; end: 106c966b7; -[SCSendToBlizzardLoggerImpl setBackendSyncSessionId:] */

void FUN_106c96688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


