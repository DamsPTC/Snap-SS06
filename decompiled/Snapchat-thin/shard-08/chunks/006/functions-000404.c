/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106334e94; end: 10633505f; -[SCOperaViewController _guessLayerTypeWhenBaseLayerTypeIsMissing:] */

undefined8 FUN_106334e94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c4220();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0c4220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0830a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar7 = 6;
      goto LAB_106334ff4;
    }
  }
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c98c0;
  _objc_opt_class(PTR_PTR_1126c98c0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
LAB_106334f84:
    puVar4 = PTR_PTR_1126b2340;
    uVar2 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083240();
    puVar5 = PTR_PTR_1126b2340;
    if (((ulong)puVar4 & 1) != 0) {
LAB_106334fe0:
      _objc_release(uVar2);
      goto LAB_106334fe8;
    }
    uVar3 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074260();
    puVar4 = PTR_PTR_1126b2340;
    if ((int)puVar5 != 0) {
      _objc_release(uVar3);
      goto LAB_106334fe0;
    }
    uVar6 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cc40();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (((ulong)puVar4 & 1) != 0) goto LAB_106334fe8;
    uVar7 = 0;
  }
  else {
    puVar4 = PTR_PTR_1126c9d58;
    func_0x00010c0830c0();
    if (((ulong)puVar4 & 1) == 0) goto LAB_106334f84;
LAB_106334fe8:
    uVar7 = 6;
  }
  _objc_release(uVar1);
LAB_106334ff4:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106335060; end: 10633509b; -[SCOperaViewController _viewModelForRelativePositionOrCurrentViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106335060(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010bf60c20(*(undefined8 *)(param_1 + _DAT_112745b8c));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bee9960();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10633509c; end: 10633513f; -[SCOperaViewController _initPlayerPreloadConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633509c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29ad00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c9d60;
    _objc_alloc();
    func_0x00010bfefa40();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112745c54);
    *(undefined **)(param_1 + _DAT_112745c54) = puVar4;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106335140; end: 10633522b; -[SCOperaViewController _addDeallocMarkerViewForUITests] */

void FUN_106335140(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001136c3828 != -1) {
    func_0x00010002a2fc(0x1136c3828,&PTR___NSConcreteGlobalBlock_11091ca38);
  }
  if ((bRam00000001136c3810 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(0x4049000000000000,0x4049000000000000,0x3ff0000000000000,0x3ff0000000000000)
    ;
    func_0x00010c160fc0();
    func_0x00010c21e900(puVar1);
    func_0x00010c29d0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001008cd514();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010befbb60(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10633522c; end: 10633523b; -[SCOperaViewController lastInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633522c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745c44);
}



/* Entry: 10633523c; end: 10633524b; -[SCOperaViewController operaDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633523c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b58);
}



/* Entry: 10633524c; end: 10633525b; -[SCOperaViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633524c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b68);
}



/* Entry: 10633525c; end: 10633526b; -[SCOperaViewController disableSwipeDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10633525c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745b50);
}



/* Entry: 10633526c; end: 10633527b; -[SCOperaViewController setDisableSwipeDownToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633526c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745b50) = param_3;
  return;
}



/* Entry: 10633527c; end: 10633528b; -[SCOperaViewController operaSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633527c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b70);
}



/* Entry: 10633528c; end: 10633529b; -[SCOperaViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633528c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b5c);
}



/* Entry: 10633529c; end: 1063352ab; -[SCOperaViewController eventPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10633529c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b88);
}



/* Entry: 1063352ac; end: 1063352bb; -[SCOperaViewController shouldResizeWhenTransitionedToSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1063352ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745b54);
}



/* Entry: 1063352bc; end: 1063352cb; -[SCOperaViewController setShouldResizeWhenTransitionedToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063352bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745b54) = param_3;
  return;
}



/* Entry: 1063352cc; end: 10633564f; -[SCOperaViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063352cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745b88,0);
  _objc_storeStrong(param_1 + _DAT_112745b5c,0);
  _objc_storeStrong(param_1 + _DAT_112745b70,0);
  _objc_storeStrong(param_1 + _DAT_112745b68,0);
  _objc_storeStrong(param_1 + _DAT_112745b58,0);
  _objc_storeStrong(param_1 + _DAT_112745c44,0);
  _objc_storeStrong(param_1 + _DAT_112745c80,0);
  _objc_storeStrong(param_1 + _DAT_112745c40,0);
  _objc_storeStrong(param_1 + _DAT_112745c70,0);
  _objc_storeStrong(param_1 + _DAT_112745bfc,0);
  _objc_storeStrong(param_1 + _DAT_112745b64,0);
  _objc_storeStrong(param_1 + _DAT_112745c18,0);
  _objc_storeStrong(param_1 + _DAT_112745b60,0);
  _objc_storeStrong(param_1 + _DAT_112745c54,0);
  _objc_storeStrong(param_1 + _DAT_112745b74,0);
  _objc_storeStrong(param_1 + _DAT_112745b98,0);
  _objc_storeStrong(param_1 + _DAT_112745bf8,0);
  _objc_storeStrong(param_1 + _DAT_112745b90,0);
  _objc_storeStrong(param_1 + _DAT_112745c5c,0);
  _objc_storeStrong(param_1 + _DAT_112745b78,0);
  _objc_storeStrong(param_1 + _DAT_112745b94,0);
  _objc_storeStrong(param_1 + _DAT_112745b7c,0);
  _objc_storeStrong(param_1 + _DAT_112745bf4,0);
  _objc_storeStrong(param_1 + _DAT_112745c84,0);
  _objc_storeStrong(param_1 + _DAT_112745c68,0);
  _objc_storeStrong(param_1 + _DAT_112745c00,0);
  _objc_storeStrong(param_1 + _DAT_112745bf0,0);
  _objc_storeStrong(param_1 + _DAT_112745be8,0);
  _objc_storeStrong(param_1 + _DAT_112745be0,0);
  _objc_storeStrong(param_1 + _DAT_112745bdc,0);
  _objc_storeStrong(param_1 + _DAT_112745bec,0);
  _objc_storeStrong(param_1 + _DAT_112745c60,0);
  _objc_storeStrong(param_1 + _DAT_112745c34,0);
  _objc_storeStrong(param_1 + _DAT_112745bc8,0);
  _objc_storeStrong(param_1 + _DAT_112745b8c,0);
  _objc_storeStrong(param_1 + _DAT_112745bd8,0);
  _objc_storeStrong(param_1 + _DAT_112745bd4,0);
  _objc_storeStrong(param_1 + _DAT_112745bd0,0);
  _objc_storeStrong(param_1 + _DAT_112745bcc,0);
  _objc_storeStrong(param_1 + _DAT_112745b84,0);
  _objc_storeStrong(param_1 + _DAT_112745b80,0);
  _objc_storeStrong(param_1 + _DAT_112745bc4,0);
  _objc_storeStrong(param_1 + _DAT_112745ba0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745b9c,0);
  return;
}



/* Entry: 106335650; end: 106335653; -[SCOperaViewController shakeToReportSummarySnapshot] */

void FUN_106335650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shakeToReportSummaryInfo_11258a038);
  return;
}



/* Entry: 106335654; end: 106335657; -[SCOperaViewController shakeToReportOperaSessionId] */

void FUN_106335654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaSessionId_112618710);
  return;
}



