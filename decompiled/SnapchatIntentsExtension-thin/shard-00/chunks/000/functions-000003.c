/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100018a38; end: 100018a3b; -[SCAppGroupPlistStorage stringForKey:] */

void FUN_100018a38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s__objectForKey__10002ecf0);
  return;
}



/* Entry: 100018a3c; end: 100018a3f; -[SCAppGroupPlistStorage setString:forKey:] */

void FUN_100018a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s__setObject_forKey__10002ed00);
  return;
}



/* Entry: 100018a40; end: 100018a4b; -[SCAppGroupPlistStorage removeObjectForKey:] */

void FUN_100018a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s__setObject_forKey__10002ed00,0,param_3);
  return;
}



/* Entry: 100018a4c; end: 100018a57; -[SCAppGroupPlistStorage .cxx_destruct] */

void FUN_100018a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 100018a58; end: 100018ad3; +[SCExtensionSharedDirectory directoryForUserId:] */

void FUN_100018a58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010001fde0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x00010001ea40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar1);
  return;
}



/* Entry: 100018ad4; end: 100018ad7; +[SCExtensionSharedDirectory directoryForLoggedOut] */

void FUN_100018ad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)(param_1,PTR_s_loggedOutDirectory_10002efd8);
  return;
}



/* Entry: 100018ad8; end: 100018aeb; +[SCExtensionSharedDirectory userScopedDirectory] */

void FUN_100018ad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_1,PTR_s__topLevelDirectoryWithName_skipB_10002ed08,
             &PTR____CFConstantStringClassReference_100029438,0x1000314f0);
  return;
}



/* Entry: 100018aec; end: 100018aff; +[SCExtensionSharedDirectory loggedOutDirectory] */

void FUN_100018aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_1,PTR_s__topLevelDirectoryWithName_skipB_10002ed08,
             &PTR____CFConstantStringClassReference_100029458,0x1000314f8);
  return;
}



/* Entry: 100018b00; end: 100018b3b; +[SCExtensionSharedDirectory removeUserScopedDirectory] */

void FUN_100018b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010001fde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ebe0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 100018b3c; end: 100018b77; +[SCExtensionSharedDirectory removeLoggedOutDirectory] */

void FUN_100018b3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010001f720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ebe0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 100018b78; end: 100018c07; +[SCExtensionSharedDirectory applicationGroupContainerURL] */

void FUN_100018b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_10002f2e8;
  func_0x00010001f740(PTR__OBJC_CLASS___NSBundle_10002f2e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010001faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010001ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar3);
  return;
}



/* Entry: 100018c08; end: 100018c57; +[SCExtensionSharedDirectory databasesDirectoryForUserId:] */

void FUN_100018c08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010001f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010001ea60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100018c58; end: 100018ca7; +[SCExtensionSharedDirectory databasesDirectoryForLoggedOut] */

void FUN_100018c58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010001f080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010001ea60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100018ca8; end: 100018d5b; -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:] */

undefined1 * FUN_100018ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_10002f420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010001f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_100018d34;
    }
  }
  _objc_retain(puVar1);
  puVar3 = (undefined1 *)puVar1;
LAB_100018d34:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 100018d5c; end: 100018deb; -[SCExtensionSharedDirectory initLoggedOutDirectory] */

undefined1 * FUN_100018d5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_10002f420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010001f080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_100018dd0;
    }
  }
  _objc_retain(puVar1);
  puVar3 = (undefined1 *)puVar1;
LAB_100018dd0:
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 100018dec; end: 100018ed3; -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:name:] */

undefined1 *
FUN_100018dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010001f0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010001ea60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar4);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_100018ea4;
    }
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_100018ea4:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 100018ed4; end: 100018fa3; -[SCExtensionSharedDirectory initLoggedOutDirectoryWithName:] */

undefined1 * FUN_100018ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_10002f420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010001f080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010001ea60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar4);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_100018f7c;
    }
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_100018f7c:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 100018fa4; end: 10001905f; -[SCExtensionSharedDirectory initWithParentDirectory:name:] */

undefined1 *
FUN_100018fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001fda0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010001ea60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100019060; end: 1000190eb; -[SCExtensionSharedDirectory initWithRawFolderPath:] */

