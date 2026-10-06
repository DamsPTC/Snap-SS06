/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bd42c4; end: 105bd42f3; -[SCFriendsFeedMoreUnreadScope setCountObservable:] */

void FUN_105bd42c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105bd42f4; end: 105bd42fb; -[SCFriendsFeedMoreUnreadScope unreadButtonShouldMatchNewChat] */

undefined1 FUN_105bd42f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bd42fc; end: 105bd4303; -[SCFriendsFeedMoreUnreadScope setUnreadButtonShouldMatchNewChat:] */

void FUN_105bd42fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105bd4304; end: 105bd433b; -[SCFriendsFeedMoreUnreadScope .cxx_destruct] */

void FUN_105bd4304(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105bd433c; end: 105bd456f; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource initWithSnapchattersDataTracker:snapchattersDataMutator:additionalActionHandlersMap:imageDownloader:preferences:uiContainer:delegate:tableView:circumstanceEngine:recentlyActiveRecordRepository:quickAddLogger:] */

undefined8 *
FUN_105bd433c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_1126ec308;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b16b0;
    _objc_alloc();
    func_0x00010c049c40();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 105bd4570; end: 105bd4577; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource snapchattersCount] */

void FUN_105bd4570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd4578; end: 105bd4593; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource canShowSection] */

bool FUN_105bd4578(long param_1)

{
  func_0x00010c244a60();
  return 0 < param_1;
}



/* Entry: 105bd4594; end: 105bd45cb; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource logSeenIncomingFriends] */

void FUN_105bd4594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bd45cc; end: 105bd462b; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _lastViewedTimestamp] */

undefined8 FUN_105bd45cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010befcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105bd462c; end: 105bd4687; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource setLastViewedTimestamp:] */

void FUN_105bd462c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165860();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bd4688; end: 105bd46eb; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource setViewAppeared:] */

