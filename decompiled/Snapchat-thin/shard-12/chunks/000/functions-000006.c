/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c06670; end: 108c0667b;  */

bool FUN_108c06670(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108c0667c; end: 108c066e3; +[IncomingFriendLinksRequest descriptor] */

void FUN_108c0667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dfc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7730,
                        &PTR____CFConstantStringClassReference_110eee578,&PTR_DAT_11328ff40,
                        &PTR_s_userId_113290118,6,0x30,0x1c);
    puRam000000011372dfc8 = puVar1;
  }
  return;
}



/* Entry: 108c066e4; end: 108c0674b; +[IncomingFriendLink descriptor] */

void FUN_108c066e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dfd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7780,
                        &PTR____CFConstantStringClassReference_110eee598,&PTR_DAT_11328ff40,
                        &PTR_DAT_11328ff58,2,0x18,0x1c);
    puRam000000011372dfd0 = puVar1;
  }
  return;
}



/* Entry: 108c0674c; end: 108c067b3; +[IncomingFriendLinksResponse descriptor] */

void FUN_108c0674c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dfd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb77d0,
                        &PTR____CFConstantStringClassReference_110eee5b8,&PTR_DAT_11328ff40,
                        &PTR_DAT_11328fff8,4,0x20,0x1c);
    puRam000000011372dfd8 = puVar1;
  }
  return;
}



/* Entry: 108c067b4; end: 108c0681b; +[FriendInfo descriptor] */

void FUN_108c067b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dfe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7820,
                        &PTR____CFConstantStringClassReference_110e8cd78,&PTR_DAT_11328ff40,
                        &PTR_s_userId_11328ff98,3,0x18,0x1c);
    puRam000000011372dfe0 = puVar1;
  }
  return;
}



/* Entry: 108c0681c; end: 108c068ff; +[FriendShortcut descriptor] */

void FUN_108c0681c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dfe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7870,
                        &PTR____CFConstantStringClassReference_110eee5d8,&PTR_DAT_11328ff40,
                        &PTR_DAT_113290078,5,0x30,0x1c);
    puRam000000011372dfe8 = puVar1;
  }
  return;
}



/* Entry: 108c06900; end: 108c0690b;  */

bool FUN_108c06900(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108c0690c; end: 108c0699b;  */

undefined * FUN_108c0690c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e028 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eee6d8,
                        &UNK_10df95e30,&UNK_10df95ea8,9,FUN_108c0699c,0,&UNK_10df95ecc);
    do {
      if (puRam000000011372e028 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e028;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e028,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e028 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e028;
}



/* Entry: 108c0699c; end: 108c069a7;  */

bool FUN_108c0699c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108c069a8; end: 108c06a0f; +[UserRecentlyActiveRequest descriptor] */

void FUN_108c069a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7b40,
                        &PTR____CFConstantStringClassReference_110eee6f8,&PTR_DAT_1132906d0,
                        &PTR_DAT_113290708,2,0x10,0x1c);
    puRam000000011372e030 = puVar1;
  }
  return;
}



/* Entry: 108c06a10; end: 108c06a8b; +[UserRecentlyActiveRequestWithSource descriptor] */

undefined * FUN_108c06a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7b90,
                        &PTR____CFConstantStringClassReference_110eee718,&PTR_DAT_1132906d0,
                        &PTR_DAT_113290748,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e038 = puVar1;
  }
  return puRam000000011372e038;
}



/* Entry: 108c06a8c; end: 108c06af3; +[UserRecentlyActiveResponse descriptor] */

void FUN_108c06a8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7be0,
                        &PTR____CFConstantStringClassReference_110eee738,&PTR_DAT_1132906d0,
                        &PTR_DAT_1132906e8,1,0x10,0x1c);
    puRam000000011372e040 = puVar1;
  }
  return;
}



/* Entry: 108c06af4; end: 108c06b6f; +[UserRecentlyActive descriptor] */