undefined1 * FUN_100019060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_10002f358;
    func_0x00010001f240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000190ec; end: 10001916f; -[SCExtensionSharedDirectory filesWithError:] */

void FUN_1000190ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010001f920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010001ee20(puVar1,param_2,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar3);
  return;
}



/* Entry: 100019170; end: 1000191e3; -[SCExtensionSharedDirectory sharedFileWithName:delegate:] */

void FUN_100019170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_10002f308;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010001f380();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 1000191e4; end: 10001923f; -[SCExtensionSharedDirectory subDirectoryWithName:] */

void FUN_1000191e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_10002f360;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010001f520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 100019240; end: 100019263; -[SCExtensionSharedDirectory remove] */

void FUN_100019240(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010001ebf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)();
  return;
}



/* Entry: 100019264; end: 100019347; +[SCExtensionSharedDirectory _topLevelDirectoryWithName:skipBackupOnceToken:] */

void FUN_100019264(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010001eca0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010001ea40();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_1000281e0;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_100019348;
    puStack_40 = &UNK_100028bd8;
    _objc_retain();
    lStack_38 = lVar1;
    if (*param_4 != -1) {
      _dispatch_once(param_4,&puStack_58);
    }
    _objc_release(lStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar1);
  return;
}



/* Entry: 100019348; end: 10001938b;  */

void FUN_100019348(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_10002f360;
  func_0x00010001eba0(PTR_PTR_10002f360,param_2,*(undefined8 *)(param_1 + 0x20));
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (PTR_PTR_10002f360,PTR_s__addSkipBackupAttributeToURL__10002ecb8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10001938c; end: 100019447; +[SCExtensionSharedDirectory _removeDirectoryAtURL:] */

void FUN_10001938c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010001f420();
    func_0x00010001ee80();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_100028160)(puVar1);
    return;
  }
  return;
}



/* Entry: 100019448; end: 100019467; +[SCExtensionSharedDirectory _addSkipBackupAttributeToURL:] */

void FUN_100019448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010001fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_3,PTR_s_setResourceValue_forKey_error__10002f120,PTR____kCFBooleanTrue_100028090,
             *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_100028080,0);
  return;
}



/* Entry: 100019468; end: 1000194cf; +[SCExtensionSharedDirectory _isSkipBackupAttributeAddedToURL:] */

undefined8 FUN_100019468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x00010001f2c0(param_3,param_2,&uStack_28,
                      *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_100028080,&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  _objc_retain(uStack_30);
  func_0x00010001ed60(uVar2);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1000194d0; end: 1000194d7; -[SCExtensionSharedDirectory url] */

undefined8 FUN_1000194d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000194d8; end: 100019507; -[SCExtensionSharedDirectory setUrl:] */

void FUN_1000194d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 100019508; end: 100019513; -[SCExtensionSharedDirectory .cxx_destruct] */

void FUN_100019508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 100019514; end: 10001959f; -[SCExtensionSharedFile initWithName:delegate:] */

undefined8
FUN_100019514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_10002f360;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010001eca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f500(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000195a0; end: 1000195b7; -[SCExtensionSharedFile initWithName:groupContainerURL:delegate:] */

void FUN_1000195a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010001eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_1,PTR_s__initFileWithDirectoryURL_filena_10002ece0,param_4,param_3,0,param_5);
  return;
}



/* Entry: 1000195b8; end: 100019653; -[SCExtensionSharedFile initUserScopedFileWithUserId:filename:delegate:] */

undefined8
FUN_1000195b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_10002f360;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010001f0a0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f380(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100019654; end: 10001965f; -[SCExtensionSharedFile initFileWithDirectoryURL:filename:delegate:] */

void FUN_100019654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010001eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_1,PTR_s__initFileWithDirectoryURL_filena_10002ece0,param_3,param_4,1,param_5);
  return;
}



/* Entry: 100019660; end: 10001978b; -[SCExtensionSharedFile _initFileWithDirectoryURL:filename:autoCreateDirectory:delegate:] */

