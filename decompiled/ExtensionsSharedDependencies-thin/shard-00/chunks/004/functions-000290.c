/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005b1090; end: 005b10a3;  */

void FUN_005b1090(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendDataToFile_withData_sizeL_00ab9ce0,param_2
             ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 005b10a4; end: 005b1247; -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:] */

void FUN_005b10a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_retain(param_4);
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0078a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0077f480(puVar1,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x007834a0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (param_5 < puVar4) {
    uVar2 = param_3;
    func_0x0077bb00(param_3,param_2,&PTR____CFConstantStringClassReference_00a31aa0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x0078a400();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078b3e0(puVar1,param_2,uVar5,0);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x0078a400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x0078a400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x007895c0(puVar1,param_2,uVar5,uVar6,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSFileHandle_00ac3168;
  func_0x007833e0(PTR__OBJC_CLASS___NSFileHandle_00ac3168,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c560();
  func_0x00793d20(puVar3,param_2,param_4);
  _objc_release(param_4);
  func_0x00780380(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005b1248; end: 005b13c3; -[SCExtensionSharedFile appendData:] */

void FUN_005b1248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x0077c540(param_1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_005b0f48;
  uStack_50 = 0x5b0f58;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
  func_0x007855e0();
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  _objc_retain(param_3);
  func_0x00780e00(puVar2);
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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 005b13c4; end: 005b156b;  */

void FUN_005b13c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSFileHandle_00ac3168;
  func_0x00783400(PTR__OBJC_CLASS___NSFileHandle_00ac3168);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0) {
    func_0x0078c560(puVar1);
    func_0x00793d20(puVar1);
    func_0x00780380(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 005b156c; end: 005b1717; -[SCExtensionSharedFile modifyDataWithModificationBlock:error:] */

void FUN_005b156c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  func_0x0077c540(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
  func_0x007855e0();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_005b0f48;
  uStack_60 = 0x5b0f58;
  uStack_58 = 0;
  uVar4 = param_1;
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_78;
  uVar5 = puStack_78[5];
  _objc_retain(param_3);
  func_0x00780de0(puVar2);
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



/* Entry: 005b1718; end: 005b18cf;  */

void FUN_005b1718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007816a0(PTR__OBJC_CLASS___NSData_00ac2b10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 005b18d0; end: 005b1913;  */

void FUN_005b18d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 005b1914; end: 005b1a7f; -[SCExtensionSharedFile copyDataFromURL:error:] */

void FUN_005b1914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  func_0x0077c500(param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
  func_0x007855e0();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_005b0f48;
  uStack_50 = 0x5b0f58;
  uStack_48 = 0;
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_68;
  uVar4 = puStack_68[5];
  func_0x00780de0(puVar2);
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



/* Entry: 005b1a80; end: 005b1b2f;  */

void FUN_005b1a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00781c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  func_0x007895e0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 005b1b30; end: 005b1ba3; -[SCExtensionSharedFile fileExists] */

undefined * FUN_005b1b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0078a400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x007833a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 005b1ba4; end: 005b1ccb; -[SCExtensionSharedFile readData] */

void FUN_005b1ba4(undefined8 param_1)

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
  func_0x00783380();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_005b0f48;
    uStack_30 = 0x5b0f58;
    uStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
    _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
    func_0x007855e0();
    func_0x0078a940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00780dc0(puVar1);
    _objc_release(param_1);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 005b1ccc; end: 005b1d13;  */

void FUN_005b1ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007816a0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 005b1d14; end: 005b1fe7; -[SCExtensionSharedFile deleteFileWithError:] */

void FUN_005b1d14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30;
  _objc_alloc(PTR__OBJC_CLASS___NSFileCoordinator_00ac2c30);
  func_0x007855e0();
  uVar7 = param_1;
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x0077f480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_005b0f48;
  uStack_78 = 0x5b0f58;
  uStack_70 = 0;
  puVar5 = puVar4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)PTR__NSFileTypeSymbolicLink_00998f18;
  _objc_release();
  if (puVar5 == puVar10) {
    uVar7 = param_1;
    func_0x0078a940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x0077bb40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_90;
    uVar8 = puStack_90[5];
    _objc_retain(puVar2);
    func_0x00780e00(puVar3);
    _objc_retain(uVar8);
    uVar6 = puVar1[5];
    puVar1[5] = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_90;
  uVar9 = puStack_90[5];
  _objc_retain(puVar2);
  func_0x00780e00(puVar3);
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



/* Entry: 005b1fe8; end: 005b2097;  */

void FUN_005b1fe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uStack_28 = *(undefined8 *)(lVar3 + 0x28);
  func_0x0078b400(*(undefined8 *)(param_1 + 0x20),param_2,param_2,&uStack_28);
  uVar1 = uStack_28;
  _objc_retain(uStack_28);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 005b2098; end: 005b2163; -[SCExtensionSharedFile createSymbolicLinkToFilename:error:] */

void FUN_005b2098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x0077c540(param_1);
  func_0x0078a940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0077bb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x0077bac0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  func_0x007811e0();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b2164; end: 005b217b; -[SCExtensionSharedFile delegate] */

void FUN_005b2164(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b217c; end: 005b2187; -[SCExtensionSharedFile setDelegate:] */

void FUN_005b217c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_0099adf8)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 005b2188; end: 005b218f; -[SCExtensionSharedFile presentedItemURL] */

undefined8 FUN_005b2188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005b2190; end: 005b21bf; -[SCExtensionSharedFile setPresentedItemURL:] */

void FUN_005b2190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b21c0; end: 005b21cb; -[SCExtensionSharedFile presentedItemOperationQueue] */

void FUN_005b21c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 005b21cc; end: 005b21d3; -[SCExtensionSharedFile setPresentedItemOperationQueue:] */

void FUN_005b21cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 005b21d4; end: 005b220b; -[SCExtensionSharedFile .cxx_destruct] */

void FUN_005b21d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + 0x10);
  return;
}



/* Entry: 005b220c; end: 005b22c7; +[SCMutableSetReaderWriter readSetFromFile:] */

void FUN_005b220c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x0078aee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_00ac2ab8;
  _objc_alloc();
  func_0x00784a40();
  func_0x0078ff20();
  puVar2 = puVar1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
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
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 005b22c8; end: 005b23b7; +[SCMutableSetReaderWriter addStringToSetAndSaveToFile:newString:] */

void FUN_005b22c8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x0078af80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x0078c940(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  func_0x0077e720(puVar1,param_2,param_4);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
  func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793d20(param_3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005b23b8; end: 005b2517; +[SCMutableSetReaderWriter stringExistsInFiles:stringToCheck:] */

undefined ** FUN_005b23b8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00780ea0(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = param_1;
        func_0x0078af80(param_1,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00780c20();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          ppuVar4 = (undefined **)0x1;
          goto LAB_005b24c0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00780ea0(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  ppuVar4 = (undefined **)0x0;
LAB_005b24c0:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_00a31ac0;
}



/* Entry: 005b2518; end: 005b2523; +[SCAPIAuth staticFSNAuthToken] */

undefined ** FUN_005b2518(void)

{
  return &PTR____CFConstantStringClassReference_00a31ac0;
}



/* Entry: 005b2524; end: 005b2757; +[SCAPIAuth authenticationParametersForEndpoint:authToken:username:userId:parameters:deviceIdManager:] */

void FUN_005b2524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  iVar1 = 0xa59580;
  func_0x00780c20(&PTR__OBJC_CLASS___NSConstantArray_00a59580,param_2,param_3);
  if (iVar1 == 0) {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_00a595b0;
    func_0x00780c20(&PTR__OBJC_CLASS___NSConstantArray_00a595b0,param_2,param_3);
    puVar6 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
    func_0x0077f620(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8,param_2,param_4,param_5,param_6,ppuVar5,
                    param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
    func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
    _objc_retainAutoreleasedReturnValue();
    func_0x007928e0();
    func_0x0078c100(puVar3,param_2,&PTR____CFConstantStringClassReference_00a31e20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x0078f4a0(puVar6,param_2,puVar3,&PTR____CFConstantStringClassReference_00a287e0);
    puVar2 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
    func_0x0078b860(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8,param_2,
                    &PTR____CFConstantStringClassReference_00a31ac0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_00a29ca0);
    _objc_release();
    FUN_0076f56c();
    if (((ulong)puVar2 & 1) == 0) {
      iVar1 = 0xa59598;
      func_0x00780c20(&PTR__OBJC_CLASS___NSConstantArray_00a59598,param_2,param_3);
      if ((iVar1 != 0) && (func_0x0077e4e0(puVar6,param_2,param_7), param_8 != 0)) {
        lVar4 = param_8;
        func_0x00781f20(param_8,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077e4e0(puVar6,param_2,lVar4);
        _objc_release(lVar4);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 005b2758; end: 005b291f; +[SCAPIAuth authenticationParametersForUserWithToken:username:userId:withDeviceInfo:deviceIdManager:] */

void FUN_005b2758(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar3 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x007817e0(PTR__OBJC_CLASS___NSDate_00ac2c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x007928e0();
  func_0x0078c100(puVar4,param_2,&PTR____CFConstantStringClassReference_00a31e20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x0078f4a0(puVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_00a287e0);
  iVar1 = (int)puVar3;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    puVar3 = PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8;
    func_0x0078b860(PTR__OBJC_CLASS___SCAPIAuth_00ac2bc8,param_2,param_3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4a0(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_00a29ca0);
    _objc_release(puVar3);
    func_0x0078f4a0(puVar2,param_2,param_4,&PTR____CFConstantStringClassReference_00a21180);
    puVar3 = puVar2;
    func_0x0078f4a0(puVar2,param_2,param_5,&PTR____CFConstantStringClassReference_00a31e80);
    iVar1 = (int)puVar3;
  }
  FUN_0076f56c();
  if (((param_7 != 0) && (param_6 != 0)) && (iVar1 == 0)) {
    lVar5 = param_7;
    func_0x00781f20(param_7,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e4e0(puVar2,param_2,lVar5);
    _objc_release(lVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005b2920; end: 005b2ab3; +[SCAPIAuth requestTokenForUserToken:timestamp:] */

void FUN_005b2920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a26560);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a26560);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_00a31ec0;
  func_0x007882e0();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    ppuVar8 = (undefined **)0x0;
    ppuVar9 = &PTR____CFConstantStringClassReference_00a212a0;
    do {
      ppuVar7 = &PTR____CFConstantStringClassReference_00a31ec0;
      func_0x00780140(&PTR____CFConstantStringClassReference_00a31ec0,param_2,ppuVar8);
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
      puVar1 = puVar4;
      if (((uint)ppuVar7 & 0xff) != 0x30) {
        puVar1 = puVar5;
      }
      func_0x00780140(puVar1,param_2,ppuVar8);
      func_0x0078c100(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a31ee0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar8 = (undefined **)((long)ppuVar8 + 1);
      ppuVar7 = &PTR____CFConstantStringClassReference_00a31ec0;
      func_0x007882e0();
      ppuVar9 = ppuVar6;
    } while (ppuVar8 < ppuVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar6);
  return;
}



/* Entry: 005b2ab4; end: 005b2abf; +[SCAPIAuth userAgentHeader] */

void FUN_005b2ab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00793390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170,PTR_s_userAgentHeader_00abf9f0);
  return;
}



/* Entry: 005b2ac0; end: 005b2acb; +[SCAPIAuth versionName] */

void FUN_005b2ac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x007937f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170,PTR_s_versionName_00abfb08);
  return;
}



/* Entry: 005b2acc; end: 005b2ad7; +[SCAPIAuth appVersion] */

void FUN_005b2acc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170,PTR_s_appVersion_00aba890);
  return;
}



/* Entry: 005b2ad8; end: 005b2ae3; +[SCAPIAuth schemeName] */

void FUN_005b2ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170,PTR_s_schemeName_00abddf8);
  return;
}



/* Entry: 005b2ae4; end: 005b2aef; +[SCAPIAuth appName] */

void FUN_005b2ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170,PTR_s_appName_00aba858);
  return;
}



/* Entry: 005b2af0; end: 005b2b13; +[SCAPIUtil endpointURL] */

void FUN_005b2af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32020,
             &PTR____CFConstantStringClassReference_00a31f00);
  return;
}



/* Entry: 005b2b14; end: 005b2b2b; +[SCAPIUtil setEndpointURL:] */

void FUN_005b2b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32020);
  return;
}



/* Entry: 005b2b2c; end: 005b2b4f; +[SCAPIUtil snapConnectEndpointURL] */

void FUN_005b2b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32060,
             &PTR____CFConstantStringClassReference_00a32000);
  return;
}



/* Entry: 005b2b50; end: 005b2b67; +[SCAPIUtil setSnapConnectEndpointURL:] */

void FUN_005b2b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32060);
  return;
}



/* Entry: 005b2b68; end: 005b2b8b; +[SCAPIUtil bitmojiDeepLinkEndpointURL] */

void FUN_005b2b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32040,
             &PTR____CFConstantStringClassReference_00a31fc0);
  return;
}



/* Entry: 005b2b8c; end: 005b2ba3; +[SCAPIUtil setBitmojiDeepLinkEndpointURL:] */

void FUN_005b2b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32040);
  return;
}



/* Entry: 005b2ba4; end: 005b2bc7; +[SCAPIUtil gatewayPersistenceEndpointURL] */

void FUN_005b2ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32080,
             &PTR____CFConstantStringClassReference_00a31600);
  return;
}



