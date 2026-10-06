/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071b373c; end: 1071b388f; -[SCOurStoryDeepLinkHandler _showAlertWithTitle:overViewController:] */

void FUN_1071b373c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  func_0x00010bddf1c0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1071b3890; end: 1071b389f;  */

void FUN_1071b3890(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1071b38a0; end: 1071b39fb; -[SCOurStoryDeepLinkHandler _convertStoryToPlayableDataModel:onPlayableDataModelResolvedBlock:] */

void FUN_1071b38a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_1071b39e0;
  lVar1 = param_3;
  func_0x00010c25b720();
  lVar3 = param_3;
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
LAB_1071b39b4:
      lVar3 = 0;
    }
    else {
      func_0x000108072c98(param_3,&PTR____CFConstantStringClassReference_110daafd8,0,0,0);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1071b39b8:
    _objc_release(lVar2);
  }
  else {
    if (lVar1 == 0xb) {
      lVar1 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) goto LAB_1071b39b4;
      func_0x000107a413c0(param_3,0,0,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071b39b8;
    }
    if (lVar1 != 0xd) goto LAB_1071b39e0;
    func_0x000107d02b54();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar3 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,lVar3,param_3);
    _objc_release(lVar3);
  }
LAB_1071b39e0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b39fc; end: 1071b416f; -[SCOurStoryDeepLinkHandler _playStoryDataModel:story:pageType:baseViewRef:storyPlayerModerationData:prependedCommentIds:hasExplicitTrendingTopic:] */

ulong FUN_1071b39fc(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != 0) {
    uVar1 = param_4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x0001071b35b4();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = uVar2;
    _objc_release(uVar3);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = uVar1;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    lVar23 = *(long *)(param_1 + 0x158);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010c1063a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar23);
    lVar6 = lVar23;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(lVar23);
        }
        _objc_retain(puVar5);
        func_0x00010bde9560(param_1);
        _objc_release(puVar5);
        lVar22 = lVar22 + 1;
      } while (lVar6 != lVar22);
      lVar6 = lVar23;
      func_0x00010bf52a60();
    }
    _objc_release(lVar23);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar7 = PTR_PTR_1126c6988;
    _objc_alloc();
    puVar8 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c00cf80();
    _objc_release(puVar8);
    _objc_retain(puVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    *(undefined **)(param_1 + 0x170) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x178);
    *(undefined **)(param_1 + 0x178) = puVar5;
    _objc_release(uVar3);
    if (*(int *)(param_1 + 0xd8) != 0) {
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = param_4;
      _objc_release(uVar3);
      _objc_retain(param_8);
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = param_8;
      _objc_release(uVar3);
    }
    uVar3 = 0x55;
    if (param_5 != 0x82) {
      uVar3 = 0x48;
    }
    puVar8 = PTR_PTR_1126b1118;
    _objc_alloc();
    uVar12 = uVar3;
    func_0x000108534aec(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043160();
    _objc_release(uVar12);
    func_0x000108534aa8();
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b23f0;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ae0();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar12 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ed80();
    uVar3 = uVar12;
    func_0x00010bf82a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    func_0x00010befa160(puVar10);
    puVar13 = PTR_PTR_1126cc5b0;
    _objc_alloc();
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar14 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar15;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff71e0();
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar6);
    func_0x00010befa120(puVar10);
    puVar17 = puVar5;
    func_0x00010bf51e00(puVar5);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar14 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7eb60(param_1);
    _objc_release(lVar14);
    _objc_release(lVar6);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(uVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar23);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar18 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar19;
  func_0x00010c0720c0();
  if ((uVar24 & 1) == 0) {
    lVar21 = *(long *)(param_3 + 0x28);
    func_0x00010c08fa60();
    if (lVar21 == 0) {
      uVar24 = 1;
    }
    else {
      uVar20 = param_2;
      func_0x0001071b35b4(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar20;
      func_0x00010c0720c0();
      uVar24 = (ulong)((uint)uVar24 ^ 1);
      _objc_release(uVar20);
    }
  }
  else {
    uVar24 = 0;
  }
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(param_2);
  return uVar24;
}



/* Entry: 1071b4170; end: 1071b4237;  */

uint FUN_1071b4170(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar6 = 1;
    }
    else {
      uVar3 = param_2;
      func_0x0001071b35b4(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      uVar6 = (uint)uVar5 ^ 1;
      _objc_release(uVar3);
    }
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1071b4238; end: 1071b424b;  */

void FUN_1071b4238(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
    return;
  }
  return;
}



