/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10904a81c; end: 10904a857;  */

void FUN_10904a81c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd13a0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904a858; end: 10904aa03; -[SCManagedVideoCapturerImpl _beginAudioQueueRecordingWithPosition:speedRate:completeHandler:] */

void FUN_10904a858(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar7 = param_1;
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010bebc620();
  if ((uVar1 & 1) == 0) {
    func_0x00010bddb500(param_2);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x80) = uVar7;
    lVar2 = param_2 + 0x1e8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf28f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0f240();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (((int)lVar6 == 0) ||
       ((uVar1 = param_2, func_0x00010be2fe80(), (uVar1 & 1) == 0 &&
        (uVar1 = param_2, func_0x00010bdd0c80(), (uVar1 & 1) == 0)))) {
      _objc_initWeak(auStack_68,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x1c0);
      _objc_copyWeak(auStack_80,auStack_68);
      uStack_78 = param_4;
      uStack_70 = param_1;
      _objc_retain(param_5);
      func_0x00010c0fc020(uVar7);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10904aa04; end: 10904aa47;  */

void FUN_10904aa04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bebf7e0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904aa48; end: 10904ad17; -[SCManagedVideoCapturerImpl _startAudioQueueRecordingWithPosition:speedRate:completeHandler:] */

void FUN_10904aa48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  uVar12 = param_1;
  _objc_retain(param_5);
  lVar1 = param_2 + 0x1e8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0f220();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bea20a0(param_2);
  uVar5 = param_2 + 0x1e8;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf0f280();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    _objc_release(uVar11);
  }
  else {
    puVar10 = PTR_PTR_1126dd108;
    _objc_alloc_init();
    uVar11 = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined **)(param_2 + 0x1b0) = puVar10;
    _objc_release(uVar11);
    if (*(char *)(param_2 + 0x26a) == '\x01') {
      puVar10 = PTR_PTR_1126dd108;
      _objc_alloc_init();
      goto LAB_10904aba0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_10904aba0:
  uVar11 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined **)(param_2 + 0x1b8) = puVar10;
  _objc_release(uVar11);
  _objc_initWeak(auStack_78,param_2);
  lVar1 = param_2;
  func_0x00010bf0ee40(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x1e8;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afa0();
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_88 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_5);
  func_0x00010bf17c20(uVar12,param_1,lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  return;
}



/* Entry: 10904ad18; end: 10904ad83;  */

void FUN_10904ad18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2eaa0(*(undefined8 *)(param_1 + 0x30),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10904ad84; end: 10904af1b; -[SCManagedVideoCapturerImpl _audioRecordingCompleteWithBlock:speedRate:devicePosition:error:] */

void FUN_10904ad84(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf3ec40();
  lVar2 = param_2;
  func_0x00010beb2860();
  if (((int)lVar2 == 0) || ((*(ulong *)(param_2 + 0x298) & 0xfffffffffffffffe) != 2)) {
    (**(code **)(param_4 + 0x10))(param_4,param_6);
  }
  else {
    puVar3 = PTR_PTR_1126aed60;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c27cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_initWeak(auStack_58,param_2);
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_68 = param_1;
    uStack_60 = uVar1;
    _objc_retain(puVar4);
    _objc_retain(param_4);
    func_0x00010be97040(param_2);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10904af1c; end: 10904b0d3;  */

void FUN_10904af1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x20) + 0x1e8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afa0();
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  _objc_copyWeak(auStack_80,param_2 + 0x38);
  uStack_78 = *(undefined8 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar7);
  func_0x00010bf17c20(param_1,uVar9,lVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 10904b0d4; end: 10904b183;  */

void FUN_10904b0d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x2b8);
    *(undefined8 *)(lVar1 + 0x2b8) = param_2;
    _objc_release(uVar2);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010be2f580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar4);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10904b184; end: 10904b2db; -[SCManagedVideoCapturerImpl _appendInfo:forInfoKey:toError:] */

void FUN_10904b184(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
                  undefined *param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_5 != (undefined *)0x0) &&
      (ppuVar1 = param_3, func_0x00010c08fa60(), ppuVar1 != (undefined **)0x0)) &&
     (lVar2 = param_4, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = param_5;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = param_5;
      func_0x00010c292820(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      ppuVar5 = param_3;
      func_0x00010c08fa60();
      ppuVar1 = &PTR____CFConstantStringClassReference_110dcf238;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar1 = param_3;
      }
      func_0x00010c1d0640(puVar4,param_2,ppuVar1,param_4);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar6 = param_5;
      func_0x00010bf87dc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_5;
      func_0x00010bf3ec40(param_5);
      func_0x00010bf99240(puVar3,param_2,puVar6,puVar7,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar4);
      goto LAB_10904b2ac;
    }
  }
  _objc_retain(param_5);
  puVar3 = param_5;
LAB_10904b2ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10904b2dc; end: 10904b4a7; -[SCManagedVideoCapturerImpl _retryRequestRecordingWithCompleteHandler:] */

void FUN_10904b2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar1);
  }
  lVar2 = param_1;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf46560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  puVar4 = puVar1;
  func_0x00010bf47660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar4;
  _objc_release(uVar5);
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10904b4a8; end: 10904b537;  */

void FUN_10904b4a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x2b0);
    *(long *)(lVar1 + 0x2b0) = param_2;
    _objc_release(uVar2);
    if (param_2 != 0) {
      func_0x00010c0b80e0(*(undefined8 *)(lVar1 + 0x168));
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10904b538; end: 10904b673; -[SCManagedVideoCapturerImpl _handleSessionContentionWithBlock:] */

bool FUN_10904b538(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x2a0) == 0) {
    bVar4 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010bdc50e0();
    iVar1 = (int)uVar2;
    bVar4 = iVar1 == 0x77686174 || (iVar1 == 0x21707269 || iVar1 == 0x73697269);
    if ((iVar1 == 0x21707269 || iVar1 == 0x77686174) || iVar1 == 0x73697269) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          *(undefined8 *)PTR__NSOSStatusErrorDomain_110345590,uVar2 & 0xffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10904b674;
      puStack_60 = &UNK_11084a9e8;
      uStack_58 = param_1;
      puStack_50 = puVar3;
      _objc_retain(param_3);
      uStack_48 = param_3;
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(uVar5,param_2,&puStack_78);
      _objc_release(uStack_48);
      _objc_release(puStack_50);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10904b674; end: 10904b6b7;  */

void FUN_10904b674(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x2a8);
  *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010904b6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10904b6b8; end: 10904b86b; -[SCManagedVideoCapturerImpl _attemptMicReactivationWithCompleteHandler:] */

undefined8 FUN_10904b6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x2a0) == 0) {
    uVar8 = 0;
    goto LAB_10904b844;
  }
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0656e0();
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = param_1 + 0x1e8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf28f80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf0f260();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar7 != 0) {
      func_0x00010c162480(puVar1,param_2,1);
      puVar2 = puVar1;
      func_0x00010c0656e0();
      if (((ulong)puVar2 & 1) != 0) goto LAB_10904b70c;
    }
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        *(undefined8 *)PTR__NSOSStatusErrorDomain_110345590,0x626b7442,0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10904b86c;
    puStack_70 = &UNK_11084a9e8;
    lStack_68 = param_1;
    puStack_60 = puVar2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar8,param_2,&puStack_88);
    _objc_release(uStack_58);
    _objc_release(puStack_60);
    _objc_release(puVar2);
    uVar8 = 1;
  }
  else {
LAB_10904b70c:
    uVar8 = 0;
  }
  _objc_release(puVar1);
LAB_10904b844:
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10904b86c; end: 10904b8af;  */

void FUN_10904b86c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x2a8);
  *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010904b8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10904b8b0; end: 10904b8b7; -[SCManagedVideoCapturerImpl sampleFrameWithCompletionHandler:] */

void FUN_10904b8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c149830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x168),PTR_s_sampleNextFrame__112630028);
  return;
}



/* Entry: 10904b8b8; end: 10904b927; -[SCManagedVideoCapturerImpl setMusicSyncInfo:] */