void FUN_105bd4688(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x78) != param_3) &&
     (*(char *)(param_1 + 0x78) = (char)param_3, (param_3 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1b9060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bd46ec; end: 105bd49bf; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105bd46ec(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((((param_1[0x30] & 1) == 0) && (puVar1 = param_1, func_0x00010c244a60(), 3 < (long)puVar1)) &&
     (puVar1 = param_4, func_0x00010c142240(), puVar1 == (undefined *)0x3)) {
LAB_105bd479c:
    func_0x00010bee9c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
  }
  else {
    if ((param_1[0x30] == '\x01') && (puVar1 = param_1, func_0x00010c244a60(), 3 < (long)puVar1)) {
      puVar1 = param_4;
      func_0x00010c142240();
      puVar2 = param_1;
      func_0x00010c244a60();
      if (puVar1 == puVar2) goto LAB_105bd479c;
    }
    puVar1 = param_3;
    func_0x00010bf6e060();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126c2c68;
      _objc_opt_new(PTR_PTR_1126c2c68);
      func_0x00010c160fc0();
    }
    func_0x00010c1aa200(puVar1);
    puVar2 = param_1;
    func_0x00010bebd5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb700();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c2923e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfeb7a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    _objc_release(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    puVar5 = puVar2;
    func_0x00010c2923e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    _objc_release(puVar5);
    uVar7 = 0x16;
    func_0x00010bc9107c(0x16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267f60();
    puVar5 = puVar2;
    func_0x0001079eb02c(0,puVar2,2,param_4,&PTR____CFConstantStringClassReference_110ea8ff8,
                        lVar6 != 0,0,8,uVar7,0x2a,param_1,(char)uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(puVar1);
    _objc_release(puVar5);
    _objc_release(uVar7);
    func_0x00010c161980(puVar1);
    func_0x00010c161020(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bd49c0; end: 105bd4c3b; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _viewMoreButtonForType:tableView:] */

void FUN_105bd49c0(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20c18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  if (param_3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20c38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20c38,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  puVar3 = param_4;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c2ed8;
    _objc_opt_new(PTR_PTR_1126c2ed8);
  }
  func_0x00010c160fc0(puVar3);
  func_0x00010c18b5e0(puVar3);
  puVar4 = PTR_PTR_1126c2ee0;
  _objc_alloc(PTR_PTR_1126c2ee0);
  func_0x00010bee9be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000107cf426c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x7fefffffffffffff,0x4042800000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021500(0,0x4024000000000000,0x4024000000000000,0x4024000000000000,puVar4);
  func_0x00010c2226c0(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = puVar3;
  func_0x00010bf4dce0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4dce0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bd4c3c; end: 105bd4d7f; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _viewMoreAttributedStringForText:] */

undefined * FUN_105bd4c3c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = (undefined *)0xc6;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = puVar3;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c04e840(puVar6,param_2,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    cVar1 = param_3[0x30];
    puVar2 = param_3;
    func_0x00010c244a60();
    if (cVar1 == '\x01') {
      func_0x00010c244a60(param_3);
      if (3 < (long)puVar2) {
        param_3 = param_3 + 1;
      }
    }
    else if ((long)puVar2 < 4) {
      func_0x00010c244a60(param_3);
    }
    else {
      param_3 = (undefined *)0x4;
    }
    _objc_release(puVar5);
    return param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 105bd4d80; end: 105bd4e03; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource tableView:numberOfRowsInSection:] */

long FUN_105bd4d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  _objc_retain(param_3);
  cVar1 = *(char *)(param_1 + 0x30);
  lVar2 = param_1;
  func_0x00010c244a60();
  if (cVar1 == '\x01') {
    func_0x00010c244a60(param_1);
    if (3 < lVar2) {
      param_1 = param_1 + 1;
    }
  }
  else if (lVar2 < 4) {
    func_0x00010c244a60(param_1);
  }
  else {
    param_1 = 4;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105bd4e04; end: 105bd4ec7; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105bd4e04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  cVar2 = *(char *)(param_1 + 0x30);
  lVar4 = param_1;
  func_0x00010c244a60();
  if (cVar2 == '\x01') {
    if (lVar4 < 4) {
LAB_105bd4e98:
      uVar5 = 0x4052800000000000;
      goto LAB_105bd4ea0;
    }
    lVar4 = param_4;
    func_0x00010c142240();
    func_0x00010c244a60();
    bVar3 = SBORROW8(lVar4,param_1);
    lVar4 = lVar4 - param_1;
  }
  else {
    if (lVar4 < 4) goto LAB_105bd4e98;
    lVar4 = param_4;
    func_0x00010c142240();
    bVar3 = SBORROW8(lVar4,3);
    lVar4 = lVar4 + -3;
  }
  lVar1 = 8;
  if (lVar4 < 0 == bVar3) {
    lVar1 = 0;
  }
  uVar5 = *(undefined8 *)(&UNK_10ddcab40 + lVar1);
LAB_105bd4ea0:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105bd4ec8; end: 105bd4f9b; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource setSnapchatters:] */

bool FUN_105bd4ec8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010be472a0(param_2);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_105bd4f9c;
  puStack_50 = &UNK_1108c97e8;
  uVar2 = param_4;
  uStack_48 = param_1;
  func_0x0001006372a4(param_4,&puStack_68);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bec8280(param_2);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar4);
  return lVar4 != lVar1;
}



/* Entry: 105bd4f9c; end: 105bd502b;  */

bool FUN_105bd4f9c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef89e0();
    bVar3 = *(double *)(param_2 + 0x20) < param_1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 105bd502c; end: 105bd50af; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _snapchatterAtIndexPath:] */

void FUN_105bd502c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c142240();
  if (uVar2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bd50b0; end: 105bd5217; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _reloadSectionForSnapchatter:] */

void FUN_105bd50b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(uVar2);
        if ((int)uVar4 != 0) {
          func_0x00010be8ab60(param_1);
          goto LAB_105bd51cc;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_105bd51cc:
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_3 + 0x40;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar7 <= lVar6) {
    return;
  }
  puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  func_0x00010c01d720();
  func_0x00010be8a6c0(param_3,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105bd5218; end: 105bd52bf; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _reloadSection] */

void FUN_105bd5218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar2 < lVar3) {
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    func_0x00010c01d720();
    func_0x00010be8a6c0(param_1,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105bd52c0; end: 105bd530b; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _reloadAppropriateSection:] */

void FUN_105bd52c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c128fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd530c; end: 105bd5473; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _subscribeToRecentlyActiveRecords:] */

void FUN_105bd530c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfebfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105bd5474; end: 105bd54bb;  */

void FUN_105bd5474(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd54bc; end: 105bd565f; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource _updateRecentlyActiveRecords:] */

void FUN_105bd54bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___NSConcreteGlobalBlock_1108db618;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108db618,
                      &PTR___NSConcreteGlobalBlock_1108db658);
  lVar9 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar9);
  lVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_105bd560c:
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7,PTR_s_userId_112682320);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = lVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar4 != lVar5) {
        _objc_retain(param_3);
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = param_3;
        _objc_release(uVar6);
        func_0x00010be8ab60(param_1);
        goto LAB_105bd560c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105bd5660; end: 105bd5667;  */

void FUN_105bd5660(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105bd5668; end: 105bd5697;  */

void FUN_105bd5668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07be00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105bd5698; end: 105bd56a7; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource viewMoreCellDidTapped:] */

void FUN_105bd5698(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 105bd56a8; end: 105bd56af; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource viewAppeared] */

undefined1 FUN_105bd56a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 105bd56b0; end: 105bd575b; -[SCFriendsFeedNewUserAddedMeSnapchatterDataSource .cxx_destruct] */

void FUN_105bd56b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd575c; end: 105bd5cdb; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource initWithUIContainer:delegate:tableView:inviteFriendStateTracker:userTrackedLogger:inviteContactSectionLogger:inviteFriendDeepLinkCoordinator:externalLinkSendingService:contactsInviter:shortLinkEncodingService:featureSettingsService:enableTwilioInvites:username:circumstanceEngine:avatarFactory:] */

