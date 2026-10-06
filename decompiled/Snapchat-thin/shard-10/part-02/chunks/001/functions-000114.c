/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bebafc; end: 107bebb27; -[SCDiscoverFeedEventsController clearInteractionHistoryQualifiedSections] */

void FUN_107bebafc(long param_1)

{
  param_1 = param_1 + 0x178;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bebb28; end: 107bebbe3; -[SCDiscoverFeedEventsController _updateInteractionHistoryQualifiedSectionsWithFeedType:] */

void FUN_107bebb28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0xf0);
    func_0x00010bfecde0(lVar1,param_2,param_3);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (lVar1 != 0x7fffffffffffffff) {
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c25e980(uVar3,param_2,0,lVar1 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      param_1 = param_1 + 0x178;
      _objc_loadWeakRetained(param_1);
      func_0x00010c289020();
      _objc_release(param_1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bebbe4; end: 107bebc53; -[SCDiscoverFeedEventsController _updateInteractionHistoryQualifiedSectionsToAll] */

void FUN_107bebbe4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,*(undefined8 *)(param_1 + 0xf0));
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x178;
    _objc_loadWeakRetained(param_1);
    func_0x00010c289020();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107bebc54; end: 107bebd63; -[SCDiscoverFeedEventsController _itemPosForStoryLoggingInfo:feedType:isRecommended:] */

long FUN_107bebc54(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  if (param_5 == 0) {
    if ((param_4 != 0) && (lVar1 = param_4, func_0x00010c067ec0(), (int)lVar1 != 0x106)) {
      lVar1 = param_3;
      func_0x00010c11fd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c259740();
      func_0x00010be38d00(param_1,param_2,lVar2,param_4);
      _objc_release(lVar1);
      if (param_1 != 0x7fffffffffffffff) goto LAB_107bebd38;
    }
    lVar1 = param_3;
    func_0x00010c084900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      param_1 = -2;
      goto LAB_107bebd38;
    }
    func_0x00010c084900(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar3;
    func_0x00010c067fc0();
  }
  else {
    func_0x00010c11fd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar3;
    func_0x00010c084920();
  }
  _objc_release(lVar3);
LAB_107bebd38:
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107bebd64; end: 107bebe2f; -[SCDiscoverFeedEventsController _incrementRerankingIdForSectionIfPossible:] */

void FUN_107bebd64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbb60,param_3);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c2827c0();
      func_0x00010c0df840(puVar3,param_2,lVar1 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,puVar3,param_3);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bebe30; end: 107bebf53; -[SCDiscoverFeedEventsController _incrementRerankingIdForNonFriendSections] */

void FUN_107bebe30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      func_0x00010c0720c0();
      if ((uVar10 & 1) == 0) {
        func_0x00010be387a0(param_1);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_178,lVar2);
  uVar4 = *(undefined8 *)(lVar2 + 0x1a0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa4080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 107bebf54; end: 107bec09b; -[SCDiscoverFeedEventsController _setUpFriendsFeedObservingEvents] */

void FUN_107bebf54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107bec09c; end: 107bec0e3;  */

void FUN_107bec09c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a060();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bec0e4; end: 107bec15b; -[SCDiscoverFeedEventsController _handleFriendsFeedFeedPageEvent:] */

void FUN_107bec0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_28 = FUN_107bec15c;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107bec168;
  puStack_48 = &UNK_1108d45b0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdfc0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 107bec15c; end: 107bec17b;  */

void FUN_107bec15c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be532b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logFeedPageOpenEventWithChatFee_112572648,
             param_2);
  return;
}



/* Entry: 107bec17c; end: 107bec2ef; -[SCDiscoverFeedEventsController _logFeedPageOpenEventWithChatFeedSessionId:] */

undefined ** FUN_107bec17c(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    ppuVar11 = *(undefined ***)(param_1 + 0x18);
    _objc_retain(ppuVar11);
    if (ppuVar11 != param_3) {
      ppuVar2 = ppuVar11;
      ppuVar8 = param_3;
      func_0x00010c071ae0();
      _objc_release(ppuVar11);
      if (((ulong)ppuVar2 & 1) != 0) goto LAB_107bec2b8;
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined ***)(param_1 + 0x18) = param_3;
      _objc_release(uVar3);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      ppuVar2 = ppuVar11;
      func_0x00010c0d3c80();
      ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
      param_4 = ppuVar2;
      func_0x00010be2d460(param_1);
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar11);
  }
LAB_107bec2b8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar8;
  ppuVar2 = param_4;
  _objc_retain(ppuVar8);
  _objc_retain(param_4);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar12 = (undefined **)param_3[3];
    _objc_retain(ppuVar12);
    if (ppuVar12 == ppuVar8) {
      _objc_release(ppuVar12);
    }
    else {
      ppuVar5 = ppuVar12;
      ppuVar11 = ppuVar8;
      func_0x00010c071ae0();
      _objc_release(ppuVar12);
      if ((int)ppuVar5 == 0) goto LAB_107bec4ac;
    }
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_4;
    if (param_4 == (undefined **)0x0) {
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (param_4 == (undefined **)0x0) {
      _objc_release(ppuVar11);
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
    ppuVar5 = ppuVar12;
    func_0x00010c0d3c80();
    ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar2 = ppuVar5;
    func_0x00010be2daa0(param_3);
    _objc_release(ppuVar5);
    _objc_release(ppuVar12);
  }
LAB_107bec4ac:
  _objc_release(param_4);
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar8 = ppuVar11;
  func_0x000107cb6e48(ppuVar11,&PTR____CFConstantStringClassReference_110f42258,puVar4);
  if ((int)ppuVar8 == 0) {
LAB_107bec5a8:
    uVar13 = 0;
  }
  else {
    ppuVar8 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar8;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar8);
    if ((int)ppuVar12 == 0) goto LAB_107bec5a8;
    ppuVar8 = ppuVar11;
    func_0x00010c0e00e0(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(ppuVar8);
    uVar13 = 1;
  }
  _objc_retain(ppuVar11);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar8 = ppuVar11;
  func_0x000107cb6e48(ppuVar11,&PTR____CFConstantStringClassReference_110f42298,puVar4);
  if ((int)ppuVar8 == 0) {
    _objc_release(ppuVar11);
    uVar10 = 0;
    uVar1 = 0;
    if (uVar13 == 0) goto LAB_107bec68c;
  }
  else {
    ppuVar8 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar8;
    func_0x00010bf1f3c0();
    uVar10 = (uint)ppuVar12;
    _objc_release(ppuVar8);
    _objc_release(ppuVar11);
    uVar1 = uVar10;
    if (uVar13 == 0) {
      if (uVar10 == 0) goto LAB_107bec68c;
      func_0x00010c1d0640(ppuVar11);
      uVar1 = 1;
    }
  }
  uVar10 = uVar1;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar8 = ppuVar2;
  func_0x00010c11fd40(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084920();
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar11);
  _objc_release(puVar4);
  _objc_release(ppuVar8);
LAB_107bec68c:
  _objc_release(ppuVar2);
  _objc_release(ppuVar11);
  return (undefined **)(ulong)(uVar13 | uVar10 & 1);
}



