/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c112f8; end: 106c113b7; -[SCLensFriendsFeedContextImpressionTracker _handleExtraDataForFeedItem:start:] */

void FUN_106c112f8(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb82d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba1f8;
  _objc_opt_class(PTR_PTR_1126ba1f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010be32380(param_1);
  _objc_release(uVar1);
  if (((param_4 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x31) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be292d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__handleExtraDataForFeedVisible_s_112567e50,0,1);
    return;
  }
  return;
}



/* Entry: 106c113b8; end: 106c11503; -[SCLensFriendsFeedContextImpressionTracker _handleTrackingData:] */

void FUN_106c113b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c140b20(), lVar1 == 9)) {
    lVar1 = param_3;
    func_0x00010c097200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c097200();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        puVar3 = *(undefined **)(param_1 + 0x28);
        func_0x00010c0dff20(puVar3,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar1 = param_3;
        func_0x00010c097200(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bf9a440();
        func_0x00010c0df840(puVar5,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar1);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar3,lVar2);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c11504; end: 106c1152b; -[SCLensFriendsFeedContextImpressionTracker conversationImpressionsUpdatesObservable] */

void FUN_106c11504(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c1152c; end: 106c11553; -[SCLensFriendsFeedContextImpressionTracker isFriendsFeedScreenVisibleStatus] */

void FUN_106c1152c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c11554; end: 106c115a7; -[SCLensFriendsFeedContextImpressionTracker .cxx_destruct] */

void FUN_106c11554(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c115a8; end: 106c11673; -[SCLensFriendsFeedContextItemsHelper initWithStreakProvider:streakMilestoneProvider:friendmojiDataProvider:] */

undefined1 *
FUN_106c115a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5c10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c11674; end: 106c1171b; -[SCLensFriendsFeedContextItemsHelper isBirthdayForFeedItem:] */

ulong FUN_106c11674(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cf9d2c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((uVar2 == 0) || (uVar1 = uVar2, func_0x000107cfab9c(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000107cf94b0();
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106c1171c; end: 106c117eb; -[SCLensFriendsFeedContextItemsHelper isRecentlyAddedFriendForFeedItem:] */

ulong FUN_106c1171c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cf9e44();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uVar4 = param_3;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000107cf97e4();
      _objc_release(uVar4);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106c117ec; end: 106c1185f; -[SCLensFriendsFeedContextItemsHelper isMorning:] */

bool FUN_106c117ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44340();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2 + -4 < (undefined *)0x7;
}



/* Entry: 106c11860; end: 106c118d3; -[SCLensFriendsFeedContextItemsHelper isEvening:] */

bool FUN_106c11860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44340();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2 + -0x13 < (undefined *)0xfffffffffffffff1;
}



/* Entry: 106c118d4; end: 106c11947; -[SCLensFriendsFeedContextItemsHelper isMidday:] */

bool FUN_106c118d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44340();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2 + -0xf < (undefined *)0x3;
}



/* Entry: 106c11948; end: 106c119c3; -[SCLensFriendsFeedContextItemsHelper dayOfWeekForDate:] */

undefined * FUN_106c11948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  uVar3 = *(undefined8 *)PTR__NSCalendarIdentifierGregorian_11034aa28;
  _objc_retain(param_3);
  func_0x00010bf27bc0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44340();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106c119c4; end: 106c11a03; -[SCLensFriendsFeedContextItemsHelper isSnapchatTeamFeedItem:] */

undefined8 FUN_106c119c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107cfa560();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c11a04; end: 106c11a43; -[SCLensFriendsFeedContextItemsHelper isSnapchatBotFeedItem:] */

undefined8 FUN_106c11a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107cfa64c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c11a44; end: 106c11b87; -[SCLensFriendsFeedContextItemsHelper isStreakWithFriendForFeedItem:] */

undefined8 FUN_106c11a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar6;
  func_0x00010c25bfe0(uVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar6);
  if ((uVar1 == 0) || (uVar6 = uVar1, func_0x00010c25c060(), uVar6 < 3)) {
    uVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf9c720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    uVar3 = uVar2;
    func_0x00010c07fe20();
    _objc_release(uVar6);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c25c060(uVar1);
      uVar5 = uVar4;
      func_0x00010c07fe60(uVar4,param_2,uVar6);
      _objc_release(uVar4);
    }
    else {
      uVar5 = 1;
    }
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 106c11b88; end: 106c11c43; -[SCLensFriendsFeedContextItemsHelper isTimeToAskBestFriendForFeedItem:date:] */

bool FUN_106c11b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000107cfa73c();
  _objc_release(param_3);
  if (((int)uVar2 == 0) || (func_0x00010c072260(param_1,param_2,param_4), (int)param_1 == 0)) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0ecee0();
    _objc_release(puVar3);
    bVar1 = ((ulong)puVar4 & 1) == 0;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 106c11c44; end: 106c11caf; -[SCLensFriendsFeedContextItemsHelper isTimeToInitiateConversationForFeedItem:] */

uint FUN_106c11c44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000107cfa828();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c083d40(lVar1,param_2,2);
    uVar3 = (uint)lVar2 ^ 1;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 106c11cb0; end: 106c11ceb; -[SCLensFriendsFeedContextItemsHelper .cxx_destruct] */

void FUN_106c11cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c11cec; end: 106c11d5f; -[SCLensFriendsFeedContextLogger initWithBlizzardLogger:] */

undefined1 * FUN_106c11cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5c18;
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



/* Entry: 106c11d60; end: 106c11e6b; -[SCLensFriendsFeedContextLogger logLensSuggestion:withPosition:] */

void FUN_106c11d60(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d15f0;
  _objc_opt_new(PTR_PTR_1126d15f0);
  lVar2 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1bbd60(puVar1,param_2,lVar4);
  }
  func_0x00010c1def00(puVar1,param_2,param_4);
  lVar2 = param_3;
  func_0x00010bf9a440(param_3);
  func_0x000106c197a0();
  func_0x00010c197c80(puVar1,param_2,lVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c11e6c; end: 106c11e77; -[SCLensFriendsFeedContextLogger .cxx_destruct] */

void FUN_106c11e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c11e78; end: 106c1239b; -[SCLensFriendsFeedContextServicesProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c11e78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275ae4c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar19;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar19 = param_1;
  FUN_106c1239c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275ae54;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar19;
  func_0x00010c094080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11275ae6c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar19;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010be197c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275ae5c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar20;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275ae64;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar20;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11275ae60;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar20;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  lVar20 = param_1;
  func_0x000106c123c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar20;
  func_0x00010bf6d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106c123e4;
  puStack_a0 = &UNK_110968d20;
  puVar9 = PTR_PTR_1126ae720;
  lStack_98 = lVar2;
  lStack_90 = lVar3;
  lStack_88 = lVar19;
  lStack_80 = lVar8;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11275ae40);
  *(undefined **)(param_1 + _DAT_11275ae40) = puVar9;
  _objc_retain();
  _objc_release(uVar21);
  puStack_e0 = puVar17;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106c12478;
  puStack_c8 = &UNK_110968d50;
  puVar10 = PTR_PTR_1126ae720;
  puStack_c0 = puVar9;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar17;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106c12518;
  puStack_f0 = &UNK_110968d80;
  puVar11 = PTR_PTR_1126ae720;
  lStack_e8 = lVar7;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_108);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_106c12548();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar20;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  lVar20 = param_1;
  FUN_106c12548();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar20;
  func_0x00010c25c0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  lVar20 = param_1 + _DAT_11275ae74;
  _objc_loadWeakRetained();
  lVar14 = lVar20;
  func_0x00010bfb9760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  puVar15 = PTR_PTR_1126d1610;
  _objc_alloc();
  func_0x00010c04e5a0();
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_106c1256c;
  puStack_160 = &UNK_110968db0;
  puVar16 = PTR_PTR_1126ae720;
  lStack_158 = lVar1;
  lStack_150 = lVar2;
  puStack_148 = puVar9;
  lStack_140 = lVar3;
  lStack_138 = lVar4;
  lStack_130 = lVar19;
  lStack_128 = lVar5;
  puStack_120 = puVar10;
  puStack_118 = puVar11;
  puStack_110 = puVar15;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_178);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = puVar17;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_106c12630;
  puStack_188 = &UNK_110968de0;
  puVar17 = PTR_PTR_1126ae720;
  lStack_180 = lVar6;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_1a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beade20(param_1);
  puVar18 = PTR_PTR_1126d1628;
  _objc_alloc(PTR_PTR_1126d1628);
  func_0x00010c008680();
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 106c1239c; end: 106c123e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1239c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ae50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c123e4; end: 106c12477;  */

void FUN_106c123e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126d15f8;
  _objc_alloc(PTR_PTR_1126d15f8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf9a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dc20(puVar4,param_2,uVar1,uVar3,uVar2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c12478; end: 106c12517;  */

void FUN_106c12478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3c049f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0xe);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d1600;
  _objc_alloc(PTR_PTR_1126d1600);
  func_0x00010c0092c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c12518; end: 106c12547;  */

void FUN_106c12518(void)

{
  _objc_alloc(PTR_PTR_1126d1608);
  func_0x00010c004ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c12548; end: 106c1256b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c12548(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275ae70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c1256c; end: 106c1262f;  */

void FUN_106c1256c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3c05ca);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0xb);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d1618;
  _objc_alloc(PTR_PTR_1126d1618);
  func_0x00010c016260();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c12630; end: 106c1265f;  */

void FUN_106c12630(void)

{
  _objc_alloc(PTR_PTR_1126d1620);
  func_0x00010bff8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c12660; end: 106c127db; -[SCLensFriendsFeedContextServicesProvider _friendsFeedContextEventFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c12660(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000106c123c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000106c1239c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar4 = lVar3;
  func_0x00010bf9a400();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11275ae68;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c127e4;
  puStack_60 = &UNK_110968e30;
  puVar7 = PTR_PTR_1126ae720;
  lStack_58 = lVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar6;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c127dc; end: 106c127e3;  */

void FUN_106c127dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serialInitiatedQueuePerformer_1126353e8);
  return;
}



/* Entry: 106c127e4; end: 106c12817;  */

void FUN_106c127e4(void)

{
  _objc_alloc(PTR_PTR_1126d1630);
  func_0x00010c00daa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c12818; end: 106c12863; -[SCLensFriendsFeedContextServicesProvider _setupLocalTweaks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c12818(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ae44);
  *(undefined8 *)(param_1 + _DAT_11275ae44) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106c12864; end: 106c12933; -[SCLensFriendsFeedContextServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c12864(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ae74);
  _objc_destroyWeak(param_1 + _DAT_11275ae70);
  _objc_destroyWeak(param_1 + _DAT_11275ae6c);
  _objc_destroyWeak(param_1 + _DAT_11275ae68);
  _objc_destroyWeak(param_1 + _DAT_11275ae64);
  _objc_destroyWeak(param_1 + _DAT_11275ae60);
  _objc_destroyWeak(param_1 + _DAT_11275ae5c);
  _objc_destroyWeak(param_1 + _DAT_11275ae58);
  _objc_destroyWeak(param_1 + _DAT_11275ae54);
  _objc_destroyWeak(param_1 + _DAT_11275ae50);
  _objc_destroyWeak(param_1 + _DAT_11275ae4c);
  _objc_destroyWeak(param_1 + _DAT_11275ae48);
  _objc_storeStrong(param_1 + _DAT_11275ae40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ae44,0);
  return;
}



/* Entry: 106c12934; end: 106c12a4b;  */

void FUN_106c12934(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15a8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c12a4c; end: 106c12c37;  */

void FUN_106c12a4c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15a8);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_106c16b28(puVar2);
  FUN_106c12c38(auStack_110,param_2);
  func_0x0001004c2e3c(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x0001000e77a0(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000100105004(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000100105004(&puStack_128);
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c12c38; end: 106c12d9b;  */

void FUN_106c12c38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uStack_2b4;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  undefined2 uStack_206;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x0001004c2bb4(param_1);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      _objc_retain(uVar6);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar6;
      func_0x0001004c2d3c(param_1);
      _objc_release(auStack_e0[0]);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar4 != puVar7);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15a8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,param_2);
  }
  puVar5 = &uStack_221;
  FUN_106c16ca0();
  uStack_290 = 0xf;
  uStack_280 = 0x100;
  uStack_268 = (ulong)puVar3 & 0xffffffff;
  ppuStack_298 = &PTR_DAT_110862958;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  plStack_230 = (long *)0x0;
  uStack_206 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_218 = 10;
  uStack_208 = 0x100;
  ppuStack_220 = &PTR_DAT_110881e20;
  lStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  plStack_1b8 = (long *)0x0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b4 = 0;
  puVar4 = &uStack_1b0;
  puStack_1e8 = puVar5;
  pppuStack_1e0 = &ppuStack_298;
  func_0x0001000e77a0(puVar4,&ppuStack_220,&lStack_2b0,&uStack_2b4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar2 = plStack_1b8;
  ppuStack_220 = &PTR_DAT_110881e20;
  plStack_1b8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  plVar2 = plStack_230;
  ppuStack_298 = &PTR_DAT_110862958;
  plStack_230 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c12d9c; end: 106c12fe7;  */

void FUN_106c12d9c(long param_1,ulong param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15a8);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_106c16ca0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = param_2 & 0xffffffff;
  ppuStack_178 = &PTR_DAT_110862958;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110881e20;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110881e20;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110862958;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c12fe8; end: 106c130ff;  */

void FUN_106c12fe8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15b0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c13100; end: 106c132eb;  */

void FUN_106c13100(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15b0);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_106c17ef4(puVar2);
  FUN_106c12c38(auStack_110,param_2);
  func_0x0001004c2e3c(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x0001000e77a0(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000100105004(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000100105004(&puStack_128);
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c132ec; end: 106c13537;  */

void FUN_106c132ec(long param_1,ulong param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15b0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_106c1806c();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = param_2 & 0xffffffff;
  ppuStack_178 = &PTR_DAT_110862958;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110881e20;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110881e20;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110862958;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c13538; end: 106c1361b;  */

void FUN_106c13538(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15e8);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar1 = &uStack_48;
  func_0x000108c7f714(puVar1,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c1361c; end: 106c136ff;  */

void FUN_106c1361c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15b0);
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar1 = &uStack_48;
  func_0x000108c7f714(puVar1,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c13700; end: 106c13983;  */

void FUN_106c13700(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_106c155c8();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c13984; end: 106c13c8f;  */

void FUN_106c13984(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d1;
  undefined **appuStack_1d0 [9];
  undefined1 auStack_188 [24];
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_160,param_1);
  }
  puVar2 = &uStack_1d1;
  FUN_106c155c8(puVar2);
  _objc_retain(param_2);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f0 = 0;
  lVar3 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001004c2bb4(&uStack_1f0,lVar3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        _objc_retain(uVar7);
        uStack_e0 = uVar7;
        func_0x0001004c2d3c(&uStack_1f0,&uStack_e0);
        _objc_release(uStack_e0);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x0001004c2e3c(appuStack_1d0,0xc,puVar2,&uStack_1f0);
  puStack_d8 = (undefined1 *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  uStack_c8 = 0;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  puVar4 = &uStack_160;
  pppuVar6 = appuStack_1d0;
  func_0x0001000e77a0(puVar4,pppuVar6,&puStack_d8,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_168;
  appuStack_1d0[0] = &PTR_SUB_110862700;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_170;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_d8 = auStack_188;
  func_0x000100105004(&puStack_d8);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x0001000e76e0(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  func_0x0001050048c0(appuStack_1d0);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x000104d96620(&uStack_160);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar3);
  func_0x000104bd46a0(lVar3);
  _objc_retain();
  FUN_106c15dcc(pppuVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c13c90; end: 106c13d17;  */

void FUN_106c13c90(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_106c15dcc(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c13d18; end: 106c13e2f;  */

void FUN_106c13d18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c13e30; end: 106c13ebb;  */

void FUN_106c13e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d1638;
  FUN_106c15d58(PTR_PTR_1126d1638,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c13ebc; end: 106c140cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106c13ebc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_x5;
  undefined4 uVar9;
  undefined8 in_x6;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d15d0);
  if (param_3 == (undefined1 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_3);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x00010054c81c(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(puVar1);
  uVar6 = SUB84(auStack_d8,0);
  uVar7 = 0x10;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  uVar9 = (undefined4)in_x6;
  uVar8 = (undefined4)in_x5;
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = *plStack_160;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        puVar3 = PTR_PTR_1126d1638;
        FUN_106c15d58(PTR_PTR_1126d1638,*(undefined8 *)(lStack_168 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar2 != puVar12);
      uVar6 = SUB84(auStack_d8,0);
      uVar7 = 0x10;
      puVar2 = puVar1;
      puVar12 = &uStack_170;
      func_0x00010bf52a60();
      uVar9 = (undefined4)in_x6;
      uVar8 = (undefined4)in_x5;
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  __Unwind_Resume();
  ppuVar5 = &puStack_1e0;
  _objc_retain(puVar12);
  puStack_1d8 = PTR_PTR_1126f5c20;
  puStack_1e0 = puVar4;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar4 = (undefined1 *)puVar12;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae78);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_11275ae78) = puVar4;
    _objc_release(uVar10);
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae7c) = uVar6;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae80) = uVar7;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae84) = uVar8;
    *(ulong *)((long)ppuVar5 + (long)_DAT_11275ae88) =
         CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16,CONCAT12(
                                                  uVar15,CONCAT11(uVar14,uVar13)))))));
    *(undefined8 *)((long)ppuVar5 + (long)_DAT_11275ae8c) = param_2;
    *(undefined4 *)((long)ppuVar5 + (long)_DAT_11275ae90) = uVar9;
  }
  _objc_release(puVar12);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106c140d0; end: 106c141bb; -[SCLensFriendsFeedContextDocEvent initWithEventId:triggeredEventType:priority:impressionsCount:creationTimestamp:ttlInSeconds:randomizedLensIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c140d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f5c20;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae78) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275ae7c) = param_6;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275ae80) = param_7;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275ae84) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae88) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae8c) = param_2;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275ae90) = param_9;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106c141bc; end: 106c141df; -[SCLensFriendsFeedContextDocEvent copyWithZone:] */

undefined8 FUN_106c141bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c141e0; end: 106c142bf; -[SCLensFriendsFeedContextDocEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106c141e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275ae78);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(uint *)(param_1 + _DAT_11275ae7c);
  uStack_50 = (ulong)*(uint *)(param_1 + _DAT_11275ae80);
  uStack_48 = (ulong)*(uint *)(param_1 + _DAT_11275ae84);
  uVar6 = ~*(ulong *)(param_1 + _DAT_11275ae88) + *(ulong *)(param_1 + _DAT_11275ae88) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + _DAT_11275ae8c) + *(ulong *)(param_1 + _DAT_11275ae8c) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11275ae90);
  uStack_60 = uVar3;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106c14408:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c14414;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(int *)((long)puVar4 + (long)_DAT_11275ae7c) == *(int *)(param_3 + _DAT_11275ae7c) &&
          (*(int *)((long)puVar4 + (long)_DAT_11275ae80) == *(int *)(param_3 + _DAT_11275ae80))) &&
         (*(int *)((long)puVar4 + (long)_DAT_11275ae84) == *(int *)(param_3 + _DAT_11275ae84))) &&
        (*(int *)((long)puVar4 + (long)_DAT_11275ae90) == *(int *)(param_3 + _DAT_11275ae90))))) {
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275ae88) -
                  *(double *)(param_3 + _DAT_11275ae88));
      dVar8 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275ae88) +
                  *(double *)(param_3 + _DAT_11275ae88)) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275ae8c) -
                    *(double *)(param_3 + _DAT_11275ae8c));
        dVar8 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275ae8c) +
                    *(double *)(param_3 + _DAT_11275ae8c)) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          puVar7 = *(undefined1 **)((long)puVar4 + (long)_DAT_11275ae78);
          if (puVar7 != *(undefined1 **)(param_3 + _DAT_11275ae78)) {
            func_0x00010c071ae0();
            goto LAB_106c14414;
          }
          goto LAB_106c14408;
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106c14414:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106c142c0; end: 106c1442f; -[SCLensFriendsFeedContextDocEvent isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c142c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c14408:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c14414;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(int *)(param_1 + (long)_DAT_11275ae7c) == *(int *)(param_3 + (long)_DAT_11275ae7c) &&
          (*(int *)(param_1 + (long)_DAT_11275ae80) == *(int *)(param_3 + (long)_DAT_11275ae80))) &&
         (*(int *)(param_1 + (long)_DAT_11275ae84) == *(int *)(param_3 + (long)_DAT_11275ae84))) &&
        (*(int *)(param_1 + (long)_DAT_11275ae90) == *(int *)(param_3 + (long)_DAT_11275ae90))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11275ae88);
      dVar6 = *(double *)(param_3 + (long)_DAT_11275ae88);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11275ae8c);
        dVar6 = *(double *)(param_3 + (long)_DAT_11275ae8c);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11275ae78);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11275ae78)) {
            func_0x00010c071ae0();
            goto LAB_106c14414;
          }
          goto LAB_106c14408;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106c14414:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106c14430; end: 106c1443f; -[SCLensFriendsFeedContextDocEvent eventId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14430(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae78);
}



