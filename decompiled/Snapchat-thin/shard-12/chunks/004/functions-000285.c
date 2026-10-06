/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090c36cc; end: 1090c370f; -[SCNeoSynchronizer removeAudioRenderer:] */

void FUN_1090c36cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090c3710; end: 1090c3717; -[SCNeoSynchronizer removeVideoRenderer:] */

void FUN_1090c3710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 1090c3718; end: 1090c3753; -[SCNeoSynchronizer .cxx_destruct] */

void FUN_1090c3718(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1090c3754; end: 1090c379f;  */

void FUN_1090c3754(void)

{
  return;
}



/* Entry: 1090c37a0; end: 1090c3857; -[SCNeoURLSessionDataManager init] */

undefined1 * FUN_1090c37a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700650;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf6a380(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5020();
    puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c1606c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dd5c0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x0001090c4230();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090c3858; end: 1090c389f; -[SCNeoURLSessionDataManager dealloc] */

void FUN_1090c3858(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d40(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_112700650;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090c38a0; end: 1090c3c5b; -[SCNeoURLSessionDataManager _requestDidCompleteForId:byteOffset:data:response:error:] */

void FUN_1090c38a0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined **param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_7 != 0) {
    FUN_1090c4218(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf43b20();
    goto LAB_1090c3c00;
  }
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  ppuVar4 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar3);
  if (((ulong)ppuVar4 & 1) == 0) {
LAB_1090c3af0:
    if (param_4 != (undefined **)0x0) {
      func_0x00010c08fa60(param_5);
      func_0x00010c25eac0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c4230();
    }
LAB_1090c3ba0:
    func_0x00010bf43b20(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    _objc_retain(param_6);
    ppuVar4 = param_6;
    func_0x00010c296ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x0001090c426c();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((long)ppuVar5 < 400) {
      func_0x0001090c4228();
      if (ppuVar4 == (undefined **)0x0) goto LAB_1090c3af0;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf529e0();
      if (ppuVar5 == (undefined **)0x2) {
        ppuVar5 = ppuVar4;
        func_0x00010c0dfd40();
        iVar2 = (int)ppuVar5;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        func_0x0001090c4290();
        if (iVar2 == 0) goto LAB_1090c3bbc;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        ppuVar4 = ppuVar5;
        func_0x00010bf529e0();
        if (ppuVar4 == (undefined **)0x2) {
          ppuVar4 = ppuVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar4;
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar6;
          func_0x00010bf529e0();
          ppuStack_68 = (undefined **)0x0;
          bVar1 = ppuVar4 == (undefined **)0x2;
          if (bVar1) {
            ppuStack_68 = ppuVar6;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x0001090c4288();
            func_0x00010c0dfd40(ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x0001090c4288();
            ppuVar4 = ppuVar5;
            func_0x00010c0720c0();
            if (((ulong)ppuVar4 & 1) == 0) {
              func_0x00010c0b4ca0(ppuVar5);
            }
          }
          _objc_release(ppuVar5);
          func_0x0001090c4288();
        }
        else {
          ppuStack_68 = (undefined **)0x0;
          bVar1 = false;
        }
        func_0x0001090c4290();
        func_0x0001090c4254();
        if (!bVar1) goto LAB_1090c3bc0;
        if (param_4 == ppuStack_68) goto LAB_1090c3ba0;
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        param_6 = &PTR____CFConstantStringClassReference_110f21438;
      }
      else {
LAB_1090c3bbc:
        func_0x0001090c4254();
LAB_1090c3bc0:
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        param_6 = &PTR____CFConstantStringClassReference_110f21418;
      }
      FUN_109096480(param_6,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_1090c4218(uVar7);
      func_0x00010bf43b20();
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x0001090c426c();
      func_0x00010c25d9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_109096480();
      _objc_retainAutoreleasedReturnValue();
      FUN_1090c4218(uVar7);
      func_0x00010bf43b20();
      func_0x0001090c4254();
      _objc_release(puVar3);
    }
    _objc_release(param_6);
  }
  func_0x0001090c4298();
LAB_1090c3c00:
  func_0x0001090c4228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1090c3c5c; end: 1090c3d63; -[SCNeoURLSessionDataManager _headRequestDidCompleteForId:response:error:] */

void FUN_1090c3c5c(long param_1)

{
  undefined *puVar1;
  long in_x4;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x0001090c4240();
  if (in_x4 == 0) {
    func_0x0001090c426c();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (399 < param_1) {
      uVar2 = *(undefined8 *)(unaff_x21 + 0x10);
      func_0x0001090c426c();
      func_0x00010c25d9e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_109096480();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c4218(uVar2);
      func_0x00010bf43b20();
      func_0x0001090c4238();
      func_0x0001090c4298();
      goto LAB_1090c3d48;
    }
    func_0x00010c296ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x0001090c4298();
  }
  else {
    func_0x0001090c4218(*(undefined8 *)(unaff_x21 + 0x10));
  }
  func_0x00010bf43b20();
LAB_1090c3d48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090c3d64; end: 1090c3f67; -[SCNeoURLSessionDataManager loadAtURL:byteOffset:chunkSizeHint:completionQueue:completion:] */

undefined8 FUN_1090c3d64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x3;
  long in_x4;
  long unaff_x24;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  func_0x0001090c425c();
  func_0x0001090c4274();
  func_0x0001090c42a0();
  uVar1 = *(undefined8 *)(unaff_x24 + 0x10);
  func_0x00010bf963a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135700();
  func_0x0001090c4238();
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x00010c137160(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  _objc_retainAutoreleasedReturnValue();
  if ((in_x4 != 0) || (in_x3 != 0)) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2201e0(puVar2);
    func_0x0001090c4290();
  }
  _objc_initWeak(auStack_78);
  uVar3 = *(undefined8 *)(unaff_x24 + 8);
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_88 = uVar1;
  lStack_80 = in_x3;
  func_0x00010bf647e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x0001090c427c();
  func_0x00010c13d1c0(uVar3);
  _objc_release(uVar3);
  func_0x0001090c4254();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  func_0x0001090c4238();
  func_0x0001090c42a8();
  func_0x0001090c4230();
  func_0x0001090c4228();
  return uVar1;
}



/* Entry: 1090c3f68; end: 1090c3fdf;  */

void FUN_1090c3f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x0001090c4274();
  func_0x0001090c42a0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90f20();
  func_0x0001090c4228();
  func_0x0001090c4230();
  func_0x0001090c42a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090c3fe0; end: 1090c3fe7;  */

void FUN_1090c3fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1090c3fe8; end: 1090c4187; -[SCNeoURLSessionDataManager contentSizeAtURL:completionQueue:completion:] */

undefined8 FUN_1090c3fe8(void)

{
  undefined8 uVar1;
  long unaff_x24;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x0001090c425c();
  func_0x0001090c4274();
  func_0x0001090c42a0();
  uVar1 = *(undefined8 *)(unaff_x24 + 0x10);
  func_0x00010bf962a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135700();
  func_0x0001090c4238();
  func_0x00010c137160(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4fc0();
  _objc_initWeak(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x24 + 8);
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = uVar1;
  func_0x00010bf647e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x0001090c427c();
  func_0x00010c13d1c0(uVar2);
  _objc_release(uVar2);
  func_0x0001090c4254();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  func_0x0001090c4238();
  func_0x0001090c42a8();
  func_0x0001090c4230();
  func_0x0001090c4228();
  return uVar1;
}



/* Entry: 1090c4188; end: 1090c41d7;  */

void FUN_1090c4188(void)

{
  long lVar1;
  long unaff_x21;
  
  func_0x0001090c4240();
  func_0x0001090c4274();
  lVar1 = unaff_x21 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be34be0();
  func_0x0001090c4228();
  func_0x0001090c4230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090c41d8; end: 1090c41df;  */

void FUN_1090c41d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1090c41e0; end: 1090c41e7; -[SCNeoURLSessionDataManager cancelLoadWithRequestId:] */

void FUN_1090c41e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelRequestWithId__1125a9530);
  return;
}



/* Entry: 1090c41e8; end: 1090c4217; -[SCNeoURLSessionDataManager .cxx_destruct] */

void FUN_1090c41e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090c4218; end: 1090c42af;  */

void FUN_1090c4218(void)

{
  return;
}



/* Entry: 1090c42b0; end: 1090c436f; -[SCNeoURLSessionMediaDataProvider initWithURL:urlSessionDataManager:] */

undefined1 *
FUN_1090c42b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700658;
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



/* Entry: 1090c4370; end: 1090c438b; -[SCNeoURLSessionMediaDataProvider loadDataChunk:chunkSize:completion:] */

void FUN_1090c4370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_loadAtURL_byteOffset_chunkSizeHi_112604598,
             *(undefined8 *)(param_1 + 8),param_3,param_4,0,param_5);
  return;
}



/* Entry: 1090c438c; end: 1090c439f; -[SCNeoURLSessionMediaDataProvider getTotalDataSize:] */

void FUN_1090c438c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_contentSizeAtURL_completionQueue_1125b0f30,
             *(undefined8 *)(param_1 + 8),0,param_3);
  return;
}



/* Entry: 1090c43a0; end: 1090c43a7; -[SCNeoURLSessionMediaDataProvider cancelLoad:] */

void FUN_1090c43a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelLoadWithRequestId__1125a9348);
  return;
}