/* Entry: 005b2bc8; end: 005b2bdf; +[SCAPIUtil setGatewayPersistenceEndpointURL:] */

void FUN_005b2bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3048,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32080);
  return;
}



/* Entry: 005b2be0; end: 005b2c07; +[SCAPIUtil endpointURLForKey:defaultURL:] */

void FUN_005b2be0(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(in_x3);
  return;
}



/* Entry: 005b2c08; end: 005b2cbb; +[SCAPIUtil setEndpointURL:key:] */

void FUN_005b2c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00788c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_00ac3018);
  func_0x007869e0();
  func_0x0078f4a0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00792660(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 005b2cbc; end: 005b2d43; +[SCEndpointSecurityTweaks shared] */

void FUN_005b2cbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_005b2d44;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b62a80 != -1) {
    _dispatch_once(0xb62a80,&puStack_48);
  }
  uVar1 = uRam0000000000b62a88;
  _objc_retain(uRam0000000000b62a88);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005b2d44; end: 005b2d6b;  */

void FUN_005b2d44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000000b62a88;
  uRam0000000000b62a88 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b2d6c; end: 005b2d73; -[SCEndpointSecurityTweaks isPinningDisabled] */

undefined8 FUN_005b2d6c(void)

{
  return 0;
}



/* Entry: 005b2d74; end: 005b378b;  */

