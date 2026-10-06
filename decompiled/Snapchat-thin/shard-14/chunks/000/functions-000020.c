/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af25e6c; end: 10af25e8f; -[SCMemoriesGenericAsset copyWithZone:] */

undefined8 FUN_10af25e6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af25e90; end: 10af25f1b; -[SCMemoriesGenericAsset isEqual:] */

ulong FUN_10af25e90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126dea20;
    _objc_opt_class(PTR_PTR_1126dea20);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071ea0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af25f1c; end: 10af25fab; -[SCMemoriesGenericAsset isEqualToMemoriesGenericAsset:] */

undefined8 FUN_10af25f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23f400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010c23f400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10af25fac; end: 10af25fb3; -[SCMemoriesGenericAsset hash] */

void FUN_10af25fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af25fb4; end: 10af25fbb; -[SCMemoriesGenericAsset assetId] */

void FUN_10af25fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_assetId_1125a0640);
  return;
}



/* Entry: 10af25fbc; end: 10af25fc3; -[SCMemoriesGenericAsset assetType] */

void FUN_10af25fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_assetType_1125a0780);
  return;
}



/* Entry: 10af25fc4; end: 10af25fcb; -[SCMemoriesGenericAsset downloadURL] */

void FUN_10af25fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_downloadURL_1125bfe08);
  return;
}



/* Entry: 10af25fcc; end: 10af25fd3; -[SCMemoriesGenericAsset snapAsset] */

undefined8 FUN_10af25fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af25fd4; end: 10af25fdf; -[SCMemoriesGenericAsset .cxx_destruct] */

void FUN_10af25fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af25fe0; end: 10af26053; -[SCMemoriesSnap initWithGallerySnap:] */

undefined1 * FUN_10af25fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127022f8;
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



/* Entry: 10af26054; end: 10af26077; -[SCMemoriesSnap copyWithZone:] */

undefined8 FUN_10af26054(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af26078; end: 10af26103; -[SCMemoriesSnap isEqual:] */

ulong FUN_10af26078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126bc7d8;
    _objc_opt_class(PTR_PTR_1126bc7d8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071ee0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af26104; end: 10af26193; -[SCMemoriesSnap isEqualToMemoriesSnap:] */

undefined8 FUN_10af26104(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfbd760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bfbd760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10af26194; end: 10af2619b; -[SCMemoriesSnap hash] */

void FUN_10af26194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af2619c; end: 10af261a3; -[SCMemoriesSnap objectID] */

void FUN_10af2619c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectID_112615a70);
  return;
}



/* Entry: 10af261a4; end: 10af261ab; -[SCMemoriesSnap captureTimeUtc] */

void FUN_10af261a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf313b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_captureTimeUtc_1125a9e90);
  return;
}



/* Entry: 10af261ac; end: 10af261b3; -[SCMemoriesSnap createTimeUtc] */

void FUN_10af261ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_createTimeUtc_1125b4000)
  ;
  return;
}



/* Entry: 10af261b4; end: 10af261bb; -[SCMemoriesSnap duplicatedFromSnapId] */

void FUN_10af261b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_duplicatedFromSnapId_1125c05d8);
  return;
}



/* Entry: 10af261bc; end: 10af261c3; -[SCMemoriesSnap duration] */

void FUN_10af261bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_duration_1125c0600);
  return;
}



/* Entry: 10af261c4; end: 10af261cb; -[SCMemoriesSnap isTemporary] */

void FUN_10af261c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c080cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isTemporary_1125fdd38);
  return;
}



/* Entry: 10af261cc; end: 10af261d3; -[SCMemoriesSnap mediaDownloadUrl] */

void FUN_10af261cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_mediaDownloadUrl_11260ecd0);
  return;
}



/* Entry: 10af261d4; end: 10af261db; -[SCMemoriesSnap mediaId] */

void FUN_10af261d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 10af261dc; end: 10af261e3; -[SCMemoriesSnap mediaType] */

void FUN_10af261dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c6c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_mediaType_11260f520);
  return;
}



/* Entry: 10af261e4; end: 10af26387; -[SCMemoriesSnap snapAssets] */

