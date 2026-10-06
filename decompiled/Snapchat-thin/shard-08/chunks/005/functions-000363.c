/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106240cd0; end: 106240dd3; -[SCSpotlightRepliesLogger initWithCompositeStoryId:snapId:isCreatorMode:isCommentAdmin:repliesLoggingInfo:isSpotlightActionBarEnabled:eventAnnouncer:interactionHistoryManager:discoverFeedDataFetcher:commentsSnapRepliesLogger:] */

long FUN_106240cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_9;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c000bc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                      param_11,param_12);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106240dd4; end: 106241007; -[SCSpotlightRepliesLogger initWithCompositeStoryId:snapId:isCreatorMode:isCommentAdmin:repliesLoggingInfo:isSpotlightActionBarEnabled:interactionHistoryManager:discoverFeedDataFetcher:commentsSnapRepliesLogger:] */

undefined1 *
FUN_106240dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0900;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = PTR_PTR_1126b02d0;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar3;
      _objc_release(uVar2);
    }
    *(undefined1 *)((long)puVar1 + 0x40) = param_5;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = param_8;
    puVar3 = PTR_PTR_1126c90b8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0xb8) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c90c0;
    _objc_alloc();
    func_0x00010c02c240(0,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined **)((long)puVar1 + 0xc0) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0xc0));
    *(undefined8 *)((long)puVar1 + 0xd8) = 0;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106241008; end: 10624111b; -[SCSpotlightRepliesLogger logCommentsTrayOpenIsForeground:commentTabType:gestureType:commentsEntryPoint:triggerCommentIds:headerSuggestedSearchQueryText:] */

void FUN_106241008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  uVar1 = param_7;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _objc_release(uVar4);
  func_0x00010c17f060(*(undefined8 *)(param_1 + 0xd0),param_2,*(undefined8 *)(param_1 + 0x98));
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  func_0x00010be58ee0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_7);
  lVar3 = param_1;
  func_0x00010beb4600();
  if ((int)lVar3 != 0) {
    func_0x00010be53180(param_1,param_2,param_3,param_5,param_6,param_8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10624111c; end: 10624115f; -[SCSpotlightRepliesLogger startClientProcessingTimer:] */

void FUN_10624111c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106241160; end: 1062412cb; -[SCSpotlightRepliesLogger logCommentsTrayDismissIsBackground:commentTabType:] */

void FUN_106241160(double param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  float fVar11;
  double dVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be58ec0();
  puVar10 = param_2;
  func_0x00010beb4600();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)puVar10 != 0) {
    if (*(long *)(param_2 + 0x28) == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      dVar12 = *(double *)(param_2 + 0x60);
      func_0x00010c26f3a0();
      param_1 = dVar12 - param_1;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
    }
    fVar11 = SUB84(param_1,0);
    func_0x00010be53160(param_2);
    puVar2 = PTR_PTR_1126c90c8;
    func_0x00010bf421e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfb2c80(puVar10);
    func_0x00010c0df740(fVar11 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar3;
    func_0x00010be57860(param_2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    func_0x00010be93880(param_2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar8 = *(long *)(puVar10 + 0x48);
  func_0x00010bf82a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    uVar4 = *(undefined8 *)(puVar10 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar10 + 0x48);
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010be0eec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar10 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    _objc_retain(param_5);
    _objc_retain(puVar1);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    func_0x00010c258f00(uVar6);
    _objc_release(puVar10);
    _objc_release(uVar6);
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar8);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    puVar1 = PTR_PTR_1126c90d0;
    _objc_alloc(PTR_PTR_1126c90d0);
    func_0x00010c259740(param_3);
    lVar8 = param_3;
    func_0x00010c25a160(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe69c0();
    func_0x00010c04d540(puVar1);
    lVar7 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar4);
    _objc_release(lVar7);
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062412cc; end: 1062414ab; -[SCSpotlightRepliesLogger _logRecentEventWithFeedActionType:extraData:] */

void FUN_1062412cc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf82a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be0eec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(param_4);
    _objc_retain(lVar4);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c258f00(uVar5);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x28);
    puVar6 = PTR_PTR_1126c90d0;
    _objc_alloc(PTR_PTR_1126c90d0);
    func_0x00010c259740(param_2);
    lVar1 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe69c0();
    func_0x00010c04d540(puVar6);
    lVar4 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar2);
    _objc_release(lVar4);
    _objc_release(puVar6);
    _objc_release(lVar7);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062414ac; end: 1062415bb;  */

void FUN_1062414ac(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126c90d0;
    _objc_alloc(PTR_PTR_1126c90d0);
    func_0x00010c259740(param_2);
    lVar2 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe69c0();
    func_0x00010c04d540(puVar1);
    lVar4 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062415bc; end: 10624162b; -[SCSpotlightRepliesLogger _feedTypeForLogging] */

undefined ** FUN_1062415bc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010bf4de00();
  ppuVar3 = (undefined **)0x0;
  if (lVar4 == 0x66) {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5188;
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c51a0;
  if (lVar4 != 0x4b) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c51e8;
  if (lVar4 != 0x49) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c51d0;
  if (lVar4 != 0x2d) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c51b8;
  if (lVar4 != 0x2c) {
    ppuVar2 = ppuVar1;
  }
  if (lVar4 < 0x49) {
    ppuVar3 = ppuVar2;
  }
  return ppuVar3;
}



/* Entry: 10624162c; end: 1062416d7; -[SCSpotlightRepliesLogger _sectionIdentifierForLogging] */

void FUN_10624162c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf4de00();
  puVar3 = (undefined *)0x0;
  if (lVar1 < 0x3e) {
    if (lVar1 == 0x2c) {
      ppuVar2 = &PTR_PTR_110cab550;
    }
    else {
      if (lVar1 != 0x2d) goto LAB_1062416bc;
      ppuVar2 = &PTR_PTR_110cab538;
    }
  }
  else if (lVar1 == 0x3e) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c0f1e60();
    if (lVar1 != 0xd) {
      puVar3 = (undefined *)0x0;
      goto LAB_1062416bc;
    }
    ppuVar2 = &PTR_PTR_110cab650;
  }
  else {
    ppuVar2 = &PTR_PTR_110cab5b0;
    if ((lVar1 != 0x4b) && (lVar1 != 0x66)) goto LAB_1062416bc;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
LAB_1062416bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062416d8; end: 106241a0b; -[SCSpotlightRepliesLogger _addToData:commentActionType:] */

void FUN_1062416d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c00c560();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f43098);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dc60f8);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110dc60f8);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dba818);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110dba818);
  }
  lVar3 = param_1;
  func_0x00010be0eec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110f41c38);
  _objc_release(lVar3);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f430f8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4de00(uVar4);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41e78);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c09a840(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar4,&PTR____CFConstantStringClassReference_110f43238);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0f1e60(uVar4);
  func_0x00010c0df780(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f430d8);
  _objc_release(puVar2);
  func_0x00010be9ce60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110f41cb8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_1;
    func_0x00010baf8a64(param_1);
    func_0x00010c0df780(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41c18);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5200,
                        &PTR____CFConstantStringClassReference_110ed79b8);
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f41cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5218,
                        &PTR____CFConstantStringClassReference_110f41cd8);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106241a0c; end: 106241b87; -[SCSpotlightRepliesLogger logEvent:extraData:] */

void FUN_106241a0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdc8b20(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc20(param_1,param_2,&PTR____CFConstantStringClassReference_110f41718,uVar1);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f430b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar6 = -1;
  }
  else {
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f430b8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c067ec0();
    lVar6 = (long)(int)lVar6;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f43038);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071ae0(lVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  func_0x00010be54160(param_1,param_2,param_3,lVar6,(uint)lVar3 ^ 1);
  if ((param_3 == 1) && (uVar5 = param_1, func_0x00010beb4600(), (int)uVar5 != 0)) {
    func_0x00010be57860(param_1,param_2,9,0);
  }
  func_0x00010be56aa0(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106241b88; end: 106241bd3; -[SCSpotlightRepliesLogger handleSwitchTabLoggingToCommentTabType:] */

void FUN_106241b88(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010be58ec0(param_1,param_2,0,param_3 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010be58ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSpotlightRepliesActionOpenTr_112573d58,0,param_3,5,0xffffffffffffffff
             ,0,0);
  return;
}



/* Entry: 106241bd4; end: 106241c2b; -[SCSpotlightRepliesLogger pauseCommentsTrayTimer] */

void FUN_106241bd4(double param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x28));
  param_1 = *(double *)(param_2 + 0x60) - param_1;
  *(double *)(param_2 + 0x60) = param_1;
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x30));
  *(double *)(param_2 + 0x68) = *(double *)(param_2 + 0x68) - param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106241c2c; end: 106241c87; -[SCSpotlightRepliesLogger resumeCommentsTrayTimer] */