void FUN_005b2d74(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  if (((ulong)puVar7 & 1) == 0) {
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007815c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x007882e0();
  lVar4 = lVar3 + 0x10;
  _malloc();
  uStack_68 = 0;
  _objc_retainAutorelease(param_1);
  func_0x0077fde0();
  puVar7 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x0077fde0();
  puVar5 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x0077fde0();
  lVar6 = lVar4;
  FUN_005b42d8(lVar4,lVar3 + 0x10,&uStack_68,param_1,lVar3,puVar7,puVar5);
  if ((int)lVar6 == 0) {
    _free(lVar4);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x00781600(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 005b378c; end: 005b37b3;  */

/* WARNING: Removing unreachable block (ram,0x005b3ce8) */
/* WARNING: Removing unreachable block (ram,0x005b3cf0) */
/* WARNING: Removing unreachable block (ram,0x005b3fc8) */
/* WARNING: Removing unreachable block (ram,0x005b3fd0) */

void FUN_005b378c(dword *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  dword *pdVar1;
  long lVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  dword *pdVar8;
  dword *pdVar9;
  dword *pdVar10;
  dword *pdVar11;
  undefined8 *puVar12;
  dword *pdVar13;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  dword dStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar3 = param_1;
  puVar12 = param_4;
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_4);
  if (param_3 == 0) {
    pdVar13 = (dword *)0x0;
  }
  else {
    pdVar3 = &MACH_HEADER.filetype;
    FUN_006e94a4(&uStack_74,0xc,&UNK_00836538);
    pdVar1 = (dword *)PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    pdVar13 = param_1;
    func_0x007882e0(param_1);
    puVar12 = (undefined8 *)(pdVar13 + 7);
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    pdVar13 = pdVar1;
    _objc_retainAutorelease();
    func_0x007896e0();
    *(undefined8 *)pdVar13 = uStack_74;
    pdVar13[2] = dStack_6c;
    lVar2 = param_3;
    func_0x007882e0();
    if (lVar2 == 0x10) {
      pdVar13 = pdVar1;
      _objc_retainAutorelease();
      func_0x007896e0();
      pdVar3 = param_1;
      func_0x007882e0();
      pdVar4 = param_1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      pdVar5 = param_1;
      func_0x007882e0();
      puVar6 = param_4;
      _objc_retainAutorelease();
      func_0x0077fde0();
      puVar7 = param_4;
      func_0x007882e0();
      lVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x0077fde0();
      pdVar13 = pdVar13 + 3;
      puVar12 = &uStack_84;
      FUN_005b4658(pdVar13,pdVar3,puVar12,pdVar4,pdVar5,puVar6,puVar7,lVar2);
      pdVar4 = pdVar1;
      _objc_retainAutorelease();
      func_0x007896e0();
      if ((int)pdVar13 == 0) {
        pdVar13 = pdVar1;
        func_0x007882e0();
        if (pdVar13 != (dword *)0x0) {
          _bzero(pdVar4);
          pdVar3 = pdVar13;
        }
        goto LAB_005b3e70;
      }
      pdVar13 = param_1;
      func_0x007882e0();
      *(undefined8 *)((long)pdVar4 + (long)pdVar13 + 0x14) = uStack_7c;
      *(undefined8 *)((long)pdVar4 + (long)pdVar13 + 0xc) = uStack_84;
      _objc_retain(pdVar1);
      pdVar13 = pdVar1;
    }
    else {
LAB_005b3e70:
      pdVar13 = (dword *)0x0;
    }
    _objc_release(pdVar1);
  }
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(pdVar3);
  _objc_retain(puVar12);
  pdVar13 = (dword *)0x0;
  if ((param_3 != 0) && (pdVar3 != (dword *)0x0)) {
    pdVar13 = pdVar3;
    func_0x007882e0();
    if ((undefined1 *)((long)&MACH_HEADER.flags + 3) < pdVar13) {
      pdVar13 = pdVar3;
      func_0x007882e0(pdVar3);
      pdVar1 = pdVar3;
      func_0x00792320();
      _objc_retainAutoreleasedReturnValue();
      func_0x007882e0(pdVar3);
      pdVar4 = pdVar3;
      func_0x00792320();
      _objc_retainAutoreleasedReturnValue();
      pdVar5 = pdVar4;
      func_0x00789700();
      _objc_release(pdVar4);
      pdVar4 = (dword *)PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      func_0x00781720();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x007882e0();
      if (lVar2 == 0x10) {
        pdVar8 = pdVar4;
        _objc_retainAutorelease();
        func_0x007896e0();
        pdVar9 = pdVar5;
        _objc_retainAutorelease();
        func_0x007896e0();
        pdVar10 = pdVar3;
        _objc_retainAutorelease();
        func_0x0077fde0();
        puVar6 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x0077fde0();
        puVar7 = puVar12;
        func_0x007882e0(puVar12);
        lVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x0077fde0();
        pdVar11 = pdVar1;
        _objc_retainAutorelease();
        func_0x0077fde0();
        FUN_005b48d0(pdVar8,pdVar13 + -7,pdVar9,pdVar10 + 3,pdVar13 + -7,puVar6,puVar7,lVar2,pdVar11
                    );
        if ((int)pdVar8 == 0) {
          pdVar13 = pdVar4;
          _objc_retainAutorelease(pdVar4);
          func_0x007896e0();
          pdVar8 = pdVar4;
          func_0x007882e0();
          if (pdVar8 != (dword *)0x0) {
            _bzero(pdVar13,pdVar8);
          }
          goto LAB_005b4138;
        }
        _objc_retain(pdVar4);
        pdVar13 = pdVar4;
      }
      else {
LAB_005b4138:
        pdVar13 = (dword *)0x0;
      }
      _objc_release(pdVar4);
      _objc_release(pdVar5);
      _objc_release(pdVar1);
    }
    else {
      pdVar13 = (dword *)0x0;
    }
  }
  _objc_release(puVar12);
  _objc_release(pdVar3);
  _objc_release(param_3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pdVar13);
  return;
}



/* Entry: 005b37b4; end: 005b397b;  */

void FUN_005b37b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retainAutorelease();
  func_0x0077fde0();
  func_0x007882e0(param_1);
  FUN_005b4cb4(uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077f740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 005b397c; end: 005b3c2f;  */

void FUN_005b397c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b0 [6];
  byte bStack_aa;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0077bcc0();
  uVar2 = param_3;
  func_0x007882e0();
  _objc_release(param_3);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0x1032547698badcfe;
  uStack_a0 = 0xefcdab8967452301;
  FUN_006efff4(FUN_006f021c,&uStack_a0,&uStack_88,(long)&uStack_4c + 4,(long)&uStack_90 + 4,
               &uStack_90,uVar1,uVar2);
  FUN_006f01d0(auStack_b0,&uStack_a0);
  bStack_aa = bStack_aa & 0xf | 0x30;
  bStack_a8 = bStack_a8 & 0x3f | 0x80;
  _uuid_unparse_lower(auStack_b0,&uStack_a0);
  _objc_alloc(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar3 = &uStack_a0;
  func_0x00786c00();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    func_0x007815a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x0077fde0();
    puVar5 = puVar3;
    func_0x007882e0(puVar3);
    FUN_005b4190(puVar4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_005b41f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b3c30; end: 005b3ed3;  */

/* WARNING: Removing unreachable block (ram,0x005b3fc8) */
/* WARNING: Removing unreachable block (ram,0x005b3fd0) */

void FUN_005b3c30(long param_1,dword *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  dword *pdVar2;
  long lVar3;
  dword *pdVar4;
  dword *pdVar5;
  dword *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  dword *pdVar9;
  dword *pdVar10;
  dword *pdVar11;
  dword *pdVar12;
  undefined8 *puVar13;
  dword *pdVar14;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  dword dStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar4 = param_2;
  puVar13 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0) {
    pdVar14 = (dword *)0x0;
  }
  else {
    pdVar4 = &MACH_HEADER.filetype;
    FUN_006e94a4(&uStack_74,0xc,&UNK_00836538);
    pdVar2 = (dword *)PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    pdVar14 = param_2;
    func_0x007882e0(param_2);
    puVar13 = (undefined8 *)(pdVar14 + 7);
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    pdVar14 = pdVar2;
    _objc_retainAutorelease();
    func_0x007896e0();
    *(undefined8 *)pdVar14 = uStack_74;
    pdVar14[2] = dStack_6c;
    lVar3 = param_1;
    func_0x007882e0();
    if ((param_4 & 1) == 0) {
      if (lVar3 == 0x10) {
        pdVar14 = pdVar2;
        _objc_retainAutorelease();
        func_0x007896e0();
        pdVar4 = param_2;
        func_0x007882e0();
        pdVar5 = param_2;
        _objc_retainAutorelease();
        func_0x0077fde0();
        pdVar6 = param_2;
        func_0x007882e0();
        puVar7 = param_3;
        _objc_retainAutorelease();
        func_0x0077fde0();
        puVar8 = param_3;
        func_0x007882e0();
        lVar3 = param_1;
        _objc_retainAutorelease(param_1);
        func_0x0077fde0();
        pdVar14 = pdVar14 + 3;
        puVar13 = &uStack_84;
        FUN_005b4658(pdVar14,pdVar4,puVar13,pdVar5,pdVar6,puVar7,puVar8,lVar3);
        iVar1 = (int)pdVar14;
        goto LAB_005b3e1c;
      }
LAB_005b3e70:
      pdVar14 = (dword *)0x0;
    }
    else {
      if (lVar3 != 0x20) goto LAB_005b3e70;
      pdVar14 = pdVar2;
      _objc_retainAutorelease();
      func_0x007896e0();
      pdVar4 = param_2;
      func_0x007882e0();
      pdVar5 = param_2;
      _objc_retainAutorelease();
      func_0x0077fde0();
      pdVar6 = param_2;
      func_0x007882e0();
      puVar7 = param_3;
      _objc_retainAutorelease();
      func_0x0077fde0();
      puVar8 = param_3;
      func_0x007882e0();
      lVar3 = param_1;
      _objc_retainAutorelease(param_1);
      func_0x0077fde0();
      pdVar14 = pdVar14 + 3;
      puVar13 = &uStack_84;
      FUN_005b4b64(pdVar14,pdVar4,puVar13,pdVar5,pdVar6,puVar7,puVar8,lVar3);
      iVar1 = (int)pdVar14;
LAB_005b3e1c:
      pdVar14 = pdVar2;
      _objc_retainAutorelease();
      func_0x007896e0();
      if (iVar1 == 0) {
        pdVar5 = pdVar2;
        func_0x007882e0();
        if (pdVar5 != (dword *)0x0) {
          _bzero(pdVar14);
          pdVar4 = pdVar5;
        }
        goto LAB_005b3e70;
      }
      pdVar5 = param_2;
      func_0x007882e0();
      *(undefined8 *)((long)pdVar14 + (long)pdVar5 + 0x14) = uStack_7c;
      *(undefined8 *)((long)pdVar14 + (long)pdVar5 + 0xc) = uStack_84;
      _objc_retain(pdVar2);
      pdVar14 = pdVar2;
    }
    _objc_release(pdVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(pdVar4);
  _objc_retain(puVar13);
  pdVar14 = (dword *)0x0;
  if ((param_1 != 0) && (pdVar4 != (dword *)0x0)) {
    pdVar14 = pdVar4;
    func_0x007882e0();
    if ((undefined1 *)((long)&MACH_HEADER.flags + 3) < pdVar14) {
      pdVar14 = pdVar4;
      func_0x007882e0(pdVar4);
      pdVar2 = pdVar4;
      func_0x00792320();
      _objc_retainAutoreleasedReturnValue();
      func_0x007882e0(pdVar4);
      pdVar5 = pdVar4;
      func_0x00792320();
      _objc_retainAutoreleasedReturnValue();
      pdVar6 = pdVar5;
      func_0x00789700();
      _objc_release(pdVar5);
      pdVar5 = (dword *)PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      func_0x00781720();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x007882e0();
      if (lVar3 == 0x10) {
        pdVar9 = pdVar5;
        _objc_retainAutorelease();
        func_0x007896e0();
        pdVar10 = pdVar6;
        _objc_retainAutorelease();
        func_0x007896e0();
        pdVar11 = pdVar4;
        _objc_retainAutorelease();
        func_0x0077fde0();
        puVar7 = puVar13;
        _objc_retainAutorelease(puVar13);
        func_0x0077fde0();
        puVar8 = puVar13;
        func_0x007882e0(puVar13);
        lVar3 = param_1;
        _objc_retainAutorelease(param_1);
        func_0x0077fde0();
        pdVar12 = pdVar2;
        _objc_retainAutorelease();
        func_0x0077fde0();
        FUN_005b48d0(pdVar9,pdVar14 + -7,pdVar10,pdVar11 + 3,pdVar14 + -7,puVar7,puVar8,lVar3,
                     pdVar12);
        if ((int)pdVar9 == 0) {
          pdVar14 = pdVar5;
          _objc_retainAutorelease(pdVar5);
          func_0x007896e0();
          pdVar9 = pdVar5;
          func_0x007882e0();
          if (pdVar9 != (dword *)0x0) {
            _bzero(pdVar14,pdVar9);
          }
          goto LAB_005b4138;
        }
        _objc_retain(pdVar5);
        pdVar14 = pdVar5;
      }
      else {
LAB_005b4138:
        pdVar14 = (dword *)0x0;
      }
      _objc_release(pdVar5);
      _objc_release(pdVar6);
      _objc_release(pdVar2);
    }
    else {
      pdVar14 = (dword *)0x0;
    }
  }
  _objc_release(puVar13);
  _objc_release(pdVar4);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pdVar14);
  return;
}



/* Entry: 005b3ed4; end: 005b3edb;  */

/* WARNING: Removing unreachable block (ram,0x005b3fc8) */
/* WARNING: Removing unreachable block (ram,0x005b3fd0) */

void _SCAES128GCMDecrypt(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_005b4154;
  uVar1 = param_2;
  func_0x007882e0();
  if (uVar1 < 0x1c) {
    puVar12 = (undefined *)0x0;
    goto LAB_005b4154;
  }
  uVar1 = param_2;
  func_0x007882e0(param_2);
  uVar2 = param_2;
  func_0x00792320();
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0(param_2);
  uVar3 = param_2;
  func_0x00792320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00789700();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x007882e0();
  if (lVar6 == 0x10) {
    puVar12 = puVar5;
    _objc_retainAutorelease();
    func_0x007896e0();
    uVar3 = uVar4;
    _objc_retainAutorelease();
    func_0x007896e0();
    uVar7 = param_2;
    _objc_retainAutorelease();
    func_0x0077fde0();
    uVar8 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x0077fde0();
    uVar9 = param_3;
    func_0x007882e0(param_3);
    lVar6 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x0077fde0();
    uVar10 = uVar2;
    _objc_retainAutorelease();
    func_0x0077fde0();
    FUN_005b48d0(puVar12,uVar1 - 0x1c,uVar3,uVar7 + 0xc,uVar1 - 0x1c,uVar8,uVar9,lVar6,uVar10);
    if ((int)puVar12 == 0) {
      puVar12 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x007896e0();
      puVar11 = puVar5;
      func_0x007882e0();
      if (puVar11 != (undefined *)0x0) {
        _bzero(puVar12,puVar11);
      }
      goto LAB_005b4138;
    }
    _objc_retain(puVar5);
    puVar12 = puVar5;
  }
  else {
LAB_005b4138:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
LAB_005b4154:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar12);
  return;
}



/* Entry: 005b3edc; end: 005b418f;  */

void FUN_005b3edc(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_005b4154;
  uVar1 = param_2;
  func_0x007882e0();
  if (uVar1 < 0x1c) {
    puVar11 = (undefined *)0x0;
    goto LAB_005b4154;
  }
  uVar1 = param_2;
  func_0x007882e0(param_2);
  lVar12 = uVar1 - 0x1c;
  uVar1 = param_2;
  func_0x00792320();
  _objc_retainAutoreleasedReturnValue();
  func_0x007882e0(param_2);
  uVar2 = param_2;
  func_0x00792320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789700();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x007882e0();
  if ((param_4 & 1) == 0) {
    if (lVar5 != 0x10) goto LAB_005b4138;
    puVar11 = puVar4;
    _objc_retainAutorelease();
    func_0x007896e0();
    uVar2 = uVar3;
    _objc_retainAutorelease();
    func_0x007896e0();
    uVar6 = param_2;
    _objc_retainAutorelease();
    func_0x0077fde0();
    uVar7 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x0077fde0();
    uVar8 = param_3;
    func_0x007882e0(param_3);
    lVar5 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x0077fde0();
    uVar9 = uVar1;
    _objc_retainAutorelease();
    func_0x0077fde0();
    FUN_005b48d0(puVar11,lVar12,uVar2,uVar6 + 0xc,lVar12,uVar7,uVar8,lVar5,uVar9);
    if ((int)puVar11 == 0) goto LAB_005b4110;
LAB_005b4064:
    _objc_retain(puVar4);
    puVar11 = puVar4;
  }
  else {
    if (lVar5 == 0x20) {
      puVar11 = puVar4;
      _objc_retainAutorelease();
      func_0x007896e0();
      uVar2 = uVar3;
      _objc_retainAutorelease();
      func_0x007896e0();
      uVar6 = param_2;
      _objc_retainAutorelease();
      func_0x0077fde0();
      uVar7 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x0077fde0();
      uVar8 = param_3;
      func_0x007882e0(param_3);
      lVar5 = param_1;
      _objc_retainAutorelease(param_1);
      func_0x0077fde0();
      uVar9 = uVar1;
      _objc_retainAutorelease();
      func_0x0077fde0();
      func_0x005b4c0c(puVar11,lVar12,uVar2,uVar6 + 0xc,lVar12,uVar7,uVar8,lVar5,uVar9);
      if ((int)puVar11 != 0) goto LAB_005b4064;
LAB_005b4110:
      puVar11 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x007896e0();
      puVar10 = puVar4;
      func_0x007882e0();
      if (puVar10 != (undefined *)0x0) {
        _bzero(puVar11,puVar10);
      }
    }
LAB_005b4138:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_005b4154:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar11);
  return;
}



/* Entry: 005b4190; end: 005b41f7;  */

void FUN_005b4190(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined1 auStack_38 [32];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_006eafa8(param_1,param_2,auStack_38);
  pbVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,auStack_38,0x20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain();
    pbVar5 = pbVar4;
    func_0x007882e0();
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar4;
      _objc_retainAutorelease();
      func_0x0077fde0();
      pcVar7 = (char *)((long)pbVar5 << 1 | 1);
      _malloc();
      pcVar3 = pcVar7;
      pbVar9 = (byte *)((long)&MACH_HEADER.magic + 1);
      do {
        pcVar8 = pcVar3;
        cVar2 = "0123456789abcdef"[(ulong)*pbVar6 & 0xf];
        *pcVar8 = "0123456789abcdef"[*pbVar6 >> 4];
        pcVar8[1] = cVar2;
        bVar1 = pbVar9 < pbVar5;
        pcVar3 = pcVar8 + 2;
        pbVar6 = pbVar6 + 1;
        pbVar9 = (byte *)(ulong)((int)pbVar9 + 1);
      } while (bVar1);
      pcVar8[2] = '\0';
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,pcVar7);
      _objc_retainAutoreleasedReturnValue();
      _free(pcVar7);
    }
    _objc_release(pbVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b41f8; end: 005b42d7;  */

void FUN_005b41f8(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  byte *pbVar9;
  
  _objc_retain();
  pbVar4 = param_1;
  func_0x007882e0();
  if (pbVar4 == (byte *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    pbVar5 = param_1;
    _objc_retainAutorelease();
    func_0x0077fde0();
    pcVar6 = (char *)((long)pbVar4 << 1 | 1);
    _malloc();
    pcVar3 = pcVar6;
    pbVar9 = (byte *)((long)&MACH_HEADER.magic + 1);
    do {
      pcVar8 = pcVar3;
      cVar2 = "0123456789abcdef"[(ulong)*pbVar5 & 0xf];
      *pcVar8 = "0123456789abcdef"[*pbVar5 >> 4];
      pcVar8[1] = cVar2;
      bVar1 = pbVar9 < pbVar4;
      pcVar3 = pcVar8 + 2;
      pbVar5 = pbVar5 + 1;
      pbVar9 = (byte *)(ulong)((int)pbVar9 + 1);
    } while (bVar1);
    pcVar8[2] = '\0';
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,pcVar6);
    _objc_retainAutoreleasedReturnValue();
    _free(pcVar6);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar7);
  return;
}



/* Entry: 005b42d8; end: 005b4657;  */

ulong FUN_005b42d8(long param_1,ulong param_2,long *param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7,long param_8)

{
  dword *pdVar1;
  ulong uVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  dword *pdVar15;
  ulong uVar16;
  int iStack_1a4;
  long lStack_140;
  long lStack_138;
  int iStack_d4;
  int iStack_64;
  
  if (param_2 < 0x10) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_2 - 0x10 < param_5) {
    return 0;
  }
  if (0x7ffffffe < param_5) {
    return 0;
  }
  pdVar1 = &section_00000068.offset;
  plVar8 = param_3;
  lVar4 = param_4;
  uVar16 = param_5;
  _malloc();
  if (pdVar1 == (dword *)0x0) {
    return 0;
  }
  pdVar15 = pdVar1 + 2;
  *(undefined8 *)pdVar1 = 0x90;
  lVar14 = 0xb29a18;
  uVar5 = 0x6f8dd8;
  _pthread_once();
  if ((int)lVar14 != 0) {
    _abort();
    if (uVar5 < uVar16) {
      return 0;
    }
    if ((((((uVar16 - 0x80000000 < 0xffffffff80000010 || (uVar16 & 0xf) != 0) ||
           plVar8 == (long *)0x0) || lVar14 == 0) || lVar4 == 0) || param_6 == 0) || param_7 == 0) {
      return 0;
    }
    pdVar1 = &section_00000068.offset;
    plVar9 = plVar8;
    lVar10 = lVar4;
    uVar5 = uVar16;
    _malloc();
    if (pdVar1 == (dword *)0x0) {
      return 0;
    }
    pdVar15 = pdVar1 + 2;
    *(undefined8 *)pdVar1 = 0x90;
    uVar2 = 0xb29a18;
    uVar6 = 0x6f8dd8;
    _pthread_once();
    if ((int)uVar2 != 0) {
      _abort();
      lVar4 = 0xb299f8;
      pcVar7 = FUN_006f88dc;
      plVar8 = plVar9;
      lVar14 = lVar10;
      uVar16 = uVar5;
      lVar11 = param_6;
      uVar12 = param_7;
      lVar13 = param_8;
      _pthread_once();
      if ((int)lVar4 == 0) {
        FUN_005b4700(uVar2,uVar6,plVar9,lVar10,uVar5,param_6,param_7,param_8);
        return uVar2;
      }
      _abort();
      if (lVar4 == 0) {
        return 0;
      }
      if (plVar8 == (long *)0x0) {
        return 0;
      }
      if (lVar13 == 0) {
        return 0;
      }
      if (lStack_140 == 0) {
        return 0;
      }
      if (lStack_138 == 0) {
        return 0;
      }
      if ((lVar14 == 0) && (uVar16 != 0)) {
        return 0;
      }
      if ((code *)0x7ffffffe < pcVar7) {
        return 0;
      }
      if (0x7ffffffe < uVar16) {
        return 0;
      }
      if (0x7ffffffe < uVar12) {
        return 0;
      }
      if ((lVar11 == 0) && (uVar12 != 0)) {
        return 0;
      }
      pdVar1 = &section_00000068.offset;
      _malloc();
      if (pdVar1 == (dword *)0x0) {
        return 0;
      }
      *(undefined8 *)pdVar1 = 0x90;
      pdVar15 = pdVar1 + 2;
      *(undefined8 *)(pdVar1 + 4) = 0;
      *(undefined8 *)pdVar15 = 0;
      *(undefined8 *)(pdVar1 + 8) = 0;
      *(undefined8 *)(pdVar1 + 6) = 0;
      *(undefined8 *)(pdVar1 + 0xc) = 0;
      *(undefined8 *)(pdVar1 + 10) = 0;
      *(undefined8 *)(pdVar1 + 0x10) = 0;
      *(undefined8 *)(pdVar1 + 0xe) = 0;
      *(undefined8 *)(pdVar1 + 0x14) = 0;
      *(undefined8 *)(pdVar1 + 0x12) = 0;
      *(undefined8 *)(pdVar1 + 0x18) = 0;
      *(undefined8 *)(pdVar1 + 0x16) = 0;
      *(undefined8 *)(pdVar1 + 0x1c) = 0;
      *(undefined8 *)(pdVar1 + 0x1a) = 0;
      *(undefined8 *)(pdVar1 + 0x20) = 0;
      *(undefined8 *)(pdVar1 + 0x1e) = 0;
      *(undefined8 *)(pdVar1 + 0x24) = 0;
      *(undefined8 *)(pdVar1 + 0x22) = 0;
      pdVar1 = pdVar15;
      FUN_006e9d10(pdVar15,lStack_138);
      if (((int)pdVar1 != 0) &&
         ((iStack_1a4 = 0, lVar11 == 0 ||
          (pdVar1 = pdVar15, FUN_006e9ef8(pdVar15,0,&iStack_1a4,lVar11,uVar12), (int)pdVar1 == 1))))
      {
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else {
          pdVar1 = pdVar15;
          FUN_006e9ef8(pdVar15,lVar4,&iStack_1a4,lVar14,uVar16);
          if ((int)pdVar1 != 1) goto LAB_005b48bc;
          lVar14 = (long)iStack_1a4;
        }
        pdVar1 = pdVar15;
        FUN_006ea098(pdVar15,lVar4 + lVar14,&iStack_1a4);
        if ((int)pdVar1 == 1) {
          pdVar1 = pdVar15;
          FUN_006e9e9c(pdVar15,0x10,0x10,plVar8);
          func_0x006e9cd4(pdVar15);
          func_0x00701ed0(pdVar15);
          return (ulong)((int)pdVar1 == 1);
        }
      }
LAB_005b48bc:
      func_0x006e9cd4(pdVar15);
      func_0x00701ed0(pdVar15);
      return 0;
    }
    *(undefined8 *)(pdVar1 + 0x20) = 0;
    *(undefined8 *)(pdVar1 + 0x1e) = 0;
    *(undefined8 *)(pdVar1 + 0x24) = 0;
    *(undefined8 *)(pdVar1 + 0x22) = 0;
    *(undefined8 *)(pdVar1 + 0x18) = 0;
    *(undefined8 *)(pdVar1 + 0x16) = 0;
    *(undefined8 *)(pdVar1 + 0x1c) = 0;
    *(undefined8 *)(pdVar1 + 0x1a) = 0;
    *(undefined8 *)(pdVar1 + 0x10) = 0;
    *(undefined8 *)(pdVar1 + 0xe) = 0;
    *(undefined8 *)(pdVar1 + 0x14) = 0;
    *(undefined8 *)(pdVar1 + 0x12) = 0;
    *(undefined8 *)(pdVar1 + 8) = 0;
    *(undefined8 *)(pdVar1 + 6) = 0;
    *(undefined8 *)(pdVar1 + 0xc) = 0;
    *(undefined8 *)(pdVar1 + 10) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)pdVar15 = 0;
    pdVar3 = pdVar15;
    FUN_006e9d10(pdVar15,0xb6c980);
    if ((int)pdVar3 == 0) {
      func_0x006e9cd4(pdVar15);
      if (*(long *)pdVar1 + 8 != 0) {
        ___memset_chk(pdVar1,0,*(long *)pdVar1 + 8,0x98);
      }
      _free(pdVar1);
      return 0;
    }
    pdVar3 = pdVar15;
    FUN_006ea13c(pdVar15,lVar14,&iStack_d4,lVar4,uVar16);
    if ((int)pdVar3 != 0) {
      *plVar8 = (long)iStack_d4;
      pdVar3 = pdVar15;
      FUN_006ea28c(pdVar15,lVar14 + iStack_d4,&iStack_d4);
      if ((int)pdVar3 != 0) {
        *plVar8 = *plVar8 + (long)iStack_d4;
        uVar16 = 1;
        goto LAB_005b45d0;
      }
    }
    uVar16 = 0;
LAB_005b45d0:
    func_0x006e9cd4(pdVar15);
    if (*(long *)pdVar1 + 8 != 0) {
      ___memset_chk(pdVar1,0,*(long *)pdVar1 + 8,0x98);
    }
    _free(pdVar1);
    return uVar16;
  }
  *(undefined8 *)(pdVar1 + 0x20) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(undefined8 *)(pdVar1 + 0x24) = 0;
  *(undefined8 *)(pdVar1 + 0x22) = 0;
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x16) = 0;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0x14) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)pdVar15 = 0;
  pdVar3 = pdVar15;
  FUN_006e9d10(pdVar15,0xb6c980);
  if ((int)pdVar3 == 0) {
    func_0x006e9cd4(pdVar15);
    if (*(long *)pdVar1 + 8 != 0) {
      ___memset_chk(pdVar1,0,*(long *)pdVar1 + 8,0x98);
    }
    _free(pdVar1);
    return 0;
  }
  pdVar3 = pdVar15;
  FUN_006e9ef8(pdVar15,param_1,&iStack_64,param_4,param_5);
  if ((int)pdVar3 == 1) {
    *param_3 = (long)iStack_64;
    pdVar3 = pdVar15;
    FUN_006ea098(pdVar15,param_1 + iStack_64,&iStack_64);
    if ((int)pdVar3 == 1) {
      *param_3 = *param_3 + (long)iStack_64;
      uVar16 = 1;
      goto LAB_005b4410;
    }
  }
  uVar16 = 0;
LAB_005b4410:
  func_0x006e9cd4(pdVar15);
  if (*(long *)pdVar1 + 8 != 0) {
    ___memset_chk(pdVar1,0,*(long *)pdVar1 + 8,0x98);
  }
  _free(pdVar1);
  return uVar16;
}



/* Entry: 005b4658; end: 005b46ff;  */

ulong FUN_005b4658(ulong param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  long param_6,ulong param_7,long param_8)

{
  long lVar1;
  dword *pdVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  dword *pdVar10;
  int iStack_c4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0xb299f8;
  pcVar3 = FUN_006f88dc;
  lVar4 = param_3;
  lVar9 = param_4;
  uVar5 = param_5;
  lVar6 = param_6;
  uVar7 = param_7;
  lVar8 = param_8;
  _pthread_once();
  if ((int)lVar1 == 0) {
    FUN_005b4700(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return param_1;
  }
  _abort();
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (lVar8 == 0) {
    return 0;
  }
  if (lStack_60 == 0) {
    return 0;
  }
  if (lStack_58 == 0) {
    return 0;
  }
  if ((lVar9 == 0) && (uVar5 != 0)) {
    return 0;
  }
  if ((code *)0x7ffffffe < pcVar3) {
    return 0;
  }
  if (0x7ffffffe < uVar5) {
    return 0;
  }
  if (0x7ffffffe < uVar7) {
    return 0;
  }
  if ((lVar6 == 0) && (uVar7 != 0)) {
    return 0;
  }
  pdVar2 = &section_00000068.offset;
  _malloc();
  if (pdVar2 == (dword *)0x0) {
    return 0;
  }
  *(undefined8 *)pdVar2 = 0x90;
  pdVar10 = pdVar2 + 2;
  *(undefined8 *)(pdVar2 + 4) = 0;
  *(undefined8 *)pdVar10 = 0;
  *(undefined8 *)(pdVar2 + 8) = 0;
  *(undefined8 *)(pdVar2 + 6) = 0;
  *(undefined8 *)(pdVar2 + 0xc) = 0;
  *(undefined8 *)(pdVar2 + 10) = 0;
  *(undefined8 *)(pdVar2 + 0x10) = 0;
  *(undefined8 *)(pdVar2 + 0xe) = 0;
  *(undefined8 *)(pdVar2 + 0x14) = 0;
  *(undefined8 *)(pdVar2 + 0x12) = 0;
  *(undefined8 *)(pdVar2 + 0x18) = 0;
  *(undefined8 *)(pdVar2 + 0x16) = 0;
  *(undefined8 *)(pdVar2 + 0x1c) = 0;
  *(undefined8 *)(pdVar2 + 0x1a) = 0;
  *(undefined8 *)(pdVar2 + 0x20) = 0;
  *(undefined8 *)(pdVar2 + 0x1e) = 0;
  *(undefined8 *)(pdVar2 + 0x24) = 0;
  *(undefined8 *)(pdVar2 + 0x22) = 0;
  pdVar2 = pdVar10;
  FUN_006e9d10(pdVar10,lStack_58);
  if (((int)pdVar2 != 0) &&
     ((iStack_c4 = 0, lVar6 == 0 ||
      (pdVar2 = pdVar10, FUN_006e9ef8(pdVar10,0,&iStack_c4,lVar6,uVar7), (int)pdVar2 == 1)))) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      pdVar2 = pdVar10;
      FUN_006e9ef8(pdVar10,lVar1,&iStack_c4,lVar9,uVar5);
      if ((int)pdVar2 != 1) goto LAB_005b48bc;
      lVar9 = (long)iStack_c4;
    }
    pdVar2 = pdVar10;
    FUN_006ea098(pdVar10,lVar1 + lVar9,&iStack_c4);
    if ((int)pdVar2 == 1) {
      pdVar2 = pdVar10;
      FUN_006e9e9c(pdVar10,0x10,0x10,lVar4);
      func_0x006e9cd4(pdVar10);
      func_0x00701ed0(pdVar10);
      return (ulong)((int)pdVar2 == 1);
    }
  }
LAB_005b48bc:
  func_0x006e9cd4(pdVar10);
  func_0x00701ed0(pdVar10);
  return 0;
}