/* Entry: 106335658; end: 10633577f; -[SCOperaViewController _captureShakeToReportSummaryInfo] */

void FUN_106335658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010bdf6e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9d78;
  _objc_alloc(PTR_PTR_1126c9d78);
  uVar3 = uVar1;
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d6c60();
  uVar5 = uVar1;
  func_0x00010c0f0be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c13be60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c08c660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf5fa20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ebc0(puVar2,param_2,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bea76a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106335780; end: 10633578f; -[SCOperaViewController _setShakeToReportSummaryInfo:] */

void FUN_106335780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,PTR_LOOP_11314bdb0,param_3,1);
  return;
}



/* Entry: 106335790; end: 10633579b; -[SCOperaViewController _shakeToReportSummaryInfo] */

void FUN_106335790(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_LOOP_11314bdb0);
  return;
}



/* Entry: 10633579c; end: 10633585b; -[SCOperaPageActionBarContentView initWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10633579c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0ed8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112745c90;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10633585c; end: 106335987; -[SCOperaPageActionBarContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633585c(long param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
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
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_1126f0ed8;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(&lStack_e8,PTR_s_layoutSubviews_112600e60);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar2 = *(undefined1 **)(param_1 + _DAT_112745c94);
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar5 = *plStack_120;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
        func_0x00010bf20c00(param_1);
        func_0x00010c19f0e0(uVar4);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_160;
  pcStack_138 = FUN_106335988;
  puStack_158 = PTR_PTR_1126f0ed8;
  puStack_160 = puVar3;
  puStack_150 = puVar2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)puVar3) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar3 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106335988; end: 1063359fb; -[SCOperaPageActionBarContentView hitTest:withEvent:] */

