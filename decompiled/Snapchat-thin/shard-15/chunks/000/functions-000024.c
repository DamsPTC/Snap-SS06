/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b77c348; end: 10b77c437; +[SOJUGalleryServletGetSnapsResponse registerMessageFields:] */

void FUN_10b77c348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b77c438(param_3,param_2,puVar1,0,1,5);
  func_0x00010b77c444();
  FUN_10b77c438();
  func_0x00010b77c444();
  FUN_10b77c438();
  func_0x00010b77c444();
  FUN_10b77c438();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77c458();
  func_0x00010b77c444();
  FUN_10b77c438();
  _objc_opt_class(PTR_PTR_1126e0da0);
  func_0x00010b77c458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c438; end: 10b77c473;  */

void FUN_10b77c438(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77c474; end: 10b77c497; -[SOJUGalleryServletGetUploadUrlsRequest initWithIds:type:storageVersionDeprecated:storageType:] */

void FUN_10b77c474(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77c498; end: 10b77c57f; +[SOJUGalleryServletGetUploadUrlsRequest registerMessageFields:] */

void FUN_10b77c498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_ids_112545740;
  _objc_retain(param_3);
  FUN_10b77c580(param_3,param_2,puVar1,0,0,7);
  func_0x00010c19a460(param_3,param_2,0x9adddffee99b83);
  FUN_10b77c580(param_3,param_2,PTR_s_type_11267d188,0,0,5);
  FUN_10b77c580(param_3,param_2,PTR_s_storageVersionDeprecated_112545d78,
                &PTR____CFConstantStringClassReference_110f7e7b8,2,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_storageType_112545d80,0,1,6,0,FUN_10b77dfc4,
                      FUN_10b77e060,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c580; end: 10b77c58b;  */

void FUN_10b77c580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77c58c; end: 10b77c6b3;  */

undefined8 FUN_10b77c58c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e8d8;
  func_0x00010b77c7bc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffec49d5d4;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e8f8;
    func_0x00010b77c7bc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffff5d2024;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e918;
      func_0x00010b77c7bc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffa6654a09;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7e938;
        func_0x00010b77c7bc();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffec97d14f;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7e958;
          func_0x00010b77c7bc();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffa9fc90cc;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7e978;
            func_0x00010b77c7bc();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffa9fb7f3e;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7e998;
              func_0x00010b77c7bc();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffff9f8c09ae;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7e9b8;
                func_0x00010b77c7bc();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x4f78090a;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110de5c58;
                  func_0x00010b77c7bc();
                  uVar2 = 0xffffffff9f128b37;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b77c6b4; end: 10b77c7c3;  */

undefined ** FUN_10b77c6b4(long param_1)

{
  if (param_1 == -0x60ed74c9) {
    return &PTR____CFConstantStringClassReference_110de5c58;
  }
  if (param_1 == -0x6073f652) {
    return &PTR____CFConstantStringClassReference_110f7e998;
  }
  if (param_1 == -0x599ab5f7) {
    return &PTR____CFConstantStringClassReference_110f7e918;
  }
  if (param_1 == -0x560480c2) {
    return &PTR____CFConstantStringClassReference_110f7e978;
  }
  if (param_1 == -0x56036f34) {
    return &PTR____CFConstantStringClassReference_110f7e958;
  }
  if (param_1 == -0x13b62a2c) {
    return &PTR____CFConstantStringClassReference_110f7e8d8;
  }
  if (param_1 == -0x13682eb1) {
    return &PTR____CFConstantStringClassReference_110f7e938;
  }
  if (param_1 != 0x4f78090a) {
    if (param_1 == -0xa2dfdc) {
      return &PTR____CFConstantStringClassReference_110f7e8f8;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f7e9b8;
}



/* Entry: 10b77c7c4; end: 10b77c7e7; -[SOJUGalleryServletMediaResult initWithMediaId:uploadUrl:statusCode:debugInfo:uploadHeaders:] */

void FUN_10b77c7c4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77c7e8; end: 10b77c8a3; +[SOJUGalleryServletMediaResult registerMessageFields:] */

void FUN_10b77c7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(param_3);
  func_0x00010b77c8c8();
  func_0x00010b77c8a4();
  func_0x00010b77c8c8();
  func_0x00010b77c8a4();
  func_0x00010b77c8c8();
  func_0x00010b77c8bc();
  func_0x00010b77c8c8();
  func_0x00010b77c8a4();
  func_0x00010b77c8bc(param_3,param_2,PTR_s_uploadHeaders_1126811d8,0,1,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0x61bbce2d6e70f5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c8a4; end: 10b77c8d3;  */

void FUN_10b77c8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b77c8d4; end: 10b77c8f3; -[SOJUGalleryServletMemDataId initWithUuid:creationTimeMs:entryType:] */

void FUN_10b77c8d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77c8f4; end: 10b77c96f; +[SOJUGalleryServletMemDataId registerMessageFields:] */

void FUN_10b77c8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_uuid_112682d80;
  _objc_retain(param_3);
  FUN_10b77c970(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b77c97c();
  FUN_10b77c970();
  func_0x00010b77c97c();
  FUN_10b77c970();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77c970; end: 10b77c98f;  */

void FUN_10b77c970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77c990; end: 10b77c99b; +[SOJUGalleryServletMemDataIdBuilder messageClass] */

void FUN_10b77c990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0dd0);
  return;
}



/* Entry: 10b77c99c; end: 10b77c99f; +[SOJUGalleryServletMemDataIdBuilder withJUGalleryServletMemDataId:] */

void FUN_10b77c99c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77c9a0; end: 10b77c9bf; -[SOJUGalleryServletMemDataIds initWithEntryMemDataId:snapMemDataId:] */

void FUN_10b77c9a0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77c9c0; end: 10b77ca27; +[SOJUGalleryServletMemDataIds registerMessageFields:] */

void FUN_10b77c9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0dd0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b77ca28();
  _objc_opt_class(PTR_PTR_1126e0dd0);
  FUN_10b77ca28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77ca28; end: 10b77ca4b;  */

void FUN_10b77ca28(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77ca4c; end: 10b77ca57; +[SOJUGalleryServletMemDataIdsBuilder messageClass] */

void FUN_10b77ca4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2c48);
  return;
}



/* Entry: 10b77ca58; end: 10b77ca5b; +[SOJUGalleryServletMemDataIdsBuilder withJUGalleryServletMemDataIds:] */

void FUN_10b77ca58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77ca5c; end: 10b77ca7f; -[SOJUGalleryServletPrintSnapResult initWithSnapId:statusCode:encryption:printUrl:] */

void FUN_10b77ca5c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77ca80; end: 10b77cb1b; +[SOJUGalleryServletPrintSnapResult registerMessageFields:] */

void FUN_10b77ca80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  FUN_10b77cb1c(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b77cb28();
  FUN_10b77cb1c();
  func_0x00010b77cb28();
  FUN_10b77cb1c();
  func_0x00010b77cb28();
  FUN_10b77cb1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77cb1c; end: 10b77cb37;  */

void FUN_10b77cb1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77cb38; end: 10b77cb57; -[SOJUGalleryServletQuota initWithUnlimited:snapNumber:] */

void FUN_10b77cb38(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77cb58; end: 10b77cbd3; +[SOJUGalleryServletQuota registerMessageFields:] */

void FUN_10b77cb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b77cbd4();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0e30);
  FUN_10b77cbd4();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77cbd4; end: 10b77cbe7;  */

void FUN_10b77cbd4(void)

{
  return;
}



/* Entry: 10b77cbe8; end: 10b77cc07; -[SOJUGalleryServletQuotaUsage initWithRemaining:total:] */

void FUN_10b77cbe8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77cc08; end: 10b77cc63; +[SOJUGalleryServletQuotaUsage registerMessageFields:] */

void FUN_10b77cc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_remaining_112546140;
  _objc_retain(param_3);
  FUN_10b77cc64(param_3,param_2,puVar1);
  FUN_10b77cc64(param_3,param_2,PTR_s_total_11267b1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77cc64; end: 10b77cc7b;  */

void FUN_10b77cc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,2,0,0);
  return;
}



/* Entry: 10b77cc7c; end: 10b77cc9b; -[SOJUGalleryServletSensorBlob initWithData:sensorMajorVersion:sensorMinorVersion:] */

void FUN_10b77cc7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77cc9c; end: 10b77cd0f; +[SOJUGalleryServletSensorBlob registerMessageFields:] */

void FUN_10b77cc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_data_1125b6738;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,0,0,0);
  FUN_10b77cd10();
  FUN_10b77cd10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77cd10; end: 10b77cd2f;  */

void FUN_10b77cd10(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77cd30; end: 10b77cd57; -[SOJUGalleryServletSnapAssetsAddSnapAssetRequest initWithIdValue:assetDescriptor:size:md5hash:createTime:assetMetadata:] */

void FUN_10b77cd30(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77cd58; end: 10b77ce47; +[SOJUGalleryServletSnapAssetsAddSnapAssetRequest registerMessageFields:] */

void FUN_10b77cd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b77ce48(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b77ce54();
  FUN_10b77ce48();
  func_0x00010b77ce54();
  FUN_10b77ce48();
  func_0x00010b77ce54();
  FUN_10b77ce48();
  func_0x00010b77ce54();
  FUN_10b77ce48();
  puVar1 = PTR_s_assetMetadata_112546168;
  puVar2 = PTR_PTR_1126e0e38;
  _objc_opt_class(PTR_PTR_1126e0e38);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77ce48; end: 10b77ce63;  */

void FUN_10b77ce48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77ce64; end: 10b77ce83; -[SOJUGalleryServletSnapAssetsAddSnapAssetResponse initWithIdValue:uploadUrl:uploadHeaders:] */

void FUN_10b77ce64(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77ce84; end: 10b77cf3f; +[SOJUGalleryServletSnapAssetsAddSnapAssetResponse registerMessageFields:] */

void FUN_10b77ce84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b77cf40(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,in_x6,
                in_x7,0,0);
  FUN_10b77cf40(param_3,param_2,PTR_s_uploadUrl_1126814c8,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77cf40(param_3,param_2,PTR_s_uploadHeaders_1126811d8,0,1,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0x61bbce2d6e70f5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77cf40; end: 10b77cf4b;  */

void FUN_10b77cf40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77cf4c; end: 10b77cf6f; -[SOJUGalleryServletSnapAssetsGalleryMediaAssetMetadata initWithMediaType:captureTime:mediaFormat:mediaAttributes:] */

void FUN_10b77cf4c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77cf70; end: 10b77d04f; +[SOJUGalleryServletSnapAssetsGalleryMediaAssetMetadata registerMessageFields:] */

void FUN_10b77cf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mediaType_11260f520;
  _objc_retain(param_3);
  func_0x00010b77d058(param_3,param_2,puVar1);
  func_0x00010b77d050();
  func_0x00010b77d058(param_3,param_2,PTR_s_captureTime_1125a9e80);
  func_0x00010b77d050();
  func_0x00010b77d058(param_3,param_2,PTR_s_mediaFormat_11260ee28);
  func_0x00010bf06b60();
  puVar1 = PTR_s_mediaAttributes_11260ea80;
  _objc_opt_class(PTR_PTR_1126d7f88);
  func_0x00010b77d058(param_3,param_2,puVar1);
  func_0x00010b77d050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77d050; end: 10b77d063;  */

void FUN_10b77d050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77d064; end: 10b77d087; -[SOJUGalleryServletSnapAssetsGallerySnapAsset initWithIdValue:assetDescriptor:downloadUrl:assetMetadata:] */

void FUN_10b77d064(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77d088; end: 10b77d13f; +[SOJUGalleryServletSnapAssetsGallerySnapAsset registerMessageFields:] */

void FUN_10b77d088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b77d140(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b77d14c();
  FUN_10b77d140();
  func_0x00010b77d14c();
  FUN_10b77d140();
  puVar1 = PTR_s_assetMetadata_112546168;
  puVar2 = PTR_PTR_1126e0e38;
  _objc_opt_class(PTR_PTR_1126e0e38);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77d140; end: 10b77d15f;  */

void FUN_10b77d140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77d160; end: 10b77d163; -[SOJUGalleryServletSnapAssetsGallerySnapAssetMetadata initWithMediaMetadata:] */

void FUN_10b77d160(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77d164; end: 10b77d1d7; +[SOJUGalleryServletSnapAssetsGallerySnapAssetMetadata registerMessageFields:] */

void FUN_10b77d164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0e40;
  puVar1 = PTR_s_mediaMetadata_11260f058;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77d1d8; end: 10b77d1fb; -[SOJUGalleryServletSnapOperation initWithOperationType:snapId:orderDeprecated:orderV2:snap:] */

void FUN_10b77d1d8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77d1fc; end: 10b77d2db; +[SOJUGalleryServletSnapOperation registerMessageFields:] */

void FUN_10b77d1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77d2e8();
  func_0x00010b77d2dc();
  func_0x00010b77d2e8();
  func_0x00010b77d2dc();
  func_0x00010b77d2dc(param_3,param_2,PTR_s_orderDeprecated_112546198,
                      &PTR____CFConstantStringClassReference_110deb258,2,3);
  func_0x00010b77d2e8();
  func_0x00010b77d2dc();
  _objc_opt_class(PTR_PTR_1126e0d58);
  func_0x00010b77d2e8();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77d2dc; end: 10b77d2f3;  */

void FUN_10b77d2dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77d2f4; end: 10b77d2ff; +[SOJUGalleryServletSnapOperationBuilder messageClass] */

void FUN_10b77d2f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0dc8);
  return;
}



/* Entry: 10b77d300; end: 10b77d303; +[SOJUGalleryServletSnapOperationBuilder withJUGalleryServletSnapOperation:] */

void FUN_10b77d300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77d304; end: 10b77d3f3; -[SOJUGalleryServletSnapParams initWithMemDataIds:snapId:sojuCopyFromSnapId:sojuCopyFromMemDataIds:mediaId:encryption:mediaMd5hash:mediaPhotoDnaHash:mediaType:overlay:overlayImageMd5hash:thumbnailMd5hash:createTime:orientation:overlayOrientation:location:timeZone:temperature:speed:battery:width:height:duration:size:backlogIndex:backlogTotal:cameraHardwareMountingDegrees:cameraFrontFacing:source:framing:contentScore:deviceId:customStickerPresent:isInfiniteDurationDeprecated:miniThumbnailBytes:infiniteDuration:thumbnailSize:overlayImageSize:captureTime:mediaFormat:mediaTranscoderVersion:mediaFormatProvided:multiSnapSegment:multiSnapGroupId:sensorBlob:toolVersions:mediaAttributes:snapAssets:assets:mediaBoltContentUrl:overlayImageBoltContentUrl:thumbnailBoltContentUrl:snapDocDeprecated:snapDocString:externalMetadata:decryption:] */

void FUN_10b77d304(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77d3f4; end: 10b77d90f; +[SOJUGalleryServletSnapParams registerMessageFields:] */

void FUN_10b77d3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2c48;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b77d9b4();
  func_0x00010b77d954();
  func_0x00010b77d910();
  func_0x00010b77d944(param_3,param_2,PTR_s_sojuCopyFromSnapId_1125461b8,
                      &PTR____CFConstantStringClassReference_110f7e9d8,2);
  puVar1 = PTR_s_sojuCopyFromMemDataIds_1125461c0;
  _objc_opt_class(PTR_PTR_1126d2c48);
  func_0x00010b77d9b4();
  func_0x00010b77d990(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7e9f8,2);
  func_0x00010b77d910();
  func_0x00010b77d97c();
  func_0x00010b77d944();
  func_0x00010b77d910();
  func_0x00010b77d910();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d944();
  func_0x00010b77d910();
  func_0x00010b77d910();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  _objc_opt_class(PTR_PTR_1126d8400);
  func_0x00010b77d99c();
  func_0x00010b77d990();
  func_0x00010b77d910();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d97c();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  _objc_opt_class(PTR_PTR_1126e0de0);
  func_0x00010b77d99c();
  func_0x00010b77d990();
  _objc_opt_class(PTR_PTR_1126cf0d8);
  func_0x00010b77d99c();
  func_0x00010b77d990();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d910();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d970(param_3,param_2,PTR_s_isInfiniteDurationDeprecated_112545f60,
                      &PTR____CFConstantStringClassReference_110ed8a58,2,0);
  func_0x00010b77d910();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010b77d930();
  func_0x00010b77d970();
  func_0x00010bf06b60(param_3,param_2,PTR_s_mediaFormat_11260ee28,0,1,6,0,FUN_10b77c58c,
                      FUN_10b77c6b4,0);
  func_0x00010b77d910();
  func_0x00010b77d930();
  func_0x00010b77d970();
  _objc_opt_class(PTR_PTR_1126e0de8);
  func_0x00010b77d9b4();
  func_0x00010b77d954();
  func_0x00010b77d910();
  _objc_opt_class(PTR_PTR_1126e0df0);
  func_0x00010b77d9b4();
  func_0x00010b77d954();
  _objc_opt_class(PTR_PTR_1126e0400);
  func_0x00010b77d954();
  _objc_opt_class(PTR_PTR_1126d7f88);
  func_0x00010b77d954();
  _objc_opt_class(PTR_PTR_1126e0e48);
  func_0x00010b77d954();
  func_0x00010b77d970(param_3,param_2,PTR_s_assets_1125a0860,0,0,7);
  func_0x00010c19a460(param_3,param_2,0xadcbb093e0888f);
  func_0x00010b77d910();
  func_0x00010b77d910();
  func_0x00010b77d910();
  func_0x00010b77d970(param_3,param_2,PTR_s_snapDocDeprecated_112545fc0,
                      &PTR____CFConstantStringClassReference_110f7e898,2,7);
  func_0x00010c18ec00(param_3);
  func_0x00010c19a460(param_3,param_2,0xd0aa9ffabca85f);
  func_0x00010b77d910();
  func_0x00010b77d910();
  func_0x00010b77d97c();
  func_0x00010b77d944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77d910; end: 10b77d9bf;  */

void FUN_10b77d910(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77d9c0; end: 10b77d9cb; +[SOJUGalleryServletSnapParamsBuilder messageClass] */

void FUN_10b77d9c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d58);
  return;
}



/* Entry: 10b77d9cc; end: 10b77d9cf; +[SOJUGalleryServletSnapParamsBuilder withJUGalleryServletSnapParams:] */

void FUN_10b77d9cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77d9d0; end: 10b77da1f; -[SOJUGalleryServletSnapResult initWithSnapId:statusCode:debugInfo:mediaUploaded:mediaUrl:overlayUrl:thumbnailUrl:mediaUploadHeaders:overlayUploadHeaders:thumbnailUploadHeaders:mediaRedirectUri:overlayImageRedirectUri:thumbnailRedirectUri:snapAssets:assets:thumbnailDirectDownloadUrl:overlayDirectDownloadUrl:mediaDirectDownloadUrl:] */

void FUN_10b77d9d0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77da20; end: 10b77dbfb; +[SOJUGalleryServletSnapResult registerMessageFields:] */

void FUN_10b77da20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77dc54();
  func_0x00010b77dc30();
  func_0x00010b77dc1c();
  func_0x00010b77dc30();
  func_0x00010b77dbfc();
  func_0x00010b77dc1c();
  func_0x00010b77dc30();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
  func_0x00010b77dc3c();
  func_0x00010b77dc30();
  func_0x00010b77dc4c();
  func_0x00010b77dc3c();
  func_0x00010b77dc30();
  func_0x00010b77dc4c();
  func_0x00010b77dc3c();
  func_0x00010b77dc30();
  func_0x00010b77dc4c();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
  _objc_opt_class(PTR_PTR_1126e0e50);
  func_0x00010b77dc54();
  func_0x00010bf06b60();
  func_0x00010b77dc30(param_3,param_2,PTR_s_assets_1125a0860,0,0,7);
  func_0x00010b77dc4c();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
  func_0x00010b77dbfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77dbfc; end: 10b77dc67;  */

void FUN_10b77dbfc(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77dc68; end: 10b77dce7;  */

undefined8 FUN_10b77dc68(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
  func_0x00010b77dd3c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x8ad415f;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29e78;
    func_0x00010b77dd3c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffc6f4e594;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e29e98;
      func_0x00010b77dd3c();
      uVar2 = 0xffffffffa90ba3ef;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b77dce8; end: 10b77dd43;  */

undefined ** FUN_10b77dce8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x390b1a6c) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e29e78;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
  if (param_1 != 0x8ad415f) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e29e98;
  if (param_1 != -0x56f45c11) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77dd44; end: 10b77dd6b; -[SOJUGalleryServletSnapTags initWithMemDataIds:timeZone:snapId:snapCreationTimeMs:tagVersion:tags:] */

void FUN_10b77dd44(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77dd6c; end: 10b77de4f; +[SOJUGalleryServletSnapTags registerMessageFields:] */

void FUN_10b77dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d2c48;
  puVar1 = PTR_s_memDataIds_11260f760;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
  func_0x00010b77de5c();
  func_0x00010b77de50();
  func_0x00010b77de5c();
  func_0x00010b77de50();
  func_0x00010b77de5c();
  func_0x00010b77de50();
  func_0x00010b77de5c();
  func_0x00010b77de50();
  func_0x00010b77de50(param_3,param_2,PTR_s_tags_112677b48,0,0,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77de50; end: 10b77de6f;  */

void FUN_10b77de50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77de70; end: 10b77de7b; +[SOJUGalleryServletSnapTagsBuilder messageClass] */

void FUN_10b77de70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e58);
  return;
}



/* Entry: 10b77de7c; end: 10b77de7f; +[SOJUGalleryServletSnapTagsBuilder withJUGalleryServletSnapTags:] */

void FUN_10b77de7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77de80; end: 10b77de9f; -[SOJUGalleryServletSnapTagsResult initWithSnapId:statusCode:] */

void FUN_10b77de80(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77dea0; end: 10b77df13; +[SOJUGalleryServletSnapTagsResult registerMessageFields:] */

void FUN_10b77dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_snapId_11266deb0;
  _objc_retain(param_3);
  FUN_10b77df14(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77df14(param_3,param_2,PTR_s_statusCode_1126725e0,0,1,5,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77df14; end: 10b77df1f;  */

void FUN_10b77df14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77df20; end: 10b77df3f; -[SOJUGalleryServletSnapUploadInfo initWithMediaUploadInfo:overlayUploadInfo:] */

void FUN_10b77df20(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77df40; end: 10b77df9b; +[SOJUGalleryServletSnapUploadInfo registerMessageFields:] */

void FUN_10b77df40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mediaUploadInfo_112546260;
  _objc_retain(param_3);
  FUN_10b77df9c(param_3,param_2,puVar1);
  FUN_10b77df9c(param_3,param_2,PTR_s_overlayUploadInfo_112546268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77df9c; end: 10b77dfb3;  */

void FUN_10b77df9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b77dfb4; end: 10b77dfbf; +[SOJUGalleryServletSnapUploadInfoBuilder messageClass] */

void FUN_10b77dfb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0dc0);
  return;
}



/* Entry: 10b77dfc0; end: 10b77dfc3; +[SOJUGalleryServletSnapUploadInfoBuilder withJUGalleryServletSnapUploadInfo:] */

void FUN_10b77dfc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77dfc4; end: 10b77e05f;  */

undefined8 FUN_10b77dfc4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ea18;
  func_0x00010b77e0cc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3ab6fff4;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ea38;
    func_0x00010b77e0cc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x86e2a33;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7ea58;
      func_0x00010b77e0cc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff9379293b;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ece478;
        func_0x00010b77e0cc();
        uVar2 = 0xffffffffa970ec1f;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b77e060; end: 10b77e0d3;  */

undefined ** FUN_10b77e060(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x86e2a33) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ea38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ea18;
  if (param_1 != 0x3ab6fff4) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ece478;
  if (param_1 != -0x568f13e1) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ea58;
  if (param_1 != -0x6c86d6c5) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77e0d4; end: 10b77e0db; +[SOJUGalleryServletTagsInOneSnap canInitFromProto] */

undefined8 FUN_10b77e0d4(void)

{
  return 0;
}



/* Entry: 10b77e0dc; end: 10b77e11f; -[SOJUGalleryServletTagsInOneSnap initWithLocationTagList:timeTagList:metaTagList:visualTagToConfidenceMap:languageId:tagCluster:locationCluster:caption:qualityScore:blurrinessScore:lightingQualityScore:noisinessScore:tinyClip:faceTag:] */

void FUN_10b77e0dc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77e120; end: 10b77e2a7; +[SOJUGalleryServletTagsInOneSnap registerMessageFields:] */

void FUN_10b77e120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_locationTagList_1126057f0;
  _objc_retain(param_3);
  func_0x00010b77e2e8(param_3,param_2,puVar1,0,1,7,in_x6,in_x7,0,1);
  func_0x00010b77e304();
  func_0x00010b77e2f4();
  func_0x00010b77e2e8();
  func_0x00010b77e304();
  func_0x00010b77e2f4();
  func_0x00010b77e2e8();
  func_0x00010b77e304();
  func_0x00010b77e2f4();
  func_0x00010b77e2e8();
  func_0x00010b77e304();
  func_0x00010b77e2a8();
  func_0x00010b77e2a8();
  func_0x00010b77e2a8();
  func_0x00010b77e2e8(param_3,param_2,PTR_s_caption_1125a9890,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b77e2c8();
  func_0x00010b77e2c8();
  func_0x00010b77e2c8();
  func_0x00010b77e2c8();
  func_0x00010b77e2a8();
  func_0x00010b77e2a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e2a8; end: 10b77e30b;  */

void FUN_10b77e2a8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b77e30c; end: 10b77e317; +[SOJUGalleryServletTagsInOneSnapBuilder messageClass] */

void FUN_10b77e30c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d8410);
  return;
}



/* Entry: 10b77e318; end: 10b77e31b; +[SOJUGalleryServletTagsInOneSnapBuilder withJUGalleryServletTagsInOneSnap:] */

void FUN_10b77e318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77e31c; end: 10b77e31f; -[SOJUGalleryServletUpdateEntriesRequest initWithEntries:] */

void FUN_10b77e31c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77e320; end: 10b77e397; +[SOJUGalleryServletUpdateEntriesRequest registerMessageFields:] */

void FUN_10b77e320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0da8;
  puVar1 = PTR_s_entries_1125c3598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e398; end: 10b77e3a3; +[SOJUGalleryServletUpdateEntriesRequestBuilder messageClass] */

void FUN_10b77e398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e60);
  return;
}



/* Entry: 10b77e3a4; end: 10b77e3a7; +[SOJUGalleryServletUpdateEntriesRequestBuilder withJUGalleryServletUpdateEntriesRequest:] */

void FUN_10b77e3a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77e3a8; end: 10b77e3d7; -[SOJUGalleryServletUpdateEntriesResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:entries:lastSeqnum:] */

void FUN_10b77e3a8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77e3d8; end: 10b77e4db; +[SOJUGalleryServletUpdateEntriesResponse registerMessageFields:] */

void FUN_10b77e3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b77e4dc(param_3,param_2,puVar1,0,1,5);
  func_0x00010b77e4e8();
  FUN_10b77e4dc();
  func_0x00010b77e4e8();
  FUN_10b77e4dc();
  func_0x00010b77e4e8();
  FUN_10b77e4dc();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77e4fc();
  func_0x00010b77e4e8();
  FUN_10b77e4dc();
  _objc_opt_class(PTR_PTR_1126e0db8);
  func_0x00010b77e4fc();
  func_0x00010b77e4e8();
  FUN_10b77e4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e4dc; end: 10b77e517;  */

void FUN_10b77e4dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77e518; end: 10b77e537; -[SOJUGalleryServletUpdateMediaResult initWithMediaId:statusCode:debugInfo:] */

void FUN_10b77e518(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77e538; end: 10b77e5bb; +[SOJUGalleryServletUpdateMediaResult registerMessageFields:] */

void FUN_10b77e538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_mediaId_11260ee78;
  _objc_retain(param_3);
  FUN_10b77e5bc(param_3,param_2,puVar1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_statusCode_1126725e0,0,1,5,0,0,0,0);
  FUN_10b77e5bc(param_3,param_2,PTR_s_debugInfo_1125b7228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e5bc; end: 10b77e5d3;  */

void FUN_10b77e5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b77e5d4; end: 10b77e5ff; -[SOJUGalleryServletUpdateSnapsResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:snaps:] */

void FUN_10b77e5d4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77e600; end: 10b77e6ef; +[SOJUGalleryServletUpdateSnapsResponse registerMessageFields:] */

void FUN_10b77e600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_serviceStatusCode_112635848;
  _objc_retain(param_3);
  FUN_10b77e6f0(param_3,param_2,puVar1,0,1,5);
  func_0x00010b77e6fc();
  FUN_10b77e6f0();
  func_0x00010b77e6fc();
  FUN_10b77e6f0();
  func_0x00010b77e6fc();
  FUN_10b77e6f0();
  _objc_opt_class(PTR_PTR_1126e0d68);
  func_0x00010b77e710();
  func_0x00010b77e6fc();
  FUN_10b77e6f0();
  _objc_opt_class(PTR_PTR_1126e0da0);
  func_0x00010b77e710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e6f0; end: 10b77e72b;  */

void FUN_10b77e6f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77e72c; end: 10b77e72f; -[SOJUGalleryServletUploadTagsRequest initWithSnapTagsList:] */

void FUN_10b77e72c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77e730; end: 10b77e7a7; +[SOJUGalleryServletUploadTagsRequest registerMessageFields:] */

void FUN_10b77e730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0e58;
  puVar1 = PTR_s_snapTagsList_1125462b8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77e7a8; end: 10b77e7b3; +[SOJUGalleryServletUploadTagsRequestBuilder messageClass] */

void FUN_10b77e7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0e68);
  return;
}



/* Entry: 10b77e7b4; end: 10b77e7b7; +[SOJUGalleryServletUploadTagsRequestBuilder withJUGalleryServletUploadTagsRequest:] */

void FUN_10b77e7b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77e7b8; end: 10b77e7e3; -[SOJUGalleryServletUploadTagsResponse initWithServiceStatusCode:userString:backoffTime:debugInfo:quota:totalEntryCount:snaps:] */

void FUN_10b77e7b8(void)

{
  func_0x00010c012ba0();
  return;
}