/* Entry: 106c14440; end: 106c1444f; -[SCLensFriendsFeedContextDocEvent triggeredEventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106c14440(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275ae7c);
}



/* Entry: 106c14450; end: 106c1445f; -[SCLensFriendsFeedContextDocEvent priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106c14450(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275ae80);
}



/* Entry: 106c14460; end: 106c1446f; -[SCLensFriendsFeedContextDocEvent impressionsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106c14460(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275ae84);
}



/* Entry: 106c14470; end: 106c1447f; -[SCLensFriendsFeedContextDocEvent creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14470(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae88);
}



/* Entry: 106c14480; end: 106c1448f; -[SCLensFriendsFeedContextDocEvent ttlInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae8c);
}



/* Entry: 106c14490; end: 106c1449f; -[SCLensFriendsFeedContextDocEvent randomizedLensIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106c14490(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275ae90);
}



/* Entry: 106c144a0; end: 106c144b3; -[SCLensFriendsFeedContextDocEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c144a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ae78,0);
  return;
}



/* Entry: 106c144b4; end: 106c1456f; -[SCLensFriendsFeedContextDocConversation initWithConversationId:events:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c144b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5c28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae94);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae94) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae98);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae98) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c14570; end: 106c14593; -[SCLensFriendsFeedContextDocConversation copyWithZone:] */