void FUN_106335988(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f0ed8;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063359fc; end: 106335b2b; -[SCOperaPageActionBarContentView updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063359fc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar7 = (long)_DAT_112745c90;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  *(long *)(param_5 + lVar7) = param_7;
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar6 = *(long *)(param_5 + _DAT_112745c94);
  _objc_retain(lVar6);
  lVar7 = lVar6;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c28c620(*(undefined8 *)(lStack_108 + lVar9 * 8),param_6,param_7);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar6;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lVar7 = (long)_DAT_112745c94;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_6,
                      *(undefined8 *)(param_7 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_7 + lVar7);
  *(undefined1 **)(param_7 + lVar7) = puVar3;
  _objc_release(uVar1);
  uVar11 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf52a60(puVar5,param_6,&uStack_240,auStack_1f8,0x10);
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_230;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(puVar5);
        }
        uVar1 = *(undefined8 *)(lStack_238 + (long)puVar10 * 8);
        puVar4 = puVar2;
        func_0x00010bf4b900(puVar2,param_6,uVar1);
        if ((int)puVar4 == 0) {
          func_0x00010befbb60(param_7,param_6,uVar1);
          func_0x00010bf20c00(param_7);
          func_0x00010be98720(param_7,param_6,uVar1);
          func_0x00010c28c620(uVar1,param_6,*(undefined8 *)(param_7 + _DAT_112745c90));
        }
        else {
          func_0x00010c12d360(puVar2,param_6,uVar1);
        }
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bf52a60(puVar5,param_6,&uStack_240,auStack_1f8,0x10);
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  puVar4 = PTR_s_removeFromSuperview_112628c78;
  func_0x00010c0b7520(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_2b0,puVar4);
  }
  if (((((uStack_2b0 & 0x7fffffffffffffff) < 0x7ff0000000000000) &&
       ((uStack_2a8 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_2a0 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
     ((((uStack_298 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((uStack_290 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_288 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((uVar11 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_3 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       (param_4 & 0x7fffffffffffffff) < 0x7ff0000000000000))))))) {
    func_0x00010c19f0e0(uVar11,param_2,param_3,param_4,puVar4);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 106335b2c; end: 106335ce3; -[SCOperaPageActionBarContentView updateContentViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106335b2c(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
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
  _objc_retain(param_7);
  lVar5 = (long)_DAT_112745c94;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_6,
                      *(undefined8 *)(param_5 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(long *)(param_5 + lVar5) = lVar2;
  _objc_release(uVar4);
  uVar7 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_7);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        puVar3 = puVar1;
        func_0x00010bf4b900(puVar1,param_6,uVar4);
        if ((int)puVar3 == 0) {
          func_0x00010befbb60(param_5,param_6,uVar4);
          func_0x00010bf20c00(param_5);
          func_0x00010be98720(param_5,param_6,uVar4);
          func_0x00010c28c620(uVar4,param_6,*(undefined8 *)(param_5 + _DAT_112745c90));
        }
        else {
          func_0x00010c12d360(puVar1,param_6,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  puVar3 = PTR_s_removeFromSuperview_112628c78;
  func_0x00010c0b7520(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_1a0,puVar3);
  }
  if (((((uStack_1a0 & 0x7fffffffffffffff) < 0x7ff0000000000000) &&
       ((uStack_198 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_190 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
     ((((uStack_188 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((uStack_180 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_178 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((uVar7 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_3 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       (param_4 & 0x7fffffffffffffff) < 0x7ff0000000000000))))))) {
    func_0x00010c19f0e0(uVar7,param_2,param_3,param_4,puVar3);
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 106335ce4; end: 106335e3f; -[SCOperaPageActionBarContentView _safelySetFrame:onView:] */

void FUN_106335ce4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_7);
  if (param_7 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_70,param_7);
  }
  if (((((uStack_70 & 0x7fffffffffffffff) < 0x7ff0000000000000) &&
       ((uStack_68 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_60 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
     ((((uStack_58 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((uStack_50 & 0x7fffffffffffffff) < 0x7ff0000000000000)) &&
      ((uStack_48 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       ((param_3 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
       (param_4 & 0x7fffffffffffffff) < 0x7ff0000000000000))))))) {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_7);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106335e40; end: 106335e6f; -[SCOperaPageActionBarContentView views] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106335e40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745c94);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106335e70; end: 106335f9b; -[SCOperaPageActionBarContentView isFixedDuringPageTransitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106335e70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_112745c94);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar3 != 0) {
    do {
      puVar2 = PTR_s_isFixedDuringPageTransitions_1125fa660;
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar2);
        if (((uVar4 & 1) != 0) && (func_0x00010c073140(), (uVar8 & 1) != 0)) {
          uVar7 = 1;
          goto LAB_106335f58;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar7 = 0;
  }
LAB_106335f58:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    return *(undefined8 *)(lVar6 + _DAT_112745c90);
  }
  return uVar7;
}



/* Entry: 106335f9c; end: 106335fab; -[SCOperaPageActionBarContentView configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106335f9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745c90);
}



/* Entry: 106335fac; end: 106335fbb; -[SCOperaPageActionBarContentView shouldHideActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106335fac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745c8c);
}



/* Entry: 106335fbc; end: 106335fcb; -[SCOperaPageActionBarContentView setShouldHideActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106335fbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745c8c) = param_3;
  return;
}



/* Entry: 106335fcc; end: 10633600b; -[SCOperaPageActionBarContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106335fcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745c90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745c94,0);
  return;
}



/* Entry: 10633600c; end: 1063360cb; -[SCOperaPageBackdropView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10633600c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0ee0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745c98);
    *(undefined **)((long)puVar1 + (long)_DAT_112745c98) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010bead1a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1063360cc; end: 106336123; -[SCOperaPageBackdropView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063360cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ee0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112745c9c));
  return;
}



/* Entry: 106336124; end: 1063361a7; -[SCOperaPageBackdropView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106336124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c074c20();
  puStack_38 = PTR_PTR_1126f0ee0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setHidden__1126479f8,param_3);
  uVar2 = param_1;
  func_0x00010c074c20();
  if (((int)uVar2 == 0) && ((int)uVar1 != 0)) {
    func_0x00010bea2480(param_1);
  }
  return;
}



/* Entry: 1063361a8; end: 10633621b; -[SCOperaPageBackdropView _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063361a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112745c9c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10633621c; end: 1063362c3; -[SCOperaPageBackdropView setBackdropImage:withBackdropConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10633621c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112745ca0;
  if (*(long *)(param_1 + lVar3) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_112745ca4;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_4;
    _objc_release(uVar1);
    uVar2 = param_1;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      func_0x00010bea2480(param_1,param_2,param_3,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063362c4; end: 1063363e7; -[SCOperaPageBackdropView _setBlurredBackgroundWithImage:backdropConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063362c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf20c00(param_5);
  _objc_initWeak(auStack_48,param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112745c98);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_7);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1063363e8; end: 106336573;  */

void FUN_1063363e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    _objc_autoreleasePoolPush();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ef660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e740(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf1e7c0(*(undefined8 *)(param_1 + 0x28));
    uVar3 = uVar5;
    func_0x00010bf1e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_autoreleasePoolPop(lVar2);
    puVar4 = auStack_48;
    _objc_initWeak(puVar4,lVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106336574; end: 1063365cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106336574(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_112745ca0) == *(long *)(param_1 + 0x20))) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112745c9c),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063365d0; end: 1063366cb; -[SCOperaPageBackdropView setVisible:animated:completion:] */

void FUN_1063365d0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  if (param_3 != 0) {
    func_0x00010c1a7f60(param_1,param_2,0);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = 0x3fd0000000000000;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1063366cc;
  puStack_68 = &UNK_110845ce0;
  uStack_88 = (undefined1)param_3;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1063366e8;
  puStack_a0 = &UNK_11086d2d8;
  uStack_98 = param_1;
  uStack_90 = param_5;
  uStack_60 = param_1;
  uStack_58 = uStack_88;
  _objc_retain(param_5);
  func_0x00010bf03420(uVar2,puVar1,param_2,&puStack_80,&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(param_5);
  return;
}



/* Entry: 1063366cc; end: 1063366e7;  */

void FUN_1063366cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1063366e8; end: 10633672f;  */

void FUN_1063366e8(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106336720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106336730; end: 10633673f; -[SCOperaPageBackdropView backdropImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106336730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745ca0);
}



/* Entry: 106336740; end: 10633674f; -[SCOperaPageBackdropView backdropConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106336740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745ca4);
}



/* Entry: 106336750; end: 1063367af; -[SCOperaPageBackdropView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106336750(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745ca4,0);
  _objc_storeStrong(param_1 + _DAT_112745ca0,0);
  _objc_storeStrong(param_1 + _DAT_112745c98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745c9c,0);
  return;
}



/* Entry: 1063367b0; end: 106336807; -[SCOperaPageGestureRecognizers initWithShortPressDuration:terminalLongPressForwardingEnabled:] */

void FUN_1063367b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0ee8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined1 *)((long)puVar1 + 0x11) = param_4;
  }
  return;
}



/* Entry: 106336808; end: 1063369bf; -[SCOperaPageGestureRecognizers activateGestureRecognizers:inView:maximumIntervalBetweenSuccessiveTaps:] */

void FUN_106336808(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bf4b900(param_4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c58d8);
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      *(undefined **)(param_2 + 0x28) = puVar1;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x28),param_3,param_2);
      func_0x00010c1c8340(0x3fc999999999999a,*(undefined8 *)(param_2 + 0x28));
      func_0x00010c178280(*(undefined8 *)(param_2 + 0x28),param_3,0);
      lVar2 = *(long *)(param_2 + 0x28);
    }
    func_0x00010bef9040(param_5,param_3,lVar2);
  }
  uVar3 = param_4;
  func_0x00010bf4b900(param_4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c58f0);
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      *(undefined **)(param_2 + 0x20) = puVar1;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x20),param_3,param_2);
      func_0x00010c1c8340(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x20));
      lVar2 = *(long *)(param_2 + 0x20);
    }
    func_0x00010bef9040(param_5,param_3,lVar2);
  }
  uVar3 = param_4;
  func_0x00010bf4b900(param_4,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5908);
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(param_2 + 0x30);
    if (lVar2 == 0) {
      puVar1 = PTR_PTR_1126c2bb8;
      _objc_alloc();
      func_0x00010c050940(param_1);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined **)(param_2 + 0x30) = puVar1;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x30),param_3,param_2);
      func_0x00010c1d0120(*(undefined8 *)(param_2 + 0x30),param_3,2);
      func_0x00010c178280(*(undefined8 *)(param_2 + 0x30),param_3,0);
      lVar2 = *(long *)(param_2 + 0x30);
    }
    func_0x00010bef9040(param_5,param_3,lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063369c0; end: 106336a7f; -[SCOperaPageGestureRecognizers deactivateGestureRecognizers] */

void FUN_1063369c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106336a80; end: 106336aa3; -[SCOperaPageGestureRecognizers gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_106336a80(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x28)) {
    return param_3 == *(long *)(param_1 + 0x30);
  }
  return true;
}



/* Entry: 106336aa4; end: 106336b0b; -[SCOperaPageGestureRecognizers gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_106336aa4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  if (param_3 == *(long *)(param_1 + 0x28)) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    _objc_release(param_4);
    uVar3 = (uint)uVar2 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 106336b0c; end: 106336bb7; -[SCOperaPageGestureRecognizers gestureRecognizerShouldBegin:] */

long FUN_106336b0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((param_3 == *(long *)(param_1 + 0x28)) || (param_3 == *(long *)(param_1 + 0x20))) ||
     (param_3 == *(long *)(param_1 + 0x30))) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0eaa20();
    _objc_release(param_1);
  }
  else {
    lVar1 = 1;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106336bb8; end: 106336cbb; -[SCOperaPageGestureRecognizers didShortPress:] */

void FUN_106336bb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0eaa20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c252440();
    if (lVar3 == 4) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea9c0();
    }
    else if (lVar3 == 3) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eaa00();
    }
    else {
      if (lVar3 != 1) goto LAB_106336ca8;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea9a0();
    }
    _objc_release(param_1);
  }
