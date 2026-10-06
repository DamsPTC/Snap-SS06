/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055e1890; end: 1055e189b; -[SCUnlockableUnlockAdapter .cxx_destruct] */

void FUN_1055e1890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e189c; end: 1055e190f; -[SCLensMetadataLensSnapchatParser initWithLensSnapchatMapper:] */

undefined1 * FUN_1055e189c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9428;
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



/* Entry: 1055e1910; end: 1055e1a93; -[SCLensMetadataLensSnapchatParser lensMetadataFromLensMetadataResponse:type:expirationDate:] */

void FUN_1055e1910(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = param_3;
  func_0x00010c098340();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_5 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_5);
      puVar1 = param_5;
    }
    puVar2 = PTR_PTR_1126bbee8;
    _objc_alloc();
    func_0x00010c0259e0();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c098320(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1055e1a94;
    puStack_68 = &UNK_11089def8;
    uStack_60 = uVar3;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    _objc_retain(uVar3);
    lVar5 = lVar4;
    func_0x00010c0b8620(lVar4,param_2,&puStack_80,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1055e1a94; end: 1055e1aa3;  */

void FUN_1055e1a94(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c095110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensMetadataFromLensSnapchat_len_112602e50,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055e1aa4; end: 1055e1aaf; -[SCLensMetadataLensSnapchatParser .cxx_destruct] */

void FUN_1055e1aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e1ab0; end: 1055e1b23; -[SCUnlockableLensResponsesParser initWithLensSnapchatMapper:] */

undefined1 * FUN_1055e1ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9430;
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



/* Entry: 1055e1b24; end: 1055e1baf; -[SCUnlockableLensResponsesParser parseGetUnlocksResponseFromData:] */

void FUN_1055e1b24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bbef0;
  _objc_opt_class(PTR_PTR_1126bbef0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bbef8;
  func_0x00010c281200(PTR_PTR_1126bbef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e1bb0; end: 1055e1c57; -[SCUnlockableLensResponsesParser parseMetadataFromAddUnlockResponse:metadataParams:] */

void FUN_1055e1bb0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bbf00;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bbf08;
  func_0x00010be4b540(PTR_PTR_1126bbf08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e1c58; end: 1055e1d6b; -[SCUnlockableLensResponsesParser parseErrorTypeFromAddUnlockResponse:responseHeaders:] */

undefined * FUN_1055e1c58(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bbf00;
  _objc_opt_class(PTR_PTR_1126bbf00);
  puVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar1 = param_3;
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126bbf00;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)0x1;
        goto LAB_1055e1cd0;
      }
      goto LAB_1055e1ca4;
    }
    puVar3 = (undefined *)0x1;
  }
  else {
LAB_1055e1ca4:
    puVar3 = PTR_PTR_1126bbf08;
    func_0x00010c280de0(puVar1);
    func_0x00010bed14e0(puVar3);
  }
  _objc_release(puVar1);
LAB_1055e1cd0:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1055e1d6c; end: 1055e1e13; -[SCUnlockableLensResponsesParser parseMetadataFromFetchMetadataResponse:metadataParams:] */

void FUN_1055e1d6c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bbf10;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bbf08;
  func_0x00010be4b4c0(PTR_PTR_1126bbf08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055e1e14; end: 1055e1f27; -[SCUnlockableLensResponsesParser parseErrorTypeFromFetchMetadataResponse:responseHeaders:] */

undefined * FUN_1055e1e14(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bbf10;
  _objc_opt_class(PTR_PTR_1126bbf10);
  puVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar1 = param_3;
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126bbf10;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)0x1;
        goto LAB_1055e1e8c;
      }
      goto LAB_1055e1e60;
    }
    puVar3 = (undefined *)0x1;
  }
  else {
LAB_1055e1e60:
    puVar3 = PTR_PTR_1126bbf08;
    func_0x00010c280de0(puVar1);
    func_0x00010bed14e0(puVar3);
  }
  _objc_release(puVar1);
LAB_1055e1e8c:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1055e1f28; end: 1055e1fe7; +[SCUnlockableLensResponsesParser _lensMetadataFromUnlockResponse:lensSnapchatMapper:metadataParams:] */

void FUN_1055e1f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c281700();
  if ((int)uVar1 == 3) {
    uVar1 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4b480(param_1,param_2,uVar1,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e1fe8; end: 1055e2093; +[SCUnlockableLensResponsesParser _lensMetadataFromLensSnapchat:lensSnapchatMapper:metadataParams:] */

void FUN_1055e1fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bebd560(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c095100(uVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055e2094; end: 1055e2123; +[SCUnlockableLensResponsesParser _snapchatFieldDescriptorFromMetadataParams:] */

void FUN_1055e2094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bbee8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c097820(param_3);
  uVar3 = param_3;
  func_0x00010bf69520(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0259e0(puVar1,param_2,uVar2,0,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e2124; end: 1055e21b3; +[SCUnlockableLensResponsesParser _lensMetadataFromMetadataResponse:lensSnapchatMapper:metadataParams:] */

void FUN_1055e2124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4b480(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e21b4; end: 1055e21c3; +[SCUnlockableLensResponsesParser _unlockErrorFromUnlockStatus:] */

long FUN_1055e21b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 2U < 0x14) {
    lVar1 = (ulong)(param_3 - 2U) + 1;
  }
  return lVar1;
}



/* Entry: 1055e21c4; end: 1055e21cf; -[SCUnlockableLensResponsesParser .cxx_destruct] */

void FUN_1055e21c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e21d0; end: 1055e22a7; -[SCGtqAddUnlockNetworkPersistanceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_1055e21d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf18;
  _objc_alloc(PTR_PTR_1126bbf18);
  uVar2 = param_1;
  func_0x00010bfcfae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010befd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c016d00(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e22a8; end: 1055e249b; -[SCGtqAddUnlockNetworkRequest initWithGTQRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1055e22a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9438;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127267ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c2810a0();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127267b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127267b0) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c1d9820(puVar1);
    func_0x00010c1a9200(puVar1);
    func_0x00010c1659e0(puVar1);
    func_0x00010c1e3380(puVar1);
    func_0x00010c180f80(puVar1);
    func_0x00010c1c7660(puVar1);
    func_0x00010c1ec220(puVar1);
    puVar3 = PTR_PTR_1126bbf20;
    _objc_opt_class(PTR_PTR_1126bbf00);
    func_0x00010bdc1ea0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar1);
    _objc_release(puVar3);
    func_0x00010c1ed9a0(puVar1);
    func_0x00010c200b40(puVar1);
    func_0x00010c21d720(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055e249c; end: 1055e24cb; -[SCGtqAddUnlockNetworkRequest key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e249c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267b0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e24cc; end: 1055e2527; -[SCGtqAddUnlockNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e24cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267ac);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e2528; end: 1055e25ef; -[SCGtqAddUnlockNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf28;
  _objc_alloc(PTR_PTR_1126bbf28);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127267ac);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c0197c0(puVar1,param_2,uVar5,lVar2,lVar3,lVar4,param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e25f0; end: 1055e262f; -[SCGtqAddUnlockNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e25f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127267b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127267ac,0);
  return;
}



/* Entry: 1055e2630; end: 1055e2707; -[SCGtqGetUnlockablesNetworkPersistanceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_1055e2630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf30;
  _objc_alloc(PTR_PTR_1126bbf30);
  uVar2 = param_1;
  func_0x00010bfcfae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010befd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c016d00(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e2708; end: 1055e2987; -[SCGtqGetUnlockablesNetworkRequest initWithGTQRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1055e2708(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126e9440;
  puVar7 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_init_1125d9248);
  if (puVar7 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_1127267b4;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)((long)puVar7 + lVar8);
    *(long *)((long)puVar7 + lVar8) = param_3;
    _objc_release(uVar1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110def138;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar7 + (long)_DAT_1127267b8);
    *(undefined ***)((long)puVar7 + (long)_DAT_1127267b8) = ppuVar2;
    _objc_release(uVar6);
    _objc_release(uVar1);
    func_0x00010c1d9820(puVar7);
    func_0x00010c1a9200(puVar7);
    func_0x00010c1659e0(puVar7);
    func_0x00010c1e3380(puVar7);
    func_0x00010c180f80(puVar7);
    func_0x00010c1c7660(puVar7);
    func_0x00010c1ec220(puVar7);
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b19f8;
    puStack_78 = puVar3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bbf20;
    _objc_opt_class(PTR_PTR_1126bbef0);
    func_0x00010bdc1ea0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar7);
    _objc_release(puVar3);
    func_0x00010c1ed9a0(puVar7);
    func_0x00010c200b40(puVar7);
    func_0x00010c21d720(puVar7);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = *(undefined8 **)(param_3 + _DAT_1127267b8);
  _objc_retain(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 1055e2988; end: 1055e29b7; -[SCGtqGetUnlockablesNetworkRequest key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2988(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e29b8; end: 1055e2a13; -[SCGtqGetUnlockablesNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e29b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267b4);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e2a14; end: 1055e2adb; -[SCGtqGetUnlockablesNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2a14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf38;
  _objc_alloc(PTR_PTR_1126bbf38);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127267b4);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c0197c0(puVar1,param_2,uVar5,lVar2,lVar3,lVar4,param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e2adc; end: 1055e2b1b; -[SCGtqGetUnlockablesNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2adc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127267b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127267b4,0);
  return;
}



/* Entry: 1055e2b1c; end: 1055e2be7; -[SCGtqLensMetadataNetworkPersistanceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_1055e2b1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bbf40;
  _objc_alloc(PTR_PTR_1126bbf40);
  uVar2 = param_1;
  func_0x00010bfcfae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016ce0(puVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e2be8; end: 1055e2e53; -[SCGtqLensMetadataNetworkRequest initWithGTQRequest:host:path:additionalHttpHeaders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1055e2be8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9448;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127267bc;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)((long)puVar5 + lVar6);
    *(long *)((long)puVar5 + lVar6) = param_3;
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar5 + (long)_DAT_1127267c0);
    *(undefined **)((long)puVar5 + (long)_DAT_1127267c0) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c1d9820(puVar5);
    func_0x00010c1a9200(puVar5);
    func_0x00010c1659e0(puVar5);
    func_0x00010c1e3380(puVar5);
    func_0x00010c180f80(puVar5);
    func_0x00010c1c7660(puVar5);
    func_0x00010c1ec220(puVar5);
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bbf20;
    _objc_opt_class(PTR_PTR_1126bbf48);
    func_0x00010bdc1ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar5);
    _objc_release(puVar2);
    func_0x00010c1ed9a0(puVar5);
    func_0x00010c200b40(puVar5);
    func_0x00010c21d720(puVar5);
    func_0x00010c216b40(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined8 **)(param_3 + _DAT_1127267c0);
  _objc_retain(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1055e2e54; end: 1055e2e83; -[SCGtqLensMetadataNetworkRequest key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2e54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e2e84; end: 1055e2eb3; -[SCGtqLensMetadataNetworkRequest gtqRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267bc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e2eb4; end: 1055e2f0f; -[SCGtqLensMetadataNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2eb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267bc);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e2f10; end: 1055e2fcb; -[SCGtqLensMetadataNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bbf50;
  _objc_alloc(PTR_PTR_1126bbf50);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127267bc);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0197a0(puVar1,param_2,uVar4,lVar2,lVar3,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e2fcc; end: 1055e300b; -[SCGtqLensMetadataNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e2fcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127267c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127267bc,0);
  return;
}



/* Entry: 1055e300c; end: 1055e30e3; -[SCGtqMetadataNetworkPersistanceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_1055e300c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf58;
  _objc_alloc(PTR_PTR_1126bbf58);
  uVar2 = param_1;
  func_0x00010bfcfae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010befd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c016d00(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e30e4; end: 1055e335b; -[SCGtqMetadataNetworkRequest initWithGTQRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1055e30e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e9450;
  puVar4 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127267c4;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)((long)puVar4 + lVar5);
    *(long *)((long)puVar4 + lVar5) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_3;
    func_0x00010c2810a0();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)((long)puVar4 + (long)_DAT_1127267c8);
    *(undefined **)((long)puVar4 + (long)_DAT_1127267c8) = puVar2;
    _objc_release(uVar1);
    _objc_release(lVar5);
    func_0x00010c1d9820(puVar4);
    func_0x00010c1a9200(puVar4);
    func_0x00010c1659e0(puVar4);
    func_0x00010c1e3380(puVar4);
    func_0x00010c180f80(puVar4);
    func_0x00010c1c7660(puVar4);
    func_0x00010c1ec220(puVar4);
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bbf20;
    _objc_opt_class(PTR_PTR_1126bbf10);
    func_0x00010bdc1ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar4);
    _objc_release(puVar2);
    func_0x00010c1ed9a0(puVar4);
    func_0x00010c200b40(puVar4);
    func_0x00010c21d720(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined8 **)(param_3 + _DAT_1127267c8);
  _objc_retain(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 1055e335c; end: 1055e338b; -[SCGtqMetadataNetworkRequest key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e335c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e338c; end: 1055e33e7; -[SCGtqMetadataNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e338c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267c4);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e33e8; end: 1055e34af; -[SCGtqMetadataNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e33e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf60;
  _objc_alloc(PTR_PTR_1126bbf60);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127267c4);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c0197c0(puVar1,param_2,uVar5,lVar2,lVar3,lVar4,param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e34b0; end: 1055e34ef; -[SCGtqMetadataNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e34b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127267c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127267c4,0);
  return;
}



/* Entry: 1055e34f0; end: 1055e35c7; -[SCGtqRemoveUnlockNetworkPersistanceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_1055e34f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf68;
  _objc_alloc(PTR_PTR_1126bbf68);
  uVar2 = param_1;
  func_0x00010bfcfae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010befd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c016d00(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e35c8; end: 1055e37a7; -[SCGtqRemoveUnlockNetworkRequest initWithGTQRequest:host:path:additionalHttpHeaders:useGzipRequestCompression:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1055e35c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9458;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127267cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c2810a0();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127267d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127267d0) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c1d9820(puVar1);
    func_0x00010c1a9200(puVar1);
    func_0x00010c1659e0(puVar1);
    func_0x00010c1e3380(puVar1);
    func_0x00010c180f80(puVar1);
    func_0x00010c1c7660(puVar1);
    func_0x00010c1ec220(puVar1);
    puVar3 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf40(puVar1);
    _objc_release(puVar3);
    func_0x00010c1ed9a0(puVar1);
    func_0x00010c200b40(puVar1);
    func_0x00010c21d720(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055e37a8; end: 1055e37d7; -[SCGtqRemoveUnlockNetworkRequest key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e37a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267d0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055e37d8; end: 1055e3833; -[SCGtqRemoveUnlockNetworkRequest toSCRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e37d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127267cc);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22600(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055e3834; end: 1055e38fb; -[SCGtqRemoveUnlockNetworkRequest toPersistenceObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e3834(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbf70;
  _objc_alloc(PTR_PTR_1126bbf70);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127267cc);
  lVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290200(param_1);
  func_0x00010c0197c0(puVar1,param_2,uVar5,lVar2,lVar3,lVar4,param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e38fc; end: 1055e393b; -[SCGtqRemoveUnlockNetworkRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055e38fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127267d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127267cc,0);
  return;
}



/* Entry: 1055e393c; end: 1055e3973;  */

undefined ** FUN_1055e393c(long param_1)

{
  if (param_1 - 1U < 0x16) {
    return (undefined **)(&PTR_PTR_11089df28)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1055e3974; end: 1055e3ae7; -[SCLensMetadataByIdsFetcher initWithRequestManager:networkConfig:requestInfoProvider:responseParser:performer:grapheneLogger:] */

undefined1 *
FUN_1055e3974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e9460;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055e3ae8; end: 1055e3bcf; -[SCLensMetadataByIdsFetcher fetchLensMetadataWithIds:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbeb8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010be4b080(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be121c0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e3bd0; end: 1055e3cb7; -[SCLensMetadataByIdsFetcher fetchLensMetadataWithFetchIdentifiers:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e3bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbeb8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010be4b060(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be121c0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055e3cb8; end: 1055e3f57; -[SCLensMetadataByIdsFetcher _fetchLensMetadataWithLensIdentifiers:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e3cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar4 = param_7;
  if (param_7 == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar4);
  _os_unfair_lock_lock(param_1 + 0x40);
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
    _objc_initWeak(auStack_68,param_1);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c297260(puVar3);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _os_unfair_lock_unlock(param_1 + 0x40);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010be720a0(param_1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055e3f58; end: 1055e3fe7;  */

void FUN_1055e3f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x40);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38));
    _os_unfair_lock_unlock(param_1 + 0x40);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055e3fe8; end: 1055e405b;  */

void FUN_1055e3fe8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_1055e4040;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_3;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) goto LAB_1055e4040;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_2;
  }
  (*pcVar3)(lVar1,lVar2);
LAB_1055e4040:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055e405c; end: 1055e434b; -[SCLensMetadataByIdsFetcher _performNetworkRequestWithLensIdentifiers:lensType:expirationDate:featureAttribution:performer:promise:] */

void FUN_1055e405c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_7);
  uVar3 = param_6;
  FUN_1055e393c(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b720bd8(uVar5,uVar3,1);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126bbf78;
  _objc_opt_new(PTR_PTR_1126bbf78);
  uVar3 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010c1bbda0(puVar1);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x0001055e3964(param_6);
  func_0x00010c19a8c0(puVar1);
  puVar2 = PTR_PTR_1126bbf40;
  _objc_alloc(PTR_PTR_1126bbf40);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c095040(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010befd0a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016ce0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(uVar5);
  func_0x00010c25f820(uVar3);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055e434c; end: 1055e4537;  */

/* WARNING: Possible PIC construction at 0x0001055e44cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001055e44d0) */

void FUN_1055e434c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar8 = PTR_PTR_1126bbf48;
  _objc_opt_class(PTR_PTR_1126bbf48);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar8);
  uVar1 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bf9ad20();
  puVar8 = PTR_PTR_1126bbeb8;
  if (uVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf9ad00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0950e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar3);
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 1055e4538; end: 1055e453f;  */

void FUN_1055e4538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 1055e4540; end: 1055e454f; +[SCLensMetadataByIdsFetcher _lensIdentifiersFromLensFetchIdentifiers:] */

void FUN_1055e4540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11089e088);
  return;
}



/* Entry: 1055e4550; end: 1055e4627;  */

void FUN_1055e4550(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bbf80;
  _objc_opt_new(PTR_PTR_1126bbf80);
  lVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c24a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126bbf88;
    _objc_opt_new(PTR_PTR_1126bbf88);
    lVar2 = param_2;
    func_0x00010c24a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185820(puVar3);
    _objc_release(lVar2);
    func_0x00010c1a95c0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e4628; end: 1055e4637; +[SCLensMetadataByIdsFetcher _lensIdentifiersFromLensIds:] */

void FUN_1055e4628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11089e0c8);
  return;
}



/* Entry: 1055e4638; end: 1055e4683;  */

void FUN_1055e4638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbf80;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1bbd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e4684; end: 1055e47c3; +[SCLensMetadataByIdsFetcher _stringFromExclusionReasons:] */

void FUN_1055e4684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf529e0();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  FUN_1055e9d38();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf97d20(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055e47c4; end: 1055e4877;  */

void FUN_1055e47c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(uVar1);
  _objc_release(uVar2);
  func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  return;
}



/* Entry: 1055e4878; end: 1055e48e3; -[SCLensMetadataByIdsFetcher .cxx_destruct] */

void FUN_1055e4878(long param_1)

{
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



/* Entry: 1055e48e4; end: 1055e4987; -[SCLensMetadataNetworkConfig initWithCircumstanceEngine:lensCoreVersionProvider:] */

undefined1 *
FUN_1055e48e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9468;
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



/* Entry: 1055e4988; end: 1055e4993; -[SCLensMetadataNetworkConfig host] */

undefined ** FUN_1055e4988(void)

{
  return &PTR____CFConstantStringClassReference_110def498;
}



/* Entry: 1055e4994; end: 1055e4b1f; -[SCLensMetadataNetworkConfig additionalHttpHeaders] */

void FUN_1055e4994(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010bf04c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010be97a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar1 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010c091f60(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c091fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf90;
  func_0x00010c091f80(PTR_PTR_1126bbf90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,
             &PTR____CFConstantStringClassReference_110def4d8,0);
  return;
}



/* Entry: 1055e4b20; end: 1055e4b33; -[SCLensMetadataNetworkConfig _routeTagFromCOF] */

void FUN_1055e4b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,
             &PTR____CFConstantStringClassReference_110def4d8,0);
  return;
}



/* Entry: 1055e4b34; end: 1055e4b3f; -[SCLensMetadataNetworkConfig lensMetadataEndpoint] */

undefined ** FUN_1055e4b34(void)

{
  return &PTR____CFConstantStringClassReference_110def4b8;
}



/* Entry: 1055e4b40; end: 1055e4b6f; -[SCLensMetadataNetworkConfig .cxx_destruct] */

void FUN_1055e4b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055e4b70; end: 1055e4e47; -[SCUnlockableAPIManager fetchUnlockablesWhichChecksumsAbsentInMap:unlockGroups:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e4b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bbf98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126bbfa0;
  func_0x00010be243c0(PTR_PTR_1126bbfa0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17c2e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bbfa0;
  func_0x00010bed1540(PTR_PTR_1126bbfa0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec320(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd80(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c21bde0(puVar1,param_2,*(undefined4 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126bbf30;
  _objc_alloc(PTR_PTR_1126bbf30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2817c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010befd0a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c235380(uVar6);
  func_0x00010c016d00(puVar2,param_2,puVar1,uVar4,uVar3,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1055e4e48;
  puStack_80 = &UNK_11089e118;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1055e4ee4;
  puStack_a8 = &UNK_11089e148;
  uStack_a0 = param_7;
  uStack_78 = param_4;
  uStack_70 = uVar3;
  uStack_68 = param_6;
  _objc_retain(param_7);
  _objc_retain(uVar3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c25f820(uVar4,param_2,puVar2,param_5,&puStack_98,&puStack_c0);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055e4e48; end: 1055e4ee3;  */

void FUN_1055e4e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0f4120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1055e4ee4; end: 1055e4eff;  */

void FUN_1055e4ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055e4ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1055e4f00; end: 1055e537f; -[SCUnlockableAPIManager addUnlockWithUnlockableId:unlockType:metadataParams:deepLinkAppId:deepLinkProperties:snapInfo:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e4f00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_3 == 0) {
    if (param_11 == 0) goto LAB_1055e5324;
    puVar6 = PTR_PTR_1126bbfa0;
    func_0x00010be3d660(PTR_PTR_1126bbfa0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_11 + 0x10))(param_11,puVar6,1,0);
  }
  else {
    puVar6 = PTR_PTR_1126bbfa8;
    _objc_opt_new();
    func_0x00010c21bbe0();
    func_0x00010bed16a0(PTR_PTR_1126bbfa0);
    func_0x00010c21bb40(puVar6);
    func_0x00010c095200(param_5);
    func_0x00010c1a2da0(puVar6);
    func_0x00010c21bde0(puVar6);
    puVar1 = PTR_PTR_1126bbfb0;
    _objc_opt_new();
    func_0x00010c18a780();
    uVar4 = param_7;
    func_0x00010c0d3c80(param_7);
    func_0x00010c18a9a0(puVar1);
    _objc_release(uVar4);
    func_0x00010c204860(puVar1);
    func_0x00010c21bae0(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c135860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd80(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bbf18;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010befc6c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010befd0a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235380(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c016d00();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010be5a120();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    _objc_retain(param_10);
    _objc_retain(uVar2);
    _objc_retain(param_5);
    _objc_retain(param_11);
    _objc_retain(uVar5);
    _objc_retain(uVar7);
    _objc_retain(uVar2);
    func_0x00010c25f820(uVar4);
    _objc_release(uVar4);
    _objc_release(param_11);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(uVar2);
    _objc_release(param_10);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
LAB_1055e5324:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1055e5380; end: 1055e545b;  */

void FUN_1055e5380(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c132560(param_1 - *(double *)(param_2 + 0x58),uVar3);
  if (*(long *)(param_2 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c095b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0f42c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),uVar3,param_4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e545c; end: 1055e555b;  */

void FUN_1055e545c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bbfa0;
  _objc_retain(param_6);
  func_0x00010be0e420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f4000();
  _objc_release(param_6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c132540(param_1 - *(double *)(param_2 + 0x50),uVar2);
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_4,uVar3,param_5);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055e555c; end: 1055e57ff; -[SCUnlockableAPIManager removeUnlockableWithId:unlockTypes:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e555c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    if (param_7 == 0) goto LAB_1055e57bc;
    puVar6 = PTR_PTR_1126bbfa0;
    func_0x00010be3d660(PTR_PTR_1126bbfa0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,puVar6,0);
  }
  else {
    puVar6 = PTR_PTR_1126bbfb8;
    _objc_opt_new(PTR_PTR_1126bbfb8);
    func_0x00010c21bbe0();
    puVar1 = PTR_PTR_1126bbfa0;
    func_0x00010be62b00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bbfa0;
    func_0x00010be0abe0(PTR_PTR_1126bbfa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bb60(puVar6);
    _objc_release(puVar2);
    func_0x00010c21bde0(puVar6);
    puVar2 = PTR_PTR_1126bbf68;
    _objc_alloc(PTR_PTR_1126bbf68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c12ede0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010befd0a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235380(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c016d00(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c25f820(uVar3);
    _objc_release(uVar3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
LAB_1055e57bc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055e5800; end: 1055e5833;  */

void FUN_1055e5800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055e5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1055e5834; end: 1055e5bb3; -[SCUnlockableAPIManager fetchMetadataWithUnlockableId:unlockType:metadataParams:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e5834(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 == 0) {
    if (param_8 == 0) goto LAB_1055e5b70;
    puVar5 = PTR_PTR_1126bbfa0;
    func_0x00010be3d660(PTR_PTR_1126bbfa0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,puVar5,1,0);
  }
  else {
    puVar5 = PTR_PTR_1126bbfc0;
    _objc_opt_new(PTR_PTR_1126bbfc0);
    func_0x00010c21bbe0();
    func_0x00010bed16a0(PTR_PTR_1126bbfa0);
    func_0x00010c21bb40(puVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c135860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd80(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126bbf58;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c281180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010befd0a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235380(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c016d00();
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_retain(uVar6);
    _objc_retain(param_7);
    _objc_retain(uVar1);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(uVar6);
    _objc_retain(uVar4);
    _objc_retain(uVar1);
    func_0x00010c25f820(uVar3);
    _objc_release(uVar3);
    _objc_release(param_8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_release(param_7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
LAB_1055e5b70:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1055e5bb4; end: 1055e5c67;  */

void FUN_1055e5bb4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x28));
  func_0x00010c132ec0(param_1 - *(double *)(param_2 + 0x50),uVar2);
  if (*(long *)(param_2 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f42e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),uVar2,param_4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e5c68; end: 1055e5d5f;  */

void FUN_1055e5c68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bbfa0;
  _objc_retain(param_6);
  func_0x00010be0e420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f4020();
  _objc_release(param_6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c132ea0(param_1 - *(double *)(param_2 + 0x48),uVar2);
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_4,uVar3,param_5);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055e5d60; end: 1055e5e97; -[SCUnlockableAPIManager pinUnlockableWithId:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e5d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bbee0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c024fa0();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055e5e98;
  puStack_50 = &UNK_11089de98;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1055e5eb0;
  puStack_78 = &UNK_11089dec8;
  uStack_70 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010befc720(param_1,param_2,param_3,1,puVar1,0,0,0,param_4,&puStack_68,&puStack_90);
  _objc_release(param_4);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055e5e98; end: 1055e5ecb;  */

void FUN_1055e5e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055e5ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1055e5ecc; end: 1055e5ee3; -[SCUnlockableAPIManager unpinUnlockableWithId:callbackPerformer:successBlock:failureBlock:] */

void FUN_1055e5ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeUnlockableWithId_unlockTyp_1126295b0,param_3,
             &PTR__OBJC_CLASS___NSConstantArray_11117ee68,param_4,param_5,param_6);
  return;
}



/* Entry: 1055e5ee4; end: 1055e5fb7; +[SCUnlockableAPIManager _failureResponseDataFromData:error:] */

void FUN_1055e5ee4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126bbfc8;
  _objc_opt_class(PTR_PTR_1126bbfc8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (param_3 == 0) {
    uVar2 = uVar1;
    func_0x00010bf63640(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055e5fb8; end: 1055e5fc7; +[SCUnlockableAPIManager _networkUnlockTypesFromUnlockTypes:] */

void FUN_1055e5fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11089e298);
  return;
}



/* Entry: 1055e5fc8; end: 1055e6007;  */

void FUN_1055e5fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbfa0;
  func_0x00010c2827c0(param_2);
  func_0x00010bed16a0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,puVar1);
  return;
}



/* Entry: 1055e6008; end: 1055e617f; +[SCUnlockableAPIManager _gpbObjectDictionaryFromChecksumMap:] */

void FUN_1055e6008(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar9;
  long unaff_x25;
  undefined1 *puVar10;
  long unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = PTR_PTR_1126bbfd0;
  _objc_alloc();
  lVar9 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar8,param_2,lVar9);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar9);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x26 * 8);
        unaff_x24 = param_3;
        func_0x00010c0e00e0(param_3,param_2,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = unaff_x23;
        func_0x00010c0b4ca0(unaff_x23);
        func_0x00010c1d0560(puVar8,param_2,unaff_x24,uVar2);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar1 != unaff_x26);
      lVar1 = lVar9;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = &uStack_250;
    pcStack_138 = FUN_1055e6180;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = (undefined1 *)puVar5;
    lStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    lStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    lStack_158 = lVar9;
    puStack_150 = puVar8;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    puVar3 = (undefined1 *)puVar5;
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar3 == (undefined1 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bf529e0(puVar5);
      func_0x00010bf0a0e0(puVar8,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      _objc_retain(puVar5);
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bf52a60();
      if (puVar3 != (undefined1 *)0x0) {
        lVar9 = *plStack_240;
        do {
          puVar10 = (undefined1 *)0x0;
          do {
            if (*plStack_240 != lVar9) {
              _objc_enumerationMutation(puVar5);
            }
            lVar4 = lVar1;
            func_0x00010bed1520(lVar1,param_2,*(undefined8 *)(lStack_248 + (long)puVar10 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_2,lVar4);
            _objc_release(lVar4);
            puVar10 = puVar10 + 1;
          } while (puVar3 != puVar10);
          puVar3 = (undefined1 *)puVar5;
          puVar6 = &uStack_250;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined1 *)0x0);
      }
      _objc_release(puVar5);
      puVar10 = (undefined1 *)puVar6;
    }
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      puVar8 = PTR_PTR_1126bbfd8;
      _objc_retain(puVar10);
      _objc_opt_new(puVar8);
      func_0x00010bed1500(puVar5,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21bac0(puVar8,param_2,puVar5);
      _objc_release(puVar5);
      puVar3 = puVar10;
      func_0x00010c280e20();
      _objc_release(puVar10);
      uVar7 = 1;
      if (puVar3 == (undefined1 *)0x0) {
        uVar7 = 2;
      }
      func_0x00010c206900(puVar8,param_2,uVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055e6180; end: 1055e62ef; +[SCUnlockableAPIManager _unlockGroupRequestsFromNetworkUnlockGroups:] */

void FUN_1055e6180(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar1 == (undefined1 *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = param_1;
          func_0x00010bed1520(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar7 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5,param_2,uVar2);
          _objc_release(uVar2);
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar1 = param_3;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar7 = (undefined1 *)puVar3;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126bbfd8;
    _objc_retain(puVar7);
    _objc_opt_new(puVar5);
    func_0x00010bed1500(param_3,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bac0(puVar5,param_2,param_3);
    _objc_release(param_3);
    puVar1 = puVar7;
    func_0x00010c280e20();
    _objc_release(puVar7);
    uVar4 = 1;
    if (puVar1 == (undefined1 *)0x0) {
      uVar4 = 2;
    }
    func_0x00010c206900(puVar5,param_2,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055e62f0; end: 1055e638b; +[SCUnlockableAPIManager _unlockGroupRequestFromNetworkUnlockGroup:] */

void FUN_1055e62f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_1126bbfd8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bed1500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bac0(puVar1,param_2,param_1);
  _objc_release(param_1);
  lVar2 = param_3;
  func_0x00010c280e20();
  _objc_release(param_3);
  uVar3 = 1;
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  func_0x00010c206900(puVar1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e638c; end: 1055e6427; +[SCUnlockableAPIManager _unlockGroupFromNetworkUnlockGroup:] */

void FUN_1055e638c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bbfe0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar3 = PTR_PTR_1126bbfa0;
  uVar2 = param_3;
  func_0x00010c280e20(param_3);
  func_0x00010bed16a0(puVar3,param_2,uVar2);
  func_0x00010c21bb40(puVar1,param_2,puVar3);
  puVar3 = PTR_PTR_1126bbfa0;
  uVar2 = param_3;
  func_0x00010c281420(param_3);
  _objc_release(param_3);
  func_0x00010bed1840(puVar3,param_2,uVar2);
  func_0x00010c21bd00(puVar1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055e6428; end: 1055e654f; +[SCUnlockableAPIManager _enumArrayFromArray:] */

undefined * FUN_1055e6428(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae740;
  func_0x00010bf09f00(PTR_PTR_1126ae740);
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_108 + lVar7 * 8);
        func_0x00010c067ec0(uVar4);
        func_0x00010befc800(puVar2,param_2,uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar1 = (int)(undefined1 *)((long)puVar5 + -1) + 2;
  if ((undefined1 *)0x2 < (undefined1 *)((long)puVar5 + -1)) {
    uVar1 = 1;
  }
  return (undefined *)(ulong)uVar1;
}



/* Entry: 1055e6550; end: 1055e6563; +[SCUnlockableAPIManager _unlockTypeFromUnlockType:] */

int FUN_1055e6550(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)(param_3 - 1U) + 2;
  if (2 < param_3 - 1U) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Entry: 1055e6564; end: 1055e656b; +[SCUnlockableAPIManager _unlockableTypeFromUnlockableType:] */

undefined8 FUN_1055e6564(void)

{
  return 1;
}



/* Entry: 1055e656c; end: 1055e658f; +[SCUnlockableAPIManager _logUnlockTypeFromNetworkUnlockType:] */

undefined8 FUN_1055e656c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10ddb3fa0 + (param_3 - 1U) * 8);
  }
  return 1;
}



/* Entry: 1055e6590; end: 1055e65af; +[SCUnlockableAPIManager _invalidInputParamsError] */

void FUN_1055e6590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f5d938,0,0);
  return;
}



/* Entry: 1055e65b0; end: 1055e660f; -[SCUnlockableAPIManager .cxx_destruct] */

void FUN_1055e65b0(long param_1)

{
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



/* Entry: 1055e6610; end: 1055e662b; -[SCUnlockableAPINetworkConfig host] */

void FUN_1055e6610(void)

{
  func_0x00010bed1960();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055e662c; end: 1055e679f; -[SCUnlockableAPINetworkConfig additionalHttpHeaders] */

void FUN_1055e662c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010bf04c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010be97ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar1 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010c091f60(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c091fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf90;
  func_0x00010c091f80(PTR_PTR_1126bbf90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,
             &PTR____CFConstantStringClassReference_110def598,0);
  return;
}