void FUN_10af261e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 8);
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar10 = PTR____NSArray0__struct_11034ab48;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar4);
        }
        puVar3 = PTR_DAT_1126a4fc0;
        lVar9 = *(long *)((long)puVar10 * 8);
        _objc_retain(lVar9);
        lVar7 = lVar9;
        func_0x000107c318f8(lVar9,puVar3);
        lVar1 = lVar9;
        if ((int)lVar7 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar9);
        if (lVar1 != 0) {
          func_0x00010befa120(puVar6);
        }
        _objc_release(lVar1);
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar10 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf51e00();
    puVar10 = puVar5;
    FUN_10af258d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10af26388; end: 10af263e3; -[SCMemoriesSnap genericAssets] */

void FUN_10af26388(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  uVar2 = uVar1;
  FUN_10af258d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af263e4; end: 10af263eb; -[SCMemoriesSnap snapDocData] */

void FUN_10af263e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapDocData_11266da08);
  return;
}



/* Entry: 10af263ec; end: 10af263f3; -[SCMemoriesSnap snapId] */

void FUN_10af263ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10af263f4; end: 10af263fb; -[SCMemoriesSnap hasOverlayImage] */

void FUN_10af263f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasOverlayImage_1125d4130);
  return;
}



/* Entry: 10af263fc; end: 10af26403; -[SCMemoriesSnap overlayDownloadUrl] */

void FUN_10af263fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ef7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_overlayDownloadUrl_112619808);
  return;
}



/* Entry: 10af26404; end: 10af2640b; -[SCMemoriesSnap hasThumbnail] */

void FUN_10af26404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hasThumbnail_1125d4ee0);
  return;
}



/* Entry: 10af2640c; end: 10af26413; -[SCMemoriesSnap thumbnailDownloadUrl] */

void FUN_10af2640c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_thumbnailDownloadUrl_1126790c8);
  return;
}



/* Entry: 10af26414; end: 10af2641b; -[SCMemoriesSnap hasSynced] */

void FUN_10af26414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hasSynced_1125d4e08);
  return;
}



/* Entry: 10af2641c; end: 10af26423; -[SCMemoriesSnap cameraRollId] */

void FUN_10af2641c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cameraRollId_1125a83d0);
  return;
}



/* Entry: 10af26424; end: 10af2642b; -[SCMemoriesSnap attribution] */

void FUN_10af26424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_attribution_1125a1400);
  return;
}



/* Entry: 10af2642c; end: 10af26433; -[SCMemoriesSnap externalId] */

void FUN_10af2642c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_externalId_1125c51f8);
  return;
}



/* Entry: 10af26434; end: 10af2643b; -[SCMemoriesSnap saverUserId] */

void FUN_10af26434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_saverUserId_1126309c0);
  return;
}



/* Entry: 10af2643c; end: 10af26443; -[SCMemoriesSnap servletMediaFormat] */

void FUN_10af2643c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_servletMediaFormat_1126358a8);
  return;
}



/* Entry: 10af26444; end: 10af2644b; -[SCMemoriesSnap toolVersions] */

void FUN_10af26444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_toolVersions_11267a7f8);
  return;
}



/* Entry: 10af2644c; end: 10af26453; -[SCMemoriesSnap mediaAttributes] */

void FUN_10af2644c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_mediaAttributes_11260ea80);
  return;
}



/* Entry: 10af26454; end: 10af2645b; -[SCMemoriesSnap timeZoneName] */

void FUN_10af26454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_timeZoneName_112679970);
  return;
}



/* Entry: 10af2645c; end: 10af26463; -[SCMemoriesSnap framing] */

void FUN_10af2645c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_framing_1125cb698);
  return;
}



/* Entry: 10af26464; end: 10af2646b; -[SCMemoriesSnap multiSnapGroupId] */

void FUN_10af26464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_multiSnapGroupId_112612290);
  return;
}



/* Entry: 10af2646c; end: 10af26473; -[SCMemoriesSnap sensorBlob] */

void FUN_10af2646c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_sensorBlob_112635288);
  return;
}



/* Entry: 10af26474; end: 10af2647b; -[SCMemoriesSnap deviceId] */

void FUN_10af26474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_deviceId_1125b9b70);
  return;
}



/* Entry: 10af2647c; end: 10af26483; -[SCMemoriesSnap deviceFirmwareInfo] */

void FUN_10af2647c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf704d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_deviceFirmwareInfo_1125b9ad8);
  return;
}



/* Entry: 10af26484; end: 10af2648b; -[SCMemoriesSnap gallerySnap] */

