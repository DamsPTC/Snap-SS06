/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108be3620; end: 108be3633;  */

void FUN_108be3620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3634; end: 108be375f; -[SCSnapchattersDataProvider _contactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf4a420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4a420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be3760;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108be3760; end: 108be3773;  */

void FUN_108be3760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3774; end: 108be38b7; -[SCSnapchattersDataProvider _googleContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf4a420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4a420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c31910(uVar2,&PTR___NSConcreteGlobalBlock_110ab6fe0);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be38fc;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar3;
  uStack_48 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108be38b8; end: 108be38fb;  */

bool FUN_108be38b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf4a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4a480();
  _objc_release(param_2);
  return (int)uVar1 == 1;
}



/* Entry: 108be38fc; end: 108be390f;  */

void FUN_108be38fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3910; end: 108be3a53; -[SCSnapchattersDataProvider _facebookContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf4a420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4a420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000107c31910(uVar2,&PTR___NSConcreteGlobalBlock_110ab7000);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be3a98;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar3;
  uStack_48 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108be3a54; end: 108be3a97;  */

bool FUN_108be3a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf4a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4a480();
  _objc_release(param_2);
  return (int)uVar1 == 3;
}



/* Entry: 108be3a98; end: 108be3aab;  */

void FUN_108be3a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3aac; end: 108be3bd7; -[SCSnapchattersDataProvider _nonFriendContactSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf4a420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf4a420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107c31910();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108be3c10;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108be3bd8; end: 108be3c0f;  */

bool FUN_108be3bd8(undefined8 param_1,long param_2)

{
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 108be3c10; end: 108be3c23;  */

void FUN_108be3c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3c24; end: 108be3ceb; -[SCSnapchattersDataProvider _rankedBestFriendSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_108be3c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be85ce0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be3cec;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 108be3cec; end: 108be3cff;  */

void FUN_108be3cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3d00; end: 108be3dcf; -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithCompletionQueue:isStartupGuarded:completionHandler:] */

void FUN_108be3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be86dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be3dd0;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x000107c27d8c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_5);
  return;
}



/* Entry: 108be3dd0; end: 108be3de3;  */

void FUN_108be3dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108be3de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108be3de4; end: 108be3e93; -[SCSnapchattersDataProvider _recentAndSuggestedFriendSnapchattersWithStartupGuard:] */

void FUN_108be3de4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0eea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be86ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107c31910(uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108be3e94; end: 108be402b; -[SCSnapchattersDataProvider _rankedBestFriendsSnapchatters] */

void FUN_108be3e94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf197c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf197e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if ((puVar3 != (undefined *)0x0) ||
     (puVar3 = puVar1, func_0x00010bf529e0(), puVar5 = PTR____NSArray0__struct_11034ab48,
     puVar3 != (undefined *)0x0)) {
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c244ee0();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x108be407c;
      puStack_68 = &UNK_11089b0f0;
      uStack_60 = uVar4;
      _objc_retain();
      puVar5 = puVar1;
      func_0x000107c31908(puVar1,&puStack_80);
      uVar6 = uStack_60;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c244e60();
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_108be402c;
      puStack_40 = &UNK_11089b0f0;
      uStack_38 = uVar4;
      _objc_retain();
      puVar5 = puVar2;
      func_0x000107c31908(puVar2,&puStack_58);
      uVar6 = uStack_38;
    }
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108be402c; end: 108be40cb;  */

void FUN_108be402c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901ca64();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be40cc; end: 108be4217; -[SCSnapchattersDataProvider _rankedExtendedBestFriendsSnapchatters] */

void FUN_108be40cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf197c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9db40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    lVar3 = lVar4;
    func_0x00010bf529e0();
    puVar1 = puVar2;
    if (lVar3 != 0) {
      func_0x00010bf09f80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c244e60();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108be4218;
    puStack_40 = &UNK_11089b0f0;
    uStack_38 = uVar5;
    _objc_retain();
    puVar6 = puVar1;
    func_0x000107c31908(puVar1,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(uVar5);
    puVar2 = puVar1;
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108be4218; end: 108be4267;  */

void FUN_108be4218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100bf119c();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be4268; end: 108be42ab; -[SCSnapchattersDataProvider _logFetchSuggestionLatency:] */

void FUN_108be4268(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a65e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108be42ac; end: 108be4323; -[SCSnapchattersDataProvider _logOutgoingSnapchattersFetchBeforeDataFullySyncedIfNeeded] */

void FUN_108be42ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0738c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108be4324; end: 108be4373; -[SCSnapchattersDataProvider _recentSnapchatterPredicate] */

void FUN_108be4324(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108be4374;
  puStack_20 = &UNK_11085a548;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be4374; end: 108be447f;  */

uint FUN_108be4374(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_2;
      func_0x00010901ca64(param_2);
      uVar6 = (uint)uVar1 ^ 1;
      goto LAB_108be4460;
    }
  }
  else {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar6 = 0;
LAB_108be4460:
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 108be4480; end: 108be450f; -[SCSnapchattersDataProvider .cxx_destruct] */

void FUN_108be4480(long param_1)

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



/* Entry: 108be4510; end: 108be4517;  */

/* WARNING: Possible PIC construction at 0x000100c4306c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c43070) */
/* WARNING: Removing unreachable block (ram,0x000100c431b4) */
/* WARNING: Removing unreachable block (ram,0x000100c431bc) */
/* WARNING: Removing unreachable block (ram,0x000100c431c4) */
/* WARNING: Removing unreachable block (ram,0x000100c431cc) */
/* WARNING: Removing unreachable block (ram,0x000100c431e0) */
/* WARNING: Removing unreachable block (ram,0x000100c431ec) */
/* WARNING: Removing unreachable block (ram,0x000100c431f8) */
/* WARNING: Removing unreachable block (ram,0x000100c43204) */
/* WARNING: Removing unreachable block (ram,0x000100c4320c) */
/* WARNING: Removing unreachable block (ram,0x000100c43210) */
/* WARNING: Removing unreachable block (ram,0x000100c43224) */
/* WARNING: Removing unreachable block (ram,0x000100c43230) */
/* WARNING: Removing unreachable block (ram,0x000100c4323c) */
/* WARNING: Removing unreachable block (ram,0x000100c43248) */
/* WARNING: Removing unreachable block (ram,0x000100c43250) */
/* WARNING: Removing unreachable block (ram,0x000100c43254) */
/* WARNING: Removing unreachable block (ram,0x000100c43268) */
/* WARNING: Removing unreachable block (ram,0x000100c43274) */
/* WARNING: Removing unreachable block (ram,0x000100c43280) */
/* WARNING: Removing unreachable block (ram,0x000100c4328c) */
/* WARNING: Removing unreachable block (ram,0x000100c43294) */
/* WARNING: Removing unreachable block (ram,0x000100c43298) */
/* WARNING: Removing unreachable block (ram,0x000100c432f0) */
/* WARNING: Removing unreachable block (ram,0x000100c43320) */
/* WARNING: Removing unreachable block (ram,0x000100c43330) */
/* WARNING: Removing unreachable block (ram,0x000100c432d4) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

undefined8 FUN_108be4510(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_a0,param_2);
  }
  if ((bRam0000000113828fc0 & 1) == 0) {
    iVar1 = 0x13828fc0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000100c433f0();
      uRam0000000113828f58 = 2;
      uRam0000000113828f68 = 0;
      uRam0000000113828f69 = uRam0000000113829499;
      uRam0000000113828f6b = uRam000000011382949b;
      ppuRam0000000113828f50 = &PTR_DAT_1108629c8;
      uRam0000000113828f88 = 0x113829480;
      uRam0000000113828f98 = 0;
      uRam0000000113828f90 = 0;
      uRam0000000113828fa8 = 0;
      uRam0000000113828fa0 = 0;
      uRam0000000113828fb8 = 0;
      uRam0000000113828fb0 = 0;
      func_0x000107c60e34(&DAT_105007830,0x113828f50,0x100000000);
      func_0x000107c60e4c(0x113828fc0);
    }
  }
  return 0x113828f50;
}



/* Entry: 108be4518; end: 108be458b;  */

void FUN_108be4518(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126db0b0;
  _objc_alloc(PTR_PTR_1126db0b0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049ec0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108be458c; end: 108be45c3;  */

void FUN_108be458c(void)

{
  _objc_alloc(PTR_PTR_1126db0a8);
  func_0x00010c00dac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be45c4; end: 108be45cf;  */

void FUN_108be45c4(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_91c;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined8 uStack_908;
  undefined **ppuStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8e8;
  undefined **ppuStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  undefined1 uStack_889;
  undefined **ppuStack_888;
  undefined4 uStack_880;
  undefined2 uStack_870;
  byte bStack_86e;
  byte bStack_86d;
  undefined1 *puStack_850;
  undefined ***pppuStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long *plStack_828;
  long *plStack_820;
  undefined1 uStack_811;
  undefined **ppuStack_810;
  undefined4 uStack_808;
  undefined1 uStack_7f8;
  byte bStack_7f7;
  byte bStack_7f6;
  byte bStack_7f5;
  undefined1 *puStack_7d8;
  undefined8 uStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long *plStack_7b0;
  long *plStack_7a8;
  undefined1 uStack_799;
  undefined **ppuStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  byte bStack_77f;
  byte bStack_77e;
  undefined1 uStack_77d;
  undefined1 *puStack_760;
  undefined8 uStack_758;
  long lStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long *plStack_738;
  long *plStack_730;
  undefined1 uStack_721;
  undefined **ppuStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined1 uStack_6a2;
  undefined1 uStack_6a1;
  undefined **ppuStack_6a0;
  undefined4 uStack_698;
  undefined1 uStack_688;
  byte bStack_687;
  byte bStack_686;
  byte bStack_685;
  undefined8 **ppuStack_668;
  undefined1 *puStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  long *plStack_638;
  undefined **ppuStack_630;
  undefined4 uStack_628;
  undefined1 uStack_618;
  byte bStack_617;
  byte bStack_616;
  byte bStack_615;
  undefined ***pppuStack_5f8;
  undefined ***pppuStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  undefined **ppuStack_5c0;
  undefined4 uStack_5b8;
  undefined1 uStack_5a8;
  byte bStack_5a7;
  byte bStack_5a6;
  byte bStack_5a5;
  undefined ***pppuStack_588;
  undefined ***pppuStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined **ppuStack_550;
  undefined4 uStack_548;
  undefined1 uStack_538;
  byte bStack_537;
  byte bStack_536;
  byte bStack_535;
  undefined ***pppuStack_518;
  undefined ***pppuStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined **ppuStack_4e0;
  undefined4 uStack_4d8;
  short sStack_4c8;
  byte bStack_4c6;
  byte bStack_4c5;
  undefined ***pppuStack_4a8;
  undefined ***pppuStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined **ppuStack_408;
  undefined ***pppuStack_400;
  undefined8 uStack_3f8;
  undefined ***pppuStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 **ppuStack_3d0;
  undefined *puStack_3c8;
  long lStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a9;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 uStack_371;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined1 uStack_358;
  byte bStack_357;
  byte bStack_356;
  undefined1 uStack_355;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined1 uStack_2e0;
  byte bStack_2df;
  byte bStack_2de;
  undefined1 uStack_2dd;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined1 uStack_281;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined1 uStack_268;
  byte bStack_267;
  byte bStack_266;
  byte bStack_265;
  undefined1 *puStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined1 uStack_1f8;
  byte bStack_1f7;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined8 uStack_150;
  long alStack_148 [3];
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c9;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_91;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    ppuStack_90 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_90,param_2);
  }
  puVar4 = &uStack_91;
  func_0x000108c2e2f8();
  puVar5 = &uStack_c9;
  func_0x000108c2db04();
  uStack_58 = *(undefined8 *)(puVar5 + 0x10);
  uStack_50 = puVar5[0x19];
  uStack_4f = puVar5[0x18];
  uStack_40 = *(undefined8 *)(puVar5 + 0x28);
  uStack_4c = 1;
  puStack_48 = &UNK_100c43d7c;
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  func_0x000100c435d0(&lStack_c8,&uStack_58,&lStack_38,1);
  func_0x000100c436b8(&lStack_b0,&lStack_c8);
  uStack_d0 = 200;
  pppuVar6 = &ppuStack_90;
  func_0x000107c310cc(pppuVar6,puVar4,&lStack_b0,&uStack_d0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000104d96620(&ppuStack_90);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_d8 = &LAB_108c18de8;
    alStack_148[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_3b8 = lVar7;
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar7 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,lVar7);
    }
    puVar4 = &uStack_281;
    func_0x000108c2e2f8();
    puVar5 = &uStack_2f9;
    func_0x000108c2dcd4();
    bStack_2df = puVar5[0x19];
    bStack_2de = puVar5[0x1a];
    uStack_2f0 = 0;
    uStack_2e0 = 0;
    uStack_2dd = 1;
    ppuStack_2f8 = &PTR_DAT_1108629c8;
    lStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    plStack_290 = (long *)0x0;
    plStack_298 = (long *)0x0;
    bVar2 = puVar4[0x19] | bStack_2df;
    bVar3 = puVar4[0x1a] | bStack_2de;
    bVar1 = puVar4[0x1b];
    uStack_278 = 4;
    uStack_268 = 0;
    ppuStack_280 = &PTR_DAT_1108629c8;
    pppuStack_240 = &ppuStack_2f8;
    plStack_218 = (long *)0x0;
    uStack_230 = 0;
    lStack_238 = 0;
    plStack_220 = (long *)0x0;
    uStack_228 = 0;
    puVar8 = &uStack_371;
    puStack_2c0 = puVar5;
    bStack_267 = bVar2;
    bStack_266 = bVar3;
    bStack_265 = bVar1;
    puStack_248 = puVar4;
    func_0x000107c2a7fc();
    bStack_357 = puVar8[0x19];
    bStack_356 = puVar8[0x1a];
    uStack_368 = 0;
    uStack_358 = 0;
    uStack_355 = 1;
    ppuStack_370 = &PTR_DAT_1108629c8;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    plStack_308 = (long *)0x0;
    plStack_310 = (long *)0x0;
    bStack_1f7 = bStack_357 | bVar2;
    bStack_1f6 = bStack_356 | bVar3;
    uStack_208 = 4;
    uStack_1f8 = 0;
    ppuStack_210 = &PTR_DAT_1108629c8;
    pppuStack_1d8 = &ppuStack_280;
    pppuStack_1d0 = &ppuStack_370;
    plStack_1a8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1c8 = 0;
    puVar4 = &uStack_3a9;
    puStack_338 = puVar8;
    bStack_1f5 = bVar1;
    func_0x000108c2e074();
    uStack_168 = *(undefined8 *)(puVar4 + 0x10);
    uStack_160 = puVar4[0x19];
    uStack_15f = puVar4[0x18];
    uStack_150 = *(undefined8 *)(puVar4 + 0x28);
    uStack_15c = 1;
    puStack_158 = &UNK_100c43d7c;
    lStack_3a0 = 0;
    uStack_398 = 0;
    lStack_3a8 = 0;
    func_0x000100c435d0(&lStack_3a8,&uStack_168,alStack_148,1);
    func_0x000100c436b8(&lStack_390,&lStack_3a8);
    uStack_3b0 = 0;
    pppuVar6 = &ppuStack_1a0;
    pppuVar11 = &ppuStack_210;
    plVar17 = &lStack_390;
    func_0x000107c310cc(pppuVar6,pppuVar11,plVar17,&uStack_3b0);
    uVar15 = SUB84(pppuVar11,0);
    iVar16 = (int)plVar17;
    _objc_retainAutoreleasedReturnValue();
    if (lStack_390 != 0) {
      lStack_388 = lStack_390;
      __ZdlPv();
    }
    lVar7 = lStack_3b8;
    if (lStack_3a8 != 0) {
      lStack_3a0 = lStack_3a8;
      __ZdlPv();
    }
    plVar17 = plStack_1a8;
    ppuStack_210 = &PTR_DAT_1108629c8;
    plStack_1a8 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_1b0;
    plStack_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_1c8 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_308;
    ppuStack_370 = &PTR_DAT_1108629c8;
    plStack_308 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_310;
    plStack_310 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_328 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_218;
    ppuStack_280 = &PTR_DAT_1108629c8;
    plStack_218 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_238 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_290;
    ppuStack_2f8 = &PTR_DAT_1108629c8;
    plStack_290 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_298;
    plStack_298 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_2b0 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    lVar9 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_148[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_210);
      func_0x000105007830(&ppuStack_370);
      func_0x000105007830(&ppuStack_280);
      func_0x000105007830(&ppuStack_2f8);
      func_0x000104d96620(&ppuStack_1a0);
      _objc_release(lStack_3b8);
      lVar10 = lVar9;
      __Unwind_Resume();
      ppuStack_408 = &PTR_DAT_1108629c8;
      uStack_3f8 = 1;
      puStack_3e8 = &UNK_1108629b8;
      lStack_3d8 = lVar7;
      puStack_3c8 = &SUB_108c191cc;
      uStack_420 = (ulong)bVar1;
      uStack_418 = (ulong)bVar3;
      uStack_410 = (ulong)bVar2;
      pppuStack_400 = &ppuStack_2f8;
      pppuStack_3f0 = &ppuStack_210;
      lStack_3e0 = lVar9;
      ppuStack_3d0 = &puStack_e0;
      _objc_retain();
      pppuStack_518 = &ppuStack_5c0;
      if (iVar16 == 0) {
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (lVar10 == 0) {
          uStack_6f0 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
          uStack_708 = 0;
          uStack_710 = 0;
          uStack_718 = 0;
          ppuStack_720 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_720,lVar10);
        }
        pppuVar6 = &ppuStack_888;
        func_0x000108c2e2f8();
        pppuVar11 = &ppuStack_900;
        func_0x000108c2d860();
        bStack_5a5 = *(byte *)((long)pppuVar6 + 0x1b) & *(byte *)((long)pppuVar11 + 0x1b);
        bStack_5a7 = (*(byte *)((long)pppuVar6 + 0x19) | *(byte *)((long)pppuVar11 + 0x19)) & 1;
        bStack_5a6 = (*(byte *)((long)pppuVar6 + 0x1a) | *(byte *)((long)pppuVar11 + 0x1a)) & 1;
        uStack_5b8 = 4;
        uStack_5a8 = 0;
        ppuStack_5c0 = &PTR_DAT_1108629c8;
        plStack_558 = (long *)0x0;
        plStack_560 = (long *)0x0;
        uStack_568 = 0;
        uStack_570 = 0;
        lStack_578 = 0;
        pppuVar12 = &ppuStack_470;
        pppuStack_588 = pppuVar6;
        pppuStack_580 = pppuVar11;
        func_0x000108c2dcd4();
        bStack_617 = *(byte *)((long)pppuVar12 + 0x19);
        bStack_616 = *(byte *)((long)pppuVar12 + 0x1a);
        uStack_628 = 0;
        uStack_618 = 0;
        bStack_615 = 1;
        ppuStack_630 = &PTR_DAT_1108629c8;
        lStack_5e8 = 0;
        pppuStack_5f0 = (undefined ***)0x0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        plStack_5c8 = (long *)0x0;
        plStack_5d0 = (long *)0x0;
        bStack_537 = bStack_5a7 | bStack_617;
        bStack_536 = bStack_5a6 | bStack_616;
        uStack_548 = 4;
        uStack_538 = 0;
        bStack_535 = bStack_5a5;
        ppuStack_550 = &PTR_DAT_1108629c8;
        pppuStack_510 = &ppuStack_630;
        uStack_500 = 0;
        lStack_508 = 0;
        plStack_4f0 = (long *)0x0;
        uStack_4f8 = 0;
        plStack_4e8 = (long *)0x0;
        ppuVar13 = &puStack_918;
        pppuStack_5f8 = pppuVar12;
        func_0x000107c2a7fc();
        bStack_687 = *(byte *)((long)ppuVar13 + 0x19);
        bStack_686 = *(byte *)((long)ppuVar13 + 0x1a);
        uStack_698 = 0;
        uStack_688 = 0;
        bStack_685 = 1;
        ppuStack_6a0 = &PTR_DAT_1108629c8;
        lStack_658 = 0;
        puStack_660 = (undefined1 *)0x0;
        uStack_648 = 0;
        uStack_650 = 0;
        plStack_638 = (long *)0x0;
        plStack_640 = (long *)0x0;
        bStack_4c6 = bStack_536 | bStack_686;
        uStack_4d8 = 4;
        sStack_4c8 = (ushort)(bStack_537 | bStack_687) << 8;
        bStack_4c5 = bStack_535;
        ppuStack_4e0 = &PTR_DAT_1108629c8;
        pppuStack_4a8 = &ppuStack_550;
        pppuStack_4a0 = &ppuStack_6a0;
        uStack_490 = 0;
        lStack_498 = 0;
        plStack_480 = (long *)0x0;
        uStack_488 = 0;
        plStack_478 = (long *)0x0;
        ppuStack_798 = (undefined **)0x0;
        uStack_790 = (undefined **)0x0;
        uStack_788 = 0;
        ppuStack_810 = (undefined **)CONCAT44(ppuStack_810._4_4_,uVar15);
        pppuVar6 = &ppuStack_720;
        ppuStack_668 = ppuVar13;
        func_0x000107c310cc(pppuVar6,&ppuStack_4e0,&ppuStack_798,&ppuStack_810);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_798 != (undefined **)0x0) {
          uStack_790 = ppuStack_798;
          __ZdlPv();
        }
        plVar17 = plStack_478;
        ppuStack_4e0 = &PTR_DAT_1108629c8;
        plStack_478 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_480;
        plStack_480 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_498 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_638;
        ppuStack_6a0 = &PTR_DAT_1108629c8;
        plStack_638 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_640;
        plStack_640 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_658 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_4e8;
        ppuStack_550 = &PTR_DAT_1108629c8;
        plStack_4e8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_4f0;
        plStack_4f0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_508 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_5c8;
        ppuStack_630 = &PTR_DAT_1108629c8;
        plStack_5c8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_5d0;
        plStack_5d0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_5e8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_558;
        ppuStack_5c0 = &PTR_DAT_1108629c8;
        plStack_558 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_560;
        plStack_560 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_578 != 0) {
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_6f8);
        _objc_release(uStack_708);
        uVar14 = uStack_710;
      }
      else {
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (lVar10 == 0) {
          uStack_440 = 0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_448 = 0;
          uStack_450 = 0;
          uStack_468 = 0;
          ppuStack_470 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_470,lVar10);
        }
        ppuVar13 = (undefined8 **)&uStack_6a1;
        func_0x000108c2e2f8();
        puVar4 = &uStack_6a2;
        func_0x000108c2d860();
        bStack_685 = *(byte *)((long)ppuVar13 + 0x1b) & puVar4[0x1b];
        bStack_687 = (*(byte *)((long)ppuVar13 + 0x19) | puVar4[0x19]) & 1;
        bStack_686 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar4[0x1a]) & 1;
        uStack_698 = 4;
        uStack_688 = 0;
        ppuStack_6a0 = &PTR_DAT_1108629c8;
        plStack_638 = (long *)0x0;
        plStack_640 = (long *)0x0;
        uStack_648 = 0;
        uStack_650 = 0;
        lStack_658 = 0;
        puVar5 = &uStack_721;
        ppuStack_668 = ppuVar13;
        puStack_660 = puVar4;
        func_0x000108c2dcd4();
        uStack_718 = (ulong)uStack_718._4_4_ << 0x20;
        uStack_708._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar5 + 0x19) << 8);
        ppuStack_720 = &PTR_DAT_1108629c8;
        lStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        plStack_6b8 = (long *)0x0;
        plStack_6c0 = (long *)0x0;
        bStack_617 = bStack_687 | (byte)*(ushort *)(puVar5 + 0x19);
        bStack_616 = bStack_686 | puVar5[0x1a];
        uStack_628 = 4;
        uStack_618 = 0;
        bStack_615 = bStack_685;
        ppuStack_630 = &PTR_DAT_1108629c8;
        pppuStack_5f0 = &ppuStack_720;
        uStack_5e0 = 0;
        lStack_5e8 = 0;
        plStack_5d0 = (long *)0x0;
        uStack_5d8 = 0;
        plStack_5c8 = (long *)0x0;
        puVar4 = &uStack_799;
        puStack_6e8 = puVar5;
        pppuStack_5f8 = &ppuStack_6a0;
        func_0x000107c2a7fc();
        bStack_77f = puVar4[0x19];
        bStack_77e = puVar4[0x1a];
        uStack_790 = (undefined **)((ulong)uStack_790._4_4_ << 0x20);
        uStack_780 = 0;
        uStack_77d = 1;
        ppuStack_798 = &PTR_DAT_1108629c8;
        lStack_750 = 0;
        uStack_758 = 0;
        uStack_740 = 0;
        uStack_748 = 0;
        plStack_730 = (long *)0x0;
        plStack_738 = (long *)0x0;
        bStack_5a7 = bStack_617 | bStack_77f;
        bStack_5a6 = bStack_616 | bStack_77e;
        uStack_5b8 = 4;
        uStack_5a8 = 0;
        bStack_5a5 = bStack_615;
        ppuStack_5c0 = &PTR_DAT_1108629c8;
        pppuStack_588 = &ppuStack_630;
        pppuStack_580 = &ppuStack_798;
        uStack_570 = 0;
        lStack_578 = 0;
        plStack_560 = (long *)0x0;
        uStack_568 = 0;
        plStack_558 = (long *)0x0;
        puVar5 = &uStack_811;
        puStack_760 = puVar4;
        func_0x000108c2d918();
        bStack_7f7 = puVar5[0x19];
        bStack_7f6 = puVar5[0x1a];
        bStack_7f5 = puVar5[0x1b];
        uStack_808 = 2;
        uStack_7f8 = 0;
        ppuStack_810 = &PTR_SUB_110862700;
        puStack_7c8 = (undefined *)0x0;
        uStack_7d0 = 0;
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        plStack_7a8 = (long *)0x0;
        plStack_7b0 = (long *)0x0;
        bStack_537 = bStack_5a7 | bStack_7f7;
        bStack_536 = bStack_5a6 | bStack_7f6;
        bStack_535 = bStack_5a5 & bStack_7f5;
        uStack_548 = 4;
        uStack_538 = 0;
        ppuStack_550 = &PTR_DAT_1108629c8;
        pppuStack_510 = &ppuStack_810;
        uStack_500 = 0;
        lStack_508 = 0;
        plStack_4f0 = (long *)0x0;
        uStack_4f8 = 0;
        plStack_4e8 = (long *)0x0;
        puVar4 = &uStack_889;
        puStack_7d8 = puVar5;
        func_0x000108c2d918();
        uStack_8f8 = 0xf;
        uStack_8e8 = 0x100;
        ppuStack_8d0 = &PTR____CFConstantStringClassReference_110daafd8;
        ppuStack_900 = &PTR_DAT_110862760;
        uStack_8c0 = 0;
        uStack_8c8 = 0;
        uStack_8b0 = 0;
        uStack_8b8 = 0;
        plStack_8a0 = (long *)0x0;
        uStack_8a8 = 0;
        plStack_898 = (long *)0x0;
        bStack_86e = puVar4[0x1a];
        bStack_86d = puVar4[0x1b];
        uStack_880 = 0xb;
        uStack_870 = 0x100;
        ppuStack_888 = &PTR_SUB_110862700;
        pppuStack_4a0 = &ppuStack_888;
        plStack_820 = (long *)0x0;
        uStack_838 = 0;
        uStack_840 = 0;
        plStack_828 = (long *)0x0;
        uStack_830 = 0;
        bStack_4c6 = bStack_536 | bStack_86e;
        bStack_4c5 = bStack_535 & bStack_86d;
        uStack_4d8 = 4;
        sStack_4c8 = 0x100;
        ppuStack_4e0 = &PTR_DAT_1108629c8;
        pppuStack_4a8 = &ppuStack_550;
        uStack_490 = 0;
        lStack_498 = 0;
        plStack_480 = (long *)0x0;
        uStack_488 = 0;
        plStack_478 = (long *)0x0;
        puStack_918 = (undefined8 *)0x0;
        puStack_910 = (undefined8 *)0x0;
        uStack_908 = 0;
        pppuVar6 = &ppuStack_470;
        uStack_91c = uVar15;
        puStack_850 = puVar4;
        pppuStack_848 = &ppuStack_900;
        func_0x000107c310cc(pppuVar6,&ppuStack_4e0,&puStack_918,&uStack_91c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_918 != (undefined8 *)0x0) {
          puStack_910 = puStack_918;
          __ZdlPv();
        }
        plVar17 = plStack_478;
        ppuStack_4e0 = &PTR_DAT_1108629c8;
        plStack_478 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_480;
        plStack_480 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_498 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_820;
        ppuStack_888 = &PTR_SUB_110862700;
        plStack_820 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_828;
        plStack_828 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        puStack_918 = &uStack_840;
        func_0x000107c27dd4(&puStack_918);
        plVar17 = plStack_898;
        ppuStack_900 = &PTR_DAT_110862760;
        plStack_898 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_8a0;
        plStack_8a0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        puStack_918 = &uStack_8b8;
        func_0x000107c27dd4(&puStack_918);
        _objc_release(ppuStack_8d0);
        plVar17 = plStack_4e8;
        ppuStack_550 = &PTR_DAT_1108629c8;
        plStack_4e8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_4f0;
        plStack_4f0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_508 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_7a8;
        ppuStack_810 = &PTR_SUB_110862700;
        plStack_7a8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_7b0;
        plStack_7b0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        ppuStack_888 = &puStack_7c8;
        func_0x000107c27dd4(&ppuStack_888);
        plVar17 = plStack_558;
        ppuStack_5c0 = &PTR_DAT_1108629c8;
        plStack_558 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_560;
        plStack_560 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_578 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_730;
        ppuStack_798 = &PTR_DAT_1108629c8;
        plStack_730 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_738;
        plStack_738 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_750 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_5c8;
        ppuStack_630 = &PTR_DAT_1108629c8;
        plStack_5c8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_5d0;
        plStack_5d0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_5e8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_6b8;
        ppuStack_720 = &PTR_DAT_1108629c8;
        plStack_6b8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_6c0;
        plStack_6c0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_6d8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_638;
        ppuStack_6a0 = &PTR_DAT_1108629c8;
        plStack_638 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_640;
        plStack_640 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_658 != 0) {
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_448);
        _objc_release(uStack_458);
        uVar14 = uStack_460;
      }
      _objc_release(uVar14);
      _objc_release(lVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar6);
  return;
}