/* Entry: 1090c43a8; end: 1090c43d7; -[SCNeoURLSessionMediaDataProvider .cxx_destruct] */

void FUN_1090c43a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090c43d8; end: 1090c4457; -[SCNeoURLSessionMediaDataProviderFactory init] */

undefined1 * FUN_1090c43d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dd5c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090c4458; end: 1090c44ef; -[SCNeoURLSessionMediaDataProviderFactory dataProviderWithURL:] */

void FUN_1090c4458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dd5d0;
  _objc_alloc(PTR_PTR_1126dd5d0);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ce0(puVar1,param_2,puVar2,*(undefined8 *)(param_1 + 8));
  func_0x0001090c457c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090c44f0; end: 1090c4543; +[SCNeoURLSessionMediaDataProviderFactory sharedInstance] */

void FUN_1090c44f0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137309f0 != -1) {
    func_0x000107c27d9c(0x1137309f0,&PTR___NSConcreteGlobalBlock_110ad8b38);
  }
  uVar1 = uRam00000001137309f8;
  _objc_retain(uRam00000001137309f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090c4544; end: 1090c456f;  */

void FUN_1090c4544(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd378;
  _objc_opt_new();
  uVar1 = puRam00000001137309f8;
  puRam00000001137309f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090c4570; end: 1090c4587; -[SCNeoURLSessionMediaDataProviderFactory .cxx_destruct] */

void FUN_1090c4570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090c4588; end: 1090c486f;  */

void FUN_1090c4588(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar7;
  undefined8 *unaff_x19;
  long lVar8;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long **pplStack_60;
  undefined1 uStack_58;
  long alStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113730a08 & 1) == 0) {
    param_2 = (long *)0x113730a08;
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      unaff_x19 = (undefined8 *)0x28;
      __Znwm();
      lVar8 = 0x88;
      __Znwm();
      FUN_1090c5bdc();
      lStack_88 = lVar8;
      do {
        func_0x0001090c4a18();
      } while (extraout_w10 != 0);
      uVar4 = 0x88;
      alStack_50[0] = lVar8;
      __Znwm(alStack_50);
      FUN_1090cd630();
      uStack_90 = uVar4;
      do {
        func_0x0001090c4a18();
      } while (extraout_w10_00 != 0);
      puVar5 = (undefined8 *)0x10;
      alStack_50[1] = uVar4;
      __Znwm(alStack_50);
      puVar5[1] = 1;
      *puVar5 = &PTR_FUN_110ad9408;
      puStack_98 = puVar5;
      do {
        func_0x0001090c4a18();
      } while (extraout_w10_01 != 0);
      plStack_78 = (long *)0x0;
      plStack_70 = (long *)0x0;
      plStack_80 = (long *)0x0;
      pplStack_60 = &plStack_80;
      uStack_58 = 0;
      plVar6 = (long *)0x18;
      puStack_40 = puVar5;
      __Znwm();
      lVar8 = 0;
      plStack_70 = plVar6 + 3;
      param_2 = plVar6;
      do {
        plStack_80 = plVar6;
        if (lVar8 == 0x18) goto LAB_1090c471c;
        lVar7 = *(long *)((long)alStack_50 + lVar8);
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *param_2 = lVar7;
        lVar8 = lVar8 + 8;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  while( true ) {
    puVar5 = puRam0000000113730a00;
    if (puRam0000000113730a00 != (undefined8 *)0x0) {
      plVar6 = puRam0000000113730a00 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1090c471c:
    uStack_58 = 1;
    plStack_78 = param_2;
    FUN_1090c4870(&pplStack_60);
    *unaff_x19 = &PTR_DAT_110ada088;
    unaff_x19[1] = 1;
    unaff_x19[3] = plStack_78;
    unaff_x19[2] = plStack_80;
    unaff_x19[4] = plStack_70;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    pplStack_60 = &plStack_80;
    FUN_1090c489c(&pplStack_60);
    lVar8 = 0x10;
    do {
      FUN_1090c4900((long)alStack_50 + lVar8);
      lVar8 = lVar8 + -8;
    } while (lVar8 != -8);
    FUN_1090c4950(&puStack_98);
    func_0x0001090c498c(&uStack_90);
    func_0x0001090c49c8(&lStack_88);
    param_2 = (long *)0x113730a08;
    puRam0000000113730a00 = unaff_x19;
    ___cxa_guard_release();
  }
  return;
}



/* Entry: 1090c4870; end: 1090c489b;  */

long FUN_1090c4870(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1090c489c(param_1);
  }
  return param_1;
}



/* Entry: 1090c489c; end: 1090c48ff;  */

void FUN_1090c489c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -8;
      FUN_1090c4900();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1090c4900; end: 1090c4923;  */

void FUN_1090c4900(void)

{
  func_0x0001090c4a28();
  FUN_1090c4924();
  return;
}



/* Entry: 1090c4924; end: 1090c494f;  */

void FUN_1090c4924(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c4948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c4950; end: 1090c4a03;  */

void FUN_1090c4950(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090c4a28();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001090c4a04();
    }
  }
  return;
}



/* Entry: 1090c4a04; end: 1090c4a3f;  */

void FUN_1090c4a04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090c4a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1090c4a40; end: 1090c4b2f;  */

undefined * FUN_1090c4a40(void)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  
  func_0x0001090c5b70();
  func_0x0001090c5b64();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090c58bc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800(unaff_x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0(puVar1);
  func_0x0001090c5b0c();
  func_0x0001090c5aec();
  func_0x0001090c5af4();
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  return puVar1;
}



/* Entry: 1090c4b30; end: 1090c4b3b;  */

undefined * FUN_1090c4b30(void)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  
  func_0x0001090c5b70(&PTR____CFConstantStringClassReference_110e0ad18);
  func_0x0001090c5b64();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090c58bc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5800(unaff_x19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfacbe0(puVar1);
  func_0x0001090c5b0c();
  func_0x0001090c5aec();
  func_0x0001090c5af4();
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  return puVar1;
}



/* Entry: 1090c4b3c; end: 1090c4ca7;  */

undefined ** FUN_1090c4b3c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110de7678;
  FUN_1090c4ca8();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    func_0x0001090c5bd0();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class();
    func_0x0001090c5b90();
    if (((ulong)puVar2 & 1) != 0) {
      lVar5 = 0;
      do {
        if (lVar5 == 0x18) {
          func_0x0001090c5adc();
          FUN_1090c4dc4(ppuVar4,&PTR____CFConstantStringClassReference_110f21498,param_1);
          goto LAB_1090c4c4c;
        }
        ppuVar3 = ppuVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        func_0x0001090c5aec();
        lVar5 = lVar5 + 8;
      } while (((ulong)ppuVar3 & 1) != 0);
    }
    func_0x0001090c5adc();
    ppuVar4 = (undefined **)0x0;
LAB_1090c4c4c:
    func_0x0001090c5ad4();
  }
  func_0x0001090c5ae4();
  return ppuVar4;
}