undefined8 FUN_10af26484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af2648c; end: 10af26497; -[SCMemoriesSnap .cxx_destruct] */

void FUN_10af2648c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af26498; end: 10af2650b; -[SCMemoriesSnapDetail initWithGallerySnapDetail:] */

undefined1 * FUN_10af26498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702300;
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



/* Entry: 10af2650c; end: 10af2652f; -[SCMemoriesSnapDetail copyWithZone:] */

undefined8 FUN_10af2650c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af26530; end: 10af265bb; -[SCMemoriesSnapDetail isEqual:] */

ulong FUN_10af26530(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126bc7c0;
    _objc_opt_class(PTR_PTR_1126bc7c0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071f00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af265bc; end: 10af26607; -[SCMemoriesSnapDetail isEqualToMemoriesSnapDetail:] */

undefined8 FUN_10af265bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbd780(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10af26608; end: 10af2660f; -[SCMemoriesSnapDetail hash] */

void FUN_10af26608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af26610; end: 10af26617; -[SCMemoriesSnapDetail objectID] */

void FUN_10af26610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectID_112615a70);
  return;
}



/* Entry: 10af26618; end: 10af2661f; -[SCMemoriesSnapDetail overlay] */

void FUN_10af26618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ef4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_overlay_112619740);
  return;
}



/* Entry: 10af26620; end: 10af26627; -[SCMemoriesSnapDetail gallerySnapDetail] */

undefined8 FUN_10af26620(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af26628; end: 10af26633; -[SCMemoriesSnapDetail .cxx_destruct] */

void FUN_10af26628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af26634; end: 10af266a7; -[SCMemoriesSnapMiniThumbnail initWithGallerySnapMiniThumbnail:] */

undefined1 * FUN_10af26634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702308;
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



/* Entry: 10af266a8; end: 10af266cb; -[SCMemoriesSnapMiniThumbnail copyWithZone:] */

undefined8 FUN_10af266a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af266cc; end: 10af26757; -[SCMemoriesSnapMiniThumbnail isEqual:] */

ulong FUN_10af266cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126bc7d0;
    _objc_opt_class(PTR_PTR_1126bc7d0);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c071f20(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10af26758; end: 10af267a3; -[SCMemoriesSnapMiniThumbnail isEqualToMemoriesSnapMiniThumbnail:] */

undefined8 FUN_10af26758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfbd800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10af267a4; end: 10af267ab; -[SCMemoriesSnapMiniThumbnail hash] */

void FUN_10af267a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af267ac; end: 10af267b3; -[SCMemoriesSnapMiniThumbnail objectID] */

void FUN_10af267ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectID_112615a70);
  return;
}



/* Entry: 10af267b4; end: 10af267bb; -[SCMemoriesSnapMiniThumbnail snapId] */

void FUN_10af267b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10af267bc; end: 10af267c3; -[SCMemoriesSnapMiniThumbnail thumbnailData] */

void FUN_10af267bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_thumbnailData_1126790a8)
  ;
  return;
}



/* Entry: 10af267c4; end: 10af267cb; -[SCMemoriesSnapMiniThumbnail gallerySnapMiniThumbnail] */

undefined8 FUN_10af267c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af267cc; end: 10af267d7; -[SCMemoriesSnapMiniThumbnail .cxx_destruct] */

void FUN_10af267cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af267d8; end: 10af26817;  */

void FUN_10af267d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be33960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10af26818; end: 10af2687b; -[SCMemoriesDataObjectStorageService _handlerProfile] */