/* Entry: 107bec2f0; end: 107bec4f3; -[SCDiscoverFeedEventsController _logFeedPageViewEventWithChatFeedSessionId:chatFeedLoggingDict:hasAdBillboard:] */

undefined ** FUN_107bec2f0(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  uint uVar10;
  undefined **ppuVar11;
  uint uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined **)0x0) {
    ppuVar11 = *(undefined ***)(param_1 + 0x18);
    _objc_retain(ppuVar11);
    if (ppuVar11 == param_3) {
      _objc_release(ppuVar11);
    }
    else {
      ppuVar2 = ppuVar11;
      ppuVar8 = param_3;
      func_0x00010c071ae0();
      _objc_release(ppuVar11);
      if ((int)ppuVar2 == 0) goto LAB_107bec4ac;
    }
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (param_4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = puVar7;
    func_0x00010c0d3c80();
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    puVar3 = puVar4;
    func_0x00010be2daa0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar7);
  }
LAB_107bec4ac:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  _objc_retain(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar11 = ppuVar8;
  func_0x000107cb6e48(ppuVar8,&PTR____CFConstantStringClassReference_110f42258,puVar4);
  if ((int)ppuVar11 == 0) {
LAB_107bec5a8:
    uVar12 = 0;
  }
  else {
    ppuVar11 = ppuVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar11);
    if ((int)ppuVar2 == 0) goto LAB_107bec5a8;
    ppuVar11 = ppuVar8;
    func_0x00010c0e00e0(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(ppuVar11);
    uVar12 = 1;
  }
  _objc_retain(ppuVar8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar11 = ppuVar8;
  func_0x000107cb6e48(ppuVar8,&PTR____CFConstantStringClassReference_110f42298,puVar4);
  if ((int)ppuVar11 == 0) {
    _objc_release(ppuVar8);
    uVar10 = 0;
    uVar1 = 0;
    if (uVar12 == 0) goto LAB_107bec68c;
  }
  else {
    ppuVar11 = ppuVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar11;
    func_0x00010bf1f3c0();
    uVar10 = (uint)ppuVar2;
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    uVar1 = uVar10;
    if (uVar12 == 0) {
      if (uVar10 == 0) goto LAB_107bec68c;
      func_0x00010c1d0640(ppuVar8);
      uVar1 = 1;
    }
  }
  uVar10 = uVar1;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = puVar3;
  func_0x00010c11fd40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084920();
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar8);
  _objc_release(puVar4);
  _objc_release(puVar5);
LAB_107bec68c:
  _objc_release(puVar3);
  _objc_release(ppuVar8);
  return (undefined **)(ulong)(uVar12 | uVar10 & 1);
}



/* Entry: 107bec4f4; end: 107bec6bb; -[SCDiscoverFeedEventsController _insertUpNextLoggingData:currentStoryLoggingInfo:] */

uint FUN_107bec4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42258,puVar2);
  if ((int)uVar3 == 0) {
LAB_107bec5a8:
    uVar6 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) goto LAB_107bec5a8;
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    uVar6 = 1;
  }
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42298,puVar2);
  if ((int)uVar3 == 0) {
    _objc_release(param_3);
    uVar5 = 0;
    uVar1 = 0;
    if (uVar6 == 0) goto LAB_107bec68c;
  }
  else {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    uVar5 = (uint)uVar4;
    _objc_release(uVar3);
    _objc_release(param_3);
    uVar1 = uVar5;
    if (uVar6 == 0) {
      if (uVar5 == 0) goto LAB_107bec68c;
      func_0x00010c1d0640(param_3);
      uVar1 = 1;
    }
  }
  uVar5 = uVar1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_4;
  func_0x00010c11fd40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084920();
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar2);
  _objc_release(uVar3);
LAB_107bec68c:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6 | uVar5 & 1;
}



/* Entry: 107bec6bc; end: 107bec82b; -[SCDiscoverFeedEventsController _insertUpNextStoryFeedItemSourceWithData:] */

long FUN_107bec6bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42258,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      lVar4 = 6;
      if ((int)uVar3 == 0) {
        lVar4 = 4;
      }
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar1);
      goto LAB_107bec80c;
    }
  }
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f42298,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_release(param_3);
    lVar4 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(param_3);
    lVar4 = -(uVar3 & 1);
  }
LAB_107bec80c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107bec82c; end: 107bec8bb; -[SCDiscoverFeedEventsController _shouldAddTriggeringSection:] */

bool FUN_107bec82c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f422d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f422d8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == -1;
    _objc_release();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107bec8bc; end: 107bec9b7; -[SCDiscoverFeedEventsController _subscribeToOperaAnalyticsEvents] */

void FUN_107bec8bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x1b4) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x1c8);
    func_0x00010c0e0ea0(uVar1);
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
  }
  return;
}



/* Entry: 107bec9b8; end: 107becab7;  */