void FUN_10904b8b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_2 + 0x260) = param_4;
  _objc_release(uVar1);
  if (((*(char *)(param_2 + 0x218) == '\x01') && (*(long *)(param_2 + 0x228) != 0)) &&
     (func_0x00010c0d35c0(), param_1 < 0.0)) {
    func_0x00010c100ea0(param_4);
    func_0x00010c1ca060(*(undefined8 *)(param_2 + 0x228));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10904b928; end: 10904ba27; -[SCManagedVideoCapturerImpl videoWriterDidFailWritingWithError:callsite:] */

void FUN_10904b928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10904ba28; end: 10904ba5b;  */

void FUN_10904ba28(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee91e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904ba5c; end: 10904bb57; -[SCManagedVideoCapturerImpl _videoWriterDidFailWritingWithError:callsite:] */

void FUN_10904ba5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bef0fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
  uVar4 = *(undefined8 *)(param_1 + 0x278);
  _objc_retain(uVar2);
  func_0x00010c128960(uVar4);
  func_0x00010be051c0(param_1);
  func_0x00010bddf3e0(param_1);
  *(undefined8 *)(param_1 + 0x298) = 4;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  func_0x00010c0b80e0(*(undefined8 *)(param_1 + 0x168),param_2,param_1,param_3,1,lVar1);
  func_0x00010bee8a80(param_1,param_2,*(undefined8 *)(param_1 + 0x38),lVar1,uVar2,uVar3,param_4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904bb58; end: 10904bc5b; -[SCManagedVideoCapturerImpl _willStopRecording] */

void FUN_10904bb58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010c252d60();
  if (lVar1 == 3) {
    lVar1 = param_1;
    func_0x00010bf293a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1fa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    *(undefined **)(param_1 + 0x138) = puVar3;
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x168);
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010bfbc3e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_1;
    func_0x00010bef0fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8120(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),uVar5,
                        param_2,param_1,uVar4,uVar6,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10904bc5c; end: 10904c0ef; -[SCManagedVideoCapturerImpl _stopRecording] */

void FUN_10904bc5c(ulong param_1,undefined1 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *unaff_x24;
  undefined8 *puVar12;
  undefined1 auStack_138 [8];
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  uint uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar12 = &uStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bf293a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(uVar8);
  _objc_release(uVar2);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)PTR__kCFAbsoluteTimeIntervalSince1970_11034ab70;
  lVar7 = *(long *)(param_1 + 0x138);
  _objc_retain(lVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  _objc_release(uVar3);
  uVar1 = *(uint *)(param_1 + 0x100);
  uVar9 = (ulong)uVar1;
  uVar2 = param_1;
  func_0x00010be44280();
  uVar8 = param_1;
  if ((int)uVar2 == 0) {
    func_0x0001091a2620();
    if ((uVar2 == 3) ||
       (uVar2 = param_1, func_0x00010c252d60(), puVar5 = PTR__OBJC_CLASS___NSError_1126ae858,
       uVar2 == 2)) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f1cf38;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110f1cf58;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
    func_0x00010bef0fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be051c0(param_1);
    uVar9 = *(ulong *)(param_1 + 0x150);
    _objc_retain(uVar9);
    ppuVar10 = *(undefined ***)(param_1 + 0x1e0);
    func_0x00010bddf3e0(param_1);
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar5 = PTR_PTR_1126aed60;
      func_0x00010c0d3da0(PTR_PTR_1126aed60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1288c0();
      _objc_release(puVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release(uVar3);
    }
    unaff_x24 = (undefined *)(param_1 + 0x38);
    func_0x00010bf43ca0(lVar7);
    func_0x00010bee8a80(param_1);
    puVar12 = (undefined8 *)0x1;
    func_0x00010c20a2c0(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  else {
    func_0x00010c20a2c0(param_1);
    uVar2 = param_1;
    func_0x00010be401c0();
    if ((uVar2 & 1) == 0) {
      func_0x00010be051c0(param_1);
      func_0x00010bef0fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(ulong *)(param_1 + 0x150);
      ppuVar10 = *(undefined ***)(param_1 + 0x1e0);
      _objc_retain(uVar9);
      func_0x00010bddf3e0(param_1);
      func_0x00010c20a2c0(param_1);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110f1cef8;
      unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined8 *)(param_1 + 0x38);
      uVar3 = *puVar12;
      *puVar12 = puVar5;
      _objc_release(uVar3);
      _objc_release(unaff_x24);
      func_0x00010bf43ca0(lVar7);
      puVar12 = (undefined8 *)*puVar12;
      func_0x00010bee8a80(param_1);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    else {
      _objc_initWeak(auStack_90,param_1);
      uVar8 = *(ulong *)(param_1 + 0x18);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10904c0f0;
      puStack_b0 = &UNK_110ad6300;
      ppuVar10 = &puStack_c8;
      param_2 = auStack_90;
      _objc_copyWeak(auStack_a0);
      uStack_98 = uVar1;
      _objc_retain(lVar7);
      uStack_d8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_e0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_d0 = *(undefined8 *)(param_1 + 0xf8);
      lStack_a8 = lVar7;
      func_0x00010bfaff40(uVar8);
      _objc_release(lStack_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_90);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar10 + 5);
  _objc_destroyWeak(auStack_90);
  lVar6 = lVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10904c0f0;
  puStack_120 = unaff_x24;
  ppuStack_118 = ppuVar10;
  uStack_110 = uVar9;
  uStack_108 = uVar8;
  uStack_100 = param_1;
  lStack_f8 = lVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  lVar7 = lVar6 + 0x28;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)(lVar7 + 0x28);
    _objc_copyWeak(auStack_138,lVar6 + 0x28);
    uStack_128 = *(undefined4 *)(lVar6 + 0x30);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    _objc_retain(uVar3);
    puStack_130 = param_2;
    _objc_retain(puVar12);
    func_0x00010c0f88c0(uVar11);
    _objc_release(puVar12);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_138);
  }
  _objc_release(lVar7);
  _objc_release(puVar12);
  return;
}



/* Entry: 10904c0f0; end: 10904c1f3;  */

void FUN_10904c0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    uStack_48 = *(undefined4 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = param_2;
    _objc_retain(param_3);
    func_0x00010c0f88c0(uVar3);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10904c1f4; end: 10904c22f;  */

void FUN_10904c1f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee91c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904c230; end: 10904c337; -[SCManagedVideoCapturerImpl stopRecordingAsynchronously] */

void FUN_10904c230(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  lVar1 = param_2;
  func_0x00010bf293a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1fa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x00010c0f88c0(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10904c338; end: 10904c36b;  */

void FUN_10904c338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec3800(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904c36c; end: 10904c42f; -[SCManagedVideoCapturerImpl _stopRecordingAsynchronouslyWithStopTime:] */

void FUN_10904c36c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_2 + 0x50) = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010beeb420();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar2;
  func_0x00010c0f7fe0(0x3ff0000000000000,uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10904c430; end: 10904c477;  */

void FUN_10904c430(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + 0x58))) {
    func_0x00010bec37c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904c478; end: 10904c51f; -[SCManagedVideoCapturerImpl cancelRecordingAsynchronously] */

void FUN_10904c478(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10904c520; end: 10904c54b;  */

void FUN_10904c520(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904c54c; end: 10904c62b; -[SCManagedVideoCapturerImpl addTimedTask:] */

void FUN_10904c54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x104) = 1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10904c62c; end: 10904c65f;  */

void FUN_10904c62c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc89c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904c660; end: 10904c6c3; -[SCManagedVideoCapturerImpl _addTimedTask:] */

void FUN_10904c660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126dd110;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x108);
  }
  func_0x00010befbf80(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10904c6c4; end: 10904c713; -[SCManagedVideoCapturerImpl _isStatusReadyForStopRecord] */

bool FUN_10904c6c4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001091a2620();
  lVar3 = lVar2;
  func_0x0001091a2620();
  bVar1 = false;
  if ((lVar2 != 3) && (lVar3 != 4)) {
    func_0x00010c252d60(param_1);
    bVar1 = param_1 == 3;
  }
  return bVar1;
}



/* Entry: 10904c714; end: 10904c74b; -[SCManagedVideoCapturerImpl _isEndSessionTimeValidForStopRecord] */

byte FUN_10904c714(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001091a2620();
  if (lVar2 == 2) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xf4) & 1;
  }
  return bVar1;
}



/* Entry: 10904c74c; end: 10904c7f7; -[SCManagedVideoCapturerImpl clearTimedTasks] */

void FUN_10904c74c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x104) = 0;
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10904c7f8; end: 10904c833;  */

void FUN_10904c7f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x108) != 0)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904c834; end: 10904c8bf; -[SCManagedVideoCapturerImpl _cleanup] */

void FUN_10904c834(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf39f80(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar4 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0x100) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x268) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  func_0x00010be92d60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf3a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x198),PTR_s_cleanupPixelBufferPool_1125ac2d0);
  return;
}



/* Entry: 10904c8c0; end: 10904c903; -[SCManagedVideoCapturerImpl _resetAudioConfigLogging] */

void FUN_10904c8c0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x78) = 0x7ff0000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0x7ff0000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0x7ff0000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0x7ff0000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x7ff0000000000000;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined ***)(param_1 + 0xa0) = &PTR____CFConstantStringClassReference_110dabe78;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10904c904; end: 10904ca0f; -[SCManagedVideoCapturerImpl _disposeAudioRecording] */

void FUN_10904c904(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c123d80(*(undefined8 *)(param_1 + 0x1c0));
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010bf0ee40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar3);
  func_0x00010bf86dc0(lVar1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 10904ca10; end: 10904ca7f;  */

void FUN_10904ca10(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904ca80; end: 10904caeb; -[SCManagedVideoCapturerImpl _audioQueueDiagnosticsSnapshot] */

void FUN_10904ca80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107c318f8();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf0f940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10904caec; end: 10904cd27; -[SCManagedVideoCapturerImpl _audioInputStateSnapshotAtRecordingEndWithActiveMicrophoneMode:] */

void FUN_10904caec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  ppuVar1 = (undefined **)PTR_PTR_1126aed60;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c066460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar4;
  func_0x00010c104100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dabe78;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  func_0x00010c1d0640(puVar5,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110f1cf98);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar4;
  func_0x00010c159540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010bf645c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dabe78;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = ppuVar6;
  }
  func_0x00010c1d0640(puVar5,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110f1cfb8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  puVar7 = PTR_PTR_1126dd0f8;
  func_0x00010c0d4fa0(PTR_PTR_1126dd0f8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_2,puVar7,&PTR____CFConstantStringClassReference_110f1cfd8);
  _objc_release(puVar7);
  ppuVar3 = ppuVar4;
  func_0x00010c159540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c263220();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dabe78;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar2 = ppuVar8;
  }
  func_0x00010c1d0640(puVar5,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110f1cff8);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  puVar7 = PTR_PTR_1126dd0f8;
  puVar9 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010c106d60(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
  func_0x00010c0d4fa0(puVar7,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5,param_2,puVar7,&PTR____CFConstantStringClassReference_110f1d018);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10904cd28; end: 10904ceeb; -[SCManagedVideoCapturerImpl _recordingEndAVSyncInfoExtrasWithActiveMicrophoneMode:] */

void FUN_10904cd28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar3 = param_1;
  func_0x00010bdd1160();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010bf12500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf0ede0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1b8);
    func_0x00010c245e40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f1cdb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,lVar4,&PTR____CFConstantStringClassReference_110f1cdb8);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f1cd98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,lVar4,&PTR____CFConstantStringClassReference_110f1cd98);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f1ce58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_2,lVar4,&PTR____CFConstantStringClassReference_110f1ce58);
    _objc_release(lVar4);
    puVar6 = puVar5;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c1d0640(lVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110f1d038);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
  lVar4 = lVar1;
  func_0x00010bf51e00(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10904ceec; end: 10904cf53; -[SCManagedVideoCapturerImpl _setAudioQueueDiagnosticsEnabled:] */

void FUN_10904ceec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107c318f8();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c16c120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10904cf54; end: 10904d0a7; -[SCManagedVideoCapturerImpl _checkVideoSizeForURL:] */

undefined1  [16]
FUN_10904cf54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_90 [48];
  
  if (*(char *)(param_3 + 0x201) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29b220(PTR_PTR_1126b0010,param_4,puVar1,1);
    puVar2 = puVar1;
    uVar4 = param_1;
    uVar5 = param_2;
    func_0x00010c279200(puVar1,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
      uVar7 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      func_0x00010c0d5d20(puVar3);
      func_0x00010c106f40(auStack_90,puVar3);
      _CGRectApplyAffineTransform(uVar6,uVar7,uVar4,uVar5,auStack_90);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c29b260(PTR_PTR_1126b0010,param_4,param_5,1);
  }
  func_0x00010be45800(param_1,param_2);
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  if ((int)param_3 == 0) {
    uVar5 = param_2;
    uVar4 = param_1;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 10904d0a8; end: 10904d0e7; -[SCManagedVideoCapturerImpl _isVideoSizeZero:] */

bool FUN_10904d0a8(double param_1,double param_2,long param_3)

{
  func_0x0001091a2620();
  return param_3 == 5 || (param_1 == 0.0 || param_2 == 0.0);
}



/* Entry: 10904d0e8; end: 10904d22f; -[SCManagedVideoCapturerImpl _handleZeroVideoSizeForURL:videoPromise:] */

ulong FUN_10904d0e8(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f1d058;
  _objc_retain(param_5);
  func_0x00010bf72080(puVar2,param_3,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_3,&PTR____CFConstantStringClassReference_110e3c3b8,
                      0xffffffffffffff91,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined **)(param_2 + 0x38) = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar2);
  func_0x00010bf43ca0(param_5,param_3,*(undefined8 *)(param_2 + 0x38));
  _objc_release(param_5);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = param_2;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bee8a80(param_2,param_3,uVar6,uVar4,*(undefined8 *)(param_2 + 0x150),
                      *(undefined8 *)(param_2 + 0x1e0),
                      &PTR____CFConstantStringClassReference_110f1d078);
  _objc_release(uVar4);
  func_0x00010be92d60(param_2);
  func_0x00010bddf3e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar5);
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = 0;
  func_0x00010c299e00(PTR_PTR_1126b0010,param_3,puVar3,1,&lStack_c0);
  lVar1 = lStack_c0;
  _objc_retain(lStack_c0);
  uVar4 = param_2;
  func_0x00010be45780();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)uVar4 != 0) {
    if (lVar1 == 0) {
      uStack_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f1d098;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_b0,&uStack_b8,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2,param_3,&PTR____CFConstantStringClassReference_110e3c3b8,
                          0xffffffffffffff90,puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar2;
      _objc_release(uVar6);
    }
    else {
      _objc_retain(lVar1);
      puVar7 = *(undefined **)(param_2 + 0x38);
      *(long *)(param_2 + 0x38) = lVar1;
    }
    _objc_release(puVar7);
    func_0x00010bf43ca0(uVar5,param_3,*(undefined8 *)(param_2 + 0x38));
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = param_2;
    func_0x00010bef0fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8a80(param_2,param_3,uVar6,uVar4,*(undefined8 *)(param_2 + 0x150),
                        *(undefined8 *)(param_2 + 0x1e0),
                        &PTR____CFConstantStringClassReference_110f1d0b8);
    _objc_release(uVar4);
    func_0x00010be92d60(param_2);
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x0001091a2620();
  return (ulong)(param_1 <= 0.0 || uVar5 == 6);
}



