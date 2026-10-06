/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b26cc80; end: 10b26ce37; -[SCResumeableDownloadRequest initWithURL:additionalHTTPHeaders:key:contexts:priority:connectivity:trackingInfo:parameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b26cc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bdc1d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puStack_68 = PTR_PTR_112705fd8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithKey_contexts_priority_co_112542720,param_5,param_6,
                      param_7,param_8,0,puVar1,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar2 + (long)_DAT_11278dcfc) = 1;
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd00);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd00) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd04);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd04) = uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11278dd08;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_10;
    _objc_release(uVar3);
    func_0x00010c219320(puVar2);
    func_0x00010c1b53c0(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b26ce38; end: 10b26cfeb; -[SCResumeableDownloadRequest initWithEndpoint:parameters:additionalHTTPHeaders:key:contexts:priority:connectivity:trackingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b26ce38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bbf20;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bdc1d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puStack_68 = PTR_PTR_112705fd8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithKey_contexts_priority_co_112542720,param_6,param_7,
                      param_8,param_9,0,puVar1,1,1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd0c);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd0c) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd04);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd04) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd08);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11278dd08) = uVar3;
    _objc_release(uVar4);
    func_0x00010c219320(puVar2);
    func_0x00010c1b53c0(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b26cfec; end: 10b26d253; -[SCResumeableDownloadRequest initializeURLRequestWithAuthenticator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26cfec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc0e8;
  lVar11 = (long)_DAT_11278dd10;
  if (*(long *)(param_1 + lVar11) == 0) {
    lVar7 = *(long *)(param_1 + _DAT_11278dd0c);
    if (lVar7 == 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11278dd00);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11278dd08);
      uVar10 = *(undefined8 *)(param_1 + _DAT_11278dd04);
      lVar7 = param_1;
      func_0x00010c0cc940(param_1);
      func_0x00010bdc3160(puVar2,param_2,uVar8,uVar9,0,uVar10,lVar7,0,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11278dd08);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11278dd04);
      lVar1 = param_1;
      func_0x00010c0cc940(param_1);
      func_0x00010bdc3140(puVar2,param_2,lVar7,uVar8,0,uVar9,lVar1,0,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar8);
    lVar7 = *(long *)(param_1 + lVar11);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar2 = PTR_PTR_1126dfea8;
      func_0x00010c22b6a0(PTR_PTR_1126dfea8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bdc2b80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c286560(puVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(*(undefined8 *)(param_1 + lVar11),param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar9);
      _objc_release(puVar2);
      uVar4 = *(ulong *)(param_1 + lVar11);
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f60438);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d65e0(param_1,param_2,puVar2);
        _objc_release(puVar2);
      }
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      func_0x000107c2bf30(uVar9);
      func_0x00010c1974a0(param_1,param_2,uVar9);
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26d254; end: 10b26d343; -[SCResumeableDownloadRequest executeWithAuthenticator:completionQueue:completionBlock:] */

void FUN_10b26d254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf75f20(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b26d344;
  puStack_58 = &UNK_1108465d0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  (**(code **)((long)ppuVar1 + 0x10))();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b26d344; end: 10b26d753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26d344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  func_0x00010c064b40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puVar12 = PTR_PTR_1126bc0e8;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278dd10);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c136da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c134b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99820();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar15 = (long)_DAT_11278dcf8;
  func_0x00010c1360a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c278f20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11e1a0();
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010c136d60();
  if (lVar9 == 0) {
    func_0x00010c081c40();
  }
  func_0x00010c292920();
  func_0x00010c07ffc0();
  func_0x00010bf061e0();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c291820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26a580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed8a0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c1358e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar2);
  func_0x00010c1b08a0(puVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135880(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd80();
  _objc_release(uVar13);
  uVar14 = *(ulong *)(param_1 + 0x20);
  if ((*(long *)(uVar14 + (long)_DAT_11278dd00) == 0) &&
     (*(long *)(uVar14 + (long)_DAT_11278dd0c) == 0)) {
    if (*(long *)(uVar14 + lVar15) == 0) {
      uVar16 = 0;
      goto LAB_10b26d680;
    }
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135880();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf89120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c135880();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf890e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar13);
  _objc_release(uVar14);
LAB_10b26d680:
  uVar14 = uVar16;
  _objc_opt_respondsToSelector(uVar16,PTR_s_priority_112622940);
  if ((uVar14 & 1) != 0) {
    func_0x00010bdc3340(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1e3380(uVar16);
  }
  func_0x00010c14d980(uVar16);
  func_0x00010c212780(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1ac320(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar12);
  _objc_release(uVar1);
  _objc_release(uVar16);
  return;
}



/* Entry: 10b26d754; end: 10b26d903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26d754(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf890a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf890a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11278dd14;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7) = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar2);
  if (param_4 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar4 + lVar7) == 0) {
      func_0x00010c135880();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c0d1480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar7 == 0) {
        param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x20);
        func_0x00010c135880(puVar5);
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar5;
        func_0x00010c0d1480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
    }
    else {
      param_4 = (undefined *)0x0;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_3,param_2,param_4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c26a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == lVar7) {
    func_0x00010c212780(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b26d904; end: 10b26d907; -[SCResumeableDownloadRequest downloadTask] */

void FUN_10b26d904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_task_112678378);
  return;
}



/* Entry: 10b26d908; end: 10b26d957; -[SCResumeableDownloadRequest cancelByProducingResumeData:] */

void FUN_10b26d908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf890a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26d958; end: 10b26d9c3; -[SCResumeableDownloadRequest cleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26d958(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_11278dd14) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b26d9c4; end: 10b26d9fb; -[SCResumeableDownloadRequest setNativeDownloadLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26d9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278dd14);
  *(undefined8 *)(param_1 + _DAT_11278dd14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26d9fc; end: 10b26d9ff; -[SCResumeableDownloadRequest timeoutInterval] */

void FUN_10b26d9fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1605b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sessionTimeoutInterval_112635b88);
  return;
}



/* Entry: 10b26da00; end: 10b26da73; -[SCResumeableDownloadRequest url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26da00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278dd10);
  if (lVar1 == 0) {
    if (*(char *)(param_1 + _DAT_11278dcfc) == '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_11278dd00);
      _objc_retain(lVar1);
    }
    else {
      lVar1 = 0;
    }
  }
  else {
    func_0x00010bdc2b80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b26da74; end: 10b26db17; -[SCResumeableDownloadRequest path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26da74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11278dd10);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + _DAT_11278dcfc) == '\x01') {
      lVar1 = *(long *)(param_1 + _DAT_11278dd00);
      func_0x00010c0f5800(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = *(long *)(param_1 + _DAT_11278dd0c);
      _objc_retain(lVar1);
    }
  }
  else {
    func_0x00010bdc2b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b26db18; end: 10b26db47; -[SCResumeableDownloadRequest urlRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26db18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278dd10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26db48; end: 10b26db57; -[SCResumeableDownloadRequest approximateRequestSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b26db48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11278dd10);
  func_0x000107c61174();
  lVar1 = lVar3;
  func_0x000107c3ab74();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar2 = lVar3;
  if (lVar1 == 0) {
    func_0x000107c3abfc(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar1 = lVar2;
    func_0x000107c3ceb0(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4adb0();
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c3ab74();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c4adac(lVar2);
  }
  func_0x000107c61170(lVar2);
  return lVar3;
}



/* Entry: 10b26db58; end: 10b26db9b; -[SCResumeableDownloadRequest downloadedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26db58(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_11278dd14) != 0) {
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,
                        *(long *)(param_1 + _DAT_11278dd14),8,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26db9c; end: 10b26dbab; -[SCResumeableDownloadRequest location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b26db9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dd14);
}



/* Entry: 10b26dbac; end: 10b26dc3b; -[SCResumeableDownloadRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26dbac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278dd14,0);
  _objc_storeStrong(param_1 + _DAT_11278dd00,0);
  _objc_storeStrong(param_1 + _DAT_11278dd0c,0);
  _objc_storeStrong(param_1 + _DAT_11278dd08,0);
  _objc_storeStrong(param_1 + _DAT_11278dd10,0);
  _objc_storeStrong(param_1 + _DAT_11278dd04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278dcf8,0);
  return;
}



/* Entry: 10b26dc3c; end: 10b26dd93; -[SCRequestProgressiveUpdateTask initWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:progressiveUpdateQueue:progressiveUpdateBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b26dc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112705fe0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithRequest_authenticator_tr_112542808,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278dd18;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd1c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd1c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd20);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278dd20) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1b3f60(param_3);
    lVar4 = (long)_DAT_11278dd24;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b26dd94; end: 10b26de93; -[SCRequestProgressiveUpdateTask updateTaskWithTask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26dd94(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dfd68;
  _objc_opt_class(PTR_PTR_1126dfd68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((uVar2 & 1) != 0) && (uVar2 = param_1, func_0x00010c07cd60(), (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cc60(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c117c60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11278dd18);
    *(ulong *)(param_1 + (long)_DAT_11278dd18) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c117c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11278dd1c);
    *(ulong *)(param_1 + (long)_DAT_11278dd1c) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26de94; end: 10b26dedb; -[SCRequestProgressiveUpdateTask progressiveUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26de94(undefined8 param_1)

{
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26dedc; end: 10b26dee3; -[SCRequestProgressiveUpdateTask shouldRetryRequestWithError:response:] */

undefined8 FUN_10b26dedc(void)

{
  return 0;
}



/* Entry: 10b26dee4; end: 10b26df8b; -[SCRequestProgressiveUpdateTask completeTask] */

void FUN_10b26dee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar2 = &puStack_50;
  uVar1 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73c80();
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b26df8c;
  puStack_38 = &UNK_1108b22a8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b26df8c; end: 10b26e15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26df8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c06ee20(), (uVar2 & 1) == 0)) {
    func_0x00010c0ddec0(uVar1);
    func_0x00010c1ced00(uVar1);
    uVar2 = uVar1;
    func_0x00010c0ddec0();
    uVar3 = uVar1;
    func_0x00010c0de2a0();
    if (uVar3 < uVar2) {
      uVar2 = uVar1;
      func_0x00010c0b3760(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26a620();
      _objc_release(uVar2);
      func_0x00010bf380a0(uVar1);
      uVar6 = *(undefined8 *)(uVar1 + (long)_DAT_11278dd24);
      uVar4 = param_2;
      func_0x00010c135880(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_2;
      func_0x00010c0f5800(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c2bf48(uVar6,uVar4,uVar5,param_5 == 0,1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_2;
      func_0x00010c086560(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c134680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      _objc_release(uVar4);
      func_0x00010c1b0160(uVar1);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b26e160; end: 10b26e16f; -[SCRequestProgressiveUpdateTask progressiveUpdateQueue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b26e160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dd18);
}



/* Entry: 10b26e170; end: 10b26e17f; -[SCRequestProgressiveUpdateTask progressiveUpdateBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b26e170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dd1c);
}



/* Entry: 10b26e180; end: 10b26e1df; -[SCRequestProgressiveUpdateTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26e180(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278dd1c,0);
  _objc_storeStrong(param_1 + _DAT_11278dd18,0);
  _objc_storeStrong(param_1 + _DAT_11278dd24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278dd20,0);
  return;
}



/* Entry: 10b26e1e0; end: 10b26e307; -[SCRequestSingleCompletionTask updateTaskWithTask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26e1e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dfee8;
  _objc_opt_class(PTR_PTR_1126dfee8);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar6 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cc60(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11278dd34;
    lVar2 = *(long *)(param_3 + lVar7);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar6 = 0;
      lVar2 = (long)_DAT_11278dd30;
      do {
        uVar3 = *(undefined8 *)(param_3 + lVar2);
        func_0x00010c0dfd40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc65a0(param_1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_3 + lVar7);
        func_0x00010bf529e0();
      } while (uVar6 < uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26e308; end: 10b26e4b3; -[SCRequestSuccessFailureTask updateTaskWithTask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26e308(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dfef0;
  _objc_opt_class(PTR_PTR_1126dfef0);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar6 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cc60(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11278dd44;
    lVar2 = *(long *)(param_3 + lVar7);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar6 = 0;
      lVar2 = (long)_DAT_11278dd3c;
      do {
        uVar3 = *(undefined8 *)(param_3 + lVar2);
        func_0x00010c0dfd40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc8840(param_1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_3 + lVar7);
        func_0x00010bf529e0();
      } while (uVar6 < uVar5);
    }
    lVar7 = (long)_DAT_11278dd48;
    lVar2 = *(long *)(param_3 + lVar7);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar6 = 0;
      lVar2 = (long)_DAT_11278dd40;
      do {
        uVar3 = *(undefined8 *)(param_3 + lVar2);
        func_0x00010c0dfd40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc6b60(param_1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_3 + lVar7);
        func_0x00010bf529e0();
      } while (uVar6 < uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26e4b4; end: 10b26e57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b26e4b4(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  dVar4 = param_1;
  func_0x00010c135880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270bc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)_DAT_11278dd4c);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2bf44(param_1 - dVar4,uVar3,uVar2,0);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
            (*(long *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bf39f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_cleanUp_1125ac188);
  return;
}



/* Entry: 10b26e580; end: 10b26e657; -[SCRequestTask isDownloadMediaRequestTaskWithTrackingId] */

bool FUN_10b26e580(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar1 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c136d60();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      bVar6 = false;
    }
    else {
      func_0x00010c134680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c113c80();
      bVar6 = lVar5 < 4;
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar6 = false;
  }
  _objc_release(lVar1);
  return bVar6;
}



/* Entry: 10b26e658; end: 10b26e663; -[SCRequestTask userSessionScopeIdentifier] */

void FUN_10b26e658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)
            (param_1,PTR_s_userSessionScopeIdentifier_112682840);
  return;
}



/* Entry: 10b26e664; end: 10b26e6e7; -[SCRequestTask isEqualToSessionScopeWithAuthenticator:] */

bool FUN_10b26e664(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf10dc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == param_3) {
    bVar1 = true;
  }
  else {
    func_0x00010c293860(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 == param_3;
    _objc_release();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b26e6e8; end: 10b26e7d3; +[SCRequestTask createTaskWithRequest:authenticator:traceFile:networkInterceptors:grapheneRegistry:progressiveUpdateQueue:progressiveUpdateBlock:] */

void FUN_10b26e6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfd68;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03eb20();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b26e7d4; end: 10b26e98b; -[SCRequestTask runWithCompletionQueue:completionBlock:] */

void FUN_10b26e7d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined2 *)(param_1 + 9) = 0x100;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  lVar1 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26a9a0();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b26e98c;
  puStack_70 = &UNK_110ccc250;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  ppuVar2 = &puStack_88;
  uStack_68 = param_4;
  _objc_retainBlock(ppuVar2);
  func_0x00010c117c20(param_1);
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
    func_0x00010c13db60(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf9b0a0(uVar3);
    _objc_release(lVar1);
  }
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26a6a0();
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b26e98c; end: 10b26ea2f;  */

void FUN_10b26e98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bf60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26ea30; end: 10b26ede3; -[SCRequestTask _onTaskComplete:response:data:error:completionBlock:] */

void FUN_10b26ea30(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  *(undefined1 *)(param_1 + 10) = 0;
  lVar2 = param_1;
  func_0x00010c232c40();
  *(char *)(param_1 + 9) = (char)lVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(bool *)(param_1 + 0xb) = param_6 == 0;
  lVar2 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26a680();
  _objc_release(lVar2);
  if (param_6 != 0) {
    uVar3 = param_6;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_6;
      func_0x00010bf3ec40();
      if ((uVar3 - 400 < 4) && (uVar3 - 400 != 2)) {
        ppuVar5 = param_3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar1 = ppuVar6;
        }
        _objc_retain();
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        uVar3 = param_6;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = param_6;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = param_6;
        func_0x00010c292820(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = param_6;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = param_6;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(uVar10);
        _objc_release(uVar3);
        uVar10 = uVar4;
        func_0x00010c08fa60();
        if (500 < uVar10) {
          uVar3 = uVar4;
          func_0x00010c260c20(uVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c0a7de0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (500 < uVar10) {
          _objc_release(uVar3);
        }
        lVar2 = param_1;
        func_0x00010c0dac20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = param_1;
          func_0x00010c0dac20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c132fa0();
          _objc_release(lVar2);
        }
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar4);
        _objc_release(ppuVar1);
      }
    }
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,param_1,param_4,param_5,param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26ede4; end: 10b26ee17; -[SCRequestTask cancelInNNM] */

void FUN_10b26ede4(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2f1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26ee18; end: 10b26ee5b; -[SCRequestTask cancelInNativeWithReason:] */

void FUN_10b26ee18(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2f1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26ee5c; end: 10b26ee67; -[SCRequestTask cancel] */

void FUN_10b26ee5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cancelWithForcedRetryIfRunning_e_1125a96e8,0,0);
  return;
}



/* Entry: 10b26ee68; end: 10b26ee73; -[SCRequestTask cancelWithError:] */

void FUN_10b26ee68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_cancelWithForcedRetryIfRunning_e_1125a96e8,0,param_3);
  return;
}



/* Entry: 10b26ee74; end: 10b26ef47; -[SCRequestTask cancelWithForcedRetryIfRunning:error:] */

void FUN_10b26ee74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  _objc_retain(param_4);
  if (cVar1 == '\x01') {
    func_0x00010bddad00(param_1,param_2,0,param_3,param_4);
  }
  else {
    lVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bde29c0(param_1,param_2,0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b26ef48; end: 10b26f017; -[SCRequestTask cancelByProducingResumeData:] */

void FUN_10b26ef48(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  _objc_retain(param_3);
  if (cVar1 == '\x01') {
    func_0x00010bddad00(param_1,param_2,param_3,0,0);
  }
  else {
    lVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bde29c0(param_1,param_2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26f018; end: 10b26f157; -[SCRequestTask _cancelRunningTaskWithCompletionHandler:forcedRetry:error:] */

void FUN_10b26f018(long param_1,undefined8 param_2,long param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_3 == 0) || ((param_4 & 1) == 0)) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    if (param_3 == 0) {
      func_0x00010bf2dba0(uVar5);
    }
    else {
      puVar4 = PTR_PTR_1126bfb00;
      _objc_opt_class(PTR_PTR_1126bfb00);
      _objc_opt_isKindOfClass(uVar5,puVar4);
      if ((uVar5 & 1) == 0) {
        func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x18));
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
      else {
        func_0x00010bf2e040();
      }
    }
    *(byte *)(param_1 + 0xc) = param_4;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    if ((param_4 & 1) == 0) {
      func_0x00010bde29c0(param_1);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26f158; end: 10b26f27f; -[SCRequestTask _completeCanceledTaskWithCompletionHandler:error:] */

void FUN_10b26f158(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_4 == (undefined *)0x0) {
    param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  func_0x00010bf43b80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26f280; end: 10b26f287; -[SCRequestTask isResumable] */

void FUN_10b26f280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isResumable_1125fcc30);
  return;
}



/* Entry: 10b26f288; end: 10b26f303; -[SCRequestTask pause] */

void FUN_10b26f288(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 10) == '\x01') &&
     (lVar1 = param_1, func_0x00010c07c880(), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b26f304; end: 10b26f30b; -[SCRequestTask updateTaskURLSessionPriority:] */

void FUN_10b26f304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setURLSessionTaskPriority__112664658);
  return;
}



/* Entry: 10b26f30c; end: 10b26f36f; -[SCRequestTask didEnqueueTask] */

void FUN_10b26f30c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010bf75da0(uVar1,param_2,1);
  _objc_release(uVar1);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26a600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b26f370; end: 10b26f4d3; -[SCRequestTask shouldRetryRequestWithError:response:] */

ulong FUN_10b26f370(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c136d60();
    if (uVar2 == 4) {
LAB_10b26f3c4:
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c136d60();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 != 5) {
        puVar4 = PTR_PTR_1126dfd68;
        _objc_opt_class(PTR_PTR_1126dfd68);
        uVar1 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar4);
        if ((uVar1 & 1) == 0) {
          if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
            param_1 = 1;
            goto LAB_10b26f424;
          }
          uVar1 = param_1;
          func_0x00010be34540();
          if ((int)uVar1 != 0) {
            uVar1 = param_1;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c150440();
            if (uVar2 == 4) goto LAB_10b26f3c4;
            uVar2 = param_1;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c150440();
            _objc_release(uVar2);
            _objc_release(uVar1);
            if (uVar3 != 5) {
              func_0x00010be40260(param_1);
              goto LAB_10b26f424;
            }
          }
        }
      }
    }
  }
  param_1 = 0;
LAB_10b26f424:
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b26f4d4; end: 10b26f533; -[SCRequestTask updateTaskWithTask:] */

void FUN_10b26f4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return;
}



