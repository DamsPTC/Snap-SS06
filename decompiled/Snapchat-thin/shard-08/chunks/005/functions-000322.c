/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061936c8; end: 10619372f; -[SCFeatureSpeedModeImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061936c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127413cc;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfb68e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar2;
  }
  return 0;
}



/* Entry: 106193730; end: 106193747; -[SCFeatureSpeedModeImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106193730(long param_1)

{
  return *(int *)(param_1 + _DAT_112741394) != 1;
}



/* Entry: 106193748; end: 10619374f; -[SCFeatureSpeedModeImpl cameraModeType] */

undefined8 FUN_106193748(void)

{
  return 10;
}



/* Entry: 106193750; end: 1061937ef; -[SCFeatureSpeedModeImpl didRegisterProviderToken:noFormatFoundError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193750(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = (long)_DAT_1127413d4;
    if (*(long *)(param_1 + lVar2) == 0) goto LAB_1061937d4;
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  else {
    func_0x00010c137fe0(param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127413d0);
    *(undefined8 *)(param_1 + _DAT_1127413d0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127413d4);
    *(undefined8 *)(param_1 + _DAT_1127413d4) = 0;
  }
  _objc_release(uVar1);
LAB_1061937d4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061937f0; end: 10619384b; -[SCFeatureSpeedModeImpl didUnregisterProviderToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061937f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127413d0);
  *(undefined8 *)(param_1 + _DAT_1127413d0) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127413d4;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10619384c; end: 106193857; -[SCFeatureSpeedModeImpl featureNameForToken:] */

undefined ** FUN_10619384c(void)

{
  return &PTR____CFConstantStringClassReference_110e43858;
}



/* Entry: 106193858; end: 1061939d3; -[SCFeatureSpeedModeImpl _createSpeedModeWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193858(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126c8710;
  _objc_alloc_init(PTR_PTR_1126c8710);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1d36a0(puVar1);
  puVar2 = PTR_PTR_1126c8718;
  _objc_alloc(PTR_PTR_1126c8718);
  func_0x00010c0072c0();
  puVar3 = PTR_PTR_1126c8720;
  _objc_alloc(PTR_PTR_1126c8720);
  param_1 = param_1 + _DAT_1127413a0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061939d4; end: 106193a53;  */