undefined8 FUN_106c14570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c14594; end: 106c14617; -[SCLensFriendsFeedContextDocConversation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106c14594(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ae94);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275ae98);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106c146a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c146b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275ae94);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11275ae94)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11275ae98);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11275ae98)) {
          func_0x00010c071ae0();
          goto LAB_106c146b4;
        }
        goto LAB_106c146a8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c146b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c14618; end: 106c146cf; -[SCLensFriendsFeedContextDocConversation isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c14618(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c146a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c146b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11275ae94);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275ae94)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11275ae98);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11275ae98)) {
          func_0x00010c071ae0();
          goto LAB_106c146b4;
        }
        goto LAB_106c146a8;
      }
    }
    lVar3 = 0;
  }
LAB_106c146b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c146d0; end: 106c146df; -[SCLensFriendsFeedContextDocConversation conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c146d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae94);
}



/* Entry: 106c146e0; end: 106c146ef; -[SCLensFriendsFeedContextDocConversation events] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c146e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae98);
}



/* Entry: 106c146f0; end: 106c1472f; -[SCLensFriendsFeedContextDocConversation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c146f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ae98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ae94,0);
  return;
}



/* Entry: 106c14730; end: 106c147db; -[SCLensFriendsFeedContextDocDeltaSyncEvent initWithRecordId:eventType:priority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c14730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f5c30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ae9c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aea0) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aea4) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c147dc; end: 106c147ff; -[SCLensFriendsFeedContextDocDeltaSyncEvent copyWithZone:] */