undefined1 *
FUN_100019660(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_10002f428;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_100019750;
    }
    lVar2 = param_3;
    func_0x00010001ea40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_10002f370;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar4);
    func_0x00010001fbc0(*(undefined8 *)((long)puVar1 + 0x20));
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_6);
    if (param_6 != 0) {
      func_0x00010001ec40(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
    }
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_100019750:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 10001978c; end: 1000197db; -[SCExtensionSharedFile dealloc] */

void FUN_10001978c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010001fa00(PTR__OBJC_CLASS___NSFileCoordinator_10002f368,param_2,param_1);
  puStack_28 = PTR_PTR_10002f428;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 1000197dc; end: 1000197e3; -[SCExtensionSharedFile _getAutoCreateDirectory] */

undefined1 FUN_1000197dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1000197e4; end: 1000198bf; -[SCExtensionSharedFile _createFileIfNeeded] */

void FUN_1000197e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010001eb40();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010001f920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010001f1c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010001f920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ef00(puVar1,param_2,uVar2,0,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar1);
  return;
}



/* Entry: 1000198c0; end: 1000199a3; -[SCExtensionSharedFile _createDirectoryIfNeeded] */

void FUN_1000198c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010001f940();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010001eaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_10002f350;
    func_0x00010001f000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010001f920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010001f1c0(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_10002f350;
      func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010001eee0();
      _objc_release(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_100028160)(lVar1);
    return;
  }
  return;
}



/* Entry: 1000199a4; end: 1000199db; -[SCExtensionSharedFile presentedItemDidChange] */

void FUN_1000199a4(undefined8 param_1)

{
  func_0x00010001f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f180();
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_1);
  return;
}



/* Entry: 1000199dc; end: 100019af7; -[SCExtensionSharedFile _atomicallyWriteData:toURL:] */

/* WARNING: Removing unreachable block (ram,0x000100019a34) */

void FUN_1000199dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100028200;
  func_0x00010001fe20();
  uVar6 = 0;
  _objc_retain(0);
  puVar2 = PTR__OBJC_CLASS___NSError_10002f378;
  puVar7 = (undefined *)0x0;
  if ((param_3 & 1) == 0) {
    param_4 = *(undefined8 *)PTR__NSCocoaErrorDomain_100028028;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_10002f2e0;
    func_0x00010001f060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001f140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_100028200 != lVar4) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    func_0x00010001eb60(uVar6);
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_100019c78;
    uStack_a0 = 0x100019c88;
    uStack_98 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
    func_0x00010001f420();
    func_0x00010001f940(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_b8;
    uVar5 = puStack_b8[5];
    _objc_retain(param_4);
    func_0x00010001ee80(puVar2);
    _objc_retain(uVar5);
    uVar3 = puVar1[5];
    puVar1[5] = uVar5;
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar7 = (undefined *)puStack_b8[5];
    _objc_retain(puVar7);
    _objc_release(param_4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar7);
  return;
}



/* Entry: 100019af8; end: 100019c77; -[SCExtensionSharedFile writeData:] */

void FUN_100019af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010001eb60(param_1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_100019c78;
  uStack_50 = 0x100019c88;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  _objc_retain(param_3);
  func_0x00010001ee80(puVar2);
  _objc_retain(uVar4);
  uVar3 = puVar1[5];
  puVar1[5] = uVar4;
  _objc_release(uVar3);
  _objc_release(param_1);
  uVar3 = puStack_68[5];
  _objc_retain(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar3);
  return;
}



/* Entry: 100019c78; end: 100019c8f;  */

void FUN_100019c78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100019c90; end: 100019d47;  */

void FUN_100019c90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010001eb20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar2);
  return;
}



/* Entry: 100019d48; end: 100019e2f; -[SCExtensionSharedFile appendData:withSizeLimit:] */

void FUN_100019d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010001eb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  uVar2 = param_1;
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_1000281e0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100019e30;
  puStack_60 = &UNK_100028c78;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010001ee80(puVar1,param_2,uVar2,4,0,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar1);
  return;
}



/* Entry: 100019e30; end: 100019e43;  */

void FUN_100019e30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendDataToFile_withData_sizeL_10002ecc0,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100019e44; end: 100019fe7; -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:] */