void FUN_107bec9b8(long param_1,long param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107becab8;
    puStack_50 = &UNK_110848ab8;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_copyWeak(auStack_70,param_1 + 0x20);
    func_0x00010c0be740(param_2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107becab8; end: 107becb0f;  */

void FUN_107becab8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d6e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107becb10; end: 107becb17;  */

void FUN_107becb10(void)

{
  return;
}



/* Entry: 107becb18; end: 107becb53;  */

void FUN_107becb18(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be2e2c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107becb54; end: 107becb5b; -[SCDiscoverFeedEventsController _handlePlaybackRateDidChange:] */

void FUN_107becb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1e0),PTR_s_handlePlaybackRateDidChange__1125d2168);
  return;
}



/* Entry: 107becb5c; end: 107becc3b; -[SCDiscoverFeedEventsController _handleOperaPlaybackEventId:isPlaying:] */

void FUN_107becb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x1d8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new(PTR_PTR_1126b46f0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x1d8),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_4 == 0) {
    func_0x00010c0f5b20();
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
  }
  else {
    func_0x00010c24d960();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x1b3) == '\x01') {
    func_0x00010bfd1520(*(undefined8 *)(param_1 + 0x1e0),param_2,param_4);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107becc3c; end: 107becdf7; -[SCDiscoverFeedEventsController _totalViewTimeForPageId:] */

undefined8 FUN_107becc3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar8 = param_1;
  uVar2 = 0xbff0000000000000;
  if (*(char *)(param_2 + 0x1b4) == '\x01') {
    lVar1 = *(long *)(param_2 + 0x1d8);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 0;
      uVar8 = param_1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x1d8);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed820();
      uVar3 = *(undefined8 *)(param_2 + 0x1c0);
      uVar8 = param_1;
      func_0x00010bf4b900(uVar3,param_3,param_4);
      if ((int)uVar3 == 0) {
        uVar8 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        lVar4 = *(long *)(param_2 + 0x1d8);
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010bf52a60();
        if (lVar1 != 0) {
          lVar6 = *plStack_130;
          do {
            lVar7 = 0;
            do {
              if (*plStack_130 != lVar6) {
                _objc_enumerationMutation(lVar4);
              }
              uVar3 = *(undefined8 *)(lStack_138 + lVar7 * 8);
              uVar5 = *(ulong *)(param_2 + 0x1c0);
              func_0x00010bf4b900(uVar5,param_3,uVar3);
              if ((uVar5 & 1) == 0) {
                func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x1d8),param_3,uVar3);
              }
              lVar7 = lVar7 + 1;
            } while (lVar1 != lVar7);
            lVar1 = lVar4;
            func_0x00010bf52a60(lVar4,param_3,&uStack_140,auStack_f8,0x10);
          } while (lVar1 != 0);
        }
        _objc_release(lVar4);
      }
      else {
        func_0x00010c138160(uVar2);
      }
      _objc_release(uVar2);
      uVar2 = param_1;
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar2;
  }
  ___stack_chk_fail();
  return uVar8;
}



/* Entry: 107becdf8; end: 107becdfb; -[SCDiscoverFeedEventsController _subscribeToOperaPageVisibilityEvents] */

void FUN_107becdf8(void)

{
  return;
}



/* Entry: 107becdfc; end: 107becdff; -[SCDiscoverFeedEventsController _submitInternalRequestNotificationWithText:] */

void FUN_107becdfc(void)

{
  return;
}



/* Entry: 107bece00; end: 107bece5f; -[SCDiscoverFeedEventsController _presentStoriesRequestNotificationWithText:] */

void FUN_107bece00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bece60; end: 107becfdf; -[SCDiscoverFeedEventsController _addInFeedSurveyInfoToMutableDict:] */

