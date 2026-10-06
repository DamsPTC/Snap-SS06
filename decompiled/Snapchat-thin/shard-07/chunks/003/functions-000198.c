/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105396de8; end: 105396e97;  */

void FUN_105396de8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar1 = PTR_PTR_1126b7f28;
  _objc_alloc(PTR_PTR_1126b7f28);
  uVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c11e0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003200(puVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105396e98; end: 105397393;  */

void FUN_105396e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7f08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c0d5880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7f00;
  _objc_alloc(PTR_PTR_1126b7f00);
  puVar5 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f280(puVar4);
  _objc_release(param_2);
  _objc_release(puVar5);
  puVar6 = PTR_PTR_1126b7f20;
  _objc_alloc(PTR_PTR_1126b7f20);
  func_0x00010c028300();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b7f88;
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf54340(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105397394; end: 10539754b; -[SCInterimPayloadProcessor transformDownloadedBytes:readStream:transformParams:mediaContextType:] */

/* WARNING: Removing unreachable block (ram,0x000105397438) */

void FUN_105397394(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfcb5a0(param_4);
  uVar1 = param_4;
  func_0x00010bfc48c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b7fa8;
  _objc_alloc(PTR_PTR_1126b7fa8);
  func_0x00010c008360();
  _objc_release(param_5);
  _objc_retain(0);
  if (param_6 < 0x2d) {
    if ((1L << (param_6 & 0x3f) & 0x1ffdffbfefffU) == 0) {
      if ((1L << (param_6 & 0x3f) & 0x200001000U) == 0) {
        param_1 = param_3;
        func_0x000105397038(param_3,uVar1,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bee7a40(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = param_1;
      func_0x00010b7f5650();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    else {
      puVar3 = PTR_PTR_1126b7fb0;
      _objc_alloc(PTR_PTR_1126b7fb0);
      func_0x00010c010880();
    }
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10539754c; end: 105397797; -[SCInterimPayloadProcessor _validateLensData:transformParams:writeStream:] */

void FUN_10539754c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c091e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar7 = 0;
  if (lVar1 != 0) {
    lVar7 = param_4;
    func_0x00010c091e60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010bf38ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar7);
    if (lVar3 == 0) {
      lVar7 = param_4;
      func_0x00010c091e60(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010c23c340();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c23c2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar7);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar7 = param_4;
      func_0x00010c091e60(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010bf38ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar4,param_2,lVar2,4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar7);
      lStack_58 = 0;
      func_0x00010c298880(PTR_PTR_1126b7fb8,param_2,puVar4,param_3,&lStack_58);
      lVar7 = lStack_58;
      _objc_retain(lStack_58);
      _objc_release(puVar4);
      if (lVar7 != 0) goto LAB_105397760;
    }
    puVar4 = PTR_PTR_1126b7f98;
    _objc_alloc(PTR_PTR_1126b7f98);
    uVar5 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c04b840(puVar4,param_2,0,uVar5);
    puVar6 = PTR_PTR_1126b7fa0;
    _objc_alloc(PTR_PTR_1126b7fa0);
    func_0x00010c046c80();
    func_0x00010c11c5c0(param_5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    lVar7 = 0;
  }
LAB_105397760:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 105397798; end: 105397853; -[SCContentDeliveryImpl initWithContentManager:cacheScope:] */

undefined1 *
FUN_105397798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7cd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined1 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105397854; end: 105397a7f; -[SCContentDeliveryImpl initWithContentManager:cacheScope:grapheneRegistry:userBlizzard:useStreamingRequestHandle:applicationLifecycleEvents:] */

undefined8 *
FUN_105397854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e7cd8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar1[4] = param_4;
    puVar3 = PTR_PTR_1126b7f08;
    _objc_alloc_init();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar4 = puVar1[1];
    func_0x00010bf75dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105397a80; end: 105397aab;  */

void FUN_105397a80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf06240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105397aac; end: 105397af3; -[SCContentDeliveryImpl claimExistingContentWithContentBundle:newContentKey:] */

void FUN_105397aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf39ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105397af4; end: 105397bcb; -[SCContentDeliveryImpl claimExistingContent:newContentKey:] */

void FUN_105397af4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf39ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126af5d0;
  lVar3 = lVar1;
  if (lVar2 == 0) {
    func_0x00010c13ca20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105397bcc; end: 105397c13; -[SCContentDeliveryImpl linkContentForExistingCacheKey:contentReference:mediaContextType:] */

void FUN_105397bcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c099640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105397c14; end: 105397c1f; -[SCContentDeliveryImpl registerBoltContent:contentKey:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:] */

void FUN_105397c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be891f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerBoltContent_contentKey__11257fe18);
  return;
}



/* Entry: 105397c20; end: 105397c43; -[SCContentDeliveryImpl registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:completion:] */

void FUN_105397c20(void)

{
  func_0x00010be893c0();
  return;
}



/* Entry: 105397c44; end: 105397ddb; -[SCContentDeliveryImpl registerContentWithTransformParamsForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:transformParams:serializedFeatureMetadata:completion:] */

void FUN_105397c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c26f260(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,param_7);
  _objc_release(param_7);
  func_0x00010be89220(param_1,param_2,param_11,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  func_0x00010c127440(uVar4,param_2,param_3,puVar1,puVar2,puVar3,param_4,param_8,param_9,param_10,
                      param_1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105397ddc; end: 105397fdb; -[SCContentDeliveryImpl registerIfRequiredAndRetrieveContentForContentKey:request:encryptionKey:encryptionIV:pageInfo:expirationDate:isEligibleForStreaming:completion:] */

void FUN_105397ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(puVar1);
  _objc_retain(param_11);
  func_0x00010c126160(param_1);
  _objc_retain(puVar1);
  _objc_release(param_11);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105397fdc; end: 105398023;  */

void FUN_105397fdc(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ed40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105398024; end: 1053982cf; -[SCContentDeliveryImpl retrieveContentWithContentBundle:pageInfo:completion:] */

void FUN_105398024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  func_0x00010c0291a0();
  puVar3 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  func_0x00010c03cd40();
  _objc_release(param_4);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar6 = PTR_PTR_1126b7fd8;
    _objc_alloc();
    func_0x00010c03eda0();
    puVar5 = PTR_PTR_1126b7fe0;
    _objc_alloc(PTR_PTR_1126b7fe0);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1053982d0;
    puStack_78 = &UNK_11086eb28;
    _objc_retain(puVar6);
    puStack_70 = puVar6;
    puStack_68 = param_5;
    _objc_retain(param_5);
    func_0x00010bffada0(puVar5,param_2,&puStack_90);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c13e620(uVar4,param_2,param_3,puVar3,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1ebc60(puVar6,param_2,uVar4);
    _objc_retain(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(puStack_68);
    _objc_release(puStack_70);
    puVar5 = param_5;
    param_5 = puVar6;
  }
  else {
    puVar5 = PTR_PTR_1126b7fe0;
    _objc_alloc(PTR_PTR_1126b7fe0);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105398330;
    puStack_a0 = &UNK_110860410;
    puStack_98 = param_5;
    _objc_retain(param_5);
    func_0x00010bffada0(puVar5,param_2,&puStack_b8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c13e620(uVar4,param_2,param_3,puVar3,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar6 = PTR_PTR_1126b7fe8;
    _objc_alloc(PTR_PTR_1126b7fe8);
    func_0x00010c003220();
    _objc_release(uVar4);
    _objc_release(puVar5);
    puVar5 = puStack_98;
  }
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1053982d0; end: 10539832f;  */

void FUN_1053982d0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010bfc68a0(), (int)lVar1 != 0)) {
    func_0x00010c20e5e0(*(undefined8 *)(param_1 + 0x20));
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105398330; end: 10539833b;  */

void FUN_105398330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105398338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10539833c; end: 105398467; -[SCContentDeliveryImpl retrieveContentDataForContentKey:pageInfo:completion:] */

void FUN_10539833c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  uVar3 = param_3;
  func_0x00010c0c46a0(param_3);
  func_0x00010c0291a0(puVar2,param_2,uVar3,puVar1,4,500,0,0);
  puVar4 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  func_0x00010c03cd40();
  _objc_release(param_4);
  func_0x00010c13e4a0(param_1,param_2,param_3,puVar4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105398468; end: 1053986c3; -[SCContentDeliveryImpl retrieveContentDataForContentKey:requestContext:completion:] */

void FUN_105398468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c46a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x10539857c;
  puStack_60 = &UNK_1108801b8;
  uStack_58 = param_3;
  uStack_50 = uVar1;
  uStack_48 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c13e5c0(param_1,param_2,param_3,param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053986c4; end: 1053986cf; -[SCContentDeliveryImpl retrieveContentResultForContentKey:pageInfo:completion:] */

void FUN_1053986c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_retrieveContentResultForContentK_11262d380,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1053986d0; end: 1053987af; -[SCContentDeliveryImpl retrieveContentResultForContentKey:pageInfo:switchBoardKey:completion:] */

void FUN_1053986d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1378;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c46a0(param_3);
  func_0x00010bf6a940(puVar2,param_2,uVar1,param_4,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c13e5a0(param_1,param_2,param_3,0,puVar2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053987b0; end: 1053987bf; -[SCContentDeliveryImpl retrieveContentResultForContentKey:requestContext:completion:] */

void FUN_1053987b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_retrieveContentResultForContentK_11262d388,param_3,0,param_4,param_5);
  return;
}



/* Entry: 1053987c0; end: 105398c6f; -[SCContentDeliveryImpl retrieveContentResultForContentKey:prefetchSignals:requestContext:completion:] */

void FUN_1053987c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0c46a0(param_3);
  func_0x00010c0c46a0(param_3);
  uVar2 = param_5;
  func_0x00010c11fca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27bc40();
  func_0x00010becb160(param_1);
  _objc_release(uVar2);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar6 = PTR_PTR_1126b7fd8;
    _objc_alloc();
    func_0x00010c03eda0();
    puVar3 = PTR_PTR_1126b7fe0;
    _objc_alloc(PTR_PTR_1126b7fe0);
    _objc_retain(puVar6);
    _objc_retain(param_6);
    func_0x00010bffada0(puVar3);
    _objc_release(param_6);
    puVar5 = puVar6;
  }
  else {
    puVar3 = PTR_PTR_1126b7fe0;
    _objc_alloc(PTR_PTR_1126b7fe0);
    _objc_retain(param_6);
    func_0x00010bffada0(puVar3);
    puVar6 = (undefined *)0x0;
    puVar5 = param_6;
  }
  _objc_release(puVar5);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c13e460();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar6 == (undefined *)0x0) || (lVar4 == 0)) {
    puVar5 = PTR_PTR_1126b7fe8;
    _objc_alloc(PTR_PTR_1126b7fe8);
    func_0x00010c003220();
  }
  else {
    func_0x00010c1ebc60(puVar6);
    _objc_retain(puVar6);
    puVar5 = puVar6;
  }
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105398c38);
  (*pcVar1)();
}



/* Entry: 105398c70; end: 105398cdf;  */

void FUN_105398c70(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010bfc68a0(), (int)lVar1 != 0)) {
    func_0x00010c20e5e0(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105398ce0; end: 105398cfb;  */

void FUN_105398ce0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000105398cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105398cfc; end: 105398d03; -[SCContentDeliveryImpl retrieveCachedContentForKey:pageInfo:] */

void FUN_105398cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_retrieveCachedContent_pageInfo__11262d2d8);
  return;
}



/* Entry: 105398d04; end: 105398f27; -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:serializedFeatureMetadata:completion:] */

void FUN_105398d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_retain(param_3);
  _objc_retain(param_13);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(puVar1);
  func_0x00010be893c0(param_1);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_13);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105398f28; end: 105398f87;  */

void FUN_105398f28(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105398f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 105398f88; end: 105398fbf; -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:completion:] */

void FUN_105398f88(void)

{
  func_0x00010bf88ac0();
  return;
}



/* Entry: 105398fc0; end: 1053991f7; -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:transformParams:serializedFeatureMetadata:completion:] */

void FUN_105398fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_retain(param_3);
  _objc_retain(param_14);
  _objc_copyWeak(auStack_80,auStack_70);
  uStack_78 = param_7;
  _objc_retain(param_8);
  _objc_retain(puVar1);
  func_0x00010c1261a0(param_1);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053991f8; end: 105399257;  */

void FUN_1053991f8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105399254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 105399258; end: 1053994bb; -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:serializedFeatureMetadata:completion:] */

void FUN_105399258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined1 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_70,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_6 != (undefined **)0x0) {
    ppuVar2 = param_6;
  }
  _objc_retain(ppuVar2);
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_retain(param_3);
  _objc_retain(in_stack_00000020);
  _objc_copyWeak(auStack_80,auStack_70);
  uStack_78 = param_7;
  _objc_retain(param_8);
  _objc_retain(puVar3);
  func_0x00010be891e0(param_1);
  _objc_retain(puVar3);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_80);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053994bc; end: 10539951b;  */

void FUN_1053994bc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105399518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 10539951c; end: 105399557; -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:completion:] */

void FUN_10539951c(void)

{
  func_0x00010bf889a0();
  return;
}



/* Entry: 105399558; end: 105399783; -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:transformParams:serializedFeatureMetadata:completion:] */

void FUN_105399558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_retain(param_3);
  _objc_retain(param_14);
  _objc_copyWeak(auStack_80,auStack_70);
  uStack_78 = param_9;
  _objc_retain(param_7);
  _objc_retain(puVar1);
  func_0x00010c1261a0(param_1);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105399784; end: 1053997df;  */

void FUN_105399784(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001053997dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 1053997e0; end: 105399a3b; -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:serializedFeatureMetadata:completion:] */

void FUN_1053997e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c46a0(param_3);
  _objc_initWeak(auStack_70,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_6 != (undefined **)0x0) {
    ppuVar2 = param_6;
  }
  _objc_retain(ppuVar2);
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_retain(param_3);
  _objc_retain(in_stack_00000020);
  _objc_copyWeak(auStack_80,auStack_70);
  uStack_78 = param_9;
  _objc_retain(param_7);
  _objc_retain(puVar3);
  func_0x00010be891e0(param_1);
  _objc_retain(puVar3);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(in_stack_00000020);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105399a3c; end: 105399a97;  */

void FUN_105399a3c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105399a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1,0);
  return;
}



/* Entry: 105399a98; end: 105399bc7; -[SCContentDeliveryImpl saveLocalContent:contentKey:expirationDate:isAuthoritative:serializedFeatureMetadata:completion:] */

void FUN_105399a98(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0c46a0(param_5);
  if (param_6 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010c26f320(param_6);
    lVar3 = (long)(param_1 * 1000.0);
  }
  puVar1 = PTR_PTR_1126b7ff8;
  _objc_alloc(PTR_PTR_1126b7ff8);
  func_0x00010bffada0();
  _objc_release(param_9);
  puVar2 = PTR_PTR_1126b8000;
  _objc_alloc(PTR_PTR_1126b8000);
  func_0x00010c0083e0();
  _objc_release(param_4);
  func_0x00010c1269a0(*(undefined8 *)(param_2 + 0x10),param_3,param_5,lVar3,puVar2,param_7,param_8,
                      puVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105399bc8; end: 105399bd3; -[SCContentDeliveryImpl saveLocalContent:contentKey:expirationDate:isAuthoritative:completion:] */

void FUN_105399bc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveLocalContent_contentKey_expi_112630440);
  return;
}



/* Entry: 105399bd4; end: 105399c1f; -[SCContentDeliveryImpl queryContentStatusForContentKey:] */

undefined8 FUN_105399bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11d1c0(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105399c20; end: 105399c8b; -[SCContentDeliveryImpl queryZipEntryContentStatusFor:zipEntryNamePrefixes:] */

undefined8 FUN_105399c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11db80(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105399c8c; end: 105399d5f; -[SCContentDeliveryImpl queryContentStatusForContentKeyAsync:completion:] */

void FUN_105399c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  puVar1 = PTR_PTR_1126b8008;
  _objc_alloc(PTR_PTR_1126b8008);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105399d60;
  puStack_40 = &UNK_110852668;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bffada0(puVar1,param_2,&puStack_58);
  func_0x00010c11d1e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105399d60; end: 105399d6b;  */

void FUN_105399d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105399d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105399d6c; end: 105399e5f; -[SCContentDeliveryImpl queryZipEntryContentStatusAsyncFor:zipEntryNamePrefixes:completion:] */

void FUN_105399d6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  puVar1 = PTR_PTR_1126b8008;
  _objc_alloc(PTR_PTR_1126b8008);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105399e60;
  puStack_50 = &UNK_110852668;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010bffada0(puVar1,param_2,&puStack_68);
  func_0x00010c11dba0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105399e60; end: 105399e6b;  */

void FUN_105399e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105399e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105399e6c; end: 105399f3b; -[SCContentDeliveryImpl removeContentForContentKeys:completion:] */

void FUN_105399e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7f40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105399f3c;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bffada0(puVar1,param_2,&puStack_58);
  func_0x00010c12b9e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105399f3c; end: 105399f4f;  */

void FUN_105399f3c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105399f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105399f50; end: 10539a00b; -[SCContentDeliveryImpl removeAllContentForContextType:completion:] */

void FUN_105399f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7f40;
  _objc_alloc(PTR_PTR_1126b7f40);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10539a00c;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bffada0(puVar1,param_2,&puStack_58);
  func_0x00010c12ac40(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10539a00c; end: 10539a01f;  */

void FUN_10539a00c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010539a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10539a020; end: 10539a113; -[SCContentDeliveryImpl associateRequestForContentKey:prefetchSignals:requestContext:completion:] */

void FUN_10539a020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10539a114;
  puStack_50 = &UNK_110860410;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010bf0bdc0(param_1,param_2,param_3,param_4,param_5,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10539a114; end: 10539a183;  */

void FUN_10539a114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaaa0(param_2);
  uVar2 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10539a184; end: 10539a33b; -[SCContentDeliveryImpl associateRequestForContentKey:prefetchSignals:requestContext:contentResultCompletion:] */

void FUN_10539a184(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0c46a0(param_3);
  uVar4 = param_3;
  func_0x00010c0c46a0(param_3);
  uVar1 = param_5;
  func_0x00010c11fca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27bc40();
  func_0x00010becb160(param_1,param_2,uVar4,uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b7fe0;
  _objc_alloc(PTR_PTR_1126b7fe0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10539a33c;
  puStack_60 = &UNK_110860410;
  _objc_retain(param_6);
  uStack_58 = param_6;
  func_0x00010bffada0(puVar3,param_2,&puStack_78);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR_PTR_1126b8010;
    _objc_alloc(PTR_PTR_1126b8010);
    func_0x00010c0003a0();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c13e460(uVar4,param_2,param_3,param_5,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7fe8;
  _objc_alloc(PTR_PTR_1126b7fe8);
  func_0x00010c003220();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10539a33c; end: 10539a347;  */

void FUN_10539a33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010539a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10539a348; end: 10539a41b; -[SCContentDeliveryImpl releaseLocalAuthoritativeContentForContentKey:completionBlock:] */

void FUN_10539a348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  puVar1 = PTR_PTR_1126b7ff8;
  _objc_alloc(PTR_PTR_1126b7ff8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10539a41c;
  puStack_40 = &UNK_110842508;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bffada0(puVar1,param_2,&puStack_58);
  func_0x00010c128440(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10539a41c; end: 10539a42f;  */

void FUN_10539a41c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010539a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10539a430; end: 10539a52f; -[SCContentDeliveryImpl refreshContentAvailabilityForContentKeys:] */

void FUN_10539a430(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0c46a0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010c125160(*(undefined8 *)(param_1 + 0x10));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x10),PTR_s_appStateChanged__11259f230,3);
  return;
}



/* Entry: 10539a530; end: 10539a53b; -[SCContentDeliveryImpl appStateChangedToBackground] */

void FUN_10539a530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_appStateChanged__11259f230,3);
  return;
}



/* Entry: 10539a53c; end: 10539a567; -[SCContentDeliveryImpl stopObservingApplicationLifecycleEvents] */

void FUN_10539a53c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10539a568; end: 10539a5bf; -[SCContentDeliveryImpl createContentWriterForContentKey:] */

void FUN_10539a568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c46a0(param_3);
  func_0x00010bf555c0(uVar2,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10539a5c0; end: 10539a5cb; -[SCContentDeliveryImpl createContentWriterForMediaContextType:] */

void FUN_10539a5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf555d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_createContentWriter_contentKey__1125b2f18,param_3
             ,0);
  return;
}



/* Entry: 10539a5cc; end: 10539a667; -[SCContentDeliveryImpl monitorDownloadProgressForKey:onProgress:onError:] */

void FUN_10539a5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8018;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c031660();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c0d0c00(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539a668; end: 10539a6f3; -[SCContentDeliveryImpl queryCachedContentMetadata:onSuccess:onError:] */

void FUN_10539a668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8020;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c031740();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c11d140(*(undefined8 *)(param_1 + 0x10),param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539a6f4; end: 10539a787; -[SCContentDeliveryImpl queryCachedContentMetadataWithAttribution:contentAttribution:onSuccess:onError:] */

void FUN_10539a6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8020;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c031740();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c11d180(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539a788; end: 10539a797; -[SCContentDeliveryImpl retrieveCompleteContentForStreamingResult:serialCallbackQueue:completion:] */

void FUN_10539a788(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfcb5a0();
  if (lVar1 < 1) {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126d64a0;
    _objc_alloc(PTR_PTR_1126d64a0);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bffae40(puVar2);
    func_0x00010c11c020(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10539a798; end: 10539a7ff; -[SCContentDeliveryImpl logConsumedForContentKey:useCase:bytesRange:] */

void FUN_10539a798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  func_0x00010c0a3960(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10539a800; end: 10539a8c3; -[SCContentDeliveryImpl _registerCallbackFromCompletion:contentKey:] */

void FUN_10539a800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7ff8;
  _objc_alloc(PTR_PTR_1126b7ff8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10539a8c4;
  puStack_48 = &UNK_110858070;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bffada0(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10539a8c4; end: 10539a8cf;  */

void FUN_10539a8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010539a8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10539a8d0; end: 10539aabb; -[SCContentDeliveryImpl _downloadContentForContentKey:userInitiated:completePrefetch:requestContext:cancelableGroup:completion:] */

void FUN_10539a8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_7;
  func_0x00010c06e0e0();
  puVar6 = PTR_PTR_1126b1378;
  if ((uVar1 & 1) == 0) {
    if (param_4 == 0) {
      puVar6 = PTR_PTR_1126b8010;
      _objc_alloc(PTR_PTR_1126b8010);
      func_0x00010c0003a0();
      func_0x00010bf0bda0(param_1,param_2,param_3,puVar6,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_3;
      func_0x00010c0c46a0(param_3);
      uVar3 = param_6;
      func_0x00010c27ef40(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_6;
      func_0x00010c11fca0(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c27bc40();
      func_0x00010c291580(puVar6,param_2,uVar2,uVar3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10539aabc;
      puStack_70 = &UNK_110860410;
      _objc_retain(param_8);
      uStack_68 = param_8;
      func_0x00010c13e5c0(param_1,param_2,param_3,puVar6,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_68);
    }
    _objc_release(puVar6);
    func_0x00010bef7460(param_7,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10539aabc; end: 10539ab2b;  */

void FUN_10539aabc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaaa0(param_2);
  uVar2 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10539ab2c; end: 10539ac2f; -[SCContentDeliveryImpl _downloadContentForContentKey:completePrefetch:requestContext:cancelableGroup:completion:] */

void FUN_10539ab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_6;
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10539ac30;
    puStack_50 = &UNK_110860410;
    _objc_retain(param_7);
    uStack_48 = param_7;
    func_0x00010c13e5c0(param_1,param_2,param_3,param_5,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(param_6,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uStack_48);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10539ac30; end: 10539ac9f;  */

void FUN_10539ac30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaaa0(param_2);
  uVar2 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10539aca0; end: 10539ae1b; -[SCContentDeliveryImpl _registerBoltContent:contentKey:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:] */

void FUN_10539aca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0da520(puVar1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c26f260(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,param_8);
  _objc_release(param_8);
  func_0x00010be89220(param_1,param_2,param_12,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  func_0x00010c126180(uVar4,param_2,param_4,param_3,param_5,puVar1,puVar2,puVar3,param_9);
  _objc_release(param_11);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539ae1c; end: 10539af97; -[SCContentDeliveryImpl _registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:] */

void FUN_10539ae1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c26f260(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,param_7);
  _objc_release(param_7);
  func_0x00010be89220(param_1,param_2,param_10,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  func_0x00010c127420(uVar4,param_2,param_3,puVar1,puVar2,puVar3,param_4,param_8,param_9,param_1);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539af98; end: 10539b0bf; -[SCContentDeliveryImpl _handleRegistrationCompletionForContentKey:regSuccess:pageInfo:cancelableGroup:completion:] */

void FUN_10539af98(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 & 1) == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0,1);
  }
  else {
    uVar1 = param_6;
    func_0x00010c06e0e0();
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_7);
      func_0x00010c13e480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7460(param_6);
      _objc_release(param_1);
      _objc_release(param_7);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10539b0c0; end: 10539b11f;  */

void FUN_10539b0c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c09c1e0(param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_4,param_3 == 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10539b120; end: 10539b12b; +[SCContentDeliveryImpl _resolvedSuccessWithStatus:] */

bool FUN_10539b120(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 10539b12c; end: 10539b12f; -[SCContentDeliveryImpl _temporaryAssertionForMemoriesWithContextType:mdpCommonTrigger:] */

void FUN_10539b12c(void)

{
  return;
}



/* Entry: 10539b130; end: 10539b18f; -[SCContentDeliveryImpl .cxx_destruct] */

void FUN_10539b130(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539b190; end: 10539b25f; -[SCContentObjectResolvingLRUWrapper initWithContentObjectResolver:countLimit:networkMappingProvider:] */

undefined1 *
FUN_10539b190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7ce0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10539b260; end: 10539b287; -[SCContentObjectResolvingLRUWrapper nativeContentResolver] */

void FUN_10539b260(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10539b288; end: 10539b387; -[SCContentObjectResolvingLRUWrapper resolveContentUrl:mediaId:] */

void FUN_10539b288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0c39e0(*(undefined8 *)(param_1 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c13a700(lVar2,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,lVar2,param_3);
    }
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10539b388; end: 10539b38f; -[SCContentObjectResolvingLRUWrapper convertUrlToContentObject:] */

void FUN_10539b388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_convertUrlToContentObject__1125b1f40);
  return;
}



/* Entry: 10539b390; end: 10539b3cb; -[SCContentObjectResolvingLRUWrapper .cxx_destruct] */

void FUN_10539b390(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539b3cc; end: 10539b477; -[SCNNetworkManagerProgressCallbackImpl initWithOnProgressBlock:onErrorBlock:] */

undefined1 *
FUN_10539b3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10539b478; end: 10539b50f; -[SCNNetworkManagerProgressCallbackImpl onProgress:] */

void FUN_10539b478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProgress_1126b8028;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0339c0();
  func_0x00010c276f80(param_3);
  func_0x00010c218b40(puVar1);
  func_0x00010bf43fa0(param_3);
  _objc_release(param_3);
  func_0x00010c17fae0(puVar1);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10539b510; end: 10539b553; -[SCNNetworkManagerProgressCallbackImpl onError:] */

void FUN_10539b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010b7f5498(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10539b554; end: 10539b583; -[SCNNetworkManagerProgressCallbackImpl .cxx_destruct] */

void FUN_10539b554(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539b584; end: 10539b62f; -[SCNQueryCachedContentMetadataCallbackImpl initWithOnSuccessBlock:onErrorBlock:] */

undefined1 *
FUN_10539b584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7cf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10539b630; end: 10539b63f; -[SCNQueryCachedContentMetadataCallbackImpl onSuccess:] */

void FUN_10539b630(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010539b63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10539b640; end: 10539b683; -[SCNQueryCachedContentMetadataCallbackImpl onError:] */

void FUN_10539b640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010b7f5498(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10539b684; end: 10539b6b3; -[SCNQueryCachedContentMetadataCallbackImpl .cxx_destruct] */

void FUN_10539b684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539b6b4; end: 10539b6c3;  */

void FUN_10539b6b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_SHA256Base64String__11254e300,param_1);
  return;
}



/* Entry: 10539b6c4; end: 10539b767; -[SCSimpleContentFetcherImpl initWithContentDelivery:queue:] */

undefined1 *
FUN_10539b6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7cf8;
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



/* Entry: 10539b768; end: 10539badf; -[SCSimpleContentFetcherImpl retrieveContentWithConfig:completion:] */

void FUN_10539b768(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lVar2 = param_3;
  func_0x00010c27d160(param_3);
  func_0x00010bf65600((double)(ulong)(lVar2 * 0x3c));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  lVar2 = param_3;
  func_0x00010bf4d200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10539bae0;
  puStack_b0 = &UNK_1108802a8;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  lStack_a8 = param_3;
  _objc_retain(puVar3);
  puStack_a0 = puVar3;
  _objc_retain(puVar4);
  puStack_98 = puVar4;
  _objc_retain(param_4);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10539bb38;
  puStack_f8 = &UNK_1108802d8;
  uStack_90 = param_4;
  _objc_copyWeak(auStack_d0,auStack_80);
  _objc_retain(param_3);
  lStack_f0 = param_3;
  _objc_retain(puVar3);
  puStack_e8 = puVar3;
  _objc_retain(puVar4);
  puStack_e0 = puVar4;
  _objc_retain(param_4);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_10539bb90;
  puStack_148 = &UNK_110880338;
  uStack_d8 = param_4;
  _objc_copyWeak(auStack_118,auStack_80);
  _objc_retain(param_3);
  lStack_140 = param_3;
  _objc_retain(puVar3);
  puStack_138 = puVar3;
  _objc_retain(puVar4);
  puStack_130 = puVar4;
  _objc_retain(param_4);
  uStack_128 = param_1;
  uStack_120 = param_4;
  _objc_copyWeak(auStack_168,auStack_80);
  _objc_retain(param_3);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(param_4);
  func_0x00010c0bcf80(lVar2);
  _objc_release(lVar2);
  _objc_retain(puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_168);
  _objc_release(uStack_120);
  _objc_release(puStack_130);
  _objc_release(puStack_138);
  _objc_release(lStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_release(puStack_e8);
  _objc_release(lStack_f0);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(lStack_a8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10539bae0; end: 10539bb8f;  */

void FUN_10539bae0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be890e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10539bb90; end: 10539bc9b;  */

void FUN_10539bb90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010c297260(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10539bc9c; end: 10539bcf3;  */

void FUN_10539bc9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be890e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10539bcf4; end: 10539bdff;  */

void FUN_10539bcf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010c297260(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