void FUN_100019e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  _objc_retain(param_4);
  func_0x00010001f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010001f920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010001ece0(puVar1,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010001f220();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (param_5 < puVar4) {
    uVar2 = param_3;
    func_0x00010001ea80(param_3,param_2,&PTR____CFConstantStringClassReference_100029498);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010001f920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001fa20(puVar1,param_2,uVar5,0);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010001f920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010001f920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001f7c0(puVar1,param_2,uVar5,uVar6,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSFileHandle_10002f380;
  func_0x00010001f1e0(PTR__OBJC_CLASS___NSFileHandle_10002f380,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fac0();
  func_0x00010001fe00(puVar3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010001ed80(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 100019fe8; end: 10001a163; -[SCExtensionSharedFile appendData:] */

void FUN_100019fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010001eb60(param_1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_100019c78;
  uStack_50 = 0x100019c88;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  _objc_retain(param_3);
  func_0x00010001ee80(puVar2);
  _objc_retain(uVar4);
  uVar3 = puVar1[5];
  puVar1[5] = uVar4;
  _objc_release(uVar3);
  _objc_release(param_1);
  uVar3 = puStack_68[5];
  _objc_retain(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar3);
  return;
}



/* Entry: 10001a164; end: 10001a30b;  */

void FUN_10001a164(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSFileHandle_10002f380;
  func_0x00010001f200(PTR__OBJC_CLASS___NSFileHandle_10002f380);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    func_0x00010001fac0(puVar1);
    func_0x00010001fe00(puVar1);
    func_0x00010001ed80(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10001a30c; end: 10001a36b;  */

void FUN_10001a30c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000281c8)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 10001a36c; end: 10001a517; -[SCExtensionSharedFile modifyDataWithModificationBlock:error:] */

void FUN_10001a36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  func_0x00010001eb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_100019c78;
  uStack_60 = 0x100019c88;
  uStack_58 = 0;
  uVar4 = param_1;
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  uVar5 = puStack_78[5];
  _objc_retain(param_3);
  func_0x00010001ee60(puVar2);
  _objc_retain(uVar5);
  uVar3 = puVar1[5];
  puVar1[5] = uVar5;
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = puStack_78[5];
    _objc_retainAutorelease();
    *param_4 = uVar4;
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10001a518; end: 10001a6cf;  */

void FUN_10001a518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_10002f388;
  func_0x00010001ef60(PTR__OBJC_CLASS___NSData_10002f388);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010001eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_2);
  return;
}



/* Entry: 10001a6d0; end: 10001a713;  */

void FUN_10001a6d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010001e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000281c8)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 10001a714; end: 10001a87f; -[SCExtensionSharedFile copyDataFromURL:error:] */

void FUN_10001a714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010001eb40(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_100019c78;
  uStack_50 = 0x100019c88;
  uStack_48 = 0;
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  func_0x00010001ee60(puVar2);
  _objc_retain(uVar4);
  uVar3 = puVar1[5];
  puVar1[5] = uVar4;
  _objc_release(uVar3);
  _objc_release(param_1);
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = puStack_68[5];
    _objc_retainAutorelease();
    *param_4 = uVar3;
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10001a880; end: 10001a92f;  */

void FUN_10001a880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010001f000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010001f7e0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10001a930; end: 10001a94b;  */

void FUN_10001a930(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000281c8)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  return;
}



/* Entry: 10001a94c; end: 10001a9bf; -[SCExtensionSharedFile fileExists] */

undefined * FUN_10001a94c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010001f920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010001f1c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10001a9c0; end: 10001aae7; -[SCExtensionSharedFile readData] */

void FUN_10001a9c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x00010001f1a0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_100019c78;
    uStack_30 = 0x100019c88;
    uStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
    func_0x00010001f420();
    func_0x00010001f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010001ee40(puVar1);
    _objc_release(param_1);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar2);
  return;
}



/* Entry: 10001aae8; end: 10001ab2f;  */

void FUN_10001aae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_10002f388;
  func_0x00010001ef60(PTR__OBJC_CLASS___NSData_10002f388,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar2);
  return;
}



/* Entry: 10001ab30; end: 10001ae03; -[SCExtensionSharedFile deleteFileWithError:] */

void FUN_10001ab30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileCoordinator_10002f368;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_10002f368);
  func_0x00010001f420();
  uVar7 = param_1;
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010001f920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010001ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_100019c78;
  uStack_78 = 0x100019c88;
  uStack_70 = 0;
  puVar5 = puVar4;
  func_0x00010001f8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)PTR__NSFileTypeSymbolicLink_100028040;
  _objc_release();
  if (puVar5 == puVar10) {
    uVar7 = param_1;
    func_0x00010001f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010001eac0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_90;
    uVar8 = puStack_90[5];
    _objc_retain(puVar2);
    func_0x00010001ee80(puVar3);
    _objc_retain(uVar8);
    uVar6 = puVar1[5];
    puVar1[5] = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_90;
  uVar9 = puStack_90[5];
  _objc_retain(puVar2);
  func_0x00010001ee80(puVar3);
  _objc_retain(uVar9);
  uVar7 = puVar1[5];
  puVar1[5] = uVar9;
  _objc_release(uVar7);
  _objc_release(param_1);
  if (param_3 != (undefined8 *)0x0) {
    uVar7 = puStack_90[5];
    _objc_retainAutorelease();
    *param_3 = uVar7;
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10001ae04; end: 10001aeb3;  */

void FUN_10001ae04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uStack_28 = *(undefined8 *)(lVar3 + 0x28);
  func_0x00010001fa40(*(undefined8 *)(param_1 + 0x20),param_2,param_2,&uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10001aeb4; end: 10001af7f; -[SCExtensionSharedFile createSymbolicLinkToFilename:error:] */

void FUN_10001aeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010001eb60(param_1);
  func_0x00010001f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010001eaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010001ea40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_10002f350;
  func_0x00010001f000(PTR__OBJC_CLASS___NSFileManager_10002f350);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001ef40();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 10001af80; end: 10001af97; -[SCExtensionSharedFile delegate] */

void FUN_10001af80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 10001af98; end: 10001afa3; -[SCExtensionSharedFile setDelegate:] */

void FUN_10001af98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_1000281a8)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10001afa4; end: 10001afab; -[SCExtensionSharedFile presentedItemURL] */

undefined8 FUN_10001afa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10001afac; end: 10001afdb; -[SCExtensionSharedFile setPresentedItemURL:] */

void FUN_10001afac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar1);
  return;
}



