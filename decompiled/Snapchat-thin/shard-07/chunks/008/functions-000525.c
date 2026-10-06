/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059b9e6c; end: 1059b9f3b;  */

void FUN_1059b9e6c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  long alStack_48 [3];
  
  func_0x000100291d50(alStack_48,(param_2[1] + param_3[1]) - (*param_2 + *param_3));
  lVar1 = param_2[1] - *param_2;
  if (lVar1 != 0) {
    _memmove(alStack_48[0],*param_2,lVar1);
  }
  lVar1 = param_3[1] - *param_3;
  if (lVar1 != 0) {
    _memmove((param_2[1] + alStack_48[0]) - *param_2,*param_3,lVar1);
  }
  plVar2 = alStack_48;
  FUN_1059b9f3c();
  uStack_50 = SUB84(plVar2,0);
  uStack_4a = (undefined1)((ulong)plVar2 >> 0x30);
  uStack_4c = (undefined2)((ulong)plVar2 >> 0x20);
  func_0x0001005542b8(param_1,&uStack_50,(ulong)&uStack_50 | 7);
  func_0x000100100fec(alStack_48);
  return;
}



/* Entry: 1059b9f3c; end: 1059b9fa7;  */

ulong FUN_1059b9f3c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long alStack_a0 [3];
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined4 uStack_38;
  undefined3 uStack_34;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_1;
  puVar6 = (undefined8 *)(param_1[1] - (long)plVar3);
  iVar7 = (int)&uStack_38;
  func_0x000100237f68();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return (ulong)CONCAT34(uStack_34,uStack_38);
  }
  ___stack_chk_fail();
  if ((ulong)(plVar3[1] - *plVar3) < (ulong)(long)iVar7) {
    uVar9 = 0xffffffff;
  }
  else {
    lVar8 = (long)iVar7;
    func_0x000100291d50(alStack_a0,(param_4[1] + lVar8) - *param_4);
    lVar2 = param_4[1] - *param_4;
    if (lVar2 != 0) {
      _memmove(alStack_a0[0] + lVar8,*param_4,lVar2);
    }
    uVar10 = 0;
    uVar1 = iVar7 - 1;
    while( true ) {
      uVar9 = (ulong)uVar1;
      if ((ulong)(plVar3[1] - (lVar8 + *plVar3)) < uVar10) break;
      if (iVar7 != 0) {
        _memmove(alStack_a0[0],uVar10 + *plVar3,lVar8);
      }
      plVar4 = alStack_a0;
      FUN_1059b9f3c();
      uStack_88 = SUB84(plVar4,0);
      uStack_82 = (undefined1)((ulong)plVar4 >> 0x30);
      uStack_84 = (undefined2)((ulong)plVar4 >> 0x20);
      puVar5 = &uStack_88;
      func_0x00010ae4546c(puVar5,*puVar6,7);
      if ((int)puVar5 == 0) goto LAB_1059ba088;
      uVar10 = uVar10 + 1;
      uVar1 = uVar1 + 1;
    }
    uVar9 = 0xffffffff;
LAB_1059ba088:
    func_0x000100100fec(alStack_a0);
  }
  return uVar9;
}



/* Entry: 1059b9fa8; end: 1059ba0ab;  */

int FUN_1059b9fa8(long *param_1,undefined8 *param_2,int param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long alStack_60 [3];
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  if ((ulong)(param_1[1] - *param_1) < (ulong)(long)param_3) {
    iVar5 = -1;
  }
  else {
    lVar4 = (long)param_3;
    func_0x000100291d50(alStack_60,(param_4[1] + lVar4) - *param_4);
    lVar1 = param_4[1] - *param_4;
    if (lVar1 != 0) {
      _memmove(alStack_60[0] + lVar4,*param_4,lVar1);
    }
    uVar6 = 0;
    iVar5 = param_3 + -1;
    while( true ) {
      if ((ulong)(param_1[1] - (lVar4 + *param_1)) < uVar6) break;
      if (param_3 != 0) {
        _memmove(alStack_60[0],uVar6 + *param_1,lVar4);
      }
      plVar2 = alStack_60;
      FUN_1059b9f3c();
      uStack_48 = SUB84(plVar2,0);
      uStack_42 = (undefined1)((ulong)plVar2 >> 0x30);
      uStack_44 = (undefined2)((ulong)plVar2 >> 0x20);
      puVar3 = &uStack_48;
      func_0x00010ae4546c(puVar3,*param_2,7);
      if ((int)puVar3 == 0) goto LAB_1059ba088;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 1;
    }
    iVar5 = -1;
LAB_1059ba088:
    func_0x000100100fec(alStack_60);
  }
  return iVar5;
}