void FUN_107bece60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010bfeb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010bfeb4a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_1 + 0x1f8);
    uVar4 = uVar3;
    func_0x00010bf67b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar6 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar1 = uVar7;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    if (uVar1 != 0) {
      func_0x00010c1d0640(param_3);
      uVar4 = uVar3;
      func_0x00010c263f60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c084940(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010bf9c4e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(uVar4);
    }
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107becfe0; end: 107bed197; -[SCDiscoverFeedEventsController _includeInFeedSurveyDataIfAvailable:] */

void FUN_107becfe0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f43978,puVar1);
  if ((int)uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f43918,puVar1);
    if ((int)uVar2 != 0) {
      uVar3 = param_3;
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
      uVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar1);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x1f8));
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  puVar1 = PTR_PTR_1126d7130;
  _objc_opt_class(PTR_PTR_1126d7130);
  uVar2 = param_3;
  func_0x000107cb6e48(param_3,&PTR____CFConstantStringClassReference_110f438f8,puVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d7130;
    _objc_opt_class(PTR_PTR_1126d7130);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010c1ab840(*(undefined8 *)(param_1 + 0x100));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bed198; end: 107bed44b; -[SCDiscoverFeedEventsController .cxx_destruct] */

void FUN_107bed198(long param_1)

{
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_destroyWeak(param_1 + 0x188);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_destroyWeak(param_1 + 0x178);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bed44c; end: 107bed4af; -[SCDiscoverFeedScrollTracker init] */

undefined1 * FUN_107bed44c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa2a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bed4b0; end: 107bed59b; -[SCDiscoverFeedScrollTracker scrollStartedWithIdentifier:scrollAxis:startingContentOffset:startScrollingTimestamp:pageType:pageTypeSpecific:] */

void FUN_107bed4b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if ((param_4 != 0) && (param_6 != 0)) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d7138;
      _objc_alloc(PTR_PTR_1126d7138);
      func_0x00010c01b960(param_1);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar2,param_4);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bed59c; end: 107bed9d3; -[SCDiscoverFeedScrollTracker scrollDidEndWithIdentifier:feedType:endingContentOffset:endScrollingTimestamp:] */

void FUN_107bed59c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_5 != 0) && (lVar1 != 0)) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      lVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee1838);
      dVar7 = 0.3;
      dVar8 = 0.1;
      if ((int)lVar1 == 0) {
        dVar8 = dVar7;
      }
      uVar4 = uVar2;
      func_0x00010c250700(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(param_5,param_2,uVar4);
      _objc_release(uVar4);
      if (dVar8 <= dVar7) {
        uVar4 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f41ad8
                             );
          _objc_release(puVar5);
        }
        else {
          func_0x00010c1d0640(puVar3,param_2,uVar4,&PTR____CFConstantStringClassReference_110f41ad8)
          ;
        }
        _objc_release(uVar4);
        uVar4 = uVar2;
        func_0x00010c250700();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f41a58
                             );
          _objc_release(puVar5);
        }
        else {
          func_0x00010c1d0640(puVar3,param_2,uVar4,&PTR____CFConstantStringClassReference_110f41a58)
          ;
        }
        _objc_release(uVar4);
        func_0x00010c1d0640(puVar3,param_2,param_5,&PTR____CFConstantStringClassReference_110f41a78)
        ;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar4 = uVar2;
        func_0x00010c151d40(uVar2);
        func_0x00010c251fc0(uVar2);
        lVar1 = param_1;
        func_0x00010be1c860(param_1,param_2,uVar4);
        func_0x00010c0df780(puVar5,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110ed79b8);
        _objc_release(puVar5);
        if (param_4 != 0) {
          func_0x00010c1d0640(puVar3,param_2,param_4,
                              &PTR____CFConstantStringClassReference_110f41c38);
        }
        uVar4 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar6 & 1) == 0) {
          uVar4 = uVar2;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == 0) {
            puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3,param_2,puVar5,
                                &PTR____CFConstantStringClassReference_110f41cb8);
            _objc_release(puVar5);
          }
          else {
            func_0x00010c1d0640(puVar3,param_2,uVar4,
                                &PTR____CFConstantStringClassReference_110f41cb8);
          }
          _objc_release(uVar4);
        }
        uVar4 = uVar2;
        func_0x00010c0f1e60();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar4 != 0) {
          uVar4 = uVar2;
          func_0x00010c0f1e60(uVar2);
          func_0x00010c0df780(puVar5,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110dcad78
                             );
          _objc_release(puVar5);
        }
        uVar4 = uVar2;
        func_0x00010c0f1ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 != 0) {
          uVar4 = uVar2;
          func_0x00010c0f1ea0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == 0) {
            puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3,param_2,puVar5,
                                &PTR____CFConstantStringClassReference_110eb3738);
            _objc_release(puVar5);
          }
          else {
            func_0x00010c1d0640(puVar3,param_2,uVar4,
                                &PTR____CFConstantStringClassReference_110eb3738);
          }
          _objc_release(uVar4);
        }
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar1);
        puVar5 = puVar3;
        func_0x00010bf51e00(puVar3);
        func_0x00010bf81e00(lVar1,param_2,param_1,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar1);
      }
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bed9d4; end: 107beda03; -[SCDiscoverFeedScrollTracker _gestForScrollAxis:startingContentOffset:endingContentOffset:] */

ulong FUN_107bed9d4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5
                   )

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 2;
  if (param_2 <= param_1) {
    uVar1 = 3;
  }
  uVar2 = 0xffffffffffffffff;
  if (param_5 == 1) {
    uVar2 = (ulong)(param_1 < param_2);
  }
  if (param_5 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 107beda04; end: 107beda1b; -[SCDiscoverFeedScrollTracker delegate] */

void FUN_107beda04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107beda1c; end: 107beda27; -[SCDiscoverFeedScrollTracker setDelegate:] */

void FUN_107beda1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107beda28; end: 107beda53; -[SCDiscoverFeedScrollTracker .cxx_destruct] */

void FUN_107beda28(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107beda54; end: 107bedc37; -[SCDiscoverFeedFeedViewSummary initWithViewStartViewstamp:sections:pageType:pageTypeSpecific:] */

undefined8 *
FUN_107beda54(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_f8 = PTR_PTR_1126fa2b0;
  puVar5 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar5[7];
    puVar5[7] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar5 + 2) = 0;
    puVar5[5] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar5[6];
    puVar5[6] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar5[1];
    puVar5[1] = puVar3;
    _objc_release(uVar2);
    puVar5[3] = 0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        puVar3 = PTR_PTR_1126d7140;
        _objc_alloc(PTR_PTR_1126d7140);
        func_0x00010c042cc0();
        func_0x00010c1d0640(puVar5[1]);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (*(char *)(param_3 + 2) == '\x01') {
    *(undefined1 *)(param_3 + 2) = 0;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)param_3[7];
    param_3[7] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return puVar5;
  }
  return param_3;
}



/* Entry: 107bedc38; end: 107bedc87; -[SCDiscoverFeedFeedViewSummary activateFeedViewSummaryIfNecessary] */

void FUN_107bedc38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 107bedc88; end: 107bedcfb; -[SCDiscoverFeedFeedViewSummary endFeedViewWithPageEndTime:closingData:] */

void FUN_107bedc88(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(param_5);
    func_0x00010c26f380(param_4,param_3,uVar1);
    *(double *)(param_2 + 0x18) = param_1 + *(double *)(param_2 + 0x18);
    func_0x00010c17d700(param_2,param_3,param_5);
    _objc_release(param_5);
    *(undefined1 *)(param_2 + 0x10) = 1;
  }
  return;
}



/* Entry: 107bedcfc; end: 107bedd2b; -[SCDiscoverFeedFeedViewSummary accumulatedTimeViewSecsAtPageEndTime:] */

double FUN_107bedcfc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x18);
  func_0x00010c26f380(param_4,param_3,*(undefined8 *)(param_2 + 0x38));
  return dVar1 + param_1;
}



/* Entry: 107bedd2c; end: 107bedd3b; -[SCDiscoverFeedFeedViewSummary isViewingFeed] */

byte FUN_107bedd2c(long param_1)

{
  return (*(byte *)(param_1 + 0x10) ^ 0xff) & 1;
}