/* Entry: 10904d230; end: 10904d407; -[SCManagedVideoCapturerImpl _checkAndReportVideoDurationForURL:videoPromise:] */

ulong FUN_10904d230(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_70 = 0;
  func_0x00010c299e00(PTR_PTR_1126b0010,param_3,puVar2,1,&lStack_70);
  lVar1 = lStack_70;
  _objc_retain(lStack_70);
  lVar3 = param_2;
  func_0x00010be45780();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar3 != 0) {
    if (lVar1 == 0) {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110f1d098;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&uStack_68,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4,param_3,&PTR____CFConstantStringClassReference_110e3c3b8,
                          0xffffffffffffff90,puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      *(undefined **)(param_2 + 0x38) = puVar4;
      _objc_release(uVar6);
    }
    else {
      _objc_retain(lVar1);
      puVar5 = *(undefined **)(param_2 + 0x38);
      *(long *)(param_2 + 0x38) = lVar1;
    }
    _objc_release(puVar5);
    func_0x00010bf43ca0(param_5,param_3,*(undefined8 *)(param_2 + 0x38));
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    lVar3 = param_2;
    func_0x00010bef0fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8a80(param_2,param_3,uVar6,lVar3,*(undefined8 *)(param_2 + 0x150),
                        *(undefined8 *)(param_2 + 0x1e0),
                        &PTR____CFConstantStringClassReference_110f1d0b8);
    _objc_release(lVar3);
    func_0x00010be92d60(param_2);
  }
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x0001091a2620();
  return (ulong)(param_1 <= 0.0 || param_5 == 6);
}



/* Entry: 10904d408; end: 10904d433; -[SCManagedVideoCapturerImpl _isVideoDurationZero:] */

bool FUN_10904d408(double param_1,long param_2)

{
  func_0x0001091a2620();
  return param_1 <= 0.0 || param_2 == 6;
}



/* Entry: 10904d434; end: 10904d577; -[SCManagedVideoCapturerImpl audioCaptureSession:didOutputSampleBuffer:] */