undefined8 *
FUN_105bd575c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_80 = PTR_PTR_1126ec310;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[3];
    puVar1[3] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bb6a8;
    _objc_alloc();
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    uVar6 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c038de0();
    uVar8 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = 0;
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06aac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105bd5cdc;
    puStack_a0 = &UNK_11086a720;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06aba0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 105bd5cdc; end: 105bd5d6b;  */

void FUN_105bd5cdc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee48e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd5d6c; end: 105bd5dab; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource _updateWithInvitedNumbers:] */

void FUN_105bd5d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  func_0x00010be88a00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 105bd5dac; end: 105bd5deb; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource _updateWithInvitingNumbers:] */

void FUN_105bd5dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  func_0x00010be88a00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 105bd5dec; end: 105bd5e5b; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource _refreshSnapchatters] */

void FUN_105bd5dec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105bd5e5c;
  puStack_30 = &UNK_1108db678;
  lStack_28 = param_1;
  func_0x000100504554(uVar1,&puStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 105bd5e5c; end: 105bd5f1f;  */

void FUN_105bd5e5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2ee8;
  _objc_alloc(PTR_PTR_1126c2ee8);
  func_0x00010c048f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bd5f20; end: 105bd6097; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105bd5f20(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126c2c68;
    _objc_opt_new(PTR_PTR_1126c2c68);
    func_0x00010c160fc0();
  }
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf529e0();
  uVar2 = param_4;
  func_0x00010c142240();
  if (uVar2 < uVar1) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c075cc0();
    uVar5 = uVar8;
    func_0x00010c076be0();
    func_0x00010c16d9c0(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf529e0(uVar6);
    uVar7 = uVar3;
    func_0x0001079eb8bc(uVar3,uVar4,uVar5,param_4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(param_3);
    _objc_release(uVar7);
    func_0x00010c161980(param_3);
    func_0x00010c161020(param_3);
    _objc_release(uVar3);
    _objc_release(uVar8);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105bd6098; end: 105bd609f; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource tableView:numberOfRowsInSection:] */

void FUN_105bd6098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd60a0; end: 105bd60bf; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource canShowSection] */

bool FUN_105bd60a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 105bd60c0; end: 105bd60c7; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource setSnapchatters:] */