/* Entry: 108be45d0; end: 108be4607;  */

void FUN_108be45d0(void)

{
  _objc_alloc(PTR_PTR_1126db0a8);
  func_0x00010c00dac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be4608; end: 108be460f;  */

void FUN_108be4608(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_9dc;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 uStack_9c8;
  undefined **ppuStack_9c0;
  undefined4 uStack_9b8;
  undefined4 uStack_9a8;
  undefined **ppuStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long *plStack_960;
  long *plStack_958;
  undefined1 uStack_949;
  undefined **ppuStack_948;
  undefined4 uStack_940;
  undefined2 uStack_930;
  byte bStack_92e;
  byte bStack_92d;
  undefined1 *puStack_910;
  undefined ***pppuStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  undefined1 uStack_8d1;
  undefined **ppuStack_8d0;
  undefined4 uStack_8c8;
  undefined1 uStack_8b8;
  byte bStack_8b7;
  byte bStack_8b6;
  byte bStack_8b5;
  undefined1 *puStack_898;
  undefined8 uStack_890;
  undefined *puStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long *plStack_870;
  long *plStack_868;
  undefined1 uStack_859;
  undefined **ppuStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 uStack_840;
  byte bStack_83f;
  byte bStack_83e;
  undefined1 uStack_83d;
  undefined1 *puStack_820;
  undefined8 uStack_818;
  long lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long *plStack_7f8;
  long *plStack_7f0;
  undefined1 uStack_7e1;
  undefined **ppuStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined1 uStack_762;
  undefined1 uStack_761;
  undefined **ppuStack_760;
  undefined4 uStack_758;
  undefined1 uStack_748;
  byte bStack_747;
  byte bStack_746;
  byte bStack_745;
  undefined8 **ppuStack_728;
  undefined1 *puStack_720;
  long lStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined **ppuStack_6f0;
  undefined4 uStack_6e8;
  undefined1 uStack_6d8;
  byte bStack_6d7;
  byte bStack_6d6;
  byte bStack_6d5;
  undefined ***pppuStack_6b8;
  undefined ***pppuStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long *plStack_690;
  long *plStack_688;
  undefined **ppuStack_680;
  undefined4 uStack_678;
  undefined1 uStack_668;
  byte bStack_667;
  byte bStack_666;
  byte bStack_665;
  undefined ***pppuStack_648;
  undefined ***pppuStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined **ppuStack_610;
  undefined4 uStack_608;
  undefined1 uStack_5f8;
  byte bStack_5f7;
  byte bStack_5f6;
  byte bStack_5f5;
  undefined ***pppuStack_5d8;
  undefined ***pppuStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  undefined **ppuStack_5a0;
  undefined4 uStack_598;
  short sStack_588;
  byte bStack_586;
  byte bStack_585;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined **ppuStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined **ppuStack_4c8;
  undefined ***pppuStack_4c0;
  undefined8 uStack_4b8;
  undefined ***pppuStack_4b0;
  undefined *puStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 **ppuStack_490;
  undefined *puStack_488;
  long lStack_478;
  undefined4 uStack_470;
  undefined1 uStack_469;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined4 uStack_428;
  undefined1 uStack_418;
  byte bStack_417;
  byte bStack_416;
  undefined1 uStack_415;
  undefined1 *puStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined1 uStack_3b9;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a0;
  byte bStack_39f;
  byte bStack_39e;
  undefined1 uStack_39d;
  undefined1 *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined1 uStack_341;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined1 uStack_328;
  byte bStack_327;
  byte bStack_326;
  byte bStack_325;
  undefined1 *puStack_308;
  undefined ***pppuStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined **ppuStack_2d0;
  undefined4 uStack_2c8;
  undefined1 uStack_2b8;
  byte bStack_2b7;
  byte bStack_2b6;
  byte bStack_2b5;
  undefined ***pppuStack_298;
  undefined ***pppuStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined4 uStack_21c;
  undefined *puStack_218;
  undefined8 uStack_210;
  long alStack_208 [3];
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined1 uStack_189;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_151;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_b9;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    ppuStack_80 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_80,param_2);
  }
  puVar4 = &uStack_81;
  func_0x000108c2e2f8();
  puVar5 = &uStack_b9;
  func_0x000108c2db04();
  uStack_48 = *(undefined8 *)(puVar5 + 0x10);
  uStack_40 = puVar5[0x19];
  uStack_3f = puVar5[0x18];
  uStack_30 = *(undefined8 *)(puVar5 + 0x28);
  uStack_3c = 1;
  puStack_38 = &UNK_100c43d7c;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_b8 = 0;
  func_0x000100c435d0(&lStack_b8,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&lStack_a0,&lStack_b8);
  uStack_c0 = 0;
  pppuVar6 = &ppuStack_80;
  func_0x000107c310cc(pppuVar6,puVar4,&lStack_a0,&uStack_c0);
  uVar15 = SUB84(puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x000104d96620(&ppuStack_80);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_c8 = &LAB_108c18c4c;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar7 == 0) {
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      ppuStack_150 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_150,lVar7);
    }
    puVar4 = &uStack_151;
    func_0x000108c2e2f8();
    puVar5 = &uStack_189;
    func_0x000108c2db04();
    uStack_118 = *(undefined8 *)(puVar5 + 0x10);
    uStack_110 = puVar5[0x19];
    uStack_10f = puVar5[0x18];
    uStack_100 = *(undefined8 *)(puVar5 + 0x28);
    uStack_10c = 1;
    puStack_108 = &UNK_100c43d7c;
    lStack_180 = 0;
    uStack_178 = 0;
    lStack_188 = 0;
    func_0x000100c435d0(&lStack_188,&uStack_118,&lStack_f8,1);
    func_0x000100c436b8(&lStack_170,&lStack_188);
    pppuVar6 = &ppuStack_150;
    uStack_190 = uVar15;
    func_0x000107c310cc(pppuVar6,puVar4,&lStack_170,&uStack_190);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_170 != 0) {
      lStack_168 = lStack_170;
      __ZdlPv();
    }
    if (lStack_188 != 0) {
      lStack_180 = lStack_188;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_128);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    lVar8 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      func_0x000104d96620(&ppuStack_150);
      _objc_release(lVar7);
      __Unwind_Resume();
      puStack_198 = &LAB_108c18de8;
      alStack_208[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_1a0 = &puStack_d0;
      _objc_retain();
      lStack_478 = lVar8;
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar8 == 0) {
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_258 = 0;
        ppuStack_260 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_260,lVar8);
      }
      puVar4 = &uStack_341;
      func_0x000108c2e2f8();
      puVar5 = &uStack_3b9;
      func_0x000108c2dcd4();
      bStack_39f = puVar5[0x19];
      bStack_39e = puVar5[0x1a];
      uStack_3b0 = 0;
      uStack_3a0 = 0;
      uStack_39d = 1;
      ppuStack_3b8 = &PTR_DAT_1108629c8;
      lStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      plStack_350 = (long *)0x0;
      plStack_358 = (long *)0x0;
      bVar2 = puVar4[0x19] | bStack_39f;
      bVar3 = puVar4[0x1a] | bStack_39e;
      bVar1 = puVar4[0x1b];
      uStack_338 = 4;
      uStack_328 = 0;
      ppuStack_340 = &PTR_DAT_1108629c8;
      pppuStack_300 = &ppuStack_3b8;
      plStack_2d8 = (long *)0x0;
      uStack_2f0 = 0;
      lStack_2f8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2e8 = 0;
      puVar9 = &uStack_431;
      puStack_380 = puVar5;
      bStack_327 = bVar2;
      bStack_326 = bVar3;
      bStack_325 = bVar1;
      puStack_308 = puVar4;
      func_0x000107c2a7fc();
      bStack_417 = puVar9[0x19];
      bStack_416 = puVar9[0x1a];
      uStack_428 = 0;
      uStack_418 = 0;
      uStack_415 = 1;
      ppuStack_430 = &PTR_DAT_1108629c8;
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      plStack_3c8 = (long *)0x0;
      plStack_3d0 = (long *)0x0;
      bStack_2b7 = bStack_417 | bVar2;
      bStack_2b6 = bStack_416 | bVar3;
      uStack_2c8 = 4;
      uStack_2b8 = 0;
      ppuStack_2d0 = &PTR_DAT_1108629c8;
      pppuStack_298 = &ppuStack_340;
      pppuStack_290 = &ppuStack_430;
      plStack_268 = (long *)0x0;
      plStack_270 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_288 = 0;
      puVar4 = &uStack_469;
      puStack_3f8 = puVar9;
      bStack_2b5 = bVar1;
      func_0x000108c2e074();
      uStack_228 = *(undefined8 *)(puVar4 + 0x10);
      uStack_220 = puVar4[0x19];
      uStack_21f = puVar4[0x18];
      uStack_210 = *(undefined8 *)(puVar4 + 0x28);
      uStack_21c = 1;
      puStack_218 = &UNK_100c43d7c;
      lStack_460 = 0;
      uStack_458 = 0;
      lStack_468 = 0;
      func_0x000100c435d0(&lStack_468,&uStack_228,alStack_208,1);
      func_0x000100c436b8(&lStack_450,&lStack_468);
      uStack_470 = 0;
      pppuVar6 = &ppuStack_260;
      pppuVar11 = &ppuStack_2d0;
      plVar17 = &lStack_450;
      func_0x000107c310cc(pppuVar6,pppuVar11,plVar17,&uStack_470);
      uVar15 = SUB84(pppuVar11,0);
      iVar16 = (int)plVar17;
      _objc_retainAutoreleasedReturnValue();
      if (lStack_450 != 0) {
        lStack_448 = lStack_450;
        __ZdlPv();
      }
      lVar7 = lStack_478;
      if (lStack_468 != 0) {
        lStack_460 = lStack_468;
        __ZdlPv();
      }
      plVar17 = plStack_268;
      ppuStack_2d0 = &PTR_DAT_1108629c8;
      plStack_268 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_270;
      plStack_270 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_288 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_3c8;
      ppuStack_430 = &PTR_DAT_1108629c8;
      plStack_3c8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3d0;
      plStack_3d0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3e8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_2d8;
      ppuStack_340 = &PTR_DAT_1108629c8;
      plStack_2d8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_2e0;
      plStack_2e0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_2f8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_350;
      ppuStack_3b8 = &PTR_DAT_1108629c8;
      plStack_350 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_358;
      plStack_358 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_370 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_238);
      _objc_release(uStack_248);
      _objc_release(uStack_250);
      lVar8 = lVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_208[0]) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_2d0);
        func_0x000105007830(&ppuStack_430);
        func_0x000105007830(&ppuStack_340);
        func_0x000105007830(&ppuStack_3b8);
        func_0x000104d96620(&ppuStack_260);
        _objc_release(lStack_478);
        lVar10 = lVar8;
        __Unwind_Resume();
        ppuStack_4c8 = &PTR_DAT_1108629c8;
        uStack_4b8 = 1;
        puStack_4a8 = &UNK_1108629b8;
        lStack_498 = lVar7;
        puStack_488 = &SUB_108c191cc;
        uStack_4e0 = (ulong)bVar1;
        uStack_4d8 = (ulong)bVar3;
        uStack_4d0 = (ulong)bVar2;
        pppuStack_4c0 = &ppuStack_3b8;
        pppuStack_4b0 = &ppuStack_2d0;
        lStack_4a0 = lVar8;
        ppuStack_490 = &ppuStack_1a0;
        _objc_retain();
        pppuStack_5d8 = &ppuStack_680;
        if (iVar16 == 0) {
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (lVar10 == 0) {
            uStack_7b0 = 0;
            uStack_7b8 = 0;
            uStack_7c0 = 0;
            uStack_7c8 = 0;
            uStack_7d0 = 0;
            uStack_7d8 = 0;
            ppuStack_7e0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_7e0,lVar10);
          }
          pppuVar6 = &ppuStack_948;
          func_0x000108c2e2f8();
          pppuVar11 = &ppuStack_9c0;
          func_0x000108c2d860();
          bStack_665 = *(byte *)((long)pppuVar6 + 0x1b) & *(byte *)((long)pppuVar11 + 0x1b);
          bStack_667 = (*(byte *)((long)pppuVar6 + 0x19) | *(byte *)((long)pppuVar11 + 0x19)) & 1;
          bStack_666 = (*(byte *)((long)pppuVar6 + 0x1a) | *(byte *)((long)pppuVar11 + 0x1a)) & 1;
          uStack_678 = 4;
          uStack_668 = 0;
          ppuStack_680 = &PTR_DAT_1108629c8;
          plStack_618 = (long *)0x0;
          plStack_620 = (long *)0x0;
          uStack_628 = 0;
          uStack_630 = 0;
          lStack_638 = 0;
          pppuVar12 = &ppuStack_530;
          pppuStack_648 = pppuVar6;
          pppuStack_640 = pppuVar11;
          func_0x000108c2dcd4();
          bStack_6d7 = *(byte *)((long)pppuVar12 + 0x19);
          bStack_6d6 = *(byte *)((long)pppuVar12 + 0x1a);
          uStack_6e8 = 0;
          uStack_6d8 = 0;
          bStack_6d5 = 1;
          ppuStack_6f0 = &PTR_DAT_1108629c8;
          lStack_6a8 = 0;
          pppuStack_6b0 = (undefined ***)0x0;
          uStack_698 = 0;
          uStack_6a0 = 0;
          plStack_688 = (long *)0x0;
          plStack_690 = (long *)0x0;
          bStack_5f7 = bStack_667 | bStack_6d7;
          bStack_5f6 = bStack_666 | bStack_6d6;
          uStack_608 = 4;
          uStack_5f8 = 0;
          bStack_5f5 = bStack_665;
          ppuStack_610 = &PTR_DAT_1108629c8;
          pppuStack_5d0 = &ppuStack_6f0;
          uStack_5c0 = 0;
          lStack_5c8 = 0;
          plStack_5b0 = (long *)0x0;
          uStack_5b8 = 0;
          plStack_5a8 = (long *)0x0;
          ppuVar13 = &puStack_9d8;
          pppuStack_6b8 = pppuVar12;
          func_0x000107c2a7fc();
          bStack_747 = *(byte *)((long)ppuVar13 + 0x19);
          bStack_746 = *(byte *)((long)ppuVar13 + 0x1a);
          uStack_758 = 0;
          uStack_748 = 0;
          bStack_745 = 1;
          ppuStack_760 = &PTR_DAT_1108629c8;
          lStack_718 = 0;
          puStack_720 = (undefined1 *)0x0;
          uStack_708 = 0;
          uStack_710 = 0;
          plStack_6f8 = (long *)0x0;
          plStack_700 = (long *)0x0;
          bStack_586 = bStack_5f6 | bStack_746;
          uStack_598 = 4;
          sStack_588 = (ushort)(bStack_5f7 | bStack_747) << 8;
          bStack_585 = bStack_5f5;
          ppuStack_5a0 = &PTR_DAT_1108629c8;
          pppuStack_568 = &ppuStack_610;
          pppuStack_560 = &ppuStack_760;
          uStack_550 = 0;
          lStack_558 = 0;
          plStack_540 = (long *)0x0;
          uStack_548 = 0;
          plStack_538 = (long *)0x0;
          ppuStack_858 = (undefined **)0x0;
          uStack_850 = (undefined **)0x0;
          uStack_848 = 0;
          ppuStack_8d0 = (undefined **)CONCAT44(ppuStack_8d0._4_4_,uVar15);
          pppuVar6 = &ppuStack_7e0;
          ppuStack_728 = ppuVar13;
          func_0x000107c310cc(pppuVar6,&ppuStack_5a0,&ppuStack_858,&ppuStack_8d0);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_858 != (undefined **)0x0) {
            uStack_850 = ppuStack_858;
            __ZdlPv();
          }
          plVar17 = plStack_538;
          ppuStack_5a0 = &PTR_DAT_1108629c8;
          plStack_538 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_540;
          plStack_540 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_558 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_6f8;
          ppuStack_760 = &PTR_DAT_1108629c8;
          plStack_6f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_700;
          plStack_700 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_718 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_5a8;
          ppuStack_610 = &PTR_DAT_1108629c8;
          plStack_5a8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_5b0;
          plStack_5b0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_5c8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_688;
          ppuStack_6f0 = &PTR_DAT_1108629c8;
          plStack_688 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_690;
          plStack_690 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_6a8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_618;
          ppuStack_680 = &PTR_DAT_1108629c8;
          plStack_618 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_620;
          plStack_620 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_638 != 0) {
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_7b8);
          _objc_release(uStack_7c8);
          uVar14 = uStack_7d0;
        }
        else {
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (lVar10 == 0) {
            uStack_500 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            uStack_508 = 0;
            uStack_510 = 0;
            uStack_528 = 0;
            ppuStack_530 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_530,lVar10);
          }
          ppuVar13 = (undefined8 **)&uStack_761;
          func_0x000108c2e2f8();
          puVar4 = &uStack_762;
          func_0x000108c2d860();
          bStack_745 = *(byte *)((long)ppuVar13 + 0x1b) & puVar4[0x1b];
          bStack_747 = (*(byte *)((long)ppuVar13 + 0x19) | puVar4[0x19]) & 1;
          bStack_746 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar4[0x1a]) & 1;
          uStack_758 = 4;
          uStack_748 = 0;
          ppuStack_760 = &PTR_DAT_1108629c8;
          plStack_6f8 = (long *)0x0;
          plStack_700 = (long *)0x0;
          uStack_708 = 0;
          uStack_710 = 0;
          lStack_718 = 0;
          puVar5 = &uStack_7e1;
          ppuStack_728 = ppuVar13;
          puStack_720 = puVar4;
          func_0x000108c2dcd4();
          uStack_7d8 = (ulong)uStack_7d8._4_4_ << 0x20;
          uStack_7c8._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar5 + 0x19) << 8);
          ppuStack_7e0 = &PTR_DAT_1108629c8;
          lStack_798 = 0;
          uStack_7a0 = 0;
          uStack_788 = 0;
          uStack_790 = 0;
          plStack_778 = (long *)0x0;
          plStack_780 = (long *)0x0;
          bStack_6d7 = bStack_747 | (byte)*(ushort *)(puVar5 + 0x19);
          bStack_6d6 = bStack_746 | puVar5[0x1a];
          uStack_6e8 = 4;
          uStack_6d8 = 0;
          bStack_6d5 = bStack_745;
          ppuStack_6f0 = &PTR_DAT_1108629c8;
          pppuStack_6b0 = &ppuStack_7e0;
          uStack_6a0 = 0;
          lStack_6a8 = 0;
          plStack_690 = (long *)0x0;
          uStack_698 = 0;
          plStack_688 = (long *)0x0;
          puVar4 = &uStack_859;
          puStack_7a8 = puVar5;
          pppuStack_6b8 = &ppuStack_760;
          func_0x000107c2a7fc();
          bStack_83f = puVar4[0x19];
          bStack_83e = puVar4[0x1a];
          uStack_850 = (undefined **)((ulong)uStack_850._4_4_ << 0x20);
          uStack_840 = 0;
          uStack_83d = 1;
          ppuStack_858 = &PTR_DAT_1108629c8;
          lStack_810 = 0;
          uStack_818 = 0;
          uStack_800 = 0;
          uStack_808 = 0;
          plStack_7f0 = (long *)0x0;
          plStack_7f8 = (long *)0x0;
          bStack_667 = bStack_6d7 | bStack_83f;
          bStack_666 = bStack_6d6 | bStack_83e;
          uStack_678 = 4;
          uStack_668 = 0;
          bStack_665 = bStack_6d5;
          ppuStack_680 = &PTR_DAT_1108629c8;
          pppuStack_648 = &ppuStack_6f0;
          pppuStack_640 = &ppuStack_858;
          uStack_630 = 0;
          lStack_638 = 0;
          plStack_620 = (long *)0x0;
          uStack_628 = 0;
          plStack_618 = (long *)0x0;
          puVar5 = &uStack_8d1;
          puStack_820 = puVar4;
          func_0x000108c2d918();
          bStack_8b7 = puVar5[0x19];
          bStack_8b6 = puVar5[0x1a];
          bStack_8b5 = puVar5[0x1b];
          uStack_8c8 = 2;
          uStack_8b8 = 0;
          ppuStack_8d0 = &PTR_SUB_110862700;
          puStack_888 = (undefined *)0x0;
          uStack_890 = 0;
          uStack_878 = 0;
          uStack_880 = 0;
          plStack_868 = (long *)0x0;
          plStack_870 = (long *)0x0;
          bStack_5f7 = bStack_667 | bStack_8b7;
          bStack_5f6 = bStack_666 | bStack_8b6;
          bStack_5f5 = bStack_665 & bStack_8b5;
          uStack_608 = 4;
          uStack_5f8 = 0;
          ppuStack_610 = &PTR_DAT_1108629c8;
          pppuStack_5d0 = &ppuStack_8d0;
          uStack_5c0 = 0;
          lStack_5c8 = 0;
          plStack_5b0 = (long *)0x0;
          uStack_5b8 = 0;
          plStack_5a8 = (long *)0x0;
          puVar4 = &uStack_949;
          puStack_898 = puVar5;
          func_0x000108c2d918();
          uStack_9b8 = 0xf;
          uStack_9a8 = 0x100;
          ppuStack_990 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuStack_9c0 = &PTR_DAT_110862760;
          uStack_980 = 0;
          uStack_988 = 0;
          uStack_970 = 0;
          uStack_978 = 0;
          plStack_960 = (long *)0x0;
          uStack_968 = 0;
          plStack_958 = (long *)0x0;
          bStack_92e = puVar4[0x1a];
          bStack_92d = puVar4[0x1b];
          uStack_940 = 0xb;
          uStack_930 = 0x100;
          ppuStack_948 = &PTR_SUB_110862700;
          pppuStack_560 = &ppuStack_948;
          plStack_8e0 = (long *)0x0;
          uStack_8f8 = 0;
          uStack_900 = 0;
          plStack_8e8 = (long *)0x0;
          uStack_8f0 = 0;
          bStack_586 = bStack_5f6 | bStack_92e;
          bStack_585 = bStack_5f5 & bStack_92d;
          uStack_598 = 4;
          sStack_588 = 0x100;
          ppuStack_5a0 = &PTR_DAT_1108629c8;
          pppuStack_568 = &ppuStack_610;
          uStack_550 = 0;
          lStack_558 = 0;
          plStack_540 = (long *)0x0;
          uStack_548 = 0;
          plStack_538 = (long *)0x0;
          puStack_9d8 = (undefined8 *)0x0;
          puStack_9d0 = (undefined8 *)0x0;
          uStack_9c8 = 0;
          pppuVar6 = &ppuStack_530;
          uStack_9dc = uVar15;
          puStack_910 = puVar4;
          pppuStack_908 = &ppuStack_9c0;
          func_0x000107c310cc(pppuVar6,&ppuStack_5a0,&puStack_9d8,&uStack_9dc);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_9d8 != (undefined8 *)0x0) {
            puStack_9d0 = puStack_9d8;
            __ZdlPv();
          }
          plVar17 = plStack_538;
          ppuStack_5a0 = &PTR_DAT_1108629c8;
          plStack_538 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_540;
          plStack_540 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_558 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_8e0;
          ppuStack_948 = &PTR_SUB_110862700;
          plStack_8e0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_8e8;
          plStack_8e8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          puStack_9d8 = &uStack_900;
          func_0x000107c27dd4(&puStack_9d8);
          plVar17 = plStack_958;
          ppuStack_9c0 = &PTR_DAT_110862760;
          plStack_958 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_960;
          plStack_960 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          puStack_9d8 = &uStack_978;
          func_0x000107c27dd4(&puStack_9d8);
          _objc_release(ppuStack_990);
          plVar17 = plStack_5a8;
          ppuStack_610 = &PTR_DAT_1108629c8;
          plStack_5a8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_5b0;
          plStack_5b0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_5c8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_868;
          ppuStack_8d0 = &PTR_SUB_110862700;
          plStack_868 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_870;
          plStack_870 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          ppuStack_948 = &puStack_888;
          func_0x000107c27dd4(&ppuStack_948);
          plVar17 = plStack_618;
          ppuStack_680 = &PTR_DAT_1108629c8;
          plStack_618 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_620;
          plStack_620 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_638 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_7f0;
          ppuStack_858 = &PTR_DAT_1108629c8;
          plStack_7f0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_7f8;
          plStack_7f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_810 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_688;
          ppuStack_6f0 = &PTR_DAT_1108629c8;
          plStack_688 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_690;
          plStack_690 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_6a8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_778;
          ppuStack_7e0 = &PTR_DAT_1108629c8;
          plStack_778 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_780;
          plStack_780 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_798 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_6f8;
          ppuStack_760 = &PTR_DAT_1108629c8;
          plStack_6f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_700;
          plStack_700 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_718 != 0) {
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_508);
          _objc_release(uStack_518);
          uVar14 = uStack_520;
        }
        _objc_release(uVar14);
        _objc_release(lVar10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar6);
  return;
}