void FUN_1061939d4(long param_1,undefined4 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106193a54;
    puStack_38 = &UNK_110868698;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106193a54; end: 106193a63;  */

void FUN_106193a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfcaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didChangeSpeedModeOptionFromWid_11255cc58,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 106193a64; end: 106193acb; -[SCFeatureSpeedModeImpl _didChangeSpeedModeOptionFromWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193a64(long param_1,undefined8 param_2)

{
  func_0x00010be5a640(param_1,param_2,0x1c);
  func_0x00010be5a600(param_1);
  func_0x00010bea7c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127413c0),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 106193acc; end: 106193b63; -[SCFeatureSpeedModeImpl _setSpeedModeOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112741394;
  func_0x00010be439c0(param_1,param_2,*(undefined4 *)(param_1 + lVar1),param_3);
  if (*(int *)(param_1 + lVar1) == (int)param_3) {
    func_0x00010be03ba0();
    func_0x00010bee2540(param_1);
  }
  else {
    func_0x00010bee4400(param_1);
    func_0x00010be03ba0(param_1);
    func_0x00010bea7c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127413c0),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 106193b64; end: 106193b7b; -[SCFeatureSpeedModeImpl _isSelectedStateChangedWhenGoingFromSpeedMode:toSpeedMode:] */

bool FUN_106193b64(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  return param_3 != param_4 && (param_3 == 1 || param_4 == 1);
}



/* Entry: 106193b7c; end: 106193c27; -[SCFeatureSpeedModeImpl _updateToolbarIconsForSpeedMode:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c207ca0(*(undefined8 *)(param_1 + _DAT_1127413d8));
  func_0x00010c207ca0(*(undefined8 *)(param_1 + _DAT_1127413dc),param_2,param_3,param_4);
  lVar1 = param_1;
  func_0x00010be43f40(param_1,param_2,param_3);
  lVar2 = (long)_DAT_1127413e0;
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c216f60();
    _objc_release(lVar1);
  }
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106193c28; end: 106193c77; -[SCFeatureSpeedModeImpl _updateWidgetForSpeedMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193c28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8718;
  _objc_alloc(PTR_PTR_1126c8718);
  func_0x00010c0072c0();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127413cc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106193c78; end: 106193eb7; -[SCFeatureSpeedModeImpl _setSpeedModeActiveForSpeedMode:animateToolbarIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193c78(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  int iStack_60;
  undefined1 uStack_5c;
  undefined1 auStack_58 [8];
  
  if (*(int *)(param_1 + _DAT_112741394) == param_3) {
    return;
  }
  *(int *)(param_1 + _DAT_112741394) = param_3;
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106193eb8;
  puStack_70 = &UNK_110912568;
  _objc_copyWeak(auStack_68,auStack_58);
  ppuVar1 = &puStack_88;
  iStack_60 = param_3;
  uStack_5c = param_4;
  _objc_retainBlock();
  lVar7 = (long)_DAT_1127413d4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined ***)(param_1 + lVar7) = ppuVar1;
  _objc_release(uVar4);
  lVar8 = param_1;
  func_0x00010be40f00();
  if ((int)lVar8 == 0) {
    lVar8 = (long)_DAT_1127413d0;
    if (*(long *)(param_1 + lVar8) == 0) {
      if (*(long *)(param_1 + lVar7) == 0) goto LAB_106193e70;
      (**(code **)(*(long *)(param_1 + lVar7) + 0x10))();
      lVar6 = *(long *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = 0;
    }
    else {
      lVar7 = param_1 + _DAT_1127413ac;
      _objc_loadWeakRetained(lVar7);
      lVar6 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281f80();
      _objc_release(lVar6);
      _objc_release(lVar7);
      lVar6 = *(long *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = 0;
    }
  }
  else {
    lVar6 = param_1 + _DAT_1127413ac;
    _objc_loadWeakRetained();
    lVar8 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127413a4);
    func_0x00010bf70f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c23ea20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c1276a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127413d0);
    *(long *)(param_1 + _DAT_1127413d0) = lVar7;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar8);
  }
  _objc_release(lVar6);
LAB_106193e70:
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106193eb8; end: 106193f53;  */

void FUN_106193eb8(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106193f54;
  puStack_38 = &UNK_110912568;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined1 *)(param_1 + 0x2c);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106193f54; end: 106193f93;  */

void FUN_106193f54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be17680(lVar1,param_2,*(undefined4 *)(param_1 + 0x28),
                        *(undefined1 *)(param_1 + 0x2c));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106193f94; end: 106193feb; -[SCFeatureSpeedModeImpl _selectionInfoForSpeedMode:] */

void FUN_106193f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be87b60();
  func_0x00010be40f00(param_2,param_3,param_4);
  _objc_alloc(PTR_PTR_1126c8728);
  func_0x00010c03d740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106193fec; end: 10619400b; -[SCFeatureSpeedModeImpl _recordingSpeedForSpeedMode:] */

undefined8 FUN_106193fec(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4000000000000000;
  if (param_3 != 2) {
    uVar1 = 0x3fe0000000000000;
  }
  uVar2 = 0x3ff0000000000000;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10619400c; end: 10619401b; -[SCFeatureSpeedModeImpl _isHighFrameRateEnabledForSpeedMode:] */

bool FUN_10619400c(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 - 3U < 0xfffffffe;
}



/* Entry: 10619401c; end: 106194027; -[SCFeatureSpeedModeImpl _isSpeedModeActiveForSpeedMode:] */

bool FUN_10619401c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return (param_3 & 0xfffffffd) == 0;
}



/* Entry: 106194028; end: 106194127; -[SCFeatureSpeedModeImpl _finishedSettingSpeedModeActiveForSpeedMode:animateToolbarIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be9e2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be43f40(param_1,param_2,param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127413c4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127413c8),param_2,lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127413c0),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127413e4);
  func_0x00010bf2b240(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87b60(param_1,param_2,param_3);
  func_0x00010c0e68a0(uVar4);
  _objc_release(uVar4);
  func_0x00010bee2540(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106194128; end: 1061946a3; -[SCFeatureSpeedModeImpl _buildFeatureContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194128(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + _DAT_1127413bc) & 1) == 0) {
    lVar3 = param_1 + _DAT_1127413e0;
    _objc_loadWeakRetained();
    lVar28 = lVar3;
    func_0x00010c29cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    lVar28 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar31 = (long)_DAT_1127413e8;
  uVar26 = *(undefined8 *)(param_1 + lVar31);
  *(undefined **)(param_1 + lVar31) = puVar1;
  _objc_release(uVar26);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar31));
  _objc_release(puVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar31));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31));
  lVar29 = (long)_DAT_1127413e4;
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar26);
  lVar3 = param_1;
  func_0x00010bdf3aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_1127413cc;
  uVar26 = *(undefined8 *)(param_1 + lVar30);
  *(long *)(param_1 + lVar30) = lVar3;
  _objc_release(uVar26);
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0(uVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar26);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar2;
  if (lVar28 == 0) {
    lVar3 = *(long *)(param_1 + lVar29);
    func_0x00010c274200(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x406a400000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = lVar28;
    func_0x00010c274200(lVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar27 = *(undefined8 *)(param_1 + _DAT_1127413ec);
  *(undefined8 *)(param_1 + _DAT_1127413ec) = uVar26;
  _objc_release(uVar27);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar4;
  func_0x00010bf49420(0x4067800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49420(0x4062c00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar6;
  func_0x00010bf493c0(0xc04b800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bfe12e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
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
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar27);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar26);
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar31));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar25 = (long)_DAT_1127413f0;
  uVar26 = *(undefined8 *)(lVar28 + lVar25);
  *(undefined **)(lVar28 + lVar25) = puVar1;
  _objc_release(uVar26);
  func_0x00010c178280(*(undefined8 *)(lVar28 + lVar25));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar28 + _DAT_1127413e4),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(lVar28 + lVar25));
  return;
}



/* Entry: 1061946a4; end: 106194717; -[SCFeatureSpeedModeImpl _setTapToDismissGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061946a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_1127413f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127413e4),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106194718; end: 1061947e7; -[SCFeatureSpeedModeImpl _tapToDismissWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127413cc;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    lVar4 = param_3;
    func_0x00010c252440();
    if ((lVar4 == 3) && ((uVar3 & 1) == 0)) {
      func_0x00010be03ba0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061947e8; end: 106194887; -[SCFeatureSpeedModeImpl _toolbarItemTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061947e8(long param_1)

{
  int iVar1;
  long lVar2;
  
  func_0x00010bdd61c0();
  lVar2 = (long)_DAT_112741394;
  func_0x00010be5a600(param_1);
  if (*(int *)(param_1 + lVar2) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpeedModeOption__1125878c8,1);
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127413cc);
  func_0x00010c074c20();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentWidgetFromChildToolbarIt_11257d740,0);
    return;
  }
  func_0x00010c1fade0(*(undefined8 *)(param_1 + _DAT_1127413d8));
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106194888; end: 10619490f; -[SCFeatureSpeedModeImpl _childToolbarItemTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194888(long param_1)

{
  int iVar1;
  
  func_0x00010bdd61c0();
  func_0x00010be5a640(param_1);
  func_0x00010be5a600(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127413cc);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    func_0x00010be03ba0(param_1);
  }
  else {
    func_0x00010be7f680(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127413dc),PTR_s_setSelected_animated__11265c5a0,1,0);
  return;
}



/* Entry: 106194910; end: 106194927; -[SCFeatureSpeedModeImpl _buildFeatureContainerViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194910(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127413cc) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd61b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__buildFeatureContainerView_112553208);
  return;
}



/* Entry: 106194928; end: 106194a73; -[SCFeatureSpeedModeImpl _presentWidgetFromChildToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194928(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bdd61c0();
  if (*(long *)(param_1 + _DAT_1127413cc) != 0) {
    uVar2 = 0x4034000000000000;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    func_0x00010c181140(uVar2,*(undefined8 *)(param_1 + _DAT_1127413ec));
    lVar1 = param_1 + _DAT_1127413e0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3fb00();
    _objc_release(lVar1);
    if ((*(byte *)(param_1 + _DAT_1127413bc) & 1) == 0) {
      lVar1 = (long)_DAT_1127413e4;
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bfe12e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bfe12e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(uVar2);
    }
    func_0x00010c23ada0(PTR_PTR_1126c7c00);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127413e8));
    func_0x00010bea8420(param_1);
    lVar1 = 0x48;
    if (param_3 == 0) {
      lVar1 = 0x44;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1b45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + *(int *)(&DAT_112741394 + lVar1)),
               PTR_s_setIsShowingWidget__11264ab98,1);
    return;
  }
  return;
}



/* Entry: 106194a74; end: 106194b43; -[SCFeatureSpeedModeImpl _dismissWidget] */

/* WARNING: Possible PIC construction at 0x000106194b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106194b28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194a74(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127413cc);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    lVar3 = (long)_DAT_1127413f0;
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010c12e920();
      func_0x00010c12c9c0(*(undefined8 *)(param_1 + _DAT_1127413e4));
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
    }
    func_0x00010bfe2da0(PTR_PTR_1126c7c00);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127413e8));
                    /* WARNING: Could not recover jumptable at 0x00010c1b45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127413d8),PTR_s_setIsShowingWidget__11264ab98,0);
    return;
  }
  return;
}



/* Entry: 106194b44; end: 106194bc7; -[SCFeatureSpeedModeImpl _createAndRegisterToolbarItemsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194b44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127413d8;
  if ((*(long *)(param_1 + lVar2) == 0) && ((*(byte *)(param_1 + _DAT_1127413bc) & 1) == 0)) {
    func_0x00010bdf4e00(param_1);
    lVar1 = param_1 + _DAT_1127413e0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010befc4a0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setNeedsCheckVisibilityOfChildIt_112650968);
    return;
  }
  return;
}



/* Entry: 106194bc8; end: 106194e8b; -[SCFeatureSpeedModeImpl _createToolbarItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194bc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  puVar1 = PTR_PTR_1126c8730;
  _objc_alloc();
  func_0x00010c037be0();
  lVar5 = (long)_DAT_1127413d8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c8738;
  _objc_alloc();
  func_0x00010c037be0();
  lVar4 = (long)_DAT_1127413dc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c17c3c0(*(undefined8 *)(param_1 + lVar5));
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf7ca60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106194e8c;
  puStack_88 = &UNK_11090ba70;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf735a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106194eb8;
  puStack_b0 = &UNK_11090ba70;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf2d680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf7ca60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106194e8c; end: 106194eb7;  */

void FUN_106194e8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becd1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106194eb8; end: 106194f2f;  */

void FUN_106194eb8(long param_1,undefined8 param_2)

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
  func_0x00010be322c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106194f30; end: 106194faf;  */

void FUN_106194f30(undefined8 param_1,undefined8 param_2)

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



/* Entry: 106194fb0; end: 106194fbf; -[SCFeatureSpeedModeImpl _handleToolbarItemDidChangeSelected:] */

void FUN_106194fb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpeedModeOption__1125878c8,1);
  return;
}



/* Entry: 106194fc0; end: 106194fc3; -[SCFeatureSpeedModeImpl _handleViewWillDisappear] */

void FUN_106194fc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106194fc4; end: 106194fc7; -[SCFeatureSpeedModeImpl _handleApplicationDidEnterBackground] */

void FUN_106194fc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106194fc8; end: 106194fcb; -[SCFeatureSpeedModeImpl _handleVideoWillBeginRecording] */

void FUN_106194fc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106194fcc; end: 106194fcf; -[SCFeatureSpeedModeImpl _handleCameraToolbarExpandCollapse] */

void FUN_106194fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106194fd0; end: 106194fff; -[SCFeatureSpeedModeImpl _handleCameraToolbarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106194fd0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != *(long *)(param_1 + _DAT_1127413d8)) &&
     (param_3 != *(long *)(param_1 + _DAT_1127413dc))) {
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
    return;
  }
  return;
}



