/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c8dc78; end: 108c8dc97; -[SCLensProcessingAssetsUpdater updateRemoteAssetUploadSucceededForAssetId:effectId:assetURL:assetUploadMetadata:completion:] */

void FUN_108c8dc78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAssetUploadStatus_assetId_len_112638490,1,param_3
             ,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 108c8dc98; end: 108c8dcb7; -[SCLensProcessingAssetsUpdater updateRemoteAssetUploadFailedForAssetId:effectId:completion:] */

void FUN_108c8dc98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAssetUploadStatus_assetId_len_112638490,0,param_3
             ,param_4,0,0,param_5);
  return;
}



/* Entry: 108c8dcb8; end: 108c8dce7; -[SCLensProcessingAssetsUpdater .cxx_destruct] */

void FUN_108c8dcb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c8dce8; end: 108c8dd5b; -[SCLensProcessingInMemoryAssetsProvidingAdapter initWithInMemoryAssetsProvider:] */

undefined1 * FUN_108c8dce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdfa8;
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



/* Entry: 108c8dd5c; end: 108c8df0b; -[SCLensProcessingInMemoryAssetsProvidingAdapter remoteAssetPathForAsset:] */

void FUN_108c8dd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f510aa6;
  func_0x000107c31820();
  puVar2 = PTR_PTR_1126b9660;
  _objc_alloc(PTR_PTR_1126b9660);
  uVar9 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0b760(param_3);
  lVar4 = param_1;
  func_0x00010be4b9a0(param_1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf93e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c28f9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff43e0(puVar2,param_2,uVar9,lVar4,uVar3,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c129e40(uVar9,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 108c8df0c; end: 108c8e11b; -[SCLensProcessingInMemoryAssetsProvidingAdapter setRemoteAssetPath:forAsset:] */

void FUN_108c8df0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f510ac7;
  func_0x000107c31820();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ef08b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d80(param_1,param_2,param_4,puVar9);
  }
  else {
    puVar9 = PTR_PTR_1126b9660;
    _objc_alloc(PTR_PTR_1126b9660);
    uVar3 = param_4;
    func_0x00010bf0b260(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf0b760(param_4);
    lVar2 = param_1;
    func_0x00010be4b9a0(param_1,param_2,uVar4);
    uVar4 = param_4;
    func_0x00010bf12ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf93ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf93e80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c28f9a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff43e0(puVar9,param_2,uVar3,lVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c1ea220(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar9);
  }
  _objc_release(puVar9);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8e11c; end: 108c8e2d3; -[SCLensProcessingInMemoryAssetsProvidingAdapter invalidateAsset:error:] */

void FUN_108c8e11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f510b0b;
  func_0x000107c31820();
  puVar2 = PTR_PTR_1126b9660;
  _objc_alloc(PTR_PTR_1126b9660);
  uVar3 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf0b760(param_3);
  lVar5 = param_1;
  func_0x00010be4b9a0(param_1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf93e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c28f9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff43e0(puVar2,param_2,uVar3,lVar5,uVar4,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c069d80(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8e2d4; end: 108c8e2f7; -[SCLensProcessingInMemoryAssetsProvidingAdapter _lensProcessingAssetTypeFromLSAType:] */

undefined8 FUN_108c8e2d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 6) {
    return *(undefined8 *)(&UNK_10df9f488 + (param_3 - 2U) * 8);
  }
  return 3;
}



/* Entry: 108c8e2f8; end: 108c8e303; -[SCLensProcessingInMemoryAssetsProvidingAdapter .cxx_destruct] */

void FUN_108c8e2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c8e304; end: 108c8e357; -[SCLensProcessingInMemoryAssetsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8e304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779588);
  _objc_destroyWeak(param_1 + _DAT_11277958c);
  _objc_destroyWeak(param_1 + _DAT_112779594);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779590,0);
  return;
}



/* Entry: 108c8e358; end: 108c8e4c3; -[SCLensProcessingAssetsWorkflow initWithLensDataFetcher:lensEffectApplicator:assetsUploadManager:assetLogger:circumstanceEngine:dirtyFrameProvider:performer:] */

undefined1 *
FUN_108c8e358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fdfb0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c8e4c4; end: 108c8e547; -[SCLensProcessingAssetsWorkflow fetchAsset:effectId:completion:] */

void FUN_108c8e4c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar1);
  func_0x00010bee7800(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8e548; end: 108c8e5a7; -[SCLensProcessingAssetsWorkflow cancelAssetsUploadFor:] */

void FUN_108c8e548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256540();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8e5a8; end: 108c8e7b3; -[SCLensProcessingAssetsWorkflow uploadAsset:effectId:batchId:assetPath:deleteAfterUploading:] */

void FUN_108c8e5a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126db5d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar8 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf93e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be8b120(param_1,param_2,param_3);
  lVar5 = param_1;
  func_0x00010be4a7a0(param_1,param_2,param_3);
  func_0x00010bff43a0(puVar1,param_2,uVar8,param_6,uVar2,uVar3,param_4,param_5,lVar4,lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar8);
  puVar6 = PTR_PTR_1126ae6b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108c8e7b4;
  puStack_88 = &UNK_1109f4b28;
  uStack_80 = uVar8;
  puStack_78 = puVar1;
  uStack_70 = param_3;
  uStack_68 = param_7;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(uVar8);
  func_0x00010bf54280(puVar6,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c8e7b4; end: 108c8e943;  */

void FUN_108c8e7b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108c8e944;
  uStack_70 = 0x108c8e954;
  uStack_68 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c125d40(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c8e944; end: 108c8e95b;  */

void FUN_108c8e944(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c8e95c; end: 108c8ea53;  */

void FUN_108c8e95c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010c28e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar1 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 108c8ea54; end: 108c8eb9f;  */

void FUN_108c8ea54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108c8e944;
  uStack_60 = 0x108c8e954;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bd700(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c8eba0; end: 108c8ec6b;  */

void FUN_108c8eba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0b260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    puVar1 = PTR_PTR_1126db5e0;
    _objc_alloc();
    func_0x00010c04f3a0();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c8ec6c; end: 108c8ed0f;  */

void FUN_108c8ec6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf0b260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    puVar1 = PTR_PTR_1126db5e0;
    _objc_alloc();
    func_0x00010c04f380();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108c8ed10; end: 108c8ed2b;  */

bool FUN_108c8ed10(undefined8 param_1,long param_2)

{
  return param_2 != 0;
}



/* Entry: 108c8ed2c; end: 108c8ed2f; -[SCLensProcessingAssetsWorkflow didFailToSetAssetWith:] */

void FUN_108c8ed2c(void)

{
  return;
}



/* Entry: 108c8ed30; end: 108c8ed5b; -[SCLensProcessingAssetsWorkflow didSetAsset:] */

void FUN_108c8ed30(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0bb400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c8ed5c; end: 108c8edbb; -[SCLensProcessingAssetsWorkflow didValidateAssetWithValid:error:] */

void FUN_108c8ed5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec8c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c8edbc; end: 108c8f9f7; -[SCLensProcessingAssetsWorkflow _validateAsset:effectId:completion:] */

void FUN_108c8edbc(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  puVar1 = PTR_PTR_1126bd478;
  _objc_opt_new(PTR_PTR_1126bd478);
  lVar2 = param_3;
  func_0x00010bf0b760();
  if (lVar2 == 7) {
    puVar5 = param_1;
    func_0x00010be97200();
    if ((int)puVar5 != 0) {
      lVar2 = param_3;
      func_0x00010bf0b260(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bdfbda0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
        func_0x00010c136b80();
        if (puVar5 == (undefined *)0x6) {
          _objc_retain(puVar6);
          puVar5 = puVar6;
        }
        else {
          puVar7 = PTR_PTR_1126bd478;
          func_0x00010c08ff00(PTR_PTR_1126bd478);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c2b71c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
LAB_108c8f400:
        func_0x00010be0f9c0(param_1);
        goto LAB_108c8f418;
      }
    }
    lVar2 = param_3;
    func_0x00010bf0b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af9a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2bbd20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b71c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0f9c0(param_1);
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf0b760();
    if (lVar2 == 9) {
LAB_108c8eed4:
      _objc_release(param_3);
LAB_108c8eedc:
      lVar2 = param_3;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar3 != 0) {
        puVar6 = PTR_PTR_1126bd478;
        func_0x00010c08fea0(PTR_PTR_1126bd478);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bf0b260(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2af9a0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010bf0b760(param_3);
        func_0x00010c2bbd20(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b71c0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bf93ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ad300(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = param_3;
        func_0x00010bf93e80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ad2e0(puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = param_3;
        func_0x00010bf0b760();
        if ((lVar2 == 9) || (lVar2 = param_3, func_0x00010bf0b760(), lVar2 == 10)) {
          puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
          lVar2 = param_3;
          func_0x00010c28f9a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          func_0x00010c2bc200(puVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar5);
        }
        puVar5 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108c8f400;
      }
      if (param_5 == 0) goto LAB_108c8f424;
      _objc_retain(param_3);
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(puVar5);
      (**(code **)(param_5 + 0x10))(param_5,0,puVar6);
    }
    else {
      lVar2 = param_3;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        _objc_release(lVar2);
        goto LAB_108c8eed4;
      }
      lVar3 = param_3;
      func_0x00010bf93e80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_3);
      if (lVar4 != 0) goto LAB_108c8eedc;
      lVar2 = param_3;
      func_0x00010bf0b760();
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (lVar2 == 10) {
        lVar2 = param_3;
        func_0x00010c28f9a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        puVar5 = puVar6;
        func_0x00010bfe4420(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760(param_3);
        puVar8 = param_1;
        func_0x00010be3fc20();
        _objc_release(puVar5);
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (((ulong)puVar8 & 1) != 0) {
          puVar5 = PTR_PTR_1126bd478;
          func_0x00010c08fea0(PTR_PTR_1126bd478);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010bf0b260(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2af9a0(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar2);
          func_0x00010bf0b760(param_3);
          func_0x00010c2bbd20(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b71c0(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2bc200(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010bf38a80(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa6a0(puVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = param_3;
          func_0x00010bf93ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            lVar2 = param_3;
            func_0x00010bf93ec0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ad300(puVar5);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
          }
          lVar2 = param_3;
          func_0x00010bf93e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            lVar2 = param_3;
            func_0x00010bf93e80(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ad2e0(puVar5);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
          }
          puVar7 = puVar5;
          func_0x00010bf21f60(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be0f9c0(param_1);
          _objc_release(puVar7);
          goto LAB_108c8f418;
        }
        if (param_5 != 0) {
          _objc_retain(param_3);
          func_0x00010c14de00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
          _objc_release(puVar7);
          (**(code **)(param_5 + 0x10))(param_5,0,puVar5);
          goto LAB_108c8f418;
        }
        goto LAB_108c8f41c;
      }
      puVar5 = param_1 + 0x18;
      _objc_loadWeakRetained();
      puVar6 = puVar5;
      func_0x00010bf5e060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_retain(param_4);
      puVar5 = puVar6;
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      puVar7 = puVar5;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 == (undefined *)0x0) {
        lVar2 = param_3;
        func_0x00010bf0b760();
        puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (lVar2 == 3) {
          lVar2 = param_3;
          func_0x00010c28f9a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          puVar10 = puVar8;
          func_0x00010bfe4420(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b760(param_3);
          puVar9 = param_1;
          func_0x00010be3fc20();
          _objc_release(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (((ulong)puVar9 & 1) == 0) {
            if (param_5 == 0) goto LAB_108c8f59c;
            _objc_retain(param_3);
            func_0x00010c14de00(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_3);
            _objc_release(puVar10);
            (**(code **)(param_5 + 0x10))(param_5,0,puVar9);
          }
          else {
            puVar9 = PTR_PTR_1126bd478;
            func_0x00010c08fea0(PTR_PTR_1126bd478);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010bf0b260(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2af9a0(puVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
            func_0x00010bf0b760(param_3);
            func_0x00010c2bbd20(puVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b71c0(puVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bc200(puVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010bf38a80(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2aa6a0(puVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
            puVar10 = puVar9;
            func_0x00010bf21f60(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be0f9c0(param_1);
            _objc_release(puVar10);
          }
          _objc_release(puVar9);
          goto LAB_108c8f59c;
        }
        lVar2 = param_3;
        func_0x00010bf12ea0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        if (lVar3 == 0) {
          _objc_release(lVar2);
        }
        else {
          lVar3 = param_3;
          func_0x00010bf0b760();
          _objc_release(lVar2);
          if (lVar3 == 8) {
            puVar8 = PTR_PTR_1126bd478;
            func_0x00010c08fea0(PTR_PTR_1126bd478);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010bf0b260(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2af9a0(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = param_3;
            func_0x00010bf12ea0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a8ea0(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar2);
            func_0x00010c2b71c0(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bbd20(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar10 = puVar8;
            func_0x00010bf21f60(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be0f9c0(param_1);
            _objc_release(puVar10);
            goto LAB_108c8f59c;
          }
        }
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (param_5 != 0) {
          _objc_retain(param_3);
          func_0x00010c14de00(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
          _objc_release(puVar10);
          (**(code **)(param_5 + 0x10))(param_5,0,puVar8);
          goto LAB_108c8f59c;
        }
      }
      else {
        puVar10 = PTR_PTR_1126bd478;
        func_0x00010c08ff00(PTR_PTR_1126bd478);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar10;
        func_0x00010c2b71c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar10);
        func_0x00010be0f9c0(param_1);
LAB_108c8f59c:
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_release(puVar5);
      puVar5 = param_4;
LAB_108c8f418:
      _objc_release(puVar5);
    }
  }
LAB_108c8f41c:
  _objc_release(puVar6);
LAB_108c8f424:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8f9f8; end: 108c8fb13;  */

void FUN_108c8f9f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0b8380(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c8fb14; end: 108c8fc4f; -[SCLensProcessingAssetsWorkflow _deviceDependentManifestAssetForId:effectId:] */

void FUN_108c8fb14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108c8fc50;
  puStack_60 = &UNK_110abffd8;
  uStack_58 = param_4;
  _objc_retain(param_4);
  lVar3 = lVar2;
  func_0x00010bfb2660(lVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108c8fcd0;
  puStack_88 = &UNK_110abffa8;
  uStack_80 = param_3;
  _objc_retain(param_3);
  lVar4 = lVar3;
  func_0x00010bfb2040(lVar3,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(lVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108c8fc50; end: 108c8fd4b;  */

void FUN_108c8fc50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0b8380(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c8fd4c; end: 108c8fffb; -[SCLensProcessingAssetsWorkflow _fetchAsset:effectId:completion:] */

void FUN_108c8fd4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(param_4);
  lVar2 = lVar3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) && (lVar4 = param_3, func_0x00010c27dd80(), lVar4 != 7)) {
LAB_108c8ff34:
    if (param_5 == (undefined *)0x0) goto LAB_108c8ffa8;
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    (**(code **)(param_5 + 0x10))(param_5,0,puVar10);
  }
  else {
    lVar4 = param_3;
    func_0x00010c27dd80();
    if (lVar4 == 7) {
      bVar1 = false;
    }
    else {
      lVar4 = param_3;
      func_0x00010c27dd80();
      bVar1 = lVar4 != 8;
    }
    lVar4 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      _objc_release(lVar4);
      goto LAB_108c8ff34;
    }
    lVar5 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((bool)(lVar7 == 0 & bVar1)) goto LAB_108c8ff34;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010bfa4f00(uVar8);
    _objc_release(uVar8);
    puVar10 = param_5;
  }
  _objc_release(puVar10);
LAB_108c8ffa8:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c8fffc; end: 108c90043;  */

undefined8 FUN_108c8fffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c90044; end: 108c90057;  */

void FUN_108c90044(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c90050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108c90058; end: 108c9006f; -[SCLensProcessingAssetsWorkflow _arbitraryAssetDownloadEnabled] */

void FUN_108c90058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ef08d8,0,0);
  return;
}



/* Entry: 108c90070; end: 108c90087; -[SCLensProcessingAssetsWorkflow _reuseManifestForDeviceDependentAssetEnabled] */

void FUN_108c90070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ef08f8,0,0);
  return;
}



/* Entry: 108c90088; end: 108c900ab; -[SCLensProcessingAssetsWorkflow _remoteAssetUploadTypeForAsset:] */

bool FUN_108c90088(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0b760(param_3);
  return param_3 - 9U < 2;
}



/* Entry: 108c900ac; end: 108c90103; -[SCLensProcessingAssetsWorkflow _lensCompressionTypeForAsset:] */

bool FUN_108c900ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf0b760();
  if (lVar2 == 9) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf0b760(param_3);
    bVar1 = lVar2 != 10;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108c90104; end: 108c90193; -[SCLensProcessingAssetsWorkflow _isDomainAllowlisted:type:] */

ulong FUN_108c90104(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) ||
     ((param_4 == 10 && (uVar2 = param_1, func_0x00010bdcf120(), (uVar2 & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    func_0x00010bdca420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf4b900();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108c90194; end: 108c9021b; -[SCLensProcessingAssetsWorkflow _allowlistedDomains] */

void FUN_108c90194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c9021c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e3b0 != -1) {
    func_0x000107c27d9c(0x11372e3b0,&puStack_48);
  }
  uVar1 = uRam000000011372e3a8;
  _objc_retain(uRam000000011372e3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c9021c; end: 108c90323;  */

void FUN_108c9021c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c0309a0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c25d780(uVar3,param_2,&PTR____CFConstantStringClassReference_110f630f8,
                      &PTR____CFConstantStringClassReference_110f63118,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010bff4000();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc();
  func_0x00010c045740();
  uVar1 = puRam000000011372e3a8;
  puRam000000011372e3a8 = puVar6;
  _objc_release(uVar1);
  func_0x00010c280520(puRam000000011372e3a8,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108c90324; end: 108c90387; -[SCLensProcessingAssetsWorkflow .cxx_destruct] */

void FUN_108c90324(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c90388; end: 108c9038f; -[SCLensProcessingInMemoryAssetsWorkflow _clearCacheNotification:] */

void FUN_108c90388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_clearCache_1125ac488);
  return;
}



/* Entry: 108c90390; end: 108c9055f; -[SCLensProcessingInMemoryAssetsWorkflow didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_108c90390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar3 = uVar1;
    func_0x00010c08fa60();
    if (uVar3 != 0) {
      puVar2 = PTR_PTR_1126b9660;
      _objc_alloc();
      uVar4 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      uVar5 = param_3;
      func_0x00010bf12ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bf93ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf93e80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff43e0(puVar2);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010c1ea220(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c90560; end: 108c90563; -[SCLensProcessingInMemoryAssetsWorkflow didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108c90560(void)

{
  return;
}



/* Entry: 108c90564; end: 108c90567; -[SCLensProcessingInMemoryAssetsWorkflow didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_108c90564(void)

{
  return;
}



/* Entry: 108c90568; end: 108c9056b; -[SCLensProcessingInMemoryAssetsWorkflow didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108c90568(void)

{
  return;
}



/* Entry: 108c9056c; end: 108c9056f; -[SCLensProcessingInMemoryAssetsWorkflow willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_108c9056c(void)

{
  return;
}



/* Entry: 108c90570; end: 108c90573; -[SCLensProcessingInMemoryAssetsWorkflow willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108c90570(void)

{
  return;
}



/* Entry: 108c90574; end: 108c90577; -[SCLensProcessingInMemoryAssetsWorkflow willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_108c90574(void)

{
  return;
}



/* Entry: 108c90578; end: 108c9057b; -[SCLensProcessingInMemoryAssetsWorkflow willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_108c90578(void)

{
  return;
}



/* Entry: 108c9057c; end: 108c9057f; -[SCLensProcessingInMemoryAssetsWorkflow willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_108c9057c(void)

{
  return;
}



/* Entry: 108c90580; end: 108c905af; -[SCLensProcessingInMemoryAssetsWorkflow .cxx_destruct] */

void FUN_108c90580(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c905b0; end: 108c9085f; -[SCLensProcessingBitmojiEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c905b0(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126db5e8;
  _objc_alloc();
  lVar2 = param_1;
  FUN_108c90860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_108c90860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1b120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127795d4;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar15;
  func_0x00010bf506a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127795c4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010c08f040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127795c8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000108c90884();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127795d0;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000108c90884();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127795d8;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar20;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022700(puVar1,param_2,lVar3,lVar5,lVar6,lVar7,lVar8,lVar10,lVar11,lVar13,lVar14);
  uVar19 = *(undefined8 *)(param_1 + _DAT_1127795bc);
  *(undefined **)(param_1 + _DAT_1127795bc) = puVar1;
  _objc_release(uVar19);
  _objc_release(lVar14);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108c90860; end: 108c908a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c90860(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127795c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c908a8; end: 108c9092b; -[SCLensProcessingBitmojiEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c908a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127795d8);
  _objc_destroyWeak(param_1 + _DAT_1127795d4);
  _objc_destroyWeak(param_1 + _DAT_1127795d0);
  _objc_destroyWeak(param_1 + _DAT_1127795cc);
  _objc_destroyWeak(param_1 + _DAT_1127795c8);
  _objc_destroyWeak(param_1 + _DAT_1127795c4);
  _objc_destroyWeak(param_1 + _DAT_1127795c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127795bc,0);
  return;
}



/* Entry: 108c9092c; end: 108c90c4b; -[SCLensProcessingBitmojiProvider initWithLens:bitmojiComponent:conversationMetadataProvider:lensDataFetcher:lensUserProvider:bitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiAvatarProvider:snapchattersSyncFetcher:] */

undefined8 *
FUN_108c9092c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126fdfc0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    func_0x00010bef9980(puVar1[1]);
    uVar2 = puVar1[1];
    func_0x00010c06d400();
    func_0x00010c170680(uVar2);
    func_0x00010c170680(puVar1[1]);
    puVar3 = puVar1;
    func_0x00010c06d400();
    if ((int)puVar3 != 0) {
      uVar6 = puVar1[1];
      uVar4 = puVar1[3];
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf1c5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170aa0(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar6 = puVar1[1];
      uVar4 = puVar1[3];
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf1c5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fbdc0(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4d460(puVar1);
    _objc_release(uVar2);
    func_0x00010bec7340(puVar1);
  }
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



/* Entry: 108c90c4c; end: 108c90cc7; -[SCLensProcessingBitmojiProvider isBitmojiAvailable] */

bool FUN_108c90c4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 108c90cc8; end: 108c90d0f; -[SCLensProcessingBitmojiProvider dealloc] */

void FUN_108c90cc8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126fdfc0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108c90d10; end: 108c90ea3; -[SCLensProcessingBitmojiProvider bitmojiComponent:didRequestBitmojiWithId:avatarId:friendAvatarId:bitmojiType:scale:isRequestingSelfie:] */

void FUN_108c90d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined **ppuVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108c90ea4;
  puStack_a8 = &UNK_110ac0038;
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_70 = param_9;
  ppuVar1 = &puStack_c0;
  uStack_90 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retainBlock();
  func_0x00010bdd4660(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c90ea4; end: 108c90f63;  */

void FUN_108c90ea4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c11f420(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c171120(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c90f64; end: 108c910a7; -[SCLensProcessingBitmojiProvider lensComponentDidRequestBitmojiInfo:] */

void FUN_108c90f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c170aa0(param_3,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1fbdc0(param_3,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010bfb7be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fa40(param_3,param_2,param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c910a8; end: 108c911a7; -[SCLensProcessingBitmojiProvider _subscribeToAvatarUpdates] */

void FUN_108c910a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108c911a8; end: 108c911ef;  */

void FUN_108c911a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c911f0; end: 108c9124f; -[SCLensProcessingBitmojiProvider _updateBitmojiComponentWithAvatarId:] */

void FUN_108c911f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  uVar1 = 1;
  if (lVar2 == 0) {
    uVar1 = 2;
  }
  func_0x00010c170680(*(undefined8 *)(param_1 + 8),param_2,uVar1,0,0);
  func_0x00010c170aa0(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c91250; end: 108c91797; -[SCLensProcessingBitmojiProvider _bitmojiComponent:didRequestBitmojiWithId:avatarId:friendAvatarId:bitmojiType:scale:isRequestingSelfie:completion:] */

void FUN_108c91250(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong in_stack_00000008;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000008);
  uVar5 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_70,param_1);
  uVar4 = param_5;
  if (param_7 < 2) {
    if (param_7 == 0) {
      if (param_5 == 0) {
        uVar1 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf1c5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf51e00();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        _objc_retain(param_5);
      }
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_108c91798;
      puStack_98 = &UNK_11097ded0;
      _objc_retain(param_5);
      uStack_90 = param_5;
      _objc_retain(uVar4);
      uStack_88 = uVar4;
      _objc_retain(uVar5);
      uStack_80 = uVar5;
      _objc_retain(in_stack_00000008);
      uStack_78 = in_stack_00000008;
      func_0x00010be4caa0(param_1);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      uVar1 = uStack_90;
    }
    else {
      if (param_7 != 1) goto LAB_108c91700;
      if (param_5 == 0) {
        uVar4 = param_1;
        func_0x00010bfb7be0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_5);
      }
      uVar1 = param_1;
      func_0x00010be409e0();
      if ((uVar1 & 1) == 0) {
        (**(code **)(in_stack_00000008 + 0x10))(in_stack_00000008,0,uVar4);
        goto LAB_108c916f8;
      }
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x108c91850;
      puStack_d8 = &UNK_11086f2f8;
      _objc_retain(param_5);
      uStack_d0 = param_5;
      _objc_retain(uVar4);
      uStack_c8 = uVar4;
      _objc_copyWeak(auStack_b8,auStack_70);
      _objc_retain(in_stack_00000008);
      uStack_c0 = in_stack_00000008;
      func_0x00010be4caa0(param_1);
      _objc_release(uStack_c0);
      _objc_destroyWeak(auStack_b8);
      _objc_release(uStack_c8);
      uVar1 = uStack_d0;
    }
LAB_108c916f4:
    _objc_release(uVar1);
  }
  else {
    if (param_7 == 2) {
      if (param_5 == 0) {
        uVar1 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf1c5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf51e00();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (param_6 != 0) goto LAB_108c913a4;
LAB_108c915dc:
        uVar1 = param_1;
        func_0x00010bfb7be0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_5);
        if (param_6 == 0) goto LAB_108c915dc;
LAB_108c913a4:
        _objc_retain(param_6);
        uVar1 = param_6;
      }
      uVar2 = param_1;
      func_0x00010be409e0();
      if ((uVar2 & 1) == 0) {
        (**(code **)(in_stack_00000008 + 0x10))(in_stack_00000008,0,uVar4);
      }
      else {
        _objc_copyWeak(auStack_f8,auStack_70);
        _objc_retain(param_6);
        _objc_retain(param_5);
        _objc_retain(uVar4);
        _objc_retain(uVar5);
        _objc_retain(uVar1);
        _objc_retain(in_stack_00000008);
        func_0x00010be4d440(param_1);
        _objc_release(in_stack_00000008);
        _objc_release(uVar1);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(param_5);
        _objc_release(param_6);
        _objc_destroyWeak(auStack_f8);
      }
      goto LAB_108c916f4;
    }
    if (param_7 != 3) goto LAB_108c91700;
    _objc_retain(in_stack_00000008);
    _objc_retain(param_5);
    func_0x00010be4caa0(param_1);
    _objc_release(param_5);
    uVar4 = in_stack_00000008;
  }
LAB_108c916f8:
  _objc_release(uVar4);
LAB_108c91700:
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_release(in_stack_00000008);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c91798; end: 108c918e7;  */

void FUN_108c91798(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (iVar1 == 0) goto LAB_108c91838;
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
LAB_108c91838:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c918e8; end: 108c91a3b;  */

void FUN_108c918e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfb7be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar2);
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar1 == 0 || lVar2 == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_108c91a10;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (iVar1 == 0) goto LAB_108c91a10;
  }
  else {
    if (lVar2 == 0) goto LAB_108c91a10;
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) goto LAB_108c91a10;
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x30));
LAB_108c91a10:
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c91a3c; end: 108c91a4b;  */

void FUN_108c91a3c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108c91a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108c91a4c; end: 108c91cef; -[SCLensProcessingBitmojiProvider _isFriendmojiSharingAllowedForFriendAvatarId:] */

undefined *
FUN_108c91a4c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
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
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar14 = param_3;
  func_0x00010c08fa60();
  iVar13 = (int)param_6;
  if (puVar14 != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_3;
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar1);
    iVar13 = (int)param_6;
    if (((ulong)puVar15 & 1) == 0) {
      puVar14 = param_1;
      func_0x00010bfb7be0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar14;
      func_0x00010c08fa60();
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar14);
      }
      else {
        puVar2 = param_1;
        func_0x00010bfb7be0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = param_3;
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(puVar14);
        iVar13 = (int)param_6;
        if (((ulong)puVar15 & 1) != 0) goto LAB_108c91b4c;
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar4 = *(long *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf005e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      param_4 = auStack_e8;
      lVar4 = lVar5;
      func_0x00010bf52a60();
      iVar13 = (int)param_6;
      puVar14 = (undefined *)0x0;
      if (lVar4 != 0) {
        lVar16 = *plStack_120;
        do {
          lVar17 = 0;
          do {
            if (*plStack_120 != lVar16) {
              _objc_enumerationMutation(lVar5);
            }
            puVar15 = *(undefined **)(lStack_128 + lVar17 * 8);
            puVar14 = puVar15;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar14;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            puVar12 = (undefined8 *)param_3;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            _objc_release(puVar14);
            iVar13 = (int)param_6;
            if (((ulong)puVar2 & 1) != 0) {
              func_0x00010bfb8280();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar15;
              func_0x00010c261440();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar3;
              func_0x00010bf0a8a0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar2;
              func_0x00010c06d440();
              _objc_release(puVar2);
              _objc_release(puVar3);
              _objc_release(puVar15);
              goto LAB_108c91ca0;
            }
            lVar17 = lVar17 + 1;
          } while (lVar4 != lVar17);
          param_4 = auStack_e8;
          lVar4 = lVar5;
          puVar12 = &uStack_130;
          func_0x00010bf52a60();
          iVar13 = (int)param_6;
        } while (lVar4 != 0);
        puVar14 = (undefined *)0x0;
      }
LAB_108c91ca0:
      _objc_release(lVar5);
      goto LAB_108c91ca8;
    }
  }
LAB_108c91b4c:
  puVar12 = (undefined8 *)puVar3;
  puVar14 = (undefined *)0x1;
LAB_108c91ca8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar6 = param_4;
  func_0x00010c08fa60();
  if (puVar6 == (undefined1 *)0x0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    if (iVar13 == 0) {
      puVar14 = (undefined *)puVar12;
      func_0x00010b0e4c28(puVar12,0,param_4,0,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bd478;
      func_0x00010c08fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c2af9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c2ad1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar15;
      func_0x00010c2b71c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c2bbd20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2b78c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar15);
      _objc_release(puVar2);
      _objc_release(puVar3);
      uVar11 = *(undefined8 *)(param_3 + 0x10);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar11;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      func_0x00010bfa4f00(uVar11);
      _objc_release(uVar7);
      _objc_release(uVar11);
      _objc_release(param_7);
      _objc_release(puVar10);
    }
    else {
      puVar14 = PTR_PTR_1126b4bc0;
      _objc_alloc(PTR_PTR_1126b4bc0);
      func_0x00010c05ace0();
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      func_0x00010bfaa020(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(param_7);
    }
    _objc_release(puVar14);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar12);
  return (undefined *)puVar12;
}



/* Entry: 108c91cf0; end: 108c91fe7; -[SCLensProcessingBitmojiProvider _loadBitmojiStickerWithId:avatarId:scale:isRequestingSelfie:completion:] */

void FUN_108c91cf0(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,int param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    if (param_6 == 0) {
      puVar3 = param_3;
      func_0x00010b0e4c28(param_3,0,param_4,0,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bd478;
      func_0x00010c08fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2af9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2ad1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2b71c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2bbd20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2b78c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      func_0x00010bfa4f00(uVar11);
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(param_7);
      _objc_release(puVar10);
    }
    else {
      puVar3 = PTR_PTR_1126b4bc0;
      _objc_alloc(PTR_PTR_1126b4bc0);
      func_0x00010c05ace0();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      func_0x00010bfaa020(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(param_7);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c91fe8; end: 108c9200f;  */

void FUN_108c91fe8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c91ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108c92010; end: 108c92267; -[SCLensProcessingBitmojiProvider _loadFriendmojiStickerWithId:avatarId:friendAvatarId:scale:completion:] */

void FUN_108c92010(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010b0e4c28(param_3,0,param_4,param_5,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd478;
    func_0x00010c08fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2af9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ad1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2b71c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2bbd20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2b78c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    func_0x00010bfa4f00(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(param_7);
    _objc_release(puVar9);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c92268; end: 108c9227b;  */

void FUN_108c92268(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108c92274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108c9227c; end: 108c92333; -[SCLensProcessingBitmojiProvider _loadFriendsDataWithConversationDataProvider:] */

void FUN_108c9227c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf5fda0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108c92334; end: 108c9241b;  */

void FUN_108c92334(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfece40();
  if ((param_2 == 0) || (lVar1 == 0x7fffffffffffffff)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bea4180();
  }
  else {
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = lVar1;
    func_0x00010bf1bae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea4180(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c9241c; end: 108c9251f;  */

long FUN_108c9241c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar4 = param_2;
      func_0x00010bfb8280(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c06d440();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar7;
}



/* Entry: 108c92520; end: 108c925db; -[SCLensProcessingBitmojiProvider _setFriendAvatarId:] */

void FUN_108c92520(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c19fa20(param_1,param_2,param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  func_0x00010c170680(*(undefined8 *)(param_1 + 8),param_2,uVar2,1,0);
  if (lVar1 == 0) {
    func_0x00010c19fa40(*(undefined8 *)(param_1 + 8),param_2,0,0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = 2;
  }
  else {
    func_0x00010c19fa40(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c06d400();
    uVar2 = 1;
    if ((int)param_1 == 0) {
      uVar2 = 2;
    }
  }
  func_0x00010c170680(uVar3,param_2,uVar2,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c925dc; end: 108c925e7; -[SCLensProcessingBitmojiProvider friendAvatarId] */

void FUN_108c925dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 108c925e8; end: 108c925ef; -[SCLensProcessingBitmojiProvider setFriendAvatarId:] */

void FUN_108c925e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c925f0; end: 108c9267f; -[SCLensProcessingBitmojiProvider .cxx_destruct] */

void FUN_108c925f0(long param_1)

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



/* Entry: 108c92680; end: 108c926f3; -[SCLensProcessingExternalMediaProvider initWithRemixScope:] */

undefined1 * FUN_108c92680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdfc8;
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



/* Entry: 108c926f4; end: 108c927f3; -[SCLensProcessingExternalMediaProvider externalMediaData] */

void FUN_108c926f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108c927f4;
  uStack_30 = 0x108c92804;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9e320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be4e0();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c927f4; end: 108c9280b;  */

void FUN_108c927f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c9280c; end: 108c9292f;  */

void FUN_108c9280c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar3;
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  uVar4 = uVar6;
  func_0x00010c0dfd40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf529e0();
  uVar10 = 0;
  if (1 < uVar5) {
    uVar10 = uVar6;
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126db5f0;
  func_0x00010bfe7340(PTR_PTR_1126db5f0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c92930; end: 108c929db;  */

void FUN_108c92930(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf529e0();
  uVar4 = 0;
  if (1 < uVar2) {
    uVar4 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126db5f0;
  func_0x00010bfe7340(PTR_PTR_1126db5f0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c929dc; end: 108c92a5b;  */

void FUN_108c929dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108c92a5c;
  puStack_30 = &UNK_110ac00f8;
  uStack_28 = param_3;
  func_0x00010bfb2660(param_2,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  return;
}



/* Entry: 108c92a5c; end: 108c92be3;  */

void FUN_108c92a5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126db5f0;
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c0f5800(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299ce0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108c92ba4;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9c80(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
LAB_108c92ba4:
  _objc_release(puVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 108c92be4; end: 108c92bef; -[SCLensProcessingExternalMediaProvider .cxx_destruct] */

void FUN_108c92be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c92bf0; end: 108c92c8f; -[SCLensProcessingExternalMediaPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c92bf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126db5f8;
  _objc_alloc(PTR_PTR_1126db5f8);
  lVar2 = param_1 + _DAT_112779608;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c03de20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11277960c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c92c90; end: 108c92cc7; -[SCLensProcessingExternalMediaPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c92c90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277960c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779608);
  return;
}



/* Entry: 108c92cc8; end: 108c92d3b; -[SCLensProcessingExternalStreamProvider initWithExternalStreamComponent:] */

undefined1 * FUN_108c92cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdfd0;
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



/* Entry: 108c92d3c; end: 108c92e2b; -[SCLensProcessingExternalStreamProvider setExternalStream:forEffectId:] */

void FUN_108c92d3c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126db600;
    _objc_alloc(PTR_PTR_1126db600);
    func_0x00010c040160();
    lVar1 = param_3;
    func_0x00010c13b320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (lVar3 == 0) {
      func_0x00010c1edd40(uVar4,param_2,puVar2,param_4);
    }
    else {
      lVar1 = param_3;
      func_0x00010c13b320(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199880(uVar4,param_2,puVar2,param_4,lVar1);
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c92e2c; end: 108c92e37; -[SCLensProcessingExternalStreamProvider clearExternalStreamWithEffectId:] */

void FUN_108c92e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_clearExternalStreamWithEffectId__1125ac6a8,param_3,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 108c92e38; end: 108c92eb3; -[SCLensProcessingExternalStreamProvider clearExternalStreamWithEffectId:resourceId:] */

void FUN_108c92e38(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010bf3bf20(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
    else {
      func_0x00010bf3b3c0();
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c92eb4; end: 108c92ebf; -[SCLensProcessingExternalStreamProvider .cxx_destruct] */

void FUN_108c92eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c92ec0; end: 108c92f33; -[SCLensProcessingExternalStreamProvidingAdapter initWithReverseCameraStreamProvider:] */

undefined1 * FUN_108c92ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdfd8;
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



/* Entry: 108c92f34; end: 108c92f3b; -[SCLensProcessingExternalStreamProvidingAdapter currentFrame] */

void FUN_108c92f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_currentCVPixelBufferRef_1125b5258);
  return;
}



/* Entry: 108c92f3c; end: 108c92f57; -[SCLensProcessingExternalStreamProvidingAdapter preferredTransform] */

void FUN_108c92f3c(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c106b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 8),PTR_s_preferredFrameTransformForRevers_11261f4e8);
    return;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 108c92f58; end: 108c92f63; -[SCLensProcessingExternalStreamProvidingAdapter .cxx_destruct] */

void FUN_108c92f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c92f64; end: 108c93097; -[SCLensProcessingReverseCameraController initWithCameraHardwareServicesAPIImpl:cameraHardwareResource:containerViewFuture:deviceSettingsResolver:cameraDeviceSettingsConfiguration:cameraUsageTier:] */

undefined1 *
FUN_108c92f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126fdfe0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c93098; end: 108c9315b; -[SCLensProcessingReverseCameraController activateReverseCameraForLens:] */

void FUN_108c93098(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1b2440(param_1,param_2,1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d1ca0(uVar4,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c1276a0(uVar3,param_2,uVar4,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c9315c; end: 108c931db; -[SCLensProcessingReverseCameraController deactivateReverseCamera] */

void FUN_108c9315c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar2);
    func_0x00010c1898a0(param_1,param_2,0);
    func_0x00010c1b2440(param_1,param_2,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}