void FUN_10904d434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf0fa80(param_1);
  func_0x00010c16c2a0(param_1);
  lVar1 = param_1;
  func_0x00010c252d60();
  if (lVar1 == 3) {
    _CMSampleBufferGetPresentationTimeStamp(&uStack_48,param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    _CMTimeGetSeconds(&uStack_60);
    func_0x00010c114b20(uVar2);
    _CFRetain(param_4);
    _objc_initWeak(&uStack_60,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = 0;
    _objc_copyWeak(auStack_78,&uStack_60);
    uStack_68 = param_4;
    func_0x00010c0f88c0(uVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(&uStack_60);
  }
  else {
    func_0x00010bf0fa40(param_1);
    func_0x00010c16c280(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10904d578; end: 10904d5c3;  */

void FUN_10904d578(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010be25fc0(lVar1);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904d5c4; end: 10904d6a3; -[SCManagedVideoCapturerImpl startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_10904d5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x160) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10904d6a4; end: 10904d74f;  */

void FUN_10904d6a4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10904d750; end: 10904d7a7;  */

void FUN_10904d750(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10904d7a8; end: 10904d7d3; -[SCManagedVideoCapturerImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10904d7a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x160));
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10904d7d4; end: 10904dad7; -[SCManagedVideoCapturerImpl _didReceiveManagedVideoDataSourceEvent:devicePosition:] */

void FUN_10904d7d4(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c252d60();
  if (((uVar2 & 0xfffffffffffffffe) == 2) &&
     (puVar3 = param_3, func_0x00010c07bf20(), (int)puVar3 != 0)) {
    func_0x00010c1494c0(param_3);
    _CFRetain();
    _objc_retain(param_3);
    dVar7 = *(double *)(param_1 + 0x110);
    bVar1 = false;
    if ((dVar7 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false,
       !NAN(*(double *)(param_1 + 0x118)) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = *(double *)(param_1 + 0x118) == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if ((bVar1) && (puVar3 = param_3, func_0x00010c1494c0(), puVar3 != (undefined *)0x0)) {
      puVar3 = param_3;
      func_0x00010c1494c0();
      _CMSampleBufferGetImageBuffer();
      puVar4 = puVar3;
      _CVPixelBufferGetWidth();
      _CVPixelBufferGetHeight();
      dVar7 = (double)puVar4;
      *(double *)(param_1 + 0x110) = dVar7;
      *(double *)(param_1 + 0x118) = (double)puVar3;
    }
    puVar3 = param_3;
    func_0x00010c1494c0();
    _CMSampleBufferGetImageBuffer();
    if (*(char *)(param_1 + 0x201) == '\x01') {
      func_0x00010c2a5040(*(undefined8 *)(param_1 + 0x148));
      dVar8 = dVar7;
      func_0x00010bfe0640(*(undefined8 *)(param_1 + 0x148));
    }
    else {
      puVar4 = puVar3;
      _CVPixelBufferGetWidth();
      dVar7 = (double)puVar4;
      _CVPixelBufferGetHeight();
      dVar8 = (double)puVar3;
    }
    dVar9 = 0.0;
    if (dVar7 != 0.0) {
      if (dVar8 == 0.0) {
        dVar9 = INFINITY;
      }
      else {
        dVar9 = dVar7 / dVar8;
      }
    }
    lVar6 = *(long *)(param_1 + 0x198);
    func_0x00010c1494c0(param_3);
    func_0x00010bf521e0(dVar9);
    puVar3 = param_3;
    if (lVar6 != 0) {
      func_0x00010c1494c0(param_3);
      _CFRelease();
      puVar3 = PTR_PTR_1126d3350;
      _objc_alloc();
      func_0x00010c041320();
      _objc_release(param_3);
    }
    _objc_initWeak(auStack_58,param_1);
    if (uVar2 == 2) {
      if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_10904dad8;
        puStack_70 = &UNK_110841fb0;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(puVar3);
        puStack_68 = puVar3;
        func_0x00010c0f88c0(uVar5);
        _objc_release(puStack_68);
        _objc_destroyWeak(auStack_60);
      }
    }
    else {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x2020000000;
      puVar4 = puVar3;
      func_0x00010c1494c0();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uStack_b8 = 0;
      puStack_90 = puVar4;
      _objc_copyWeak(auStack_c0,auStack_58);
      uStack_b0 = param_4;
      func_0x00010c0f88c0(uVar5);
      _objc_destroyWeak(auStack_c0);
      __Block_object_dispose(&uStack_a8,8);
    }
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10904dad8; end: 10904dc0b;  */

void FUN_10904dad8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c1494c0();
    if (lVar2 != 0) {
      func_0x00010c1494c0(*(undefined8 *)(param_1 + 0x20));
      _CFRelease();
    }
  }
  else {
    func_0x00010bf06a60(*(undefined8 *)(lVar1 + 400),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904dc0c; end: 10904dc1b;  */

void FUN_10904dc0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2d8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleOutputSampleBuffer_device_112568fd0,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10904dc1c; end: 10904dc8b;  */

void FUN_10904dc1c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x288);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d220(uVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10904dc8c; end: 10904dda7; -[SCManagedVideoCapturerImpl _generatePlaceholderImageWithPixelBuffer:] */

void FUN_10904dc8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CVPixelBufferRetain();
  if (param_3 != 0) {
    lVar2 = param_3;
    _CVPixelBufferGetHeight();
    lVar3 = param_3;
    _CVPixelBufferGetWidth();
    if ((lVar3 != 0) && (lVar2 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x208);
      func_0x000107c2aaf8(uVar4,*(undefined8 *)(param_1 + 0x210));
      _objc_initWeak(auStack_48,param_1);
      if (lRam0000000113730788 != -1) {
        func_0x000107c27d9c(0x113730788,&PTR___NSConcreteGlobalBlock_110ad6420);
      }
      uVar1 = uRam0000000113730780;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10904dda8;
      puStack_70 = &UNK_1108e54a8;
      _objc_retain(uRam0000000113730780);
      _objc_copyWeak(auStack_68,auStack_48);
      lStack_60 = param_3;
      uStack_58 = uVar4;
      uStack_50 = param_2;
      func_0x000107c27d8c(uVar1,&puStack_88);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 10904dda8; end: 10904decf;  */

void FUN_10904dda8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe96e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_109045c68(*(undefined8 *)(lVar1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(puVar3);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0f88c0(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10904ded0; end: 10904df33;  */

void FUN_10904ded0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x298) == 3)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar3;
    _objc_release(uVar2);
  }
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904df34; end: 10904e017; -[SCManagedVideoCapturerImpl _processVideoSampleBuffer:] */

void FUN_10904df34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    _CMSampleBufferGetPresentationTimeStamp(&uStack_48,param_3);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_80 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xd8);
    puVar1 = &uStack_60;
    _CMTimeCompare(puVar1,&uStack_80);
    _CMSampleBufferGetImageBuffer();
    if ((param_3 != 0) && (func_0x00010bdc8f80(param_1), (int)puVar1 == 0)) {
      func_0x00010be1b940(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    uStack_98 = *(undefined8 *)(param_1 + 0xd0);
    uStack_a0 = *(undefined8 *)(param_1 + 200);
    uStack_90 = *(undefined8 *)(param_1 + 0xd8);
    _CMTimeSubtract(&uStack_60,&uStack_80,&uStack_a0);
    func_0x00010c0b8040(uVar2);
  }
  return;
}



/* Entry: 10904e018; end: 10904e127; -[SCManagedVideoCapturerImpl _processAudioSampleBuffer:] */

void FUN_10904e018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_3c;
  undefined8 uStack_38;
  
  func_0x00010c0b7da0(*(undefined8 *)(param_1 + 0x140),param_2,param_1,param_3);
  func_0x00010bfb2060(&uStack_48,param_1);
  if ((uStack_3c & 1) == 0) {
    _CMSampleBufferGetPresentationTimeStamp(&uStack_48,param_3);
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    uStack_98 = *(undefined8 *)(param_1 + 0xd0);
    uStack_a0 = *(undefined8 *)(param_1 + 200);
    uStack_90 = *(undefined8 *)(param_1 + 0xd8);
    _CMTimeSubtract(&uStack_60,&uStack_80,&uStack_a0);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    func_0x00010c19d880(param_1);
    func_0x00010bf293a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    _CMTimeGetSeconds(&uStack_80);
    func_0x00010c0a1fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10904e128; end: 10904e21b; -[SCManagedVideoCapturerImpl _addVideoRawDataWithPixelBuffer:] */

void FUN_10904e128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    puVar1 = PTR_PTR_1126bc3f0;
    _objc_opt_new();
    puVar2 = puVar1;
    func_0x00010bf70a80();
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(puVar1);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0xb0);
      _objc_release(puVar1);
      if (((0 < (long)uVar3) && (uVar3 % 0x5a == 0)) && (*(long *)(param_1 + 0xc0) != 0)) {
        _CVPixelBufferRetain();
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc0000000;
        pcStack_48 = FUN_10904e21c;
        puStack_40 = &UNK_110848088;
        uStack_38 = param_3;
        func_0x00010bf3fc20(*(undefined8 *)(param_1 + 0xc0),param_2,param_3,
                            *(undefined8 *)(param_1 + 0xb0),&puStack_58);
      }
    }
  }
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  return;
}



/* Entry: 10904e21c; end: 10904e223;  */

void FUN_10904e21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVPixelBufferRelease_11034a298)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10904e224; end: 10904e22b; -[SCManagedVideoCapturerImpl removeListener:] */

void FUN_10904e224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10904e22c; end: 10904e22f; -[SCManagedVideoCapturerImpl startStreamingWithAudioConfiguration:] */

void FUN_10904e22c(void)

{
  return;
}



/* Entry: 10904e230; end: 10904e233; -[SCManagedVideoCapturerImpl stopStreaming] */

void FUN_10904e230(void)

{
  return;
}



/* Entry: 10904e234; end: 10904e24f; -[SCManagedVideoCapturerImpl isStreaming] */

bool FUN_10904e234(long param_1)

{
  func_0x00010c252d60();
  return param_1 == 3;
}



/* Entry: 10904e250; end: 10904e257; -[SCManagedVideoCapturerImpl managedVideoCapturerTimeObserver:shouldProcessTimedTask:] */

undefined1 FUN_10904e250(long param_1)

{
  return *(undefined1 *)(param_1 + 0x104);
}



/* Entry: 10904e258; end: 10904e27f; -[SCManagedVideoCapturerImpl cameraCreationDelayLogger] */

void FUN_10904e258(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10904e280; end: 10904e2a7; -[SCManagedVideoCapturerImpl cameraSnapCaptureLogger] */

void FUN_10904e280(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x290);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10904e2a8; end: 10904e6df; -[SCManagedVideoCapturerImpl _startRecordingWithOutputSettings:audioConfiguration:startTime:maxDuration:speedRate:videoAspectRatio:placeholderImageAspectRatio:toURL:deviceFormat:devicePosition:sessionInfo:shouldKeepVideoSizeAsOutputSize:] */

void FUN_10904e2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  
  uVar3 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  func_0x00010c109660(*(undefined8 *)(param_6 + 0x1c0));
  _CACurrentMediaTime();
  *(undefined8 *)(param_6 + 0x240) = uVar3;
  uVar3 = *(undefined8 *)(param_6 + 0x228);
  *(undefined8 *)(param_6 + 0x228) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_6 + 0x260);
  *(undefined8 *)(param_6 + 0x260) = 0;
  _objc_release(uVar3);
  if (*(char *)(param_6 + 0x218) == '\x01') {
    puVar4 = PTR_PTR_1126dd118;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_6 + 0x228);
    *(undefined **)(param_6 + 0x228) = puVar4;
    _objc_release(uVar3);
  }
  func_0x00010c0b8180(*(undefined8 *)(param_6 + 0x168));
  *(undefined8 *)(param_6 + 8) = param_2;
  lVar5 = param_6;
  func_0x00010bdd68c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_6 + 0x148);
  *(long *)(param_6 + 0x148) = lVar5;
  _objc_release(uVar3);
  func_0x00010c20a2c0(param_6);
  if (*(long *)(param_6 + 0x68) != 0) {
    puVar4 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar4);
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_6 + 0x70) = param_4;
  _objc_initWeak(auStack_a0,param_6);
  lVar5 = param_6 + 0x170;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf0fc00();
  _objc_release(lVar6);
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(param_6 + 0xa0);
  if ((((uint)lVar7 | *(byte *)(param_6 + 0x269) ^ 1) & 1) == 0) {
    *(undefined ***)(param_6 + 0xa0) = &PTR____CFConstantStringClassReference_110dabe78;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = 0;
    puVar10 = auStack_138;
    _objc_copyWeak(puVar10,auStack_a0);
    uStack_128 = param_1;
    uStack_120 = param_3;
    uStack_118 = param_5;
    _objc_retain(param_10);
    _objc_retain(param_11);
    uStack_110 = param_12;
    _objc_retain(param_13);
    puVar8 = puVar4;
    func_0x00010bf47660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_6 + 0x68);
    *(undefined **)(param_6 + 0x68) = puVar8;
    _objc_release(uVar3);
    _objc_retain(puVar8);
    uVar3 = *(undefined8 *)(param_6 + 0x60);
    *(undefined **)(param_6 + 0x60) = puVar8;
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(param_13);
    _objc_release(param_11);
    uVar3 = param_10;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
    if (*(byte *)(param_6 + 0x269) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e09c38;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f1d0d8;
    if ((uint)lVar7 == 0) {
      ppuVar2 = ppuVar1;
    }
    *(undefined ***)(param_6 + 0xa0) = ppuVar2;
    _objc_release(uVar3);
    uVar9 = *(undefined8 *)(param_6 + 0x68);
    _objc_retain(uVar9);
    uVar3 = *(undefined8 *)(param_6 + 0x60);
    *(undefined8 *)(param_6 + 0x60) = uVar9;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)(param_6 + 0x78) = param_4;
    uVar3 = *(undefined8 *)(param_6 + 0x28);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10904e6e0;
    puStack_f0 = &UNK_11090b0b0;
    uStack_c8 = 0;
    puVar10 = auStack_d0;
    _objc_copyWeak(puVar10,auStack_a0);
    uStack_c0 = param_5;
    uStack_b8 = param_1;
    uStack_b0 = param_3;
    _objc_retain(param_10);
    uStack_e8 = param_10;
    _objc_retain(param_11);
    uStack_e0 = param_11;
    uStack_a8 = param_12;
    _objc_retain(param_13);
    uStack_d8 = param_13;
    func_0x00010c0f88c0(uVar3);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    uVar3 = uStack_e8;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar10);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 10904e6e0; end: 10904e733;  */

void FUN_10904e6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bec14e0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),lVar1,
                        param_2,*(undefined8 *)(lVar1 + 0x148),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904e734; end: 10904e7a7;  */

void FUN_10904e734(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(lVar1 + 0x78) = param_1;
    func_0x00010bdd1120(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50),
                        *(undefined8 *)(param_2 + 0x58),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10904e7a8; end: 10904e897; -[SCManagedVideoCapturerImpl _audioConfigDidCompleteWithStartTime:speedRate:placeholderImageAspectRatio:toURL:deviceFormat:devicePosition:sessionInfo:error:] */

void FUN_10904e7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_4 + 0x2a0);
  *(long *)(param_4 + 0x2a0) = param_10;
  _objc_release(uVar1);
  if (param_10 != 0) {
    func_0x00010c0b80e0(*(undefined8 *)(param_4 + 0x168),param_5,param_4,param_10,2,param_9);
  }
  *(undefined8 *)(param_4 + 0x48) = param_3;
  func_0x00010bec14e0(param_1,param_2,param_4,param_5,*(undefined8 *)(param_4 + 0x148),param_6,
                      param_7,param_8,param_9);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10904e898; end: 10904eeeb; -[SCManagedVideoCapturerImpl _startRecordingCompletionWithOutputSettings:startTime:speedRate:toURL:deviceFormat:devicePosition:sessionInfo:] */

/* WARNING: Removing unreachable block (ram,0x00010904ec80) */

void FUN_10904e898(double param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [48];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  *(double *)(param_3 + 0x90) = *(double *)(param_3 + 0x78) - param_1;
  lVar6 = param_3;
  func_0x00010c252d60();
  if (lVar6 != 2) {
LAB_10904e974:
    puVar3 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    goto LAB_10904ee90;
  }
  uVar11 = param_3 + 0x170;
  _objc_loadWeakRetained();
  uVar1 = uVar11;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0fc00();
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(param_3 + 0x60);
    lVar7 = *(long *)(param_3 + 0x68);
    _objc_release(uVar1);
    _objc_release(uVar11);
    if (lVar6 != lVar7) goto LAB_10904e974;
  }
  else {
    _objc_release(uVar1);
    _objc_release(uVar11);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x38) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)PTR__kCFAbsoluteTimeIntervalSince1970_11034ab70;
  *(undefined8 *)(param_3 + 0x50) = uVar4;
  *(undefined1 *)(param_3 + 0x20) = 0;
  if (*(char *)(param_3 + 0x201) == '\x01') {
    uVar13 = *(undefined8 *)(param_3 + 0x208);
    uVar14 = *(undefined8 *)(param_3 + 0x210);
    func_0x00010c2a5040(param_5);
    uVar12 = uVar4;
    func_0x00010bfe0640(param_5);
    func_0x000109046c94(uVar13,uVar14);
  }
  else {
    func_0x00010bfe0640(param_5);
    uVar12 = uVar4;
    func_0x00010c2a5040(param_5);
  }
  *(undefined8 *)(param_3 + 0x120) = uVar4;
  *(undefined8 *)(param_3 + 0x128) = uVar12;
  uVar4 = param_6;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_3 + 0x278);
  *(undefined8 *)(param_3 + 0x278) = uVar4;
  _objc_release(uVar12);
  uVar4 = *(undefined8 *)(param_3 + 0x278);
  func_0x00010bdc2ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(param_3 + 0xb8) = uVar4;
  _objc_release(uVar12);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bc3f0;
  _objc_opt_new();
  puVar5 = puVar3;
  func_0x00010bf70a80();
  _objc_release(puVar3);
  if ((int)puVar5 != 0) {
    lVar6 = *(long *)(param_3 + 0xc0);
    if (lVar6 == 0) {
      puVar3 = PTR_PTR_1126dd120;
      _objc_alloc();
      func_0x00010c034960();
      uVar4 = *(undefined8 *)(param_3 + 0xc0);
      *(undefined **)(param_3 + 0xc0) = puVar3;
      _objc_release(uVar4);
      lVar6 = *(long *)(param_3 + 0xc0);
    }
    func_0x00010c1094e0(lVar6);
  }
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10904eeec;
  puStack_c8 = &UNK_1108420a0;
  lStack_c0 = param_3;
  _objc_retain(param_9);
  uVar4 = param_2;
  puStack_b8 = param_9;
  func_0x00010bdd3140(param_2,param_3);
  func_0x00010c0b8080(*(undefined8 *)(param_3 + 0x168));
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar3);
  param_4 = *(long *)(param_3 + 0x210);
  func_0x000109046d14(auStack_110,*(undefined8 *)(param_3 + 0x208));
  puVar3 = PTR_PTR_1126dd128;
  _objc_alloc();
  lVar6 = param_3 + 0x1e8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afa0();
  lVar10 = param_3;
  func_0x00010c0ef100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035100(param_2,uVar4);
  _objc_retain(0);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  *(undefined **)(param_3 + 0x18) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar11 = *(ulong *)(param_3 + 0x18);
  func_0x00010c10a4a0();
  if ((uVar11 & 1) != 0) {
    func_0x00010c20a2c0(param_3);
    func_0x00010c137fe0(*(undefined8 *)(param_3 + 0x158));
    _CACurrentMediaTime();
    *(undefined8 *)(param_3 + 0x10) = param_2;
    puVar3 = puStack_b8;
    goto LAB_10904ee90;
  }
  uVar11 = *(ulong *)(param_3 + 0x18);
  func_0x00010c06ca00();
  if ((uVar11 & 1) == 0) {
    uVar11 = *(ulong *)(param_3 + 0x18);
    func_0x00010c083420();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar11 & 1) != 0) goto LAB_10904ed24;
    uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f1d138;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_10904ed24:
    uVar11 = *(ulong *)(param_3 + 0x18);
    func_0x00010c06ca00();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if ((uVar11 & 1) == 0) {
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f1d158;
      uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f1d178;
      uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  *(undefined **)(param_3 + 0x38) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar5);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x40) = 0;
  _objc_release(uVar4);
  func_0x00010bee8a80(param_3);
  func_0x00010be92d60(param_3);
  _objc_release(0);
  puVar3 = puStack_b8;