/* Entry: 1071b424c; end: 1071b425b; -[SCOurStoryDeepLinkHandler _feedPageSectionFromBroadcastViewLocation:] */

undefined8 FUN_1071b424c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x37;
  if (param_3 != 0x48) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1071b425c; end: 1071b446f; -[SCOurStoryDeepLinkHandler _presentStory:allDataModels:plugins:pageType:baseView:sessionContext:hasExplicitTrendingTopic:] */

void FUN_1071b425c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bddf1c0(param_1);
  }
  puVar3 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  func_0x00010c0087a0();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  _objc_retain();
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf51e00();
  func_0x00010bf23920(uVar6,param_2,param_8,lVar2,lVar4,puVar3,puVar1,param_1,uVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b4470; end: 1071b4527; -[SCOurStoryDeepLinkHandler _cleanUpOperaPresenter] */

void FUN_1071b4470(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 200;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 200;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12d740();
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x180,0);
  return;
}



/* Entry: 1071b4528; end: 1071b45db; -[SCOurStoryDeepLinkHandler _creatorProfileIdFromStory:] */

void FUN_1071b4528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1057a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bf25140(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1071b45dc; end: 1071b47cb; -[SCOurStoryDeepLinkHandler _launchRepliesTray:prependedCommentIds:] */

void FUN_1071b45dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_4);
    lVar1 = param_3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c25b720();
    lVar3 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010afef86c();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c07dce0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if ((lVar3 != 0 && lVar1 == 0xd) && ((int)lVar7 != 0)) {
      func_0x000108f4b800();
    }
    puVar8 = PTR_PTR_1126b6018;
    _objc_alloc(PTR_PTR_1126b6018);
    func_0x00010c00a1a0();
    _objc_release(param_4);
    puVar9 = PTR_PTR_1126cc558;
    _objc_alloc(PTR_PTR_1126cc558);
    func_0x00010c001000();
    uVar10 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b47cc; end: 1071b483f; -[SCOurStoryDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1071b47cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_storeWeak(param_1 + 0x180,param_3);
  uVar1 = *(ulong *)(param_1 + 0x178);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    lVar2 = param_1 + 0x180;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010bf51e00(uVar3);
    func_0x00010c2889e0(lVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1071b4840; end: 1071b4887; -[SCOurStoryDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1071b4840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    func_0x00010be48240(param_1,param_2,*(undefined8 *)(param_1 + 0xd0),
                        *(undefined8 *)(param_1 + 0xe0));
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1071b4888; end: 1071b488b; -[SCOurStoryDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1071b4888(void)

{
  return;
}



/* Entry: 1071b488c; end: 1071b488f; -[SCOurStoryDeepLinkHandler operaPresenterDidCancelDismissing:] */

void FUN_1071b488c(void)

{
  return;
}



/* Entry: 1071b4890; end: 1071b4893; -[SCOurStoryDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1071b4890(void)

{
  return;
}



/* Entry: 1071b4894; end: 1071b4897; -[SCOurStoryDeepLinkHandler operaPresenterDidFailToPresent:] */

void FUN_1071b4894(void)

{
  return;
}



/* Entry: 1071b4898; end: 1071b489b; -[SCOurStoryDeepLinkHandler operaPresenterDidFinishDismissing:] */

void FUN_1071b4898(void)

{
  return;
}



/* Entry: 1071b489c; end: 1071b489f; -[SCOurStoryDeepLinkHandler operaPresenterDidTearDown:] */

void FUN_1071b489c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpOperaPresenter_112555610);
  return;
}



/* Entry: 1071b48a0; end: 1071b48a3; -[SCOurStoryDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1071b48a0(void)

{
  return;
}



/* Entry: 1071b48a4; end: 1071b48a7; -[SCOurStoryDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1071b48a4(void)

{
  return;
}



/* Entry: 1071b48a8; end: 1071b48ab; -[SCOurStoryDeepLinkHandler removeContentForCreatorId:playlistItemController:] */

void FUN_1071b48a8(void)

{
  return;
}



/* Entry: 1071b48ac; end: 1071b4acb; -[SCOurStoryDeepLinkHandler .cxx_destruct] */

void FUN_1071b48ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071b4acc; end: 1071b4e3b; -[SCPublicStoriesDeepLinkHandler initWithUserSession:remoteStoriesDataProvider:snapchatterPublicInfoFetcher:presentingViewController:navigationDelegate:circumstanceEngine:friendProfileScopeExposer:businessProfilesPresenterScopeExposer:operaSessionScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:storiesMetricServices:addFriendSheetScopeExposer:addFriendSheetScopeServices:storiesConfigProvider:] */

undefined8 *
FUN_1071b4acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f8b38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 1071b4e3c; end: 1071b510b; -[SCPublicStoriesDeepLinkHandler handleDeepLinkURL:additionalInfo:] */

void FUN_1071b4e3c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bdc9be0(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar6;
      _objc_release(uVar5);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar4;
      _objc_release(uVar5);
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar3;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar6;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar3);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1071b510c;
    puStack_80 = &UNK_110855370;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010be94d00(param_1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b510c; end: 1071b51c3;  */

void FUN_1071b510c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar2 == 0) {
    func_0x00010be7dbc0();
  }
  else {
    func_0x00010be94d80();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071b51c4; end: 1071b521f;  */

void FUN_1071b51c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b5220; end: 1071b5237; -[SCPublicStoriesDeepLinkHandler _shouldGuardInvalidSnapchatter] */

void FUN_1071b5220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ea1618,0,0);
  return;
}



/* Entry: 1071b5238; end: 1071b529f; -[SCPublicStoriesDeepLinkHandler _alertGenericError] */

void FUN_1071b5238(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb7ba0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1071b52a0; end: 1071b5307; -[SCPublicStoriesDeepLinkHandler _alertStoryExpiredOverViewController:] */

void FUN_1071b52a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1c718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7ba0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1071b5308; end: 1071b544f; -[SCPublicStoriesDeepLinkHandler _showAlertWithTitle:overViewController:] */

void FUN_1071b5308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1071b5450; end: 1071b545f;  */

void FUN_1071b5450(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1071b5460; end: 1071b55ff; -[SCPublicStoriesDeepLinkHandler _resolveSnapchatterForUserName:deepLinkUrl:successBlock:failureBlock:] */

void FUN_1071b5460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar2 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1071b5600;
  puStack_88 = &UNK_110991440;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_retain(param_6);
  uStack_78 = param_6;
  _objc_retainBlock(&puStack_a0);
  puVar1 = PTR_PTR_1126b3f90;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c135d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298820(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b5600; end: 1071b568f;  */

void FUN_1071b5600(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_2 == 0) || (param_3 == 0)) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be94ce0();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b5690; end: 1071b5867; -[SCPublicStoriesDeepLinkHandler _resolveSnapchatterForUserId:successBlock:failureBlock:] */

void FUN_1071b5690(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar8 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_4);
  puVar9 = puVar2;
  func_0x00010c09d7c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if ((puVar9 == (undefined *)0x0) &&
     (puVar3 = puVar8, func_0x00010bf529e0(), puVar3 != (undefined1 *)0x0)) {
    lVar4 = param_3 + 0x38;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010beb3ea0();
    _objc_release(lVar4);
    puVar3 = puVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    if ((puVar7 == (undefined1 *)0x0) && ((int)lVar5 != 0)) {
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),puVar3);
    }
    _objc_release(puVar3);
  }
  else {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1071b5868; end: 1071b5963;  */

void FUN_1071b5868(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010beb3ea0();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if ((lVar4 == 0) && ((int)lVar2 != 0)) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1);
    }
    _objc_release(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071b5964; end: 1071b5b6f; -[SCPublicStoriesDeepLinkHandler _resolveStoryProfileForSnapchatter:] */

void FUN_1071b5964(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb3ea0();
  uVar6 = (uint)lVar1;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    uVar6 = lVar2 == 0 & uVar6;
  }
  if (uVar6 == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_3;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1071b5b70;
    puStack_60 = &UNK_1109194e0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    ppuVar4 = &puStack_78;
    lStack_58 = param_3;
    _objc_retainBlock(ppuVar4);
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfa9900(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bdc9be0(param_1);
    puVar5 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94220();
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071b5b70; end: 1071b5c2f;  */

void FUN_1071b5b70(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be7dbc0(param_1);
  }
  else {
    func_0x00010be74ae0(param_1);
  }
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071b5c30; end: 1071b5c77; -[SCPublicStoriesDeepLinkHandler _playStoryWithStoriesSummaryInfo:] */

void FUN_1071b5c30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107a8819c(param_4);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x80) = param_1;
  func_0x00010be7eb80(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071b5c78; end: 1071b5f0b; -[SCPublicStoriesDeepLinkHandler _presentStoryPlaybackScope:] */

void FUN_1071b5c78(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  
  uVar12 = *(ulong *)(param_2 + 0xb0);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010bf713a0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf1f320(uVar12,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar12);
  puVar1 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar9 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar1,param_3,7,0x92,(long)(param_1 * 1000.0),0x48,param_4,uVar9,
                      uVar2 & 0xffffffff,0x37);
  _objc_release(param_4);
  _objc_release(uVar9);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  lVar4 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bff7200(puVar3,param_3,lVar5,lVar6,0,param_2,0,1,0,0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b4d38;
  func_0x00010c2585a0(PTR_PTR_1126b4d38,param_3,0,0xc,7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar13 = *(double *)(param_2 + 0x80);
  func_0x00010bff0a00(dVar13);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010bf22a20(uVar9,param_3,puVar1,puVar3,0,8,puVar7,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bfcdf20(uVar10);
  _objc_retainAutoreleasedReturnValue();
  dVar14 = *(double *)(param_2 + 0x80);
  _CACurrentMediaTime();
  uVar11 = 0x48;
  func_0x000108534a80(0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar13 - dVar14) * 1000.0),uVar10,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x68),param_3,uVar9);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071b5f0c; end: 1071b5f53; -[SCPublicStoriesDeepLinkHandler _cleanUpOperaPresenter] */

void FUN_1071b5f0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071b5f54; end: 1071b60d7; -[SCPublicStoriesDeepLinkHandler _presentProfileForSnapchatter:showAlertStoryExpired:] */

void FUN_1071b5f54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb3ea0();
  uVar5 = (uint)uVar1;
  if ((param_3 != 0) || (uVar5 == 0)) {
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c242760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((lVar4 == 0 & uVar5) == 1) goto LAB_1071b60a4;
    }
    else {
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    uVar5 = lVar4 == 0 & uVar5;
    if (lVar3 == 0) {
      if (uVar5 == 0) {
        func_0x00010be7f380(param_1,param_2,param_3);
        goto LAB_1071b60ac;
      }
    }
    else if (uVar5 == 0) {
      lVar2 = param_3;
      func_0x00010c242760(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7a5e0(param_1,param_2,lVar2,lVar3,param_4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_1071b60ac;
    }
  }
LAB_1071b60a4:
  func_0x00010bdc9be0(param_1);
LAB_1071b60ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b60d8; end: 1071b6273; -[SCPublicStoriesDeepLinkHandler _presentUserProfileForSnapchatter:] */

void FUN_1071b60d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb3ea0();
  uVar4 = (uint)lVar1;
  if (param_3 == 0) {
LAB_1071b615c:
    if (uVar4 != 0) {
      func_0x00010bdc9be0(param_1);
      goto LAB_1071b6254;
    }
    _objc_loadWeakRetained(param_1 + 0x20);
    _objc_release();
  }
  else {
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_1071b615c;
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if ((lVar1 == 0 & uVar4) != 0) goto LAB_1071b6254;
  }
  lVar1 = param_1 + 0x20;
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar3,param_2,lVar1,1);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar5 == (undefined *)0x0) {
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1071b6238;
    }
LAB_1071b6224:
    func_0x00010bdc9be0(param_1);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c0159e0();
    if ((puVar5 == (undefined *)0x0 & uVar4) != 0) goto LAB_1071b6224;
LAB_1071b6238:
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_1071b6254:
  _objc_release(param_3);
  return;
}



/* Entry: 1071b6274; end: 1071b63fb; -[SCPublicStoriesDeepLinkHandler _presentBusinessProfileForSnapProId:userId:showAlertStoryExpired:] */

void FUN_1071b6274(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010beb3ea0();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if ((uint)lVar2 != 0) {
      func_0x00010bdc9be0(param_1);
      goto LAB_1071b63d4;
    }
    _objc_loadWeakRetained(param_1 + 0x20);
    _objc_release();
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (((uint)(lVar1 == 0) & (uint)lVar2) != 0) goto LAB_1071b63d4;
  }
  lVar1 = param_1 + 0x20;
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + 0x50) = param_5;
  puVar3 = PTR_PTR_1126b4158;
  _objc_alloc(PTR_PTR_1126b4158);
  _objc_loadWeakRetained(lVar1);
  uVar4 = 0x13;
  func_0x00010bc9107c(0x13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0xc;
  func_0x00010bb0584c(0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd00(puVar3,param_2,param_3,param_1,lVar1,uVar4,uVar5,0,param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
  _objc_release(puVar3);
LAB_1071b63d4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b63fc; end: 1071b64cb; -[SCPublicStoriesDeepLinkHandler _presentAddFriendPrompt] */

void FUN_1071b63fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010be60dc0();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x98) != 0 && lVar2 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    lVar3 = *(long *)(param_1 + 0x88);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010bdc1b20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23ba0(uVar5,param_2,lVar2,param_1,uVar1,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x88),param_2,uVar5);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071b64cc; end: 1071b657b; -[SCPublicStoriesDeepLinkHandler _modalContainer] */

void FUN_1071b64cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1071b657c; end: 1071b65eb; -[SCPublicStoriesDeepLinkHandler businessProfilesPresenterScopeWillDismiss:] */

void FUN_1071b657c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_3 != 0) {
    func_0x00010be68ea0(param_1);
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b65ec; end: 1071b6603; -[SCPublicStoriesDeepLinkHandler showProfilePresenterDidFinishPresenting:profileViewController:] */

void FUN_1071b65ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__alertStoryExpiredOverViewContro_1125500b0,param_4);
    return;
  }
  return;
}