/* Entry: 1090c4ca8; end: 1090c4dc3;  */

void FUN_1090c4ca8(void)

{
  undefined *puVar1;
  
  func_0x0001090c5b70();
  func_0x0001090c5b64();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090c58bc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c5af4();
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090c4dc4; end: 1090c507f;  */

undefined ** FUN_1090c4dc4(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int aiStack_154 [3];
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_70;
  
  func_0x0001090c5afc();
  uStack_70 = extraout_x8;
  _objc_retain();
  func_0x0001090c5ba0();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  plVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if (((ulong)plVar2 & 1) != 0) {
    plVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x0001090c5b90();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x0001090c5adc();
    }
    else {
      func_0x00010c067fc0();
      func_0x0001090c5adc();
      in_ZR = plVar2 == (long *)0x1;
      if (0 < (long)plVar2) {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class();
        func_0x0001090c5b90();
        if (((ulong)puVar1 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        else {
          lStack_110 = 0;
          lStack_108 = 0;
          lStack_100 = 0;
          lStack_148 = 0;
          aiStack_154[1] = 0;
          aiStack_154[2] = 0;
          uStack_138 = 0;
          plStack_140 = (long *)0x0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          plVar2 = param_1;
          _objc_retain();
          func_0x0001090c5b14();
          if (plVar2 != (long *)0x0) {
            lVar6 = *plStack_140;
            do {
              plVar7 = (long *)0x0;
              do {
                if (*plStack_140 != lVar6) {
                  _objc_enumerationMutation(param_1);
                }
                plVar5 = *(long **)(lStack_148 + (long)plVar7 * 8);
                _objc_retain(plVar5);
                puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                plVar3 = plVar5;
                _objc_opt_isKindOfClass(plVar5,puVar1);
                if ((((ulong)plVar3 & 1) == 0) ||
                   (plVar3 = plVar5, func_0x00010c08fa60(), plVar3 < (long *)0x4)) {
LAB_1090c4f48:
                  plVar5 = plVar3;
                  plVar3 = (long *)0x0;
                }
                else {
                  _objc_retainAutorelease(plVar5);
                  func_0x00010bdc3520();
                  plVar3 = plVar5;
                  if (plVar5 != (long *)0x0) {
                    _strlen();
                    if (plVar3 < (long *)0x4) goto LAB_1090c4f48;
                    func_0x0001090cbf58();
                    plVar3 = plVar5;
                  }
                }
                func_0x0001090c5b0c();
                aiStack_154[0] = (int)plVar3;
                if (aiStack_154[0] != 0) {
                  plVar5 = &lStack_110;
                  func_0x000107c2842c(plVar5,aiStack_154);
                }
                plVar7 = (long *)((long)plVar7 + 1);
              } while (plVar7 < plVar2);
              func_0x0001090c5b14();
              plVar2 = plVar5;
            } while (plVar5 != (long *)0x0);
          }
          func_0x0001090c5adc();
          in_ZR = lStack_110 == lStack_108;
          ppuVar4 = (undefined **)(ulong)!(bool)in_ZR;
          if (!(bool)in_ZR) {
            lVar9 = param_3[1];
            lVar8 = *param_3;
            *param_3 = lStack_110;
            param_3[1] = lStack_108;
            lVar6 = param_3[2];
            param_3[2] = lStack_100;
            lStack_110 = lVar8;
            lStack_108 = lVar9;
            lStack_100 = lVar6;
          }
          func_0x00010731e26c();
        }
        func_0x0001090c5adc();
        goto LAB_1090c4fd4;
      }
    }
  }
  ppuVar4 = (undefined **)0x0;
LAB_1090c4fd4:
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  func_0x0001090c5ac0(uStack_70);
  if ((bool)in_ZR) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x0001090c5adc();
  func_0x00010731e26c(&lStack_110);
  func_0x0001090c5adc();
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  func_0x0001090c5b4c();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e0ad18;
  FUN_1090c4ca8();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    func_0x0001090c5bd0();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090c4dc4();
    func_0x0001090c5af4();
  }
  func_0x0001090c5ae4();
  return ppuVar4;
}



/* Entry: 1090c5080; end: 1090c5123;  */

undefined ** FUN_1090c5080(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0ad18;
  FUN_1090c4ca8();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    func_0x0001090c5bd0();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090c4dc4();
    func_0x0001090c5af4();
  }
  func_0x0001090c5ae4();
  return ppuVar1;
}



/* Entry: 1090c5124; end: 1090c543b;  */