/* Entry: 10001afdc; end: 10001afe7; -[SCExtensionSharedFile presentedItemOperationQueue] */

void FUN_10001afdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_100028110)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10001afe8; end: 10001afef; -[SCExtensionSharedFile setPresentedItemOperationQueue:] */

void FUN_10001afe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_100028190)();
  return;
}



/* Entry: 10001aff0; end: 10001b027; -[SCExtensionSharedFile .cxx_destruct] */

void FUN_10001aff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_1000280f0)(param_1 + 0x10);
  return;
}



/* Entry: 10001b028; end: 10001b0e3; +[SCMutableSetReaderWriter readSetFromFile:] */

void FUN_10001b028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010001f980(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_10002f390;
  _objc_alloc();
  func_0x00010001f3a0();
  func_0x00010001fc20();
  puVar2 = puVar1;
  func_0x00010001efe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_10002f398;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_10002f398);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar3);
  return;
}



/* Entry: 10001b0e4; end: 10001b1d3; +[SCMutableSetReaderWriter addStringToSetAndSaveToFile:newString:] */

void FUN_10001b0e4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010001f9a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_10002f398;
    func_0x00010001fae0(PTR__OBJC_CLASS___NSMutableSet_10002f398);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  func_0x00010001ec60(puVar1,param_2,param_4);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_10002f3a0;
  func_0x00010001ecc0(PTR__OBJC_CLASS___NSKeyedArchiver_10002f3a0,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fe00(param_3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 10001b1d4; end: 10001b333; +[SCMutableSetReaderWriter stringExistsInFiles:stringToCheck:] */

long FUN_10001b1d4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100028200;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010001eec0();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_10001b2dc:
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_100028200 == lVar4) {
        return lVar5;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010001f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_100028128)();
      return param_3;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = param_1;
      func_0x00010001f9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010001ee00();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        lVar5 = 1;
        goto LAB_10001b2dc;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_3;
    func_0x00010001eec0();
  } while( true );
}



