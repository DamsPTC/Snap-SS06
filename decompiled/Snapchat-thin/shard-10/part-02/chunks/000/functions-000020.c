/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079fb574; end: 1079fb5ef; -[SCComposerPeopleBridgeUserInfoServiceProvider _makeCurrentUserStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5cf0;
  _objc_alloc(PTR_PTR_1126d5cf0);
  param_1 = param_1 + _DAT_112767be8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ce40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079fb5f0; end: 1079fb66f; -[SCComposerPeopleBridgeUserInfoServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079fb5f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112767bf0);
  _objc_destroyWeak(param_1 + _DAT_112767bec);
  _objc_destroyWeak(param_1 + _DAT_112767be4);
  _objc_destroyWeak(param_1 + _DAT_112767bd8);
  _objc_destroyWeak(param_1 + _DAT_112767be0);
  _objc_destroyWeak(param_1 + _DAT_112767bdc);
  _objc_destroyWeak(param_1 + _DAT_112767bd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767be8);
  return;
}



/* Entry: 1079fb670; end: 1079fb6db; -[SCComposerPeopleCurrentUserStore initWithUserSession:] */

undefined1 * FUN_1079fb670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f93f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fb6dc; end: 1079fb77f; -[SCComposerPeopleCurrentUserStore getCurrentUserWithCallback:] */

