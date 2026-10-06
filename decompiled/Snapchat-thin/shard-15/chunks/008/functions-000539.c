/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc7ef10; end: 10bc7ef9f; -[SCExtensionSharedDirectory initLoggedOutDirectory] */

undefined1 * FUN_10bc7ef10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e1b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bf7f900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_10bc7ef84;
    }
  }
  _objc_retain(puVar1);
  puVar3 = (undefined1 *)puVar1;
LAB_10bc7ef84:
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bc7efa0; end: 10bc7f06f; -[SCExtensionSharedDirectory initLoggedOutDirectoryWithName:] */

undefined1 * FUN_10bc7efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e1b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bf7f900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bdc2c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar4);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10bc7f048;
    }
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_10bc7f048:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10bc7f070; end: 10bc7f12b; -[SCExtensionSharedDirectory initWithParentDirectory:name:] */

undefined1 *
FUN_10bc7f070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puStack_38 = PTR_PTR_11270e1b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc2c80();
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



/* Entry: 10bc7f12c; end: 10bc7f1b7; -[SCExtensionSharedDirectory initWithRawFolderPath:] */

undefined1 * FUN_10bc7f12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e1b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad320();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc7f1b8; end: 10bc7f23b; -[SCExtensionSharedDirectory filesWithError:] */

void FUN_10bc7f1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4dfc0(puVar1,param_2,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc7f23c; end: 10bc7f2af; -[SCExtensionSharedDirectory sharedFileWithName:delegate:] */

void FUN_10bc7f23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfee880();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc7f2b0; end: 10bc7f30b; -[SCExtensionSharedDirectory subDirectoryWithName:] */

void FUN_10bc7f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba528;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033a00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc7f30c; end: 10bc7f32f; -[SCExtensionSharedDirectory remove] */

void FUN_10bc7f30c(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010be8bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bc7f330; end: 10bc7f3eb; +[SCExtensionSharedDirectory _removeDirectoryAtURL:] */

void FUN_10bc7f330(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c012e20();
    func_0x00010bf51d80();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10bc7f3ec; end: 10bc7f40b; +[SCExtensionSharedDirectory _addSkipBackupAttributeToURL:] */

void FUN_10bc7f3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ecdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_setResourceValue_forKey_error__112658d98,PTR____kCFBooleanTrue_11034ab68,
             *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,0);
  return;
}



/* Entry: 10bc7f40c; end: 10bc7f43b; -[SCExtensionSharedDirectory setUrl:] */

void FUN_10bc7f40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc7f43c; end: 10bc7f4c7; -[SCExtensionSharedFile initWithName:delegate:] */

undefined8
FUN_10bc7f43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba528;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf078e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d760(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10bc7f4c8; end: 10bc7f4df; -[SCExtensionSharedFile initWithName:groupContainerURL:delegate:] */

void FUN_10bc7f4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be39bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__initFileWithDirectoryURL_filena_11256c098,param_4,param_3,0,param_5);
  return;
}



/* Entry: 10bc7f4e0; end: 10bc7f52f; -[SCExtensionSharedFile dealloc] */

void FUN_10bc7f4e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c600(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0,param_2,param_1);
  puStack_28 = PTR_PTR_11270e1b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bc7f530; end: 10bc7f537; -[SCExtensionSharedFile _getAutoCreateDirectory] */

