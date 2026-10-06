/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dd5184; end: 107dd527f;  */

void FUN_107dd5184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107dd4be8;
  uStack_30 = 0x107dd4bf8;
  uStack_28 = 0;
  func_0x00010c0c0cc0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd5280; end: 107dd52ef;  */

void FUN_107dd5280(long param_1,undefined8 param_2)

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



/* Entry: 107dd52f0; end: 107dd5363; -[SCDiscoverFeedHeaderItemConfigurator initWithButtonProvider:] */

undefined1 * FUN_107dd52f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd5364; end: 107dd5aff; -[SCDiscoverFeedHeaderItemConfigurator configureHeaderItem:withTitle:feedManagmentTarget:feedManagementSelector:shouldEnableDebug:debugButtonTarget:debugButtonSelector:removeHeaderButtonBackgroundFill:useLeadingTitleHeaderLayout:showNotificationCenter:searchHeaderTitleEnabled:feedManagementDisabled:searchViewTappedCompletion:] */

void FUN_107dd5364(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,int param_7,undefined8 param_8,undefined4 param_9,undefined4 param_10
                  ,uint param_11,byte param_12,undefined8 param_13)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_13);
  puVar15 = (undefined *)0x0;
  if ((((byte)param_11 ^ 1) & 1) == 0) {
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  bVar1 = 0;
  if (param_5 != 0) {
    bVar1 = param_12 ^ 1;
  }
  bVar2 = 0;
  if (param_6 != 0) {
    bVar2 = bVar1;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c116640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c20eaa0(uVar5);
  func_0x00010c213a60(uVar5);
  func_0x00010c188e60(uVar5);
  func_0x00010befa120(puVar3);
  if ((param_11._3_1_ == '\0') || (param_11._1_1_ != 0)) {
    func_0x00010c20eaa0(param_3);
    lVar14 = param_4;
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      func_0x00010b0aeaec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(param_3);
      _objc_release(lVar14);
    }
    else {
      func_0x00010c216240(param_3);
    }
    func_0x00010c216620(param_3);
    func_0x00010c1d94a0(param_3);
    func_0x00010c216600(param_3);
    func_0x00010c1dee80(param_3);
    if ((param_11._1_1_ & bVar2) == 0) {
      func_0x00010c2162a0(param_3);
      func_0x00010c216680(param_3);
    }
    else {
      lVar14 = param_1;
      func_0x00010be0eca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2162a0(param_3);
      _objc_release(lVar14);
      _objc_initWeak(auStack_88,param_5);
      _objc_copyWeak(auStack_98,auStack_88);
      lStack_90 = param_6;
      func_0x00010c216680(param_3);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_88);
    }
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar6;
    func_0x00010c153540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar14 != 0) {
      func_0x00010c20eaa0(lVar14);
      func_0x00010c213a60(lVar14);
      func_0x00010c188e60(lVar14);
      if ((param_11 & 0x100) == 0) {
        func_0x00010befa120(puVar3);
      }
    }
  }
  else {
    func_0x00010c20eaa0(param_3);
    func_0x00010c1d94a0(param_3);
    lVar14 = param_1;
    func_0x00010bdf2f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216620(param_3);
    _objc_release(lVar14);
    func_0x00010c1dee80(param_3);
    func_0x00010c2162a0(param_3);
    func_0x00010c216680(param_3);
    lVar14 = 0;
  }
  puVar7 = PTR_PTR_1126b6550;
  _objc_alloc(PTR_PTR_1126b6550);
  func_0x00010bff9fe0();
  func_0x00010c188540(param_3);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 != 0) {
    puVar8 = PTR_PTR_1126c2d70;
    _objc_alloc_init(PTR_PTR_1126c2d70);
    func_0x00010c20eaa0();
    func_0x00010c213a60(puVar8);
    func_0x00010c188e60(puVar8);
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c2d78;
    _objc_alloc();
    func_0x00010c01ae60();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5fe0(puVar8);
    _objc_release(puVar11);
    func_0x00010befa120(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  if ((param_11._1_1_ != 0) && (lVar14 != 0)) {
    func_0x00010befa120(puVar7);
  }
  if (param_11._2_1_ != '\0') {
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010c0dbd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    func_0x00010c20eaa0(uVar4);
    func_0x00010c213a60(uVar4);
    func_0x00010c188e60(uVar4);
    func_0x00010befa120(puVar7);
    _objc_release(uVar4);
  }
  lVar13 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  if ((param_11 & 1) == 0) {
    func_0x00010bef8bc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf81440();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  if (lVar6 != 0) {
    func_0x00010bde4a40(param_1);
    func_0x00010befa120(puVar7);
  }
  if (((param_11 & 0x100) == 0) && ((param_12 & 1) == 0)) {
    puVar8 = PTR_PTR_1126c2d70;
    _objc_alloc_init(PTR_PTR_1126c2d70);
    func_0x00010c20eaa0();
    func_0x00010c213a60(puVar8);
    func_0x00010c188e60(puVar8);
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c2d78;
    _objc_alloc();
    func_0x00010c01ae60();
    func_0x00010c160fc0();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5fe0(puVar8);
    _objc_release(puVar11);
    func_0x00010befa120(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126b6550;
  _objc_alloc();
  func_0x00010bff9fe0();
  func_0x00010c2194c0(param_3);
  _objc_release(puVar8);
  _objc_release(lVar6);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(lVar14);
  _objc_release(puVar15);
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar8 + 0x20);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  lVar14 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar14 != 0) && (*(long *)(param_3 + 0x28) != 0)) {
    puVar15 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b480();
    _objc_release(puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 107dd5b00; end: 107dd5b73;  */

void FUN_107dd5b00(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b480();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dd5b74; end: 107dd5b8b; -[SCDiscoverFeedHeaderItemConfigurator _feedManagementTitleAffordance] */

void FUN_107dd5b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageTemplateFromIconType_size__1125d7d18,0x2c2);
  return;
}



/* Entry: 107dd5b8c; end: 107dd5c37; -[SCDiscoverFeedHeaderItemConfigurator _configureAddFriendsItemIfNecessary:removeHeaderButtonBackgroundFill:] */

void FUN_107dd5b8c(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010c20eaa0(param_3,param_2,1);
    func_0x00010c213a60(param_3,param_2,0);
    func_0x00010c188e60(param_3,param_2,0);
    func_0x00010c188e80(param_3,param_2,0);
  }
  else {
    func_0x00010c20eaa0(param_3,param_2,0);
    func_0x00010c213a60(param_3,param_2,2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188e60(param_3,param_2,puVar1);
    _objc_release(param_3);
    param_3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd5c38; end: 107dd62a7; -[SCDiscoverFeedHeaderItemConfigurator _createSearchView] */

void FUN_107dd5c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3);
  _objc_release(puVar2);
  func_0x00010c182220(puVar3);
  puVar4 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  puVar2 = puVar4;
  func_0x00010c219b60();
  func_0x000108f593bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar4);
  func_0x00010c213040(puVar4);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar3;
  func_0x00010c2793a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 107dd62a8; end: 107dd62d7; -[SCDiscoverFeedHeaderItemConfigurator .cxx_destruct] */

void FUN_107dd62a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dd62d8; end: 107dd6367;  */

void FUN_107dd62d8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebe318;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ebe318,
                      &PTR____CFConstantStringClassReference_110ebe2f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107dd6368; end: 107dd63f3; -[SCOperaActionMenuV2Option initWithType:title:] */

undefined1 *
FUN_107dd6368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd63f4; end: 107dd646b; -[SCOperaActionMenuV2Option initWithType:title:iconBlock:] */

long FUN_107dd63f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c056280(param_1,param_2,param_3,param_4,1);
  if (param_1 != 0) {
    uVar1 = param_5;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 107dd646c; end: 107dd64f7; -[SCOperaActionMenuV2Option initWithType:title:enabled:] */

undefined1 *
FUN_107dd646c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd64f8; end: 107dd657b; -[SCOperaActionMenuV2Option initWithType:title:iconBlock:enabled:] */

long FUN_107dd64f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c056280(param_1,param_2,param_3,param_4,param_6);
  if (param_1 != 0) {
    uVar1 = param_5;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 107dd657c; end: 107dd6583; -[SCOperaActionMenuV2Option type] */

undefined8 FUN_107dd657c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dd6584; end: 107dd658b; -[SCOperaActionMenuV2Option title] */

undefined8 FUN_107dd6584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dd658c; end: 107dd6593; -[SCOperaActionMenuV2Option iconBlock] */

undefined8 FUN_107dd658c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dd6594; end: 107dd659b; -[SCOperaActionMenuV2Option enabled] */

undefined1 FUN_107dd6594(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dd659c; end: 107dd65cb; -[SCOperaActionMenuV2Option .cxx_destruct] */

void FUN_107dd659c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dd65cc; end: 107dd674f;  */

void FUN_107dd65cc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebe3f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110ebe418,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf44740(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  if (2 < uVar4) {
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067fc0();
    _objc_release(uVar4);
    if ((long)uVar5 < 1) {
      puVar6 = (undefined *)0x0;
      goto LAB_107dd6714;
    }
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar4);
  }
  puVar6 = PTR_PTR_1126d7e38;
  _objc_alloc(PTR_PTR_1126d7e38);
  func_0x00010c037f80();
LAB_107dd6714:
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107dd6750; end: 107dd6763;  */

void FUN_107dd6750(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ebe438,0,0);
  return;
}



/* Entry: 107dd6764; end: 107dd67af; -[SCPlaybackPreferredForwardBufferingConfig initWithPreStartupPreferredForwardBufferDurationMs:postStartupPreferredForwardBufferDurationMs:] */

void FUN_107dd6764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107dd67b0; end: 107dd67d3; -[SCPlaybackPreferredForwardBufferingConfig copyWithZone:] */

undefined8 FUN_107dd67b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dd67d4; end: 107dd682f; -[SCPlaybackPreferredForwardBufferingConfig hash] */

undefined8 * FUN_107dd67d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107dd6830; end: 107dd68c7; -[SCPlaybackPreferredForwardBufferingConfig isEqual:] */

bool FUN_107dd6830(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dd68c8; end: 107dd68cf; -[SCPlaybackPreferredForwardBufferingConfig preStartupPreferredForwardBufferDurationMs] */

undefined8 FUN_107dd68c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dd68d0; end: 107dd68d7; -[SCPlaybackPreferredForwardBufferingConfig postStartupPreferredForwardBufferDurationMs] */

undefined8 FUN_107dd68d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dd68d8; end: 107dd6977; +[SCOperaLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107dd68d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c0019a0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107dd6978; end: 107dd6b37; -[SCOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107dd6978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fb288;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11276f86c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276f870;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276f874;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276f878;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f87c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f87c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f880);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f880) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11276f884;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c1394c0();
    *(char *)((long)puVar1 + (long)_DAT_11276f888) = (char)uVar4;
    _objc_release(uVar2);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd6b38; end: 107dd6b8b; -[SCOperaLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd6b38(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107dd6b8c; end: 107dd6bcf; -[SCOperaLayerViewController operaPageId] */

void FUN_107dd6b8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd6bd0; end: 107dd6d63; -[SCOperaLayerViewController setLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd6bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = (long)_DAT_11276f88c;
  uVar5 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar5);
  lVar7 = (long)_DAT_11276f890;
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = param_3;
  _objc_release(uVar1);
  lVar7 = param_1;
  func_0x00010c0834c0();
  if (((int)lVar7 != 0) &&
     (uVar2 = uVar5, func_0x00010c071ae0(uVar5,param_2,*(undefined8 *)(param_1 + lVar8)),
     puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570, puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     (uVar2 & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c27dd80(uVar1);
    func_0x00010c0df840(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110ebe458);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c98e0;
    func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,puVar4);
    func_0x00010c28c0a0(param_1,param_2,uVar5,param_3);
    func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar3);
    _objc_release(puVar4);
  }
  lVar7 = param_1;
  func_0x00010c0834c0();
  if (((int)lVar7 != 0) &&
     (uVar2 = uVar6, func_0x00010c071ae0(uVar6,param_2,param_4), (uVar2 & 1) == 0)) {
    func_0x00010bf7e560(param_1,param_2,param_4);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd6d64; end: 107dd6d67; -[SCOperaLayerViewController loadView] */

void FUN_107dd6d64(void)

{
  return;
}



/* Entry: 107dd6d68; end: 107dd70ff; -[SCOperaLayerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd6d68(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c29cae0(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1);
  puStack_90 = PTR_PTR_1126fb288;
  puStack_98 = param_1;
  _objc_msgSendSuper2(&puStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11276f880;
  func_0x00010bef9680();
  _objc_release(puVar1);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  uStack_a8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_b8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_e0 = uVar3;
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uStack_e0);
  _objc_release(puStack_d0);
  _objc_release(puStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(puStack_b0);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = (undefined *)0x0;
  if (*(long *)(param_1 + _DAT_11276f88c) != 0) {
    func_0x00010c27dd80();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar8;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar10 = PTR_PTR_1126c98e0;
    func_0x00010bf18180(PTR_PTR_1126c98e0);
    func_0x00010c28c0a0(param_1);
    func_0x00010bf7e560(param_1);
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    puVar1 = puVar7;
    _objc_release();
    puVar5 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_107dd7100;
  puStack_110 = puVar5;
  puStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010c29e740(*(undefined8 *)(puVar1 + _DAT_11276f884));
  puStack_118 = PTR_PTR_1126fb288;
  puStack_120 = puVar1;
  _objc_msgSendSuper2(&puStack_120,PTR_s_viewWillAppear__1126853f0,puVar10);
  return;
}



/* Entry: 107dd7100; end: 107dd715f; -[SCOperaLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e740(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 107dd7160; end: 107dd71bf; -[SCOperaLayerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7160(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 107dd71c0; end: 107dd721f; -[SCOperaLayerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd71c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 107dd7220; end: 107dd727f; -[SCOperaLayerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48,param_3);
  return;
}



/* Entry: 107dd7280; end: 107dd72f3; -[SCOperaLayerViewController beginAppearanceTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf17b20(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1,param_3,param_4);
  puStack_38 = PTR_PTR_1126fb288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_beginAppearanceTransition_animat_1125a3868,param_3,param_4);
  return;
}



/* Entry: 107dd72f4; end: 107dd7347; -[SCOperaLayerViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd72f4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf941c0(*(undefined8 *)(param_1 + _DAT_11276f884),param_2,param_1);
  puStack_28 = PTR_PTR_1126fb288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 107dd7348; end: 107dd73c3; -[SCOperaLayerViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f884);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126fb288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd73c4; end: 107dd743f; -[SCOperaLayerViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd73c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f884);
  _objc_retain(param_3);
  func_0x00010bf77ea0(uVar1);
  puStack_38 = PTR_PTR_1126fb288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd7440; end: 107dd7c3f; -[SCOperaLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7440(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined *puStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126fb288;
  lStack_130 = param_5;
  _objc_msgSendSuper2(&lStack_130,PTR_s_viewDidLayoutSubviews_112684cc8);
  puVar1 = PTR_DAT_1126a5328;
  _objc_retain(param_5);
  lVar5 = param_5;
  func_0x00010010fab4(param_5,puVar1);
  lVar13 = param_5;
  if ((int)lVar5 == 0) {
    lVar13 = 0;
  }
  _objc_retain(lVar13);
  _objc_release(param_5);
  dVar23 = 0.0;
  if (((lVar13 != 0) && (lVar5 = param_5, func_0x00010c079780(), (int)lVar5 != 0)) &&
     (func_0x00010c0c5140(param_5), 0.0 < param_1)) {
    lVar18 = param_5;
    dVar23 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010010fab4();
    lVar5 = lVar18;
    if ((int)lVar19 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(lVar18);
    func_0x00010c0c5140(lVar5);
    _objc_release(lVar5);
    param_2 = 0.05;
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (ABS(dVar23 - param_1) < 0.05) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar23)) {
        bVar2 = dVar23 < 0.0;
        bVar3 = dVar23 == 0.0;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      dVar23 = param_1;
    }
  }
  dVar20 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  lVar19 = (long)_DAT_11276f87c;
  lVar18 = *(long *)(param_5 + lVar19);
  _objc_retain(lVar18);
  puVar14 = &uStack_170;
  lVar5 = lVar18;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar15 = *plStack_160;
    do {
      lVar16 = 0;
      do {
        if (*plStack_160 != lVar15) {
          _objc_enumerationMutation(lVar18);
        }
        uVar17 = *(undefined8 *)(lStack_168 + lVar16 * 8);
        lVar6 = *(long *)(param_5 + lVar19);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c25dfa0();
        lVar9 = param_5;
        if (lVar7 == 2) {
          lVar7 = param_5;
          func_0x00010bf46560(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          _CGRectGetWidth();
          dVar21 = dVar20;
          func_0x00010bfe42c0(lVar6);
          dVar20 = dVar20 + dVar21 * -2.0;
          _objc_release(lVar7);
          param_2 = 0.0;
          func_0x00010c23d5a0(uVar17);
          func_0x00010c202c80(uVar17);
          lVar7 = lVar6;
          func_0x00010c298ec0();
          lVar8 = param_5;
          if (lVar7 == 2) {
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetMaxY();
            dVar21 = dVar20;
            func_0x00010c298f20(lVar6);
            dVar20 = dVar20 - dVar21;
            func_0x00010c173440(uVar17);
LAB_107dd78a0:
            _objc_release(lVar8);
          }
          else {
            if (lVar7 == 1) {
              func_0x00010c29bf00(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              _CGRectGetMidY();
              func_0x00010c17a860(uVar17);
              goto LAB_107dd78a0;
            }
            if (lVar7 == 0) {
              func_0x00010c29bf00(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              _CGRectGetMinY();
              dVar21 = dVar20;
              func_0x00010c298f20(lVar6);
              dVar20 = dVar20 + dVar21;
              func_0x00010c2172c0(uVar17);
              goto LAB_107dd78a0;
            }
          }
          lVar7 = lVar6;
          func_0x00010bfe4140();
          if (lVar7 == 2) {
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetMinX();
            dVar21 = dVar20;
            func_0x00010bfe42c0(lVar6);
            dVar20 = dVar20 + dVar21;
            func_0x00010c1ba100(uVar17);
          }
          else {
            if (lVar7 == 1) goto LAB_107dd78fc;
            if (lVar7 != 0) goto LAB_107dd7ba4;
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetMaxX();
            dVar21 = dVar20;
            func_0x00010bfe42c0(lVar6);
            dVar20 = dVar20 - dVar21;
            func_0x00010c1ee020(uVar17);
          }
LAB_107dd7b9c:
          _objc_release(lVar9);
        }
        else {
          if (lVar7 == 1) {
            dVar21 = dVar20;
            dVar22 = dVar23;
            if (dVar23 <= 0.0) {
              func_0x00010bf0aca0(lVar6);
              dVar21 = dVar20;
              dVar22 = dVar20;
            }
            lVar7 = param_5;
            func_0x00010bf46560(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetHeight();
            lVar8 = param_5;
            dVar20 = dVar21;
            func_0x00010bf46560(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            _CGRectGetWidth();
            dVar21 = dVar21 / dVar20;
            _objc_release(lVar8);
            _objc_release(lVar7);
            if (dVar22 < dVar21) {
LAB_107dd77c4:
              lVar7 = param_5;
              func_0x00010c08c280();
              lVar8 = param_5;
              if (lVar7 == 2) {
                lVar7 = param_5;
                func_0x00010c29bf00(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                dVar21 = param_4;
                FUN_107dd92a0();
                param_2 = param_4;
                _objc_release(lVar7);
                func_0x00010c2256c0(param_3,uVar17);
                func_0x00010c1a7d00(uVar17);
                func_0x00010c29bf00(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                _CGRectGetWidth();
                dVar20 = (param_4 - param_3) * 0.5;
                func_0x00010c1ba100(uVar17);
                param_3 = dVar22;
                param_4 = dVar21;
LAB_107dd7b28:
                _objc_release(lVar8);
              }
              else {
                if (lVar7 == 1) {
                  uVar10 = *(undefined8 *)(param_5 + _DAT_11276f874);
                  func_0x00010bf461c0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  func_0x00010c232f80();
                  _objc_release(uVar11);
                  _objc_release(uVar10);
                  if ((int)uVar12 == 0) {
                    dVar20 = 0.0;
                    func_0x00010c1ba100(uVar17);
                    lVar7 = param_5;
                    func_0x00010c29bf00(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf20c00();
                    _CGRectGetWidth();
                    func_0x00010c2256c0(uVar17);
                    _objc_release(lVar7);
                    func_0x00010c29bf00(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf20c00();
                    _CGRectGetWidth();
                    dVar20 = dVar22 * dVar20;
                    func_0x00010c1a7d00(uVar17);
                  }
                  else {
                    lVar7 = param_5;
                    func_0x00010c29bf00(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    dVar20 = param_3;
                    func_0x00010bf20c00();
                    dVar21 = param_4;
                    FUN_107dd92cc();
                    _objc_release(lVar7);
                    func_0x00010c202c80(dVar20,param_4,uVar17);
                    func_0x00010c29bf00(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf20c00();
                    _CGRectGetMidX();
                    lVar7 = param_5;
                    param_2 = dVar20;
                    func_0x00010c29bf00(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf20c00();
                    _CGRectGetMidY();
                    func_0x00010c17a6a0(uVar17);
                    _objc_release(lVar7);
                    param_3 = dVar22;
                    param_4 = dVar21;
                  }
                  goto LAB_107dd7b28;
                }
                if (lVar7 == 0) {
                  dVar20 = 0.0;
                  func_0x00010c1ba100(uVar17);
                  lVar7 = param_5;
                  func_0x00010c29bf00(param_5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf20c00();
                  _CGRectGetWidth();
                  func_0x00010c2256c0(uVar17);
                  _objc_release(lVar7);
                  func_0x00010c29bf00(param_5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf20c00();
                  _CGRectGetWidth();
                  dVar20 = dVar22 * dVar20;
                  func_0x00010c1a7d00(uVar17);
                  goto LAB_107dd7b28;
                }
              }
              lVar7 = lVar6;
              func_0x00010bf87840();
              if (lVar7 == 2) {
                func_0x00010c29bf00(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                _CGRectGetMaxY();
                func_0x00010c173440(uVar17);
              }
              else {
                if (lVar7 != 1) {
                  if (lVar7 == 0) goto LAB_107dd762c;
                  goto LAB_107dd7ba4;
                }
                func_0x00010c29bf00(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                _CGRectGetMidY();
                func_0x00010c17a860(uVar17);
              }
            }
            else {
              lVar7 = param_5;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010bfbb7c0();
              _objc_release(lVar7);
              if ((int)lVar8 == 0) goto LAB_107dd77c4;
              dVar20 = 0.0;
              func_0x00010c2172c0(uVar17);
              lVar7 = param_5;
              func_0x00010c29bf00(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              _CGRectGetHeight();
              func_0x00010c1a7d00(uVar17);
              _objc_release(lVar7);
              func_0x00010bfe0640(uVar17);
              dVar20 = dVar20 / dVar22;
              func_0x00010c2256c0(uVar17);
LAB_107dd78fc:
              func_0x00010c29bf00(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              _CGRectGetMidX();
              func_0x00010c17a840(uVar17);
            }
            goto LAB_107dd7b9c;
          }
          if (lVar7 == 0) {
            lVar7 = param_5;
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf20c00();
            func_0x00010c19f0e0(uVar17);
            _objc_release(lVar7);
LAB_107dd762c:
            dVar20 = 0.0;
            func_0x00010c2172c0(uVar17);
          }
        }
LAB_107dd7ba4:
        func_0x00010c1f5160(param_5);
        func_0x00010c08cdc0(uVar17);
        _objc_release(lVar6);
        lVar16 = lVar16 + 1;
      } while (lVar5 != lVar16);
      puVar14 = &uStack_170;
      lVar5 = lVar18;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar18);
  _objc_release(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  func_0x00010bfb68e0(puVar14);
  dVar23 = 0.0;
  if (param_2 < 0.0) {
    func_0x00010bfb68e0(puVar14);
    dVar20 = -param_2;
    dVar21 = dVar20;
    if (0.0 <= param_2) {
      dVar21 = param_2;
    }
    func_0x00010befd3a0(lVar13);
    dVar23 = dVar20;
    if (dVar20 <= dVar21) {
      dVar23 = dVar21;
    }
  }
  func_0x00010bfb68e0(puVar14);
  dVar21 = 0.0;
  if (dVar20 < 0.0) {
    func_0x00010bfb68e0(puVar14);
    dVar21 = -dVar20;
    dVar22 = dVar21;
    if (0.0 <= dVar20) {
      dVar22 = dVar20;
    }
    func_0x00010befd3a0(lVar13);
    if (dVar21 <= dVar22) {
      dVar21 = dVar22;
    }
  }
  func_0x00010c165b00(dVar23,dVar21,dVar23,dVar21,lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 107dd7c40; end: 107dd7cfb; -[SCOperaLayerViewController setSafeInsetsBasedOnSubview:] */

void FUN_107dd7c40(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  func_0x00010bfb68e0(param_5);
  dVar3 = 0.0;
  if (param_2 < 0.0) {
    func_0x00010bfb68e0(param_5);
    param_1 = -param_2;
    dVar1 = param_1;
    if (0.0 <= param_2) {
      dVar1 = param_2;
    }
    func_0x00010befd3a0(param_3);
    dVar3 = param_1;
    if (param_1 <= dVar1) {
      dVar3 = dVar1;
    }
  }
  func_0x00010bfb68e0(param_5);
  dVar1 = 0.0;
  if (param_1 < 0.0) {
    func_0x00010bfb68e0(param_5);
    dVar1 = -param_1;
    dVar2 = dVar1;
    if (0.0 <= param_1) {
      dVar2 = param_1;
    }
    func_0x00010befd3a0(param_3);
    if (dVar1 <= dVar2) {
      dVar1 = dVar2;
    }
  }
  func_0x00010c165b00(dVar3,dVar1,dVar3,dVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107dd7cfc; end: 107dd7cff; -[SCOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107dd7cfc(void)

{
  return;
}



/* Entry: 107dd7d00; end: 107dd7d03; -[SCOperaLayerViewController didUpdateOperaPage:] */

void FUN_107dd7d00(void)

{
  return;
}



/* Entry: 107dd7d04; end: 107dd7d07; -[SCOperaLayerViewController viewDidFullyAppearWithBlockingLayerBelow] */

void FUN_107dd7d04(void)

{
  return;
}



/* Entry: 107dd7d08; end: 107dd7d0f; -[SCOperaLayerViewController currentViewParameters] */

undefined8 FUN_107dd7d08(void)

{
  return 0;
}



/* Entry: 107dd7d10; end: 107dd7d13; -[SCOperaLayerViewController rotateBasedOnOrientation] */

void FUN_107dd7d10(void)

{
  return;
}



/* Entry: 107dd7d14; end: 107dd7d17; -[SCOperaLayerViewController didReceiveUpdateProperties:] */

void FUN_107dd7d14(void)

{
  return;
}



/* Entry: 107dd7d18; end: 107dd7d1b; -[SCOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_107dd7d18(void)

{
  return;
}



/* Entry: 107dd7d1c; end: 107dd7d1f; -[SCOperaLayerViewController updateViewWithVerticalPageOffset:relativePosition:] */

void FUN_107dd7d1c(void)

{
  return;
}



/* Entry: 107dd7d20; end: 107dd7d23; -[SCOperaLayerViewController pageSafeAreaInsetsDidChange] */

void FUN_107dd7d20(void)

{
  return;
}



/* Entry: 107dd7d24; end: 107dd7d5b; -[SCOperaLayerViewController setupPlaybackProgressUpdateTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f894);
  *(undefined8 *)(param_1 + _DAT_11276f894) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd7d5c; end: 107dd7d63; -[SCOperaLayerViewController layerProgressTrackable] */

undefined8 FUN_107dd7d5c(void)

{
  return 0;
}



/* Entry: 107dd7d64; end: 107dd7d6b; -[SCOperaLayerViewController videoPlayerOwner] */

undefined8 FUN_107dd7d64(void)

{
  return 0;
}



/* Entry: 107dd7d6c; end: 107dd7d6f; -[SCOperaLayerViewController didScrollHorizontallyWithOffset:] */

void FUN_107dd7d6c(void)

{
  return;
}



/* Entry: 107dd7d70; end: 107dd7d73; -[SCOperaLayerViewController viewWillBeginTransitionIn:] */

void FUN_107dd7d70(void)

{
  return;
}



/* Entry: 107dd7d74; end: 107dd7d77; -[SCOperaLayerViewController viewDidCancelTransitionIn] */

void FUN_107dd7d74(void)

{
  return;
}



/* Entry: 107dd7d78; end: 107dd7d7b; -[SCOperaLayerViewController viewWillBeginTransitionOut] */

void FUN_107dd7d78(void)

{
  return;
}



/* Entry: 107dd7d7c; end: 107dd7d7f; -[SCOperaLayerViewController viewDidCancelTransitionOut:] */

void FUN_107dd7d7c(void)

{
  return;
}



/* Entry: 107dd7d80; end: 107dd7d83; -[SCOperaLayerViewController viewWillFullyAppear] */

void FUN_107dd7d80(void)

{
  return;
}



/* Entry: 107dd7d84; end: 107dd7d87; -[SCOperaLayerViewController viewDidFullyAppear] */

void FUN_107dd7d84(void)

{
  return;
}



/* Entry: 107dd7d88; end: 107dd7d8b; -[SCOperaLayerViewController viewWillFullyDisappear] */

void FUN_107dd7d88(void)

{
  return;
}



/* Entry: 107dd7d8c; end: 107dd7d8f; -[SCOperaLayerViewController viewDidFullyDisappear] */

void FUN_107dd7d8c(void)

{
  return;
}



/* Entry: 107dd7d90; end: 107dd7d93; -[SCOperaLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

void FUN_107dd7d90(void)

{
  return;
}



/* Entry: 107dd7d94; end: 107dd7d97; -[SCOperaLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

void FUN_107dd7d94(void)

{
  return;
}



/* Entry: 107dd7d98; end: 107dd7d9b; -[SCOperaLayerViewController pause] */

void FUN_107dd7d98(void)

{
  return;
}



/* Entry: 107dd7d9c; end: 107dd7d9f; -[SCOperaLayerViewController setPausedForAttachment:] */

void FUN_107dd7d9c(void)

{
  return;
}



/* Entry: 107dd7da0; end: 107dd7da7; -[SCOperaLayerViewController isPausedForAttachment] */

undefined8 FUN_107dd7da0(void)

{
  return 0;
}



/* Entry: 107dd7da8; end: 107dd7dab; -[SCOperaLayerViewController overridePauseStateToPause] */

void FUN_107dd7da8(void)

{
  return;
}



/* Entry: 107dd7dac; end: 107dd7daf; -[SCOperaLayerViewController overridePauseStateToResume] */

void FUN_107dd7dac(void)

{
  return;
}



/* Entry: 107dd7db0; end: 107dd7db3; -[SCOperaLayerViewController resume] */

void FUN_107dd7db0(void)

{
  return;
}



/* Entry: 107dd7db4; end: 107dd7db7; -[SCOperaLayerViewController start] */

void FUN_107dd7db4(void)

{
  return;
}



/* Entry: 107dd7db8; end: 107dd7dbb; -[SCOperaLayerViewController stop] */

void FUN_107dd7db8(void)

{
  return;
}



/* Entry: 107dd7dbc; end: 107dd7dc3; -[SCOperaLayerViewController mediaIsBeingPreparedForDisplay] */

undefined8 FUN_107dd7dbc(void)

{
  return 0;
}



/* Entry: 107dd7dc4; end: 107dd7e7f; -[SCOperaLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7dc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f890);
  *(undefined8 *)(param_1 + _DAT_11276f890) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f88c);
  *(undefined8 *)(param_1 + _DAT_11276f88c) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_1 + _DAT_11276f888) == '\x01') {
    lVar2 = param_1;
    func_0x00010c29d0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar2);
    func_0x00010c29d0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107dd7e80; end: 107dd7e87; -[SCOperaLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107dd7e80(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 107dd7e88; end: 107dd7e8b; -[SCOperaLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_107dd7e88(void)

{
  return;
}



/* Entry: 107dd7e8c; end: 107dd7e8f; -[SCOperaLayerViewController setVolume:] */

void FUN_107dd7e8c(void)

{
  return;
}



/* Entry: 107dd7e90; end: 107dd7e93; -[SCOperaLayerViewController setMuted:] */

void FUN_107dd7e90(void)

{
  return;
}



/* Entry: 107dd7e94; end: 107dd7e9b; -[SCOperaLayerViewController isRecyclable] */

undefined8 FUN_107dd7e94(void)

{
  return 1;
}



/* Entry: 107dd7e9c; end: 107dd7edf; -[SCOperaLayerViewController supportedResponsiveLayoutType] */

void FUN_107dd7e9c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccda8);
  return;
}



/* Entry: 107dd7ee0; end: 107dd7ee7; -[SCOperaLayerViewController layerViewContainerOption] */

undefined8 FUN_107dd7ee0(void)

{
  return 0;
}



/* Entry: 107dd7ee8; end: 107dd7f17; -[SCOperaLayerViewController progressUpdateTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7ee8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f894);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd7f18; end: 107dd7f7f; -[SCOperaLayerViewController layoutSubview:layoutConfig:needsLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  func_0x00010c1d0560(*(undefined8 *)(param_1 + _DAT_11276f87c),param_2,param_4,param_3);
  if (param_5 != 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107dd7f80; end: 107dd7f8f; -[SCOperaLayerViewController layoutConfigForSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd7f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f87c),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 107dd7f90; end: 107dd8047; -[SCOperaLayerViewController setOperaContentRoundedCornersForView:notchedRadius:nonNotchedRadius:] */

void FUN_107dd7f90(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  _objc_retain(param_5);
  func_0x00010c17d4c0(param_5,param_4,1);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (dVar2 <= 0.0) {
    func_0x00010c1842e0(param_2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ce0();
  }
  else {
    func_0x00010c1842e0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107dd8048; end: 107dd804f; -[SCOperaLayerViewController canHandleRoundCorner] */

undefined8 FUN_107dd8048(void)

{
  return 1;
}



/* Entry: 107dd8050; end: 107dd8053; -[SCOperaLayerViewController didUpdateBottomPageViewProperties:] */

void FUN_107dd8050(void)

{
  return;
}



/* Entry: 107dd8054; end: 107dd8083; -[SCOperaLayerViewController legacySessionStateContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8054(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f898);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd8084; end: 107dd80bf; -[SCOperaLayerViewController scaleForHorizontalTransition:] */

double FUN_107dd8084(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (param_1 < 0.0) {
    param_1 = ABS(param_1);
    dVar1 = param_1 * -0.4 + param_1 * param_1 * 0.2 + 1.0;
  }
  return dVar1;
}



/* Entry: 107dd80c0; end: 107dd80d7; -[SCOperaLayerViewController alphaForHorizontalTransition:] */

double FUN_107dd80c0(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0 - ABS(param_1);
  if (0.0 <= param_1) {
    dVar1 = 1.0;
  }
  return dVar1;
}



/* Entry: 107dd80d8; end: 107dd818b; -[SCOperaLayerViewController imageProvider] */

void FUN_107dd80d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ea080();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0ea060();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd818c; end: 107dd823f; -[SCOperaLayerViewController videoAssetProvider] */

void FUN_107dd818c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ea080();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c299240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0ea060();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd8240; end: 107dd8243; -[SCOperaLayerViewController defaultLayerContentAnimator] */

void FUN_107dd8240(void)

{
  return;
}



/* Entry: 107dd8244; end: 107dd839f; -[SCOperaLayerViewController announceEvent:params:] */

void FUN_107dd8244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c27dd80();
    func_0x00010c0df840(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d7e40;
    func_0x00010c0ea6c0(PTR_PTR_1126d7e40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar1,param_2,param_3,param_1,puVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd83a0; end: 107dd8437; -[SCOperaLayerViewController announceEvent:] */

void FUN_107dd83a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(lVar1,param_2,param_3,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd8438; end: 107dd843b; -[SCOperaLayerViewController addPageTraceEventForAction:] */

void FUN_107dd8438(void)

{
  return;
}



/* Entry: 107dd843c; end: 107dd843f; -[SCOperaLayerViewController addPageTraceEventForActionString:] */

void FUN_107dd843c(void)

{
  return;
}