undefined8 FUN_106c147dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c14800; end: 106c14893; -[SCLensFriendsFeedContextDocDeltaSyncEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106c14800(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ae9c);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + _DAT_11275aea0);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  lVar4 = *(long *)(param_1 + _DAT_11275aea4);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c14940;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + (long)_DAT_11275aea0) != *(long *)(param_3 + _DAT_11275aea0) ||
        (*(long *)((long)puVar2 + (long)_DAT_11275aea4) != *(long *)(param_3 + _DAT_11275aea4))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106c14940;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + (long)_DAT_11275ae9c);
    if (puVar5 != *(undefined1 **)(param_3 + _DAT_11275ae9c)) {
      func_0x00010c071ae0();
      goto LAB_106c14940;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106c14940:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 106c14894; end: 106c1495b; -[SCLensFriendsFeedContextDocDeltaSyncEvent isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c14894(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c14940;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + (long)_DAT_11275aea0) != *(long *)(param_3 + (long)_DAT_11275aea0) ||
        (*(long *)(param_1 + (long)_DAT_11275aea4) != *(long *)(param_3 + (long)_DAT_11275aea4)))))
    {
      lVar3 = 0;
      goto LAB_106c14940;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11275ae9c);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11275ae9c)) {
      func_0x00010c071ae0();
      goto LAB_106c14940;
    }
  }
  lVar3 = 1;
