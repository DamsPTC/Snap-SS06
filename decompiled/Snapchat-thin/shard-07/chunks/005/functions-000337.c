/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105626df0; end: 105626ebf;  */

void FUN_105626df0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c076120();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf94ee0(uVar3);
    func_0x00010c0df840(puVar7,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08fa60(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24fb40(uVar6);
  func_0x00010bee5ce0(lVar4,param_2,uVar3,uVar1,0,uVar5,uVar6,puVar7,1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105626ec0; end: 1056273df;  */

void FUN_105626ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c0a57c0(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x30));
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf4d200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(uVar1);
    _objc_release(uVar3);
    func_0x00010be8dd80(lVar2);
    func_0x00010c12eec0(*(undefined8 *)(lVar2 + 0x48));
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1056273e0; end: 105627527;  */

void FUN_1056273e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bc618;
  _objc_alloc(PTR_PTR_1126bc618);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a00(puVar3);
  _objc_release(uVar4);
  lVar6 = *(long *)(param_1 + 0x38);
  puVar5 = PTR_PTR_1126bc620;
  _objc_alloc(PTR_PTR_1126bc620);
  func_0x00010c252ee0(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf001c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd80(puVar5);
  (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105627528; end: 10562761f;  */

void FUN_105627528(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105627620; end: 10562790b; -[SCBoltResumableDataUploader _clearExpiredUploadStates] */

void FUN_105627620(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 in_x5;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  dVar21 = 0.0;
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    do {
      lVar20 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c13d120();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c13d140();
        _objc_retainAutoreleasedReturnValue();
        dVar21 = *(double *)(param_1 + 0x30);
        lVar8 = lVar6;
        FUN_105620e90(dVar21,lVar6,lVar7);
        if ((int)lVar8 == 0) {
          lVar8 = lVar5;
          func_0x00010bf1f1c0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c28ea00();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          dVar21 = *(double *)(param_1 + 0x30);
          lVar11 = lVar10;
          FUN_10562ca70(dVar21);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          if ((int)lVar11 != 0) goto LAB_1056277fc;
        }
        else {
          _objc_release(lVar7);
          _objc_release(lVar6);
LAB_1056277fc:
          lVar19 = lVar19 + 1;
          func_0x00010c1d0640(puVar3);
        }
        _objc_release(lVar5);
        lVar20 = lVar20 + 1;
      } while (lVar4 != lVar20);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010bf51e00();
  func_0x00010c1d0560(uVar12);
  _objc_release(puVar13);
  _objc_release(uVar12);
  puVar13 = PTR_PTR_1126bc680;
  lVar1 = lVar2;
  func_0x00010bf529e0();
  lVar1 = lVar1 - lVar19;
  iVar17 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c0a7100(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    _objc_retain(lVar19);
    _objc_retain(lVar1);
    _objc_retain(in_x5);
    _CACurrentMediaTime();
    if ((lVar19 != 0) && (lVar1 != 0)) {
      puVar13 = *(undefined **)(lVar2 + 0x40);
      dVar22 = dVar21;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010bf71ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      if (puVar3 == (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      }
      else {
        puVar13 = puVar3;
        func_0x00010c0d3c80(puVar3);
      }
      puVar14 = puVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126bc688;
      if (iVar17 == 0) {
        func_0x00010bf1f0e0(PTR_PTR_1126bc688);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf1f0c0();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = lVar19;
      (**(code **)(lVar19 + 0x10))(lVar19,puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar13);
      uVar12 = *(undefined8 *)(lVar2 + 0x40);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar13;
      func_0x00010bf51e00(puVar13);
      func_0x00010c1d0560(uVar12);
      _objc_release(puVar16);
      _objc_release(uVar12);
      _CACurrentMediaTime();
      func_0x00010c0a70e0(dVar22 - dVar21,in_x5);
      _objc_release(lVar4);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar3);
    }
    _objc_release(in_x5);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar19);
    return;
  }
  return;
}



/* Entry: 10562790c; end: 105627adf; -[SCBoltResumableDataUploader _upsertUploadStateWithBlock:forMediaId:clearUploadState:uploadStepMetricsTracker:] */

void FUN_10562790c(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  if ((param_4 != 0) && (param_5 != 0)) {
    puVar1 = *(undefined **)(param_2 + 0x40);
    dVar8 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf71ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0d3c80(puVar2);
    }
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc688;
    if (param_6 == 0) {
      func_0x00010bf1f0e0(PTR_PTR_1126bc688);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf1f0c0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c1d0560(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _CACurrentMediaTime();
    func_0x00010c0a70e0(dVar8 - param_1,param_7);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105627ae0; end: 105627c07; -[SCBoltResumableDataUploader _removeUploadStateForMediaId:uploadStepMetricsTracker:] */

void FUN_105627ae0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  dVar4 = param_1;
  func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x70),param_3,param_4);
  func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x78),param_3,param_4);
  puVar1 = *(undefined **)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf71ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    puVar1 = puVar2;
    func_0x00010c0d3c80(puVar2);
  }
  func_0x00010c1d0640();
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
  _CACurrentMediaTime();
  func_0x00010c0a70e0(dVar4 - param_1,param_5,param_3,2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105627c08; end: 105627da7; -[SCBoltResumableDataUploader _uploadRequestDidProgress:uniqueMediaId:uploadStartByte:croppedDataLength:reportStartByte:totalBytes:chunked:uploadStepMetricsTracker:] */

void FUN_105627c08(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined1 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43fa0();
  lVar2 = param_3;
  func_0x00010c276f80();
  lVar2 = (long)(((float)lVar1 / (float)lVar2) * (float)param_6);
  param_5 = param_5 + lVar2;
  lVar1 = param_3;
  func_0x00010bf43fa0(param_3);
  _objc_release(param_3);
  func_0x00010be905a0(param_1,param_2,param_7 + lVar2,lVar1,param_8,param_9,param_11,param_4);
  _objc_release(param_8);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c13d920();
  _objc_release(lVar2);
  if (lVar1 < param_5) {
    lVar1 = param_1;
    func_0x00010c28e760(param_1,param_2,param_4,param_11);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc0000000;
      pcStack_88 = FUN_105627da8;
      puStack_80 = &UNK_1108a0cb0;
      lStack_78 = param_5;
      func_0x00010bee6260(param_1,param_2,&puStack_98,param_4,0,param_11);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_11);
  _objc_release(param_4);
  return;
}



/* Entry: 105627da8; end: 105627e17;  */

void FUN_105627da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c2a9be0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0300(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105627e18; end: 105627e6b; -[SCBoltResumableDataUploader _clearAllUploadStates] */

/* WARNING: Possible PIC construction at 0x000105627e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105627e5c) */

void FUN_105627e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105627e6c; end: 105627e77; -[SCBoltResumableDataUploader setUploadStatusDelegate:] */

void FUN_105627e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105627e78; end: 105627f5b; -[SCBoltResumableDataUploader _clearUploadStatusTrackingForMediaId:] */

void FUN_105627e78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105627f5c; end: 105627fa3;  */

void FUN_105627f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105627fa4; end: 10562825b; -[SCBoltResumableDataUploader _reportUploadSentBytes:requestSentBytes:totalBytes:chunked:uploadStepMetricsTracker:mediaId:] */

void FUN_105627fa4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (lVar2 = param_9, func_0x00010c08fa60(), lVar2 == 0)) goto LAB_105628220;
  lVar2 = *(long *)(param_2 + 0x70);
  func_0x00010c0e00e0(lVar2,param_3,param_9);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_2 + 0x78);
    func_0x00010c0e00e0(lVar3,param_3,param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = param_2;
      func_0x00010c28e760(param_2,param_3,param_9,param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c06da40();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar5 != 0) {
        lVar5 = lVar3;
        func_0x00010bf26040(lVar3);
        func_0x00010c0df780(puVar4,param_3,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x78),param_3,puVar4,param_9);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lVar9 = (long)(param_1 * 1000.0);
  _objc_release(puVar4);
  lVar5 = *(long *)(param_2 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0b4ca0();
  _objc_release(lVar5);
  if (lVar2 == 0) {
LAB_105628130:
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x70),param_3,puVar4,param_9);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bc660;
    _objc_alloc(PTR_PTR_1126bc660);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c0e00e0(uVar8,param_3,param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c540(puVar4,param_3,1,puVar6,puVar7,uVar8,param_6,param_7,lVar9);
    func_0x00010c28e780(lVar1,param_3,param_9,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    lVar5 = lVar2;
    func_0x00010c0b4ca0();
    if (lVar3 <= lVar9 - lVar5) goto LAB_105628130;
  }
  _objc_release(lVar2);
LAB_105628220:
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10562825c; end: 1056283eb; -[SCBoltResumableDataUploader _recordServerConfirmedOffset:totalBytes:mediaId:] */

void FUN_10562825c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x78),param_3,puVar2,param_6);
    _objc_release(puVar2);
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x70),param_3,puVar2,param_6);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bc660;
      _objc_alloc(PTR_PTR_1126bc660);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02c540(puVar2,param_3,1,0,0,puVar3,param_5,0,(long)(param_1 * 1000.0));
      func_0x00010c28e780(lVar1,param_3,param_6,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1056283ec; end: 105628af7; -[SCBoltResumableDataUploader _uploadLocalFileWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_1056283ec(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uStack_170;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105628af8;
  uStack_88 = 0x105628b08;
  uStack_80 = 0;
  uVar1 = param_3;
  func_0x00010bf64080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be5c0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puStack_a0[5];
  func_0x00010c0f5800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_9;
  if (puVar4 == (undefined *)0x0) {
    uVar7 = param_3;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar7);
    if (param_9 == 0) goto LAB_105628a38;
    _objc_retain(param_9);
    _objc_retain(puVar8);
    func_0x00010c0f7fc0(param_7);
    _objc_release(puVar8);
  }
  else {
    puVar5 = puVar4;
    func_0x00010bfad040();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x0) {
      uVar7 = param_3;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(uVar7);
      if (param_9 == 0) goto LAB_105628a38;
      _objc_retain(param_9);
      _objc_retain(puVar8);
      func_0x00010c0f7fc0(param_7);
      _objc_release(puVar8);
    }
    else {
      puVar8 = PTR_PTR_1126bc680;
      _objc_alloc(PTR_PTR_1126bc680);
      uVar1 = param_3;
      func_0x00010bf4c700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0188c0(puVar8);
      _objc_release(uVar1);
      func_0x00010c21d0a0(puVar8);
      func_0x00010c1bf7c0(puVar8);
      uVar7 = param_3;
      func_0x00010bf4c700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c28e760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c13d920();
      uVar7 = uVar1;
      FUN_105620d50(uVar11,uVar1,1,uVar3);
      _objc_release(uVar6);
      func_0x00010c0ae740(puVar8);
      FUN_10562272c();
      uVar9 = uVar1;
      uStack_170 = param_3;
      if ((long)uVar7 < 3) {
        if (1 < uVar7) {
          if (uVar7 != 2) goto LAB_105628a30;
          func_0x00010bf1f1c0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be12da0(param_1);
          goto LAB_1056289d8;
        }
        uVar9 = param_3;
        func_0x00010bf4c700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be12da0(param_1);
      }
      else {
        uVar10 = uVar1;
        if (uVar7 == 3) {
          func_0x00010c13d120(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f1c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee59e0(param_1);
        }
        else {
          if (uVar7 == 4) {
            uVar9 = param_3;
            func_0x00010bf4c700(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be95d60(param_1);
            goto LAB_105628a28;
          }
          if (uVar7 != 5) goto LAB_105628a30;
          func_0x00010c13d120(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf26040();
          func_0x00010bf1f1c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee59e0(param_1);
        }
        _objc_release(uVar10);
LAB_1056289d8:
        _objc_release(uStack_170);
      }
LAB_105628a28:
      _objc_release(uVar9);
    }
  }
LAB_105628a30:
  _objc_release(uVar1);
LAB_105628a38:
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105628af8; end: 105628b13;  */

void FUN_105628af8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105628b14; end: 105628b4b;  */

void FUN_105628b14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105628b4c; end: 105628c6b;  */

void FUN_105628b4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  func_0x00010c03fb40();
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105628c6c; end: 105628e67; -[SCBoltResumableDataUploader _fetchNewSessionUriAndUploadLocalFile:fileSize:dulpUploadLocation:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105628c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_5 != 0) {
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(param_7);
    uStack_78 = param_4;
    _objc_retain(param_6);
    _objc_retain(param_9);
    _objc_retain(param_11);
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_3);
    uStack_70 = param_8;
    _objc_retain(param_10);
    func_0x00010be13e00(param_1);
    _objc_release(param_10);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(param_11);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105628e68; end: 10562916b;  */

void FUN_105628e68(long param_1,long param_2,undefined *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0a57c0(*(undefined8 *)(param_1 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 == 0) {
    if ((param_2 == 0) || (param_3 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      _objc_retain(puVar5);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar5);
      _objc_release(uVar6);
    }
    else {
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      _objc_retain(param_3);
      _objc_retain(param_2);
      func_0x00010bee6260(lVar1);
      _objc_release(lVar1);
      param_1 = param_1 + 0x50;
      _objc_loadWeakRetained(param_1);
      func_0x00010bee59e0();
      _objc_release(param_1);
      _objc_release(param_2);
      puVar5 = param_3;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = param_3;
    func_0x00010bf4d200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(uVar3);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puVar5 = *(undefined **)(param_1 + 0x40);
    _objc_retain(puVar5);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10562916c; end: 105629227;  */

void FUN_10562916c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105629228; end: 1056292f7;  */

void FUN_105629228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c2a96a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7420(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(0x4122750000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7440(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056292f8; end: 1056293b3;  */

void FUN_1056292f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1056293b4; end: 1056295fb; -[SCBoltResumableDataUploader _resumeLocalFileUploadWithUploadState:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_1056293b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = param_3;
  func_0x00010bf1f1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ea60();
  func_0x00010c21d0a0(param_7);
  _objc_release(uVar1);
  func_0x00010c0b0880(param_7);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_80 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_78 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010be239c0(param_1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056295fc; end: 1056296e7;  */

void FUN_1056295fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13d120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f1c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2b8e0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056296e8; end: 105629b07; -[SCBoltResumableDataUploader _handleLocalFileStartByteFetch:response:error:resumableURI:uploadLocation:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_1056296e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  func_0x00010c0a57c0(param_11);
  lVar1 = param_4;
  func_0x00010c252ee0();
  if ((param_3 < 0) || (param_5 != 0)) {
    if (lVar1 < 400) {
      uVar3 = 3;
    }
    else {
      lVar1 = param_4;
      func_0x00010c252ee0();
      if (lVar1 < 500) {
        func_0x00010be8dd80(param_1,param_2,param_10,param_11);
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
    }
    func_0x00010c0ae780(param_11,param_2,uVar3);
    uVar3 = param_7;
    func_0x00010bf4d200(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_11,param_2,0,param_9,uVar3,param_4,param_5);
    _objc_release(uVar3);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105629b08;
    puStack_88 = &UNK_11084a9e8;
    _objc_retain(param_15);
    uStack_70 = param_15;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_11);
    uStack_78 = param_11;
    func_0x00010c0f7fc0(param_13,param_2,&puStack_a0);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    uVar3 = uStack_70;
  }
  else {
    if ((lVar1 != 200) && (lVar1 = param_4, func_0x00010c252ee0(), lVar1 != 0xc9)) {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc0000000;
      pcStack_f8 = FUN_105629d88;
      puStack_f0 = &UNK_1108a0cb0;
      lStack_e8 = param_3;
      func_0x00010bee6260(param_1,param_2,&puStack_108,param_10,0,param_11);
      func_0x00010c0ae760(param_11,param_2,param_3);
      func_0x00010c18dc20(param_11,param_2,1);
      func_0x00010c0ae780(param_11,param_2,0);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be87a00(param_1,param_2,param_3,puVar2,param_10);
      _objc_release(puVar2);
      func_0x00010bee59e0(param_1,param_2,param_6,param_8,param_9,param_10,param_11,param_3,param_7,
                          param_12,param_13,param_14,param_15);
      goto LAB_1056299b4;
    }
    func_0x00010c0ae780(param_11,param_2,1);
    uVar3 = param_7;
    func_0x00010bf4d200(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_11,param_2,1,param_9,uVar3,0,0);
    _objc_release(uVar3);
    func_0x00010be8dd80(param_1,param_2,param_10,param_11);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105629bc4;
    puStack_c8 = &UNK_1108465d0;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    _objc_retain(param_11);
    uStack_b8 = param_11;
    _objc_retain(param_14);
    uStack_a8 = param_14;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x00010c0f7fc0(param_13,param_2,&puStack_e0);
    _objc_release(lStack_b0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b8);
    uVar3 = uStack_c0;
  }
  _objc_release(uVar3);
LAB_1056299b4:
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105629b08; end: 105629bc3;  */

void FUN_105629b08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105629bc4; end: 105629d87;  */

void FUN_105629bc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0f40e0(PTR_PTR_1126bc668);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126bc618;
  _objc_alloc(PTR_PTR_1126bc618);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044a00(puVar5);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_1 + 0x38);
  puVar6 = PTR_PTR_1126bc620;
  _objc_alloc(PTR_PTR_1126bc620);
  func_0x00010c252ee0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf001c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd80(puVar6);
  (**(code **)(lVar7 + 0x10))(lVar7,puVar6);
  _objc_release(0);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 105629d88; end: 105629df7;  */

void FUN_105629d88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c2a9be0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0300(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf21f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105629df8; end: 10562ab37; -[SCBoltResumableDataUploader _uploadLocalFileFromByteWithSessionURI:localFileUrl:fileSize:uniqueMediaId:uploadStepMetricsTracker:uploadStartByte:uploadLocation:priority:callbackPerformer:successBlock:failureBlock:] */

void FUN_105629df8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined *param_6,undefined *param_7,ulong param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined **param_12,undefined **param_13,
                  undefined *param_14)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puStack_328;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined **ppuStack_2e8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  ulong uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 auStack_230 [8];
  ulong uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  ulong uStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 auStack_148 [7];
  undefined *puStack_110;
  undefined8 auStack_108 [7];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010c0b0880(param_7);
  ppuVar13 = param_13;
  if ((0 < (long)param_8) && (param_5 <= param_8)) {
    func_0x00010c0a57c0(param_7);
    uVar7 = param_9;
    func_0x00010bf4d200(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_7);
    _objc_release(uVar7);
    func_0x00010be8dd80(param_1);
    ppuStack_2e8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10562ab38;
    puStack_b0 = &UNK_11084a9e8;
    _objc_retain(param_14);
    puStack_98 = param_14;
    ppuStack_a8 = ppuStack_2e8;
    _objc_retain(param_7);
    puStack_a0 = param_7;
    _objc_retain(ppuStack_2e8);
    func_0x00010c0f7fc0(param_12);
    _objc_release(puStack_a0);
    _objc_release(ppuStack_a8);
    ppuVar1 = ppuStack_2e8;
    puVar10 = puStack_98;
    goto LAB_10562aa4c;
  }
  puStack_90 = PTR_PTR_1130ef7c0;
  puStack_88 = PTR_PTR_1130ef7c8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e8 = ppuVar1;
  func_0x00010c0d3c80();
  _objc_release(ppuVar1);
  ppuVar1 = param_12;
  if ((long)param_8 < 1) {
    puStack_190 = (undefined *)0x0;
    puStack_310 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_190;
    _objc_retain(puStack_190);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puStack_310 == (undefined *)0x0) {
      func_0x00010c0a57c0(param_7);
      uVar7 = param_9;
      func_0x00010bf4d200(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b26c0(param_7);
      _objc_release(uVar7);
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      uStack_1b8 = 0x10562ae28;
      puStack_1b0 = &UNK_11084a9e8;
      _objc_retain(param_14);
      puStack_198 = param_14;
      puStack_1a8 = puVar10;
      _objc_retain(param_7);
      puStack_1a0 = param_7;
      _objc_retain(puVar10);
      func_0x00010c0f7fc0(param_12);
      _objc_release(puStack_1a0);
      _objc_release(puStack_1a8);
      _objc_release(puStack_198);
      goto LAB_10562aa4c;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuStack_2e8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuStack_2e8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puStack_318 = PTR_PTR_1126b4960;
    puStack_328 = param_6;
    FUN_105620828(param_6,param_9,PTR_PTR_1130ef7a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf587e0(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
LAB_10562a47c:
    _objc_release(puStack_328);
    _objc_release(puStack_310);
    _objc_release(puVar10);
    puVar5 = param_7;
    func_0x00010c0c59e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4c40(puStack_318);
    _objc_release(puVar5);
    lVar6 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010c28db20();
    _objc_release(lVar6);
    if (-1 < lVar12) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28db20();
      func_0x00010c1c3460(puStack_318);
      _objc_release(uVar7);
    }
    puVar5 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d9a0();
    func_0x00010c0b2680(param_7);
    _objc_release(puVar5);
    _objc_initWeak(auStack_1d0,param_1);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_10562aee4;
    puStack_208 = &UNK_1108a0f90;
    _objc_copyWeak(auStack_1f0,auStack_1d0);
    _objc_retain(param_6);
    puStack_200 = param_6;
    uStack_1e8 = param_8;
    lStack_1e0 = param_5 - param_8;
    uStack_1d8 = param_5;
    _objc_retain(param_7);
    puStack_1f8 = param_7;
    func_0x00010c0d0d80(puStack_318);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_278 = puVar5;
    uStack_270 = 0xc2000000;
    uStack_268 = 0x10562b0c0;
    puStack_260 = &UNK_1108a0df0;
    _objc_copyWeak(auStack_230,auStack_1d0);
    _objc_retain(param_6);
    puStack_258 = param_6;
    _objc_retain(param_7);
    puStack_250 = param_7;
    uStack_228 = param_5;
    _objc_retain(param_9);
    uStack_248 = param_9;
    _objc_retain(param_12);
    ppuStack_240 = param_12;
    _objc_retain(param_13);
    ppuStack_238 = param_13;
    puStack_2d0 = puVar5;
    uStack_2c8 = 0xc2000000;
    uStack_2c0 = 0x10562b3e0;
    puStack_2b8 = &UNK_1108a0e20;
    _objc_copyWeak(auStack_288,auStack_1d0);
    _objc_retain(param_6);
    puStack_2b0 = param_6;
    _objc_retain(param_7);
    puStack_2a8 = param_7;
    uStack_280 = param_5;
    _objc_retain(param_9);
    uStack_2a0 = param_9;
    _objc_retain(param_12);
    ppuStack_298 = param_12;
    _objc_retain(param_14);
    puStack_290 = param_14;
    func_0x00010c25f660(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_318;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb060(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(puStack_290);
    _objc_release(ppuStack_298);
    _objc_release(uStack_2a0);
    _objc_release(puStack_2a8);
    _objc_release(puStack_2b0);
    _objc_destroyWeak(auStack_288);
    _objc_release(ppuStack_238);
    _objc_release(ppuStack_240);
    _objc_release(uStack_248);
    _objc_release(puStack_250);
    _objc_release(puStack_258);
    _objc_destroyWeak(auStack_230);
    _objc_release(puStack_1f8);
    _objc_release(puStack_200);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1d0);
    ppuVar1 = &puStack_2d0;
    ppuVar13 = &puStack_278;
    puVar10 = puStack_318;
  }
  else {
    func_0x00010c0b26a0(param_7);
    puStack_d0 = (undefined *)0x0;
    puStack_310 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
    func_0x00010bfacce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_d0;
    _objc_retain(puStack_d0);
    if (puStack_310 == (undefined *)0x0) {
      uVar7 = 0x10562abf4;
      puVar11 = auStack_108;
    }
    else {
      puStack_110 = (undefined *)0x0;
      puVar3 = puStack_310;
      func_0x00010c1571e0();
      puVar5 = puStack_110;
      _objc_retain(puStack_110);
      _objc_release(puVar10);
      if (((ulong)puVar3 & 1) != 0) {
        puStack_150 = (undefined *)0x0;
        puStack_328 = puStack_310;
        func_0x00010c1213e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puStack_150;
        _objc_retain(puStack_150);
        _objc_release(puVar5);
        func_0x00010bf3dba0(puStack_310);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puStack_328 == (undefined *)0x0) {
          func_0x00010c0a57c0(param_7);
          uVar7 = param_9;
          func_0x00010bf4d200(param_9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b26c0(param_7);
          _objc_release(uVar7);
          puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_180 = 0xc2000000;
          uStack_178 = 0x10562ad6c;
          puStack_170 = &UNK_11084a9e8;
          _objc_retain(param_14);
          puStack_158 = param_14;
          puStack_168 = puVar10;
          _objc_retain(param_7);
          puStack_160 = param_7;
          _objc_retain(puVar10);
          func_0x00010c0f7fc0(param_12);
          _objc_release(puStack_160);
          _objc_release(puStack_168);
          _objc_release(puStack_158);
          _objc_release(puVar10);
          puVar10 = puStack_310;
          goto LAB_10562aa4c;
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuStack_2e8);
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuStack_2e8);
        _objc_release(puVar5);
        _objc_release(puVar3);
        puStack_318 = PTR_PTR_1126b4960;
        puVar5 = param_6;
        FUN_105620828(param_6,param_9,PTR_PTR_1130ef7b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf587e0(0x404e000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        goto LAB_10562a47c;
      }
      func_0x00010bf3dba0(puStack_310);
      uVar7 = 0x10562acb0;
      puVar11 = auStack_148;
      puVar10 = puVar5;
    }
    func_0x00010c0a57c0(param_7);
    uVar9 = param_9;
    func_0x00010bf4d200(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b26c0(param_7);
    _objc_release(uVar9);
    *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puVar11[1] = 0xc2000000;
    puVar11[2] = uVar7;
    puVar11[3] = &UNK_11084a9e8;
    _objc_retain(param_14);
    puVar11[6] = param_14;
    _objc_retain(puVar10);
    ppuVar1 = (undefined **)(puVar11 + 4);
    *ppuVar1 = puVar10;
    _objc_retain(param_7);
    ppuVar13 = (undefined **)(puVar11 + 5);
    *ppuVar13 = param_7;
    func_0x00010c0f7fc0(param_12);
    _objc_release(*ppuVar13);
    _objc_release(*ppuVar1);
    _objc_release(puVar11[6]);
    _objc_release(puStack_310);
  }
LAB_10562aa4c:
  _objc_release(puVar10);
  _objc_release(ppuStack_2e8);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 9);
  _objc_destroyWeak(ppuVar13 + 9);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1d0);
  __Unwind_Resume();
  lVar12 = *(long *)(param_3 + 0x30);
  puVar5 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar10 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0c59e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar10);
  func_0x00010c03bd60(puVar5);
  (**(code **)(lVar12 + 0x10))(lVar12,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10562ab38; end: 10562aee3;  */

void FUN_10562ab38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126bc610;
  _objc_alloc(PTR_PTR_1126bc610);
  puVar2 = PTR_PTR_1126bc608;
  _objc_alloc(PTR_PTR_1126bc608);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c59e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fb40(puVar2);
  func_0x00010c03bd60(puVar1);
  (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10562aee4; end: 10562b01b;  */

void FUN_10562aee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    _objc_copyWeak(auStack_70,param_1 + 0x30);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10562b01c; end: 10562b753;  */

void FUN_10562b01c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee5ce0(lVar5,param_2,uVar1,uVar3,uVar2,uVar4,uVar2,puVar6,0);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10562b754; end: 10562b80f; -[SCBoltResumableDataUploader .cxx_destruct] */

void FUN_10562b754(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562b810; end: 10562b893; -[SCBoltRetryingResumableUploader initWithUploader:retryCount:] */

undefined1 *
FUN_10562b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e96a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10562b894; end: 10562b903; -[SCBoltRetryingResumableUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:] */

void FUN_10562b894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f520();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10562b904; end: 10562ba57; -[SCBoltRetryingResumableUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562b904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10562ba58;
  puStack_70 = &UNK_1108a0ab0;
  uStack_68 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  _objc_retainBlock();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10562ba9c;
  puStack_98 = &UNK_1108a0ae0;
  uStack_90 = param_6;
  _objc_retain(param_6);
  ppuVar3 = &puStack_b0;
  _objc_retainBlock();
  func_0x00010bee5ee0(param_1,param_2,*(long *)(param_1 + 0x10) + 1,param_3,0,0,0,param_4,ppuVar2,
                      ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10562ba58; end: 10562badf;  */

void FUN_10562ba58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c11a860(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10562bae0; end: 10562bb23; -[SCBoltRetryingResumableUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562bae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x00010bee5ee0(param_1,param_2,*(long *)(param_1 + 0x10) + 1,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_9);
  return;
}



/* Entry: 10562bb24; end: 10562bb87; -[SCBoltRetryingResumableUploader isBackgroundUploadComplete:] */

undefined8 FUN_10562bb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c06cf00();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 10562bb88; end: 10562bbbb; -[SCBoltRetryingResumableUploader cleanUp] */

void FUN_10562bb88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10562bbbc; end: 10562bc77; -[SCBoltRetryingResumableUploader cancelUploadWithUniqueMediaId:completion:] */

void FUN_10562bbbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f460();
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10562bc78; end: 10562bcc7; -[SCBoltRetryingResumableUploader setUploadStatusDelegate:] */

void FUN_10562bc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21cfc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10562bcc8; end: 10562bee7; -[SCBoltRetryingResumableUploader _uploadWithRemainingAttemptCount:uploadRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:] */

void FUN_10562bcc8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = param_3 + -1;
  _objc_retain(param_10);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010c28eb60(uVar1);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10562bee8; end: 10562bf77;  */

void FUN_10562bee8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x60) < 1) {
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    }
  }
  else {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee5ee0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10562bf78; end: 10562bf83; -[SCBoltRetryingResumableUploader .cxx_destruct] */

void FUN_10562bf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562bf84; end: 10562bfcb; -[SCBoltV2ResumableUploadLocationValidator initWithExpirationMargin:] */

void FUN_10562bf84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e96a8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10562bfcc; end: 10562c09b; -[SCBoltV2ResumableUploadLocationValidator isValid:] */

ulong FUN_10562bfcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc698;
  _objc_opt_class(PTR_PTR_1126bc698);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == 0) || (uVar5 = param_3, func_0x00010c28ea60(), (int)uVar5 != 1)) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c28ea00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_10562ca70(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10562c09c; end: 10562c0e3; -[SCBoltV2UploadLocationValidator initWithExpirationMargin:] */

void FUN_10562c09c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e96b0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10562c0e4; end: 10562c1a3; -[SCBoltV2UploadLocationValidator isValid:] */

ulong FUN_10562c0e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc698;
  _objc_opt_class(PTR_PTR_1126bc698);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c28ea00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_10562ca70(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10562c1a4; end: 10562c1af; -[SCExponentialBackoffController init] */

void FUN_10562c1a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff6bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithBaseBackoffMs_maxBackoff_1125db4b0,1000,60000);
  return;
}



/* Entry: 10562c1b0; end: 10562c1fb; -[SCExponentialBackoffController initWithBaseBackoffMs:maxBackoffMs:] */

void FUN_10562c1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e96b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10562c1fc; end: 10562c27b; -[SCExponentialBackoffController getBackoffAmountMs:] */

double FUN_10562c1fc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = (uint)param_1;
  if (0 < (long)param_3) {
    if (0x1d < param_3) {
      param_3 = 0x1e;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 8) << (param_3 - 1 & 0x3f);
    lVar5 = lVar4;
    if (lVar1 <= lVar4) {
      lVar5 = lVar1;
    }
    if (0 < lVar4) {
      lVar1 = lVar5;
    }
    uVar6 = lVar1 / 2;
    if (lVar1 < 2) {
      lVar5 = 0;
    }
    else {
      _arc4random();
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar3 / uVar6;
      }
      lVar5 = (ulong)uVar3 - uVar2 * uVar6;
    }
    return (double)(long)(lVar5 + uVar6);
  }
  return 0.0;
}



/* Entry: 10562c27c; end: 10562c39f; -[SCNDynamicUploadLocationCallbackImpl initWithUploadWithRequest:callbackPerformer:successBlock:failureBlock:delegate:] */

undefined1 *
FUN_10562c27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e96c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10562c3a0; end: 10562c42b; -[SCNDynamicUploadLocationCallbackImpl onFailure:metrics:] */

void FUN_10562c3a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010b7f5498(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28e0c0();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10562c42c; end: 10562c507; -[SCNDynamicUploadLocationCallbackImpl onSuccess:metrics:] */

void FUN_10562c42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126bc698;
  _objc_retain(param_4);
  func_0x00010c28e0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  func_0x00010c0f40e0(puVar2,param_2,param_3,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  _objc_release(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28e0c0();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 10562c508; end: 10562c51f; -[SCNDynamicUploadLocationCallbackImpl delegate] */

void FUN_10562c508(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10562c520; end: 10562c52b; -[SCNDynamicUploadLocationCallbackImpl setDelegate:] */

void FUN_10562c520(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10562c52c; end: 10562c57b; -[SCNDynamicUploadLocationCallbackImpl .cxx_destruct] */

void FUN_10562c52c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562c57c; end: 10562c69f; -[SCNUploadLocationCallbackAdapter initWithUploadWithRequest:callbackPerformer:successBlock:failureBlock:delegate:] */

undefined1 *
FUN_10562c57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e96c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10562c6a0; end: 10562c713; -[SCNUploadLocationCallbackAdapter onError:] */

void FUN_10562c6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b7f5498(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3d660();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10562c714; end: 10562c9fb; -[SCNUploadLocationCallbackAdapter onSuccess:] */

void FUN_10562c714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc6a0;
  uVar8 = param_3;
  func_0x00010c28e060(param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  func_0x00010c0f40e0(puVar2,param_2,uVar8,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(uVar8);
  puVar7 = (undefined *)0x0;
  if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
    puVar7 = PTR_PTR_1126bc698;
    func_0x00010c0cb140(PTR_PTR_1126bc698);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c28e9e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d040(puVar7,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bdc2f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b060(puVar7,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfd5b80();
    if ((int)puVar3 != 0) {
      puVar3 = puVar2;
      func_0x00010bf4d200(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1825a0(puVar7,param_2,puVar3);
      _objc_release(puVar3);
    }
    uVar8 = param_3;
    func_0x00010c28e2e0();
    puVar3 = puVar2;
    if ((int)uVar8 == 3) {
      puVar4 = puVar2;
      func_0x00010c0d27c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c28ea40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9b00(puVar7,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c0d27c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c28ea20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9ae0(puVar7,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c0d27c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf441e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c9ac0(puVar7,param_2,puVar4);
      _objc_release(puVar4);
      uVar8 = 2;
    }
    else if ((int)uVar8 == 2) {
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d020(puVar7,param_2,puVar3);
      uVar8 = 1;
    }
    else {
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d020(puVar7,param_2,puVar3);
      uVar8 = 0;
    }
    _objc_release(puVar3);
    func_0x00010c21d060(puVar7,param_2,uVar8);
  }
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  uVar8 = param_3;
  func_0x00010bf0e960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d660(lVar6,param_2,puVar7,lVar1,uVar8,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10562c9fc; end: 10562ca13; -[SCNUploadLocationCallbackAdapter delegate] */

void FUN_10562c9fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10562ca14; end: 10562ca1f; -[SCNUploadLocationCallbackAdapter setDelegate:] */

void FUN_10562ca14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10562ca20; end: 10562ca6f; -[SCNUploadLocationCallbackAdapter .cxx_destruct] */

void FUN_10562ca20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562ca70; end: 10562cb27;  */

bool FUN_10562ca70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b39d0;
  _objc_retain();
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d8200(0x4092c00000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf64e40(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return puVar3 == (undefined *)0xffffffffffffffff;
}



/* Entry: 10562cb28; end: 10562cb9b; -[SCCUPSMetricsLogger initWithBlizzardLoggerLazy:] */

undefined1 * FUN_10562cb28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e96d0;
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



/* Entry: 10562cb9c; end: 10562d29f; -[SCCUPSMetricsLogger logMetricsWithContentUploadCallbackMetrics:dulpUploadLocationCallbackMetrics:contentUrl:mediaDuration:captureSessionId:mediaOrchestrationId:locationAttribution:] */

void FUN_10562cb9c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_4 == 0) {
    uVar4 = param_3;
    func_0x00010c28e0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    uVar4 = param_4;
  }
  puVar13 = PTR_PTR_1126bc6a8;
  _objc_opt_new(PTR_PTR_1126bc6a8);
  uVar5 = param_3;
  FUN_10562d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a9e0(puVar13,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c08ae60(param_3);
  func_0x00010c16aa20(puVar13,param_2,uVar5);
  uVar5 = uVar4;
  func_0x00010bf4c700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172e60(puVar13,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf9fd20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3138;
  if (uVar5 != 2) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3118;
  if (uVar5 != 1) {
    ppuVar2 = ppuVar1;
  }
  func_0x00010c199f40(puVar13,param_2,ppuVar2);
  uVar5 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_10562d6c8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar13,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010bfad060(param_3);
  func_0x00010c19bb40(puVar13,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_105620f30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar13,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0c59e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4c40(puVar13,param_2,uVar5);
  _objc_release(uVar5);
  lVar7 = param_8;
  FUN_105620f30();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar7;
  func_0x00010c08fa60();
  if (lVar14 != 0) {
    func_0x00010c1c4c60(puVar13,param_2,lVar7);
  }
  uVar5 = param_3;
  func_0x00010bf0b7a0(param_3);
  func_0x00010c21cbc0(puVar13,param_2,(long)(int)uVar5);
  func_0x00010c21cde0(puVar13,param_2,param_5);
  uVar5 = uVar4;
  func_0x00010c28e100();
  uVar3 = (uint)uVar5;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3178;
  if (uVar3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df3158;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3198;
  if (uVar3 != 2) {
    ppuVar2 = ppuVar1;
  }
  if (2 < uVar3) {
    ppuVar2 = (undefined **)0x0;
  }
  func_0x00010c21ce20(puVar13,param_2,ppuVar2);
  uVar5 = uVar4;
  func_0x00010c28e080(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ce00(puVar13,param_2,uVar5);
  _objc_release(uVar5);
  lVar14 = param_9;
  func_0x00010c08fa60();
  if (lVar14 != 0) {
    func_0x00010c1bf7c0(puVar13,param_2,param_9);
  }
  func_0x00010c179280(puVar13,param_2,param_7);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126bc6b0;
  _objc_opt_new();
  puVar10 = PTR_PTR_1126bc6b8;
  _objc_opt_new();
  uVar5 = param_3;
  func_0x00010bf0b7a0(param_3);
  func_0x00010c21cbc0(puVar10,param_2,(long)(int)uVar5);
  uVar5 = param_3;
  func_0x00010bf9fd20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3138;
  if (uVar5 != 2) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3118;
  if (uVar5 != 1) {
    ppuVar2 = ppuVar1;
  }
  func_0x00010c199f40(puVar10,param_2,ppuVar2);
  uVar5 = param_3;
  func_0x00010c08ae60(param_3);
  func_0x00010c16aa00(puVar10,param_2,uVar5);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a9a0(puVar9,param_2,puVar11);
  _objc_release(puVar11);
  uVar5 = param_3;
  func_0x00010bfb23c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d980(puVar9,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfb23e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19da00(puVar9,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_105620f30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar9,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0c59e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4c40(puVar9,param_2,uVar5);
  _objc_release(uVar5);
  lVar14 = lVar7;
  func_0x00010c08fa60();
  if (lVar14 != 0) {
    func_0x00010c1c4c60(puVar9,param_2,lVar7);
  }
  uVar5 = param_3;
  func_0x00010bfad060(param_3);
  func_0x00010c1c5240(puVar9,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c0c6c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar9,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0c6800(param_3);
  func_0x00010c21cf40(puVar9,param_2,(long)(int)uVar5);
  uVar5 = param_3;
  FUN_10562d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a700(puVar9,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c08ae60(param_3);
  func_0x00010c218520(puVar9,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c28e560(param_3);
  func_0x00010c21cf60(puVar9,param_2,(long)(int)uVar5);
  uVar5 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar5 == 0) {
    lVar14 = 0;
  }
  else {
    uVar6 = uVar5;
    func_0x00010bf98940();
    if (uVar6 == 2) {
      uVar6 = uVar5;
      func_0x00010bf98a40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      lVar14 = 4;
      if ((uVar12 & 1) == 0) {
        lVar14 = 1;
      }
    }
    else {
      lVar14 = 1;
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  func_0x00010c1c4c80(puVar9,param_2,lVar14);
  uVar8 = param_6;
  func_0x00010c0b4ca0(param_6);
  func_0x00010c1c45a0(puVar9,param_2,uVar8);
  if (lVar14 != 0) {
    func_0x00010c199f20(puVar9,param_2,3);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(puVar13);
  _objc_release(uVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    if (param_3 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      uVar4 = param_3;
      func_0x00010c28e0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar4 != 0) {
        uVar4 = param_3;
        func_0x00010c28e0a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08ae60();
        func_0x00010c0df7c0(puVar13,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar13,&PTR____CFConstantStringClassReference_110df3118)
        ;
        _objc_release(puVar13);
        _objc_release(uVar4);
      }
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar4 = param_3;
      func_0x00010c08ae60(param_3);
      func_0x00010c0df7c0(puVar13,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9,param_2,puVar13,&PTR____CFConstantStringClassReference_110df3138);
      _objc_release(puVar13);
      puVar13 = puVar9;
      func_0x00010c085d00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  return;
}



/* Entry: 10562d2a0; end: 10562d3cb;  */

void FUN_10562d2a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar2 = param_1;
    func_0x00010c28e0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010c28e0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08ae60();
      func_0x00010c0df7c0(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110df3118);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_1;
    func_0x00010c08ae60(param_1);
    func_0x00010c0df7c0(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110df3138);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c085d00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10562d3cc; end: 10562d3d7; -[SCCUPSMetricsLogger .cxx_destruct] */

void FUN_10562d3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562d3d8; end: 10562d4d7;  */

void FUN_10562d3d8(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    if (param_2 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110df3218;
    }
    else {
      ppuVar1 = param_2;
      func_0x00010bf87dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      func_0x00010bf3ec40(param_2);
      ppuVar3 = param_2;
      func_0x00010c292820(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      FUN_10562d4d8(ppuVar1,ppuVar2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(ppuVar1);
    }
  }
  else {
    func_0x00010c252ee0();
    func_0x00010c14de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10562d4d8; end: 10562d6c7;  */

void FUN_10562d4d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar2;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar5;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10562d6c8; end: 10562d73f;  */

void FUN_10562d6c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf98a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98940(param_1);
  _objc_release(param_1);
  uVar3 = uVar1;
  FUN_10562d4d8(uVar1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10562d740; end: 10562d763;  */

undefined ** FUN_10562d740(uint param_1)

{
  if (param_1 < 0xc) {
    return (undefined **)(&PTR_PTR_1108a0ff0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110df3238;
}



/* Entry: 10562d764; end: 10562da7b; -[SCUploadStepMetricsTracker initWithGrapheneRegistryLazy:blizzardLogger:uniqueMediaId:boltUploadRequest:uploadLocationCallbackMetrics:] */

undefined8 *
FUN_10562d764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e96d8;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar7);
    _CACurrentMediaTime();
    puVar1[5] = param_1;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((long)puVar1 + 0x9c) = 0xfbadbeef;
    uVar2 = puVar1[7];
    puVar1[6] = 0;
    puVar1[7] = &PTR____CFConstantStringClassReference_110df3478;
    _objc_release(uVar2);
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    uVar2 = puVar1[0x12];
    puVar1[0x12] = &PTR____CFConstantStringClassReference_110df2998;
    _objc_release(uVar2);
    if (param_7 != 0) {
      lVar3 = param_7;
      func_0x00010c0c67c0();
      *(int *)(puVar1 + 0xb) = (int)lVar3;
      lVar3 = param_7;
      func_0x00010bf0b760();
      *(int *)((long)puVar1 + 0x5c) = (int)lVar3;
      lVar3 = param_7;
      func_0x00010c28e560();
      *(int *)(puVar1 + 0xc) = (int)lVar3;
      lVar3 = param_7;
      FUN_1056210d0();
      puVar1[0xe] = lVar3;
      lVar3 = param_7;
      func_0x00010bf8b340();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[0x10];
      puVar1[0x10] = lVar3;
      _objc_release(uVar2);
      lVar3 = param_7;
      func_0x00010c28e280();
      *(int *)(puVar1 + 0x11) = (int)lVar3;
      lVar3 = param_7;
      func_0x00010bf31200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf51e00();
      uVar2 = puVar1[3];
      puVar1[3] = lVar4;
      _objc_release(uVar2);
      _objc_release(lVar3);
      lVar3 = param_7;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_105620f30();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      uVar2 = puVar1[4];
      puVar1[4] = lVar5;
      _objc_release(uVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_7;
      func_0x00010bf64080(param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(puVar1);
      func_0x00010c0be5c0(lVar3);
      _objc_release(lVar3);
      _objc_release(puVar1);
      _objc_release(puVar1);
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10562da7c; end: 10562daab;  */

void FUN_10562da7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined ***)(*(long *)(param_1 + 0x20) + 0x90) =
       &PTR____CFConstantStringClassReference_110df2998;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10562daac; end: 10562dad3; -[SCUploadStepMetricsTracker mediaOrchestrationAttemptId] */

void FUN_10562daac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10562dad4; end: 10562dafb; -[SCUploadStepMetricsTracker logStartUploadStep:] */

void FUN_10562dad4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x40) = param_4;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10562dafc; end: 10562dcd3; -[SCUploadStepMetricsTracker logEndCurrentUploadStep] */

void FUN_10562dafc(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  
  puVar3 = PTR_PTR_1126bc6c0;
  func_0x00010c28e020(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  iVar2 = *(int *)(param_2 + 0x9c);
  ppuVar7 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar2 == 1) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar2 != 2) {
    ppuVar1 = ppuVar7;
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar2 != -0x4524111) {
    ppuVar7 = ppuVar1;
  }
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110df3418,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar8 = *(long *)(param_2 + 0x40) - 1;
  if (uVar8 < 5) {
    ppuVar7 = (undefined **)(&PTR_PTR_1108a1098)[uVar8];
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df3118;
  }
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dbdaf8,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010c0df7a0(puVar3,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(long *)(param_2 + 0x40) - 1;
  if (uVar8 < 5) {
    ppuVar7 = (undefined **)(&PTR_PTR_1108a1098)[uVar8];
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df3118;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68),param_3,puVar3,ppuVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10562dcd4; end: 10562dd8b; -[SCUploadStepMetricsTracker logUploadCompletionWithSuccess:uploadSize:contentReference:errorResponse:error:] */

void FUN_10562dcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010be5a2c0(param_1,param_2,param_3);
  func_0x00010be5a2e0(param_1,param_2,param_3,param_5,param_6,param_7);
  func_0x00010be5a300(param_1,param_2,param_4,param_3);
  func_0x00010be50f20(param_1,param_2,param_3,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10562dd8c; end: 10562dfc3; -[SCUploadStepMetricsTracker logUploadBandwidthEstimate:timeToUploadWithDataSize:] */

void FUN_10562dd8c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  if (0 < (long)param_3) {
    puVar4 = PTR_PTR_1126bc6c0;
    func_0x00010c28d9c0(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    iVar3 = *(int *)(param_1 + 0x9c);
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
    if (iVar3 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
    if (iVar3 != 2) {
      ppuVar1 = ppuVar2;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
    if (iVar3 != -0x4524111) {
      ppuVar2 = ppuVar1;
    }
    puVar4 = puVar5;
    func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c28dea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (7 < param_3) {
      puVar5 = PTR_PTR_1126bc6c0;
      func_0x00010c28e900(PTR_PTR_1126bc6c0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      iVar3 = *(int *)(param_1 + 0x9c);
      ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
      if (iVar3 == 1) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
      if (iVar3 != 2) {
        ppuVar1 = ppuVar2;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
      if (iVar3 != -0x4524111) {
        ppuVar2 = ppuVar1;
      }
      puVar5 = puVar8;
      func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c28dea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9180();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10562dfc4; end: 10562e1c7; -[SCUploadStepMetricsTracker logUploadBytesAlreadyUploaded:bytesRemaining:] */

void FUN_10562dfc4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar4 = PTR_PTR_1126bc6c0;
  func_0x00010c28e5e0(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126bc6c0;
  func_0x00010c28e5c0(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10562e1c8; end: 10562e2b3; -[SCUploadStepMetricsTracker logResumeState:] */

void FUN_10562e1c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126bc6c0;
  func_0x00010bfa9da0(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (param_3 - 1U < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_1108a1050)[param_3 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110df3718;
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110df3498,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10562e2b4; end: 10562e42b; -[SCUploadStepMetricsTracker logDequeUrlStepDidSucceed:] */

void FUN_10562e2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126bc6c0;
  func_0x00010bf6e160(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10562e42c; end: 10562e5a3; -[SCUploadStepMetricsTracker logPersistMediaStepDidSucceed:] */

void FUN_10562e42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126bc6c0;
  func_0x00010c2be060(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10562e5a4; end: 10562e71b; -[SCUploadStepMetricsTracker logReadMediaStepDidSucceed:] */

void FUN_10562e5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126bc6c0;
  func_0x00010c121680(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10562e71c; end: 10562e7df; -[SCUploadStepMetricsTracker logResumableUploaderStartStep:] */

void FUN_10562e71c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126bc6c0;
  func_0x00010c13d100(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 < 6) {
    ppuVar5 = (undefined **)(&PTR_PTR_1108a1068)[param_3];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110df3578,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10562e7e0; end: 10562e863; -[SCUploadStepMetricsTracker logResumeStartByteFromGcs:] */

void FUN_10562e7e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc6c0;
  func_0x00010bfbe640(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10562e864; end: 10562eba7; -[SCUploadStepMetricsTracker _logUploadResultWithSuccess:contentReference:errorResponse:error:] */

void FUN_10562e864(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined **param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bc6c0;
  func_0x00010c28e5a0(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((param_3 & 1) == 0) {
    ppuVar5 = param_5;
    FUN_10562d3d8(param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar6 = param_4;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = puVar2;
  if (lVar6 != 0) {
    lVar6 = param_4;
    func_0x00010bf4db80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar6);
    puVar1 = puVar4;
    func_0x00010bf529e0();
    if ((undefined *)0x1 < puVar1) {
      puVar1 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(puVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10562eba8; end: 10562ed3f; -[SCUploadStepMetricsTracker _logUploadLatencyWithSuccess:] */

void FUN_10562eba8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126bc6c0;
  if ((param_4 & 1) == 0) {
    func_0x00010c28dc80(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c28e820();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_2 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined1 *)(param_2 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110df3438,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befc000(param_1 - *(double *)(param_2 + 0x28),uVar9,param_3,puVar7);
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10562ed40; end: 10562ef27; -[SCUploadStepMetricsTracker _logUploadSize:withSuccess:] */

void FUN_10562ed40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_PTR_1126bc6c0;
  func_0x00010c28e720(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  iVar3 = *(int *)(param_1 + 0x9c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df3638;
  if (iVar3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df3658;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3678;
  if (iVar3 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (iVar3 != -0x4524111) {
    ppuVar2 = ppuVar1;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df3418,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x98));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110df3438,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10562ef28; end: 10562f49b; -[SCUploadStepMetricsTracker _logCUPSBlizzardMetricsWithSuccess:contentReference:errorResponse:error:] */

void FUN_10562ef28(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126afec0;
  _objc_retain(param_5);
  _CACurrentMediaTime();
  func_0x00010c155420(param_1 - *(double *)(param_2 + 0x28),puVar2);
  puVar1 = PTR_PTR_1126bc6a8;
  _objc_opt_new();
  func_0x00010c16aa20();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + 0x78) == 0) {
    func_0x00010c21ce00(puVar1);
  }
  else {
    func_0x00010c08ae60();
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010bf4c700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172e60(puVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c28e080(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ce00(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c085d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a9e0(puVar1);
  _objc_release(uVar3);
  if ((param_4 & 1) == 0) {
    func_0x00010c199f40(puVar1);
    uVar3 = param_6;
    FUN_10562d3d8(param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar1);
    _objc_release(uVar3);
  }
  func_0x00010c19bb40(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  FUN_105620f30(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar1);
  _objc_release(uVar3);
  func_0x00010c1c4c40(puVar1);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1c4c60(puVar1);
  }
  func_0x00010c179280(puVar1);
  func_0x00010c21cbc0(puVar1);
  uVar3 = param_5;
  func_0x00010bf4db80(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c21cde0(puVar1);
  _objc_release(uVar3);
  func_0x00010c21ce20(puVar1);
  lVar4 = *(long *)(param_2 + 0xa0);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1bf7c0(puVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bc6b0;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126bc6b8;
  _objc_opt_new();
  func_0x00010c21cbc0();
  if ((param_4 & 1) == 0) {
    func_0x00010c199f40(puVar5);
  }
  func_0x00010c16aa00(puVar5);
  lVar10 = 1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a9a0(puVar2);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  FUN_105620f30(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar2);
  _objc_release(uVar3);
  func_0x00010c1c4c40(puVar2);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1c4c60(puVar2);
  }
  func_0x00010c1c5240(puVar2);
  func_0x00010c21cf40(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a700(puVar2);
  _objc_release(uVar3);
  func_0x00010c218520(puVar2);
  func_0x00010c21cf60(puVar2);
  func_0x00010c0b4ca0(*(undefined8 *)(param_2 + 0x80));
  func_0x00010c1c45a0(puVar2);
  uVar7 = (ulong)*(uint *)(param_2 + 0x88);
  FUN_10562d740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar2);
  _objc_release(uVar7);
  if ((param_4 & 1) == 0) {
    lVar4 = param_7;
    func_0x00010bf3ec40();
    if (lVar4 == 2) {
      lVar4 = param_7;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(lVar4);
    }
    func_0x00010c1c4c80(puVar2);
    func_0x00010c199f20(puVar2);
  }
  else {
    func_0x00010c1c4c80(puVar2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126bc6c0;
  if (0 < (long)(puVar6 + lVar10)) {
    _objc_retain(uVar9);
    func_0x00010bfbe6c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c28dea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126bc6c0;
    func_0x00010bfbe660(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c28dea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126bc6c0;
    func_0x00010bfbe6a0(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar3;
    func_0x00010c28dea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10562f49c; end: 10562f63b; +[SCUploadStepMetricsTracker logGCSRUStateMetricsWithValidStateCount:expiredStateCount:grapheneRegistryLazy:] */

void FUN_10562f49c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bc6c0;
  if (0 < param_4 + param_3) {
    _objc_retain(param_5);
    func_0x00010bfbe6c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28dea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bc6c0;
    func_0x00010bfbe660(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28dea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bc6c0;
    func_0x00010bfbe6a0(PTR_PTR_1126bc6c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar3 = uVar2;
    func_0x00010c28dea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10562f63c; end: 10562f72f; -[SCUploadStepMetricsTracker logGCSRUOperationLatency:type:] */

void FUN_10562f63c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if (param_4 < 3) {
    puVar5 = (&PTR_PTR_1108a10c0)[param_4];
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126bc6c0;
  func_0x00010bfbe680(PTR_PTR_1126bc6c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dad058,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10562f730; end: 10562f737; -[SCUploadStepMetricsTracker didResume] */

undefined1 FUN_10562f730(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 10562f738; end: 10562f73f; -[SCUploadStepMetricsTracker setDidResume:] */

void FUN_10562f738(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10562f740; end: 10562f747; -[SCUploadStepMetricsTracker uploadUrlType] */

undefined4 FUN_10562f740(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



/* Entry: 10562f748; end: 10562f74f; -[SCUploadStepMetricsTracker setUploadUrlType:] */

void FUN_10562f748(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  return;
}



/* Entry: 10562f750; end: 10562f757; -[SCUploadStepMetricsTracker locationAttribution] */

undefined8 FUN_10562f750(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}