undefined * FUN_108c06af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7c30,
                        &PTR____CFConstantStringClassReference_110eee758,&PTR_DAT_1132906d0,
                        &PTR_s_userId_113290788,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e048 = puVar1;
  }
  return puRam000000011372e048;
}



/* Entry: 108c06b70; end: 108c06beb; +[UserRecentlyActiveResponseWithSource descriptor] */

undefined * FUN_108c06b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7c80,
                        &PTR____CFConstantStringClassReference_110eee778,&PTR_DAT_1132906d0,
                        &PTR_DAT_1132907c8,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e050 = puVar1;
  }
  return puRam000000011372e050;
}



/* Entry: 108c06bec; end: 108c06c53; +[SCFriendingLocation descriptor] */

void FUN_108c06bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7d20,
                        &PTR____CFConstantStringClassReference_110df2f78,&PTR_DAT_113290808,
                        &PTR_s_lat_113290880,4,0x20,0x1c);
    puRam000000011372e058 = puVar1;
  }
  return;
}



/* Entry: 108c06c54; end: 108c06cbb; +[SCFriendingGetNearbyFriendsRequest descriptor] */

void FUN_108c06c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7d70,
                        &PTR____CFConstantStringClassReference_110eee798,&PTR_DAT_113290808,
                        &PTR_DAT_113290840,2,0x10,0x1c);
    puRam000000011372e060 = puVar1;
  }
  return;
}



/* Entry: 108c06cbc; end: 108c06d23; +[SCFriendingGetNearbyFriendsResponse descriptor] */

void FUN_108c06cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7dc0,
                        &PTR____CFConstantStringClassReference_110eee7b8,&PTR_DAT_113290808,
                        &PTR_DAT_113290820,1,0x10,0x1c);
    puRam000000011372e068 = puVar1;
  }
  return;
}



/* Entry: 108c06d24; end: 108c06d8b; +[SCFriendingNearbyFriend descriptor] */

void FUN_108c06d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7e10,
                        &PTR____CFConstantStringClassReference_110eee7d8,&PTR_DAT_113290808,
                        &PTR_s_userId_113290900,8,0x48,0x1c);
    puRam000000011372e070 = puVar1;
  }
  return;
}



/* Entry: 108c06d8c; end: 108c06e07; +[SCFriendSuggestionPushNotification descriptor] */

undefined * FUN_108c06d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7eb0,
                        &PTR____CFConstantStringClassReference_110eee7f8,&PTR_DAT_113290a00,
                        &PTR_s_userId_113290a38,0xd,0x68,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e078 = puVar1;
  }
  return puRam000000011372e078;
}



/* Entry: 108c06e08; end: 108c06e6f; +[SCFriendingSuggestionsInPushNotification descriptor] */

void FUN_108c06e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7f00,
                        &PTR____CFConstantStringClassReference_110eee818,&PTR_DAT_113290a00,
                        &PTR_DAT_113290a18,1,0x10,0x1c);
    puRam000000011372e080 = puVar1;
  }
  return;
}



/* Entry: 108c06e70; end: 108c06fdb;  */

void FUN_108c06e70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c280020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar7 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c116cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c117380(param_1);
      lVar3 = param_1;
      func_0x00010c1173c0(param_1);
      lVar4 = param_1;
      func_0x00010c116600(param_1);
      lVar5 = param_1;
      func_0x00010bf699c0(param_1);
      if ((lVar1 == 0) || (lVar8 = lVar1, func_0x00010c0b4660(), (int)lVar8 != 0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar1;
        func_0x00010c0b4540();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126bb3e8;
      _objc_alloc(PTR_PTR_1126bb3e8);
      lVar6 = param_1;
      func_0x00010c280020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01f2e0(puVar7,param_2,(int)lVar2 == 3,lVar6,lVar2,lVar3,0 < (int)lVar4,lVar5,0);
      _objc_release(lVar6);
      _objc_release(lVar8);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c06fdc; end: 108c07107;  */

void FUN_108c06fdc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_6;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bff6b20();
    }
    puVar2 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    func_0x00010bff7be0();
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c07108; end: 108c0726f;  */

void FUN_108c07108(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = lRam000000011372e088;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108c071c0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x11372e088,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar2 = uRam000000011372e090;
  _objc_retain(uRam000000011372e090);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c07270; end: 108c072f3;  */

void FUN_108c07270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee838,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126db250;
  _objc_alloc(PTR_PTR_1126db250);
  func_0x00010c008360();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c072f4; end: 108c073bf;  */

void FUN_108c072f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee958,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126db258;
  _objc_alloc(PTR_PTR_1126db258);
  func_0x00010c008360();
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c073c0; end: 108c073d7;  */

void FUN_108c073c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1568,PTR_s_addFriendsBqSuggestFriendRouting_11259bc80);
  return;
}