void FUN_10af26818(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0c9500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af2687c; end: 10af26883; -[SCMemoriesDataObjectStorageService docObjectContext] */

undefined8 FUN_10af2687c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af26884; end: 10af268cb; -[SCMemoriesDataObjectStorageService .cxx_destruct] */

void FUN_10af26884(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af268cc; end: 10af268fb; -[SCPhotoPermissionServices .cxx_destruct] */

void FUN_10af268cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af268fc; end: 10af26943; -[SCPhotoPermissionStatus initWithPermissionStatus:] */

void FUN_10af268fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10af26944; end: 10af26953; -[SCPhotoPermissionStatus hash] */

long FUN_10af26944(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10af26954; end: 10af269db; -[SCPhotoPermissionStatus isEqual:] */

bool FUN_10af26954(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af269dc; end: 10af269e3; -[SCPhotoPermissionStatus permissionStatus] */

undefined8 FUN_10af269dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af269e4; end: 10af26a57; -[SCDuplexSyncTriggerServices initWithDuplexSyncTriggerService:] */

undefined1 * FUN_10af269e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702328;
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



/* Entry: 10af26a58; end: 10af26a5f; -[SCDuplexSyncTriggerServices duplexSyncTriggerService] */

undefined8 FUN_10af26a58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af26a60; end: 10af26a6b; -[SCDuplexSyncTriggerServices .cxx_destruct] */

void FUN_10af26a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af26a6c; end: 10af26af7; +[SCDuplexTriggerSyncTriggerEnvelope descriptor] */

undefined * FUN_10af26a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16780,
                        &PTR____CFConstantStringClassReference_110f37978,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f100,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137efa68 = puVar1;
  }
  return puRam00000001137efa68;
}



/* Entry: 10af26af8; end: 10af26b83; +[SCDuplexTriggerCoreDataSyncPayload descriptor] */

undefined * FUN_10af26af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c167d0,
                        &PTR____CFConstantStringClassReference_110f37998,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332efc0,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137efa70 = puVar1;
  }
  return puRam00000001137efa70;
}



/* Entry: 10af26b84; end: 10af26c0f; +[SCDuplexTriggerUserScoreSyncPayload descriptor] */

undefined * FUN_10af26b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16820,
                        &PTR____CFConstantStringClassReference_110f379b8,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332efe0,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137efa78 = puVar1;
  }
  return puRam00000001137efa78;
}



/* Entry: 10af26c10; end: 10af26c9b; +[SCDuplexTriggerSupSyncPayload descriptor] */

undefined * FUN_10af26c10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16870,
                        &PTR____CFConstantStringClassReference_110f379d8,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f000,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137efa80 = puVar1;
  }
  return puRam00000001137efa80;
}



/* Entry: 10af26c9c; end: 10af26d03; +[SCDuplexTriggerSpartaSyncPayload descriptor] */

void FUN_10af26c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c168c0,
                        &PTR____CFConstantStringClassReference_110f379f8,&PTR_DAT_11332efa8,
                        &PTR_s_kind_11332f020,1,8,0x1c);
    puRam00000001137efa88 = puVar1;
  }
  return;
}



/* Entry: 10af26d04; end: 10af26d8f; +[SCDuplexTriggerComplianceFlagsSyncPayload descriptor] */

undefined * FUN_10af26d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16910,
                        &PTR____CFConstantStringClassReference_110f37a18,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f040,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001137efa90 = puVar1;
  }
  return puRam00000001137efa90;
}



/* Entry: 10af26d90; end: 10af26df7; +[SCDuplexTriggerSecuritySyncPayload descriptor] */

void FUN_10af26d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efa98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16960,
                        &PTR____CFConstantStringClassReference_110f37a38,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f060,1,0x10,0x1c);
    puRam00000001137efa98 = puVar1;
  }
  return;
}



/* Entry: 10af26df8; end: 10af26e93; +[SCDuplexTriggerSecuritySyncPayload_Operation descriptor] */

undefined * FUN_10af26df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efaa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c169b0,
                        &PTR____CFConstantStringClassReference_110e88c78,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f0c0,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c16960);
    puRam00000001137efaa0 = puVar1;
  }
  return puRam00000001137efaa0;
}



/* Entry: 10af26e94; end: 10af26f0f; +[SCDuplexTriggerSecuritySyncPayload_ValidateCurrentSession descriptor] */

undefined * FUN_10af26e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efaa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16a00,
                        &PTR____CFConstantStringClassReference_110f37a58,&PTR_DAT_11332efa8,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137efaa8 = puVar1;
  }
  return puRam00000001137efaa8;
}



/* Entry: 10af26f10; end: 10af26f8b; +[SCDuplexTriggerSecuritySyncPayload_ForceArgosTokenRefresh descriptor] */

undefined * FUN_10af26f10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16a50,
                        &PTR____CFConstantStringClassReference_110e88c98,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f080,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137efab0 = puVar1;
  }
  return puRam00000001137efab0;
}



/* Entry: 10af26f8c; end: 10af27007; +[SCDuplexTriggerSecuritySyncPayload_SendTIVRequest descriptor] */