/* Entry: 108be4610; end: 108be4647;  */

void FUN_108be4610(void)

{
  _objc_alloc(PTR_PTR_1126db0a8);
  func_0x00010c00dac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be4648; end: 108be464f;  */

void FUN_108be4648(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_84c;
  undefined8 *puStack_848;
  undefined8 *puStack_840;
  undefined8 uStack_838;
  undefined **ppuStack_830;
  undefined4 uStack_828;
  undefined4 uStack_818;
  undefined **ppuStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined1 uStack_7b9;
  undefined **ppuStack_7b8;
  undefined4 uStack_7b0;
  undefined2 uStack_7a0;
  byte bStack_79e;
  byte bStack_79d;
  undefined1 *puStack_780;
  undefined ***pppuStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long *plStack_758;
  long *plStack_750;
  undefined1 uStack_741;
  undefined **ppuStack_740;
  undefined4 uStack_738;
  undefined1 uStack_728;
  byte bStack_727;
  byte bStack_726;
  byte bStack_725;
  undefined1 *puStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined1 uStack_6c9;
  undefined **ppuStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 uStack_6b0;
  byte bStack_6af;
  byte bStack_6ae;
  undefined1 uStack_6ad;
  undefined1 *puStack_690;
  undefined8 uStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long *plStack_668;
  long *plStack_660;
  undefined1 uStack_651;
  undefined **ppuStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 *puStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined1 uStack_5d2;
  undefined1 uStack_5d1;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined1 uStack_5b8;
  byte bStack_5b7;
  byte bStack_5b6;
  byte bStack_5b5;
  undefined8 **ppuStack_598;
  undefined1 *puStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined1 uStack_548;
  byte bStack_547;
  byte bStack_546;
  byte bStack_545;
  undefined ***pppuStack_528;
  undefined ***pppuStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  undefined1 uStack_4d8;
  byte bStack_4d7;
  byte bStack_4d6;
  byte bStack_4d5;
  undefined ***pppuStack_4b8;
  undefined ***pppuStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined1 uStack_468;
  byte bStack_467;
  byte bStack_466;
  byte bStack_465;
  undefined ***pppuStack_448;
  undefined ***pppuStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined **ppuStack_410;
  undefined4 uStack_408;
  short sStack_3f8;
  byte bStack_3f6;
  byte bStack_3f5;
  undefined ***pppuStack_3d8;
  undefined ***pppuStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined **ppuStack_338;
  undefined ***pppuStack_330;
  undefined8 uStack_328;
  undefined ***pppuStack_320;
  undefined *puStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  long lStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2d9;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2a1;
  undefined **ppuStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_288;
  byte bStack_287;
  byte bStack_286;
  undefined1 uStack_285;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined1 uStack_229;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined1 uStack_210;
  byte bStack_20f;
  byte bStack_20e;
  undefined1 uStack_20d;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_198;
  byte bStack_197;
  byte bStack_196;
  byte bStack_195;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined1 uStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_2e8 = param_2;
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    ppuStack_d0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_d0,param_2);
  }
  puVar5 = &uStack_1b1;
  func_0x000108c2e2f8();
  puVar6 = &uStack_229;
  func_0x000108c2dcd4();
  bStack_20f = puVar6[0x19];
  bStack_20e = puVar6[0x1a];
  uStack_220 = 0;
  uStack_210 = 0;
  uStack_20d = 1;
  ppuStack_228 = &PTR_DAT_1108629c8;
  lStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  plStack_1c8 = (long *)0x0;
  bVar2 = puVar5[0x19] | bStack_20f;
  bVar3 = puVar5[0x1a] | bStack_20e;
  bVar1 = puVar5[0x1b];
  uStack_1a8 = 4;
  uStack_198 = 0;
  ppuStack_1b0 = &PTR_DAT_1108629c8;
  pppuStack_170 = &ppuStack_228;
  plStack_148 = (long *)0x0;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  puVar7 = &uStack_2a1;
  puStack_1f0 = puVar6;
  bStack_197 = bVar2;
  bStack_196 = bVar3;
  bStack_195 = bVar1;
  puStack_178 = puVar5;
  func_0x000107c2a7fc();
  bStack_287 = puVar7[0x19];
  bStack_286 = puVar7[0x1a];
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_285 = 1;
  ppuStack_2a0 = &PTR_DAT_1108629c8;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  plStack_238 = (long *)0x0;
  plStack_240 = (long *)0x0;
  bStack_127 = bStack_287 | bVar2;
  bStack_126 = bStack_286 | bVar3;
  uStack_138 = 4;
  uStack_128 = 0;
  ppuStack_140 = &PTR_DAT_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  pppuStack_100 = &ppuStack_2a0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  puVar5 = &uStack_2d9;
  puStack_268 = puVar7;
  bStack_125 = bVar1;
  func_0x000108c2e074();
  uStack_98 = *(undefined8 *)(puVar5 + 0x10);
  uStack_90 = puVar5[0x19];
  uStack_8f = puVar5[0x18];
  uStack_80 = *(undefined8 *)(puVar5 + 0x28);
  uStack_8c = 1;
  puStack_88 = &UNK_100c43d7c;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2d8 = 0;
  func_0x000100c435d0(&lStack_2d8,&uStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_2c0,&lStack_2d8);
  uStack_2e0 = 0;
  pppuVar8 = &ppuStack_d0;
  pppuVar11 = &ppuStack_140;
  plVar17 = &lStack_2c0;
  func_0x000107c310cc(pppuVar8,pppuVar11,plVar17,&uStack_2e0);
  uVar15 = SUB84(pppuVar11,0);
  iVar16 = (int)plVar17;
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  lVar4 = lStack_2e8;
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar17 = plStack_d8;
  ppuStack_140 = &PTR_DAT_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_238;
  ppuStack_2a0 = &PTR_DAT_1108629c8;
  plStack_238 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_240;
  plStack_240 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_258 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_148;
  ppuStack_1b0 = &PTR_DAT_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_1c0;
  ppuStack_228 = &PTR_DAT_1108629c8;
  plStack_1c0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_1e0 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  lVar9 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_78[0]) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_140);
    func_0x000105007830(&ppuStack_2a0);
    func_0x000105007830(&ppuStack_1b0);
    func_0x000105007830(&ppuStack_228);
    func_0x000104d96620(&ppuStack_d0);
    _objc_release(lStack_2e8);
    lVar10 = lVar9;
    __Unwind_Resume();
    ppuStack_338 = &PTR_DAT_1108629c8;
    uStack_328 = 1;
    puStack_318 = &UNK_1108629b8;
    lStack_308 = lVar4;
    puStack_2f8 = &SUB_108c191cc;
    uStack_350 = (ulong)bVar1;
    uStack_348 = (ulong)bVar3;
    uStack_340 = (ulong)bVar2;
    pppuStack_330 = &ppuStack_228;
    pppuStack_320 = &ppuStack_140;
    lStack_310 = lVar9;
    puStack_300 = &stack0xfffffffffffffff0;
    _objc_retain();
    pppuStack_448 = &ppuStack_4f0;
    if (iVar16 == 0) {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar10 == 0) {
        uStack_620 = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        uStack_648 = 0;
        ppuStack_650 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_650,lVar10);
      }
      pppuVar11 = &ppuStack_7b8;
      func_0x000108c2e2f8();
      pppuVar8 = &ppuStack_830;
      func_0x000108c2d860();
      bStack_4d5 = *(byte *)((long)pppuVar11 + 0x1b) & *(byte *)((long)pppuVar8 + 0x1b);
      bStack_4d7 = (*(byte *)((long)pppuVar11 + 0x19) | *(byte *)((long)pppuVar8 + 0x19)) & 1;
      bStack_4d6 = (*(byte *)((long)pppuVar11 + 0x1a) | *(byte *)((long)pppuVar8 + 0x1a)) & 1;
      uStack_4e8 = 4;
      uStack_4d8 = 0;
      ppuStack_4f0 = &PTR_DAT_1108629c8;
      plStack_488 = (long *)0x0;
      plStack_490 = (long *)0x0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      lStack_4a8 = 0;
      pppuVar12 = &ppuStack_3a0;
      pppuStack_4b8 = pppuVar11;
      pppuStack_4b0 = pppuVar8;
      func_0x000108c2dcd4();
      bStack_547 = *(byte *)((long)pppuVar12 + 0x19);
      bStack_546 = *(byte *)((long)pppuVar12 + 0x1a);
      uStack_558 = 0;
      uStack_548 = 0;
      bStack_545 = 1;
      ppuStack_560 = &PTR_DAT_1108629c8;
      lStack_518 = 0;
      pppuStack_520 = (undefined ***)0x0;
      uStack_508 = 0;
      uStack_510 = 0;
      plStack_4f8 = (long *)0x0;
      plStack_500 = (long *)0x0;
      bStack_467 = bStack_4d7 | bStack_547;
      bStack_466 = bStack_4d6 | bStack_546;
      uStack_478 = 4;
      uStack_468 = 0;
      bStack_465 = bStack_4d5;
      ppuStack_480 = &PTR_DAT_1108629c8;
      pppuStack_440 = &ppuStack_560;
      uStack_430 = 0;
      lStack_438 = 0;
      plStack_420 = (long *)0x0;
      uStack_428 = 0;
      plStack_418 = (long *)0x0;
      ppuVar13 = &puStack_848;
      pppuStack_528 = pppuVar12;
      func_0x000107c2a7fc();
      bStack_5b7 = *(byte *)((long)ppuVar13 + 0x19);
      bStack_5b6 = *(byte *)((long)ppuVar13 + 0x1a);
      uStack_5c8 = 0;
      uStack_5b8 = 0;
      bStack_5b5 = 1;
      ppuStack_5d0 = &PTR_DAT_1108629c8;
      lStack_588 = 0;
      puStack_590 = (undefined1 *)0x0;
      uStack_578 = 0;
      uStack_580 = 0;
      plStack_568 = (long *)0x0;
      plStack_570 = (long *)0x0;
      bStack_3f6 = bStack_466 | bStack_5b6;
      uStack_408 = 4;
      sStack_3f8 = (ushort)(bStack_467 | bStack_5b7) << 8;
      bStack_3f5 = bStack_465;
      ppuStack_410 = &PTR_DAT_1108629c8;
      pppuStack_3d8 = &ppuStack_480;
      pppuStack_3d0 = &ppuStack_5d0;
      uStack_3c0 = 0;
      lStack_3c8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3b8 = 0;
      plStack_3a8 = (long *)0x0;
      ppuStack_6c8 = (undefined **)0x0;
      uStack_6c0 = (undefined **)0x0;
      uStack_6b8 = 0;
      ppuStack_740 = (undefined **)CONCAT44(ppuStack_740._4_4_,uVar15);
      pppuVar8 = &ppuStack_650;
      ppuStack_598 = ppuVar13;
      func_0x000107c310cc(pppuVar8,&ppuStack_410,&ppuStack_6c8,&ppuStack_740);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_6c8 != (undefined **)0x0) {
        uStack_6c0 = ppuStack_6c8;
        __ZdlPv();
      }
      plVar17 = plStack_3a8;
      ppuStack_410 = &PTR_DAT_1108629c8;
      plStack_3a8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3b0;
      plStack_3b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3c8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_568;
      ppuStack_5d0 = &PTR_DAT_1108629c8;
      plStack_568 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_570;
      plStack_570 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_588 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_418;
      ppuStack_480 = &PTR_DAT_1108629c8;
      plStack_418 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_420;
      plStack_420 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_438 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_4f8;
      ppuStack_560 = &PTR_DAT_1108629c8;
      plStack_4f8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_518 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_488;
      ppuStack_4f0 = &PTR_DAT_1108629c8;
      plStack_488 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_490;
      plStack_490 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_4a8 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_628);
      _objc_release(uStack_638);
      uVar14 = uStack_640;
    }
    else {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar10 == 0) {
        uStack_370 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_398 = 0;
        ppuStack_3a0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_3a0,lVar10);
      }
      ppuVar13 = (undefined8 **)&uStack_5d1;
      func_0x000108c2e2f8();
      puVar5 = &uStack_5d2;
      func_0x000108c2d860();
      bStack_5b5 = *(byte *)((long)ppuVar13 + 0x1b) & puVar5[0x1b];
      bStack_5b7 = (*(byte *)((long)ppuVar13 + 0x19) | puVar5[0x19]) & 1;
      bStack_5b6 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar5[0x1a]) & 1;
      uStack_5c8 = 4;
      uStack_5b8 = 0;
      ppuStack_5d0 = &PTR_DAT_1108629c8;
      plStack_568 = (long *)0x0;
      plStack_570 = (long *)0x0;
      uStack_578 = 0;
      uStack_580 = 0;
      lStack_588 = 0;
      puVar6 = &uStack_651;
      ppuStack_598 = ppuVar13;
      puStack_590 = puVar5;
      func_0x000108c2dcd4();
      uStack_648 = (ulong)uStack_648._4_4_ << 0x20;
      uStack_638._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar6 + 0x19) << 8);
      ppuStack_650 = &PTR_DAT_1108629c8;
      lStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      plStack_5e8 = (long *)0x0;
      plStack_5f0 = (long *)0x0;
      bStack_547 = bStack_5b7 | (byte)*(ushort *)(puVar6 + 0x19);
      bStack_546 = bStack_5b6 | puVar6[0x1a];
      uStack_558 = 4;
      uStack_548 = 0;
      bStack_545 = bStack_5b5;
      ppuStack_560 = &PTR_DAT_1108629c8;
      pppuStack_520 = &ppuStack_650;
      uStack_510 = 0;
      lStack_518 = 0;
      plStack_500 = (long *)0x0;
      uStack_508 = 0;
      plStack_4f8 = (long *)0x0;
      puVar5 = &uStack_6c9;
      puStack_618 = puVar6;
      pppuStack_528 = &ppuStack_5d0;
      func_0x000107c2a7fc();
      bStack_6af = puVar5[0x19];
      bStack_6ae = puVar5[0x1a];
      uStack_6c0 = (undefined **)((ulong)uStack_6c0._4_4_ << 0x20);
      uStack_6b0 = 0;
      uStack_6ad = 1;
      ppuStack_6c8 = &PTR_DAT_1108629c8;
      lStack_680 = 0;
      uStack_688 = 0;
      uStack_670 = 0;
      uStack_678 = 0;
      plStack_660 = (long *)0x0;
      plStack_668 = (long *)0x0;
      bStack_4d7 = bStack_547 | bStack_6af;
      bStack_4d6 = bStack_546 | bStack_6ae;
      uStack_4e8 = 4;
      uStack_4d8 = 0;
      bStack_4d5 = bStack_545;
      ppuStack_4f0 = &PTR_DAT_1108629c8;
      pppuStack_4b8 = &ppuStack_560;
      pppuStack_4b0 = &ppuStack_6c8;
      uStack_4a0 = 0;
      lStack_4a8 = 0;
      plStack_490 = (long *)0x0;
      uStack_498 = 0;
      plStack_488 = (long *)0x0;
      puVar6 = &uStack_741;
      puStack_690 = puVar5;
      func_0x000108c2d918();
      bStack_727 = puVar6[0x19];
      bStack_726 = puVar6[0x1a];
      bStack_725 = puVar6[0x1b];
      uStack_738 = 2;
      uStack_728 = 0;
      ppuStack_740 = &PTR_SUB_110862700;
      puStack_6f8 = (undefined *)0x0;
      uStack_700 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      plStack_6d8 = (long *)0x0;
      plStack_6e0 = (long *)0x0;
      bStack_467 = bStack_4d7 | bStack_727;
      bStack_466 = bStack_4d6 | bStack_726;
      bStack_465 = bStack_4d5 & bStack_725;
      uStack_478 = 4;
      uStack_468 = 0;
      ppuStack_480 = &PTR_DAT_1108629c8;
      pppuStack_440 = &ppuStack_740;
      uStack_430 = 0;
      lStack_438 = 0;
      plStack_420 = (long *)0x0;
      uStack_428 = 0;
      plStack_418 = (long *)0x0;
      puVar5 = &uStack_7b9;
      puStack_708 = puVar6;
      func_0x000108c2d918();
      uStack_828 = 0xf;
      uStack_818 = 0x100;
      ppuStack_800 = &PTR____CFConstantStringClassReference_110daafd8;
      ppuStack_830 = &PTR_DAT_110862760;
      uStack_7f0 = 0;
      uStack_7f8 = 0;
      uStack_7e0 = 0;
      uStack_7e8 = 0;
      plStack_7d0 = (long *)0x0;
      uStack_7d8 = 0;
      plStack_7c8 = (long *)0x0;
      bStack_79e = puVar5[0x1a];
      bStack_79d = puVar5[0x1b];
      uStack_7b0 = 0xb;
      uStack_7a0 = 0x100;
      ppuStack_7b8 = &PTR_SUB_110862700;
      pppuStack_3d0 = &ppuStack_7b8;
      plStack_750 = (long *)0x0;
      uStack_768 = 0;
      uStack_770 = 0;
      plStack_758 = (long *)0x0;
      uStack_760 = 0;
      bStack_3f6 = bStack_466 | bStack_79e;
      bStack_3f5 = bStack_465 & bStack_79d;
      uStack_408 = 4;
      sStack_3f8 = 0x100;
      ppuStack_410 = &PTR_DAT_1108629c8;
      pppuStack_3d8 = &ppuStack_480;
      uStack_3c0 = 0;
      lStack_3c8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3b8 = 0;
      plStack_3a8 = (long *)0x0;
      puStack_848 = (undefined8 *)0x0;
      puStack_840 = (undefined8 *)0x0;
      uStack_838 = 0;
      pppuVar8 = &ppuStack_3a0;
      uStack_84c = uVar15;
      puStack_780 = puVar5;
      pppuStack_778 = &ppuStack_830;
      func_0x000107c310cc(pppuVar8,&ppuStack_410,&puStack_848,&uStack_84c);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_848 != (undefined8 *)0x0) {
        puStack_840 = puStack_848;
        __ZdlPv();
      }
      plVar17 = plStack_3a8;
      ppuStack_410 = &PTR_DAT_1108629c8;
      plStack_3a8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3b0;
      plStack_3b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3c8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_750;
      ppuStack_7b8 = &PTR_SUB_110862700;
      plStack_750 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_758;
      plStack_758 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      puStack_848 = &uStack_770;
      func_0x000107c27dd4(&puStack_848);
      plVar17 = plStack_7c8;
      ppuStack_830 = &PTR_DAT_110862760;
      plStack_7c8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_7d0;
      plStack_7d0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      puStack_848 = &uStack_7e8;
      func_0x000107c27dd4(&puStack_848);
      _objc_release(ppuStack_800);
      plVar17 = plStack_418;
      ppuStack_480 = &PTR_DAT_1108629c8;
      plStack_418 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_420;
      plStack_420 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_438 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_6d8;
      ppuStack_740 = &PTR_SUB_110862700;
      plStack_6d8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_6e0;
      plStack_6e0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      ppuStack_7b8 = &puStack_6f8;
      func_0x000107c27dd4(&ppuStack_7b8);
      plVar17 = plStack_488;
      ppuStack_4f0 = &PTR_DAT_1108629c8;
      plStack_488 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_490;
      plStack_490 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_4a8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_660;
      ppuStack_6c8 = &PTR_DAT_1108629c8;
      plStack_660 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_668;
      plStack_668 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_680 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_4f8;
      ppuStack_560 = &PTR_DAT_1108629c8;
      plStack_4f8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_518 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_5e8;
      ppuStack_650 = &PTR_DAT_1108629c8;
      plStack_5e8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_5f0;
      plStack_5f0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_608 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_568;
      ppuStack_5d0 = &PTR_DAT_1108629c8;
      plStack_568 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_570;
      plStack_570 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_588 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_378);
      _objc_release(uStack_388);
      uVar14 = uStack_390;
    }
    _objc_release(uVar14);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 108be4650; end: 108be4687;  */