/* Entry: 108c073d8; end: 108c07453;  */

undefined8 FUN_108c073d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee898,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108c07454; end: 108c07467;  */

void FUN_108c07454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eee978,0,0);
  return;
}



/* Entry: 108c07468; end: 108c077af;  */

ulong FUN_108c07468(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b1568;
  func_0x00010bfb9360();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_1;
    FUN_108c07270(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf926c0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = (ulong)(puVar1 != (undefined *)0x2);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108c077b0; end: 108c07833;  */

void FUN_108c077b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee858,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126db260;
  _objc_alloc(PTR_PTR_1126db260);
  func_0x00010c008360();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c07834; end: 108c07847;  */

void FUN_108c07834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eee998,0,0);
  return;
}



/* Entry: 108c07848; end: 108c078cb;  */

void FUN_108c07848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee878,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126db268;
  _objc_alloc(PTR_PTR_1126db268);
  func_0x00010c008360();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c078cc; end: 108c078df;  */

void FUN_108c078cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eee9d8,0,0);
  return;
}



/* Entry: 108c078e0; end: 108c07983;  */

long FUN_108c078e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eee9f8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108c07984; end: 108c07997;  */

void FUN_108c07984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eeea78,0,0);
  return;
}



/* Entry: 108c07998; end: 108c079e7;  */

long FUN_108c07998(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eeea98,0,0);
  return (long)(int)param_1;
}



/* Entry: 108c079e8; end: 108c07a23;  */

undefined8 FUN_108c079e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108c07108();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf926c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c07a24; end: 108c07b8f;  */

undefined8 FUN_108c07a24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eee8f8,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108c07b90; end: 108c07d43;  */

long FUN_108c07b90(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108c07108();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c103b60();
  _objc_release(param_1);
  return (long)(int)uVar1;
}



/* Entry: 108c07d44; end: 108c07d73;  */

long FUN_108c07d44(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eee8b8,0,0);
  uVar1 = (uint)param_1;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  return (long)(int)uVar1;
}



/* Entry: 108c07d74; end: 108c07e2f;  */

undefined8 FUN_108c07d74(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108c072f4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf926c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c07e30; end: 108c07e9f;  */

void FUN_108c07e30(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  FUN_108c072f4(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c08e0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108c07ea0; end: 108c07f07; +[SCAddFriendsRegRefreshConfig descriptor] */

void FUN_108c07ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb7fa0,
                        &PTR____CFConstantStringClassReference_110eeeb38,&PTR_DAT_113290bd8,
                        &PTR_DAT_113290bf0,0x10,0xc,0x1c);
    puRam000000011372e098 = puVar1;
  }
  return;
}



/* Entry: 108c07f08; end: 108c07f6f; +[SCFriendStoriesSuggestionsImpressionLimitConfig descriptor] */

void FUN_108c07f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8040,
                        &PTR____CFConstantStringClassReference_110eeeb58,&PTR_DAT_113290df0,
                        &PTR_s_enabled_113290e08,3,0xc,0x1c);
    puRam000000011372e0a0 = puVar1;
  }
  return;
}



/* Entry: 108c07f70; end: 108c07fd7; +[SCNearbyFriendsConfig descriptor] */