/* Entry: 106195000; end: 106195043; -[SCFeatureSpeedModeImpl _logUserTapActionDidStartWithUIItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195000(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274139c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106195044; end: 106195187; -[SCFeatureSpeedModeImpl _logUserTapActionDidEndWithUIItem:fromSpeedMode:toSpeedMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be87ba0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be87ba0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127413b4;
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar5),param_2,lVar1,
                      &PTR____CFConstantStringClassReference_110e43838);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar5),param_2,lVar2,
                      &PTR____CFConstantStringClassReference_110e07438);
  uStack_50 = *(undefined8 *)(param_1 + lVar5);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e43818;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274139c);
  func_0x00010bfa1820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b780();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be87b60();
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106195188; end: 1061951cb; -[SCFeatureSpeedModeImpl _recordingSpeedStringForSpeedMode:] */

void FUN_106195188(void)

{
  func_0x00010be87b60();
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061951cc; end: 1061951d3; -[SCFeatureSpeedModeImpl reset] */

void FUN_1061951cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpeedModeOption__1125878c8,1);
  return;
}



/* Entry: 1061951d4; end: 1061951e3; -[SCFeatureSpeedModeImpl isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061951d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be43f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__isSpeedModeActiveForSpeedMode__11256e970,
             *(undefined4 *)(param_1 + _DAT_112741394));
  return;
}



/* Entry: 1061951e4; end: 1061951f3; -[SCFeatureSpeedModeImpl speedModeCurrentModeRecordingSpeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061951e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__recordingSpeedForSpeedMode__11257f878,
             *(undefined4 *)(param_1 + _DAT_112741394));
  return;
}



/* Entry: 1061951f4; end: 106195223; -[SCFeatureSpeedModeImpl speedModeSelectionInfoObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061951f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127413c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106195224; end: 10619525b; -[SCFeatureSpeedModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127413e4);
  *(undefined8 *)(param_1 + _DAT_1127413e4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619525c; end: 10619547f; -[SCFeatureSpeedModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619525c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127413e0;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    lVar1 = param_1 + lVar4;
    _objc_storeWeak(lVar1,param_3);
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(lVar1);
    lVar1 = param_3;
    func_0x00010bf2b420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106195480;
    puStack_78 = &UNK_110842a38;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010bf2b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126b9cb0;
    func_0x00010c249d40();
    if ((int)puVar3 != 0) {
      func_0x00010bdeac00(param_1);
    }
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106195480; end: 1061954ab;  */