/* Entry: 10001b334; end: 10001b34b;  */

void FUN_10001b334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100028128)
            (param_1,PTR_s_objectForInfoDictionaryKey__10002f030,
             &PTR____CFConstantStringClassReference_1000294b8);
  return;
}



/* Entry: 10001b34c; end: 10001b3ef; -[SCUserExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_10001b34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f430;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
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



/* Entry: 10001b3f0; end: 10001b3f7; -[SCUserExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_10001b3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10001b3f8; end: 10001b3ff; -[SCUserExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_10001b3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10001b400; end: 10001b42f; -[SCUserExtensionStorageServices .cxx_destruct] */

void FUN_10001b400(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001b430; end: 10001b4d3; -[SCAppExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_10001b430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_10002f438;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_10002eed8);
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



/* Entry: 10001b4d4; end: 10001b4db; -[SCAppExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_10001b4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10001b4dc; end: 10001b4e3; -[SCAppExtensionStorageServices appGroupPlistStorage] */

undefined8 FUN_10001b4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10001b4e4; end: 10001b513; -[SCAppExtensionStorageServices .cxx_destruct] */

void FUN_10001b4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 8,0);
  return;
}



/* Entry: 10001b514; end: 10001b55f; +[SCLazy automaticCreationWithInitializationBlock:] */

void FUN_10001b514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010001f460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(param_1);
  return;
}



/* Entry: 10001b560; end: 10001b5ab; +[SCLazy manualCreationWithInitializationBlock:] */

void FUN_10001b560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010001f460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(param_1);
  return;
}



/* Entry: 10001b5ac; end: 10001b5e7; -[SCLazy isCreated] */

bool FUN_10001b5ac(long param_1)

{
  char cVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x1c);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return cVar1 == '\x02';
}



/* Entry: 10001b5e8; end: 10001b7ab; -[SCLazy target] */

void FUN_10001b5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_100028200;
  _os_unfair_lock_lock(param_1 + 0x18);
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    lVar3 = param_1 + 0x18;
    _os_unfair_lock_unlock();
    lVar6 = 0;
    goto LAB_10001b758;
  }
  if (cVar1 == '\x02') {
LAB_10001b660:
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    unaff_x20 = *(long *)(param_1 + 0x10);
    _objc_retain(unaff_x20);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar5);
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x1c) = 2;
      lVar3 = *(long *)(param_1 + 8);
      (**(code **)(lVar3 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar3;
      _objc_release(uVar5);
      goto LAB_10001b660;
    }
    unaff_x20 = 0;
    lVar6 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(unaff_x20);
  param_4 = auStack_c8;
  lVar3 = unaff_x20;
  func_0x00010001eec0();
  if (lVar3 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(unaff_x20);
        }
        lVar4 = *(long *)(lStack_108 + lVar7 * 8);
        (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      param_4 = auStack_c8;
      lVar3 = unaff_x20;
      func_0x00010001eec0();
    } while (lVar3 != 0);
  }
  param_1 = 0;
  _objc_release(unaff_x20);
  _objc_retain(lVar6);
  _objc_release(unaff_x20);
  lVar3 = lVar6;
  _objc_release();