undefined8 FUN_105bd60c0(void)

{
  return 0;
}



/* Entry: 105bd60c8; end: 105bd6147; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource setNonSnapchatters:] */

bool FUN_105bd60c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0(lVar1);
  func_0x00010be88a00(param_1);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0(lVar2);
  _objc_release(param_3);
  return lVar2 != lVar1;
}



/* Entry: 105bd6148; end: 105bd614f; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource snapchattersCount] */

void FUN_105bd6148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd6150; end: 105bd6217; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource _reloadSection] */

void FUN_105bd6150(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c1560a0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c0df2e0();
    _objc_release(lVar1);
    if (lVar2 < lVar3) {
      puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      func_0x00010c01d720();
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c128fc0();
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 105bd6218; end: 105bd621f; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource viewAppeared] */

undefined1 FUN_105bd6218(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 105bd6220; end: 105bd6227; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource setViewAppeared:] */

void FUN_105bd6220(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 105bd6228; end: 105bd62d3; -[SCFriendsFeedNewUserContactNonSnapchatterDataSource .cxx_destruct] */

void FUN_105bd6228(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105bd62d4; end: 105bd6483; -[SCFriendsFeedNewUserContactSnapchatterDataSource initWithSnapchattersDataTracker:snapchattersDataMutator:additionalActionHandlersMap:imageDownloader:preferences:uiContainer:delegate:tableView:circumstanceEngine:] */

undefined1 *
FUN_105bd62d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ec318;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b16b0;
    _objc_alloc();
    func_0x00010c049c40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_10);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bd6484; end: 105bd648b; -[SCFriendsFeedNewUserContactSnapchatterDataSource snapchattersCount] */

void FUN_105bd6484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd648c; end: 105bd64ab; -[SCFriendsFeedNewUserContactSnapchatterDataSource canShowSection] */

bool FUN_105bd648c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 105bd64ac; end: 105bd650b; -[SCFriendsFeedNewUserContactSnapchatterDataSource _lastViewedTimestamp] */

undefined8 FUN_105bd64ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105bd650c; end: 105bd6567; -[SCFriendsFeedNewUserContactSnapchatterDataSource setLastViewedTimestamp:] */

void FUN_105bd650c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181580();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bd6568; end: 105bd65cb; -[SCFriendsFeedNewUserContactSnapchatterDataSource setViewAppeared:] */

void FUN_105bd6568(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x48) != param_3) &&
     (*(char *)(param_1 + 0x48) = (char)param_3, (param_3 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1b9060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bd65cc; end: 105bd67ab; -[SCFriendsFeedNewUserContactSnapchatterDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105bd65cc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c2c68;
    _objc_opt_new(PTR_PTR_1126c2c68);
    func_0x00010c160fc0();
  }
  func_0x00010c1aa200(puVar1);
  lVar2 = param_1;
  func_0x00010bebd5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2923e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfeb7a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = 0x16;
  func_0x00010bc9107c(0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f60();
  _objc_release(param_3);
  lVar4 = lVar2;
  func_0x0001079eb02c(0,lVar2,2,param_4,&PTR____CFConstantStringClassReference_110ea9038,lVar5 != 0,
                      0,8,uVar6,0x2a,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2226c0(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar6);
  func_0x00010c161980(puVar1);
  func_0x00010c161020(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bd67ac; end: 105bd67b3; -[SCFriendsFeedNewUserContactSnapchatterDataSource tableView:numberOfRowsInSection:] */

void FUN_105bd67ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd67b4; end: 105bd67bf; -[SCFriendsFeedNewUserContactSnapchatterDataSource tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105bd67b4(void)

{
  return 0x4052800000000000;
}



/* Entry: 105bd67c0; end: 105bd687b; -[SCFriendsFeedNewUserContactSnapchatterDataSource setSnapchatters:] */

bool FUN_105bd67c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010be472a0(param_2);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_105bd687c;
  puStack_50 = &UNK_1108c97e8;
  uVar2 = param_4;
  uStack_48 = param_1;
  func_0x0001006372a4(param_4,&puStack_68);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar4);
  return lVar4 != lVar1;
}



/* Entry: 105bd687c; end: 105bd690b;  */

bool FUN_105bd687c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bfb8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef89e0();
    bVar3 = *(double *)(param_2 + 0x20) < param_1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 105bd690c; end: 105bd698f; -[SCFriendsFeedNewUserContactSnapchatterDataSource _snapchatterAtIndexPath:] */

void FUN_105bd690c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c142240();
  if (uVar2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bd6990; end: 105bd6af7; -[SCFriendsFeedNewUserContactSnapchatterDataSource _reloadSectionForSnapchatter:] */

void FUN_105bd6990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(uVar2);
        if ((int)uVar4 != 0) {
          func_0x00010be8ab60(param_1);
          goto LAB_105bd6aac;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_105bd6aac:
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar7 <= lVar6) {
    return;
  }
  puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  func_0x00010c01d720();
  func_0x00010be8a6c0(param_3,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105bd6af8; end: 105bd6b9f; -[SCFriendsFeedNewUserContactSnapchatterDataSource _reloadSection] */

void FUN_105bd6af8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar2 < lVar3) {
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    func_0x00010c01d720();
    func_0x00010be8a6c0(param_1,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105bd6ba0; end: 105bd6beb; -[SCFriendsFeedNewUserContactSnapchatterDataSource _reloadAppropriateSection:] */

void FUN_105bd6ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c128fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd6bec; end: 105bd6bf3; -[SCFriendsFeedNewUserContactSnapchatterDataSource viewAppeared] */

undefined1 FUN_105bd6bec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 105bd6bf4; end: 105bd6c63; -[SCFriendsFeedNewUserContactSnapchatterDataSource .cxx_destruct] */

void FUN_105bd6bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bd6c64; end: 105bd6f63; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource initWithSnapchattersDataTracker:snapchattersDataMutator:friendsFeedFeedIdsObservable:chatEligibilityProvider:additionalActionHandlersMap:imageDownloader:quickAddLogger:preferences:uiContainer:delegate:tableView:circumstanceEngine:recentlyActiveRecordRepository:] */

undefined8 *
FUN_105bd6c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126ec320;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b16b0;
    _objc_alloc();
    func_0x00010c049c40();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_12);
    _objc_storeWeak(puVar1 + 8,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06fd80();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      _objc_retain(param_5);
      uVar2 = puVar1[10];
      puVar1[10] = param_5;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[9];
      puVar1[9] = puVar3;
      _objc_release(uVar2);
      func_0x00010bec78c0(puVar1);
    }
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
  }
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



/* Entry: 105bd6f64; end: 105bd6f6b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource snapchattersCount] */

void FUN_105bd6f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd6f6c; end: 105bd6f8b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource canShowSection] */

bool FUN_105bd6f6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 105bd6f8c; end: 105bd6fc3; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource logSeenSuggestions] */

void FUN_105bd6f8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bd6fc4; end: 105bd7023; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _lastViewedTimestamp] */

undefined8 FUN_105bd6fc4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105bd7024; end: 105bd707f; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource setLastViewedTimestamp:] */

void FUN_105bd7024(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6900();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bd7080; end: 105bd70e3; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource setViewAppeared:] */

void FUN_105bd7080(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x80) != param_3) &&
     (*(char *)(param_1 + 0x80) = (char)param_3, (param_3 & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1b9060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105bd70e4; end: 105bd736f; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105bd70e4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c2c68;
    _objc_opt_new(PTR_PTR_1126c2c68);
    func_0x00010c160fc0();
  }
  func_0x00010c1aa200(puVar1);
  lVar2 = param_1;
  func_0x00010bebd5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c142240(param_4);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbbc0(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c2923e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bfeb7a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  lVar6 = lVar2;
  func_0x00010c2923e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf1f3c0();
  _objc_release(uVar8);
  _objc_release(lVar6);
  uVar8 = 0x16;
  func_0x00010bc9107c(0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f60();
  _objc_release(param_3);
  lVar6 = lVar2;
  func_0x0001079eb02c(0,lVar2,2,param_4,&PTR____CFConstantStringClassReference_110ea9018,lVar7 != 0,
                      0,8,uVar8,0x2a,param_1,(char)uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c2226c0(puVar1);
  _objc_release(lVar6);
  _objc_release(uVar8);
  func_0x00010c161980(puVar1);
  func_0x00010c161020(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bd7370; end: 105bd7377; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource tableView:numberOfRowsInSection:] */

void FUN_105bd7370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bd7378; end: 105bd7383; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105bd7378(void)

{
  return 0x4052800000000000;
}



/* Entry: 105bd7384; end: 105bd745b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource setSnapchatters:] */

bool FUN_105bd7384(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010be472a0(param_2);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bd745c;
  puStack_58 = &UNK_1108db6a8;
  uVar2 = param_4;
  lStack_50 = param_2;
  uStack_48 = param_1;
  func_0x0001006372a4(param_4,&puStack_70);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010bec8280(param_2);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x00010bf529e0(lVar4);
  return lVar4 != lVar1;
}



/* Entry: 105bd745c; end: 105bd752f;  */

bool FUN_105bd745c(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x48);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if ((uVar5 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar4 = true;
    }
    else {
      lVar3 = param_3;
      func_0x00010bfb8280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef89e0();
      bVar4 = *(double *)(param_2 + 0x28) < param_1;
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  else {
    bVar4 = false;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 105bd7530; end: 105bd75b3; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _snapchatterAtIndexPath:] */

void FUN_105bd7530(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c142240();
  if (uVar2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bd75b4; end: 105bd771b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _reloadSectionForSnapchatter:] */

void FUN_105bd75b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(uVar2);
        if ((int)uVar4 != 0) {
          func_0x00010be8ab60(param_1);
          goto LAB_105bd76d0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_105bd76d0:
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_3 + 0x40;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar7 <= lVar6) {
    return;
  }
  puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  func_0x00010c01d720();
  func_0x00010be8a6c0(param_3,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105bd771c; end: 105bd77c3; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _reloadSection] */

void FUN_105bd771c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1560a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0df2e0();
  _objc_release(lVar1);
  if (lVar2 < lVar3) {
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_alloc(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    func_0x00010c01d720();
    func_0x00010be8a6c0(param_1,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105bd77c4; end: 105bd780f; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _reloadAppropriateSection:] */

void FUN_105bd77c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c128fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd7810; end: 105bd7923; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _subscribeToFriendsFeedFeedIds] */

void FUN_105bd7810(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105bd7924; end: 105bd796b;  */

void FUN_105bd7924(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd796c; end: 105bd7a7b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _updateFeedIdsSet:] */

void FUN_105bd796c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100817178(uVar1,&PTR___NSConcreteGlobalBlock_1108db6d8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105bd7a84;
  puStack_50 = &UNK_11085a548;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001006372a4(uVar5,&puStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar4);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 == lVar3) {
    func_0x000100817178(*(undefined8 *)(param_1 + 0x10),&PTR___NSConcreteGlobalBlock_1108db6f8);
    _objc_release();
  }
  else {
    func_0x00010be8ab60(param_1);
  }
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bd7a7c; end: 105bd7a83;  */

void FUN_105bd7a7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105bd7a84; end: 105bd7acf;  */

uint FUN_105bd7a84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105bd7ad0; end: 105bd7ad7;  */

void FUN_105bd7ad0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105bd7ad8; end: 105bd7c3f; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _subscribeToRecentlyActiveRecords:] */

void FUN_105bd7ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c261f40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105bd7c40; end: 105bd7c87;  */

void FUN_105bd7c40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bd7c88; end: 105bd7e2b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource _updateRecentlyActiveRecords:] */

void FUN_105bd7c88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR___NSConcreteGlobalBlock_1108db718;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108db718,
                      &PTR___NSConcreteGlobalBlock_1108db738);
  lVar9 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar9);
  lVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_105bd7dd8:
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7,PTR_s_userId_112682320);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = lVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar4 != lVar5) {
        _objc_retain(param_3);
        uVar6 = *(undefined8 *)(param_1 + 0x70);
        *(long *)(param_1 + 0x70) = param_3;
        _objc_release(uVar6);
        func_0x00010be8ab60(param_1);
        goto LAB_105bd7dd8;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105bd7e2c; end: 105bd7e33;  */

void FUN_105bd7e2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105bd7e34; end: 105bd7e63;  */

void FUN_105bd7e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07be00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105bd7e64; end: 105bd7e6b; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource viewAppeared] */

undefined1 FUN_105bd7e64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 105bd7e6c; end: 105bd7f2f; -[SCFriendsFeedNewUserQuickAddSnapchatterDataSource .cxx_destruct] */

void FUN_105bd7e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105bd7f30; end: 105bd7f93; -[SCPreferences addedMeLastViewedTimestamp] */

void FUN_105bd7f30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e20d18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bd7f94; end: 105bd7f9f; -[SCPreferences setAddedMeLastViewedTimestamp:] */

void FUN_105bd7f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e20d18);
  return;
}



/* Entry: 105bd7fa0; end: 105bd8003; -[SCPreferences contactSnapchatterLastViewedTimestamp] */

void FUN_105bd7fa0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e20d38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bd8004; end: 105bd800f; -[SCPreferences setContactSnapchatterLastViewedTimestamp:] */

void FUN_105bd8004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e20d38);
  return;
}