/* Entry: 107bedd3c; end: 107beddab; -[SCDiscoverFeedFeedViewSummary sectionFeedView:itemsAvailable:totalSnapsAvailableCount:] */

void FUN_107bedd3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010be22600(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c085020(param_1,param_2,param_4,param_5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107beddac; end: 107beddeb; -[SCDiscoverFeedFeedViewSummary sectionFeedView:setUncompletedStoryCount:] */

void FUN_107beddac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be22600();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c21b440(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107beddec; end: 107bee37b; -[SCDiscoverFeedFeedViewSummary getFeedViewSectionsSummary] */

void FUN_107beddec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_a0 = PTR_PTR_113243c30;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR_PTR_113243c38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar10;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR_PTR_113243c40;
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&puStack_a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(puVar3);
  _objc_release(puVar10);
  puStack_d0 = PTR_PTR_113243c30;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR_PTR_113243c38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar10;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR_PTR_113243c40;
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b8,&puStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110eb3658);
  _objc_release(puVar2);
  _objc_release(puVar16);
  _objc_release(puVar3);
  _objc_release(puVar10);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  puVar3 = *(undefined **)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_1c0;
  puVar10 = puVar3;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar15 = 0;
    lVar17 = 0;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    lVar12 = *plStack_1b0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(puVar3);
        }
        uVar14 = *(ulong *)(lStack_1b8 + (long)puVar16 * 8);
        lVar4 = param_1;
        func_0x00010be22600(param_1,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x00010bfa4440();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,lVar5,uVar14);
          _objc_release(lVar5);
          uVar6 = uVar14;
          FUN_107cb8138();
          if (((int)uVar6 != 0) &&
             (uVar6 = uVar14,
             func_0x00010c0720c0(uVar14,param_2,&PTR____CFConstantStringClassReference_110eb3638),
             (uVar6 & 1) == 0)) {
            puVar2 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c067ec0();
            lStack_1d8 = lStack_1d8 + (int)puVar8;
            _objc_release(puVar7);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c067ec0();
            lStack_1d0 = lStack_1d0 + (int)puVar8;
            _objc_release(puVar7);
            _objc_release(puVar2);
            puVar2 = puVar1;
            func_0x00010c0e00e0(puVar1,param_2,uVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c067ec0();
            lVar15 = lVar15 + (int)puVar8;
            _objc_release(puVar7);
            _objc_release(puVar2);
            lVar17 = lVar17 + 1;
          }
        }
        _objc_release(lVar4);
        puVar16 = puVar16 + 1;
      } while (puVar10 != puVar16);
      puVar11 = &uStack_1c0;
      puVar10 = puVar3;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
    _objc_release(puVar3);
    if (lVar17 < 1) goto LAB_107bee310;
    puStack_180 = PTR_PTR_113243c30;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lStack_1d8);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = PTR_PTR_113243c38;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_168 = puVar3;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar15);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = PTR_PTR_113243c40;
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_160 = puVar10;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_158 = puVar16;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_168,&puStack_180,3
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c1d0640(puVar1,param_2,puVar9,&PTR____CFConstantStringClassReference_110eb3658);
    _objc_release(puVar9);
    _objc_release(puVar16);
    _objc_release(puVar10);
  }
  _objc_release(puVar3);
LAB_107bee310:
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar10;
  _objc_release(uVar13);
  puVar10 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar15 = *(long *)(puVar1 + 8);
      func_0x00010c0e00e0(lVar15,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar15 == 0) {
        puVar10 = PTR_PTR_1126d7140;
        _objc_alloc(PTR_PTR_1126d7140);
        func_0x00010c042cc0();
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 8),param_2,puVar10,puVar11);
        _objc_release(puVar10);
      }
      puVar10 = *(undefined **)(puVar1 + 8);
      func_0x00010c0e00e0(puVar10,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107bee37c; end: 107bee42b; -[SCDiscoverFeedFeedViewSummary _getSectionForKey:] */

void FUN_107bee37c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d7140;
      _objc_alloc(PTR_PTR_1126d7140);
      func_0x00010c042cc0();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107bee42c; end: 107bee783; -[SCDiscoverFeedFeedViewSummary getFeedViewSectionsSummaryWithBounceRateDict:] */

undefined * FUN_107bee42c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  _objc_retain(param_3);
  func_0x00010bfc5720();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          uVar10 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
          uVar3 = uVar10;
          func_0x00010c0720c0(uVar10,param_2,&PTR____CFConstantStringClassReference_110eb5378);
          puVar4 = param_3;
          func_0x00010c0e00e0(param_3,param_2,uVar10);
          _objc_retainAutoreleasedReturnValue();
          if ((int)uVar3 == 0) {
            _objc_release(puVar4);
            if (puVar4 != (undefined *)0x0) {
              puVar5 = param_1;
              func_0x00010c0e00e0(param_1,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar5;
              func_0x00010c0d3c80();
              _objc_release(puVar5);
              puVar5 = param_3;
              func_0x00010c0e00e0(param_3,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef7f60(puVar4,param_2,puVar5);
              _objc_release(puVar5);
              uVar3 = uVar10;
              func_0x00010c0720c0(uVar10,param_2,&PTR____CFConstantStringClassReference_110eb3658);
              if ((int)uVar3 != 0) {
                puVar5 = puVar4;
                func_0x00010c0e00e0(puVar4,param_2,PTR_PTR_113243c48);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                func_0x00010c067ec0();
                if ((int)puVar6 == -1) {
                  puVar6 = puVar4;
                  func_0x00010c0e00e0(puVar4,param_2,PTR_PTR_113243c30);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  func_0x00010c067ec0();
                  _objc_release(puVar6);
                  _objc_release(puVar5);
                  if ((int)puVar7 != 0) goto LAB_107bee63c;
                  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar4,param_2,puVar5,PTR_PTR_113243c48);
                  _objc_release(puVar5);
                  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar4,param_2,puVar5,PTR_PTR_113243c50);
                }
                _objc_release(puVar5);
              }
LAB_107bee63c:
              puVar5 = puVar4;
              func_0x00010bf51e00(puVar4);
              func_0x00010c1d0640(puVar2,param_2,puVar5,uVar10);
              _objc_release(puVar5);
              goto LAB_107bee660;
            }
          }
          else {
            func_0x00010c1d0640(puVar2,param_2,puVar4,uVar10);
LAB_107bee660:
            _objc_release(puVar4);
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_1);
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x20);
}