/* Entry: 005b4700; end: 005b48cf;  */

bool FUN_005b4700(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
                 ulong param_7,long param_8,long param_9,long param_10)

{
  dword *pdVar1;
  long lVar2;
  dword *pdVar3;
  int iStack_64;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  if (param_8 == 0) {
    return false;
  }
  if (param_9 == 0) {
    return false;
  }
  if (param_10 == 0) {
    return false;
  }
  if ((param_4 == 0) && (param_5 != 0)) {
    return false;
  }
  if (0x7ffffffe < param_2) {
    return false;
  }
  if (0x7ffffffe < param_5) {
    return false;
  }
  if (0x7ffffffe < param_7) {
    return false;
  }
  if ((param_6 == 0) && (param_7 != 0)) {
    return false;
  }
  pdVar1 = &section_00000068.offset;
  _malloc();
  if (pdVar1 == (dword *)0x0) {
    return false;
  }
  *(undefined8 *)pdVar1 = 0x90;
  pdVar3 = pdVar1 + 2;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)pdVar3 = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0x14) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x16) = 0;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(undefined8 *)(pdVar1 + 0x20) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(undefined8 *)(pdVar1 + 0x24) = 0;
  *(undefined8 *)(pdVar1 + 0x22) = 0;
  pdVar1 = pdVar3;
  FUN_006e9d10(pdVar3,param_10);
  if (((int)pdVar1 != 0) &&
     ((iStack_64 = 0, param_6 == 0 ||
      (pdVar1 = pdVar3, FUN_006e9ef8(pdVar3,0,&iStack_64,param_6,param_7), (int)pdVar1 == 1)))) {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      pdVar1 = pdVar3;
      FUN_006e9ef8(pdVar3,param_1,&iStack_64,param_4,param_5);
      if ((int)pdVar1 != 1) goto LAB_005b48bc;
      lVar2 = (long)iStack_64;
    }
    pdVar1 = pdVar3;
    FUN_006ea098(pdVar3,param_1 + lVar2,&iStack_64);
    if ((int)pdVar1 == 1) {
      pdVar1 = pdVar3;
      FUN_006e9e9c(pdVar3,0x10,0x10,param_3);
      func_0x006e9cd4(pdVar3);
      func_0x00701ed0(pdVar3);
      return (int)pdVar1 == 1;
    }
  }
