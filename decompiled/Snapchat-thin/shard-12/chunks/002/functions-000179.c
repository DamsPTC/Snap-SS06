/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f2244c; end: 108f22483; -[SCGalleryStoryDataBuilder withMediaType:] */

long FUN_108f2244c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f22484; end: 108f224bb; -[SCGalleryStoryDataBuilder withServletMediaFormat:] */

long FUN_108f22484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f224bc; end: 108f224f3; -[SCGalleryStoryDataBuilder withSnapAssets:] */

long FUN_108f224bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f224f4; end: 108f22553; -[SCGalleryStoryDataBuilder .cxx_destruct] */

void FUN_108f224f4(long param_1)

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



/* Entry: 108f22554; end: 108f22593;  */

void FUN_108f22554(void)

{
  if (lRam000000011372f480 != -1) {
    func_0x000107c27d9c(0x11372f480,&PTR___NSConcreteGlobalBlock_110acb798);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f488,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22594; end: 108f225fb;  */

void FUN_108f22594(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f488;
  uRam000000011372f488 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f225fc; end: 108f22603;  */

void FUN_108f225fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersSynchronousDataFetch_11266ed80);
  return;
}



/* Entry: 108f22604; end: 108f227f3;  */

void FUN_108f22604(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_108f22554();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0ee920(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f227f4; end: 108f2284b;  */

uint FUN_108f227f4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  func_0x000108f226fc();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x000107c2aaa4(), (int)lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c06d560(param_1);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f2284c; end: 108f2293b;  */

void FUN_108f2284c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  _objc_retain();
  FUN_108f22554();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0ee940(lVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = lVar2;
    func_0x00010bfebfe0(lVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_retain(param_1);
      lVar4 = param_1;
    }
    else {
      lVar4 = lVar3;
      FUN_10901d7c4(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    lVar4 = lVar1;
    FUN_10901d7c4(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108f2293c; end: 108f2297b;  */

void FUN_108f2293c(void)

{
  if (lRam000000011372f4a0 != -1) {
    func_0x000107c27d9c(0x11372f4a0,&PTR___NSConcreteGlobalBlock_110acb818);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4a8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f2297c; end: 108f229e3;  */

void FUN_108f2297c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb838);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4a8;
  uRam000000011372f4a8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f229e4; end: 108f229eb;  */

void FUN_108f229e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersDataFetcher_11266ecd8);
  return;
}



/* Entry: 108f229ec; end: 108f22a2b;  */

void FUN_108f229ec(void)

{
  if (lRam000000011372f4b0 != -1) {
    func_0x000107c27d9c(0x11372f4b0,&PTR___NSConcreteGlobalBlock_110acb858);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4b8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22a2c; end: 108f22a93;  */

void FUN_108f22a2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4b8;
  uRam000000011372f4b8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22a94; end: 108f22a9b;  */

void FUN_108f22a94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersDataTracker_11266ecf8);
  return;
}



/* Entry: 108f22a9c; end: 108f22adb;  */

void FUN_108f22a9c(void)

{
  if (lRam000000011372f4c0 != -1) {
    func_0x000107c27d9c(0x11372f4c0,&PTR___NSConcreteGlobalBlock_110acb898);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4c8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22adc; end: 108f22b43;  */

void FUN_108f22adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb8b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4c8;
  uRam000000011372f4c8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22b44; end: 108f22b4b;  */

void FUN_108f22b44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersFriendScoreCoordinat_11266ed20);
  return;
}



/* Entry: 108f22b4c; end: 108f22b8b;  */

void FUN_108f22b4c(void)

{
  if (lRam000000011372f4d0 != -1) {
    func_0x000107c27d9c(0x11372f4d0,&PTR___NSConcreteGlobalBlock_110acb8d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4d8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22b8c; end: 108f22bf3;  */

void FUN_108f22b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb8f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4d8;
  uRam000000011372f4d8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22bf4; end: 108f22bfb;  */

void FUN_108f22bf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_blockedSnapchatterFetcher_1125a4f78);
  return;
}



/* Entry: 108f22bfc; end: 108f22c3b;  */

void FUN_108f22bfc(void)

{
  if (lRam000000011372f4e0 != -1) {
    func_0x000107c27d9c(0x11372f4e0,&PTR___NSConcreteGlobalBlock_110acb918);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4e8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22c3c; end: 108f22ca3;  */

void FUN_108f22c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb6e0;
  _objc_opt_class(PTR_PTR_1126bb6e0);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb938);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4e8;
  uRam000000011372f4e8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22ca4; end: 108f22cab;  */

void FUN_108f22ca4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2928d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userInfoProvider_112682458);
  return;
}



/* Entry: 108f22cac; end: 108f22ceb;  */

void FUN_108f22cac(void)

{
  if (lRam000000011372f4f0 != -1) {
    func_0x000107c27d9c(0x11372f4f0,&PTR___NSConcreteGlobalBlock_110acb958);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f4f8,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22cec; end: 108f22d53;  */

void FUN_108f22cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb978);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f4f8;
  uRam000000011372f4f8 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22d54; end: 108f22d5b;  */

void FUN_108f22d54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2947f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_usernameToSnapchatterFetcher_112682c20);
  return;
}



/* Entry: 108f22d5c; end: 108f22d9b;  */

void FUN_108f22d5c(void)

{
  if (lRam000000011372f500 != -1) {
    func_0x000107c27d9c(0x11372f500,&PTR___NSConcreteGlobalBlock_110acb998);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011372f508,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 108f22d9c; end: 108f22e03;  */

void FUN_108f22d9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb668;
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110acb9b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372f508;
  uRam000000011372f508 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f22e04; end: 108f22e0b;  */

void FUN_108f22e04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2445b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchatterObservableRepository_11266eb90);
  return;
}



/* Entry: 108f22e0c; end: 108f22e17; -[SCLegacySnapchatterServices .cxx_destruct] */

void FUN_108f22e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f22e18; end: 108f22f8b; -[SCCacheDataHandlerCache storeData:metadata:completion:] */

void FUN_108f22e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126dc8f0;
  _objc_alloc(PTR_PTR_1126dc8f0);
  func_0x00010bffa920();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_10081c0f4;
  puStack_60 = &UNK_10083b6c4;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c1d0500(uVar1);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f22f8c; end: 108f230ab;  */

void FUN_108f22f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f230ac; end: 108f23207;  */

void FUN_108f230ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar6 = *(long *)(param_1 + 0x20);
  if (param_4 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (lVar3 == 0) {
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110f059d8;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,0,&ppuStack_50,&uStack_58,1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = 0;
      param_5 = puVar1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_108f23130;
    }
    pcVar5 = *(code **)(lVar6 + 0x10);
  }
  else {
    pcVar5 = *(code **)(lVar6 + 0x10);
    lVar3 = 0;
  }
  (*pcVar5)(lVar6,lVar3);
LAB_108f23130:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(lVar4);
  func_0x00010bf72080(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 108f23208; end: 108f2330f; -[SCCacheDataHandlerCache buildEncodingErrorWithCode:description:reason:] */

void FUN_108f23208(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(in_x3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 108f23310; end: 108f2333f; -[SCCacheDataHandlerCache .cxx_destruct] */

void FUN_108f23310(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f23340; end: 108f233eb; -[SCCacheDataHandlerCacheEntry initWithCacheMetadata:cacheData:] */

undefined1 *
FUN_108f23340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f233ec; end: 108f2340f; -[SCCacheDataHandlerCacheEntry copyWithZone:] */

undefined8 FUN_108f233ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f23410; end: 108f234bf; -[SCCacheDataHandlerCacheEntry initWithCoder:] */

undefined1 * FUN_108f23410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f234c0; end: 108f2351f; -[SCCacheDataHandlerCacheEntry encodeWithCoder:] */

void FUN_108f234c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f05a98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f05ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f23520; end: 108f23527; -[SCCacheDataHandlerCacheEntry preferFasterCoding] */

undefined8 FUN_108f23520(void)

{
  return 1;
}



/* Entry: 108f23528; end: 108f23577; -[SCCacheDataHandlerCacheEntry encodeWithFasterCoder:] */

void FUN_108f23528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f23578; end: 108f235ff; -[SCCacheDataHandlerCacheEntry setObject:forUInt64Key:] */

void FUN_108f23578(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x42caaedeb9b13f) {
    lVar2 = 0x10;
  }
  else {
    if (param_4 != 0x386bbaf4040999) goto LAB_108f235ec;
    lVar2 = 8;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_108f235ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f23600; end: 108f2360b; +[SCCacheDataHandlerCacheEntry fasterCodingKeys] */

undefined8 FUN_108f23600(void)

{
  return 0x1132a22d8;
}



/* Entry: 108f2360c; end: 108f23627; -[SCCacheDataHandlerCacheEntry isEqual:] */

undefined8 * FUN_108f2360c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x11372f518;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 2;
  lVar5 = 2;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam000000011372f510 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x11372f518) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam000000011372f510 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 108f23628; end: 108f2363b; -[SCCacheDataHandlerCacheEntry hash] */

ulong FUN_108f23628(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x11372f518;
  if ((bRam000000011372f510 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 2;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x11372f518) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam000000011372f510 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam000000011372f518);
  func_0x00010bfde980(uVar3);
  lVar7 = 1;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 108f2363c; end: 108f2366b; -[SCCacheDataHandlerCacheEntry .cxx_destruct] */

void FUN_108f2363c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f2366c; end: 108f2367f; -[SCDataHandler _applicationDidBecomeActive] */

void FUN_108f2366c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bedc570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateOnBackgroundThread_112594b00);
    return;
  }
  return;
}



/* Entry: 108f23680; end: 108f236fb; -[SCDataHandler _updateOnBackgroundThread] */

void FUN_108f23680(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c();
  _objc_release(uVar1);
  return;
}



/* Entry: 108f236fc; end: 108f23703;  */

void FUN_108f236fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsUpdate_1126509e8);
  return;
}



/* Entry: 108f23704; end: 108f2372f;  */

void FUN_108f23704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f23730; end: 108f2376f; -[SCDataHandler _cancelLoadingOperation] */

void FUN_108f23730(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 108f23770; end: 108f237af; -[SCDataHandler _cancelLoadingIfNeeded] */

void FUN_108f23770(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c076be0();
  if ((int)lVar1 != 0) {
    func_0x00010bddaa00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyWithHandler__112615020,param_1);
    return;
  }
  return;
}



/* Entry: 108f237b0; end: 108f23867; -[SCDataHandler _didRemoveDataObserver] */

void FUN_108f237b0(undefined8 param_1)

{
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 108f23868; end: 108f2386b;  */

void FUN_108f23868(void)

{
  return;
}



/* Entry: 108f2386c; end: 108f2392b; -[SCDataHandler _didLoadData:nextPageInfo:wasRefreshed:error:] */

void FUN_108f2386c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c076be0();
  if ((int)lVar1 != 0) {
    if (param_6 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar2);
      func_0x00010be05760(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = param_6;
      _objc_release(uVar2);
    }
    func_0x00010bdda9c0(param_1);
    func_0x00010bf637e0(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f2392c; end: 108f23933; -[SCDataHandler addLoadingObserverWithBlock:] */

void FUN_108f2392c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObserverWithBlock__11259c250);
  return;
}



/* Entry: 108f23934; end: 108f23ac7; -[SCDataHandler waitUntilDataReadyWithBlock:] */

void FUN_108f23934(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2316c0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108f23ac8;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_3);
    uStack_40 = param_1;
    uStack_38 = param_3;
    func_0x00010c0f88c0(uVar1);
    _objc_release(uVar1);
    _objc_release(uStack_38);
    uVar2 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_108f23b0c;
    uStack_70 = 0x108f23b1c;
    uStack_68 = 0;
    _objc_retain(param_3);
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_88[5];
    puStack_88[5] = param_1;
    _objc_release(uVar2);
    uVar2 = puStack_88[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f23ac8; end: 108f23b0b;  */

void FUN_108f23ac8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f23b0c; end: 108f23b23;  */

void FUN_108f23b0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f23b24; end: 108f23bdf;  */

void FUN_108f23b24(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2316c0();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c089340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_108f23bcc;
  }
  func_0x00010bf2dba0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c089340(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_108f23bcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f23be0; end: 108f23c07; -[SCDataHandler removeAllObservers] */

/* WARNING: Possible PIC construction at 0x000108f23bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f23bf8) */

void FUN_108f23be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObservers_1126285d8);
  return;
}



/* Entry: 108f23c08; end: 108f23c5f; -[SCDataHandler setNeedsUpdate] */

void FUN_108f23c08(long param_1,undefined8 param_2)

{
  int iVar1;
  
  func_0x00010c1cbf20(*(undefined8 *)(param_1 + 0x10),param_2,1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a24e0();
  if (iVar1 != 0) {
    func_0x00010bed4760(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfd99a0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadIfNeeded_1126047c8);
    return;
  }
  return;
}



/* Entry: 108f23c60; end: 108f23d9f;  */

void FUN_108f23c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108f23da0; end: 108f23ddf;  */

void FUN_108f23da0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f23de0; end: 108f23e03; -[SCDataHandler setData:] */

void FUN_108f23de0(undefined8 param_1)

{
  func_0x00010c16ae40();
                    /* WARNING: Could not recover jumptable at 0x00010bf637f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dataDidChange_1125b67a0);
  return;
}



/* Entry: 108f23e04; end: 108f23e0b; -[SCDataHandler wasLoadedOnce] */

void FUN_108f23e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_wasLoadedOnce_112686360);
  return;
}



/* Entry: 108f23e0c; end: 108f23e0f; -[SCDataHandler dataHandlerObserverListDidRemoveObserver:] */

void FUN_108f23e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdffdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didRemoveDataObserver_11255d908);
  return;
}



/* Entry: 108f23e10; end: 108f23e17; -[SCDataHandler lastLoadError] */

undefined8 FUN_108f23e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f23e18; end: 108f23e1f; -[SCDataHandler autoRefreshTimeInterval] */

undefined8 FUN_108f23e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f23e20; end: 108f23e27; -[SCDataHandler updatesOnAppLaunch] */

undefined1 FUN_108f23e20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 108f23e28; end: 108f23e2f; -[SCDataHandler loader] */

undefined8 FUN_108f23e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f23e30; end: 108f23e37; -[SCDataHandler cache] */

undefined8 FUN_108f23e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f23e38; end: 108f23ebb; -[SCDataHandler .cxx_destruct] */

void FUN_108f23e38(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f23ebc; end: 108f23ed3; -[SCDataHandlerLoaderWithBlock loadDataWithPageInfo:previousData:completion:] */

void FUN_108f23ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000108f23ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,param_4,param_5);
  return;
}



/* Entry: 108f23ed4; end: 108f23edf; -[SCDataHandlerLoaderWithBlock .cxx_destruct] */

void FUN_108f23ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f23ee0; end: 108f240cb; -[SCDataHandlerMetadata serializeMetadataWithError:] */

undefined * FUN_108f23ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f05af8;
  puVar7 = *(undefined **)(param_1 + 0x18);
  puVar1 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f05ad8;
  puVar2 = *(undefined **)(param_1 + 0x10);
  puStack_78 = puVar1;
  func_0x00010bdc1780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f05b18;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f05b38;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 9));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&ppuStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar6,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar6 + 0x18);
}