void FUN_108c07f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb80e0,
                        &PTR____CFConstantStringClassReference_110eeeb78,&PTR_DAT_113290e68,
                        &PTR_s_enabled_113290e80,8,0x18,0x1c);
    puRam000000011372e0a8 = puVar1;
  }
  return;
}



/* Entry: 108c07fd8; end: 108c080bb; +[SCFRNDIncomingFriendsRankingConfig descriptor] */

void FUN_108c07fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8180,
                        &PTR____CFConstantStringClassReference_110eeeb98,&PTR_DAT_113290f80,
                        &PTR_s_enabled_113290f98,5,0xc,0x1c);
    puRam000000011372e0b0 = puVar1;
  }
  return;
}



/* Entry: 108c080bc; end: 108c080c7;  */

bool FUN_108c080bc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c080c8; end: 108c0812f; +[SCFRNDInteractivePopoverConfig descriptor] */

void FUN_108c080c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8220,
                        &PTR____CFConstantStringClassReference_110eeebd8,&PTR_DAT_113291038,
                        &PTR_s_enabled_113291050,9,0x20,0x1c);
    puRam000000011372e0c0 = puVar1;
  }
  return;
}



/* Entry: 108c08130; end: 108c081ab; +[SCAddFriendInfoTrayConfig descriptor] */

undefined * FUN_108c08130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb82c0,
                        &PTR____CFConstantStringClassReference_110eeebf8,&PTR_DAT_113291170,
                        &PTR_s_enabled_113291188,6,0x18,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e0c8 = puVar1;
  }
  return puRam000000011372e0c8;
}



/* Entry: 108c081ac; end: 108c081b7; -[SCSnapchattersPinningMetadataServices .cxx_destruct] */

void FUN_108c081ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c081b8; end: 108c08277; -[SCSnapchattersPinningMetadata initWithUserId:impressedCount:receivedTimestamp:pinningSuggestedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108c081b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fdd98;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779010);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779010) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112779014) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779018) = param_1;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277901c) = param_6;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108c08278; end: 108c0829b; -[SCSnapchattersPinningMetadata copyWithZone:] */

undefined8 FUN_108c08278(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c0829c; end: 108c08347; -[SCSnapchattersPinningMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108c0829c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779010);
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + _DAT_112779014);
  uVar5 = ~*(ulong *)(param_1 + _DAT_112779018) + *(ulong *)(param_1 + _DAT_112779018) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_11277901c);
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  puVar3 = &uStack_48;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108c08424:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108c08430;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(int *)((long)puVar3 + (long)_DAT_112779014) ==
         *(int *)((long)param_3 + (long)_DAT_112779014) &&
        (*(int *)((long)puVar3 + (long)_DAT_11277901c) ==
         *(int *)((long)param_3 + (long)_DAT_11277901c))))) {
      dVar7 = *(double *)((long)puVar3 + (long)_DAT_112779018);
      dVar8 = *(double *)((long)param_3 + (long)_DAT_112779018);
      dVar9 = ABS(dVar7 - dVar8);
      dVar7 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
        bVar1 = dVar9 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112779010);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112779010)) {
          func_0x00010c071ae0();
          goto LAB_108c08430;
        }
        goto LAB_108c08424;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108c08430:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108c08348; end: 108c0844b; -[SCSnapchattersPinningMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c08348(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_108c08424:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c08430;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_112779014) == *(int *)(param_3 + (long)_DAT_112779014) &&
        (*(int *)(param_1 + (long)_DAT_11277901c) == *(int *)(param_3 + (long)_DAT_11277901c))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112779018);
      dVar6 = *(double *)(param_3 + (long)_DAT_112779018);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112779010);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112779010)) {
          func_0x00010c071ae0();
          goto LAB_108c08430;
        }
        goto LAB_108c08424;
      }
    }
    lVar4 = 0;
  }
LAB_108c08430:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108c0844c; end: 108c0845b; -[SCSnapchattersPinningMetadata userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c0844c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779010);
}



