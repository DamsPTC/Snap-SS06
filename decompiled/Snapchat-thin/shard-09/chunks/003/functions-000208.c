/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bbf55c; end: 106bbf5c7; +[SCUnlockableTrackerHelpers populateInteractionPostCaptureFields:withInteraction:] */

void FUN_106bbf55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c123f40(param_5);
  func_0x00010c1e9020(param_4);
  func_0x00010c104760(param_5);
  _objc_release(param_5);
  func_0x00010c1df180(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bbf5c8; end: 106bbf67f; -[SCUnlockableTrackerSequenceNumberHandler sequenceNumberForIdentifier:initialValue:] */

long FUN_106bbf5c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      param_4 = lVar1;
      func_0x00010c067fc0(lVar1);
      param_4 = param_4 + 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 106bbf680; end: 106bbf68b; -[SCUnlockableTrackerSequenceNumberHandler .cxx_destruct] */

void FUN_106bbf680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bbf68c; end: 106bbf68f; -[SCUnlockableGeoFilterTracker startWithSessionId:] */

void FUN_106bbf68c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSessionId__11265d0b0);
  return;
}



/* Entry: 106bbf690; end: 106bbf75f; -[SCUnlockableGeoFilterTracker fireTrackWithSnapInfo:] */

void FUN_106bbf690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 == 0) goto LAB_106bbf748;
      func_0x00010be17800(param_1,param_2,param_3);
      func_0x00010c068a40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      lVar1 = param_1;
    }
    _objc_release(lVar1);
  }
LAB_106bbf748:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bbf760; end: 106bbf997; -[SCUnlockableGeoFilterTracker trackAttachmentViewForFilterId:attachmentType:openTimestamp:viewTimeSec:] */