/* Entry: 1071b6604; end: 1071b6607; -[SCPublicStoriesDeepLinkHandler showProfilePresenterViewControllerViewDidAppear] */

void FUN_1071b6604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAddFriendPrompt_11257c168);
  return;
}



/* Entry: 1071b6608; end: 1071b66bb; -[SCPublicStoriesDeepLinkHandler _onFinishStoryPlayback] */

void FUN_1071b6608(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c11f8;
  func_0x00010bf713c0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    return;
  }
  lVar4 = param_1;
  func_0x00010beb3ea0();
  if ((*(long *)(param_1 + 0x48) == 0) && ((int)lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc9bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__alertGenericError_112550098);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentProfileForSnapchatter_sh_11257d090,*(long *)(param_1 + 0x48),0);
  return;
}



/* Entry: 1071b66bc; end: 1071b6717; -[SCPublicStoriesDeepLinkHandler _onDismissProfileView] */

void FUN_1071b66bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071b6718; end: 1071b671b; -[SCPublicStoriesDeepLinkHandler friendProfileDidDismiss:] */

void FUN_1071b6718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onDismissProfileView_112577d48);
  return;
}



/* Entry: 1071b671c; end: 1071b6763; -[SCPublicStoriesDeepLinkHandler endAddFriendSheetScope] */