LAB_005b48bc:
  func_0x006e9cd4(pdVar3);
  func_0x00701ed0(pdVar3);
  return false;
}



/* Entry: 005b48d0; end: 005b4977;  */

undefined8
FUN_005b48d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
            long param_6,ulong param_7,long param_8)

{
  long lVar1;
  dword *pdVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  dword *pdVar11;
  undefined8 uVar12;
  int iStack_c4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0xb299f8;
  pcVar3 = FUN_006f88dc;
  lVar4 = param_3;
  lVar5 = param_4;
  uVar6 = param_5;
  lVar7 = param_6;
  uVar8 = param_7;
  lVar9 = param_8;
  _pthread_once();
  if ((int)lVar1 == 0) {
    FUN_005b4978(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return param_1;
  }
  _abort();
  if (lVar4 == 0) {
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (lVar9 == 0) {
    return 0;
  }
  if (lStack_60 == 0) {
    return 0;
  }
  if (lStack_58 == 0) {
    return 0;
  }
  if ((lVar1 == 0) && (pcVar3 != (code *)0x0)) {
    return 0;
  }
  if ((code *)0x7ffffffe < pcVar3) {
    return 0;
  }
  if (0x7ffffffe < uVar6) {
    return 0;
  }
  if (0x7ffffffe < uVar8) {
    return 0;
  }
  if ((lVar7 == 0) && (uVar8 != 0)) {
    return 0;
  }
  pdVar2 = &section_00000068.offset;
  _malloc();
  if (pdVar2 == (dword *)0x0) {
    return 0;
  }
  *(undefined8 *)pdVar2 = 0x90;
  pdVar11 = pdVar2 + 2;
  *(undefined8 *)(pdVar2 + 4) = 0;
  *(undefined8 *)pdVar11 = 0;
  *(undefined8 *)(pdVar2 + 8) = 0;
  *(undefined8 *)(pdVar2 + 6) = 0;
  *(undefined8 *)(pdVar2 + 0xc) = 0;
  *(undefined8 *)(pdVar2 + 10) = 0;
  *(undefined8 *)(pdVar2 + 0x10) = 0;
  *(undefined8 *)(pdVar2 + 0xe) = 0;
  *(undefined8 *)(pdVar2 + 0x14) = 0;
  *(undefined8 *)(pdVar2 + 0x12) = 0;
  *(undefined8 *)(pdVar2 + 0x18) = 0;
  *(undefined8 *)(pdVar2 + 0x16) = 0;
  *(undefined8 *)(pdVar2 + 0x1c) = 0;
  *(undefined8 *)(pdVar2 + 0x1a) = 0;
  *(undefined8 *)(pdVar2 + 0x20) = 0;
  *(undefined8 *)(pdVar2 + 0x1e) = 0;
  *(undefined8 *)(pdVar2 + 0x24) = 0;
  *(undefined8 *)(pdVar2 + 0x22) = 0;
  pdVar2 = pdVar11;
  FUN_006e9d10(pdVar11,lStack_58);
  if ((int)pdVar2 == 0) {
    func_0x006e9cd4(pdVar11);
    func_0x00701ed0(pdVar11);
    return 0;
  }
  iStack_c4 = 0;
  if ((lVar7 == 0) ||
     (pdVar2 = pdVar11, FUN_006ea13c(pdVar11,0,&iStack_c4,lVar7,uVar8), (int)pdVar2 != 0)) {
    if (lVar1 == 0) {
      iVar10 = 0;
    }
    else {
      pdVar2 = pdVar11;
      FUN_006ea13c(pdVar11,lVar1,&iStack_c4,lVar5,uVar6);
      iVar10 = iStack_c4;
      if ((int)pdVar2 == 0) goto LAB_005b4b34;
    }
    pdVar2 = pdVar11;
    FUN_006e9e9c(pdVar11,0x11,0x10,lVar4);
    if ((int)pdVar2 == 1) {
      pdVar2 = pdVar11;
      FUN_006ea28c(pdVar11,lVar1 + iVar10,&iStack_c4);
      if ((int)pdVar2 != 0) {
        uVar12 = 1;
        goto LAB_005b4b38;
      }
      if (iStack_c4 + iVar10 != 0) {
        _bzero(lVar1);
      }
    }
  }
LAB_005b4b34:
  uVar12 = 0;
LAB_005b4b38:
  func_0x006e9cd4(pdVar11);
  func_0x00701ed0(pdVar11);
  return uVar12;
}



/* Entry: 005b4978; end: 005b4b63;  */

undefined8
FUN_005b4978(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
            ulong param_7,long param_8,long param_9,long param_10)

{
  dword *pdVar1;
  int iVar2;
  dword *pdVar3;
  undefined8 uVar4;
  int iStack_64;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_8 == 0) {
    return 0;
  }
  if (param_9 == 0) {
    return 0;
  }
  if (param_10 == 0) {
    return 0;
  }
  if ((param_1 == 0) && (param_2 != 0)) {
    return 0;
  }
  if (0x7ffffffe < param_2) {
    return 0;
  }
  if (0x7ffffffe < param_5) {
    return 0;
  }
  if (0x7ffffffe < param_7) {
    return 0;
  }
  if ((param_6 == 0) && (param_7 != 0)) {
    return 0;
  }
  pdVar1 = &section_00000068.offset;
  _malloc();
  if (pdVar1 == (dword *)0x0) {
    return 0;
  }
  *(undefined8 *)pdVar1 = 0x90;
  pdVar3 = pdVar1 + 2;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)pdVar3 = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0x14) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 0x18) = 0;
  *(undefined8 *)(pdVar1 + 0x16) = 0;
  *(undefined8 *)(pdVar1 + 0x1c) = 0;
  *(undefined8 *)(pdVar1 + 0x1a) = 0;
  *(undefined8 *)(pdVar1 + 0x20) = 0;
  *(undefined8 *)(pdVar1 + 0x1e) = 0;
  *(undefined8 *)(pdVar1 + 0x24) = 0;
  *(undefined8 *)(pdVar1 + 0x22) = 0;
  pdVar1 = pdVar3;
  FUN_006e9d10(pdVar3,param_10);
  if ((int)pdVar1 == 0) {
    func_0x006e9cd4(pdVar3);
    func_0x00701ed0(pdVar3);
    return 0;
  }
  iStack_64 = 0;
  if ((param_6 == 0) ||
     (pdVar1 = pdVar3, FUN_006ea13c(pdVar3,0,&iStack_64,param_6,param_7), (int)pdVar1 != 0)) {
    if (param_1 == 0) {
      iVar2 = 0;
    }
    else {
      pdVar1 = pdVar3;
      FUN_006ea13c(pdVar3,param_1,&iStack_64,param_4,param_5);
      iVar2 = iStack_64;
      if ((int)pdVar1 == 0) goto LAB_005b4b34;
    }
    pdVar1 = pdVar3;
    FUN_006e9e9c(pdVar3,0x11,0x10,param_3);
    if ((int)pdVar1 == 1) {
      pdVar1 = pdVar3;
      FUN_006ea28c(pdVar3,param_1 + iVar2,&iStack_64);
      if ((int)pdVar1 != 0) {
        uVar4 = 1;
        goto LAB_005b4b38;
      }
      if (iStack_64 + iVar2 != 0) {
        _bzero(param_1);
      }
    }
  }