void FUN_106bbf760(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7d90;
  func_0x00010c280ec0(PTR_PTR_1126c7d90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc980(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4e20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
LAB_106bbf8c0:
    puVar3 = PTR_PTR_1126d0fe0;
    _objc_opt_new(PTR_PTR_1126d0fe0);
    func_0x00010c21bbe0();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d580(puVar3);
    _objc_release(puVar4);
    func_0x00010c16b360(puVar3);
    func_0x00010c225ca0(puVar3);
    func_0x00010c16b1c0(puVar3);
    func_0x00010c068a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_2);
  }
  else {
    puVar3 = param_2;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_106bbf8c0;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar4 = PTR_PTR_1126d0fe0;
    _objc_opt_class(PTR_PTR_1126d0fe0);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_106bbf958;
    func_0x00010c16b360(puVar3);
    func_0x00010c225ca0(puVar3);
    func_0x00010c16b1c0(puVar3);
  }
  _objc_release(puVar3);
LAB_106bbf958:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bbf998; end: 106bc0503; -[SCUnlockableGeoFilterTracker _fireFilterCarouselInteractionWithSnapInfo:] */

void FUN_106bbf998(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  ulong uStack_210;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = param_1;
  func_0x00010c068a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  dVar25 = 0.0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar18 = &uStack_1b0;
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    uVar23 = 0;
    uVar19 = 1;
  }
  else {
    uVar23 = 0;
    uVar19 = 1;
    lVar21 = *plStack_1a0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_1a0 != lVar21) {
          _objc_enumerationMutation(lVar5);
        }
        puVar6 = PTR_PTR_1126d0fe0;
        uVar24 = *(ulong *)(lStack_1a8 + lVar20 * 8);
        _objc_retain(uVar24);
        _objc_opt_class(puVar6);
        uVar7 = uVar24;
        _objc_opt_isKindOfClass(uVar24,puVar6);
        uVar1 = uVar24;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar24);
        lVar22 = param_1;
        func_0x00010bdda0e0();
        if ((int)lVar22 != 0) {
          if ((uVar23 == 0) || (uVar7 = uVar23, func_0x00010c08fa60(), uVar7 == 0)) {
            uVar7 = uVar1;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bef4d80();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c071ae0();
            _objc_release(puVar6);
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((uVar9 & 1) == 0) {
              uVar7 = uVar1;
              func_0x00010c2813a0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010bef4d80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar23);
              _objc_release(uVar7);
              uVar23 = uVar8;
            }
          }
          uVar7 = uVar1;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bef5fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar7);
          if (uVar8 != 0) {
            uVar7 = uVar1;
            func_0x00010c2813a0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bef5fa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar8);
            _objc_release(uVar7);
          }
          puVar6 = PTR_PTR_1126d0fe8;
          _objc_opt_new();
          puVar10 = PTR_PTR_1126b1df0;
          _objc_alloc(PTR_PTR_1126b1df0);
          uVar7 = uVar24;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c08fa60();
          if (uVar8 != 0) {
            uStack_210 = uVar24;
            func_0x00010c2810a0();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c04e820(puVar10);
          func_0x00010c1a2d20(puVar6);
          _objc_release(puVar10);
          if (uVar8 != 0) {
            _objc_release(uStack_210);
          }
          _objc_release(uVar7);
          uVar7 = uVar24;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c11ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c071ae0();
          if ((uVar9 & 1) == 0) {
            uVar9 = uVar24;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar9;
            func_0x00010c11ff80();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c08fa60();
            _objc_release(uVar11);
            _objc_release(uVar9);
            _objc_release(puVar10);
            _objc_release(uVar8);
            _objc_release(uVar7);
            puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
            if (uVar12 != 0) {
              uVar7 = uVar24;
              func_0x00010c2813a0(uVar24);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c11ff80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf649e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195940(puVar6);
              goto LAB_106bbfdc0;
            }
          }
          else {
LAB_106bbfdc0:
            _objc_release(puVar10);
            _objc_release(uVar8);
            _objc_release(uVar7);
          }
          uVar7 = uVar24;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf93c40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c071ae0();
          if ((uVar9 & 1) == 0) {
            uVar9 = uVar24;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar9;
            func_0x00010bf93c40();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c08fa60();
            _objc_release(uVar11);
            _objc_release(uVar9);
            _objc_release(puVar10);
            _objc_release(uVar8);
            _objc_release(uVar7);
            puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
            if (uVar12 != 0) {
              uVar7 = uVar24;
              func_0x00010c2813a0(uVar24);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010bf93c40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf649e0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195b80(puVar6);
              goto LAB_106bbfed8;
            }
          }
          else {
LAB_106bbfed8:
            _objc_release(puVar10);
            _objc_release(uVar8);
            _objc_release(uVar7);
          }
          puVar10 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c242fe0(uVar24);
          func_0x00010bff91e0(puVar10);
          func_0x00010c226de0(puVar6);
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c25a8c0(uVar24);
          func_0x00010bff91e0(puVar10);
          func_0x00010c226f40(puVar6);
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c0c9600(uVar24);
          func_0x00010bff91e0(puVar10);
          func_0x00010c226740(puVar6);
          _objc_release(puVar10);
          func_0x00010befa120(puVar3);
          puVar10 = puVar6;
          func_0x00010c2b3c80();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010c296d80();
          if ((int)puVar13 == 0) {
            puVar13 = puVar6;
            func_0x00010c2ba540();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c296d80();
            if ((int)puVar14 == 0) {
              puVar14 = puVar6;
              func_0x00010c2b95c0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010c296d80();
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar10);
              uVar19 = ((uint)puVar15 ^ 1) & uVar19;
            }
            else {
              _objc_release(puVar13);
              _objc_release(puVar10);
              uVar19 = 0;
            }
          }
          else {
            _objc_release(puVar10);
            uVar19 = 0;
          }
          _objc_release(puVar6);
        }
        _objc_release(uVar1);
        lVar20 = lVar20 + 1;
      } while (lVar2 != lVar20);
      puVar18 = &uStack_1b0;
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    lVar21 = param_1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)PTR_PTR_1126d0f48;
    func_0x00010c280ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8360();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bbac0(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf32ae0(param_1);
    func_0x00010c2aa380(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b8500(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b70c0(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0040(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(dVar25 * 1000.0,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab3e0(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd00();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac380(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd20();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac3c0(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    func_0x00010c2a7e20(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar25 = 0.0;
    lVar2 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar20;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar20);
        }
        puVar10 = PTR_PTR_1126d0fe0;
        uVar24 = *(ulong *)(lVar22 * 8);
        _objc_retain(uVar24);
        _objc_opt_class(puVar10);
        uVar7 = uVar24;
        _objc_opt_isKindOfClass(uVar24,puVar10);
        uVar1 = uVar24;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar24);
        lVar17 = param_1;
        func_0x00010bdda0e0();
        if ((int)lVar17 != 0) {
          lVar17 = param_1;
          func_0x00010bde91c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(lVar17);
        }
        _objc_release(uVar1);
        lVar22 = lVar22 + 1;
      } while (lVar2 != lVar22);
      lVar2 = lVar20;
      func_0x00010bf52a60();
    }
    _objc_release(lVar20);
    func_0x00010c2bab80(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d0f38;
    func_0x00010bf22860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9260(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar18 = puVar16;
    func_0x00010be17ae0(param_1);
    lVar2 = param_1;
    func_0x00010c230640();
    if (uVar19 == 0 && (((uint)lVar2 ^ 0xffffffff) & 1) == 0) {
      lVar2 = param_1;
      func_0x00010bdf20a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = (undefined8 *)0x0;
      func_0x00010bfb07c0(param_1);
      _objc_release(lVar2);
    }
    _objc_release(puVar6);
    _objc_release(puVar16);
    _objc_release(lVar21);
  }
  _objc_release(puVar4);
  _objc_release(uVar23);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d0ff0;
  _objc_retain(puVar18);
  _objc_opt_new(puVar4);
  func_0x00010c2a8920(puVar18);
  func_0x00010c225ca0(puVar4);
  puVar16 = puVar18;
  func_0x00010bf0d600(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b360(puVar4);
  _objc_release(puVar16);
  puVar16 = puVar18;
  func_0x00010bf0cf40(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b1c0(puVar4);
  _objc_release(puVar16);
  puVar16 = puVar18;
  func_0x00010c2813a0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bcc0(puVar4);
  _objc_release(puVar16);
  puVar16 = puVar18;
  func_0x00010c2810a0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bbe0(puVar4);
  _objc_release(puVar16);
  func_0x00010c15e680(puVar18);
  func_0x00010c1fcfa0(puVar4);
  func_0x00010bfed240(puVar18);
  func_0x00010c1ac060(puVar4);
  func_0x00010c242fe0(puVar18);
  func_0x00010c2054c0(puVar4);
  func_0x00010c25a8c0(puVar18);
  func_0x00010c20d640(puVar4);
  func_0x00010c0c9600(puVar18);
  func_0x00010c1c63a0(puVar4);
  func_0x00010bf7f0a0(puVar18);
  func_0x00010c18e160(puVar4);
  puVar16 = puVar18;
  func_0x00010c264ea0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210880(puVar4);
  _objc_release(puVar16);
  func_0x00010c123f40(puVar18);
  func_0x00010c1e9020(puVar4);
  func_0x00010c104760(puVar18);
  func_0x00010c1df180(puVar4);
  puVar16 = puVar18;
  func_0x00010bfb2440(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19da40(puVar4);
  _objc_release(puVar16);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar16 = puVar18;
  func_0x00010bfb1bc0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(dVar25 * 1000.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d580(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar16);
  puVar16 = puVar18;
  func_0x00010bf93ae0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a40(puVar4);
  _objc_release(puVar16);
  func_0x00010bfc1800();
  _objc_release(puVar18);
  func_0x00010c19c6a0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bc0504; end: 106bc078f; -[SCUnlockableGeoFilterTracker _convertInteraction:] */

void FUN_106bc0504(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d0ff0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_4;
  func_0x00010c2a8920(param_4);
  func_0x00010c225ca0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bf0d600(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b360(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf0cf40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b1c0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c2813a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bcc0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c2810a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bbe0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c15e680(param_4);
  func_0x00010c1fcfa0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfed240(param_4);
  func_0x00010c1ac060(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c242fe0(param_4);
  func_0x00010c2054c0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c25a8c0(param_4);
  func_0x00010c20d640(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c0c9600(param_4);
  func_0x00010c1c63a0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bf7f0a0(param_4);
  func_0x00010c18e160(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c264ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210880(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010c123f40(param_4);
  func_0x00010c1e9020(puVar1);
  func_0x00010c104760(param_4);
  func_0x00010c1df180(puVar1);
  lVar2 = param_4;
  func_0x00010bfb2440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19da40(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010bfb1bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d580(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf93ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195a40(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bfc1800();
  _objc_release(param_4);
  if (2 < lVar2 - 1U) {
    lVar2 = 0;
  }
  func_0x00010c19c6a0(puVar1,param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bc0790; end: 106bc090b; -[SCUnlockableGeoFilterTracker _createProtoTrackWithSnapInfo:impressions:] */

void FUN_106bc0790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c0358;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0360;
  _objc_opt_new(PTR_PTR_1126c0360);
  func_0x00010c21bd60();
  _objc_release(param_3);
  func_0x00010c204860(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126c0348;
  _objc_opt_new(PTR_PTR_1126c0348);
  puVar4 = PTR_PTR_1126c0340;
  _objc_opt_new(PTR_PTR_1126c0340);
  puVar5 = PTR_PTR_1126c0338;
  _objc_opt_new(PTR_PTR_1126c0338);
  puVar6 = PTR_PTR_1126b92e0;
  _objc_opt_new(PTR_PTR_1126b92e0);
  puVar7 = PTR_PTR_1126d0ff8;
  _objc_opt_new(PTR_PTR_1126d0ff8);
  func_0x00010c19c160();
  _objc_release(param_4);
  func_0x00010c19bde0(puVar6,param_2,puVar7);
  func_0x00010c1ab240(puVar5,param_2,puVar6);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6460(puVar4,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010c1ae980(puVar3,param_2,puVar4);
  func_0x00010c218ec0(puVar1,param_2,puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bc090c; end: 106bc0a37; -[SCUnlockableGeoFilterTracker _updateInteraction:existingInteraction:] */

void FUN_106bc090c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == (undefined *)0x0) {
    _objc_retain(0);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
    func_0x00010bfb1bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19d580(param_3);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010bf0cf40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b1c0(param_3);
  _objc_release(puVar1);
  func_0x00010c2a8920(param_4);
  func_0x00010c225ca0(param_3);
  puVar1 = param_4;
  func_0x00010bf0d600(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b360(param_3);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126f57b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s__updateInteraction_existingInter_1125940c0,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bc0a38; end: 106bc0aeb; -[SCUnlockableGeoFilterTracker _canTrack:] */

uint FUN_106bc0a38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar5 = 1;
    }
    else {
      lVar2 = param_3;
      func_0x00010c2813a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c23e500();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar5 = (uint)lVar4 ^ 1;
    }
  }
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 106bc0aec; end: 106bc0af7; -[SCUnlockableGeoFilterTracker newSwipeInteraction] */

void FUN_106bc0aec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_new_11034d2b0)(PTR_PTR_1126d0fe0);
  return;
}



/* Entry: 106bc0af8; end: 106bc1203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106bc0af8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  long lStack_2b0;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar48 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar2 = param_1;
  func_0x00010c097300();
  _objc_retainAutoreleasedReturnValue();
  lStack_2b0 = lVar2;
  func_0x00010bf52a60();
  if (lStack_2b0 != 0) {
    lVar45 = *plStack_160;
    do {
      lVar46 = 0;
      do {
        if (*plStack_160 != lVar45) {
          _objc_enumerationMutation(lVar2);
        }
        uVar47 = *(ulong *)(lStack_168 + lVar46 * 8);
        puVar3 = PTR_PTR_1126d1000;
        _objc_alloc();
        uVar4 = uVar47;
        func_0x00010bf28e60();
        uVar5 = uVar47;
        func_0x00010c06c960();
        uVar6 = uVar47;
        func_0x00010c2bd1a0();
        uVar7 = uVar47;
        func_0x00010c2b8140();
        uVar8 = uVar47;
        func_0x00010c095a20();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar47;
        func_0x00010bf93ae0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar47;
        func_0x00010c280e20();
        func_0x00010bfb1180(uVar47);
        uVar49 = uVar48;
        func_0x00010bfb1ee0(uVar47);
        uVar11 = uVar47;
        uVar50 = uVar49;
        func_0x00010c07c360();
        uVar12 = uVar47;
        func_0x00010c095800();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar47;
        func_0x00010c0cf060();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar47;
        func_0x00010c096da0();
        uVar15 = uVar47;
        func_0x00010c2810a0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar47;
        func_0x00010c242fe0();
        uVar17 = uVar47;
        func_0x00010c243600();
        uVar18 = uVar47;
        func_0x00010c25a8c0();
        uVar19 = uVar47;
        func_0x00010c0c9600();
        uVar20 = uVar47;
        func_0x00010bf7f0a0();
        func_0x00010c276de0(uVar47);
        uVar21 = uVar47;
        uVar51 = uVar50;
        func_0x00010c2654c0();
        func_0x00010c0c2f60(uVar47);
        uVar52 = uVar51;
        func_0x00010c123f40(uVar47);
        uVar53 = uVar52;
        func_0x00010c104760(uVar47);
        uVar54 = uVar53;
        func_0x00010c276ea0(uVar47);
        uVar55 = uVar54;
        func_0x00010c0c1f40(uVar47);
        uVar22 = uVar47;
        func_0x00010bfed240();
        uVar23 = uVar47;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar23;
        func_0x00010c11ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar47;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar25;
        func_0x00010bf93c40();
        _objc_retainAutoreleasedReturnValue();
        uVar27 = uVar47;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar27;
        func_0x00010c11fae0();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = uVar47;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar29;
        func_0x00010c11fa40();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a8920();
        uVar32 = uVar47;
        func_0x00010bf0d600();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        uVar34 = uVar33;
        func_0x00010c0e9a40();
        _objc_retainAutoreleasedReturnValue();
        uVar35 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29e500();
        uVar36 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4be0();
        uVar37 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07c060();
        uVar38 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07c080();
        uVar39 = uVar47;
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        uVar40 = uVar39;
        func_0x00010bf67c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf67d80();
        func_0x00010bf0cf40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07a180();
        func_0x00010bffafa0(uVar48,uVar49,uVar50,uVar51,uVar52,uVar53,uVar54,uVar55,puVar3,param_2,
                            uVar4,uVar5 & 0xffffffff,uVar6 & 0xffffffff,uVar7 & 0xffffffff,uVar8,
                            uVar9,uVar10,uVar11 & 0xff,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,
                            uVar18,uVar19,uVar20,uVar21,uVar22,uVar24,uVar26,uVar28,uVar30,
                            uVar31 != 0);
        _objc_release(uVar47);
        _objc_release(uVar40);
        _objc_release(uVar39);
        _objc_release(uVar38);
        _objc_release(uVar37);
        _objc_release(uVar36);
        _objc_release(uVar35);
        _objc_release(uVar34);
        _objc_release(uVar33);
        _objc_release(uVar32);
        _objc_release(uVar31);
        _objc_release(uVar30);
        _objc_release(uVar29);
        _objc_release(uVar28);
        _objc_release(uVar27);
        _objc_release(uVar26);
        _objc_release(uVar25);
        _objc_release(uVar24);
        _objc_release(uVar23);
        _objc_release(uVar15);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar9);
        _objc_release(uVar8);
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar46 = lVar46 + 1;
      } while (lStack_2b0 != lVar46);
      lStack_2b0 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_170,auStack_130,0x10);
    } while (lStack_2b0 != 0);
  }
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d1008;
  _objc_alloc(PTR_PTR_1126d1008);
  lVar2 = param_1;
  func_0x00010bf32ae0(param_1);
  lVar45 = param_1;
  func_0x00010c096b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010c089040(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x00010bef5300(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010bf70ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010bf70ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x00010bf326a0();
  func_0x00010bffcd20(puVar3,param_2,lVar2,lVar45,lVar46,puVar1,lVar41,lVar42,lVar43,lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + _DAT_112759ccc);
}



/* Entry: 106bc1204; end: 106bc1213; -[SCUnlockableFilterSwipeInteraction firstSeenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bc1204(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759ccc);
}



/* Entry: 106bc1214; end: 106bc1253; -[SCUnlockableFilterSwipeInteraction setFirstSeenTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bc1214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759ccc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bc1254; end: 106bc1263; -[SCUnlockableFilterSwipeInteraction encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bc1254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759cd0);
}



/* Entry: 106bc1264; end: 106bc12a3; -[SCUnlockableFilterSwipeInteraction setEncryptedGeoData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bc1264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759cd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bc12a4; end: 106bc12b3; -[SCUnlockableFilterSwipeInteraction filterType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bc12a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759cc8);
}



/* Entry: 106bc12b4; end: 106bc12c3; -[SCUnlockableFilterSwipeInteraction setFilterType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bc12b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759cc8) = param_3;
  return;
}



/* Entry: 106bc12c4; end: 106bc1303; -[SCUnlockableFilterSwipeInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bc12c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759cd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759ccc,0);
  return;
}



/* Entry: 106bc1304; end: 106bc19a7;  */

void FUN_106bc1304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar10 = param_1;
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_320 = lVar10;
  func_0x00010bf52a60();
  if (lStack_320 != 0) {
    lVar12 = *plStack_1c0;
    do {
      lStack_318 = 0;
      do {
        if (*plStack_1c0 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        lVar11 = *(long *)(lStack_1c8 + lStack_318 * 8);
        puStack_1f8 = &uStack_200;
        uStack_200 = 0;
        uStack_1f0 = 0x3032000000;
        pcStack_1e8 = FUN_106bc19a8;
        uStack_1e0 = 0x106bc19b8;
        puVar2 = PTR_PTR_1126c0360;
        _objc_alloc_init();
        lVar3 = lVar11;
        puStack_1d8 = puVar2;
        func_0x00010c241660(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bff60();
        _objc_release(lVar3);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar3 = lVar11;
        func_0x00010c277900();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar4;
        func_0x00010bf52a60();
        lVar9 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar9) {
              _objc_enumerationMutation(lVar4);
            }
            lVar13 = *(long *)(lVar14 * 8);
            puVar5 = PTR_PTR_1126b92e0;
            _objc_alloc_init();
            lVar6 = lVar13;
            func_0x00010bfea8e0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar5);
            _objc_retain(puVar5);
            _objc_retain(puVar5);
            func_0x00010c0bdde0(lVar6);
            _objc_release(lVar6);
            puVar7 = PTR_PTR_1126c0338;
            _objc_alloc_init(PTR_PTR_1126c0338);
            lVar6 = lVar13;
            func_0x00010c15ffa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 != 0) {
              puVar8 = PTR_PTR_1126b1df0;
              _objc_alloc_init(PTR_PTR_1126b1df0);
              func_0x00010c1fda20(puVar7);
              _objc_release(puVar8);
              func_0x00010c15ffa0(lVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c15ffa0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220160();
              _objc_release(puVar8);
              _objc_release(lVar13);
            }
            func_0x00010c1ab240(puVar7);
            func_0x00010befa120(puVar2);
            _objc_release(puVar7);
            _objc_release(puVar5);
            _objc_release(puVar5);
            _objc_release(puVar5);
            _objc_release(puVar5);
            lVar14 = lVar14 + 1;
          } while (lVar3 != lVar14);
          lVar3 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
        puVar7 = PTR_PTR_1126c0340;
        _objc_alloc_init(PTR_PTR_1126c0340);
        func_0x00010c1b6460();
        puVar8 = PTR_PTR_1126c0348;
        _objc_alloc_init(PTR_PTR_1126c0348);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc_init(PTR_PTR_1126c0350);
        func_0x00010c185760(puVar8);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        lVar3 = lVar11;
        func_0x00010c277900(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar3;
        func_0x00010bf5ab40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f260(puVar5);
        puVar5 = puVar8;
        func_0x00010bf5ab80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar5);
        _objc_release(lVar9);
        _objc_release(lVar3);
        puVar5 = PTR_PTR_1126c0320;
        _objc_alloc_init(PTR_PTR_1126c0320);
        func_0x00010c1cf8e0(puVar8);
        _objc_release(puVar5);
        func_0x00010c277900(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0deaa0();
        puVar5 = puVar8;
        func_0x00010c0deaa0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar5);
        _objc_release(lVar11);
        func_0x00010c1ae980(puVar8);
        puVar5 = PTR_PTR_1126c0358;
        _objc_alloc_init(PTR_PTR_1126c0358);
        func_0x00010c204860();
        func_0x00010c218ec0(puVar5);
        func_0x00010befa120(puVar1);
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        __Block_object_dispose(&uStack_200,8);
        _objc_release(puStack_1d8);
        lStack_318 = lStack_318 + 1;
      } while (lStack_318 != lStack_320);
      lStack_320 = lVar10;
      func_0x00010bf52a60();
    } while (lStack_320 != 0);
  }
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126d0fc8;
  _objc_alloc_init(PTR_PTR_1126d0fc8);
  func_0x00010c2191e0();
  lVar10 = param_1;
  func_0x00010c244060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205c80(puVar2);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bfeba40();
  if ((int)lVar10 != 0) {
    func_0x00010c17f560(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar10 = 8;
  __Block_object_dispose(&uStack_200);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 106bc19a8; end: 106bc19e7;  */

void FUN_106bc19a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bc19e8; end: 106bc202f;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000106bc1a70 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_106bc19e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x5;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_4);
      }
      uVar9 = *(undefined8 *)(lVar11 * 8);
      puVar2 = PTR_PTR_1126d0fe8;
      _objc_alloc_init();
      puVar3 = PTR_PTR_1126b1df0;
      _objc_alloc_init(PTR_PTR_1126b1df0);
      func_0x00010c1a2d20(puVar2);
      _objc_release(puVar3);
      uVar4 = uVar9;
      func_0x00010bfc1680(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfc1680(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      _objc_release(uVar4);
      uVar4 = uVar9;
      func_0x00010bf937e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195940(puVar2);
      _objc_release(uVar4);
      uVar4 = uVar9;
      func_0x00010bf93800(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195b80(puVar2);
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126c0308;
      _objc_alloc_init(PTR_PTR_1126c0308);
      func_0x00010c226de0(puVar2);
      _objc_release(puVar3);
      func_0x00010bf7b4c0(uVar9);
      puVar3 = puVar2;
      func_0x00010c2b95c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0308;
      _objc_alloc_init(PTR_PTR_1126c0308);
      func_0x00010c226f40(puVar2);
      _objc_release(puVar3);
      func_0x00010bf784e0(uVar9);
      puVar3 = puVar2;
      func_0x00010c2ba540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0308;
      _objc_alloc_init(PTR_PTR_1126c0308);
      func_0x00010c226740(puVar2);
      _objc_release(puVar3);
      func_0x00010bf77e20();
      puVar3 = puVar2;
      func_0x00010c2b3c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126d0ff8;
  _objc_alloc_init();
  func_0x00010c19c160();
  _objc_release(puVar1);
  _objc_release(param_4);
  lVar5 = *(long *)(param_3 + 0x20);
  func_0x00010c19bde0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = 0;
    _objc_retain(lVar7);
    lVar6 = lVar7;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        uVar10 = *(undefined8 *)(lVar12 * 8);
        puVar2 = PTR_PTR_1126d0f50;
        _objc_alloc_init();
        puVar3 = PTR_PTR_1126b1df0;
        _objc_alloc_init(PTR_PTR_1126b1df0);
        func_0x00010c1bbd60(puVar2);
        _objc_release(puVar3);
        uVar9 = uVar10;
        func_0x00010c094540(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c094540(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar3);
        _objc_release(uVar9);
        uVar9 = uVar10;
        func_0x00010bf937e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195940(puVar2);
        _objc_release(uVar9);
        uVar9 = uVar10;
        func_0x00010bf93800(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c195b80(puVar2);
        _objc_release(uVar9);
        puVar3 = PTR_PTR_1126c0308;
        _objc_alloc_init(PTR_PTR_1126c0308);
        func_0x00010c226de0(puVar2);
        _objc_release(puVar3);
        func_0x00010bf7b4c0(uVar10);
        puVar3 = puVar2;
        func_0x00010c2b95c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c0308;
        _objc_alloc_init(PTR_PTR_1126c0308);
        func_0x00010c226f40(puVar2);
        _objc_release(puVar3);
        func_0x00010bf784e0(uVar10);
        puVar3 = puVar2;
        func_0x00010c2ba540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c0308;
        _objc_alloc_init(PTR_PTR_1126c0308);
        func_0x00010c226740(puVar2);
        _objc_release(puVar3);
        func_0x00010bf77e20();
        puVar3 = puVar2;
        func_0x00010c2b3c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar3);
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    puVar2 = PTR_PTR_1126d0f70;
    _objc_alloc_init();
    func_0x00010c1bbe40();
    _objc_release(puVar1);
    _objc_release(lVar7);
    lVar5 = *(long *)(lVar5 + 0x20);
    puVar1 = puVar2;
    func_0x00010c1bad20();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      puVar2 = PTR_PTR_1126c02f8;
      _objc_retain(in_x5);
      _objc_retain(puVar1);
      _objc_alloc_init(puVar2);
      puVar3 = PTR_PTR_1126c0300;
      _objc_alloc_init(PTR_PTR_1126c0300);
      func_0x00010c2157c0(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c26fc20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(uVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0300;
      _objc_alloc_init(PTR_PTR_1126c0300);
      func_0x00010c1c4620(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c0c4c00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160(param_2);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0308;
      _objc_alloc_init(PTR_PTR_1126c0308);
      func_0x00010c1af440(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c06c960(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      func_0x00010c1955e0(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c0318;
      _objc_alloc_init(PTR_PTR_1126c0318);
      puVar3 = PTR_PTR_1126c0320;
      _objc_alloc_init(PTR_PTR_1126c0320);
      func_0x00010c2256c0(puVar1);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c2a5040(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0320;
      _objc_alloc_init(PTR_PTR_1126c0320);
      func_0x00010c1a7d00(puVar1);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010bfe0640(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c0310;
      _objc_alloc_init(PTR_PTR_1126c0310);
      func_0x00010c1f7040();
      func_0x00010c18c9e0(puVar2);
      func_0x00010c205ba0(puVar2);
      func_0x00010c2061e0(puVar2);
      func_0x00010c207fe0(puVar2);
      _objc_release(in_x5);
      _objc_release(puVar3);
      _objc_release(puVar1);
      func_0x00010c21bd20(*(undefined8 *)(lVar5 + 0x20));
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c164dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar5 + 0x20),PTR_s_setAdType__112636d90,0xe);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bc2030; end: 106bc22e3;  */

void FUN_106bc2030(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c02f8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc_init(PTR_PTR_1126c0300);
  func_0x00010c2157c0(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c26fc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc_init(PTR_PTR_1126c0300);
  func_0x00010c1c4620(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c4c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  func_0x00010c1af440(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c06c960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar2);
  func_0x00010c1955e0(puVar1);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c0318;
  _objc_alloc_init(PTR_PTR_1126c0318);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc_init(PTR_PTR_1126c0320);
  func_0x00010c2256c0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2a5040(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc_init(PTR_PTR_1126c0320);
  func_0x00010c1a7d00(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfe0640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0310;
  _objc_alloc_init(PTR_PTR_1126c0310);
  func_0x00010c1f7040();
  func_0x00010c18c9e0(puVar1);
  func_0x00010c205ba0(puVar1);
  func_0x00010c2061e0(puVar1);
  func_0x00010c207fe0(puVar1);
  _objc_release(param_8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c21bd20(*(undefined8 *)(param_3 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c164dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_setAdType__112636d90,0xe);
  return;
}



/* Entry: 106bc22e4; end: 106bc2e9b;  */

void FUN_106bc22e4(float param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,long param_11,char param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar13 = PTR_PTR_1126b9438;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar13);
  puVar1 = PTR_PTR_1126c0338;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c219120(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  puVar3 = param_2;
  FUN_106bc2e9c();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c08fa60();
  if (puVar14 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = param_2;
    FUN_106bc2e9c(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar2);
  func_0x00010c1fda20(puVar1);
  _objc_release(puVar2);
  if (puVar14 != (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar3);
  puVar2 = param_2;
  func_0x00010c0ebce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c0ebce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010b704680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5b40(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_9 != 0) {
    lVar4 = param_9;
    func_0x00010c0cfd40();
    if (lVar4 == 2) {
      puVar3 = PTR_PTR_1126d1010;
      _objc_alloc();
      func_0x00010c054d00();
      func_0x00010bf90a40(param_8);
      puVar12 = param_2;
      FUN_106bc2f38(param_2,param_8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d1018;
      puVar14 = puVar12;
      func_0x00010bf3ca00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00010c29e460(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar14);
      if (puVar2 == (undefined *)0x0) {
        puVar9 = param_2;
        func_0x00010c135700(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1d20(param_10);
LAB_106bc2860:
        _objc_release(puVar9);
        lVar4 = param_9;
        func_0x00010c149240();
        if ((int)lVar4 == 0) {
          puVar14 = param_2;
          func_0x00010c135700(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1d20(param_10);
          _objc_release(puVar14);
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = param_2;
          FUN_106bc3150(param_2,param_7,param_8,puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puStack_d0 = (undefined *)0x0;
        puVar14 = PTR_PTR_1126b92e0;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puStack_d0;
        _objc_retain(puStack_d0);
        if (puVar14 == (undefined *)0x0) {
          puVar14 = param_2;
          func_0x00010c135700(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1d20(param_10);
          _objc_release(puVar14);
          goto LAB_106bc2860;
        }
        _objc_release(puVar9);
      }
      _objc_release(puVar2);
      _objc_release(puVar12);
      _objc_release(puVar3);
      goto LAB_106bc2978;
    }
    if (lVar4 == 1) {
      puVar2 = PTR_PTR_1126d1010;
      _objc_alloc();
      func_0x00010c054d00();
      puVar14 = param_2;
      FUN_106bc3150(param_2,param_7,param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22a100(param_9);
      if (((param_10 != 0) && (0.0 < param_1)) && (puVar14 != (undefined *)0x0)) {
        uVar5 = 10000;
        _arc4random_uniform();
        if ((float)(uVar5 & 0xffffffff) / 10000.0 < param_1) {
          puVar3 = puVar14;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010c08fa60();
          if (puVar12 != (undefined *)0x0) {
            func_0x00010bf90a40();
            puVar9 = param_2;
            FUN_106bc2f38(param_2,param_8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR_PTR_1126d1018;
            puVar6 = puVar9;
            func_0x00010bf3ca00();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar9;
            func_0x00010c29e460(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf22320();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar12;
            func_0x00010c08fa60();
            if (puVar6 != (undefined *)0x0) {
              puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_c8 = 0xc2000000;
              pcStack_c0 = FUN_106bc30f8;
              puStack_b8 = &UNK_11084c4a0;
              _objc_retain(param_10);
              lStack_b0 = param_10;
              _objc_retain(puVar3);
              puStack_a8 = puVar3;
              _objc_retain(puVar12);
              puStack_a0 = puVar12;
              _objc_retain(param_2);
              ppuVar8 = &puStack_d0;
              puStack_98 = param_2;
              _objc_retainBlock(ppuVar8);
              if (param_11 == 0) {
                uVar10 = 0;
                _dispatch_get_global_queue(0,0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010007380c();
                _objc_release(uVar10);
              }
              else {
                func_0x00010c0f7fc0(param_11);
              }
              _objc_release(ppuVar8);
              _objc_release(puStack_98);
              _objc_release(puStack_a0);
              _objc_release(puStack_a8);
              _objc_release(lStack_b0);
            }
            _objc_release(puVar12);
            _objc_release(puVar9);
          }
          _objc_release(puVar3);
        }
      }
      _objc_release(puVar2);
      goto LAB_106bc2978;
    }
    if (lVar4 != 0) goto LAB_106bc2978;
  }
  puVar14 = param_2;
  FUN_106bc3150(param_2,param_7,param_8,0);
  _objc_retainAutoreleasedReturnValue();
LAB_106bc2978:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_2);
  func_0x00010c1ab240(puVar1);
  _objc_release(puVar14);
  if (param_12 != '\0') {
    puVar2 = param_2;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c0da7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar12;
    func_0x00010c08fa60();
    puVar3 = puVar12;
    if ((puVar2 != (undefined *)0x0) ||
       (puVar2 = puVar14, func_0x00010c08fa60(), puVar3 = puVar14, puVar2 != (undefined *)0x0)) {
      func_0x00010b704680(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd160(puVar1);
      _objc_release(puVar3);
    }
    func_0x00010c164da0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar12);
  }
  puVar2 = PTR_PTR_1126c0340;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c1b6460(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar3);
  puVar3 = param_2;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c135700(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010b704680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar3);
  }
  puVar3 = param_2;
  func_0x00010c06a4a0();
  if (puVar3 + -1 < (undefined *)0x4) {
    func_0x00010c1ae9c0(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c1ae9a0(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar3);
  puVar3 = param_2;
  func_0x00010c120400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c120400(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010848b3f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195be0(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c0268;
  _objc_opt_new(PTR_PTR_1126c0268);
  uVar10 = param_3;
  func_0x00010c292860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5100();
  func_0x00010c1bdaa0(puVar3);
  _objc_release(uVar10);
  func_0x00010c1dfdc0(puVar13);
  uVar10 = param_3;
  func_0x00010bf6fee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010848cb44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = param_3;
  func_0x00010bf07960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010848b980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = param_3;
  func_0x00010bf6fee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar11 = uVar10;
  func_0x00010848bb28(uVar10,param_4,param_6,0,0,param_8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  func_0x00010c18c700(puVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar14 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c1cf8e0(puVar13);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126c0350;
  _objc_alloc();
  puVar12 = param_2;
  func_0x00010bf5ab60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0();
  func_0x00010c185760(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain();
    puVar13 = param_2;
    func_0x00010c278a40();
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar13 == (undefined *)0x2) {
      puVar13 = param_2;
      func_0x00010c15ffa0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106bc2e9c; end: 106bc2f13;  */

void FUN_106bc2e9c(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c278a40();
  if ((lVar1 == 1) || (lVar1 == 3)) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010c15ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bc2f14; end: 106bc2f37;  */

undefined ** FUN_106bc2f14(ulong param_1)

{
  if (param_1 < 5) {
    return (undefined **)(&PTR_PTR_110965828)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110ddf8d8;
}



/* Entry: 106bc2f38; end: 106bc30f7;  */

void FUN_106bc2f38(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c264ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  lVar7 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar3 = lVar7;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106bc3034;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar7 = 0;
  }
LAB_106bc3034:
  _objc_release(param_1);
  lVar4 = lVar7;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c23d840(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x000100873628(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x0001084c1688(lVar4,lVar2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c135700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43420(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bc30f8; end: 106bc314f;  */

void FUN_106bc30f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c135700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43420(uVar1,param_2,uVar3,uVar2,uVar4,
                      &PTR____CFConstantStringClassReference_110ddd398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106bc3150; end: 106bc4a13;  */

void FUN_106bc3150(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_170;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b92e0;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010c278a40();
  if (uVar3 == 1) {
    func_0x00010c164dc0(puVar2);
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar4 = PTR_PTR_1126d0f70;
    _objc_opt_new();
    func_0x00010c096ca0(param_1);
    FUN_106bc6cf0();
    func_0x00010c177420(puVar4);
    uVar3 = param_1;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf32ae0(param_1);
    func_0x00010c01e4e0(puVar23);
    func_0x00010c179c80(puVar4);
    _objc_release(puVar23);
    puVar23 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar24 = param_1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010c08fa60();
    if (uVar25 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = param_1;
      func_0x00010c15ffa0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar23);
    func_0x00010c1bcc00(puVar4);
    _objc_release(puVar23);
    if (uVar25 != 0) {
      _objc_release(uVar27);
    }
    _objc_release(uVar24);
    puVar23 = puVar4;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar23;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c08fa60();
    _objc_release(puVar12);
    _objc_release(puVar23);
    if (puVar13 == (undefined *)0x0) {
      puVar23 = PTR_PTR_1126b8d98;
      func_0x00010c2815e0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar23;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      uVar14 = param_2;
      func_0x00010bef2aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar14);
      _objc_release(puVar12);
    }
    puVar23 = PTR_PTR_1126d1028;
    uVar24 = param_1;
    func_0x00010bf70600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = param_1;
    func_0x00010bf71240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf22560(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c9e0(puVar4);
    _objc_release(puVar23);
    _objc_release(uVar25);
    _objc_release(uVar24);
    uVar24 = param_1;
    func_0x00010c23fb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    FUN_106bc4a14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d80(puVar4);
    _objc_release(uVar25);
    _objc_release(uVar24);
    uVar14 = param_3;
    func_0x00010bf90a40();
    if ((int)uVar14 != 0) {
      puVar23 = PTR_PTR_1126b1df0;
      _objc_alloc();
      uVar24 = param_1;
      func_0x00010c089040();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar24;
      func_0x00010c08fa60();
      if (uVar25 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = param_1;
        func_0x00010c089040(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820();
      func_0x00010c1b7ea0(puVar4);
      _objc_release(puVar23);
      if (uVar25 != 0) {
        _objc_release(uVar27);
      }
      _objc_release(uVar24);
      puVar23 = PTR_PTR_1126d1028;
      func_0x00010bf326a0(param_1);
      func_0x00010c119300(puVar23);
      func_0x00010c1799c0(puVar4);
    }
    puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(uVar3);
    uVar24 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar24 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        puVar12 = PTR_PTR_1126c8c40;
        uVar28 = *(ulong *)(uVar25 * 8);
        _objc_retain(uVar28);
        _objc_opt_class(puVar12);
        uVar15 = uVar28;
        _objc_opt_isKindOfClass(uVar28,puVar12);
        uVar27 = uVar28;
        if ((uVar15 & 1) == 0) {
          uVar27 = 0;
        }
        _objc_retain(uVar27);
        _objc_release(uVar28);
        if (uVar27 != 0) {
          uVar15 = param_1;
          func_0x00010c15ffa0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = param_1;
          func_0x00010bf70600(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = param_1;
          func_0x00010bf71240(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar18 = param_1;
          func_0x00010c096ca0(param_1);
          uVar19 = param_1;
          func_0x00010c278a40(param_1);
          uVar14 = param_3;
          func_0x00010bf90a40(param_3);
          uVar20 = uVar28;
          FUN_106bc52bc(uVar28,param_4);
          _objc_retainAutoreleasedReturnValue();
          FUN_106bc52ec(uVar28,uVar15,uVar16,uVar17,uVar18,uVar19,uVar14,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar20);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          func_0x00010befa120(puVar23);
          _objc_release(uVar28);
        }
        _objc_release(uVar27);
        uVar25 = uVar25 + 1;
      } while (uVar24 != uVar25);
      uVar24 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
    func_0x00010c1bbe40(puVar4);
    _objc_release(puVar23);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    func_0x00010c1bad20(puVar2);
  }
  else if (uVar3 == 3) {
    func_0x00010c164dc0(puVar2);
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar4 = PTR_PTR_1126d0ff8;
    _objc_opt_new();
    uVar3 = param_1;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf32ae0(param_1);
    func_0x00010c01e4e0(puVar23);
    func_0x00010c179c80(puVar4);
    _objc_release(puVar23);
    uVar24 = param_1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010c08fa60();
    _objc_release(uVar24);
    if (uVar25 == 0) {
      ppuVar22 = &PTR____CFConstantStringClassReference_110e77df8;
    }
    else {
      uVar24 = param_1;
      func_0x00010c15ffa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar24;
      func_0x00010b704680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar24);
      uVar24 = param_1;
      func_0x00010c15ffa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205680(puVar4);
      _objc_release(uVar24);
      func_0x00010c205660(puVar4);
      _objc_release(uVar25);
      ppuVar22 = (undefined **)0x0;
    }
    func_0x00010c08fa60();
    if (ppuVar22 != (undefined **)0x0) {
      puVar23 = PTR_PTR_1126b8d98;
      func_0x00010c2815e0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar23;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      puVar23 = puVar12;
      func_0x00010c2ac460(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      uVar14 = param_2;
      func_0x00010bef2aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar14);
      _objc_release(puVar23);
    }
    puVar23 = PTR_PTR_1126d1028;
    uVar24 = param_1;
    func_0x00010bf70600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = param_1;
    func_0x00010bf71240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf22560(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c9e0(puVar4);
    _objc_release(puVar23);
    _objc_release(uVar25);
    _objc_release(uVar24);
    uVar24 = param_1;
    func_0x00010c23fb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    FUN_106bc4a14();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d80(puVar4);
    _objc_release(uVar25);
    _objc_release(uVar24);
    puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(uVar3);
    uVar24 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar24 != 0) {
      uVar25 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        puVar12 = PTR_PTR_1126d0ff0;
        puVar26 = *(undefined **)(uVar25 * 8);
        _objc_retain(puVar26);
        _objc_opt_class(puVar12);
        puVar13 = puVar26;
        _objc_opt_isKindOfClass(puVar26,puVar12);
        puVar12 = puVar26;
        if (((ulong)puVar13 & 1) == 0) {
          puVar12 = (undefined *)0x0;
        }
        _objc_retain(puVar12);
        _objc_release(puVar26);
        if (puVar12 != (undefined *)0x0) {
          puVar13 = PTR_PTR_1126d0fe8;
          _objc_opt_new(PTR_PTR_1126d0fe8);
          puVar6 = puVar26;
          FUN_106bc52bc(puVar26,param_4);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            puVar7 = PTR_PTR_1126d1058;
            _objc_alloc(PTR_PTR_1126d1058);
            func_0x00010c01e600();
          }
          else {
            _objc_retain(puVar6);
            puVar7 = puVar6;
          }
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126b1df0;
          _objc_alloc(PTR_PTR_1126b1df0);
          puVar8 = puVar26;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c08fa60();
          if (puVar9 != (undefined *)0x0) {
            puStack_170 = puVar26;
            func_0x00010c2810a0();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c04e820(puVar6);
          func_0x00010c1a2d20(puVar13);
          _objc_release(puVar6);
          if (puVar9 != (undefined *)0x0) {
            _objc_release(puStack_170);
          }
          _objc_release(puVar8);
          puVar6 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c242fe0(puVar26);
          func_0x00010bff91e0(puVar6);
          func_0x00010c226de0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c25a8c0(puVar26);
          func_0x00010bff91e0(puVar6);
          func_0x00010c226f40(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c0c9600(puVar26);
          func_0x00010bff91e0(puVar6);
          func_0x00010c226740(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c242fe0(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c2054c0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c25a8c0(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c20d640(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c0c9600(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c1c63a0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010bf7f0a0(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c205520(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c2654c0(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c2109e0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c276de0(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c218a60(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c0c2f60(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c1c37e0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c123f40(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c179320(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c104760(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c1df160(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c276ea0(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c218ac0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c0c1f40(puVar7);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c1c30e0(puVar13);
          _objc_release(puVar6);
          puVar6 = puVar26;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c11ff80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (puVar8 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010c2813a0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010c11ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010848b3f0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c195940(puVar13);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar6 = puVar26;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bf93c40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (puVar8 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010c2813a0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010bf93c40();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010848b3f0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c195b80(puVar13);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar6 = puVar26;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c11fae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (puVar8 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010c2813a0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010c11fae0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010b704680();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e7380(puVar13);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar6 = puVar26;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c11fa40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (puVar8 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010c2813a0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010c11fa40();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010848b3f0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e72c0(puVar13);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar6 = puVar26;
          func_0x00010bf93ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010bf93ae0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010848b3f0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1955e0(puVar13);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          func_0x00010bfae5a0();
          func_0x00010c1a2dc0(puVar13);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010bfed240(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c19c1a0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010bf32ae0(param_1);
          func_0x00010bfed240(puVar26);
          func_0x00010c01e4e0(puVar6);
          func_0x00010c19c080(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          puVar8 = puVar26;
          func_0x00010bfb1bc0(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          func_0x00010c01e4e0(puVar6);
          func_0x00010c19d580(puVar13);
          _objc_release(puVar6);
          _objc_release(puVar8);
          puVar6 = PTR_PTR_1126c0308;
          _objc_alloc(PTR_PTR_1126c0308);
          func_0x00010c2a8920(puVar26);
          func_0x00010bff91e0(puVar6);
          func_0x00010c225ca0(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126d1028;
          puVar8 = puVar26;
          func_0x00010bf0d600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c119020(puVar6);
          _objc_release(puVar8);
          func_0x00010c16b360(puVar13);
          puVar6 = puVar26;
          func_0x00010bf0cf40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = puVar26;
            func_0x00010bf0cf40(puVar26);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            FUN_106bc4c94();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16b180(puVar13);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar6 = puVar26;
          func_0x00010bfb2440();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar6 != (undefined *)0x0) {
            puVar6 = PTR_PTR_1126d1060;
            _objc_opt_new(PTR_PTR_1126d1060);
            puVar8 = PTR_PTR_1126c0308;
            _objc_alloc(PTR_PTR_1126c0308);
            puVar9 = puVar26;
            func_0x00010bfb2440(puVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c073160();
            func_0x00010bff91e0(puVar8);
            func_0x00010c163600(puVar6);
            _objc_release(puVar8);
            _objc_release(puVar9);
            puVar8 = PTR_PTR_1126b1df0;
            _objc_alloc(PTR_PTR_1126b1df0);
            puVar9 = puVar26;
            func_0x00010bfb2440();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010bfb2460();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c08fa60();
            if (puVar11 != (undefined *)0x0) {
              puStack_188 = puVar26;
              func_0x00010bfb2440();
              _objc_retainAutoreleasedReturnValue();
              puStack_190 = puStack_188;
              func_0x00010bfb2460();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c04e820(puVar8);
            func_0x00010c163620(puVar6);
            _objc_release(puVar8);
            if (puVar11 != (undefined *)0x0) {
              _objc_release(puStack_190);
              _objc_release(puStack_188);
            }
            _objc_release(puVar10);
            _objc_release(puVar9);
            puVar8 = PTR_PTR_1126d1068;
            func_0x00010bfb2440();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar26;
            func_0x00010bfb2480();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c118f80(puVar8);
            func_0x00010c163640(puVar6);
            _objc_release(puVar9);
            _objc_release(puVar26);
            func_0x00010c1635e0(puVar13);
            _objc_release(puVar6);
          }
          func_0x00010befa120(puVar23);
          _objc_release(puVar7);
          _objc_release(puVar13);
        }
        _objc_release(puVar12);
        uVar25 = uVar25 + 1;
      } while (uVar24 != uVar25);
      uVar24 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
    func_0x00010c19c160(puVar4);
    _objc_release(puVar23);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    func_0x00010c19bde0(puVar2);
  }
  else {
    if (uVar3 != 2) goto LAB_106bc49b0;
    _objc_retain(param_3);
    uVar3 = param_1;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar23 = (undefined *)0x0;
    if (uVar24 != 0) {
      do {
        uVar25 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar3);
          }
          puVar23 = *(undefined **)(uVar25 * 8);
          puVar4 = puVar23;
          func_0x00010c2813a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106bc34d4;
          }
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
        uVar24 = uVar3;
        func_0x00010bf52a60();
      } while (uVar24 != 0);
      puVar23 = (undefined *)0x0;
    }
LAB_106bc34d4:
    _objc_release(uVar3);
    puVar12 = puVar23;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    func_0x00010c23d840(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x000100873628();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x0001084c1688(puVar12,uVar14,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar12);
    _objc_release(puVar23);
    _objc_release(param_3);
    if (puVar4 != (undefined *)0x0) {
      puVar23 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      puVar12 = puVar4;
      func_0x00010bf3ca00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar26 = puVar4;
        func_0x00010bf3ca00(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar23);
      func_0x00010c202d80(puVar2);
      _objc_release(puVar23);
      if (puVar13 != (undefined *)0x0) {
        _objc_release(puVar26);
      }
      _objc_release(puVar12);
      puVar23 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      puVar12 = puVar4;
      func_0x00010c29e460();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
      }
      else {
        puVar26 = puVar4;
        func_0x00010c29e460();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar23);
      func_0x00010c202e00(puVar2);
      _objc_release(puVar23);
      if (puVar13 != (undefined *)0x0) {
        _objc_release(puVar26);
      }
      _objc_release(puVar12);
    }
    func_0x00010c164dc0(puVar2);
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uVar3 = param_1;
    func_0x00010c264ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar23 = PTR_PTR_1126c8c40;
    _objc_opt_class(PTR_PTR_1126c8c40);
    uVar25 = uVar24;
    _objc_opt_isKindOfClass(uVar24,puVar23);
    uVar3 = uVar24;
    if ((uVar25 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar24);
    if (uVar3 == 0) {
      uVar24 = 0;
    }
    else {
      uVar25 = uVar24;
      FUN_106bc52bc(uVar24,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar27 = param_1;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_1;
      func_0x00010bf70600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar28 = param_1;
      func_0x00010bf71240(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_1;
      func_0x00010c096ca0(param_1);
      uVar17 = param_1;
      func_0x00010c278a40(param_1);
      uVar14 = param_3;
      func_0x00010bf90a40(param_3);
      uVar18 = param_1;
      func_0x00010bf326a0(param_1);
      FUN_106bc52ec(uVar24,uVar27,uVar15,uVar28,uVar16,uVar17,uVar14,uVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar28);
      _objc_release(uVar15);
      _objc_release(uVar27);
      _objc_release(uVar25);
    }
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_1);
    func_0x00010c1ba8a0(puVar2);
    _objc_release(uVar24);
  }
  _objc_release(puVar4);
LAB_106bc49b0:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d1020;
    _objc_retain();
    _objc_opt_new(puVar2);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar3 = param_1;
    func_0x00010bf28e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c176040(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c06c960(param_1);
    func_0x00010bff91e0(puVar4);
    func_0x00010c1af440(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar3 = param_1;
    func_0x00010c2426a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c2050a0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar3 = param_1;
    func_0x00010c2405e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c204220(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar3 = param_1;
    func_0x00010bfae560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c19c660(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar3 = param_1;
    func_0x00010bfc16c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c1a2d40(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d1028;
    uVar3 = param_1;
    func_0x00010c0c6c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c119000(puVar4);
    func_0x00010c1c5440(puVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d1028;
    uVar3 = param_1;
    func_0x00010bfada40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1191c0(puVar4);
    func_0x00010c19be00(puVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bc4a14; end: 106bc4c93;  */

void FUN_106bc4a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1020;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  uVar3 = param_1;
  func_0x00010bf28e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c176040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_1;
  func_0x00010c06c960(param_1);
  func_0x00010bff91e0(puVar2,param_2,uVar3);
  func_0x00010c1af440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  uVar3 = param_1;
  func_0x00010c2426a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c2050a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  uVar3 = param_1;
  func_0x00010c2405e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c204220(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  uVar3 = param_1;
  func_0x00010bfae560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c19c660(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  uVar3 = param_1;
  func_0x00010bfc16c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c1a2d40(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d1028;
  uVar3 = param_1;
  func_0x00010c0c6c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119000(puVar2,param_2,uVar3);
  func_0x00010c1c5440(puVar1,param_2,puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126d1028;
  uVar3 = param_1;
  func_0x00010bfada40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1191c0(puVar2,param_2,uVar3);
  func_0x00010c19be00(puVar1,param_2,puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bc4c94; end: 106bc52bb;  */

void FUN_106bc4c94(double param_1,long param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x27;
  long lVar9;
  double dVar10;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c09cb60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1030;
  _objc_opt_new(PTR_PTR_1126d1030);
  if (param_3 < 5) {
    if (param_3 == 3) {
LAB_106bc4e7c:
      puVar4 = PTR_PTR_1126d1038;
      _objc_opt_new(PTR_PTR_1126d1038);
      puVar5 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar6 = param_2;
      func_0x00010c0e9a40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      param_1 = param_1 * 1000.0;
      func_0x00010c01e4e0(puVar5);
      func_0x00010c1d5180(puVar4);
      _objc_release(puVar5);
      _objc_release(lVar6);
      puVar5 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010c29e500(param_2);
      func_0x00010c0138c0((float)param_1,puVar5);
      func_0x00010c222d20(puVar4);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      func_0x00010c07a180(param_2);
      func_0x00010bff91e0(puVar5);
      func_0x00010c1dc080(puVar4);
      _objc_release(puVar5);
      func_0x00010c1ea3c0(puVar2);
      if (lVar1 != 0) {
        puVar5 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c09c980(lVar1);
        func_0x00010bff91e0(puVar5);
        func_0x00010c1bea20(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c09c9a0(lVar1);
        func_0x00010bff91e0(puVar5);
        func_0x00010c1beac0(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c29ff80(lVar1);
        func_0x00010c01e4e0(puVar5);
        func_0x00010c1eaac0(puVar4);
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126b92d8;
      _objc_opt_new(PTR_PTR_1126b92d8);
      lVar6 = param_2;
      func_0x00010c2a3d20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c119680(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225280(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar6);
      _objc_release(puVar5);
    }
    else {
      if (param_3 != 4) goto LAB_106bc5288;
      puVar4 = PTR_PTR_1126d1040;
      _objc_opt_new(PTR_PTR_1126d1040);
      puVar5 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010c29e500(param_2);
      dVar10 = (double)(ulong)(uint)(float)param_1;
      func_0x00010c0138c0(dVar10,puVar5);
      func_0x00010c222d20(puVar4);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar6 = param_2;
      func_0x00010c0e9a40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar10 = dVar10 * 1000.0;
      func_0x00010c01e4e0(puVar5);
      func_0x00010c1d5180(puVar4);
      _objc_release(puVar5);
      _objc_release(lVar6);
      if (lVar1 != 0) {
        puVar5 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c09c980(lVar1);
        func_0x00010bff91e0(puVar5);
        func_0x00010c1bea20(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c09c9a0(lVar1);
        func_0x00010bff91e0(puVar5);
        func_0x00010c1beac0(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c29ff80(lVar1);
        func_0x00010c0138c0((float)(dVar10 * 1000.0),puVar5);
        func_0x00010c223b00(puVar4);
        _objc_release(puVar5);
      }
      func_0x00010c168c80(puVar2);
    }
  }
  else {
    if (param_3 != 5) {
      if (param_3 != 6) goto LAB_106bc5288;
      goto LAB_106bc4e7c;
    }
    puVar4 = PTR_PTR_1126d1048;
    _objc_opt_new(PTR_PTR_1126d1048);
    puVar5 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar6 = param_2;
    func_0x00010c0e9a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c01e4e0(puVar5);
    func_0x00010c1d5180(puVar4);
    _objc_release(puVar5);
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c07c060(param_2);
    func_0x00010bff91e0(puVar5);
    func_0x00010c1e92e0(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c07c080(param_2);
    func_0x00010bff91e0(puVar5);
    func_0x00010c1e9300(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    lVar6 = param_2;
    func_0x00010bf67c20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67d80();
    func_0x00010bff91e0(puVar5);
    func_0x00010c1e92c0(puVar4);
    _objc_release(puVar5);
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar6 = param_2;
    func_0x00010bf67c20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf68260();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      unaff_x27 = param_2;
      func_0x00010bf67c20(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = unaff_x27;
      func_0x00010bf68260();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar5);
    func_0x00010c18ad80(puVar4);
    _objc_release(puVar5);
    if (lVar8 != 0) {
      _objc_release(lVar9);
      _objc_release(unaff_x27);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    func_0x00010c18a940(puVar2);
  }
  _objc_release(puVar4);
LAB_106bc5288:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bc52bc; end: 106bc52eb;  */

void FUN_106bc52bc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c245e80(param_2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bc52ec; end: 106bc6cef;  */

undefined *
FUN_106bc52ec(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,int param_8,undefined8 param_9,
             undefined8 param_10,undefined *param_11)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  float fVar18;
  undefined *puStack_320;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar3 = PTR_PTR_1126d0f50;
  _objc_opt_new();
  ppuVar16 = param_2;
  func_0x00010c242fe0();
  func_0x00010c25a8c0();
  func_0x00010c0c9600();
  if (1 < param_6 - 5U) {
    if (param_6 == 0) {
      bVar1 = false;
      goto LAB_106bc53f4;
    }
    if (param_6 != 0x18) {
      bVar1 = false;
      goto LAB_106bc53f4;
    }
  }
  bVar1 = true;
LAB_106bc53f4:
  if (param_11 == (undefined *)0x0) {
    puStack_320 = PTR_PTR_1126d1058;
    _objc_alloc();
    func_0x00010c01e600();
    _objc_retain();
    _objc_release(puStack_320);
  }
  else {
    _objc_retain(param_11);
    puStack_320 = param_11;
  }
  puVar4 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  ppuVar5 = param_2;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar14 = param_2;
    func_0x00010c2810a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar4);
  func_0x00010c1bbd60(puVar3);
  _objc_release(puVar4);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_release(ppuVar14);
  }
  ppuVar16 = (undefined **)(ulong)(ppuVar16 != (undefined **)0x0);
  _objc_release(ppuVar5);
  func_0x00010c1bcca0(puVar3);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c06c960(param_2);
  func_0x00010bff91e0(puVar4);
  func_0x00010c1af440(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c242fe0(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c2054c0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c25a8c0(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c20d640(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c0c9600(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c1c63a0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bf7f0a0(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c205520(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c2654c0(puStack_320);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c2109e0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c276de0(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c218a60(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c0c2f60(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c1c37e0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c123f40(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c179320(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c104760(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c1df160(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c276ea0(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c218ac0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c0c1f40(puStack_320);
  param_1 = param_1 * 1000.0;
  func_0x00010c01e4e0(puVar4);
  func_0x00010c1c30e0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c226de0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c226f40(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c226740(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c2bd1a0(param_2);
  func_0x00010bff91e0(puVar4);
  func_0x00010c2271a0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c2b8140(param_2);
  func_0x00010bff91e0(puVar4);
  func_0x00010c226c80(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bfed240(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c1bbea0(puVar3);
  _objc_release(puVar4);
  ppuVar5 = param_2;
  func_0x00010c0da7e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd800(puVar3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  puVar4 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  ppuVar5 = param_2;
  func_0x00010c095800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar14 = param_2;
    func_0x00010c095800(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar4);
  func_0x00010c1bc3e0(puVar3);
  _objc_release(puVar4);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_release(ppuVar14);
  }
  _objc_release(ppuVar5);
  ppuVar5 = param_2;
  func_0x00010c0cf060(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c87c0(puVar3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  puVar4 = PTR_PTR_1126d0f40;
  func_0x00010c096da0(param_2);
  func_0x00010bef5f00(puVar4);
  func_0x00010c208420(puVar3);
  puVar4 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  func_0x00010c08fa60();
  func_0x00010c04e820(puVar4);
  func_0x00010c1bcc00(puVar3);
  _objc_release(puVar4);
  if (!bVar1) {
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c06dd80(param_2);
    func_0x00010bff91e0(puVar4);
    func_0x00010c225e80(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126d1028;
  func_0x00010bf22560(PTR_PTR_1126d1028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar3);
  _objc_release(puVar4);
  FUN_106bc6cf0(param_6);
  func_0x00010c177420(puVar3);
  func_0x00010c2191c0(puVar3);
  if (param_8 != 0) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c243600(param_2);
    func_0x00010c01e4e0(puVar4);
    func_0x00010c2057c0(puVar3);
    _objc_release(puVar4);
    func_0x00010c119300(PTR_PTR_1126d1028);
    func_0x00010c1799c0(puVar3);
  }
  ppuVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c11ff80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar6;
  func_0x00010c08fa60();
  ppuVar17 = param_2;
  if (ppuVar14 == (undefined **)0x0) {
    func_0x00010c0da7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar14 = ppuVar17;
  }
  else {
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar17;
    func_0x00010c11ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(ppuVar14);
  }
  _objc_release(ppuVar17);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar14;
  func_0x00010c08fa60();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = ppuVar14;
    func_0x00010848b3f0(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195940(puVar3);
    _objc_release(ppuVar5);
  }
  ppuVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf93c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar6;
    func_0x00010848b3f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195b80(puVar3);
    _objc_release(ppuVar17);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  ppuVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar6;
    func_0x00010b704680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7380(puVar3);
    _objc_release(ppuVar17);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  ppuVar5 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c11fa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar6;
    func_0x00010848b3f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e72c0(puVar3);
    _objc_release(ppuVar17);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  ppuVar5 = param_2;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010bf93ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010848b3f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c2a8920(param_2);
  func_0x00010bff91e0(puVar4);
  func_0x00010c225ca0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d1028;
  ppuVar5 = param_2;
  func_0x00010bf0d600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c119020(puVar4);
  _objc_release(ppuVar5);
  func_0x00010c16b360(puVar3);
  ppuVar5 = param_2;
  func_0x00010bf0cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010bf0cf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    FUN_106bc4c94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b180(puVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  puVar4 = PTR_PTR_1126d1028;
  func_0x00010c280e20(param_2);
  func_0x00010c119320(puVar4);
  func_0x00010c21bb40(puVar3);
  ppuVar5 = param_2;
  func_0x00010bfb2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 != (undefined **)0x0) {
    puVar4 = PTR_PTR_1126d1060;
    _objc_opt_new(PTR_PTR_1126d1060);
    puVar7 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    ppuVar16 = param_2;
    func_0x00010bfb2440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c073160();
    func_0x00010bff91e0(puVar7);
    func_0x00010c163600(puVar4);
    _objc_release(puVar7);
    _objc_release(ppuVar16);
    puVar7 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    ppuVar5 = param_2;
    func_0x00010bfb2440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bfb2460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar6;
    func_0x00010c08fa60();
    ppuVar8 = param_2;
    if (ppuVar17 == (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      func_0x00010bfb2440(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar8;
      func_0x00010bfb2460();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar7);
    func_0x00010c163620(puVar4);
    _objc_release(puVar7);
    if (ppuVar17 != (undefined **)0x0) {
      _objc_release(ppuVar16);
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    puVar7 = PTR_PTR_1126d1068;
    ppuVar5 = param_2;
    func_0x00010bfb2440(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bfb2480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c118f80(puVar7);
    func_0x00010c163640(puVar4);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    func_0x00010c1635e0(puVar3);
    _objc_release(puVar4);
  }
  func_0x00010bfb1ee0(param_2);
  if (0.0 <= param_1) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bfb1ee0(param_2);
    param_1 = param_1 * 1000.0;
    func_0x00010c01e4e0(puVar4);
    func_0x00010c19d780(puVar3);
    _objc_release(puVar4);
  }
  func_0x00010bfb1180(param_2);
  if (0.0 <= param_1) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bfb1180(param_2);
    param_1 = param_1 * 1000.0;
    func_0x00010c01e4e0(puVar4);
    func_0x00010c19cf20(puVar3);
    _objc_release(puVar4);
  }
  fVar18 = SUB84(param_1,0);
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126d1050;
  _objc_opt_new(PTR_PTR_1126d1050);
  func_0x00010bf13560(param_2);
  if (0.0 < fVar18) {
    puVar7 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010bf13560(param_2);
    func_0x00010c0138c0(puVar7);
    func_0x00010c16dea0(puVar4);
    _objc_release(puVar7);
  }
  ppuVar5 = param_2;
  func_0x00010bfb6f00();
  if (0 < (long)ppuVar5) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bfb6f00(param_2);
    func_0x00010c01e4e0(puVar7);
    func_0x00010c19f440(puVar4);
    _objc_release(puVar7);
  }
  ppuVar5 = param_2;
  func_0x00010c08fe80();
  if (0 < (long)ppuVar5) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c08fe80(param_2);
    func_0x00010c01e4e0(puVar7);
    func_0x00010c1ba9e0(puVar4);
    _objc_release(puVar7);
  }
  _objc_release(param_2);
  func_0x00010c1bc520(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c07c360(param_2);
  func_0x00010bff91e0(puVar4);
  func_0x00010c1b3da0(puVar3);
  _objc_release(puVar4);
  func_0x00010c17d260(puVar3);
  func_0x00010bfeabc0();
  func_0x00010c1abfc0(puVar3);
  ppuVar5 = param_2;
  func_0x00010c0c2d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 != (undefined **)0x0) {
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    ppuVar5 = param_2;
    func_0x00010c0c2d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0138c0(puVar4);
    func_0x00010c1c3640(puVar3);
    _objc_release(puVar4);
    _objc_release(ppuVar5);
  }
  puVar4 = PTR_PTR_1126d1070;
  _objc_opt_new();
  ppuVar5 = param_2;
  func_0x00010bfd6b00();
  if ((int)ppuVar5 != 0) {
    puVar7 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010bfd6b00(param_2);
    func_0x00010bff91e0(puVar7);
    func_0x00010c226580(puVar4);
    _objc_release(puVar7);
  }
  ppuVar5 = param_2;
  func_0x00010bf5b4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf529e0();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010bf5b4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(ppuVar5);
    ppuVar6 = ppuVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar16 = &PTR_PTR_1126d1000;
      do {
        ppuVar17 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(ppuVar5);
          }
          uVar13 = *(undefined8 *)((long)ppuVar17 * 8);
          puVar9 = PTR_PTR_1126d1078;
          _objc_opt_new(PTR_PTR_1126d1078);
          func_0x00010c068940();
          func_0x00010c21a2a0(puVar9);
          func_0x00010c2762c0(uVar13);
          func_0x00010c2181e0(puVar9);
          func_0x00010befa120(puVar7);
          _objc_release(puVar9);
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar6 != ppuVar17);
        ppuVar6 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuVar6 != (undefined **)0x0);
    }
    _objc_release(ppuVar5);
    func_0x00010c185c20(puVar4);
    _objc_release(puVar7);
    _objc_release(ppuVar5);
  }
  ppuVar5 = param_2;
  func_0x00010c22d0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf529e0();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010c22d0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(ppuVar5);
    ppuVar6 = ppuVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar16 = &PTR_PTR_1126d1000;
      do {
        ppuVar17 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(ppuVar5);
          }
          uVar13 = *(undefined8 *)((long)ppuVar17 * 8);
          puVar9 = PTR_PTR_1126d1080;
          _objc_opt_new(PTR_PTR_1126d1080);
          func_0x00010c0fdc40();
          func_0x00010c1dcce0(puVar9);
          func_0x00010c2762c0(uVar13);
          func_0x00010c2181e0(puVar9);
          func_0x00010befa120(puVar7);
          _objc_release(puVar9);
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar6 != ppuVar17);
        ppuVar6 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuVar6 != (undefined **)0x0);
    }
    _objc_release(ppuVar5);
    func_0x00010c1ff980(puVar4);
    _objc_release(puVar7);
    _objc_release(ppuVar5);
  }
  func_0x00010c1df200(puVar3);
  ppuVar5 = param_2;
  func_0x00010c115fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf529e0();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar5 = param_2;
    func_0x00010c115fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (ppuVar5 != (undefined **)0x0) {
      ppuVar17 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(ppuVar6);
        }
        ppuVar15 = *(undefined ***)((long)ppuVar17 * 8);
        puVar9 = PTR_PTR_1126d0f58;
        _objc_opt_new(PTR_PTR_1126d0f58);
        puVar10 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c104260(ppuVar15);
        func_0x00010c01e4a0(puVar10);
        func_0x00010c1deee0(puVar9);
        _objc_release(puVar10);
        func_0x00010c115e60(ppuVar15);
        func_0x00010c1e3bc0(puVar9);
        puVar10 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        ppuVar8 = ppuVar15;
        func_0x00010c1160a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar16 = ppuVar15;
          func_0x00010c1160a0(ppuVar15);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c04e820(puVar10);
        func_0x00010c1d5de0(puVar9);
        _objc_release(puVar10);
        if (ppuVar11 != (undefined **)0x0) {
          _objc_release(ppuVar16);
        }
        _objc_release(ppuVar8);
        puVar10 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c2654c0(ppuVar15);
        func_0x00010c01e4a0(puVar10);
        func_0x00010c2109e0(puVar9);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c1162c0(ppuVar15);
        func_0x00010bff91e0(puVar10);
        func_0x00010c1e3d80(puVar9);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        ppuVar8 = ppuVar15;
        func_0x00010bfb1be0(ppuVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar10);
        func_0x00010c19d780(puVar9);
        _objc_release(puVar10);
        _objc_release(ppuVar8);
        puVar10 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c276b00(ppuVar15);
        func_0x00010c01e4e0(puVar10);
        func_0x00010c218ac0(puVar9);
        _objc_release(puVar10);
        func_0x00010c29fc20(ppuVar15);
        puVar10 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226de0(puVar9);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226f40(puVar9);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226dc0(puVar9);
        _objc_release(puVar10);
        func_0x00010befa120(puVar7);
        _objc_release(puVar9);
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar5 != ppuVar17);
      ppuVar5 = ppuVar6;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar6);
    puVar9 = PTR_PTR_1126d0f60;
    _objc_opt_new(PTR_PTR_1126d0f60);
    func_0x00010c1e3c40();
    func_0x00010c1bc8a0(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar7);
  }
  ppuVar16 = param_2;
  func_0x00010bf0cf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d0f68;
  _objc_opt_new(PTR_PTR_1126d0f68);
  ppuVar5 = param_2;
  func_0x00010c0fed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = param_2;
    func_0x00010c0fed20(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c272020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd300(puVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  puVar9 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  ppuVar5 = ppuVar16;
  func_0x00010c0e9a40(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01e4e0(puVar9);
  func_0x00010c16b340(puVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  ppuVar5 = ppuVar16;
  func_0x00010bfbbf00(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01e4e0(puVar9);
  func_0x00010c16b120(puVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  ppuVar5 = ppuVar16;
  func_0x00010bf84720(ppuVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01e4e0(puVar9);
  func_0x00010c16b0c0(puVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  ppuVar5 = param_2;
  func_0x00010c068860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01e4e0(puVar9);
  func_0x00010c217ba0(puVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  ppuVar5 = param_2;
  func_0x00010c068580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01e4e0(puVar9);
  func_0x00010c217b80(puVar7);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  func_0x00010c17f580(puVar3);
  _objc_retain(puVar3);
  _objc_release(puVar7);
  _objc_release(ppuVar16);
  _objc_release(puVar4);
  _objc_release(ppuVar14);
  _objc_release(puStack_320);
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  if (0x1c < (long)param_2) {
    if (param_2 == (undefined **)0x1d) {
      return (undefined *)0x4;
    }
    if (param_2 != (undefined **)0x24) {
      if (param_2 != (undefined **)0x1f) {
        return (undefined *)0x0;
      }
      return (undefined *)0x2;
    }
    return (undefined *)0x3;
  }
  if (param_2 != (undefined **)0x1) {
    if (param_2 == (undefined **)0x2) {
      return (undefined *)0x9;
    }
    if (param_2 != (undefined **)0xb) {
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x1;
}



/* Entry: 106bc6cf0; end: 106bc6d5b;  */

undefined8 FUN_106bc6cf0(long param_1)

{
  if (param_1 < 0x1d) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        return 9;
      }
      if (param_1 != 0xb) {
        return 0;
      }
    }
    return 1;
  }
  if (param_1 == 0x1d) {
    return 4;
  }
  if (param_1 != 0x24) {
    if (param_1 != 0x1f) {
      return 0;
    }
    return 2;
  }
  return 3;
}



/* Entry: 106bc6d5c; end: 106bc6dbf; -[SCUnlockableSwipeInteraction totalSwipedViewSec] */

undefined8 FUN_106bc6d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c264ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106bc6dc0; end: 106bc6e47; -[SCUnlockableSwipeInteraction maxSwipeTimeSec] */

/* WARNING: Possible PIC construction at 0x000106bc6dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106bc6dd8) */
/* WARNING: Removing unreachable block (ram,0x000106bc6ddc) */
/* WARNING: Removing unreachable block (ram,0x000106bc6de0) */
/* WARNING: Removing unreachable block (ram,0x000106bc6df4) */
/* WARNING: Removing unreachable block (ram,0x000106bc6de4) */

void FUN_106bc6dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maxSwipeTimeSecOverride_11260e5f8);
  return;
}



/* Entry: 106bc6e48; end: 106bc6e8b; -[SCUnlockableSwipeInteraction totalTimeSec] */

double FUN_106bc6e48(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c276de0();
  dVar1 = param_1;
  func_0x00010c123f40(param_2);
  param_1 = param_1 + dVar1;
  func_0x00010c104760(param_2);
  return param_1 + dVar1;
}



/* Entry: 106bc6e8c; end: 106bc6f43; -[SCUnlockableSwipeInteraction maxContinuousTimeSec] */

/* WARNING: Possible PIC construction at 0x000106bc6ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106bc6ea8) */
/* WARNING: Removing unreachable block (ram,0x000106bc6eac) */
/* WARNING: Removing unreachable block (ram,0x000106bc6ec8) */
/* WARNING: Removing unreachable block (ram,0x000106bc6f28) */
/* WARNING: Removing unreachable block (ram,0x000106bc6f2c) */
/* WARNING: Removing unreachable block (ram,0x000106bc6f30) */
/* WARNING: Removing unreachable block (ram,0x000106bc6eb0) */

void FUN_106bc6e8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maxContinuousTimeSecOverride_11260e1f0);
  return;
}



/* Entry: 106bc6f44; end: 106bc6f7f; -[SCUnlockableSwipeInteraction swipedOverCount] */

undefined8 FUN_106bc6f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c264ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bc6f80; end: 106bc6ff3; -[SCGrapheneImpressionBuilderDiffMetric2 init] */

undefined1 * FUN_106bc6f80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f57c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106bc6ff4; end: 106bc7167;  */

void FUN_106bc6ff4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110965850,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106bc7168;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109658a0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106bc72dc;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109658f0,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106bc7168; end: 106bc72db;  */

void FUN_106bc7168(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109658a0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106bc72dc;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109658f0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106bc72dc; end: 106bc7353;  */

void FUN_106bc72dc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109658f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106bc7354; end: 106bc73cb;  */

void FUN_106bc7354(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110965940,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106bc73cc; end: 106bc753f;  */

char * FUN_106bc73cc(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110965990,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106bc7540;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar5 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109659e0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_150;
  pcStack_128 = FUN_106bc7770;
  puStack_148 = PTR_PTR_1126f57c8;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 106bc7540; end: 106bc776f;  */

char * FUN_106bc7540(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109659e0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_106bc7770;
  puStack_c8 = PTR_PTR_1126f57c8;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 106bc7770; end: 106bc77e3; -[SCGrapheneUnlockableBuilderDiffMetric2 init] */

undefined1 * FUN_106bc7770(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f57c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106bc77e4; end: 106bc7957;  */

void FUN_106bc77e4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110965a80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106bc7958;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110965ad0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106bc7acc;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110965b20,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106bc7958; end: 106bc7acb;  */

void FUN_106bc7958(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110965ad0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106bc7acc;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110965b20,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106bc7acc; end: 106bc7b43;  */

void FUN_106bc7acc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110965b20,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106bc7b44; end: 106bc7bbb;  */

void FUN_106bc7b44(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110965b70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106bc7bbc; end: 106bc7d2f;  */

char * FUN_106bc7bbc(long param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar4 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar3);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar3 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110965bc0,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar4;
      param_4 = param_3;
    }
  }
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar6 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_f8,pcVar4);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar4 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_e0,pcVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110965c10,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  _objc_release(pcVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar3);
    __Unwind_Resume(pcVar4);
    if (pcRam00000001136c6cc8 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam00000001136c6cc8 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam00000001136c6cc8;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c6cc8,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam00000001136c6cc8 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam00000001136c6cc8;
  }
  return pcVar4;
}



/* Entry: 106bc7d30; end: 106bc7f5f;  */

char * FUN_106bc7d30(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar3);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110965c10,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(pcVar3);
    if (pcRam00000001136c6cc8 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam00000001136c6cc8 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam00000001136c6cc8;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c6cc8,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam00000001136c6cc8 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam00000001136c6cc8;
  }
  return pcVar3;
}



/* Entry: 106bc7f60; end: 106bc7fdb;  */

undefined * FUN_106bc7f60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6cc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e77e38,
                        &UNK_10dde7980,&UNK_10dde79bc,3,FUN_106bc7fdc,0);
    do {
      if (puRam00000001136c6cc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6cc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6cc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6cc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6cc8;
}



/* Entry: 106bc7fdc; end: 106bc7fe7;  */

bool FUN_106bc7fdc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106bc7fe8; end: 106bc804f; +[SCAdsClientLensTrackConfig descriptor] */

void FUN_106bc7fe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1f1b0,
                        &PTR____CFConstantStringClassReference_110e77e58,
                        &PTR_s_snapchat_ads_request_schema_1131760f8,&PTR_s_strategy_113176110,4,0xc
                        ,0x1c);
    puRam00000001136c6cd0 = puVar1;
  }
  return;
}



/* Entry: 106bc8050; end: 106bc8127; -[SCUnlockablesGtqRequestContext initWithRequestStartTime:referenceId:location:] */

undefined1 *
FUN_106bc8050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f57d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bc8128; end: 106bc814b; -[SCUnlockablesGtqRequestContext copyWithZone:] */

undefined8 FUN_106bc8128(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bc814c; end: 106bc81cb; -[SCUnlockablesGtqRequestContext hash] */

undefined8 * FUN_106bc814c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106bc8264:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106bc8270;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106bc8270;
          }
          goto LAB_106bc8264;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106bc8270:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106bc81cc; end: 106bc828b; -[SCUnlockablesGtqRequestContext isEqual:] */

long FUN_106bc81cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106bc8264:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bc8270;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106bc8270;
          }
          goto LAB_106bc8264;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106bc8270:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bc828c; end: 106bc8293; -[SCUnlockablesGtqRequestContext requestStartTime] */

undefined8 FUN_106bc828c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bc8294; end: 106bc829b; -[SCUnlockablesGtqRequestContext referenceId] */

undefined8 FUN_106bc8294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bc829c; end: 106bc82a3; -[SCUnlockablesGtqRequestContext location] */

undefined8 FUN_106bc829c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106bc82a4; end: 106bc82df; -[SCUnlockablesGtqRequestContext .cxx_destruct] */

void FUN_106bc82a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bc82e0; end: 106bc8347; +[SCULGtqServeRequest descriptor] */

void FUN_106bc82e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1f2a0,
                        &PTR____CFConstantStringClassReference_110e77e78,&PTR_DAT_113176190,
                        &PTR_DAT_1131761a8,0xd,0x48,0x1c);
    puRam00000001136c6cd8 = puVar1;
  }
  return;
}



/* Entry: 106bc8348; end: 106bc842b; +[SCULUserInfo descriptor] */

void FUN_106bc8348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b1f340,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_113176348,
                        &PTR_DAT_113176360,3,0x18,0x1c);
    puRam00000001136c6ce0 = puVar1;
  }
  return;
}



/* Entry: 106bc842c; end: 106bc8437;  */

bool FUN_106bc842c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106bc8438; end: 106bc84ab; -[SCGrapheneLensCarouselPerformanceMetric2 init] */

undefined1 * FUN_106bc8438(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f57d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106bc84ac; end: 106bc8793;  */

/* WARNING: Removing unreachable block (ram,0x000106bc875c) */
/* WARNING: Removing unreachable block (ram,0x000106bc8a88) */

char * FUN_106bc84ac(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  char acStack_70 [23];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar10 = param_4;
  pcVar13 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x26 = acStack_b8;
    unaff_x25 = acStack_70;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "\x01";
    param_5 = acStack_d8;
    pcVar5 = acStack_d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_c0 = param_5;
    func_0x00010007e5dc(&pcStack_c0);
    lVar15 = 0;
    pcVar10 = param_6;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcStack_118 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_118);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_106bc8794;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar5;
  pcVar11 = pcVar10;
  pcVar14 = pcVar13;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_120 = param_5;
  pcStack_110 = pcVar2;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  _objc_retain(pcVar13);
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(acStack_198,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_180,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar2 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_150,pcVar2);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar8 = "";
    unaff_x25 = acStack_1b8;
    pcVar9 = acStack_1b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_1a0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar15 = 0;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_139)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar13);
    pcStack_200 = acStack_198;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_200);
    _objc_release(pcVar13);
    _objc_release(pcVar10);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar3 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_106bc8ac8;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar12 = pcVar11;
    pcStack_1f8 = pcVar4;
    pcStack_1f0 = pcVar13;
    pcStack_1e8 = pcVar10;
    pcStack_1e0 = pcVar5;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    puVar16 = (undefined8 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar17 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_238,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_220,pcVar1);
      acStack_258[0] = '\0';
      acStack_258[1] = '\0';
      acStack_258[2] = '\0';
      acStack_258[3] = '\0';
      acStack_258[4] = '\0';
      acStack_258[5] = '\0';
      acStack_258[6] = '\0';
      acStack_258[7] = '\0';
      acStack_258[8] = '\0';
      acStack_258[9] = '\0';
      acStack_258[10] = '\0';
      acStack_258[0xb] = '\0';
      acStack_258[0xc] = '\0';
      acStack_258[0xd] = '\0';
      acStack_258[0xe] = '\0';
      acStack_258[0xf] = '\0';
      acStack_258[0x10] = '\0';
      acStack_258[0x11] = '\0';
      acStack_258[0x12] = '\0';
      acStack_258[0x13] = '\0';
      acStack_258[0x14] = '\0';
      acStack_258[0x15] = '\0';
      acStack_258[0x16] = '\0';
      acStack_258[0x17] = '\0';
      func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
      pcVar2 = acStack_258;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110965d50);
      pcStack_240 = acStack_258;
      func_0x00010007e5dc(&pcStack_240);
      lVar15 = 0;
      puVar16 = auStack_238;
      pcVar12 = pcVar11;
      do {
        if ((&cStack_209)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar9);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_221 < '\0') {
        __ZdlPv(auStack_238[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      ppcVar6 = &pcStack_2a0;
      pcStack_268 = FUN_106bc8cf8;
      puStack_290 = puVar16;
      pcStack_288 = pcVar1;
      pcStack_280 = pcVar9;
      pcStack_278 = pcVar8;
      pppuStack_270 = &ppuStack_1d0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar12);
      _objc_retain(pcVar14);
      puStack_298 = PTR_PTR_1126f57e0;
      pcStack_2a0 = pcVar5;
      _objc_msgSendSuper2(&pcStack_2a0,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        _objc_retain(pcVar2);
        uVar7 = *(undefined8 *)((long)ppcVar6 + 8);
        *(char **)((long)ppcVar6 + 8) = pcVar2;
        _objc_release(uVar7);
        _objc_retain(pcVar12);
        uVar7 = *(undefined8 *)((long)ppcVar6 + 0x10);
        *(char **)((long)ppcVar6 + 0x10) = pcVar12;
        _objc_release(uVar7);
        _objc_retain(pcVar14);
        uVar7 = *(undefined8 *)((long)ppcVar6 + 0x18);
        *(char **)((long)ppcVar6 + 0x18) = pcVar14;
        _objc_release(uVar7);
      }
      _objc_release(pcVar14);
      _objc_release(pcVar12);
      _objc_release(pcVar2);
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 106bc8794; end: 106bc8ac7;  */

/* WARNING: Removing unreachable block (ram,0x000106bc8a88) */

char * FUN_106bc8794(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x25;
  char *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_178 [24];
  char *pcStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar7 = acStack_d8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_c0 = unaff_x25;
    func_0x00010007e5dc(&pcStack_c0);
    lVar12 = 0;
    pcVar4 = param_6;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_106bc8ac8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar9 = pcVar4;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_158,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_140,pcVar2);
    acStack_178[0] = '\0';
    acStack_178[1] = '\0';
    acStack_178[2] = '\0';
    acStack_178[3] = '\0';
    acStack_178[4] = '\0';
    acStack_178[5] = '\0';
    acStack_178[6] = '\0';
    acStack_178[7] = '\0';
    acStack_178[8] = '\0';
    acStack_178[9] = '\0';
    acStack_178[10] = '\0';
    acStack_178[0xb] = '\0';
    acStack_178[0xc] = '\0';
    acStack_178[0xd] = '\0';
    acStack_178[0xe] = '\0';
    acStack_178[0xf] = '\0';
    acStack_178[0x10] = '\0';
    acStack_178[0x11] = '\0';
    acStack_178[0x12] = '\0';
    acStack_178[0x13] = '\0';
    acStack_178[0x14] = '\0';
    acStack_178[0x15] = '\0';
    acStack_178[0x16] = '\0';
    acStack_178[0x17] = '\0';
    func_0x00010007e1e8(acStack_178,auStack_158,&lStack_128,2);
    pcVar8 = acStack_178;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110965d50);
    pcStack_160 = acStack_178;
    func_0x00010007e5dc(&pcStack_160);
    lVar12 = 0;
    puVar11 = auStack_158;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_129)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_141 < '\0') {
      __ZdlPv(auStack_158[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    ppcVar5 = &pcStack_1c0;
    pcStack_188 = FUN_106bc8cf8;
    puStack_1b0 = puVar11;
    pcStack_1a8 = pcVar4;
    pcStack_1a0 = pcVar7;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_f0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    _objc_retain(pcVar10);
    puStack_1b8 = PTR_PTR_1126f57e0;
    pcStack_1c0 = pcVar2;
    _objc_msgSendSuper2(&pcStack_1c0,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(pcVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(char **)((long)ppcVar5 + 8) = pcVar8;
      _objc_release(uVar6);
      _objc_retain(pcVar9);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
      *(char **)((long)ppcVar5 + 0x10) = pcVar9;
      _objc_release(uVar6);
      _objc_retain(pcVar10);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 0x18);
      *(char **)((long)ppcVar5 + 0x18) = pcVar10;
      _objc_release(uVar6);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 106bc8ac8; end: 106bc8cf7;  */

char * FUN_106bc8ac8(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110965d50);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_106bc8cf8;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  puStack_d8 = PTR_PTR_1126f57e0;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar6;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 106bc8cf8; end: 106bc8dc3; -[SCCameraLensCarouselDeactivationCoordinator initWithLensCarouselActivator:currentPageTracker:lensCarouselStudySettings:] */

undefined1 *
FUN_106bc8cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f57e0;
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



/* Entry: 106bc8dc4; end: 106bc8dc7; -[SCCameraLensCarouselDeactivationCoordinator turnLensesOffAfterCameraDisappear] */

void FUN_106bc8dc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__turnLensesOffAfterPageDidChange_112591b48);
  return;
}



/* Entry: 106bc8dc8; end: 106bc8f8b; -[SCCameraLensCarouselDeactivationCoordinator _turnLensesOffAfterPageDidChange] */

void FUN_106bc8dc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5f7c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e0e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106bc8f8c;
    puStack_78 = &UNK_110872360;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar5 = 0;
    _dispatch_time(0,500000000);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106bc8fdc;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010058c530(uVar5,PTR___dispatch_main_q_11034be20,&puStack_b8);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106bc8f8c; end: 106bc901f;  */

void FUN_106bc8f8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6f9e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bc9020; end: 106bc908f; -[SCCameraLensCarouselDeactivationCoordinator _pageViewDidChange:] */

void FUN_106bc9020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bc9090;
  puStack_20 = &UNK_110872390;
  uStack_18 = param_1;
  func_0x00010c0c02c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110965e40,
                      &PTR___NSConcreteGlobalBlock_110965e60,&PTR___NSConcreteGlobalBlock_110965e80)
  ;
  return;
}



/* Entry: 106bc9090; end: 106bc90bf;  */

void FUN_106bc9090(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf83e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bc90c0; end: 106bc90cb;  */

void FUN_106bc90c0(void)

{
  return;
}



/* Entry: 106bc90cc; end: 106bc9107; -[SCCameraLensCarouselDeactivationCoordinator _deactivateLensCarouselManagerIfCreated] */

void FUN_106bc90cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf65b20(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bc9108; end: 106bc914f; -[SCCameraLensCarouselDeactivationCoordinator .cxx_destruct] */

void FUN_106bc9108(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bc9150; end: 106bc924b; -[SCMainCameraLensCarouselActivationWorkflow initWithLensCarouselManager:lensDelegate:startupCompleteScopeDelegate:appStartExperimentReader:lensCarouselStudySettings:] */

undefined1 *
FUN_106bc9150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f57e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bc924c; end: 106bc9403; -[SCMainCameraLensCarouselActivationWorkflow begin] */

void FUN_106bc924c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c077420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bdc4960(param_1);
  }
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar10);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c095ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar9 = lVar8;
  func_0x00010c25ff60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106bc9404; end: 106bc9413;  */

void FUN_106bc9404(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_any__11259ebf0,&PTR___NSConcreteGlobalBlock_110965ec0);
  return;
}



/* Entry: 106bc9414; end: 106bc942f;  */

uint FUN_106bc9414(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c079580(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106bc9430; end: 106bc9463;  */

void FUN_106bc9430(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddbd20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bc9464; end: 106bc95b7; -[SCMainCameraLensCarouselActivationWorkflow _activateCarousel] */

void FUN_106bc9464(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126b7010;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf92ae0();
  _objc_release(lVar1);
  if ((int)puVar2 == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c06c240();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef6e0();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c06c260(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106bc95b8; end: 106bc9623;  */

void FUN_106bc95b8(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef6e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bc9624; end: 106bc964f; -[SCMainCameraLensCarouselActivationWorkflow _carouselPopulatedWithContent] */

void FUN_106bc9624(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf325c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bc9650; end: 106bc969b; -[SCMainCameraLensCarouselActivationWorkflow .cxx_destruct] */

void FUN_106bc9650(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106bc969c; end: 106bc983b; -[SCLensBirthdayLensInjectionStrategyImpl initWithLensCarouselStudySettings:preferences:lensCarouselDataProvider:bundledLensProvider:lensInjecting:timeProvider:lensCarouselConfigProvider:] */

undefined1 *
FUN_106bc969c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f57f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bc983c; end: 106bc9b1b; -[SCLensBirthdayLensInjectionStrategyImpl injectIfNeededBrithdayLensWithReplyParemeters:pendingSelection:] */

void FUN_106bc983c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdd9b60();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  uVar6 = (uint)lVar1;
  if ((int)puVar4 == 0) {
    puVar5 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf24d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (uVar6 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c201820();
      _objc_release(uVar2);
    }
    else {
      func_0x00010be79980(param_1);
    }
  }
  else {
    puVar4 = PTR_PTR_1126ae6a8;
    func_0x00010c0fdac0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) {
      func_0x00010be3bf40(param_1);
    }
  }
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106bc9b1c;
  uStack_60 = 0x106bc9b2c;
  uStack_58 = 0;
  func_0x00010c0bfbc0(param_4);
  puVar5 = PTR_PTR_1126b00f8;
  puVar7 = param_4;
  if (((param_4 == (undefined *)0x0 && puVar4 != (undefined *)0x0) & uVar6) == 1) {
    puVar7 = puVar4;
    func_0x00010c094540(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159160(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar5;
  }
  uVar8 = (uint)puStack_78[5];
  puVar5 = puVar4;
  func_0x00010c094540(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(puVar5);
  if (((uVar6 | uVar8 ^ 0xffffffff) & 1) == 0) {
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106bc9b1c; end: 106bc9b33;  */

void FUN_106bc9b1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bc9b34; end: 106bc9ba3;  */

void FUN_106bc9b34(long param_1,undefined8 param_2)

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



/* Entry: 106bc9ba4; end: 106bc9baf;  */

void FUN_106bc9ba4(void)

{
  return;
}



/* Entry: 106bc9bb0; end: 106bc9c5f; -[SCLensBirthdayLensInjectionStrategyImpl _canInjectWithReplyParemeters:] */

uint FUN_106bc9bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06d2e0();
  if ((int)uVar1 != 0) {
    if (lRam00000001136c6cf8 != -1) {
      func_0x00010002a2fc(0x1136c6cf8,&PTR___NSConcreteGlobalBlock_110965f90);
    }
    if ((bRam00000001136c6cf0 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c1322c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdde6a0(param_1);
      uVar2 = (uint)param_1 ^ 1;
      _objc_release(uVar1);
      goto LAB_106bc9c2c;
    }
  }
  uVar2 = 0;
LAB_106bc9c2c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106bc9c60; end: 106bc9d0b; -[SCLensBirthdayLensInjectionStrategyImpl _injectBrithdayLens:] */

void FUN_106bc9c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010be3bfa0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(puVar1 + 0x20);
  _objc_retain(puVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c065220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  puVar8 = puVar7;
  func_0x00010be3bfa0(puVar1,param_2,puVar5,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b5b58;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  _objc_alloc(puVar1);
  func_0x00010c025e00();
  _objc_release(puVar8);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065080();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bc9d0c; end: 106bc9e27; -[SCLensBirthdayLensInjectionStrategyImpl _prependInjectedLensesWithBirthdayLens:] */

void FUN_106bc9d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c065220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  uVar5 = param_3;
  func_0x00010be3bfa0(param_1,param_2,puVar4,param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b5b58;
  _objc_retain(uVar5);
  _objc_retain(puVar3);
  _objc_alloc(puVar4);
  func_0x00010c025e00();
  _objc_release(uVar5);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065080();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106bc9e28; end: 106bc9ed7; -[SCLensBirthdayLensInjectionStrategyImpl _injectLenses:preselectedLens:] */

void FUN_106bc9e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c025e00();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065080();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bc9ed8; end: 106bc9f5b; -[SCLensBirthdayLensInjectionStrategyImpl _checkinIfNeededUserId:] */

ulong FUN_106bc9ed8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdde680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  if ((uVar3 & 1) == 0) {
    func_0x00010bdde6c0(param_1,param_2,puVar1,uVar2);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}