LAB_10001b758:
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar6);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  lVar6 = lVar3;
  __Unwind_Resume();
  pcStack_118 = FUN_10001b7ac;
  lStack_140 = unaff_x22;
  lStack_138 = param_1;
  lStack_130 = unaff_x20;
  lStack_128 = lVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  func_0x00010001f8e0(lVar6);
  iVar2 = (int)lVar6 + 0x18;
  _os_unfair_lock_trylock();
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(lVar6 + 0x1c), _os_unfair_lock_unlock(lVar6 + 0x18), cVar1 != '\x02')) {
    puStack_168 = PTR___NSConcreteStackBlock_1000281e0;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_10001b858;
    puStack_150 = &UNK_100028bd8;
    lStack_148 = lVar6;
    _dispatch_async(param_4,&puStack_168);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10001b7ac; end: 10001b857; -[SCLazy asyncTarget:triggerCreateNowOnQueue:] */

void FUN_10001b7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  func_0x00010001f8e0(param_1);
  iVar2 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if ((iVar2 == 0) ||
     (cVar1 = *(char *)(param_1 + 0x1c), _os_unfair_lock_unlock(param_1 + 0x18), cVar1 != '\x02')) {
    puStack_58 = PTR___NSConcreteStackBlock_1000281e0;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10001b858;
    puStack_40 = &UNK_100028bd8;
    lStack_38 = param_1;
    _dispatch_async(param_4,&puStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10001b858; end: 10001b877;  */

void FUN_10001b858(long param_1)

{
  func_0x00010001ef20(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10001b878; end: 10001b97b; -[SCLazy onCreated:] */

void FUN_10001b878(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar3);
      _os_unfair_lock_unlock(param_1 + 0x18);
      (**(code **)(param_3 + 0x10))(param_3,uVar3);
      _objc_release(uVar3);
    }
    else {
      puVar4 = *(undefined **)(param_1 + 0x10);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_10002f3a8;
        _objc_opt_new();
      }
      else {
        _objc_retain(puVar4);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00010001eea0(param_3);
      lVar2 = lVar1;
      _objc_retainBlock();
      func_0x00010001ec60(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _os_unfair_lock_unlock(param_1 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 10001b97c; end: 10001b9cb; -[SCLazy ifCreated] */

void FUN_10001b97c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 10001b9cc; end: 10001ba27; -[SCLazy ifCreatedNonBlocking] */

void FUN_10001b9cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1 + 0x18;
  _os_unfair_lock_trylock();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar2);
  return;
}



/* Entry: 10001ba28; end: 10001bbb3; -[SCLazy createNow] */

void FUN_10001ba28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_100028200;
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) != '\x02') {
    *(undefined1 *)(param_1 + 0x1c) = 2;
    lVar1 = *(long *)(param_1 + 8);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar4);
  }
  puVar5 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar5);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010001eec0();
  if (lVar1 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar3 = &uStack_110;
      func_0x00010001eec0();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_100028200 != lStack_48) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(0x18);
    __Unwind_Resume();
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _os_unfair_lock_lock(lVar6 + 0x18);
      if (*(char *)(lVar6 + 0x1c) == '\x02') {
        uVar4 = *(undefined8 *)(lVar6 + 8);
        _objc_retain(uVar4);
        puVar5 = PTR_PTR_10002f2f8;
        puStack_1a0 = PTR___NSConcreteStackBlock_1000281e0;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_10001be08;
        puStack_188 = &UNK_100028d68;
        _objc_retain(puVar3);
        puStack_178 = (undefined1 *)puVar3;
        _objc_retain(uVar4);
        uStack_180 = uVar4;
        func_0x00010001ed00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010001ef20();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uStack_180);
        _objc_release(puStack_178);
        _objc_release(uVar4);
        _os_unfair_lock_unlock(lVar6 + 0x18);
      }
      else {
        _os_unfair_lock_unlock(lVar6 + 0x18);
        uStack_1c0 = 0;
        uStack_1b0 = 0x2020000000;
        uStack_1a8 = 0;
        puVar5 = PTR_PTR_10002f2f8;
        puStack_1b8 = &uStack_1c0;
        _objc_alloc(PTR_PTR_10002f2f8);
        puStack_1f8 = PTR___NSConcreteStackBlock_1000281e0;
        uStack_1f0 = 0xc2000000;
        uStack_1e8 = 0x10001be4c;
        puStack_1e0 = &UNK_100028d98;
        puStack_1c8 = &uStack_1c0;
        _objc_retain(puVar3);
        lStack_1d8 = lVar6;
        puStack_1d0 = (undefined1 *)puVar3;
        func_0x00010001f460(puVar5);
        _objc_initWeak(auStack_200,puVar5);
        _objc_copyWeak(auStack_208,auStack_200);
        func_0x00010001f8e0(lVar6);
        _objc_destroyWeak(auStack_208);
        _objc_destroyWeak(auStack_200);
        _objc_release(puStack_1d0);
        __Block_object_dispose(&uStack_1c0,8);
      }
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar5);
  return;
}



