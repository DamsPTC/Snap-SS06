/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064f3b1c; end: 1064f3b27; -[SCChatWallpaperSavedInChatDataPaginator .cxx_destruct] */

void FUN_1064f3b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3b28; end: 1064f3c6f; -[SCChatWallpaperCameraRollDataProvider initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:] */

undefined1 *
FUN_1064f3b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f18e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126cb290;
    _objc_alloc();
    func_0x00010c035cc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f3c70; end: 1064f3c77; -[SCChatWallpaperCameraRollDataProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f3c70(void)

{
  return 0;
}



/* Entry: 1064f3c78; end: 1064f3c83; -[SCChatWallpaperCameraRollDataProvider pushToValdiMarshaller:] */

void FUN_1064f3c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f3c84; end: 1064f3cbb; -[SCChatWallpaperCameraRollDataProvider createPaginator] */

void FUN_1064f3c84(void)

{
  _objc_alloc(PTR_PTR_1126cb298);
  func_0x00010c035d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f3cbc; end: 1064f3cc3; -[SCChatWallpaperCameraRollDataProvider permissionHandler] */

undefined8 FUN_1064f3cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1064f3cc4; end: 1064f3cf3; -[SCChatWallpaperCameraRollDataProvider setPermissionHandler:] */

void FUN_1064f3cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064f3cf4; end: 1064f3d53; -[SCChatWallpaperCameraRollDataProvider .cxx_destruct] */

void FUN_1064f3cf4(long param_1)

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



/* Entry: 1064f3d54; end: 1064f3dc7; -[SCChatWallpaperForUsDataProvider initWithForUsDataPaginator:] */

undefined1 * FUN_1064f3d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18e8;
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



/* Entry: 1064f3dc8; end: 1064f3dcf; -[SCChatWallpaperForUsDataProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f3dc8(void)

{
  return 0;
}



/* Entry: 1064f3dd0; end: 1064f3ddb; -[SCChatWallpaperForUsDataProvider pushToValdiMarshaller:] */

void FUN_1064f3dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f3ddc; end: 1064f3e03; -[SCChatWallpaperForUsDataProvider createPaginator] */

void FUN_1064f3ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f3e04; end: 1064f3e0f; -[SCChatWallpaperForUsDataProvider .cxx_destruct] */

void FUN_1064f3e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3e10; end: 1064f3e9f; -[SCChatWallpaperForUsDataStore initWithCircumstanceEngine:] */

undefined1 * FUN_1064f3e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f3ea0; end: 1064f3ec7; -[SCChatWallpaperForUsDataStore mediaItems] */

void FUN_1064f3ea0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f3ec8; end: 1064f3ecf; -[SCChatWallpaperForUsDataStore wallpaperForMediaId:] */

void FUN_1064f3ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1064f3ed0; end: 1064f3fbb; -[SCChatWallpaperForUsDataStore loadItems] */

void FUN_1064f3ed0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be18720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf37b60();
  if (lVar2 == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf37b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010050471c();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf37b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100504554();
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_retain(lVar3);
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064f3fbc; end: 1064f4027;  */

void FUN_1064f3fbc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2a18a0();
  func_0x00010c14de00(puVar1);
  return;
}



/* Entry: 1064f4028; end: 1064f41cb;  */

void FUN_1064f4028(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cb288;
  _objc_opt_new(PTR_PTR_1126cb288);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2a18a0();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar1);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010c2a1940();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  lVar5 = param_2;
  if (lVar4 == 0) {
    func_0x00010c2a1860(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a1940(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  lVar3 = lVar5;
  FUN_1064f2bec(lVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144a0(puVar1);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c2a1860(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1064f2bec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a80(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07eda0(param_2);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4740(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064f41cc; end: 1064f4267; -[SCChatWallpaperForUsDataStore _forUsWallpapers] */

void FUN_1064f41cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e53118,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb2a0;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar3,param_2,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f4268; end: 1064f42af; -[SCChatWallpaperForUsDataStore .cxx_destruct] */

void FUN_1064f4268(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f42b0; end: 1064f4323; -[SCChatWallpaperMemoriesDataProvider initWithMemoriesDataPaginator:] */

undefined1 * FUN_1064f42b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18f8;
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



/* Entry: 1064f4324; end: 1064f432b; -[SCChatWallpaperMemoriesDataProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f4324(void)

{
  return 0;
}



/* Entry: 1064f432c; end: 1064f4337; -[SCChatWallpaperMemoriesDataProvider pushToValdiMarshaller:] */

void FUN_1064f432c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f4338; end: 1064f435f; -[SCChatWallpaperMemoriesDataProvider createPaginator] */

void FUN_1064f4338(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f4360; end: 1064f436b; -[SCChatWallpaperMemoriesDataProvider .cxx_destruct] */

void FUN_1064f4360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f436c; end: 1064f4457; -[SCChatWallpaperMemoriesDataStore initWithMemoriesDataProvider:fetchLimit:] */

undefined1 *
FUN_1064f436c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1900;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined1 *)((long)puVar1 + 0x30) = 1;
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
    func_0x00010bec8500(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f4458; end: 1064f449f; -[SCChatWallpaperMemoriesDataStore dealloc] */

void FUN_1064f4458(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126f1900;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1064f44a0; end: 1064f44d3; -[SCChatWallpaperMemoriesDataStore hasReachedLastPage] */

undefined1 FUN_1064f44a0(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  _os_unfair_lock_unlock(param_1 + 0x48);
  return uVar1;
}



/* Entry: 1064f44d4; end: 1064f4517; -[SCChatWallpaperMemoriesDataStore loadNextPage] */

void FUN_1064f44d4(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x48);
  func_0x00010bdcd320(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x48);
  return;
}



/* Entry: 1064f4518; end: 1064f45b7; -[SCChatWallpaperMemoriesDataStore mediaItems] */

void FUN_1064f4518(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    func_0x00010c060400(puVar1,param_2,uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1064f45b8; end: 1064f469f; -[SCChatWallpaperMemoriesDataStore _subscribeToSnaps] */

void FUN_1064f45b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1064f46a0; end: 1064f46e7;  */

void FUN_1064f46a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f46e8; end: 1064f48fb; -[SCChatWallpaperMemoriesDataStore _handleSnaps:] */

long FUN_1064f46e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar4 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1;
        func_0x00010be5e8a0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar2);
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar6 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x30) = lVar6 == 0;
  if (lVar6 == 0) {
    if (lVar4 != 0) {
      func_0x00010be84180(param_1,param_2,PTR____NSArray0__struct_11034ab48);
    }
  }
  else {
    func_0x00010bdcd320(param_1);
  }
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x48);
  __Unwind_Resume();
  lVar6 = *(long *)(param_3 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c067fc0();
  _objc_release(lVar6);
  if (lVar4 < 1) {
    lVar4 = 0x1e;
  }
  return lVar4;
}



/* Entry: 1064f48fc; end: 1064f4943; -[SCChatWallpaperMemoriesDataStore _pageSize] */

long FUN_1064f48fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 < 1) {
    lVar2 = 0x1e;
  }
  return lVar2;
}



/* Entry: 1064f4944; end: 1064f4a5f; -[SCChatWallpaperMemoriesDataStore _mediaItemForSnap:] */

void FUN_1064f4944(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000106d7a74c(0x406f400000000000,0x406f400000000000);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x000106d7a74c(0x4099500000000000,0x40a6800000000000);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    puVar4 = PTR_PTR_1126cb288;
    _objc_opt_new(PTR_PTR_1126cb288);
    func_0x00010c1c4880();
    lVar3 = lVar1;
    func_0x00010beec820(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2144a0(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010beec820(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a80(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064f4a60; end: 1064f4b43; -[SCChatWallpaperMemoriesDataStore _appendNextPageAndPublish] */

void FUN_1064f4a60(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (uVar5 < uVar1) {
      uVar1 = param_1;
      func_0x00010be6f7e0();
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = lVar2 - *(long *)(param_1 + 0x28);
      if (uVar5 <= uVar1) {
        uVar1 = uVar5;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c25e980(uVar3,param_2,*(long *)(param_1 + 0x28),uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar4,param_2,uVar3);
      _objc_release(uVar3);
      uVar1 = *(long *)(param_1 + 0x28) + uVar1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf529e0();
      *(bool *)(param_1 + 0x30) = uVar5 <= uVar1;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00(uVar4);
      func_0x00010be84180(param_1,param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1064f4b44; end: 1064f4c0f; -[SCChatWallpaperMemoriesDataStore _publishMediaItemsLocked:] */

void FUN_1064f4b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    func_0x00010bf51e00();
    uVar1 = param_3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1064f4c10;
    puStack_48 = &UNK_110841f80;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_3;
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uVar1);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
    _objc_release(param_3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1064f4c10; end: 1064f4c1b;  */

void FUN_1064f4c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064f4c1c; end: 1064f4c7b; -[SCChatWallpaperMemoriesDataStore .cxx_destruct] */

void FUN_1064f4c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f4c7c; end: 1064f4cef; -[SCChatWallpaperPreviewDataStore initWithMedia:] */

undefined1 * FUN_1064f4c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1908;
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



/* Entry: 1064f4cf0; end: 1064f4d73; -[SCChatWallpaperPreviewDataStore mediaContentForMediaId:] */

void FUN_1064f4cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f4d74; end: 1064f4d7f; -[SCChatWallpaperPreviewDataStore .cxx_destruct] */

void FUN_1064f4d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f4d80; end: 1064f4df3; -[SCChatWallpaperSavedInChatDataProvider initWithSavedInChatDataPaginator:] */

undefined1 * FUN_1064f4d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1910;
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



/* Entry: 1064f4df4; end: 1064f4dfb; -[SCChatWallpaperSavedInChatDataProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f4df4(void)

{
  return 0;
}



/* Entry: 1064f4dfc; end: 1064f4e07; -[SCChatWallpaperSavedInChatDataProvider pushToValdiMarshaller:] */

void FUN_1064f4dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f4e08; end: 1064f4e2f; -[SCChatWallpaperSavedInChatDataProvider createPaginator] */

void FUN_1064f4e08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f4e30; end: 1064f4e3b; -[SCChatWallpaperSavedInChatDataProvider .cxx_destruct] */

void FUN_1064f4e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f4e3c; end: 1064f4f47; -[SCChatWallpaperSavedInChatDataStore initWithConversationId:currentUserId:conversationDataFetcher:] */

undefined1 *
FUN_1064f4e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1918;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f4f48; end: 1064f4fbf; -[SCChatWallpaperSavedInChatDataStore mediaContentForMediaId:] */

void FUN_1064f4f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f4fc0; end: 1064f4ff3; -[SCChatWallpaperSavedInChatDataStore hasReachedLastPage] */

undefined1 FUN_1064f4fc0(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  _os_unfair_lock_unlock(param_1 + 0x48);
  return uVar1;
}



/* Entry: 1064f4ff4; end: 1064f511f; -[SCChatWallpaperSavedInChatDataStore loadNextPage] */

void FUN_1064f4ff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1064f5120;
  puStack_58 = &UNK_110903fa0;
  uStack_50 = uVar2;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bfa8a40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 1064f5120; end: 1064f51f3;  */

ulong FUN_1064f5120(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07e2a0();
  if ((((int)uVar1 == 0) || (uVar1 = param_2, func_0x00010c07d080(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_2, func_0x00010c07d120(), (uVar1 & 1) == 0)) {
    _objc_retain(param_2);
    uVar1 = param_2;
    func_0x00010c07d100();
    if ((((int)uVar1 == 0) || (uVar1 = param_2, func_0x00010c07d1e0(), (int)uVar1 == 0)) ||
       (uVar1 = param_2, func_0x00010c07d1c0(), (uVar1 & 1) == 0)) {
      _objc_release(param_2);
    }
    else {
      uVar1 = param_2;
      func_0x00010c07d080();
      _objc_release(param_2);
      if ((uVar1 & 1) != 0) goto LAB_1064f5164;
    }
    uVar1 = param_2;
    func_0x00010c07d080();
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2;
      func_0x00010c06d4e0(param_2);
    }
  }
  else {
LAB_1064f5164:
    uVar1 = 1;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1064f51f4; end: 1064f525b;  */

void FUN_1064f51f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4a80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f525c; end: 1064f52d7; -[SCChatWallpaperSavedInChatDataStore mediaItems] */

void FUN_1064f525c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    func_0x00010c09bce0(param_1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1064f52d8; end: 1064f53e3; -[SCChatWallpaperSavedInChatDataStore _updateWithNewMessages:nextPaginationKey:] */

void FUN_1064f52d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x48);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
  *(bool *)(param_1 + 0x20) = param_4 == 0;
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110929198,
                        &PTR___NSConcreteGlobalBlock_1109291d8);
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x38));
    lVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110929218);
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064f53e4; end: 1064f542b;  */

void FUN_1064f53e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f542c; end: 1064f5433;  */

void FUN_1064f542c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_media_11260ea10);
  return;
}



/* Entry: 1064f5434; end: 1064f54db;  */

void FUN_1064f5434(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07d100();
  uVar2 = param_2;
  if ((uVar1 & 1) == 0) {
    func_0x00010c0cb8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14bc80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  FUN_1064f2d88(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1064f54dc; end: 1064f5547; -[SCChatWallpaperSavedInChatDataStore .cxx_destruct] */

void FUN_1064f54dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1064f5548; end: 1064f55af; +[SnapchatProvidedChatWallpaperList descriptor] */

void FUN_1064f5548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c39f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae3a70,
                        &PTR____CFConstantStringClassReference_110e53138,&PTR_DAT_113150af8,
                        &PTR_DAT_113150b10,1,0x10,0x1c);
    puRam00000001136c39f0 = puVar1;
  }
  return;
}



/* Entry: 1064f55b0; end: 1064f5617; +[SnapchatProvidedChatWallpaper descriptor] */

void FUN_1064f55b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c39f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae3ac0,
                        &PTR____CFConstantStringClassReference_110e53158,&PTR_DAT_113150af8,
                        &PTR_DAT_113150b30,6,0x20,0x1c);
    puRam00000001136c39f8 = puVar1;
  }
  return;
}



/* Entry: 1064f5618; end: 1064f572b; -[SCChatOpenActionHandler initWithStackChatsDelegate:startChatDelegate:uiContainer:friendProfileScopeExposer:snapchattersSynchronousDataFetcher:] */

undefined1 *
FUN_1064f5618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1920;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f572c; end: 1064f58d7; -[SCChatOpenActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1064f572c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b02a8;
      _objc_opt_class(PTR_PTR_1126b02a8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126b40a8;
      _objc_opt_class(PTR_PTR_1126b40a8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      if (uVar1 != 0) {
        func_0x00010be7a9a0(param_1);
        goto LAB_1064f58a8;
      }
    }
    param_1 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar2 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    func_0x00010be7a8c0(param_1);
    param_1 = 1;
LAB_1064f58a8:
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1064f58d8; end: 1064f595b; -[SCChatOpenActionHandler _presentChatForUserId:] */

void FUN_1064f58d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c183aa0(param_1,param_2,puVar1,0,0x31,7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f595c; end: 1064f5ab3; -[SCChatOpenActionHandler _presentProfileWithActionDataModel:] */

void FUN_1064f595c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf0e140();
    lVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe2700();
    lVar4 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0daca0();
    lVar6 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0dac60();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    uStack_a8 = (undefined1)lVar3;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = param_3;
    lStack_b0 = lVar1;
    lStack_a0 = lVar5;
    lStack_98 = lVar7;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010c015a00(puVar8,param_2,&lStack_b0,uVar9,lVar2,param_1);
    }
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar8);
    _objc_release(puVar8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1064f5ab4; end: 1064f5b6f; -[SCChatOpenActionHandler _presentChatOrProfileWithActionDataModel:] */

bool FUN_1064f5ab4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d4260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x00010be7dca0(param_1,param_2,param_3);
    }
    else {
      func_0x00010be7a8c0(param_1,param_2,lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1064f5b70; end: 1064f5b8f; -[SCChatOpenActionHandler friendProfileDidDismiss:] */

void FUN_1064f5b70(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1064f5b90; end: 1064f5c33; -[SCChatOpenActionHandler friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_1064f5b90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_4);
  func_0x00010c27a4c0(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c183a80();
  _objc_release(param_4);
  _objc_release(lVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d5fa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064f5c34; end: 1064f5c7f; -[SCChatOpenActionHandler .cxx_destruct] */

void FUN_1064f5c34(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064f5c80; end: 1064f5e8f; -[SCChatSnapActionHandler initWithMessageActionHandler:delegate:messagingPlaybackScopeExposer:snapReplayScopeExposer:animationDataCoordinator:chatLogger:loadMessageLogger:uiContainer:plusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined8 *
FUN_1064f5c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126f1928;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2e38;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 1064f5e90; end: 1064f6173; -[SCChatSnapActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1064f5e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar5 = 0;
            goto LAB_1064f6144;
          }
          uVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126cb2c8;
          _objc_opt_class(PTR_PTR_1126cb2c8);
          uVar4 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar3);
          uVar1 = uVar2;
          if ((uVar4 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar2);
          func_0x00010be729a0(param_1);
        }
        else {
          uVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126cb2c0;
          _objc_opt_class(PTR_PTR_1126cb2c0);
          uVar4 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar3);
          uVar1 = uVar2;
          if ((uVar4 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar2);
          func_0x00010be72020(param_1);
        }
      }
      else {
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126cb2b8;
        _objc_opt_class(PTR_PTR_1126cb2b8);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010be72960(param_1);
      }
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126cb2b0;
      _objc_opt_class(PTR_PTR_1126cb2b0);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be729c0(param_1);
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cb2a8;
    _objc_opt_class(PTR_PTR_1126cb2a8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010be72920(param_1);
  }
  _objc_release(uVar1);
  uVar5 = 1;
LAB_1064f6144:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 1064f6174; end: 1064f62fb; -[SCChatSnapActionHandler _performSnapLoadAction:] */

void FUN_1064f6174(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135080();
  puVar2 = PTR_PTR_1126cb2d0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c231e40();
  _objc_release(puVar2);
  if ((((ulong)puVar3 & 1) != 0) || (lVar1 == 4)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2ee0(uVar4,param_2,lVar6,&PTR____CFConstantStringClassReference_110e53178);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar5 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c074920(param_3);
    lVar9 = param_3;
    func_0x00010c135080(param_3);
    uVar4 = 10;
    if (lVar1 != 4) {
      uVar4 = 1;
    }
    func_0x00010c09b920(uVar10,param_2,lVar5,lVar6,lVar7,lVar8,lVar9,uVar4,0);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064f62fc; end: 1064f64af; -[SCChatSnapActionHandler _performSnapTapToViewAction:sourceView:] */

void FUN_1064f62fc(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c15acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (0 < (long)uVar2) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    if ((double)uVar2 < param_1 * 1000.0) goto LAB_1064f6488;
  }
  func_0x0001070a52c0(*(undefined8 *)(param_2 + 0x58),1);
  puVar3 = PTR_PTR_1126c2cf8;
  uVar1 = param_4;
  func_0x00010c0cb5a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37bc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c2d00;
  _objc_alloc(PTR_PTR_1126c2d00);
  func_0x00010bff7220();
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  uVar1 = param_4;
  func_0x00010bf50280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c15de40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d940(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1064f6488:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064f64b0; end: 1064f65ef; -[SCChatSnapActionHandler _performSnapPressToReplayAction:] */

void FUN_1064f64b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eadc0(lVar1,param_2,1,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c28e8;
  uVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c074920(param_3);
  _objc_release(param_3);
  func_0x00010c1316c0(puVar5,param_2,uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126c28f0;
  _objc_alloc(PTR_PTR_1126c28f0);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c00ae40(puVar6,param_2,lVar1,puVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1064f65f0; end: 1064f6697; -[SCChatSnapActionHandler _performLoadingLoggingAction:] */

void FUN_1064f65f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0a5340(uVar3,param_2,lVar1,1);
    _objc_release(puVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1064f6698; end: 1064f6727; -[SCChatSnapActionHandler _performSnapTapToPlusSubscribe:] */

void FUN_1064f6698(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf23e60(uVar2,param_2,*(undefined8 *)(param_1 + 0x40),puVar1,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064f6728; end: 1064f676f; -[SCChatSnapActionHandler plusSubscribeDidDismiss] */

void FUN_1064f6728(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1064f6770; end: 1064f6803; -[SCChatSnapActionHandler .cxx_destruct] */

void FUN_1064f6770(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f6804; end: 1064f68f7; -[SCChatSnapchatterActionHandler initWithFriendsSnapchatterActionHandler:uiContainer:startChatDelegate:friendProfileScopeExposer:] */

undefined1 *
FUN_1064f6804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f68f8; end: 1064f69a7; -[SCChatSnapchatterActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_1064f68f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be7b840(param_1,param_2,param_4);
    }
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1064f69a8; end: 1064f6c07; -[SCChatSnapchatterActionHandler _presentFriendScopeForAction:] */

undefined8 FUN_1064f69a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b40a8;
  _objc_opt_class(PTR_PTR_1126b40a8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar6);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
    goto LAB_1064f6bd4;
  }
  func_0x00010bf0e140();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2700();
  uVar4 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0daca0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    uVar3 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) goto LAB_1064f6bbc;
    puVar6 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) goto LAB_1064f6bb4;
    func_0x00010c015a00();
LAB_1064f6b90:
    _objc_release(uVar2);
    if (puVar6 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
      uVar5 = 1;
    }
  }
  else {
    puVar6 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    func_0x00010c244280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c0159e0();
      goto LAB_1064f6b90;
    }
LAB_1064f6bb4:
    _objc_release(uVar2);
LAB_1064f6bbc:
    uVar5 = 0;
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_1064f6bd4:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1064f6c08; end: 1064f6c27; -[SCChatSnapchatterActionHandler friendProfileDidDismiss:] */

void FUN_1064f6c08(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1064f6c28; end: 1064f6ccb; -[SCChatSnapchatterActionHandler friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_1064f6c28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_4);
  func_0x00010c27a4c0(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c183a80();
  _objc_release(param_4);
  _objc_release(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d5fa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064f6ccc; end: 1064f6d0f; -[SCChatSnapchatterActionHandler .cxx_destruct] */

void FUN_1064f6ccc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f6d10; end: 1064f6daf; -[SCChatTapActionHandler initWithActionHandler:animationDataCoordinator:baseConversationId:] */

long FUN_1064f6d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 8,param_3);
    _objc_storeWeak(param_1 + 0x10,param_4);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1064f6db0; end: 1064f6e3b; -[SCChatTapActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1064f6db0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be2f780(param_1,param_2,param_4);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_1, func_0x00010be327a0(param_1,param_2,param_4), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x00010be26500(param_1,param_2,param_4), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010be26560(param_1,param_2,param_4), (uVar1 & 1) == 0)) {
    func_0x00010be293c0(param_1,param_2,param_4);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1064f6e3c; end: 1064f6fab; -[SCChatTapActionHandler _handleUnsaveActionModel:] */

ulong FUN_1064f6e3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb2d8;
    _objc_opt_class(PTR_PTR_1126cb2d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      uVar5 = uVar3;
      func_0x00010c0cb5a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5740(lVar6);
      _objc_release(uVar5);
      _objc_release(lVar6);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar5 = uVar3;
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2824a0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064f6fac; end: 1064f711b; -[SCChatTapActionHandler _handleSaveActionModel:] */

ulong FUN_1064f6fac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb2d8;
    _objc_opt_class(PTR_PTR_1126cb2d8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      uVar5 = uVar3;
      func_0x00010c0cb5a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f5740(lVar6);
      _objc_release(uVar5);
      _objc_release(lVar6);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar5 = uVar3;
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14a9c0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064f711c; end: 1064f72bf; -[SCChatTapActionHandler _handleBatchUnsaveActionModel:] */

ulong FUN_1064f711c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb2e0;
    _objc_opt_class(PTR_PTR_1126cb2e0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      uVar5 = uVar3;
      func_0x00010c0cb620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80();
      _objc_release(uVar6);
      _objc_release(uVar5);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar5 = uVar3;
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2824c0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064f72c0; end: 1064f730b;  */

void FUN_1064f72c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f5740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064f730c; end: 1064f74af; -[SCChatTapActionHandler _handleBatchSaveActionModel:] */

ulong FUN_1064f730c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb2e0;
    _objc_opt_class(PTR_PTR_1126cb2e0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      uVar5 = uVar3;
      func_0x00010c0cb620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80();
      _objc_release(uVar6);
      _objc_release(uVar5);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar5 = uVar3;
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb620(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14aa00(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064f74b0; end: 1064f74fb;  */

void FUN_1064f74b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f5740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064f74fc; end: 1064f761f; -[SCChatTapActionHandler _handleFailedMessageRetryActionModel:] */

ulong FUN_1064f74fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cb2e8;
    _objc_opt_class(PTR_PTR_1126cb2e8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar5 = uVar3;
      func_0x00010bf50280(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13f680(param_1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064f7620; end: 1064f7653; -[SCChatTapActionHandler .cxx_destruct] */

void FUN_1064f7620(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064f7654; end: 1064f76c7; -[SCChatUIActionHandler initWithActionHandlers:] */

undefined1 * FUN_1064f7654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1938;
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



/* Entry: 1064f76c8; end: 1064f784b; -[SCChatUIActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_1064f76c8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    lVar7 = 0;
    if (lVar2 != 0) {
      do {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          uVar3 = *(ulong *)(lVar7 * 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfd0140();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            lVar7 = 1;
            goto LAB_1064f77e4;
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar6;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      lVar7 = 0;
    }
LAB_1064f77e4:
    _objc_release(lVar6);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
    return param_3;
  }
  return lVar7;
}



/* Entry: 1064f784c; end: 1064f7857; -[SCChatUIActionHandler .cxx_destruct] */

void FUN_1064f784c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f7858; end: 1064f78fb; -[SCChatTypingHandler initWithTypingNotificationSender:talkTypingActivitySubject:] */

undefined1 *
FUN_1064f7858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1940;
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



/* Entry: 1064f78fc; end: 1064f7aa7; -[SCChatTypingHandler updateTypingStateWithState:activityType:conversationViewModel:] */

void FUN_1064f78fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bee1c80(param_1);
  if ((param_5 != 0) && (lVar1 = param_1, func_0x00010beb6d20(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010bf50280(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1064f7aa8;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c15d820(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