void FUN_108be4650(void)

{
  _objc_alloc(PTR_PTR_1126db0a8);
  func_0x00010c00dac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be4688; end: 108be4693;  */

/* WARNING: Removing unreachable block (ram,0x000108c1a564) */
/* WARNING: Removing unreachable block (ram,0x000108c1a5a4) */
/* WARNING: Removing unreachable block (ram,0x000108c1a570) */
/* WARNING: Removing unreachable block (ram,0x000108c1a5b4) */
/* WARNING: Removing unreachable block (ram,0x000108c1a6f8) */
/* WARNING: Removing unreachable block (ram,0x000108c1a700) */
/* WARNING: Removing unreachable block (ram,0x000108c1a710) */
/* WARNING: Removing unreachable block (ram,0x000108c1a71c) */
/* WARNING: Removing unreachable block (ram,0x000108c1a728) */
/* WARNING: Removing unreachable block (ram,0x000108c1a734) */
/* WARNING: Removing unreachable block (ram,0x000108c1a73c) */
/* WARNING: Removing unreachable block (ram,0x000108c1a740) */
/* WARNING: Removing unreachable block (ram,0x000108c1a754) */
/* WARNING: Removing unreachable block (ram,0x000108c1a760) */
/* WARNING: Removing unreachable block (ram,0x000108c1a76c) */
/* WARNING: Removing unreachable block (ram,0x000108c1a778) */
/* WARNING: Removing unreachable block (ram,0x000108c1a780) */
/* WARNING: Removing unreachable block (ram,0x000108c1a784) */
/* WARNING: Removing unreachable block (ram,0x000108c1a798) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7a4) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7b0) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7bc) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7c4) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7c8) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7dc) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7e8) */
/* WARNING: Removing unreachable block (ram,0x000108c1a7f4) */
/* WARNING: Removing unreachable block (ram,0x000108c1a800) */
/* WARNING: Removing unreachable block (ram,0x000108c1a808) */
/* WARNING: Removing unreachable block (ram,0x000108c1a80c) */

void FUN_108be4688(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_28c [4];
  undefined4 auStack_288 [6];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_270,param_2);
  }
  puVar2 = auStack_28c;
  func_0x000108c2e798();
  puVar3 = &uStack_181;
  func_0x000107c2a7fc();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 0;
  ppuStack_1f8 = &PTR_DAT_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bStack_166 = puVar3[0x1a];
  bStack_165 = puVar3[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_DAT_1108629c8;
  pppuStack_140 = &ppuStack_1f8;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  ppuStack_110 = &PTR_DAT_1108629c8;
  bStack_f6 = puVar2[0x1a] | bStack_166;
  bStack_f5 = puVar2[0x1b] & bStack_165;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  uStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  auStack_288[0] = 0;
  puVar4 = &uStack_270;
  puStack_148 = puVar3;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_180;
  func_0x000107c310cc(puVar4,&ppuStack_110,&lStack_a0,auStack_288);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_DAT_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_248);
  _objc_release(uStack_258);
  _objc_release(uStack_260);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108be4694; end: 108be46cb;  */

