/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a3f3f8; end: 105a3f5e3; -[SCSpectaclesAppStatusCoordinator initiateTransferFromStartSource:] */

void FUN_105a3f3f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_105a441e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar6 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  FUN_105a44370();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar2 = uVar3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c075fc0();
  if ((int)uVar8 == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar6 = lVar5;
    func_0x00010bf529e0();
    lVar7 = lVar4;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (lVar6 != lVar7) {
      _objc_retain(lVar4);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_105a444c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb3c0(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar8);
      lVar6 = lVar4;
      goto LAB_105a3f59c;
    }
  }
  _objc_retain(lVar5);
  lVar6 = lVar5;
LAB_105a3f59c:
  func_0x00010be3bf00(param_1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a3f5e4; end: 105a3f823; -[SCSpectaclesAppStatusCoordinator _initiateTransferForDevice:contentIds:startSource:] */

void FUN_105a3f5e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bdfbf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126c1850;
  _objc_alloc();
  func_0x00010c04bb00();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bec2760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c252440();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  FUN_105a446a4(param_3,param_4,1,puVar2,uVar4,lVar5,uVar6,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(puVar2);
  lVar1 = param_3;
  _objc_retain(param_3);
  uStack_70 = param_5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar7);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a3f824; end: 105a3f8c7;  */

void FUN_105a3f824(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0260();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24e660();
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a3f8c8; end: 105a3fa7f; -[SCSpectaclesAppStatusCoordinator _observeOTAStateForDevice:] */

void FUN_105a3f8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0eddc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = lVar3;
    func_0x00010c252740(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c266260(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105a3fa80; end: 105a3fad3;  */

void FUN_105a3fa80(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc4c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a3fad4; end: 105a3faf7; -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidUpdateState:] */

void FUN_105a3fad4(undefined8 param_1)

{
  func_0x00010be88a20();
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3faf8; end: 105a3fb9f; -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidPair:] */

void FUN_105a3faf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1cbc40(param_1);
  uVar1 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70e00();
  func_0x00010c18cd40(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x000106e937b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be88a20(param_1);
  _objc_release(uVar1);
  func_0x00010bedb7e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3fba0; end: 105a3fbc7; -[SCSpectaclesAppStatusCoordinator spectaclesOnDeviceForgotten:] */

void FUN_105a3fba0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bedb7e0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3fbc8; end: 105a3fc73; -[SCSpectaclesAppStatusCoordinator spectaclesDevice:didUpdateInfo:] */

void FUN_105a3fbc8(ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be36d60(param_1);
  if (((param_4 >> 7 & 1) != 0) && (uVar1 = param_1, func_0x00010bfdb880(), (uVar1 & 1) == 0)) {
    func_0x00010c1cbc20(param_1);
    func_0x00010bdddac0(param_1);
  }
  puVar2 = PTR_PTR_1126c1858;
  _objc_alloc(PTR_PTR_1126c1858);
  func_0x00010c04bde0();
  func_0x00010bed0560(param_1);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a3fc74; end: 105a3fc7b; -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidUpdateContentList:] */

void FUN_105a3fc74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateNewDeviceContentManifests_112594a30,param_3,0);
  return;
}



/* Entry: 105a3fc7c; end: 105a40023; -[SCSpectaclesAppStatusCoordinator spectaclesTransferSession:onTransferUpdate:] */

void FUN_105a3fc7c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e340();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_105a3ffa0;
  uVar1 = param_3;
  func_0x00010bf35520();
  uVar2 = param_3;
  if (param_4 < 6) {
    if (param_4 == 0) {
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c1858;
      _objc_alloc(PTR_PTR_1126c1858);
    }
    else {
      if (param_4 != 1) {
        if (param_4 != 3) goto LAB_105a3ff60;
        uVar3 = param_3;
        func_0x00010bf44300();
        if ((long)uVar3 < 4) {
          if ((uVar3 != 0) && (uVar3 == 3)) goto LAB_105a3ffa0;
        }
        else if (uVar3 == 5) goto LAB_105a3ffa0;
        if (uVar1 == 1) {
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          goto LAB_105a3ff0c;
        }
        goto LAB_105a3ff10;
      }
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c1858;
      _objc_alloc(PTR_PTR_1126c1858);
    }
LAB_105a3ff34:
    func_0x00010c04bde0();
    func_0x00010bed0580(param_1);
    _objc_release(puVar10);
LAB_105a3ff58:
    _objc_release(uVar2);
  }
  else {
    if (param_4 == 6) {
      uVar3 = param_3;
      func_0x00010bfa5e40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      if (uVar4 == 0) goto LAB_105a3ffa0;
      uVar3 = param_3;
      func_0x00010bf6fd20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf175c0();
      uVar6 = param_3;
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106fd25bc(uVar5,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar1 == 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x38);
LAB_105a3ff0c:
        func_0x00010c1a9bc0(uVar9);
      }
LAB_105a3ff10:
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c1858;
      _objc_alloc(PTR_PTR_1126c1858);
      goto LAB_105a3ff34;
    }
    if (param_4 != 7) {
      if (param_4 != 8) goto LAB_105a3ff60;
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becf1c0(param_1);
      goto LAB_105a3ff58;
    }
    func_0x00010bf44300();
    if (uVar2 < 6) {
      uVar3 = param_3;
      if ((1L << (uVar2 & 0x3f) & 0x39U) == 0) {
        func_0x00010bf6fd20(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126c1858;
        _objc_alloc(PTR_PTR_1126c1858);
        func_0x00010c04bde0();
        func_0x00010bed0580(param_1);
        _objc_release(puVar10);
      }
      else {
        func_0x00010bf6fd20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becf1c0(param_1);
      }
      _objc_release(uVar3);
    }
    if (uVar1 == 1) {
      func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0x38));
    }
  }
LAB_105a3ff60:
  uVar1 = param_3;
  func_0x00010bf16f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed63c0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_105a3ffa0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a40024; end: 105a400b3; -[SCSpectaclesAppStatusCoordinator spectaclesDevice:onDeviceLogsUpdate:] */

void FUN_105a40024(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1858;
  if (param_4 == 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c04bde0();
    func_0x00010bed0560(param_1);
    _objc_release(param_3);
  }
  else {
    _objc_retain(param_3);
    func_0x00010becf1c0(param_1);
    puVar1 = param_3;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContext_112593290);
  return;
}



/* Entry: 105a400b4; end: 105a401cf; -[SCSpectaclesAppStatusCoordinator spectaclesDevice:didUnpairWithReason:] */

void FUN_105a400b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xd) {
    if ((1L << (param_4 & 0x3f) & 0x13e3U) == 0) {
      if ((1L << (param_4 & 0x3f) & 0x804U) != 0) {
        _os_unfair_lock_lock(param_1 + 0x58);
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        uVar1 = param_3;
        func_0x00010c15e740(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar2,param_2,uVar1);
        _objc_release(uVar1);
        uVar2 = *(undefined8 *)(param_1 + 0x78);
        uVar1 = param_3;
        func_0x00010c15e740(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar2,param_2,uVar1);
        _objc_release(uVar1);
        _os_unfair_lock_unlock(param_1 + 0x58);
      }
    }
    else {
      func_0x00010c1cbc40(param_1,param_2,1);
      uVar1 = param_3;
      func_0x00010bfd38e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf70e00();
      func_0x00010c18cd40(param_1,param_2,uVar2);
      _objc_release(uVar1);
      func_0x00010bdddb00(param_1);
    }
  }
  func_0x00010bed63a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a401d0; end: 105a402a7; -[SCSpectaclesAppStatusCoordinator spectaclesDevice:onAlertNotification:] */