void FUN_1090c5124(long *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined4 *puVar4;
  
  func_0x0001090c5afc();
  uVar2 = *param_1 == param_1[1];
  if (!(bool)uVar2) {
    func_0x0001090c5b78();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined4 *)unaff_x20[1];
    for (puVar4 = (undefined4 *)*unaff_x20; uVar2 = puVar4 == puVar1, !(bool)uVar2;
        puVar4 = puVar4 + 1) {
      FUN_1090c543c(*puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c5b54();
      func_0x0001090c5ad4();
    }
    func_0x0001090c5ba8();
    _VTIsHardwareDecodeSupported(0x61766331);
    func_0x00010c0df800();
    _objc_retainAutoreleasedReturnValue();
    _VTIsHardwareDecodeSupported(0x68766331);
    func_0x00010c0df800();
    _objc_retainAutoreleasedReturnValue();
    _VTIsHardwareDecodeSupported(0x61763031);
    func_0x00010c0df800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5b0c();
    func_0x0001090c5aec();
    func_0x0001090c5adc();
    FUN_1090c5474();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5bbc();
    FUN_1090c54d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5b30();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5af4();
    func_0x0001090c5b0c();
    func_0x0001090c5aec();
    func_0x0001090c5ad4();
    func_0x0001090c5bd0();
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar3 != (undefined *)0x0) {
      FUN_1090c55a8(&PTR____CFConstantStringClassReference_110de7678,puVar3);
    }
    func_0x0001090c5ad4();
    func_0x0001090c5af4();
    func_0x0001090c5adc();
    func_0x0001090c5ae4();
  }
  func_0x0001090c5ac0(extraout_x8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001090c5ad4();
    func_0x0001090c5adc();
    func_0x0001090c5ae4();
    func_0x0001090c5b4c();
    func_0x0001090c5b64();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1090c543c; end: 1090c5473;  */

void FUN_1090c543c(void)

{
  func_0x0001090c5b64();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090c5474; end: 1090c54cf;  */

void FUN_1090c5474(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_558;
  undefined1 auStack_528 [1280];
  undefined8 uStack_28;
  
  func_0x0001090c5afc();
  uStack_28 = extraout_x8;
  _uname(auStack_528);
  func_0x0001090c5b64();
  func_0x00010c25d8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c5ac0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090c5afc();
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5e8 = 0x80;
    puVar1 = &UNK_10f3b2862;
    puVar3 = &uStack_5e0;
    uStack_558 = extraout_x8_00;
    _sysctlbyname(&UNK_10f3b2862,puVar3,&uStack_5e8,0,0);
    if ((int)puVar1 == 0) {
      func_0x0001090c5b64();
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb980();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c5ad4();
    }
    func_0x0001090c5ac0(uStack_558);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001090c5ad4();
      __Unwind_Resume(puVar1);
      func_0x0001090c5b70();
      func_0x0001090c5ba0();
      puVar2 = puVar3;
      func_0x00010c08fa60();
      if (puVar2 != (undefined8 *)0x0) {
        func_0x0001090c5b64();
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
        FUN_1090c58bc(puVar1,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2be5a0();
        _objc_retain(0);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010c1ecdc0(puVar1);
        }
        func_0x0001090c5aec();
        func_0x0001090c5adc();
        func_0x0001090c5af4();
      }
      func_0x0001090c5ad4();
      func_0x0001090c5ae4();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090c54d0; end: 1090c55a7;  */

void FUN_1090c54d0(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x0001090c5afc();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0x80;
  puVar1 = &UNK_10f3b2862;
  puVar4 = &uStack_b0;
  uStack_28 = extraout_x8;
  _sysctlbyname(&UNK_10f3b2862,puVar4,&uStack_b8,0,0);
  if ((int)puVar1 == 0) {
    func_0x0001090c5b64();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb980();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x0001090c5ad4();
  }
  func_0x0001090c5ac0(uStack_28);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x0001090c5ad4();
  __Unwind_Resume(puVar1);
  func_0x0001090c5b70();
  func_0x0001090c5ba0();
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001090c5b64();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090c58bc(puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be5a0();
    _objc_retain(0);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010c1ecdc0(puVar1);
    }
    func_0x0001090c5aec();
    func_0x0001090c5adc();
    func_0x0001090c5af4();
  }
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  return;
}



/* Entry: 1090c55a8; end: 1090c56c7;  */

void FUN_1090c55a8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001090c5b70();
  func_0x0001090c5ba0();
  uVar1 = param_2;
  func_0x00010c08fa60();
  if (uVar1 != 0) {
    func_0x0001090c5b64();
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090c58bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be5a0();
    _objc_retain(0);
    if ((param_2 & 1) != 0) {
      func_0x00010c1ecdc0(unaff_x19);
    }
    func_0x0001090c5aec();
    func_0x0001090c5adc();
    func_0x0001090c5af4();
  }
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
  return;
}



/* Entry: 1090c56c8; end: 1090c58bb;  */

void FUN_1090c56c8(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar5;
  
  func_0x0001090c5afc();
  uVar2 = *param_1 == param_1[1];
  if (!(bool)uVar2) {
    func_0x0001090c5b78();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x20[1];
    for (lVar5 = *unaff_x20; uVar2 = lVar5 == lVar1, !(bool)uVar2; lVar5 = lVar5 + 4) {
      FUN_1090c543c();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c5b54();
      func_0x0001090c5ad4();
    }
    func_0x0001090c5ba8();
    FUN_1090c5474();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5bbc();
    FUN_1090c54d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5b30();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5adc();
    func_0x0001090c5aec();
    func_0x0001090c5ad4();
    func_0x0001090c5bd0();
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar3 != (undefined *)0x0) {
      FUN_1090c55a8();
    }
    func_0x0001090c5ad4();
    func_0x0001090c5adc();
    func_0x0001090c5af4();
    func_0x0001090c5ae4();
  }
  func_0x0001090c5ac0(extraout_x8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001090c5ad4();
    func_0x0001090c5af4();
    func_0x0001090c5ae4();
    func_0x0001090c5b98();
    func_0x0001090c5b70();
    func_0x0001090c5ba0();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_1090c5474();
    _objc_retainAutoreleasedReturnValue();
    FUN_1090c54d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5aec();
    func_0x0001090c5af4();
    if (lRam0000000113730a18 != -1) {
      func_0x000107c27d9c(0x113730a18,&PTR___NSConcreteGlobalBlock_110ad8b58);
    }
    uVar4 = uRam0000000113730a10;
    func_0x00010bdc2c60(uRam0000000113730a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c5adc();
    func_0x0001090c5ad4();
    func_0x0001090c5ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1090c58bc; end: 1090c59e3;  */

void FUN_1090c58bc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001090c5b70();
  func_0x0001090c5ba0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_1090c5474();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090c54d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c5aec();
  func_0x0001090c5af4();
  if (lRam0000000113730a18 != -1) {
    func_0x000107c27d9c(0x113730a18,&PTR___NSConcreteGlobalBlock_110ad8b58);
  }
  uVar2 = uRam0000000113730a10;
  func_0x00010bdc2c60(uRam0000000113730a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c5adc();
  func_0x0001090c5ad4();
  func_0x0001090c5ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090c59e4; end: 1090c5abf;  */

void FUN_1090c59e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c5af4();
  func_0x00010bdc2c80(puVar3,param_2,&PTR____CFConstantStringClassReference_110f21598,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730a10;
  puRam0000000113730a10 = puVar3;
  func_0x0001090c5b28(uVar1);
  func_0x00010bf55da0(puVar2,param_2,puRam0000000113730a10,1,0,0);
  func_0x0001090c5ad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1090c5ac0; end: 1090c5bdb;  */

void FUN_1090c5ac0(void)

{
  return;
}



/* Entry: 1090c5bdc; end: 1090c5bfb;  */

void FUN_1090c5bdc(undefined8 *param_1)

{
  FUN_1090e32d4();
  *param_1 = &PTR_FUN_110ad8ba0;
  return;
}



/* Entry: 1090c5bfc; end: 1090c5bff;  */

undefined8 * FUN_1090c5bfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ada028;
  func_0x0001090e3424(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1090c5c00; end: 1090c5c13;  */

void FUN_1090c5c00(void)

{
  func_0x0001090e331c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c5c14; end: 1090c5ea3;  */

void FUN_1090c5c14(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long *plStack_88;
  undefined4 *puStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_3;
  FUN_1090c4b30();
  iVar1 = 0;
  if ((int)puVar2 != 0) {
    plVar8 = (long *)*param_3;
    ppuVar3 = &puStack_58;
    func_0x000107c278b8(ppuVar3,&DAT_10f54d2d5);
    func_0x0001090c69b8(*(undefined8 *)(*plVar8 + 0x10));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_58);
    puStack_58 = (undefined4 *)0x0;
    puStack_50 = (undefined4 *)0x0;
    uStack_48 = 0;
    ppuVar4 = &puStack_58;
    FUN_1090c5080(ppuVar4,param_3);
    puVar5 = puStack_50;
    puVar9 = puStack_58;
    if ((int)ppuVar4 != 0) {
      for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,*puVar9);
        FUN_1090c61b0(&uStack_70,param_2,&plStack_88);
      }
    }
    plVar8 = (long *)*param_3;
    (**(code **)(*plVar8 + 0x18))(plVar8,ppuVar3);
    iVar1 = (int)plVar8;
    func_0x0001090c69c4();
    if (((ulong)ppuVar4 & 1) != 0) {
      return;
    }
  }
  uStack_74 = 0;
  func_0x0001090c6994();
  _AudioFormatGetPropertyInfo();
  if (iVar1 == 0) {
    puStack_58 = (undefined4 *)0x0;
    puStack_50 = (undefined4 *)0x0;
    uStack_48 = 0;
    func_0x0001074287b0(&puStack_58,uStack_74 >> 2);
    plVar8 = (long *)*param_3;
    puVar2 = &uStack_70;
    func_0x000107c278b8(puVar2,&DAT_10f54d257);
    func_0x0001090c69b8(*(undefined8 *)(*plVar8 + 0x10));
    iVar1 = (int)&uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001090c6994();
    _AudioFormatGetProperty();
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,puVar2);
    puVar5 = puStack_50;
    puVar9 = puStack_58;
    if (iVar1 == 0) {
      for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,*puVar9);
        func_0x0001090c6734(&uStack_70,param_2,&plStack_88);
        if ((int)plStack_88 == 0x61616320) {
          uStack_78 = 0x6d703461;
          FUN_1090c61b0(&uStack_70,param_2,&uStack_78);
        }
      }
      puVar5 = (undefined4 *)param_2[2];
      if (puVar5 != (undefined4 *)0x0) {
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        func_0x0001056c5718(&uStack_70);
        plVar8 = param_2;
        FUN_1090c5ea4();
        lVar6 = *param_2;
        lVar7 = param_2[3];
        plStack_88 = plVar8;
        puStack_80 = puVar5;
        while (plStack_88 != (long *)(lVar6 + lVar7)) {
          uStack_78 = *puStack_80;
          func_0x000107c2842c(&uStack_70,&uStack_78);
          FUN_1090c5ed0(&plStack_88);
        }
        FUN_1090c56c8(&uStack_70,param_3);
        func_0x00010731e26c(&uStack_70);
      }
    }
    func_0x0001090c69c4();
  }
  return;
}



/* Entry: 1090c5ea4; end: 1090c5ecf;  */

undefined1  [16] FUN_1090c5ea4(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1090c67d0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1090c5ed0; end: 1090c5f03;  */

long * FUN_1090c5ed0(long *param_1)

{
  param_1[1] = param_1[1] + 4;
  *param_1 = *param_1 + 1;
  FUN_1090c67d0();
  return param_1;
}



/* Entry: 1090c5f04; end: 1090c6157;  */

void FUN_1090c5f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *extraout_x8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1090c6158(&lStack_60,param_3);
  if (lStack_60 == 0) {
    func_0x00010b99f5f8(&puStack_58,&UNK_10f54f954);
    *param_1 = 2;
    param_1[1] = puStack_58;
    puStack_58 = (undefined8 *)0x0;
    func_0x000104bda93c(&puStack_58);
  }
  else {
    func_0x000107c31088(&puStack_58,&UNK_10f54f984);
    func_0x000107c31034(&puStack_68,&puStack_58,3);
    func_0x000107c278f4(&puStack_58);
    puVar5 = (undefined8 *)0xd0;
    __Znwm();
    plVar6 = puVar5 + 1;
    *plVar6 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110ad8c00;
    puVar1 = puVar5 + 3;
    if ((puStack_68 != (undefined8 *)0x0) && (puStack_68[2] != 0)) {
      plVar2 = (long *)(puStack_68[2] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_58 = puStack_68;
    FUN_1090c7198(puVar1,&puStack_58);
    FUN_1090b64f0(&puStack_58);
    if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 8) == -1)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puStack_58 = puVar1;
      puStack_50 = puVar5;
      func_0x000107c278e4(puVar5 + 4,&puStack_58);
      func_0x000107c278ec(&puStack_58);
    }
    puStack_70 = puVar1;
    FUN_1090c72b4(&puStack_58,puVar1,&lStack_60);
    if (puStack_58 == (undefined8 *)0x1) {
      if (puVar5[5] != 0) {
        plVar6 = (long *)(puVar5[5] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *param_1 = 1;
      param_1[1] = puVar1;
      uStack_78 = 0;
      FUN_1090c68d4(&uStack_78);
    }
    else {
      *param_1 = 2;
      param_1[1] = puStack_50;
      puStack_50 = (undefined8 *)0x0;
    }
    func_0x0001080c6234(&puStack_58);
    FUN_1090c68b0(&puStack_70);
    func_0x000104bd5214(&puStack_68);
  }
  plVar6 = &lStack_60;
  FUN_1090c6828();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_1090c6828(&lStack_60);
    __Unwind_Resume();
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (___dynamic_cast(lVar7,&PTR_DAT_110ada368,&PTR_DAT_110ada398,0), lVar7 != 0)
       ) {
      plVar6 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *extraout_x8 = lVar7;
    return;
  }
  return;
}



/* Entry: 1090c6158; end: 1090c61af;  */

void FUN_1090c6158(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (___dynamic_cast(lVar4,&PTR_DAT_110ada368,&PTR_DAT_110ada398,0), lVar4 != 0))
  {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1090c61b0; end: 1090c61d3;  */

void FUN_1090c61b0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1090c61d4(&uStack_18);
  return;
}



/* Entry: 1090c61d4; end: 1090c61db;  */

void FUN_1090c61d4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *unaff_x20;
  byte unaff_w21;
  undefined4 *unaff_x22;
  
  uVar2 = (uint)param_2;
  func_0x0001090c691c(param_1,uVar2,param_2);
  func_0x0001090c6964();
  func_0x0001090c6940();
  if ((uVar2 & 1) != 0) {
    lVar1 = *unaff_x20;
    *(undefined4 *)(unaff_x20[1] + param_1 * 4) = *unaff_x22;
    *(byte *)(lVar1 + param_1) = unaff_w21 & 0x7f;
    func_0x0001090c6904();
  }
  func_0x0001090c697c();
  return;
}