/* Entry: 10001bbb4; end: 10001be07; -[SCLazy immediateMap:] */

void FUN_10001bbb4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar2);
      puVar1 = PTR_PTR_10002f2f8;
      puStack_90 = PTR___NSConcreteStackBlock_1000281e0;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10001be08;
      puStack_78 = &UNK_100028d68;
      _objc_retain(param_3);
      lStack_68 = param_3;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      func_0x00010001ed00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010001ef20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uStack_70);
      _objc_release(lStack_68);
      _objc_release(uVar2);
      _os_unfair_lock_unlock(param_1 + 0x18);
    }
    else {
      _os_unfair_lock_unlock(param_1 + 0x18);
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puVar1 = PTR_PTR_10002f2f8;
      puStack_a8 = &uStack_b0;
      _objc_alloc(PTR_PTR_10002f2f8);
      puStack_e8 = PTR___NSConcreteStackBlock_1000281e0;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10001be4c;
      puStack_d0 = &UNK_100028d98;
      puStack_b8 = &uStack_b0;
      _objc_retain(param_3);
      lStack_c8 = param_1;
      lStack_c0 = param_3;
      func_0x00010001f460(puVar1);
      _objc_initWeak(auStack_f0,puVar1);
      _objc_copyWeak(auStack_f8,auStack_f0);
      func_0x00010001f8e0(param_1);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
      _objc_release(lStack_c0);
      __Block_object_dispose(&uStack_b0,8);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 10001be08; end: 10001be17;  */

void FUN_10001be08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001be14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10001be18; end: 10001bf5b;  */

void FUN_10001be18(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001e55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000281c8)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 10001bf5c; end: 10001c027; -[SCLazy map:] */

void FUN_10001bf5c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    puVar2 = PTR_PTR_10002f2f8;
    _objc_alloc(PTR_PTR_10002f2f8);
    puStack_60 = PTR___NSConcreteStackBlock_1000281e0;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10001c028;
    puStack_48 = &UNK_100028d68;
    _objc_retain(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x00010001f460(puVar2,param_2,&puStack_60,cVar1 != '\0');
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar2);
  return;
}



/* Entry: 10001c028; end: 10001c07b;  */

void FUN_10001c028(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010001ef20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar2);
  return;
}



/* Entry: 10001c07c; end: 10001c2f3; -[SCLazy immediateFlatMap:] */

void FUN_10001c07c(long param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    _os_unfair_lock_unlock(param_1 + 0x18);
    if (cVar1 == '\x02') {
      func_0x00010001ef20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_98 = &uStack_a0;
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_10001c2f4;
      uStack_80 = 0x10001c304;
      lStack_78 = 0;
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x2020000000;
      uStack_a8 = 0;
      puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_10002f3b0;
      _objc_opt_new();
      puVar3 = PTR_PTR_10002f2f8;
      _objc_alloc(PTR_PTR_10002f2f8);
      puStack_100 = PTR___NSConcreteStackBlock_1000281e0;
      uStack_f8 = 0xc2000000;
      pcStack_f0 = FUN_10001c30c;
      puStack_e8 = &UNK_100028df8;
      _objc_retain(puVar2);
      puStack_d0 = &uStack_c0;
      puStack_c8 = &uStack_a0;
      puStack_e0 = puVar2;
      lStack_d8 = param_1;
      func_0x00010001f460(puVar3);
      _objc_initWeak(auStack_108,puVar3);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_110,auStack_108);
      func_0x00010001f8e0(param_1);
      _objc_destroyWeak(auStack_110);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_108);
      _objc_release(puStack_e0);
      _objc_release(puVar2);
      __Block_object_dispose(&uStack_c0,8);
      __Block_object_dispose(&uStack_a0,8);
      param_1 = lStack_78;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar3);
  return;
}



/* Entry: 10001c2f4; end: 10001c30b;  */

void FUN_10001c2f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10001c30c; end: 10001c403;  */

void FUN_10001c30c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010001f700(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  func_0x00010001ef20(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010001ef20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001fd80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}