void FUN_1071b671c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071b6764; end: 1071b6767; -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1071b6764(void)

{
  return;
}



/* Entry: 1071b6768; end: 1071b676b; -[SCPublicStoriesDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1071b6768(void)

{
  return;
}



/* Entry: 1071b676c; end: 1071b676f; -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1071b676c(void)

{
  return;
}



/* Entry: 1071b6770; end: 1071b6773; -[SCPublicStoriesDeepLinkHandler operaPresenterDidCancelDismissing:] */

void FUN_1071b6770(void)

{
  return;
}



/* Entry: 1071b6774; end: 1071b6777; -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1071b6774(void)

{
  return;
}



/* Entry: 1071b6778; end: 1071b677b; -[SCPublicStoriesDeepLinkHandler operaPresenterDidFailToPresent:] */

void FUN_1071b6778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onFinishStoryPlayback_112577ea0);
  return;
}



/* Entry: 1071b677c; end: 1071b677f; -[SCPublicStoriesDeepLinkHandler operaPresenterDidFinishDismissing:] */

void FUN_1071b677c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onFinishStoryPlayback_112577ea0);
  return;
}



/* Entry: 1071b6780; end: 1071b6783; -[SCPublicStoriesDeepLinkHandler operaPresenterDidTearDown:] */