void FUN_1079fb6dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5d40;
  _objc_alloc(PTR_PTR_1126d5d40);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00(puVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079fb780; end: 1079fb78b; -[SCComposerPeopleCurrentUserStore pushToValdiMarshaller:] */

void FUN_1079fb780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1079fb78c; end: 1079fb793; -[SCComposerPeopleCurrentUserStore .cxx_destruct] */

void FUN_1079fb78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1079fb794; end: 1079fba3f; -[SCComposerPeopleUserInfoProvider initWithBirthdayProvider:lastKnownIPCountryCodeProvider:bitmojiAvatarProvider:bitmojiSelfieProvider:bitmojiFlatlandInfoProvider:locationProvider:displayNameProvider:userNameProvider:phoneNumberProvider:userSession:snapProProfilesProvider:plusSubscriptionInfoProvider:] */

undefined8 *
FUN_1079fb794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f93f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 1079fba40; end: 1079fba4b; -[SCComposerPeopleUserInfoProvider pushToValdiMarshaller:] */

void FUN_1079fba40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1079fba4c; end: 1079fbaff; -[SCComposerPeopleUserInfoProvider getCurrentUserInfoWithCompletion:] */

void FUN_1079fba4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1079fbb00;
    puStack_48 = &UNK_11084aaa8;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079fbb00; end: 1079fbb0b;  */

void FUN_1079fbb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doGetCurrentUserInfoWithComplet_11255eef0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079fbb0c; end: 1079fbb67; -[SCComposerPeopleUserInfoProvider _doGetCurrentUserInfoWithCompletion:] */

void FUN_1079fbb0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be1fb60(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079fbb68; end: 1079fbc73; -[SCComposerPeopleUserInfoProvider observeCurrentUserInfo] */

void FUN_1079fbb68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bdec220(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf41860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079fbc74; end: 1079fbecf;  */

void FUN_1079fbc74(long param_1,long param_2)

{
  long lVar1;
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
  
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf529e0();
  if (lVar14 == 7) {
    lVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c0ec5e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c0ec5e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010c0ec5e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar12 = lVar11;
    func_0x00010c14fa80(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf14060(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bdf55a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(param_1);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar14 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
  return;
}



/* Entry: 1079fbed0; end: 1079fc0af; -[SCComposerPeopleUserInfoProvider _getInitialUserInfo] */

void FUN_1079fbed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c14fa80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf14060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf55a0(param_1,param_2,puVar3,uVar1,uVar6,uVar7,uVar8,puVar9,puVar10,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079fc0b0; end: 1079fc747; -[SCComposerPeopleUserInfoProvider _createCombinedUserInfoObservables] */

void FUN_1079fc0b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c2519e0(uVar4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1,param_2,uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c2519e0(uVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  func_0x00010befa120(puVar1,param_2,uVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c15ae00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c2519e0(uVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar10);
  func_0x00010befa120(puVar1,param_2,uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2519e0(uVar4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar10);
  func_0x00010befa120(puVar1,param_2,uVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c2519e0(uVar4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  func_0x00010befa120(puVar1,param_2,uVar10);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar6;
  func_0x00010c2519e0(uVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  func_0x00010befa120(puVar1,param_2,uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae750;
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c2519e0(uVar11,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar13);
  func_0x00010befa120(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079fc748; end: 1079fc777;  */

void FUN_1079fc748(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae750,PTR_s_optionalWithValue__112618c18,param_2);
  return;
}



/* Entry: 1079fc778; end: 1079fcee7; -[SCComposerPeopleUserInfoProvider _createUserInfoWithBirthday:bitmojiAvatarId:bitmojiSelfieId:sceneId:backgroundId:displayName:username:plusInfo:] */

void FUN_1079fc778(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lStack_1a8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar13 = param_5;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar13);
    lVar4 = lVar13;
  }
  _objc_release(lVar13);
  puVar5 = PTR_PTR_1126d5d48;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010befe800(lVar4);
  dVar18 = (double)lVar13;
  func_0x00010bff27e0(dVar18);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126d5d50;
  _objc_alloc(PTR_PTR_1126d5d50);
  func_0x00010bf51c80(uVar2);
  dVar19 = dVar18;
  func_0x00010bf51c80(uVar2);
  func_0x00010bfe4080(uVar2);
  dVar20 = dVar19;
  func_0x00010bf01f00(uVar2);
  uVar1 = uVar2;
  dVar21 = dVar20;
  func_0x00010c2709c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c021a80(dVar18,param_2,dVar19,dVar20,dVar21,puVar6);
  func_0x00010c1bf6c0(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar1);
  puVar8 = PTR_PTR_1126b28e0;
  _objc_opt_new();
  func_0x00010c16da00();
  func_0x00010c1fbc60(puVar8);
  func_0x00010c1f6680(puVar8);
  func_0x00010c16e6a0(puVar8);
  func_0x00010c171180(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 == 0) {
    func_0x00010c170420(puVar5);
  }
  else {
    func_0x00010c26f320(lVar4);
    func_0x00010c0df720((long)(dVar18 * 1000.0),puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170420(puVar5);
    _objc_release(puVar6);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db060(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  lVar13 = param_3 + 0x50;
  _objc_loadWeakRetained(lVar13);
  lVar3 = lVar13;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_11;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar10;
  if (lVar10 == 0) {
    lStack_1a8 = *(long *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lStack_1a8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = param_10;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c100(puVar6);
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  else {
    func_0x00010c05c100(puVar6);
  }
  _objc_release(lVar11);
  if (lVar10 == 0) {
    _objc_release(lVar17);
    _objc_release(lStack_1a8);
  }
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar13);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4600();
  func_0x00010c0df760(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4540(puVar6);
  _objc_release(puVar12);
  _objc_release(uVar1);
  lVar13 = *(long *)(param_3 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar13;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar13 == 0) {
LAB_1079fcdc4:
      _objc_release(lVar10);
      puVar12 = PTR_PTR_1126d5d58;
      _objc_alloc(PTR_PTR_1126d5d58);
      uVar7 = *(undefined8 *)(param_3 + 0x60);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar7;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080120();
      func_0x00010c01f8a0(puVar12);
      func_0x00010c1de360(puVar6);
      _objc_release(puVar12);
      _objc_release(uVar1);
      _objc_release(uVar7);
      func_0x00010c21dd80(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(uVar2);
      _objc_release(param_11);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_5 + 0x60,0);
      _objc_storeStrong(param_5 + 0x58,0);
      _objc_destroyWeak(param_5 + 0x50);
      _objc_storeStrong(param_5 + 0x48,0);
      _objc_storeStrong(param_5 + 0x40,0);
      _objc_storeStrong(param_5 + 0x38,0);
      _objc_storeStrong(param_5 + 0x30,0);
      _objc_storeStrong(param_5 + 0x28,0);
      _objc_storeStrong(param_5 + 0x20,0);
      _objc_storeStrong(param_5 + 0x18,0);
      _objc_storeStrong(param_5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 8,0);
      return;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar10);
      }
      lVar16 = *(long *)(lVar17 * 8);
      lVar11 = lVar16;
      func_0x00010c074e40();
      if ((int)lVar11 != 0) {
        lVar11 = lVar16;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar11;
        func_0x00010c0b4680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        if (lVar14 != 0) {
          func_0x00010c1164a0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar16;
          func_0x00010c0b4680();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4320(puVar6);
          _objc_release(lVar3);
          _objc_release(lVar13);
          _objc_release(lVar16);
          goto LAB_1079fcdc4;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar13 != lVar17);
    lVar13 = lVar10;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1079fcee8; end: 1079fcf8b; -[SCComposerPeopleUserInfoProvider .cxx_destruct] */

void FUN_1079fcee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1079fcf8c; end: 1079fd057; -[SCComposerSUPStore initWithFeatureSettingsService:] */

undefined1 * FUN_1079fcf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9400;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fd058; end: 1079fd147; -[SCComposerSUPStore getBoolAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_1079fd058(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1079fd148; end: 1079fd1f7;  */

void FUN_1079fd148(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    func_0x00010c296ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar3 = (ulong)*(byte *)(param_1 + 0x38);
    }
    else {
      func_0x00010bf1f3c0(uVar3);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079fd1f8; end: 1079fd34f; -[SCComposerSUPStore setBoolConfirmedForWithConfigKey:newValue:completion:] */

void FUN_1079fd1f8(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_1;
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 1079fd350; end: 1079fd3c7;  */

void FUN_1079fd350(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    dVar4 = *(double *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ab60(uVar3,param_2,(long)dVar4,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079fd3c8; end: 1079fd3f7;  */

void FUN_1079fd3c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079fd3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1079fd3f8; end: 1079fd44b; -[SCComposerSUPStore setBoolSpeculativeForWithConfigKey:newValue:] */

void FUN_1079fd3f8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab60(uVar2,param_3,(long)param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079fd44c; end: 1079fd54f; -[SCComposerSUPStore observeBoolWithConfigKey:defaultValue:] */

void FUN_1079fd44c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar1);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1079fd550;
  puStack_78 = &UNK_1109f4b28;
  puVar4 = PTR_PTR_1126ae6b8;
  uStack_70 = uVar1;
  puStack_68 = puVar3;
  uStack_60 = uVar2;
  uStack_58 = param_4;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_3,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079fd550; end: 1079fd78f;  */

void FUN_1079fd550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0b4fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c296ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079fd790; end: 1079fd847;  */

void FUN_1079fd790(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079fd848; end: 1079fd84f;  */

void FUN_1079fd848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 1079fd850; end: 1079fd93b; -[SCComposerSUPStore getIntAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_1079fd850(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1079fd93c; end: 1079fd9e7;  */

void FUN_1079fd93c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    func_0x00010c296ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      func_0x00010bf885a0(uVar3);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079fd9e8; end: 1079fdb43; -[SCComposerSUPStore setIntConfirmedForWithConfigKey:newValue:completion:] */

void FUN_1079fd9e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_3);
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  uStack_70 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  return;
}



/* Entry: 1079fdb44; end: 1079fdbbb;  */

void FUN_1079fdb44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    dVar4 = *(double *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        (long)*(double *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ab60(uVar3,param_2,(long)dVar4,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079fdbbc; end: 1079fdbeb;  */

void FUN_1079fdbbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079fdbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1079fdbec; end: 1079fdc43; -[SCComposerSUPStore setIntSpeculativeForWithConfigKey:newValue:] */

void FUN_1079fdbec(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,(long)param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab60(uVar2,param_4,(long)param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079fdc44; end: 1079fdd47; -[SCComposerSUPStore observeIntWithConfigKey:defaultValue:] */

void FUN_1079fdc44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(uVar1);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1079fdd48;
  puStack_78 = &UNK_1108ba078;
  puVar4 = PTR_PTR_1126ae6b8;
  uStack_70 = uVar1;
  puStack_68 = puVar3;
  uStack_60 = uVar2;
  uStack_58 = param_2;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_4,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079fdd48; end: 1079fdf87;  */

void FUN_1079fdd48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0b4fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c296ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079fdf88; end: 1079fe03f;  */

void FUN_1079fdf88(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079fe040; end: 1079fe047;  */

void FUN_1079fe040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 1079fe048; end: 1079fe157; -[SCComposerSUPStore getStringAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_1079fe048(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1079fe158; end: 1079fe1fb;  */

void FUN_1079fe158(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    func_0x00010c296ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079fe1fc; end: 1079fe373; -[SCComposerSUPStore setStringConfirmedForWithConfigKey:newValue:completion:] */

void FUN_1079fe1fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0f8560(uVar1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1079fe374; end: 1079fe3b7;  */

void FUN_1079fe374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c19ab60(*(undefined8 *)(lVar1 + 8),param_2,(long)*(double *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079fe3b8; end: 1079fe3e7;  */

void FUN_1079fe3b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079fe3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1079fe3e8; end: 1079fe3f7; -[SCComposerSUPStore setStringSpeculativeForWithConfigKey:newValue:] */

void FUN_1079fe3e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_setFeatureSettingWithItemId_valu_1126444f8,
             (long)param_1,param_4);
  return;
}



/* Entry: 1079fe3f8; end: 1079fe51f; -[SCComposerSUPStore observeStringWithConfigKey:defaultValue:] */

void FUN_1079fe3f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar1);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1079fe520;
  puStack_78 = &UNK_110866f10;
  uStack_70 = uVar1;
  puStack_68 = puVar3;
  uStack_60 = param_4;
  uStack_58 = uVar2;
  _objc_retain(param_4);
  func_0x00010bf54280(puVar4,param_3,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uStack_60);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079fe520; end: 1079fe74b;  */

void FUN_1079fe520(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,param_2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0b4fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c296ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079fe74c; end: 1079fe803;  */

void FUN_1079fe74c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079fe804; end: 1079fe80b;  */

void FUN_1079fe804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 1079fe80c; end: 1079fe817; -[SCComposerSUPStore pushToValdiMarshaller:] */

undefined8 FUN_1079fe80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df478;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b049ad8();
  return param_3;
}



/* Entry: 1079fe818; end: 1079fe853; -[SCComposerSUPStore .cxx_destruct] */

void FUN_1079fe818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079fe854; end: 1079fe8f7; -[SCComposerAnimatedBitmojiDownloader initWithBitmojiFetcher:bitmoji3DStickerFetcher:] */

undefined1 *
FUN_1079fe854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9408;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079fe8f8; end: 1079fe963; -[SCComposerAnimatedBitmojiDownloader supportedURLSchemes] */

void FUN_1079fe8f8(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ea95b8;
  puVar11 = (undefined8 *)0x1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined1 *)0x0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110df7f98;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar11 = ppuVar10;
    }
    else {
      puVar3 = (undefined1 *)pppuVar1;
      func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110db11d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      if (puVar4 == (undefined1 *)0x0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110df7fb8;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar11 = ppuVar10;
      }
      else {
        puVar4 = (undefined1 *)pppuVar1;
        func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110db11f8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined1 *)pppuVar1;
        func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110db1138);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x000109006080();
        _objc_release(puVar5);
        if ((int)puVar6 == -1) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110ea95d8;
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar11 = ppuVar10;
        }
        else {
          puVar5 = (undefined1 *)pppuVar1;
          func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110db1058);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c08fa60();
          if (puVar7 == (undefined1 *)0x0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110df8038;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar11 = ppuVar10;
          }
          else {
            func_0x00010c067fc0();
            puVar8 = PTR_PTR_1126d5d60;
            _objc_alloc(PTR_PTR_1126d5d60);
            puVar9 = PTR_PTR_1126b5938;
            _objc_alloc(PTR_PTR_1126b5938);
            func_0x00010c050fa0();
            func_0x00010bff8220(puVar8,param_2,puVar9,puVar6);
            _objc_release(puVar9);
          }
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(pppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079fe964; end: 1079feba3; -[SCComposerAnimatedBitmojiDownloader requestPayloadWithURL:error:] */

void FUN_1079fe964(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar9 = (undefined *)0x0;
    *param_4 = ppuVar8;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db11d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar9 = (undefined *)0x0;
      *param_4 = ppuVar8;
    }
    else {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db11f8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000109006080();
      _objc_release(lVar4);
      if ((int)lVar5 == -1) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110ea95d8;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar9 = (undefined *)0x0;
        *param_4 = ppuVar8;
      }
      else {
        lVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1058);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c08fa60();
        if (lVar6 == 0) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110df8038;
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar9 = (undefined *)0x0;
          *param_4 = ppuVar8;
        }
        else {
          func_0x00010c067fc0();
          puVar9 = PTR_PTR_1126d5d60;
          _objc_alloc(PTR_PTR_1126d5d60);
          puVar7 = PTR_PTR_1126b5938;
          _objc_alloc(PTR_PTR_1126b5938);
          func_0x00010c050fa0();
          func_0x00010bff8220(puVar9,param_2,puVar7,lVar5);
          _objc_release(puVar7);
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1079feba4; end: 1079fef8f; -[SCComposerAnimatedBitmojiDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1079feba4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d5d60;
  if (lVar2 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110ea95f8;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110ea95f8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,ppuVar7);
    _objc_release(ppuVar7);
    puVar14 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar14);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar14);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110ea9618;
      func_0x000108543ce4(&PTR____CFConstantStringClassReference_110ea9618);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,0,ppuVar7);
      _objc_release(ppuVar7);
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar3 = param_3;
      func_0x00010bf1be60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c130220();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        uVar5 = param_3;
        func_0x00010bf1be60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c130220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_1079fef90;
      uStack_88 = 0x1079fefa0;
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf1be60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bf1be60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010bf1be60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_3;
      func_0x00010bf1be60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      uVar12 = uVar8;
      func_0x00010bfa48a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      uVar13 = uVar12;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar13;
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      puVar14 = PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      func_0x00010bffae00();
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
      _objc_release(param_6);
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1079fef90; end: 1079fefa7;  */

void FUN_1079fef90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079fefa8; end: 1079ff063;  */

void FUN_1079fefa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079ff064; end: 1079ff203;  */

void FUN_1079ff064(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1079ff218;
    puStack_80 = &UNK_110849530;
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar3);
    puStack_78 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    puVar3 = puStack_78;
  }
  else {
    lVar1 = param_2;
    func_0x00010010fab4(param_2,PTR_DAT_1126a59a8);
    puVar3 = PTR_PTR_1126b27a8;
    if ((int)lVar1 == 0) {
      puVar2 = PTR_PTR_1126d5d68;
      _objc_alloc(PTR_PTR_1126d5d68);
      lVar1 = param_2;
      func_0x00010c2beee0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008240(puVar2);
      func_0x00010bfe9800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    else {
      func_0x00010bfe9800();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1079ff204;
    puStack_58 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    puStack_50 = puVar3;
    uStack_48 = uVar4;
    _objc_retain(puVar3);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(puStack_50);
    _objc_release(uStack_48);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079ff204; end: 1079ff217;  */

void FUN_1079ff204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079ff214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1079ff218; end: 1079ff28b;  */

void FUN_1079ff218(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ea9638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108543ce4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079ff28c; end: 1079ff327;  */

void FUN_1079ff28c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1079ff328;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1079ff328; end: 1079ff33b;  */

void FUN_1079ff328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079ff338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1079ff33c; end: 1079ff377;  */

void FUN_1079ff33c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ff378; end: 1079ff3a7; -[SCComposerAnimatedBitmojiDownloader .cxx_destruct] */

void FUN_1079ff378(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079ff3a8; end: 1079ff403; -[SCComposerAnimatedImage animatedImageLoopCount] */

/* WARNING: Possible PIC construction at 0x0001079ff3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079ff3c0) */
/* WARNING: Removing unreachable block (ram,0x0001079ff3d8) */
/* WARNING: Removing unreachable block (ram,0x0001079ff3c4) */

void FUN_1079ff3a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loopCount_11260afe8);
  return;
}



/* Entry: 1079ff404; end: 1079ff413; -[SCComposerAnimatedImage loopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ff404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767c3c);
}



/* Entry: 1079ff414; end: 1079ff423; -[SCComposerAnimatedImage setLoopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff414(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112767c3c) = param_3;
  return;
}



/* Entry: 1079ff424; end: 1079ff4a3; -[SCComposerAnimatedImageInnerView initWithAnimationCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1079ff424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9418;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767c40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767c40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ff4a4; end: 1079ff507; -[SCComposerAnimatedImageInnerView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff4a4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c06c0e0();
  puStack_28 = PTR_PTR_1126f9418;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_stopAnimating_112673058);
  if (((int)lVar1 != 0) && (*(long *)(param_1 + _DAT_112767c40) != 0)) {
    (**(code **)(*(long *)(param_1 + _DAT_112767c40) + 0x10))();
  }
  return;
}



/* Entry: 1079ff508; end: 1079ff51b; -[SCComposerAnimatedImageInnerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767c40,0);
  return;
}



/* Entry: 1079ff51c; end: 1079ff5eb;  */

void FUN_1079ff51c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_2);
    puVar1 = PTR_PTR_1126d5d70;
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    lVar2 = param_1;
    func_0x00010c0b7ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1079ff5ec; end: 1079ff61b;  */

void FUN_1079ff5ec(void)

{
  _objc_alloc(PTR_PTR_1126d5d70);
  func_0x00010c01caa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ff61c; end: 1079ff79b; -[SCComposerAnimatedImageView initWithImageLoader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1079ff61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9420;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112767c44;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767c48) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112767c4c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112767c50) = 1;
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126d5d78;
    _objc_alloc();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bff2ee0();
    lVar4 = (long)_DAT_112767c54;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c16ce00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079ff79c; end: 1079ff7c7;  */

void FUN_1079ff79c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be259c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ff7c8; end: 1079ff817; -[SCComposerAnimatedImageView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff7c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112767c58));
  puStack_28 = PTR_PTR_1126f9420;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079ff818; end: 1079ff86f; -[SCComposerAnimatedImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff818(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9420;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112767c54));
  return;
}



/* Entry: 1079ff870; end: 1079ff963; -[SCComposerAnimatedImageView _setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ff870(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5d68;
  _objc_opt_class(PTR_PTR_1126d5d68);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_DAT_1126a59a8;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  if (uVar1 != 0 || uVar3 != 0) {
    func_0x00010c1c0f00(param_3);
  }
  lVar5 = (long)_DAT_112767c54;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
  if (*(char *)(param_1 + _DAT_112767c50) == '\x01') {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ff964; end: 1079ffac3; -[SCComposerAnimatedImageView _setSrc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1079ff964(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112767c44);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c09b740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112767c58;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    bVar1 = *(long *)(param_1 + lVar6) != 0;
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1079ffac4; end: 1079ffba7;  */

void FUN_1079ffac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079ffba8;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_retain(param_3);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079ffba8; end: 1079ffbdb;  */

void FUN_1079ffba8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ffbdc; end: 1079ffbef; -[SCComposerAnimatedImageView _setNumTimesToLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ffbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112767c48) = param_3;
  return 1;
}



/* Entry: 1079ffbf0; end: 1079ffc37; -[SCComposerAnimatedImageView _setAnimationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ffbf0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112767c50) != param_3) {
    *(char *)(param_1 + _DAT_112767c50) = (char)param_3;
    if (param_3 == 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112767c54));
    }
    else {
      func_0x00010c24dbc0();
    }
  }
  return 1;
}



/* Entry: 1079ffc38; end: 1079ffd23; -[SCComposerAnimatedImageView _setObjectFit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ffc38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c182220(*(undefined8 *)(param_1 + _DAT_112767c54),param_2,0);
    uVar2 = 1;
    goto LAB_1079ffd04;
  }
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabe78);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf338);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      goto LAB_1079ffce8;
    }
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9658);
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_1079ffce8;
    }
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9678);
    if ((int)uVar1 != 0) {
      uVar2 = 1;
      goto LAB_1079ffce8;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
LAB_1079ffce8:
    func_0x00010c182220(*(undefined8 *)(param_1 + _DAT_112767c54),param_2,uVar2);
    uVar2 = 1;
  }
  _objc_release(param_3);
LAB_1079ffd04:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1079ffd24; end: 1079ffd8b; -[SCComposerAnimatedImageView _handleAnimationComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ffd24(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + _DAT_112767c4c) == '\x01') {
    func_0x00010c186f80(*(undefined8 *)(param_1 + _DAT_112767c54),param_2,0);
  }
  if (*(long *)(param_1 + _DAT_112767c5c) != 0) {
    func_0x00010c0f95a0(*(long *)(param_1 + _DAT_112767c5c),param_2,
                        PTR____NSArray0__struct_11034ab48);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1079ffd8c; end: 1079ffe87; -[SCComposerAnimatedImageView _handleImageLoad:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ffd8c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdc2ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea47a0(param_1);
  _objc_release();
  lVar3 = *(long *)(param_1 + _DAT_112767c60);
  if (lVar3 != 0) {
    param_3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f95a0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_112767c54));
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112767c58),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1079ffe88; end: 1079ffec3; -[SCComposerAnimatedImageView _resetSrc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ffe88(long param_1,undefined8 param_2)

{
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112767c54),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767c58),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1079ffec4; end: 1079fffdf; +[SCComposerAnimatedImageView bindAttributes:] */

void FUN_1079ffec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110daee58,0,
                      &PTR___NSConcreteGlobalBlock_1109f4ba8,&PTR___NSConcreteGlobalBlock_1109f4be8)
  ;
  func_0x00010bf1a100(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9698,0,
                      &PTR___NSConcreteGlobalBlock_1109f4c28,&PTR___NSConcreteGlobalBlock_1109f4c48)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110ea96b8,0,
                      &PTR___NSConcreteGlobalBlock_1109f4c88,&PTR___NSConcreteGlobalBlock_1109f4ca8)
  ;
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110ea96d8,0,
                      &PTR___NSConcreteGlobalBlock_1109f4cc8,&PTR___NSConcreteGlobalBlock_1109f4ce8)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110ea96f8,0,
                      &PTR___NSConcreteGlobalBlock_1109f4d08,&PTR___NSConcreteGlobalBlock_1109f4d28)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9718,
                      &PTR___NSConcreteGlobalBlock_1109f4d68,&PTR___NSConcreteGlobalBlock_1109f4da8)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9738,
                      &PTR___NSConcreteGlobalBlock_1109f4dc8,&PTR___NSConcreteGlobalBlock_1109f4de8)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079fffe0; end: 107a0004f;  */

void FUN_1079fffe0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setSrc__112587920);
  return;
}



/* Entry: 107a00050; end: 107a00087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a00050(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112767c5c);
  *(undefined8 *)(param_2 + _DAT_112767c5c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a00088; end: 107a0009b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a00088(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112767c5c);
  *(undefined8 *)(param_2 + _DAT_112767c5c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a0009c; end: 107a000d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a0009c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112767c60);
  *(undefined8 *)(param_2 + _DAT_112767c60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a000d4; end: 107a000e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a000d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112767c60);
  *(undefined8 *)(param_2 + _DAT_112767c60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a000e8; end: 107a00167; -[SCComposerAnimatedImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a000e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112767c64,0);
  _objc_storeStrong(param_1 + _DAT_112767c58,0);
  _objc_storeStrong(param_1 + _DAT_112767c60,0);
  _objc_storeStrong(param_1 + _DAT_112767c5c,0);
  _objc_storeStrong(param_1 + _DAT_112767c54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767c44,0);
  return;
}



/* Entry: 107a00168; end: 107a0024b; -[SCComposerAnimatedImageViewServiceProvider provide] */

void FUN_107a00168(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5d80;
  _objc_alloc(PTR_PTR_1126d5d80);
  func_0x00010c061b60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a0024c; end: 107a0028b;  */

void FUN_107a0024c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a0028c; end: 107a003e3; -[SCComposerAnimatedImageViewServiceProvider _makeViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a0028c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112767c68;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_1079ff51c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107a003e4; end: 107a00423;  */

void FUN_107a003e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a00424; end: 107a005c3; -[SCComposerAnimatedImageViewServiceProvider _buildCompositeImageLoader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a00424(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_112767c6c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c253ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d5d10;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112767c70;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0034c0(puVar3,param_2,lVar4);
  puVar5 = PTR_PTR_1126d5d88;
  puStack_68 = puVar3;
  _objc_alloc();
  param_1 = param_1 + _DAT_112767c74;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7fa0(puVar5,param_2,lVar6,lVar2);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d5d18;
  _objc_alloc();
  func_0x00010c01cac0();
  _objc_release(puVar7);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar2 + _DAT_112767c6c);
  _objc_destroyWeak(lVar2 + _DAT_112767c74);
  _objc_destroyWeak(lVar2 + _DAT_112767c70);
  _objc_destroyWeak(lVar2 + _DAT_112767c68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar2 + _DAT_112767c78);
  return;
}



/* Entry: 107a005c4; end: 107a0061f; -[SCComposerAnimatedImageViewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a005c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112767c6c);
  _objc_destroyWeak(param_1 + _DAT_112767c74);
  _objc_destroyWeak(param_1 + _DAT_112767c70);
  _objc_destroyWeak(param_1 + _DAT_112767c68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112767c78);
  return;
}



/* Entry: 107a00620; end: 107a00693; -[SCComposerCompositeImageLoader initWithImageLoaders:] */

undefined1 * FUN_107a00620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9428;
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