void FUN_106195480(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061954ac; end: 10619551b;  */

void FUN_1061954ac(long param_1,undefined8 param_2)

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



/* Entry: 10619551c; end: 106195653; -[SCFeatureSpeedModeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619551c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = param_1 + _DAT_1127413e0;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) || (*(char *)(param_1 + _DAT_1127413bc) == '\x01')) {
    lVar2 = (long)_DAT_1127413f4;
    bVar1 = *(byte *)(param_1 + lVar2);
    _objc_release();
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + lVar2) = 1;
      func_0x00010bdeac00(param_1);
      _objc_initWeak(auStack_38,param_1);
      param_1 = param_1 + _DAT_112741398;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      lVar2 = param_1;
      func_0x00010c25ff60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106195654; end: 106195717;  */

void FUN_106195654(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106195718; end: 106195723;  */

void FUN_106195718(void)

{
  return;
}



/* Entry: 106195724; end: 10619574f;  */

void FUN_106195724(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106195750; end: 106195753;  */

void FUN_106195750(void)

{
  return;
}



/* Entry: 106195754; end: 106195853; -[SCFeatureSpeedModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106195854; end: 106195917;  */

void FUN_106195854(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106195918; end: 106195943;  */

void FUN_106195918(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be331e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106195944; end: 106195973; -[SCFeatureSpeedModeImpl modeEnabledStateChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195944(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127413c4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106195974; end: 10619597b; -[SCFeatureSpeedModeImpl disableMode] */

void FUN_106195974(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpeedModeOption__1125878c8,1);
  return;
}



/* Entry: 10619597c; end: 106195987; -[SCFeatureSpeedModeImpl incompatibleModes] */

undefined ** FUN_10619597c(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_1111801a0;
}



/* Entry: 106195988; end: 10619598f; -[SCFeatureSpeedModeImpl modeType] */

undefined8 FUN_106195988(void)

{
  return 10;
}



/* Entry: 106195990; end: 1061959f7; -[SCFeatureSpeedModeImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195990(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
    return;
  }
  if (*(int *)(param_1 + _DAT_112741394) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentWidgetFromChildToolbarIt_11257d740,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSpeedModeOption__1125878c8,1);
  return;
}



/* Entry: 1061959f8; end: 1061959ff; -[SCFeatureSpeedModeImpl isHidden] */

undefined8 FUN_1061959f8(void)

{
  return 0;
}



/* Entry: 106195a00; end: 106195a43; -[SCFeatureSpeedModeImpl secondaryOnTap:] */

void FUN_106195a00(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)uVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentWidgetFromChildToolbarIt_11257d740,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106195a44; end: 106195a5b; -[SCFeatureSpeedModeImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106195a44(long param_1)

{
  return (*(uint *)(param_1 + _DAT_112741394) & 0xfffffffd) == 0;
}



/* Entry: 106195a5c; end: 106195a83; -[SCFeatureSpeedModeImpl secondaryButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106195a5c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 3;
  if (*(int *)(param_1 + _DAT_112741394) != 2) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (*(int *)(param_1 + _DAT_112741394) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106195a84; end: 106195b5f; -[SCFeatureSpeedModeImpl toolbarButtonPositionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + _DAT_1127413f4) == '\x01') &&
     (lVar5 = (long)_DAT_1127413cc, *(long *)(param_1 + lVar5) != 0)) {
    lVar6 = (long)_DAT_1127413ec;
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar6),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf493a0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar6),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106195b60; end: 106195ccf; -[SCFeatureSpeedModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106195b60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127413b0,0);
  _objc_storeStrong(param_1 + _DAT_1127413d4,0);
  _objc_storeStrong(param_1 + _DAT_1127413d0,0);
  _objc_storeStrong(param_1 + _DAT_1127413c8,0);
  _objc_storeStrong(param_1 + _DAT_1127413c4,0);
  _objc_storeStrong(param_1 + _DAT_1127413e8,0);
  _objc_storeStrong(param_1 + _DAT_1127413b4,0);
  _objc_storeStrong(param_1 + _DAT_1127413f0,0);
  _objc_storeStrong(param_1 + _DAT_1127413ec,0);
  _objc_storeStrong(param_1 + _DAT_1127413cc,0);
  _objc_storeStrong(param_1 + _DAT_1127413a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127413ac);
  _objc_destroyWeak(param_1 + _DAT_1127413a0);
  _objc_storeStrong(param_1 + _DAT_11274139c,0);
  _objc_storeStrong(param_1 + _DAT_1127413c0,0);
  _objc_destroyWeak(param_1 + _DAT_112741398);
  _objc_storeStrong(param_1 + _DAT_1127413dc,0);
  _objc_storeStrong(param_1 + _DAT_1127413d8,0);
  _objc_destroyWeak(param_1 + _DAT_1127413e0);
  _objc_storeStrong(param_1 + _DAT_1127413b8,0);
  _objc_storeStrong(param_1 + _DAT_1127413e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127413f8,0);
  return;
}



/* Entry: 106195cd0; end: 106195e03; -[SCSpeedModeCameraChildToolbarItem initWithPosition:] */

undefined1 * FUN_106195cd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126effb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPosition__1125eb8f8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c1cdb60(puVar1);
    func_0x00010c1fb140(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fb99999a0000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdb40(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fb99999a0000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1faec0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c200900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106195e04; end: 106195e07; -[SCSpeedModeCameraChildToolbarItem toggleSelection] */

void FUN_106195e04(void)

{
  return;
}



/* Entry: 106195e08; end: 106195ebf; -[SCSpeedModeCameraChildToolbarItem setIsShowingWidget:] */

void FUN_106195e08(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126effb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setIsShowingWidget__11264ab98);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3fd99999a0000000;
  if (param_3 == 0) {
    uVar3 = 0x3fb99999a0000000;
  }
  puVar2 = puVar1;
  func_0x00010bf414e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1faec0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1cbd60(param_1);
  return;
}



/* Entry: 106195ec0; end: 106195eff; -[SCSpeedModeCameraChildToolbarItem setSpeedMode:animated:] */

void FUN_106195ec0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  func_0x00010bed9860();
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSelected_animated__11265c5a0,(param_3 & 0xfffffffd) == 0,param_4);
  return;
}



/* Entry: 106195f00; end: 106195f2b; -[SCSpeedModeCameraChildToolbarItem setSelected:animated:] */

void FUN_106195f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay__112650980,param_4);
  return;
}



/* Entry: 106195f2c; end: 106195f87; -[SCSpeedModeCameraChildToolbarItem _updateImageWithSpeedMode:] */

void FUN_106195f2c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e43898;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e43878;
  }
  func_0x00010c1cdb60(param_1,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectedImageName__11265c678,ppuVar1);
  return;
}



/* Entry: 106195f88; end: 1061960af; -[SCSpeedModeCameraToolbarItem initWithPosition:] */

undefined1 * FUN_106195f88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126effb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPosition__1125eb8f8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1cdb60(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c1fb140(puVar1);
    func_0x00010619f73c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(puVar1);
    _objc_release(puVar2);
    func_0x00010619f73c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c160fc0(puVar1);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(puVar1);
    _objc_release(puVar2);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(puVar1);
    _objc_release(puVar2);
    func_0x00010c177460(puVar1);
    func_0x00010c200900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061960b0; end: 1061960b3; -[SCSpeedModeCameraToolbarItem toggleSelection] */

void FUN_1061960b0(void)

{
  return;
}



/* Entry: 1061960b4; end: 106196127; -[SCSpeedModeCameraToolbarItem setSpeedMode:animated:] */

void FUN_1061960b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be9e100();
  uVar1 = param_1;
  func_0x00010be9e180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb640(param_1);
  _objc_release(uVar1);
  func_0x00010c1fade0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsCheckVisibilityOfChildIt_112650968);
  return;
}



/* Entry: 106196128; end: 106196153; -[SCSpeedModeCameraToolbarItem setSelected:animated:] */

void FUN_106196128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay__112650980,param_4);
  return;
}



