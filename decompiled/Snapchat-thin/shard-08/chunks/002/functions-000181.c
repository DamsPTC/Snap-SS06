/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f2ccac; end: 105f2ccbf; -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForHalfTrayPosition] */

undefined8 FUN_105f2ccac(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105f2ccc0; end: 105f2ccd3; -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForTrayWithHeightRatio:] */

undefined8 FUN_105f2ccc0(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105f2ccd4; end: 105f2ccfb; -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:] */

void FUN_105f2ccd4(void)

{
  func_0x00010bf59b80();
  return;
}



/* Entry: 105f2ccfc; end: 105f2cd3f; -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f2ccfc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf59b20(param_1,param_2,0);
  return;
}



/* Entry: 105f2cd40; end: 105f2cd87; -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f2cd40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf59b20(param_1,0,param_2);
  return;
}



/* Entry: 105f2cd88; end: 105f2cec3; -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:actionBarDataSource:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f2cd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6020;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c008d60();
  _objc_release(param_6);
  func_0x00010bf59b20(param_1,param_2,0,param_3,param_4,param_5,puVar1,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105f2cec4; end: 105f2d1f3; -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:accessoryViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f2cec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  puVar1 = PTR_PTR_1126c6060;
  _objc_alloc(PTR_PTR_1126c6060);
  lVar2 = param_4 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c034140(puVar1);
  _objc_release(lVar2);
  _objc_initWeak(auStack_90,param_4);
  puVar3 = puVar1;
  func_0x00010c0687c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  puVar4 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126ae568;
  _objc_alloc_init(PTR_PTR_1126ae568);
  puVar6 = PTR_PTR_1126c6018;
  _objc_alloc(PTR_PTR_1126c6018);
  func_0x00010c01e660(param_1,param_2,param_3);
  func_0x00010befa120(*(undefined8 *)(param_4 + 0x20));
  func_0x00010c1d0560(*(undefined8 *)(param_4 + 0x28));
  puVar3 = PTR_PTR_1126ae750;
  uVar10 = *(undefined8 *)(param_4 + 0x30);
  puVar7 = puVar1;
  func_0x00010c27b740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c27b2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar9 = *(ulong *)(param_4 + 0x20);
  func_0x00010bf529e0();
  if ((1 < uVar9) && (uVar10 = param_8, func_0x00010bfe1e60(), (int)uVar10 != 0)) {
    func_0x00010be35aa0(param_4);
  }
  func_0x00010c219f00(puVar1);
  func_0x00010bdcdc60(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f2d1f4; end: 105f2d23b;  */

void FUN_105f2d1f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be324a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f2d23c; end: 105f2d263; -[SCMapTabletDemoMultiTrayManager activeTrayFeatureObservable] */

void FUN_105f2d23c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f2d264; end: 105f2d33f; -[SCMapTabletDemoMultiTrayManager currentActiveTrayFeature] */

void FUN_105f2d264(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5fb20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c089820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c068460();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c27b740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar6 = uVar5;
      func_0x00010c27b2c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      goto LAB_105f2d32c;
    }
  }
  uVar6 = 0;
LAB_105f2d32c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105f2d340; end: 105f2d343; -[SCMapTabletDemoMultiTrayManager parentViewControllerDidAppear] */

void FUN_105f2d340(void)

{
  return;
}



/* Entry: 105f2d344; end: 105f2d347; -[SCMapTabletDemoMultiTrayManager parentViewLayoutDidChange] */

void FUN_105f2d344(void)

{
  return;
}



/* Entry: 105f2d348; end: 105f2d38f; -[SCMapTabletDemoMultiTrayManager removeAllTraysAnimated:] */

void FUN_105f2d348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  func_0x00010c12ed60(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2d390; end: 105f2d397; -[SCMapTabletDemoMultiTrayManager removeTray:animated:] */

void FUN_105f2d390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeTray_animated_interactionM_112629570,param_3,param_4,0);
  return;
}



/* Entry: 105f2d398; end: 105f2d4bb; -[SCMapTabletDemoMultiTrayManager removeTray:animated:interactionMethod:] */