void FUN_1071b6780(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpOperaPresenter_112555610);
  return;
}



/* Entry: 1071b6784; end: 1071b6787; -[SCPublicStoriesDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1071b6784(void)

{
  return;
}



/* Entry: 1071b6788; end: 1071b678b; -[SCPublicStoriesDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1071b6788(void)

{
  return;
}



/* Entry: 1071b678c; end: 1071b67d7; -[SCPublicStoriesDeepLinkHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_1071b678c(long param_1)

{
  long lVar1;
  
  func_0x00010c0eaf20();
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071b67d8; end: 1071b67db; -[SCPublicStoriesDeepLinkHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_1071b67d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 1071b67dc; end: 1071b67df; -[SCPublicStoriesDeepLinkHandler playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_1071b67dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFailToPresent__1126185a8);
  return;
}



/* Entry: 1071b67e0; end: 1071b68df; -[SCPublicStoriesDeepLinkHandler .cxx_destruct] */

void FUN_1071b67e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071b68e0; end: 1071b697b; -[SCPublicStoriesDeepLinkProcessor initWithNavigationDelegate:discoverFeedBaseDeepLinkProcessor:] */

undefined1 *
FUN_1071b68e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8b40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071b697c; end: 1071b6abb; -[SCPublicStoriesDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

long FUN_1071b697c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0f5820(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar3 = param_1;
  func_0x00010be455c0(param_1,param_2,lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c1d0640(puVar2,param_2,lVar1,&PTR____CFConstantStringClassReference_110ebb278);
    lVar4 = param_3;
    func_0x00010c0f5820(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c1d0640(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110ebb298);
    }
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c10dfe0();
    _objc_release(lVar5);
    func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar2);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1071b6abc; end: 1071b6b0f; -[SCPublicStoriesDeepLinkProcessor _isValidUsername:] */

bool FUN_1071b6abc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    bVar1 = uVar2 < 0x33;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1071b6b10; end: 1071b6b3b; -[SCPublicStoriesDeepLinkProcessor .cxx_destruct] */

void FUN_1071b6b10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071b6b3c; end: 1071b6ee7; -[SCPublisherStoriesDeepLinkHandler initWithUserSession:presentingViewController:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:circumstanceEngine:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:operaSessionScopeExposer:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:storiesExperimentServices:storiesMetricServices:adRenderDataParser:] */

undefined8 *
FUN_1071b6b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f8b48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 1071b6ee8; end: 1071b7553; -[SCPublisherStoriesDeepLinkHandler handlePublisherDeepLinkURLWithProfile:additionalInfo:] */

void FUN_1071b6ee8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uStack_150 = 2;
      uStack_148 = 4;
    }
    else {
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = uVar5;
      func_0x00010c2827c0();
      _objc_release(uVar5);
      uStack_150 = 0;
      if (uStack_148 != 3) {
        uStack_150 = 2;
      }
    }
    uVar5 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar5 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar8 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar11 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar10);
    uVar8 = uVar9;
    if ((uVar11 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    func_0x00010c067fc0(uVar8);
    _objc_release(uVar8);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar11 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar10);
    uVar8 = uVar9;
    if ((uVar11 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    uVar9 = uVar4;
    func_0x00010c08fa60();
    if (uVar9 == 0) {
      _objc_retain(uVar5);
      _objc_release(uVar4);
      uVar4 = uVar5;
    }
    uVar11 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar12 = uVar11;
    _objc_opt_isKindOfClass(uVar11,puVar10);
    uVar9 = uVar11;
    if ((uVar12 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar11);
    uVar11 = uVar9;
    func_0x00010bb0a584();
    _objc_release(uVar9);
    _objc_initWeak(auStack_70,param_1);
    uVar9 = uVar2;
    func_0x00010c08fa60();
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if ((uVar9 == 0) && (uVar9 = uVar4, func_0x00010c08fa60(), uVar9 == 0)) {
      puVar14 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17ba0();
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17ba0();
      _objc_release(puVar14);
      ppuVar15 = (undefined **)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17ba0();
      _objc_release(puVar14);
      puStack_e0 = puVar10;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1071b7554;
      puStack_c8 = &UNK_1109914a0;
      _objc_copyWeak(auStack_98,auStack_70);
      _objc_retain(uVar2);
      uStack_c0 = uVar2;
      _objc_retain(uVar4);
      uStack_b8 = uVar4;
      _objc_retain(puVar3);
      uStack_90 = uStack_148;
      puStack_b0 = puVar3;
      _objc_retain(uVar6);
      uStack_78 = (undefined1)uVar7;
      uStack_88 = uStack_150;
      uStack_a8 = uVar6;
      uStack_80 = uVar11;
      _objc_retain(uVar8);
      ppuVar15 = &puStack_e0;
      uStack_a0 = uVar8;
      _objc_retainBlock();
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(puStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      _objc_destroyWeak(auStack_98);
    }
    uStack_108 = 0xc2000000;
    uStack_100 = 0x1071b75e8;
    puStack_f8 = &UNK_1109914d0;
    puStack_110 = puVar10;
    _objc_copyWeak(auStack_e8,auStack_70);
    _objc_retain(ppuVar15);
    ppuVar13 = &puStack_110;
    ppuStack_f0 = ppuVar15;
    _objc_retainBlock(ppuVar13);
    func_0x00010be5af40(param_1);
    _objc_release(ppuVar13);
    _objc_release(ppuStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_70);
    _objc_release(ppuVar15);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b7554; end: 1071b766b;  */

void FUN_1071b7554(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f760();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b766c; end: 1071b7df3; -[SCPublisherStoriesDeepLinkHandler handlePublisherDeepLinkURL:additionalInfo:] */

void FUN_1071b766c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar12 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(uVar2);
  uVar3 = uVar12;
  func_0x00010c08fa60();
  uVar2 = uVar12;
  if (uVar3 == 0) {
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar12);
  }
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar12 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(uVar3);
  uVar4 = uVar12;
  func_0x00010c08fa60();
  uVar3 = uVar12;
  if (uVar4 == 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar12);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar12 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar12 = 0;
  }
  _objc_retain(uVar12);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    func_0x00010bc92e28();
    _objc_release(uVar4);
  }
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar1);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  func_0x00010bb0a584();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar1);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  func_0x00010c067fc0(uVar6);
  _objc_release(uVar6);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar12;
  func_0x00010c08fa60();
  if (uVar7 == 0) {
    _objc_retain(uVar4);
    _objc_release(uVar12);
    uVar12 = uVar4;
  }
  uVar7 = uVar2;
  func_0x00010c08fa60();
  if ((uVar7 == 0) || (uVar7 = uVar3, func_0x00010c08fa60(), uVar7 == 0)) {
    uVar7 = param_3;
    func_0x00010c074a80();
    if ((int)uVar7 == 0) {
      uVar9 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar8);
      uVar7 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar9);
      uVar10 = uVar7;
      func_0x00010c08fa60();
      uVar9 = uVar7;
      if (uVar10 == 0) {
        uVar10 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar11 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar8);
        uVar9 = uVar10;
        if ((uVar11 & 1) == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar10);
        _objc_release(uVar7);
      }
      uVar7 = uVar9;
      func_0x00010c08fa60();
      if (uVar7 != 0) {
        _objc_initWeak(auStack_68,param_1);
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010be5af40(param_1);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(uVar9);
    }
    else {
      func_0x00010be2e8a0(param_1);
    }
  }
  else {
    func_0x00010be0f760(param_1);
  }
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b7df4; end: 1071b7e3f;  */