LAB_005b4b34:
  uVar4 = 0;
LAB_005b4b38:
  func_0x006e9cd4(pdVar3);
  func_0x00701ed0(pdVar3);
  return uVar4;
}



/* Entry: 005b4b64; end: 005b4cb3;  */

undefined **
FUN_005b4b64(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = (undefined **)0xb29a28;
  uVar3 = 0x6f8e08;
  uVar5 = param_3;
  uVar6 = param_4;
  uVar7 = param_5;
  uVar8 = param_6;
  uVar9 = param_7;
  uVar10 = param_8;
  _pthread_once(0xb29a28,0x6f8e08);
  if ((int)ppuVar1 == 0) {
    uStack_60 = param_9;
    uStack_58 = 0xb6c9c0;
    FUN_005b4700(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return param_1;
  }
  _abort();
  uStack_68 = 0x5b4c0c;
  uVar2 = 0xb29a28;
  uVar4 = 0x6f8e08;
  ppuStack_b0 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = &stack0xfffffffffffffff0;
  _pthread_once(0xb29a28,0x6f8e08);
  if ((int)uVar2 == 0) {
    uStack_c0 = uStack_60;
    uStack_b8 = 0xb6c9c0;
    FUN_005b4978(ppuVar1,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    return ppuVar1;
  }
  _abort();
  pcStack_c8 = FUN_005b4cb4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0x1032547698badcfe;
  uStack_140 = 0xefcdab8967452301;
  ppuStack_d0 = &puStack_70;
  FUN_006efff4(FUN_006f021c,&uStack_140,&uStack_128,(long)&uStack_ec + 4,(long)&uStack_130 + 4,
               &uStack_130,uVar2,uVar4);
  FUN_006f01d0(auStack_150,&uStack_140);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR___NSConcreteGlobalBlock_00a03880;
}



/* Entry: 005b4cb4; end: 005b4d67;  */

undefined ** FUN_005b4cb4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0x1032547698badcfe;
  uStack_80 = 0xefcdab8967452301;
  FUN_006efff4(FUN_006f021c,&uStack_80,&uStack_68,(long)&uStack_2c + 4,(long)&uStack_70 + 4,
               &uStack_70,param_1,param_2);
  FUN_006f01d0(auStack_90,&uStack_80);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007815e0(PTR__OBJC_CLASS___NSData_00ac2b10);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR___NSConcreteGlobalBlock_00a03880;
}



/* Entry: 005b4d68; end: 005b4d73; +[SCCertificateTrust authChallengeBlock] */

undefined ** FUN_005b4d68(void)

{
  return &PTR___NSConcreteGlobalBlock_00a03880;
}



/* Entry: 005b4d74; end: 005b4e9f;  */

void FUN_005b4d74(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  FUN_005b4ea0();
  if ((int)puVar1 != 0) {
    puVar1 = param_3;
    func_0x0078ab40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0078c800();
    _objc_release(puVar1);
    puVar1 = puVar2;
    FUN_005b4f2c();
    if ((int)puVar1 == 0) {
      puVar1 = param_3;
      func_0x0078c6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077ffe0();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSURLCredential_00ac3178;
      func_0x00781200(PTR__OBJC_CLASS___NSURLCredential_00ac3178,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x0078c6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x007932c0();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005b4ea0; end: 005b4f2b;  */

undefined8 FUN_005b4ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0078ab40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0077f5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007878e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005b4f2c; end: 005b512b;  */

bool FUN_005b4f2c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  int iStack_7c;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  uVar2 = param_1;
  FUN_005b5268();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  for (uVar6 = 0; uVar4 = uVar2, func_0x00780e80(), uVar6 < uVar4; uVar6 = uVar6 + 1) {
    puVar5 = PTR__OBJC_CLASS___NSData_00ac2b10;
    _objc_alloc(PTR__OBJC_CLASS___NSData_00ac2b10);
    uVar4 = uVar2;
    func_0x00789e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00784ca0(puVar5);
    func_0x0077e720(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_005b53b4;
  puStack_60 = &UNK_009e3410;
  _objc_retain();
  puStack_58 = puVar5;
  func_0x00782c00(puVar3);
  if (((puVar5 == (undefined *)0x0) ||
      (uVar6 = param_1, _SecTrustSetAnchorCertificates(param_1,puVar5), (int)uVar6 != 0)) ||
     (uVar6 = param_1, _SecTrustSetAnchorCertificatesOnly(param_1,1), (int)uVar6 != 0)) {
    bVar1 = false;
  }
  else {
    iStack_7c = 0;
    _SecTrustEvaluate(param_1,&iStack_7c);
    bVar1 = (int)param_1 == 0 && iStack_7c == 4;
  }
  _objc_release(puStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 005b512c; end: 005b5267; +[SCCertificateTrust didReceiveChallenge:completionHandler:] */

void FUN_005b512c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  FUN_005b4ea0();
  if ((int)uVar4 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = param_3;
    func_0x0078ab40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x0078c800();
    iVar1 = (int)uVar2;
    FUN_005b4f2c();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSURLCredential_00ac3178;
    if (iVar1 != 0) {
      uVar4 = param_3;
      func_0x0078ab40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078c800();
      func_0x00781200(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      (**(code **)(param_4 + 0x10))(param_4,0,puVar3);
      _objc_release(puVar3);
      goto LAB_005b5208;
    }
    uVar4 = 2;
  }
  (**(code **)(param_4 + 0x10))(param_4,uVar4,0);
LAB_005b5208:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 005b5268; end: 005b52bb;  */

void FUN_005b5268(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62aa0 != -1) {
    _dispatch_once(0xb62aa0,&PTR___NSConcreteGlobalBlock_00a038a0);
  }
  uVar1 = uRam0000000000b62aa8;
  _objc_retain(uRam0000000000b62aa8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005b52bc; end: 005b53b3;  */

void FUN_005b52bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,(long)iRam0000000000b62a90);
  _objc_retainAutoreleasedReturnValue();
  if (iRam0000000000b62a90 != 0) {
    uVar4 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,(&PTR_DAT_00b1ef98)[uVar4]);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(long)iRam0000000000b62a90);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f180(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b62aa8;
  puRam0000000000b62aa8 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 005b53b4; end: 005b53ff;  */

void FUN_005b53b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 0;
  _SecCertificateCreateWithData(0);
  func_0x0077e720(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b5400; end: 005b546f; +[SCCertificateTrust certsExpirationDate] */

void FUN_005b5400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateFormatter_00ac2f98);
  func_0x0078d8e0();
  puVar2 = puVar1;
  func_0x007818a0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a320a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 005b5470; end: 005b560b; +[SCCertificateTrust def1] */

void FUN_005b5470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_005b5268();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00780ea0(param_1,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a320e0);
        func_0x0077ef80(puVar1,param_2,uVar3);
        func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a32100);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  __Unwind_Resume(lVar2);
  _objc_autoreleasePoolPush();
  uRam0000000000b62a90 = 0x17;
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x00781620(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,&UNK_00817a98,0x2e0,0);
  _objc_retainAutoreleasedReturnValue();
  puRam0000000000b62a98 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar2);
  return;
}



/* Entry: 005b560c; end: 005b5667;  */

void FUN_005b560c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_autoreleasePoolPush();
  uRam0000000000b62a90 = 0x17;
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x00781620(PTR__OBJC_CLASS___NSData_00ac2b10,param_2,&UNK_00817a98,0x2e0,0);
  _objc_retainAutoreleasedReturnValue();
  puRam0000000000b62a98 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(param_1);
  return;
}



/* Entry: 005b5668; end: 005b568f; +[SCAuthBaseUrlTweaksHelper endpointURLForKey:defaultURL:] */

void FUN_005b5668(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(in_x3);
  return;
}



/* Entry: 005b5690; end: 005b5743; +[SCAuthBaseUrlTweaksHelper setEndpointURL:key:] */

void FUN_005b5690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00788c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_00ac3018;
  _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_00ac3018);
  func_0x007869e0();
  func_0x0078f4a0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00792660(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 005b5744; end: 005b5767; +[SCAuthLoginServiceBaseUrlHelper loginServiceBaseUrl] */

void FUN_005b5744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32180,
             &PTR____CFConstantStringClassReference_00a32140);
  return;
}



/* Entry: 005b5768; end: 005b577f; +[SCAuthLoginServiceBaseUrlHelper setLoginServiceBaseUrlToCustomUrl:] */

void FUN_005b5768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32180);
  return;
}



/* Entry: 005b5780; end: 005b57a3; +[SCAuthLoginServiceBaseUrlHelper resetLoginServiceBaseUrl] */

void FUN_005b5780(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,
             &PTR____CFConstantStringClassReference_00a32140,
             &PTR____CFConstantStringClassReference_00a32180);
  return;
}