void FUN_105f2d398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f2d4bc;
  puStack_50 = &UNK_1108f9860;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfb2040(lVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x00010c068460(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1840();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf9a2e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c6028;
    func_0x00010c2a25a0(PTR_PTR_1126c6028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010be8d580(param_1,param_2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2d4bc; end: 105f2d4cb;  */

bool FUN_105f2d4bc(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105f2d4cc; end: 105f2d6fb; -[SCMapTabletDemoMultiTrayManager removeTraysWithLifecycles:animated:] */

void FUN_105f2d4cc(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf51e00();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar12 = *(long *)(lVar11 * 8);
      puVar7 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar7 != 0) {
        uVar8 = param_1;
        func_0x00010be41bc0();
        lVar9 = lVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar12 == lVar9) {
          func_0x00010be35f20(param_1);
        }
        else {
          func_0x00010be8d580(param_1);
        }
        if ((uVar8 & 1) == 0) {
          func_0x00010c12d360(puVar2);
          func_0x00010c12d360(lVar3);
          puVar7 = puVar2;
          func_0x00010bf529e0();
          if (puVar7 == (undefined *)0x0) goto LAB_105f2d650;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar6 != lVar11);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
LAB_105f2d650:
  _objc_release(lVar5);
  lVar6 = lVar3;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    if (lVar4 != 0) {
      func_0x00010be25900(param_1);
    }
  }
  else {
    lVar6 = lVar3;
    func_0x00010c089820(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be958e0(param_1);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be35f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f2d6fc; end: 105f2d703; -[SCMapTabletDemoMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:] */

void FUN_105f2d6fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideTrayWithState_animated_dest_11256b170);
  return;
}



/* Entry: 105f2d704; end: 105f2d7a3; -[SCMapTabletDemoMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:interactionMethod:] */

void FUN_105f2d704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5fb20();
  func_0x00010c1b8580(param_3,param_2,uVar2);
  _objc_release(uVar1);
  func_0x00010c2000e0(param_3,param_2,param_5);
  uVar1 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1840();
  _objc_release(uVar1);
  func_0x00010be8d580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2d7a4; end: 105f2d7a7; -[SCMapTabletDemoMultiTrayManager resizeTray:animated:] */

void FUN_105f2d7a4(void)

{
  return;
}



/* Entry: 105f2d7a8; end: 105f2d7ab; -[SCMapTabletDemoMultiTrayManager restoreTray:animated:] */

void FUN_105f2d7a8(void)

{
  return;
}



/* Entry: 105f2d7ac; end: 105f2d7b7; -[SCMapTabletDemoMultiTrayManager setParentViewController:defaultCameraProvider:] */

void FUN_105f2d7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105f2d7b8; end: 105f2d7bb; -[SCMapTabletDemoMultiTrayManager setTrayPosition:position:animated:] */

void FUN_105f2d7b8(void)

{
  return;
}



/* Entry: 105f2d7bc; end: 105f2d7bf; -[SCMapTabletDemoMultiTrayManager addFloatingAccessoryView:position:] */

void FUN_105f2d7bc(void)

{
  return;
}



/* Entry: 105f2d7c0; end: 105f2d7c3; -[SCMapTabletDemoMultiTrayManager removeFloatingAccessoryView] */

void FUN_105f2d7c0(void)

{
  return;
}



/* Entry: 105f2d7c4; end: 105f2d7cb; -[SCMapTabletDemoMultiTrayManager visibleTrayAccessoryHeight] */

undefined8 FUN_105f2d7c4(void)

{
  return 0;
}



/* Entry: 105f2d7cc; end: 105f2d7d3; -[SCMapTabletDemoMultiTrayManager visibleTrayHeight] */

undefined8 FUN_105f2d7cc(void)

{
  return 0;
}



/* Entry: 105f2d7d4; end: 105f2d7fb; -[SCMapTabletDemoMultiTrayManager trayHeightObservable] */

void FUN_105f2d7d4(void)

{
  _objc_alloc(PTR_PTR_1126ae820);
  func_0x00010c060400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f2d7fc; end: 105f2d807; -[SCMapTabletDemoMultiTrayManager trayHostFrameSize] */

undefined1  [16] FUN_105f2d7fc(void)

{
  return ZEXT816(0);
}



/* Entry: 105f2d808; end: 105f2d9c3; -[SCMapTabletDemoMultiTrayManager _removeState:] */

void FUN_105f2d808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c0687e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar6);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf9a2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c6028;
  func_0x00010c2a25a0(PTR_PTR_1126c6028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar1);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010c089820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c068460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27b740();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c27b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2d9c4; end: 105f2dabf; -[SCMapTabletDemoMultiTrayManager _hideOtherTraysForNewState:] */

void FUN_105f2d9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105f2da48;
  puStack_30 = &UNK_1108f9980;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2dac0; end: 105f2dbab; -[SCMapTabletDemoMultiTrayManager _applyCameraForState:context:] */

void FUN_105f2dac0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0b89a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0b89a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0baae0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b1e20;
      _objc_alloc(PTR_PTR_1126b1e20);
      func_0x00010c00eb00(0x3fd3333333333333);
      func_0x00010c176120(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2dbac; end: 105f2dc23; -[SCMapTabletDemoMultiTrayManager _handleTrayInteraction:] */

void FUN_105f2dbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f2dc24;
  puStack_20 = &UNK_1108f98c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105f2dd70;
  puStack_48 = &UNK_1108f98f0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c17e0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105f2dc24; end: 105f2de1b;  */

void FUN_105f2dc24(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf9a2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6028;
  func_0x00010c2a5c00(PTR_PTR_1126c6028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar3);
  if (param_3 == 2) {
    if (param_4 != 0) {
      func_0x00010c2000e0(lVar1);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == lVar3) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010bf529e0();
      uVar6 = *(ulong *)(param_1 + 0x20);
      if (uVar4 < 2) {
        func_0x00010be41bc0();
        if ((uVar6 & 1) == 0) {
          func_0x00010be25900(*(undefined8 *)(param_1 + 0x20));
        }
      }
      else {
        uVar5 = *(undefined8 *)(uVar6 + 0x20);
        func_0x00010bf529e0(uVar5);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be958e0(uVar6);
        _objc_release(uVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f2de1c; end: 105f2de93; -[SCMapTabletDemoMultiTrayManager _restoreTrayWithState:] */

void FUN_105f2de1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c089ac0(param_3);
  func_0x00010c219f00(uVar1,param_2,uVar2,1);
  _objc_release(uVar1);
  func_0x00010bdcdc60(param_1,param_2,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2de94; end: 105f2df17; -[SCMapTabletDemoMultiTrayManager _isMapCloudFooterTray:] */

undefined8 FUN_105f2de94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c27b740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c27b2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105f2df18; end: 105f2df9f; -[SCMapTabletDemoMultiTrayManager _handleAllTraysClosedWithLastState:] */

void FUN_105f2df18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0b89a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0b89a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2dfa0; end: 105f2e007; -[SCMapTabletDemoMultiTrayManager .cxx_destruct] */

void FUN_105f2dfa0(long param_1)

{
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



/* Entry: 105f2e008; end: 105f2e1bb; -[SCMapTrayState initWithInteractionController:interactionObserver:eventSubject:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:trayConfiguration:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

undefined1 *
FUN_105f2e008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_88 = PTR_PTR_1126ee100;
  uStack_90 = param_4;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 105f2e1bc; end: 105f2e1e3; -[SCMapTrayState mapTrayEventsObservable] */

void FUN_105f2e1bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f2e1e4; end: 105f2e1eb; -[SCMapTrayState currentPosition] */

void FUN_105f2e1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_currentPosition_1125b5870);
  return;
}



/* Entry: 105f2e1ec; end: 105f2e1f3; -[SCMapTrayState trayHeightForPosition:] */

void FUN_105f2e1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_trayHeightForPosition__11267c700);
  return;
}



/* Entry: 105f2e1f4; end: 105f2e1fb; -[SCMapTrayState trayAccessoryHeight] */

void FUN_105f2e1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_trayAccessoryHeight_11267c678);
  return;
}



/* Entry: 105f2e1fc; end: 105f2e203; -[SCMapTrayState interactionController] */

undefined8 FUN_105f2e1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f2e204; end: 105f2e20b; -[SCMapTrayState interactionObserver] */

undefined8 FUN_105f2e204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f2e20c; end: 105f2e213; -[SCMapTrayState eventSubject] */

undefined8 FUN_105f2e20c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f2e214; end: 105f2e21b; -[SCMapTrayState collapsedHeight] */

undefined8 FUN_105f2e214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f2e21c; end: 105f2e223; -[SCMapTrayState halfTrayHeight] */

undefined8 FUN_105f2e21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f2e224; end: 105f2e22b; -[SCMapTrayState halfTrayHeightRatioOverride] */

undefined8 FUN_105f2e224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f2e22c; end: 105f2e233; -[SCMapTrayState desiredPositionOnMapInteraction] */

undefined8 FUN_105f2e22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f2e234; end: 105f2e23b; -[SCMapTrayState trayConfiguration] */

undefined8 FUN_105f2e234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f2e23c; end: 105f2e243; -[SCMapTrayState chromeConfiguration] */

undefined8 FUN_105f2e23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f2e244; end: 105f2e24b; -[SCMapTrayState mapCameraProvider] */

undefined8 FUN_105f2e244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f2e24c; end: 105f2e253; -[SCMapTrayState closeButtonCompletion] */

undefined8 FUN_105f2e24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105f2e254; end: 105f2e25b; -[SCMapTrayState lastPositionBeforeBeingHidden] */

undefined8 FUN_105f2e254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105f2e25c; end: 105f2e263; -[SCMapTrayState setLastPositionBeforeBeingHidden:] */

void FUN_105f2e25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 105f2e264; end: 105f2e26b; -[SCMapTrayState shouldBeDestroyedWhenHidden] */

undefined1 FUN_105f2e264(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f2e26c; end: 105f2e273; -[SCMapTrayState setShouldBeDestroyedWhenHidden:] */

void FUN_105f2e26c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105f2e274; end: 105f2e27b; -[SCMapTrayState isBeingRemoved] */

undefined1 FUN_105f2e274(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f2e27c; end: 105f2e283; -[SCMapTrayState setIsBeingRemoved:] */

void FUN_105f2e27c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105f2e284; end: 105f2e2ef; -[SCMapTrayState .cxx_destruct] */

void FUN_105f2e284(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f2e2f0; end: 105f2e47b; -[SCMapPlacesBasemapLayerManager initWithPlaceManager:mapView:gestureManager:mapLoggerSession:circumstanceEngine:mapPlaceProfileFactoryServices:] */

undefined1 *
FUN_105f2e2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126ee108;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c6068;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010be89c60(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f2e47c; end: 105f2e48b; -[SCMapPlacesBasemapLayerManager setVisible:] */

void FUN_105f2e47c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c235cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_showAllPlaces_11266b160);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe1790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hideAllPlaces_1125d5fa0)
  ;
  return;
}



/* Entry: 105f2e48c; end: 105f2e4cf; -[SCMapPlacesBasemapLayerManager setHiddenPlaceIds:] */

void FUN_105f2e48c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7fe0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2e4d0; end: 105f2e4d7; -[SCMapPlacesBasemapLayerManager restoreToDefaultSettings] */

void FUN_105f2e4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_showAllPlaces_11266b160)
  ;
  return;
}



/* Entry: 105f2e4d8; end: 105f2e78f; -[SCMapPlacesBasemapLayerManager _registerPlaceTapAppTriggers] */

void FUN_105f2e4d8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c0 [8];
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
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x0001090219fc();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf06540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c6070);
    uVar3 = uVar2;
    func_0x00010c27c040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar6;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105f2e790;
    puStack_78 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf06540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c6078;
  _objc_opt_self(PTR_PTR_1126c6078);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27c040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar6;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105f2e814;
  puStack_a0 = &UNK_1108f31a8;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf06540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c6080;
  _objc_opt_self(PTR_PTR_1126c6080);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27c040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105f2e790; end: 105f2e91b;  */

void FUN_105f2e790(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c6070;
  _objc_opt_class(PTR_PTR_1126c6070);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2d4c0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f2e91c; end: 105f2ea3b; -[SCMapPlacesBasemapLayerManager _handlePlayFriendStoryActionWithTrigger:] */

void FUN_105f2e91c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010bfb8140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      func_0x00010c1510e0(param_5);
      dVar5 = *(double *)PTR__CGPointZero_110347540;
      dVar6 = *(double *)(PTR__CGPointZero_110347540 + 8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      bVar1 = false;
      if ((param_1 == dVar5) && (bVar1 = false, !NAN(param_2) && !NAN(dVar6))) {
        bVar1 = param_2 == dVar6;
      }
      if (bVar1) goto LAB_105f2ea20;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010c0fd0c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010bfb8140(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1510e0(param_5);
      func_0x00010bfd1ec0(param_3,param_4,lVar3,lVar2);
      _objc_release(lVar2);
      lVar2 = param_3;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_105f2ea20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f2ea3c; end: 105f2eb17; -[SCMapPlacesBasemapLayerManager _handlePlayPlaceStoryActionWithTrigger:] */

void FUN_105f2ea3c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0fd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1510e0(param_5);
    dVar4 = *(double *)PTR__CGPointZero_110347540;
    dVar5 = *(double *)(PTR__CGPointZero_110347540 + 8);
    _objc_release(lVar2);
    bVar1 = false;
    if ((param_1 == dVar4) && (bVar1 = false, !NAN(param_2) && !NAN(dVar5))) {
      bVar1 = param_2 == dVar5;
    }
    if (bVar1) goto LAB_105f2eafc;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c0fd0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1510e0(param_5);
    func_0x00010bfd1ee0(param_3,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
  }
  _objc_release(lVar2);
LAB_105f2eafc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f2eb18; end: 105f2ec93; -[SCMapPlacesBasemapLayerManager _handleOpenPlaceActionWithTrigger:] */

void FUN_105f2eb18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  ppuVar1 = param_5;
  func_0x00010c0fcf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar4 = param_5;
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = param_5;
    func_0x00010c0fd0c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 == (undefined **)0x0) goto LAB_105f2ec10;
    ppuVar3 = param_5;
    func_0x00010bfb8140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar1);
    if (ppuVar3 == (undefined **)0x0) goto LAB_105f2ec10;
    func_0x00010c0fd0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00(param_5);
    func_0x00010be2d360(param_3);
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    ppuVar3 = param_5;
    func_0x00010c0fcf40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c08c340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddea58;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    FUN_105f2fa7c(uVar5,ppuVar1,1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    func_0x00010c0fd0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00(param_5);
    ppuVar1 = param_5;
    func_0x00010c0fcf40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2d380(param_1,param_2,param_3);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar4);
LAB_105f2ec10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f2ec94; end: 105f2ed03; -[SCMapPlacesBasemapLayerManager _handleOnPlaceCalloutTappedWithPlaceID:location:] */

void FUN_105f2ec94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfd1840();
  _objc_release(lVar1);
  func_0x00010be7d4a0(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f2ed04; end: 105f2f11b; -[SCMapPlacesBasemapLayerManager _handleOnPlaceTappedWithPlaceID:coordinate:placeData:] */

void FUN_105f2ed04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_a8;
  ulong uStack_98;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_6 != 0) {
    uVar1 = param_6;
    func_0x00010bfcf800(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uVar7 = param_6;
      func_0x00010c0ed7e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uVar7;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
    else {
      _objc_retain(uVar6);
      uStack_98 = uVar6;
    }
    _objc_release(uVar6);
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c0720c0();
    if (((uVar1 & 1) == 0) && (uVar1 = uVar6, func_0x00010c0720c0(), (int)uVar1 == 0)) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puStack_a8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf4bb00();
    uVar1 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126b1ff0;
    _objc_alloc();
    uVar1 = param_6;
    func_0x00010c08c340();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    FUN_106768f54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b520(param_1,param_2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puStack_a8);
    _objc_release(uStack_98);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar11 != (undefined *)0x0) {
      FUN_105f2fbf0(*(undefined8 *)(param_3 + 0x30),&PTR____CFConstantStringClassReference_110e31f38
                    ,1);
      lVar12 = param_3 + 0x18;
      _objc_loadWeakRetained(lVar12);
      func_0x00010bfd1840();
      _objc_release(lVar12);
      func_0x00010be7d4e0(param_3);
    }
    _objc_release(puVar8);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f2f11c; end: 105f2f223; -[SCMapPlacesBasemapLayerManager mapPlaceProfilePresenter] */

void FUN_105f2f11c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 == 0) {
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained();
    lVar1 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar1 == 0) {
      lVar6 = 0;
      goto LAB_105f2f208;
    }
    puVar2 = PTR_PTR_1126b1e70;
    _objc_alloc(PTR_PTR_1126b1e70);
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ae60(puVar2,param_2,param_1,1,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar6 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar6);
LAB_105f2f208:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105f2f224; end: 105f2f3c7; -[SCMapPlacesBasemapLayerManager _presentPlaceProfileWithMapPlace:] */

void FUN_105f2f224(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1e78;
  _objc_alloc(PTR_PTR_1126b1e78);
  func_0x00010c031b60();
  lVar2 = param_3;
  func_0x00010c26d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6440(puVar1,param_2,lVar2 != 0);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    uVar5 = 5;
    if ((int)lVar3 == 0) {
      uVar5 = 6;
    }
    func_0x00010c1dce20(puVar1,param_2,uVar5);
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126b1e80;
  _objc_alloc(PTR_PTR_1126b1e80);
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0364a0(puVar4,param_2,lVar2,puVar1);
  _objc_release(lVar2);
  func_0x00010bf51c80(param_3);
  func_0x00010c1dc320(puVar4);
  func_0x00010c16f5e0(puVar4,param_2,param_3);
  lVar2 = param_3;
  func_0x00010c07b500(param_3);
  func_0x00010c1b39c0(puVar4,param_2,lVar2);
  func_0x00010c0b9800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8c0();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2f3c8; end: 105f2f4b3; -[SCMapPlacesBasemapLayerManager _presentPlaceCalloutWithPlaceId:coordinate:] */

void FUN_105f2f3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1e78;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c031b60();
  func_0x00010c1dce20();
  puVar2 = PTR_PTR_1126b1e80;
  _objc_alloc(PTR_PTR_1126b1e80);
  func_0x00010c0364a0();
  _objc_release(param_5);
  func_0x00010c1dc320(param_1,param_2,puVar2);
  func_0x00010c200420(puVar2,param_4,0);
  func_0x00010c0b9800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8c0();
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2f4b4; end: 105f2f4e7; -[SCMapPlacesBasemapLayerManager onPlaceProfileHidden] */

void FUN_105f2f4b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2f4e8; end: 105f2f4f7; -[SCMapPlacesBasemapLayerManager onPlaceProfileRemoved] */

void FUN_105f2f4e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2f4f8; end: 105f2f50f; -[SCMapPlacesBasemapLayerManager presentingUIContainer] */

void FUN_105f2f4f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f2f510; end: 105f2f51b; -[SCMapPlacesBasemapLayerManager setPresentingUIContainer:] */

void FUN_105f2f510(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105f2f51c; end: 105f2f533; -[SCMapPlacesBasemapLayerManager delegate] */

void FUN_105f2f51c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f2f534; end: 105f2f53f; -[SCMapPlacesBasemapLayerManager setDelegate:] */

void FUN_105f2f534(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105f2f540; end: 105f2f5cf; -[SCMapPlacesBasemapLayerManager .cxx_destruct] */

void FUN_105f2f540(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105f2f5d0; end: 105f2f6e7; -[SCMapPlacesBasemapServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2f5d0(long param_1)

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
  puVar2 = PTR_PTR_1126c6088;
  _objc_alloc(PTR_PTR_1126c6088);
  func_0x00010c021bc0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273aa84);
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



/* Entry: 105f2f6e8; end: 105f2f727;  */

void FUN_105f2f6e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5bce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f2f728; end: 105f2f98f; -[SCMapPlacesBasemapServicesEntryPoint _makeLayerManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2f728(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
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
  
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11273aa74;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar13;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar13);
  puVar2 = PTR_PTR_1126c6090;
  _objc_alloc(PTR_PTR_1126c6090);
  lVar12 = (long)_DAT_11273aa6c;
  lVar13 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar13;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfc8d60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar7 = lVar12;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11273aa7c;
    _objc_loadWeakRetained(lVar15);
  }
  lVar9 = lVar15;
  func_0x00010c0b9440(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11273aa78;
    _objc_loadWeakRetained(lVar14);
  }
  lVar11 = lVar14;
  func_0x00010bf398e0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273aa80;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010c0366c0(puVar2,param_2,lVar6,lVar8,lVar1,lVar10,lVar11,param_1);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f2f990; end: 105f2fa07; -[SCMapPlacesBasemapServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2f990(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273aa84,0);
  _objc_destroyWeak(param_1 + _DAT_11273aa80);
  _objc_destroyWeak(param_1 + _DAT_11273aa7c);
  _objc_destroyWeak(param_1 + _DAT_11273aa78);
  _objc_destroyWeak(param_1 + _DAT_11273aa74);
  _objc_destroyWeak(param_1 + _DAT_11273aa6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273aa70);
  return;
}



/* Entry: 105f2fa08; end: 105f2fa7b; -[SCGrapheneMapBasemapPlacesMetric2 init] */

undefined1 * FUN_105f2fa08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f2fa7c; end: 105f2fbef;  */

void FUN_105f2fa7c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f547;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f99e0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108f99e0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f34f547;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108f9a30,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = (undefined1 *)puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = (undefined1 *)puVar4;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(puVar5);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  func_0x00010c220160();
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f2fbf0; end: 105f2fd63;  */

void FUN_105f2fbf0(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f547;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f9a30,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(puVar3);
  func_0x00010c277640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  func_0x00010c220160();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f2fd64; end: 105f2fddf; -[SCMapBitmojiAvatarIDConverter convert:] */

void FUN_105f2fd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e31f58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc_init(PTR_PTR_1126b1df0);
  func_0x00010c220160();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f2fde0; end: 105f2febf; -[SCMapBatteryInfoConverter convert:] */

void FUN_105f2fde0(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010c06d140(param_4);
    func_0x00010c16faa0(param_4,param_3,1);
    puVar5 = PTR_PTR_1126c6098;
    _objc_alloc_init(PTR_PTR_1126c6098);
    func_0x00010bf17500(param_4);
    func_0x00010c16f9e0(puVar5,param_3,(int)(param_1 * 100.0));
    lVar2 = param_4;
    func_0x00010bf176e0(param_4);
    func_0x00010c1afe80(puVar5,param_3,lVar2 == 2);
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0772e0();
    func_0x00010c1b26a0(puVar5,param_3,puVar4);
    _objc_release(puVar3);
    func_0x00010c16faa0(param_4,param_3,lVar1);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f2fec0; end: 105f3020b; -[SCMapBestFriendEmojiConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f2fec0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  long unaff_x22;
  undefined **ppuVar9;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e32018;
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_170 = puVar1;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar8 = param_3;
    puStack_138 = puVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &puStack_130;
    lStack_140 = lVar8;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      unaff_x22 = *plStack_120;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110dc50f8;
      ppuStack_150 = &PTR____CFConstantStringClassReference_110dc50d8;
      ppuStack_158 = &PTR____CFConstantStringClassReference_110dc50b8;
      ppuStack_168 = &PTR____CFConstantStringClassReference_110dc5138;
      ppuStack_160 = &PTR____CFConstantStringClassReference_110dc5158;
      do {
        unaff_x21 = 0;
        do {
          if (*plStack_120 != unaff_x22) {
            _objc_enumerationMutation(lStack_140);
          }
          uVar7 = *(ulong *)(lStack_128 + unaff_x21 * 8);
          _objc_retain(uVar7);
          uVar3 = uVar7;
          func_0x00010c0720c0();
          ppuVar9 = &PTR____CFConstantStringClassReference_110e31f78;
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar7;
            func_0x00010c0720c0();
            ppuVar9 = &PTR____CFConstantStringClassReference_110e31f98;
            if ((uVar3 & 1) == 0) {
              uVar3 = uVar7;
              func_0x00010c0720c0();
              ppuVar9 = &PTR____CFConstantStringClassReference_110e308f8;
              if ((uVar3 & 1) == 0) {
                uVar3 = uVar7;
                func_0x00010c0720c0();
                ppuVar9 = &PTR____CFConstantStringClassReference_110e31fb8;
                if ((uVar3 & 1) == 0) {
                  uVar3 = uVar7;
                  func_0x00010c0720c0();
                  ppuVar9 = &PTR____CFConstantStringClassReference_110e31fd8;
                  if ((uVar3 & 1) == 0) {
                    uVar3 = uVar7;
                    func_0x00010c0720c0();
                    ppuVar9 = &PTR____CFConstantStringClassReference_110e31ff8;
                    if ((int)uVar3 == 0) {
                      ppuVar9 = (undefined **)0x0;
                    }
                  }
                }
              }
            }
          }
          _objc_release(uVar7);
          _objc_retain(ppuVar9);
          if (ppuVar9 != (undefined **)0x0) {
            puVar1 = PTR_PTR_1126c60a0;
            _objc_alloc_init(PTR_PTR_1126c60a0);
            puVar2 = PTR_PTR_1126b1df0;
            _objc_alloc_init(PTR_PTR_1126b1df0);
            func_0x00010c1b71a0(puVar1);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c087500(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220160();
            _objc_release(puVar2);
            puVar2 = PTR_PTR_1126b1df0;
            _objc_alloc_init(PTR_PTR_1126b1df0);
            func_0x00010c194460(puVar1);
            _objc_release(puVar2);
            lVar4 = param_3;
            func_0x00010c0e00e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010bf8e2c0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220160();
            _objc_release(puVar2);
            _objc_release(lVar4);
            func_0x00010befa120(puStack_138);
            _objc_release(puVar1);
          }
          _objc_release(ppuVar9);
          unaff_x21 = unaff_x21 + 1;
        } while (lVar8 != unaff_x21);
        ppuVar9 = &puStack_130;
        lVar8 = lStack_140;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lStack_140);
    unaff_x19 = param_3;
  }
  _objc_release();
  lVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar5 = &lStack_1b0;
    pcStack_178 = FUN_105f3020c;
    lStack_1a0 = unaff_x22;
    lStack_198 = unaff_x21;
    lStack_190 = param_3;
    lStack_188 = unaff_x19;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar9);
    puStack_1a8 = PTR_PTR_1126ee118;
    lStack_1b0 = lVar8;
    _objc_msgSendSuper2(&lStack_1b0,PTR_s_init_1125d9248);
    if (plVar5 != (long *)0x0) {
      lVar8 = (long)_DAT_11273aa8c;
      _objc_retain(ppuVar9);
      uVar6 = *(undefined8 *)((long)plVar5 + lVar8);
      *(undefined ***)((long)plVar5 + lVar8) = ppuVar9;
      _objc_release(uVar6);
    }
    _objc_release(ppuVar9);
    return (undefined1 *)plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
  return puStack_138;
}



/* Entry: 105f3020c; end: 105f3028f; -[SCMapClusterConverter initWithClusterMemberConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f3020c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aa8c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f30290; end: 105f30643; -[SCMapClusterConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f30290(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c60a8;
  _objc_alloc_init(PTR_PTR_1126c60a8);
  lVar2 = param_3;
  func_0x00010bf3e6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c118b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c60b0;
    _objc_alloc_init();
    lVar2 = param_3;
    func_0x00010c118b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21afe0(puVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c1e4fa0(puVar1);
  lVar2 = param_3;
  func_0x00010bfb2e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c60b0;
    _objc_alloc_init();
    lVar2 = param_3;
    func_0x00010bfb2e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21afe0(puVar9);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c19df00(puVar1);
  func_0x00010bf51c80(param_3);
  func_0x00010c17a7a0(puVar1);
  func_0x00010bf51c80(param_3);
  func_0x00010c17a7c0(puVar1);
  lVar2 = param_3;
  func_0x00010c0b8f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23eaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227340(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c081340(param_3);
  func_0x00010c216d00(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010c0fa5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0(puVar5);
  _objc_release(lVar2);
  lVar4 = param_3;
  func_0x00010c0fa5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      lVar6 = *(long *)(param_1 + _DAT_11273aa8c);
      func_0x00010bf50c80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        func_0x00010befa120(puVar5);
      }
      _objc_release(lVar6);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010c17d8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11273aa8c,0);
  return;
}



/* Entry: 105f30644; end: 105f30657; -[SCMapClusterConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f30644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aa8c,0);
  return;
}



/* Entry: 105f30658; end: 105f307fb; -[SCMapClusterMemberAccessoryConverter convert:] */

void FUN_105f30658(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c60b8;
  _objc_alloc_init();
  lVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c27dd80();
  uVar5 = 2;
  if (lVar3 != 2) {
    uVar5 = 0;
  }
  if (lVar3 == 1) {
    uVar5 = 1;
  }
  func_0x00010c21acc0(puVar2,param_2,uVar5);
  lVar3 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f307fc;
  puStack_50 = &UNK_1108450c8;
  _objc_retain(puVar2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x105f30808;
  puStack_78 = &UNK_110850738;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x00010c0c1120(lVar3,param_2,&puStack_68,&puStack_90);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar2,param_2,lVar3);
    _objc_release(lVar3);
  }
  puVar1 = puStack_70;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f307fc; end: 105f30813;  */

void FUN_105f307fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setContentURL__11263e4b8,param_2);
  return;
}



/* Entry: 105f30814; end: 105f3094f; -[SCMapClusterMemberConverter initWithAccessoryConverter:statusService:activeUserID:workEnabled:schoolOnboardingSeen:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f30814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ee120;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aa90;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aa94;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aa98;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273aa9c) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273aaa0) = param_7;
    lVar3 = (long)_DAT_11273aaa4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f30950; end: 105f30f33; -[SCMapClusterMemberConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f30950(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c60c0;
  _objc_alloc_init();
  uVar3 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf64de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar12 = 0x408f400000000000;
  param_1 = param_1 * 1000.0;
  func_0x00010c215dc0(puVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf4e080();
  puVar4 = PTR_PTR_1126c60c8;
  if (uVar3 == 3) {
    _objc_alloc_init(PTR_PTR_1126c60c8);
    puVar5 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    func_0x00010c1f6920(puVar4);
LAB_105f30ac0:
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c09eb20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else if (uVar3 == 2) {
    if (*(char *)(param_2 + _DAT_11273aa9c) == '\x01') {
      _objc_alloc_init(PTR_PTR_1126c60c8);
      puVar5 = PTR_PTR_1126b25e8;
      _objc_alloc_init(PTR_PTR_1126b25e8);
      func_0x00010c227220(puVar4);
      goto LAB_105f30ac0;
    }
  }
  else if (uVar3 == 1) {
    _objc_alloc_init(PTR_PTR_1126c60c8);
    puVar5 = PTR_PTR_1126b25e8;
    _objc_alloc_init(PTR_PTR_1126b25e8);
    func_0x00010c1a8d00(puVar4);
    goto LAB_105f30ac0;
  }
  uVar3 = param_4;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  if ((uVar7 & 1) != 0) goto LAB_105f30c20;
  uVar8 = *(ulong *)(param_2 + _DAT_11273aa94);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c253f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar8);
  if (uVar7 == 0) {
    uVar6 = param_4;
    func_0x00010c253280();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    if (uVar8 != 0) {
      uVar6 = param_4;
      func_0x00010c253280();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar8;
      goto LAB_105f30c0c;
    }
  }
  else {
    _objc_retain(uVar7);
    uVar6 = uVar3;
    uVar3 = uVar7;
LAB_105f30c0c:
    _objc_release(uVar6);
  }
  _objc_release(uVar7);
LAB_105f30c20:
  puVar5 = PTR_PTR_1126c60d0;
  _objc_alloc_init(PTR_PTR_1126c60d0);
  uVar6 = uVar3;
  func_0x00010c0dab60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd8e0(puVar5);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010bf3e8a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d920(puVar5);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010bf3e8c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d940(puVar5);
  _objc_release(uVar6);
  func_0x00010c229ee0(uVar3);
  func_0x00010c1fe700(puVar5);
  uVar6 = param_4;
  func_0x00010c297e20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2244a0(puVar5);
  _objc_release(uVar6);
  func_0x00010c077f80(uVar3);
  func_0x00010c1b2980(puVar5);
  func_0x00010c20a7e0(puVar2);
  func_0x00010bfe4080(param_4);
  func_0x00010c1a9120((float)param_1,puVar2);
  uVar6 = param_4;
  func_0x00010c088220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1b7720(puVar2);
  _objc_release(uVar6);
  func_0x00010bf17500(param_4);
  func_0x00010c16f9e0(puVar2);
  func_0x00010c07dcc0(param_4);
  func_0x00010c1af660(puVar2);
  puVar9 = PTR_PTR_1126bf1b8;
  _objc_alloc_init();
  func_0x00010bf51c80(param_4);
  func_0x00010c1b9120(puVar9);
  func_0x00010bf51c80(param_4);
  func_0x00010c1be5e0(uVar12,puVar9);
  func_0x00010c1b9140(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar6 = param_4;
  func_0x00010beed020(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar7 = param_4;
  func_0x00010beed020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar6 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar7);
      }
      lVar10 = *(long *)(param_2 + _DAT_11273aa90);
      func_0x00010bf50c80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        func_0x00010befa120(puVar4);
      }
      _objc_release(lVar10);
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
    uVar6 = uVar7;
    func_0x00010bf52a60();
  }
  _objc_release(uVar7);
  func_0x00010c161120(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + (long)_DAT_11273aaa4,0);
  _objc_storeStrong(param_4 + (long)_DAT_11273aa98,0);
  _objc_storeStrong(param_4 + (long)_DAT_11273aa94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + (long)_DAT_11273aa90,0);
  return;
}



/* Entry: 105f30f34; end: 105f30f93; -[SCMapClusterMemberConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f30f34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273aaa4,0);
  _objc_storeStrong(param_1 + _DAT_11273aa98,0);
  _objc_storeStrong(param_1 + _DAT_11273aa94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aa90,0);
  return;
}