void FUN_1071b7df4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b7e40; end: 1071b7f9b; -[SCPublisherStoriesDeepLinkHandler _handlePublisherHTTPDeepLinkURL:additionalInfo:] */

void FUN_1071b7e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c135d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1071b7f9c;
  puStack_68 = &UNK_110991530;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c13a800(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b7f9c; end: 1071b8113;  */

void FUN_1071b7f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010be5af40(lVar5);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1071b8114; end: 1071b818b;  */

void FUN_1071b8114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b818c; end: 1071b83ab; +[SCPublisherStoriesDeepLinkHandler resolveDiscoverURL:requestManager:successBlock:failureBlock:] */

void FUN_1071b818c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1071b829c;
  puStack_50 = &UNK_110991560;
  _objc_retain(param_5);
  uStack_48 = param_5;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c074a80();
  if ((int)uVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,param_3);
  }
  else {
    func_0x00010c13a760(PTR_PTR_1126d5038);
  }
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1071b83ac; end: 1071b851f; -[SCPublisherStoriesDeepLinkHandler _onResolvedBusinessProfile:playStoryBlock:] */

void FUN_1071b83ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf4c760();
  lVar2 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf4c740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c11b280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1;
  _objc_release(uVar5);
  if (param_4 == 0) {
    func_0x00010be7e8a0(param_1);
  }
  else {
    lVar1 = lVar4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar1;
    _objc_release(uVar5);
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    (**(code **)(param_4 + 0x10))(param_4,lVar3,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b8520; end: 1071b8587; -[SCPublisherStoriesDeepLinkHandler _showGenericError] */

void FUN_1071b8520(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb7ba0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1071b8588; end: 1071b85ef; -[SCPublisherStoriesDeepLinkHandler _showStoryExpiredError] */

void FUN_1071b8588(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1c718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb7ba0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1071b85f0; end: 1071b8737; -[SCPublisherStoriesDeepLinkHandler _showAlertWithTitle:overViewController:] */

void FUN_1071b85f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1071b8738; end: 1071b8747;  */

void FUN_1071b8738(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1071b8748; end: 1071b887b; -[SCPublisherStoriesDeepLinkHandler _lookupInfoForBusinessProfileId:onLookupCompletionBlock:] */

void FUN_1071b8748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bfd3240(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b887c; end: 1071b88cf;  */

void FUN_1071b887c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ab20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b88d0; end: 1071b89d3; -[SCPublisherStoriesDeepLinkHandler _handleImpalaBusinessProfileHandler:onLookupCompletionBlock:] */

void FUN_1071b88d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c2a14c0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b89d4; end: 1071b8a2f;  */

void FUN_1071b89d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf25020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e780();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071b8a30; end: 1071b8aa3; -[SCPublisherStoriesDeepLinkHandler _handleProfileForBusinessProfileAndUserData:onLookupCompletionBlock:] */

void FUN_1071b8a30(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010beb9440(param_1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071b8aa4; end: 1071b8be3; -[SCPublisherStoriesDeepLinkHandler _presentShowProfileForBusinessProfileId:showId:] */

void FUN_1071b8aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar1 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfea000(param_1);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b8be4; end: 1071b8c1b;  */

void FUN_1071b8be4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b8c1c; end: 1071b8d93; -[SCPublisherStoriesDeepLinkHandler _convertStoryToPlayableModel:overrideFirstSnapId:overrideResumeTimestamp:bitmojiAvatarIds:onPlayableDataModelResolvedBlock:] */

void FUN_1071b8c1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    if (lVar3 != 0) {
      func_0x000108072c98(param_3,param_4,param_6,0,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1071b8d18;
    }
  }
  else {
    func_0x000107a413c0(param_3,param_5,0,1);
    _objc_retainAutoreleasedReturnValue();
LAB_1071b8d18:
    if (lVar1 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,lVar1);
      _objc_release(lVar1);
      goto LAB_1071b8d44;
    }
  }
  func_0x00010beb9440(param_1);
LAB_1071b8d44:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b8d94; end: 1071b8fe3; -[SCPublisherStoriesDeepLinkHandler _fetchAndPlayStoryForPublisherId:storyId:overrideFirstSnapId:overrideResumeTimestamp:shouldUseShowsPlayer:bitmojiAvatarIds:onPlayableDataModelResolvedBlock:] */

void FUN_1071b8d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1071b8fe4;
  puStack_a0 = &UNK_1109915b0;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_8);
  uStack_88 = param_8;
  _objc_retain(param_9);
  uStack_80 = param_9;
  func_0x00010846f16c(uVar4,4,&PTR____CFConstantStringClassReference_110e68df8,uVar1,uVar2,puVar3,
                      param_7,PTR___dispatch_main_q_11034be20,&puStack_b8,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa0));
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b8fe4; end: 1071b904f;  */

void FUN_1071b8fe4(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bebb3c0(param_1);
  }
  else {
    func_0x00010bde9580(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071b9050; end: 1071b9167; -[SCPublisherStoriesDeepLinkHandler _playStoryDataModel:context:deepLinkId:baseViewController:commerceSource:scanSource:storyId:] */

void FUN_1071b9050(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x98) = param_1;
  if (param_7 == (undefined *)0x0) {
    param_7 = PTR_PTR_1126d5040;
    _objc_alloc(PTR_PTR_1126d5040);
    func_0x00010c033560();
    func_0x00010c1c8b80();
    lVar1 = param_2 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c10eda0();
    _objc_release(lVar1);
  }
  func_0x00010be7eba0(param_2,param_3,param_4,param_7,param_6,param_5,param_8,param_9,param_10);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071b9168; end: 1071b943b; -[SCPublisherStoriesDeepLinkHandler _presentStoryPlaybackScope:baseViewController:deepLinkId:context:commerceSource:scanSource:storyId:] */

void FUN_1071b9168(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010bf713a0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  param_1 = param_1 * 1000.0;
  func_0x00010c04bca0(puVar2);
  _objc_release(param_10);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar3);
  _objc_release(param_5);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b4d38;
  func_0x0001071bf890(param_8,param_7,param_9);
  func_0x00010c2585a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010bfcdf20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = *(double *)(param_2 + 0x98);
  _CACurrentMediaTime();
  uVar6 = 0x48;
  func_0x000108534a80(0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((param_1 - dVar7) * 1000.0),uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  func_0x00010bff0a00(*(undefined8 *)(param_2 + 0x98));
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010bf22a20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x78));
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071b943c; end: 1071b9483; -[SCPublisherStoriesDeepLinkHandler _cleanupOpera] */

void FUN_1071b943c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071b9484; end: 1071b967f; -[SCPublisherStoriesDeepLinkHandler _fetchAndPlayStoryForPublisherId:storyId:snapId:overrideResumeTimestamp:context:deepLinkId:shouldUseShowsPlayer:baseViewController:commerceSource:scanSource:bitmojiAvatarIds:] */

void FUN_1071b9484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_initWeak(auStack_68,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1071b9680;
  puStack_a8 = &UNK_1109915e0;
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_80 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_11);
  uStack_98 = param_11;
  uStack_78 = param_12;
  uStack_70 = param_13;
  _objc_retain(param_4);
  ppuVar1 = &puStack_c0;
  uStack_90 = param_4;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar2);
  func_0x00010be0f740(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b9680; end: 1071b9753;  */

void FUN_1071b9680(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bebb3c0(param_1);
  }
  else {
    func_0x00010be74a00(param_1);
  }
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