undefined1 FUN_10bc7f530(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bc7f538; end: 10bc7f56f; -[SCExtensionSharedFile presentedItemDidChange] */

void FUN_10bc7f538(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc7f570; end: 10bc7f587;  */

void FUN_10bc7f570(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bc7f588; end: 10bc7f66f; -[SCExtensionSharedFile appendData:withSizeLimit:] */

void FUN_10bc7f588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010bdedb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x00010c012e20();
  uVar2 = param_1;
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10bc7f670;
  puStack_60 = &UNK_110d96388;
  uStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010bf51d80(puVar1,param_2,uVar2,4,0,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc7f670; end: 10bc7f683;  */

void FUN_10bc7f670(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcd030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendDataToFile_withData_sizeL_112550da8,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10bc7f684; end: 10bc7f827; -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:] */

void FUN_10bc7f684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_4);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e880(puVar1,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (param_5 < puVar4) {
    uVar2 = param_3;
    func_0x00010bdc2ca0(param_3,param_2,&PTR____CFConstantStringClassReference_110dfba38);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40(puVar1,param_2,uVar5,0);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1560(puVar1,param_2,uVar5,uVar6,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  func_0x00010bfacd20(PTR__OBJC_CLASS___NSFileHandle_1126bc690,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157180();
  func_0x00010c2bda00(puVar3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010bf3dba0(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc7f828; end: 10bc7f9a3; -[SCExtensionSharedFile appendData:] */

void FUN_10bc7f828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010bdedb60(param_1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10bc7f570;
  uStack_50 = 0x10bc7f580;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x00010c012e20();
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  _objc_retain(param_3);
  func_0x00010bf51d80(puVar2);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10bc7f9a4; end: 10bc7fb4b;  */

void FUN_10bc7f9a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  func_0x00010bfacd60(PTR__OBJC_CLASS___NSFileHandle_1126bc690);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    func_0x00010c157180(puVar1);
    func_0x00010c2bda00(puVar1);
    func_0x00010bf3dba0(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10bc7fb4c; end: 10bc7fcf7; -[SCExtensionSharedFile modifyDataWithModificationBlock:error:] */

void FUN_10bc7fb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  func_0x00010bdedb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x00010c012e20();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10bc7f570;
  uStack_60 = 0x10bc7f580;
  uStack_58 = 0;
  uVar4 = param_1;
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  uVar5 = puStack_78[5];
  _objc_retain(param_3);
  func_0x00010bf51d00(puVar2);
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



/* Entry: 10bc7fcf8; end: 10bc7feaf;  */

void FUN_10bc7fcf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd00a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bc7feb0; end: 10bc8001b; -[SCExtensionSharedFile copyDataFromURL:error:] */

void FUN_10bc7feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  func_0x00010bded120(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x00010c012e20();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10bc7f570;
  uStack_50 = 0x10bc7f580;
  uStack_48 = 0;
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  func_0x00010bf51d00(puVar2);
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



/* Entry: 10bc8001c; end: 10bc800cb;  */

void FUN_10bc8001c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010c0d1580();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10bc800cc; end: 10bc8039f; -[SCExtensionSharedFile deleteFileWithError:] */

void FUN_10bc800cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
  func_0x00010c012e20();
  uVar7 = param_1;
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_10bc7f570;
  uStack_78 = 0x10bc7f580;
  uStack_70 = 0;
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)PTR__NSFileTypeSymbolicLink_110345478;
  _objc_release();
  if (puVar5 == puVar10) {
    uVar7 = param_1;
    func_0x00010c10f880(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bdc2d60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_90;
    uVar8 = puStack_90[5];
    _objc_retain(puVar2);
    func_0x00010bf51d80(puVar3);
    _objc_retain(uVar8);
    uVar6 = puVar1[5];
    puVar1[5] = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_90;
  uVar9 = puStack_90[5];
  _objc_retain(puVar2);
  func_0x00010bf51d80(puVar3);
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



/* Entry: 10bc803a0; end: 10bc8044f;  */

void FUN_10bc803a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uStack_28 = *(undefined8 *)(lVar3 + 0x28);
  func_0x00010c12cc60(*(undefined8 *)(param_1 + 0x20),param_2,param_2,&uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10bc80450; end: 10bc8051b; -[SCExtensionSharedFile createSymbolicLinkToFilename:error:] */

void FUN_10bc80450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bdedb60(param_1);
  func_0x00010c10f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bdc2c60(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf59520();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc8051c; end: 10bc80533; -[SCExtensionSharedFile delegate] */

void FUN_10bc8051c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc80534; end: 10bc8053f; -[SCExtensionSharedFile setDelegate:] */

void FUN_10bc80534(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10bc80540; end: 10bc8056f; -[SCExtensionSharedFile setPresentedItemURL:] */

void FUN_10bc80540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc80570; end: 10bc8057b; -[SCExtensionSharedFile presentedItemOperationQueue] */

void FUN_10bc80570(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10bc8057c; end: 10bc80583; -[SCExtensionSharedFile setPresentedItemOperationQueue:] */

void FUN_10bc8057c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10bc80584; end: 10bc805bb; -[SCExtensionSharedFile .cxx_destruct] */

void FUN_10bc80584(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10bc805bc; end: 10bc8069f;  */

void FUN_10bc805bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126ba528;
  _objc_retain();
  _objc_alloc();
  func_0x00010bfef8c0();
  _objc_release(param_1);
  lStack_38 = 0;
  puVar3 = puVar2;
  func_0x00010bfad480(puVar2,param_2,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_retain(lStack_38);
  if (lVar1 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10bc806a0;
    puStack_48 = &UNK_1108709c0;
    _objc_retain(puVar2);
    puStack_40 = puVar2;
    func_0x00010bf97e80(puVar3,param_2,&puStack_60);
    _objc_release(puStack_40);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 10bc806a0; end: 10bc80813;  */

void FUN_10bc806a0(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c22b9e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c10f880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar7);
    if (604800.0 < param_1) {
      func_0x00010bf6bde0(uVar2);
    }
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bc80814; end: 10bc808cf; +[SCMutableSetReaderWriter readSetFromFile:] */

void FUN_10bc80814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c121280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc808d0; end: 10bc809bf; +[SCMutableSetReaderWriter addStringToSetAndSaveToFile:newString:] */

void FUN_10bc808d0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c121920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  func_0x00010befa120(puVar1,param_2,param_4);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda00(param_3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc809c0; end: 10bc80b1f; +[SCMutableSetReaderWriter stringExistsInFiles:stringToCheck:] */

long FUN_10bc809c0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_10bc80ac8:
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return lVar5;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0dfed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return param_3;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = param_1;
      func_0x00010c121920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        lVar5 = 1;
        goto LAB_10bc80ac8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bc80b20; end: 10bc80b2b;  */

void FUN_10bc80b20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_objectForInfoDictionaryKey__1126159c8,
             &PTR____CFConstantStringClassReference_1110267f8);
  return;
}



/* Entry: 10bc80b2c; end: 10bc80c1b;  */

undefined1 FUN_10bc80b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c106d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf97e80(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bc80c1c; end: 10bc80c5f;  */

void FUN_10bc80c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010bfda7c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 10bc80c60; end: 10bc80d33;  */

undefined * FUN_10bc80c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10bc80d34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x3) {
    puVar1 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c067fc0();
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 10bc80d34; end: 10bc80ebf;  */

undefined * FUN_10bc80d34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        func_0x00010c067fc0(uVar2);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x3) {
    puVar6 = puVar5;
    func_0x00010bf51e00();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_10bc80d34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x3) {
    puVar6 = puVar4;
    func_0x00010c0dfd40(puVar4,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c067fc0();
    _objc_release(puVar6);
  }
  else {
    puVar5 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar4);
  return puVar5;
}



/* Entry: 10bc80ec0; end: 10bc80f93;  */

undefined * FUN_10bc80ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_10bc80d34();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x3) {
    puVar1 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c067fc0();
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 10bc80f94; end: 10bc8122b;  */

undefined * FUN_10bc80f94(ulong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_1;
  func_0x00010c08fa60();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  func_0x00010c25d900(puVar2,param_2,
                      (SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),8) & 0x7ffffffffffffffc) << 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar7 = param_1;
  func_0x00010c08fa60();
  if (uVar7 != 0) {
    uVar7 = 2;
    do {
      func_0x00010c08fa60();
      uVar3 = param_1;
      func_0x00010c08fa60();
      if (uVar7 <= uVar3) {
        func_0x00010c08fa60();
        uVar3 = param_1;
        func_0x00010c08fa60();
        if (uVar7 + 1 <= uVar3) {
          func_0x00010c08fa60();
          uVar3 = param_1;
          func_0x00010c08fa60();
          if (uVar7 + 2 <= uVar3) {
            func_0x00010c08fa60();
            func_0x00010c08fa60();
          }
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010bffa180();
      func_0x00010bf070e0(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      uVar5 = param_1;
      func_0x00010c08fa60();
      uVar3 = uVar7 + 3;
      uVar7 = uVar7 + 5;
    } while (uVar3 < uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c070320();
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 10bc8122c; end: 10bc81367;  */

undefined * FUN_10bc8122c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c070320();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10bc81368; end: 10bc8142b;  */

bool FUN_10bc81368(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return param_1 <= (double)(param_4 * 0x15180);
}



/* Entry: 10bc8142c; end: 10bc81467;  */

void FUN_10bc8142c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_numberWithLongLong__112615808,(long)(param_1 * 1000.0));
  return;
}



/* Entry: 10bc81468; end: 10bc81567;  */

void FUN_10bc81468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_3);
  func_0x00010c22d220(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc81568; end: 10bc815e7;  */

bool FUN_10bc81568(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x00010bf433a0(param_3,param_2,param_4);
  return param_3 == -1;
}



/* Entry: 10bc815e8; end: 10bc818ab;  */

void FUN_10bc815e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  bVar1 = param_3 != 0;
  if (param_3 == 0 && param_4 == 0) {
    lVar2 = 0;
  }
  else {
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar2 = param_3;
      func_0x00010bf433a0(param_3,param_2,param_4);
      bVar1 = lVar2 == 1;
    }
    lVar2 = param_3;
    if (!bVar1) {
      lVar2 = param_4;
    }
    _objc_retain(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10bc818ac; end: 10bc818cb;  */

void FUN_10bc818ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf651d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_dateFromTodayWithOffsetDays_offs_1125b6e18,0,0
             ,param_3);
  return;
}



/* Entry: 10bc818cc; end: 10bc8198b;  */

void FUN_10bc818cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0d9980(puVar1,param_2,puVar2,param_3,param_4,0,0x400);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf64e40((double)param_5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc8198c; end: 10bc81a03;  */

bool FUN_10bc8198c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010c26f3a0(param_4);
      bVar1 = param_1 <= ABS(dVar4);
      goto LAB_10bc819e8;
    }
  }
  bVar1 = false;
LAB_10bc819e8:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10bc81a04; end: 10bc81c6b;  */

void FUN_10bc81a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  func_0x00010c1c8fc0();
  func_0x00010c189d40(puVar1,param_2,param_4);
  func_0x00010c2278a0(puVar1,param_2,param_5);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  func_0x00010bffabc0();
  puVar3 = puVar2;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc81c6c; end: 10bc81f57;  */

void FUN_10bc81c6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  func_0x00010bffabc0();
  puVar2 = puVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc81f58; end: 10bc81fbf;  */

void FUN_10bc81f58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c0dff20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    param_1 = param_4;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc81fc0; end: 10bc82093;  */

undefined1 FUN_10bc81fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bc82094; end: 10bc820cf;  */

void FUN_10bc82094(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10bc820d0; end: 10bc821a7;  */

undefined1 FUN_10bc820d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bc821a8; end: 10bc821df;  */

void FUN_10bc821a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (**(code **)(uVar1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 10bc821e0; end: 10bc822eb;  */

void FUN_10bc821e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10bc822ec;
  uStack_40 = 0x10bc822fc;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bc822ec; end: 10bc82303;  */

void FUN_10bc822ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bc82304; end: 10bc8237f;  */

void FUN_10bc82304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10bc82380; end: 10bc8239b;  */

void FUN_10bc82380(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeObjectForKey__112628f18);
    return;
  }
  return;
}



/* Entry: 10bc8239c; end: 10bc823c7;  */

void FUN_10bc8239c(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b4ca0();
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1 / 1048576.0,puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10bc823c8; end: 10bc823d7;  */

void FUN_10bc823c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3 / 1048576.0,PTR__OBJC_CLASS___NSNumber_1126ae570,
             PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10bc823d8; end: 10bc82507;  */

long FUN_10bc823d8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c0720c0(param_1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10bc82508; end: 10bc82513;  */

void FUN_10bc82508(void)

{
  uRam00000001137fd9f0 = 0;
  return;
}



/* Entry: 10bc82514; end: 10bc82567;  */

void FUN_10bc82514(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fda00 != -1) {
    func_0x000107c27d9c(0x1137fda00,&PTR___NSConcreteGlobalBlock_110d96488);
  }
  uVar1 = uRam00000001137fd9f8;
  _objc_retain(uRam00000001137fd9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc82568; end: 10bc825a3;  */

void FUN_10bc82568(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_111026818);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fd9f8;
  puRam00000001137fd9f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc825a4; end: 10bc82603;  */

undefined * FUN_10bc825a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110db3198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf99aa0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10bc82604; end: 10bc826b7;  */

void FUN_10bc82604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c11bb60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf44700(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf446e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010c0b5ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bc826b8; end: 10bc826e7;  */

void FUN_10bc826b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CFURLCreateStringByAddingPercentEscapes
            (0,param_3,0,&PTR____CFConstantStringClassReference_111026838,0x8000100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc826e8; end: 10bc827f3;  */

void FUN_10bc826e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc827f4; end: 10bc827ff;  */

void FUN_10bc827f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_formatDate_referenceDate_maxHour_1125cb008,param_3,param_4,8,1);
  return;
}



/* Entry: 10bc82800; end: 10bc83173;  */

void FUN_10bc82800(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (lRam00000001137fda20 != -1) {
    func_0x000107c27d9c(0x1137fda20,&PTR___NSConcreteGlobalBlock_110d964e8);
  }
  _os_unfair_lock_lock(0x1137fd9cc);
  func_0x00010c26f380(param_4);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (-10.0 <= param_1) {
    if (param_7 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_111026878;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026878,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_111026858;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026858,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (-59.0 <= param_1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_111026898;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026898,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (-90.0 <= param_1) {
        ppuVar6 = &PTR____CFConstantStringClassReference_1110268b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110268b8,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bc82a88;
      }
      if (-3540.0 <= param_1) {
        ppuVar5 = &PTR____CFConstantStringClassReference_1110268d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110268d8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (-5400.0 <= param_1) {
          ppuVar6 = &PTR____CFConstantStringClassReference_1110268f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110268f8,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10bc82a88;
        }
        if (-param_1 <= (double)(ulong)(param_6 * 0xe10)) {
          ppuVar5 = &PTR____CFConstantStringClassReference_111026918;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026918,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
          func_0x00010bf5e300();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf44640();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9320();
          func_0x00010c1c8500(puVar2);
          func_0x00010c1f8e00(puVar2);
          puVar3 = puVar1;
          func_0x00010bf650e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_4;
          func_0x00010bf433a0();
          if (lVar4 == 1) {
            if (ppuRam00000001137fd9d0 == (undefined **)0x0) {
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
              _objc_alloc_init();
              ppuVar6 = ppuRam00000001137fd9d0;
              ppuRam00000001137fd9d0 = ppuVar10;
              _objc_release(ppuVar6);
              ppuVar10 = ppuRam00000001137fd9d0;
              ppuVar6 = &PTR____CFConstantStringClassReference_111026938;
              func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026938,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c189b60(ppuVar10);
              _objc_release(ppuVar6);
            }
            FUN_10bc83174();
            ppuVar6 = ppuRam00000001137fd9d0;
            func_0x00010c25d400(ppuRam00000001137fd9d0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf65600(0xc0f5180000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar1;
            func_0x00010bf44640(puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            func_0x00010c1a9320(puVar8);
            func_0x00010c1c8500(puVar8);
            func_0x00010c1f8e00(puVar8);
            puVar9 = puVar1;
            func_0x00010bf650e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_4;
            func_0x00010bf433a0();
            if (lVar4 == 1) {
              if (ppuRam00000001137fd9d8 == (undefined **)0x0) {
                ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                _objc_alloc_init();
                ppuVar6 = ppuRam00000001137fd9d8;
                ppuRam00000001137fd9d8 = ppuVar10;
                _objc_release(ppuVar6);
                ppuVar10 = ppuRam00000001137fd9d8;
                ppuVar6 = &PTR____CFConstantStringClassReference_111026958;
                func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026958,0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c189b60(ppuVar10);
                _objc_release(ppuVar6);
              }
              FUN_10bc83174();
              ppuVar6 = ppuRam00000001137fd9d8;
              func_0x00010c25d400(ppuRam00000001137fd9d8);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar8;
            }
            else {
              ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
              func_0x00010bf5f320();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf65600(0xc11fa40000000000);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010bf44640(puVar1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              func_0x00010c1a9320(puVar2);
              func_0x00010c1c8500(puVar2);
              func_0x00010c1f8e00(puVar2);
              puVar8 = puVar1;
              func_0x00010bf650e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_4;
              func_0x00010bf433a0();
              if (lVar4 == 1) {
                ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                func_0x00010c27f160(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = ppuVar12;
                func_0x00010c25d400();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                if (ppuRam00000001137fd9e8 == (undefined **)0x0) {
                  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                  _objc_alloc_init();
                  ppuVar6 = ppuRam00000001137fd9e8;
                  ppuRam00000001137fd9e8 = ppuVar12;
                  _objc_release(ppuVar6);
                }
                FUN_10bc83174();
                puVar13 = puVar1;
                func_0x00010bf44640();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                puVar14 = puVar13;
                func_0x00010bf65700();
                ppuVar6 = ppuRam00000001137fd9e8;
                puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                ppuVar12 = ppuRam00000001137fd9e8;
                if ((long)puVar14 < 10) {
                  func_0x00010c09e1e0(ppuRam00000001137fd9e8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf650c0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c189b60(ppuVar6);
                }
                else {
                  func_0x00010c09e1e0(ppuRam00000001137fd9e8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf650c0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c189b60(ppuVar6);
                }
                _objc_release(puVar2);
                _objc_release(ppuVar12);
                ppuVar6 = ppuRam00000001137fd9e8;
                func_0x00010c25d400(ppuRam00000001137fd9e8);
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar10;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar12;
                func_0x00010c0720c0();
                ppuVar18 = ppuVar6;
                if ((int)ppuVar15 != 0) {
                  ppuVar16 = ppuVar6;
                  func_0x00010bf44740(ppuVar6);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar16;
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c067ec0();
                  _objc_release(ppuVar15);
                  ppuVar15 = &PTR____CFConstantStringClassReference_111026998;
                  func_0x00010bf44740(&PTR____CFConstantStringClassReference_111026998);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar17 = ppuVar15;
                  func_0x00010c0dfd20();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25ce40(ppuVar6);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  _objc_release(ppuVar17);
                  _objc_release(ppuVar15);
                  _objc_release(ppuVar16);
                }
                puVar2 = puVar1;
                func_0x00010bf44640(puVar1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar13);
                func_0x00010c189d40(puVar2);
                func_0x00010c1c8fc0(puVar2);
                func_0x00010c1a9320(puVar2);
                func_0x00010c1c8500(puVar2);
                func_0x00010c1f8e00(puVar2);
                puVar13 = puVar1;
                func_0x00010bf650e0(puVar1);
                _objc_retainAutoreleasedReturnValue();
                lVar4 = param_4;
                func_0x00010bf433a0();
                ppuVar6 = ppuVar18;
                if (lVar4 == -1) {
                  if (puRam00000001137fd9e0 == (undefined *)0x0) {
                    puVar19 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                    _objc_alloc_init();
                    puVar14 = puRam00000001137fd9e0;
                    puRam00000001137fd9e0 = puVar19;
                    _objc_release(puVar14);
                    func_0x00010c189b60(puRam00000001137fd9e0);
                  }
                  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  puVar19 = puRam00000001137fd9e0;
                  func_0x00010c25d400();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar19);
                  if (puVar14 != (undefined *)0x0) {
                    func_0x00010c25ce40(ppuVar18);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar18);
                    _objc_release(puVar14);
                  }
                }
                _objc_release(puVar13);
              }
              _objc_release(ppuVar12);
              _objc_release(puVar8);
              _objc_release(puVar11);
              _objc_release(ppuVar10);
            }
            _objc_release(puVar9);
            _objc_release(puVar7);
          }
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
      }
    }
    _objc_release(ppuVar5);
  }
LAB_10bc82a88:
  _os_unfair_lock_unlock(0x1137fd9cc);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 10bc83174; end: 10bc831c3;  */

void FUN_10bc83174(void)

{
  if ((bRam00000001137fd9c8 & 1) != 0) {
    if (lRam00000001137fda20 != -1) {
      func_0x000107c27d9c(0x1137fda20,&PTR___NSConcreteGlobalBlock_110d964e8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_assert_owner_11034c778)(0x1137fd9cc);
    return;
  }
  return;
}



/* Entry: 10bc831c4; end: 10bc832a7;  */

void FUN_10bc831c4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fda20 != -1) {
    func_0x000107c27d9c(0x1137fda20,&PTR___NSConcreteGlobalBlock_110d964e8);
  }
  _os_unfair_lock_lock(0x1137fd9cc);
  uVar1 = uRam00000001137fd9d0;
  uRam00000001137fd9d0 = 0;
  _objc_release(uVar1);
  uVar1 = uRam00000001137fd9d8;
  uRam00000001137fd9d8 = 0;
  _objc_release(uVar1);
  uVar1 = uRam00000001137fd9e0;
  uRam00000001137fd9e0 = 0;
  _objc_release(uVar1);
  uVar1 = uRam00000001137fd9e8;
  uRam00000001137fd9e8 = 0;
  _objc_release(uVar1);
  uRam00000001137fd9c8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1137fd9cc);
  return;
}



/* Entry: 10bc832a8; end: 10bc834c3;  */

void FUN_10bc832a8(double param_1,double param_2,undefined **param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = (uint)param_1;
  if ((int)uVar3 < 0) {
    func_0x00010bfb5ec0(-param_1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10bc83414;
  }
  if ((double)uVar3 <= param_2) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        param_3 = &PTR____CFConstantStringClassReference_111026878;
      }
      else {
        param_3 = &PTR____CFConstantStringClassReference_111026858;
      }
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_110ec1ad8;
    }
    func_0x00010bcbeaa8(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10bc83414;
  }
  if (uVar3 < 0x3c) {
    param_3 = &PTR____CFConstantStringClassReference_110ec1af8;
LAB_10bc833bc:
    func_0x00010bcbeaa8(param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar2 = 0x1e;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    uVar3 = ((iVar2 + uVar3) / 0x3c) * 0x3c;
    if (uVar3 < 0xe10) {
      param_3 = &PTR____CFConstantStringClassReference_110ec1b18;
      goto LAB_10bc833bc;
    }
    iVar2 = 0x708;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    uVar3 = ((uVar3 + iVar2) / 0xe10) * 0xe10;
    if (uVar3 >> 7 < 0x2a3) {
      param_3 = &PTR____CFConstantStringClassReference_110ec1b38;
      goto LAB_10bc833bc;
    }
    iVar2 = 0xa8c0;
    if (param_7 == 0) {
      iVar2 = 0;
    }
    if (((uVar3 + iVar2) / 0x15180) * 0x15180 < 0x93a80) {
      FUN_10bc85ab0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bc85ac8();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c14de00(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_3 = ppuVar1;
LAB_10bc83414:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10bc834c4; end: 10bc8395b;  */

void FUN_10bc834c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar3 & 1) != 0) {
    ppuVar11 = (undefined **)0x0;
    goto LAB_10bc837f0;
  }
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf65700();
  ppuVar7 = ppuVar5;
  func_0x00010c0d0e40();
  ppuVar8 = ppuVar5;
  func_0x00010c2bedc0();
  ppuVar9 = ppuVar4;
  func_0x00010bf44340();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar10 = ppuVar4;
  if (ppuVar8 == (undefined **)0x0) {
    if (ppuVar7 != (undefined **)0x0) {
      func_0x00010bf44660();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      func_0x00010c0d0e40();
      ppuVar7 = ppuVar10;
      func_0x00010bf65700();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (0.01 <= ABS((double)(long)((double)(long)ppuVar7 / 28.0 + (double)(long)ppuVar6) + -1.0))
      {
        ppuVar6 = &PTR____CFConstantStringClassReference_111026a58;
        func_0x000107c312f8(&PTR____CFConstantStringClassReference_111026a58,
                            &PTR____CFConstantStringClassReference_110e61f78,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bc837b0;
      }
      ppuVar11 = &PTR____CFConstantStringClassReference_111026a38;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_111026a38,
                          &PTR____CFConstantStringClassReference_110e61f78,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10bc837d4;
    }
    if ((0 < (long)ppuVar6) && ((ppuVar6 != (undefined **)0x1 || (param_5 <= (long)ppuVar9)))) {
      if (ppuVar6 == (undefined **)0x1) {
        ppuVar10 = &PTR____CFConstantStringClassReference_1110269b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110269b8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (ppuVar6 < (undefined **)0x7) {
        ppuVar10 = &PTR____CFConstantStringClassReference_1110269d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110269d8,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (ABS((double)(long)((double)ppuVar6 / 7.0) + -1.0) < 0.01) {
          ppuVar11 = &PTR____CFConstantStringClassReference_1110269f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_1110269f8,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10bc837d8;
        }
        ppuVar10 = &PTR____CFConstantStringClassReference_111026a18;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026a18,0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c14de00(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10bc837d4;
    }
    _objc_retain(param_4);
    ppuVar11 = param_4;
  }
  else {
    func_0x00010bf44660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010c2bedc0();
    ppuVar7 = ppuVar10;
    func_0x00010bf65700();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    dVar12 = (double)(long)ppuVar7 / 365.0 + (double)(long)ppuVar6;
    if (1.2 <= dVar12) {
      if (1.7 <= dVar12) {
        dVar13 = (double)(long)dVar12 + 0.2;
        if (dVar12 <= dVar13) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110ef9558;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9558,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          dVar14 = (double)(long)dVar12 + 0.7;
          bVar1 = false;
          bVar2 = true;
          if (dVar13 <= dVar12) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(dVar12) && !NAN(dVar14)) {
              bVar1 = dVar12 == dVar14;
              bVar2 = dVar14 <= dVar12;
            }
          }
          if (!bVar2 || bVar1) {
            ppuVar6 = &PTR____CFConstantStringClassReference_111026a98;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_111026a98,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar6 = &PTR____CFConstantStringClassReference_110ef9558;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9558,0);
            _objc_retainAutoreleasedReturnValue();
          }
        }
LAB_10bc837b0:
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        goto LAB_10bc837d4;
      }
      ppuVar11 = &PTR____CFConstantStringClassReference_111026a78;
    }
    else {
      ppuVar11 = &PTR____CFConstantStringClassReference_110ef9518;
    }
    func_0x00010bcbeaa8(ppuVar11,0);
    _objc_retainAutoreleasedReturnValue();
LAB_10bc837d4:
    _objc_release(ppuVar10);
  }
LAB_10bc837d8:
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
LAB_10bc837f0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 10bc8395c; end: 10bc8396b;  */

void FUN_10bc8395c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_formatRelativeDate_localizedToda_1125cb128,
             param_3,param_4,0);
  return;
}



/* Entry: 10bc8396c; end: 10bc83b3f;  */

void FUN_10bc8396c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_retain(param_3);
  func_0x00010c22d4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc83b40; end: 10bc83c57;  */

void FUN_10bc83b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_3);
  puVar2 = puVar1;
  func_0x00010c0c1b40();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) ||
     (puVar3 = puVar2, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) {
    uVar4 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0dfd20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f2c0();
    uVar4 = param_3;
    func_0x00010c260c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10bc83c58; end: 10bc83d7f;  */

undefined *
FUN_10bc83c58(double param_1,undefined8 param_2,double param_3,undefined *param_4,undefined8 param_5
             ,long param_6,long param_7,undefined *param_8,undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_6 != 0) && (param_7 != 0)) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_alloc();
    uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    param_8 = (undefined *)0x1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&lStack_50,&uStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010c04e840(puVar1,param_5,param_6,puVar2);
    _objc_release(param_6);
    _objc_release(puVar2);
    param_6 = 1;
    param_7 = 0;
    func_0x00010bf20bc0(0x7fefffffffffffff,0,puVar1,param_5,1,0);
    param_1 = (double)(ulong)(uint)(int)param_3;
    _objc_release(puVar1);
    param_4 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((long)param_8 < (long)param_9) {
    dVar3 = (double)(long)param_9;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a51a0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,param_6,puVar1);
    if (param_1 <= dVar3) {
      func_0x00010c0c2220(param_1,param_4,param_5,param_6,param_7,param_8,param_9 + -1);
      param_9 = param_4;
    }
    param_8 = param_9;
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return param_8;
}



/* Entry: 10bc83d80; end: 10bc83e5b;  */

long FUN_10bc83d80(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  double dVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 < param_7) {
    dVar2 = (double)param_7;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a51a0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4,puVar1);
    if (param_1 <= dVar2) {
      func_0x00010c0c2220(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -1);
      param_7 = param_2;
    }
    param_6 = param_7;
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_6;
}



/* Entry: 10bc83e5c; end: 10bc83edb;  */

void FUN_10bc83e5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  if (0 < param_3) {
    do {
      _arc4random_uniform();
      func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc1af8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc83edc; end: 10bc84087;  */

ulong FUN_10bc83edc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c08fa60();
  lVar5 = param_3;
  func_0x00010c08fa60();
  uVar12 = 0xffffffffffffffff;
  if ((lVar4 != 0) && (lVar5 != 0)) {
    uVar12 = lVar4 + 1;
    uVar1 = lVar5 + 1;
    puVar6 = (ulong *)(uVar12 * uVar1 * 8);
    _malloc();
    if (lVar4 != -1) {
      uVar9 = 0;
      do {
        puVar6[uVar9] = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      puVar10 = puVar6;
      do {
        *puVar10 = uVar9;
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + lVar4 + 1;
      } while (uVar1 != uVar9);
    }
    if (1 < uVar12) {
      lStack_68 = 1;
      puVar10 = puVar6;
      do {
        puVar10 = puVar10 + 1;
        if (1 < uVar1) {
          lVar13 = 0;
          puVar11 = puVar10;
          do {
            lVar7 = param_1;
            func_0x00010bf35920(param_1,param_2,lStack_68 + -1);
            lVar8 = param_3;
            func_0x00010bf35920(param_3,param_2,lVar13);
            uVar2 = puVar11[-1];
            uVar9 = puVar11[lVar4] + 1;
            if ((int)lVar7 != (int)lVar8) {
              uVar2 = uVar2 + 1;
            }
            if (*puVar11 + 1 <= uVar9) {
              uVar9 = *puVar11 + 1;
            }
            if (uVar9 <= uVar2) {
              uVar2 = uVar9;
            }
            (puVar11 + lVar4)[1] = uVar2;
            lVar13 = lVar13 + 1;
            puVar11 = puVar11 + lVar4 + 1;
          } while (lVar5 != lVar13);
        }
        bVar3 = lStack_68 != lVar4;
        lStack_68 = lStack_68 + 1;
      } while (bVar3);
    }
    uVar12 = puVar6[uVar1 * uVar12 + -1];
    _free();
  }
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 10bc84088; end: 10bc84153;  */

void FUN_10bc84088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  uVar1 = param_1;
  func_0x00010c08fa60();
  func_0x00010c25d900(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08fa60(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bc84154;
  puStack_40 = &UNK_110925da8;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf98040(param_1,param_2,0,uVar1,0x102,&puStack_58);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc84154; end: 10bc8415f;  */

void FUN_10bc84154(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf070f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendString__11259f5e0,param_2);
  return;
}



/* Entry: 10bc84160; end: 10bc84223;  */

void FUN_10bc84160(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  uVar2 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a60(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  uStack_41 = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uStack_43 = *(undefined2 *)(uVar1 + uVar4);
      uVar4 = uVar4 + 2;
      _strtoul(&uStack_43,0,0x10);
      func_0x00010bf06a40(puVar3);
    } while (uVar4 < uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc84224; end: 10bc84317;  */

void FUN_10bc84224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c1bdb00(puVar2,param_2,param_4);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_50 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar6 = &uStack_48;
  puVar7 = &uStack_58;
  uVar8 = 2;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_48 = param_3;
  puStack_40 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    func_0x00010bf69e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0d3c80();
    _objc_release(ppuVar3);
    func_0x00010c1bdb00(ppuVar4,param_2,puVar7);
    func_0x00010c166c00(ppuVar4,param_2,uVar8);
    uStack_c8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uStack_c0 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b8 = puVar6;
    ppuStack_b0 = ppuVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b8,&uStack_c8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      ppuVar3 = ppuVar4;
      func_0x00010c08fa60();
      if (ppuVar3 == (undefined **)0x0) {
LAB_10bc844b4:
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar9 = (undefined **)0x0;
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
        do {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4bc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010bf35920(ppuVar4,param_2,ppuVar9);
          puVar2 = puVar1;
          func_0x00010bf359c0(puVar1,param_2,ppuVar5);
          _objc_release(puVar1);
          if ((int)puVar2 == 0) {
            if (ppuVar9 == (undefined **)0x7fffffffffffffff) goto LAB_10bc844b4;
            ppuVar3 = ppuVar4;
            func_0x00010c11f3a0(ppuVar4,param_2,ppuVar9);
            func_0x00010c260c00(ppuVar4,param_2,ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar4;
            break;
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          ppuVar5 = ppuVar4;
          func_0x00010c08fa60();
        } while (ppuVar9 < ppuVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10bc84318; end: 10bc844fb;  */

void FUN_10bc84318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0d3c80();
  _objc_release(ppuVar1);
  func_0x00010c1bdb00(ppuVar2,param_2,param_4);
  func_0x00010c166c00(ppuVar2,param_2,param_5);
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_60 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_3;
  ppuStack_50 = ppuVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar1 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
LAB_10bc844b4:
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = (undefined **)0x0;
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar2;
        func_0x00010bf35920(ppuVar2,param_2,ppuVar6);
        puVar5 = puVar3;
        func_0x00010bf359c0(puVar3,param_2,ppuVar4);
        _objc_release(puVar3);
        if ((int)puVar5 == 0) {
          if (ppuVar6 == (undefined **)0x7fffffffffffffff) goto LAB_10bc844b4;
          ppuVar1 = ppuVar2;
          func_0x00010c11f3a0(ppuVar2,param_2,ppuVar6);
          func_0x00010c260c00(ppuVar2,param_2,ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
          break;
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        ppuVar4 = ppuVar2;
        func_0x00010c08fa60();
      } while (ppuVar6 < ppuVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10bc844fc; end: 10bc845e7;  */

void FUN_10bc844fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = param_1;
      func_0x00010bf35920(param_1,param_2,uVar2);
      if ((int)uVar1 - 0x80U < 0xffffff81 || (int)uVar1 - 0x41U < 0x1a) {
        func_0x00010c0b5ac0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bc84568;
      }
      uVar2 = uVar2 + 1;
      uVar1 = param_1;
      func_0x00010c08fa60();
    } while (uVar2 < uVar1);
  }
  func_0x00010bf51e00(param_1);
LAB_10bc84568:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc845e8; end: 10bc84613;  */

void FUN_10bc845e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  uVar1 = puRam00000001137fda10;
  puRam00000001137fda10 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bc84614; end: 10bc84833;  */

uint FUN_10bc84614(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *unaff_x20;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar5 = 1;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
    func_0x00010bf637c0(PTR__OBJC_CLASS___NSDataDetector_1126c36c8,param_2,0x820,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c08fa60(param_3);
    puVar1 = unaff_x20;
    func_0x00010c0c1b40(unaff_x20,param_2,param_3,0,0,lVar7);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_110;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          lVar6 = *(long *)(lStack_118 + (long)puVar8 * 8);
          lVar3 = lVar6;
          func_0x00010c13cde0();
          if ((lVar3 == 0x20) || (func_0x00010c13cde0(), lVar6 == 0x800)) {
            uVar5 = 0;
            puVar2 = puVar1;
            goto LAB_10bc847d8;
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_111026ad8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf99aa0();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_111026af8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bf99aa0();
      if (((ulong)puVar4 & 1) == 0) {
        lVar7 = param_3;
        func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
        uVar5 = (uint)lVar7 ^ 1;
      }
      else {
        uVar5 = 0;
      }
      _objc_release(puVar8);
    }
    else {
      uVar5 = 0;
    }
LAB_10bc847d8:
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
  }
  lVar7 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  pcVar10 = FUN_10bc84834;
  puVar1 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x00010bf637c0(PTR__OBJC_CLASS___NSDataDetector_1126c36c8,param_2,0x20,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c08fa60(lVar7);
  puVar2 = puVar1;
  func_0x00010c0defc0(puVar1,param_2,lVar7,0,0,lVar3,in_x6,in_x7,unaff_x20,param_3,puVar9,pcVar10);
  _objc_release(puVar1);
  return (uint)(puVar2 != (undefined *)0x0);
}



/* Entry: 10bc84834; end: 10bc848a3;  */

bool FUN_10bc84834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x00010bf637c0(PTR__OBJC_CLASS___NSDataDetector_1126c36c8,param_2,0x20,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08fa60(param_1);
  puVar3 = puVar1;
  func_0x00010c0defc0(puVar1,param_2,param_1,0,0,uVar2);
  _objc_release(puVar1);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 10bc848a4; end: 10bc84a8b;  */

void FUN_10bc848a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c0d3c80();
  uVar2 = param_1;
  func_0x00010c08fa60(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10bc84954;
  puStack_40 = &UNK_110925da8;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf98040(param_1,param_2,0,uVar2,4,&puStack_58);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