LAB_106336ca8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106336cbc; end: 106336e53; -[SCOperaPageGestureRecognizers didLongPress:] */

void FUN_106336cbc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    bVar1 = lVar2 == 4;
  }
  if (*(char *)(param_1 + 0x11) == '\x01' && bVar1) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_106336e40;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0eaa20();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) goto LAB_106336e40;
  }
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 == 1) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      func_0x00010c14c8a0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea9a0();
    }
    else {
      if (lVar2 != 2) goto LAB_106336e40;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ea9e0();
    }
  }
  else if (lVar2 == 3) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eaa00();
  }
  else {
    if (lVar2 != 4) goto LAB_106336e40;
    *(undefined1 *)(param_1 + 0x10) = 0;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea9c0();
  }
  _objc_release(param_1);
LAB_106336e40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106336e54; end: 106336ef7; -[SCOperaPageGestureRecognizers didDoubleTap:] */

void FUN_106336e54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0eaa20();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (lVar3 = param_3, func_0x00010c252440(), lVar3 == 3)) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ea9a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106336ef8; end: 106336f0f; -[SCOperaPageGestureRecognizers delegate] */

void FUN_106336ef8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106336f10; end: 106336f1b; -[SCOperaPageGestureRecognizers setDelegate:] */

void FUN_106336f10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106336f1c; end: 106336f23; -[SCOperaPageGestureRecognizers longPressGestureRecognizer] */

