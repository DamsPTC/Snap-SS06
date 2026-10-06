/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105bf0ff8; end: 105bf10fb; -[SCLensRemoteAssetsUploadOperationManager removeUploadOperationForBatchId:completion:] */

void FUN_105bf0ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf10fc; end: 105bf112f;  */

void FUN_105bf10fc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8dd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf1130; end: 105bf1233; -[SCLensRemoteAssetsUploadOperationManager storeUploadOperationForBatchId:completion:] */

void FUN_105bf1130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf1234; end: 105bf1267;  */

void FUN_105bf1234(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec4220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf1268; end: 105bf136f; -[SCLensRemoteAssetsUploadOperationManager uploadOperationForBatchId:completion:] */

void FUN_105bf1268(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = 0;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf1370; end: 105bf13a3;  */

void FUN_105bf1370(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf13a4; end: 105bf14a7; -[SCLensRemoteAssetsUploadOperationManager stopOwningIfNotStoredUploadOperationForBatchId:completion:] */

void FUN_105bf13a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf14a8; end: 105bf14db;  */

void FUN_105bf14a8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec35c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf14dc; end: 105bf14e3; -[SCLensRemoteAssetsUploadOperationManager assetsUploaderForUploadOperation:] */

void FUN_105bf14dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 105bf14e4; end: 105bf14eb; -[SCLensRemoteAssetsUploadOperationManager assetsStoreForUploadOperation:] */

void FUN_105bf14e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 105bf14ec; end: 105bf14f3; -[SCLensRemoteAssetsUploadOperationManager assetsLoggerForUploadOperation:] */

void FUN_105bf14ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 105bf14f4; end: 105bf15db; -[SCLensRemoteAssetsUploadOperationManager _registerIfNeededUploadOperationForBatchId:completion:] */

void FUN_105bf14f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x38);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c30c0;
        _objc_alloc(PTR_PTR_1126c30c0);
        func_0x00010bff74a0();
        func_0x00010be89ec0(param_1);
      }
      else {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38));
      }
    }
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf15dc; end: 105bf178b; -[SCLensRemoteAssetsUploadOperationManager _removeUploadOperationForBatchId:completion:] */

void FUN_105bf15dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105bf178c;
  puStack_60 = &UNK_1108dc9c8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_48 = param_4;
  _objc_retainBlock();
  puVar2 = *(undefined **)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bec4320();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) goto LAB_105bf16b8;
    if (lVar3 != 0) {
      func_0x00010be89ec0(param_1);
      (*(code *)ppuVar1[2])(ppuVar1,lVar3,1);
      goto LAB_105bf16d8;
    }
    puVar2 = PTR_PTR_1126c3078;
    func_0x00010be0b360(PTR_PTR_1126c3078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3680(PTR_PTR_1126c3078);
  }
  else {
LAB_105bf16b8:
    (*(code *)ppuVar1[2])(ppuVar1,puVar2,lVar3 != 0);
  }
  _objc_release(puVar2);
LAB_105bf16d8:
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf178c; end: 105bf18ff;  */