/* Entry: 10b26f534; end: 10b26f587; -[SCRequestTask completeTask] */

void FUN_10b26f534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return;
}



/* Entry: 10b26f588; end: 10b26f58b; -[SCRequestTask progressiveUpdate] */

void FUN_10b26f588(void)

{
  return;
}



/* Entry: 10b26f58c; end: 10b26f6db; -[SCRequestTask _isErrorRetriableWithError:response:] */

undefined8 FUN_10b26f58c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be07400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df780(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c136d60();
    if ((uVar3 == 2) && (lVar4 = param_4, func_0x00010c252ee0(), lVar4 == 400)) {
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c06ce20();
      if ((int)uVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_3;
        FUN_10b26c6bc(param_3);
      }
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    else {
      uVar6 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b26f6dc; end: 10b26f72f; -[SCRequestTask _eligibleErrorCodesForRetry] */

void FUN_10b26f6dc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4568 != -1) {
    func_0x000107c27d9c(0x1137f4568,&PTR___NSConcreteGlobalBlock_110ccc280);
  }
  uVar1 = uRam00000001137f4570;
  _objc_retain(uRam00000001137f4570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26f730; end: 10b26f76b;  */

void FUN_10b26f730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183ad0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f4570;
  puRam00000001137f4570 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26f76c; end: 10b26f79f; -[SCRequestTask _hasRetryAttemptsLeft] */

bool FUN_10b26f76c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bee69c0();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0c2700(uVar2);
  return uVar1 < uVar2;
}



/* Entry: 10b26f7a0; end: 10b26f7b3; -[SCRequestTask _usedValidRequestAttemptCount] */

long FUN_10b26f7a0(long param_1)

{
  return *(long *)(param_1 + 0x40) - (*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48));
}



/* Entry: 10b26f7b4; end: 10b26f7cb; -[SCRequestTask authenticator] */

void FUN_10b26f7b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26f7cc; end: 10b26f7d3; -[SCRequestTask shouldRetry] */

undefined1 FUN_10b26f7cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b26f7d4; end: 10b26f7db; -[SCRequestTask isRunning] */

undefined1 FUN_10b26f7d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b26f7dc; end: 10b26f7e3; -[SCRequestTask setIsRunning:] */

void FUN_10b26f7dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b26f7e4; end: 10b26f7eb; -[SCRequestTask cancelReason] */

undefined8 FUN_10b26f7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b26f7ec; end: 10b26f7f3; -[SCRequestTask setCancelReason:] */

void FUN_10b26f7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b26f7f4; end: 10b26f80b; -[SCRequestTask nonFatalReporter] */

void FUN_10b26f7f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26f80c; end: 10b26f83b; -[SCRequestTask setLogger:] */

void FUN_10b26f80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26f83c; end: 10b26f843; -[SCRequestTask numOfRequestAttemptsCancelled] */

undefined8 FUN_10b26f83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b26f844; end: 10b26f84b; -[SCRequestTask setNumOfRequestAttemptsPaused:] */

void FUN_10b26f844(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b26f84c; end: 10b26f853; -[SCRequestTask success] */

undefined1 FUN_10b26f84c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b26f854; end: 10b26f85b; -[SCRequestTask forcedRetry] */

undefined1 FUN_10b26f854(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b26f85c; end: 10b26f863; -[SCRequestTask nativeHttpRequestKey] */

undefined8 FUN_10b26f85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b26f864; end: 10b26f86b; -[SCRequestTask nativeRequest] */

undefined8 FUN_10b26f864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b26f86c; end: 10b26f89b; -[SCRequestTask setNativeRequest:] */

void FUN_10b26f86c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b26f89c; end: 10b26f8b3; -[SCRequestTask cancelTaskInNNMDelegate] */

void FUN_10b26f89c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b26f8b4; end: 10b26f8b7; -[SCRequestTaskLogger taskDidSent:] */

void FUN_10b26f8b4(void)

{
  return;
}



/* Entry: 10b26f8b8; end: 10b26f8bb; -[SCRequestTaskLogger taskDidRun:] */

void FUN_10b26f8b8(void)

{
  return;
}



/* Entry: 10b26f8bc; end: 10b26f8bf; -[SCRequestTaskLogger taskDidPause:] */

void FUN_10b26f8bc(void)

{
  return;
}



/* Entry: 10b26f8c0; end: 10b26f9c7; -[SCRequestTaskLogger _shouldTraceTask:] */

bool FUN_10b26f8c0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c234e80();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c136d60();
      if (uVar3 == 0) {
        bVar1 = true;
      }
      else {
        uVar3 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c136d60();
        if (uVar4 == 6) {
          bVar1 = true;
        }
        else {
          uVar4 = param_3;
          func_0x00010c134680(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c136d60();
          bVar1 = uVar5 == 3;
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    else {
      bVar1 = true;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b26f9c8; end: 10b26fa33; -[SCRequestTaskLogger _orderedJSONObjectFromDictionary:] */

void FUN_10b26f9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,2,&uStack_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b26fa34; end: 10b26facb;  */

void FUN_10b26fa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x000107c2bf40();
  if ((int)uVar1 == 0) {
    FUN_10b27f494(param_1,param_4,param_3,1);
  }
  else {
    FUN_10b27f220(param_1,param_4,param_2,param_3,1);
  }
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b26facc; end: 10b26fbcf; -[SCRequestTaskPool boostTaskIfNecessary:] */

void FUN_10b26facc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_3 == lVar4) {
    lVar1 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e9a0(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010befbda0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26fbd0; end: 10b26fc13; -[SCRequestTaskPool allTasks] */

void FUN_10b26fbd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26a9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26fc14; end: 10b26fd1f; -[SCRequestTaskPool setCurrentDisplayContext:] */

void FUN_10b26fc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c26a9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97ce0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26fd20; end: 10b26fd27; -[SCRequestTaskPool currentDisplayContext] */

undefined8 FUN_10b26fd20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b26fd28; end: 10b26fd57; -[SCRequestTaskPool .cxx_destruct] */

void FUN_10b26fd28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b26fd58; end: 10b26fd63; -[SCNetworkDeps nativeCOF] */

void FUN_10b26fd58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10b26fd64; end: 10b26fd6f; -[SCNetworkDeps grapheneRegistry] */

void FUN_10b26fd64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 10b26fd70; end: 10b26fe17; -[SCNetworkDeps .cxx_destruct] */

void FUN_10b26fd70(long param_1)

{
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



/* Entry: 10b26fe18; end: 10b26fe1f; -[SCNetworkManager submitRequest:authenticator:progressiveUpdateQueue:progressiveUpdateBlock:] */

void FUN_10b26fe18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_submitRequest_authenticator_prog_112675788);
  return;
}



/* Entry: 10b26fe20; end: 10b26fe27; -[SCNetworkManager cancelRequestWithKey:] */

void FUN_10b26fe20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelRequestWithKey__1125a9540);
  return;
}



/* Entry: 10b26fe28; end: 10b26fe2f; -[SCNetworkManager cancelRequestWithKey:cancelReason:] */

void FUN_10b26fe28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelRequestWithKey_cancelReaso_1125a9548);
  return;
}



/* Entry: 10b26fe30; end: 10b26fe37; -[SCNetworkManager cancelQueuedRequestWithKey:] */

void FUN_10b26fe30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelQueuedRequestWithKey__1125a94c8);
  return;
}



/* Entry: 10b26fe38; end: 10b26fe3f; -[SCNetworkManager cancelRequestsWithContext:] */

void FUN_10b26fe38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelRequestsWithContext__1125a9570);
  return;
}



