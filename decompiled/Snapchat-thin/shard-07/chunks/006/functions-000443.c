/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105828390; end: 105828397; -[SCAddFriendsTakeoverCardViewModel cardOrderDescriptionAttributedText] */

undefined8 FUN_105828390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105828398; end: 10582839f; -[SCAddFriendsTakeoverCardViewModel addButtonViewModel] */

undefined8 FUN_105828398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1058283a0; end: 1058283a7; -[SCAddFriendsTakeoverCardViewModel ignoreButtonViewModel] */

undefined8 FUN_1058283a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1058283a8; end: 105828413; -[SCAddFriendsTakeoverCardViewModel .cxx_destruct] */

void FUN_1058283a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105828414; end: 10582843f; +[SCGrapheneFriendAddTakeoverMetric takeoverShows] */

void FUN_105828414(void)

{
  _objc_alloc(PTR_PTR_1126bee68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105828440; end: 10582846b; +[SCGrapheneFriendAddTakeoverMetric takeoverAccept] */

void FUN_105828440(void)

{
  _objc_alloc(PTR_PTR_1126bee68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582846c; end: 105828497; +[SCGrapheneFriendAddTakeoverMetric takeoverIgnore] */

void FUN_10582846c(void)

{
  _objc_alloc(PTR_PTR_1126bee68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105828498; end: 1058284c3; +[SCGrapheneFriendAddTakeoverMetric takeoverFriendRequests] */

void FUN_105828498(void)

{
  _objc_alloc(PTR_PTR_1126bee68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058284c4; end: 105828563; -[SCGrapheneFriendAddTakeoverMetric description] */

void FUN_1058284c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e059d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e059d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea838;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105828564; end: 1058286c3; -[SCGrapheneRegistry friendAddTakeoverGraphene] */

void FUN_105828564(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1058285ec;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0af0 != -1) {
    func_0x00010002a2fc(0x1136c0af0,&puStack_48);
  }
  uVar1 = uRam00000001136c0ae8;
  _objc_retain(uRam00000001136c0ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058286c4; end: 10582882f; -[SCAddFriendsPageGrapheneLogger initWithGrapheneRegistry:placement:] */

undefined1 *
FUN_1058286c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ea840;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b17f0;
    func_0x00010bef8ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901fab4(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105828830; end: 105828867; -[SCAddFriendsPageGrapheneLogger markIncomingSnapchatterAsSeen:] */

void FUN_105828830(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010be538c0();
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 105828868; end: 10582889f; -[SCAddFriendsPageGrapheneLogger markSuggestedSnapchatterAsSeen:] */

void FUN_105828868(long param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    func_0x00010be538c0();
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}



/* Entry: 1058288a0; end: 10582897b; -[SCAddFriendsPageGrapheneLogger _logFirstImpressionWithTime:section:] */

void FUN_1058288a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf885a0(param_3);
  func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010befbfe0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bfec330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_increment_value__1125d8a90,
             *(undefined8 *)(param_1 + 0x18),1);
  return;
}



/* Entry: 10582897c; end: 1058289b7; -[SCAddFriendsPageGrapheneLogger .cxx_destruct] */

void FUN_10582897c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1058289b8; end: 105828a57; -[SCAddFriendsReliablePinningGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1058289b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea848;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c128880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105828a58; end: 105828b4b; -[SCAddFriendsReliablePinningGrapheneLogger logSeenPinnedSuggestionsCount:seenTotalSuggestionsCount:addedPinnedSuggestionsCount:addedTotalSuggestionsCount:] */

void FUN_105828a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bee88;
  func_0x00010c157b40(PTR_PTR_1126bee88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  puVar2 = PTR_PTR_1126bee88;
  func_0x00010c158000(PTR_PTR_1126bee88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
  puVar3 = PTR_PTR_1126bee88;
  func_0x00010befcce0(PTR_PTR_1126bee88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar3,param_5);
  puVar4 = PTR_PTR_1126bee88;
  func_0x00010befcdc0(PTR_PTR_1126bee88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar4,param_6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105828b4c; end: 105828ba3; -[SCAddFriendsReliablePinningGrapheneLogger logIncrementImpressionCountState:] */

void FUN_105828b4c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bee88;
  if (param_3 == 0) {
    func_0x00010bfeb960(PTR_PTR_1126bee88);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfeb9a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105828ba4; end: 105828baf; -[SCAddFriendsReliablePinningGrapheneLogger .cxx_destruct] */

void FUN_105828ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105828bb0; end: 105828c6b; -[SCAddFriendsSuggestionListGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_105828bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea850;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105828c6c; end: 105828d43; -[SCAddFriendsSuggestionListGrapheneLogger logIndexedSeenSuggestedSnapchatterIds:addedSuggestedSnapchatterIds:userSegmentsProvider:placement:] */

void FUN_105828c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be52980(param_1,param_2,param_3,param_5,param_6);
  func_0x00010be54b60(param_1,param_2,param_3,param_5,param_6);
  func_0x00010be54b00(param_1,param_2,param_3,param_5,param_6);
  _objc_release(param_5);
  func_0x00010be565e0(param_1,param_2,param_3);
  func_0x00010be5a100(param_1,param_2,param_3);
  func_0x00010be55a40(param_1,param_2,param_3);
  func_0x00010be50120(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105828d44; end: 1058290a7; -[SCAddFriendsSuggestionListGrapheneLogger _logEmptyStatusFromSuggestedFriends:userSegmentsProvider:placement:] */

void FUN_105828d44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b17f0;
  _objc_retain(param_3);
  func_0x00010c157fc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e05ab8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2db564);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010901fab4(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,puVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2feddf);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c06b140();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,puVar2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar4,1);
  lVar8 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar8 == 0) {
    puVar2 = PTR_PTR_1126b17f0;
    func_0x00010c157fc0(PTR_PTR_1126b17f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e05ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2db564);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901fab4(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c2ac460(puVar9,param_2,puVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(param_5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2feddf);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf5ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c06b140();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
    if ((int)uVar7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
    }
    puVar9 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,puVar2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar9,1);
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058290a8; end: 1058291d7; -[SCAddFriendsSuggestionListGrapheneLogger _logImpressionHistogramOfSuggestedFriends:userSegmentsProvider:placement:] */

void FUN_1058290a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c078a60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010be24600(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2feddf);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2ac460(lVar3,param_2,puVar4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(lVar3);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bef9180(uVar6,param_2,lVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1058291d8; end: 10582941f; -[SCAddFriendsSuggestionListGrapheneLogger _logImpressionStatusOfSuggestedFriends:userSegmentsProvider:placement:] */

void FUN_1058291d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078a60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  lVar4 = param_1;
  func_0x00010be24600(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c2ac460(lVar4,param_2,puVar5,&PTR____CFConstantStringClassReference_110e05ab8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2feddf);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c2ac460(lVar6,param_2,puVar5,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(puVar5);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,lVar4,1);
  lVar6 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010be24600(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2ac460(lVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110e05ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2feddf);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c2ac460(lVar7,param_2,puVar5,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar5);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,lVar6,1);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105829420; end: 10582951b; -[SCAddFriendsSuggestionListGrapheneLogger _grapheneFriendingMetricFromPlacement:] */

void FUN_105829420(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 < 4) {
      if (param_3 == 2) {
        func_0x00010bfea680();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105829514;
      }
      if (param_3 == 3) {
        func_0x00010bfea6a0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105829514;
      }
    }
    else {
      if (param_3 == 4) {
        func_0x00010bfea6e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105829514;
      }
      if (param_3 == 6) {
        func_0x00010bfea740();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105829514;
      }
    }
  }
  else if (param_3 < 0x22) {
    if (param_3 == 8) {
      func_0x00010bfea760();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105829514;
    }
    if (param_3 == 0x18) {
      func_0x00010bfea6c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105829514;
    }
  }
  else {
    if (param_3 == 0x22) {
      func_0x00010bfea720(PTR_PTR_1126b17f0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105829514;
    }
    if (param_3 == 0x33) {
      func_0x00010bfea700();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105829514;
    }
  }
  func_0x00010bf005a0();
  _objc_retainAutoreleasedReturnValue();
LAB_105829514:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582951c; end: 1058295f3; -[SCAddFriendsSuggestionListGrapheneLogger _logNonUniqueSeenSuggestedSnapchatter:] */

void FUN_10582951c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b17f0;
  func_0x00010c157fc0(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar4 = puVar1;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e05af8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bfec320(uVar5,param_2,puVar4,lVar2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058295f4; end: 10582976b; -[SCAddFriendsSuggestionListGrapheneLogger _logUniqueSeenSuggestedSnapchatter:] */

void FUN_1058295f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar6 = param_3;
  func_0x00010c1607a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c280520(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c0ce860(puVar1,param_2,uVar5);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b17f0;
    func_0x00010c157fc0(PTR_PTR_1126b17f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e05b18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar2 = puVar1;
    func_0x00010bf529e0(puVar1);
    func_0x00010bfec320(uVar6,param_2,puVar4,puVar2);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      func_0x00010c280520();
      func_0x00010c280520(puVar2,param_2,uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar6);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10582976c; end: 10582983b; -[SCAddFriendsSuggestionListGrapheneLogger _logMaxSeenImpressionIndex:] */

void FUN_10582976c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b17f0;
  _objc_retain(param_3);
  func_0x00010c157fc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e05b38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bef9180(uVar5,param_2,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10582983c; end: 105829a8f; -[SCAddFriendsSuggestionListGrapheneLogger _logAddedImpressionWith:addedSuggestedSnapchatterIds:] */

void FUN_10582983c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b17f0;
  func_0x00010befcd80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e05b58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lVar9 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar9 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    iVar11 = 0;
    iVar10 = 0;
    iVar12 = 0;
    lVar8 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        lVar5 = param_3;
        func_0x00010bfecde0(param_3,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8));
        uVar1 = lVar5 + 1;
        func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar4,uVar1);
        if (uVar1 < 0xb) {
          iVar12 = iVar12 + 1;
        }
        if (lVar5 - 10U < 10) {
          iVar11 = iVar11 + 1;
        }
        if (0x14 < uVar1) {
          iVar10 = iVar10 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar9 != lVar7);
      lVar9 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar9 != 0);
    lVar7 = (long)iVar12;
    lVar8 = (long)iVar11;
    lVar9 = (long)iVar10;
  }
  _objc_release(param_4);
  func_0x00010be50140(param_1,param_2,&PTR____CFConstantStringClassReference_110e05b78,lVar7);
  func_0x00010be50140(param_1,param_2,&PTR____CFConstantStringClassReference_110e05b98,lVar8);
  func_0x00010be50140(param_1,param_2,&PTR____CFConstantStringClassReference_110dfec58,lVar9);
  lVar9 = param_4;
  func_0x00010bf529e0();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dbdb58;
  func_0x00010be50140(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdb58);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b17f0;
  if (lVar9 != 0) {
    _objc_retain(ppuVar6);
    func_0x00010befcd80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,puVar3,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010bfec320(*(undefined8 *)(param_3 + 8),param_2,puVar4,lVar9);
    func_0x00010bef9180(*(undefined8 *)(param_3 + 8),param_2,puVar4,lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105829a90; end: 105829b67; -[SCAddFriendsSuggestionListGrapheneLogger _logAddedSuggestionCountMetricsWithContextValue:count:] */

void FUN_105829a90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b17f0;
  if (param_4 != 0) {
    _objc_retain(param_3);
    func_0x00010befcd80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"context");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,puVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar3,param_4);
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105829b68; end: 105829b97; -[SCAddFriendsSuggestionListGrapheneLogger .cxx_destruct] */

void FUN_105829b68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105829b98; end: 105829def; -[SCAddFriendsLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105829b98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = param_1;
  FUN_105829df0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = param_1;
  FUN_105829df0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272a63c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar3 = lVar11;
  func_0x00010bfcdfa0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272a640;
    _objc_loadWeakRetained(lVar11);
  }
  lVar4 = lVar11;
  func_0x00010c293640(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272a644;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c157cc0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = param_1 + _DAT_11272a62c;
  _objc_loadWeakRetained(lVar11);
  lVar6 = lVar11;
  func_0x00010c0fc680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  puVar7 = PTR_PTR_1126bee90;
  _objc_alloc(PTR_PTR_1126bee90);
  lVar11 = param_1 + _DAT_11272a630;
  _objc_loadWeakRetained();
  lVar8 = lVar11;
  func_0x00010bfea8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049360(puVar7,param_2,lVar1,lVar2,lVar5,lVar3,lVar4,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar11);
  puVar9 = PTR_PTR_1126bee98;
  _objc_alloc(PTR_PTR_1126bee98);
  func_0x00010bff22c0();
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + _DAT_11272a648);
  }
  func_0x00010bf9d660(uVar10,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105829df0; end: 105829e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105829df0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a638);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105829e14; end: 105829ea3; -[SCAddFriendsLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105829e14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a64c);
  _objc_destroyWeak(param_1 + _DAT_11272a630);
  _objc_destroyWeak(param_1 + _DAT_11272a62c);
  _objc_storeStrong(param_1 + _DAT_11272a648,0);
  _objc_destroyWeak(param_1 + _DAT_11272a644);
  _objc_destroyWeak(param_1 + _DAT_11272a640);
  _objc_destroyWeak(param_1 + _DAT_11272a63c);
  _objc_destroyWeak(param_1 + _DAT_11272a638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a634);
  return;
}



/* Entry: 105829ea4; end: 10582a01f; -[SCAddFriendsQuickAddLoggerCreatorImpl initWithSnapchatterDataTracker:snapchattersDataMutator:suggestionsSeenRequestSender:grapheneRegistry:userSegmentsProvider:pinningMetadataRepository:incomingFriendsImpressionCountMutator:] */

undefined1 *
FUN_105829ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_58 = PTR_PTR_1126ea858;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
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



/* Entry: 10582a020; end: 10582a15f; -[SCAddFriendsQuickAddLoggerCreatorImpl quickAddLoggerFromPlacement:pageSessionId:] */

void FUN_10582a020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  lVar5 = param_1;
  func_0x00010be6f1c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bec8e00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be8a620();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126beea0;
  _objc_alloc(PTR_PTR_1126beea0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar9 = param_1;
  func_0x00010beb3960(param_1,param_2,param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049340(puVar8,param_2,uVar1,uVar3,param_3,lVar5,lVar6,uVar2,uVar11,uVar4,lVar7,
                      (char)lVar9);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10582a160; end: 10582a18f; -[SCAddFriendsQuickAddLoggerCreatorImpl _reliablePinningGrapheneLogger] */

void FUN_10582a160(void)

{
  _objc_alloc(PTR_PTR_1126beea8);
  func_0x00010c0184a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582a190; end: 10582a1fb; -[SCAddFriendsQuickAddLoggerCreatorImpl _pageGrapheneLoggerFromPlacement:] */

void FUN_10582a190(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (((param_3 < 0x27) && ((1L << (param_3 & 0x3f) & 0x4c0380017dU) != 0)) || (param_3 == 0x47)) {
    _objc_alloc(PTR_PTR_1126beeb0);
    func_0x00010c018760();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10582a1fc; end: 10582a27f; -[SCAddFriendsQuickAddLoggerCreatorImpl _suggestionListGrapheneLoggerFromPlacement:] */

void FUN_10582a1fc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_3 < 0x34) && ((1L << (param_3 & 0x3f) & 0x800040380017cU) != 0)) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126beeb8;
      _objc_alloc();
      func_0x00010c0184a0();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10582a280; end: 10582a29f; -[SCAddFriendsQuickAddLoggerCreatorImpl _shouldExcludePinnedSuggestionWithPlacement:] */

bool FUN_10582a280(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (param_3 - 7U < 0xfffffffffffffffb && param_3 - 0x19U < 0xfffffffffffffffe) &&
         param_3 != 0x22;
}



/* Entry: 10582a2a0; end: 10582a317; -[SCAddFriendsQuickAddLoggerCreatorImpl .cxx_destruct] */

void FUN_10582a2a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582a318; end: 10582a863; -[SCAddFriendsQuickAddLoggerImpl initWithSnapchatterDataTracker:snapchattersDataMutator:placement:addFriendsGrapheneLogger:quickAddGrapheneLogger:userSegmentsProvider:suggestionsSeenRequestSender:pinningMetadataRepository:reliablePinningGrapheneLogger:excludingPinnedSuggestions:pageSessionId:incomingFriendsImpressionCountMutator:] */

undefined8 *
FUN_10582a318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_80 = PTR_PTR_1126ea860;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar1[10] = param_5;
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    func_0x00010be1b320(puVar1);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x16) = param_12;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[0x11];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0fc660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10582a864;
    puStack_a0 = &UNK_110842c58;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = puVar1[0x11];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0fc640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10582a864; end: 10582a8f3;  */

void FUN_10582a864(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffb40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582a8f4; end: 10582a99b; -[SCAddFriendsQuickAddLoggerImpl cleanupAndFinishLogging] */

void FUN_10582a8f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    func_0x00010be71860(param_1);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10582a99c;
    puStack_48 = &UNK_110841f80;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(lVar2,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10582a99c; end: 10582a9a3;  */

void FUN_10582a99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__performCleanupResources_112579fb8);
  return;
}



/* Entry: 10582a9a4; end: 10582a9e7; -[SCAddFriendsQuickAddLoggerImpl _performCleanupResources] */

void FUN_10582a9a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 10582a9e8; end: 10582aa87; -[SCAddFriendsQuickAddLoggerImpl logSeenAndAddedSuggestedSnapchattersWithShouldUpdateViewedState:] */

void FUN_10582a9e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10582aa88;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(puStack_40);
  _objc_release(puVar1);
  return;
}



/* Entry: 10582aa88; end: 10582aa97;  */

void FUN_10582aa88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be584b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logSeenAndAddedSuggestedSnapcha_112573ac8,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10582aa98; end: 10582abab; -[SCAddFriendsQuickAddLoggerImpl markIncomingSnapchatterAsSeen:] */

void FUN_10582aa98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10582abac; end: 10582abdf;  */

void FUN_10582abac(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582abe0; end: 10582ad4b; -[SCAddFriendsQuickAddLoggerImpl markSuggestedSnapchatterAsSeen:index:isRecentlyActive:] */

void FUN_10582abe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10582ad4c; end: 10582ad83;  */

void FUN_10582ad4c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582ad84; end: 10582af4f; -[SCAddFriendsQuickAddLoggerImpl _updateSeenSuggestedSnapchatter:index:impressionStartTime:isRecentlyActive:] */

void FUN_10582ad84(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      lVar1 = param_3;
      func_0x00010bf51e00(param_3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,lVar1,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_6 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        lVar1 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar5,param_2,param_6,lVar1);
        _objc_release(lVar1);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (param_4 == (undefined *)0x0) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bf529e0(uVar5);
        func_0x00010c0df780(puVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_4);
        puVar3 = param_4;
      }
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,param_3,puVar3);
      _objc_retain(param_5);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = param_5;
      _objc_release(uVar5);
      func_0x00010c0bbba0(*(undefined8 *)(param_1 + 0x60),param_2,param_5);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10582af50; end: 10582b05f; -[SCAddFriendsQuickAddLoggerImpl _updateSeenAddedMeSnapchatter:impressionStartTime:] */

void FUN_10582af50(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf51e00(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,lVar1,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_4;
    _objc_release(uVar3);
    func_0x00010c0bb700(*(undefined8 *)(param_1 + 0x60),param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10582b060; end: 10582b183; -[SCAddFriendsQuickAddLoggerImpl _updateWithAddedSnapchatterIds:] */

void FUN_10582b060(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *puVar14;
  long unaff_x24;
  long lVar15;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
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
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar15 * 8);
        unaff_x23 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x23 != 0) {
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
        }
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10582b184;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = param_1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  iVar13 = (int)auStack_1e8;
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar2 != (undefined1 *)0x0) {
    puVar14 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x18));
      puVar14 = puVar14 + 1;
    } while (puVar2 != puVar14);
    iVar13 = (int)auStack_1e8;
    puVar2 = (undefined1 *)puVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)((long)puVar3 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x0001006372a4();
  lVar5 = *(long *)((long)puVar3 + 0x30);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b340(puVar3);
  puVar6 = PTR_PTR_1126beec0;
  _objc_alloc();
  uVar7 = *(undefined8 *)((long)puVar3 + 0x50);
  func_0x00010901fad8(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)((long)puVar3 + 0x50);
  func_0x00010901fb18(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)((long)puVar3 + 0x50);
  func_0x00010901fb58(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0630a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  lVar15 = lVar4;
  func_0x00010bf529e0();
  if ((lVar15 != 0) || (lVar15 = lVar5, func_0x00010bf529e0(), lVar15 != 0)) {
    puVar10 = PTR_PTR_1126beec8;
    _objc_alloc(PTR_PTR_1126beec8);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d8c0(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar11);
    uVar7 = *(undefined8 *)((long)puVar3 + 0x80);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c8e0();
    _objc_release(uVar7);
    _objc_release(puVar10);
  }
  lVar15 = *(long *)((long)puVar3 + 0x30);
  func_0x00010bf529e0();
  if (lVar15 != 0) {
    uVar8 = *(undefined8 *)((long)puVar3 + 0xc0);
    uVar7 = *(undefined8 *)((long)puVar3 + 0x30);
    func_0x00010bf002e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec1a0(uVar8);
    _objc_release(uVar7);
  }
  if (iVar13 != 0) {
    func_0x00010bed9f00(puVar3);
  }
  func_0x00010be579a0(puVar3);
  func_0x00010be54b80(puVar3);
  if ((*(byte *)((long)puVar3 + 0xb0) & 1) == 0) {
    func_0x00010be384c0(puVar3);
  }
  func_0x00010be1b320(puVar3);
  func_0x00010c12adc0(*(undefined8 *)((long)puVar3 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)((long)puVar3 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)((long)puVar3 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)((long)puVar3 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)((long)puVar3 + 0x38));
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10582b184; end: 10582b27b; -[SCAddFriendsQuickAddLoggerImpl _updateWithRemovedSnapchatterIds:] */

void FUN_10582b184(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar11 = (int)auStack_c8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18));
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    iVar11 = (int)auStack_c8;
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_3 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x0001006372a4();
  lVar2 = *(long *)(param_3 + 0x30);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b340(param_3);
  puVar3 = PTR_PTR_1126beec0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010901fad8(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010901fb18(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x50);
  func_0x00010901fb58(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0630a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar10 = lVar12;
  func_0x00010bf529e0();
  if ((lVar10 != 0) || (lVar10 = lVar2, func_0x00010bf529e0(), lVar10 != 0)) {
    puVar7 = PTR_PTR_1126beec8;
    _objc_alloc(PTR_PTR_1126beec8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d8c0(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    uVar4 = *(undefined8 *)(param_3 + 0x80);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c8e0();
    _objc_release(uVar4);
    _objc_release(puVar7);
  }
  lVar10 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0xc0);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf002e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec1a0(uVar5);
    _objc_release(uVar4);
  }
  if (iVar11 != 0) {
    func_0x00010bed9f00(param_3);
  }
  func_0x00010be579a0(param_3);
  func_0x00010be54b80(param_3);
  if ((*(byte *)(param_3 + 0xb0) & 1) == 0) {
    func_0x00010be384c0(param_3);
  }
  func_0x00010be1b320(param_3);
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x38));
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 10582b27c; end: 10582b553; -[SCAddFriendsQuickAddLoggerImpl _logSeenAndAddedSuggestedSnapchattersWithDate:shouldUpdateViewedState:] */

void FUN_10582b27c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001006372a4();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b340(param_1);
  puVar4 = PTR_PTR_1126beec0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010901fad8(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010901fb18(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010901fb58(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0630a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar11 = lVar1;
  func_0x00010bf529e0();
  if ((lVar11 != 0) || (lVar11 = lVar3, func_0x00010bf529e0(), lVar11 != 0)) {
    puVar8 = PTR_PTR_1126beec8;
    _objc_alloc(PTR_PTR_1126beec8);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d8c0(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c8e0();
    _objc_release(uVar5);
    _objc_release(puVar8);
  }
  lVar11 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar11 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf002e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec1a0(uVar6);
    _objc_release(uVar5);
  }
  if (param_4 != 0) {
    func_0x00010bed9f00(param_1);
  }
  func_0x00010be579a0(param_1);
  func_0x00010be54b80(param_1);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    func_0x00010be384c0(param_1);
  }
  func_0x00010be1b320(param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10582b554; end: 10582b5a3;  */

undefined8 FUN_10582b554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10582b5a4; end: 10582b6a3; -[SCAddFriendsQuickAddLoggerImpl _updateIsViewedStateOfSeenAddedMeSnapchatterIdToSnapchatters:seenSuggestedSnapchatterIdToSnapchatters:] */

void FUN_10582b5a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2860a0();
    _objc_release(uVar2);
  }
  lVar1 = param_4;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd780;
    func_0x00010c29ea00(PTR_PTR_1126bd780,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2940(uVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10582b6a4; end: 10582b7d3; -[SCAddFriendsQuickAddLoggerImpl _incrementImpressionCountOfSnapchatters:pinningMetadataRepository:] */

void FUN_10582b6a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108b68b0);
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfec5e0(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10582b7d4; end: 10582b7db;  */

void FUN_10582b7d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10582b7dc; end: 10582b80f;  */

void FUN_10582b7dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582b810; end: 10582ba4f; -[SCAddFriendsQuickAddLoggerImpl _logImpressionToGrapheneWithSeenSuggestedSnapchatters:addedSuggestedSnapchatters:] */

void FUN_10582b810(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_1a8 + lVar6 * 8);
        func_0x00010c2923e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_1f0,auStack_168,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_1e0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1e0 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar3 = *(undefined8 *)(lStack_1e8 + lVar6 * 8);
        func_0x00010c2923e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,uVar3);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  func_0x00010c0a8980(*(undefined8 *)(param_1 + 0x68),param_2,puVar1,puVar4,
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5e680(*(undefined8 *)(param_3 + 0x70));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0b4fe0();
  *(undefined **)(param_3 + 0x40) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10582ba50; end: 10582ba9b; -[SCAddFriendsQuickAddLoggerImpl _generateImpressionId] */

void FUN_10582ba50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5e680(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b4fe0();
  *(undefined **)(param_1 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10582ba9c; end: 10582bb0f; -[SCAddFriendsQuickAddLoggerImpl _generateImpressionTimeMs] */

undefined * FUN_10582ba9c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  dVar3 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x48));
  func_0x00010c0df720((param_1 - dVar3) * 1000.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b4fe0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10582bb10; end: 10582bbe7; -[SCAddFriendsQuickAddLoggerImpl didStartSnapchattersUpdateDataRequest:] */

void FUN_10582bb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10582bbe8; end: 10582bd6f;  */

void FUN_10582bbe8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((lVar2 != 0) && (param_4 == *(long *)(*(long *)(param_1 + 0x20) + 0x50))) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
  return;
}



/* Entry: 10582bd70; end: 10582be0f;  */

void FUN_10582bd70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 in_x4;
  long lVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  iVar3 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bee4500(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(in_x4);
  if (iVar3 != 0) {
    _objc_initWeak(auStack_88,param_1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10582bf5c;
    puStack_a0 = &UNK_1108b6900;
    lStack_98 = param_1;
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_copyWeak(auStack_c0,auStack_88);
    func_0x00010c0bc6c0(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(in_x4);
  _objc_release(puVar2);
  return;
}



/* Entry: 10582be10; end: 10582bf5b; -[SCAddFriendsQuickAddLoggerImpl didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10582be10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10582bf5c;
    puStack_70 = &UNK_1108b6900;
    uStack_68 = param_1;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010c0bc6c0(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10582bf5c; end: 10582c0a7;  */

void FUN_10582bf5c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10582c0a8; end: 10582c147;  */

void FUN_10582c0a8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bee4be0(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  lVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    _objc_copyWeak(auStack_88,param_1 + 0x28);
    _objc_retain(lVar5);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10582c148; end: 10582c263;  */

void FUN_10582c148(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10582c264; end: 10582c303;  */

void FUN_10582c264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bee4be0(lVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined **)(lVar1 + 0xa0) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10582c304; end: 10582c333; -[SCAddFriendsQuickAddLoggerImpl _didReceiveTopSuggestions:] */

void FUN_10582c304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582c334; end: 10582c363; -[SCAddFriendsQuickAddLoggerImpl _didReceiveRecentlyJoiners:] */

void FUN_10582c334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582c364; end: 10582c57b; -[SCAddFriendsQuickAddLoggerImpl _logReliablePinningMetricsWithSeenSuggestedSnapchatters:addedSuggestedSnapchatters:] */

void FUN_10582c364(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010be74060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10582c57c;
    puStack_70 = &UNK_11085a548;
    ppuStack_b8 = &puStack_68;
    _objc_retain(puVar1);
    puVar3 = param_3;
    puStack_68 = puVar1;
    func_0x0001006372a4(param_3,&puStack_88);
  }
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(param_3);
    func_0x00010bf529e0(puVar5);
    func_0x00010bf529e0(param_4);
    func_0x00010c0aefa0(uVar7);
  }
  else {
    puStack_b0 = puVar5;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10582c5c8;
    puStack_98 = &UNK_11085a548;
    _objc_retain(puVar1);
    uVar7 = param_4;
    puStack_90 = puVar1;
    func_0x0001006372a4(param_4,&puStack_b0);
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf529e0(puVar3);
    func_0x00010bf529e0(param_3);
    func_0x00010bf529e0(uVar7);
    func_0x00010bf529e0(param_4);
    func_0x00010c0aefa0(uVar6);
    _objc_release(uVar7);
    puVar5 = puStack_90;
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (puVar2 != (undefined *)0x0) {
    _objc_release(*ppuStack_b8);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10582c57c; end: 10582c613;  */

undefined8 FUN_10582c57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10582c614; end: 10582c6a3; -[SCAddFriendsQuickAddLoggerImpl _pinnedSuggestionsUserIds] */

void FUN_10582c614(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108b6960);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108b6980);
  func_0x00010befa160(puVar1);
  func_0x00010befa160(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10582c6a4; end: 10582c6b3;  */

void FUN_10582c6a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10582c6b4; end: 10582c6bb; -[SCAddFriendsQuickAddLoggerImpl _logImpressionCountIncrementResult:] */

void FUN_10582c6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_logIncrementImpressionCountState_112607c50);
  return;
}



/* Entry: 10582c6bc; end: 10582c7cf; -[SCAddFriendsQuickAddLoggerImpl .cxx_destruct] */

void FUN_10582c6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582c7d0; end: 10582c877; -[SCFriendingContactSyncGRPCTrigger syncContactIfNecessary] */

void FUN_10582c7d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10582c878; end: 10582c8a3;  */

void FUN_10582c878(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582c8a4; end: 10582c947; -[SCFriendingContactSyncGRPCTrigger _syncContactIfNecessary] */

void FUN_10582c8a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bddd620();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bde1400();
    uVar2 = param_1;
    func_0x00010bde1420();
    uVar3 = param_1;
    func_0x00010bde13e0();
    uVar4 = param_1;
    func_0x00010bde13c0();
    if (((((uVar1 & 1) != 0) || ((uVar2 & 1) != 0)) || ((uVar3 & 1) != 0)) || ((int)uVar4 != 0)) {
      func_0x00010bec97e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be51e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__logContactSyncTriggerMetric_cli_112572138,uVar1,uVar2,uVar3,uVar4);
      return;
    }
  }
  return;
}



/* Entry: 10582c948; end: 10582ca3b; -[SCFriendingContactSyncGRPCTrigger _syncContact] */

void FUN_10582c948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c265d40(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10582ca3c; end: 10582ca6f;  */

void FUN_10582ca3c(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582ca70; end: 10582cb57; -[SCFriendingContactSyncGRPCTrigger _resetClientContactSyncVersionAndTTL] */

void FUN_10582ca70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49c60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e05bd8);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e05bb8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10582cb58; end: 10582cb97; -[SCFriendingContactSyncGRPCTrigger _removeClientContactSyncTTL] */

void FUN_10582cb58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10582cb98; end: 10582cc27; -[SCFriendingContactSyncGRPCTrigger _checkContactSyncPermissions] */

undefined8 FUN_10582cb98(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdc00();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      func_0x00010be8bac0(param_1);
    }
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06f320();
    _objc_release(uVar3);
  }
  return uVar4;
}



/* Entry: 10582cc28; end: 10582cc67; -[SCFriendingContactSyncGRPCTrigger _clientContactBookPermissionChangedSinceLastSession] */

undefined8 FUN_10582cc28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49ee0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10582cc68; end: 10582ccfb; -[SCFriendingContactSyncGRPCTrigger _clientContactBookSyncVersionExpired] */

bool FUN_10582cc68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf49c60();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  return (int)uVar5 < lVar2;
}



/* Entry: 10582ccfc; end: 10582cdc3; -[SCFriendingContactSyncGRPCTrigger _clientContactSyncTTLExpired] */

bool FUN_10582ccfc(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c067f00(uVar4,param_3,&PTR____CFConstantStringClassReference_110e05bf8,0x18,0);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    bVar1 = (double)((long)(int)uVar4 * 0xe10) <= param_1;
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 10582cdc4; end: 10582cfc7; -[SCFriendingContactSyncGRPCTrigger _clientContactBookHasUpdated] */

long FUN_10582cdc4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa5ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf5ef00(lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar6);
  if ((uVar3 == 0) || (uVar2 = uVar3, func_0x00010c071cc0(), (uVar2 & 1) != 0)) {
    lVar9 = 0;
  }
  else {
    lVar7 = lVar5;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010beeca00(*(undefined8 *)(lVar10 * 8));
        if (*(char *)(param_1 + 0x70) == '\x01') {
          *(undefined1 *)(param_1 + 0x70) = 0;
          lVar9 = 1;
          goto LAB_10582cf68;
        }
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar7;
      func_0x00010bf52a60();
    }
    lVar9 = 0;
LAB_10582cf68:
    _objc_release(lVar7);
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar5 = uVar3 + 0x20;
  _objc_loadWeakRetained(lVar5);
  func_0x00010be0ea40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return lVar5;
}



/* Entry: 10582cfc8; end: 10582d00f;  */

void FUN_10582cfc8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ea40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10582d010; end: 10582d0bb; -[SCFriendingContactSyncGRPCTrigger _featureSettingsDidChange:] */

void FUN_10582d010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0e00e0(param_3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c0e00e0(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x00010bec9800(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10582d0bc; end: 10582d243; -[SCFriendingContactSyncGRPCTrigger _logContactSyncTriggerMetric:clientTTLExpired:permissionChangedSinceLastSession:contactBookChanged:] */

void FUN_10582d0bc(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b17f0;
  if (param_3 == 0) {
    if (param_4 == 0) goto joined_r0x00010582d0fc;
    func_0x00010bf4a5e0(PTR_PTR_1126b17f0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf4a6a0(PTR_PTR_1126b17f0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb94e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b17f0;
joined_r0x00010582d0fc:
  if (param_5 != 0) {
    PTR_PTR_1126b17f0 = puVar1;
    func_0x00010bf4a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b17f0;
  }
  if (param_6 != 0) {
    PTR_PTR_1126b17f0 = puVar1;
    func_0x00010bf4a5c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  PTR_PTR_1126b17f0 = puVar1;
  return;
}



/* Entry: 10582d244; end: 10582d24f; -[SCFriendingContactSyncGRPCTrigger visitAddContactEvent:] */

void FUN_10582d244(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10582d250; end: 10582d25b; -[SCFriendingContactSyncGRPCTrigger visitDeleteContactEvent:] */

void FUN_10582d250(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10582d25c; end: 10582d25f; -[SCFriendingContactSyncGRPCTrigger visitDropEverythingEvent:] */

void FUN_10582d25c(void)

{
  return;
}



/* Entry: 10582d260; end: 10582d263; -[SCFriendingContactSyncGRPCTrigger visitUpdateContactEvent:] */

void FUN_10582d260(void)

{
  return;
}