/* Entry: 105bd8010; end: 105bd8073; -[SCPreferences quickAddLastViewedTimestamp] */

void FUN_105bd8010(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e20d58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bd8074; end: 105bd807f; -[SCPreferences setQuickAddLastViewedTimestamp:] */

void FUN_105bd8074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110e20d58);
  return;
}



/* Entry: 105bd8080; end: 105bd8257;  */

ulong FUN_105bd8080(uint param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                   ulong param_6,uint param_7,uint param_8,byte param_9)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_6);
  func_0x00010bf2d7a0();
  uVar1 = (uint)param_9 | param_8 & param_1 ^ 1;
  if (((uVar1 & 1) == 0) && (param_7 != 0)) {
    uVar5 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d42e0();
    _objc_release(uVar5);
    if (uVar6 < 7) {
      _objc_release();
    }
    else {
      uVar5 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf5ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0789e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(param_6);
      if ((uVar3 & 1) == 0) goto LAB_105bd81bc;
    }
LAB_105bd8154:
    if (param_7 == 0) {
      uVar5 = 2;
      goto LAB_105bd8210;
    }
    uVar4 = param_2;
    func_0x00010bf2d7a0();
    iVar2 = (int)uVar4;
    uVar5 = 0;
    uVar6 = 2;
  }
  else {
    _objc_release(param_6);
    if ((param_1 & uVar1 & 1) != 0) goto LAB_105bd8154;
LAB_105bd81bc:
    if ((param_7 & 1) == 0) {
      uVar5 = 0;
      goto LAB_105bd8210;
    }
    uVar4 = param_2;
    func_0x00010bf2d7a0();
    iVar2 = (int)uVar4;
    uVar5 = param_3;
    func_0x00010bf2d7a0();
    uVar6 = 0;
  }
  uVar4 = param_4;
  func_0x00010bf2d7a0();
  uVar3 = uVar6 | 4;
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar6 = uVar3 | 8;
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar3;
  }
  uVar5 = uVar6 | 0x10;
  if ((int)uVar4 == 0) {
    uVar5 = uVar6;
  }
LAB_105bd8210:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105bd8258; end: 105bd835b; -[SCAddFriendsTableViewMoreCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105bd8258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126c2ef0;
    _objc_opt_new();
    lVar5 = (long)_DAT_112731b14;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}


