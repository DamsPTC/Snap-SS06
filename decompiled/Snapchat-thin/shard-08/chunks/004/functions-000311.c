/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10616367c; end: 1061636bf; -[SCFeatureDirectorModeVerticalToolbar beginTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616367c(long param_1)

{
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_112740984));
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4046000000000000,*(undefined8 *)(param_1 + _DAT_112740988),
             PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1061636c0; end: 1061636cf; -[SCFeatureDirectorModeVerticalToolbar shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061636c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be44b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__isTouchAtPoint_withinSubview__11256ec70,
             *(undefined8 *)(param_1 + _DAT_112740984));
  return;
}



/* Entry: 1061636d0; end: 1061637ab; -[SCFeatureDirectorModeVerticalToolbar _isTouchAtPoint:withinSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061636d0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  double dVar3;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11274097c);
  func_0x00010bfe12e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2);
  dVar3 = param_1;
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  if (dVar3 <= param_1) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf20c00(param_5);
    _CGRectGetMaxX();
    uVar2 = (uint)(dVar3 + -44.0 < param_1);
  }
  uVar1 = param_5;
  func_0x00010c102b20(param_1,param_2,param_5,param_4,0);
  _objc_release(param_5);
  return (uint)uVar1 & uVar2;
}



/* Entry: 1061637ac; end: 1061637fb; -[SCFeatureDirectorModeVerticalToolbar dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061637ac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112740978));
  puStack_28 = PTR_PTR_1126efe78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061637fc; end: 1061637ff; -[SCFeatureDirectorModeVerticalToolbar addToolbarItem:] */

void FUN_1061637fc(void)

{
  return;
}



/* Entry: 106163800; end: 106163807; -[SCFeatureDirectorModeVerticalToolbar buttonForToolbarItem:] */

undefined8 FUN_106163800(void)

{
  return 0;
}



/* Entry: 106163808; end: 10616380b; -[SCFeatureDirectorModeVerticalToolbar cancelActiveToolbarGestures] */

void FUN_106163808(void)

{
  return;
}



/* Entry: 10616380c; end: 10616380f; -[SCFeatureDirectorModeVerticalToolbar collapseToolbarAnimated:] */

void FUN_10616380c(void)

{
  return;
}



/* Entry: 106163810; end: 106163813; -[SCFeatureDirectorModeVerticalToolbar hideToolbarItem:animated:] */

void FUN_106163810(void)

{
  return;
}



/* Entry: 106163814; end: 10616381b; -[SCFeatureDirectorModeVerticalToolbar isItemHidden:] */

undefined8 FUN_106163814(void)

{
  return 0;
}



/* Entry: 10616381c; end: 10616381f; -[SCFeatureDirectorModeVerticalToolbar reloadToolbar:] */

void FUN_10616381c(void)

{
  return;
}



/* Entry: 106163820; end: 106163823; -[SCFeatureDirectorModeVerticalToolbar setAllItemsHidden:includingAlwaysShowItems:animated:] */

void FUN_106163820(void)

{
  return;
}



/* Entry: 106163824; end: 106163827; -[SCFeatureDirectorModeVerticalToolbar setToolbarItem:selected:] */

void FUN_106163824(void)

{
  return;
}



/* Entry: 106163828; end: 10616382b; -[SCFeatureDirectorModeVerticalToolbar setToolbarItem:selected:animatedScaling:] */

void FUN_106163828(void)

{
  return;
}



/* Entry: 10616382c; end: 10616382f; -[SCFeatureDirectorModeVerticalToolbar showToolbarItem:animated:] */

void FUN_10616382c(void)

{
  return;
}



/* Entry: 106163830; end: 106163833; -[SCFeatureDirectorModeVerticalToolbar tapToolbarItem:] */

void FUN_106163830(void)

{
  return;
}



/* Entry: 106163834; end: 106163837; -[SCFeatureDirectorModeVerticalToolbar updateToolbarPositionAnimated:duration:] */

void FUN_106163834(void)

{
  return;
}



/* Entry: 106163838; end: 10616383f; -[SCFeatureDirectorModeVerticalToolbar viewForToolbarItem:] */

undefined8 FUN_106163838(void)