/* Entry: 10b26fe40; end: 10b26fe47; -[SCNetworkManager cancelRequestsWithContext:cancelReason:] */

void FUN_10b26fe40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelRequestsWithContext_cancel_1125a9578);
  return;
}



/* Entry: 10b26fe48; end: 10b26fe5b; -[SCNetworkManager boostRequestWithKey:toHigherPriority:] */

void FUN_10b26fe48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (2 < param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_handleUserInitiatedRequestWithKe_1125d25d0);
    return;
  }
  return;
}



/* Entry: 10b26fe5c; end: 10b26fe6f; -[SCNetworkManager boostRequestWithKey:toHigherConnectivity:] */

void FUN_10b26fe5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf01470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_allowRequestRunOnWwanWithKey__11259dec0);
    return;
  }
  return;
}



/* Entry: 10b26fe70; end: 10b26fe77; -[SCNetworkManager updateRequestWithKey:toPriority:importance:connectivity:] */

void FUN_10b26fe70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateRequestWithKey_toPriority__11267ff40);
  return;
}



/* Entry: 10b26fe78; end: 10b26ff0f; -[SCNetworkManager updateRequestWithKey:toPriority:importance:connectivity:pageId:] */

void FUN_10b26fe78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0df760(puVar1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289480(uVar2,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b26ff10; end: 10b26ff17; -[SCNetworkManager contextsWithBlock:] */

void FUN_10b26ff10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_contextsWithBlock__1125b1778);
  return;
}



/* Entry: 10b26ff18; end: 10b26ff1f; -[SCNetworkManager setContexts:withRequestManagerMode:] */

void FUN_10b26ff18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c183610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setContexts_withRequestManagerMo_11263e7a0);
  return;
}


