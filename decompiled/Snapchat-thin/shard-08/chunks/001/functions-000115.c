/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dea5d8; end: 105dea753; -[SCPreviewGeoFilterLogger _upsertIfNecessary:withNewStage:] */

void FUN_105dea5d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_105dea738;
  func_0x00010bf52240(param_3,param_2,0);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c28cda0(param_3,param_2,(long)(int)lVar1);
  }
  lVar3 = *(long *)(param_1 + 0x50);
  lVar1 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 == 0) {
LAB_105dea6cc:
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010be556e0(param_1,param_2,lVar1,(long)(int)lVar3);
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c09d380();
    lVar5 = *(long *)(param_1 + 0x50);
    lVar3 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c09d380();
    _objc_release(lVar5);
    _objc_release(lVar3);
    if (lVar2 < lVar1) goto LAB_105dea6cc;
  }
  _objc_release(param_3);
LAB_105dea738:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dea754; end: 105dea757; -[SCPreviewGeoFilterLogger _logLoadingStageReady:withStage:] */

void FUN_105dea754(void)

{
  return;
}



/* Entry: 105dea758; end: 105dea7ab; -[SCPreviewGeoFilterLogger numReady] */

undefined * FUN_105dea758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c4c70;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be654a0(puVar2,param_2,uVar1,2);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 105dea7ac; end: 105dea7ff; -[SCPreviewGeoFilterLogger numSeen] */

undefined * FUN_105dea7ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c4c70;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be654a0(puVar2,param_2,uVar1,3);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 105dea800; end: 105dea84f; -[SCPreviewGeoFilterLogger logFinalGeofilterMissEvents] */

void FUN_105dea800(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x2b) == '\x01')) &&
     (lVar1 = param_1, func_0x00010bfc1780(), (int)lVar1 != 0)) {
    func_0x00010c0a7680(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105dea850; end: 105dea9db; -[SCPreviewGeoFilterLogger logGeofilterReadyMissEventsForSessionNumber:] */

long FUN_105dea850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lVar1 = param_1;
  func_0x00010bfc1780();
  if ((int)lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          lVar4 = *(long *)(lStack_128 + lVar6 * 8);
          lVar2 = lVar4;
          func_0x00010c09d380();
          if (lVar2 < 2) {
            func_0x00010bfadea0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_1;
            func_0x00010c264740(param_1);
            func_0x00010baf998c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a6800(param_1,param_2,lVar4,lVar2,
                                &PTR____CFConstantStringClassReference_110daafd8,param_3);
            _objc_release(lVar2);
            _objc_release(lVar4);
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release();
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    *(undefined2 *)(param_1 + 0x2a) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(lVar1 + 0x50);
  func_0x00010c0e00e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c07a980();
  _objc_release(lVar3);
  return lVar1;
}



/* Entry: 105dea9dc; end: 105deaa1b; -[SCPreviewGeoFilterLogger isFilterFromPrecache:] */

undefined8 FUN_105dea9dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07a980();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105deaa1c; end: 105deaa63; -[SCPreviewGeoFilterLogger updateVisibleGeofiltersCount:requestId:] */

void FUN_105deaa1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105deaa64; end: 105deab3b; -[SCPreviewGeoFilterLogger logViewingEndedMetrics] */

void FUN_105deaa64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR_PTR_1126c4c78;
    func_0x00010c29fd60(PTR_PTR_1126c4c78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfcdfa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc1660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105deab3c; end: 105deac43; +[SCPreviewGeoFilterLogger numberFiltersMissed:] */

undefined1 * FUN_105deab3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
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
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar3 = auStack_c8;
  lVar8 = param_3;
  func_0x00010bf52a60();
  if (lVar8 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_108 + lVar7 * 8);
        func_0x00010c09d380();
        if (lVar1 < 2) {
          puVar4 = puVar4 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar8 != lVar7);
      puVar3 = auStack_c8;
      lVar8 = param_3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puVar4 = (undefined1 *)puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_230,auStack_1e8,0x10);
    if (puVar4 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = (undefined1 *)0x0;
      lVar8 = *plStack_220;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_220 != lVar8) {
            _objc_enumerationMutation(puVar2);
          }
          lVar6 = *(long *)(lStack_228 + (long)puVar9 * 8);
          func_0x00010c09d380();
          if ((long)puVar3 <= lVar6) {
            puVar5 = puVar5 + 1;
          }
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = (undefined1 *)puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_230,auStack_1e8,0x10);
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      return (undefined1 *)puVar2;
    }
    return puVar5;
  }
  return puVar4;
}