undefined8 FUN_106336f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106336f24; end: 106336f2b; -[SCOperaPageGestureRecognizers shortPressGestureRecognizer] */

undefined8 FUN_106336f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106336f2c; end: 106336f33; -[SCOperaPageGestureRecognizers doubleTapGestureRecognizer] */

undefined8 FUN_106336f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106336f34; end: 106336f77; -[SCOperaPageGestureRecognizers .cxx_destruct] */

void FUN_106336f34(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 106336f78; end: 106336f7f; -[SCOperaPageLayersSnapshot pageViewModel] */

undefined8 FUN_106336f78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106336f80; end: 106336faf; -[SCOperaPageLayersSnapshot setPageViewModel:] */

void FUN_106336f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106336fb0; end: 106336fb7; -[SCOperaPageLayersSnapshot layers] */

undefined8 FUN_106336fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106336fb8; end: 106336fe7; -[SCOperaPageLayersSnapshot setLayers:] */

void FUN_106336fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106336fe8; end: 106336fef; -[SCOperaPageLayersSnapshot floatingLayers] */

undefined8 FUN_106336fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106336ff0; end: 10633701f; -[SCOperaPageLayersSnapshot setFloatingLayers:] */

void FUN_106336ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106337020; end: 106337027; -[SCOperaPageLayersSnapshot prevProperties] */

undefined8 FUN_106337020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106337028; end: 106337057; -[SCOperaPageLayersSnapshot setPrevProperties:] */

void FUN_106337028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106337058; end: 10633709f; -[SCOperaPageLayersSnapshot .cxx_destruct] */

void FUN_106337058(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063370a0; end: 106337183; -[SCOperaPageLayersSnapshotsTracker initWithOperaDependencies:] */

undefined1 * FUN_1063370a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0ef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106337184; end: 10633727f; -[SCOperaPageLayersSnapshotsTracker startTrackingPageChangesForPageViewController:] */

void FUN_106337184(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be6f9a0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 == 0) {
      lVar1 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec7fe0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    uVar4 = uVar3;
    func_0x00010bf4b900(uVar3,param_2,param_3);
    if ((uVar4 & 1) == 0) {
      func_0x00010befa120(uVar3,param_2,param_3);
    }
    func_0x00010bf529e0(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106337280; end: 106337393; -[SCOperaPageLayersSnapshotsTracker dealloc] */

void FUN_106337280(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar3 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_110;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf529e0(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar5 = &uStack_110;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puStack_118 = PTR_PTR_1126f0ef0;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010c29d560(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f9a0(plVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c12d360(plVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar3);
  return;
}



/* Entry: 106337394; end: 10633740f; -[SCOperaPageLayersSnapshotsTracker stopTrackingPageChangesForPageViewController:] */

void FUN_106337394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6f9a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12d360(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106337410; end: 1063375f7; -[SCOperaPageLayersSnapshotsTracker layersSnapshotForPageViewController:] */

void FUN_106337410(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126c9d80;
      _objc_opt_new(PTR_PTR_1126c9d80);
      lVar1 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8940(puVar5);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000107dcb7f8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9a00(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000107dcd0d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19dee0(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar4);
      _objc_release(lVar1);
    }
    _objc_retain(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1063375f8; end: 10633776b; -[SCOperaPageLayersSnapshotsTracker updateLoadedPages:] */

void FUN_1063375f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  long lVar9;
  long lVar10;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(param_1 + 0x18);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        if ((lVar5 == 0) && (puVar6 = puVar1, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)) {
          func_0x00010bed2160(param_1);
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10633776c;
  uStack_160 = unaff_x22;
  lStack_158 = lVar2;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (puVar7 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_168,puVar6);
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    func_0x00010c0e0780(uVar8);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 10633776c; end: 10633786f; -[SCOperaPageLayersSnapshotsTracker _subscribeToPageChanges:] */

void FUN_10633776c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0e0780(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106337870; end: 106337927;  */

void FUN_106337870(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126c9ba0;
  if (param_1 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 != 0) {
      func_0x00010bdfca00(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106337928; end: 10633799f; -[SCOperaPageLayersSnapshotsTracker _unsubscribeFromPageChanges:] */

void FUN_106337928(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c25da80(puVar1,param_2,"page");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281ae0(uVar2,param_2,param_3,puVar1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1063379a0; end: 106337d1f; -[SCOperaPageLayersSnapshotsTracker _didChangePagePropertiesForPageViewModel:change:] */

void FUN_1063379a0(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
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
  long lStack_70;
  
  puVar11 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) goto LAB_106337cd4;
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9b98;
  _objc_opt_class(PTR_PTR_1126c9b98);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar10);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9b98;
  _objc_opt_class(PTR_PTR_1126c9b98);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar10);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010be36bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  puVar2 = puVar5;
  func_0x00010c0720c0();
  if ((int)puVar6 == 0) {
    puVar6 = param_3;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar6 == (undefined1 *)0x0) goto LAB_106337b1c;
  }
  else {
    _objc_release(puVar5);
    _objc_release(puVar4);
LAB_106337b1c:
    puVar10 = PTR_PTR_1126c9d80;
    _objc_opt_new(PTR_PTR_1126c9d80);
    func_0x00010c1d8940();
    puVar2 = puVar1;
    func_0x00010c118b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e17e0(puVar10);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000107dcb7f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9a00(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000107dcd0d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19dee0(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x20));
    lVar7 = *(long *)(param_1 + 0x18);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar8 = lVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf51e00();
    _objc_release(lVar8);
    lVar8 = lVar9;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar9);
          }
          func_0x00010c288480(*(undefined8 *)(lStack_128 + lVar13 * 8));
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        lVar8 = lVar9;
        puVar11 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(puVar10);
    puVar2 = (undefined1 *)puVar11;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_106337cd4:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar10 = *(undefined **)(param_3 + 0x18);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_3 + 0x18));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106337d20; end: 106337d9f; -[SCOperaPageLayersSnapshotsTracker _pageViewControllerForViewModel:] */

void FUN_106337d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c0dff20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106337da0; end: 106337de7; -[SCOperaPageLayersSnapshotsTracker .cxx_destruct] */

void FUN_106337da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106337de8; end: 106337eb3;  */

void FUN_106337de8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c0720c0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_2;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106337eb4; end: 10633801f; +[SCOperaPageViewController pageViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:legacySessionStateContainer:eventAnnouncer:eventPublisher:layerViewControllerManager:viewModel:delegate:trackerService:playbackSessionIdProviding:] */

void FUN_106337eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9cd0;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c001b80();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106338020; end: 106338773; -[SCOperaPageViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:legacySessionStateContainer:eventAnnouncer:eventPublisher:layerViewControllerManager:viewModel:delegate:trackerService:playbackSessionIdProviding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106338020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_10;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18180();
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puStack_68 = PTR_PTR_1126f0ef8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112745cec;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar1;
    _objc_release(uVar5);
    func_0x00010bf77520(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c189400(puVar2);
    lVar8 = (long)_DAT_112745cf0;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(long *)((long)puVar2 + lVar8) = param_3;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745cf4;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_4;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745cf8;
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(long *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745cfc;
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745d00;
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_7;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745d04;
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_8;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745d08;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar5);
    _objc_storeWeak((long)puVar2 + (long)_DAT_112745d0c,param_11);
    uVar5 = param_10;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112745d10;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = uVar5;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112745d14;
    _objc_retain(param_10);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_10;
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d18);
    *(undefined **)((long)puVar2 + (long)_DAT_112745d18) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d1c);
    *(undefined **)((long)puVar2 + (long)_DAT_112745d1c) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d20);
    *(undefined **)((long)puVar2 + (long)_DAT_112745d20) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_12;
    func_0x00010c09d0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d24);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112745d24) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar5 = param_12;
    func_0x00010c0fee60(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_112745d28,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = param_12;
    func_0x00010bdc2b20(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar2 + (long)_DAT_112745d2c,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    lVar8 = (long)_DAT_112745d30;
    _objc_retain(param_13);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_13;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112745d34) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112745d38) = 0;
    func_0x00010beaf340(puVar2);
    lVar8 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    func_0x00010bf1f440(lVar3);
    puVar1 = PTR_PTR_1126c9c68;
    _objc_alloc();
    func_0x00010c00a760();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d3c);
    *(undefined **)((long)puVar2 + (long)_DAT_112745d3c) = puVar1;
    _objc_release(uVar5);
    lVar8 = lVar3;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + (long)_DAT_112745d40) = (char)lVar8;
    lVar8 = lVar3;
    func_0x00010c067f00();
    *(double *)((long)puVar2 + (long)_DAT_112745d44) = (double)((float)(int)lVar8 / 100.0);
    lVar8 = lVar3;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + (long)_DAT_112745d48) = (char)lVar8;
    lVar8 = lVar3;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + (long)_DAT_112745d4c) = (char)lVar8;
    lVar8 = param_5;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c1394c0();
    *(char *)((long)puVar2 + (long)_DAT_112745d50) = (char)lVar4;
    _objc_release(lVar8);
    lVar8 = lVar3;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + (long)_DAT_112745d54) = (char)lVar8;
    lVar8 = lVar3;
    func_0x00010c0f24e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d58);
    *(long *)((long)puVar2 + (long)_DAT_112745d58) = lVar8;
    _objc_release(uVar5);
    lVar8 = param_3;
    func_0x00010bf4c640();
    if (lVar8 < 0) {
      lVar8 = lVar3;
      func_0x00010bfbe4c0();
    }
    else {
      lVar8 = param_3;
      func_0x00010bf4c640();
    }
    *(long *)((long)puVar2 + (long)_DAT_112745d5c) = lVar8;
    lVar8 = lVar3;
    func_0x00010bf13a80();
    *(char *)((long)puVar2 + (long)_DAT_112745d60) = (char)lVar8;
    lVar8 = lVar3;
    func_0x00010bf909c0();
    *(char *)((long)puVar2 + (long)_DAT_112745d64) = (char)lVar8;
    lVar8 = lVar3;
    func_0x00010c0ec180();
    *(char *)((long)puVar2 + (long)_DAT_112745d68) = (char)lVar8;
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745d6c + 0x30);
    *(undefined ***)((long)puVar2 + (long)_DAT_112745d6c + 0x30) =
         &PTR____CFConstantStringClassReference_110e4b3d8;
    _objc_release(uVar5);
    lVar8 = param_5;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf34b40();
    *(char *)((long)puVar2 + (long)_DAT_112745d70) = (char)lVar4;
    lVar4 = lVar8;
    func_0x00010c244080();
    *(long *)((long)puVar2 + (long)_DAT_112745d74) = lVar4;
    lVar4 = lVar8;
    func_0x00010bfbbaa0();
    *(char *)((long)puVar2 + (long)_DAT_112745d78) = (char)lVar4;
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f640(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(lVar8);
    _objc_release(lVar3);
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0);
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
  return puVar2;
}