/* Entry: 005b57a4; end: 005b57c7; +[SCAuthLoginServiceBaseUrlHelper setLoginServiceBaseUrlToDefaultDevUrl] */

void FUN_005b57a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,
             &PTR____CFConstantStringClassReference_00a32160,
             &PTR____CFConstantStringClassReference_00a32180);
  return;
}



/* Entry: 005b57c8; end: 005b57f7; +[SCAuthLoginServiceBaseUrlHelper defaultLoginServiceBaseUrl] */

void FUN_005b57c8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a32140);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a32140);
  return;
}



/* Entry: 005b57f8; end: 005b5827; +[SCAuthLoginServiceBaseUrlHelper defaultLoginServiceDevBaseUrl] */

void FUN_005b57f8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a32160);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a32160);
  return;
}



/* Entry: 005b5828; end: 005b5857; +[SCAuthLoginServiceBaseUrlHelper defaultLoginServiceDevInstanceBaseUrlSuffix] */

void FUN_005b5828(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a31700);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a31700);
  return;
}



/* Entry: 005b5858; end: 005b587b; +[SCAuthServiceBaseUrlHelper authServiceBaseUrl] */

void FUN_005b5858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00782990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_endpointURLForKey_defaultURL__00abb758,
             &PTR____CFConstantStringClassReference_00a32120,
             &PTR____CFConstantStringClassReference_00a32140);
  return;
}