/* Entry: 1059ba0ac; end: 1059ba3af; -[SCRecipientListServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059ba0ac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_10f31996f;
  _dispatch_queue_create(&UNK_10f31996f,uVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272ce20);
  *(undefined **)(param_1 + _DAT_11272ce20) = puVar2;
  _objc_release(uVar7);
  _objc_release(uVar1);
  lVar9 = param_1 + _DAT_11272ce24;
  _objc_loadWeakRetained(lVar9);
  lVar3 = lVar9;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar3;
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_11272ce28;
  _objc_loadWeakRetained(lVar9);
  lVar8 = lVar9;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar9);
  lVar8 = (long)_DAT_11272ce2c;
  lVar9 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar9;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar5 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar9 = param_1 + _DAT_11272ce30;
  _objc_loadWeakRetained();
  lVar8 = lVar9;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_1 + _DAT_11272ce34;
  _objc_loadWeakRetained();
  lVar6 = lVar9;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272ce38;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c0a30;
  _objc_alloc(PTR_PTR_1126c0a30);
  func_0x00010c026480();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  lVar9 = (long)_DAT_11272ce3c;
  _objc_retain(uVar7);
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059ba3b0; end: 1059ba4b7;  */

void FUN_1059ba3b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1059ba44c;
  puStack_38 = &UNK_11086bb50;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0a28;
  _objc_alloc(PTR_PTR_1126c0a28);
  func_0x00010c00dce0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059ba4b8; end: 1059ba62f; -[SCRecipientListServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059ba4b8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = (long)_DAT_11272ce38;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11272ce40;
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
  }
  else {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11272ce40;
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    uVar7 = *(undefined8 *)(param_1 + lVar6);
    _objc_retain(uVar5);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39e00();
    _objc_release(uVar7);
  }
  _objc_release(uVar5);
  lVar6 = param_1 + _DAT_11272ce24;
  _objc_loadWeakRetained(lVar6);
  lVar3 = lVar6;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar8));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059ba630; end: 1059ba637;  */

void FUN_1059ba630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1059ba638; end: 1059ba63b; -[SCRecipientListServiceProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_1059ba638(void)

{
  return;
}



/* Entry: 1059ba63c; end: 1059ba77b; -[SCRecipientListServiceProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1059ba63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059ba780;
    puStack_58 = &UNK_1108caea8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bc6c0(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059ba77c; end: 1059ba77f;  */

void FUN_1059ba77c(void)

{
  return;
}



/* Entry: 1059ba780; end: 1059ba85f;  */

void FUN_1059ba780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be8d000(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059ba860; end: 1059ba86f; -[SCRecipientListServiceProvider didUpdateGroupsDataRequest:groupId:] */

void FUN_1059ba860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8d010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeRecipientFromAllListsWith_112580da0,param_4);
  return;
}



/* Entry: 1059ba870; end: 1059ba8c7; -[SCRecipientListServiceProvider _removeRecipientFromAllListsWithRecipientIdToRemove:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059ba870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ce38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059ba8c8; end: 1059ba95f; -[SCRecipientListServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059ba8c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ce28);
  _objc_destroyWeak(param_1 + _DAT_11272ce24);
  _objc_destroyWeak(param_1 + _DAT_11272ce34);
  _objc_destroyWeak(param_1 + _DAT_11272ce30);
  _objc_destroyWeak(param_1 + _DAT_11272ce2c);
  _objc_destroyWeak(param_1 + _DAT_11272ce3c);
  _objc_storeStrong(param_1 + _DAT_11272ce40,0);
  _objc_storeStrong(param_1 + _DAT_11272ce20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ce38,0);
  return;
}



/* Entry: 1059ba960; end: 1059ba96b; -[SCFeatureSettingsService hasSeenMyStoryFriendsLastTimePostedTimestamp] */

void FUN_1059ba960(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e13498);
  return;
}



/* Entry: 1059ba96c; end: 1059ba977; -[SCFeatureSettingsService myStoryFriendsLastTimePostedTimestampServerParam] */

undefined ** FUN_1059ba96c(void)

{
  return &PTR____CFConstantStringClassReference_110e13498;
}



/* Entry: 1059ba978; end: 1059ba987; -[SCFeatureSettingsService setMyStoryFriendsLastTimePostedTimestamp:] */

void FUN_1059ba978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e13498,param_3);
  return;
}



/* Entry: 1059ba988; end: 1059ba98f; -[SCFeatureSettingsService SEND_TO_MY_STORY_FRIENDS_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:] */

void FUN_1059ba988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1059ba990; end: 1059ba997; -[SCFeatureSettingsService SEND_TO_MY_STORY_FRIENDS_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:] */