/* Entry: 108c0845c; end: 108c0846b; -[SCSnapchattersPinningMetadata impressedCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108c0845c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112779014);
}



/* Entry: 108c0846c; end: 108c0847b; -[SCSnapchattersPinningMetadata receivedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c0846c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779018);
}



/* Entry: 108c0847c; end: 108c0848b; -[SCSnapchattersPinningMetadata pinningSuggestedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108c0847c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277901c);
}



/* Entry: 108c0848c; end: 108c0849f; -[SCSnapchattersPinningMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c0848c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779010,0);
  return;
}



/* Entry: 108c084a0; end: 108c084ab; -[SCFeatureSettingsService isSuggestedFriendUpdateTimestampAvailable] */

void FUN_108c084a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeec18);
  return;
}



/* Entry: 108c084ac; end: 108c084b7; -[SCFeatureSettingsService suggestedFriendUpdateTimestampServerParam] */

undefined ** FUN_108c084ac(void)

{
  return &PTR____CFConstantStringClassReference_110eeec18;
}



/* Entry: 108c084b8; end: 108c084c7; -[SCFeatureSettingsService setSuggestedFriendUpdateTimestamp:] */

void FUN_108c084b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeec18,param_3);
  return;
}



/* Entry: 108c084c8; end: 108c084cf; -[SCFeatureSettingsService suggested_friend_update_timestamp_client_value:] */

void FUN_108c084c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c084d0; end: 108c084d7; -[SCFeatureSettingsService suggested_friend_update_timestamp_server_value:] */

void FUN_108c084d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c084d8; end: 108c084e3; -[SCFeatureSettingsService getLastFriendAddTakeoverDisplayedTimestamp] */

void FUN_108c084d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeec38);
  return;
}



/* Entry: 108c084e4; end: 108c084ef; -[SCFeatureSettingsService lastFriendAddTakeoverDisplayedTimestampServerParam] */

undefined ** FUN_108c084e4(void)

{
  return &PTR____CFConstantStringClassReference_110eeec38;
}



/* Entry: 108c084f0; end: 108c084ff; -[SCFeatureSettingsService setLastFriendAddTakeoverDisplayedTimestamp:] */

void FUN_108c084f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeec38,param_3);
  return;
}



/* Entry: 108c08500; end: 108c08507; -[SCFeatureSettingsService friend_add_takeover_last_displayed_timestamp_client_value:] */

void FUN_108c08500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08508; end: 108c0850f; -[SCFeatureSettingsService friend_add_takeover_last_displayed_timestamp_server_value:] */

void FUN_108c08508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08510; end: 108c0851f; -[SCFeatureSettingsService lastFriendAddTakeoverDisplayedTimestamp] */

void FUN_108c08510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeec38,0);
  return;
}



/* Entry: 108c08520; end: 108c0852b; -[SCFeatureSettingsService getLastFriendAddTakeoverRequestCreatedTimestamp] */

void FUN_108c08520(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeec58);
  return;
}



/* Entry: 108c0852c; end: 108c08537; -[SCFeatureSettingsService lastFriendAddTakeoverRequestCreatedTimestampServerParam] */

undefined ** FUN_108c0852c(void)

{
  return &PTR____CFConstantStringClassReference_110eeec58;
}



/* Entry: 108c08538; end: 108c08547; -[SCFeatureSettingsService setLastFriendAddTakeoverRequestCreatedTimestamp:] */

void FUN_108c08538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeec58,param_3);
  return;
}



/* Entry: 108c08548; end: 108c0854f; -[SCFeatureSettingsService friend_add_takeover_last_seen_request_created_timestamp_client_value:] */

void FUN_108c08548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08550; end: 108c08557; -[SCFeatureSettingsService friend_add_takeover_last_seen_request_created_timestamp_server_value:] */

void FUN_108c08550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08558; end: 108c08567; -[SCFeatureSettingsService lastFriendAddTakeoverRequestCreatedTimestamp] */

void FUN_108c08558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeec58,0);
  return;
}



/* Entry: 108c08568; end: 108c08573; -[SCFeatureSettingsService isContactBookSyncEnabledAvailable] */

void FUN_108c08568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeec78);
  return;
}