LAB_106c14940:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c1495c; end: 106c1496b; -[SCLensFriendsFeedContextDocDeltaSyncEvent recordId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c1495c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275ae9c);
}



/* Entry: 106c1496c; end: 106c1497b; -[SCLensFriendsFeedContextDocDeltaSyncEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c1496c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aea0);
}



/* Entry: 106c1497c; end: 106c1498b; -[SCLensFriendsFeedContextDocDeltaSyncEvent priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c1497c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aea4);
}



/* Entry: 106c1498c; end: 106c1499f; -[SCLensFriendsFeedContextDocDeltaSyncEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1498c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ae9c,0);
  return;
}



/* Entry: 106c149a0; end: 106c14a9f; -[SCLensFriendsFeedContextDocEventLens initWithRecordId:eventType:lensId:iconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106c149a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f5c38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275aea8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aea8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aeac) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275aeb0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aeb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275aeb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275aeb4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c14aa0; end: 106c14ac3; -[SCLensFriendsFeedContextDocEventLens copyWithZone:] */

undefined8 FUN_106c14aa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c14ac4; end: 106c14b63; -[SCLensFriendsFeedContextDocEventLens hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106c14ac4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275aea8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11275aeac);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275aeb0);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275aeb4);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106c14c2c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c14c38;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11275aeac) ==
        *(long *)((long)param_3 + (long)_DAT_11275aeac))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275aea8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11275aea8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11275aeb0);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11275aeb0)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11275aeb4);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11275aeb4)) {
            func_0x00010c071ae0();
            goto LAB_106c14c38;
          }
          goto LAB_106c14c2c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c14c38:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c14b64; end: 106c14c53; -[SCLensFriendsFeedContextDocEventLens isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c14b64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c14c2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c14c38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11275aeac) == *(long *)(param_3 + (long)_DAT_11275aeac))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11275aea8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275aea8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11275aeb0);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11275aeb0)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11275aeb4);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11275aeb4)) {
            func_0x00010c071ae0();
            goto LAB_106c14c38;
          }
          goto LAB_106c14c2c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c14c38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c14c54; end: 106c14c63; -[SCLensFriendsFeedContextDocEventLens recordId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aea8);
}