void FUN_1059ba990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1059ba998; end: 1059ba9a7; -[SCFeatureSettingsService myStoryFriendsLastTimePostedTimestamp] */

void FUN_1059ba998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e13498,0);
  return;
}



/* Entry: 1059ba9a8; end: 1059ba9b3; -[SCFeatureSettingsService hasSeenMyStoryPublicLastTimePostedTimestamp] */

void FUN_1059ba9a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e134b8);
  return;
}



/* Entry: 1059ba9b4; end: 1059ba9bf; -[SCFeatureSettingsService myStoryPublicLastTimePostedTimestampServerParam] */

undefined ** FUN_1059ba9b4(void)

{
  return &PTR____CFConstantStringClassReference_110e134b8;
}



/* Entry: 1059ba9c0; end: 1059ba9cf; -[SCFeatureSettingsService setMyStoryPublicLastTimePostedTimestamp:] */

void FUN_1059ba9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e134b8,param_3);
  return;
}



/* Entry: 1059ba9d0; end: 1059ba9d7; -[SCFeatureSettingsService SEND_TO_MY_STORY_PUBLIC_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:] */

void FUN_1059ba9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1059ba9d8; end: 1059ba9df; -[SCFeatureSettingsService SEND_TO_MY_STORY_PUBLIC_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:] */

void FUN_1059ba9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1059ba9e0; end: 1059ba9ef; -[SCFeatureSettingsService myStoryPublicLastTimePostedTimestamp] */

void FUN_1059ba9e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e134b8,0);
  return;
}



/* Entry: 1059ba9f0; end: 1059ba9fb; -[SCFeatureSettingsService hasSeenMapsStoryLastTimePostedTimestamp] */

void FUN_1059ba9f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e134d8);
  return;
}



/* Entry: 1059ba9fc; end: 1059baa07; -[SCFeatureSettingsService mapsStoryLastTimePostedTimestampServerParam] */

undefined ** FUN_1059ba9fc(void)

{
  return &PTR____CFConstantStringClassReference_110e134d8;
}



/* Entry: 1059baa08; end: 1059baa17; -[SCFeatureSettingsService setMapsStoryLastTimePostedTimestamp:] */

void FUN_1059baa08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e134d8,param_3);
  return;
}



/* Entry: 1059baa18; end: 1059baa1f; -[SCFeatureSettingsService SEND_TO_MAPS_STORY_LAST_TIME_POSTED_TIMESTAMP_MS_client_value:] */

void FUN_1059baa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1059baa20; end: 1059baa27; -[SCFeatureSettingsService SEND_TO_MAPS_STORY_LAST_TIME_POSTED_TIMESTAMP_MS_server_value:] */

void FUN_1059baa20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1059baa28; end: 1059baa37; -[SCFeatureSettingsService mapsStoryLastTimePostedTimestamp] */

void FUN_1059baa28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e134d8,0);
  return;
}



/* Entry: 1059baa38; end: 1059baaab; -[SCStoriesLastTimePostedFeatureSettingsImpl initWithFeatureSettingsService:] */

undefined1 * FUN_1059baa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb2e8;
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



/* Entry: 1059baaac; end: 1059bab13; -[SCStoriesLastTimePostedFeatureSettingsImpl updateMapsStoryWithLastTimePostedDate:] */