/* Entry: 108f240cc; end: 108f240d3; -[SCDataHandlerMetadata nextPageInfo] */

undefined8 FUN_108f240cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f240d4; end: 108f24103; -[SCDataHandlerMetadata .cxx_destruct] */

void FUN_108f240d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f24104; end: 108f24153; -[SCDataHandlerObservable dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f24104(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11277df68));
  puStack_28 = PTR_PTR_1126ff468;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108f24154; end: 108f242d7; -[SCDataHandlerObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f24154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  plVar1 = &lStack_80;
  _objc_retain(param_3);
  func_0x00010c25fd20(*(undefined8 *)(param_1 + _DAT_11277df64));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar4 = (long)_DAT_11277df68;
  if (*(long *)(param_1 + lVar4) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277df60);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108f242d8;
    puStack_58 = &UNK_110852b00;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  *(long *)(param_1 + _DAT_11277df6c) = *(long *)(param_1 + _DAT_11277df6c) + 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_78 = PTR_PTR_1126ff468;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_subscribe__112675970,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 108f242d8; end: 108f24357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f242d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277df64);
    uVar1 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f24358; end: 108f24433; -[SCDataHandlerObservable unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f24358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff468;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_unsubscribe__11267e4a8,param_3);
  func_0x00010c282a00(*(undefined8 *)(param_1 + _DAT_11277df64));
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar2 = *(long *)(param_1 + _DAT_11277df6c) + -1;
  *(long *)(param_1 + _DAT_11277df6c) = lVar2;
  if (lVar2 == 0) {
    lVar2 = (long)_DAT_11277df68;
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 108f24434; end: 108f24483; -[SCDataHandlerObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f24434(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277df68,0);
  _objc_storeStrong(param_1 + _DAT_11277df64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277df60,0);
  return;
}



/* Entry: 108f24484; end: 108f2448f; -[SCDataHandlerObserver .cxx_destruct] */

void FUN_108f24484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f24490; end: 108f245cf; -[SCDataHandlerObserverList removeAllObservers] */

void FUN_108f24490(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010be8cb00(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  _objc_retain(lVar1);
  _objc_sync_enter(lVar1);
  func_0x00010c12d360(*(undefined8 *)(lVar1 + 8),param_2,puVar3);
  lVar2 = *(long *)(lVar1 + 8);
  func_0x00010bf529e0();
  *(bool *)(lVar1 + 0x10) = lVar2 != 0;
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
  func_0x00010bf6b020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63c40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108f245d0; end: 108f2467b; -[SCDataHandlerObserverList _removeObserver:] */

void FUN_108f245d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x10) = lVar1 != 0;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63c40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f2467c; end: 108f246af;  */

void FUN_108f2467c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f246b0; end: 108f246c7; -[SCDataHandlerObserverList delegate] */

void FUN_108f246b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f246c8; end: 108f246f3; -[SCDataHandlerObserverList .cxx_destruct] */

void FUN_108f246c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f246f4; end: 108f2480f; -[SCSnapProRPC _performRequestWithEndpointName:path:serviceConfig:request:responseClass:key:completionQueue:completion:] */

void FUN_108f246f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be725e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        &PTR____CFConstantStringClassReference_110daafd8,param_7,param_9,param_10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f24810; end: 108f24d6f; -[SCSnapProRPC _performRequestWithEndpointName:path:serviceConfig:request:responseClass:key:rpcLoggingInfo:completionQueue:completion:] */

void FUN_108f24810(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar1 = param_5;
  func_0x00010bf162c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdd3680();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f05b78;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  lVar5 = param_5;
  func_0x00010c142020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = param_5;
    func_0x00010c142020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f27828(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(uVar7);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010bf63640(param_6);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108f24d70;
  puStack_a0 = &UNK_110884ec8;
  _objc_retain(param_5);
  lVar9 = lVar8;
  lStack_98 = param_5;
  func_0x00010bf225e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_initWeak(auStack_c0,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_c0;
  _objc_copyWeak(auStack_e0,puVar14);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_retain(param_9);
  uStack_d8 = param_9;
  uStack_d0 = param_10;
  uStack_c8 = param_7;
  _objc_retain(param_12);
  lVar8 = lVar6;
  func_0x00010c25f600(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(param_12);
  _objc_release(uStack_d8);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar13);
  _objc_release(lVar9);
  _objc_release(lStack_98);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_9);
  __Unwind_Resume();
  _objc_retain(puVar14);
  func_0x00010c2907c0(puVar14);
  func_0x00010beecdc0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c290a40(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 108f24d70; end: 108f24db7;  */

void FUN_108f24d70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010beecdc0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f24db8; end: 108f24efb;  */

void FUN_108f24db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_6 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    if (lVar1 == 0) {
      _objc_release(uVar2);
    }
    else {
      func_0x00010be09ba0(lVar1);
    }
    _objc_release(lVar1);
    if (param_5 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      _objc_alloc(uVar2);
      func_0x00010c008360();
      param_6 = 0;
      _objc_retain(0);
      goto LAB_108f24ea4;
    }
    param_6 = 0;
  }
  else {
    func_0x00010be09b80(lVar1);
    _objc_release(lVar1);
  }
  uVar2 = 0;
LAB_108f24ea4:
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108f24efc; end: 108f24f67;  */

void FUN_108f24efc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return;
}



/* Entry: 108f24f68; end: 108f24fa7;  */

void FUN_108f24f68(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_destroyWeak(param_1 + 0x38);
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108f24fa8; end: 108f25123; -[SCSnapProRPC fetchManagedBusinessProfilesWithRequest:completionQueue:completion:] */

void FUN_108f24fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc858;
  _objc_opt_class(PTR_PTR_1126dc858);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25124; end: 108f251eb;  */

void FUN_108f25124(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf162c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108f27414();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4bb00();
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f251ec; end: 108f2520b;  */

void FUN_108f251ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f25204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}