/* Entry: 106c14c64; end: 106c14c73; -[SCLensFriendsFeedContextDocEventLens eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aeac);
}



/* Entry: 106c14c74; end: 106c14c83; -[SCLensFriendsFeedContextDocEventLens lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14c74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aeb0);
}



/* Entry: 106c14c84; end: 106c14c93; -[SCLensFriendsFeedContextDocEventLens iconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106c14c84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275aeb4);
}



/* Entry: 106c14c94; end: 106c14ce3; -[SCLensFriendsFeedContextDocEventLens .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c14c94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275aeb4,0);
  _objc_storeStrong(param_1 + _DAT_11275aeb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275aea8,0);
  return;
}



/* Entry: 106c14ce4; end: 106c14cef; +[SCLensFriendsFeedContextDocEvent table] */

undefined * FUN_106c14ce4(void)

{
  return &UNK_10f3c05f3;
}



/* Entry: 106c14cf0; end: 106c14cfb; +[SCLensFriendsFeedContextDocEvent immutableObjectParse:bufferSize:] */

void FUN_106c14cf0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (piVar1 == (int *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_106c1552c;
  }
  puVar10 = PTR_PTR_1126d15e8;
  _objc_alloc(PTR_PTR_1126d15e8);
  lVar8 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar3 < 5) {
    puVar11 = (undefined *)0x0;
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    goto LAB_106c15510;
  }
  uVar9 = (ulong)((ushort *)((long)piVar1 - lVar8))[2];
  if (uVar9 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar9);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar2 + (ulong)*puVar2 + 4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)*piVar1;
    uVar3 = *(ushort *)((long)piVar1 - lVar8);
  }
  uVar13 = 0;
  if (uVar3 < 7) {
    uVar4 = 0;
LAB_106c15508:
    uVar6 = 0;
    uVar5 = 0;
LAB_106c15510:
    uVar13 = 0;
    uVar7 = 0;
    uVar12 = 0;
  }
  else {
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar8));
    if (uVar9 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 9) goto LAB_106c15508;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar8));
    if (uVar9 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 0xb) {
      uVar6 = 0;
      goto LAB_106c15510;
    }
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar8));
    if (uVar9 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 0xd) goto LAB_106c15510;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar8));
    uVar12 = 0;
    if (uVar9 != 0) {
      uVar12 = *(undefined8 *)((long)piVar1 + uVar9);
    }
    if (uVar3 < 0xf) {
LAB_106c155ac:
      uVar7 = 0;
    }
    else {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (0xe - lVar8));
      if (uVar9 != 0) {
        uVar13 = *(undefined8 *)((long)piVar1 + uVar9);
      }
      if ((uVar3 < 0x11) || (uVar9 = (ulong)*(ushort *)((long)piVar1 + (0x10 - lVar8)), uVar9 == 0))
      goto LAB_106c155ac;
      uVar7 = *(undefined4 *)((long)piVar1 + uVar9);
    }
  }
  func_0x00010c010b20(uVar12,uVar13,puVar10,param_2,puVar11,uVar4,uVar5,uVar6,uVar7);
  _objc_release(puVar11);