undefined * FUN_10af26f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efab8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16aa0,
                        &PTR____CFConstantStringClassReference_110f37a78,&PTR_DAT_11332efa8,
                        &PTR_DAT_11332f0a0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137efab8 = puVar1;
  }
  return puRam00000001137efab8;
}



/* Entry: 10af27008; end: 10af270ff; +[SCDuplexTriggerSecuritySyncPayload_FetchDeviceCheckToken descriptor] */

undefined * FUN_10af27008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efac0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16af0,
                        &PTR____CFConstantStringClassReference_110e88cb8,&PTR_DAT_11332efa8,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137efac0 = puVar1;
  }
  return puRam00000001137efac0;
}



/* Entry: 10af27100; end: 10af2710b;  */

bool FUN_10af27100(uint param_1)

{
  return param_1 < 0x1c;
}



/* Entry: 10af2710c; end: 10af27197; +[SCAuthTivsLandingPageData descriptor] */

undefined * FUN_10af2710c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16be0,
                        &PTR____CFConstantStringClassReference_110f37ab8,&PTR_DAT_11332f1b8,
                        &PTR_DAT_11332f1d0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137efad0 = puVar1;
  }
  return puRam00000001137efad0;
}



/* Entry: 10af27198; end: 10af271ff; +[SCAuthTivsTivMetadata descriptor] */

void FUN_10af27198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16c30,
                        &PTR____CFConstantStringClassReference_110f37ad8,&PTR_DAT_11332f1b8,
                        &PTR_DAT_11332f470,6,0x30,0x1c);
    puRam00000001137efad8 = puVar1;
  }
  return;
}



/* Entry: 10af27200; end: 10af27267; +[SCAuthTivsAppLandingPageData descriptor] */

void FUN_10af27200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16c80,
                        &PTR____CFConstantStringClassReference_110f37af8,&PTR_DAT_11332f1b8,
                        &PTR_s_header_11332f530,7,0x38,0x1c);
    puRam00000001137efae0 = puVar1;
  }
  return;
}



/* Entry: 10af27268; end: 10af272cf; +[SCAuthTivsBitmoji descriptor] */

void FUN_10af27268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16cd0,
                        &PTR____CFConstantStringClassReference_110dec718,&PTR_DAT_11332f1b8,
                        &PTR_s_avatarId_11332f210,2,0x18,0x1c);
    puRam00000001137efae8 = puVar1;
  }
  return;
}



/* Entry: 10af272d0; end: 10af2735b; +[SCAuthTivsTransactionDetail descriptor] */

undefined * FUN_10af272d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efaf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16d20,
                        &PTR____CFConstantStringClassReference_110f37b18,&PTR_DAT_11332f1b8,
                        &PTR_s_title_11332f2d0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137efaf0 = puVar1;
  }
  return puRam00000001137efaf0;
}



/* Entry: 10af2735c; end: 10af273c3; +[SCAuthTivsActionButton descriptor] */

void FUN_10af2735c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efaf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16d70,
                        &PTR____CFConstantStringClassReference_110f37b38,&PTR_DAT_11332f1b8,
                        &PTR_s_text_11332f350,4,0x20,0x1c);
    puRam00000001137efaf8 = puVar1;
  }
  return;
}



/* Entry: 10af273c4; end: 10af2744f; +[SCAuthTivsButtonAction descriptor] */

undefined * FUN_10af273c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16e88,
                        &PTR____CFConstantStringClassReference_110f37b58,&PTR_DAT_11332f1b8,
                        &PTR_DAT_11332f3d0,5,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137efb00 = puVar1;
  }
  return puRam00000001137efb00;
}



/* Entry: 10af27450; end: 10af274d3; +[SCAuthTivsButtonAction_Acknowledgement descriptor] */

undefined * FUN_10af27450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16eb0,
                        &PTR____CFConstantStringClassReference_110f37b78,&PTR_DAT_11332f1b8,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137efb08 = puVar1;
  }
  return puRam00000001137efb08;
}



/* Entry: 10af274d4; end: 10af2753b; +[SCAuthTivsText descriptor] */

void FUN_10af274d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efb10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c16e10,
                        &PTR____CFConstantStringClassReference_110dac6b8,&PTR_DAT_11332f1b8,
                        &PTR_s_text_11332f250,2,0x10,0x1c);
    puRam00000001137efb10 = puVar1;
  }
  return;
}