/* Entry: 108c08574; end: 108c08583; -[SCFeatureSettingsService setContactBookSyncEnabled:] */

void FUN_108c08574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eeec78,param_3);
  return;
}



/* Entry: 108c08584; end: 108c0858b; -[SCFeatureSettingsService contact_book_sync_enabled_client_value:] */

undefined * FUN_108c08584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c0858c; end: 108c08593; -[SCFeatureSettingsService contact_book_sync_enabled_server_value:] */

void FUN_108c0858c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108c08594; end: 108c085a3; -[SCFeatureSettingsService contactBookSyncEnabled] */

void FUN_108c08594(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eeec78,1);
  return;
}



/* Entry: 108c085a4; end: 108c085af; -[SCFeatureSettingsService isSearchableByPhoneNumberAvailable] */

void FUN_108c085a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeec98);
  return;
}



/* Entry: 108c085b0; end: 108c085bb; -[SCFeatureSettingsService searchableByPhoneNumberServerParam] */

undefined ** FUN_108c085b0(void)

{
  return &PTR____CFConstantStringClassReference_110eeec98;
}



/* Entry: 108c085bc; end: 108c085cb; -[SCFeatureSettingsService setSearchableByPhoneNumber:] */

void FUN_108c085bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eeec98,param_3);
  return;
}



/* Entry: 108c085cc; end: 108c085d3; -[SCFeatureSettingsService is_searchable_by_phone_number_client_value:] */

undefined * FUN_108c085cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c085d4; end: 108c085db; -[SCFeatureSettingsService is_searchable_by_phone_number_server_value:] */

void FUN_108c085d4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108c085dc; end: 108c085eb; -[SCFeatureSettingsService searchableByPhoneNumber] */

void FUN_108c085dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eeec98,0);
  return;
}



/* Entry: 108c085ec; end: 108c085f7; -[SCFeatureSettingsService isAddedFriendsTimestampAvailable] */

void FUN_108c085ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeecb8);
  return;
}



/* Entry: 108c085f8; end: 108c08607; -[SCFeatureSettingsService setAddedFriendsTimestamp:] */

void FUN_108c085f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeecb8,param_3);
  return;
}



/* Entry: 108c08608; end: 108c0860f; -[SCFeatureSettingsService added_friends_timestamp_client_value:] */

void FUN_108c08608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c08610; end: 108c08617; -[SCFeatureSettingsService added_friends_timestamp_server_value:] */

void FUN_108c08610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08618; end: 108c08623; -[SCFeatureSettingsService isContactBookSyncVersionAvailable] */

void FUN_108c08618(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeecd8);
  return;
}



/* Entry: 108c08624; end: 108c08633; -[SCFeatureSettingsService setContactBookSyncVersion:] */

void FUN_108c08624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeecd8,param_3);
  return;
}



/* Entry: 108c08634; end: 108c0863b; -[SCFeatureSettingsService contact_book_sync_version_client_value:] */

void FUN_108c08634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c0863c; end: 108c08643; -[SCFeatureSettingsService contact_book_sync_version_server_value:] */

void FUN_108c0863c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c08644; end: 108c08653; -[SCFeatureSettingsService contactBookSyncVersion] */

void FUN_108c08644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eeecd8,1);
  return;
}



/* Entry: 108c08654; end: 108c0865f; -[SCFeatureSettingsService getQuickAddPrivacyV2] */

void FUN_108c08654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eeecf8);
  return;
}



/* Entry: 108c08660; end: 108c0866b; -[SCFeatureSettingsService quickAddPrivacyV2ServerParam] */

undefined ** FUN_108c08660(void)

{
  return &PTR____CFConstantStringClassReference_110eeecf8;
}



/* Entry: 108c0866c; end: 108c0867b; -[SCFeatureSettingsService setQuickAddPrivacyV2:] */

void FUN_108c0866c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eeecf8,param_3);
  return;
}



/* Entry: 108c0867c; end: 108c08683; -[SCFeatureSettingsService quick_add_privacy_v2_client_value:] */

void FUN_108c0867c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}