void FUN_108be4694(void)

{
  _objc_alloc(PTR_PTR_1126db0a8);
  func_0x00010c00dac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be46cc; end: 108be46d3;  */

void FUN_108be46cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  byte bStack_346;
  byte bStack_345;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_201;
  func_0x000100c43338();
  puVar3 = &uStack_202;
  func_0x000100c486cc();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_DAT_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  func_0x000108c2d4c4();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = 1;
  ppuStack_2f0 = &PTR_DAT_1108629c8;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_DAT_1108629c8;
  plStack_210 = (long *)0x0;
  uStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_176 = bStack_1e6 | bStack_25e;
  bStack_175 = bStack_1e5 & bStack_25d;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108629c8;
  pppuStack_150 = &ppuStack_278;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_361;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_158 = &ppuStack_200;
  func_0x000107c2a7fc();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  uStack_3a8 = 0;
  ppuStack_3d8 = &PTR_DAT_1108629c8;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  lStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  bStack_346 = puVar2[0x1a];
  bStack_345 = puVar2[0x1b];
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_DAT_1108629c8;
  plStack_2f8 = (long *)0x0;
  uStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  bStack_106 = bStack_176 | bStack_346;
  bStack_105 = bStack_175 & bStack_345;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_360;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_b0;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x000107c310cc(puVar5,&ppuStack_120,&lStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_DAT_1108629c8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_DAT_1108629c8;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_390 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_DAT_1108629c8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_DAT_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108be46d4; end: 108be4737;  */

void FUN_108be46d4(void)

{
  _objc_alloc(PTR_PTR_1126db0b8);
  func_0x00010c00d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108be4738; end: 108be473f; -[SCSnapchattersFetchedResultObserverRepositoryV1 outgoingSnapchattersAToZObserver] */

void FUN_108be4738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4740; end: 108be4747; -[SCSnapchattersFetchedResultObserverRepositoryV1 incomingSnapchattersObserver] */

void FUN_108be4740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4748; end: 108be474f; -[SCSnapchattersFetchedResultObserverRepositoryV1 incomingSnapchattersWithoutCapObserver] */

void FUN_108be4748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4750; end: 108be4757; -[SCSnapchattersFetchedResultObserverRepositoryV1 rankedIncomingSnapchattersObserver] */

void FUN_108be4750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4758; end: 108be475f; -[SCSnapchattersFetchedResultObserverRepositoryV1 contactSnapchattersObserver] */

void FUN_108be4758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4760; end: 108be4767; -[SCSnapchattersFetchedResultObserverRepositoryV1 bestFriendSnapchattersObserver] */

void FUN_108be4760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4768; end: 108be476f; -[SCSnapchattersFetchedResultObserverRepositoryV1 bestFriendMetadataObserver] */

void FUN_108be4768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 108be4770; end: 108be47b7; -[SCSnapchattersFetchedResultObserverRepositoryV1 outgoingSnapchattersCountSummary] */

void FUN_108be4770(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108be47b8; end: 108be481f; -[SCSnapchattersFetchedResultObserverRepositoryV1 pendingIncomingSnapchattersCountWithLimit:requireNonEmptyAddSource:unviewedOnly:] */

undefined8
FUN_108be47b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    if (param_5 == 0) {
      func_0x000108c191cc(uVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108c19bc8();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 108be4820; end: 108be48c7; -[SCSnapchattersFetchedResultObserverRepositoryV1 .cxx_destruct] */

void FUN_108be4820(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108be48c8; end: 108be4a1b; -[SCSnapchattersSynchronousDataFetcher initWithDocObjectContext:userIdToSnapchatterFetcher:usernameToSnapchatterFetcher:snapchattersFetchedResultObserverRepository:suggestedSnapchatterFetcher:userInfoRepository:] */

undefined1 *
FUN_108be48c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126fdc68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108be4a1c; end: 108be4aab; -[SCSnapchattersSynchronousDataFetcher allOutgoingSnapchatters] */

void FUN_108be4a1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0eea00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0eea00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108be4aac; end: 108be4b27; -[SCSnapchattersSynchronousDataFetcher allOutgoingSnapchattersExceptSelf] */

void FUN_108be4aac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf005c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c31910();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be4b28; end: 108be4ba3;  */

bool FUN_108be4b28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_2 != lVar2;
}



/* Entry: 108be4ba4; end: 108be4bef; -[SCSnapchattersSynchronousDataFetcher mutualFriendFromUserId:] */

void FUN_108be4ba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100bf119c();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be4bf0; end: 108be4c9f; -[SCSnapchattersSynchronousDataFetcher outgoingSnapchattersFromUserIds:] */

void FUN_108be4bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c244e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108be4ca0;
  puStack_40 = &UNK_11089b0f0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000107c31908(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be4ca0; end: 108be4cff;  */

void FUN_108be4ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108be4d00; end: 108be4d5b; -[SCSnapchattersSynchronousDataFetcher outgoingSnapchatterFromUserId:] */

void FUN_108be4d00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108be4d5c; end: 108be4e0b; -[SCSnapchattersSynchronousDataFetcher outgoingSnapchattersFromUsernames:] */

void FUN_108be4d5c(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c244ee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108be4e0c;
  puStack_40 = &UNK_11089b0f0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000107c31908(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be4e0c; end: 108be4e6b;  */

void FUN_108be4e0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108be4e6c; end: 108be4ec7; -[SCSnapchattersSynchronousDataFetcher outgoingSnapchatterFromUsername:] */

void FUN_108be4e6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108be4ec8; end: 108be4f57; -[SCSnapchattersSynchronousDataFetcher allIncomingSnapchatters] */

void FUN_108be4ec8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfec040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfec040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108be4f58; end: 108be5007; -[SCSnapchattersSynchronousDataFetcher incomingSnapchattersFromUserIds:] */

void FUN_108be4f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c244e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108be5008;
  puStack_40 = &UNK_11089b0f0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000107c31908(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be5008; end: 108be5057;  */

void FUN_108be5008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901c6c4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be5058; end: 108be50a3; -[SCSnapchattersSynchronousDataFetcher incomingSnapchatterFromUserId:] */

void FUN_108be5058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901c6c4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be50a4; end: 108be5153; -[SCSnapchattersSynchronousDataFetcher incomingSnapchattersFromUsernames:] */

void FUN_108be50a4(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c244ee0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108be5154;
  puStack_40 = &UNK_11089b0f0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000107c31908(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be5154; end: 108be51a3;  */

void FUN_108be5154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901c6c4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be51a4; end: 108be51ef; -[SCSnapchattersSynchronousDataFetcher incomingSnapchatterFromUsername:] */

void FUN_108be51a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010901c6c4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be51f0; end: 108be523f; -[SCSnapchattersSynchronousDataFetcher suggestedSnapchattersForNewUser] */

void FUN_108be51f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2622a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108be5240; end: 108be52a7; -[SCSnapchattersSynchronousDataFetcher quickAddSnapchattersForSendToCount] */

undefined8 FUN_108be5240(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2622a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108be52a8; end: 108be5517; -[SCSnapchattersSynchronousDataFetcher areSuggestedSnapchattersAvailable:] */

undefined8 FUN_108be52a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar11 = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2622a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar12 = *(long *)(lVar13 * 8);
        lVar5 = lVar12;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        if (lVar6 != 0) {
          func_0x00010c2923e0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(lVar12);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar7 = puVar4;
        func_0x00010bf4b900();
        if ((int)puVar7 == 0) {
          uVar11 = 0;
          goto LAB_108be54b0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    uVar11 = 1;
LAB_108be54b0:
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar11;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf4a420(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar11);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf4a420(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x000107c31910();
  _objc_release(uVar11);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return uVar9;
}



/* Entry: 108be5518; end: 108be55a7; -[SCSnapchattersSynchronousDataFetcher nonFriendContactSnapchatters] */

void FUN_108be5518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4a420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18640();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4a420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c244400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107c31910();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108be55a8; end: 108be55df;  */

bool FUN_108be55a8(undefined8 param_1,long param_2)

{
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 108be55e0; end: 108be563f; -[SCSnapchattersSynchronousDataFetcher .cxx_destruct] */

void FUN_108be55e0(long param_1)

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



/* Entry: 108be5640; end: 108be585f; -[SCSuggestedSnapchattersDataProviderV2 initWithDocObjectContext:userIdToSnapchatterFetcher:pinnedSuggestedSnapchattersObservable:reliablePinningLogger:findFriendsEligibilityChecker:] */

undefined8 *
FUN_108be5640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fdc70;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    uVar2 = puVar1[4];
    puVar1[4] = 0;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = &UNK_10f507c35;
    _dispatch_queue_create(&UNK_10f507c35,0);
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_5;
    func_0x00010c25ff60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108be5860; end: 108be58a7;  */

void FUN_108be5860(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea64c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108be58a8; end: 108be5a3f; -[SCSuggestedSnapchattersDataProviderV2 suggestedSnapchattersForPage:allowUsingFallback:] */

void FUN_108be58a8(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071480();
  _objc_release(uVar1);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)uVar2 != 0) {
    puVar3 = param_1;
    func_0x00010bf86620(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      puVar4 = puVar3;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) {
        puVar4 = param_1;
        func_0x00010bf86620(param_1,param_2,7);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c292720();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
        if (puVar6 != (undefined *)0x0) {
          _objc_retain(puVar4);
          _objc_release(puVar3);
          puVar3 = puVar4;
        }
        _objc_release(puVar4);
      }
    }
    puVar4 = puVar3;
    func_0x00010c292720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010be23960(param_1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if ((int)param_3 == 0) {
      puVar4 = param_1;
      func_0x00010be217e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be5faa0(param_1,param_2,puVar5,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar5);
      param_1 = puVar5;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108be5a40; end: 108be5c9f; -[SCSuggestedSnapchattersDataProviderV2 hasSuggestedSnapchattersForPage:allowUsingFallback:] */

undefined1 * FUN_108be5a40(long param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x40);
  puVar7 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c071480();
  _objc_release();
  if ((int)lVar11 == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    if ((int)param_3 == 0) {
      lVar2 = param_1;
      func_0x00010be217e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010bf529e0();
      _objc_release();
      if (lVar11 != 0) {
        puVar10 = (undefined1 *)0x1;
        goto LAB_108be5c60;
      }
    }
    lVar11 = param_1;
    func_0x00010bf86620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    if (param_4 != 0) {
      lVar5 = lVar11;
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar5;
      func_0x00010bf529e0();
      _objc_release(lVar5);
      if (lVar14 == 0) {
        lVar2 = param_1;
        func_0x00010bf86620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
      }
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar11 = lVar2;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar11);
          }
          puVar12 = *(undefined8 **)(lStack_128 + lVar15 * 8);
          lVar3 = *(long *)(param_1 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar3;
          func_0x00010c2448a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar13;
          func_0x00010c262240();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            lVar4 = lVar13;
            func_0x00010c06d560();
            _objc_release(lVar3);
            if ((int)lVar4 == 0) {
              _objc_release(lVar13);
              puVar10 = (undefined1 *)0x1;
              goto LAB_108be5c20;
            }
          }
          _objc_release(lVar13);
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar11;
        puVar12 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    puVar10 = (undefined1 *)0x0;
LAB_108be5c20:
    _objc_release(lVar11);
    _objc_release();
    puVar7 = (undefined1 *)puVar12;
  }
LAB_108be5c60:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    puVar10 = puVar7;
    func_0x00010bf529e0();
    if (puVar10 == (undefined1 *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar5;
      func_0x00010c244e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    lVar5 = lVar11;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar15 = *plStack_250;
      do {
        lVar13 = 0;
        do {
          if (*plStack_250 != lVar15) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c0e00e0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = lVar5;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_108be5eec;
    puStack_270 = &UNK_11089b0f0;
    _objc_retain(lVar11);
    puVar10 = puVar7;
    lStack_268 = lVar11;
    func_0x000107c31908(puVar7,&puStack_288);
    puStack_2b0 = puVar1;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_108be5f6c;
    puStack_298 = &UNK_11089b0f0;
    lStack_290 = lVar11;
    _objc_retain(lVar11);
    puVar8 = puVar7;
    func_0x000107c31908(puVar7,&puStack_2b0);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar7);
    func_0x00010bf529e0(puVar8);
    func_0x00010c0b2a60(uVar6);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(lStack_290);
    _objc_release(lStack_268);
    _objc_release(lVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar8 = *(undefined1 **)(puVar7 + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar9 = puVar8;
        func_0x00010c06d560();
        puVar10 = (undefined1 *)0x0;
        if ((int)puVar9 == 0) {
          puVar10 = puVar8;
        }
      }
      _objc_retain(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  return puVar10;
}



/* Entry: 108be5ca0; end: 108be5eeb; -[SCSuggestedSnapchattersDataProviderV2 _getUpdatedSnapchattersFromUserIds:] */

void FUN_108be5ca0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c244e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = lVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_108be5eec;
  puStack_140 = &UNK_11089b0f0;
  _objc_retain(lVar5);
  lVar2 = param_3;
  lStack_138 = lVar5;
  func_0x000107c31908(param_3,&puStack_158);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_108be5f6c;
  puStack_168 = &UNK_11089b0f0;
  lStack_160 = lVar5;
  _objc_retain(lVar5);
  lVar4 = param_3;
  func_0x000107c31908(param_3,&puStack_180);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(param_3);
  func_0x00010bf529e0(lVar4);
  func_0x00010c0b2a60(uVar3);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lStack_160);
  _objc_release(lStack_138);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar4 = *(long *)(param_3 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar6 = lVar4;
      func_0x00010c06d560();
      lVar2 = 0;
      if ((int)lVar6 == 0) {
        lVar2 = lVar4;
      }
    }
    _objc_retain(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108be5eec; end: 108be5f6b;  */

void FUN_108be5eec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c06d560();
    lVar4 = 0;
    if ((int)lVar3 == 0) {
      lVar4 = lVar1;
    }
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108be5f6c; end: 108be5f77;  */

void FUN_108be5f6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108be5f78; end: 108be604b; -[SCSuggestedSnapchattersDataProviderV2 _getPinnedSuggestionsDirectly] */

void FUN_108be5f78(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108be604c;
  uStack_30 = 0x108be605c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108be6064;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x38),&puStack_80);
  uVar1 = puStack_48[5];
  func_0x000107c31910(uVar1,&PTR___NSConcreteGlobalBlock_110ab7200);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108be604c; end: 108be6063;  */

void FUN_108be604c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108be6064; end: 108be609f;  */

void FUN_108be6064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108be60a0; end: 108be610b;  */

uint FUN_108be60a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c06d560(param_2);
    uVar3 = (uint)lVar2 ^ 1;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 108be610c; end: 108be6253; -[SCSuggestedSnapchattersDataProviderV2 displaySuggestionForPage:] */

void FUN_108be610c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_70 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108be604c;
  uStack_40 = 0x108be605c;
  uStack_38 = 0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108be6254;
  puStack_80 = &UNK_110891b20;
  uStack_68 = (undefined4)param_3;
  lStack_78 = param_1;
  puStack_58 = puStack_70;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x38),&puStack_98);
  lVar4 = puStack_58[5];
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000108c111ec(uVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (puStack_58[5] == 0) {
      lVar4 = 0;
    }
    else {
      func_0x00010c18ff40(param_1);
      lVar4 = puStack_58[5];
    }
  }
  _objc_retain(lVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108be6254; end: 108be62db;  */

void FUN_108be6254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf51e00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108be62dc; end: 108be63cb; -[SCSuggestedSnapchattersDataProviderV2 setDisplaySuggestion:forPage:] */

void FUN_108be62dc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108be6370;
  puStack_50 = &UNK_1108a7688;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_68);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be63cc; end: 108be6457; -[SCSuggestedSnapchattersDataProviderV2 setDisplaySuggestionMap:] */

void FUN_108be63cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be6458;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be6458; end: 108be648b;  */

void FUN_108be6458(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108be648c; end: 108be6687; -[SCSuggestedSnapchattersDataProviderV2 _mergeSnapchatters:pinnedSuggestedSnapchatters:] */

void FUN_108be648c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_4);
      puVar1 = param_4;
    }
    else {
      puVar1 = param_4;
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be549e0(param_1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_4;
      func_0x000107c3190c(param_4,&PTR___NSConcreteGlobalBlock_110ab7220);
      func_0x00010be59de0(param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_108be6690;
      puStack_70 = &UNK_11085a548;
      puStack_68 = puVar2;
      _objc_retain(puVar2);
      puVar3 = param_3;
      func_0x000107c31910(param_3,&puStack_88);
      func_0x00010befa160(puVar1);
      func_0x00010befa160(puVar1);
      func_0x00010bf529e0(param_4);
      func_0x00010bf529e0(param_3);
      func_0x00010bf529e0(puVar3);
      func_0x00010bf529e0(param_4);
      func_0x00010bf529e0(param_3);
      func_0x00010bf529e0(puVar3);
      func_0x00010be5abc0(param_1);
      _objc_release(puVar3);
      _objc_release(puStack_68);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108be6688; end: 108be668f;  */

void FUN_108be6688(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108be6690; end: 108be66db;  */

uint FUN_108be6690(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108be66dc; end: 108be6767; -[SCSuggestedSnapchattersDataProviderV2 _logTopTenExistingSuggestionsIfAvailable:] */

void FUN_108be66dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ab7240);
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar2 < 10) {
      func_0x00010bf529e0(param_3);
    }
    func_0x00010c25e980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be6768; end: 108be676f;  */

void FUN_108be6768(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108be6770; end: 108be6873; -[SCSuggestedSnapchattersDataProviderV2 _logIfSnapchatterIsPinnedAlready:snapchatterAtTheTop:] */

void FUN_108be6770(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_3;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if ((int)lVar4 == 0) {
        func_0x00010c0b1bc0();
      }
      else {
        func_0x00010c0b1be0();
      }
    }
    else if ((int)lVar4 == 0) {
      func_0x00010c0ad700();
    }
    else {
      func_0x00010c0ad720();
    }
    _objc_release(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be6874; end: 108be6913; -[SCSuggestedSnapchattersDataProviderV2 _loggingWithTotalPinnedSuggestionsCount:prioritizedCount:pinnedCount:] */

void FUN_108be6874(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac3e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1580();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108be6914; end: 108be699f; -[SCSuggestedSnapchattersDataProviderV2 _setPinnedSuggstedSnapchatters:] */

void FUN_108be6914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108be69a0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108be69a0; end: 108be69d3;  */

void FUN_108be69a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108be69d4; end: 108be6a4b; -[SCSuggestedSnapchattersDataProviderV2 .cxx_destruct] */

void FUN_108be69d4(long param_1)

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



/* Entry: 108be6a4c; end: 108be6b33; -[SCUserIdToSnapchatterFetcherImpl snapchatterWithUserId:] */

void FUN_108be6a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244e60(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = param_1;
    func_0x00010c0e00e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _os_unfair_lock_lock(param_3 + 0x28);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf51e00(uVar3);
    _os_unfair_lock_unlock(param_3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