void FUN_105bf178c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c069d00(param_2);
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  func_0x00010be8dd60(*(undefined8 *)(param_1 + 0x20));
  if ((param_3 & 1) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    func_0x00010c12eee0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3078,PTR_s__completeWithError_completion__112556740,0,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105bf1900; end: 105bf1a7b; -[SCLensRemoteAssetsUploadOperationManager _storeUploadOperationForBatchId:completion:] */

void FUN_105bf1900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x30);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x38);
    func_0x00010c0dff20(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126c3078;
      func_0x00010be0b360(PTR_PTR_1126c3078,param_2,1,
                          &PTR____CFConstantStringClassReference_110e219b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3680(PTR_PTR_1126c3078,param_2,puVar1,param_4);
      goto LAB_105bf1a10;
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar2);
  func_0x00010bec0da0(param_1,param_2,puVar1,param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105bf1a7c;
  puStack_50 = &UNK_110859a38;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010be99380(param_1,param_2,puVar1,&puStack_68);
  _objc_release(uStack_48);
LAB_105bf1a10:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf1a7c; end: 105bf1ae7;  */

void FUN_105bf1a7c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c3078;
    func_0x00010be0b360(PTR_PTR_1126c3078,param_2,3,&PTR____CFConstantStringClassReference_110e219d8
                        ,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bde3680(PTR_PTR_1126c3078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf1ae8; end: 105bf1c4f; -[SCLensRemoteAssetsUploadOperationManager _uploadOperationForBatchId:completion:] */

void FUN_105bf1ae8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_105bf1b70;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_105bf1b50;
    lVar1 = param_1;
    func_0x00010bec4320();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126c3078;
      func_0x00010be0b360(PTR_PTR_1126c3078);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010be89ec0(param_1);
      func_0x00010bec0da0(param_1);
      (**(code **)(param_4 + 0x10))(param_4,lVar1,0);
    }
    _objc_release(0);
  }
  else {
LAB_105bf1b50:
    (**(code **)(param_4 + 0x10))(param_4,lVar1,0);
  }
  _objc_release(lVar1);
LAB_105bf1b70:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf1c50; end: 105bf1d3f; -[SCLensRemoteAssetsUploadOperationManager _stopOwningIfNotStoredUploadOperationForBatchId:completion:] */

void FUN_105bf1c50(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126c3078;
    func_0x00010be0b360(PTR_PTR_1126c3078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3680(PTR_PTR_1126c3078);
    _objc_release(param_4);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x38));
    (**(code **)(param_4 + 0x10))(param_4,0);
    puVar1 = param_4;
  }
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf1d40; end: 105bf1e3f; -[SCLensRemoteAssetsUploadOperationManager _storedUploadOperationWithBatchId:error:] */

void FUN_105bf1d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c30c0);
  uVar1 = uVar3;
  func_0x00010c28e3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(0);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      _objc_retainAutorelease(0);
      uVar3 = 0;
      *param_4 = 0;
      goto LAB_105bf1e14;
    }
  }
  else {
    puVar2 = PTR_PTR_1126c30c0;
    _objc_opt_class(PTR_PTR_1126c30c0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) != 0) {
      _objc_retain(uVar1);
      uVar3 = uVar1;
      goto LAB_105bf1e14;
    }
  }
  uVar3 = 0;