LAB_106c1552c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106c14cfc; end: 106c14d1f; +[SCLensFriendsFeedContextDocEvent objectClassFunctionPointer] */

undefined1  [16] FUN_106c14cfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106c14d18;
  auVar1._0_8_ = 0x106c14d10;
  return auVar1;
}



/* Entry: 106c14d20; end: 106c14d8b;  */

void FUN_106c14d20(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d15e8;
    _objc_alloc(PTR_PTR_1126d15e8);
    func_0x00010c010b20(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c14d8c; end: 106c14d97; -[SCLensFriendsFeedContextDocEventChangeRequest .cxx_destruct] */

void FUN_106c14d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 106c14d98; end: 106c14da3; -[SCLensFriendsFeedContextDocEventChangeRequest table] */

undefined * FUN_106c14d98(void)

{
  return &UNK_10f3c05f3;
}



/* Entry: 106c14da4; end: 106c14deb; -[SCLensFriendsFeedContextDocEventChangeRequest createTableWithSQLite:] */

void FUN_106c14da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde7cd8,0x93,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106c14dec; end: 106c15173; -[SCLensFriendsFeedContextDocEventChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106c14dec(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106c14d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c15174(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3c0656);
    if (lVar6 == 0) goto LAB_106c15110;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106c15110;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d15e8);
    func_0x00010c21c9a0(puVar7);
LAB_106c150f8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3c0617);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d15e8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106c1511c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106c1511c;
    }
    FUN_106c14d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106c15174(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3c06a3);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d15e8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106c150f8;
      }
    }
LAB_106c15110:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106c1511c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c15174; end: 106c1540f;  */

long FUN_106c15174(undefined8 param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uStack_74;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010bf99f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uStack_74 = 0;
    goto LAB_106c15280;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    lVar9 = param_2;
    func_0x0001001cde08(param_2,pcVar5,pcVar6);
    uStack_74 = (undefined4)lVar9;
    goto LAB_106c15280;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_106c15240;
    uStack_74 = 0;
  }
  else {
LAB_106c15240:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    lVar9 = param_2;
    func_0x0001001cde08(param_2,pcVar6,pcVar8);
    uStack_74 = (undefined4)lVar9;
  }
  _objc_release(pcVar5);