LAB_10904ee90:
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if (param_4 == 0) {
    *(undefined1 *)(*(long *)(param_5 + 0x20) + 0x268) = 1;
  }
  else {
    func_0x00010c0b80e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x168));
  }
  lVar6 = *(long *)(param_5 + 0x20);
  func_0x00010c252d60();
  if (lVar6 == 3) {
    func_0x00010c0b8060(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x168));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10904eeec; end: 10904ef5b;  */

void FUN_10904eeec(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x268) = 1;
  }
  else {
    func_0x00010c0b80e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168));
  }
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    func_0x00010c0b8060(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10904ef5c; end: 10904f05f; -[SCManagedVideoCapturerImpl _videoCaptureFailWithError:session:captureSessionID:invalidPresentationTimeCount:callsite:] */

void FUN_10904ef5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0b80c0(uVar2,param_2,param_1,param_3,param_4);
  lVar1 = param_1;
  func_0x00010bdd6b80(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1,param_2,param_5,0,0,0,0
                      ,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010be5a780(param_1,param_2,2,param_7,lVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10904f060; end: 10904f383; -[SCManagedVideoCapturerImpl _videoWriteCompletionWithSessionId:recordedVideoPromise:status:error:] */

void FUN_10904f060(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 == *(int *)(param_1 + 0x100)) {
    lVar8 = param_1;
    func_0x00010bf0ede0();
    if ((int)lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1;
      func_0x00010bdd1340();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = param_1;
    func_0x00010bf0ede0();
    if ((int)lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      func_0x00010c245e40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
    func_0x00010bef0cc0();
    lVar2 = param_1;
    func_0x00010be87b00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar9);
    lVar10 = param_1;
    func_0x00010bf0ede0();
    lVar6 = param_1;
    func_0x00010bf0f980();
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c0fc4a0();
    func_0x00010be051c0(param_1);
    _objc_initWeak(auStack_80,param_1);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10904f384;
    puStack_d8 = &UNK_110ad63c0;
    _objc_copyWeak(auStack_98,auStack_80);
    _objc_retain(param_4);
    uStack_88 = (undefined1)lVar10;
    uStack_87 = (undefined1)lVar6;
    uStack_d0 = param_4;
    _objc_retain(uVar3);
    uStack_c8 = uVar3;
    _objc_retain(lVar5);
    lStack_c0 = lVar5;
    uStack_86 = puVar4 == (undefined *)0x2;
    uStack_85 = uVar1;
    _objc_retain(lVar8);
    lStack_b8 = lVar8;
    _objc_retain(lVar2);
    lStack_b0 = lVar2;
    _objc_retain(uVar9);
    uStack_a8 = uVar9;
    uStack_90 = param_5;
    _objc_retain(param_6);
    ppuVar7 = &puStack_f0;
    uStack_a0 = param_6;
    _objc_retainBlock();
    lVar10 = *(long *)(param_1 + 0xc0);
    if (lVar10 == 0) {
      (*(code *)ppuVar7[2])(ppuVar7,0);
    }
    else {
      _objc_retain(ppuVar7);
      func_0x00010bf89740(lVar10);
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar7);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar9);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar8);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10904f384; end: 10904f747;  */

void FUN_10904f384(double param_1,double param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  
  lVar4 = param_3 + 0x58;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    func_0x00010bdde620(lVar4);
    dVar20 = *(double *)PTR__CGSizeZero_110347620;
    bVar1 = false;
    if ((param_1 == dVar20) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      func_0x00010be337e0(lVar4);
    }
    else {
      func_0x00010bddd320(lVar4);
      if (dVar20 <= 0.0) {
        func_0x00010bddf3e0(lVar4);
      }
      else {
        lVar5 = lVar4;
        func_0x00010bef0fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b5fb0;
        _objc_alloc();
        func_0x00010bf3f040(*(undefined8 *)(lVar4 + 0x148));
        func_0x00010c0613a0(dVar20);
        func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x20));
        lVar7 = lVar4;
        func_0x00010bf293a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1fa0();
        _objc_release(lVar8);
        _objc_release(lVar7);
        func_0x00010c0b8100(*(undefined8 *)(lVar4 + 0x168));
        uVar18 = *(undefined8 *)(lVar4 + 0x150);
        _objc_retain(uVar18);
        uVar16 = *(undefined8 *)(lVar4 + 0x1e0);
        uVar9 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf52f20();
        uVar10 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf52be0();
        uVar11 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf52f40();
        uVar12 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf52c00();
        uVar13 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf52bc0();
        uVar14 = *(undefined8 *)(lVar4 + 0x18);
        func_0x00010bf0f9e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = (undefined1)*(undefined8 *)(lVar4 + 0x18);
        func_0x00010c083420();
        uVar3 = (undefined1)*(undefined8 *)(lVar4 + 0x18);
        func_0x00010c06ca00();
        uVar19 = *(undefined8 *)(lVar4 + 0x278);
        _objc_retain(uVar19);
        uVar15 = *(undefined8 *)(lVar4 + 0x1c0);
        func_0x00010c278c80(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c123560();
        _objc_release(uVar15);
        func_0x00010bddf3e0(lVar4);
        uVar15 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0xc2000000;
        pcStack_138 = FUN_10904f748;
        puStack_130 = &UNK_110ad6390;
        uVar17 = *(undefined8 *)(param_3 + 0x38);
        lStack_128 = lVar4;
        uStack_120 = uVar18;
        uStack_118 = uVar14;
        uStack_110 = uVar19;
        dStack_e0 = dVar20;
        dStack_d8 = param_1;
        dStack_d0 = param_2;
        uStack_c8 = uVar9;
        uStack_c0 = uVar10;
        uStack_b8 = uVar11;
        uStack_b0 = uVar12;
        uStack_a8 = uVar13;
        uStack_90 = uVar2;
        uStack_8f = uVar3;
        _objc_retain(uVar17);
        uVar9 = *(undefined8 *)(param_3 + 0x28);
        uStack_108 = uVar17;
        _objc_retain(uVar9);
        uVar10 = *(undefined8 *)(param_3 + 0x40);
        uStack_100 = uVar9;
        _objc_retain(uVar10);
        uVar9 = *(undefined8 *)(param_3 + 0x48);
        uStack_f8 = uVar10;
        _objc_retain(uVar9);
        uStack_98 = *(undefined8 *)(param_3 + 0x60);
        uVar10 = *(undefined8 *)(param_3 + 0x50);
        uStack_f0 = uVar9;
        uStack_a0 = uVar16;
        _objc_retain(uVar10);
        uStack_e8 = uVar10;
        _objc_retain(uVar19);
        _objc_retain(uVar14);
        _objc_retain(uVar18);
        func_0x000107c27d8c(uVar15,&puStack_148);
        _objc_release(uVar15);
        _objc_release(uStack_e8);
        _objc_release(uStack_f0);
        _objc_release(uStack_f8);
        _objc_release(uStack_100);
        _objc_release(uStack_108);
        _objc_release(uStack_110);
        _objc_release(uStack_118);
        _objc_release(uStack_120);
        _objc_release(uVar19);
        _objc_release(uVar14);
        _objc_release(uVar18);
        _objc_release(puVar6);
        _objc_release(lVar5);
      }
    }
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 10904f748; end: 10904f887;  */

void FUN_10904f748(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x278);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd6b80(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),uVar2,
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28),puVar4,
                      (long)(*(double *)(param_1 + 0x68) * 1000.0),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0xb8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5a780(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10904f888; end: 10904f893;  */

void FUN_10904f888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010904f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10904f894; end: 10904fad3; -[SCManagedVideoCapturerImpl _cancelRecording] */

void FUN_10904f894(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_58 [12];
  uint uStack_4c;
  
  lVar1 = param_2;
  func_0x00010bef0fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar1 == 0) {
    dVar6 = 0.0;
  }
  else {
    func_0x00010c250f20(auStack_58,lVar1);
    dVar6 = 0.0;
    if ((uStack_4c & 1) != 0) {
      func_0x00010bf95780(auStack_58,lVar1);
      if ((uStack_4c & 1) == 0) {
        _CACurrentMediaTime();
        dVar6 = param_1;
        func_0x00010c250f20(auStack_58,lVar1);
        _CMTimeGetSeconds(auStack_58);
        dVar6 = param_1 - dVar6;
      }
      else {
        func_0x00010bf8b160(auStack_58,lVar1);
        _CMTimeGetSeconds(auStack_58);
        dVar6 = param_1;
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bdd6b80(*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128),param_2,
                      param_3,*(undefined8 *)(param_2 + 0x150),0,(long)(dVar6 * 1000.0),0,0,0,0,0,0,
                      0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5a780(param_2,param_3,3,&PTR____CFConstantStringClassReference_110f1d1d8,lVar1);
  lVar2 = param_2;
  func_0x00010c252d60();
  lVar5 = param_2;
  if (lVar2 == 3) {
    func_0x00010c20a2c0(param_2,param_3,1);
    func_0x00010be051c0(param_2);
    func_0x00010bf2f520(*(undefined8 *)(param_2 + 0x18));
    func_0x00010bef0fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddf3e0(param_2);
  }
  else {
    lVar2 = param_2;
    func_0x00010c252d60();
    if (lVar2 != 2) {
      lVar5 = *(long *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x40) = 0;
      goto LAB_10904faac;
    }
    func_0x00010bef0fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be051c0(param_2);
    func_0x00010bddf3e0(param_2);
    func_0x00010c20a2c0(param_2,param_3,1);
    if (*(long *)(param_2 + 0x68) != 0) {
      puVar3 = PTR_PTR_1126aed60;
      func_0x00010c0d3da0(PTR_PTR_1126aed60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1288c0();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_2 + 0x68) = 0;
      _objc_release(uVar4);
    }
  }
  func_0x00010c0b80a0(*(undefined8 *)(param_2 + 0x168),param_3,param_2,lVar5);
LAB_10904faac:
  _objc_release(lVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 10904fad4; end: 10904fdd7; -[SCManagedVideoCapturerImpl _handleOutputSampleBuffer:devicePosition:] */

void FUN_10904fad4(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  
  _CMSampleBufferGetPresentationTimeStamp(&dStack_68,param_4);
  _CMTimeGetSeconds(&dStack_68);
  if (*(double *)(param_2 + 0x50) < param_1) {
    func_0x00010bec37c0(param_2);
    goto LAB_10904fdb0;
  }
  lVar6 = param_2;
  func_0x00010c252d60();
  if (lVar6 != 3) goto LAB_10904fdb0;
  *(bool *)(param_2 + 0x130) = param_5 == 0;
  _CMSampleBufferGetPresentationTimeStamp(&dStack_68,param_4);
  if ((uStack_5c & 1) == 0) {
    *(long *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + 1;
  }
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 0x228);
    if (uVar5 != 0) {
      uStack_78 = CONCAT44(uStack_5c,uStack_60);
      dStack_80 = dStack_68;
      uStack_70 = uStack_58;
      _CMTimeGetSeconds(&dStack_80);
      func_0x00010c234ac0();
      if ((uVar5 & 1) != 0) goto LAB_10904fcbc;
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x1f8);
    *(undefined **)(param_2 + 0x1f8) = puVar2;
    _objc_release(uVar4);
    if ((uStack_5c & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
      uStack_78 = CONCAT44(uStack_5c,uStack_60);
      dStack_80 = dStack_68;
      uStack_70 = uStack_58;
      func_0x00010c251d40();
      if (iVar1 != 0) {
        *(ulong *)(param_2 + 0xd0) = CONCAT44(uStack_5c,uStack_60);
        *(double *)(param_2 + 200) = dStack_68;
        *(undefined8 *)(param_2 + 0xd8) = uStack_58;
        *(undefined8 *)(param_2 + 600) = uStack_58;
        *(ulong *)(param_2 + 0x250) = CONCAT44(uStack_5c,uStack_60);
        *(double *)(param_2 + 0x248) = dStack_68;
        dVar7 = dStack_68;
        _CACurrentMediaTime();
        *(double *)(param_2 + 0xe0) = dVar7;
        *(undefined1 *)(param_2 + 0x20) = 1;
        lVar6 = param_2;
        func_0x00010bf293a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = CONCAT44(uStack_5c,uStack_60);
        dStack_80 = dStack_68;
        uStack_70 = uStack_58;
        _CMTimeGetSeconds(&dStack_80);
        func_0x00010c0a1fc0(lVar3);
        _objc_release(lVar3);
        _objc_release(lVar6);
        lVar6 = param_2;
        func_0x00010bf293a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1fc0(*(undefined8 *)(param_2 + 0xe0));
        _objc_release(lVar3);
        _objc_release(lVar6);
      }
    }
  }
LAB_10904fcbc:
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if ((*(byte *)(param_2 + 0xf4) & 1) == 0) {
      *(ulong *)(param_2 + 0xf0) = CONCAT44(uStack_5c,uStack_60);
      *(double *)(param_2 + 0xe8) = dStack_68;
      uVar4 = uStack_58;
      dVar7 = dStack_68;
    }
    else {
      uStack_98 = *(undefined8 *)(param_2 + 0xf0);
      dStack_a0 = *(double *)(param_2 + 0xe8);
      uStack_90 = *(undefined8 *)(param_2 + 0xf8);
      uStack_b8 = CONCAT44(uStack_5c,uStack_60);
      dStack_c0 = dStack_68;
      uStack_b0 = uStack_58;
      _CMTimeMaximum(&dStack_80,&dStack_a0,&dStack_c0);
      *(undefined8 *)(param_2 + 0xf0) = uStack_78;
      *(double *)(param_2 + 0xe8) = dStack_80;
      uVar4 = uStack_70;
      dVar7 = dStack_80;
    }
    *(undefined8 *)(param_2 + 0xf8) = uVar4;
    _CACurrentMediaTime();
    if (dVar7 - *(double *)(param_2 + 0x10) <= *(double *)(param_2 + 8)) {
      func_0x00010bf072a0(*(undefined8 *)(param_2 + 0x18));
      func_0x00010be82840(param_2);
    }
    lVar6 = *(long *)(param_2 + 0x108);
    if (lVar6 != 0) {
      dStack_a0 = dStack_68;
      uStack_90 = uStack_58;
      uStack_b8 = *(undefined8 *)(param_2 + 0xd0);
      dStack_c0 = *(double *)(param_2 + 200);
      uStack_b0 = *(undefined8 *)(param_2 + 0xd8);
      _CMTimeSubtract(&dStack_80,&dStack_a0,&dStack_c0);
      dVar8 = *(double *)(param_2 + 0xe0);
      uStack_98 = *(undefined8 *)(param_2 + 0xd0);
      dVar7 = *(double *)(param_2 + 200);
      uStack_90 = *(undefined8 *)(param_2 + 0xd8);
      dStack_a0 = dVar7;
      _CMTimeGetSeconds(&dStack_a0);
      func_0x00010c1154e0(dVar8 - dVar7,lVar6);
    }
  }
LAB_10904fdb0:
  if (param_4 != 0) {
    _CFRelease(param_4);
  }
  return;
}



/* Entry: 10904fdd8; end: 10904ff7b; -[SCManagedVideoCapturerImpl _handleAudioOutputSampleBufferWithOptionalProcessing:] */

void FUN_10904fdd8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x298) != 3) {
    return;
  }
  if (*(char *)(param_2 + 0x20) != '\x01') {
    return;
  }
  _CACurrentMediaTime();
  if (*(double *)(param_2 + 8) < param_1 - *(double *)(param_2 + 0x10)) {
    return;
  }
  lVar2 = param_2;
  func_0x00010bf0ede0();
  lVar3 = param_2;
  func_0x00010bf0f820();
  if ((int)lVar2 == 0) {
    func_0x00010be80620(param_2);
  }
  else {
    func_0x00010c277b40(*(undefined8 *)(param_2 + 0x1b8));
    if ((int)lVar3 != 0) {
      func_0x00010be80620(param_2);
      goto LAB_10904ff58;
    }
    lVar2 = param_4;
    _CMSampleBufferGetDataBuffer();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      _CMBlockBufferGetDataLength();
      lVar5 = *(long *)(param_2 + 0x1a0);
      if (lVar5 == 0) {
LAB_10904fee4:
        *(long *)(param_2 + 0x1a8) = lVar3;
        lVar5 = lVar3;
        _malloc();
        *(long *)(param_2 + 0x1a0) = lVar5;
      }
      else if (lVar3 != *(long *)(param_2 + 0x1a8)) {
        _free(lVar5);
        goto LAB_10904fee4;
      }
      _CMBlockBufferCopyDataBytes(lVar2,0,lVar3,lVar5);
      if ((int)lVar2 != 0) {
        *(long *)(param_2 + 0x2c8) = *(long *)(param_2 + 0x2c8) + 1;
        return;
      }
    }
    func_0x00010be80620(param_2);
    lVar2 = param_4;
    _CMSampleBufferGetDataBuffer();
    if (lVar2 == 0) goto LAB_10904ff58;
    uVar4 = *(undefined8 *)(param_2 + 0x1a0);
    _CMBlockBufferReplaceDataBytes(uVar4,lVar2,0,*(undefined8 *)(param_2 + 0x1a8));
    if ((int)uVar4 == 0) goto LAB_10904ff58;
    *(long *)(param_2 + 0x2d0) = *(long *)(param_2 + 0x2d0) + 1;
  }
  lVar2 = param_4;
  _CMSampleBufferGetDataBuffer();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _CMBlockBufferGetDataLength();
    iVar1 = 0;
    _CMBlockBufferFillDataBytes(0,lVar2,0,lVar3);
    if (iVar1 != 0) {
      return;
    }
    *(long *)(param_2 + 0x2c0) = *(long *)(param_2 + 0x2c0) + 1;
  }
LAB_10904ff58:
  func_0x00010c277b40(*(undefined8 *)(param_2 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bf06a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x18),PTR_s_appendAudioSampleBuffer__11259f430,param_4);
  return;
}



/* Entry: 10904ff7c; end: 109050157; -[SCManagedVideoCapturerImpl _buildRecordingOutputSettingsWithOverrideSettings:deviceFormat:aspectRatio:shouldKeepVideoSizeAsOutputSize:] */

void FUN_10904ff7c(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  func_0x00010bdf9660(param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    func_0x00010c2a5040(param_4);
    if ((param_1 <= 0.0) || (func_0x00010bfe0640(param_4), puVar1 = param_4, param_1 <= 0.0)) {
      puVar1 = param_2;
    }
    func_0x00010c2a5040(puVar1);
    dVar8 = param_1;
    func_0x00010bfe0640(puVar1);
    dVar9 = dVar8;
    func_0x00010c2992e0(param_4);
    puVar1 = param_4;
    if (dVar9 <= 0.0) {
      puVar1 = param_2;
    }
    func_0x00010c2992e0(puVar1);
    dVar10 = dVar9;
    func_0x00010bf0ed60(param_4);
    puVar1 = param_4;
    if (dVar10 <= 0.0) {
      puVar1 = param_2;
    }
    func_0x00010bf0ed60(puVar1);
    puVar1 = param_4;
    func_0x00010c086720();
    puVar2 = param_2;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_4;
    }
    func_0x00010c086720(puVar2);
    puVar1 = param_4;
    func_0x00010bf3f040();
    puVar3 = param_2;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    func_0x00010bf3f040(puVar3);
    puVar1 = PTR_PTR_1126dd130;
    _objc_alloc(PTR_PTR_1126dd130);
    puVar4 = param_4;
    func_0x00010c2bdc20(param_4);
    puVar5 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    func_0x00010c0d2fa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010bf2a2c0(param_4);
    func_0x00010c063160(param_1,dVar8,(double)(long)dVar9,dVar10,puVar1,param_3,puVar2,puVar3,puVar4
                        ,puVar5,puVar6,puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109050158; end: 109050323; -[SCManagedVideoCapturerImpl _defaultRecordingOutputSettingsWithDeviceFormat:aspectRatio:shouldKeepVideoSizeAsOutputSize:] */

void FUN_109050158(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  func_0x00010bf6a420(param_3);
  func_0x00010bf5c700(param_3);
  func_0x00010bfb5ae0(param_5);
  _CMVideoFormatDescriptionGetPresentationDimensions();
  uVar2 = param_5;
  func_0x00010c29b5c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c22c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bc3f0;
  _objc_opt_new();
  puVar5 = puVar4;
  if (*(long *)(param_3 + 0x1d8) == 0) {
    func_0x00010bf134e0(param_1,param_2,0,0,0x3ff0000000000000,puVar4);
  }
  else {
    func_0x00010bf13400(param_1,param_2,puVar4);
  }
  _objc_release();
  iVar1 = (int)puVar4;
  FUN_109128c2c();
  if (iVar1 != 0) {
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      puVar5 = (undefined *)(long)((double)(long)puVar5 * 0.85);
    }
    else {
      puVar5 = (undefined *)(long)(*(double *)(param_3 + 0x1d0) * (double)(long)puVar5);
    }
  }
  _objc_alloc(PTR_PTR_1126dd130);
  func_0x00010c063160(param_1,param_2,(double)(long)puVar5,0x40ef400000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109050324; end: 1090517af; -[SCManagedVideoCapturerImpl _buildSnapCaptureLogParametersWithCaptureSessionId:fileSizeInBytes:videoDurationMs:mediaSizeInPoints:countOfVideoSamplesAppended:countOfAudioSamplesAppended:countOfVideoSamplesAppendedByUser:countOfAudioSamplesAppendedByUser:countOfAudioSamplesAppendFailed:audioSampleAppendError:isVideoWriterPrepared:isAudioWriterPrepared:outputURL:audioQueueDiagnosticsSnapshot:audioSignalMetrics:recordingEndAVSyncInfoExtras:audioSessionConfigSkipReason:invalidPresentationTimeCount:assetWriterStatus:captureError:] */

void FUN_109050324(double param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,long param_10,long param_11,long param_12,undefined8 param_13,undefined4 param_14
                  ,undefined4 param_15,long param_16,long param_17,long param_18,long param_19,
                  undefined **param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined *puVar17;
  long lVar18;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  dVar15 = param_1;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_16 != 0) {
    puVar10 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_4,param_16);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar10;
    func_0x00010c279200(puVar10,param_4,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    fVar14 = 0.0;
    lVar18 = 0;
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c26f620(&puStack_d0,puVar3);
      uStack_e8 = uStack_b0;
      dStack_f0 = dStack_b8;
      uStack_e0 = uStack_a8;
      dVar15 = dStack_b8;
      _CMTimeGetSeconds(&dStack_f0);
      lVar18 = (long)(dVar15 * 1000.0);
    }
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c26f620(&puStack_d0,puVar11);
      uStack_e8 = uStack_b0;
      dStack_f0 = dStack_b8;
      uStack_e0 = uStack_a8;
      _CMTimeGetSeconds(&dStack_f0);
      fVar14 = (float)(long)(dStack_b8 * 1000.0);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((long)(((double)param_3[0xf] - (double)param_3[0xe]) * 1000.0),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d1f8);
    _objc_release(puVar2);
    if (((long)(((double)param_3[0x11] - (double)param_3[0x10]) * 1000.0) & 0x7fffffffffffffffU) <
        0x7ff0000000000000) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d218);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(puVar1,param_4,&PTR____CFConstantStringClassReference_110eb51f8,
                          &PTR____CFConstantStringClassReference_110f1d218);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((long)((double)param_3[0x12] * 1000.0),PTR__OBJC_CLASS___NSNumber_1126ae570)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d238);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,*(undefined1 *)(param_3 + 0x15)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d258);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(lVar18,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d278);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d298);
    _objc_release(puVar2);
    func_0x00010bfb2060(&puStack_d0,param_3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((ulong)puStack_c8 & 0x100000000) != 0) {
      puStack_c8 = param_3[0x6b];
      puVar17 = param_3[0x6a];
      puStack_c0 = param_3[0x6c];
      puStack_d0 = puVar17;
      _CMTimeGetSeconds(&puStack_d0);
      fVar14 = (float)(long)((double)puVar17 * 1000.0);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d2b8);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf0ede0(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d2d8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf0f820(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d2f8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf0ede0(param_3);
    ppuVar5 = param_3;
    func_0x00010bf0ee00(param_3);
    func_0x00010c0df760(puVar2,param_4,(uint)ppuVar4 ^ (uint)ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d318);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf0f820(param_3);
    ppuVar5 = param_3;
    func_0x00010bf0f840(param_3);
    func_0x00010c0df760(puVar2,param_4,(uint)ppuVar4 ^ (uint)ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d338);
    _objc_release(puVar2);
    ppuVar4 = param_3;
    func_0x00010bf0ef00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdccf60(param_3,param_4,puVar1,ppuVar4,
                        &PTR____CFConstantStringClassReference_110f1d358);
    _objc_release(ppuVar4);
    ppuVar4 = param_3;
    func_0x00010bfbb2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdccf60(param_3,param_4,puVar1,ppuVar4,
                        &PTR____CFConstantStringClassReference_110f1d378);
    _objc_release(ppuVar4);
    ppuVar4 = param_3;
    func_0x00010bf17c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010be0ae40(param_3,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,ppuVar5,&PTR____CFConstantStringClassReference_110f1d398);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar4 = param_3;
    func_0x00010bfbb2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010be0ae40(param_3,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,ppuVar5,&PTR____CFConstantStringClassReference_110f1d3b8);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d3d8);
    _objc_release(puVar2);
    ppuVar4 = param_3;
    func_0x00010be0ae40(param_3,param_4,param_13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d3f8);
    _objc_release(ppuVar4);
    ppuVar4 = param_3;
    func_0x00010be0ae40(param_3,param_4,param_23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d418);
    _objc_release(ppuVar4);
    func_0x00010bf99700(puVar11);
    puVar17 = (undefined *)(double)fVar14;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110edb0b8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,(undefined1)param_14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d438);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_14._1_1_);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d458);
    _objc_release(puVar2);
    ppuVar5 = (undefined **)PTR_PTR_1126aed60;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010c065700(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d478);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010c079f00(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d498);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf12740(param_3);
    func_0x00010c0df840(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d4b8);
    _objc_release(puVar2);
    ppuVar6 = param_3;
    func_0x00010c065de0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d4d8);
    _objc_release(ppuVar6);
    ppuVar6 = param_3;
    func_0x00010bf0fc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d4f8);
    _objc_release(ppuVar6);
    ppuVar6 = param_3;
    func_0x00010bf0fe00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d518);
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf0fc40(param_3);
    func_0x00010c0df840(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d538);
    _objc_release(puVar2);
    ppuVar6 = param_3;
    func_0x00010c141fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d558);
    _objc_release(ppuVar6);
    ppuVar6 = param_3;
    func_0x00010c142000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d578);
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010c154de0(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d598);
    _objc_release(puVar2);
    ppuVar6 = param_3;
    func_0x00010bf128e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d5b8);
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c065aa0(param_3);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d5d8);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010c065ae0(param_3);
    func_0x00010c0df6e0(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d5f8);
    _objc_release(puVar2);
    ppuVar4 = param_3;
    func_0x00010c0759c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010c0759c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d618);
      _objc_release(ppuVar4);
    }
    ppuVar4 = param_3;
    func_0x00010bef0ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar6 = param_3;
      func_0x00010c141f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar4 = ppuVar6;
      }
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d638);
      _objc_release(ppuVar6);
      ppuVar6 = param_3;
      func_0x00010c141fc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar4 = ppuVar6;
      }
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d658);
      _objc_release(ppuVar6);
      ppuVar4 = param_3;
      func_0x00010bef0ce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d678);
      _objc_release(ppuVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bf49040(param_3);
    func_0x00010c0df780(puVar2,param_4,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d698);
    _objc_release(puVar2);
    lVar18 = param_19;
    func_0x00010bf529e0();
    if (lVar18 != 0) {
      func_0x00010bef7f60(puVar1,param_4,param_19);
    }
    func_0x00010c0eee80(ppuVar5);
    if (0.004999999888241291 < (double)puVar17) {
      ppuVar6 = ppuVar5;
      func_0x00010bf5fe60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c0ef240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c104100();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110db54d8;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar4 = ppuVar9;
      }
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d6b8);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0eee80(ppuVar5);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d6d8);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bdc1740(ppuVar5);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d6f8);
      _objc_release(puVar2);
    }
    if (0 < param_9) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d718);
      _objc_release(puVar2);
    }
    if (0 < param_8) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d738);
      _objc_release(puVar2);
    }
    if (0 < param_11) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d758);
      _objc_release(puVar2);
    }
    if (0 < param_10) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d778);
      _objc_release(puVar2);
    }
    ppuVar4 = param_3;
    func_0x00010bf0fa60();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010bf0fa60(param_3);
      func_0x00010c0df840(puVar2,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d798);
      _objc_release(puVar2);
    }
    ppuVar4 = param_3;
    func_0x00010bf0fa20();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010bf0fa20(param_3);
      func_0x00010c0df840(puVar2,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d7b8);
      _objc_release(puVar2);
    }
    ppuVar4 = param_3;
    func_0x00010bf0faa0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010bf0faa0(param_3);
      func_0x00010c0df840(puVar2,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d7d8);
      _objc_release(puVar2);
    }
    ppuVar4 = param_3;
    func_0x00010bf0fa80();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010bf0fa80(param_3);
      func_0x00010c0df840(puVar2,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d7f8);
      _objc_release(puVar2);
    }
    ppuVar4 = param_3;
    func_0x00010bf0fa40();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010bf0fa40(param_3);
      func_0x00010c0df840(puVar2,param_4,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d818);
      _objc_release(puVar2);
    }
    if (0 < param_12) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d838);
      _objc_release(puVar2);
    }
    if (param_17 == 0) {
      if ((param_20 != (undefined **)0x0) &&
         (ppuVar4 = param_20,
         func_0x00010c0720c0(param_20,param_4,&PTR____CFConstantStringClassReference_110dabe78),
         ((ulong)ppuVar4 & 1) == 0)) {
        func_0x00010c1d0640(puVar1,param_4,param_20,&PTR____CFConstantStringClassReference_110f1d858
                           );
      }
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dabe78;
      if (param_20 != (undefined **)0x0) {
        ppuVar4 = param_20;
      }
      func_0x00010c1d0640(puVar1,param_4,ppuVar4,&PTR____CFConstantStringClassReference_110f1d858);
      func_0x00010bef7f60(puVar1,param_4,param_17);
    }
    lVar18 = param_18;
    func_0x00010bf529e0();
    if (lVar18 != 0) {
      func_0x00010c1d0640(puVar1,param_4,param_18,&PTR____CFConstantStringClassReference_110f1d878);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_3[0x45] != (undefined *)0x0) {
      func_0x00010c0d35c0();
      func_0x00010c0df760(puVar2,param_4,0.0 < (double)puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d898);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar12 = param_3[0x45];
      puStack_c8 = param_3[0x4a];
      puVar17 = param_3[0x49];
      puStack_c0 = param_3[0x4b];
      puStack_d0 = puVar17;
      _CMTimeGetSeconds(&puStack_d0);
      func_0x00010c10f720(puVar12);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d8b8);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_3[0x4c] != (undefined *)0x0) {
      func_0x00010c100ea0();
      func_0x00010c0df720((double)puVar17 - (double)param_3[0x13],puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d8d8);
      _objc_release(puVar2);
      dVar15 = (double)param_3[2] - (double)param_3[0x13];
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d8f8);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0e1d40(param_3[0x4c]);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d918);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar17 = param_3[0x4c];
      func_0x00010c0782a0(puVar17);
      func_0x00010c0df6e0(puVar2,param_4,puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d938);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c100d80(param_3[0x4c]);
      func_0x00010c0df720(dVar15 - (double)param_3[0x13],puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110f1d958);
      _objc_release(puVar2);
    }
    dVar15 = 5.77003410247023e-315;
    if ((fVar14 < 5000.0) &&
       (ppuVar4 = param_3, func_0x00010bf0ede0(), puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0,
       (int)ppuVar4 != 0)) {
      puVar17 = puVar1;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_4,&PTR____CFConstantStringClassReference_110f1d978);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126b3e90;
      _objc_opt_new(PTR_PTR_1126b3e90);
      func_0x00010c176040();
      puVar13 = param_3[0x3e];
      puVar12 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133420(puVar13,param_4,puVar17,0,puVar2,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar17);
      _objc_release(puVar2);
    }
    _objc_release(ppuVar5);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126aed60;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c1238e0();
  _objc_release(puVar10);
  puVar10 = param_3[0x32];
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010bf21ec0();
  }
  ppuVar4 = param_3 + 0x3d;
  _objc_loadWeakRetained(ppuVar4);
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf28f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afa0();
  lVar18 = (long)dVar15;
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  puVar3 = PTR_PTR_1126dd138;
  _objc_alloc(PTR_PTR_1126dd138);
  func_0x00010c2992e0(param_3[0x29]);
  dVar16 = dVar15;
  func_0x00010bf0ed60(param_3[0x29]);
  puVar11 = param_3[0x29];
  func_0x00010bf3f040(puVar11);
  func_0x00010bffc9c0(param_1,param_2,param_3[0x22],param_3[0x23],dVar15,dVar16,puVar3,param_4,
                      param_5,param_6,param_7,lVar18,puVar11,param_21,puVar10,param_23,puVar1,
                      puVar2 == (undefined *)0x67726e74);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090517b0; end: 10905189b; -[SCManagedVideoCapturerImpl _logVideoSnapCaptureStatus:callsite:captureParameters:] */