{
  return 0;
}



/* Entry: 106163840; end: 106163843; -[SCFeatureDirectorModeVerticalToolbar setToolbarItemWithUIItem:selected:animatedScaling:] */

void FUN_106163840(void)

{
  return;
}



/* Entry: 106163844; end: 106163847; -[SCFeatureDirectorModeVerticalToolbar pinToolbarItemsToTopFromFeatures:requester:] */

void FUN_106163844(void)

{
  return;
}



/* Entry: 106163848; end: 10616384b; -[SCFeatureDirectorModeVerticalToolbar unpinToolbarItemsFromTopFromFeatures:requester:] */

void FUN_106163848(void)

{
  return;
}



/* Entry: 10616384c; end: 10616384f; -[SCFeatureDirectorModeVerticalToolbar startAnimation:] */

void FUN_10616384c(void)

{
  return;
}



/* Entry: 106163850; end: 106163857; -[SCFeatureDirectorModeVerticalToolbar indexOfItem:] */

undefined8 FUN_106163850(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 106163858; end: 10616385f; -[SCFeatureDirectorModeVerticalToolbar isNewRecentSlotEnabled] */

undefined8 FUN_106163858(void)

{
  return 0;
}



/* Entry: 106163860; end: 106163953; -[SCFeatureDirectorModeVerticalToolbar _didReceiveFeatureUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c85d0;
  _objc_alloc(PTR_PTR_1126c85d0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740960);
  func_0x00010c0d0300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11274098c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200760(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_1;
  func_0x00010bdca560(param_1);
  func_0x00010c0df6e0(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167aa0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112740984),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106163954; end: 106163eff; -[SCFeatureDirectorModeVerticalToolbar _setupToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163954(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c85d0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740960);
  func_0x00010c0d0300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb820();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200760(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bdca560(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167aa0(puVar1);
  _objc_release(puVar3);
  _objc_initWeak(auStack_a8,param_1);
  puVar3 = PTR_PTR_1126c85d8;
  _objc_alloc_init();
  puVar21 = auStack_a8;
  _objc_copyWeak(auStack_b0);
  func_0x00010c1d4080(puVar3);
  lVar26 = (long)_DAT_112740984;
  if (*(long *)(param_1 + lVar26) == 0) {
    puVar4 = PTR_PTR_1126c85e0;
    _objc_alloc();
    lVar23 = param_1 + _DAT_112740968;
    _objc_loadWeakRetained(lVar23);
    lVar24 = lVar23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar2 = *(undefined8 *)(param_1 + lVar26);
    *(undefined **)(param_1 + lVar26) = puVar4;
    _objc_release(uVar2);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar26));
    puVar4 = PTR_PTR_1126c4b80;
    _objc_alloc_init();
    lVar23 = (long)_DAT_112740980;
    uVar2 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar4;
    _objc_release(uVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar23));
    lVar24 = (long)_DAT_11274097c;
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010bfe12e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
    uVar5 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c1408a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_112740988;
    uVar22 = *(undefined8 *)(param_1 + lVar25);
    *(undefined8 *)(param_1 + lVar25) = uVar2;
    _objc_release(uVar22);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = *(undefined8 *)(param_1 + lVar25);
    uVar9 = *(undefined8 *)(param_1 + lVar23);
    uStack_a0 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar23);
    uStack_90 = uVar22;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar26);
    uStack_88 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c274200(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar26);
    uStack_80 = uVar15;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar22);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    func_0x00010c2226c0();
  }
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar21);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar20 = puVar21;
    func_0x00010b9688dc();
    _objc_retainAutoreleasedReturnValue();
    if (puVar20 != (undefined1 *)0x0) {
      func_0x00010c273860(*(undefined8 *)(puVar1 + _DAT_112740960));
    }
    _objc_release(puVar20);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar21);
  return;
}



/* Entry: 106163f00; end: 106163f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163f00(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010b9688dc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c273860(*(undefined8 *)(param_1 + _DAT_112740960));
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106163f88; end: 106163fcf; -[SCFeatureDirectorModeVerticalToolbar _alwaysHideFlipLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106163f88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740974);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106163fd0; end: 106163fdf; -[SCFeatureDirectorModeVerticalToolbar isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106163fd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274095c);
}



/* Entry: 106163fe0; end: 106163fef; -[SCFeatureDirectorModeVerticalToolbar cameraToolbarExpandCollapse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106163fe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740990);
}



/* Entry: 106163ff0; end: 106163fff; -[SCFeatureDirectorModeVerticalToolbar cameraToolbarItemTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106163ff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740994);
}



/* Entry: 106164000; end: 10616400f; -[SCFeatureDirectorModeVerticalToolbar cameraModeLabelsWillShowObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106164000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740998);
}



/* Entry: 106164010; end: 10616401f; -[SCFeatureDirectorModeVerticalToolbar cameraToolbarVisibilityObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106164010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274099c);
}



/* Entry: 106164020; end: 106164133; -[SCFeatureDirectorModeVerticalToolbar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164020(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274099c,0);
  _objc_storeStrong(param_1 + _DAT_112740998,0);
  _objc_storeStrong(param_1 + _DAT_112740994,0);
  _objc_storeStrong(param_1 + _DAT_112740990,0);
  _objc_storeStrong(param_1 + _DAT_1127409a0,0);
  _objc_storeStrong(param_1 + _DAT_112740974,0);
  _objc_storeStrong(param_1 + _DAT_112740984,0);
  _objc_storeStrong(param_1 + _DAT_112740980,0);
  _objc_storeStrong(param_1 + _DAT_112740988,0);
  _objc_storeStrong(param_1 + _DAT_11274097c,0);
  _objc_storeStrong(param_1 + _DAT_112740978,0);
  _objc_storeStrong(param_1 + _DAT_112740970,0);
  _objc_destroyWeak(param_1 + _DAT_11274096c);
  _objc_destroyWeak(param_1 + _DAT_112740968);
  _objc_destroyWeak(param_1 + _DAT_112740964);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740960,0);
  return;
}



/* Entry: 106164134; end: 106164313; -[SCFeatureFingerDownCaptureImpl initWithCameraHardwareResource:videoDataSourceObserver:cameraLensProvider:cameraType:cameraMLConfiguration:cameraModeActivationController:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106164134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126efe80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127409a4) = 0;
    lVar4 = (long)_DAT_1127409a8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127409ac;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127409b0) = param_6;
    lVar4 = (long)_DAT_1127409b4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127409b8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127409bc),param_8);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127409c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127409c0) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127409c4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127409c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127409c8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106164314; end: 106164363; -[SCFeatureFingerDownCaptureImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164314(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127409a8);
  func_0x00010c0b7ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec0a60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec09f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObservingAppLifecycleEvent_11258dc20);
  return;
}



/* Entry: 106164364; end: 106164503; -[SCFeatureFingerDownCaptureImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127409cc;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106164504;
    puStack_78 = &UNK_11090d050;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_copyWeak(auStack_98,auStack_68);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106164504; end: 1061645f3;  */

void FUN_106164504(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_1061645f4;
  puStack_50 = &UNK_11090d020;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1061645f4; end: 10616465b;  */

void FUN_1061645f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616465c; end: 10616471f;  */

void FUN_10616465c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106164720; end: 10616475b;  */

void FUN_106164720(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec3340(param_1);
    func_0x00010bddf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616475c; end: 1061647bb; -[SCFeatureFingerDownCaptureImpl retrieveFingerDownData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616475c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127409a4;
  _os_unfair_lock_lock(param_1 + lVar3);
  lVar4 = (long)_DAT_1127409d0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061647bc; end: 106164963; -[SCFeatureFingerDownCaptureImpl forwardCameraTimerGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061647bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if ((lVar2 == 1) && (lVar2 = param_1, func_0x00010beb3700(), (int)lVar2 != 0)) {
    *(undefined1 *)(param_1 + _DAT_1127409d4) = 1;
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127409a8);
    func_0x00010c11dfc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106164964;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar3);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1061649c0;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_58);
    ppuVar4 = &puStack_a8;
    _objc_retainBlock(ppuVar4);
    func_0x000100c749e0(0x3f800000,"APPSTORE",ppuVar4);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if ((lVar2 == 3) || (lVar2 = param_3, func_0x00010c252440(), lVar2 == 4)) {
      func_0x00010bec3340(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106164964; end: 1061649f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164964(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127409a8);
    func_0x00010c299c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa260();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061649f4; end: 106164adb; -[SCFeatureFingerDownCaptureImpl startObservingManagedVideoDataSourceOutputEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061649f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127409d8;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106164adc; end: 106164b87;  */

void FUN_106164adc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106164b88; end: 106164c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_1127409d4) == '\x01')) {
    func_0x00010c1494c0(param_2);
    _CFRetain();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127409c8);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106164c64; end: 106164dc7;  */

/* WARNING: Removing unreachable block (ram,0x000106164d84) */

void FUN_106164c64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x00010be6e5a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c1494c0(*(undefined8 *)(param_1 + 0x28));
  _CMSampleBufferGetImageBuffer();
  func_0x00010bfe96e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1494c0(*(undefined8 *)(param_1 + 0x28));
  func_0x000100709e4c();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1494c0(uVar2);
  func_0x000109046798();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  func_0x00010c1d0640(uVar3);
  puVar4 = PTR_PTR_1126c85e8;
  _objc_alloc(PTR_PTR_1126c85e8);
  func_0x00010c01c1a0(uStack_38,uStack_34);
  func_0x00010bec3e80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c1494c0(*(undefined8 *)(param_1 + 0x28));
  _CFRelease();
  return;
}



/* Entry: 106164dc8; end: 106164e13; -[SCFeatureFingerDownCaptureImpl stopObservingManagedVideoDataSourceOutputEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164dc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127409d8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_1127409d4) = 0;
  return;
}



/* Entry: 106164e14; end: 106164e77; -[SCFeatureFingerDownCaptureImpl _stopObservingCameraFrames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164e14(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_1127409d4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127409a8);
    func_0x00010c299c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c256490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopObservingManagedVideoDataSou_112673348)
    ;
    return;
  }
  return;
}



/* Entry: 106164e78; end: 106164fe3; -[SCFeatureFingerDownCaptureImpl _startObservingCapturerStateUpdateWithManagedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106164e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar6 = (long)_DAT_1127409dc;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106164fe4; end: 1061650df;  */

void FUN_106164fe4(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_1061650e0;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e6580(param_2);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e2d80(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1061650e0; end: 106165147;  */

void FUN_1061650e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106165148; end: 106165243; -[SCFeatureFingerDownCaptureImpl _startObservingAppLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106165148(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127409c4);
  func_0x00010c2a6a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106165244; end: 106165277;  */

void FUN_106165244(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddf3e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106165278; end: 1061654c3; -[SCFeatureFingerDownCaptureImpl _shouldEnableFingerDownCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106165278(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar8 = param_1;
  func_0x00010bdc5220();
  if (lVar8 == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127409a8);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bfb24e0();
    uVar7 = (uint)uVar1;
    _objc_release(uVar5);
  }
  else {
    uVar7 = 1;
  }
  lVar2 = *(long *)(param_1 + _DAT_1127409b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar8 = param_1 + _DAT_1127409bc;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c270740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_1 + _DAT_1127409b0);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0be6c0(lVar4);
  if (lVar3 != 0) {
    uVar7 = 1;
  }
  if ((uVar7 & 1) == 0) {
    uVar7 = 0;
    if (((*(byte *)(puStack_68 + 3) & 1) == 0) && (lVar8 != 0xb)) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127409b4);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_1127409a8);
      func_0x00010c252440(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf70d80();
      uVar1 = uVar5;
      func_0x00010c22df80(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar7 = (uint)uVar1 ^ 1;
    }
  }
  else {
    uVar7 = 0;
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(lVar4);
  return uVar7;
}



/* Entry: 1061654c4; end: 1061654eb;  */

void FUN_1061654c4(void)

{
  return;
}



/* Entry: 1061654ec; end: 1061655b3; -[SCFeatureFingerDownCaptureImpl _orientationOfImageCreatedFromVideoSourceWithDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061654ec(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127409a8;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29a740();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c299c60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29f620();
  func_0x000100709514(uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c076b60();
  if (iVar1 != 0) {
    puVar6 = PTR_PTR_1126aff08;
    func_0x00010c06cea0();
    if (((ulong)puVar6 & 1) == 0) {
      if (uVar3 < 8) {
        return *(ulong *)(&UNK_10dfb2a20 + uVar3 * 8);
      }
      return 7;
    }
  }
  return uVar3;
}



/* Entry: 1061655b4; end: 10616560b; -[SCFeatureFingerDownCaptureImpl _storeData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061655b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127409a4;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127409d0);
  *(undefined8 *)(param_1 + _DAT_1127409d0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 10616560c; end: 10616565f; -[SCFeatureFingerDownCaptureImpl _cleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616560c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127409d4) = 0;
  lVar2 = (long)_DAT_1127409a4;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127409d0);
  *(undefined8 *)(param_1 + _DAT_1127409d0) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 106165660; end: 10616576f; -[SCFeatureFingerDownCaptureImpl _activeFlashMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106165660(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127409a8;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c141120();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 == 2) {
    lVar3 = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c141120();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar3 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1410c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c141120();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 3) {
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}



/* Entry: 106165770; end: 106165783; -[SCFeatureFingerDownCaptureImpl isObservingFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106165770(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127409d4) & 1;
}



/* Entry: 106165784; end: 106165793; -[SCFeatureFingerDownCaptureImpl setIsObservingFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106165784(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127409d4) = param_3;
  return;
}



/* Entry: 106165794; end: 10616586f; -[SCFeatureFingerDownCaptureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106165794(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127409c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127409bc);
  _objc_storeStrong(param_1 + _DAT_1127409b4,0);
  _objc_storeStrong(param_1 + _DAT_1127409d8,0);
  _objc_storeStrong(param_1 + _DAT_1127409c0,0);
  _objc_storeStrong(param_1 + _DAT_1127409dc,0);
  _objc_storeStrong(param_1 + _DAT_1127409ac,0);
  _objc_storeStrong(param_1 + _DAT_1127409c8,0);
  _objc_storeStrong(param_1 + _DAT_1127409d0,0);
  _objc_storeStrong(param_1 + _DAT_1127409b8,0);
  _objc_storeStrong(param_1 + _DAT_1127409cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127409a8,0);
  return;
}



/* Entry: 106165870; end: 10616598f; -[SCFeatureFocusModeControlImpl initWithCameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106165870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126efe88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127409e0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127409e4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127409e8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127409ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127409ec) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106165990; end: 1061659d3; -[SCFeatureFocusModeControlImpl dealloc] */

void FUN_106165990(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126efe88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061659d4; end: 106165ae7; -[SCFeatureFocusModeControlImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061659d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + _DAT_1127409f0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127409f0) = 1;
  lVar8 = (long)_DAT_1127409e0;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,uVar2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106165ae8; end: 106165dd7; -[SCFeatureFocusModeControlImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106165ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_1127409f4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106165dd8;
    puStack_90 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106165f74;
    puStack_b8 = &UNK_110872b30;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106165dd8; end: 106165ed3;  */

void FUN_106165dd8(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_106165ed4;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e38e0(param_2);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e39a0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106165ed4; end: 106165f73;  */

void FUN_106165ed4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed82c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106165f74; end: 106166017;  */

void FUN_106165f74(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106166018; end: 1061660a3;  */

void FUN_106166018(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed82c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061660a4; end: 1061660d7; -[SCFeatureFocusModeControlImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061660a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127409f4;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061660d8; end: 106166223; -[SCFeatureFocusModeControlImpl _updateFocusModeWithState:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061660d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127409ec);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106166198;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106166224; end: 1061662eb; -[SCFeatureFocusModeControlImpl _modifyWhenFlashOnWithDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106166224(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    return;
  }
  lVar6 = (long)_DAT_1127409e8;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3600();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 2) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb35a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7fce0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + _DAT_1127409f8) = 1;
  }
  return;
}



/* Entry: 1061662ec; end: 10616636f; -[SCFeatureFocusModeControlImpl _resetWithDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061662ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    return;
  }
  lVar3 = (long)_DAT_1127409f8;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127409e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb35a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8fba0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 106166370; end: 1061663df; -[SCFeatureFocusModeControlImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106166370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127409f4,0);
  _objc_storeStrong(param_1 + _DAT_1127409ec,0);
  _objc_storeStrong(param_1 + _DAT_1127409e8,0);
  _objc_storeStrong(param_1 + _DAT_1127409e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127409e0,0);
  return;
}



/* Entry: 1061663e0; end: 106166423; -[SCFeatureFourByThreeAspectRatioImpl dealloc] */

void FUN_1061663e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126efe90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106166424; end: 106166517; -[SCFeatureFourByThreeAspectRatioImpl forwardPinchGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106166424(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    fVar3 = *(float *)(param_1 + _DAT_112740a3c);
    uVar4 = 0;
    if (((fVar3 != 1.0) || (func_0x00010c2979e0(param_3), 0.0 <= (double)CONCAT44(uVar4,fVar3))) ||
       (*(char *)(param_1 + _DAT_112740a14) == '\x01')) {
      bVar2 = *(byte *)(param_1 + _DAT_112740a14);
    }
    else {
      bVar2 = 1;
    }
    *(byte *)(param_1 + _DAT_112740a48) = bVar2 & 1;
    func_0x00010c2979e0(param_3);
    *(float *)(param_1 + _DAT_112740a54) = (float)(double)CONCAT44(uVar4,fVar3);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252440();
    if ((lVar1 == 2) && (*(char *)(param_1 + _DAT_112740a48) == '\x01')) {
      func_0x00010c2979e0(param_3);
      func_0x00010be2dfc0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106166518; end: 106166667; -[SCFeatureFourByThreeAspectRatioImpl _canRespondToPinches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106166518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740a28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((((*(byte *)(puStack_48 + 3) & 1) == 0) && (*(char *)(param_1 + _DAT_112740a64) == '\x01')) &&
     ((*(byte *)(param_1 + _DAT_112740a44) & 1) == 0)) {
    if (*(long *)(param_1 + _DAT_112740a5c) != 0) {
      uVar2 = 1;
      goto LAB_10616662c;
    }
    func_0x00010bf9d480(*(undefined8 *)(param_1 + _DAT_112740a58));
  }
  uVar2 = 0;
LAB_10616662c:
  __Block_object_dispose(&uStack_50,8);
  return uVar2;
}



/* Entry: 106166668; end: 106166683;  */

void FUN_106166668(void)

{
  return;
}



/* Entry: 106166684; end: 106166757; -[SCFeatureFourByThreeAspectRatioImpl _handlePinchGestureWithVelocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106166684(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_2 + (long)_DAT_112740a48) = 0;
  if (((param_1 <= 0.0) || (*(float *)(param_2 + (long)_DAT_112740a54) <= 0.0)) ||
     (*(char *)(param_2 + (long)_DAT_112740a14) != '\x01')) {
    if (((param_1 < 0.0) && (*(float *)(param_2 + (long)_DAT_112740a54) < 0.0)) &&
       ((*(float *)(param_2 + (long)_DAT_112740a3c) == 1.0 &&
        (((*(byte *)(param_2 + (long)_DAT_112740a14) & 1) == 0 &&
         (uVar1 = param_2, func_0x00010bdd9ec0(), (int)uVar1 != 0)))))) {
      uVar2 = 1;
LAB_106166738:
                    /* WARNING: Could not recover jumptable at 0x00010bea40f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__setFourByThreeAspectRatioActiva_1125869e0,uVar2,1);
      return;
    }
  }
  else {
    uVar1 = param_2;
    func_0x00010bdd9ec0();
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      goto LAB_106166738;
    }
  }
  return;
}



/* Entry: 106166758; end: 1061671eb; -[SCFeatureFourByThreeAspectRatioImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106166758(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_430 [8];
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [8];
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_328 [8];
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar9 = (long)_DAT_112740a68;
  if (*(long *)(param_2 + lVar9) == 0) {
    lVar1 = param_5;
    func_0x00010bf70d80();
    lVar8 = (long)_DAT_112740a64;
    *(bool *)(param_2 + lVar8) = lVar1 == 0;
    func_0x00010c2bf100(param_5);
    *(undefined4 *)(param_2 + _DAT_112740a3c) = param_1;
    _objc_initWeak(auStack_80,param_2);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uStack_c8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = *(undefined1 *)(param_2 + lVar8);
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uStack_128 = 0;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_2 + lVar9);
    *(undefined **)(param_2 + lVar9) = puVar2;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112740a6c;
    if (*(long *)(param_2 + lVar9) == 0) {
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_2 + lVar9);
      *(undefined **)(param_2 + lVar9) = puVar2;
      _objc_release(uVar7);
      uVar7 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c160440();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_1061671ec;
      puStack_180 = &UNK_110911380;
      puStack_178 = &uStack_120;
      _objc_copyWeak(auStack_148,auStack_80);
      puStack_170 = &uStack_a0;
      puStack_168 = &uStack_c0;
      puStack_160 = &uStack_e0;
      puStack_158 = &uStack_100;
      puStack_150 = &uStack_140;
      uVar6 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      uVar7 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010bf70e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e8 = 0xc2000000;
      pcStack_1e0 = FUN_10616744c;
      puStack_1d8 = &UNK_110911410;
      _objc_copyWeak(auStack_1a0,auStack_80);
      puStack_1d0 = &uStack_a0;
      puStack_1c8 = &uStack_c0;
      puStack_1c0 = &uStack_e0;
      puStack_1b8 = &uStack_100;
      puStack_1b0 = &uStack_120;
      puStack_1a8 = &uStack_140;
      uVar6 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      uVar7 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0c42e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_210 = 0xc2000000;
      pcStack_208 = FUN_106167668;
      puStack_200 = &UNK_11084e400;
      _objc_copyWeak(auStack_1f8,auStack_80);
      uVar6 = uVar4;
      func_0x00010c25ff60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      lVar9 = param_2 + _DAT_112740a18;
      _objc_loadWeakRetained(lVar9);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_1061678cc;
      puStack_258 = &UNK_110911470;
      puVar5 = auStack_220;
      _objc_copyWeak(puVar5,auStack_80);
      puStack_250 = &uStack_100;
      puStack_248 = &uStack_a0;
      puStack_240 = &uStack_c0;
      puStack_238 = &uStack_e0;
      puStack_230 = &uStack_120;
      puStack_228 = &uStack_140;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(lVar9);
      _objc_release(puVar5);
      _objc_release(lVar9);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112740a1c);
      puStack_2c8 = puVar2;
      uStack_2c0 = 0xc2000000;
      uStack_2b8 = 0x106167b34;
      puStack_2b0 = &UNK_1109114a0;
      puStack_2a8 = &uStack_c0;
      _objc_copyWeak(auStack_278,auStack_80);
      puStack_2a0 = &uStack_a0;
      puStack_298 = &uStack_e0;
      puStack_290 = &uStack_100;
      puStack_288 = &uStack_120;
      puStack_280 = &uStack_140;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112740a20);
      puStack_320 = puVar2;
      uStack_318 = 0xc2000000;
      uStack_310 = 0x106167bc8;
      puStack_308 = &UNK_110911440;
      puStack_300 = &uStack_e0;
      _objc_copyWeak(auStack_2d0,auStack_80);
      puStack_2f8 = &uStack_a0;
      puStack_2f0 = &uStack_c0;
      puStack_2e8 = &uStack_100;
      puStack_2e0 = &uStack_120;
      puStack_2d8 = &uStack_140;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_2 + _DAT_112740a28);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf4fd60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_378 = puVar2;
      uStack_370 = 0xc2000000;
      pcStack_368 = FUN_106167c48;
      puStack_360 = &UNK_110911440;
      _objc_copyWeak(auStack_328,auStack_80);
      puStack_358 = &uStack_140;
      puStack_350 = &uStack_a0;
      puStack_348 = &uStack_c0;
      puStack_340 = &uStack_e0;
      puStack_338 = &uStack_100;
      puStack_330 = &uStack_120;
      uVar4 = uVar7;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112740a2c);
      puStack_3a0 = puVar2;
      uStack_398 = 0xc2000000;
      pcStack_390 = FUN_106167df0;
      puStack_388 = &UNK_11090b470;
      _objc_copyWeak(auStack_380,auStack_80);
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112740a30);
      puStack_3c8 = puVar2;
      uStack_3c0 = 0xc2000000;
      pcStack_3b8 = FUN_106167f4c;
      puStack_3b0 = &UNK_110842a38;
      _objc_copyWeak(auStack_3a8,auStack_80);
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release();
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_428 = puVar2;
      uStack_420 = 0xc2000000;
      uStack_418 = 0x106167fbc;
      puStack_410 = &UNK_110911550;
      puStack_400 = &uStack_120;
      _objc_retain(param_5);
      lStack_408 = param_5;
      _objc_copyWeak(auStack_3d0,auStack_80);
      puStack_3f8 = &uStack_a0;
      puStack_3f0 = &uStack_c0;
      puStack_3e8 = &uStack_e0;
      puStack_3e0 = &uStack_100;
      puStack_3d8 = &uStack_140;
      func_0x00010c0f7fc0(uVar7);
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_2 + _DAT_112740a00);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c299c80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfb26a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_430,auStack_80);
      uVar7 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_430);
      _objc_destroyWeak(auStack_3d0);
      _objc_release(lStack_408);
      _objc_destroyWeak(auStack_3a8);
      _objc_destroyWeak(auStack_380);
      _objc_destroyWeak(auStack_328);
      _objc_destroyWeak(auStack_2d0);
      _objc_destroyWeak(auStack_278);
      _objc_destroyWeak(auStack_220);
      _objc_destroyWeak(auStack_1f8);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_148);
    }
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    __Block_object_dispose(&uStack_100,8);
    __Block_object_dispose(&uStack_e0,8);
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1061671ec; end: 1061672ab;  */

void FUN_1061671ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x50);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061672ac; end: 10616744b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061672ac(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf70d80();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2 == 0;
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee24a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112740a64) =
         *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10616744c; end: 10616755b;  */

void FUN_10616744c(long param_1,undefined8 param_2)

{
  undefined1 auStack_a0 [8];
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
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10616755c;
  puStack_80 = &UNK_1109113b0;
  _objc_copyWeak(auStack_48,param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e3b80(param_2);
  _objc_copyWeak(auStack_a0,param_1 + 0x50);
  func_0x00010c0e3a00(param_2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10616755c; end: 10616760f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616755c(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
    func_0x00010bee24a0(lVar1);
    if (((param_2 & 1) == 0) && (*(char *)(lVar1 + _DAT_112740a14) == '\x01')) {
      func_0x00010bea40e0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106167610; end: 106167667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106167610(undefined4 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010c2bf100(param_3);
    *(undefined4 *)(param_2 + _DAT_112740a3c) = param_1;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106167668; end: 10616780b;  */

void FUN_106167668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10616780c;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10616783c;
  puStack_88 = &UNK_11090b560;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e7c40(param_2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10616786c;
  puStack_b0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_d0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10616780c; end: 1061678cb;  */

void FUN_10616780c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061678cc; end: 106167a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061678cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar2 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0e0ec0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x50);
    lVar6 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106167a6c; end: 106167c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106167a6c(long param_1,undefined1 param_2)

{
  long lVar1;
  
  func_0x00010bf1f3c0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee24a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112740a70) =
         *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
    func_0x00010bea40e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106167c48; end: 106167dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106167c48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112740a28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4fce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be6c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
         *(undefined1 *)(puStack_58 + 3);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee24a0();
    _objc_release(param_1);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106167dd4; end: 106167def;  */

void FUN_106167dd4(void)

{
  return;
}



/* Entry: 106167df0; end: 106167eeb;  */

void FUN_106167df0(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_106167eec;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106167eec; end: 106167f43;  */

void FUN_106167eec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee94c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106167f44; end: 106167f4b;  */

void FUN_106167f44(void)

{
  return;
}



/* Entry: 106167f4c; end: 106168143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106167f4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112740a34) = (char)uVar1;
    func_0x00010bea40e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106168144; end: 10616814b;  */

void FUN_106168144(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cameraRenderRegionObservable_1125a82e8);
  return;
}



/* Entry: 10616814c; end: 1061681f3;  */

void FUN_10616814c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1061681f4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