/* Entry: 005b587c; end: 005b5893; +[SCAuthServiceBaseUrlHelper setAuthServiceBaseUrlToCustomUrl:] */

void FUN_005b587c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,param_3,
             &PTR____CFConstantStringClassReference_00a32120);
  return;
}



/* Entry: 005b5894; end: 005b58b7; +[SCAuthServiceBaseUrlHelper resetAuthServiceBaseUrl] */

void FUN_005b5894(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,
             &PTR____CFConstantStringClassReference_00a32140,
             &PTR____CFConstantStringClassReference_00a32120);
  return;
}



/* Entry: 005b58b8; end: 005b58db; +[SCAuthServiceBaseUrlHelper setAuthServiceBaseUrlToDefaultDevUrl] */

void FUN_005b58b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR_PTR_00ac3180,PTR_s_setEndpointURL_key__00abe430,
             &PTR____CFConstantStringClassReference_00a32160,
             &PTR____CFConstantStringClassReference_00a32120);
  return;
}



/* Entry: 005b58dc; end: 005b590b; +[SCAuthServiceBaseUrlHelper defaultAuthServiceBaseUrl] */

void FUN_005b58dc(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a32140);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a32140);
  return;
}



/* Entry: 005b590c; end: 005b593b; +[SCAuthServiceBaseUrlHelper defaultAuthServiceDevBaseUrl] */

void FUN_005b590c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a32160);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a32160);
  return;
}



/* Entry: 005b593c; end: 005b596b; +[SCAuthServiceBaseUrlHelper defaultAuthServiceDevInstanceBaseUrlSuffix] */

void FUN_005b593c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_00a31700);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)
            (&PTR____CFConstantStringClassReference_00a31700);
  return;
}



/* Entry: 005b596c; end: 005b5a53;  */

void FUN_005b596c(undefined *param_1,undefined8 param_2,undefined ***param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == (undefined ***)((long)&MACH_HEADER.magic + 2)) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
    ppuStack_40 = &PTR____CFConstantStringClassReference_00a32200;
    param_3 = &ppuStack_40;
    puVar2 = &uStack_48;
  }
  else if (param_3 == (undefined ***)((long)&MACH_HEADER.magic + 1)) {
    uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
    ppuStack_30 = &PTR____CFConstantStringClassReference_00a321e0;
    param_3 = &ppuStack_30;
    puVar2 = &uStack_38;
  }
  else {
    if (param_3 != (undefined ***)0x0) goto LAB_005b5a2c;
    uStack_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
    ppuStack_20 = &PTR____CFConstantStringClassReference_00a321c0;
    param_3 = &ppuStack_20;
    puVar2 = &uStack_28;
  }
  param_1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,param_3,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
LAB_005b5a2c:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_18) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x0077c6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00782e40(puVar1,param_2,&PTR____CFConstantStringClassReference_00a321a0,param_3,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005b5a54; end: 005b5abf;  */

void FUN_005b5a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x0077c6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782e40(puVar1,param_2,&PTR____CFConstantStringClassReference_00a321a0,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 005b5ac0; end: 005b5b13;  */

void FUN_005b5ac0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62ab8 != -1) {
    _dispatch_once(0xb62ab8,&PTR___NSConcreteGlobalBlock_00a03900);
  }
  uVar1 = uRam0000000000b62ab0;
  _objc_retain(uRam0000000000b62ab0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005b5b14; end: 005b5b3f;  */

void FUN_005b5b14(undefined8 param_1)

{
  undefined8 uVar1;
  
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000000b62ab0;
  uRam0000000000b62ab0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005b5b40; end: 005b5d2b;  */

void FUN_005b5b40(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62ac8 != -1) {
    _dispatch_once(0xb62ac8,&PTR___NSConcreteGlobalBlock_00a03920);
  }
  uVar1 = uRam0000000000b62ac0;
  _objc_retain(uRam0000000000b62ac0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005b5d2c; end: 005b5fc3;  */

void FUN_005b5d2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_51;
  
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  cStack_51 = '\0';
  puVar6 = PTR_PTR_00ac2d00;
  func_0x00781160();
  if (((int)puVar6 != 0) && (puVar6 = puVar4, func_0x007833c0(), (int)puVar6 != 0)) {
    if (cStack_51 == '\x01') {
      puVar7 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
      _arc4random();
      func_0x0078c100(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x0077bac0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar6 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90);
      _objc_retainAutoreleasedReturnValue();
      func_0x007895e0(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar8);
    }
    else {
      func_0x0078b3e0(puVar4);
    }
  }
  uStack_60 = 0;
  puVar6 = puVar4;
  func_0x00781120();
  uVar2 = uStack_60;
  _objc_retain(uStack_60);
  uVar9 = 0x11;
  func_0x00612910(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_00999f30;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_005b5fc4;
  puStack_70 = &UNK_009e3fc0;
  _objc_retain(uVar5);
  uStack_68 = uVar5;
  _dispatch_async(uVar9,&puStack_88);
  _objc_release();
  if (((ulong)puVar6 & 1) == 0) {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar9 = uVar3;
    func_0x00791ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uRam0000000000b62ae0;
  uRam0000000000b62ae0 = uVar9;
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 005b5fc4; end: 005b62df;  */

undefined * FUN_005b5fc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
  puVar8 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  uStack_78 = uVar13;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00782d00(puVar4,param_2,puVar7,puVar8,4,&PTR___NSConcreteGlobalBlock_00a039a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar9);
  puVar8 = puVar9;
  func_0x00780ea0(puVar9,param_2,&uStack_150,auStack_f8,0x10);
  if (puVar8 != (undefined *)0x0) {
    lVar12 = *plStack_140;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(puVar9);
        }
        uVar14 = *(undefined8 *)(lStack_148 + (long)puVar11 * 8);
        uStack_160 = 0;
        uStack_158 = 0;
        uVar10 = uVar14;
        func_0x007840a0(uVar14,param_2,&uStack_158,uVar13,&uStack_160);
        uVar3 = uStack_158;
        _objc_retain(uStack_158);
        uVar2 = uStack_160;
        _objc_retain(uStack_160);
        if ((int)uVar10 != 0) {
          uVar10 = uVar3;
          func_0x0077fbc0();
          puVar1 = puVar6;
          if ((int)uVar10 == 0) {
            puVar1 = puVar5;
          }
          func_0x0077e720(puVar1,param_2,uVar14);
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar9;
      func_0x00780ea0(puVar9,param_2,&uStack_150,auStack_f8,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar9);
  puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_00ac30c8;
  _objc_alloc();
  func_0x007859c0();
  puVar11 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_100 = puVar8;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,&puStack_100,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791a20(puVar5,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_00ac30c8;
  _objc_alloc();
  func_0x007859c0();
  puVar11 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_108 = puVar8;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,&puStack_108,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791a20(puVar6,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar8);
  func_0x0077e760(puVar5,param_2,puVar6);
  FUN_005b62e8(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  return (undefined *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 005b62e0; end: 005b62e7;  */

undefined8 FUN_005b62e0(void)

{
  return 1;
}



/* Entry: 005b62e8; end: 005b63af;  */

void FUN_005b62e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00780e80();
  if (lVar1 != 0) {
    uVar2 = 0;
    _dispatch_time(0,100000000);
    uVar3 = 0x11;
    func_0x00612910(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_00999f30;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_005b792c;
    puStack_40 = &UNK_009e3fc0;
    _objc_retain(param_1);
    lStack_38 = param_1;
    _dispatch_after(uVar2,uVar3,&puStack_58);
    _objc_release(uVar3);
    _objc_release(lStack_38);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 005b63b0; end: 005b6543; +[SCDiskUtility createDirectoryIfNecessary:force:excludeFromBackup:error:] */

undefined8
FUN_005b63b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5,
            long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  byte bStack_41;
  
  _objc_retain(param_3);
  bStack_41 = 0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007833c0();
  if ((int)puVar2 == 0) {
    plVar4 = &lStack_58;
LAB_005b6434:
    *plVar4 = 0;
    func_0x00781120(puVar1,param_2,param_3,1,0,plVar4);
    lVar5 = *plVar4;
    _objc_retain(lVar5);
    if (lVar5 == 0) {
LAB_005b6478:
      if (param_5 == 0) {
        lVar5 = 0;
        uVar3 = 1;
      }
      else {
        uVar3 = 1;
        puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
        func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,param_3,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078ff40();
        _objc_release(puVar2);
        lVar5 = 0;
      }
      goto LAB_005b6510;
    }
    if (param_6 != (long *)0x0) {
      _objc_retainAutorelease(lVar5);
      uVar3 = 0;
      *param_6 = lVar5;
      goto LAB_005b6510;
    }
  }
  else {
    if ((bStack_41 & 1) != 0) goto LAB_005b6478;
    if ((param_4 & 1) != 0) {
      func_0x0078b3e0(puVar1,param_2,param_3,0);
      plVar4 = &lStack_50;
      goto LAB_005b6434;
    }
    if (param_6 != (long *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
      func_0x00791d00(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      lVar5 = 0;
      uVar3 = 0;
      *param_6 = (long)puVar2;
      goto LAB_005b6510;
    }
    lVar5 = 0;
  }
  uVar3 = 0;
LAB_005b6510:
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
  return uVar3;
}