void FUN_1059baaac(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c1c2a40(uVar1,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059bab14; end: 1059bab7b; -[SCStoriesLastTimePostedFeatureSettingsImpl updateMyStoryFriendsWithLastTimePostedDate:] */

void FUN_1059bab14(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c1cad40(uVar1,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059bab7c; end: 1059babe3; -[SCStoriesLastTimePostedFeatureSettingsImpl updateMyStoryPublicWithLastTimePostedDate:] */

void FUN_1059bab7c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c1cad80(uVar1,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059babe4; end: 1059bac2b; -[SCStoriesLastTimePostedFeatureSettingsImpl getMyStoryFriendsLastPostedDate] */

void FUN_1059babe4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d4c20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 1059bac2c; end: 1059bac73; -[SCStoriesLastTimePostedFeatureSettingsImpl getMyStoryPublicLastPostedDate] */

void FUN_1059bac2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d4d00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 1059bac74; end: 1059bacbb; -[SCStoriesLastTimePostedFeatureSettingsImpl getMapsStoryLastPostedDate] */

void FUN_1059bac74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0baea0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)lVar2,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 1059bacbc; end: 1059bacc7; -[SCStoriesLastTimePostedFeatureSettingsImpl .cxx_destruct] */

void FUN_1059bacbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059bacc8; end: 1059badab; -[SCStoriesLastTimePostedFeatureSettingsServiceProvider provide] */

void FUN_1059bacc8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c0a40;
  _objc_alloc(PTR_PTR_1126c0a40);
  func_0x00010c04d1a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059badac; end: 1059badeb;  */

void FUN_1059badac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059badec; end: 1059bae6f; -[SCStoriesLastTimePostedFeatureSettingsServiceProvider _storiesLastTimePostedFeatureSettingsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059badec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c0a48;
  _objc_alloc(PTR_PTR_1126c0a48);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272ce4c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059bae70; end: 1059baea7; -[SCStoriesLastTimePostedFeatureSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059bae70(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ce4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ce48);
  return;
}



/* Entry: 1059baea8; end: 1059baf1b; -[SCStoriesLastTimePostedFeatureSettingsServices initWithStoriesLastTimePostedFeatureSettingsService:] */

undefined1 * FUN_1059baea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb2f0;
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



/* Entry: 1059baf1c; end: 1059baf23; -[SCStoriesLastTimePostedFeatureSettingsServices storiesLastTimePostedFeatureSettingsService] */

undefined8 FUN_1059baf1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059baf24; end: 1059baf2f; -[SCStoriesLastTimePostedFeatureSettingsServices .cxx_destruct] */

void FUN_1059baf24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059baf30; end: 1059bb017; -[SCSelectionGroupServiceProvider provide] */

void FUN_1059baf30(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c0a50;
  _objc_alloc(PTR_PTR_1126c0a50);
  func_0x00010c043d60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059bb018; end: 1059bb057;  */

void FUN_1059bb018(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059bb058; end: 1059bb307; -[SCSelectionGroupServiceProvider _selectionGroupObservableRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059bb058(long param_1)

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
  long lVar11;
  
  lVar1 = param_1 + _DAT_11272ce54;
  _objc_loadWeakRetained(lVar1);
  lVar11 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272ce58;
  _objc_loadWeakRetained(lVar1);
  lVar11 = lVar1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x000108ef1dd8(lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11272ce5c;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar1 = lVar11;
  func_0x00010c274420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  param_1 = param_1 + _DAT_11272ce60;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar7 = lVar11;
  func_0x00010bf1f440();
  if ((int)lVar7 == 0) {
    puVar9 = PTR_PTR_1126c0a60;
    _objc_alloc(PTR_PTR_1126c0a60);
    puVar10 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    func_0x00010c0193e0(puVar9);
  }
  else {
    lVar7 = lVar11;
    func_0x00010bf1f440();
    lVar8 = lVar3;
    if ((int)lVar7 != 0) {
      lVar8 = lVar2;
      func_0x000108ef1e94(lVar2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    puVar9 = PTR_PTR_1126c0a58;
    _objc_alloc(PTR_PTR_1126c0a58);
    puVar10 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    func_0x00010c019500(puVar9);
    lVar3 = lVar8;
  }
  _objc_release(puVar10);
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1059bb308; end: 1059bb357; -[SCSelectionGroupServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059bb308(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ce60);
  _objc_destroyWeak(param_1 + _DAT_11272ce5c);
  _objc_destroyWeak(param_1 + _DAT_11272ce58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272ce54);
  return;
}



/* Entry: 1059bb358; end: 1059bb563; -[SCLegacySelectionGroupObservableRepository initWithGroupsDataFetcher:groupsDataTracker:topGroupsDataFetcher:selectionGroupConvertor:currentDateProvider:circumstanceEngine:] */

undefined1 *
FUN_1059bb358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126eb2f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined4 *)((long)puVar1 + 0x5c) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x59) = 1;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059bb564; end: 1059bb61f; -[SCLegacySelectionGroupObservableRepository _recentSelectionGroupObservable] */

void FUN_1059bb564(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x59) == '\x01') {
    func_0x00010be3afa0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2519e0(uVar2,param_2,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bb620; end: 1059bb7bf; -[SCLegacySelectionGroupObservableRepository _initialFetchAndEmit] */

void FUN_1059bb620(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059bb7c0;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar3 = &puStack_80;
  _objc_retainBlock();
  ppuVar4 = ppuVar3;
  _qos_class_self();
  iVar1 = 0x19;
  if ((int)ppuVar4 != 0x21) {
    iVar1 = (int)ppuVar4;
  }
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059bb7fc;
  puStack_90 = &UNK_110849530;
  _objc_retain(ppuVar3);
  uVar5 = 0x20;
  ppuStack_88 = ppuVar3;
  func_0x0001000c5568(0x20,iVar1,0,&puStack_a8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2320(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(ppuStack_88);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1059bb7c0; end: 1059bb7fb;  */

void FUN_1059bb7c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
    func_0x00010be0f4e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059bb7fc; end: 1059bb813;  */

void FUN_1059bb7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bb804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1059bb814; end: 1059bb877; -[SCLegacySelectionGroupObservableRepository _fetchAndEmitAllSelectionGroups] */

void FUN_1059bb814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc9680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be637e0(param_1,param_2,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059bb878; end: 1059bb97f; -[SCLegacySelectionGroupObservableRepository _fetchAndEmitSelectionGroupForGroupId:] */

void FUN_1059bb878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059bb980; end: 1059bba3f;  */

void FUN_1059bb980(long param_1,long param_2,undefined *param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  long lStack_c0;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    param_4 = 0;
    param_3 = puVar2;
    func_0x00010be637e0(param_1);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar9);
  }
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (puVar2 != (undefined *)0x0) {
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(ulong *)((long)puVar11 * 8);
        uVar3 = uVar10;
        func_0x00010bfd5ca0();
        if ((uVar3 & 1) == 0) {
          _objc_retain(uVar10);
          uStack_160 = 0;
          uStack_150 = 0x2020000000;
          uStack_148 = 0;
          uVar3 = uVar10;
          puStack_158 = &uStack_160;
          func_0x00010c261460(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bcca0();
          _objc_release(uVar3);
          bVar1 = *(byte *)(puStack_158 + 3);
          __Block_object_dispose(&uStack_160,8);
          _objc_release(uVar10);
          if ((bVar1 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x20);
            (**(code **)(lVar4 + 0x10))(lVar4,uVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfceb20();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c08fa60();
            _objc_release(lVar5);
            if (lVar6 != 0) {
              lVar5 = lVar4;
              func_0x00010c0ecc20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf529e0();
              _objc_release(lVar5);
              uVar9 = *(undefined8 *)(param_1 + 0x48);
              lVar5 = lVar4;
              func_0x00010bfceb20(lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar9);
              _objc_release(lVar5);
            }
            _objc_release(lVar4);
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = param_3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf00d20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096de60);
  uVar9 = uVar7;
  func_0x00010c246ca0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR___NSConcreteGlobalBlock_11096de60);
  _objc_release(uVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be86eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1059bba40; end: 1059bbd53; -[SCLegacySelectionGroupObservableRepository _nextChatGroups:overwrite:] */

void FUN_1059bba40(long param_1,undefined8 param_2,long param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar3;
    _objc_release(uVar10);
  }
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar4 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(ulong *)(lVar12 * 8);
        uVar5 = uVar11;
        func_0x00010bfd5ca0();
        if ((uVar5 & 1) == 0) {
          _objc_retain(uVar11);
          uStack_120 = 0;
          uStack_110 = 0x2020000000;
          uStack_108 = 0;
          uVar5 = uVar11;
          puStack_118 = &uStack_120;
          func_0x00010c261460(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bcca0();
          _objc_release(uVar5);
          bVar1 = *(byte *)(puStack_118 + 3);
          __Block_object_dispose(&uStack_120,8);
          _objc_release(uVar11);
          if ((bVar1 & 1) == 0) {
            lVar6 = *(long *)(param_1 + 0x20);
            (**(code **)(lVar6 + 0x10))(lVar6,uVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bfceb20();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c08fa60();
            _objc_release(lVar7);
            if (lVar8 != 0) {
              lVar7 = lVar6;
              func_0x00010c0ecc20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf529e0();
              _objc_release(lVar7);
              uVar10 = *(undefined8 *)(param_1 + 0x48);
              lVar7 = lVar6;
              func_0x00010bfceb20(lVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar10);
              _objc_release(lVar7);
            }
            _objc_release(lVar6);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf00d20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096de60);
  uVar10 = uVar9;
  func_0x00010c246ca0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR___NSConcreteGlobalBlock_11096de60);
  _objc_release(uVar9);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar10);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be86eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1059bbd54; end: 1059bbd57; -[SCLegacySelectionGroupObservableRepository recentSelectionGroupObservable] */

void FUN_1059bbd54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be86eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recentSelectionGroupObservable_11257f548);
  return;
}



/* Entry: 1059bbd58; end: 1059bbe27; -[SCLegacySelectionGroupObservableRepository selectionGroupObservableForGroupIds:] */

void FUN_1059bbd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1225a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059bbe28;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059bbe28; end: 1059bbec7;  */

void FUN_1059bbe28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108caf68,
                      &PTR___NSConcreteGlobalBlock_1108cafa8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059bbef8;
  puStack_30 = &UNK_1108cafc8;
  uStack_28 = param_2;
  _objc_retain();
  func_0x000100504554(uVar1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bbec8; end: 1059bbecf;  */

void FUN_1059bbec8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 1059bbed0; end: 1059bbef7;  */

void FUN_1059bbed0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059bbef8; end: 1059bbf03;  */

void FUN_1059bbef8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1059bbf04; end: 1059bbff7; -[SCLegacySelectionGroupObservableRepository newSelectionGroupObservable] */

long FUN_1059bbf04(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x000108f3e078();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010c1225a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1059bbff8;
  puStack_58 = &UNK_110893620;
  uStack_50 = uVar4;
  dStack_48 = (double)uVar1 * 60.0;
  _objc_retain(uVar4);
  lVar2 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uStack_50);
  _objc_release(uVar4);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1059bbff8; end: 1059bc137;  */

void FUN_1059bbff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1059bc088;
  puStack_48 = &UNK_1108caff8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x0001006372a4(param_2,&puStack_60);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059bc138; end: 1059bc1f7; -[SCLegacySelectionGroupObservableRepository topGroupsObservable] */

void FUN_1059bc138(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e1140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainBlock();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059bc1f8;
  puStack_40 = &UNK_1108cb068;
  uVar1 = uVar2;
  uStack_38 = uVar3;
  func_0x00010c0b8600(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bc1f8; end: 1059bc283;  */

void FUN_1059bc1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_2;
  func_0x0001006372a4();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bc284; end: 1059bc2d7; -[SCLegacySelectionGroupObservableRepository reset] */

void FUN_1059bc284(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  _os_unfair_lock_lock(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x59) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x5c);
  return;
}



/* Entry: 1059bc2d8; end: 1059bc45b; -[SCLegacySelectionGroupObservableRepository selectionGroupWithGroupId:completionQueue:completionHandler:] */

void FUN_1059bc2d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1059bc45c;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      _objc_release(lStack_48);
    }
    _objc_initWeak(auStack_70,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f94a0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059bc45c; end: 1059bc46f;  */

void FUN_1059bc45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bc46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1059bc470; end: 1059bc533;  */

void FUN_1059bc470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1059bc534;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uStack_40 = uVar4;
    uStack_38 = uVar2;
    _objc_retain(uVar4);
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1059bc534; end: 1059bc547;  */

void FUN_1059bc534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bc544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059bc548; end: 1059bc6f3; -[SCLegacySelectionGroupObservableRepository didUpdateGroupsDataRequest:groupId:] */

void FUN_1059bc548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c0a68;
  func_0x00010c15a680(PTR_PTR_1126c0a68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c0b5920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  _objc_retain(param_4);
  func_0x00010c2a14e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 1059bc6f4; end: 1059bc72b;  */

void FUN_1059bc6f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be016a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059bc72c; end: 1059bc78f; -[SCLegacySelectionGroupObservableRepository _didUpdateGroupsDataRequest:groupId:] */

void FUN_1059bc72c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 == 3) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  else if (param_3 != 0) {
    func_0x00010be0f520(param_1,param_2,param_4);
    goto LAB_1059bc77c;
  }
  func_0x00010be0f4e0(param_1);
LAB_1059bc77c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059bc790; end: 1059bc81f; -[SCLegacySelectionGroupObservableRepository .cxx_destruct] */

void FUN_1059bc790(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1059bc820; end: 1059bc833;  */

void FUN_1059bc820(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1059bc834; end: 1059bc9c3; -[SCSelectionGroupObservableRepositoryImpl initWithGroupsDataTracker:topGroupsDataFetcher:selectionGroupConvertor:currentDateProvider:circumstanceEngine:] */

undefined1 *
FUN_1059bc834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb300;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059bc9c4; end: 1059bcabb; -[SCSelectionGroupObservableRepositoryImpl recentSelectionGroupObservable] */

void FUN_1059bc9c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1059bcabc; end: 1059bce57;  */

void FUN_1059bcabc(long param_1,undefined *param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(ulong *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar11);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar3);
      puVar5 = puVar4;
      func_0x00010bf00d20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR___NSConcreteGlobalBlock_11096de60;
      _objc_retain(&PTR___NSConcreteGlobalBlock_11096de60);
      puVar10 = puVar5;
      func_0x00010c246ca0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(&PTR___NSConcreteGlobalBlock_11096de60);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar11);
      _objc_release(puVar3);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
        ___stack_chk_fail();
        __Block_object_dispose(&uStack_120,8);
        __Unwind_Resume(param_2);
        _objc_retain(ppuVar9);
        func_0x00010c1225a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar9);
        puVar5 = param_2;
        func_0x00010c0b8600(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010bf870a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(ppuVar9);
        _objc_release(ppuVar9);
        _objc_release(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
      return;
    }
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar3);
      }
      uVar12 = *(ulong *)((long)puVar10 * 8);
      _objc_retain(uVar12);
      _objc_retain(uVar11);
      if ((uVar12 == 0) || (uVar13 = uVar12, func_0x00010bfd5ca0(), (uVar13 & 1) != 0)) {
LAB_1059bcc6c:
        uVar13 = 0;
      }
      else {
        _objc_retain(uVar12);
        puStack_118 = &uStack_120;
        uStack_120 = 0;
        uStack_110 = 0x2020000000;
        uStack_108 = 0;
        uVar13 = uVar12;
        func_0x00010c261460(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bcca0();
        _objc_release(uVar13);
        bVar1 = *(byte *)(puStack_118 + 3);
        __Block_object_dispose(&uStack_120,8);
        _objc_release(uVar12);
        if ((bVar1 & 1) != 0) goto LAB_1059bcc6c;
        uVar6 = uVar11;
        (**(code **)(uVar11 + 0x10))(uVar11,uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar6;
        func_0x00010bfceb20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar13;
        func_0x00010c08fa60();
        if (uVar7 == 0) {
          _objc_release(uVar13);
LAB_1059bcd48:
          uVar13 = 0;
        }
        else {
          uVar7 = uVar6;
          func_0x00010c0ecc20();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf529e0();
          _objc_release(uVar7);
          _objc_release(uVar13);
          if (uVar8 < 2) goto LAB_1059bcd48;
          _objc_retain(uVar6);
          uVar13 = uVar6;
        }
        _objc_release(uVar6);
      }
      _objc_release(uVar11);
      _objc_release(uVar12);
      if (uVar13 != 0) {
        uVar12 = uVar13;
        func_0x00010bfceb20(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar12);
      }
      _objc_release(uVar13);
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1059bce58; end: 1059bcf27; -[SCSelectionGroupObservableRepositoryImpl selectionGroupObservableForGroupIds:] */

void FUN_1059bce58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1225a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059bcf28;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059bcf28; end: 1059bcfc7;  */

void FUN_1059bcf28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108cb0e8,
                      &PTR___NSConcreteGlobalBlock_1108cb108);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1059bcff8;
  puStack_30 = &UNK_1108cafc8;
  uStack_28 = param_2;
  _objc_retain();
  func_0x000100504554(uVar1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bcfc8; end: 1059bcfcf;  */

void FUN_1059bcfc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 1059bcfd0; end: 1059bcff7;  */

void FUN_1059bcfd0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059bcff8; end: 1059bd003;  */

void FUN_1059bcff8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1059bd004; end: 1059bd0f7; -[SCSelectionGroupObservableRepositoryImpl newSelectionGroupObservable] */

long FUN_1059bd004(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x000108f3e078();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010c1225a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1059bd0f8;
  puStack_58 = &UNK_110893620;
  uStack_50 = uVar4;
  dStack_48 = (double)uVar1 * 60.0;
  _objc_retain(uVar4);
  lVar2 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uStack_50);
  _objc_release(uVar4);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1059bd0f8; end: 1059bd237;  */

void FUN_1059bd0f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1059bd188;
  puStack_48 = &UNK_1108caff8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x0001006372a4(param_2,&puStack_60);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059bd238; end: 1059bd313; -[SCSelectionGroupObservableRepositoryImpl topGroupsObservable] */

void FUN_1059bd238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e1140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar1 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059bd314; end: 1059bd39f;  */

void FUN_1059bd314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_2;
  func_0x0001006372a4();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059bd3a0; end: 1059bd3a3; -[SCSelectionGroupObservableRepositoryImpl reset] */

void FUN_1059bd3a0(void)

{
  return;
}



/* Entry: 1059bd3a4; end: 1059bd42f; -[SCSelectionGroupObservableRepositoryImpl selectionGroupWithGroupId:completionQueue:completionHandler:] */

void FUN_1059bd3a4(void)

{
  long in_x3;
  long in_x4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(in_x4);
  if ((in_x3 != 0) && (in_x4 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1059bd430;
    puStack_30 = &UNK_110849530;
    _objc_retain(in_x4);
    lStack_28 = in_x4;
    func_0x00010007380c(in_x3,&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 1059bd430; end: 1059bd443;  */

void FUN_1059bd430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bd440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1059bd444; end: 1059bd4a3; -[SCSelectionGroupObservableRepositoryImpl .cxx_destruct] */

void FUN_1059bd444(long param_1)

{
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



/* Entry: 1059bd4a4; end: 1059bd4b7;  */

void FUN_1059bd4a4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1059bd4b8; end: 1059bd633; -[SCSelectionRecipientServiceProvider provide] */

/* WARNING: Removing unreachable block (ram,0x0001059bd5e4) */

void FUN_1059bd4b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0a70;
  _objc_alloc(PTR_PTR_1126c0a70);
  func_0x00010c043ee0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059bd634; end: 1059bd673;  */

void FUN_1059bd634(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9e380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059bd674; end: 1059bdeab; -[SCSelectionRecipientServiceProvider _selectionRecipientObservableRepository] */

/* WARNING: Removing unreachable block (ram,0x0001059bde48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059bd674(long param_1)

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
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_e8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  lVar28 = (long)_DAT_11272ceb0;
  lVar29 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar2 = lVar29;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar29);
  lVar29 = param_1 + _DAT_11272ceb4;
  _objc_loadWeakRetained();
  lVar3 = lVar29;
  func_0x00010c15a680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar29);
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar4 = lVar28;
  func_0x00010c0db000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  lVar29 = param_1 + _DAT_11272ceb8;
  _objc_loadWeakRetained();
  lVar5 = lVar29;
  func_0x00010c0890a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar29);
  lVar30 = (long)_DAT_11272cebc;
  lVar29 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar28;
  func_0x000108f3de5c();
  _objc_release(lVar28);
  _objc_release(lVar29);
  lVar29 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f3de70();
  _objc_release(lVar28);
  _objc_release(lVar29);
  lVar29 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar28;
  func_0x000108f3de84();
  _objc_release(lVar28);
  _objc_release(lVar29);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dc70);
  lVar29 = param_1 + _DAT_11272cec0;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(lVar29);
  lVar9 = lVar8;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11272cec4;
  lVar29 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar10 = lVar29;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar29);
  lVar28 = (long)_DAT_11272cec8;
  lVar29 = param_1 + lVar28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar29 == 0) {
    lVar29 = 0xc4e0;
  }
  else {
    lVar28 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar11 = lVar28;
    func_0x00010bfb9760();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar12;
    func_0x00010c25bf20();
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar28);
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc0000000;
  puStack_90 = &UNK_106c89dd0;
  puStack_88 = &UNK_1108ed870;
  ppuVar13 = &puStack_a0;
  lStack_80 = lVar29;
  _objc_retainBlock();
  lVar29 = param_1 + _DAT_11272cecc;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar28;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  _objc_release(lVar29);
  lVar28 = (long)_DAT_11272ced0;
  uVar14 = param_1 + lVar28;
  _objc_loadWeakRetained();
  uVar15 = uVar14;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c235520();
  lVar29 = lVar8;
  if ((uVar17 & 1) == 0) {
    lVar29 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar6 = lVar29;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010c230120();
    if ((int)lVar12 != 0) goto LAB_1059bda34;
    lStack_e8 = 0;
  }
  else {
LAB_1059bda34:
    lVar12 = param_1 + _DAT_11272ced4;
    _objc_loadWeakRetained();
    lStack_e8 = lVar12;
    func_0x00010c122a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    if ((uVar17 & 1) != 0) goto LAB_1059bda84;
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar29);
LAB_1059bda84:
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126c0a78;
  _objc_alloc();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar6 = lVar27;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11272ced8;
  _objc_loadWeakRetained();
  lVar7 = lVar29;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar12 = lVar30;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar18 = lVar28;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar11;
  func_0x000106c88e1c(lVar11,0);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x000106c88e1c(lVar11,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096d960);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc0000000;
  puStack_90 = &UNK_106c89b04;
  puStack_88 = &UNK_1108ed870;
  lStack_80 = 0xffffffffffffffff;
  ppuVar21 = &puStack_a0;
  _objc_retainBlock();
  lVar22 = lVar11;
  func_0x000106c89ee8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096daf0);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dbc0);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dc00);
  lVar23 = lVar11;
  func_0x000106c8ad80(lVar11,1);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x000106c89b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dbe0);
  param_1 = param_1 + _DAT_11272cedc;
  _objc_loadWeakRetained();
  lVar25 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049480(puVar1);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dbe0);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dc00);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dbc0);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096daf0);
  _objc_release(lVar22);
  _objc_release(ppuVar21);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096d960);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar28);
  _objc_release(lVar12);
  _objc_release(lVar30);
  _objc_release(lVar7);
  _objc_release(lVar29);
  _objc_release(lVar6);
  _objc_release(lVar27);
  _objc_release(lStack_e8);
  _objc_release(lVar11);
  _objc_release(ppuVar13);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dc70);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar26 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar26);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