/* Entry: 107bee784; end: 107bee78b; -[SCDiscoverFeedFeedViewSummary closingData] */

undefined8 FUN_107bee784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107bee78c; end: 107bee793; -[SCDiscoverFeedFeedViewSummary setClosingData:] */

void FUN_107bee78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bee794; end: 107bee79b; -[SCDiscoverFeedFeedViewSummary pageType] */

undefined8 FUN_107bee794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107bee79c; end: 107bee7a3; -[SCDiscoverFeedFeedViewSummary pageTypeSpecific] */

undefined8 FUN_107bee79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107bee7a4; end: 107bee7ab; -[SCDiscoverFeedFeedViewSummary viewStartViewstamp] */

undefined8 FUN_107bee7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107bee7ac; end: 107bee7db; -[SCDiscoverFeedFeedViewSummary setViewStartViewstamp:] */

void FUN_107bee7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bee7dc; end: 107bee823; -[SCDiscoverFeedFeedViewSummary .cxx_destruct] */

void FUN_107bee7dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bee824; end: 107beed03; -[SCDiscoverFeedLoggingViewingSessionData initWithIdentifier:storyLoggingInfo:rerankingId:itemPos:itemSource:subitemId:pageId:entryEvent:entryIntent:operaNavigationType:viewSessionStartTime:triggeringItemId:triggeringItemPlaylistOffset:section:isFullyViewed:isItemExpiring:fieldsOverrideDict:enableTotalNumSnapsProperty:adInsertionType:isSpotlightRepliesEnabled:liveSpotlightRepliesCount:isUpNextInfinitePlaylist:contextLabels:notificationId:operaMediaPlaybackSessionId:lastMetadataFetchedTs:feedType:isSubtitlesAvailable:isAttachmentSnap:suggestedSearchQueryText:trendMetadataString:inFeedSurvey:] */

undefined8 *
FUN_107bee824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined4 param_32,
             undefined4 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_34);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  puStack_70 = PTR_PTR_1126fa2b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    puVar1[0xc] = param_5;
    puVar1[0xd] = param_6;
    puVar1[0x10] = param_7;
    *(bool *)(puVar1 + 1) = param_8 != 0;
    _objc_retain(param_8);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_9;
    _objc_release(uVar2);
    puVar1[0x12] = param_10;
    puVar1[0x13] = param_11;
    puVar1[0x14] = param_12;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = 0xffffffffffffffff;
    puVar1[0x1b] = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x42) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0x43) = param_17._1_1_;
    *(undefined1 *)(puVar1 + 8) = param_20;
    puVar1[0x23] = param_15;
    puVar1[0x24] = param_22;
    *(undefined1 *)((long)puVar1 + 0x44) = param_23;
    _objc_retain(param_25);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_25;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x41) = param_26;
    _objc_retain(param_28);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_31;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 9) = param_32;
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x47) = param_35;
    _objc_retain(param_37);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_37;
    _objc_release(uVar2);
    uVar2 = param_38;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x2e];
    puVar1[0x2e] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_39;
    _objc_release(uVar2);
    func_0x00010bee1300(puVar1);
  }
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107beed04; end: 107beed27; -[SCDiscoverFeedLoggingViewingSessionData copyWithZone:] */

undefined8 FUN_107beed04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107beed28; end: 107beee07; -[SCDiscoverFeedLoggingViewingSessionData viewingSubitemWithId:] */

void FUN_107beed28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = -1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010c0e00e0(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0b4ca0();
      _objc_release(lVar2);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
    }
    if (*(long *)(param_1 + 0xe0) < lVar1) {
      *(long *)(param_1 + 0xe0) = lVar1;
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      *(long *)(param_1 + 0xe8) = param_3;
      _objc_release(uVar3);
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 200);
    *(long *)(param_1 + 200) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107beee08; end: 107beee37; -[SCDiscoverFeedLoggingViewingSessionData startedViewingAtTime:] */

void FUN_107beee08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107beee38; end: 107beee67; -[SCDiscoverFeedLoggingViewingSessionData mediaStartedPlayingAtTime:] */