/* Entry: 1090c61dc; end: 1090c624b;  */

void FUN_1090c61dc(long param_1,uint param_2)

{
  long lVar1;
  long *unaff_x20;
  byte unaff_w21;
  undefined4 *unaff_x22;
  
  func_0x0001090c691c();
  func_0x0001090c6964();
  func_0x0001090c6940();
  if ((param_2 & 1) != 0) {
    lVar1 = *unaff_x20;
    *(undefined4 *)(unaff_x20[1] + param_1 * 4) = *unaff_x22;
    *(byte *)(lVar1 + param_1) = unaff_w21 & 0x7f;
    func_0x0001090c6904();
  }
  func_0x0001090c697c();
  return;
}



/* Entry: 1090c624c; end: 1090c6327;  */

void FUN_1090c624c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x0001090c671c(&lStack_18);
  return;
}



/* Entry: 1090c6328; end: 1090c639b;  */

void FUN_1090c6328(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_1090c639c();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      plVar1 = param_1;
      func_0x0001090c63e8();
      func_0x0001090c69cc();
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 1090c639c; end: 1090c6417;  */

ulong FUN_1090c639c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 1090c6418; end: 1090c64e3;  */

void FUN_1090c6418(long *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_58;
  
  pcVar2 = (char *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  lVar6 = param_1[3];
  FUN_1090c664c();
  param_1[3] = param_2;
  pcVar1 = pcVar2;
  for (lVar7 = lVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
    if (-1 < *pcVar1) {
      pplVar4 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_1090c66fc(pplVar4,puVar3);
      plVar5 = param_1;
      FUN_1090c639c(param_1,pplVar4);
      *(byte *)(*param_1 + (long)plVar5) = (byte)pplVar4 & 0x7f;
      func_0x0001090c6904();
      *(undefined4 *)(param_1[1] + (long)plVar5 * 4) = *puVar3;
    }
    pcVar1 = pcVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (lVar6 != 0) {
    __ZdlPv(pcVar2);
  }
  return;
}



/* Entry: 1090c64e4; end: 1090c664b;  */

void FUN_1090c64e4(void)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  long **pplVar4;
  long **pplVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong uVar8;
  long *plStack_48;
  
  func_0x0001090c69d8();
  func_0x000104bda340();
  for (uVar8 = 0; uVar8 != unaff_x19[3]; uVar8 = uVar8 + 1) {
    if (*(char *)(*unaff_x19 + uVar8) == -2) {
      pplVar4 = &plStack_48;
      plStack_48 = unaff_x19 + 5;
      FUN_1090c66fc(pplVar4,unaff_x19[1] + uVar8 * 4);
      pplVar5 = pplVar4;
      func_0x0001090c69cc();
      uVar7 = unaff_x19[3] & (ulong)pplVar4 >> 7;
      if ((((long)pplVar5 - uVar7 ^ uVar8 - uVar7) & unaff_x19[3]) < 8) {
        *(byte *)(*unaff_x19 + uVar8) = (byte)pplVar4 & 0x7f;
        func_0x0001090c6904();
      }
      else {
        cVar2 = *(char *)(*unaff_x19 + (long)pplVar5);
        bVar3 = (byte)pplVar4 & 0x7f;
        *(byte *)(*unaff_x19 + (long)pplVar5) = bVar3;
        *(byte *)(*unaff_x19 + (unaff_x19[3] & 7U) + (unaff_x19[3] & (ulong)(pplVar5 + -1)) + 1) =
             bVar3;
        lVar6 = unaff_x19[1];
        if (cVar2 == -0x80) {
          *(undefined4 *)(lVar6 + (long)pplVar5 * 4) = *(undefined4 *)(lVar6 + uVar8 * 4);
          *(undefined1 *)(*unaff_x19 + uVar8) = 0x80;
          *(undefined1 *)(*unaff_x19 + (unaff_x19[3] & uVar8 - 8) + (unaff_x19[3] & 7U) + 1) = 0x80;
        }
        else {
          uVar1 = *(undefined4 *)(lVar6 + uVar8 * 4);
          *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(lVar6 + (long)pplVar5 * 4);
          *(undefined4 *)(lVar6 + (long)pplVar5 * 4) = uVar1;
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  lVar6 = 6;
  if (uVar8 != 7) {
    lVar6 = uVar8 - (uVar8 >> 3);
  }
  unaff_x19[5] = lVar6 - unaff_x19[2];
  return;
}



/* Entry: 1090c664c; end: 1090c66bb;  */

void FUN_1090c664c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (param_2 & 0xfffffffffffffffc) + 0xc;
  plVar2 = param_1 + 5;
  FUN_1090c66bc(plVar2,lVar1 + param_2 * 4);
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + lVar1;
  _memset();
  *(undefined1 *)(*param_1 + param_2) = 0xff;
  lVar1 = 6;
  if (param_2 != 7) {
    lVar1 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 1090c66bc; end: 1090c66fb;  */

void FUN_1090c66bc(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001090c66e0(&uStack_11,param_2 + 3U >> 2);
  return;
}



/* Entry: 1090c66fc; end: 1090c6703;  */

void FUN_1090c66fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090c69ac(param_1,param_2,param_2);
  return;
}



/* Entry: 1090c6704; end: 1090c6757;  */

void FUN_1090c6704(void)

{
  func_0x0001090c69ac();
  return;
}



/* Entry: 1090c6758; end: 1090c675f;  */

void FUN_1090c6758(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long *unaff_x20;
  byte unaff_w21;
  undefined4 *unaff_x22;
  
  uVar2 = (uint)param_2;
  func_0x0001090c691c(param_1,uVar2,param_2);
  func_0x0001090c6964();
  func_0x0001090c6940();
  if ((uVar2 & 1) != 0) {
    lVar1 = *unaff_x20;
    *(undefined4 *)(unaff_x20[1] + param_1 * 4) = *unaff_x22;
    *(byte *)(lVar1 + param_1) = unaff_w21 & 0x7f;
    func_0x0001090c6904();
  }
  func_0x0001090c697c();
  return;
}



/* Entry: 1090c6760; end: 1090c67cf;  */

void FUN_1090c6760(long param_1,uint param_2)

{
  long lVar1;
  long *unaff_x20;
  byte unaff_w21;
  undefined4 *unaff_x22;
  
  func_0x0001090c691c();
  func_0x0001090c6964();
  func_0x0001090c6940();
  if ((param_2 & 1) != 0) {
    lVar1 = *unaff_x20;
    *(undefined4 *)(unaff_x20[1] + param_1 * 4) = *unaff_x22;
    *(byte *)(lVar1 + param_1) = unaff_w21 & 0x7f;
    func_0x0001090c6904();
  }
  func_0x0001090c697c();
  return;
}



/* Entry: 1090c67d0; end: 1090c6827;  */

void FUN_1090c67d0(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 4;
  }
  return;
}



/* Entry: 1090c6828; end: 1090c684b;  */

void FUN_1090c6828(void)

{
  func_0x0001090c69d8();
  FUN_1090c684c();
  return;
}



/* Entry: 1090c684c; end: 1090c687b;  */

void FUN_1090c684c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c687c; end: 1090c688f;  */

void FUN_1090c687c(void)

{
  func_0x0001090c68a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c6890; end: 1090c68af;  */

void FUN_1090c6890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090c6898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090c68b0; end: 1090c68d3;  */

void FUN_1090c68b0(long param_1)

{
  func_0x0001090c69d8();
  if (param_1 != 0) {
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 1090c68d4; end: 1090c68f7;  */

void FUN_1090c68d4(void)

{
  func_0x0001090c69d8();
  func_0x0001090c68f8();
  return;
}



/* Entry: 1090c68f8; end: 1090c69e3;  */

void FUN_1090c68f8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090c69e4; end: 1090c6a0f;  */

undefined8 * FUN_1090c69e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8c50;
  func_0x0001090e8af0(param_1 + 2);
  return param_1;
}



/* Entry: 1090c6a10; end: 1090c6a13;  */

undefined8 * FUN_1090c6a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8c50;
  func_0x0001090e8af0(param_1 + 2);
  return param_1;
}



/* Entry: 1090c6a14; end: 1090c6a27;  */

void FUN_1090c6a14(void)

{
  FUN_1090c69e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c6a28; end: 1090c6a7f;  */

void FUN_1090c6a28(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  param_1[1] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = lVar4;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 1090c6a80; end: 1090c6ac3;  */

undefined8 * FUN_1090c6a80(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    _AudioConverterDispose();
    param_1[1] = 0;
  }
  FUN_1090c6828(param_1 + 3);
  FUN_1090c6828(param_1 + 2);
  FUN_1090c70cc(*param_1);
  return param_1;
}



/* Entry: 1090c6ac4; end: 1090c6d4b;  */

void FUN_1090c6ac4(undefined8 *param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  long *plVar6;
  long lStack_108;
  ulong auStack_100 [5];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2 + 1;
  if (*plVar6 != 0) {
    _abort();
    goto LAB_1090c6d10;
  }
  FUN_1090ca258(&lStack_88,param_2[2]);
  if (lStack_88 == 1) {
    uStack_d8 = uStack_78;
    auStack_100[4] = lStack_80;
    uStack_c8 = uStack_68;
    uVar2 = uStack_c8;
    uStack_d0 = uStack_70;
    uStack_c0 = uStack_60;
    param_2[4] = lStack_80;
    param_2[5] = 0x96c70636d;
    uStack_c8._4_4_ = (int)((ulong)uStack_68 >> 0x20);
    *(int *)((long)param_2 + 0x3c) = uStack_c8._4_4_;
    *(undefined4 *)(param_2 + 8) = 0x20;
    *(undefined4 *)((long)param_2 + 0x34) = 1;
    *(int *)(param_2 + 7) = uStack_c8._4_4_ << 2;
    *(int *)(param_2 + 6) = uStack_c8._4_4_ << 2;
    puVar3 = auStack_100 + 4;
    uStack_c8 = uVar2;
    _AudioConverterNew(puVar3,param_2 + 4,plVar6);
    param_3 = (int)puVar3;
    if (param_3 == 0) {
      lVar5 = param_2[2];
      if (*(long *)(lVar5 + 0x30) != 0) {
        _AudioConverterSetProperty
                  (*plVar6,0x646d6763,*(long *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x40));
        lVar5 = param_2[2];
      }
      auStack_100[1] = 0;
      auStack_100[0] = 0;
      auStack_100[3] = 0;
      auStack_100[2] = 0;
      if (*(short *)(lVar5 + 0x14) == 1) {
        uVar1 = 0x640001;
LAB_1090c6c0c:
        auStack_100[0] = (ulong)uVar1;
      }
      else if (*(short *)(lVar5 + 0x14) == 2) {
        uVar1 = 0x650002;
        goto LAB_1090c6c0c;
      }
      _AudioConverterSetProperty(*plVar6,0x69636c20,0x20,auStack_100);
      _AudioConverterSetProperty(*plVar6,0x6f636c20,0x20,auStack_100);
      *(undefined4 *)(param_2 + 9) = uStack_d0._4_4_;
      lVar4 = 0x48;
      __Znwm();
      ppuStack_b0 = &PTR_DAT_110d7e488;
      uStack_a8 = 1;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      param_3 = 0x6c70636d;
      lVar5 = lVar4;
      func_0x0001090e512c();
      ppuStack_b0 = &PTR_DAT_110d7e488;
      lStack_108 = lVar5;
      _free(uStack_90);
      param_2 = param_2 + 3;
      if (param_2 != &lStack_108) {
        lStack_108 = 0;
        lVar5 = *param_2;
        *param_2 = lVar4;
        FUN_1090c684c(lVar5);
      }
      FUN_1090c6828(&lStack_108);
      *param_1 = 1;
    }
    else {
      FUN_1090caa2c(&ppuStack_b0,&UNK_10f54f9a4);
      *param_1 = 2;
      param_1[1] = ppuStack_b0;
      ppuStack_b0 = (undefined **)0x0;
      func_0x000104bda93c(&ppuStack_b0);
    }
  }
  else {
    *param_1 = 2;
    param_1[1] = lStack_80;
    lStack_80 = 0;
  }
  param_2 = &lStack_88;
  func_0x0001090c70f0();
  func_0x0001090c716c(uStack_58);
  if (extraout_x9 == extraout_x8) {
    return;
  }
LAB_1090c6d10:
  ___stack_chk_fail();
  if (param_3 != 0) {
    func_0x000104bd46a0();
    func_0x0001090c70f0(&lStack_88);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioConverterReset_11034aed0)(param_2[1]);
  return;
}



/* Entry: 1090c6d4c; end: 1090c6d53;  */

void FUN_1090c6d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__AudioConverterReset_11034aed0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1090c6d54; end: 1090c7017;  */

undefined8 *
FUN_1090c6d54(undefined8 *param_1,long *param_2,undefined4 *param_3,undefined4 **param_4,
             uint *param_5,long *param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong extraout_x8;
  ulong uVar11;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  uint uStack_11c;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined4 *puStack_e0;
  undefined4 **ppuStack_d8;
  undefined8 uStack_d0;
  uint *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  char cStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar13 = 0;
  lVar14 = 0;
  puVar10 = param_5;
  func_0x0001090c716c(0);
  uStack_d0 = 0;
  cStack_a8 = '\0';
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uVar11 = extraout_x8;
  puStack_e0 = param_3;
  ppuStack_d8 = param_4;
  puStack_c8 = puVar10;
  uStack_78 = extraout_x9;
  do {
    if (*(ulong *)(puStack_c8 + 4) <= uVar11) {
      if (cStack_a8 == '\x01') {
        _AudioConverterReset(param_2[1]);
      }
      puVar9 = (undefined8 *)0x38;
      __Znwm();
      uVar8 = uStack_100;
      uStack_100 = 0;
      *(undefined8 *)((ulong)&uStack_100 | 8) = 0;
      ((undefined8 *)((ulong)&uStack_100 | 8))[1] = 0;
      *puVar9 = &PTR_FUN_110ad8c50;
      puVar9[1] = 1;
      lStack_a0 = 0;
      puVar9[3] = lStack_f8;
      puVar9[2] = uVar8;
      uStack_98 = 0;
      lStack_90 = 0;
      puVar9[4] = uStack_f0;
      puVar9[5] = lVar13;
      puVar9[6] = lVar14;
      func_0x0001090e8af0(&lStack_a0);
      *param_1 = 1;
      param_1[1] = puVar9;
      lStack_118 = 0;
      FUN_1090c7120(&lStack_118);
LAB_1090c6fa4:
      puVar9 = &uStack_100;
      func_0x0001090e8af0(puVar9);
      func_0x0001090c716c(uStack_78);
      if (extraout_x9_00 == extraout_x8_00) {
        return puVar9;
      }
      ___stack_chk_fail();
      func_0x0001090e8af0(&uStack_100);
      __Unwind_Resume(puVar9);
      lVar13 = param_6[3];
      uVar11 = param_6[4];
      if (uVar11 < *(ulong *)(lVar13 + 0x10)) {
        if (*(long *)(lVar13 + 8) != 0) {
          lVar13 = *(long *)(lVar13 + 8) + 0x18;
        }
        lVar13 = *(long *)(lVar13 + uVar11 * 8);
        uVar3 = param_6[2] + lVar13;
        if (uVar3 <= (ulong)param_6[1]) {
          param_4[2] = (undefined4 *)(*param_6 + param_6[2]);
          uVar12 = (undefined4)lVar13;
          *(undefined4 *)(param_4 + 1) = 1;
          *(undefined4 *)((long)param_4 + 0xc) = uVar12;
          *(undefined4 *)((long)param_6 + 0x34) = uVar12;
          if (puVar10 != (uint *)0x0) {
            *(long **)puVar10 = param_6 + 5;
          }
          param_6[4] = uVar11 + 1;
          param_6[2] = uVar3;
          *(undefined4 *)param_4 = 1;
          *param_3 = 1;
          return (undefined8 *)0x0;
        }
      }
      *(undefined1 *)(param_6 + 7) = 1;
      *param_3 = 0;
      if (puVar10 != (uint *)0x0) {
        puVar10[0] = 0;
        puVar10[1] = 0;
      }
      return (undefined8 *)0x0;
    }
    uVar4 = (int)param_2[9] * (param_5[4] - (int)uVar11);
    lStack_a0 = CONCAT44(lStack_a0._4_4_,1);
    uVar5 = (int)param_2[7] * uVar4;
    uStack_98 = CONCAT44(uVar5,*(undefined4 *)((long)param_2 + 0x3c));
    lVar2 = lVar13 + (ulong)uVar5;
    (**(code **)(*(long *)*param_2 + 0x20))(&lStack_88,(long *)*param_2,lVar2);
    if (lStack_88 != 1) {
      param_3 = (undefined4 *)&UNK_10f54f9c3;
      param_4 = (undefined4 **)0x33;
      func_0x00010b99fa70(&lStack_118,&uStack_80);
LAB_1090c6f88:
      *param_1 = 2;
      param_1[1] = lStack_118;
      lStack_118 = 0;
      func_0x000104bda93c(&lStack_118);
      func_0x0001090c717c();
      goto LAB_1090c6fa4;
    }
    if (lVar13 != 0) {
      _memcpy(uStack_80,lStack_f8,lVar13);
    }
    lStack_118 = *param_2;
    if (lStack_118 != 0) {
      plVar1 = (long *)(lStack_118 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_110 = uStack_80;
    lStack_108 = lVar2;
    func_0x0001090e8ba0(&uStack_100,&lStack_118);
    func_0x0001090e8af0(&lStack_118);
    lStack_90 = lStack_f8 + lVar13;
    param_3 = (undefined4 *)param_2[1];
    param_4 = &puStack_e0;
    puVar10 = &uStack_11c;
    param_6 = &lStack_a0;
    uStack_11c = uVar4;
    _AudioConverterFillComplexBuffer(param_3,FUN_1090c7018);
    if ((int)param_3 != 0) {
      FUN_1090caa2c(&lStack_118,&UNK_10f54f9f7);
      goto LAB_1090c6f88;
    }
    if (uStack_11c == 0) {
      _AudioConverterReset(param_2[1]);
      param_3 = (undefined4 *)&UNK_10f54fa16;
      func_0x00010b99f5f8(&lStack_118);
      goto LAB_1090c6f88;
    }
    lVar13 = lVar13 + (uStack_98 >> 0x20);
    lVar14 = lVar14 + (ulong)uStack_11c;
    func_0x0001090c717c();
    uVar11 = uStack_c0;
  } while( true );
}



/* Entry: 1090c7018; end: 1090c70a3;  */

undefined8
FUN_1090c7018(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,long *param_4,long *param_5
             )

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_5[3];
  uVar2 = param_5[4];
  if (uVar2 < *(ulong *)(lVar4 + 0x10)) {
    if (*(long *)(lVar4 + 8) != 0) {
      lVar4 = *(long *)(lVar4 + 8) + 0x18;
    }
    lVar4 = *(long *)(lVar4 + uVar2 * 8);
    uVar1 = param_5[2] + lVar4;
    if (uVar1 <= (ulong)param_5[1]) {
      *(long *)(param_3 + 4) = *param_5 + param_5[2];
      uVar3 = (undefined4)lVar4;
      param_3[2] = 1;
      param_3[3] = uVar3;
      *(undefined4 *)((long)param_5 + 0x34) = uVar3;
      if (param_4 != (long *)0x0) {
        *param_4 = (long)(param_5 + 5);
      }
      param_5[4] = uVar2 + 1;
      param_5[2] = uVar1;
      *param_3 = 1;
      *param_2 = 1;
      return 0;
    }
  }
  *(undefined1 *)(param_5 + 7) = 1;
  *param_2 = 0;
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  return 0;
}



/* Entry: 1090c70a4; end: 1090c70cb;  */

undefined8 * FUN_1090c70a4(undefined8 *param_1)

{
  FUN_1090c70cc(*param_1);
  return param_1;
}



/* Entry: 1090c70cc; end: 1090c711f;  */

void FUN_1090c70cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c7120; end: 1090c7147;  */

undefined8 * FUN_1090c7120(undefined8 *param_1)

{
  FUN_1090c7148(*param_1);
  return param_1;
}



/* Entry: 1090c7148; end: 1090c7197;  */

void FUN_1090c7148(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090c718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090c7198; end: 1090c723f;  */

undefined8 * FUN_1090c7198(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad8c98;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 3);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xe] = lVar4;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



/* Entry: 1090c7240; end: 1090c729b;  */

undefined8 * FUN_1090c7240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8c98;
  FUN_1090d01ec(param_1 + 0xf);
  FUN_1090b64f0(param_1 + 0xe);
  FUN_1090c7d40(param_1 + 0xd);
  FUN_1090c7cf8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090c729c; end: 1090c729f;  */

undefined8 * FUN_1090c729c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8c98;
  FUN_1090d01ec(param_1 + 0xf);
  FUN_1090b64f0(param_1 + 0xe);
  FUN_1090c7d40(param_1 + 0xd);
  FUN_1090c7cf8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090c72a0; end: 1090c72b3;  */

void FUN_1090c72a0(void)

{
  FUN_1090c7240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090c72b4; end: 1090c73af;  */

void FUN_1090c72b4(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 uStack_88;
  long *plStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pplVar2 = &plStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1090c7d98(&lStack_48);
  plVar3 = &lStack_48;
  FUN_1090c73b0(&plStack_50,param_3);
  FUN_1090c7e0c(&lStack_48);
  FUN_1090c6ac4(&lStack_48,plStack_50);
  plVar4 = plStack_50;
  uVar1 = lStack_48 == 1;
  if ((bool)uVar1) {
    plStack_50 = (long *)0x0;
    FUN_1090c7d64(param_2 + 0x68);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(*param_3 + 0x10);
    uVar5 = 1;
    plVar3 = plVar4;
  }
  else {
    param_1[1] = uStack_40;
    uStack_40 = 0;
    uVar5 = 2;
  }
  *param_1 = uVar5;
  func_0x0001080c6234(&lStack_48);
  FUN_1090c7d40();
  func_0x0001090c8084(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_1090c7d40(&plStack_50);
    func_0x0001090c8100();
    uVar5 = 0x50;
    __Znwm();
    uStack_88 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x0001090c81d0();
        uStack_88 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    FUN_1090c6a28(uVar5,pplVar2,&uStack_88);
    *extraout_x8 = uVar5;
    FUN_1090c70a4(&uStack_88);
    return;
  }
  return;
}



/* Entry: 1090c73b0; end: 1090c743f;  */

void FUN_1090c73b0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  uVar1 = 0x50;
  __Znwm();
  uStack_38 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001090c81d0();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1090c6a28(uVar1,param_2,&uStack_38);
  *param_1 = uVar1;
  FUN_1090c70a4(&uStack_38);
  return;
}



/* Entry: 1090c7440; end: 1090c7483;  */

void FUN_1090c7440(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x0001090c81ac();
  FUN_1090c7484(unaff_x19 + 0x58,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1090c7484; end: 1090c74c7;  */

long * FUN_1090c7484(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001090c81d0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_1090c7d1c();
  }
  return param_1;
}