/* Entry: 106338774; end: 1063387fb; -[SCOperaPageViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338774(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112745d7c));
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f20a0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1063387fc; end: 10633884f; -[SCOperaPageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063387fc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_112745cec),param_2,param_1);
  puStack_28 = PTR_PTR_1126f0ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 106338850; end: 1063389cb; -[SCOperaPageViewController _createPageLayoutGuides] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745d80);
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1063389cc;
  puStack_70 = &UNK_11091ca58;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745d84);
  *(undefined **)(param_1 + _DAT_112745d84) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1063389e8;
  puStack_98 = &UNK_11091ca58;
  _objc_retain(uVar4);
  uStack_90 = uVar4;
  func_0x00010bf11fe0(puVar2,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745d88);
  *(undefined **)(param_1 + _DAT_112745d88) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x106338a04;
  puStack_c0 = &UNK_11091ca58;
  uStack_b8 = uVar4;
  _objc_retain(uVar4);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745d8c);
  *(undefined **)(param_1 + _DAT_112745d8c) = puVar2;
  _objc_release(uVar3);
  _objc_release(uStack_b8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(uVar4);
  return;
}



/* Entry: 1063389cc; end: 106338a1f;  */

void FUN_1063389cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fc0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c9bb0,PTR_s_pinToView_identifier__11261ca58,*(undefined8 *)(param_1 + 0x20)
             ,&PTR____CFConstantStringClassReference_110e4b3f8);
  return;
}