void FUN_107beee38(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107beee68; end: 107beef83; -[SCDiscoverFeedLoggingViewingSessionData subItemDidEndViewingAtTime:isContentMediaViewTimeFixEnabled:bugFixMediaViewTime:isAttachmentSnapAndFixEnabled:correctedBugFixMediaViewTime:correctedAttachmentSnapAndFixEnabled:] */

void FUN_107beee68(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  int param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  if (((param_5 == 0) || (param_8 == 0)) || (param_2 != 0.0)) {
    dVar2 = *(double *)(param_3 + 0xb8);
LAB_107beeed8:
    dVar2 = param_2 + dVar2;
    *(double *)(param_3 + 0xb8) = dVar2;
  }
  else {
    dVar2 = *(double *)(param_3 + 0xb8);
    param_2 = param_2 + dVar2;
    *(double *)(param_3 + 0xb8) = param_2;
    if (*(long *)(param_3 + 0x20) != 0) {
      func_0x00010c26f380(param_5);
      goto LAB_107beeed8;
    }
  }
  if (param_6 == 0) {
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_107beef40;
    dVar3 = *(double *)(param_3 + 0xb0);
    func_0x00010c26f380(param_5);
    dVar2 = dVar3 + dVar2;
  }
  else {
    dVar2 = *(double *)(param_3 + 0xb0);
    dVar3 = param_1 + dVar2;
    *(double *)(param_3 + 0xb0) = dVar3;
    if (((param_5 == 0) || (param_7 == 0)) || ((param_1 != 0.0 || (*(long *)(param_3 + 0x20) == 0)))
       ) goto LAB_107beef40;
    func_0x00010c26f380(param_5);
    dVar2 = dVar3 + dVar2;
  }
  *(double *)(param_3 + 0xb0) = dVar2;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  _objc_release(uVar1);
LAB_107beef40:
  if (*(long *)(param_3 + 0x28) != 0) {
    dVar3 = *(double *)(param_3 + 0xc0);
    func_0x00010c26f380(param_5);
    *(double *)(param_3 + 0xc0) = dVar3 + dVar2;
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_3 + 0x28) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107beef84; end: 107beef8b; -[SCDiscoverFeedLoggingViewingSessionData numberOfUniqueSubitemsViewed] */

void FUN_107beef84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107beef8c; end: 107bef137; -[SCDiscoverFeedLoggingViewingSessionData getTotalMediaDurationSecs] */

ulong FUN_107beef8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uStack_140;
  ulong uStack_138;
  long *plStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [96];
  long lStack_78;
  
  puVar6 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 8) == '\x01') {
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    pcStack_128 = (code *)0x0;
    plStack_130 = (long *)0x0;
    uVar1 = *(ulong *)(param_1 + 0x58);
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf52a60();
    if (uVar5 != 0) {
      lVar11 = *plStack_130;
      do {
        uVar12 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(uVar1);
          }
          puVar8 = *(undefined1 **)(uStack_138 + uVar12 * 8);
          uVar10 = *(ulong *)(param_1 + 200);
          puVar2 = puVar8;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = (undefined8 *)puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((uVar10 & 1) != 0) {
            func_0x00010c0c4c20(puVar8);
            _objc_release();
            goto LAB_107bef0f4;
          }
          uVar12 = uVar12 + 1;
        } while (uVar5 != uVar12);
        uVar5 = uVar1;
        puVar6 = &uStack_140;
        func_0x00010bf52a60();
      } while (uVar5 != 0);
    }
    _objc_release();
LAB_107bef0f4:
    param_3 = (undefined1 *)puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return uVar1;
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      dVar13 = 0.0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf52a60();
      if (uVar5 != 0) {
        lVar9 = *plStack_110;
        do {
          uVar12 = 0;
          do {
            if (*plStack_110 != lVar9) {
              _objc_enumerationMutation(uVar1);
            }
            uVar7 = *(undefined8 *)(lStack_118 + uVar12 * 8);
            func_0x00010c0c4c20(uVar7);
            if (0.0 < dVar13) {
              func_0x00010c0c4c20(uVar7);
            }
            uVar12 = uVar12 + 1;
          } while (uVar5 != uVar12);
          uVar5 = uVar1;
          func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
        } while (uVar5 != 0);
        unaff_x20 = 0;
      }
      uVar5 = uVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return uVar5;
      }
      ___stack_chk_fail();
      pcStack_128 = FUN_107cb8138;
      uStack_140 = unaff_x20;
      uStack_138 = uVar1;
      plStack_130 = (long *)&stack0xfffffffffffffff0;
      _objc_retain();
      uVar1 = uVar5;
      func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110db8b78);
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
        uVar1 = (ulong)((uint)uVar1 ^ 1);
      }
      else {
        uVar1 = 0;
      }
      _objc_release(uVar5);
      return uVar1;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(uVar1 + 0xa8);
  *(undefined1 **)(uVar1 + 0xa8) = puVar2;
  _objc_release(uVar7);
  *(undefined8 *)(uVar1 + 0xb0) = 0;
  *(undefined8 *)(uVar1 + 0xb8) = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(uVar1 + 0x18);
  *(undefined **)(uVar1 + 0x18) = puVar3;
  _objc_release(uVar7);
  puVar2 = param_3;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(uVar1 + 0x20);
  *(undefined1 **)(uVar1 + 0x20) = puVar2;
  _objc_release(uVar7);
  puVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(uVar1 + 0x28);
  *(undefined1 **)(uVar1 + 0x28) = puVar2;
  _objc_release(uVar7);
  *(undefined8 *)(uVar1 + 0xc0) = 0;
  uVar4 = *(undefined8 *)(uVar1 + 0x38);
  func_0x00010c0e00e0(uVar4,param_2,*(undefined8 *)(uVar1 + 200));
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c0b4ca0();
  *(undefined8 *)(uVar1 + 0xe0) = uVar7;
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(uVar1 + 200);
  _objc_retain(uVar7);
  uVar5 = *(ulong *)(uVar1 + 0xe8);
  *(undefined8 *)(uVar1 + 0xe8) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 107bef138; end: 107bef217; -[SCDiscoverFeedLoggingViewingSessionData resetAfterLoadingFromSavedCopyWithTime:] */

void FUN_107bef138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107bef218; end: 107bef28f; -[SCDiscoverFeedLoggingViewingSessionData updateSkippedSubitemId:] */

undefined8 FUN_107bef218(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
      uVar2 = 1;
      goto LAB_107bef274;
    }
  }
  uVar2 = 0;
LAB_107bef274:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107bef290; end: 107bef2ff; -[SCDiscoverFeedLoggingViewingSessionData numberOfSnapsAvailable] */

long FUN_107bef290(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x58);
    func_0x00010c2768e0();
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0(lVar3);
  return uVar2 - lVar3;
}



/* Entry: 107bef300; end: 107bef4cf; -[SCDiscoverFeedLoggingViewingSessionData adjustedSnapIndexForSubitemId:] */

ulong FUN_107bef300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0b4ca0();
    _objc_release(lVar2);
  }
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar10);
        }
        lVar4 = *(long *)(param_1 + 0x38);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x38);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0b4ca0();
          _objc_release(lVar5);
          _objc_release(lVar4);
          if (lVar6 < lVar1) {
            lVar11 = lVar11 + 1;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    uVar7 = *(ulong *)(param_3 + 0x58);
    if (uVar7 == 0) {
      return 0xffffffffffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_itemType_1125fed20);
    return uVar7;
  }
  return lVar1 - lVar11 & (lVar1 - lVar11 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 107bef4d0; end: 107bef4e3; -[SCDiscoverFeedLoggingViewingSessionData itemType] */

long FUN_107bef4d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_itemType_1125fed20);
    return lVar1;
  }
  return -1;
}