void FUN_105a401d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1858;
  if (param_4 < 5) {
    if (3 < param_4 - 1U) goto LAB_105a40254;
    _objc_alloc(PTR_PTR_1126c1858);
  }
  else {
    if (8 < param_4) {
      if (param_4 != 9) {
        if (param_4 == 10) {
          _objc_alloc(PTR_PTR_1126c1858);
          goto LAB_105a40234;
        }
        if (param_4 != 0xc) goto LAB_105a40254;
      }
      func_0x00010becf1c0(param_1,param_2,param_3);
      goto LAB_105a40254;
    }
    _objc_alloc(PTR_PTR_1126c1858);
  }
LAB_105a40234:
  func_0x00010c04bde0();
  func_0x00010bed0560(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
LAB_105a40254:
  func_0x00010bed63a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a402a8; end: 105a403eb; -[SCSpectaclesAppStatusCoordinator spectaclesOnBluetoothStateUpdate:] */

void FUN_105a402a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 5) {
    func_0x00010bdcc560(param_1);
  }
  else if (param_3 == 4) {
    func_0x00010bdcc540(param_1);
  }
  uVar8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_c8;
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,puVar5,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be88a20(param_1,param_2,*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar5 = auStack_c8;
      lVar1 = lVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,puVar5,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  func_0x00010bed63a0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if ((undefined1 *)0x1 < puVar5) {
    puVar3 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bea0(uVar8);
    func_0x00010bed0560(param_1,param_2,puVar4,puVar3);
    _objc_release(puVar3);
    func_0x00010bed63a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105a403ec; end: 105a40483; -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateForDevice:changedState:progress:] */

void FUN_105a403ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if (1 < param_5) {
    puVar1 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bea0(param_1);
    func_0x00010bed0560(param_2,param_3,param_4,puVar1);
    _objc_release(puVar1);
    func_0x00010bed63a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a40484; end: 105a404ff; -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateForDevice:failedFromState:] */

void FUN_105a40484(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1858;
  if (param_4 == 1) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04bde0();
  func_0x00010bed0560(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  func_0x00010bed63a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a40500; end: 105a40597; -[SCSpectaclesAppStatusCoordinator spectaclesOnFirmwareUpdateEvent:device:] */

void FUN_105a40500(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if ((param_3 - 2U < 3) || (param_3 != 0)) {
    puVar1 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bde0();
    func_0x00010bed0560(param_1,param_2,param_4,puVar1);
    _objc_release(puVar1);
    func_0x00010bed63a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a40598; end: 105a406fb; -[SCSpectaclesAppStatusCoordinator spectaclesOnNewFirmwareVersionFetched] */

void FUN_105a40598(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c283a00();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        puVar6 = PTR_PTR_1126c1858;
        _objc_alloc(PTR_PTR_1126c1858);
        func_0x00010c04bde0();
        func_0x00010bed0560(param_1);
        _objc_release(puVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010bed63a0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be66770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105a406fc; end: 105a406ff; -[SCSpectaclesAppStatusCoordinator spectaclesDeviceDidSetUpFeatureCatalog:] */

void FUN_105a406fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be66770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeOTAStateForDevice__112577378);
  return;
}



/* Entry: 105a40700; end: 105a40727; -[SCSpectaclesAppStatusCoordinator applicationDidEnterBackground:] */

void FUN_105a40700(undefined8 param_1)

{
  func_0x00010bddfcc0();
                    /* WARNING: Could not recover jumptable at 0x00010c1a6af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasSeenFirmwareUpdateRequired_1126474d8,0)
  ;
  return;
}



/* Entry: 105a40728; end: 105a4075b; -[SCSpectaclesAppStatusCoordinator applicationDidBecomeActive:] */

void FUN_105a40728(undefined8 param_1)

{
  func_0x00010bdddac0();
  func_0x00010bdddae0(param_1);
  func_0x00010bdddb00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdddbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfStateNeedsToDisappear_112555090);
  return;
}



/* Entry: 105a4075c; end: 105a4093f; -[SCSpectaclesAppStatusCoordinator _postInitSetup] */

void FUN_105a4075c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010be3bbe0(param_1);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bed63a0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bed63d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105a40940; end: 105a40947; -[SCSpectaclesAppStatusCoordinator _updateCrashContext] */

void FUN_105a40940(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed63d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCrashContextWithTransferS_112593298,0)
  ;
  return;
}



/* Entry: 105a40948; end: 105a40acf; -[SCSpectaclesAppStatusCoordinator _updateCrashContextWithTransferSessionID:] */

void FUN_105a40948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0dec60(param_1);
  lVar2 = param_1;
  func_0x00010c0df0e0(param_1);
  func_0x00010c0df780(puVar3,param_2,lVar1 - lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0300(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c0df0e0(param_1);
  func_0x00010c0df780(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d02c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
  lVar1 = param_1;
  func_0x00010bf486e0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1a5c00(*(undefined8 *)(param_1 + 0x10),param_2,0);
    func_0x00010c180d20(*(undefined8 *)(param_1 + 0x10),param_2,0);
  }
  else {
    func_0x00010c1a5c00(*(undefined8 *)(param_1 + 0x10),param_2,1);
    lVar2 = param_1;
    func_0x00010bdfbf60(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c180d20(*(undefined8 *)(param_1 + 0x10),param_2,0);
    }
    else {
      lVar4 = lVar2;
      func_0x00010c252440(lVar2);
      func_0x000109026ab0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c180d20(*(undefined8 *)(param_1 + 0x10),param_2,lVar4);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  func_0x00010c2198c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1c6180(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010c207aa0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined1 *)(param_1 + 9));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a40ad0; end: 105a40ea7; -[SCSpectaclesAppStatusCoordinator _updateOTAUpdateAppState:device:] */

void FUN_105a40ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = param_3;
  func_0x00010bfed8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc9a0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c252d60();
  puVar5 = PTR_PTR_1126c1858;
  switch(uVar2) {
  case 0:
  case 1:
    lVar6 = param_1;
    _objc_opt_class();
    iVar1 = (int)lVar6;
    lVar6 = param_1;
    func_0x00010bdfbf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
    func_0x00010be40720();
    _objc_release(lVar6);
    if (iVar1 != 0) {
      func_0x00010becf1c0(param_1);
    }
    goto LAB_105a40e58;
  case 2:
  case 10:
  case 0xe:
    uVar2 = param_4;
    func_0x00010bfa1c80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0eddc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfdb320();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c1858;
    if ((int)uVar4 == 0) {
      _objc_alloc(PTR_PTR_1126c1858);
      func_0x00010c04bde0();
      func_0x00010bed0560(param_1);
    }
    else {
      _objc_alloc();
      func_0x00010c04bde0();
      func_0x00010bed0560(param_1);
    }
    break;
  case 3:
  case 0xb:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    uVar2 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar2);
    if (iVar1 == 0) goto LAB_105a40e58;
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar7);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bde0();
    func_0x00010bed0560(param_1);
    break;
  case 4:
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bea0((float)(long)puStack_68[3]);
    func_0x00010bed0560(param_1);
    break;
  case 5:
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bea0((float)(long)puStack_68[3]);
    func_0x00010bed0560(param_1);
    break;
  case 6:
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bea0((float)(long)puStack_68[3]);
    func_0x00010bed0560(param_1);
    break;
  default:
    goto LAB_105a40e58;
  case 8:
  case 9:
    _objc_alloc(PTR_PTR_1126c1858);
    func_0x00010c04bde0();
    func_0x00010bed0560(param_1);
  }
  _objc_release(puVar5);
LAB_105a40e58:
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a40ea8; end: 105a40ebb;  */

void FUN_105a40ea8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a40ebc; end: 105a40f83; +[SCSpectaclesAppStatusCoordinator _isDeviceLowTemperature:] */

bool FUN_105a40ebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26af00();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010bf52980();
    if (lVar3 == 999) {
      bVar1 = false;
    }
    else {
      lVar3 = param_3;
      func_0x00010c0692a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52980();
      bVar1 = lVar4 < -0xf;
      _objc_release(lVar3);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c26af00();
    bVar1 = lVar3 == 2;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a40f84; end: 105a411b7; +[SCSpectaclesAppStatusCoordinator _isDeviceHighTemperature:] */

bool FUN_105a40f84(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26af00();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010c26af00();
    bVar1 = lVar3 == 3;
    goto LAB_105a41184;
  }
  lVar3 = lVar2;
  func_0x00010c0db2a0();
  if (lVar3 == 999) {
LAB_105a41038:
    lVar4 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c246060();
    if (lVar5 == 999) {
LAB_105a41088:
      lVar6 = param_3;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c2a5660();
      if (lVar7 == 999) {
LAB_105a410d8:
        lVar8 = param_3;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf52980();
        if (lVar9 == 999) {
          _objc_release(lVar8);
          bVar1 = false;
        }
        else {
          lVar9 = param_3;
          func_0x00010c0692a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf52980();
          bVar1 = 0x2d < lVar10;
          _objc_release(lVar9);
          _objc_release(lVar8);
        }
        if (lVar7 != 999) goto LAB_105a41144;
      }
      else {
        uStack_78 = param_3;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = uStack_78;
        func_0x00010c2a5660();
        if (lVar8 < 0x47) goto LAB_105a410d8;
        bVar1 = true;
LAB_105a41144:
        _objc_release(uStack_78);
      }
      _objc_release(lVar6);
      if (lVar5 != 999) goto LAB_105a41160;
    }
    else {
      uStack_70 = param_3;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = uStack_70;
      func_0x00010c246060();
      if (lVar6 < 0x40) goto LAB_105a41088;
      bVar1 = true;
LAB_105a41160:
      _objc_release(uStack_70);
    }
    _objc_release(lVar4);
    if (lVar3 == 999) goto LAB_105a41184;
  }
  else {
    uStack_68 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = uStack_68;
    func_0x00010c0db2a0();
    if (lVar4 < 0x47) goto LAB_105a41038;
    bVar1 = true;
  }
  _objc_release(uStack_68);
LAB_105a41184:
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a411b8; end: 105a4125b; +[SCSpectaclesAppStatusCoordinator _isDeviceLowStorageSpace:] */

uint FUN_105a411b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c257160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0692a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010bfdc7a0(lVar1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c257180();
    uVar3 = (uint)(lVar2 == 2);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 105a4125c; end: 105a412e3; -[SCSpectaclesAppStatusCoordinator _refreshStateForDevice:] */

void FUN_105a4125c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb3220(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    uVar1 = param_1;
    func_0x00010be36d60(param_1,param_2,param_3);
    func_0x00010c04bde0(puVar2,param_2,uVar1);
    func_0x00010bed0560(param_1,param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a412e4; end: 105a413d3; -[SCSpectaclesAppStatusCoordinator _shouldDismissAlertForDeviceStateUpdate:] */

bool FUN_105a412e4(undefined *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c252440();
  bVar1 = puVar3 == (undefined *)0x16;
  if (bVar1) {
    uVar4 = param_3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27d060();
    _objc_release(uVar4);
    _objc_release(puVar2);
    if ((uVar5 & 1) != 0) {
      bVar1 = false;
      goto LAB_105a413b4;
    }
    puVar2 = PTR_PTR_1126c1858;
    _objc_alloc(PTR_PTR_1126c1858);
    puVar3 = param_1;
    func_0x00010be36d60(param_1,param_2,param_3);
    func_0x00010c04bde0(puVar2,param_2,puVar3);
    func_0x00010bed05a0(param_1,param_2,param_3,puVar2,0,1);
  }
  _objc_release(puVar2);
LAB_105a413b4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a413d4; end: 105a41457; -[SCSpectaclesAppStatusCoordinator _transitionToIdleStateForDevice:] */

void FUN_105a413d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1858;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010be36d60(param_1,param_2,param_3);
  func_0x00010c04bde0(puVar1,param_2,uVar2);
  func_0x00010bed05a0(param_1,param_2,param_3,puVar1,0,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a41458; end: 105a41463; -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:] */

void FUN_105a41458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__tryTransitionDevice_withNewStat_112591b10,param_3,param_4,0,0);
  return;
}



/* Entry: 105a41464; end: 105a4146b; -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:transferSession:] */

void FUN_105a41464(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tryTransitionDevice_withNewStat_112591b10);
  return;
}



/* Entry: 105a4146c; end: 105a41733; -[SCSpectaclesAppStatusCoordinator _tryTransitionDevice:withNewState:transferSession:alertStateTimedOut:] */

void FUN_105a4146c(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bdfbf60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = uVar2 == 0;
  uVar6 = 1;
  if (((param_6 & 1) != 0) || (uVar2 == 0)) goto LAB_105a41508;
  uVar3 = param_1;
  _objc_opt_class();
  lVar4 = param_4;
  func_0x00010c252440(param_4);
  func_0x00010be45980(uVar3,param_2,lVar4);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    _objc_opt_class();
    lVar4 = param_4;
    func_0x00010c252440(param_4);
    func_0x00010be44ce0(uVar3,param_2,lVar4);
    uVar5 = param_1;
    _objc_opt_class();
    if ((int)uVar3 == 0) {
      lVar4 = param_4;
      func_0x00010c252440(param_4);
      func_0x00010be40720(uVar5,param_2,lVar4);
      if ((uVar5 & 1) == 0) {
        uVar3 = param_1;
        _objc_opt_class();
        lVar4 = param_4;
        func_0x00010c252440(param_4);
        func_0x00010be414a0(uVar3,param_2,lVar4);
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar2;
          func_0x00010c252440();
          if (uVar3 == 0x14) {
            uVar5 = *(ulong *)(param_1 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar5;
            func_0x00010c06f4a0();
            _objc_release(uVar5);
            if ((uVar3 & 1) != 0) goto LAB_105a41728;
          }
          uVar3 = param_1;
          _objc_opt_class();
          uVar5 = uVar2;
          func_0x00010c252440(uVar2);
          func_0x00010be41020(uVar3,param_2,uVar5);
          if ((int)uVar3 != 0) {
            uVar3 = param_1;
            _objc_opt_class();
            lVar4 = param_4;
            func_0x00010c252440(param_4);
            func_0x00010be41020(uVar3,param_2,lVar4);
            if ((uVar3 & 1) != 0) goto LAB_105a41500;
          }
          lVar4 = param_4;
          func_0x00010c252440();
          if (lVar4 == 1) {
            func_0x00010bdddbc0(param_1);
            uVar6 = 1;
            bVar1 = true;
            goto LAB_105a41508;
          }
          lVar4 = param_4;
          func_0x00010c252440();
          if (lVar4 != 2) goto LAB_105a41728;
          uVar3 = param_1;
          _objc_opt_class();
          uVar5 = uVar2;
          func_0x00010c252440(uVar2);
          func_0x00010be44ce0(uVar3,param_2,uVar5);
          uVar6 = (uint)uVar3;
          goto LAB_105a4172c;
        }
      }
    }
    else {
      uVar3 = uVar2;
      func_0x00010c252440(uVar2);
      func_0x00010be45980(uVar5,param_2,uVar3);
      if ((((int)uVar5 != 0) && (lVar4 = param_4, func_0x00010c252440(), lVar4 != 0x1a)) &&
         (lVar4 = param_4, func_0x00010c252440(), lVar4 != 0x19)) {
LAB_105a41728:
        uVar6 = 0;
LAB_105a4172c:
        bVar1 = false;
        goto LAB_105a41508;
      }
    }
  }
LAB_105a41500:
  bVar1 = false;
  uVar6 = 1;
LAB_105a41508:
  lVar4 = param_4;
  func_0x00010c252440();
  if (lVar4 == 0x14) {
    func_0x000106fd2cec();
    uVar6 = (uint)lVar4 & uVar6;
  }
  if ((param_3 != 0) && (uVar6 != 0)) {
    func_0x00010bea5d20(param_1,param_2,param_4,param_3);
    func_0x00010bedc220(param_1,param_2,param_3,param_5);
    func_0x00010bdcc180(param_1,param_2,param_3);
    func_0x00010bdddbc0(param_1);
  }
  if (bVar1) {
    func_0x00010bdcc580(param_1);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a41734; end: 105a417af; -[SCSpectaclesAppStatusCoordinator _initializeStateForDevice:] */

void FUN_105a41734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1858;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010be36d60(param_1,param_2,param_3);
  func_0x00010c04bde0(puVar1,param_2,uVar2);
  func_0x00010bed0560(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a417b0; end: 105a418c7; -[SCSpectaclesAppStatusCoordinator _clearAlertStateForAllDevices] */

void FUN_105a417b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bddfce0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    lVar1 = lVar2;
    _objc_opt_class();
    lVar4 = lVar2;
    func_0x00010bec2760(lVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    func_0x00010be414a0(lVar1,param_2,lVar5);
    _objc_release(lVar4);
    if ((int)lVar1 != 0) {
      func_0x00010becf1c0(lVar2,param_2,puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105a418c8; end: 105a4194f; -[SCSpectaclesAppStatusCoordinator _clearAlertStateForDevice:] */

void FUN_105a418c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    _objc_opt_class();
    uVar2 = param_1;
    func_0x00010bec2760(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252440();
    func_0x00010be414a0(uVar1,param_2,uVar3);
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      func_0x00010becf1c0(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a41950; end: 105a41bc7; -[SCSpectaclesAppStatusCoordinator _checkIfStateNeedsToDisappear] */

void FUN_105a41950(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[8] & 1) != 0) || (puVar2 = param_1, param_1[9] == '\x01')) {
    puVar2 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release();
    if (puVar3 != (undefined *)0x2) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar3 = *(undefined **)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf71280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        lVar7 = *plStack_130;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar7) {
              _objc_enumerationMutation(puVar2);
            }
            uVar6 = *(undefined8 *)(lStack_138 + (long)puVar8 * 8);
            _objc_initWeak(auStack_148,param_1);
            _objc_initWeak(auStack_150,uVar6);
            puVar4 = param_1;
            func_0x00010bdfbf60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c252440();
            _objc_release(puVar4);
            puVar4 = param_1;
            _objc_opt_class();
            iVar1 = (int)puVar4;
            func_0x00010be414a0();
            if (iVar1 != 0) {
              func_0x00010bdf9a40(param_1);
              puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_180 = 0xc2000000;
              pcStack_178 = FUN_105a41bc8;
              puStack_170 = &UNK_1108cee28;
              _objc_copyWeak(auStack_168,auStack_148);
              _objc_copyWeak(auStack_160,auStack_150);
              puStack_158 = puVar5;
              func_0x000100c749e0("APPSTORE",&puStack_188);
              _objc_destroyWeak(auStack_160);
              _objc_destroyWeak(auStack_168);
            }
            _objc_destroyWeak(auStack_150);
            _objc_destroyWeak(auStack_148);
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  puVar3 = puVar2 + 0x20;
  _objc_loadWeakRetained();
  puVar8 = puVar2 + 0x28;
  _objc_loadWeakRetained(puVar8);
  puVar5 = *(undefined **)(puVar2 + 0x30);
  puVar2 = puVar3;
  func_0x00010bdfbf60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c252440();
  if (puVar5 == puVar4) {
    puVar4 = puVar3;
    func_0x00010bfecce0();
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x7fffffffffffffff) {
      func_0x00010becf1c0(puVar3);
    }
  }
  else {
    _objc_release(puVar2);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105a41bc8; end: 105a41c73;  */

void FUN_105a41bc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar3 = lVar1;
  func_0x00010bdfbf60(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  if (lVar5 == lVar4) {
    lVar4 = lVar1;
    func_0x00010bfecce0(lVar1,param_2,lVar2);
    _objc_release(lVar3);
    if (lVar4 != 0x7fffffffffffffff) {
      func_0x00010becf1c0(lVar1,param_2,lVar2);
    }
  }
  else {
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a41c74; end: 105a41d13; -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayBluetoothErrorAlert] */

void FUN_105a41c74(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if ((((puVar2 != (undefined *)0x2) && (uVar3 = param_1, func_0x00010c0d7120(), (int)uVar3 != 0))
      && (uVar3 = param_1, func_0x00010bfdb880(), (uVar3 & 1) == 0)) &&
     (((*(byte *)(param_1 + 8) & 1) != 0 || (*(char *)(param_1 + 9) == '\x01')))) {
    func_0x00010c1a6a60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb97d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLagunaRestartErrorAlertView_11258bf98)
    ;
    return;
  }
  return;
}



/* Entry: 105a41d14; end: 105a41e7b; -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayFirmwareUpdateRequiredAlert] */

void FUN_105a41d14(undefined *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  if (((puVar3 != (undefined *)0x2) &&
      (puVar3 = param_1, func_0x00010c0d7120(), ((ulong)puVar3 & 1) == 0)) &&
     (puVar3 = param_1, func_0x00010bfdb960(), ((ulong)puVar3 & 1) == 0)) {
    cVar1 = param_1[8];
    _objc_release(puVar2);
    if ((cVar1 != '\0') && (puVar2 = param_1, func_0x00010c0debe0(), 0 < (long)puVar2)) {
      lVar6 = 0;
      do {
        puVar3 = param_1;
        func_0x00010bf486e0(param_1,param_2,lVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x000106e937b0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2894e0();
        if ((int)uVar5 == 0) {
          _objc_release(uVar4);
        }
        else {
          puVar3 = puVar2;
          func_0x00010bfd6b40();
          _objc_release(uVar4);
          if ((int)puVar3 != 0) {
            func_0x00010c1a6ae0(param_1,param_2,1);
            uVar5 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23ab20();
            _objc_release(uVar5);
            goto LAB_105a41d68;
          }
        }
        _objc_release(puVar2);
        lVar6 = lVar6 + 1;
        puVar2 = param_1;
        func_0x00010c0debe0();
      } while (lVar6 < (long)puVar2);
    }
    return;
  }
LAB_105a41d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a41e7c; end: 105a41f07; -[SCSpectaclesAppStatusCoordinator _checkIfNeedToDisplayUnpairedAlert] */

void FUN_105a41e7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (((puVar2 != (undefined *)0x2) && (lVar3 = param_1, func_0x00010c0d7140(), (int)lVar3 != 0)) &&
     (*(char *)(param_1 + 8) == '\x01')) {
    func_0x00010c1cbc40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLagunaUnpairedErrorAlertVie_11258bfa0)
    ;
    return;
  }
  return;
}



/* Entry: 105a41f08; end: 105a42053; -[SCSpectaclesAppStatusCoordinator pairedDevices] */

void FUN_105a41f08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar14 = *plStack_110;
    do {
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar14) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(ulong *)(lStack_118 + lVar16 * 8);
        uVar4 = uVar12;
        func_0x00010c082060();
        if ((uVar4 & 1) == 0) {
          func_0x00010befa120(puVar1,param_2,uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar10 = &uStack_250;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lVar14 = *(long *)(lVar3 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010bf71280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar11 = auStack_210;
    lVar14 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_250,puVar11,0x10);
    if (lVar14 != 0) {
      lVar16 = *plStack_240;
      do {
        lVar17 = 0;
        do {
          if (*plStack_240 != lVar16) {
            _objc_enumerationMutation(lVar2);
          }
          uVar15 = *(undefined8 *)(lStack_248 + lVar17 * 8);
          uVar13 = uVar15;
          func_0x00010bf48d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar13;
          func_0x00010bf48940();
          if (((int)uVar5 == 0) || (uVar5 = uVar15, func_0x00010c06b700(), (int)uVar5 == 0)) {
            lVar6 = lVar3;
            _objc_opt_class();
            lVar7 = lVar3;
            func_0x00010bdfbf60(lVar3,param_2,uVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c252440();
            func_0x00010be40720(lVar6,param_2,lVar8);
            _objc_release(lVar7);
            _objc_release(uVar13);
            if ((int)lVar6 != 0) goto LAB_105a421a0;
          }
          else {
            _objc_release(uVar13);
LAB_105a421a0:
            func_0x00010befa120(puVar1,param_2,uVar15);
          }
          lVar17 = lVar17 + 1;
        } while (lVar14 != lVar17);
        puVar11 = auStack_210;
        lVar14 = lVar2;
        puVar10 = &uStack_250;
        func_0x00010bf52a60(lVar2,param_2,&uStack_250,puVar11,0x10);
      } while (lVar14 != 0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      _objc_retain(puVar11);
      _objc_retain(puVar10);
      _os_unfair_lock_lock(lVar2 + 0x58);
      uVar13 = *(undefined8 *)(lVar2 + 0x70);
      puVar9 = puVar11;
      func_0x00010c15e740(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      func_0x00010c1d0640(uVar13,param_2,puVar10,puVar9);
      _objc_release(puVar10);
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(lVar2 + 0x58);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a42054; end: 105a4221b; -[SCSpectaclesAppStatusCoordinator connectedDevices] */

void FUN_105a42054(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar10 = auStack_f0;
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,puVar10,0x10);
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        uVar11 = uVar12;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010bf48940();
        if (((int)uVar4 == 0) || (uVar4 = uVar12, func_0x00010c06b700(), (int)uVar4 == 0)) {
          lVar5 = param_1;
          _objc_opt_class();
          lVar6 = param_1;
          func_0x00010bdfbf60(param_1,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c252440();
          func_0x00010be40720(lVar5,param_2,lVar7);
          _objc_release(lVar6);
          _objc_release(uVar11);
          if ((int)lVar5 != 0) goto LAB_105a421a0;
        }
        else {
          _objc_release(uVar11);
LAB_105a421a0:
          func_0x00010befa120(puVar1,param_2,uVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar10 = auStack_f0;
      lVar2 = lVar3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,puVar10,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar9);
  _os_unfair_lock_lock(lVar3 + 0x58);
  uVar11 = *(undefined8 *)(lVar3 + 0x70);
  puVar8 = puVar10;
  func_0x00010c15e740(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x00010c1d0640(uVar11,param_2,puVar9,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(lVar3 + 0x58);
  return;
}



/* Entry: 105a4221c; end: 105a422ab; -[SCSpectaclesAppStatusCoordinator _setNewDeviceState:forDevice:] */

void FUN_105a4221c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = param_4;
  func_0x00010c15e740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 105a422ac; end: 105a4232f; -[SCSpectaclesAppStatusCoordinator _deviceStateForDevice:] */

void FUN_105a422ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a42330; end: 105a423d3; -[SCSpectaclesAppStatusCoordinator _updateNewDeviceContentManifestsForDevice:transferSession:] */

void FUN_105a42330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdd8540(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(uVar3,param_2,lVar1,uVar2);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a423d4; end: 105a42457; -[SCSpectaclesAppStatusCoordinator _deviceContentManifestsForDevice:] */

void FUN_105a423d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a42458; end: 105a427d7; -[SCSpectaclesAppStatusCoordinator _idleStateForDevice:] */

undefined8 FUN_105a42458(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c06d6e0();
  if ((int)uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c082060();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf48940();
      if ((int)uVar4 == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar4 = param_3;
        func_0x00010c06b700();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          uVar3 = param_3;
          func_0x00010c0692a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c2286c0();
          _objc_release(uVar3);
          if ((int)uVar4 == 0) {
            uVar8 = 0xd;
          }
          else {
            uVar3 = param_3;
            func_0x00010bf48d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c27d040();
            _objc_release(uVar3);
            if ((uVar4 & 1) == 0) {
              uVar3 = param_3;
              func_0x00010c0692a0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010bf6fa60();
              _objc_release(uVar3);
              if ((uVar4 & 1) == 0) {
                uVar3 = param_3;
                func_0x00010c0692a0();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar3;
                func_0x00010bf175c0();
                uVar5 = param_3;
                func_0x00010c0692a0(param_3);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010bf17500();
                _objc_retainAutoreleasedReturnValue();
                func_0x000106fd25bc(uVar4,uVar6);
                _objc_release(uVar6);
                _objc_release(uVar5);
                _objc_release();
                iVar1 = (int)uVar3;
                if ((uVar4 & 1) == 0) {
                  func_0x000106fd2cec();
                  if (iVar1 == 0) {
                    uVar8 = 0xb;
                  }
                  else {
                    uVar7 = *(undefined8 *)(param_1 + 0x20);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar7;
                    func_0x00010c2894e0();
                    if ((int)uVar8 == 0) {
                      uVar3 = uVar2;
                      func_0x00010bfa1c80();
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar3;
                      func_0x00010c0eddc0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar4;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      uVar6 = uVar5;
                      func_0x00010bfdb320();
                      _objc_release(uVar5);
                      _objc_release(uVar4);
                      _objc_release(uVar3);
                      _objc_release(uVar7);
                      if ((uVar6 & 1) == 0) {
                        uVar7 = *(undefined8 *)(param_1 + 0x20);
                        func_0x00010c269d40();
                        _objc_retainAutoreleasedReturnValue();
                        uVar8 = uVar7;
                        func_0x00010c283a00();
                        if (((int)uVar8 == 0) ||
                           (uVar3 = uVar2, func_0x00010bfd6b40(), (int)uVar3 == 0)) {
                          uVar3 = uVar2;
                          func_0x00010bfa1c80();
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar3;
                          func_0x00010c0eddc0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = uVar4;
                          func_0x00010c269d40();
                          _objc_retainAutoreleasedReturnValue();
                          uVar6 = uVar5;
                          func_0x00010c283a60();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          _objc_release(uVar5);
                          _objc_release(uVar4);
                          _objc_release(uVar3);
                          _objc_release(uVar7);
                          if (uVar6 == 0) {
                            uVar3 = param_1;
                            _objc_opt_class();
                            func_0x00010be3f960();
                            if ((uVar3 & 1) == 0) {
                              uVar3 = param_1;
                              _objc_opt_class();
                              func_0x00010be3f8e0();
                              if ((uVar3 & 1) == 0) {
                                _objc_opt_class();
                                iVar1 = (int)param_1;
                                func_0x00010be3f940();
                                uVar8 = 10;
                                if (iVar1 == 0) {
                                  uVar8 = 3;
                                }
                              }
                              else {
                                uVar8 = 9;
                              }
                            }
                            else {
                              uVar8 = 8;
                            }
                            goto LAB_105a42554;
                          }
                        }
                        else {
                          _objc_release(uVar7);
                        }
                        uVar8 = 5;
                        goto LAB_105a42554;
                      }
                    }
                    else {
                      _objc_release(uVar7);
                    }
                    uVar8 = 6;
                  }
                }
                else {
                  uVar8 = 4;
                }
              }
              else {
                uVar8 = 7;
              }
            }
            else {
              uVar8 = 0x14;
            }
          }
          goto LAB_105a42554;
        }
      }
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
    }
  }
LAB_105a42554:
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 105a427d8; end: 105a427f3; -[SCSpectaclesAppStatusCoordinator _delayTimeForState:] */

undefined8 FUN_105a427d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4024000000000000;
  if (param_3 < 0x1c) {
    uVar1 = *(undefined8 *)(&UNK_10ddc9eb0 + param_3 * 8);
  }
  return uVar1;
}



/* Entry: 105a427f4; end: 105a42853; -[SCSpectaclesAppStatusCoordinator setNeedToDisplayUnpairedAlert:] */

void FUN_105a427f4(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (*(byte *)(param_1 + 0x5f) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x5f) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e17e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a42854; end: 105a428b3; -[SCSpectaclesAppStatusCoordinator setDevicePoductType:] */

void FUN_105a42854(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x68) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x68) = param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e17e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a428b4; end: 105a4290f; -[SCSpectaclesAppStatusCoordinator _showLagunaRestartErrorAlertView] */

void FUN_105a428b4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a42910;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 105a42910; end: 105a42b5f;  */

void FUN_105a42910(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17f38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17f58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f58,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e17f78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f78,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar7 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010bdcc420(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105a42b60; end: 105a42b93;  */

void FUN_105a42b60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcc420(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a42b94; end: 105a42ba3;  */

void FUN_105a42b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,0);
  return;
}



/* Entry: 105a42ba4; end: 105a42bff; -[SCSpectaclesAppStatusCoordinator _showLagunaUnpairedErrorAlertView] */

void FUN_105a42ba4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a42c00;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_38);
  return;
}



/* Entry: 105a42c00; end: 105a42e4f;  */

void FUN_105a42c00(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17f98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17f98,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17fb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17fb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e17ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17ff8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar7 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf04760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c253060();
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105a42e50; end: 105a42ea3;  */

void FUN_105a42e50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c253060();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a42ea4; end: 105a42eb3;  */

void FUN_105a42ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,0);
  return;
}



/* Entry: 105a42eb4; end: 105a4303b; -[SCSpectaclesAppStatusCoordinator _updateMemoriesSideButtonTooltipVisibility:] */

void FUN_105a42eb4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    func_0x00010bf04760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c253000();
    lVar1 = param_1;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf486e0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06e7e0();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c248580();
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) {
        lVar2 = param_1;
        func_0x00010bf04760(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010be6fc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c253000(lVar2,param_2,param_1,1,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2076e0();
        _objc_release(uVar6);
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x30);
      func_0x00010bfdb8a0();
      if ((uVar4 & 1) == 0) {
        lVar2 = param_1;
        func_0x00010bf04760(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010be6fc80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c253000(lVar2,param_2,param_1,1,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010c1a6a80(*(undefined8 *)(param_1 + 0x30),param_2,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a4303c; end: 105a43057; +[SCSpectaclesAppStatusCoordinator _isItAnAlertState:] */

uint FUN_105a4303c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1a) & 0x3031700U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105a43058; end: 105a43073; +[SCSpectaclesAppStatusCoordinator _isTransferState:] */

uint FUN_105a43058(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1c) & 0xfe01800U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105a43074; end: 105a4308b; +[SCSpectaclesAppStatusCoordinator _isWifiBootState:] */

uint FUN_105a43074(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1c) & 0xe00000U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105a4308c; end: 105a430a3; +[SCSpectaclesAppStatusCoordinator _isFirmwareUpdateState:] */

uint FUN_105a4308c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1c) & 0xfc000U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105a430a4; end: 105a430bf; +[SCSpectaclesAppStatusCoordinator _isIdleState:] */

uint FUN_105a430a4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1c) & 0x102fffU >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105a430c0; end: 105a430e7; -[SCSpectaclesAppStatusCoordinator _logStringForLagunaState:] */

undefined ** FUN_105a430c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x1b) {
    return (undefined **)(&PTR_PTR_1108cee98)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e18018;
}



/* Entry: 105a430e8; end: 105a4311f; -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorBluetoothTurnedOn] */

void FUN_105a430e8(undefined8 param_1)

{
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a43120; end: 105a4317f; -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorBluetoothTurnedOff] */

void FUN_105a43120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be594a0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253020();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a43180; end: 105a431b7; -[SCSpectaclesAppStatusCoordinator _announceStatusCoordinatorNumberOfDevicesUpdated] */

void FUN_105a43180(undefined8 param_1)

{
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a431b8; end: 105a43253; -[SCSpectaclesAppStatusCoordinator _announceNeedsToUpdateStateForDevice:] */

void FUN_105a431b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bec2760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_release(uVar1);
  func_0x00010be594a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252fe0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a43254; end: 105a4328b; -[SCSpectaclesAppStatusCoordinator _announcePressedLearnMoreForBluetoothOverloadError] */

void FUN_105a43254(undefined8 param_1)

{
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2530a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a4328c; end: 105a43293; -[SCSpectaclesAppStatusCoordinator announcer] */

undefined8 FUN_105a4328c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105a43294; end: 105a432c3; -[SCSpectaclesAppStatusCoordinator setAnnouncer:] */

void FUN_105a43294(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a432c4; end: 105a432cb; -[SCSpectaclesAppStatusCoordinator needToDisplayBluetoothErrorAlert] */

undefined1 FUN_105a432c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* Entry: 105a432cc; end: 105a432d3; -[SCSpectaclesAppStatusCoordinator setNeedToDisplayBluetoothErrorAlert:] */

void FUN_105a432cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_3;
  return;
}



/* Entry: 105a432d4; end: 105a432db; -[SCSpectaclesAppStatusCoordinator deviceProductType] */

undefined8 FUN_105a432d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105a432dc; end: 105a432e3; -[SCSpectaclesAppStatusCoordinator setDeviceProductType:] */

void FUN_105a432dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 105a432e4; end: 105a432eb; -[SCSpectaclesAppStatusCoordinator hasSeenBluetoothErrorAlert] */

undefined1 FUN_105a432e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5d);
}



/* Entry: 105a432ec; end: 105a432f3; -[SCSpectaclesAppStatusCoordinator setHasSeenBluetoothErrorAlert:] */

void FUN_105a432ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5d) = param_3;
  return;
}



/* Entry: 105a432f4; end: 105a432fb; -[SCSpectaclesAppStatusCoordinator hasSeenFirmwareUpdateRequiredAlert] */

undefined1 FUN_105a432f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5e);
}



/* Entry: 105a432fc; end: 105a43303; -[SCSpectaclesAppStatusCoordinator setHasSeenFirmwareUpdateRequiredAlert:] */

void FUN_105a432fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5e) = param_3;
  return;
}



/* Entry: 105a43304; end: 105a4330b; -[SCSpectaclesAppStatusCoordinator needToDisplayUnpairedAlert] */

undefined1 FUN_105a43304(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5f);
}



/* Entry: 105a4330c; end: 105a43313; -[SCSpectaclesAppStatusCoordinator deviceStates] */

undefined8 FUN_105a4330c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105a43314; end: 105a43343; -[SCSpectaclesAppStatusCoordinator setDeviceStates:] */

void FUN_105a43314(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a43344; end: 105a4334b; -[SCSpectaclesAppStatusCoordinator deviceContentManifests] */

undefined8 FUN_105a43344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105a4334c; end: 105a4337b; -[SCSpectaclesAppStatusCoordinator setDeviceContentManifests:] */

void FUN_105a4334c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a4337c; end: 105a43423; -[SCSpectaclesAppStatusCoordinator .cxx_destruct] */

void FUN_105a4337c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a43424; end: 105a4342b; -[SCSpectaclesAppStatusCoordinatorDeviceState initWithState:] */

void FUN_105a43424(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_initWithState_firmwareUpdateProg_1125f09a8)
  ;
  return;
}



/* Entry: 105a4342c; end: 105a43483; -[SCSpectaclesAppStatusCoordinatorDeviceState initWithState:firmwareUpdateProgress:] */

void FUN_105a4342c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eb648;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 105a43484; end: 105a43507; -[SCSpectaclesAppStatusCoordinatorDeviceState isEqualToAppStatusCoordinatorDeviceState:] */

bool FUN_105a43484(float param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010c252440();
  lVar3 = param_4;
  func_0x00010c252440();
  if (lVar2 == lVar3) {
    func_0x00010bfb0b40(param_2);
    fVar4 = param_1;
    func_0x00010bfb0b40(param_4);
    bVar1 = param_1 == fVar4;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105a43508; end: 105a4357b; -[SCSpectaclesAppStatusCoordinatorDeviceState isEqual:] */

ulong FUN_105a43508(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071b40(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105a4357c; end: 105a435af; -[SCSpectaclesAppStatusCoordinatorDeviceState hash] */

ulong FUN_105a4357c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (long)*(float *)(param_1 + 8) | *(long *)(param_1 + 0x10) << 0x20;
  uVar1 = ~uVar1 + uVar1 * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 105a435b0; end: 105a435b7; -[SCSpectaclesAppStatusCoordinatorDeviceState state] */

undefined8 FUN_105a435b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a435b8; end: 105a435bf; -[SCSpectaclesAppStatusCoordinatorDeviceState firmwareUpdateProgress] */

undefined4 FUN_105a435b8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105a435c0; end: 105a4375f; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinatorBluetoothTurnedOff:] */

void FUN_105a435c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinatorBluetoothTurned_112672630;
  while (PTR_s_statusCoordinatorBluetoothTurned_112672630 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinatorBluetoothTurned_112672630;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c253030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinatorBluetoothTurned_112672630,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 105a43760; end: 105a4376b;  */

void FUN_105a43760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_statusCoordinatorBluetoothTurned_112672630,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a4376c; end: 105a4390b; -[SCSpectaclesAppStatusListenerAnnouncer statusCoordinatorBluetoothTurnedOn:] */

void FUN_105a4376c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_statusCoordinatorBluetoothTurned_112672638;
  while (PTR_s_statusCoordinatorBluetoothTurned_112672638 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      _objc_opt_respondsToSelector(uVar5,puVar1);
      if ((uVar5 & 1) != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(uVar5);
        _objc_release(param_3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR_s_statusCoordinatorBluetoothTurned_112672638;
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c253050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_statusCoordinatorBluetoothTurned_112672638,
             *(undefined8 *)(param_3 + 0x28));
  return;
}