/* Entry: 106338a20; end: 106338a53; -[SCOperaPageViewController _updateFullPageLayoutGuideIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338a20(long param_1)

{
  func_0x00010bed8b60();
  func_0x00010bed8b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745d80),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106338a54; end: 106338cbb; -[SCOperaPageViewController _updateFullPageLayoutWithSafeAreaGuideIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338a54(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  func_0x00010c149200();
  lVar7 = (long)_DAT_112745d80;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  lVar1 = param_5;
  dVar11 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar10 = param_1;
  func_0x00010bf51200(0,uVar6,param_6,lVar1);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  param_3 = (dVar11 - param_1) - param_3;
  dVar8 = 0.0;
  func_0x00010bf51200(uVar6,param_6,*(undefined8 *)(param_5 + lVar7));
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112745d84);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c274360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49220();
  if (dVar8 == dVar10) {
    uVar3 = uVar2;
    func_0x00010bf20080(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49220();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
    dVar9 = param_3 - dVar11;
    if (dVar8 != dVar9) {
LAB_106338ba0:
      _objc_release(uVar3);
      goto LAB_106338ba8;
    }
    uVar4 = uVar2;
    func_0x00010c08de40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49220();
    if (dVar9 != param_2) {
      _objc_release(uVar4);
      goto LAB_106338ba0;
    }
    uVar5 = uVar2;
    func_0x00010c2793e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49220();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    if (dVar9 == param_4) goto LAB_106338c4c;
  }
  else {
LAB_106338ba8:
    _objc_release(uVar6);
  }
  uVar6 = uVar2;
  func_0x00010c274360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(dVar10);
  _objc_release(uVar6);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  uVar6 = uVar2;
  func_0x00010bf20080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(param_3 - dVar11);
  _objc_release(uVar6);
  uVar6 = uVar2;
  func_0x00010c08de40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(param_2);
  _objc_release(uVar6);
  uVar6 = uVar2;
  func_0x00010c2793e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(param_4);
  _objc_release(uVar6);
LAB_106338c4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106338cbc; end: 106338e6f; -[SCOperaPageViewController _updateFullPageLayoutWithoutSafeAreaGuideIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338cbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double in_d3;
  double dVar6;
  
  lVar4 = (long)_DAT_112745d80;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = *(double *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010bf51200(*(undefined8 *)PTR__CGPointZero_110347540,dVar5,uVar2,param_2,lVar3);
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar6 = in_d3;
  func_0x00010bf51200(0,in_d3,uVar2,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  lVar3 = (long)_DAT_112745d8c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(dVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf20080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(dVar5 + (in_d3 - dVar6));
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08de40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2793e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181140(0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106338e70; end: 1063390c7; -[SCOperaPageViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106338e70(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 in_d3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  long lStack_60;
  undefined *puStack_58;
  
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4b458);
  puStack_58 = PTR_PTR_1126f0ef8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  if (*(char *)(param_1 + _DAT_112745d90) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112745d90) = 0;
    return;
  }
  if (*(long *)(param_1 + _DAT_112745d80) == 0) {
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_a0);
  }
  uVar2 = 0;
  _CGAffineTransformIsIdentity();
  if ((uVar2 & 1) == 0) {
LAB_106339018:
    func_0x00010bf94960(PTR_PTR_1126c98e0);
  }
  else {
    if (*(long *)(param_1 + _DAT_112745d94) != 0) {
      func_0x00010c27a460(&uStack_a0);
      uVar2 = 0;
      _CGAffineTransformIsIdentity();
      if ((uVar2 & 1) == 0) goto LAB_106339018;
    }
    lVar4 = (long)_DAT_112745d98;
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c1681a0(0,PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
    uStack_70 = 0;
    func_0x00010bedb4c0(param_1);
    _objc_retain(uStack_70);
    func_0x00010bed3980(param_1);
    func_0x00010bed8b40(param_1);
    func_0x00010be94720(in_d3,param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112745cf0);
    func_0x00010bf4e680();
    lVar3 = param_1;
    if (iVar1 == 0) {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010bc8525c();
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112745da0));
    }
    else {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010bc851d4();
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112745da0));
    }
    _objc_release(lVar3);
    func_0x00010bed6240(param_1);
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    }
    _objc_release(uStack_70);
  }
  return;
}



/* Entry: 1063390c8; end: 106339237; -[SCOperaPageViewController _updateBackdropViewOnViewLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063390c8(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  bVar1 = *param_3 == 2;
  if (*(char *)(param_1 + _DAT_112745d60) == '\x01') {
    if (*param_3 != 2) {
      bVar1 = *(byte *)(param_3 + 5);
      goto LAB_106339128;
    }
    if ((*(byte *)(param_1 + _DAT_112745d64) & 1) == 0) goto LAB_106339208;
LAB_10633913c:
    uVar4 = 1;
LAB_1063391ac:
    lVar5 = (long)_DAT_112745da8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  }
  else {
LAB_106339128:
    if ((*(byte *)(param_1 + _DAT_112745d64) & 1) != 0) {
      if ((bVar1 & 1) != 0) goto LAB_10633913c;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106339238;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
      uVar4 = 0;
      goto LAB_1063391ac;
    }
    if ((bVar1 & 1) != 0) goto LAB_106339208;
    func_0x00010beaabe0(param_1);
    lVar5 = (long)_DAT_112745da8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  }
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112745cf8);
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf90460();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010bdd2a60(param_1);
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    }
  }
LAB_106339208:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3[6]);
  return;
}



/* Entry: 106339238; end: 10633926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106339238(long param_1)

{
  func_0x00010beaabe0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745da8),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10633926c; end: 10633926f; -[SCOperaPageViewController _updateMediaFrameWithResponsiveLayout:] */