LAB_106c15280:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010c27c3e0(param_3);
  pcVar6 = param_3;
  func_0x00010c113c80(param_3);
  pcVar7 = param_3;
  func_0x00010bfeac00(param_3);
  func_0x00010bf5ab40(param_3);
  uVar10 = param_1;
  func_0x00010c27d180(param_3);
  pcVar8 = param_3;
  func_0x00010c11f280(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar10,0,param_2,0xe);
  func_0x0001001ce11c(param_1,0,param_2,0xc);
  func_0x0001001ce354(param_2,0x10,pcVar8,0);
  func_0x0001001ce354(param_2,10,pcVar7,0);
  func_0x0001001ce354(param_2,8,pcVar6,0);
  func_0x0001001ce354(param_2,6,pcVar5,0);
  func_0x0001001ce2e4(param_2,4,uStack_74);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106c15410; end: 106c155c7;  */

void FUN_106c15410(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_106c1552c;
  }
  puVar9 = PTR_PTR_1126d15e8;
  _objc_alloc(PTR_PTR_1126d15e8);
  lVar7 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar7);
  if (uVar2 < 5) {
    puVar10 = (undefined *)0x0;
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_106c15510;
  }
  uVar8 = (ulong)((ushort *)((long)param_1 - lVar7))[2];
  if (uVar8 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar8);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)*param_1;
    uVar2 = *(ushort *)((long)param_1 - lVar7);
  }
  uVar12 = 0;
  if (uVar2 < 7) {
    uVar3 = 0;
LAB_106c15508:
    uVar5 = 0;
    uVar4 = 0;
LAB_106c15510:
    uVar12 = 0;
    uVar6 = 0;
    uVar11 = 0;
  }
  else {
    uVar8 = (ulong)*(ushort *)((long)param_1 + (6 - lVar7));
    if (uVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((long)param_1 + uVar8);
    }
    if (uVar2 < 9) goto LAB_106c15508;
    uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - lVar7));
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)param_1 + uVar8);
    }
    if (uVar2 < 0xb) {
      uVar5 = 0;
      goto LAB_106c15510;
    }
    uVar8 = (ulong)*(ushort *)((long)param_1 + (10 - lVar7));
    if (uVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)((long)param_1 + uVar8);
    }
    if (uVar2 < 0xd) goto LAB_106c15510;
    uVar8 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar7));
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = *(undefined8 *)((long)param_1 + uVar8);
    }
    if (uVar2 < 0xf) {
LAB_106c155ac:
      uVar6 = 0;
    }
    else {
      uVar8 = (ulong)*(ushort *)((long)param_1 + (0xe - lVar7));
      if (uVar8 != 0) {
        uVar12 = *(undefined8 *)((long)param_1 + uVar8);
      }
      if ((uVar2 < 0x11) || (uVar8 = (ulong)*(ushort *)((long)param_1 + (0x10 - lVar7)), uVar8 == 0)
         ) goto LAB_106c155ac;
      uVar6 = *(undefined4 *)((long)param_1 + uVar8);
    }
  }
  func_0x00010c010b20(uVar11,uVar12,puVar9,param_2,puVar10,uVar3,uVar4,uVar5,uVar6);
  _objc_release(puVar10);
LAB_106c1552c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c155c8; end: 106c1562b;  */

undefined ** FUN_106c155c8(void)

{
  int iVar1;
  
  if ((bRam000000011381e618 & 1) == 0) {
    iVar1 = 0x1381e618;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113178640,0x100000000);
      ___cxa_guard_release(0x11381e618);
    }
  }
  return &PTR_PTR_113178640;
}



/* Entry: 106c1562c; end: 106c156b3;  */

void FUN_106c1562c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c156b4; end: 106c1573f;  */

void FUN_106c156b4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c15740; end: 106c1574b; +[SCLensFriendsFeedContextDocConversation table] */

undefined * FUN_106c15740(void)

{
  return &UNK_10f3c06fa;
}



/* Entry: 106c1574c; end: 106c1590f; +[SCLensFriendsFeedContextDocConversation immutableObjectParse:bufferSize:] */

void FUN_106c1574c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d15d0;
  _objc_alloc(PTR_PTR_1126d15d0);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar10 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar10 + (ulong)*puVar10 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          lVar6 = (long)puVar10 + (ulong)*puVar10;
          FUN_106c15410(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5,param_2,lVar6);
          _objc_release(lVar6);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2 + 1 + *puVar2);
      }
      puVar9 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
      goto LAB_106c1588c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_106c1588c:
  func_0x00010c004ee0(puVar4,param_2,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