void FUN_106241c2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106241c88; end: 106241cab; -[SCSpotlightRepliesLogger snapReplyPlaybackDidStart] */

void FUN_106241c88(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 106241cac; end: 106241ceb; -[SCSpotlightRepliesLogger snapReplyPlaybackDidEnd] */

void FUN_106241cac(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x78);
  if (0.0 < dVar1) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x80) =
         *(double *)(param_1 + 0x80) + (dVar1 - *(double *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* Entry: 106241cec; end: 106241d9f; -[SCSpotlightRepliesLogger commentsAreLoadedWithSuccess:] */

void FUN_106241cec(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
    *(undefined1 *)(param_2 + 0xa0) = 1;
    uVar1 = 2;
    if (param_4 == 0) {
      uVar1 = 3;
    }
    *(undefined8 *)(param_2 + 0xb8) = uVar1;
    if (param_4 == 0) {
      *(undefined8 *)(param_2 + 0xa8) = 0xbff0000000000000;
    }
    else {
      func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x28));
      param_1 = param_1 * -1000.0;
      *(double *)(param_2 + 0xa8) = param_1;
      if (*(long *)(param_2 + 0x38) != 0) {
        func_0x00010c26f3a0();
        uVar1 = *(undefined8 *)(param_2 + 0x48);
        func_0x00010bf4de00(uVar1);
        func_0x00010baf2e2c();
        _objc_retainAutoreleasedReturnValue();
        FUN_106267f44(*(undefined8 *)(param_2 + 0x58),uVar1,(long)(param_1 * -1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 106241da0; end: 106241de7; -[SCSpotlightRepliesLogger snapRepliesCarouselDidDisplayWithSuccess:] */

void FUN_106241da0(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  
  if (*(double *)(param_1 + 0xb0) == 0.0) {
    dVar1 = -1.0;
    if (param_3 != 0) {
      func_0x00010c26f3a0(*(undefined8 *)(param_1 + 0x28));
      dVar1 = dVar1 * -1000.0;
    }
    *(double *)(param_1 + 0xb0) = dVar1;
  }
  return;
}



/* Entry: 106241de8; end: 106241e2f; -[SCSpotlightRepliesLogger hasViewedFavoritedByCreatorModal] */

void FUN_106241de8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4de00(uVar1);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062685d0(*(undefined8 *)(param_1 + 0x58),uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106241e30; end: 106241e77; -[SCSpotlightRepliesLogger hasTappedFavoritedByCreatorAvatar] */

void FUN_106241e30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4de00(uVar1);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  FUN_10626845c(*(undefined8 *)(param_1 + 0x58),uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106241e78; end: 10624207f; -[SCSpotlightRepliesLogger logImpressionsWithImpressionItems:viewPort:viewPortScreenPosition:] */

void FUN_106241e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(param_9);
  lVar2 = param_9;
  func_0x00010bf52a60(param_9,param_8,&uStack_160,auStack_118,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_150;
    do {
      lVar8 = 0;
      do {
        if (*plStack_150 != lVar7) {
          _objc_enumerationMutation(param_9);
        }
        lVar6 = *(long *)(lStack_158 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x000107bc7c14(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar6;
          func_0x00010bfeaa00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_8,lVar6,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_9;
      func_0x00010bf52a60(param_9,param_8,&uStack_160,auStack_118,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_9);
  uVar5 = *(undefined8 *)(param_7 + 0xc0);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d0a0(param_1,param_2,param_3,param_4,param_5,param_6,uVar5,param_8,param_9,puVar1,
                      puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_9 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3380(uVar5,param_8,puVar1,&PTR___NSConcreteGlobalBlock_110917c18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106242080; end: 1062420cf; -[SCSpotlightRepliesLogger logImpressionsByFlushingAll] */

void FUN_106242080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3380(uVar2,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110917c18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062420d0; end: 1062420d3;  */

void FUN_1062420d0(void)

{
  return;
}



/* Entry: 1062420d4; end: 10624212b; -[SCSpotlightRepliesLogger addCommentsSnapReplyCount:] */

void FUN_1062420d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10624212c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 200),param_2,&puStack_40);
  return;
}



/* Entry: 10624212c; end: 10624213f;  */

void FUN_10624212c(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0xd8) =
       *(long *)(*(long *)(param_1 + 0x20) + 0xd8) + *(long *)(param_1 + 0x28);
  return;
}



/* Entry: 106242140; end: 106242173; -[SCSpotlightRepliesLogger _resetRepliesTrayTimer] */

void FUN_106242140(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106242174; end: 10624219f; -[SCSpotlightRepliesLogger _resetRepliesTabTimer] */

void FUN_106242174(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1062421a0; end: 1062421a7; -[SCSpotlightRepliesLogger _resetSnapReplyPlaybackTimer] */

void FUN_1062421a0(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 1062421a8; end: 106242227; -[SCSpotlightRepliesLogger _announceEventWithEventName:extraData:] */

void FUN_1062421a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106242228; end: 1062425ab; -[SCSpotlightRepliesLogger _logSpotlightRepliesActionOpenTrayTabIsForeground:commentTabType:gestureType:commentsEntryPoint:triggerCommentIds:headerSuggestedSearchQueryText:] */

undefined **
FUN_106242228(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined **param_8,undefined *param_9)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar13;
  _objc_release(uVar9);
  ppuVar10 = param_8;
  func_0x00010bf529e0();
  ppuVar11 = param_8;
  if (ppuVar10 == (undefined **)0x1) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar10 = param_8;
    func_0x00010bf529e0();
    if (ppuVar10 == (undefined **)0x2) {
      ppuVar10 = param_8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106242328;
    }
    ppuVar11 = (undefined **)0x0;
  }
  ppuVar10 = (undefined **)0x0;
LAB_106242328:
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be3d200(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar4 = ppuVar10;
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_9;
  if (param_9 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (ppuVar10 == (undefined **)0x0) {
    _objc_release(ppuVar4);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar12);
  lVar7 = param_2;
  func_0x00010bdc8b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc20(param_2);
  func_0x00010be54160(param_2);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(param_9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_8;
  }
  ___stack_chk_fail();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_8 + 8);
  ppuVar10 = (undefined **)0xe;
  if (param_5 != 0) {
    ppuVar10 = (undefined **)0xf;
  }
  if (bVar1 == 0) {
    ppuVar10 = (undefined **)0xb;
  }
  if (param_8[6] == (undefined *)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    puVar13 = param_8[0xd];
    func_0x00010c26f3a0();
    func_0x00010c0df720((double)puVar13 - param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar12);
  if (ppuVar11 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar13);
  }
  puVar12 = param_8[0xf];
  puVar14 = param_8[0x10];
  if (0.0 < (double)puVar12) {
    _CACurrentMediaTime();
    puVar14 = (undefined *)((double)puVar14 + ((double)puVar12 - (double)param_8[0xf]));
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(puVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar13);
  _objc_release(puVar12);
  if (param_8[0xe] != (undefined *)0x0) {
    func_0x00010c26f3a0();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(-(double)puVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar12);
  }
  if ((bVar1 & 1) == 0) {
    if (param_8[0x17] == (undefined *)0x2) {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_8[0x15],PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13);
      _objc_release(puVar12);
    }
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar12);
    if ((double)param_8[0x16] != 0.0) {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13);
      _objc_release(puVar12);
    }
  }
  ppuVar3 = param_8;
  func_0x00010bdc8b20(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc20(param_8);
  func_0x00010bf885a0(ppuVar11);
  func_0x00010be54660(param_8);
  if ((bVar1 & 1) == 0) {
    puVar12 = param_8[9];
    func_0x00010bf4de00(puVar12);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    if (param_8[0x17] == (undefined *)0x2) {
      FUN_106267dd0(param_8[0xb],puVar12,(long)(double)param_8[0x15]);
    }
    puVar14 = param_8[0xb];
    ppuVar4 = param_8;
    func_0x00010be4f1c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar4;
    FUN_1062680b8(puVar14,puVar12,ppuVar4,1);
    _objc_release(ppuVar4);
    _objc_release(puVar12);
  }
  func_0x00010be93860(param_8);
  func_0x00010be93bc0(param_8);
  _objc_release(ppuVar3);
  _objc_release(puVar13);
  _objc_release(ppuVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  if ((undefined *)((long)ppuVar10 + -1) < (undefined *)0x3) {
    return (undefined **)(&PTR_PTR_110917c98)[(long)ppuVar10 + -1];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 1062425ac; end: 1062429ab; -[SCSpotlightRepliesLogger _logSpotlightRepliesActionCloseTrayTabIsBackground:commentTabType:] */

undefined **
FUN_1062425ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_2 + 0x40);
  lVar10 = 0xe;
  if (param_5 != 0) {
    lVar10 = 0xf;
  }
  if (bVar1 == 0) {
    lVar10 = 0xb;
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    dVar14 = *(double *)(param_2 + 0x68);
    func_0x00010c26f3a0();
    func_0x00010c0df720(dVar14 - param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (ppuVar12 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar2);
  }
  dVar14 = *(double *)(param_2 + 0x78);
  dVar15 = *(double *)(param_2 + 0x80);
  if (0.0 < dVar14) {
    _CACurrentMediaTime();
    dVar15 = dVar15 + (dVar14 - *(double *)(param_2 + 0x78));
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  if (*(long *)(param_2 + 0x70) != 0) {
    func_0x00010c26f3a0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(-dVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  if ((bVar1 & 1) == 0) {
    if (*(long *)(param_2 + 0xb8) == 2) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(undefined8 *)(param_2 + 0xa8),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    if (*(double *)(param_2 + 0xb0) != 0.0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
    }
  }
  lVar7 = param_2;
  func_0x00010bdc8b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc20(param_2);
  func_0x00010bf885a0(ppuVar12);
  func_0x00010be54660(param_2);
  if ((bVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010bf4de00(uVar8);
    func_0x00010baf2e2c();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_2 + 0xb8) == 2) {
      FUN_106267dd0(*(undefined8 *)(param_2 + 0x58),uVar8,(long)*(double *)(param_2 + 0xa8));
    }
    uVar13 = *(undefined8 *)(param_2 + 0x58);
    lVar9 = param_2;
    func_0x00010be4f1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    FUN_1062680b8(uVar13,uVar8,lVar9,1);
    _objc_release(lVar9);
    _objc_release(uVar8);
  }
  func_0x00010be93860(param_2);
  func_0x00010be93bc0(param_2);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(ppuVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  if (lVar10 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110917c98)[lVar10 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 1062429ac; end: 1062429d3; -[SCSpotlightRepliesLogger _loadingStatusFromSCAContentCommentsLoadingState:] */

undefined ** FUN_1062429ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110917c98)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 1062429d4; end: 106242c83; -[SCSpotlightRepliesLogger _logFeedItemActionOpenTrayIsForeground:gestureType:commentsEntryPoint:headerSuggestedSearchQueryText:] */

void FUN_1062429d4(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ed79b8);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5218,
                        &PTR____CFConstantStringClassReference_110ed79b8);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_1;
  func_0x00010be3d200(param_1,param_2,param_5);
  func_0x00010c0df780(puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41cd8);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e5f218);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110e5f218);
  }
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e02998);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110e02998);
  }
  lVar3 = param_1;
  func_0x00010be9ce60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110f41cb8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = lVar3;
    func_0x00010baf8a64(lVar3);
    func_0x00010c0df780(puVar2,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41c18);
    _objc_release(puVar2);
  }
  func_0x00010be37fc0(param_1,param_2,puVar1);
  lVar4 = param_6;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_6,&PTR____CFConstantStringClassReference_110f43798);
  }
  func_0x00010be38040(param_1,param_2,puVar1);
  func_0x00010be38020(param_1,param_2,puVar1);
  func_0x00010bdcbc20(param_1,param_2,&PTR____CFConstantStringClassReference_110f41518,puVar1);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106242c84; end: 106242e4f; -[SCSpotlightRepliesLogger _logFeedItemActionCloseTrayIsBackground:repliesTrayViewSecsNumber:] */

void FUN_106242c84(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5260;
  if (param_3 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5200;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110ed79b8);
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f43178);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,param_4,&PTR____CFConstantStringClassReference_110f43178);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e5f218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110e5f218);
  }
  _objc_release(lVar4);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e02998);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,*(long *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110e02998);
  }
  func_0x00010be37fc0(param_1,param_2,puVar2);
  func_0x00010be38040(param_1,param_2,puVar2);
  func_0x00010be38020(param_1,param_2,puVar2);
  func_0x00010bdcbc20(param_1,param_2,&PTR____CFConstantStringClassReference_110f41518,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106242e50; end: 106242edf; -[SCSpotlightRepliesLogger _includeShareTrackingInformation:] */

void FUN_106242e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c1001e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c1001e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,uVar3,&PTR____CFConstantStringClassReference_110f42798);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106242ee0; end: 1062430f7; -[SCSpotlightRepliesLogger _includeCapturedOnSnapCameraIfNecessary:] */

void FUN_106242ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf82a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282820(lVar1);
    lVar3 = lVar2;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 0;
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      lVar2 = lVar3;
      func_0x00010c259560(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf680();
      _objc_release(lVar2);
      if (*(char *)(puStack_88 + 3) == '\x01') {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_3);
        _objc_release(puVar4);
      }
      __Block_object_dispose(&uStack_90,8);
      __Block_object_dispose(&uStack_70,8);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1062430f8; end: 106243257;  */

void FUN_1062430f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfbafa0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106243258; end: 106243403; -[SCSpotlightRepliesLogger _includeSearchRankingLoggingIfNecessary:] */

void FUN_106243258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf4de00();
  if (lVar1 == 0x1e) {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf82a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c282820();
    lVar1 = lVar2;
    func_0x00010c25bac0(lVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c154260();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = lVar1;
      func_0x00010c25a160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c154260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3,param_2,lVar5,&PTR____CFConstantStringClassReference_110ed7798);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    lVar2 = lVar1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c153ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar5 != 0) {
      lVar2 = lVar1;
      func_0x00010c25a160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c153ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3,param_2,lVar5,&PTR____CFConstantStringClassReference_110ed7758);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106243404; end: 106243457; -[SCSpotlightRepliesLogger _logGrapheneCounterMetricWithActionType:tabType:isThreadedReply:] */

/* WARNING: Removing unreachable block (ram,0x000106240b44) */
/* WARNING: Removing unreachable block (ram,0x000106240be4) */

void FUN_106243404(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf4de00(uVar2);
  _objc_retain();
  func_0x00010baf2e2c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45eb8;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45ed8;
  }
  _objc_retain(ppuVar1);
  switch(param_3) {
  case 0:
    FUN_1062646d4(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 1:
    FUN_1062663a4(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 2:
    FUN_106265efc(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 3:
    FUN_106264198(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 4:
    FUN_106265c84(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 5:
    FUN_10626494c(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 6:
    FUN_1062657dc(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 7:
    FUN_10626661c(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 8:
    FUN_106263f68(uVar3,uVar2,ppuVar1,1);
    break;
  case 9:
    FUN_106265a54(uVar3,uVar2,ppuVar1,1);
    break;
  case 10:
    FUN_1062650b8(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_106264e88(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xd:
    FUN_1062652e8(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xe:
    break;
  case 0xf:
    FUN_106265748(0x3ff0000000000000,uVar3,uVar2,ppuVar1);
    break;
  case 0x10:
    FUN_106266174(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x11:
    FUN_106266d3c(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x12:
    FUN_106266f6c(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x13:
    FUN_106266ac4(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 0x14:
    FUN_106266894(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x16:
    FUN_1062682e8(uVar3,uVar2,1);
    break;
  case 0x17:
    FUN_10626719c(uVar3,uVar2,param_5,ppuVar1,1);
    break;
  case 0x18:
    FUN_106267414(uVar3,uVar2,1);
    break;
  case 0x19:
    FUN_106267588(uVar3,uVar2,1);
    break;
  case 0x1a:
    FUN_1062676fc(uVar3,uVar2,1);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106243458; end: 1062434b7; -[SCSpotlightRepliesLogger _logGrapheneTimerMetricWithActionType:duration:tabType:isThreadedReply:] */

void FUN_106243458(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf4de00(uVar2);
  _objc_retain();
  func_0x00010baf2e2c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45eb8;
  if (param_5 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45ed8;
  }
  _objc_retain(ppuVar1);
  switch(param_4) {
  case 0:
    FUN_1062646d4(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 1:
    FUN_1062663a4(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 2:
    FUN_106265efc(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 3:
    FUN_106264198(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 4:
    FUN_106265c84(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 5:
    FUN_10626494c(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 6:
    FUN_1062657dc(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 7:
    FUN_10626661c(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 8:
    FUN_106263f68(uVar3,uVar2,ppuVar1,1);
    break;
  case 9:
    FUN_106265a54(uVar3,uVar2,ppuVar1,1);
    break;
  case 10:
    FUN_1062650b8(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xb:
    FUN_106264640(param_1,uVar3,uVar2,ppuVar1);
    break;
  case 0xc:
    FUN_106264e88(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xd:
    FUN_1062652e8(uVar3,uVar2,ppuVar1,1);
    break;
  case 0xe:
    FUN_106264df4(0x3ff0000000000000,uVar3,uVar2,ppuVar1);
    break;
  case 0xf:
    FUN_106265748(0x3ff0000000000000,uVar3,uVar2,ppuVar1);
    break;
  case 0x10:
    FUN_106266174(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x11:
    FUN_106266d3c(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x12:
    FUN_106266f6c(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x13:
    FUN_106266ac4(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 0x14:
    FUN_106266894(uVar3,uVar2,ppuVar1,1);
    break;
  case 0x16:
    FUN_1062682e8(uVar3,uVar2,1);
    break;
  case 0x17:
    FUN_10626719c(uVar3,uVar2,param_6,ppuVar1,1);
    break;
  case 0x18:
    FUN_106267414(uVar3,uVar2,1);
    break;
  case 0x19:
    FUN_106267588(uVar3,uVar2,1);
    break;
  case 0x1a:
    FUN_1062676fc(uVar3,uVar2,1);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062434b8; end: 1062435b7; -[SCSpotlightRepliesLogger fetchRepliesForSnapWithStatus:receivedStories:] */

void FUN_1062434b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010bf4de00(uVar4);
  func_0x00010baf2e2c();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    bVar5 = false;
  }
  else {
    lVar1 = param_4;
    func_0x00010c067ec0(param_4);
    bVar5 = 0 < (int)lVar1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c25b720(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_106267870(uVar6,param_3,puVar3,uVar4,bVar5,1);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062435b8; end: 1062437b3; -[SCSpotlightRepliesLogger logOpenTrayReplyCountComparisonWithReplies:] */

ulong FUN_1062435b8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 < 0x14) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010c09a840();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      _objc_retain(param_3);
      uVar3 = param_3;
      func_0x00010bf529e0(param_3);
      _objc_retain(param_3);
      uVar4 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar4 != 0) {
        uVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          lVar5 = *(long *)(uVar10 * 8);
          func_0x00010c26d4e0(lVar5);
          uVar3 = lVar5 + uVar3;
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
        uVar4 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      _objc_release(param_3);
      uVar4 = uVar2;
      func_0x00010c067fc0(uVar2);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      FUN_106267b58(*(undefined8 *)(param_1 + 0x58),puVar8,uVar3 != uVar4,puVar7,1);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(uVar2 + 0x48);
  func_0x00010bf4de00();
  uVar2 = 1;
  if ((0x3f < lVar9 - 0xcU || (1L << (lVar9 - 0xcU & 0x3f) & 0x802c000340040001U) == 0) &&
     (0x3c < lVar9 - 0x4fU || (1L << (lVar9 - 0x4fU & 0x3f) & 0x1000000000800001U) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1062437b4; end: 10624382b; -[SCSpotlightRepliesLogger _shouldLogFeedItemActionEventForContentViewSource] */

undefined8 FUN_1062437b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf4de00();
  uVar2 = 1;
  if ((0x3f < lVar1 - 0xcU || (1L << (lVar1 - 0xcU & 0x3f) & 0x802c000340040001U) == 0) &&
     (0x3c < lVar1 - 0x4fU || (1L << (lVar1 - 0x4fU & 0x3f) & 0x1000000000800001U) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10624382c; end: 10624388f; -[SCSpotlightRepliesLogger _SCAStoryFeedActionTypeFromContentCommentsActionType:commentsInteractionContext:] */

undefined8 FUN_10624382c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 0x1e) {
    if (param_3 == 0) {
      return 100;
    }
    if (param_3 == 1) {
      return 0x65;
    }
  }
  else {
    if (param_3 == 0x1e) {
      return 2;
    }
    if (param_3 == 0x20) {
      return 0x7d;
    }
    if (param_3 == 0x22) {
      uVar1 = 0x8f;
      if (param_4 == 5) {
        uVar1 = 0x90;
      }
      return uVar1;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 106243890; end: 106243cbf; -[SCSpotlightRepliesLogger _logOpsFeedEventIfNecessary:contentCommentActionData:] */

void FUN_106243890(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  lVar4 = param_1;
  func_0x00010beb4600();
  if ((int)lVar4 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar1);
    lVar4 = param_1;
    func_0x00010bdc39e0();
    if (lVar4 != -1) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar3);
      uVar1 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(uVar1);
      lVar4 = *(long *)(param_1 + 0x48);
      func_0x00010c25c580();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar4);
      if (*(long *)(param_1 + 0x10) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(puVar2);
      }
      func_0x00010be37fc0(param_1);
      uVar5 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar1 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010c08fa60();
      if (uVar5 != 0) {
        func_0x00010c1d0640(puVar2);
      }
      func_0x00010be38040(param_1);
      func_0x00010be38020(param_1);
      func_0x00010bdcbc20(param_1);
      _objc_release(uVar1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106243cc0; end: 106243ce3; -[SCSpotlightRepliesLogger _interactionContextFromSCAContentCommentsEntryPoint:] */

undefined8 FUN_106243cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddda3f8 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106243ce4; end: 1062440e3; -[SCSpotlightRepliesLogger cheetahLoggingLongImpressionHelper:didReachThresholdForItems:date:extraData:] */

void FUN_106243ce4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    puVar2 = param_6;
    func_0x00010c0d3c80(param_6);
  }
  dVar11 = 0.0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar9 = *(undefined8 *)(lVar10 * 8);
      uVar4 = uVar9;
      func_0x00010c0b4c20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c084900(uVar4);
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar5 = uVar9;
      func_0x00010c24e820(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar11 = dVar11 * 1000.0;
      func_0x00010c0df720(dVar11,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010befd100(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010befd100(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010c1d0640(puVar2);
      func_0x00010c1d0640(puVar2);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e820(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar6);
      _objc_release(uVar9);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar6);
      func_0x00010bdcbc20(param_1);
      _objc_release(uVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0xd0,0);
  _objc_storeStrong(param_3 + 200,0);
  _objc_storeStrong(param_3 + 0xc0,0);
  _objc_storeStrong(param_3 + 0x98,0);
  _objc_storeStrong(param_3 + 0x90,0);
  _objc_storeStrong(param_3 + 0x88,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1062440e4; end: 1062441af; -[SCSpotlightRepliesLogger .cxx_destruct] */

void FUN_1062440e4(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062441b0; end: 106244397; +[SCSpotlightRepliesLoggerFactory repliesLoggerWithLoggingInfo:compositeStoryId:snapId:isCreatorMode:isCommentAdmin:isSpotlightActionBarEnabled:dataServices:loggingServices:rankingServices:] */

void FUN_1062441b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined4 param_6,ulong param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126c90d8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = param_10;
  func_0x00010c08d460(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e440(puVar3,param_2,param_3,param_7,uVar4);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c90e0;
  _objc_alloc(PTR_PTR_1126c90e0);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar2 = param_5;
  }
  uVar4 = param_11;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  uVar6 = param_9;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x00010c000bc0(puVar5,param_2,ppuVar1,ppuVar2,param_6,param_7 & 0xffffffff,param_3,param_8,
                      uVar4,uVar6,puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = param_10;
  func_0x00010c08d460(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  uVar6 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106244398; end: 106244d8f; -[SCSpotlightRepliesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106244398(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  undefined *puVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  
  lVar1 = param_1 + (long)_DAT_112743d64;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar47 = param_1 + (long)_DAT_112743d68;
  uVar50 = uVar47;
  _objc_loadWeakRetained();
  uVar4 = uVar50;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar50);
  if (uVar5 == 0) {
    uVar50 = 0;
  }
  else {
    uVar50 = uVar5;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar47;
  _objc_loadWeakRetained(uVar47);
  uVar6 = uVar4;
  func_0x00010c23fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010be83c00(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = uVar7;
  func_0x00010bf4b900(uVar7,param_2,&PTR____CFConstantStringClassReference_110dcae38);
  uVar6 = param_1;
  func_0x00010be8ef40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a440();
  uVar8 = param_1;
  func_0x00010bde22a0(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010be8ef20(param_1,param_2,uVar50,uVar4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  lVar1 = param_1 + (long)_DAT_112743d6c;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf584a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126c90e8;
  _objc_alloc();
  uVar12 = uVar47;
  _objc_loadWeakRetained();
  uVar13 = uVar12;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar47;
  _objc_loadWeakRetained();
  uVar15 = uVar14;
  func_0x00010c2411c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar47;
  _objc_loadWeakRetained();
  uVar17 = uVar16;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_112743d70;
  lVar1 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar52 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar52;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)_DAT_112743d74;
  _objc_loadWeakRetained();
  lVar19 = lVar2;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar22 = lVar51;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047360(puVar11,param_2,uVar13,uVar15,uVar17,lVar18,lVar21,uVar4 & 0xffffffff,lVar23);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar51);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lVar52);
  _objc_release(lVar1);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar12 = param_1;
  func_0x00010bde2280(param_1,param_2,puVar11,uVar8,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126c90f0;
  _objc_alloc();
  lVar1 = param_1 + (long)_DAT_112743d78;
  _objc_loadWeakRetained(lVar1);
  lVar51 = lVar1;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)_DAT_112743d7c;
  _objc_loadWeakRetained(lVar2);
  lVar52 = lVar2;
  func_0x00010c085220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa560(puVar24,param_2,lVar51,lVar52);
  _objc_release(lVar52);
  _objc_release(lVar2);
  _objc_release(lVar51);
  _objc_release(lVar1);
  uVar13 = param_1;
  func_0x00010be8eee0(param_1,param_2,uVar50,uVar6,uVar9,uVar4 & 0xffffffff,uVar12,puVar24,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c90f8;
  _objc_alloc();
  lVar52 = (long)_DAT_112743d80;
  lVar1 = param_1 + lVar52;
  _objc_loadWeakRetained(lVar1);
  lVar18 = lVar1;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)_DAT_112743d84;
  _objc_loadWeakRetained(lVar2);
  lVar19 = lVar2;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + (long)_DAT_112743d88;
  _objc_loadWeakRetained(lVar51);
  lVar20 = lVar51;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff82a0(puVar25,param_2,lVar18,lVar19,lVar20);
  _objc_release(lVar20);
  _objc_release(lVar51);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lVar1);
  puVar46 = PTR_PTR_1126c9100;
  _objc_alloc();
  uVar14 = uVar47;
  _objc_loadWeakRetained();
  uVar4 = uVar14;
  func_0x00010c06f920();
  lVar1 = param_1 + (long)_DAT_112743d8c;
  _objc_loadWeakRetained();
  lVar26 = lVar1;
  func_0x00010c24bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar10;
  func_0x00010c24be80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar30 = lVar52;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)_DAT_112743d90;
  _objc_loadWeakRetained();
  lVar31 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + (long)_DAT_112743d94);
  lVar51 = param_1 + (long)_DAT_112743d98;
  _objc_loadWeakRetained();
  lVar32 = lVar51;
  func_0x00010c131960();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + (long)_DAT_112743d9c;
  _objc_loadWeakRetained();
  lVar34 = lVar18;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + (long)_DAT_112743da0;
  _objc_loadWeakRetained();
  lVar35 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + (long)_DAT_112743da4;
  _objc_loadWeakRetained();
  lVar36 = lVar20;
  func_0x00010c24be40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + (long)_DAT_112743da8;
  _objc_loadWeakRetained();
  lVar37 = lVar21;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar47;
  _objc_loadWeakRetained();
  uVar17 = uVar38;
  func_0x00010c131760();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar47;
  _objc_loadWeakRetained();
  uVar15 = uVar16;
  func_0x00010c131840();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + (long)_DAT_112743dac;
  _objc_loadWeakRetained();
  lVar39 = lVar22;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = (long)_DAT_112743db4;
  uVar49 = *(undefined8 *)(param_1 + (long)_DAT_112743db0);
  lVar23 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar40 = lVar23;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar10;
  func_0x00010c24bf20();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + (long)_DAT_112743db8;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ee60(puVar46,param_2,uVar4 & 0xffffffff,lVar27,lVar29,puVar11,lVar30,lVar31,uVar48,
                      lVar33,lVar34,lVar35,lVar36,lVar37,uVar17,uVar15,uVar13,uVar6,uVar9,lVar39,
                      uVar49,lVar40,lVar42,puVar25,lVar43,lVar45,
                      *(undefined8 *)(param_1 + (long)_DAT_112743dbc),puVar24);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar23);
  _objc_release(lVar39);
  _objc_release(lVar22);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar17);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar21);
  _objc_release(lVar36);
  _objc_release(lVar20);
  _objc_release(lVar35);
  _objc_release(lVar19);
  _objc_release(lVar34);
  _objc_release(lVar18);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar51);
  _objc_release(lVar31);
  _objc_release(lVar2);
  _objc_release(lVar30);
  _objc_release(lVar52);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar1);
  _objc_release(uVar14);
  func_0x00010c18b5e0(puVar46,param_2,param_1);
  func_0x00010c1e1580(uVar12,param_2,puVar46);
  _objc_loadWeakRetained();
  uVar4 = uVar47;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar4);
  _objc_release(uVar47);
  _objc_release(puVar46);
  _objc_release(puVar25);
  _objc_release(uVar13);
  _objc_release(puVar24);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar50);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106244d90; end: 106244fbf; -[SCSpotlightRepliesEntryPoint _repliesShareManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106244d90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
  puVar1 = PTR_PTR_1126c9108;
  _objc_alloc();
  lVar17 = (long)_DAT_112743dc0;
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112743dc4;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112743dc8);
  lVar6 = param_1 + _DAT_112743dcc;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112743dd0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112743dd4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar11 = lVar17;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112743d9c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112743dd8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112743da0;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b580(puVar1,param_2,lVar3,lVar5,uVar18,lVar6,lVar8,lVar10,lVar11,lVar13,lVar15,
                      lVar16);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar17);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106244fc0; end: 1062450cf; -[SCSpotlightRepliesEntryPoint _repliesReactionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106244fc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c9110;
  _objc_alloc(PTR_PTR_1126c9110);
  lVar2 = param_1 + _DAT_112743d70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112743ddc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0ddba0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112743de0;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf7f880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b6e0(puVar1,param_2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062450d0; end: 106245263; -[SCSpotlightRepliesEntryPoint _repliesLoggerWithCompositeStoryId:isCommentAdmin:commentsSnapRepliesLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062450d0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c90e0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  lVar10 = (long)_DAT_112743d68;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2411c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c06f920();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar6 = lVar10;
  func_0x00010c131840();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112743de4;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112743dd8;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000bc0(puVar1,param_2,param_3,lVar3,lVar5,param_4,lVar6,0,lVar8,lVar9,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106245264; end: 1062459cb; -[SCSpotlightRepliesEntryPoint _repliesActionHandlerWithCompositeStoryId:reactionManager:repliesLogger:isCommentAdmin:commentsSnapRepliesAntionHandler:commentsAttachmentFetcher:spotlightRepliesDataManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106245264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined8 uVar63;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be8ef60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9118;
  _objc_alloc();
  lVar62 = (long)_DAT_112743d70;
  lVar3 = param_1 + lVar62;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d560(puVar2,param_2,lVar4,0);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c9120;
  _objc_alloc();
  uVar6 = param_9;
  func_0x00010c24bf20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_112743d68;
  uVar8 = param_1 + lVar61;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010c06f920();
  lVar3 = param_1 + _DAT_112743dd0;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112743d8c;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010c24bf40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar13 = lVar62;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c23fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)(param_1 + _DAT_112743de8);
  lVar19 = param_1 + _DAT_112743d98;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c131960();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2411c0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_9;
  func_0x00010c24be80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar25 = uVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112743dec;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c2802a0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = *(undefined8 *)(param_1 + _DAT_112743df0);
  lVar28 = param_1 + _DAT_112743d9c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c131940();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + _DAT_112743df4);
  lVar30 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c131760();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112743d80;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + _DAT_112743df8);
  lVar34 = param_1 + _DAT_112743dfc;
  _objc_loadWeakRetained();
  lVar35 = param_1 + _DAT_112743e00;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf42e20();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bf43080();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112743da0;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c131840();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c25b720();
  lVar60 = (long)_DAT_112743db4;
  lVar44 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c131840();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010bf4de00();
  lVar49 = param_1 + _DAT_112743e04;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf4be60();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar52 = lVar60;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar63 = *(undefined8 *)(param_1 + _DAT_112743e08);
  lVar55 = param_1 + _DAT_112743e0c;
  _objc_loadWeakRetained();
  param_1 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar61 = param_1;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e460(puVar5,param_2,uVar7,uVar9 & 0xffffffff,param_6,lVar10,lVar12,param_4,lVar14,
                      lVar16,lVar18,uVar56,lVar21,lVar23,param_5,uVar25,lVar27,uVar57,lVar29,uVar58,
                      lVar31,lVar33,uVar59,lVar34,lVar1,param_3,lVar36,lVar38,lVar40,lVar43,lVar45,
                      puVar2,lVar48,lVar51,lVar52,param_7,lVar54,uVar63,lVar55,param_8,lVar61);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar61);
  _objc_release(param_1);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar60);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar62);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1062459cc; end: 106245c13; -[SCSpotlightRepliesEntryPoint _commentsSnapRepliesAntionHandlerWithSnapRepliesInteractionInfo:commentsSnapRepliesLogger:spotlightRepliesDataManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062459cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126c9128;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112743e10);
  lVar2 = param_1 + _DAT_112743e14;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112743e18;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c24bf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c24be80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar7 = param_1 + _DAT_112743d68;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + _DAT_112743e1c);
  lVar9 = param_1 + _DAT_112743e20;
  _objc_loadWeakRetained();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112743de8);
  lVar10 = param_1 + _DAT_112743d8c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c24bf40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112743e24);
  lVar12 = param_1 + _DAT_112743e28;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112743dd0;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b400(puVar1,param_2,uVar14,lVar2,lVar4,uVar5,uVar6,lVar8,uVar17,lVar9,uVar15,
                      param_3,lVar11,param_4,uVar16,lVar12,lVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106245c14; end: 106245cd7; -[SCSpotlightRepliesEntryPoint _commentsSnapRepliesLoggerWithIsCommentAdmin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106245c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_112743d68;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c131840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c90d8;
  _objc_alloc(PTR_PTR_1126c90d8);
  param_1 = param_1 + _DAT_112743d64;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e440(puVar3,param_2,lVar2,param_3,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106245cd8; end: 106245eff; -[SCSpotlightRepliesEntryPoint _publicProfileAllowedActionsWithCreatorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106245cd8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    param_1 = param_1 + _DAT_112743e2c;
    _objc_loadWeakRetained();
    lVar9 = param_1;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c1168c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(param_1);
    lVar9 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (lVar9 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar1);
          }
          puVar10 = *(undefined **)(lStack_128 + lVar12 * 8);
          puVar2 = puVar10;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          puVar8 = (undefined8 *)param_3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          _objc_release(puVar2);
          if ((int)puVar4 != 0) {
            func_0x00010bf25020();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar10;
            func_0x00010c291840();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            func_0x00010bf01740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(puVar10);
            puVar2 = puVar5;
            func_0x00010bf529e0();
            if (puVar2 == (undefined *)0x0) {
              _objc_release(puVar5);
              puVar5 = PTR____NSArray0__struct_11034ab48;
            }
            goto LAB_106245ea4;
          }
          lVar12 = lVar12 + 1;
        } while (lVar9 != lVar12);
        lVar9 = lVar1;
        puVar8 = &uStack_130;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar9 != 0);
    }
LAB_106245ea4:
    _objc_release(lVar1);
    puVar7 = (undefined1 *)puVar8;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar9 = (long)_DAT_112743d68;
    _objc_retain(puVar7);
    param_3 = param_3 + lVar9;
    _objc_loadWeakRetained(param_3);
    puVar6 = param_3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106245f00; end: 106245f6f; -[SCSpotlightRepliesEntryPoint spotlightRepliesTrayViewControllerWillDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106245f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112743d68;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106245f70; end: 106246223; -[SCSpotlightRepliesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106245f70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743dbc,0);
  _objc_destroyWeak(param_1 + _DAT_112743e0c);
  _objc_storeStrong(param_1 + _DAT_112743e08,0);
  _objc_destroyWeak(param_1 + _DAT_112743dcc);
  _objc_destroyWeak(param_1 + _DAT_112743d7c);
  _objc_destroyWeak(param_1 + _DAT_112743d78);
  _objc_destroyWeak(param_1 + _DAT_112743db8);
  _objc_destroyWeak(param_1 + _DAT_112743e28);
  _objc_storeStrong(param_1 + _DAT_112743e24,0);
  _objc_destroyWeak(param_1 + _DAT_112743e20);
  _objc_storeStrong(param_1 + _DAT_112743e1c,0);
  _objc_storeStrong(param_1 + _DAT_112743db0,0);
  _objc_storeStrong(param_1 + _DAT_112743dc8,0);
  _objc_destroyWeak(param_1 + _DAT_112743dfc);
  _objc_destroyWeak(param_1 + _DAT_112743e14);
  _objc_storeStrong(param_1 + _DAT_112743e10,0);
  _objc_storeStrong(param_1 + _DAT_112743df8,0);
  _objc_storeStrong(param_1 + _DAT_112743df4,0);
  _objc_storeStrong(param_1 + _DAT_112743df0,0);
  _objc_storeStrong(param_1 + _DAT_112743de8,0);
  _objc_storeStrong(param_1 + _DAT_112743d94,0);
  _objc_destroyWeak(param_1 + _DAT_112743e00);
  _objc_destroyWeak(param_1 + _DAT_112743e2c);
  _objc_destroyWeak(param_1 + _DAT_112743e04);
  _objc_destroyWeak(param_1 + _DAT_112743db4);
  _objc_destroyWeak(param_1 + _DAT_112743da8);
  _objc_destroyWeak(param_1 + _DAT_112743da4);
  _objc_destroyWeak(param_1 + _DAT_112743dec);
  _objc_destroyWeak(param_1 + _DAT_112743da0);
  _objc_destroyWeak(param_1 + _DAT_112743d64);
  _objc_destroyWeak(param_1 + _DAT_112743d9c);
  _objc_destroyWeak(param_1 + _DAT_112743d98);
  _objc_destroyWeak(param_1 + _DAT_112743de0);
  _objc_destroyWeak(param_1 + _DAT_112743dac);
  _objc_destroyWeak(param_1 + _DAT_112743ddc);
  _objc_destroyWeak(param_1 + _DAT_112743d90);
  _objc_destroyWeak(param_1 + _DAT_112743d80);
  _objc_destroyWeak(param_1 + _DAT_112743dd0);
  _objc_destroyWeak(param_1 + _DAT_112743d8c);
  _objc_destroyWeak(param_1 + _DAT_112743d6c);
  _objc_destroyWeak(param_1 + _DAT_112743d68);
  _objc_destroyWeak(param_1 + _DAT_112743d70);
  _objc_destroyWeak(param_1 + _DAT_112743d74);
  _objc_destroyWeak(param_1 + _DAT_112743dc0);
  _objc_destroyWeak(param_1 + _DAT_112743dc4);
  _objc_destroyWeak(param_1 + _DAT_112743dd4);
  _objc_destroyWeak(param_1 + _DAT_112743dd8);
  _objc_destroyWeak(param_1 + _DAT_112743de4);
  _objc_destroyWeak(param_1 + _DAT_112743d84);
  _objc_destroyWeak(param_1 + _DAT_112743d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743e18);
  return;
}



/* Entry: 106246224; end: 10624622f; +[SCSpotlightRepliesSectionDataProvider announcerIdentifier] */

undefined ** FUN_106246224(void)

{
  return &PTR____CFConstantStringClassReference_110db6e58;
}



/* Entry: 106246230; end: 106246237; -[SCSpotlightRepliesSectionDataProvider addListener:] */

void FUN_106246230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106246238; end: 10624623f; -[SCSpotlightRepliesSectionDataProvider removeListener:] */

void FUN_106246238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106246240; end: 10624657f; -[SCSpotlightRepliesSectionDataProvider initWithDataFetcher:reactionManager:snapInteractionInfo:isConsumer:isCommentAdmin:spotlightRepliesUpdateAnnouncer:spotlightRepliesFeatureSettingsManager:enableDeeplinkToReplyPosterProfile:circumstanceEngine:repliesActionConfig:commentPosterThumbnailFetcher:creatorInfo:repliesLogger:commentsSnapReplyActionsConfig:storiesConfigProvider:commentsAttachmentFetcher:] */

undefined8 *
FUN_106246240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_68 = PTR_PTR_1126f0908;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((long)puVar1 + 0x29) = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 8) = param_10;
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9130;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    lVar4 = param_15;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      func_0x00010be10ac0(puVar1);
    }
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106246580; end: 1062465bb; -[SCSpotlightRepliesSectionDataProvider setUp] */

void FUN_106246580(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062465bc; end: 106246617; -[SCSpotlightRepliesSectionDataProvider tearDown] */

void FUN_1062465bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106246618; end: 1062466cb; -[SCSpotlightRepliesSectionDataProvider setSectionDataModel:] */

void FUN_106246618(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xb8);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_1062466b8;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(ulong *)(param_1 + 0xb8) = uVar3;
    _objc_release(uVar2);
    func_0x00010c128f60(param_1);
  }
LAB_1062466b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062466cc; end: 10624676f; -[SCSpotlightRepliesSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1062466cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106246770;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106246770; end: 10624679b;  */

void FUN_106246770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 10624679c; end: 1062468a7; -[SCSpotlightRepliesSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10624679c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_120,puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e45f98;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106246aa4;
    puStack_130 = &UNK_110917cb0;
    _objc_copyWeak(auStack_128,auStack_120);
    ppuVar2 = &puStack_148;
    _objc_retainBlock();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e45f38;
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x106246aec;
    puStack_158 = &UNK_110917ce0;
    ppuStack_100 = ppuVar2;
    _objc_copyWeak(auStack_150,auStack_120);
    ppuVar3 = &puStack_170;
    _objc_retainBlock();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e45fd8;
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x106246b34;
    puStack_180 = &UNK_110917d10;
    puVar6 = auStack_120;
    ppuStack_f8 = ppuVar3;
    _objc_copyWeak(auStack_178,puVar6);
    ppuVar4 = &puStack_198;
    _objc_retainBlock();
    ppuStack_f0 = ppuVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_178);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_150);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_128);
    puVar5 = auStack_120;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_150);
      _objc_destroyWeak(auStack_128);
      _objc_destroyWeak(auStack_120);
      __Unwind_Resume(puVar5);
      _objc_retain(puVar6);
      puVar5 = puVar5 + 0x20;
      _objc_loadWeakRetained(puVar5);
      func_0x00010bde4a80();
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062468a8; end: 106246aa3; -[SCSpotlightRepliesSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1062468a8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a0,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e45f98;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106246aa4;
  puStack_b0 = &UNK_110917cb0;
  _objc_copyWeak(auStack_a8,auStack_a0);
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e45f38;
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106246aec;
  puStack_d8 = &UNK_110917ce0;
  ppuStack_80 = ppuVar1;
  _objc_copyWeak(auStack_d0,auStack_a0);
  ppuVar2 = &puStack_f0;
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e45fd8;
  puStack_118 = puVar4;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x106246b34;
  puStack_100 = &UNK_110917d10;
  puVar6 = auStack_a0;
  ppuStack_78 = ppuVar2;
  _objc_copyWeak(auStack_f8,puVar6);
  ppuVar3 = &puStack_118;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a8);
  puVar5 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde4a80();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106246aa4; end: 106246b7b;  */

void FUN_106246aa4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106246b7c; end: 106246b8b; -[SCSpotlightRepliesSectionDataProvider _configureSnapRepliesCarouselCollectionViewCell:] */

void FUN_106246b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setCommentPosterThumbnailFetcher_11263d5c8,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106246b8c; end: 106246bf7; -[SCSpotlightRepliesSectionDataProvider _configureEmptyStateCell:] */

void FUN_106246b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9168;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010c01c5c0(puVar1,param_2,puVar2);
  func_0x00010c1aa7e0(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106246bf8; end: 106246ccb; -[SCSpotlightRepliesSectionDataProvider _configureApprovedCellV2:] */

void FUN_106246bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9168;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010c01c5c0(puVar1,param_2,puVar2);
  func_0x00010c1aa7e0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c17eea0(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c17c5e0(param_3,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c208ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1eaea0(param_3,param_2,*(undefined8 *)(param_1 + 0x70));
  lVar3 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c19a480(param_3,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c16b100(param_3,param_2,*(undefined8 *)(param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106246ccc; end: 106246cd3; -[SCSpotlightRepliesSectionDataProvider numberOfSections] */

undefined8 FUN_106246ccc(void)

{
  return 1;
}



/* Entry: 106246cd4; end: 106246cdb; -[SCSpotlightRepliesSectionDataProvider numberOfItemsInSection:] */

void FUN_106246cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106246cdc; end: 106246ce3; -[SCSpotlightRepliesSectionDataProvider dataLoadingStatus] */

undefined8 FUN_106246cdc(void)

{
  return 2;
}



/* Entry: 106246ce4; end: 106246cef; -[SCSpotlightRepliesSectionDataProvider reloadSection] */

void FUN_106246ce4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reloadSectionWithEventName_extr_112580490,0,0);
  return;
}



/* Entry: 106246cf0; end: 106246f37; -[SCSpotlightRepliesSectionDataProvider _reloadSectionWithEventName:extraData:] */

void FUN_106246cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 200);
  func_0x00010c06fc80();
  puVar5 = PTR_PTR_1126c9170;
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 200);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0xb8);
    _objc_retain(uVar6);
    _objc_opt_class(puVar5);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar2 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    if (uVar2 != 0) {
      uVar3 = uVar6;
      func_0x00010bf64580();
      uVar4 = *(undefined8 *)(param_1 + 8);
      if (uVar3 == 4) {
        func_0x00010bfa9c80();
        _objc_retainAutoreleasedReturnValue();
        iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
        func_0x00010bf924a0();
        puVar5 = PTR____NSArray0__struct_11034ab48;
        if (iVar1 == 0) {
          puVar5 = (undefined *)0x0;
        }
      }
      else {
        func_0x00010bfa9c60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
        func_0x00010bf924a0();
        if (iVar1 == 0) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = *(undefined **)(param_1 + 8);
          func_0x00010bfaa660(puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf64580(uVar6);
      func_0x00010c0f2940(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8ac00(param_1);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106246f38; end: 106246f6b;  */

void FUN_106246f38(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8abc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106246f6c; end: 1062474fb; -[SCSpotlightRepliesSectionDataProvider _reloadSectionWithSpotlightReplies:snapReplies:sectionContentDataModel:hasMoreContent:eventName:extraData:] */

void FUN_106246f6c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,uint param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar11 = param_6;
  func_0x00010bf64580();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  bVar1 = lVar11 == 4;
  if (bVar1) {
    lVar4 = *(long *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010c24bde0();
    _objc_release(lVar4);
    if (lVar11 != 1) goto LAB_106247050;
    puVar12 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
LAB_1062473f0:
    func_0x00010bffd260();
    func_0x00010befa120(puVar2);
  }
  else {
LAB_106247050:
    uVar15 = param_4;
    func_0x00010bf529e0();
    if ((uVar15 != 0) || (lVar11 = param_5, func_0x00010bf529e0(), lVar11 != 0)) {
      lVar11 = param_5;
      func_0x00010bf529e0();
      if (lVar11 != 0) {
        lVar11 = param_2;
        func_0x00010bebd0c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126aea98;
        _objc_alloc(PTR_PTR_1126aea98);
        func_0x00010bffd260();
        func_0x00010befa120(puVar2);
        _objc_release(puVar10);
        _objc_release(lVar11);
      }
      uVar5 = *(ulong *)(param_2 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x00010bf1c3e0();
      if ((uVar15 & 1) == 0) {
        bVar14 = *(byte *)(param_2 + 0x29) ^ 1;
      }
      else {
        bVar14 = 0;
      }
      _objc_release(uVar5);
      uVar15 = param_4;
      func_0x00010bf529e0();
      if (uVar15 != 0) {
        uVar15 = 1;
        do {
          uVar5 = param_4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = param_4;
          func_0x00010bf529e0();
          if (uVar15 < uVar13) {
            uVar13 = param_4;
            func_0x00010c0dfd40(param_4);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar13 = 0;
          }
          uVar6 = uVar5;
          func_0x000106268800();
          if ((int)uVar6 != 0) {
            uVar6 = uVar5;
            func_0x00010c132180();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c08fa60();
            _objc_release(uVar6);
            if ((uVar7 == 0 & bVar14) == 0) {
              uVar6 = uVar5;
              func_0x00010bfc9900();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c08fa60();
              _objc_release(uVar6);
              if (uVar7 != 0) {
                uVar6 = uVar5;
                func_0x00010bfc9900(uVar5);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = *(undefined8 *)(param_2 + 0x98);
                uVar7 = uVar5;
                func_0x00010c131d20(uVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar9);
                _objc_release(uVar7);
                _objc_release(uVar6);
              }
              lVar11 = param_2;
              func_0x00010be8efa0(param_2);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c131d20(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3);
              _objc_release(uVar6);
              func_0x00010c1061a0(*(undefined8 *)(param_2 + 0x50));
              puVar10 = PTR_PTR_1126c9068;
              _objc_alloc(PTR_PTR_1126c9068);
              func_0x00010bffd2c0(param_1);
              puVar12 = PTR_PTR_1126aea98;
              _objc_alloc(PTR_PTR_1126aea98);
              func_0x00010bffd260();
              func_0x00010befa120(puVar2);
              _objc_release(puVar12);
              lVar4 = param_2;
              func_0x00010beb2520();
              if ((int)lVar4 != 0) {
                uVar9 = *(undefined8 *)(param_2 + 8);
                uVar6 = uVar5;
                func_0x00010c0f3b40(uVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26d4c0(uVar9);
                _objc_release(uVar6);
                puVar12 = PTR_PTR_1126c9090;
                _objc_alloc(PTR_PTR_1126c9090);
                func_0x00010c0218c0();
                puVar8 = PTR_PTR_1126aea98;
                _objc_alloc(PTR_PTR_1126aea98);
                func_0x00010bffd260();
                func_0x00010befa120(puVar2);
                _objc_release(puVar8);
                _objc_release(puVar12);
              }
              _objc_release(puVar10);
              _objc_release(lVar11);
            }
          }
          _objc_release(uVar13);
          _objc_release(uVar5);
          uVar5 = param_4;
          func_0x00010bf529e0();
          bVar1 = uVar15 < uVar5;
          uVar15 = uVar15 + 1;
        } while (bVar1);
      }
      puVar10 = puVar3;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_2 + 0x60);
      *(undefined **)(param_2 + 0x60) = puVar10;
      _objc_release(uVar9);
      if ((param_7 & 1) == 0) goto LAB_106247410;
      puVar12 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      goto LAB_1062473f0;
    }
    lVar11 = *(long *)(param_2 + 0xd0);
    if (lVar11 == 2) {
      lVar11 = param_6;
      func_0x00010bf64580(param_6);
      bVar1 = lVar11 == 4;
      lVar11 = *(long *)(param_2 + 0xd0);
    }
    puVar12 = (undefined *)(ulong)bVar1;
    FUN_10623d824(puVar12,*(undefined1 *)(param_2 + 0x28),lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    func_0x00010befa120(puVar2);
    _objc_release(puVar10);
  }
  _objc_release(puVar12);
LAB_106247410:
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar2;
  _objc_release(uVar9);
  param_2 = param_2 + 0xc0;
  _objc_loadWeakRetained(param_2);
  func_0x00010c155aa0();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062474fc; end: 106247747; -[SCSpotlightRepliesSectionDataProvider _snapRepliesCarouselCellViewModelFromSnapReplies:] */

void FUN_1062474fc(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf91280();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c9088;
    _objc_alloc(PTR_PTR_1126c9088);
    func_0x00010c01ec60();
    func_0x00010befa120(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar13 = param_3;
  func_0x00010bf529e0();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bebd0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar11);
      _objc_release(lVar5);
      _objc_release(uVar4);
      uVar13 = uVar13 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while (uVar13 < uVar4);
  }
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar12 = PTR_PTR_1126c9080;
  _objc_alloc();
  puVar6 = puVar11;
  func_0x00010bf51e00();
  puVar8 = puVar6;
  func_0x00010c0484e0();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar12 = puVar8;
    func_0x00010c245680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becbc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126c9088;
    _objc_alloc();
    puVar6 = puVar8;
    func_0x00010bf82560(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
    func_0x00010c01ec60();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar9;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x000107d227d0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        if (puVar12 == (undefined *)0x0) {
          puVar12 = puVar9;
          func_0x000107d22fdc(puVar9,0,0,1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106247748; end: 106247947; -[SCSpotlightRepliesSectionDataProvider _snapReplyCellViewModelFromSnapReply:itemPos:] */

void FUN_106247748(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar3 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becbc00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = PTR_PTR_1126c9088;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bf82560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x0;
  func_0x00010c01ec60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar5;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000107d227d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (puVar8 == (undefined *)0x0) {
        puVar8 = puVar5;
        func_0x000107d22fdc(puVar5,0,0,1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106247948; end: 1062479db; -[SCSpotlightRepliesSectionDataProvider _thumbnailInfoFromSnapPlaybackInfo:] */

void FUN_106247948(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x000107d22fdc(param_3,0,0,1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1062479dc; end: 106247de7; -[SCSpotlightRepliesSectionDataProvider _replyCellViewModelFromReply:isPendingTab:eventName:extraData:] */

void FUN_1062479dc(long param_1,undefined8 param_2,long param_3,uint param_4,ulong param_5,
                  undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar7 = *(long *)(param_1 + 0x60);
  lVar8 = param_3;
  func_0x00010c131d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar7;
  func_0x00010c074da0(lVar7);
  lVar9 = *(long *)(param_1 + 0x20);
  lVar10 = param_3;
  func_0x00010c131d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120d20();
  bVar1 = lVar9 == 1;
  _objc_release(lVar10);
  if (((*(char *)(param_1 + 0x29) == '\x01') &&
      (lVar10 = param_3, func_0x00010c072ae0(), (int)lVar10 != 0)) && (lVar9 != 1)) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar10 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    func_0x00010c1e7d80(uVar11);
    _objc_release(lVar10);
  }
  lVar10 = lVar7;
  func_0x00010c26d4a0();
  uVar3 = param_5;
  func_0x00010c0720c0();
  lVar9 = lVar10;
  if ((int)uVar3 == 0) {
    uVar3 = param_5;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) {
      lVar8 = 0;
      goto LAB_106247c80;
    }
    uVar3 = param_5;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) goto LAB_106247c80;
    uVar11 = param_6;
    func_0x00010c0e00e0();
    iVar2 = (int)uVar11;
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar9);
    if (iVar2 != 0) {
      uVar11 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c067ec0();
      lVar10 = (long)(int)uVar6;
      _objc_release(uVar11);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x90);
    func_0x00010c10a700(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf4b900(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar4);
    lVar9 = param_3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      lVar4 = *(long *)(param_1 + 0x90);
      func_0x00010c10a700();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010bf529e0();
      if (lVar9 == 2) {
        lVar5 = param_3;
        func_0x00010c26d4e0();
        _objc_release(lVar4);
        lVar9 = 2;
        if (lVar5 != 1) {
          lVar9 = lVar10;
        }
        goto LAB_106247c80;
      }
    }
  }
  _objc_release();
  lVar9 = lVar10;
LAB_106247c80:
  lVar10 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0) {
    lVar10 = param_3;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar10 = *(long *)(param_1 + 0x98);
    lVar4 = param_3;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c3e0();
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf41fe0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c23fc20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_10623dc2c(param_3,bVar1,param_4,uVar11,uVar6,*(undefined1 *)(param_1 + 0x40),param_4 ^ 1,lVar8
                ,lVar9,*(undefined8 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x29));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106247de8; end: 106247f57; -[SCSpotlightRepliesSectionDataProvider _shouldAddShowMoreCellAfterCurrentReply:nextReply:] */

bool FUN_106247de8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    bVar1 = false;
    goto LAB_106247f30;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  uVar2 = param_3;
  func_0x00010c0f3b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c26d4a0();
  _objc_release(lVar5);
  _objc_release(uVar2);
  bVar1 = false;
  if ((lVar3 == 0) || (lVar3 == 3)) goto LAB_106247f30;
  lVar3 = param_4;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
LAB_106247ee0:
    lVar5 = *(long *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2780(lVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    bVar1 = lVar5 != 0;
    _objc_release(lVar5);
  }
  else {
    uVar2 = param_3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) goto LAB_106247ee0;
    bVar1 = false;
  }
  _objc_release(lVar3);
LAB_106247f30:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106247f58; end: 10624815b; -[SCSpotlightRepliesSectionDataProvider _fetchCreatorProfileImage] */

void FUN_106247f58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf5b440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108ffef38(0,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10624815c;
  puStack_58 = &UNK_110917d40;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  lVar4 = *(long *)(param_1 + 0x78);
  func_0x00010c116d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 == 0) goto LAB_106248110;
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf5b440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1c0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1acc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5580(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c116d20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa98a0(uVar1);
  }
  _objc_release(uVar6);
LAB_106248110:
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10624815c; end: 1062481cb;  */

void FUN_10624815c(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
    _objc_release(uVar1);
    func_0x00010c128f60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062481cc; end: 1062481d3; -[SCSpotlightRepliesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1062481cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reloadSectionWithEventName_extr_112580490,param_3,param_5);
  return;
}



/* Entry: 1062481d4; end: 1062481db; -[SCSpotlightRepliesSectionDataProvider sectionDataModel] */

undefined8 FUN_1062481d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1062481dc; end: 1062481f3; -[SCSpotlightRepliesSectionDataProvider dataProviderDelegate] */

void FUN_1062481dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062481f4; end: 1062481ff; -[SCSpotlightRepliesSectionDataProvider setDataProviderDelegate:] */

void FUN_1062481f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 106248200; end: 106248207; -[SCSpotlightRepliesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106248200(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106248208; end: 106248237; -[SCSpotlightRepliesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106248208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106248238; end: 10624823f; -[SCSpotlightRepliesSectionDataProvider cellDataFetchingState] */

undefined8 FUN_106248238(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106248240; end: 106248247; -[SCSpotlightRepliesSectionDataProvider setCellDataFetchingState:] */

void FUN_106248240(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 106248248; end: 10624824f; -[SCSpotlightRepliesSectionDataProvider viewerPendingCellDataFetchingState] */

undefined8 FUN_106248248(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106248250; end: 106248257; -[SCSpotlightRepliesSectionDataProvider setViewerPendingCellDataFetchingState:] */

void FUN_106248250(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 106248258; end: 10624825f; -[SCSpotlightRepliesSectionDataProvider liveRepliesFetchingState] */

undefined8 FUN_106248258(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106248260; end: 106248267; -[SCSpotlightRepliesSectionDataProvider setLiveRepliesFetchingState:] */

void FUN_106248260(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}