/* Entry: 106196154; end: 10619615f; -[SCSpeedModeCameraToolbarItem _selectedStateForSpeedMode:] */

bool FUN_106196154(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return (param_3 & 0xfffffffd) == 0;
}



/* Entry: 106196160; end: 1061961af; -[SCSpeedModeCameraToolbarItem _selectedTitleForSpeedMode:] */

void FUN_106196160(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    func_0x00010619f76c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010619f754();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010619f73c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061961b0; end: 106196233; -[SCFeatureStartupDeferredPhotoOutputStartImpl initWithCameraHardwareServicesAPI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061961b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126effc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127413fc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106196234; end: 10619626f; -[SCFeatureStartupDeferredPhotoOutputStartImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196234(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127413fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1427c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106196270; end: 106196283; -[SCFeatureStartupDeferredPhotoOutputStartImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127413fc,0);
  return;
}



/* Entry: 106196284; end: 106196313; -[SCFeatureTeachingTooltipsImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106196284(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126effc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741400);
    *(undefined **)((long)puVar1 + (long)_DAT_112741400) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741404);
    *(undefined **)((long)puVar1 + (long)_DAT_112741404) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106196314; end: 10619637f; -[SCFeatureTeachingTooltipsImpl insertTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741404;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c09faa0(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112741400));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 106196380; end: 1061963eb; -[SCFeatureTeachingTooltipsImpl removeTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741404;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c09faa0(uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112741400));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1061963ec; end: 106196433; -[SCFeatureTeachingTooltipsImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061963ec(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112741404;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_112741400));
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 106196434; end: 106196543; -[SCFeatureTeachingTooltipsImpl someNotDisplayed:] */

undefined1 * FUN_106196434(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
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
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (lVar7 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar8 * 8);
        func_0x00010c070c60();
        if (iVar1 == 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_1061964fc;
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_1061964fc:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(puVar4);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_210;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        uVar3 = *(ulong *)(lStack_218 + (long)puVar9 * 8);
        func_0x00010c070c60();
        if ((uVar3 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619660c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = (undefined1 *)puVar4;
      puVar5 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619660c:
  _objc_release(puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_330;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar5);
  puVar2 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_320;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar7) {
          _objc_enumerationMutation(puVar5);
        }
        uVar3 = *(ulong *)(lStack_328 + (long)puVar9 * 8);
        func_0x00010c071800();
        if ((uVar3 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619671c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = (undefined1 *)puVar5;
      puVar4 = &uStack_330;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619671c:
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_440;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  _objc_retain(puVar4);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_430;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_438 + (long)puVar9 * 8);
        func_0x00010c071800();
        if (iVar1 == 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619682c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = (undefined1 *)puVar4;
      puVar5 = &uStack_440;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619682c:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar9 = (undefined1 *)puVar5;
  func_0x00010c071800();
  if (((int)puVar9 != 0) &&
     (puVar9 = (undefined1 *)puVar5, func_0x00010c070c60(), ((ulong)puVar9 & 1) == 0)) {
    puVar9 = (undefined1 *)puVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c26aaa0();
    _objc_release(puVar9);
    if ((int)puVar2 != 0) {
      func_0x00010c235880(puVar5);
      puVar9 = (undefined1 *)puVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      _objc_opt_respondsToSelector();
      _objc_release(puVar9);
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00010bf6b020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa80();
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return (undefined1 *)puVar5;
}



/* Entry: 106196544; end: 106196653; -[SCFeatureTeachingTooltipsImpl someDisplayed:] */

undefined1 * FUN_106196544(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
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
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (lVar7 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar8 * 8);
        func_0x00010c070c60();
        if ((uVar2 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619660c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_3;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619660c:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_210;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(puVar5);
        }
        uVar2 = *(ulong *)(lStack_218 + (long)puVar9 * 8);
        func_0x00010c071800();
        if ((uVar2 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619671c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = (undefined1 *)puVar5;
      puVar4 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619671c:
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_330;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_320;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_328 + (long)puVar9 * 8);
        func_0x00010c071800();
        if (iVar1 == 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619682c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = (undefined1 *)puVar4;
      puVar5 = &uStack_330;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619682c:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar9 = (undefined1 *)puVar5;
  func_0x00010c071800();
  if (((int)puVar9 != 0) &&
     (puVar9 = (undefined1 *)puVar5, func_0x00010c070c60(), ((ulong)puVar9 & 1) == 0)) {
    puVar9 = (undefined1 *)puVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c26aaa0();
    _objc_release(puVar9);
    if ((int)puVar3 != 0) {
      func_0x00010c235880(puVar5);
      puVar9 = (undefined1 *)puVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      _objc_opt_respondsToSelector();
      _objc_release(puVar9);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bf6b020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa80();
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return (undefined1 *)puVar5;
}



/* Entry: 106196654; end: 106196763; -[SCFeatureTeachingTooltipsImpl someEnabled:] */

undefined1 * FUN_106196654(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
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
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (lVar7 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar8 * 8);
        func_0x00010c071800();
        if ((uVar2 & 1) != 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619671c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619671c:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  puVar9 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_210;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(puVar4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_218 + (long)puVar9 * 8);
        func_0x00010c071800();
        if (iVar1 == 0) {
          puVar9 = (undefined1 *)0x1;
          goto LAB_10619682c;
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = (undefined1 *)puVar4;
      puVar5 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
    puVar9 = (undefined1 *)0x0;
  }
LAB_10619682c:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar9 = (undefined1 *)puVar5;
  func_0x00010c071800();
  if (((int)puVar9 != 0) &&
     (puVar9 = (undefined1 *)puVar5, func_0x00010c070c60(), ((ulong)puVar9 & 1) == 0)) {
    puVar9 = (undefined1 *)puVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c26aaa0();
    _objc_release(puVar9);
    if ((int)puVar3 != 0) {
      func_0x00010c235880(puVar5);
      puVar9 = (undefined1 *)puVar4;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      _objc_opt_respondsToSelector();
      _objc_release(puVar9);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bf6b020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa80();
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return (undefined1 *)puVar5;
}



/* Entry: 106196764; end: 106196873; -[SCFeatureTeachingTooltipsImpl someDisabled:] */

undefined1 * FUN_106196764(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
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
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf52a60();
  puVar4 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      uVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + uVar6 * 8);
        func_0x00010c071800();
        if (iVar1 == 0) {
          puVar4 = (undefined1 *)0x1;
          goto LAB_10619682c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    puVar4 = (undefined1 *)0x0;
  }
LAB_10619682c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar4 = (undefined1 *)puVar3;
  func_0x00010c071800();
  if (((int)puVar4 != 0) &&
     (puVar4 = (undefined1 *)puVar3, func_0x00010c070c60(), ((ulong)puVar4 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c26aaa0();
    _objc_release(uVar2);
    if ((int)uVar6 != 0) {
      func_0x00010c235880(puVar3);
      uVar2 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar6 & 1) != 0) {
        func_0x00010bf6b020(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa80();
        _objc_release(param_3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return (undefined1 *)puVar3;
}



/* Entry: 106196874; end: 10619695f; -[SCFeatureTeachingTooltipsImpl displayIfNeeded:animated:] */

void FUN_106196874(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071800();
  if (((int)uVar1 != 0) && (uVar1 = param_3, func_0x00010c070c60(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26aaa0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c235880(param_3);
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa80();
        _objc_release(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106196960; end: 106196a07; -[SCFeatureTeachingTooltipsImpl hide:animated:] */

void FUN_106196960(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c070c60();
  if ((int)uVar1 != 0) {
    func_0x00010bfe1580(param_3);
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26aa80();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106196a08; end: 106196b03; -[SCFeatureTeachingTooltipsImpl hideAll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196a08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_1;
  func_0x00010bdf73c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bfe15a0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8),0);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = (long)_DAT_112741404;
  func_0x00010c09faa0(*(undefined8 *)(lVar1 + lVar3));
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112741400);
  func_0x00010bf51e00(uVar2);
  func_0x00010c280b40(*(undefined8 *)(lVar1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106196b04; end: 106196b57; -[SCFeatureTeachingTooltipsImpl _currentTooltips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196b04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741404;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741400);
  func_0x00010bf51e00(uVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106196b58; end: 106196b77; -[SCFeatureTeachingTooltipsImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196b58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106196b78; end: 106196b8b; -[SCFeatureTeachingTooltipsImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196b78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741408,param_3);
  return;
}