LAB_105bf1e14:
  _objc_release(uVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bf1e40; end: 105bf1eff; -[SCLensRemoteAssetsUploadOperationManager _saveInStoreUploadOperation:completion:] */

void FUN_105bf1e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105bf1f00;
  puStack_48 = &UNK_1108dc9f8;
  uStack_38 = 0;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010c257d60(uVar1,param_2,param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 105bf1f00; end: 105bf1f3b;  */

void FUN_105bf1f00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bf1f3c; end: 105bf1f93; -[SCLensRemoteAssetsUploadOperationManager _registerUploadOperation:forBatchId:] */

void FUN_105bf1f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c1d0640(uVar1,param_2,param_3,param_4);
  func_0x00010c18b5e0(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf1f94; end: 105bf20ff; -[SCLensRemoteAssetsUploadOperationManager _startObservingUploadOperation:forBatchId:] */

void FUN_105bf1f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c28e3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(&PTR___NSConcreteGlobalBlock_1108dca28);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf2100; end: 105bf2103;  */

void FUN_105bf2100(void)

{
  return;
}



/* Entry: 105bf2104; end: 105bf233f;  */

void FUN_105bf2104(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105bf2340;
  puStack_80 = &UNK_1108dca48;
  _objc_copyWeak(auStack_68,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  _objc_retain(uVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105bf2374;
  puStack_b8 = &UNK_1108dca78;
  uStack_70 = uVar3;
  _objc_copyWeak(auStack_a0,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = uVar2;
  _objc_retain(uVar3);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x105bf23a8;
  puStack_f0 = &UNK_110848378;
  uStack_a8 = uVar3;
  _objc_copyWeak(auStack_d8,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_e8 = uVar2;
  _objc_retain(uVar3);
  uStack_e0 = uVar3;
  _objc_copyWeak(auStack_110,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0bd700(param_2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_110);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 105bf2340; end: 105bf240f;  */

void FUN_105bf2340(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bf2410; end: 105bf247f; -[SCLensRemoteAssetsUploadOperationManager _removeUploadOperationFromObservingWithBatchId:] */

void FUN_105bf2410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf86d40(lVar1);
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,0,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf2480; end: 105bf2497; +[SCLensRemoteAssetsUploadOperationManager _completeWithError:completion:] */

void FUN_105bf2480(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf2490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    return;
  }
  return;
}



/* Entry: 105bf2498; end: 105bf25a3; +[SCLensRemoteAssetsUploadOperationManager _errorWithStatusCode:description:subError:] */

void FUN_105bf2498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105bf25a4;
  puStack_58 = &UNK_1108dc998;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = (undefined1 *)ppuVar1;
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e21938,param_3,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf25a4; end: 105bf2653;  */

void FUN_105bf25a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = &uStack_40;
    puVar3 = &uStack_48;
    uVar4 = 1;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  }
  else {
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    puVar2 = &uStack_28;
    puVar3 = &uStack_38;
    uVar4 = 2;
    uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    lStack_20 = *(long *)(param_1 + 0x20);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar2,puVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105bf2654; end: 105bf26cb; -[SCLensRemoteAssetsUploadOperationManager .cxx_destruct] */

void FUN_105bf2654(long param_1)

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



/* Entry: 105bf26cc; end: 105bf27f3; -[SCSendingRemoteAssetsUploadManager uploadMediaReference:] */

void FUN_105bf26cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf16f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf0bc00();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105bf27f4;
      puStack_50 = &UNK_1108dcb08;
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      puStack_48 = puVar3;
      _objc_retain(puVar3);
      func_0x00010c297260(uVar5,param_2,&puStack_68,uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar7 = puVar3;
      func_0x00010bfbc3e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_48);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105bf27f4; end: 105bf293f;  */

void FUN_105bf27f4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126c30b0;
    func_0x00010be4b9e0(PTR_PTR_1126c30b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
  }
  else {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    puVar1 = PTR_PTR_1126c30b0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(puVar2);
    func_0x00010be81fa0(puVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105bf2940; end: 105bf2947; -[SCSendingRemoteAssetsUploadManager uploadMethod] */

undefined8 FUN_105bf2940(void)

{
  return 1;
}



/* Entry: 105bf2948; end: 105bf29af; -[SCSendingRemoteAssetsUploadManager sendCompletedForMediaReference:] */

void FUN_105bf2948(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf16f80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b340();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bf29b0; end: 105bf2a93; +[SCSendingRemoteAssetsUploadManager _processRemoteAssetUploadOperation:observerLifecycle:completion:] */

void FUN_105bf29b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_4 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105bf2a94;
    puStack_50 = &UNK_1108dcb38;
    _objc_retain(param_5);
    lStack_38 = param_5;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c2528e0(param_3,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
    _objc_release(lStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf2a94; end: 105bf2b53;  */

/* WARNING: Possible PIC construction at 0x000105bf2b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105bf2b38) */
/* WARNING: Removing unreachable block (ram,0x00010c24d960) */

void FUN_105bf2a94(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 < 2) {
    if (param_2 != 0) {
      if (param_2 != 1) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      goto code_r0x00010bec6b20;
    }
  }
  else if (param_2 != 2) {
    if (param_2 != 3) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126c30b0;
    func_0x00010be4b9e0(PTR_PTR_1126c30b0,3,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
code_r0x00010bec6b20:
                    /* WARNING: Could not recover jumptable at 0x00010bec6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30b0,PTR_s__subscribeOnAssetUploadOperation_11258f470,uVar2,uVar3,uVar4);
  return;
}



/* Entry: 105bf2b54; end: 105bf2c2f; +[SCSendingRemoteAssetsUploadManager _subscribeOnAssetUploadOperation:observerLifecycle:completion:] */

void FUN_105bf2b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    _objc_retain(param_4);
    func_0x00010c28e3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105bf2c30;
    puStack_40 = &UNK_1108dcbe8;
    _objc_retain(param_5);
    uVar1 = param_3;
    lStack_38 = param_5;
    func_0x00010c25ff60(param_3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(lStack_38);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105bf2c30; end: 105bf2cfb;  */

void FUN_105bf2c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bd700(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bf2cfc; end: 105bf2d03;  */

void FUN_105bf2cfc(void)

{
  return;
}



/* Entry: 105bf2d04; end: 105bf2d9b;  */

void FUN_105bf2d04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c30b0;
  func_0x00010be4b9e0(PTR_PTR_1126c30b0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf2d9c; end: 105bf2e6f; +[SCSendingRemoteAssetsUploadManager _lensRemoteAssetsResultWithSendStatus:] */

void FUN_105bf2d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0cd0;
  _objc_alloc(PTR_PTR_1126b0cd0);
  puVar3 = PTR_PTR_1126b0cd8;
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c280(puVar1,param_2,param_3,0,0,0,0,PTR____NSDictionary0__struct_11034ab58,0,0,
                      puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b0ce0;
  _objc_alloc(PTR_PTR_1126b0ce0);
  func_0x00010c059be0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf2e70; end: 105bf2eab; -[SCSendingRemoteAssetsUploadManager .cxx_destruct] */

void FUN_105bf2e70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf2eac; end: 105bf2f4f; -[SCLensRemoteAssetsStore initWithContentDelivery:dataWriter:] */

undefined1 *
FUN_105bf2eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec4d0;
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



/* Entry: 105bf2f50; end: 105bf3087; -[SCLensRemoteAssetsStore storeAsset:forId:withExpirationTimeInterval:completion:] */

void FUN_105bf2f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar2 = param_5;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105bf3088;
      puStack_60 = &UNK_110859a38;
      _objc_retain(param_6);
      puStack_58 = param_6;
      func_0x00010bec3d00(param_1,param_2,param_3,param_4,param_5,&puStack_78);
      puVar3 = puStack_58;
      goto LAB_105bf3050;
    }
    uVar4 = 0;
  }
  puVar1 = PTR_PTR_1126c3068;
  puVar3 = PTR_PTR_1126c3068;
  func_0x00010be0b2c0(PTR_PTR_1126c3068,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3680(puVar1,param_3,puVar3,param_6);
LAB_105bf3050:
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105bf3088; end: 105bf309f;  */

void FUN_105bf3088(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3068,PTR_s__completeWithError_completion__112556740,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf30a0; end: 105bf3153; -[SCLensRemoteAssetsStore storeAssetSynchronously:forId:error:] */

void FUN_105bf30a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_5 == (undefined8 *)0x0) goto LAB_105bf3138;
    uVar3 = 1;
  }
  else {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010bec3d20(param_1,param_2,param_3,param_4,param_5);
      goto LAB_105bf3138;
    }
    if (param_5 == (undefined8 *)0x0) goto LAB_105bf3138;
    uVar3 = 0;
  }
  puVar2 = PTR_PTR_1126c3068;
  func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_5 = puVar2;
LAB_105bf3138:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf3154; end: 105bf323f; -[SCLensRemoteAssetsStore assetExistsWithId:error:] */

undefined * FUN_105bf3154(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 == (undefined8 *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c3068;
      func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_4 = puVar4;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c3068;
    func_0x00010bde7ea0(PTR_PTR_1126c3068,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11d220(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c3068;
    func_0x00010bdcf860(PTR_PTR_1126c3068,param_2,uVar3,param_4);
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 105bf3240; end: 105bf33db; -[SCLensRemoteAssetsStore assetExistsWithId:completion:] */

void FUN_105bf3240(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126c3068;
      func_0x00010be0b2c0(PTR_PTR_1126c3068);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,puVar3);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c3068;
      func_0x00010bde7ea0(PTR_PTR_1126c3068);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      func_0x00010c11d240(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      puVar3 = param_4;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf33dc; end: 105bf34c3; -[SCLensRemoteAssetsStore removeAssetWithId:completion:] */

void FUN_105bf33dc(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126c3068;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126c3068;
    func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3680(puVar1,param_2,puVar3,param_4);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105bf34c4;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_4);
    puStack_38 = param_4;
    func_0x00010be8b660(param_1,param_2,param_3,&puStack_58);
    puVar3 = puStack_38;
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf34c4; end: 105bf34db;  */

void FUN_105bf34c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c3068,PTR_s__completeWithError_completion__112556740,0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf34dc; end: 105bf357f; -[SCLensRemoteAssetsStore assetForId:completion:] */

void FUN_105bf34dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126c3068;
      func_0x00010be0b2c0(PTR_PTR_1126c3068);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
      _objc_release(puVar2);
    }
    else {
      func_0x00010bdcf8a0(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bf3580; end: 105bf36af; -[SCLensRemoteAssetsStore _storeAsset:forId:withExpirationTimeInterval:completion:] */

void FUN_105bf3580(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c3068;
  _objc_retain(param_4);
  func_0x00010bde7ea0(puVar1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(param_1,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105bf36b0;
  puStack_60 = &UNK_110842508;
  uStack_58 = param_6;
  _objc_retain(param_6);
  func_0x00010c14a860(uVar3,param_3,param_4,puVar1,puVar2,1,&puStack_78);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105bf36b0; end: 105bf3727;  */

void FUN_105bf36b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  if ((int)param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf36dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  puVar1 = PTR_PTR_1126c3068;
  func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf3728; end: 105bf38af; -[SCLensRemoteAssetsStore _storeAssetSynchronously:forId:error:] */

void FUN_105bf3728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c3068;
  _objc_retain(param_3);
  func_0x00010bde7ea0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf55600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfc5880(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2bdac0(uVar4,param_2,param_3,lVar2,4,0);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    if (param_5 != (undefined8 *)0x0) {
      puVar7 = PTR_PTR_1126c3068;
      func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar7;
    }
  }
  else {
    lVar2 = lVar3;
    func_0x00010c126140(lVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_5 != (undefined8 *)0x0) && (lVar6 != 0)) {
      puVar7 = PTR_PTR_1126c3068;
      func_0x00010be0b2e0(PTR_PTR_1126c3068,param_2,5,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar7;
    }
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf38b0; end: 105bf3923; +[SCLensRemoteAssetsStore _assetExistsWithStatus:error:] */

undefined8 FUN_105bf38b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  if (1 < param_3 - 1U) {
    if (param_3 == 3) {
      return 0;
    }
    if (param_3 != 4) {
      return 1;
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar1 = PTR_PTR_1126c3068;
  func_0x00010be0b2c0(PTR_PTR_1126c3068,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_4 = puVar1;
  return 0;
}



/* Entry: 105bf3924; end: 105bf3a4f; -[SCLensRemoteAssetsStore _removeAssetWithId:completion:] */

void FUN_105bf3924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3068;
  func_0x00010bde7ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c12b940(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf3a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105bf3a50; end: 105bf3a63;  */

void FUN_105bf3a50(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf3a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105bf3a64; end: 105bf3b6b; -[SCLensRemoteAssetsStore _assetForId:completion:] */

void FUN_105bf3a64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c3068;
    func_0x00010bde7ea0(PTR_PTR_1126c3068,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105bf3b6c;
    puStack_40 = &UNK_110860410;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010c13e560(uVar3,param_2,puVar1,puVar2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lStack_38);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105bf3b6c; end: 105bf3cd3;  */

void FUN_105bf3b6c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfcaaa0();
  if (puVar1 != (undefined *)0x0) {
    if (puVar1 == (undefined *)0x3) {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    puVar1 = PTR_PTR_1126c3068;
    func_0x00010be0b2c0(PTR_PTR_1126c3068);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,0,puVar1);
    goto LAB_105bf3cb4;
  }
  puVar1 = param_2;
  func_0x00010bf58280();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    lVar5 = *(long *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126c3068;
    func_0x00010be0b2c0(PTR_PTR_1126c3068);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar5 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar6 = puVar3;
LAB_105bf3c6c:
    (*pcVar4)(lVar5,puVar2,puVar3);
    puVar2 = puVar6;
  }
  else {
    puVar2 = param_2;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    lVar5 = *(long *)(param_1 + 0x20);
    if (puVar3 != (undefined *)0x0) {
      pcVar4 = *(code **)(lVar5 + 0x10);
      puVar3 = (undefined *)0x0;
      puVar6 = puVar2;
      goto LAB_105bf3c6c;
    }
    puVar3 = PTR_PTR_1126c3068;
    func_0x00010be0b2c0(PTR_PTR_1126c3068);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,0,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_105bf3cb4:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bf3cd4; end: 105bf3ceb; +[SCLensRemoteAssetsStore _completeWithError:completion:] */

void FUN_105bf3cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf3ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    return;
  }
  return;
}



/* Entry: 105bf3cec; end: 105bf3dfb; +[SCLensRemoteAssetsStore _errorWithErrorCode:shimError:] */

void FUN_105bf3cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf98a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf98a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf98940(param_4);
  _objc_release(param_4);
  func_0x00010bf99260(puVar4,param_2,uVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = PTR_PTR_1126c3068;
  func_0x00010bdfafe0(PTR_PTR_1126c3068,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99280(puVar6,param_2,&PTR____CFConstantStringClassReference_110e21a18,puVar5,param_3
                      ,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105bf3dfc; end: 105bf3e6f; +[SCLensRemoteAssetsStore _errorWithErrorCode:] */

void FUN_105bf3dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c3068;
  func_0x00010bdfafe0(PTR_PTR_1126c3068);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,&PTR____CFConstantStringClassReference_110e21a18,puVar1,param_3
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bf3e70; end: 105bf3e97; +[SCLensRemoteAssetsStore _descriptionFromErrorCode:] */

undefined ** FUN_105bf3e70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_1108dcc18)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e21a58;
}



/* Entry: 105bf3e98; end: 105bf3f0b; +[SCLensRemoteAssetsStore _contentKeyWithAssetsId:] */

void FUN_105bf3e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bf3f0c; end: 105bf3f3b; -[SCLensRemoteAssetsStore .cxx_destruct] */

void FUN_105bf3f0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf3f3c; end: 105bf3fdb; -[SCLensRemoteAssetsUploadOperationStore initWithDocObjectContext:uploadOperationExpirationTimeInterval:] */

undefined8
FUN_105bf3f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar2 = &UNK_10f32fed8;
  _dispatch_queue_create(&UNK_10f32fed8,uVar1);
  _objc_release(uVar1);
  func_0x00010c00e140(param_1,param_2);
  _objc_release(param_4);
  _objc_release(puVar2);
  return param_2;
}



/* Entry: 105bf3fdc; end: 105bf408f; -[SCLensRemoteAssetsUploadOperationStore initWithDocObjectContext:uploadOperationExpirationTimeInterval:completionQueue:] */

undefined1 *
FUN_105bf3fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec4d8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105bf4090; end: 105bf423f; -[SCLensRemoteAssetsUploadOperationStore uploadOperationWithClass:forBatchId:error:] */

void FUN_105bf4090(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be75d20(PTR_PTR_1126c30a0);
    param_4 = 0;
    goto LAB_105bf4218;
  }
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105bf92e4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
LAB_105bf4158:
    func_0x00010be75d20(PTR_PTR_1126c30a0);
    param_4 = 0;
  }
  else {
    uVar2 = uVar3;
    func_0x00010bf9c880();
    func_0x00010bf60500(PTR_PTR_1126c30a0);
    if ((double)uVar2 < param_1) goto LAB_105bf4158;
    puVar4 = PTR_PTR_1126c30a0;
    func_0x00010be4ba00(PTR_PTR_1126c30a0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    _objc_opt_class();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010010fab4();
    _objc_release(uVar2);
    if ((uVar2 == 0) || ((uVar5 & 1) == 0)) {
      func_0x00010be75d20(PTR_PTR_1126c30a0);
      param_4 = 0;
    }
    else {
      func_0x00010c0eba60();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        func_0x00010be75d20(PTR_PTR_1126c30a0);
      }
      else {
        _objc_retain(param_4);
      }
      _objc_release(param_4);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
LAB_105bf4218:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 105bf4240; end: 105bf43eb; -[SCLensRemoteAssetsUploadOperationStore storeUploadOperation:completion:] */

void FUN_105bf4240(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010c13e120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf0af60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    func_0x00010bde36c0(PTR_PTR_1126c30a0,param_2,1,param_4);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105bf43ec;
    puStack_68 = &UNK_1108dcc40;
    _objc_retain(param_3);
    ppuVar4 = &puStack_80;
    lStack_60 = param_3;
    uStack_58 = uVar6;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105bf449c;
    puStack_98 = &UNK_110861bf8;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_105bf4540;
    puStack_c0 = &UNK_110842508;
    lStack_90 = param_3;
    ppuStack_88 = ppuVar4;
    _objc_retain(param_4);
    uStack_b8 = param_4;
    _objc_retain(ppuVar4);
    func_0x00010c0f8500(uVar6,param_2,&puStack_b0,uVar5,&puStack_d8);
    _objc_release(uVar6);
    _objc_release(uStack_b8);
    _objc_release(ppuStack_88);
    _objc_release(lStack_90);
    _objc_release(ppuVar4);
    _objc_release(lStack_60);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105bf43ec; end: 105bf449b;  */

void FUN_105bf43ec(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010bf9c880();
    func_0x00010bf60500(PTR_PTR_1126c30a0);
    puVar2 = PTR_PTR_1126c30a0;
    if (param_1 < (double)uVar1) {
      uVar1 = param_3;
      func_0x00010bf9c880(param_3);
      param_1 = (double)uVar1;
      goto LAB_105bf446c;
    }
  }
  func_0x00010bf60500(PTR_PTR_1126c30a0);
  param_1 = param_1 + *(double *)(param_2 + 0x28);
  puVar2 = PTR_PTR_1126c30a0;
LAB_105bf446c:
  func_0x00010be4ba20(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bf449c; end: 105bf453f;  */

void FUN_105bf449c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0af60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_105bf92e4(param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105bf9848(param_2,lVar2);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bf4540; end: 105bf4563;  */

void FUN_105bf4540(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c30a0,PTR_s__completeWithError_completion__112556740,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30a0,PTR_s__completeWithErrorCode_completio_112556750,6,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf4564; end: 105bf472f; -[SCLensRemoteAssetsUploadOperationStore removeUploadOperationForBatchId:completion:] */

void FUN_105bf4564(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bde36c0(PTR_PTR_1126c30a0);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    _objc_initWeak(auStack_88,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_4);
    _objc_retain(param_4);
    func_0x00010c0f8500(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf4730; end: 105bf47c7;  */

void FUN_105bf4730(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  FUN_105bf92e4(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde2dc0();
    _objc_release(param_1);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    FUN_105bf97bc(param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bf47c8; end: 105bf4803;  */

void FUN_105bf47c8(long param_1,int param_2)

{
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != '\x01') {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c30a0,PTR_s__completeWithError_completion__112556740,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30a0,PTR_s__completeWithErrorCode_completio_112556750,5,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf4804; end: 105bf4873; -[SCLensRemoteAssetsUploadOperationStore isExpiredUploadOperationsExists] */

bool FUN_105bf4804(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60500(PTR_PTR_1126c30a0);
  lVar2 = lVar1;
  FUN_105bf9568(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar2);
  return lVar1 != 0;
}



/* Entry: 105bf4874; end: 105bf49a7; -[SCLensRemoteAssetsUploadOperationStore flushWithCompletion:] */

void FUN_105bf4874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105bf49a8; end: 105bf4b03;  */

/* WARNING: Possible PIC construction at 0x000105bf4abc: Changing call to branch */

void FUN_105bf49a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  iVar4 = (int)lVar2;
  func_0x00010bf60500(PTR_PTR_1126c30a0);
  lVar2 = param_2;
  FUN_105bf9568();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = 2;
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        iVar4 = (int)*(undefined8 *)(lVar8 * 8);
        FUN_105bf97bc(param_2);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    if (*(char *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) != '\x01') {
      return;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126c30a0,PTR_s__completeWithError_completion__112556740,0);
      return;
    }
    uVar5 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30a0,PTR_s__completeWithErrorCode_completio_112556750,uVar5,uVar6);
  return;
}



/* Entry: 105bf4b04; end: 105bf4b3f;  */

void FUN_105bf4b04(long param_1,int param_2)

{
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != '\x01') {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c30a0,PTR_s__completeWithError_completion__112556740,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30a0,PTR_s__completeWithErrorCode_completio_112556750,5,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf4b40; end: 105bf4b8b; +[SCLensRemoteAssetsUploadOperationStore currentTimeInterval] */

undefined8 FUN_105bf4b40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105bf4b8c; end: 105bf4c27; -[SCLensRemoteAssetsUploadOperationStore _completeInQueueWithErrorCode:completion:] */

void FUN_105bf4b8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105bf4c28;
    puStack_48 = &UNK_110860cf8;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105bf4c28; end: 105bf4c3b;  */

void FUN_105bf4c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30a0,PTR_s__completeWithErrorCode_completio_112556750,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105bf4c3c; end: 105bf4c6f; +[SCLensRemoteAssetsUploadOperationStore _populateErrorWithCode:error:] */

void FUN_105bf4c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (param_4 != (undefined8 *)0x0) {
    func_0x00010be0b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = param_1;
  }
  return;
}



/* Entry: 105bf4c70; end: 105bf4cdb; +[SCLensRemoteAssetsUploadOperationStore _completeWithErrorCode:completion:] */

void FUN_105bf4c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c30a0;
  _objc_retain(param_4);
  func_0x00010be0b2c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3680(PTR_PTR_1126c30a0,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bf4cdc; end: 105bf4cf3; +[SCLensRemoteAssetsUploadOperationStore _completeWithError:completion:] */

void FUN_105bf4cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105bf4cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    return;
  }
  return;
}



/* Entry: 105bf4cf4; end: 105bf4d67; +[SCLensRemoteAssetsUploadOperationStore _errorWithErrorCode:] */

void FUN_105bf4cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126c30a0;
  func_0x00010bdfafe0(PTR_PTR_1126c30a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,&PTR____CFConstantStringClassReference_110e21b18,puVar1,param_3
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105bf4d68; end: 105bf4d8f; +[SCLensRemoteAssetsUploadOperationStore _descriptionFromErrorCode:] */

undefined ** FUN_105bf4d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_1108dcd10)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e21b38;
}



/* Entry: 105bf4d90; end: 105bf4e7f; +[SCLensRemoteAssetsUploadOperationStore _lensRemoteAssetsUploadOperationDataFromDataModel:] */

void FUN_105bf4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26a9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c30d0;
  _objc_alloc(PTR_PTR_1126c30d0);
  uVar1 = param_3;
  func_0x00010bf16f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff4320(puVar3,param_2,uVar1,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf4e80; end: 105bf4f6b;  */

void FUN_105bf4e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c30c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf0b260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf8cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252440(param_2);
  func_0x00010bdf7f60(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28e9a0(param_2);
  _objc_release(param_2);
  func_0x00010bdf7fe0(uVar4);
  func_0x00010bff4460(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bf4f6c; end: 105bf506b; +[SCLensRemoteAssetsUploadOperationStore _lensRemoteAssetsUploadOperationDataModelFromData:expirationTimestamp:] */

void FUN_105bf4f6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c26a9e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c30e0;
  _objc_alloc(PTR_PTR_1126c30e0);
  uVar1 = param_4;
  func_0x00010bf0af60(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bff7500(puVar3,param_3,uVar1,uVar2,(long)param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bf506c; end: 105bf5157;  */

void FUN_105bf506c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c30d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf0b260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf8cda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252440(param_2);
  func_0x00010bdf7de0(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28e9a0(param_2);
  _objc_release(param_2);
  func_0x00010bdf7e00(uVar4);
  func_0x00010bff4460(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bf5158; end: 105bf5167; +[SCLensRemoteAssetsUploadOperationStore _dataStateFromDataModelState:] */

uint FUN_105bf5158(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (3 < param_3) {
    param_3 = 1;
  }
  return param_3 & 0xff;
}



/* Entry: 105bf5168; end: 105bf5177; +[SCLensRemoteAssetsUploadOperationStore _dataModelStateFromDataState:] */

int FUN_105bf5168(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  
  cVar1 = (char)param_3;
  if (3 < param_3) {
    cVar1 = '\x01';
  }
  return (int)cVar1;
}



/* Entry: 105bf5178; end: 105bf5183; +[SCLensRemoteAssetsUploadOperationStore _dataModelUploadTypeFromDataUploadType:] */

bool FUN_105bf5178(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 105bf5184; end: 105bf518f; +[SCLensRemoteAssetsUploadOperationStore _dataUploadTypeFromDataModelUploadType:] */

bool FUN_105bf5184(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 105bf5190; end: 105bf51bf; -[SCLensRemoteAssetsUploadOperationStore .cxx_destruct] */

void FUN_105bf5190(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105bf51c0; end: 105bf5233; -[SCLensRemoteAssetsUploadOperationStoreCleanupJob initWithUploadOperationStore:] */

undefined1 * FUN_105bf51c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec4e0;
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



/* Entry: 105bf5234; end: 105bf5313; -[SCLensRemoteAssetsUploadOperationStoreCleanupJob processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_105bf5234(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(in_x5);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar3 = 2;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c072460();
    if ((uVar2 & 1) != 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_105bf5314;
      puStack_30 = &UNK_110859a38;
      _objc_retain(in_x5);
      uStack_28 = in_x5;
      func_0x00010bfb3360(uVar1,param_2,&puStack_48);
      _objc_release(uStack_28);
      goto LAB_105bf52f0;
    }
    uVar3 = 0;
  }
  func_0x00010bde37c0(PTR_PTR_1126c30e8,param_2,uVar3,0,in_x5);
LAB_105bf52f0:
  _objc_release(uVar1);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 105bf5314; end: 105bf533f;  */

void FUN_105bf5314(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = param_2 == 0;
  if (bVar1) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c30e8,PTR_s__completeWithResult_error_comple_112556790,!bVar1,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}