void FUN_1090517b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_2 + 0x1f8) == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
  }
  lVar2 = param_2;
  func_0x00010bf2af40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b30a0(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  _objc_release(uVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10905189c; end: 1090518e3; -[SCManagedVideoCapturerImpl _errorCodeFromError:] */

void FUN_10905189c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090518e4; end: 109051bab; -[SCManagedVideoCapturerImpl _appendAudioSessionErrors:forError:keyPrefix:] */

void FUN_1090518e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_4;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110e03178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,puVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_4;
    func_0x00010c292820(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf5f8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110f1d998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,lVar5,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf678);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110f1d9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,lVar5,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf698);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110f1d9d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,lVar5,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf6b8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c25ce40(param_5,param_2,&PTR____CFConstantStringClassReference_110f1d9f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c1d0640(param_3,param_2,lVar5,uVar3);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 109051bac; end: 109051d9f; -[SCManagedVideoCapturerImpl _buildJsonDataFromError:] */

void FUN_109051bac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c09e6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e6b558);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c09e560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110daf558);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110dd3178);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110db9558);
    _objc_release(puVar4);
    lVar2 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e7cfd8);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e510d8);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1);
    if ((int)puVar4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109051da0; end: 109051db7; -[SCManagedVideoCapturerImpl _skipAudioSessionInitialization] */

uint FUN_109051da0(uint param_1)

{
  func_0x00010bf0ede0();
  return param_1 ^ 1;
}



/* Entry: 109051db8; end: 109051dbf; -[SCManagedVideoCapturerImpl isAsync] */

undefined8 FUN_109051db8(void)

{
  return 0;
}



/* Entry: 109051dc0; end: 109051e6b; -[SCManagedVideoCapturerImpl observeSampleBuffer:] */

void FUN_109051dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d3350;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c1494c0(param_3);
  _objc_release(param_3);
  func_0x00010c041320(puVar1,param_2,uVar2);
  lVar3 = param_1 + 0x170;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf70d80();
  func_0x00010bdff560(param_1,param_2,puVar1,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109051e6c; end: 109051e6f; -[SCManagedVideoCapturerImpl observeSampleBufferAsynchronously:completion:] */

void FUN_109051e6c(void)

{
  return;
}



/* Entry: 109051e70; end: 109051f97; -[SCManagedVideoCapturerImpl _resetFrontTorch] */

void FUN_109051e70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 0x180;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c275d40();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb2500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217dc0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb2500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217dc0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb2500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c40();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}