/* Entry: 105deac44; end: 105dead57; +[SCPreviewGeoFilterLogger _numberFilters:withStage:] */

long FUN_105deac44(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_118 + lVar5 * 8);
        func_0x00010c09d380();
        if (param_4 <= lVar2) {
          lVar3 = lVar3 + 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return param_3;
  }
  return lVar3;
}



/* Entry: 105dead58; end: 105dead5b; -[SCPreviewGeoFilterLogger logFilterReadyMissForFilter:swipeDirection:session:sessionNum:] */

void FUN_105dead58(void)

{
  return;
}



/* Entry: 105dead5c; end: 105deae17; -[SCPreviewGeoFilterLogger logFilterMissIfAnyForFilterId:index:currentItemIndex:] */

void FUN_105dead5c(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_1, func_0x00010bfc1780(), (int)lVar1 != 0)) &&
     (((param_4 < param_5 && (lVar1 = param_1, func_0x00010c264740(), lVar1 == 0)) ||
      ((param_5 < param_4 && (lVar1 = param_1, func_0x00010c264740(), lVar1 == 1)))))) {
    lVar1 = param_1;
    func_0x00010c264740(param_1);
    func_0x00010baf998c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6800(param_1,param_2,param_3,lVar1,
                        &PTR____CFConstantStringClassReference_110daafd8,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105deae18; end: 105deae53; -[SCPreviewGeoFilterLogger geofilterMissLoggingValidSession] */

undefined8 FUN_105deae18(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c296720();
  if ((iVar1 == 0) || (func_0x00010beec3e0(), param_1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 105deae54; end: 105deae5b; -[SCPreviewGeoFilterLogger abandonedGeofilterMissLoggingForSnapSession] */

undefined1 FUN_105deae54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 105deae5c; end: 105deae63; -[SCPreviewGeoFilterLogger setAbandonedGeofilterMissLoggingForSnapSession:] */

void FUN_105deae5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105deae64; end: 105deae6b; -[SCPreviewGeoFilterLogger lastSessionOver] */

undefined1 FUN_105deae64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 105deae6c; end: 105deae73; -[SCPreviewGeoFilterLogger setLastSessionOver:] */

void FUN_105deae6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 105deae74; end: 105deae7b; -[SCPreviewGeoFilterLogger sessionCounter] */

undefined8 FUN_105deae74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105deae7c; end: 105deae83; -[SCPreviewGeoFilterLogger setSessionCounter:] */

void FUN_105deae7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 105deae84; end: 105deae8b; -[SCPreviewGeoFilterLogger swipeDirection] */

undefined8 FUN_105deae84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105deae8c; end: 105deae93; -[SCPreviewGeoFilterLogger setSwipeDirection:] */

void FUN_105deae8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105deae94; end: 105deae9b; -[SCPreviewGeoFilterLogger validSession] */

undefined1 FUN_105deae94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 105deae9c; end: 105deaea3; -[SCPreviewGeoFilterLogger setValidSession:] */

void FUN_105deae9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 105deaea4; end: 105deaeab; -[SCPreviewGeoFilterLogger unfilteredSwipedAway] */

undefined1 FUN_105deaea4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 105deaeac; end: 105deaeb3; -[SCPreviewGeoFilterLogger setUnfilteredSwipedAway:] */

void FUN_105deaeac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 105deaeb4; end: 105deaebb; -[SCPreviewGeoFilterLogger requestId] */

undefined8 FUN_105deaeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105deaebc; end: 105deaeeb; -[SCPreviewGeoFilterLogger setRequestId:] */

void FUN_105deaebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105deaeec; end: 105deaef3; -[SCPreviewGeoFilterLogger numSwipes] */

undefined8 FUN_105deaeec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105deaef4; end: 105deaefb; -[SCPreviewGeoFilterLogger loadingMetaDataMap] */

undefined8 FUN_105deaef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105deaefc; end: 105deaf03; -[SCPreviewGeoFilterLogger firstSwipeLocationAccuracy] */

undefined8 FUN_105deaefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105deaf04; end: 105deaf0b; -[SCPreviewGeoFilterLogger setFirstSwipeLocationAccuracy:] */

void FUN_105deaf04(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 105deaf0c; end: 105deaf13; -[SCPreviewGeoFilterLogger isCancelled] */

undefined1 FUN_105deaf0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



/* Entry: 105deaf14; end: 105deaf1b; -[SCPreviewGeoFilterLogger setIsCancelled:] */

void FUN_105deaf14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2c) = param_3;
  return;
}



/* Entry: 105deaf1c; end: 105deaf63; -[SCPreviewGeoFilterLogger .cxx_destruct] */

void FUN_105deaf1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105deaf64; end: 105deb08f; -[SCPreviewLatencyGrapheneLogger initWithGrapheneServices:] */

undefined1 * FUN_105deaf64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed230;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105deb090; end: 105deb0b3; -[SCPreviewLatencyGrapheneLogger previewBecameInteractive] */

void FUN_105deb090(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 105deb0b4; end: 105deb1a7; -[SCPreviewLatencyGrapheneLogger startTTIMeasurementForToolType:action:] */

void FUN_105deb0b4(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_5 = param_5 | param_4 << 3;
  _CACurrentMediaTime();
  func_0x00010c0df720(param_1 * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_3,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105deb1a8; end: 105deb1af; -[SCPreviewLatencyGrapheneLogger endTTIMeasurementForToolType:action:] */

void FUN_105deb1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endTTIMeasurementForToolType_ac_112560148,param_3,param_4,0);
  return;
}



/* Entry: 105deb1b0; end: 105deb1bf; -[SCPreviewLatencyGrapheneLogger endTTIMeasurementForToolType:action:success:] */

void FUN_105deb1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_5 == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be09eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endTTIMeasurementForToolType_ac_112560148,param_3,param_4,uVar1);
  return;
}



/* Entry: 105deb1c0; end: 105deb3b3; -[SCPreviewLatencyGrapheneLogger _endTTIMeasurementForToolType:action:logSuccess:] */

double FUN_105deb1c0(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                    long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  
  uVar8 = param_5 | param_4 << 3;
  _CACurrentMediaTime();
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar10 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar10 = param_1 * 1000.0 - dVar10;
  _objc_release(uVar9);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar9,param_3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010be246c0(param_2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdce480(param_2,param_3,lVar3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  if (param_6 == 1) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110db6ad8;
  }
  else {
    if (param_6 != 2) goto LAB_105deb334;
    ppuVar7 = &PTR____CFConstantStringClassReference_110db6af8;
  }
  func_0x00010c2ac460(lVar4,param_3,&PTR____CFConstantStringClassReference_110dab0d8,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
LAB_105deb334:
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(lVar3);
  return dVar10;
}



/* Entry: 105deb3b4; end: 105deb557; -[SCPreviewLatencyGrapheneLogger measureTFIForToolType:action:] */

double FUN_105deb3b4(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  
  uVar7 = param_5 | param_4 << 3;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar8,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar9 = param_1;
  _objc_release(uVar8);
  _objc_release(puVar1);
  _CACurrentMediaTime();
  param_1 = dVar9 * 1000.0 - param_1;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8,param_3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010be246c0(param_2,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bdce480(param_2,param_3,lVar3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfcdfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(lVar4);
  return param_1;
}



/* Entry: 105deb558; end: 105deb6f7; -[SCPreviewLatencyGrapheneLogger logEmptyTFIIfNecessaryWhenExitPreviewForToolType:action:] */

double FUN_105deb558(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = param_5 | param_4 << 3;
  lVar6 = *(long *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(puVar1);
    param_1 = 0.0;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(lVar6);
    _objc_release(puVar1);
    if (param_1 != 0.0) {
      return param_1;
    }
  }
  lVar6 = param_2;
  func_0x00010be246c0(param_2,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdce480(param_2,param_3,lVar6,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(lVar3);
  return param_1;
}



/* Entry: 105deb6f8; end: 105deb773; -[SCPreviewLatencyGrapheneLogger _grapheneMetricForToolType:interactionType:] */

void FUN_105deb6f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (param_3 < 0x11) {
    if ((1L << (param_3 & 0x3f) & 0x1f7efU) == 0) {
      if (param_3 == 4) {
        func_0x00010c0d2460(PTR_PTR_1126c3cc8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c29a9a0(PTR_PTR_1126c3cc8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be246a0(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105deb774; end: 105deb7c3; -[SCPreviewLatencyGrapheneLogger _grapheneMetricForPreviewToolWithInteractionType:] */

void FUN_105deb774(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c111fc0(PTR_PTR_1126c3cc8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x00010c111fe0(PTR_PTR_1126c3cc8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105deb7c4; end: 105deb883; -[SCPreviewLatencyGrapheneLogger _applyMetricDimensionsToMetric:forToolType:action:] */

void FUN_105deb7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_5 < 3) {
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a778,
                        (&PTR_PTR_1108e9bf8)[param_5]);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar2 = uVar1;
  if ((param_4 < 0x11) && ((0x1ffefU >> (ulong)((uint)param_4 & 0x1f) & 1) != 0)) {
    func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2a798,
                        (&PTR_PTR_1108e9c10)[param_4]);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105deb884; end: 105deb89b; -[SCPreviewLatencyGrapheneLogger _jackpotInfoIncludedMetric:] */

void FUN_105deb884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2ac470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_withDimension_value__112688b40,
             &PTR____CFConstantStringClassReference_110e2a998,
             &PTR____CFConstantStringClassReference_110db2d38);
  return;
}



/* Entry: 105deb89c; end: 105deb90f; -[SCPreviewLatencyGrapheneLogger storeJackpotResponseMillisToCurrentTimeFromCache:] */

void FUN_105deb89c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _CACurrentMediaTime();
  lVar1 = 0x30;
  if (param_4 == 0) {
    lVar1 = 0x38;
  }
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - *(double *)(param_2 + 8)) * 1000.0,
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105deb910; end: 105deb9ef; -[SCPreviewLatencyGrapheneLogger _logJackpotResponseLatencyInfoWithDurationMs:fromCache:] */

void FUN_105deb910(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010c0cf0a0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105deb9f0; end: 105debac7; -[SCPreviewLatencyGrapheneLogger logJackpotResponseLatencyInfo] */

/* WARNING: Possible PIC construction at 0x000105debab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105debab4) */

void FUN_105deb9f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010be54fe0(param_1);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010be54fe0(param_1);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105debac8; end: 105debb27; -[SCPreviewLatencyGrapheneLogger storeCarouselFinalizedTimeMillisToCurrentTime] */

void FUN_105debac8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 - *(double *)(param_2 + 8)) * 1000.0,
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105debb28; end: 105debc43; -[SCPreviewLatencyGrapheneLogger logCarouselFinalizedTimeInfo] */

void FUN_105debb28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar8 = 0;
    do {
      puVar2 = PTR_PTR_1126c3cc8;
      func_0x00010bf32c80(PTR_PTR_1126c3cc8);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010be46320(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfcdfa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c242680();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010befbfe0(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar1);
      uVar8 = uVar8 + 1;
      uVar7 = *(ulong *)(param_1 + 0x40);
      func_0x00010bf529e0();
    } while (uVar8 < uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105debc44; end: 105debc7f; -[SCPreviewLatencyGrapheneLogger setPreviewCarouselStartInitMillis] */

void FUN_105debc44(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x48) = dVar1 * 1000.0;
  }
  return;
}



/* Entry: 105debc80; end: 105debc87; -[SCPreviewLatencyGrapheneLogger previewCarouselStartInitMillis] */

undefined8 FUN_105debc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105debc88; end: 105debcf3; -[SCPreviewLatencyGrapheneLogger .cxx_destruct] */

void FUN_105debc88(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105debcf4; end: 105debd97; -[SCPreviewLoadLatencyLogger setupPreviewLoadLatencyLogger:snapSource:isImage:galleryMediaType:] */

void FUN_105debcf4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_2 + 0x18) = (long)(param_1 * 1000.0);
  *(undefined8 *)(param_2 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = 1;
  if (param_5 != 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = param_6;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105debd98; end: 105debe8f; -[SCPreviewLoadLatencyLogger initWithBlizzardUserServices:] */

undefined1 * FUN_105debd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105debe90; end: 105debf5f; -[SCPreviewLoadLatencyLogger logPreviewLoadLatencySplitPointPreviewFirstFramePlayed] */

void FUN_105debe90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105debef8;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 105debf60; end: 105dec02f; -[SCPreviewLoadLatencyLogger logPreviewLoadLatencySplitPointPreviewAnimationComplete] */

void FUN_105debf60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105debfc8;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 105dec030; end: 105dec0ff; -[SCPreviewLoadLatencyLogger _logBlizzardEvent] */

void FUN_105dec030(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c4c80;
  _objc_opt_new(PTR_PTR_1126c4c80);
  func_0x00010c19dc80();
  lVar2 = param_2;
  func_0x00010be22dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207ee0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010c1c5440(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  func_0x00010be1ffe0(param_2);
  func_0x00010c218520(puVar1,param_3,(long)param_1);
  func_0x00010c1a1ba0(puVar1,param_3,*(undefined8 *)(param_2 + 0x30));
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dec100; end: 105dec17f; -[SCPreviewLoadLatencyLogger _addSplitPointForKey:atTime:] */

void FUN_105dec100(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010c0df840(puVar3,param_3,(long)(param_1 * 1000.0) - lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105dec180; end: 105dec1ff; -[SCPreviewLoadLatencyLogger _getSplitsString] */

void FUN_105dec180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                      *(undefined8 *)(param_1 + 0x10),0,&lStack_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (lStack_28 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dec200; end: 105dec287; -[SCPreviewLoadLatencyLogger _getLatencyInMs] */

double FUN_105dec200(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e2a9d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e2a9b8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  if (lVar2 <= lVar1) {
    lVar2 = lVar1;
  }
  return (double)lVar2;
}



/* Entry: 105dec288; end: 105dec2cf; -[SCPreviewLoadLatencyLogger .cxx_destruct] */

void FUN_105dec288(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105dec2d0; end: 105dec397; -[SCPreviewLogger initWithGrapheneServices:] */

undefined1 * FUN_105dec2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dec398; end: 105dec3cb; -[SCPreviewLogger viewingStarted] */

void FUN_105dec398(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x18) = 1;
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  return;
}



/* Entry: 105dec3cc; end: 105dec40b; -[SCPreviewLogger viewingEnded] */

void FUN_105dec3cc(double param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_2 + 0x18) = 0;
    _CACurrentMediaTime();
    *(double *)(param_2 + 8) = *(double *)(param_2 + 8) + (param_1 - *(double *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 105dec40c; end: 105dec453; -[SCPreviewLogger viewingTime] */

double FUN_105dec40c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 8);
  dVar1 = 0.0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    _CACurrentMediaTime();
    dVar1 = dVar1 - *(double *)(param_1 + 0x10);
  }
  return dVar2 + dVar1;
}



/* Entry: 105dec454; end: 105dec543; -[SCPreviewLogger logDrawingMetricStrokeSize:isResized:] */

void FUN_105dec454(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_4 != 0) {
    *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740((float)(long)(param_1 + param_1) / 2.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_2 + 0x38);
  func_0x00010c0e00e0(lVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3c10,puVar1);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x38);
    func_0x00010c0e00e0(lVar3,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar4,param_3,lVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar4,puVar1);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dec544; end: 105dec76f; -[SCPreviewLogger updateDrawingMetricsInSnapCommonLoggingParams:] */

void FUN_105dec544(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  func_0x00010c2a99e0(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c086f00(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108e9c98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar3 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar9,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db2d78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
      uVar3 = uVar1;
      func_0x00010bf529e0();
      if (9 < uVar3) {
        uVar3 = 10;
      }
    } while (uVar8 < uVar3);
  }
  puVar5 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db97b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9a00(param_3,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                        *(undefined8 *)(param_1 + 0x40),0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c2acaa0(param_3,param_2,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dec770; end: 105dec77b;  */

void FUN_105dec770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 105dec77c; end: 105dec79f; -[SCPreviewLogger dependencyLoadingStarted] */

void FUN_105dec77c(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 105dec7a0; end: 105dec903; -[SCPreviewLogger logDependencyLoadingEnded:] */

void FUN_105dec7a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126c3cc8;
  func_0x00010c110aa0(PTR_PTR_1126c3cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105dec904; end: 105dec93f; -[SCPreviewLogger .cxx_destruct] */

void FUN_105dec904(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 105dec940; end: 105decdef; -[SCPreviewLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dec940(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  puVar1 = PTR_PTR_1126c4c88;
  _objc_alloc();
  lVar24 = (long)_DAT_112736d3c;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0188e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c4c90;
  _objc_alloc();
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0188e0(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c4c98;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112736d40;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112736d44;
  lVar6 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c039800(puVar4,param_2,lVar5,puVar1,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c4ca0;
  _objc_alloc();
  lVar2 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff8cc0(puVar7,param_2,lVar2);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c4c70;
  _objc_alloc();
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0188e0(puVar8,param_2,lVar2);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126c4ca8;
  _objc_alloc();
  lVar2 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff8c80(puVar9,param_2,lVar2);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126c4c48;
  _objc_alloc();
  lVar2 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff8c80(puVar10,param_2,lVar2);
  _objc_release(lVar2);
  puVar11 = PTR_PTR_1126c4cb0;
  _objc_alloc();
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0188e0(puVar11,param_2,lVar2);
  _objc_release(lVar2);
  puVar12 = PTR_PTR_1126c4cb8;
  _objc_alloc();
  lVar2 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112736d48;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112736d4c;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  FUN_105decdf0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c095e80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_105decdf0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c095cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  FUN_105decdf0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfe9b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112736d58;
    _objc_loadWeakRetained();
  }
  func_0x00010bff8ce0(puVar12,param_2,lVar2,lVar24,lVar6,lVar5,lVar14,lVar16,lVar18,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar24);
  _objc_release(lVar2);
  puVar19 = PTR_PTR_1126c4cc0;
  _objc_alloc();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar25);
  func_0x00010bff8ca0(puVar19,param_2,lVar25,puVar1);
  _objc_release(lVar25);
  puVar20 = PTR_PTR_1126c4cc8;
  _objc_alloc_init();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112736d50);
  puVar21 = PTR_PTR_1126c4cd0;
  _objc_alloc(PTR_PTR_1126c4cd0);
  func_0x00010c05c5e0();
  func_0x00010bf9d660(uVar22,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105decdf0; end: 105dece13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105decdf0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736d54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dece14; end: 105dece97; -[SCPreviewLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dece14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736d50,0);
  _objc_destroyWeak(param_1 + _DAT_112736d58);
  _objc_destroyWeak(param_1 + _DAT_112736d54);
  _objc_destroyWeak(param_1 + _DAT_112736d4c);
  _objc_destroyWeak(param_1 + _DAT_112736d48);
  _objc_destroyWeak(param_1 + _DAT_112736d3c);
  _objc_destroyWeak(param_1 + _DAT_112736d44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736d40);
  return;
}



/* Entry: 105dece98; end: 105deceeb; +[SCPreviewLoggingUtils directSegmentSourceFromSnapSource:] */

undefined8 FUN_105dece98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 8) {
      return 0;
    }
    if (param_3 != 0xb) {
      return 0xffffffffffffffff;
    }
  }
  else {
    if ((param_3 - 0xcU < 3) || (param_3 == 0x51)) {
      return 2;
    }
    if (param_3 != 0x4e) {
      return 0xffffffffffffffff;
    }
  }
  return 1;
}



/* Entry: 105deceec; end: 105decf27; -[SCPreviewPerformanceLogger setLayoutFinishedTimeMillisToCurrentTime] */

void FUN_105deceec(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x10);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x10) = dVar1 * 1000.0;
  }
  return;
}



/* Entry: 105decf28; end: 105decf63; -[SCPreviewPerformanceLogger setPlayerReadyTimeMillisToCurrentTime] */

void FUN_105decf28(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x18);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x18) = dVar1 * 1000.0;
  }
  return;
}



/* Entry: 105decf64; end: 105decf9f; -[SCPreviewPerformanceLogger setPreviewToolsLoadedMillisToCurrentTime] */

void FUN_105decf64(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x20);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x20) = dVar1 * 1000.0;
  }
  return;
}



/* Entry: 105decfa0; end: 105decfdb; -[SCPreviewPerformanceLogger setPreviewSessionStartTimeMillisToCurrentTime] */

void FUN_105decfa0(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 8);
  if (dVar1 == 0.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 8) = dVar1 * 1000.0;
  }
  return;
}



/* Entry: 105decfdc; end: 105decfe3; -[SCPreviewPerformanceLogger sessionStartTimeMillis] */

undefined8 FUN_105decfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105decfe4; end: 105decfeb; -[SCPreviewPerformanceLogger layoutFinishedTimeMillis] */

undefined8 FUN_105decfe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105decfec; end: 105decff3; -[SCPreviewPerformanceLogger playerReadyTimeMillis] */

undefined8 FUN_105decfec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105decff4; end: 105decffb; -[SCPreviewPerformanceLogger previewToolsLoadedMillis] */

undefined8 FUN_105decff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105decffc; end: 105ded0df; -[SCPreviewStickerPickerLogger initWithBlizzardServices:] */

undefined1 * FUN_105decffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ded0e0; end: 105ded5c7; -[SCPreviewStickerPickerLogger stickerPickerLoggingParametersWithMediaType:stickerTrackingCount:] */

void FUN_105ded0e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0xb8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aa18);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aa38);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aa58);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      (int)(*(double *)(param_1 + 0x68) * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aa78);
  _objc_release(puVar3);
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105ded5c8;
    puStack_60 = &UNK_1108e9cb8;
    puStack_58 = puVar3;
    _objc_retain();
    func_0x00010bf97ce0(uVar5,param_2,&puStack_78);
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aa98);
    _objc_release(puStack_58);
    _objc_release(puVar3);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110db93d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db93f8;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dad058);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aab8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0xa8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aad8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2aaf8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a80(param_1,param_2,1);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ab18);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a80(param_1,param_2,3);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ab38);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a80(param_1,param_2,2);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ab58);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a60(param_1,param_2,1);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ab78);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a60(param_1,param_2,3);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ab98);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bec2a60(param_1,param_2,2);
  func_0x00010c0df840(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2abb8);
  _objc_release(puVar3);
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x00010c1d0640(puVar2,param_2,*(long *)(param_1 + 0xc0),
                        &PTR____CFConstantStringClassReference_110dae878);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2abd8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2abf8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e2ac18);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ded5c8; end: 105ded6a7;  */

void FUN_105ded5c8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e11bf8;
  _objc_retain(param_3);
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dd1dd8;
  pppuVar4 = &ppuStack_58;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = param_2;
  uStack_40 = param_3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010befa120(uVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(pppuVar4);
  lVar2 = *(long *)(param_2 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x78));
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x78));
    _objc_release(uVar5);
  }
  _objc_release(pppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ded6a8; end: 105ded74b; -[SCPreviewStickerPickerLogger updateTappedInfoSticker:newSticker:] */

void FUN_105ded6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,uVar2,param_4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ded74c; end: 105dedb17; -[SCPreviewStickerPickerLogger logStickerAdded:isFromRecents:isFromSearch:isCreatedCustomSticker:isAutoGeneratedSticker:isFromCutout:isFromCaption:] */

void FUN_105ded74c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,char param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar2;
    _objc_release(uVar5);
    lVar1 = *(long *)(param_1 + 0x78);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2,param_2,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x50);
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar6);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,puVar4,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  if (param_5 != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  if (param_6 != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  }
  if (param_7 != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  }
  if (param_8 != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  }
  if (param_9 != '\0') {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6,param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dedb18; end: 105dedb8b; -[SCPreviewStickerPickerLogger listLoggingStringForSticker:] */

void FUN_105dedb18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    lVar2 = param_3;
    if (lVar1 == 1) {
      func_0x00010c2540c0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c22d380(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105dedb8c; end: 105dedb9b; -[SCPreviewStickerPickerLogger logStickerTracked:] */

void FUN_105dedb8c(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 105dedb9c; end: 105dede4b; -[SCPreviewStickerPickerLogger logStickerRemoved:isFromRecents:isCreatedCustomSticker:isFromCutout:snapSessionId:] */

void FUN_105dedb9c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar3,param_2,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,puVar3,param_3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x50);
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    uVar5 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0df840(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = param_3;
      func_0x00010c27dd80(param_3);
      func_0x00010c0df840(puVar3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
  if (param_5 != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  }
  if (param_6 != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  }
  func_0x00010be59f40(param_1,param_2,param_3,param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dede4c; end: 105dee077; -[SCPreviewStickerPickerLogger _logTrashCanDeleteForSticker:snapSessionId:] */

void FUN_105dede4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c4cd8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c205660();
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b420(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bac28;
  uVar2 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c113fe0(puVar3,param_2,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c4c60;
  _objc_opt_new(PTR_PTR_1126c4c60);
  func_0x00010c18b860();
  func_0x00010c206fa0(puVar5,param_2,5);
  puVar3 = PTR_PTR_1126bac28;
  uVar2 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010c113fe0(puVar3,param_2,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010916771c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20baa0(puVar5,param_2,uVar2);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c293fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dee078; end: 105dee73b; -[SCPreviewStickerPickerLogger updateStickerMetricsInSnapCommonLoggingParams:] */

void FUN_105dee078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  func_0x00010c2ba120(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,1);
  func_0x00010c2acda0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,3);
  func_0x00010c2a94e0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,6);
  func_0x00010c2afce0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,4);
  func_0x00010c2ab140(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,2);
  lVar2 = param_1;
  func_0x00010bec2a80(param_1,param_2,4);
  func_0x00010c2b9900(param_3,param_2,lVar2 + lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a60(param_1,param_2,1);
  func_0x00010c2acdc0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a60(param_1,param_2,3);
  func_0x00010c2a9500(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,7);
  func_0x00010c2aee80(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,10);
  func_0x00010c2aeca0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a60(param_1,param_2,2);
  func_0x00010c2b9920(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba160(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba280(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5c80(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5b40(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abb20(param_3,param_2,*(undefined8 *)(param_1 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba080(param_3,param_2,*(undefined8 *)(param_1 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a80(param_1,param_2,5);
  func_0x00010c2abba0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2a60(param_1,param_2,5);
  func_0x00010c2abbc0(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abb40(param_3,param_2,*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abb60(param_3,param_2,*(undefined8 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar13 = *(undefined8 *)(param_1 + 0x78);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105dee73c;
    puStack_c0 = &UNK_1108e9ce8;
    puStack_b8 = puVar3;
    puStack_b0 = puVar4;
    puStack_a8 = puVar6;
    puStack_a0 = puVar11;
    puStack_98 = puVar10;
    puStack_90 = puVar9;
    puStack_88 = puVar7;
    lStack_80 = param_1;
    puStack_78 = puVar5;
    puStack_70 = puVar8;
    _objc_retain();
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    _objc_retain(puVar6);
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    func_0x00010bf97ce0(uVar13,param_2,&puStack_d8);
    puVar12 = puVar3;
    func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2acde0(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar4;
    func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9520(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar5;
    func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9460(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9940(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar7;
    func_0x00010bf446e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd00(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar8;
    func_0x00010bf446e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab160(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar9;
    func_0x00010bf446e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeea0(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar10;
    func_0x00010bf446e0(puVar10,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aecc0(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar11;
    func_0x00010bf446e0(puVar11,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abb80(param_3,param_2,puVar12);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf51e00(uVar13);
    func_0x00010c2ba1e0(param_3,param_2,uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puStack_70);
    _objc_release(puStack_78);
    _objc_release(puStack_88);
    _objc_release(puStack_90);
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_release(puStack_b0);
    _objc_release(puStack_b8);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c4a08;
  _objc_opt_new(PTR_PTR_1126c4a08);
  func_0x00010c2ba140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba180(param_3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dee73c; end: 105dee8f3;  */

void FUN_105dee73c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar6 = param_2;
  func_0x00010c27dd80();
  lVar5 = 0;
  uVar4 = lVar6 - 1;
  if ((uVar4 < 10) && ((0x37fU >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
    lVar5 = *(long *)(param_1 + *(long *)(&UNK_10ddd0b90 + uVar4 * 8));
    _objc_retain(lVar5);
  }
  lVar6 = param_2;
  func_0x00010c27dd80();
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c09a200(lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 4) {
    lVar6 = param_2;
    func_0x00010c27dd80();
    if (lVar6 == 3) {
      lVar6 = *(long *)(param_1 + 0x60);
      _objc_retain(lVar6);
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010c09a200(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = *(long *)(param_1 + 0x68);
      _objc_retain(lVar6);
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    if ((lVar6 != 0) && (lVar7 = param_3, func_0x00010c067fc0(), 0 < lVar7)) {
      lVar7 = 0;
      do {
        func_0x00010befa120(lVar6);
        func_0x00010befa120(lVar5);
        lVar7 = lVar7 + 1;
        lVar3 = param_3;
        func_0x00010c067fc0();
      } while (lVar7 < lVar3);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar1 = lVar6;
  }
  else if ((lVar5 != 0) && (lVar6 = param_3, func_0x00010c067fc0(), 0 < lVar6)) {
    lVar6 = 0;
    do {
      func_0x00010befa120(lVar5);
      lVar6 = lVar6 + 1;
      lVar2 = param_3;
      func_0x00010c067fc0();
    } while (lVar6 < lVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dee8f4; end: 105dee963; -[SCPreviewStickerPickerLogger _stickerCountOfType:] */

undefined8 FUN_105dee8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 105dee964; end: 105dee9d3; -[SCPreviewStickerPickerLogger _stickerCountFromRecentsOfType:] */

undefined8 FUN_105dee964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 105dee9d4; end: 105deea03; -[SCPreviewStickerPickerLogger openedStickerPicker] */

void FUN_105dee9d4(undefined8 param_1,long param_2)

{
  *(long *)(param_2 + 0xb8) = *(long *)(param_2 + 0xb8) + 1;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}