/* Entry: 107bef4e4; end: 107bef513; -[SCDiscoverFeedLoggingViewingSessionData updateStoryTypeVariant:] */

void FUN_107bef4e4(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 1) && (*(long *)(param_1 + 0x88) != 1)) {
    if (param_3 != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 107bef514; end: 107bef56f; -[SCDiscoverFeedLoggingViewingSessionData updateStoryLoggingInfo:] */

void FUN_107bef514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  func_0x00010bee1300(param_1,param_2,param_3);
  if (*(long *)(param_1 + 200) != 0) {
    func_0x00010c29f460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bef570; end: 107bef64f; -[SCDiscoverFeedLoggingViewingSessionData _updateSubitemArrayWithStoryLoggingInfo:] */

void FUN_107bef570(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = uVar1;
      func_0x00010c0dfd20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar4 = uVar4 + 1;
      uVar3 = uVar1;
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef650; end: 107bef657;  */

void FUN_107bef650(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107bef658; end: 107bef687; -[SCDiscoverFeedLoggingViewingSessionData updateTriggeringItemId:] */

void FUN_107bef658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef688; end: 107bef6b7; -[SCDiscoverFeedLoggingViewingSessionData updateNotificationId:] */

void FUN_107bef688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef6b8; end: 107bef6e7; -[SCDiscoverFeedLoggingViewingSessionData updateOperaMediaPlaybackSessionId:] */

void FUN_107bef6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef6e8; end: 107bef6f3; -[SCDiscoverFeedLoggingViewingSessionData markOneTapToShareDisplayed] */

void FUN_107bef6e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x46) = 1;
  return;
}



/* Entry: 107bef6f4; end: 107bef79f; -[SCDiscoverFeedLoggingViewingSessionData updateContextLabels:] */

void FUN_107bef6f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (*(undefined **)(param_1 + 0x128) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x128);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar3 = puVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    *(undefined **)(param_1 + 0x128) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bef7a0; end: 107bef7a7; -[SCDiscoverFeedLoggingViewingSessionData identifier] */

undefined8 FUN_107bef7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107bef7a8; end: 107bef7af; -[SCDiscoverFeedLoggingViewingSessionData storyLoggingInfo] */

undefined8 FUN_107bef7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107bef7b0; end: 107bef7b7; -[SCDiscoverFeedLoggingViewingSessionData rerankingId] */

undefined8 FUN_107bef7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107bef7b8; end: 107bef7bf; -[SCDiscoverFeedLoggingViewingSessionData itemPos] */

undefined8 FUN_107bef7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107bef7c0; end: 107bef7c7; -[SCDiscoverFeedLoggingViewingSessionData virtualSectionItemPos] */

undefined8 FUN_107bef7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107bef7c8; end: 107bef7f7; -[SCDiscoverFeedLoggingViewingSessionData setVirtualSectionItemPos:] */

void FUN_107bef7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef7f8; end: 107bef7ff; -[SCDiscoverFeedLoggingViewingSessionData carouselRowNum] */

undefined8 FUN_107bef7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107bef800; end: 107bef82f; -[SCDiscoverFeedLoggingViewingSessionData setCarouselRowNum:] */

void FUN_107bef800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bef830; end: 107bef837; -[SCDiscoverFeedLoggingViewingSessionData itemSource] */

undefined8 FUN_107bef830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107bef838; end: 107bef83f; -[SCDiscoverFeedLoggingViewingSessionData storyTypeVariant] */

undefined8 FUN_107bef838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107bef840; end: 107bef847; -[SCDiscoverFeedLoggingViewingSessionData entryEvent] */

undefined8 FUN_107bef840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107bef848; end: 107bef84f; -[SCDiscoverFeedLoggingViewingSessionData entryIntent] */

undefined8 FUN_107bef848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107bef850; end: 107bef857; -[SCDiscoverFeedLoggingViewingSessionData operaNavigationType] */

undefined8 FUN_107bef850(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107bef858; end: 107bef85f; -[SCDiscoverFeedLoggingViewingSessionData setOperaNavigationType:] */

void FUN_107bef858(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107bef860; end: 107bef867; -[SCDiscoverFeedLoggingViewingSessionData viewSessionStartTime] */

undefined8 FUN_107bef860(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107bef868; end: 107bef86f; -[SCDiscoverFeedLoggingViewingSessionData mediaViewTime] */

undefined8 FUN_107bef868(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107bef870; end: 107bef877; -[SCDiscoverFeedLoggingViewingSessionData correctedMediaViewTime] */

undefined8 FUN_107bef870(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107bef878; end: 107bef87f; -[SCDiscoverFeedLoggingViewingSessionData totalViewTime] */

undefined8 FUN_107bef878(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107bef880; end: 107bef887; -[SCDiscoverFeedLoggingViewingSessionData subitemId] */

undefined8 FUN_107bef880(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107bef888; end: 107bef88f; -[SCDiscoverFeedLoggingViewingSessionData pageId] */

undefined8 FUN_107bef888(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107bef890; end: 107bef897; -[SCDiscoverFeedLoggingViewingSessionData numberOfSnapsViewed] */

undefined8 FUN_107bef890(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107bef898; end: 107bef89f; -[SCDiscoverFeedLoggingViewingSessionData maxSubitemViewIndex] */

undefined8 FUN_107bef898(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107bef8a0; end: 107bef8a7; -[SCDiscoverFeedLoggingViewingSessionData maxSubitemIdView] */

undefined8 FUN_107bef8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107bef8a8; end: 107bef8af; -[SCDiscoverFeedLoggingViewingSessionData fieldsOverrideDict] */

undefined8 FUN_107bef8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107bef8b0; end: 107bef8b7; -[SCDiscoverFeedLoggingViewingSessionData section] */

undefined8 FUN_107bef8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}


