/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0cdb74; end: 10b0cdbbb; -[SCLensDownloadOperation .cxx_destruct] */

void FUN_10b0cdb74(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0cdbbc; end: 10b0cdd93; -[SCLensDownloadOperationFactory contentDownloadOperationForLens:requestTiming:userInitiated:fetchType:] */

void FUN_10b0cdbbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126df9d8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf4c1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c23c360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c095f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c092820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0229e0(puVar9,param_2,param_3,param_4,lVar2,lVar3,lVar4,lVar6,uVar8,uVar7,param_5);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b0cdd94; end: 10b0cdefb; -[SCLensDownloadOperationFactory imageDownloadOperationForLens:requestTiming:] */

void FUN_10b0cdd94(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf1b100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      param_1 = 0;
      goto LAB_10b0cded0;
    }
  }
  else {
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf1c5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar3 != 0) {
      func_0x00010bf1ba00(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b0cded0;
    }
  }
  func_0x00010bfe5540(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_10b0cded0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0cdefc; end: 10b0ce423; -[SCLensDownloadOperationFactory assetDownloadOperationForAsset:contextLens:requestTiming:fetchType:] */

void FUN_10b0cdefc(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_4 == 0) && (puVar3 = param_3, func_0x00010c27dd80(), puVar3 != (undefined *)0x7)) &&
     (puVar3 = param_3, func_0x00010c27dd80(), puVar3 != (undefined *)0xa)) {
LAB_10b0ce41c:
    puVar7 = (undefined *)0x0;
    goto LAB_10b0ce3b4;
  }
  puVar3 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = (undefined *)0x0;
  if (puVar3 == (undefined *)0x0) goto LAB_10b0ce3b4;
  puVar3 = param_3;
  func_0x00010c27dd80();
  puVar7 = (undefined *)0x0;
  if ((long)puVar3 < 7) {
    if (puVar3 == (undefined *)0x1) {
      puVar7 = PTR_PTR_1126df9e0;
      _objc_alloc(PTR_PTR_1126df9e0);
      puVar3 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ba60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0229a0(puVar7,param_2,param_4,param_5,param_3,puVar3,param_1);
      puVar2 = param_1;
    }
    else {
      if (puVar3 == (undefined *)0x2) {
        puVar7 = PTR_PTR_1126df9e8;
        _objc_alloc(PTR_PTR_1126df9e8);
        func_0x00010bf1bd00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c022980(puVar7,param_2,param_4,param_5,param_3,param_1);
        goto LAB_10b0ce3b0;
      }
      if (puVar3 != (undefined *)0x3) goto LAB_10b0ce3b4;
      puVar7 = PTR_PTR_1126df9f0;
      _objc_alloc(PTR_PTR_1126df9f0);
      puVar3 = param_1;
      func_0x00010bf4c1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022920(puVar7,param_2,param_4,param_5,param_3,param_6,puVar2,
                          *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
LAB_10b0ce3a8:
    _objc_release(puVar2);
    param_1 = puVar3;
  }
  else if ((long)puVar3 < 9) {
    if (puVar3 == (undefined *)0x7) {
      uVar4 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf70380();
      if ((uVar4 & 1) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010bf703a0();
        if (iVar1 != 0) goto LAB_10b0ce130;
LAB_10b0ce2b8:
        uVar4 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf703a0();
        if ((uVar4 & 1) == 0) {
          uVar4 = *(ulong *)(param_1 + 0x30);
          func_0x00010bf70300();
          if ((uVar4 & 1) == 0) {
            puVar3 = param_3;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c08fa60();
            if (puVar7 == (undefined *)0x0) {
              _objc_release(puVar3);
            }
            else {
              uVar5 = *(undefined8 *)(param_1 + 0x30);
              puVar7 = param_3;
              func_0x00010bfe5ec0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf70340(uVar5,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(puVar3);
              if ((int)uVar5 != 0) goto LAB_10b0ce328;
            }
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c133ee0();
            _objc_release(uVar5);
            goto LAB_10b0ce41c;
          }
        }
LAB_10b0ce328:
        puVar7 = PTR_PTR_1126dfa00;
        _objc_alloc(PTR_PTR_1126dfa00);
        puVar3 = param_1;
        func_0x00010bf4c1c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010bf0b3c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0228e0(puVar7,param_2,param_4,param_5,param_3,param_6,puVar2,puVar6,
                            *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      else {
LAB_10b0ce130:
        puVar3 = param_3;
        func_0x00010c09ac20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar7;
        func_0x00010c08fa60();
        _objc_release(puVar7);
        if (puVar2 == (undefined *)0x0) {
          _objc_release(puVar3);
          goto LAB_10b0ce2b8;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c28f340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c133f00(uVar5,param_2,param_3,param_4,0,puVar7,0);
        _objc_release(puVar7);
        _objc_release(uVar5);
        puVar7 = PTR_PTR_1126df9f0;
        _objc_alloc(PTR_PTR_1126df9f0);
        puVar2 = param_1;
        func_0x00010bf4c1c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c022920(puVar7,param_2,param_4,param_5,param_3,param_6,puVar6,
                            *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      _objc_release(puVar6);
      goto LAB_10b0ce3a8;
    }
    if (puVar3 != (undefined *)0x8) goto LAB_10b0ce3b4;
    puVar7 = PTR_PTR_1126df9f8;
    _objc_alloc(PTR_PTR_1126df9f8);
    func_0x00010bf1aa80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022960(puVar7,param_2,param_4,param_5,param_3,param_1);
  }
  else {
    if (puVar3 != (undefined *)0x9) {
      if (puVar3 == (undefined *)0xa) {
        puVar3 = param_3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar7 = (undefined *)0x0;
        if (puVar3 != (undefined *)0x0) {
          func_0x00010be6df80(param_1,param_2,param_3,param_4,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_1;
        }
      }
      goto LAB_10b0ce3b4;
    }
    puVar7 = PTR_PTR_1126dfa08;
    _objc_alloc(PTR_PTR_1126dfa08);
    puVar3 = param_1;
    func_0x00010bf4ca40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022940(puVar7,param_2,param_4,param_5,param_3,param_6,puVar3,
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    param_1 = puVar3;
  }
LAB_10b0ce3b0:
  _objc_release(param_1);
LAB_10b0ce3b4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b0ce424; end: 10b0ce4e7; -[SCLensDownloadOperationFactory externalDataDownloadOperationForLens:requestTiming:fetchType:] */

void FUN_10b0ce424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dfa10;
    _objc_alloc(PTR_PTR_1126dfa10);
    func_0x00010bf9e200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0227c0(puVar3,param_2,param_3,param_1,param_4,param_5);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0ce4e8; end: 10b0ce5db; -[SCLensDownloadOperationFactory iconDownloadOperationForLens:requestTiming:] */

void FUN_10b0ce4e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126dfa18;
    _objc_alloc(PTR_PTR_1126dfa18);
    lVar1 = param_1;
    func_0x00010bf4c1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022a00(puVar4,param_2,param_3,param_4,lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0ce5dc; end: 10b0ce707; -[SCLensDownloadOperationFactory bitmojiIconDownloadOperationForLens:requestTiming:] */

void FUN_10b0ce5dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126dfa20;
    _objc_alloc(PTR_PTR_1126dfa20);
    lVar1 = param_1;
    func_0x00010bf1ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5540(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0229c0(puVar5,param_2,param_3,param_4,lVar1,uVar3,uVar4,param_1);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0ce708; end: 10b0ce9d7; -[SCLensDownloadOperationFactory _operationForDynamicRemoteAsset:contextLens:requestTiming:fetchType:] */

void FUN_10b0ce708(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    iVar11 = (int)uVar4;
    _objc_release(uVar3);
  }
  else {
    iVar11 = 1;
  }
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((iVar11 == 0) || ((int)uVar3 == 0)) {
    puVar10 = PTR_PTR_1126dfa28;
    _objc_alloc(PTR_PTR_1126dfa28);
    puVar7 = param_1;
    func_0x00010bf4c1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf4ca40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022900(puVar10,param_2,param_4,param_5,param_3,param_6,puVar8,puVar9,
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar9 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126bd478;
      func_0x00010c08ff00(PTR_PTR_1126bd478,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010c2a8ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126df9f8;
      _objc_alloc(PTR_PTR_1126df9f8);
      func_0x00010bf1aa80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022960(puVar10,param_2,param_4,param_5,puVar6,param_1);
      _objc_release(param_1);
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b0ce9d8; end: 10b0ce9df; -[SCLensDownloadOperationFactory contentDataFetcher] */

undefined8 FUN_10b0ce9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0ce9e0; end: 10b0cea0f; -[SCLensDownloadOperationFactory setContentDataFetcher:] */

void FUN_10b0ce9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cea10; end: 10b0cea17; -[SCLensDownloadOperationFactory contentManagerBlobDataFetcher] */

undefined8 FUN_10b0cea10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0cea18; end: 10b0cea47; -[SCLensDownloadOperationFactory setContentManagerBlobDataFetcher:] */

void FUN_10b0cea18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cea48; end: 10b0cea4f; -[SCLensDownloadOperationFactory bitmojiImageFetcher] */

undefined8 FUN_10b0cea48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b0cea50; end: 10b0cea7f; -[SCLensDownloadOperationFactory setBitmojiImageFetcher:] */

void FUN_10b0cea50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cea80; end: 10b0cea87; -[SCLensDownloadOperationFactory bitmojiListManager] */

undefined8 FUN_10b0cea80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b0cea88; end: 10b0ceab7; -[SCLensDownloadOperationFactory setBitmojiListManager:] */

void FUN_10b0cea88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceab8; end: 10b0ceabf; -[SCLensDownloadOperationFactory bitmojiAssetDataFetcher] */

undefined8 FUN_10b0ceab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b0ceac0; end: 10b0ceaef; -[SCLensDownloadOperationFactory setBitmojiAssetDataFetcher:] */

void FUN_10b0ceac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceaf0; end: 10b0ceaf7; -[SCLensDownloadOperationFactory externalLensDataFetcher] */

undefined8 FUN_10b0ceaf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b0ceaf8; end: 10b0ceb27; -[SCLensDownloadOperationFactory setExternalLensDataFetcher:] */

void FUN_10b0ceaf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceb28; end: 10b0ceb2f; -[SCLensDownloadOperationFactory signatureValidator] */

undefined8 FUN_10b0ceb28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b0ceb30; end: 10b0ceb5f; -[SCLensDownloadOperationFactory setSignatureValidator:] */

void FUN_10b0ceb30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceb60; end: 10b0ceb67; -[SCLensDownloadOperationFactory lensPreferences] */

undefined8 FUN_10b0ceb60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b0ceb68; end: 10b0ceb97; -[SCLensDownloadOperationFactory setLensPreferences:] */

void FUN_10b0ceb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceb98; end: 10b0ceb9f; -[SCLensDownloadOperationFactory lensDownloadLogger] */

undefined8 FUN_10b0ceb98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b0ceba0; end: 10b0cebcf; -[SCLensDownloadOperationFactory setLensDownloadLogger:] */

void FUN_10b0ceba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cebd0; end: 10b0cebd7; -[SCLensDownloadOperationFactory assetLensResourceResolver] */

undefined8 FUN_10b0cebd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b0cebd8; end: 10b0cec07; -[SCLensDownloadOperationFactory setAssetLensResourceResolver:] */

void FUN_10b0cebd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cec08; end: 10b0ceceb; -[SCLensDownloadOperationFactory .cxx_destruct] */

void FUN_10b0cec08(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10b0cecec; end: 10b0ced6f; +[SCLensDownloadOperationResult successWithResult:settings:] */

void FUN_10b0cecec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  _objc_opt_new(param_1);
  if (param_1 != 0) {
    func_0x00010c21acc0(lVar1,param_2,0);
    func_0x00010c1ed400(lVar1,param_2,param_3);
    func_0x00010c1ec000(lVar1,param_2,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b0ced70; end: 10b0cedf3; +[SCLensDownloadOperationResult failureWithError:settings:] */

void FUN_10b0ced70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_new();
  if (param_1 != 0) {
    func_0x00010c21acc0(param_1,param_2,1);
    func_0x00010c196ee0(param_1,param_2,param_3);
    func_0x00010c1ec000(param_1,param_2,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0cedf4; end: 10b0cedfb; -[SCLensDownloadOperationResult requestSettings] */

undefined8 FUN_10b0cedf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0cedfc; end: 10b0cee2b; -[SCLensDownloadOperationResult setRequestSettings:] */

void FUN_10b0cedfc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0cee2c; end: 10b0cee33; -[SCLensDownloadOperationResult type] */

undefined8 FUN_10b0cee2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0cee34; end: 10b0cee3b; -[SCLensDownloadOperationResult setType:] */

void FUN_10b0cee34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b0cee3c; end: 10b0cee43; -[SCLensDownloadOperationResult resultObject] */

undefined8 FUN_10b0cee3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0cee44; end: 10b0cee73; -[SCLensDownloadOperationResult setResultObject:] */

void FUN_10b0cee44(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0cee74; end: 10b0cee7b; -[SCLensDownloadOperationResult error] */

undefined8 FUN_10b0cee74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0cee7c; end: 10b0ceeab; -[SCLensDownloadOperationResult setError:] */

void FUN_10b0cee7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ceeac; end: 10b0ceee7; -[SCLensDownloadOperationResult .cxx_destruct] */

void FUN_10b0ceeac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ceee8; end: 10b0cef3f; -[SCLensDataFetcherFactory unrestrictedLensDataFetcher] */

void FUN_10b0ceee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddd90;
  _objc_opt_new(PTR_PTR_1126ddd90);
  func_0x00010be4a960(param_1,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0cef40; end: 10b0cef47; -[SCLensDataFetcherFactory lensDataFetcherWithStrategyFactory:lensDataFetcherUIState:] */

void FUN_10b0cef40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__lensDataFetcherWithStrategyFact_1125703f8,param_3,param_4,1);
  return;
}



/* Entry: 10b0cef48; end: 10b0cef4f; -[SCLensDataFetcherFactory resetWithCompletion:] */

void FUN_10b0cef48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_cancelDownloadsAndClearInMemoryC_1125a9260);
  return;
}



/* Entry: 10b0cef50; end: 10b0cf033; -[SCLensDataFetcherFactory .cxx_destruct] */

void FUN_10b0cef50(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10b0cf034; end: 10b0cf5db;  */

undefined * FUN_10b0cf034(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
LAB_10b0cf24c:
    puVar17 = (undefined *)0x0;
  }
  else {
    lVar15 = param_2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar16);
      _objc_release(lVar15);
      if (lVar3 == 0) goto LAB_10b0cf24c;
      lVar15 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06b720();
      _objc_release(lVar16);
      _objc_release(lVar15);
      lVar15 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06b720();
      _objc_release(lVar16);
      _objc_release(lVar15);
      lVar15 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0947a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar16);
      _objc_release(lVar15);
      lVar15 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0947a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar16);
      _objc_release(lVar15);
      lVar15 = param_2;
      func_0x00010c136b80();
      if (lVar15 != 6) {
        func_0x00010c136b80();
      }
      lVar15 = param_3;
      func_0x00010c136b80();
      if (lVar15 != 6) {
        func_0x00010c136b80();
      }
      func_0x00010c136b80();
      func_0x00010c136b80();
      func_0x00010c136b80();
      func_0x00010c136b80();
      lVar15 = *(long *)(param_1 + 8);
      lVar16 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar16;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0947a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar16);
      lVar16 = *(long *)(param_1 + 8);
      lVar1 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0947a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar15 != 0) {
        func_0x00010c067fc0();
      }
      if (lVar16 != 0) {
        func_0x00010c067fc0();
      }
      func_0x00010bef0b40();
      puVar4 = PTR_PTR_1126dfa48;
      func_0x00010c24d960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c27cac0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf43480(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bfa0680();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar14;
      func_0x00010c13ca20();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar16);
    _objc_release(lVar15);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar17;
}



/* Entry: 10b0cf5dc; end: 10b0cf6f3; -[SCLensDataFetchingDefaultLensContentRanker lensDataFetchPolicy:requestTiming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b0cf5dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar4 = &lStack_50;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d3c20();
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11278cfbc);
    func_0x00010c2a2360();
    uVar3 = *(ulong *)(param_1 + _DAT_11278cfb8);
    func_0x00010c2a24a0();
    if ((((uVar3 & 1) == 0) && (iVar1 == 0)) ||
       (func_0x00010c0ad920(*(undefined8 *)(param_1 + _DAT_11278cfc8)), (((uint)lVar2 ^ 1) & 1) == 0
       )) {
      puStack_48 = PTR_PTR_1127059b8;
      lStack_50 = param_1;
      _objc_msgSendSuper2(&lStack_50,PTR_s_lensDataFetchPolicy_requestTimin_1126022e0,param_3,
                          param_4);
    }
    else {
      plVar4 = (long *)0x1;
    }
  }
  _objc_release(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 10b0cf6f4; end: 10b0cf763; -[SCLensDataFetchingDefaultLensContentRanker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cf6f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278cfc8,0);
  _objc_storeStrong(param_1 + _DAT_11278cfc4,0);
  _objc_storeStrong(param_1 + _DAT_11278cfc0,0);
  _objc_storeStrong(param_1 + _DAT_11278cfbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278cfb8,0);
  return;
}



/* Entry: 10b0cf764; end: 10b0cf8cb; -[SCLensDataFetchingDefaultLensRanker requestPriorityForLens:requestTiming:] */

undefined8 FUN_10b0cf764(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c097c20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c078a80(param_3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar1 & 1) != 0) {
      uVar4 = 3;
      goto LAB_10b0cf814;
    }
    if ((param_4 & 0xfffffffffffffffe) != 2) {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c090360(lVar5,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      uVar4 = 3;
      if ((param_4 != 6) && (lVar5 == 0)) {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0947a0(lVar5,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar1);
        uVar4 = 1;
        if (lVar5 != 0) {
          uVar4 = 2;
        }
      }
      goto LAB_10b0cf814;
    }
  }
  uVar4 = 1;
LAB_10b0cf814:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b0cf8cc; end: 10b0cfb23; -[SCLensDataFetchingDefaultLensRanker lensDataFetchPolicy:requestTiming:] */

uint FUN_10b0cf8cc(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  uVar8 = 0;
  if (uVar3 == 0) goto LAB_10b0cfa5c;
  uVar2 = param_1;
  func_0x00010c0d3c20(param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c097c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b760();
    if ((uVar3 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar3 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c090360(lVar10,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 != 0) {
        _objc_release();
        _objc_release(uVar3);
        goto LAB_10b0cf9a8;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c097c20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c231e60(param_3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((uVar7 & 1) == 0) {
        uVar8 = 1;
        goto LAB_10b0cfa5c;
      }
    }
    else {
LAB_10b0cf9a8:
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    lVar10 = *(long *)(param_1 + 0x28);
    func_0x00010bf48f60();
    if (lVar10 != 2) {
      lVar9 = *(long *)(param_1 + 0x10);
      uVar2 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c090360(lVar9,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar9 == 0) && ((param_4 != 1 || ((*(byte *)(param_1 + 0x38) & 1) == 0)))) {
        bVar1 = *(byte *)(param_1 + 0x39);
        _objc_release(uVar2);
        uVar8 = 1;
        if ((param_4 == 1) || ((bVar1 & 1) == 0)) goto LAB_10b0cfa5c;
      }
      else {
        _objc_release();
        _objc_release(uVar2);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf642a0(uVar5);
    uVar2 = param_3;
    func_0x00010c27dd80();
    uVar8 = 1;
    if (0x19 < uVar2) goto LAB_10b0cfa5c;
    if ((1L << (uVar2 & 0x3f) & 0x3fec2bdU) != 0) {
      uVar8 = (uint)(lVar10 != 2) & (uint)uVar5;
      goto LAB_10b0cfa5c;
    }
    if ((1L << (uVar2 & 0x3f) & 0x3400U) == 0) goto LAB_10b0cfa5c;
  }
  uVar8 = 0;
LAB_10b0cfa5c:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10b0cfb24; end: 10b0cfbfb; -[SCLensDataFetchingDefaultLensRanker mustDownloadLens:requestTiming:] */

undefined8 FUN_10b0cfb24(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if ((param_4 & 0xfffffffffffffffb) == 2) {
    uVar4 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0724c0(uVar5,param_2,uVar1);
    if ((uVar5 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c097c20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c078a80(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b0cfbfc; end: 10b0cfc5b; -[SCLensDataFetchingDefaultLensRanker .cxx_destruct] */

void FUN_10b0cfbfc(long param_1)

{
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



/* Entry: 10b0cfc5c; end: 10b0cfc5f; -[SCLensImmediateLoadingQueue cancel] */

void FUN_10b0cfc5c(void)

{
  return;
}



/* Entry: 10b0cfc60; end: 10b0cfc63; -[SCLensImmediateLoadingQueue pause] */

void FUN_10b0cfc60(void)

{
  return;
}



/* Entry: 10b0cfc64; end: 10b0cfc67; -[SCLensImmediateLoadingQueue resume] */

void FUN_10b0cfc64(void)

{
  return;
}



/* Entry: 10b0cfc68; end: 10b0cfd23; -[SCLensImmediateLoadingQueue addOperation:] */

void FUN_10b0cfc68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cStack_31;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c096800(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    cStack_31 = '\0';
    lVar2 = param_1;
    func_0x00010bdc90a0(param_1,param_2,param_3,uVar1,&cStack_31);
    _objc_retainAutoreleasedReturnValue();
    if (cStack_31 == '\x01') {
      func_0x00010bec07c0();
    }
    else {
      func_0x00010bdd5180(param_1,param_2,lVar2,param_3,uVar1);
    }
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0cfd24; end: 10b0cfeab; -[SCLensImmediateLoadingQueue _addedOrRunningOperationWithOperation:settings:isNewOperation:] */

void FUN_10b0cfd24(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = *(undefined **)(param_1 + 0x18);
  uVar1 = param_4;
  func_0x00010bfa9580(param_4);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = param_4;
    func_0x00010bfa9580(param_4);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar4,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = puVar4;
  func_0x00010c0c7760(puVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    *(bool *)param_5 = puVar2 == (undefined *)0x0;
  }
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010befa120(puVar4,param_2,param_3);
    puVar3 = param_3;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0cfeac; end: 10b0d0053; -[SCLensImmediateLoadingQueue _startNewOperation:settings:] */

void FUN_10b0cfeac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_3);
  _objc_initWeak(auStack_50,param_1);
  uVar1 = param_3;
  func_0x00010c13ccc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dfa68;
  _objc_alloc(PTR_PTR_1126dfa68);
  func_0x00010c00e3c0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  func_0x00010bf9b160(param_3);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d0054; end: 10b0d00ab;  */

void FUN_10b0d0054(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be6df60(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d00ac; end: 10b0d020f; -[SCLensImmediateLoadingQueue _boostExistingOperation:duplicateOperation:settings:] */

void FUN_10b0d00ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf1f9e0(param_3,param_2,param_5);
  uVar1 = param_3;
  func_0x00010c13ccc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b0d0194;
  puStack_40 = &UNK_110cb8e18;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c297260(uVar2,param_2,&puStack_58,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0d0210; end: 10b0d02e7; -[SCLensImmediateLoadingQueue _operationDidFinish:settings:] */

void FUN_10b0d0210(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = param_4;
    func_0x00010bfa9580(param_4);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c12d360(uVar3,param_2,param_3);
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d02e8; end: 10b0d02ef; -[SCLensImmediateLoadingQueue runningOperations] */

undefined8 FUN_10b0d02e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0d02f0; end: 10b0d02f7; -[SCLensImmediateLoadingQueue lensDataFetchingStrategy] */

undefined8 FUN_10b0d02f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0d02f8; end: 10b0d02ff; -[SCLensImmediateLoadingQueue lock] */

undefined4 FUN_10b0d02f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b0d0300; end: 10b0d033b; -[SCLensImmediateLoadingQueue .cxx_destruct] */

void FUN_10b0d0300(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d033c; end: 10b0d0343;  */

undefined8 FUN_10b0d033c(void)

{
  return 0;
}



/* Entry: 10b0d0344; end: 10b0d034b; -[SCLensDataFetchingContentStrategy initWithLensDataFetchingHelper:] */

void FUN_10b0d0344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c023930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensDataFetchingHelper_l_1125e6830,param_3,0);
  return;
}



/* Entry: 10b0d034c; end: 10b0d044f; -[SCLensDataFetchingContentStrategy lensRequestSettingsWithOperation:] */

void FUN_10b0d034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c136b80(param_3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bbb50;
  _objc_alloc(PTR_PTR_1126bbb50);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1362a0(uVar4,param_2,uVar1,uVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c092340(uVar5,param_2,uVar1,uVar2);
  uVar2 = uVar1;
  FUN_10b7295ac(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  FUN_10b729834(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a140(puVar3,param_2,uVar4,uVar5,uVar2,uVar6,
                      &PTR____CFConstantStringClassReference_110f60118);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0d0450; end: 10b0d0457; -[SCLensDataFetchingContentStrategy orderingComparator] */

undefined8 FUN_10b0d0450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0d0458; end: 10b0d0487; -[SCLensDataFetchingContentStrategy .cxx_destruct] */

void FUN_10b0d0458(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d0488; end: 10b0d048f;  */

undefined8 FUN_10b0d0488(void)

{
  return 0;
}



/* Entry: 10b0d0490; end: 10b0d0497; -[SCLensDataFetchingLensAssetStrategy initWithLensDataFetchingHelper:] */

void FUN_10b0d0490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c023930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensDataFetchingHelper_l_1125e6830,param_3,0);
  return;
}



/* Entry: 10b0d0498; end: 10b0d05e3; -[SCLensDataFetchingLensAssetStrategy lensRequestSettingsWithOperation:] */

void FUN_10b0d0498(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126dcfe8;
  _objc_opt_class(PTR_PTR_1126dcfe8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136b80(param_3);
    puVar5 = PTR_PTR_1126bbb50;
    _objc_alloc(PTR_PTR_1126bbb50);
    func_0x00010c1362a0(*(undefined8 *)(param_1 + 8));
    func_0x00010c092340(*(undefined8 *)(param_1 + 8));
    uVar3 = param_3;
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_10b729798();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a140(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0d05e4; end: 10b0d05eb; -[SCLensDataFetchingLensAssetStrategy orderingComparator] */

undefined8 FUN_10b0d05e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0d05ec; end: 10b0d061b; -[SCLensDataFetchingLensAssetStrategy .cxx_destruct] */

void FUN_10b0d05ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d061c; end: 10b0d0623;  */

undefined8 FUN_10b0d061c(void)

{
  return 0;
}



/* Entry: 10b0d0624; end: 10b0d062b; -[SCLensDataFetchingLensIconStrategy init] */

void FUN_10b0d0624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0238d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithLensDataFetcherOrdering__1125e6818,0)
  ;
  return;
}



/* Entry: 10b0d062c; end: 10b0d06db; -[SCLensDataFetchingLensIconStrategy lensRequestSettingsWithOperation:] */

void FUN_10b0d062c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bbb50;
  _objc_alloc(PTR_PTR_1126bbb50);
  uVar2 = param_3;
  FUN_10b729684(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_10b729834(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a140(puVar1,param_2,4,0,uVar2,uVar3,
                      &PTR____CFConstantStringClassReference_110db6dd8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d06dc; end: 10b0d06e3; -[SCLensDataFetchingLensIconStrategy orderingComparator] */

undefined8 FUN_10b0d06dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0d06e4; end: 10b0d06ef; -[SCLensDataFetchingLensIconStrategy .cxx_destruct] */

void FUN_10b0d06e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d06f0; end: 10b0d0703; -[SCLensDataFetchingWarmupStrategy orderingComparator] */

undefined ** FUN_10b0d06f0(void)

{
  return &PTR___NSConcreteGlobalBlock_110cb8ea8;
}



/* Entry: 10b0d0704; end: 10b0d07eb; -[SCLensDataFetchingWarmupStrategy lensRequestSettingsWithOperation:] */

void FUN_10b0d0704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bbb50;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10b7295ac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  FUN_10b729834(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a140(puVar1,param_2,3,1,uVar3,uVar5,
                      &PTR____CFConstantStringClassReference_110f600f8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0d07ec; end: 10b0d07f3;  */

undefined8 FUN_10b0d07ec(void)

{
  return 0;
}



/* Entry: 10b0d07f4; end: 10b0d07fb; -[SCLensExternalDataFetchingStrategy initWithLensDataFetchingHelper:] */

void FUN_10b0d07f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c023930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLensDataFetchingHelper_l_1125e6830,param_3,0);
  return;
}



/* Entry: 10b0d07fc; end: 10b0d08eb; -[SCLensExternalDataFetchingStrategy lensRequestSettingsWithOperation:] */

void FUN_10b0d07fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c136b80(param_3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bbb50;
  _objc_alloc(PTR_PTR_1126bbb50);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1362a0(uVar4,param_2,uVar1,uVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c092340(uVar5,param_2,uVar1,uVar2);
  uVar2 = uVar1;
  FUN_10b72972c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a140(puVar3,param_2,uVar4,uVar5,uVar2,
                      &PTR____CFConstantStringClassReference_110f603d8,
                      &PTR____CFConstantStringClassReference_110f60398);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0d08ec; end: 10b0d08f3; -[SCLensExternalDataFetchingStrategy orderingComparator] */

undefined8 FUN_10b0d08ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0d08f4; end: 10b0d0923; -[SCLensExternalDataFetchingStrategy .cxx_destruct] */

void FUN_10b0d08f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0d0924; end: 10b0d0997; -[SCLensExternalCompositeDataFetcher registerExternalDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0d0924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11278d04c),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0d0998; end: 10b0d0bdb; -[SCLensExternalCompositeDataFetcher fetchExternalDataForLensMetadata:fetchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10b0d0998(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_1 + lVar9);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = *(long *)(param_1 + _DAT_11278d04c);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar11);
      }
      uVar2 = *(ulong *)(lVar12 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf2ca00();
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar2;
        func_0x00010c235780();
        if ((int)uVar3 == 0) {
          func_0x00010bfa69c0(uVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        else {
          uVar3 = uVar2;
          func_0x00010bfa69c0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            func_0x00010befa120(puVar10);
          }
          _objc_release(uVar3);
        }
      }
      _objc_release(uVar2);
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = puVar10;
  func_0x00010bf51e00();
  puVar7 = puVar4;
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar10);
  _os_unfair_lock_unlock(param_1 + lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + lVar9);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  lVar11 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_3 + lVar11);
  lVar9 = *(long *)(param_3 + _DAT_11278d04c);
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar10 = (undefined *)0x0;
  if (lVar6 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        uVar2 = *(ulong *)(lVar12 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf2ca00();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          puVar10 = (undefined *)0x1;
          goto LAB_10b0d0cec;
        }
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    puVar10 = (undefined *)0x0;
  }
LAB_10b0d0cec:
  _objc_release(lVar9);
  _os_unfair_lock_unlock(param_3 + lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar10;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + lVar11);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(puVar7 + lVar11);
  lVar9 = *(long *)(puVar7 + _DAT_11278d04c);
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar10 = (undefined *)0x0;
  if (lVar6 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        uVar2 = *(ulong *)(lVar12 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c235780();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          puVar10 = (undefined *)0x1;
          goto LAB_10b0d0e68;
        }
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    puVar10 = (undefined *)0x0;
  }
LAB_10b0d0e68:
  _objc_release(lVar9);
  puVar5 = puVar7 + lVar11;
  _os_unfair_lock_unlock(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return puVar10;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar7 + lVar11);
  __Unwind_Resume(puVar5);
  puVar5 = puVar5 + _DAT_11278d04c;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar5,0);
  return puVar5;
}



/* Entry: 10b0d0bdc; end: 10b0d0d67; -[SCLensExternalCompositeDataFetcher canFetchExternalContentForLensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b0d0bdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_1 + lVar7);
  lVar6 = *(long *)(param_1 + _DAT_11278d04c);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar1 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(ulong *)(lVar8 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf2ca00();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar8 = 1;
          goto LAB_10b0d0cec;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar8 = 0;
  }
LAB_10b0d0cec:
  _objc_release(lVar6);
  _os_unfair_lock_unlock(param_1 + lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar8;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + lVar7);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_3 + lVar7);
  lVar6 = *(long *)(param_3 + _DAT_11278d04c);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar1 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(ulong *)(lVar8 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c235780();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar8 = 1;
          goto LAB_10b0d0e68;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar8 = 0;
  }
LAB_10b0d0e68:
  _objc_release(lVar6);
  lVar4 = param_3 + lVar7;
  _os_unfair_lock_unlock(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_3 + lVar7);
    __Unwind_Resume(lVar4);
    lVar4 = lVar4 + _DAT_11278d04c;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
    return lVar4;
  }
  return lVar8;
}



/* Entry: 10b0d0d68; end: 10b0d0edb; -[SCLensExternalCompositeDataFetcher shouldWaitContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b0d0d68(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11278d050;
  _os_unfair_lock_lock(param_1 + lVar7);
  lVar6 = *(long *)(param_1 + _DAT_11278d04c);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  lVar8 = 0;
  if (lVar1 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(ulong *)(lVar8 * 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c235780();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar8 = 1;
          goto LAB_10b0d0e68;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar8 = 0;
  }
LAB_10b0d0e68:
  _objc_release(lVar6);
  lVar4 = param_1 + lVar7;
  _os_unfair_lock_unlock(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + lVar7);
    __Unwind_Resume(lVar4);
    lVar4 = lVar4 + _DAT_11278d04c;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar4,0);
    return lVar4;
  }
  return lVar8;
}



/* Entry: 10b0d0edc; end: 10b0d0eef; -[SCLensExternalCompositeDataFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0d0edc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278d04c,0);
  return;
}



/* Entry: 10b0d0ef0; end: 10b0d1013; -[SCLensDataPrefetcher initWithLensDataFetcher:performer:lensUserProvider:remoteAssetPrefetching:internalLogger:] */

undefined1 *
FUN_10b0d0ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705a08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0d1014; end: 10b0d111f; -[SCLensDataPrefetcher prefetchLenses:fetchSourceType:] */

void FUN_10b0d1014(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d1120; end: 10b0d1237;  */

void FUN_10b0d1120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0b8620(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110cb8ee8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f5de38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06d40(*(undefined8 *)(lVar1 + 0x18),param_2,puVar3,0x100000000);
      _objc_release(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    uVar5 = *(long *)(param_1 + 0x30) - 1;
    if (uVar5 < 4) {
      uVar4 = *(undefined8 *)(&UNK_10e554490 + uVar5 * 8);
    }
    else {
      uVar4 = 0;
    }
    func_0x00010bfa7fa0(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20),uVar4)
    ;
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d1238; end: 10b0d123f;  */

void FUN_10b0d1238(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10b0d1240; end: 10b0d1393; -[SCLensDataPrefetcher prefetchAssetsForLens:fetchSourceType:] */

void FUN_10b0d1240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0d1394; end: 10b0d13d3;  */

void FUN_10b0d1394(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c107a00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0d13d4; end: 10b0d152b; -[SCLensDataPrefetcher prefetchAssets:fetchSourceType:] */

void FUN_10b0d13d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
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
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar9 = auStack_e8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar9,0x10);
  if (lVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        uVar2 = param_1;
        func_0x00010c092360();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0f98a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4f00(uVar2,param_2,uVar10,0,param_4,uVar3,0);
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar9 = auStack_e8;
      lVar1 = param_3;
      puVar8 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar9,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_s_requestTiming_11262b500;
  _objc_retain(puVar8);
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5de58);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x00010c0b8380(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010bfa5080(*(undefined8 *)(param_3 + 0x10),param_2,puVar7,puVar8,puVar9,0,0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b0d152c; end: 10b0d163f; -[SCLensDataPrefetcher prefetchManifestItemsForLens:fetchSourceType:] */

void FUN_10b0d152c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_s_requestTiming_11262b500;
  _objc_retain(param_3);
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5de58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0b8380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bfa5080(*(undefined8 *)(param_1 + 0x10),param_2,uVar4,param_3,param_4,0,0);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0d1640; end: 10b0d1647; -[SCLensDataPrefetcher lensDataFetcher] */

undefined8 FUN_10b0d1640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