void FUN_10633926c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setMediaFrameWithResponsiveLayo_112586fb0);
  return;
}



/* Entry: 106339270; end: 1063395af; -[SCOperaPageViewController _setMediaFrameWithResponsiveLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106339270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  func_0x00010bdd2a20(param_5);
  func_0x00010be95280(&uStack_d0,param_5);
  if (*(char *)(param_5 + _DAT_112745d70) == '\x01') {
    _CGRectIntegral();
  }
  if (cStack_98 == '\x01') {
    uVar6 = *(undefined8 *)(param_5 + _DAT_112745d00);
    puVar2 = PTR_PTR_1126b2e48;
    func_0x00010bf11e80(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar6,param_6,puVar2,*(undefined8 *)(param_5 + _DAT_112745d10));
    _objc_release(puVar2);
    cStack_d8 = cStack_98;
  }
  else {
    cStack_d8 = '\0';
  }
  uVar6 = uStack_a0;
  uStack_108 = uStack_c8;
  uStack_110 = uStack_d0;
  uStack_100 = uStack_c0;
  _objc_retain(uStack_a0);
  uStack_e0 = uVar6;
  func_0x00010bdce840(param_5,param_6,&uStack_110);
  lVar3 = *(long *)(param_5 + _DAT_112745d10);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_3 = CONCAT71(uStack_b7,uStack_b8);
    param_4 = CONCAT71(uStack_af,uStack_b0);
    param_1 = uStack_c8;
    param_2 = uStack_c0;
  }
  _objc_release();
  _objc_release(lVar3);
  uVar6 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  *(undefined8 *)(param_5 + _DAT_112745dac) = uVar6;
  uVar6 = param_1;
  func_0x00010bde42a0(param_1,param_2,param_3,param_4,param_5);
  lVar1 = param_5;
  func_0x00010be48b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112745d94;
  if (lVar1 == *(long *)(param_5 + lVar3)) {
    func_0x00010c19f0e0(uVar6,param_2,param_3,param_4);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    lVar3 = (long)_DAT_112745d80;
    uVar6 = *(undefined8 *)(param_5 + lVar3);
  }
  else {
    lVar3 = (long)_DAT_112745d80;
    uVar6 = *(undefined8 *)(param_5 + lVar3);
  }
  func_0x00010c19f0e0(uVar6);
  if (*(char *)(param_5 + _DAT_112745d64) == '\x01') {
    lVar7 = (long)_DAT_112745db0;
    lVar4 = *(long *)(param_5 + lVar7);
    if (lVar4 != 0) {
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_5 + lVar3);
      _objc_release();
      if (lVar4 == lVar8) {
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
        func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
      }
    }
  }
  uVar6 = uStack_a0;
  if (param_7 != (undefined8 *)0x0) {
    param_7[1] = uStack_c8;
    *param_7 = uStack_d0;
    param_7[3] = CONCAT71(uStack_b7,uStack_b8);
    param_7[2] = uStack_c0;
    *(ulong *)((long)param_7 + 0x21) = CONCAT17(uStack_a8,uStack_af);
    *(ulong *)((long)param_7 + 0x19) = CONCAT17(uStack_b0,uStack_b7);
    _objc_retain(uStack_a0);
    uVar5 = param_7[6];
    param_7[6] = uVar6;
    _objc_release(uVar5);
    *(char *)(param_7 + 7) = cStack_98;
  }
  _objc_release(lVar1);
  _objc_release(uStack_a0);
  return param_1;
}



/* Entry: 1063395b0; end: 106339637; -[SCOperaPageViewController _computeAttachmentContainerFrameWithMediaFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063395b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_5 + _DAT_112745cf0);
  func_0x00010bf4e680();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_5 + _DAT_112745da4);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + _DAT_112745d9c);
    uVar3 = 0;
  }
  _CGRectOffset(param_1,param_2,param_3,param_4,uVar2,uVar3);
  return;
}



/* Entry: 106339638; end: 1063396f7; -[SCOperaPageViewController _baseBoundsExcludingPresentedVCSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106339638(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar2 = (long)_DAT_112745cf4;
  func_0x00010c0eb1c0(*(undefined8 *)(param_3 + lVar2));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c230b40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f1de0(*(undefined8 *)(param_3 + lVar2));
  }
  return param_1 + param_2;
}



/* Entry: 1063396f8; end: 106339727; -[SCOperaPageViewController _baseBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063396f8(void)

{
  func_0x00010bdd2a40();
  return;
}


